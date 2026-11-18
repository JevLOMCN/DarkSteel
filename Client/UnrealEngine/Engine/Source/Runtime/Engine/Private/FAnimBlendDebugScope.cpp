// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAnimBlendDebugScope @ 1473d4c90

FAnimBlendDebugScope * __thiscall
UE::Anim::FAnimBlendDebugScope::FAnimBlendDebugScope
          (FAnimBlendDebugScope *this,FAnimationBaseContext *param_1,int *param_2,int *param_3,
          FColor *param_4)

{
  this->_padding_ = (longlong)&___7FAnimBlendDebugScope_Anim_UE__6B_;
  this->BlendIndex = *param_2;
  this->NumBlends = *param_3;
  (this->DebugColor).field0_0x0 = param_4->field0_0x0;
  this->NodeId = param_1->CurrentNodeId;
  return this;
}

// GetTypeName @ 147405be0

FName __thiscall UE::Anim::FAnimBlendDebugScope::GetTypeName(FAnimBlendDebugScope *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

