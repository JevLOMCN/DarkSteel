// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// TQuat2<float> @ 143055540

TQuat2<float> * __thiscall TQuat2<float>::TQuat2<float>(TQuat2<float> *this,float param_1)

{
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  
  __libm_sse2_sincosf_();
  (this->Rot).field0_0x0._s_0.Y = extraout_XMM0_Da;
  (this->Rot).field0_0x0._s_0.X = extraout_XMM0_Db;
  return this;
}

// TQuat2<float> @ 143055580

TQuat2<float> * __thiscall TQuat2<float>::TQuat2<float>(TQuat2<float> *this)

{
  (this->Rot).field0_0x0 = (TVector2<float>_u_0)0x3f800000;
  return this;
}

