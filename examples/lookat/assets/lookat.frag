#version 410

in vec4 fragColor;
out vec4 outColor;

void main() {
  if (!gl_FrontFacing) {
    outColor = fragColor * 1;
  } else {
    outColor = fragColor * 0.5;
  }
}