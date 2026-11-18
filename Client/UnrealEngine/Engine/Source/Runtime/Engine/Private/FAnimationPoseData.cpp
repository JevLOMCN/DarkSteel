// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FAnimationPoseData @ 1473d5550

FAnimationPoseData * __thiscall
FAnimationPoseData::FAnimationPoseData
          (FAnimationPoseData *this,FCompactPose *param_1,FBlendedCurve *param_2,
          FStackAttributeContainer *param_3)

{
  this->Pose = param_1;
  this->Curve = param_2;
  this->Attributes = param_3;
  return this;
}

// FAnimationPoseData @ 1473d5570

FAnimationPoseData * __thiscall
FAnimationPoseData::FAnimationPoseData(FAnimationPoseData *this,FPoseContext *param_1)

{
  this->Pose = &param_1->Pose;
  this->Curve = &param_1->Curve;
  this->Attributes = &param_1->CustomAttributes;
  return this;
}

// FAnimationPoseData @ 1473d55a0

FAnimationPoseData * __thiscall
FAnimationPoseData::FAnimationPoseData(FAnimationPoseData *this,FSlotEvaluationPose *param_1)

{
  this->Pose = &param_1->Pose;
  this->Curve = &param_1->Curve;
  this->Attributes = &param_1->Attributes;
  return this;
}

// GetAttributes @ 147400230

FStackAttributeContainer * __thiscall FAnimationPoseData::GetAttributes(FAnimationPoseData *this)

{
  return this->Attributes;
}

// GetAttributes @ 147400240

FStackAttributeContainer * __thiscall FAnimationPoseData::GetAttributes(FAnimationPoseData *this)

{
  return this->Attributes;
}

// GetCurve @ 147401550

FBlendedCurve * __thiscall FAnimationPoseData::GetCurve(FAnimationPoseData *this)

{
  return this->Curve;
}

// GetCurve @ 147401560

FBlendedCurve * __thiscall FAnimationPoseData::GetCurve(FAnimationPoseData *this)

{
  return this->Curve;
}

// GetPose @ 147403330

FCompactPose * __thiscall FAnimationPoseData::GetPose(FAnimationPoseData *this)

{
  return this->Pose;
}

// GetPose @ 147403340

FCompactPose * __thiscall FAnimationPoseData::GetPose(FAnimationPoseData *this)

{
  return this->Pose;
}

