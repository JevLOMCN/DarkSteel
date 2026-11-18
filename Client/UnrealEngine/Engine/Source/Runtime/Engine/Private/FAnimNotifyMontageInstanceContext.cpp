// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAnimNotifyMontageInstanceContext @ 1473d5000

FAnimNotifyMontageInstanceContext * __thiscall
UE::Anim::FAnimNotifyMontageInstanceContext::FAnimNotifyMontageInstanceContext
          (FAnimNotifyMontageInstanceContext *this,int param_1)

{
  this->MontageInstanceID = param_1;
  this->_padding_ = (longlong)&___7FAnimNotifyMontageInstanceContext_Anim_UE__6B_;
  return this;
}

// GetTypeName @ 147405c00

FName __thiscall
UE::Anim::FAnimNotifyMontageInstanceContext::GetTypeName(FAnimNotifyMontageInstanceContext *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

