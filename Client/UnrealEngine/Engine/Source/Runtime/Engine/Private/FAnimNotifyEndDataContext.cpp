// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAnimNotifyEndDataContext @ 1474b1980

FAnimNotifyEndDataContext * __thiscall
UE::Anim::FAnimNotifyEndDataContext::FAnimNotifyEndDataContext
          (FAnimNotifyEndDataContext *this,bool param_1)

{
  this->bReachedEnd = param_1;
  this->_padding_ = (longlong)&___7FAnimNotifyEndDataContext_Anim_UE__6B_;
  return this;
}

// GetTypeName @ 1474e0410

FName __thiscall UE::Anim::FAnimNotifyEndDataContext::GetTypeName(FAnimNotifyEndDataContext *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

