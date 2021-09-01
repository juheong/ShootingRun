// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "CurvedShader" {
	Properties{
		_Color("Color", COLOR) = (1, 1, 1, 1)
		_Transparency("Transparency", Range(0,1)) = 1.0
		_CamColorDistModifier("Distance", Float) = 1.0
		_MainTex("Base (RGB)", 2D) = "white" {}
		_QOffset("Offset", Vector) = (0,0,0,0)
		_Dist("Distance", Float) = 100.0
	}
		SubShader{

		Tags{ "Queue" = "Geometry" "RenderType" = "Opaque" }
		ZWrite on

		Pass
			{
				// Lighting Off

				CGPROGRAM

				#pragma vertex vert
				#pragma fragment frag
				#include "UnityCG.cginc"
				#include "Common.cginc"

				#pragma multi_compile DITHER_ON DITHER_OFF 
				#pragma multi_compile CURVED_ON CURVED_OFF		

				//#define GLOBAL_CURVED_ON

				half4 _Color;
				sampler2D _MainTex;
				float _Transparency;
				float _CamColorDistModifier;
				float4 _QOffset;
				float _Dist;
				uniform float4 _MainTex_ST;
				uniform float3 _CameraPosition;

				struct v2f {
					float4 pos : SV_POSITION;
					float2 uv : TEXCOORD0;
					float camDistance : FLOAT;
					float4 screenPos:TEXCOORD1;
				};

				v2f vert(appdata_base v)
				{
					v2f o;
					UNITY_INITIALIZE_OUTPUT(v2f, o);
					o.pos = UnityObjectToClipPos(v.vertex);

					#ifdef GLOBAL_CURVED_ON 
						#if CURVED_ON
						float4 vPos = mul(UNITY_MATRIX_MV, v.vertex);
						float zOff = vPos.z / _Dist;
						vPos += _QOffset*zOff*zOff;
					
						o.pos = mul(UNITY_MATRIX_P, vPos);
						#endif
					#else
					o.pos = UnityObjectToClipPos(v.vertex);
					#endif

					o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);
					
					// Calculate distance
					float dist0 = length(o.pos.xyz - _CameraPosition * float3(1.0f, 1.0f, 1.0f)) * .025f;// *0.1f;
					dist0 *= -1; dist0 += 2.0f;
					o.camDistance = pow(dist0, 2.8f)*0.2f;

					o.screenPos = ComputeScreenPos(o.pos);

					return o;
				}

				half4 frag(v2f i) : COLOR
				{
					half4 color = tex2D(_MainTex, i.uv) * _Color;
					//if (color.a < 0.4f)
					//	discard;

					#if DITHER_ON
					// Screen-door transparency: Discard pixel if below threshold.
					float4x4 thresholdMatrix =
					{ 1.0 / 17.0,  9.0 / 17.0,  3.0 / 17.0, 11.0 / 17.0,
						13.0 / 17.0,  5.0 / 17.0, 15.0 / 17.0,  7.0 / 17.0,
						4.0 / 17.0, 12.0 / 17.0,  2.0 / 17.0, 10.0 / 17.0,
						16.0 / 17.0,  8.0 / 17.0, 14.0 / 17.0,  6.0 / 17.0
					};
					float4x4 _RowAccess = { 1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1 };
					float2 pos = i.screenPos.xy / i.screenPos.w;
					pos *= _ScreenParams.xy; // pixel position
					clip(_Transparency * _Color.a - thresholdMatrix[fmod(pos.x, 4)] * _RowAccess[fmod(pos.y, 4)]);
					#endif

					return color *_Color * float4(float3(i.camDistance, i.camDistance, i.camDistance) *_CamColorDistModifier, 1.0f);
				}
				ENDCG
			}
		}
		CustomEditor "CurvedMaterialEditor"
		FallBack "Mobile/Unlit"
}