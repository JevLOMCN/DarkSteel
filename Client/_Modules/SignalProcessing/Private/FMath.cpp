// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// GetMappedRangeValueClamped<float,float> @ 144520d00

float __cdecl
FMath::GetMappedRangeValueClamped<float,float>
          (TVector2<float> *param_1,TVector2<float> *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = fVar1 - (param_1->field0_0x0)._s_0.X;
  if (__real_322bcc77 < (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = (param_3 - (param_1->field0_0x0)._s_0.X) / fVar2;
  }
  else {
    fVar2 = __real_3f800000;
    if (param_3 < fVar1) {
      fVar2 = 0.0;
    }
  }
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2 * ((param_2->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.X) +
         (param_2->field0_0x0)._s_0.X;
}

