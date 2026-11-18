// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 2

// CalculateDirectivity @ 14f076b70

float __cdecl vraudio::CalculateDirectivity(float param_1,float param_2,SphericalAngle *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = __real_3f800000;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (__real_34000000 <= param_1) {
    fVar1 = cosf(param_3->elevation_);
    fVar2 = cosf(param_3->azimuth_);
    if (param_2 <= fVar3) {
      param_2 = fVar3;
    }
    fVar3 = powf((float)((uint)(fVar1 * fVar2 * param_1 + (fVar3 - param_1)) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff),param_2);
  }
  return fVar3;
}

// CalculateOcclusionFilterCoefficient @ 14f076c20

float __cdecl vraudio::CalculateOcclusionFilterCoefficient(float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = 4;
  fVar2 = param_2 + __real_3f800000;
  fVar3 = __real_3f800000;
  while( true ) {
    if ((uVar1 & 1) != 0) {
      fVar3 = fVar3 * fVar2;
    }
    uVar1 = (int)uVar1 >> 1;
    if (uVar1 == 0) break;
    fVar2 = fVar2 * fVar2;
  }
  fVar3 = __real_3f800000 - param_1 / fVar3;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return fVar3;
}

