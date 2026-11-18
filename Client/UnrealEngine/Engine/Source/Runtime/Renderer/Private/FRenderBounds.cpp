// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ComputeSquaredDistanceToPoint @ 144e805d0

float __thiscall
FRenderBounds::ComputeSquaredDistanceToPoint(FRenderBounds *this,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (this->Max).field0_0x0._s_0.Z;
  fVar2 = (this->Max).field0_0x0._s_0.Y;
  fVar1 = (this->Max).field0_0x0._s_0.X;
  fVar3 = (float)((uint)((param_1->field0_0x0)._s_0.Z -
                        (fVar3 + (this->Min).field0_0x0._s_0.Z) * __real_3f000000) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) -
          (fVar3 - (this->Min).field0_0x0._s_0.Z) * __real_3f000000;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar2 = (float)((uint)((param_1->field0_0x0)._s_0.Y -
                        (fVar2 + (this->Min).field0_0x0._s_0.Y) * __real_3f000000) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) -
          (fVar2 - (this->Min).field0_0x0._s_0.Y) * __real_3f000000;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar1 = (float)((uint)((param_1->field0_0x0)._s_0.X -
                        (fVar1 + (this->Min).field0_0x0._s_0.X) * __real_3f000000) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) -
          (fVar1 - (this->Min).field0_0x0._s_0.X) * __real_3f000000;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
}

