// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FAnimationEvaluationContext @ 147929170

FAnimationEvaluationContext * __thiscall
FAnimationEvaluationContext::FAnimationEvaluationContext(FAnimationEvaluationContext *this)

{
  (this->ComponentSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentSpaceTransforms).ArrayNum = 0;
  (this->ComponentSpaceTransforms).ArrayMax = 0;
  (this->BoneSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneSpaceTransforms).ArrayNum = 0;
  (this->BoneSpaceTransforms).ArrayMax = 0;
  (this->CachedComponentSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedComponentSpaceTransforms).ArrayNum = 0;
  (this->CachedComponentSpaceTransforms).ArrayMax = 0;
  (this->CachedBoneSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedBoneSpaceTransforms).ArrayNum = 0;
  (this->CachedBoneSpaceTransforms).ArrayMax = 0;
  *(undefined8 *)&this->Curve = 0;
  *(undefined8 *)&(this->Curve).field_0x8 = 0;
  (this->Curve).field_0x10 = 0;
  *(undefined8 *)&(this->Curve).field_0x18 = 0;
  *(undefined8 *)&this->CachedCurve = 0;
  *(undefined8 *)&(this->CachedCurve).field_0x8 = 0;
  (this->CachedCurve).field_0x10 = 0;
  *(undefined8 *)&(this->CachedCurve).field_0x18 = 0;
  *(undefined8 *)&this->CustomAttributes = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x10 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x18 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x20 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x28 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x30 = 0;
  *(undefined8 *)&(this->CustomAttributes).field_0x38 = 0;
  *(undefined8 *)&this->CachedCustomAttributes = 0;
  *(undefined8 *)&(this->CachedCustomAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->CachedCustomAttributes).field_0x10 = 0;
  *(undefined8 *)&(this->CachedCustomAttributes).field_0x18 = 0;
  *(undefined8 *)&(this->CachedCustomAttributes).field_0x20 = 0;
  *(undefined8 *)&(this->CachedCustomAttributes).field_0x28 = 0;
  *(undefined8 *)&(this->CachedCustomAttributes).field_0x30 = 0;
  *(undefined8 *)&(this->CachedCustomAttributes).field_0x38 = 0;
  this->AnimInstance = (UAnimInstance *)0x0;
  this->PostProcessAnimInstance = (UAnimInstance *)0x0;
  this->SkeletalMesh = (USkeletalMesh *)0x0;
  return this;
}

