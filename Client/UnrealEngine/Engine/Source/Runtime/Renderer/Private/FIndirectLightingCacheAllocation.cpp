// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FIndirectLightingCacheAllocation @ 144afbf00

FIndirectLightingCacheAllocation * __thiscall
FIndirectLightingCacheAllocation::FIndirectLightingCacheAllocation
          (FIndirectLightingCacheAllocation *this)

{
  TVector4<float> *pTVar1;
  longlong lVar2;
  
  *(undefined8 *)&(this->MinTexel).field0_0x0 = 0xffffffffffffffff;
  pTVar1 = this->SingleSamplePacked0;
  (this->MinTexel).field0_0x0._s_0.Z = -1;
  (this->Add).field0_0x0._s_0.X = 0.0;
  (this->Add).field0_0x0._s_0.Y = 0.0;
  (this->Add).field0_0x0._s_0.Z = 0.0;
  (this->Scale).field0_0x0._s_0.X = 0.0;
  (this->Scale).field0_0x0._s_0.Y = 0.0;
  (this->Scale).field0_0x0._s_0.Z = 0.0;
  (this->MinUV).field0_0x0._s_0.X = 0.0;
  (this->MinUV).field0_0x0._s_0.Y = 0.0;
  (this->MinUV).field0_0x0._s_0.Z = 0.0;
  (this->MaxUV).field0_0x0._s_0.X = 0.0;
  (this->MaxUV).field0_0x0._s_0.Y = 0.0;
  (this->MaxUV).field0_0x0._s_0.Z = 0.0;
  (this->TargetPosition).field0_0x0._s_0.X = 0.0;
  (this->TargetPosition).field0_0x0._s_0.Y = 0.0;
  (this->TargetPosition).field0_0x0._s_0.Z = 0.0;
  this->AllocationTexelSize = 0;
  *(undefined8 *)&this->TargetSamplePacked0[0].field0_0x0 = 0;
  this->TargetSamplePacked0[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&this->TargetSamplePacked0[0].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->TargetSamplePacked0[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->TargetSamplePacked0[1].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->TargetSamplePacked0[2].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->TargetSamplePacked0[2].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->TargetSamplePacked1[0].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->TargetSamplePacked1[0].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->TargetSamplePacked1[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->TargetSamplePacked1[1].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->TargetSamplePacked1[2].field0_0x0 + 4) = 0;
  this->TargetSamplePacked1[2].field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->TargetSkyBentNormal).field0_0x0 = 0;
  (this->SingleSamplePosition).field0_0x0._s_0.X = 0.0;
  (this->SingleSamplePosition).field0_0x0._s_0.Y = 0.0;
  (this->SingleSamplePosition).field0_0x0._s_0.Z = 0.0;
  (this->TargetSkyBentNormal).field0_0x0._s_0.Z = 1.0;
  (this->TargetSkyBentNormal).field0_0x0._s_0.W = 1.0;
  this->TargetDirectionalShadowing = 1.0;
  *(undefined8 *)&pTVar1->field0_0x0 = 0;
  this->SingleSamplePacked0[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&this->SingleSamplePacked0[0].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->SingleSamplePacked0[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->SingleSamplePacked0[1].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->SingleSamplePacked0[2].field0_0x0 + 4) = 0;
  this->SingleSamplePacked0[2].field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&this->SingleSamplePacked1[0].field0_0x0 = 0;
  this->SingleSamplePacked1[0].field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&this->SingleSamplePacked1[0].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->SingleSamplePacked1[1].field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&this->SingleSamplePacked1[1].field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&this->SingleSamplePacked1[2].field0_0x0 + 4) = 0;
  this->SingleSamplePacked1[2].field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&(this->CurrentSkyBentNormal).field0_0x0 = 0;
  lVar2 = 3;
  this->CurrentDirectionalShadowing = 1.0;
  (this->CurrentSkyBentNormal).field0_0x0._s_0.Z = 1.0;
  (this->CurrentSkyBentNormal).field0_0x0._s_0.W = 1.0;
  this->bHasEverUpdatedSingleSample = false;
  this->bPointSample = true;
  this->bIsDirty = false;
  this->bUnbuiltPreview = false;
  do {
    *(undefined8 *)&pTVar1[-0xb].field0_0x0 = 0;
    *(undefined8 *)((longlong)&pTVar1[-0xb].field0_0x0 + 8) = 0;
    *(undefined8 *)&pTVar1->field0_0x0 = 0;
    *(undefined8 *)((longlong)&pTVar1->field0_0x0 + 8) = 0;
    *(undefined8 *)&pTVar1[-8].field0_0x0 = 0;
    *(undefined8 *)((longlong)&pTVar1[-8].field0_0x0 + 8) = 0;
    *(undefined8 *)&pTVar1[3].field0_0x0 = 0;
    *(undefined8 *)((longlong)&pTVar1[3].field0_0x0 + 8) = 0;
    pTVar1 = pTVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined8 *)&(this->TargetSamplePacked2).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->TargetSamplePacked2).field0_0x0 + 8) = 0;
  *(undefined8 *)&(this->SingleSamplePacked2).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->SingleSamplePacked2).field0_0x0 + 8) = 0;
  return this;
}

