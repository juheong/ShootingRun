// Simplified Additive Particle shader. Differences from regular Additive Particle one:
// - no Tint color
// - no Smooth particle support
// - no AlphaTest
// - no ColorMask

Shader "EffectCore/Mobile/Particles/Additive-ZTestAlways" {
Properties {
	_MainTex ("Particle Texture", 2D) = "white" {}
	_QOffset ("Offset", Vector) = (0,0,0,0)
	_Dist ("Distance", Float) = 100.0
}

Category {
	Tags { "Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent" }
	Blend SrcAlpha One
	Cull Off Lighting Off ZWrite Off ZTest Always Fog { Color (0,0,0,0) }
	
	BindChannels {
		Bind "Color", color
		Bind "Vertex", vertex
		Bind "TexCoord", texcoord
	}
	
	SubShader {
		Pass {
			CGPROGRAM
				#pragma vertex vert
				#pragma fragment frag
				#include "UnityCG.cginc"

				sampler2D _MainTex;
				float4 _QOffset;
				float _Dist;

				struct appdata_t 
				{
					float4 vertex : POSITION;
					fixed4 color : COLOR;
					float4 texcoord : TEXCOORD0;
					UNITY_VERTEX_INPUT_INSTANCE_ID
				};

				struct v2f {
					float4 pos : SV_POSITION;
					float4 color : COLOR;
					float4 uv : TEXCOORD0;
				};

				v2f vert (appdata_t v)
				{
					v2f o;
					float4 vPos = mul(UNITY_MATRIX_MV, v.vertex);
					float zOff = vPos.z/_Dist;
					vPos += _QOffset*zOff*zOff;
					o.pos = mul (UNITY_MATRIX_P, vPos);
					o.color = v.color;
					o.uv = v.texcoord;										
					return o;
				}

				half4 frag (v2f i) : COLOR
				{
					half4 col = i.color * tex2D(_MainTex, i.uv.xy);
					return col;
				}				
				ENDCG
			SetTexture [_MainTex] {
				combine texture * primary
			}
		}
	}
}
}