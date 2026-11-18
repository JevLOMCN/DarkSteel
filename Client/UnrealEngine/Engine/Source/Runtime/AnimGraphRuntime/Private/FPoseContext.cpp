// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// operator= @ 14640d760

FPoseContext * __thiscall FPoseContext::operator=(FPoseContext *this,FPoseContext *param_1)

{
  if ((FAnimInstanceProxy *)this->_padding_ != (FAnimInstanceProxy *)param_1->_padding_) {
    InitializeImpl(this,(FAnimInstanceProxy *)this->_padding_);
  }
  TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
            ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)&this->Pose,
             (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)&param_1->Pose);
  *(undefined8 *)&(this->Pose).field_0x10 = *(undefined8 *)&(param_1->Pose).field_0x10;
  FBlendedCurve::operator=(&this->Curve,&param_1->Curve);
  UE::Anim::FStackAttributeContainer::operator=(&this->CustomAttributes,&param_1->CustomAttributes);
  this->bExpectsAdditivePose = param_1->bExpectsAdditivePose;
  return this;
}

