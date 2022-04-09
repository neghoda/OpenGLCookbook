#version 430

in vec4 Position;
in vec3 Normal;
in vec2 TexCoord;

layout (binding = 0) uniform sampler2D BaseTex;
layout (binding = 1) uniform sampler2D AlphaTex;

struct LightInfo {
	vec4 Postion;
	vec3 Intensity;
};
uniform LightInfo Light;

struct MaterialInfo {
	vec3 Ka;
	vec3 Kd;
	vec3 Ks;
	float Shininess;
};
uniform MaterialInfo Material;

layout (location = 0) out vec4 FragColor;

vec3 phongModel(vec4 pos, vec3 norm) {
	vec3 s = normalize(vec3(Light.Postion - pos));
	vec3 v = normalize(-pos.xyz);
	vec3 r = reflect(-s, norm);
	vec3 ambient = Light.Intensity * Material.Ka;
	float sDotN = max(dot(s,norm), 0.0);
	vec3 diffuse = Light.Intensity * Material.Kd * sDotN;
	vec3 spec = vec3(0.0);
	if(sDotN > 0.0) 
		spec = Light.Intensity * Material.Ks * pow(max(dot(r,v), 0.0), Material.Shininess);
	
	return ambient + diffuse + spec;
}

void main() {
	vec4 baseColor = texture(BaseTex, TexCoord);
	vec4 alphaMap = texture(AlphaTex, TexCoord);

	if(alphaMap.a < 0.15)
		discard;
	else {
	    if(gl_FrontFacing) {
			FragColor = vec4(phongModel(Position, Normal), 1.0) * baseColor;
		} else {
			FragColor = vec4(phongModel(Position, -Normal), 1.0) * baseColor;
		}
		
	}
}
