// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// InternalUVToExternalUV @ 14c9006e0

TVector2<float> __cdecl UDIMClassifierLocals::InternalUVToExternalUV(TVector2<float> *param_1)

{
  float *in_RDX;
  float fVar1;
  
  fVar1 = __real_3f800000 - in_RDX[1];
  (param_1->field0_0x0)._s_0.X = *in_RDX;
  (param_1->field0_0x0)._s_0.Y = fVar1;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

