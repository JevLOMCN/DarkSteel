// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FPoseContext @ 1474b3470

FPoseContext * __thiscall
FPoseContext::FPoseContext(FPoseContext *this,FPoseContext *param_1,bool param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  this->_padding_ = lVar1;
  bVar2 = false;
  this->_padding_ = 0;
  *(undefined8 *)&this->Pose = 0;
  *(undefined8 *)&(this->Pose).field_0x8 = 0;
  *(undefined8 *)&(this->Pose).field_0x10 = 0;
  *(undefined8 *)&this->Curve = 0;
  *(undefined8 *)&(this->Curve).field_0x8 = 0;
  (this->Curve).field_0x10 = 0;
  *(undefined8 *)&(this->Curve).field_0x18 = 0;
  *(undefined8 *)&this->CustomAttributes = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x10 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x18 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x20 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x28 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x30 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x38 = 0;
  *(undefined1 *)&this->_padding_ = 1;
  if ((param_1->bExpectsAdditivePose != false) || (param_2)) {
    bVar2 = true;
  }
  this->bExpectsAdditivePose = bVar2;
  InitializeImpl(this,(FAnimInstanceProxy *)param_1->_padding_);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  return this;
}

// InitializeImpl @ 1474e8be0

void __thiscall FPoseContext::InitializeImpl(FPoseContext *this,FAnimInstanceProxy *param_1)

{
  FBoneContainer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)param_1;
  if ((param_1->RequiredBones).Object == (FBoneContainer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->RequiredBones).Object;
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)&this->Pose,pFVar1);
  FBlendedCurve::InitFrom(&this->Curve,pFVar1);
  return;
}

