// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 30

// FIndirectLightingCache @ 144afbe00

FIndirectLightingCache * __thiscall
FIndirectLightingCache::FIndirectLightingCache(FIndirectLightingCache *this,Type param_1)

{
  FRenderResource::FRenderResource((FRenderResource *)this,param_1);
  this->bUpdateAllCacheEntries = true;
  this->_padding_ = (longlong)&___7FIndirectLightingCache__6B_;
  (this->Texture0).Reference = (IPooledRenderTarget *)0x0;
  (this->Texture1).Reference = (IPooledRenderTarget *)0x0;
  (this->Texture2).Reference = (IPooledRenderTarget *)0x0;
  *(undefined8 *)&this->VolumeBlocks = 0;
  *(undefined8 *)&(this->VolumeBlocks).field_0x8 = 0;
  *(undefined8 *)&(this->VolumeBlocks).field_0x20 = 0;
  *(undefined4 *)&(this->VolumeBlocks).field_0x28 = 0;
  *(undefined4 *)&(this->VolumeBlocks).field_0x2c = 0x80;
  *(undefined4 *)&(this->VolumeBlocks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VolumeBlocks).field_0x34 = 0;
  *(undefined8 *)&(this->VolumeBlocks).field_0x40 = 0;
  *(undefined4 *)&(this->VolumeBlocks).field_0x48 = 0;
  FTextureLayout3d::FTextureLayout3d
            (&this->BlockAllocator,0,0,0,GLightingCacheDimension,GLightingCacheDimension,
             GLightingCacheDimension,false,false,true);
  *(undefined8 *)&this->PrimitiveAllocations = 0;
  *(undefined8 *)&(this->PrimitiveAllocations).field_0x8 = 0;
  *(undefined8 *)&(this->PrimitiveAllocations).field_0x20 = 0;
  *(undefined4 *)&(this->PrimitiveAllocations).field_0x28 = 0;
  *(undefined4 *)&(this->PrimitiveAllocations).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimitiveAllocations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimitiveAllocations).field_0x34 = 0;
  *(undefined8 *)&(this->PrimitiveAllocations).field_0x40 = 0;
  *(undefined4 *)&(this->PrimitiveAllocations).field_0x48 = 0;
  this->NextPointId = GLightingCacheDimension + 1;
  this->CacheSize = GLightingCacheDimension;
  return this;
}

// AllocateBlock @ 144b06570

bool __thiscall
FIndirectLightingCache::AllocateBlock
          (FIndirectLightingCache *this,int param_1,TIntVector3<int> *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  
  piVar1 = &(param_2->field0_0x0)._s_0.Z;
  piVar3 = &(param_2->field0_0x0)._s_0.Y;
  if (param_1 == 1) {
    (param_2->field0_0x0)._s_0.X = this->NextPointId;
    *piVar3 = 0;
    *piVar1 = 0;
    this->NextPointId = this->NextPointId + 1;
    return true;
  }
  bVar2 = FTextureLayout3d::AddElement
                    (&this->BlockAllocator,(uint *)param_2,(uint *)piVar3,(uint *)piVar1,param_1,
                     param_1,param_1);
  return bVar2;
}

// AllocatePrimitive @ 144b065d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FIndirectLightingCacheAllocation * __thiscall
FIndirectLightingCache::AllocatePrimitive
          (FIndirectLightingCache *this,FPrimitiveSceneInfo *param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  TPairInitializer<FPrimitiveComponentId_const_&,FIndirectLightingCacheAllocation_*_&&> local_res8;
  FPrimitiveComponentId *local_18;
  FIndirectLightingCacheAllocation ***local_10;
  
  if (((param_1->Proxy->IndirectLightingCacheQuality).Value == '\x01') || (param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar1 = GLightingCacheMovableObjectAllocationSize;
  if (bVar2 != false) {
    iVar1 = 1;
  }
  local_res8.Value =
       (FIndirectLightingCacheAllocation **)
       CreateAllocation(this,iVar1,&param_1->Proxy->Bounds,bVar2,param_2);
  local_18 = &param_1->PrimitiveComponentId;
  local_10 = &local_res8.Value;
  TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FPrimitiveComponentId_const_&,FIndirectLightingCacheAllocation_*_&&>_>
            ((TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
              *)&this->PrimitiveAllocations,&local_res8,(bool *)&local_18);
  return *(FIndirectLightingCacheAllocation **)
          (*(longlong *)&(this->PrimitiveAllocations).field_0x0 + 8 +
          (longlong)(int)local_res8.Key * 0x18);
}

// CalculateBlockPositionAndSize @ 144b0a1d0

void __thiscall
FIndirectLightingCache::CalculateBlockPositionAndSize
          (FIndirectLightingCache *this,TBoxSphereBounds<double,double> *param_1,int param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  double dVar20;
  
  dVar7 = __real_3ff0000000000000;
  dVar1 = (param_1->BoxExtent).field0_0x0._s_0.Y;
  iVar8 = 5;
  if (2 < param_2) {
    iVar8 = param_2;
  }
  dVar5 = __real_3ff0000000000000 / (double)LogEBoundSizeRoundUpBase;
  dVar20 = __real_3ff0000000000000 / (double)(iVar8 + -2);
  dVar18 = (param_1->BoxExtent).field0_0x0._s_0.X;
  dVar11 = log(dVar18 + dVar18);
  fVar10 = BoundSizeRoundUpBase;
  dVar18 = dVar11 * dVar5;
  if (dVar11 * dVar5 <= dVar7) {
    dVar18 = dVar7;
  }
  fVar9 = powf(BoundSizeRoundUpBase,(float)((longlong)dVar18 + 1));
  dVar18 = (double)fVar9 * dVar20;
  dVar12 = log(dVar1 + dVar1);
  dVar11 = dVar12 * dVar5;
  if (dVar12 * dVar5 <= dVar7) {
    dVar11 = dVar7;
  }
  fVar9 = powf(fVar10,(float)((longlong)dVar11 + 1));
  dVar11 = (param_1->BoxExtent).field0_0x0._s_0.Z;
  dVar12 = (double)fVar9 * dVar20;
  dVar13 = log(dVar11 + dVar11);
  dVar11 = dVar13 * dVar5;
  if (dVar13 * dVar5 <= dVar7) {
    dVar11 = dVar7;
  }
  fVar10 = powf(fVar10,(float)((longlong)dVar11 + 1));
  dVar5 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar11 = (param_1->Origin).field0_0x0._s_0.X;
  auVar14._0_8_ = dVar5 - dVar1;
  auVar14._8_8_ = 0;
  dVar20 = (double)fVar10 * dVar20;
  dVar1 = (param_1->Origin).field0_0x0._s_0.Z;
  auVar17._0_8_ = dVar7 / dVar18;
  auVar17._8_8_ = 0;
  if (param_2 < 3) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = __real_3fe0000000000000;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (dVar18 * __real_3fe0000000000000 + dVar11) * auVar17._0_8_;
    auVar14 = roundpd(in_XMM4,auVar19,1);
    dVar18 = auVar14._0_8_ * dVar18;
    dVar13 = 0.0;
    dVar11 = 0.0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (dVar12 * __real_3fe0000000000000 + dVar5) * (dVar7 / dVar12);
    auVar14 = roundpd(auVar17,auVar2,1);
    dVar12 = auVar14._0_8_ * dVar12;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (dVar20 * __real_3fe0000000000000 + dVar1) * (dVar7 / dVar20);
    auVar14 = roundpd(auVar15,auVar3,1);
    dVar20 = auVar14._0_8_ * dVar20;
    dVar1 = 0.0;
  }
  else {
    auVar16._0_8_ = auVar17._0_8_ * (dVar11 - (param_1->BoxExtent).field0_0x0._s_0.X);
    auVar16._8_8_ = 0;
    auVar19 = roundpd(in_XMM4,auVar16,1);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (dVar7 / dVar12) * auVar14._0_8_;
    auVar17 = roundpd(auVar16,auVar4,1);
    dVar11 = (double)param_2;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (dVar7 / dVar20) * (dVar1 - (param_1->BoxExtent).field0_0x0._s_0.Z);
    auVar14 = roundpd(auVar14,auVar6,1);
    dVar1 = dVar11 * dVar20;
    dVar13 = dVar11 * dVar12;
    dVar11 = dVar11 * dVar18;
    dVar20 = auVar14._0_8_ * dVar20 - dVar20 * __real_3fe0000000000000;
    dVar12 = auVar17._0_8_ * dVar12 - dVar12 * __real_3fe0000000000000;
    dVar18 = auVar19._0_8_ * dVar18 - dVar18 * __real_3fe0000000000000;
  }
  (param_3->field0_0x0)._s_0.X = dVar18;
  (param_3->field0_0x0)._s_0.Y = dVar12;
  (param_3->field0_0x0)._s_0.Z = dVar20;
  (param_4->field0_0x0)._s_0.X = dVar11;
  (param_4->field0_0x0)._s_0.Y = dVar13;
  (param_4->field0_0x0)._s_0.Z = dVar1;
  return;
}

// CalculateBlockScaleAndAdd @ 144b0a4b0

void __thiscall
FIndirectLightingCache::CalculateBlockScaleAndAdd
          (FIndirectLightingCache *this,TIntVector3<int> *param_1,int param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,
          TVector<double> *param_6,TVector<double> *param_7,TVector<double> *param_8)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  
  fVar6 = __real_3f000000;
  fVar10 = __real_3f800000 / (float)this->CacheSize;
  dVar4 = (double)((float)(param_1->field0_0x0)._s_0.Y * fVar10);
  dVar3 = (double)((float)(param_1->field0_0x0)._s_0.X * fVar10);
  dVar5 = (double)((float)(param_1->field0_0x0)._s_0.Z * fVar10);
  dVar9 = (double)(fVar10 * __real_3f000000);
  (param_7->field0_0x0)._s_0.X = dVar9 + dVar3;
  (param_7->field0_0x0)._s_0.Y = dVar9 + dVar4;
  (param_7->field0_0x0)._s_0.Z = dVar9 + dVar5;
  dVar9 = __real_3f847ae140000000;
  if (param_2 < 3) {
    (param_5->field0_0x0)._s_0.X = 0.0;
    (param_5->field0_0x0)._s_0.Y = 0.0;
    (param_5->field0_0x0)._s_0.Z = 0.0;
    dVar9 = (double)(fVar6 / (float)this->CacheSize);
    (param_6->field0_0x0)._s_0.X = dVar9 + dVar3;
    (param_6->field0_0x0)._s_0.Y = dVar9 + dVar4;
    (param_6->field0_0x0)._s_0.Z = dVar9 + dVar5;
    dVar3 = (param_7->field0_0x0)._s_0.Y;
    (param_8->field0_0x0)._s_0.X = (param_7->field0_0x0)._s_0.X;
    (param_8->field0_0x0)._s_0.Y = dVar3;
    (param_8->field0_0x0)._s_0.Z = (param_7->field0_0x0)._s_0.Z;
  }
  else {
    iVar1 = this->CacheSize;
    dVar11 = (param_4->field0_0x0)._s_0.X;
    if (dVar11 == 0.0) {
      (param_4->field0_0x0)._s_0.X = 0.009999999776482582;
      dVar11 = dVar9;
    }
    dVar7 = (param_4->field0_0x0)._s_0.Y;
    if (dVar7 == 0.0) {
      (param_4->field0_0x0)._s_0.Y = 0.009999999776482582;
      dVar7 = dVar9;
    }
    dVar8 = (param_4->field0_0x0)._s_0.Z;
    if (dVar8 == 0.0) {
      (param_4->field0_0x0)._s_0.Z = 0.009999999776482582;
      dVar8 = dVar9;
    }
    dVar2 = (double)((float)param_2 / (float)iVar1);
    (param_5->field0_0x0)._s_0.X = dVar2 / dVar11;
    (param_5->field0_0x0)._s_0.Y = dVar2 / dVar7;
    (param_5->field0_0x0)._s_0.Z = dVar2 / dVar8;
    dVar9 = (param_3->field0_0x0)._s_0.Y;
    dVar11 = (param_3->field0_0x0)._s_0.Z;
    dVar7 = __real_3ff0000000000000 / (param_4->field0_0x0)._s_0.Y;
    dVar8 = __real_3ff0000000000000 / (param_4->field0_0x0)._s_0.Z;
    (param_6->field0_0x0)._s_0.X =
         dVar3 - dVar2 * (param_3->field0_0x0)._s_0.X *
                 (__real_3ff0000000000000 / (param_4->field0_0x0)._s_0.X);
    (param_6->field0_0x0)._s_0.Y = dVar4 - dVar2 * dVar9 * dVar7;
    (param_6->field0_0x0)._s_0.Z = dVar5 - dVar2 * dVar11 * dVar8;
    dVar9 = (double)(fVar6 / (float)this->CacheSize);
    (param_8->field0_0x0)._s_0.X = (dVar2 + dVar3) - dVar9;
    (param_8->field0_0x0)._s_0.Y = (dVar2 + dVar4) - dVar9;
    (param_8->field0_0x0)._s_0.Z = (dVar2 + dVar5) - dVar9;
  }
  return;
}

// CreateAllocation @ 144b10b20

FIndirectLightingCacheAllocation * __thiscall
FIndirectLightingCache::CreateAllocation
          (FIndirectLightingCache *this,int param_1,TBoxSphereBounds<double,double> *param_2,
          bool param_3,bool param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FIndirectLightingCacheAllocation *pFVar6;
  undefined8 local_1b8;
  uint auStack_1b0 [2];
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 TStack_190;
  undefined1 local_178;
  TIntVector3<int>_u_0 local_168;
  undefined8 *local_158;
  undefined8 *local_150;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0 [7];
  
  if (((param_1 < 2) && (!param_3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockSize > 1 || bPointSample",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                         ,0x14e,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FIndirectLightingCacheAllocation *)(*pcVar1)();
    return pFVar6;
  }
  pFVar6 = ::operator_new(0x1e0);
  if (pFVar6 == (FIndirectLightingCacheAllocation *)0x0) {
    pFVar6 = (FIndirectLightingCacheAllocation *)0x0;
  }
  else {
    pFVar6 = FIndirectLightingCacheAllocation::FIndirectLightingCacheAllocation(pFVar6);
  }
  local_178 = 0;
  local_1b8 = 0;
  auStack_1b0[0] = 0;
  auStack_1b0[1] = 0;
  local_1a8._s_0.X = 0.0;
  local_1a8._s_0.Y = 0.0;
  local_1a8._s_0.Z = 0.0;
  TStack_190._s_0.X = 0.0;
  TStack_190._s_0.Y = 0.0;
  TStack_190._s_0.Z = 0.0;
  if (param_1 == 1) {
    local_1b8 = (ulonglong)(uint)this->NextPointId;
    this->NextPointId = this->NextPointId + 1;
  }
  else {
    bVar5 = FTextureLayout3d::AddElement
                      (&this->BlockAllocator,(uint *)&local_1b8,(uint *)((longlong)&local_1b8 + 4),
                       auStack_1b0,param_1,param_1,param_1);
    if (!bVar5) {
      return pFVar6;
    }
  }
  auStack_1b0[1] = param_1;
  CalculateBlockPositionAndSize
            (this,param_2,param_1,(TVector<double> *)&local_1a8._s_0,
             (TVector<double> *)&TStack_190._s_0);
  local_168._s_0.Z = auStack_1b0[0];
  local_148._s_0.X = TStack_190._s_0.X;
  local_148._s_0.Y = TStack_190._s_0.Y;
  local_148._s_0.Z = TStack_190._s_0.Z;
  local_128._s_0.X = local_1a8._s_0.X;
  local_128._s_0.Y = local_1a8._s_0.Y;
  local_128._s_0.Z = local_1a8._s_0.Z;
  local_168._0_8_ = local_1b8;
  CalculateBlockScaleAndAdd
            (this,(TIntVector3<int> *)&local_168._s_0,auStack_1b0[1],
             (TVector<double> *)&local_128._s_0,(TVector<double> *)&local_148._s_0,
             (TVector<double> *)&local_c0[0]._s_0,(TVector<double> *)&local_d8._s_0,
             (TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_108._s_0);
  local_158 = &local_1b8;
  local_150 = &local_1b8;
  TSet<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Math::TIntVector3<int>_const_&,FIndirectLightingCacheBlock_const_&>_>
            ((TSet<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
              *)&this->VolumeBlocks,
             (TPairInitializer<UE::Math::TIntVector3<int>_const_&,FIndirectLightingCacheBlock_const_&>
              *)&stack0x00000010,(bool *)&local_158);
  uVar4 = auStack_1b0[1];
  uVar3 = auStack_1b0[0];
  uVar2 = local_1b8;
  if ((((int)auStack_1b0[1] < 2) && (!param_3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAllocationTexelSize > 1 || bInPointSample",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\PrimitiveSceneInfo.h"
                         ,0xa2,L"%i, %i"), bVar5)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FIndirectLightingCacheAllocation *)(*pcVar1)();
    return pFVar6;
  }
  *(ulonglong *)&(pFVar6->MinTexel).field0_0x0 = uVar2;
  pFVar6->bUnbuiltPreview = param_4;
  (pFVar6->MinTexel).field0_0x0._s_0.Z = uVar3;
  pFVar6->AllocationTexelSize = uVar4;
  pFVar6->bIsDirty = false;
  pFVar6->bPointSample = param_3;
  (pFVar6->Add).field0_0x0._s_0.X = local_d8._s_0.X;
  (pFVar6->Add).field0_0x0._s_0.Y = local_d8._s_0.Y;
  (pFVar6->Add).field0_0x0._s_0.Z = local_d8._s_0.Z;
  (pFVar6->Scale).field0_0x0._s_0.X = (double)local_c0[0]._0_8_;
  (pFVar6->Scale).field0_0x0._s_0.Y = (double)local_c0[0]._8_8_;
  (pFVar6->Scale).field0_0x0._s_0.Z = (double)local_c0[0]._16_8_;
  (pFVar6->MinUV).field0_0x0._s_0.X = local_f0._s_0.X;
  (pFVar6->MinUV).field0_0x0._s_0.Y = local_f0._s_0.Y;
  (pFVar6->MinUV).field0_0x0._s_0.Z = local_f0._s_0.Z;
  (pFVar6->MaxUV).field0_0x0._s_0.X = local_108._s_0.X;
  (pFVar6->MaxUV).field0_0x0._s_0.Y = local_108._s_0.Y;
  (pFVar6->MaxUV).field0_0x0._s_0.Z = local_108._s_0.Z;
  if ((((int)uVar4 < 2) && (!param_3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewAllocation->AllocationTexelSize > 1 || NewAllocation->bPointSample",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                         ,0x161,L"%i, %i"), bVar5)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FIndirectLightingCacheAllocation *)(*pcVar1)();
    return pFVar6;
  }
  return pFVar6;
}

// DeallocateBlock @ 144b12de0

void __thiscall
FIndirectLightingCache::DeallocateBlock
          (FIndirectLightingCache *this,TIntVector3<int> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (1 < param_2) {
    bVar2 = FTextureLayout3d::RemoveElement
                      (&this->BlockAllocator,(param_1->field0_0x0)._s_0.X,
                       (param_1->field0_0x0)._s_0.Y,(param_1->field0_0x0)._s_0.Z,param_2,param_2,
                       param_2);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockAllocator.RemoveElement(Min.X, Min.Y, Min.Z, Size, Size, Size)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                         ,0xd0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (*(int *)&(this->VolumeBlocks).field_0x8 != *(int *)&(this->VolumeBlocks).field_0x34) {
    uVar3 = FCrc::MemCrc_DEPRECATED(param_1,0xc,0);
    TSet<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Math::TIntVector3<int>_>
              ((TSet<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
                *)&this->VolumeBlocks,uVar3,param_1);
  }
  return;
}

// EncodeBlock @ 144b140d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::EncodeBlock
          (FIndirectLightingCache *this,FViewInfo *param_1,FIndirectLightingCacheBlock *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TSHVectorRGB<2>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_6,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_7)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  bool bVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  longlong lVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  float fVar44;
  float fVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  int local_1e8;
  undefined2 local_1e4;
  undefined2 uStack_1e2;
  undefined2 uStack_1e0;
  undefined2 uStack_1de;
  undefined2 local_1dc;
  undefined2 uStack_1da;
  undefined2 uStack_1d8;
  undefined2 uStack_1d6;
  undefined2 local_1d4;
  undefined2 uStack_1d2;
  undefined2 uStack_1d0;
  undefined2 uStack_1ce;
  TSHVectorRGB<2> local_1b8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_188;
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *local_180;
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *local_178;
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *local_170;
  TVector<double>_u_0 local_138;
  FLinearColor_u_0 local_120;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  uVar24 = _UNK_15076b1e8;
  uVar23 = ___xmm_3f8000003f8000000000000000000000;
  fVar22 = _UNK_15068962c;
  fVar21 = _UNK_150689628;
  fVar20 = _UNK_150689624;
  fVar19 = ___xmm_3f0000003f0000003f0000003f000000;
  uVar18 = _UNK_15065157c;
  uVar17 = _UNK_150651578;
  uVar16 = _UNK_150651574;
  uVar15 = __xmm_80000000800000008000000080000000;
  fVar14 = __real_41200000;
  dVar13 = __real_3fe0000000000000;
  dVar12 = __real_3ff0000000000000;
  local_180 = param_5;
  iVar38 = param_2->TexelSize;
  local_178 = param_6;
  local_170 = param_7;
  local_1e8 = 0;
  local_188 = param_3;
  if (0 < iVar38) {
    do {
      iVar41 = 0;
      if (0 < iVar38) {
        do {
          iVar43 = 0;
          if (0 < iVar38) {
            do {
              uVar42 = (iVar38 * local_1e8 + iVar41) * iVar38 + iVar43;
              uVar40 = ~uVar42 >> 0x1f;
              uVar36 = 0;
              if ((int)uVar42 < param_4->ArrayNum) {
                uVar36 = uVar40;
              }
              if ((uVar36 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar39 = (longlong)(int)uVar42;
              pFVar2 = (param_4->AllocatorInstance).Data;
              pFVar1 = pFVar2 + lVar39 * 0x30;
              fVar45 = *(float *)pFVar1;
              fVar56 = *(float *)(pFVar1 + 4);
              fVar57 = *(float *)(pFVar1 + 8);
              fVar58 = *(float *)(pFVar1 + 0xc);
              pFVar1 = pFVar2 + lVar39 * 0x30 + 0x10;
              fVar4 = *(float *)pFVar1;
              fVar5 = *(float *)(pFVar1 + 4);
              fVar6 = *(float *)(pFVar1 + 8);
              fVar7 = *(float *)(pFVar1 + 0xc);
              pFVar2 = pFVar2 + lVar39 * 0x30 + 0x20;
              fVar8 = *(float *)pFVar2;
              fVar9 = *(float *)(pFVar2 + 4);
              fVar10 = *(float *)(pFVar2 + 8);
              fVar11 = *(float *)(pFVar2 + 0xc);
              uVar36 = 0;
              if ((int)uVar42 < local_188->ArrayNum) {
                uVar36 = uVar40;
              }
              local_1b8.R.V[0] = fVar45;
              local_1b8.R.V[1] = fVar56;
              local_1b8.R.V[2] = fVar57;
              local_1b8.R.V[3] = fVar58;
              local_1b8.G.V[0] = fVar4;
              local_1b8.G.V[1] = fVar5;
              local_1b8.G.V[2] = fVar6;
              local_1b8.G.V[3] = fVar7;
              local_1b8.B.V[0] = fVar8;
              local_1b8.B.V[1] = fVar9;
              local_1b8.B.V[2] = fVar10;
              local_1b8.B.V[3] = fVar11;
              if ((uVar36 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              fVar44 = *(float *)((local_188->AllocatorInstance).Data + lVar39 * 4);
              if (0.0 < fVar44) {
                fVar44 = __real_3f800000 / fVar44;
                local_1b8.R.V[0] = fVar44 * fVar45;
                local_1b8.R.V[1] = fVar44 * fVar56;
                local_1b8.R.V[2] = fVar44 * fVar57;
                local_1b8.R.V[3] = fVar44 * fVar58;
                local_1b8.G.V[0] = fVar44 * fVar4;
                local_1b8.G.V[1] = fVar44 * fVar5;
                local_1b8.G.V[2] = fVar44 * fVar6;
                local_1b8.G.V[3] = fVar44 * fVar7;
                local_1b8.B.V[0] = fVar44 * fVar8;
                local_1b8.B.V[1] = fVar44 * fVar9;
                local_1b8.B.V[2] = fVar44 * fVar10;
                local_1b8.B.V[3] = fVar44 * fVar11;
                local_108 = local_1b8.R.V[0];
                fStack_104 = local_1b8.R.V[1];
                fStack_100 = local_1b8.R.V[2];
                fStack_fc = local_1b8.R.V[3];
                local_f8 = local_1b8.G.V[0];
                fStack_f4 = local_1b8.G.V[1];
                fStack_f0 = local_1b8.G.V[2];
                fStack_ec = local_1b8.G.V[3];
                local_e8 = local_1b8.B.V[0];
                fStack_e4 = local_1b8.B.V[1];
                fStack_e0 = local_1b8.B.V[2];
                fStack_dc = local_1b8.B.V[3];
                if (GCacheReduceSHRinging != 0) {
                  ReduceSHRinging<2>(&local_1b8);
                }
              }
              if ((GCacheDrawInterpolationPoints != 0) && (param_1 != (FViewInfo *)0x0)) {
                dVar46 = dVar12 / (double)param_2->TexelSize;
                local_120._0_8_ = uVar23;
                local_120._8_8_ = uVar24;
                local_138._s_0.X =
                     ((double)iVar43 + dVar13) * dVar46 * (param_2->Size).field0_0x0._s_0.X +
                     (param_2->Min).field0_0x0._s_0.X;
                local_138._s_0.Y =
                     ((double)iVar41 + dVar13) * dVar46 * (param_2->Size).field0_0x0._s_0.Y +
                     (param_2->Min).field0_0x0._s_0.Y;
                local_138._s_0.Z =
                     ((double)local_1e8 + dVar13) * dVar46 * (param_2->Size).field0_0x0._s_0.Z +
                     (param_2->Min).field0_0x0._s_0.Z;
                fVar45 = fVar14;
                if (dVar12 < (double)param_1->_padding_ || dVar12 == (double)param_1->_padding_) {
                  dVar46 = (double)(float)(double)param_1->_padding_;
                  if ((double)param_1->_padding_ <= (double)(float)(double)param_1->_padding_) {
                    dVar46 = (double)param_1->_padding_;
                  }
                  fVar45 = fVar14 / (float)dVar46;
                }
                FBatchedElements::AddPoint
                          (param_1->BatchedViewElements,(TVector<double> *)&local_138._s_0,fVar45,
                           (FLinearColor *)&local_120._s_0,(FHitProxyId)0xffffffff);
              }
              iVar34 = _UNK_1508be50c;
              iVar33 = _UNK_1508be508;
              iVar32 = _UNK_1508be504;
              iVar38 = ___xmm_c8000fffc8000fffc8000fffc8000fff;
              uVar27 = _UNK_1508be47c;
              uVar26 = _UNK_1508be478;
              uVar25 = _UNK_1508be474;
              uVar36 = ___xmm_000001ff000001ff000001ff000001ff;
              uVar37 = 0;
              if ((int)uVar42 < local_180->ArrayNum) {
                uVar37 = uVar40;
              }
              fVar45 = (float)(~uVar15 & (uint)local_1b8.R.V[0]);
              fVar56 = (float)(~uVar16 & (uint)local_1b8.G.V[0]);
              fVar57 = (float)(~uVar17 & (uint)local_1b8.B.V[0]);
              fVar58 = (float)(~uVar18 & (uint)local_1b8.R.V[3]);
              auVar47._0_4_ =
                   (~-(uint)((int)fVar45 < ___xmm_38800000388000003880000038800000) &
                    (uint)(((int)fVar45 + ___xmm_c8000fffc8000fffc8000fffc8000fff) -
                          (((int)fVar45 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar45 + fVar19) - (int)fVar19 &
                   -(uint)((int)fVar45 < ___xmm_38800000388000003880000038800000)) &
                   -(uint)((int)fVar45 < ___xmm_47800000478000004780000047800000);
              auVar47._4_4_ =
                   (~-(uint)((int)fVar56 < _UNK_1508be4b4) &
                    (uint)(((int)fVar56 + _UNK_1508be504) - (((int)fVar56 << 0x12) >> 0x1f)) >> 0xd
                   | (int)(fVar56 + fVar20) - (int)fVar20 & -(uint)((int)fVar56 < _UNK_1508be4b4)) &
                   -(uint)((int)fVar56 < _UNK_1508be4e4);
              auVar47._8_4_ =
                   (~-(uint)((int)fVar57 < _UNK_1508be4b8) &
                    (uint)(((int)fVar57 + _UNK_1508be508) - (((int)fVar57 << 0x12) >> 0x1f)) >> 0xd
                   | (int)(fVar57 + fVar21) - (int)fVar21 & -(uint)((int)fVar57 < _UNK_1508be4b8)) &
                   -(uint)((int)fVar57 < _UNK_1508be4e8);
              auVar47._12_4_ =
                   (~-(uint)((int)fVar58 < _UNK_1508be4bc) &
                    (uint)(((int)fVar58 + _UNK_1508be50c) - (((int)fVar58 << 0x12) >> 0x1f)) >> 0xd
                   | (int)(fVar58 + fVar22) - (int)fVar22 & -(uint)((int)fVar58 < _UNK_1508be4bc)) &
                   -(uint)((int)fVar58 < _UNK_1508be4ec);
              auVar53._0_4_ =
                   ~-(uint)((int)fVar45 < ___xmm_47800000478000004780000047800000) &
                   (((uint)fVar45 >> 0xd & ___xmm_000001ff000001ff000001ff000001ff |
                    ___xmm_00000200000002000000020000000200) & -(uint)NAN(fVar45) |
                   ___xmm_00007c0000007c0000007c0000007c00);
              auVar53._4_4_ =
                   ~-(uint)((int)fVar56 < _UNK_1508be4e4) &
                   (((uint)fVar56 >> 0xd & _UNK_1508be474 | _UNK_1508be484) & -(uint)NAN(fVar56) |
                   _UNK_150689594);
              auVar53._8_4_ =
                   ~-(uint)((int)fVar57 < _UNK_1508be4e8) &
                   (((uint)fVar57 >> 0xd & _UNK_1508be478 | _UNK_1508be488) & -(uint)NAN(fVar57) |
                   _UNK_150689598);
              auVar53._12_4_ =
                   ~-(uint)((int)fVar58 < _UNK_1508be4ec) &
                   (((uint)fVar58 >> 0xd & _UNK_1508be47c | _UNK_1508be48c) & -(uint)NAN(fVar58) |
                   _UNK_15068959c);
              auVar48._4_4_ = (int)((uint)local_1b8.G.V[0] & uVar16) >> 0x10;
              auVar48._0_4_ = (int)((uint)local_1b8.R.V[0] & uVar15) >> 0x10;
              auVar48._8_4_ = (int)((uint)local_1b8.B.V[0] & uVar17) >> 0x10;
              auVar48._12_4_ = (int)((uint)local_1b8.R.V[3] & uVar18) >> 0x10;
              auVar48 = auVar47 | auVar53 | auVar48;
              auVar48 = packssdw(auVar48,auVar48);
              if ((uVar37 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar31 = _UNK_1508be4ec;
              iVar30 = _UNK_1508be4e8;
              iVar29 = _UNK_1508be4e4;
              iVar28 = ___xmm_47800000478000004780000047800000;
              pFVar1 = (local_180->AllocatorInstance).Data;
              local_1e4 = auVar48._0_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8) = local_1e4;
              uStack_1e2 = auVar48._2_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8 + 2) = uStack_1e2;
              uStack_1e0 = auVar48._4_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8 + 4) = uStack_1e0;
              uStack_1de = auVar48._6_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8 + 6) = uStack_1de;
              fVar45 = (float)(~uVar15 & (uint)local_1b8.R.V[1]);
              fVar56 = (float)(~uVar16 & (uint)local_1b8.G.V[1]);
              fVar57 = (float)(~uVar17 & (uint)local_1b8.B.V[1]);
              fVar58 = (float)(~uVar18 & (uint)local_1b8.G.V[3]);
              uVar37 = 0;
              if ((int)uVar42 < local_178->ArrayNum) {
                uVar37 = uVar40;
              }
              auVar49._0_4_ =
                   (~-(uint)((int)fVar45 < ___xmm_38800000388000003880000038800000) &
                    (uint)(((int)fVar45 + iVar38) - (((int)fVar45 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar45 + fVar19) - (int)fVar19 &
                   -(uint)((int)fVar45 < ___xmm_38800000388000003880000038800000)) &
                   -(uint)((int)fVar45 < iVar28);
              auVar49._4_4_ =
                   (~-(uint)((int)fVar56 < _UNK_1508be4b4) &
                    (uint)(((int)fVar56 + iVar32) - (((int)fVar56 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar56 + fVar20) - (int)fVar20 & -(uint)((int)fVar56 < _UNK_1508be4b4)) &
                   -(uint)((int)fVar56 < iVar29);
              auVar49._8_4_ =
                   (~-(uint)((int)fVar57 < _UNK_1508be4b8) &
                    (uint)(((int)fVar57 + iVar33) - (((int)fVar57 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar57 + fVar21) - (int)fVar21 & -(uint)((int)fVar57 < _UNK_1508be4b8)) &
                   -(uint)((int)fVar57 < iVar30);
              auVar49._12_4_ =
                   (~-(uint)((int)fVar58 < _UNK_1508be4bc) &
                    (uint)(((int)fVar58 + iVar34) - (((int)fVar58 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar58 + fVar22) - (int)fVar22 & -(uint)((int)fVar58 < _UNK_1508be4bc)) &
                   -(uint)((int)fVar58 < iVar31);
              auVar54._0_4_ =
                   ~-(uint)((int)fVar45 < iVar28) &
                   (((uint)fVar45 >> 0xd & uVar36 | ___xmm_00000200000002000000020000000200) &
                    -(uint)NAN(fVar45) | ___xmm_00007c0000007c0000007c0000007c00);
              auVar54._4_4_ =
                   ~-(uint)((int)fVar56 < iVar29) &
                   (((uint)fVar56 >> 0xd & uVar25 | _UNK_1508be484) & -(uint)NAN(fVar56) |
                   _UNK_150689594);
              auVar54._8_4_ =
                   ~-(uint)((int)fVar57 < iVar30) &
                   (((uint)fVar57 >> 0xd & uVar26 | _UNK_1508be488) & -(uint)NAN(fVar57) |
                   _UNK_150689598);
              auVar54._12_4_ =
                   ~-(uint)((int)fVar58 < iVar31) &
                   (((uint)fVar58 >> 0xd & uVar27 | _UNK_1508be48c) & -(uint)NAN(fVar58) |
                   _UNK_15068959c);
              auVar50._4_4_ = (int)((uint)local_1b8.G.V[1] & uVar16) >> 0x10;
              auVar50._0_4_ = (int)((uint)local_1b8.R.V[1] & uVar15) >> 0x10;
              auVar50._8_4_ = (int)((uint)local_1b8.B.V[1] & uVar17) >> 0x10;
              auVar50._12_4_ = (int)((uint)local_1b8.G.V[3] & uVar18) >> 0x10;
              auVar50 = auVar49 | auVar54 | auVar50;
              auVar48 = packssdw(auVar50,auVar50);
              if ((uVar37 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar31 = _UNK_1508be4ec;
              iVar30 = _UNK_1508be4e8;
              iVar29 = _UNK_1508be4e4;
              iVar28 = ___xmm_47800000478000004780000047800000;
              pFVar1 = (local_178->AllocatorInstance).Data;
              local_1dc = auVar48._0_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8) = local_1dc;
              uStack_1da = auVar48._2_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8 + 2) = uStack_1da;
              uStack_1d8 = auVar48._4_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8 + 4) = uStack_1d8;
              uStack_1d6 = auVar48._6_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8 + 6) = uStack_1d6;
              fVar45 = (float)(~uVar15 & (uint)local_1b8.R.V[2]);
              fVar56 = (float)(~uVar16 & (uint)local_1b8.G.V[2]);
              fVar57 = (float)(~uVar17 & (uint)local_1b8.B.V[2]);
              fVar58 = (float)(~uVar18 & (uint)local_1b8.B.V[3]);
              uVar37 = 0;
              if ((int)uVar42 < local_170->ArrayNum) {
                uVar37 = uVar40;
              }
              auVar51._0_4_ =
                   (~-(uint)((int)fVar45 < ___xmm_38800000388000003880000038800000) &
                    (uint)(((int)fVar45 + iVar38) - (((int)fVar45 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar45 + fVar19) - (int)fVar19 &
                   -(uint)((int)fVar45 < ___xmm_38800000388000003880000038800000)) &
                   -(uint)((int)fVar45 < iVar28);
              auVar51._4_4_ =
                   (~-(uint)((int)fVar56 < _UNK_1508be4b4) &
                    (uint)(((int)fVar56 + iVar32) - (((int)fVar56 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar56 + fVar20) - (int)fVar20 & -(uint)((int)fVar56 < _UNK_1508be4b4)) &
                   -(uint)((int)fVar56 < iVar29);
              auVar51._8_4_ =
                   (~-(uint)((int)fVar57 < _UNK_1508be4b8) &
                    (uint)(((int)fVar57 + iVar33) - (((int)fVar57 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar57 + fVar21) - (int)fVar21 & -(uint)((int)fVar57 < _UNK_1508be4b8)) &
                   -(uint)((int)fVar57 < iVar30);
              auVar51._12_4_ =
                   (~-(uint)((int)fVar58 < _UNK_1508be4bc) &
                    (uint)(((int)fVar58 + iVar34) - (((int)fVar58 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar58 + fVar22) - (int)fVar22 & -(uint)((int)fVar58 < _UNK_1508be4bc)) &
                   -(uint)((int)fVar58 < iVar31);
              auVar55._0_4_ =
                   ~-(uint)((int)fVar45 < iVar28) &
                   (((uint)fVar45 >> 0xd & uVar36 | ___xmm_00000200000002000000020000000200) &
                    -(uint)NAN(fVar45) | ___xmm_00007c0000007c0000007c0000007c00);
              auVar55._4_4_ =
                   ~-(uint)((int)fVar56 < iVar29) &
                   (((uint)fVar56 >> 0xd & uVar25 | _UNK_1508be484) & -(uint)NAN(fVar56) |
                   _UNK_150689594);
              auVar55._8_4_ =
                   ~-(uint)((int)fVar57 < iVar30) &
                   (((uint)fVar57 >> 0xd & uVar26 | _UNK_1508be488) & -(uint)NAN(fVar57) |
                   _UNK_150689598);
              auVar55._12_4_ =
                   ~-(uint)((int)fVar58 < iVar31) &
                   (((uint)fVar58 >> 0xd & uVar27 | _UNK_1508be48c) & -(uint)NAN(fVar58) |
                   _UNK_15068959c);
              auVar52._4_4_ = (int)((uint)local_1b8.G.V[2] & uVar16) >> 0x10;
              auVar52._0_4_ = (int)((uint)local_1b8.R.V[2] & uVar15) >> 0x10;
              auVar52._8_4_ = (int)((uint)local_1b8.B.V[2] & uVar17) >> 0x10;
              auVar52._12_4_ = (int)((uint)local_1b8.B.V[3] & uVar18) >> 0x10;
              auVar52 = auVar51 | auVar55 | auVar52;
              auVar48 = packssdw(auVar52,auVar52);
              if ((uVar37 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar43 = iVar43 + 1;
              pFVar1 = (local_170->AllocatorInstance).Data;
              local_1d4 = auVar48._0_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8) = local_1d4;
              uStack_1d2 = auVar48._2_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8 + 2) = uStack_1d2;
              uStack_1d0 = auVar48._4_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8 + 4) = uStack_1d0;
              uStack_1ce = auVar48._6_2_;
              *(undefined2 *)(pFVar1 + lVar39 * 8 + 6) = uStack_1ce;
              iVar38 = param_2->TexelSize;
            } while (iVar43 < iVar38);
          }
          iVar41 = iVar41 + 1;
        } while (iVar41 < iVar38);
      }
      local_1e8 = local_1e8 + 1;
    } while (local_1e8 < iVar38);
  }
  return;
}

// FinalizeCacheUpdates @ 144b1f670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::FinalizeCacheUpdates
          (FIndirectLightingCache *this,FScene *param_1,FSceneRenderer *param_2,
          FILCUpdatePrimTaskData *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TAtomic<ENamedThreads::Type> TVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCacheFinalize> FVar9;
  FTaskGraphInterface *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  FName FVar12;
  undefined1 auStackY_118 [32];
  FName local_b8;
  LARGE_INTEGER local_b0;
  FName local_a8;
  FStatMessage local_98;
  FSceneRenderer *local_88;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_80;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FVar9 = StatPtr_STAT_UpdateIndirectLightingCacheFinalize;
  local_b0 = (LARGE_INTEGER)param_1;
  local_88 = param_2;
  if (StatPtr_STAT_UpdateIndirectLightingCacheFinalize ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCacheFinalize>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_98,"STAT_UpdateIndirectLightingCacheFinalize");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCacheFinalize>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_UpdateIndirectLightingCacheFinalize,*pFVar8,
                       L"Update Indirect Lighting Cache Finalize","STATGROUP_InitViews",
                       "STATCAT_Advanced",L"Init Views",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((FVar12.ComparisonIndex.Value.Value != 0) || (FVar12.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8 = (FName)((ulonglong)local_b8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8 = FVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                   ,0x1c3);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_144b1f7c0;
    }
  }
  bVar5 = false;
  FVar12 = local_a8;
LAB_144b1f7c0:
  pFVar10 = FTaskGraphInterface::Get();
  TVar7 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
  pcVar3 = *(code **)((longlong)*pFVar10 + 0x60);
  local_b8 = (FName)(param_3->TaskRef).Reference;
  if (local_b8 != (FName)0x0) {
    LOCK();
    *(int *)((longlong)local_b8 + 0x30) = *(int *)((longlong)local_b8 + 0x30) + 1;
    UNLOCK();
  }
  local_80.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_58 = 1;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
            (8,8,1,0,&local_80,1,&local_54);
  FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_80;
  if (local_80.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar11 = local_80.SecondaryData;
  }
  ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
            ((void *)FVar11,(TRefCountPtr<FBaseGraphTask> *)&local_b8,1);
  (*pcVar3)(pFVar10,&local_80,TVar7);
  FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_80;
  if (local_80.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar11 = local_80.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar11,local_58);
  if (local_80.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_80.SecondaryData);
  }
  if (local_b8 != (FName)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_b8 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)local_b8)(local_b8,1);
    }
  }
  FinalizeUpdateInternal_RenderThread
            (this,(FScene *)local_b0,local_88,&param_3->OutBlocksToUpdate,
             &param_3->OutTransitionsOverTimeToUpdate,&param_3->OutPrimitivesToUpdateStaticMeshes);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b0);
      local_98.StatData.Pad = (uchar  [8])(local_b0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_98);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FinalizeUpdateInternal_RenderThread @ 144b1f9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::FinalizeUpdateInternal_RenderThread
          (FIndirectLightingCache *this,FScene *param_1,FSceneRenderer *param_2,
          TMap<UE::Math::TIntVector3<int>,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>_>
          *param_3,TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCacheBlocks> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCacheTransitions> FVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FName FVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  FColor_u_0 local_d0;
  FColor_u_0 local_cc;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_a8;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FPrimitiveDrawInterface local_68;
  FSceneView *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  longlong local_40;
  FName local_38;
  FName local_30;
  
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                         ,0x242,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar5 = IndirectLightingAllowed(this,param_1,param_2);
  if (!bVar5) goto LAB_144b1feb7;
  FVar7 = StatPtr_STAT_UpdateIndirectLightingCacheBlocks;
  if (StatPtr_STAT_UpdateIndirectLightingCacheBlocks ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCacheBlocks>)0x0) {
    pFVar6 = ::FName::FName(&local_38,"STAT_UpdateIndirectLightingCacheBlocks");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCacheBlocks>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateIndirectLightingCacheBlocks,
                       *pFVar6,L"Update Indirect Lighting Cache Blocks","STATGROUP_InitViews",
                       "STATCAT_Advanced",L"Init Views",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar3 = false;
  bVar5 = false;
  FVar14 = *(FName *)FVar7;
  if ((FVar14.ComparisonIndex.Value.Value == 0) && (FVar14.Number == 0)) {
LAB_144b1fb4d:
    bVar4 = false;
    FVar14 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d0._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_c8.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                   ,0x247);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144b1fb4d;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar3 = false;
    bVar4 = true;
  }
  UpdateBlocks(this,param_1,*(FViewInfo **)&param_2->field_0x10,param_3);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    if (pFVar8->bWaitForExplicitFlush < pFVar8->ScopeCount) {
      local_88.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar8,&local_88);
      piVar1 = &pFVar8->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  FVar10 = StatPtr_STAT_UpdateIndirectLightingCacheTransitions;
  if (StatPtr_STAT_UpdateIndirectLightingCacheTransitions ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCacheTransitions>)0x0) {
    pFVar6 = ::FName::FName(&local_30,"STAT_UpdateIndirectLightingCacheTransitions");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCacheTransitions>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UpdateIndirectLightingCacheTransitions,*pFVar6,
                        L"Update Indirect Lighting Cache Transitions","STATGROUP_InitViews",
                        "STATCAT_Advanced",L"Init Views",true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar15 = 0;
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar3 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value == 0) && (FVar14.Number == 0)) {
LAB_144b1fd54:
    bVar4 = false;
    FVar14 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_cc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_cc._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_c0.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                   ,0x24c);
        bVar5 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144b1fd54;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar4 = true;
  }
  UpdateTransitionsOverTime(this,param_4,*(float *)((longlong)&(param_2->ViewFamily)._padding_ + 4))
  ;
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    if (pFVar8->bWaitForExplicitFlush < pFVar8->ScopeCount) {
      local_78.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar8,&local_78);
      piVar1 = &pFVar8->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  iVar11 = param_5->ArrayNum;
  uVar17 = uVar15;
  if (0 < iVar11) {
    do {
      uVar12 = (uint)uVar15;
      uVar13 = 0;
      if ((int)uVar12 < iVar11) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FPrimitiveSceneInfo::RequestStaticMeshUpdate
                (*(FPrimitiveSceneInfo **)((param_5->AllocatorInstance).Data + uVar17));
      iVar11 = param_5->ArrayNum;
      uVar15 = (ulonglong)(uVar12 + 1);
      uVar17 = uVar17 + 8;
    } while ((int)(uVar12 + 1) < iVar11);
  }
LAB_144b1feb7:
  lVar18 = 0;
  if (((GCacheDrawLightingSamples != 0) || (((param_2->ViewFamily)._padding_ & 0x100000000) != 0))
     || (GCacheDrawDirectionalShadowing != 0)) {
    if ((*(int *)&param_2->field_0x18 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar16 = *(longlong *)&param_2->field_0x10 + 0x2900;
    if ((*(int *)&param_2->field_0x18 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68.View = *(FSceneView **)&param_2->field_0x10;
    uVar13 = 0;
    local_68._padding_ = (longlong)&___7FViewElementPDI__6B_;
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    local_58 = local_68.View;
    local_40 = lVar16;
    if (0 < (param_1->PrecomputedLightVolumes).ArrayNum) {
      do {
        uVar12 = 0;
        if ((int)uVar13 < (param_1->PrecomputedLightVolumes).ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FPrecomputedLightVolume::DebugDrawSamples
                  (*(FPrecomputedLightVolume **)
                    ((param_1->PrecomputedLightVolumes).AllocatorInstance.Data + lVar18),&local_68,
                   GCacheDrawDirectionalShadowing != 0);
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 8;
      } while ((int)uVar13 < (param_1->PrecomputedLightVolumes).ArrayNum);
    }
    if (local_50 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_50)(local_50,1);
      }
    }
  }
  return;
}

// FindBlock @ 144b20060

FIndirectLightingCacheBlock * __thiscall
FIndirectLightingCache::FindBlock(FIndirectLightingCache *this,TIntVector3<int> *param_1)

{
  FIndirectLightingCacheBlock *pFVar1;
  
  pFVar1 = TMapBase<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>_>
           ::FindChecked((TMapBase<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>_>
                          *)&this->VolumeBlocks,param_1);
  return pFVar1;
}

// FindBlock @ 144b20080

FIndirectLightingCacheBlock * __thiscall
FIndirectLightingCache::FindBlock(FIndirectLightingCache *this,TIntVector3<int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FIndirectLightingCacheBlock *pFVar5;
  longlong lVar6;
  
  uVar3 = FCrc::MemCrc_DEPRECATED(param_1,0xc,0);
  iVar4 = TSet<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Math::TIntVector3<int>_>
                    ((TSet<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
                      *)&this->VolumeBlocks,uVar3,param_1);
  if ((iVar4 != -1) &&
     (lVar6 = (longlong)iVar4 * 0x60 + *(longlong *)&(this->VolumeBlocks).field_0x0, lVar6 != 0)) {
    return (FIndirectLightingCacheBlock *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FIndirectLightingCacheBlock *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FIndirectLightingCacheBlock *)(*pcVar1)();
  return pFVar5;
}

// FindPrimitiveAllocation @ 144b20430

FIndirectLightingCacheAllocation * __thiscall
FIndirectLightingCache::FindPrimitiveAllocation
          (FIndirectLightingCache *this,FPrimitiveComponentId param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)&(this->PrimitiveAllocations).field_0x8 !=
      *(int *)&(this->PrimitiveAllocations).field_0x34) {
    puVar3 = *(undefined1 **)&(this->PrimitiveAllocations).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->PrimitiveAllocations).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->PrimitiveAllocations).field_0x48 - 1U &
                              param_1.PrimIDValue) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->PrimitiveAllocations + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->PrimitiveAllocations + (longlong)iVar2 * 0x18) ==
            param_1.PrimIDValue) {
          if (lVar1 == 0) {
            return (FIndirectLightingCacheAllocation *)0x0;
          }
          return *(FIndirectLightingCacheAllocation **)(lVar1 + 8);
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FIndirectLightingCacheAllocation *)0x0;
}

// IndirectLightingAllowed @ 144b2faf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FIndirectLightingCache::IndirectLightingAllowed
          (FIndirectLightingCache *this,FScene *param_1,FSceneRenderer *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  bVar8 = false;
  if (((GIndirectLightingCache == 0) || (!FReadOnlyCVARCache::bAllowStaticLighting)) ||
     ((param_1->PrecomputedLightVolumes).ArrayNum < 1)) {
    return false;
  }
  uVar6 = 0;
  if (0 < *(int *)&param_2->field_0x18) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&param_2->field_0x18) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar6 = uVar6 + 1;
      plVar1 = (longlong *)(*(longlong *)&param_2->field_0x10 + 8 + lVar7);
      lVar7 = lVar7 + 0x2970;
      bVar8 = (bool)(bVar8 | (byte)(*(uint *)(*plVar1 + 0x50) >> 10) & 1);
    } while ((int)uVar6 < *(int *)&param_2->field_0x18);
  }
  return bVar8;
}

// InitRHI @ 144b2fff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::InitRHI(FIndirectLightingCache *this,FRHICommandListBase *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  FRHITextureDesc *pFVar7;
  FStaticShaderPlatform FVar8;
  undefined1 auStackY_1a8 [32];
  FPooledRenderTargetDesc local_178;
  undefined1 local_118 [80];
  undefined1 local_c8 [80];
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar6 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar6 = GMaxRHIFeatureLevel;
  }
  if (2 < (int)TVar6) {
    if (TVar6 == Num) {
      FVar8.Platform = SP_NumPlatforms;
    }
    else {
      FVar8.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar6];
    }
    bVar5 = RHISupportsVolumeTextureRendering(FVar8);
    if (bVar5) {
      iVar3 = this->CacheSize;
      uVar2 = (ushort)this->CacheSize;
      if (iVar3 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InSizeX",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                           ,0xb3,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InSizeY",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                           ,0xb4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_178.Format = PF_FloatRGBA;
      local_178.UAVFormat = PF_Unknown;
      local_178.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
      ;
      local_178.AliasableFormats.ArrayNum = 0;
      local_178.ClearValue.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
      local_178.DebugName = L"UnknownTextureVolume";
      local_178.NumSamples = '\x01';
      local_178.FastVRAMPercentage = 0xff;
      local_178.AliasableFormats.ArrayMax = 1;
      local_178.ArraySize = 1;
      local_178.field13_0x58.PackedBits = '\0';
      local_178.NumMips = '\x01';
      local_178.Flags = NoTiling|ShaderResource;
      local_178.ClearValue._0_8_ = FClearValueBinding::None._0_8_;
      local_178.ClearValue.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
      local_178.Extent.field0_0x0._s_0.X = iVar3;
      local_178.Extent.field0_0x0._s_0.Y = iVar3;
      local_178.Depth = uVar2;
      if ((iVar3 == 0) || (uVar2 == 0)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewDesc.Is3DTexture()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                           ,0xc2,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar7 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_118,&local_178);
      FRenderTargetPool::FindFreeElement
                ((FRenderTargetPool *)&GRenderTargetPool,param_1,pFVar7,&this->Texture0,
                 L"IndirectLightingCache_0");
      if ((void *)local_118._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_118._64_8_);
      }
      pFVar7 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_c8,&local_178);
      FRenderTargetPool::FindFreeElement
                ((FRenderTargetPool *)&GRenderTargetPool,param_1,pFVar7,&this->Texture1,
                 L"IndirectLightingCache_1");
      if ((void *)local_c8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._64_8_);
      }
      pFVar7 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_78,&local_178);
      FRenderTargetPool::FindFreeElement
                ((FRenderTargetPool *)&GRenderTargetPool,param_1,pFVar7,&this->Texture2,
                 L"IndirectLightingCache_2");
      if ((void *)local_78._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_78._64_8_);
      }
      if (local_178.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_178.AliasableFormats.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// InterpolateBlock @ 144b30c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::InterpolateBlock
          (FIndirectLightingCache *this,FScene *param_1,FIndirectLightingCacheBlock *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TSHVectorRGB<2>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  FPrecomputedLightVolume *pFVar2;
  FPrecomputedLightVolumeData *pFVar3;
  TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *pTVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  uint local_res18;
  TIntVector3<int>_u_0 local_1d8;
  TIntVector3<int>_u_0 local_1c8;
  ulonglong local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  longlong local_198;
  TIntVector3<int>_u_0 local_190;
  TIntVector3<int>_u_0 local_184;
  TIntVector3<int>_u_0 local_178;
  TIntVector3<int>_u_0 local_16c;
  double local_160;
  TVector4<double>_u_0 local_158;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  TVector4<double>_u_0 local_118;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  
  dVar8 = __real_3fe0000000000000;
  dVar26 = (param_2->Size).field0_0x0._s_0.Y * __real_3fe0000000000000;
  dVar10 = (param_2->Size).field0_0x0._s_0.X * __real_3fe0000000000000;
  dVar11 = (param_2->Size).field0_0x0._s_0.Z * __real_3fe0000000000000;
  dVar12 = __real_3ff0000000000000 / (double)param_2->TexelSize;
  dVar24 = (param_2->Min).field0_0x0._s_0.X;
  dVar25 = (param_2->Min).field0_0x0._s_0.Z;
  local_160 = dVar12 * dVar26;
  if ((GCacheLimitQuerySize == 0) || (param_2->TexelSize < 3)) {
    uVar21 = 0;
    if (0 < (param_1->PrecomputedLightVolumes).ArrayNum) {
      dVar8 = dVar26 + (param_2->Min).field0_0x0._s_0.Y + local_160;
      uVar22 = uVar21;
      do {
        uVar19 = (uint)uVar21;
        uVar20 = 0;
        if ((int)uVar19 < (param_1->PrecomputedLightVolumes).ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = *(FPrecomputedLightVolume **)
                  ((param_1->PrecomputedLightVolumes).AllocatorInstance.Data + uVar22);
        if ((pFVar2 == (FPrecomputedLightVolume *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("PrecomputedLightVolume",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                                ,0x469,L""), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = pFVar2->Data;
        pTVar4 = pFVar2->OctreeForRendering;
        bVar13 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)*(Type *)&param_1->field_0x8)
        ;
        if (((pTVar4 == &pFVar3->HighQualityLightmapOctree) != bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("PrecomputedLightVolume->IsUsingHighQualityLightMap() == AllowHighQualityLightmaps(Scene->GetFeatureLevel())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                                ,0x46a,L""), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_178._s_0.X = param_2->TexelSize;
        local_118._s_0.W = 0.0;
        local_e0 = 0;
        local_184._0_8_ = 0;
        local_184._s_0.Z = 0;
        local_178._s_0.Y = local_178._s_0.X;
        local_178._s_0.Z = local_178._s_0.X;
        local_16c._s_0.X = local_178._s_0.X;
        local_16c._s_0.Y = local_178._s_0.X;
        local_16c._s_0.Z = local_178._s_0.X;
        local_118._s_0.X = dVar10 + dVar24 + dVar12 * dVar10;
        local_118._s_0.Y = dVar8;
        local_118._s_0.Z = dVar11 + dVar25 + dVar12 * dVar11;
        local_f8 = dVar10;
        local_f0 = dVar26;
        local_e8 = dVar11;
        FPrecomputedLightVolume::InterpolateIncidentRadianceBlock
                  (pFVar2,(FBoxCenterAndExtent *)&local_118._s_0,(TIntVector3<int> *)&local_16c._s_0
                   ,(TIntVector3<int> *)&local_178._s_0,(TIntVector3<int> *)&local_184._s_0,param_3,
                   param_4);
        uVar21 = (ulonglong)(uVar19 + 1);
        uVar22 = uVar22 + 8;
      } while ((int)(uVar19 + 1) < (param_1->PrecomputedLightVolumes).ArrayNum);
    }
  }
  else {
    local_res18 = 0;
    if (0 < (param_1->PrecomputedLightVolumes).ArrayNum) {
      local_198 = 0;
      do {
        lVar18 = local_198;
        dVar24 = __real_3fe1000000000000;
        uVar20 = 0;
        if ((int)local_res18 < (param_1->PrecomputedLightVolumes).ArrayNum) {
          uVar20 = ~local_res18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar15 = 0xc;
        if ((uint)GCacheQueryNodeLevel < 0xc) {
          iVar15 = GCacheQueryNodeLevel;
        }
        pFVar2 = *(FPrecomputedLightVolume **)
                  ((param_1->PrecomputedLightVolumes).AllocatorInstance.Data + lVar18);
        dVar9 = __real_3ff0000000000000 / (double)param_2->TexelSize;
        dVar25 = (pFVar2->OctreeForRendering->RootNodeContext).Bounds.Extent.field0_0x0._s_0.X;
        dVar26 = dVar9 * (param_2->Size).field0_0x0._s_0.X;
        iVar14 = 0;
        if (iVar15 != 0) {
          iVar14 = iVar15;
        }
        dVar6 = dVar9 * (param_2->Size).field0_0x0._s_0.Y;
        dVar9 = dVar9 * (param_2->Size).field0_0x0._s_0.Z;
        dVar24 = pow(dVar24,(double)iVar14);
        local_1d8._0_8_ = 0;
        local_1d8._s_0.Z = 0;
        fVar23 = (float)(dVar24 * (dVar25 + dVar25));
        dVar24 = (double)(fVar23 + fVar23);
        lVar18 = (longlong)ROUND(dVar24 / dVar26 - dVar8) >> 1;
        iVar15 = (int)lVar18;
        if (lVar18 < 1) {
          iVar15 = 1;
        }
        uVar21 = (longlong)ROUND(dVar24 / dVar6 - dVar8) >> 1;
        uVar22 = uVar21 & 0xffffffff;
        if ((longlong)uVar21 < 1) {
          uVar22 = 1;
        }
        dVar26 = (double)iVar15 * dVar26;
        uVar21 = (longlong)ROUND(dVar24 / dVar9 - dVar8) >> 1;
        uVar20 = (uint)uVar22;
        local_1b8 = uVar21 & 0xffffffff;
        if ((longlong)uVar21 < 1) {
          local_1b8 = 1;
        }
        local_1b0 = (double)(int)uVar20 * dVar6;
        local_1a8 = (double)(int)local_1b8 * dVar9;
        if ((((iVar15 < 1) || ((int)uVar20 < 1)) || ((int)local_1b8 < 1)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumStepCells.X > 0 && NumStepCells.Y > 0 && NumStepCells.Z > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                                ,0x419,L""), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = param_2->TexelSize;
        dVar24 = (param_2->Min).field0_0x0._s_0.Z;
        local_1c8._s_0.Z = 0;
        local_1c8._0_8_ = 0;
        dVar25 = local_1b0;
        if (0 < iVar14) {
          do {
            local_1d8._s_0.Z = (int)local_1b8;
            local_1a0 = local_1a8;
            if (iVar14 < local_1d8._s_0.Z + local_1c8._s_0.Z) {
              local_1d8._s_0.Z = iVar14 - local_1c8._8_4_;
              local_1a0 = ((param_2->Size).field0_0x0._s_0.Z + (param_2->Min).field0_0x0._s_0.Z) -
                          dVar24;
            }
            dVar9 = (param_2->Min).field0_0x0._s_0.Y;
            local_1c8._0_8_ = local_1c8._0_8_ & 0xffffffff;
            uVar16 = 0;
            if (0 < iVar14) {
              do {
                uVar21 = uVar22;
                dVar6 = dVar25;
                local_1d8._s_0.Y = uVar20;
                if (iVar14 < (int)(uVar20 + uVar16)) {
                  local_1d8._s_0.Y = iVar14 - uVar16;
                  uVar21 = (ulonglong)(uint)local_1d8._s_0.Y;
                  dVar6 = ((param_2->Size).field0_0x0._s_0.Y + (param_2->Min).field0_0x0._s_0.Y) -
                          dVar9;
                }
                dVar1 = (param_2->Min).field0_0x0._s_0.X;
                local_1c8._0_8_ = local_1c8._0_8_ & 0xffffffff00000000;
                if (0 < iVar14) {
                  dVar7 = local_1a0 * dVar8;
                  iVar17 = 0;
                  while( true ) {
                    local_138 = dVar26;
                    local_1d8._s_0.X = iVar15;
                    if (iVar14 < iVar15 + iVar17) {
                      local_1d8._s_0.X = iVar14 - iVar17;
                      local_138 = ((param_2->Min).field0_0x0._s_0.X +
                                  (param_2->Size).field0_0x0._s_0.X) - dVar1;
                    }
                    local_138 = local_138 * dVar8;
                    if (local_1d8._s_0.X == 1) {
                      local_138 = 0.0;
                    }
                    local_130 = dVar6 * dVar8;
                    if ((int)uVar21 == 1) {
                      local_130 = 0.0;
                    }
                    local_128 = dVar7;
                    if (local_1d8._s_0.Z == 1) {
                      local_128 = 0.0;
                    }
                    local_158._s_0.W = 0.0;
                    local_158._s_0.X = local_138 + dVar1 + dVar12 * dVar10;
                    local_158._s_0.Y = local_130 + dVar9 + local_160;
                    local_120 = 0;
                    local_158._s_0.Z = local_128 + dVar24 + dVar12 * dVar11;
                    local_190._s_0.X = iVar14;
                    local_190._s_0.Y = iVar14;
                    local_190._s_0.Z = iVar14;
                    FPrecomputedLightVolume::InterpolateIncidentRadianceBlock
                              (pFVar2,(FBoxCenterAndExtent *)&local_158._s_0,
                               (TIntVector3<int> *)&local_1d8._s_0,
                               (TIntVector3<int> *)&local_190._s_0,
                               (TIntVector3<int> *)&local_1c8._s_0,param_3,param_4);
                    dVar1 = dVar1 + dVar26;
                    iVar14 = param_2->TexelSize;
                    iVar17 = local_1c8._s_0.X + iVar15;
                    local_1c8._s_0.X = iVar17;
                    uVar16 = local_1c8._s_0.Y;
                    dVar25 = local_1b0;
                    if (iVar14 <= iVar17) break;
                    uVar21 = (ulonglong)local_1d8._0_8_ >> 0x20;
                  }
                }
                dVar9 = dVar9 + dVar25;
                uVar16 = uVar16 + uVar20;
                local_1c8._s_0.Y = uVar16;
              } while ((int)uVar16 < iVar14);
            }
            local_1c8._s_0.Z = local_1c8._s_0.Z + (int)local_1b8;
            dVar24 = dVar24 + local_1a8;
          } while (local_1c8._s_0.Z < iVar14);
        }
        local_res18 = local_res18 + 1;
        local_198 = local_198 + 8;
      } while ((int)local_res18 < (param_1->PrecomputedLightVolumes).ArrayNum);
    }
  }
  return;
}

// InterpolatePoint @ 144b31380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::InterpolatePoint
          (FIndirectLightingCache *this,FScene *param_1,FIndirectLightingCacheBlock *param_2,
          float *param_3,TSHVectorRGB<3> *param_4,TVector<double> *param_5)

{
  FPrecomputedLightVolume *this_00;
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStackY_228 [32];
  float local_1f8;
  float local_1f4;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8 [7];
  TSHVectorRGB<3> local_128;
  ulonglong local_98;
  
  dVar6 = _UNK_150689678;
  dVar5 = ___xmm_3fe00000000000003fe0000000000000;
  dVar4 = __real_3fe0000000000000;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar9 = 0;
  uVar31._0_4_ = 0.0;
  uVar31._4_4_ = 0.0;
  uVar32._0_4_ = 0.0;
  uVar32._4_4_ = 0.0;
  local_1f0._s_0.Z = 0.0;
  local_128.R.V[0] = 0.0;
  local_128.R.V[1] = 0.0;
  local_128.R.V[2] = 0.0;
  local_128.R.V[3] = 0.0;
  local_128.R.V[4] = 0.0;
  local_128.R.V[5] = 0.0;
  local_128.R.V[6] = 0.0;
  local_128.R.V[7] = 0.0;
  local_128.R.V[8] = 0.0;
  local_128.R.V[9] = 0.0;
  local_128.R.V[10] = 0.0;
  local_128.R.V[0xb] = 0.0;
  local_128.G.V[0] = 0.0;
  local_128.G.V[1] = 0.0;
  local_128.G.V[2] = 0.0;
  local_128.G.V[3] = 0.0;
  local_128.G.V[4] = 0.0;
  local_128.G.V[5] = 0.0;
  local_128.G.V[6] = 0.0;
  local_128.G.V[7] = 0.0;
  local_128.G.V[8] = 0.0;
  local_128.G.V[9] = 0.0;
  local_128.G.V[10] = 0.0;
  local_128.G.V[0xb] = 0.0;
  local_128.B.V[0] = 0.0;
  local_128.B.V[1] = 0.0;
  local_128.B.V[2] = 0.0;
  local_128.B.V[3] = 0.0;
  local_128.B.V[4] = 0.0;
  local_128.B.V[5] = 0.0;
  local_128.B.V[6] = 0.0;
  local_128.B.V[7] = 0.0;
  local_128.B.V[8] = 0.0;
  local_128.B.V[9] = 0.0;
  local_128.B.V[10] = 0.0;
  local_128.B.V[0xb] = 0.0;
  local_1f0._s_0.X = 0.0;
  local_1f0._s_0.Y = 0.0;
  local_1f4 = 0.0;
  local_1f8 = 0.0;
  fVar14 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar27 = 0.0;
  fVar28 = 0.0;
  fVar29 = 0.0;
  fVar30 = 0.0;
  fVar33 = 0.0;
  fVar34 = 0.0;
  fVar35 = 0.0;
  fVar36 = 0.0;
  fVar37 = 0.0;
  fVar38 = 0.0;
  fVar39 = 0.0;
  fVar40 = 0.0;
  fVar41 = 0.0;
  fVar42 = 0.0;
  fVar43 = 0.0;
  fVar44 = 0.0;
  if (0 < (param_1->PrecomputedLightVolumes).ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (param_1->PrecomputedLightVolumes).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(FPrecomputedLightVolume **)
                 ((param_1->PrecomputedLightVolumes).AllocatorInstance.Data + lVar10);
      if (this_00 != (FPrecomputedLightVolume *)0x0) {
        dVar3 = dVar6 * (param_2->Size).field0_0x0._s_0.Y + (param_2->Min).field0_0x0._s_0.Y;
        local_1d8[0]._8_4_ = SUB84(dVar3,0);
        local_1d8[0]._0_8_ =
             dVar5 * (param_2->Size).field0_0x0._s_0.X + (param_2->Min).field0_0x0._s_0.X;
        local_1d8[0]._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_1d8[0]._16_8_ =
             (param_2->Size).field0_0x0._s_0.Z * dVar4 + (param_2->Min).field0_0x0._s_0.Z;
        FPrecomputedLightVolume::InterpolateIncidentRadiancePoint
                  (this_00,(TVector<double> *)&local_1d8[0]._s_0,&local_1f8,&local_1f4,&local_128,
                   (TVector<double> *)&local_1f0._s_0);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar9 < (param_1->PrecomputedLightVolumes).ArrayNum);
    fVar14 = local_128.R.V[0];
    fVar11 = local_128.R.V[1];
    fVar12 = local_128.R.V[2];
    fVar13 = local_128.R.V[3];
    fVar15 = local_128.G.V[0];
    fVar16 = local_128.G.V[1];
    fVar17 = local_128.G.V[2];
    fVar18 = local_128.G.V[3];
    fVar19 = local_128.B.V[0];
    fVar20 = local_128.B.V[1];
    fVar21 = local_128.B.V[2];
    fVar22 = local_128.B.V[3];
    fVar23 = local_128.R.V[4];
    fVar24 = local_128.R.V[5];
    fVar25 = local_128.R.V[6];
    fVar26 = local_128.R.V[7];
    fVar27 = local_128.R.V[8];
    fVar28 = local_128.R.V[9];
    fVar29 = local_128.R.V[10];
    fVar30 = local_128.R.V[0xb];
    fVar33 = local_128.G.V[8];
    fVar34 = local_128.G.V[9];
    fVar35 = local_128.G.V[10];
    fVar36 = local_128.G.V[0xb];
    fVar37 = local_128.B.V[4];
    fVar38 = local_128.B.V[5];
    fVar39 = local_128.B.V[6];
    fVar40 = local_128.B.V[7];
    fVar41 = local_128.B.V[8];
    fVar42 = local_128.B.V[9];
    fVar43 = local_128.B.V[10];
    fVar44 = local_128.B.V[0xb];
    uVar31 = local_128.G.V._16_8_;
    uVar32 = local_128.G.V._24_8_;
    if (0.0 < local_1f8) {
      fVar14 = __real_3f800000 / local_1f8;
      *param_3 = fVar14 * local_1f4;
      (param_4->R).V[0] = fVar14 * local_128.R.V[0];
      (param_4->R).V[1] = fVar14 * local_128.R.V[1];
      (param_4->R).V[2] = fVar14 * local_128.R.V[2];
      (param_4->R).V[3] = fVar14 * local_128.R.V[3];
      (param_4->R).V[4] = fVar14 * local_128.R.V[4];
      (param_4->R).V[5] = fVar14 * local_128.R.V[5];
      (param_4->R).V[6] = fVar14 * local_128.R.V[6];
      (param_4->R).V[7] = fVar14 * local_128.R.V[7];
      (param_4->R).V[8] = fVar14 * local_128.R.V[8];
      (param_4->R).V[9] = fVar14 * local_128.R.V[9];
      (param_4->R).V[10] = fVar14 * local_128.R.V[10];
      (param_4->R).V[0xb] = fVar14 * local_128.R.V[0xb];
      (param_4->G).V[0] = fVar14 * local_128.G.V[0];
      (param_4->G).V[1] = fVar14 * local_128.G.V[1];
      (param_4->G).V[2] = fVar14 * local_128.G.V[2];
      (param_4->G).V[3] = fVar14 * local_128.G.V[3];
      (param_4->G).V[4] = fVar14 * local_128.G.V[4];
      (param_4->G).V[5] = fVar14 * local_128.G.V[5];
      (param_4->G).V[6] = fVar14 * local_128.G.V[6];
      (param_4->G).V[7] = fVar14 * local_128.G.V[7];
      (param_4->G).V[8] = fVar14 * local_128.G.V[8];
      (param_4->G).V[9] = fVar14 * local_128.G.V[9];
      (param_4->G).V[10] = fVar14 * local_128.G.V[10];
      (param_4->G).V[0xb] = fVar14 * local_128.G.V[0xb];
      dVar4 = __real_3ff0000000000000;
      (param_4->B).V[0] = fVar14 * local_128.B.V[0];
      (param_4->B).V[1] = fVar14 * local_128.B.V[1];
      (param_4->B).V[2] = fVar14 * local_128.B.V[2];
      (param_4->B).V[3] = fVar14 * local_128.B.V[3];
      (param_4->B).V[4] = fVar14 * local_128.B.V[4];
      (param_4->B).V[5] = fVar14 * local_128.B.V[5];
      (param_4->B).V[6] = fVar14 * local_128.B.V[6];
      (param_4->B).V[7] = fVar14 * local_128.B.V[7];
      (param_4->B).V[8] = fVar14 * local_128.B.V[8];
      (param_4->B).V[9] = fVar14 * local_128.B.V[9];
      (param_4->B).V[10] = fVar14 * local_128.B.V[10];
      (param_4->B).V[0xb] = fVar14 * local_128.B.V[0xb];
      dVar4 = dVar4 / (double)local_1f8;
      auVar2._8_4_ = SUB84(local_1f0._s_0.Y * dVar4,0);
      auVar2._0_8_ = local_1f0._s_0.X * dVar4;
      auVar2._12_4_ = (int)((ulonglong)(local_1f0._s_0.Y * dVar4) >> 0x20);
      *(undefined1 (*) [16])&param_5->field0_0x0 = auVar2;
      (param_5->field0_0x0)._s_0.Z = dVar4 * local_1f0._s_0.Z;
      if (GCacheReduceSHRinging == 0) {
        return;
      }
      ReduceSHRinging<3>(param_4);
      return;
    }
  }
  (param_4->R).V[0] = fVar14;
  (param_4->R).V[1] = fVar11;
  (param_4->R).V[2] = fVar12;
  (param_4->R).V[3] = fVar13;
  (param_4->R).V[4] = fVar23;
  (param_4->R).V[5] = fVar24;
  (param_4->R).V[6] = fVar25;
  (param_4->R).V[7] = fVar26;
  (param_4->R).V[8] = fVar27;
  (param_4->R).V[9] = fVar28;
  (param_4->R).V[10] = fVar29;
  (param_4->R).V[0xb] = fVar30;
  (param_4->G).V[0] = fVar15;
  (param_4->G).V[1] = fVar16;
  (param_4->G).V[2] = fVar17;
  (param_4->G).V[3] = fVar18;
  *(undefined8 *)((param_4->G).V + 4) = uVar31;
  *(undefined8 *)((param_4->G).V + 6) = uVar32;
  (param_4->G).V[8] = fVar33;
  (param_4->G).V[9] = fVar34;
  (param_4->G).V[10] = fVar35;
  (param_4->G).V[0xb] = fVar36;
  (param_4->B).V[0] = fVar19;
  (param_4->B).V[1] = fVar20;
  (param_4->B).V[2] = fVar21;
  (param_4->B).V[3] = fVar22;
  (param_4->B).V[4] = fVar37;
  (param_4->B).V[5] = fVar38;
  (param_4->B).V[6] = fVar39;
  (param_4->B).V[7] = fVar40;
  (param_4->B).V[8] = fVar41;
  (param_4->B).V[9] = fVar42;
  (param_4->B).V[10] = fVar43;
  (param_4->B).V[0xb] = fVar44;
  *param_3 = 1.0;
  (param_5->field0_0x0)._s_0.X = 0.0;
  (param_5->field0_0x0)._s_0.Y = 0.0;
  (param_5->field0_0x0)._s_0.Z = 1.0;
  return;
}

// ProcessPrimitiveUpdate @ 144b33e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::ProcessPrimitiveUpdate
          (FIndirectLightingCache *this,FScene *param_1,FViewInfo *param_2,int param_3,bool param_4,
          bool param_5,
          TMap<UE::Math::TIntVector3<int>,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>_>
          *param_6,TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_> *param_7,
          TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *param_8)

{
  int *piVar1;
  TArray<FPrimitiveSceneInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  undefined1 uVar3;
  FPrimitiveSceneInfo **ppFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FPrimitiveSceneInfo *local_18 [2];
  
  uVar7 = 0;
  if (param_3 < (param_1->Primitives).ArrayNum) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18[0] = *(FPrimitiveSceneInfo **)
                 ((param_1->Primitives).AllocatorInstance.Data + (longlong)param_3 * 8);
  UpdateCachePrimitive
            (this,&param_1->AttachmentGroups,local_18[0],param_4,param_5,param_6,param_7,param_8);
  if ((!local_18[0]->bIndirectLightingCacheBufferDirty) &&
     (local_18[0]->bIndirectLightingCacheBufferDirty)) {
    pTVar2 = &param_2->DirtyIndirectLightingCacheBufferPrimitives;
    ppFVar4 = (pTVar2->AllocatorInstance).Data;
    if ((ppFVar4 <= local_18) &&
       (local_18 < ppFVar4 + (param_2->DirtyIndirectLightingCacheBufferPrimitives).ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (param_2->DirtyIndirectLightingCacheBufferPrimitives).ArrayNum;
    piVar1 = &(param_2->DirtyIndirectLightingCacheBufferPrimitives).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_2->DirtyIndirectLightingCacheBufferPrimitives).ArrayNum = iVar8 + 1;
    (pTVar2->AllocatorInstance).Data[iVar8] = local_18[0];
  }
  return;
}

// ReleasePrimitive @ 144b37eb0

void __thiscall
FIndirectLightingCache::ReleasePrimitive(FIndirectLightingCache *this,FPrimitiveComponentId param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  TIntVector3<int>_u_0 local_18;
  
  if (*(int *)&(this->PrimitiveAllocations).field_0x8 !=
      *(int *)&(this->PrimitiveAllocations).field_0x34) {
    puVar7 = *(undefined1 **)&(this->PrimitiveAllocations).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->PrimitiveAllocations).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->PrimitiveAllocations).field_0x48 - 1U &
                              param_1.PrimIDValue) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&(this->PrimitiveAllocations).field_0x0;
      while (lVar1 = lVar2 + (longlong)iVar8 * 0x18,
            *(uint *)(lVar2 + (longlong)iVar8 * 0x18) != param_1.PrimIDValue) {
        iVar8 = *(int *)(lVar1 + 0x10);
        if (iVar8 == -1) {
          return;
        }
      }
      pvVar3 = *(void **)(lVar1 + 8);
      TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
                       *)&this->PrimitiveAllocations,iVar8);
      if (pvVar3 == (void *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrimitiveAllocation",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                           ,0x16d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((((-1 < *(int *)((longlong)pvVar3 + 0x60)) && (-1 < *(int *)((longlong)pvVar3 + 100))) &&
          (-1 < *(int *)((longlong)pvVar3 + 0x68))) &&
         (uVar6 = *(uint *)((longlong)pvVar3 + 0x6c), 0 < (int)uVar6)) {
        local_18._0_8_ = *(undefined8 *)((longlong)pvVar3 + 0x60);
        local_18._s_0.Z = *(uint *)((longlong)pvVar3 + 0x68);
        if (1 < (int)uVar6) {
          bVar5 = FTextureLayout3d::RemoveElement
                            (&this->BlockAllocator,(uint)local_18._0_8_,
                             (uint)((ulonglong)local_18._0_8_ >> 0x20),local_18._s_0.Z,uVar6,uVar6,
                             uVar6);
          if (!bVar5) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("BlockAllocator.RemoveElement(Min.X, Min.Y, Min.Z, Size, Size, Size)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                               ,0xd0,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        if (*(int *)&(this->VolumeBlocks).field_0x8 != *(int *)&(this->VolumeBlocks).field_0x34) {
          uVar6 = FCrc::MemCrc_DEPRECATED(&local_18,0xc,0);
          TSet<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
          ::RemoveImpl<UE::Math::TIntVector3<int>_>
                    ((TSet<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
                      *)&this->VolumeBlocks,uVar6,(TIntVector3<int> *)&local_18._s_0);
        }
      }
      ::operator_delete(pvVar3,0x1e0);
    }
  }
  return;
}

// ReleaseRHI @ 144b38040

void __thiscall FIndirectLightingCache::ReleaseRHI(FIndirectLightingCache *this)

{
  FRenderTargetPool::FreeUnusedResource((FRenderTargetPool *)&GRenderTargetPool,&this->Texture0);
  FRenderTargetPool::FreeUnusedResource((FRenderTargetPool *)&GRenderTargetPool,&this->Texture1);
  FRenderTargetPool::FreeUnusedResource((FRenderTargetPool *)&GRenderTargetPool,&this->Texture2);
  return;
}

// SetLightingCacheDirty @ 144b46190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::SetLightingCacheDirty
          (FIndirectLightingCache *this,FScene *param_1,FPrecomputedLightVolume *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  if (param_2 == (FPrecomputedLightVolume *)0x0) {
    TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
                *)&this->PrimitiveAllocations);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar7 = local_88._24_8_ >> 0x20;
    uVar11 = local_88._28_4_;
    local_28 = (TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
                *)&this->PrimitiveAllocations;
    if ((int)uVar11 < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        *(undefined1 *)(*(longlong *)(*local_58 + 8 + (longlong)(int)uVar7 * 0x18) + 0x1d2) = 1;
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        *(undefined1 *)(*(longlong *)(*local_58 + 8 + (longlong)(int)uVar11 * 0x18) + 0x1d0) = 0;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar7 = (ulonglong)uStack_3c;
        uVar11 = uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar11 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (uVar11 < 4) {
          iVar6 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar11) && (local_28->HashSize < iVar6)) || (iVar6 < local_28->HashSize)) {
          local_28->HashSize = iVar6;
          TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
    this->bUpdateAllCacheEntries = true;
  }
  else {
    plVar12 = (longlong *)0x0;
    plVar9 = plVar12;
    plVar13 = plVar12;
    if (0 < (param_1->Primitives).ArrayNum) {
      do {
        uVar10 = (uint)plVar9;
        uVar11 = 0;
        if ((int)uVar10 < (param_1->Primitives).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)
                 ((longlong)plVar13 + (longlong)(param_1->Primitives).AllocatorInstance.Data);
        uVar11 = *(uint *)(lVar2 + 0x10);
        if (*(int *)&(this->PrimitiveAllocations).field_0x8 !=
            *(int *)&(this->PrimitiveAllocations).field_0x34) {
          puVar3 = *(undefined1 **)&(this->PrimitiveAllocations).field_0x40;
          puVar8 = &(this->PrimitiveAllocations).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar8 = puVar3;
          }
          iVar6 = *(int *)(puVar8 + (ulonglong)
                                    (*(int *)&(this->PrimitiveAllocations).field_0x48 - 1U & uVar11)
                                    * 4);
          if (iVar6 != -1) {
            do {
              lVar1 = *(longlong *)&this->PrimitiveAllocations + (longlong)iVar6 * 0x18;
              if (*(uint *)(*(longlong *)&this->PrimitiveAllocations + (longlong)iVar6 * 0x18) ==
                  uVar11) {
                plVar9 = (longlong *)(lVar1 + 8);
                if (lVar1 == 0) {
                  plVar9 = plVar12;
                }
                if (((plVar9 != (longlong *)0x0) && (lVar1 = *plVar9, lVar1 != 0)) &&
                   (bVar5 = FPrecomputedLightVolume::IntersectBounds
                                      (param_2,(TBoxSphereBounds<double,double> *)
                                               (*(longlong *)(lVar2 + 8) + 400)), bVar5)) {
                  *(undefined1 *)(lVar1 + 0x1d2) = 1;
                  *(undefined1 *)(lVar1 + 0x1d0) = 0;
                }
                break;
              }
              iVar6 = *(int *)(lVar1 + 0x10);
            } while (iVar6 != -1);
          }
        }
        plVar9 = (longlong *)(ulonglong)(uVar10 + 1);
        plVar13 = plVar13 + 1;
      } while ((int)(uVar10 + 1) < (param_1->Primitives).ArrayNum);
    }
  }
  return;
}

// StartUpdateCachePrimitivesTask @ 144b478a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::StartUpdateCachePrimitivesTask
          (FIndirectLightingCache *this,FScene *param_1,FSceneRenderer *param_2,bool param_3,
          FILCUpdatePrimTaskData *param_4)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  Type TVar4;
  FTaskBase *this_00;
  undefined8 *puVar5;
  ETaskPriority local_res8;
  EExtendedTaskPriority local_res20;
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x110,8);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFUpdateCachePrimitivesTask____6B_;
  }
  this_00[1]._padding_ = (longlong)param_2;
  this_00[1]._padding_ = (longlong)this;
  this_00[1]._padding_ = (longlong)param_1;
  *(bool *)&this_00[1].RefCount = param_3;
  this_00[1]._padding_ = (longlong)&param_4->OutBlocksToUpdate;
  this_00[1]._padding_ = (longlong)&param_4->OutTransitionsOverTimeToUpdate;
  this_00[1]._padding_ = (longlong)&param_4->OutPrimitivesToUpdateStaticMeshes;
  TVar4 = FUpdateCachePrimitivesTask::GetDesiredThread((FUpdateCachePrimitivesTask *)(this_00 + 1));
  UE::Tasks::Private::TranslatePriority(TVar4,&stack0x00000008,&stack0x00000020);
  UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_res8,local_res20,None);
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x110);
  if (param_4 == (FILCUpdatePrimTaskData *)&stack0xffffffffffffffd8) {
    if (this_00 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &this_00->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar5 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar3 = (FTaskBase *)(param_4->TaskRef).Reference;
    (param_4->TaskRef).Reference = (FBaseGraphTask *)this_00;
    if (pFVar3 == (FTaskBase *)0x0) {
      return;
    }
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<unsigned_int>)0x1) {
      return;
    }
    puVar5 = (undefined8 *)pFVar3->_padding_;
    this_00 = pFVar3;
  }
  (*(code *)*puVar5)(this_00,1);
  return;
}

// UpdateBlock @ 144b4c250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::UpdateBlock
          (FIndirectLightingCache *this,FScene *param_1,FViewInfo *param_2,FBlockUpdateInfo *param_3
          )

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  FIndirectLightingCacheAllocation *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  Type TVar13;
  int iVar14;
  FStaticShaderPlatform FVar15;
  uint uVar16;
  FIndirectLightingCacheAllocation **ppFVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float local_168 [2];
  FUpdateTextureRegion3D local_160;
  TSHVectorRGB<3> local_138;
  TVector<double>_u_0 local_a8;
  FLinearColor_u_0 local_90;
  TVector<double>_u_0 local_80 [2];
  
  dVar6 = __real_3ff0000000000000;
  iVar14 = (param_3->Block).TexelSize;
  local_a8._s_0.Z = __real_3ff0000000000000;
  local_168[0] = 1.0;
  uVar16 = iVar14 * iVar14 * iVar14;
  local_138.R.V[0] = 0.0;
  local_138.R.V[1] = 0.0;
  local_138.R.V[2] = 0.0;
  local_138.R.V[3] = 0.0;
  local_138.R.V[4] = 0.0;
  local_138.R.V[5] = 0.0;
  local_138.R.V[6] = 0.0;
  local_138.R.V[7] = 0.0;
  local_138.R.V[8] = 0.0;
  local_138.R.V[9] = 0.0;
  local_138.R.V[10] = 0.0;
  local_138.R.V[0xb] = 0.0;
  local_138.G.V[0] = 0.0;
  local_138.G.V[1] = 0.0;
  local_138.G.V[2] = 0.0;
  local_138.G.V[3] = 0.0;
  local_138.G.V[4] = 0.0;
  local_138.G.V[5] = 0.0;
  local_138.G.V[6] = 0.0;
  local_138.G.V[7] = 0.0;
  local_138.G.V[8] = 0.0;
  local_138.G.V[9] = 0.0;
  local_138.G.V[10] = 0.0;
  local_138.G.V[0xb] = 0.0;
  local_138.B.V[0] = 0.0;
  local_138.B.V[1] = 0.0;
  local_138.B.V[2] = 0.0;
  local_138.B.V[3] = 0.0;
  local_138.B.V[4] = 0.0;
  local_138.B.V[5] = 0.0;
  local_138.B.V[6] = 0.0;
  local_138.B.V[7] = 0.0;
  local_138.B.V[8] = 0.0;
  local_138.B.V[9] = 0.0;
  local_138.B.V[10] = 0.0;
  local_138.B.V[0xb] = 0.0;
  local_a8._s_0.X = 0.0;
  local_a8._s_0.Y = 0.0;
  InterpolatePoint(this,param_1,&param_3->Block,local_168,&local_138,
                   (TVector<double> *)&local_a8._s_0);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar13 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar13 = GMaxRHIFeatureLevel;
  }
  if (2 < (int)TVar13) {
    if (TVar13 == Num) {
      FVar15.Platform = SP_NumPlatforms;
    }
    else {
      FVar15.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar13];
    }
    bVar12 = RHISupportsVolumeTextureRendering(FVar15);
    if ((bVar12) && (param_3->Allocation->bPointSample == false)) {
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FIndirectLightingCache::UpdateBlock'::__l5::
               _dynamic_atexit_destructor_for__AccumulatedWeight__);
        _Init_thread_footer(&::_TSS0);
      }
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      AccumulatedWeight.ArrayNum = 0;
      if (AccumulatedWeight.ArrayMax < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar16,&AccumulatedWeight.AllocatorInstance,0,&AccumulatedWeight.ArrayMax);
      }
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar16,&AccumulatedWeight.AllocatorInstance,
                          &AccumulatedWeight.ArrayNum,&AccumulatedWeight.ArrayMax);
      memset(AccumulatedWeight.AllocatorInstance.Data + (longlong)iVar14 * 4,0,
             (longlong)(int)uVar16 * 4);
      if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        atexit(`FIndirectLightingCache::UpdateBlock'::__l5::
               _dynamic_atexit_destructor_for__AccumulatedIncidentRadiance__);
        _Init_thread_footer(&::_TSS1);
      }
      AccumulatedIncidentRadiance.ArrayNum = 0;
      if (AccumulatedIncidentRadiance.ArrayMax < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,uVar16,&AccumulatedIncidentRadiance.AllocatorInstance,0,
                   &AccumulatedIncidentRadiance.ArrayMax);
      }
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x30,0x10,uVar16,&AccumulatedIncidentRadiance.AllocatorInstance,
                          &AccumulatedIncidentRadiance.ArrayNum,
                          &AccumulatedIncidentRadiance.ArrayMax);
      memset(AccumulatedIncidentRadiance.AllocatorInstance.Data + (longlong)iVar14 * 0x30,0,
             (longlong)(int)uVar16 * 0x30);
      InterpolateBlock(this,param_1,&param_3->Block,&AccumulatedWeight,&AccumulatedIncidentRadiance)
      ;
      if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        atexit(`FIndirectLightingCache::UpdateBlock'::__l5::
               _dynamic_atexit_destructor_for__Texture0Data__);
        _Init_thread_footer(&::_TSS2);
      }
      if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
        atexit(`FIndirectLightingCache::UpdateBlock'::__l5::
               _dynamic_atexit_destructor_for__Texture1Data__);
        _Init_thread_footer(&::_TSS3);
      }
      if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        atexit(`FIndirectLightingCache::UpdateBlock'::__l5::
               _dynamic_atexit_destructor_for__Texture2Data__);
        _Init_thread_footer(&::_TSS4);
      }
      Texture0Data.ArrayNum = 0;
      if (Texture0Data.ArrayMax < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,2,uVar16,&Texture0Data.AllocatorInstance,0,&Texture0Data.ArrayMax);
      }
      Texture1Data.ArrayNum = 0;
      if (Texture1Data.ArrayMax < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,2,uVar16,&Texture1Data.AllocatorInstance,0,&Texture1Data.ArrayMax);
      }
      Texture2Data.ArrayNum = 0;
      if (Texture2Data.ArrayMax < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,2,uVar16,&Texture2Data.AllocatorInstance,0,&Texture2Data.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,2,uVar16,&Texture0Data.AllocatorInstance,&Texture0Data.ArrayNum,
                 &Texture0Data.ArrayMax);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,2,uVar16,&Texture1Data.AllocatorInstance,&Texture1Data.ArrayNum,
                 &Texture1Data.ArrayMax);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,2,uVar16,&Texture2Data.AllocatorInstance,&Texture2Data.ArrayNum,
                 &Texture2Data.ArrayMax);
      iVar14 = GPixelFormats[10].BlockBytes;
      if ((GPixelFormats[10].BlockBytes != 8) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("FormatSize == sizeof(FFloat16Color)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                              ,0x36e,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EncodeBlock(this,param_2,&param_3->Block,&AccumulatedWeight,&AccumulatedIncidentRadiance,
                  &Texture0Data,&Texture1Data,&Texture2Data);
      local_160.Width = (param_3->Block).TexelSize;
      local_160.DestX = (param_3->Block).MinTexel.field0_0x0._s_0.X;
      local_160.DestY = (param_3->Block).MinTexel.field0_0x0._s_0.Y;
      local_160.DestZ = (param_3->Block).MinTexel.field0_0x0._s_0.Z;
      local_160.SrcX = 0;
      local_160.SrcY = 0;
      local_160.SrcZ = 0;
      local_160.Height = local_160.Width;
      local_160.Depth = local_160.Width;
      FRHICommandListBase::UpdateTexture3D
                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 (((this->Texture0).Reference)->RenderTargetItem).TargetableTexture.Reference,0,
                 &local_160,local_160.Width * iVar14,local_160.Width * local_160.Width * iVar14,
                 (uchar *)Texture0Data.AllocatorInstance.Data);
      iVar2 = (param_3->Block).TexelSize;
      FRHICommandListBase::UpdateTexture3D
                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 (((this->Texture1).Reference)->RenderTargetItem).TargetableTexture.Reference,0,
                 &local_160,iVar2 * iVar14,iVar2 * iVar2 * iVar14,
                 (uchar *)Texture1Data.AllocatorInstance.Data);
      iVar2 = (param_3->Block).TexelSize;
      FRHICommandListBase::UpdateTexture3D
                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 (((this->Texture2).Reference)->RenderTargetItem).TargetableTexture.Reference,0,
                 &local_160,iVar2 * iVar14,iVar2 * iVar2 * iVar14,
                 (uchar *)Texture2Data.AllocatorInstance.Data);
      goto LAB_144b4c83d;
    }
  }
  if ((GCacheDrawInterpolationPoints != 0) && (param_2 != (FViewInfo *)0x0)) {
    local_80[0]._0_8_ = (param_3->Block).Min.field0_0x0._s_0.X;
    local_80[0]._8_8_ = (param_3->Block).Min.field0_0x0._s_0.Y;
    local_80[0]._16_8_ = (param_3->Block).Min.field0_0x0._s_0.Z;
    local_90._0_8_ = ___xmm_3f8000003f8000000000000000000000;
    local_90._8_8_ = _UNK_15076b1e8;
    fVar22 = __real_41200000;
    if (dVar6 < (double)param_2->_padding_ || dVar6 == (double)param_2->_padding_) {
      dVar20 = (double)(float)(double)param_2->_padding_;
      if ((double)param_2->_padding_ <= (double)(float)(double)param_2->_padding_) {
        dVar20 = (double)param_2->_padding_;
      }
      fVar22 = __real_41200000 / (float)dVar20;
    }
    FBatchedElements::AddPoint
              (param_2->BatchedViewElements,(TVector<double> *)&local_80[0]._s_0,fVar22,
               (FLinearColor *)&local_90._s_0,(FHitProxyId)0xffffffff);
  }
LAB_144b4c83d:
  ppFVar17 = &param_3->Allocation;
  pFVar4 = *ppFVar17;
  dVar20 = (param_3->Block).Size.field0_0x0._s_0.Y;
  dVar21 = (param_3->Block).Size.field0_0x0._s_0.Z;
  dVar7 = (param_3->Block).Min.field0_0x0._s_0.Y;
  dVar8 = (param_3->Block).Min.field0_0x0._s_0.Z;
  (pFVar4->TargetPosition).field0_0x0._s_0.X =
       (param_3->Block).Size.field0_0x0._s_0.X * __real_3fe0000000000000 +
       (param_3->Block).Min.field0_0x0._s_0.X;
  dVar21 = _UNK_150689678 * dVar21;
  (pFVar4->TargetPosition).field0_0x0._s_0.Y =
       ___xmm_3fe00000000000003fe0000000000000 * dVar20 + dVar7;
  (pFVar4->TargetPosition).field0_0x0._s_0.Z = dVar21 + dVar8;
  fVar11 = _UNK_150e49acc;
  fVar10 = _UNK_150e49ac8;
  fVar23 = _UNK_150e49ac4;
  fVar22 = ___xmm_3ea2f9833ea2f9833ea2f9833ea2f983;
  pFVar4 = *ppFVar17;
  local_138.R.V[1] = local_138.R.V[1] * _UNK_150e49ac4;
  local_138.R.V[2] = local_138.R.V[2] * _UNK_150e49ac8;
  local_138.R.V[3] = local_138.R.V[3] * _UNK_150e49acc;
  local_138.G.V[0] = local_138.G.V[0] * ___xmm_3ea2f9833ea2f9833ea2f9833ea2f983;
  local_138.G.V[1] = local_138.G.V[1] * _UNK_150e49ac4;
  local_138.G.V[2] = local_138.G.V[2] * _UNK_150e49ac8;
  local_138.G.V[3] = local_138.G.V[3] * _UNK_150e49acc;
  local_138.G.V[8] = local_138.G.V[8] * ___xmm_3ea2f9833ea2f9833ea2f9833ea2f983;
  pFVar4->TargetSamplePacked0[0].field0_0x0._s_0.X =
       local_138.R.V[0] * ___xmm_3ea2f9833ea2f9833ea2f9833ea2f983;
  pFVar4->TargetSamplePacked0[0].field0_0x0._s_0.Y = local_138.R.V[1];
  pFVar4->TargetSamplePacked0[0].field0_0x0._s_0.Z = local_138.R.V[2];
  pFVar4->TargetSamplePacked0[0].field0_0x0._s_0.W = local_138.R.V[3];
  pFVar4 = *ppFVar17;
  pFVar4->TargetSamplePacked0[1].field0_0x0._s_0.X = local_138.G.V[0];
  pFVar4->TargetSamplePacked0[1].field0_0x0._s_0.Y = local_138.G.V[1];
  pFVar4->TargetSamplePacked0[1].field0_0x0._s_0.Z = local_138.G.V[2];
  pFVar4->TargetSamplePacked0[1].field0_0x0._s_0.W = local_138.G.V[3];
  pFVar4 = *ppFVar17;
  pFVar4->TargetSamplePacked0[2].field0_0x0._s_0.X = local_138.B.V[0] * fVar22;
  pFVar4->TargetSamplePacked0[2].field0_0x0._s_0.Y = local_138.B.V[1] * fVar23;
  pFVar4->TargetSamplePacked0[2].field0_0x0._s_0.Z = local_138.B.V[2] * fVar10;
  pFVar4->TargetSamplePacked0[2].field0_0x0._s_0.W = local_138.B.V[3] * fVar11;
  pFVar4 = *ppFVar17;
  pFVar4->TargetSamplePacked1[0].field0_0x0._s_0.X = local_138.R.V[4] * fVar22;
  pFVar4->TargetSamplePacked1[0].field0_0x0._s_0.Y = local_138.R.V[5] * fVar23;
  pFVar4->TargetSamplePacked1[0].field0_0x0._s_0.Z = local_138.R.V[6] * fVar10;
  pFVar4->TargetSamplePacked1[0].field0_0x0._s_0.W = local_138.R.V[7] * fVar11;
  pFVar4 = *ppFVar17;
  pFVar4->TargetSamplePacked1[1].field0_0x0._s_0.X = local_138.G.V[4] * fVar22;
  pFVar4->TargetSamplePacked1[1].field0_0x0._s_0.Y = local_138.G.V[5] * fVar23;
  pFVar4->TargetSamplePacked1[1].field0_0x0._s_0.Z = local_138.G.V[6] * fVar10;
  pFVar4->TargetSamplePacked1[1].field0_0x0._s_0.W = local_138.G.V[7] * fVar11;
  pFVar4 = *ppFVar17;
  pFVar4->TargetSamplePacked1[2].field0_0x0._s_0.X = local_138.B.V[4] * fVar22;
  pFVar4->TargetSamplePacked1[2].field0_0x0._s_0.Y = local_138.B.V[5] * fVar23;
  pFVar4->TargetSamplePacked1[2].field0_0x0._s_0.Z = local_138.B.V[6] * fVar10;
  pFVar4->TargetSamplePacked1[2].field0_0x0._s_0.W = local_138.B.V[7] * fVar11;
  pFVar4 = *ppFVar17;
  (pFVar4->TargetSamplePacked2).field0_0x0._s_0.X = local_138.R.V[8] * fVar22;
  (pFVar4->TargetSamplePacked2).field0_0x0._s_0.Y = local_138.G.V[8];
  (pFVar4->TargetSamplePacked2).field0_0x0._s_0.Z = local_138.B.V[8] * fVar22;
  (pFVar4->TargetSamplePacked2).field0_0x0._s_0.W = 0.0;
  (*ppFVar17)->TargetDirectionalShadowing = local_168[0];
  auVar18._0_8_ = local_a8._s_0.X * local_a8._s_0.X;
  auVar18._8_8_ = 0;
  auVar19._8_8_ = 0;
  auVar19._0_8_ =
       local_a8._s_0.Y * local_a8._s_0.Y + auVar18._0_8_ + local_a8._s_0.Z * local_a8._s_0.Z;
  auVar19 = sqrtpd(auVar18,auVar19);
  fVar23 = (float)auVar19._0_8_;
  fVar22 = fVar23;
  if (fVar23 <= __real_38d1b717) {
    fVar22 = __real_38d1b717;
  }
  pFVar4 = *ppFVar17;
  dVar6 = dVar6 / (double)fVar22;
  (pFVar4->TargetSkyBentNormal).field0_0x0._s_0.X = (float)(dVar6 * local_a8._s_0.X);
  (pFVar4->TargetSkyBentNormal).field0_0x0._s_0.Y = (float)(dVar6 * local_a8._s_0.Y);
  (pFVar4->TargetSkyBentNormal).field0_0x0._s_0.Z = (float)(dVar6 * local_a8._s_0.Z);
  (pFVar4->TargetSkyBentNormal).field0_0x0._s_0.W = fVar23;
  pFVar4 = *ppFVar17;
  if (pFVar4->bHasEverUpdatedSingleSample == false) {
    dVar6 = (pFVar4->TargetPosition).field0_0x0._s_0.Y;
    (pFVar4->SingleSamplePosition).field0_0x0._s_0.X = (pFVar4->TargetPosition).field0_0x0._s_0.X;
    (pFVar4->SingleSamplePosition).field0_0x0._s_0.Y = dVar6;
    (pFVar4->SingleSamplePosition).field0_0x0._s_0.Z = (pFVar4->TargetPosition).field0_0x0._s_0.Z;
    pFVar4 = *ppFVar17;
    uVar9 = *(undefined8 *)((longlong)&pFVar4->TargetSamplePacked0[0].field0_0x0 + 8);
    *(undefined8 *)&pFVar4->SingleSamplePacked0[0].field0_0x0 =
         *(undefined8 *)&pFVar4->TargetSamplePacked0[0].field0_0x0;
    *(undefined8 *)((longlong)&pFVar4->SingleSamplePacked0[0].field0_0x0 + 8) = uVar9;
    pFVar4 = *ppFVar17;
    uVar9 = *(undefined8 *)((longlong)&pFVar4->TargetSamplePacked1[0].field0_0x0 + 8);
    *(undefined8 *)&pFVar4->SingleSamplePacked1[0].field0_0x0 =
         *(undefined8 *)&pFVar4->TargetSamplePacked1[0].field0_0x0;
    *(undefined8 *)((longlong)&pFVar4->SingleSamplePacked1[0].field0_0x0 + 8) = uVar9;
    pFVar4 = *ppFVar17;
    uVar9 = *(undefined8 *)((longlong)&pFVar4->TargetSamplePacked0[1].field0_0x0 + 8);
    *(undefined8 *)&pFVar4->SingleSamplePacked0[1].field0_0x0 =
         *(undefined8 *)&pFVar4->TargetSamplePacked0[1].field0_0x0;
    *(undefined8 *)((longlong)&pFVar4->SingleSamplePacked0[1].field0_0x0 + 8) = uVar9;
    pFVar4 = *ppFVar17;
    uVar9 = *(undefined8 *)((longlong)&pFVar4->TargetSamplePacked1[1].field0_0x0 + 8);
    *(undefined8 *)&pFVar4->SingleSamplePacked1[1].field0_0x0 =
         *(undefined8 *)&pFVar4->TargetSamplePacked1[1].field0_0x0;
    *(undefined8 *)((longlong)&pFVar4->SingleSamplePacked1[1].field0_0x0 + 8) = uVar9;
    pFVar4 = *ppFVar17;
    uVar9 = *(undefined8 *)((longlong)&pFVar4->TargetSamplePacked0[2].field0_0x0 + 8);
    *(undefined8 *)&pFVar4->SingleSamplePacked0[2].field0_0x0 =
         *(undefined8 *)&pFVar4->TargetSamplePacked0[2].field0_0x0;
    *(undefined8 *)((longlong)&pFVar4->SingleSamplePacked0[2].field0_0x0 + 8) = uVar9;
    pFVar4 = *ppFVar17;
    uVar9 = *(undefined8 *)((longlong)&pFVar4->TargetSamplePacked1[2].field0_0x0 + 8);
    *(undefined8 *)&pFVar4->SingleSamplePacked1[2].field0_0x0 =
         *(undefined8 *)&pFVar4->TargetSamplePacked1[2].field0_0x0;
    *(undefined8 *)((longlong)&pFVar4->SingleSamplePacked1[2].field0_0x0 + 8) = uVar9;
    pFVar4 = *ppFVar17;
    uVar9 = *(undefined8 *)((longlong)&(pFVar4->TargetSamplePacked2).field0_0x0 + 8);
    *(undefined8 *)&(pFVar4->SingleSamplePacked2).field0_0x0 =
         *(undefined8 *)&(pFVar4->TargetSamplePacked2).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar4->SingleSamplePacked2).field0_0x0 + 8) = uVar9;
    (*ppFVar17)->CurrentDirectionalShadowing = (*ppFVar17)->TargetDirectionalShadowing;
    pFVar4 = *ppFVar17;
    uVar9 = *(undefined8 *)((longlong)&(pFVar4->TargetSkyBentNormal).field0_0x0 + 8);
    *(undefined8 *)&(pFVar4->CurrentSkyBentNormal).field0_0x0 =
         *(undefined8 *)&(pFVar4->TargetSkyBentNormal).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar4->CurrentSkyBentNormal).field0_0x0 + 8) = uVar9;
    (*ppFVar17)->bHasEverUpdatedSingleSample = true;
  }
  (param_3->Block).bHasEverBeenUpdated = true;
  return;
}

// UpdateBlocks @ 144b4cc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::UpdateBlocks
          (FIndirectLightingCache *this,FScene *param_1,FViewInfo *param_2,
          TMap<UE::Math::TIntVector3<int>,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>_>
          *param_3)

{
  code *pcVar1;
  FName FVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_IndirectLightingCacheUpdates> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar8;
  uint uVar9;
  FName local_res20;
  FStatMessage local_c8;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  FName local_78;
  undefined1 local_70 [32];
  longlong local_50;
  TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
  *pTStack_48;
  
  if ((0 < *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34) &&
     ((int)this->_padding_ == -1)) {
    pcVar1 = *(code **)(this->_padding_ + 0x18);
    bVar4 = IsInRenderingThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*pcVar1)(this,0x154be5ed0);
  }
  iVar5 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  if ((iVar5 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar7 = StatPtr_STAT_IndirectLightingCacheUpdates;
    if (StatPtr_STAT_IndirectLightingCacheUpdates ==
        (FThreadSafeStaticStat<FStat_STAT_IndirectLightingCacheUpdates>)0x0) {
      pFVar6 = ::FName::FName(&local_78,"STAT_IndirectLightingCacheUpdates");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_IndirectLightingCacheUpdates>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IndirectLightingCacheUpdates,
                         *pFVar6,L"Indirect Lighting Cache updates","STATGROUP_InitViews",
                         "STATCAT_Advanced",L"Init Views",true,true,ST_int64,false,false,MCR_Invalid
                        );
    }
    FVar2 = *(FName *)FVar7;
    local_res20 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_c8.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res20 = FVar2;
      local_c8.StatData.Pad = (uchar  [8])(longlong)iVar5;
      local_c8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_c8);
      FStatsTrace::Add(&local_res20,(longlong)iVar5);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_70,
             (TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
              *)param_3);
  local_b8 = (longlong *)local_70._0_8_;
  auStack_b0._0_8_ = local_70._8_8_;
  local_80 = 0;
  stack0xffffffffffffff58 = local_70._16_16_;
  local_98 = local_50;
  pTStack_90 = pTStack_48;
  uVar8 = local_70._24_8_ >> 0x20;
  local_88 = (TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
              *)param_3;
  if (local_70._28_4_ < *(int *)(local_70._16_8_ + 0x18)) {
    do {
      UpdateBlock(this,param_1,param_2,
                  (FBlockUpdateInfo *)(*local_b8 + 0x10 + (longlong)(int)uVar8 * 0x68));
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      uVar8 = (ulonglong)uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      uVar9 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar5 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_88->HashSize < iVar5)) || (iVar5 < local_88->HashSize)) {
        local_88->HashSize = iVar5;
        TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  return;
}

// UpdateCache @ 144b4cf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::UpdateCache
          (FIndirectLightingCache *this,FScene *param_1,FSceneRenderer *param_2,bool param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCache> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FNameEntryId FVar10;
  FName FVar11;
  undefined1 auStackY_148 [32];
  LARGE_INTEGER local_e0;
  FName local_d8;
  TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_> local_b8;
  FStatMessage local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FVar9.Value = 0;
  FVar7 = StatPtr_STAT_UpdateIndirectLightingCache;
  if (StatPtr_STAT_UpdateIndirectLightingCache ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCache>)0x0) {
    pFVar6 = ::FName::FName((FName *)&local_a8,"STAT_UpdateIndirectLightingCache");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCache>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateIndirectLightingCache,
                       *pFVar6,L"Update Indirect Lighting Cache","STATGROUP_InitViews",
                       "STATCAT_Advanced",L"Init Views",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar11 = *(FName *)FVar7;
  bVar2 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar8 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e0.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e0.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.s.LowPart = FVar10.Value;
        local_e0.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_e0.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                   ,0x1ca);
        bVar2 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0.s.LowPart = FVar10.Value;
      local_e0.s.HighPart = uVar8;
      local_d8 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar9.Value = local_d8.ComparisonIndex.Value;
      goto LAB_144b4d077;
    }
  }
  bVar3 = false;
  FVar11 = local_d8;
LAB_144b4d077:
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  UpdateCachePrimitivesInternal
            (this,param_1,param_2,param_3,
             (TMap<UE::Math::TIntVector3<int>,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>_>
              *)local_98,&local_b8,&local_c8);
  FinalizeUpdateInternal_RenderThread
            (this,param_1,param_2,
             (TMap<UE::Math::TIntVector3<int>,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>_>
              *)local_98,&local_b8,&local_c8);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  iVar4 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_a8.NameAndInfo.Index.Value = FVar9.Value;
      QueryPerformanceCounter(&local_e0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateCacheAllocation @ 144b4d2a0

bool __thiscall
FIndirectLightingCache::UpdateCacheAllocation
          (FIndirectLightingCache *this,TBoxSphereBounds<double,double> *param_1,int param_2,
          bool param_3,bool param_4,FIndirectLightingCacheAllocation **param_5,
          TMap<UE::Math::TIntVector3<int>,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>_>
          *param_6,TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_> *param_7)

{
  undefined8 uVar1;
  int iVar2;
  FIndirectLightingCacheAllocation *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FIndirectLightingCacheAllocation **ppFVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FIndirectLightingCacheBlock *pFVar11;
  undefined1 *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  double dVar16;
  undefined8 local_268;
  int local_260;
  TPairInitializer<UE::Math::TIntVector3<int>_const_&,FBlockUpdateInfo_&&> local_258;
  TIntVector3<int>_u_0 local_248;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  int *local_208;
  undefined8 *local_200;
  TIntVector3<int> *local_1f8;
  undefined8 *local_1f0;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  FIndirectLightingCacheAllocation *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  FIndirectLightingCacheAllocation *local_b0;
  
  ppFVar7 = param_5;
  pFVar3 = *param_5;
  if (((((pFVar3 == (FIndirectLightingCacheAllocation *)0x0) ||
        ((pFVar3->MinTexel).field0_0x0._s_0.X < 0)) || ((pFVar3->MinTexel).field0_0x0._s_0.Y < 0))
      || (((pFVar3->MinTexel).field0_0x0._s_0.Z < 0 || (pFVar3->AllocationTexelSize < 1)))) ||
     ((pFVar3->AllocationTexelSize != param_2 || (pFVar3->bPointSample != param_3)))) {
    ::operator_delete(pFVar3,0x1e0);
    local_b0 = CreateAllocation(this,param_2,param_1,param_3,param_4);
    *ppFVar7 = local_b0;
    if ((((-1 < (local_b0->MinTexel).field0_0x0._s_0.X) &&
         (-1 < (local_b0->MinTexel).field0_0x0._s_0.Y)) &&
        (-1 < (local_b0->MinTexel).field0_0x0._s_0.Z)) && (0 < local_b0->AllocationTexelSize)) {
      pFVar11 = TMapBase<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>_>
                ::FindChecked((TMapBase<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock,0>_>
                               *)&this->VolumeBlocks,&local_b0->MinTexel);
      local_f8 = *(undefined8 *)&(pFVar11->MinTexel).field0_0x0;
      uStack_f0 = *(undefined8 *)((longlong)&(pFVar11->MinTexel).field0_0x0 + 8);
      local_e8 = (pFVar11->Min).field0_0x0._s_0.X;
      dStack_e0 = (pFVar11->Min).field0_0x0._s_0.Y;
      local_d8 = (pFVar11->Min).field0_0x0._s_0.Z;
      dStack_d0 = (pFVar11->Size).field0_0x0._s_0.X;
      local_c8 = (pFVar11->Size).field0_0x0._s_0.Y;
      dStack_c0 = (pFVar11->Size).field0_0x0._s_0.Z;
      local_b8 = *(undefined8 *)&pFVar11->bHasEverBeenUpdated;
      local_1f8 = &(*ppFVar7)->MinTexel;
      local_1f0 = &local_f8;
      TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Math::TIntVector3<int>_const_&,FBlockUpdateInfo_&&>_>
                ((TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
                  *)param_6,&local_258,(bool *)&local_1f8);
    }
  }
  else {
    local_268 = *(undefined8 *)&(pFVar3->MinTexel).field0_0x0;
    local_260 = (pFVar3->MinTexel).field0_0x0._s_0.Z;
    uVar10 = FCrc::MemCrc_DEPRECATED(&local_268,0xc,0);
    if (*(int *)&(this->VolumeBlocks).field_0x8 != *(int *)&(this->VolumeBlocks).field_0x34) {
      puVar12 = *(undefined1 **)&(this->VolumeBlocks).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->VolumeBlocks).field_0x38;
      }
      iVar14 = *(int *)(puVar12 +
                       (ulonglong)(*(int *)&(this->VolumeBlocks).field_0x48 - 1U & uVar10) * 4);
      if (iVar14 != -1) {
        do {
          piVar13 = (int *)((longlong)iVar14 * 0x60 + *(longlong *)&this->VolumeBlocks);
          if (((*piVar13 == (int)local_268) && (piVar13[1] == local_268._4_4_)) &&
             (piVar13[2] == local_260)) {
            if (iVar14 != -1) {
              if (piVar13 != (int *)0x0) goto LAB_144b4d3e4;
              goto LAB_144b4d3be;
            }
            break;
          }
          iVar14 = piVar13[0x16];
        } while (iVar14 != -1);
      }
    }
    piVar13 = (int *)0x0;
LAB_144b4d3be:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
LAB_144b4d3e4:
    CalculateBlockPositionAndSize
              (this,param_1,piVar13[7],(TVector<double> *)&local_238._s_0,
               (TVector<double> *)&local_220._s_0);
    pFVar3 = *ppFVar7;
    if ((((pFVar3->bIsDirty != false) || (GCacheUpdateEveryFrame != 0)) ||
        ((uVar10 = SUB84(*(double *)(piVar13 + 8) - local_238._s_0.X,0) &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar15 = (uint)((ulonglong)(*(double *)(piVar13 + 8) - local_238._s_0.X) >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar10) &&
         (double)CONCAT44(uVar15,uVar10) != __real_3f1a36e2e0000000 ||
         ((uVar10 = SUB84(*(double *)(piVar13 + 10) - local_238._s_0.Y,0) &
                    (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar15 = (uint)((ulonglong)(*(double *)(piVar13 + 10) - local_238._s_0.Y) >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar10) &&
          (double)CONCAT44(uVar15,uVar10) != __real_3f1a36e2e0000000 ||
          (uVar10 = SUB84(*(double *)(piVar13 + 0xc) - local_238._s_0.Z,0) &
                    (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar15 = (uint)((ulonglong)(*(double *)(piVar13 + 0xc) - local_238._s_0.Z) >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar10) &&
          (double)CONCAT44(uVar15,uVar10) != __real_3f1a36e2e0000000)))))) ||
       ((uVar10 = SUB84(*(double *)(piVar13 + 0xe) - local_220._s_0.X,0) &
                  (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar15 = (uint)((ulonglong)(*(double *)(piVar13 + 0xe) - local_220._s_0.X) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar10) &&
        (double)CONCAT44(uVar15,uVar10) != __real_3f1a36e2e0000000 ||
        ((uVar10 = SUB84(*(double *)(piVar13 + 0x10) - local_220._s_0.Y,0) &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar15 = (uint)((ulonglong)(*(double *)(piVar13 + 0x10) - local_220._s_0.Y) >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar10) &&
         (double)CONCAT44(uVar15,uVar10) != __real_3f1a36e2e0000000 ||
         (uVar10 = SUB84(*(double *)(piVar13 + 0x12) - local_220._s_0.Z,0) &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar15 = (uint)((ulonglong)(*(double *)(piVar13 + 0x12) - local_220._s_0.Z) >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar15,uVar10) &&
         (double)CONCAT44(uVar15,uVar10) != __real_3f1a36e2e0000000)))))) {
      *(double *)(piVar13 + 8) = local_238._s_0.X;
      *(double *)(piVar13 + 10) = local_238._s_0.Y;
      *(double *)(piVar13 + 0xe) = local_220._s_0.X;
      *(double *)(piVar13 + 0x10) = local_220._s_0.Y;
      *(double *)(piVar13 + 0xc) = local_238._s_0.Z;
      *(double *)(piVar13 + 0x12) = local_220._s_0.Z;
      pFVar3 = *ppFVar7;
      local_248._s_0.Z = (pFVar3->MinTexel).field0_0x0._s_0.Z;
      local_248._0_8_ = *(undefined8 *)&(pFVar3->MinTexel).field0_0x0;
      local_1e8._s_0.X = local_220._s_0.X;
      local_1e8._s_0.Y = local_220._s_0.Y;
      local_1e8._s_0.Z = local_220._s_0.Z;
      local_1c8._s_0.X = local_238._s_0.X;
      local_1c8._s_0.Y = local_238._s_0.Y;
      local_1c8._s_0.Z = local_238._s_0.Z;
      CalculateBlockScaleAndAdd
                (this,(TIntVector3<int> *)&local_248._s_0,pFVar3->AllocationTexelSize,
                 (TVector<double> *)&local_1c8._s_0,(TVector<double> *)&local_1e8._s_0,
                 (TVector<double> *)&local_160._s_0,(TVector<double> *)&local_178._s_0,
                 (TVector<double> *)&local_190._s_0,(TVector<double> *)&local_1a8._s_0);
      pFVar3 = *ppFVar7;
      iVar14 = pFVar3->AllocationTexelSize;
      uVar1 = *(undefined8 *)&(pFVar3->MinTexel).field0_0x0;
      iVar2 = (pFVar3->MinTexel).field0_0x0._s_0.Z;
      if ((iVar14 < 2) &&
         ((!param_3 &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("InAllocationTexelSize > 1 || bInPointSample",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\PrimitiveSceneInfo.h"
                              ,0xa2,L"%i, %i"), bVar8)))) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      (pFVar3->Add).field0_0x0._s_0.X = local_178._s_0.X;
      (pFVar3->Add).field0_0x0._s_0.Y = local_178._s_0.Y;
      pFVar3->bUnbuiltPreview = param_4;
      (pFVar3->Scale).field0_0x0._s_0.X = local_160._s_0.X;
      (pFVar3->Scale).field0_0x0._s_0.Y = local_160._s_0.Y;
      pFVar3->AllocationTexelSize = iVar14;
      (pFVar3->MinUV).field0_0x0._s_0.X = local_190._s_0.X;
      (pFVar3->MinUV).field0_0x0._s_0.Y = local_190._s_0.Y;
      pFVar3->bIsDirty = false;
      (pFVar3->MaxUV).field0_0x0._s_0.X = local_1a8._s_0.X;
      (pFVar3->MaxUV).field0_0x0._s_0.Y = local_1a8._s_0.Y;
      pFVar3->bPointSample = param_3;
      *(undefined8 *)&(pFVar3->MinTexel).field0_0x0 = uVar1;
      (pFVar3->Add).field0_0x0._s_0.Z = local_178._s_0.Z;
      (pFVar3->Scale).field0_0x0._s_0.Z = local_160._s_0.Z;
      (pFVar3->MinUV).field0_0x0._s_0.Z = local_190._s_0.Z;
      (pFVar3->MaxUV).field0_0x0._s_0.Z = local_1a8._s_0.Z;
      (pFVar3->MinTexel).field0_0x0._s_0.Z = iVar2;
      local_148 = *(undefined8 *)(piVar13 + 4);
      uStack_140 = *(undefined8 *)(piVar13 + 6);
      local_100 = *ppFVar7;
      local_138 = *(undefined8 *)(piVar13 + 8);
      uStack_130 = *(undefined8 *)(piVar13 + 10);
      local_200 = &local_148;
      local_128 = *(undefined8 *)(piVar13 + 0xc);
      uStack_120 = *(undefined8 *)(piVar13 + 0xe);
      local_118 = *(undefined8 *)(piVar13 + 0x10);
      uStack_110 = *(undefined8 *)(piVar13 + 0x12);
      local_108 = *(undefined8 *)(piVar13 + 0x14);
      local_208 = piVar13 + 4;
      TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Math::TIntVector3<int>_const_&,FBlockUpdateInfo_&&>_>
                ((TSet<TTuple<UE::Math::TIntVector3<int>,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>,FDefaultSetAllocator>
                  *)param_6,
                 (TPairInitializer<UE::Math::TIntVector3<int>_const_&,FBlockUpdateInfo_&&> *)
                 &param_5,(bool *)&local_208);
      TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FIndirectLightingCacheAllocation_*_const_&>(param_7,ppFVar7);
    }
    else {
      dVar6 = (pFVar3->SingleSamplePosition).field0_0x0._s_0.Y -
              (pFVar3->TargetPosition).field0_0x0._s_0.Y;
      dVar16 = (pFVar3->SingleSamplePosition).field0_0x0._s_0.X -
               (pFVar3->TargetPosition).field0_0x0._s_0.X;
      dVar5 = (pFVar3->SingleSamplePosition).field0_0x0._s_0.Z -
              (pFVar3->TargetPosition).field0_0x0._s_0.Z;
      if (dVar6 * dVar6 + dVar16 * dVar16 + dVar5 * dVar5 <= __real_3ee4f8b580000000) {
        return false;
      }
      TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FIndirectLightingCacheAllocation_*_const_&>(param_7,ppFVar7);
    }
  }
  return true;
}

// UpdateCachePrimitive @ 144b4d8a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::UpdateCachePrimitive
          (FIndirectLightingCache *this,
          TMap<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
          *param_1,FPrimitiveSceneInfo *param_2,bool param_3,bool param_4,
          TMap<UE::Math::TIntVector3<int>,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>_>
          *param_5,TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_> *param_6,
          TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *param_7)

{
  TMap<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>_>
  *this_00;
  longlong lVar1;
  longlong lVar2;
  uchar uVar3;
  uint uVar4;
  FPrimitiveSceneProxy *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  TBoxSphereBounds<double,double> *pTVar12;
  FIndirectLightingCacheAllocation *pFVar13;
  undefined1 *puVar14;
  FIndirectLightingCacheAllocation *pFVar15;
  FPrimitiveSceneInfo *local_res18;
  char local_res20;
  undefined1 local_94 [12];
  FPrimitiveComponentId *local_88;
  undefined1 *local_80;
  TBoxSphereBounds<double,double> local_78;
  FIndirectLightingCacheAllocation *pFVar16;
  
  pFVar5 = param_2->Proxy;
  this_00 = &this->PrimitiveAllocations;
  pFVar16 = (FIndirectLightingCacheAllocation *)0x0;
  pFVar15 = (FIndirectLightingCacheAllocation *)0x0;
  uVar4 = (param_2->PrimitiveComponentId).PrimIDValue;
  local_94._4_8_ = pFVar16;
  if (*(int *)&(this->PrimitiveAllocations).field_0x8 !=
      *(int *)&(this->PrimitiveAllocations).field_0x34) {
    puVar14 = *(undefined1 **)&(this->PrimitiveAllocations).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->PrimitiveAllocations).field_0x38;
    }
    iVar11 = *(int *)(puVar14 +
                     (ulonglong)(*(int *)&(this->PrimitiveAllocations).field_0x48 - 1U & uVar4) * 4)
    ;
    if (iVar11 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar11 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar11 * 0x18) == uVar4) {
          pFVar13 = (FIndirectLightingCacheAllocation *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar13 = pFVar16;
          }
          if (pFVar13 != (FIndirectLightingCacheAllocation *)0x0) {
            local_94._4_8_ = (FIndirectLightingCacheAllocation *)(pFVar13->Add).field0_0x0._s_0.X;
          }
          break;
        }
        iVar11 = *(int *)(lVar1 + 0x10);
      } while (iVar11 != -1);
    }
  }
  uVar3 = (pFVar5->Mobility).Value;
  if ((uVar3 == '\x02') || (bVar10 = false, uVar3 == '\x01')) {
    bVar10 = true;
  }
  if (pFVar5->bWillEverBeLit == 0) {
    return;
  }
  if ((((!param_3) || (pFVar5->bStaticLighting == '\0')) ||
      ((FIndirectLightingCacheAllocation *)local_94._4_8_ == (FIndirectLightingCacheAllocation *)0x0
      )) || (((FIndirectLightingCacheAllocation *)local_94._4_8_)->bIsDirty == false)) {
    if (1 < (byte)(uVar3 - 1)) {
      return;
    }
    if ((pFVar5->IndirectLightingCacheQuality).Value == '\0') {
      return;
    }
  }
  uVar4 = (param_2->LightingAttachmentRoot).PrimIDValue;
  local_res18 = param_2;
  local_res20 = param_3;
  if (uVar4 != 0) {
    pFVar13 = pFVar16;
    if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
      puVar14 = *(undefined1 **)&param_1->field_0x40;
      if (*(undefined1 **)&param_1->field_0x40 == (undefined1 *)0x0) {
        puVar14 = &param_1->field_0x38;
      }
      iVar11 = *(int *)(puVar14 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & uVar4) * 4);
      if (iVar11 != -1) {
        do {
          pFVar13 = (FIndirectLightingCacheAllocation *)
                    (*(longlong *)param_1 + (longlong)iVar11 * 0x28);
          if (*(uint *)(*(longlong *)param_1 + (longlong)iVar11 * 0x28) == uVar4) {
            if (pFVar13 != (FIndirectLightingCacheAllocation *)0x0) goto LAB_144b4da1e;
            break;
          }
          iVar11 = *(int *)((longlong)&(pFVar13->Scale).field0_0x0 + 8);
          pFVar13 = pFVar16;
        } while (iVar11 != -1);
      }
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_144b4da1e:
    lVar1 = *(longlong *)((longlong)&(pFVar13->Add).field0_0x0 + 8);
    if (((lVar1 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 8) + 0x80) & 8) != 0)) &&
       (pFVar16 = pFVar15,
       *(int *)&(this->PrimitiveAllocations).field_0x8 !=
       *(int *)&(this->PrimitiveAllocations).field_0x34)) {
      puVar14 = *(undefined1 **)&(this->PrimitiveAllocations).field_0x40;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(this->PrimitiveAllocations).field_0x38;
      }
      iVar11 = *(int *)(puVar14 +
                       (ulonglong)
                       (*(int *)&(this->PrimitiveAllocations).field_0x48 - 1U &
                       *(uint *)(lVar1 + 0x10)) * 4);
      if (iVar11 != -1) {
        do {
          lVar2 = *(longlong *)&this_00->field_0x0 + (longlong)iVar11 * 0x18;
          if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar11 * 0x18) ==
              *(uint *)(lVar1 + 0x10)) {
            if (lVar2 != 0) {
              pFVar16 = *(FIndirectLightingCacheAllocation **)(lVar2 + 8);
            }
            break;
          }
          iVar11 = *(int *)(lVar2 + 0x10);
        } while (iVar11 != -1);
      }
    }
  }
  uVar8 = local_94._4_8_;
  pFVar15 = local_res18->IndirectLightingCacheAllocation;
  if (pFVar16 == (FIndirectLightingCacheAllocation *)0x0) {
    if ((local_res20 == '\0') || (bVar10)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((((pFVar5->IndirectLightingCacheQuality).Value == '\x01') || (bVar10 != false)) ||
       (!param_4)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    iVar11 = GLightingCacheMovableObjectAllocationSize;
    if (bVar9 != false) {
      iVar11 = 1;
    }
    pTVar12 = FPrimitiveSceneInfo::GetAttachmentGroupBounds(local_res18,&local_78);
    bVar10 = UpdateCacheAllocation
                       (this,pTVar12,iVar11,bVar9,bVar10,
                        (FIndirectLightingCacheAllocation **)(local_94 + 4),param_5,param_6);
    local_res18->IndirectLightingCacheAllocation =
         (FIndirectLightingCacheAllocation *)local_94._4_8_;
    if (uVar8 != local_94._4_8_) {
      if (((FIndirectLightingCacheAllocation *)uVar8 != (FIndirectLightingCacheAllocation *)0x0) &&
         (*(int *)&(this->PrimitiveAllocations).field_0x8 !=
          *(int *)&(this->PrimitiveAllocations).field_0x34)) {
        puVar14 = *(undefined1 **)&(this->PrimitiveAllocations).field_0x40;
        uVar4 = (local_res18->PrimitiveComponentId).PrimIDValue;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &(this->PrimitiveAllocations).field_0x38;
        }
        iVar11 = *(int *)(puVar14 +
                         ((longlong)*(int *)&(this->PrimitiveAllocations).field_0x48 - 1U &
                         (longlong)(int)uVar4) * 4);
        if (iVar11 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar11 * 0x18) == uVar4) {
              TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
                               *)this_00,iVar11);
              break;
            }
            iVar11 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar11 * 0x18);
          } while (iVar11 != -1);
        }
      }
      local_88 = &local_res18->PrimitiveComponentId;
      local_80 = local_94 + 4;
      TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FPrimitiveComponentId_const_&,FIndirectLightingCacheAllocation_*_const_&>_>
                ((TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<FPrimitiveComponentId_const_&,FIndirectLightingCacheAllocation_*_const_&>
                  *)local_94,(bool *)&local_88);
    }
    if (!bVar10) goto LAB_144b4dc2b;
  }
  else {
    local_res18->IndirectLightingCacheAllocation = pFVar16;
  }
  if (!local_res18->bIndirectLightingCacheBufferDirty) {
    local_res18->field_0x1a2 = local_res18->field_0x1a2 | 2;
  }
LAB_144b4dc2b:
  if ((pFVar15 == (FIndirectLightingCacheAllocation *)0x0) ||
     ((local_res18->IndirectLightingCacheAllocation != (FIndirectLightingCacheAllocation *)0x0 &&
      (pFVar15->bPointSample != local_res18->IndirectLightingCacheAllocation->bPointSample)))) {
    pFVar6 = (param_7->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_res18) &&
       (((FScriptContainerElement *)&local_res18 < pFVar6 + (longlong)param_7->ArrayMax * 8 &&
        (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)))) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar11 = param_7->ArrayNum;
    if (iVar11 == param_7->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_7->AllocatorInstance,&param_7->ArrayMax);
    }
    param_7->ArrayNum = iVar11 + 1;
    *(FPrimitiveSceneInfo **)((param_7->AllocatorInstance).Data + (longlong)iVar11 * 8) =
         local_res18;
  }
  return;
}

// UpdateCachePrimitivesInternal @ 144b4dd20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FIndirectLightingCache::UpdateCachePrimitivesInternal
          (FIndirectLightingCache *this,FScene *param_1,FSceneRenderer *param_2,bool param_3,
          TMap<UE::Math::TIntVector3<int>,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,FBlockUpdateInfo,0>_>
          *param_4,TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> *param_6)

{
  int *piVar1;
  ulonglong uVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  undefined1 uVar5;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCachePrims> FVar16;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar17;
  FName FVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  atomic<unsigned_char> *paVar24;
  longlong lVar25;
  ForElementType<FPrimitiveSceneInfo_*> *pFVar26;
  uint uVar27;
  TMap<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
  *pTVar28;
  FViewInfo *pFVar29;
  undefined1 local_97;
  undefined1 local_96 [2];
  uint local_94;
  FName local_90;
  FPrimitiveSceneInfo *local_88;
  TMap<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
  *local_80;
  FColor_u_0 local_78 [2];
  FName local_70;
  FName local_68;
  int local_58;
  int local_54;
  FName local_50 [2];
  
  FVar16 = StatPtr_STAT_UpdateIndirectLightingCachePrims;
  if (StatPtr_STAT_UpdateIndirectLightingCachePrims ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCachePrims>)0x0) {
    pFVar15 = ::FName::FName(local_50,"STAT_UpdateIndirectLightingCachePrims");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_UpdateIndirectLightingCachePrims>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateIndirectLightingCachePrims,
                        *pFVar15,L"Update Indirect Lighting Cache Prims","STATGROUP_InitViews",
                        "STATCAT_Advanced",L"Init Views",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar16;
  bVar8 = false;
  bVar9 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar10 = false;
  bVar11 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_70.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\IndirectLightingCache.cpp"
                   ,499);
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar10 = true;
      goto LAB_144b4dea7;
    }
  }
  bVar9 = bVar11;
  bVar8 = bVar10;
  bVar10 = false;
  local_90 = local_68;
  FVar18 = local_68;
LAB_144b4dea7:
  pTVar28 = &param_1->AttachmentGroups;
  local_80 = pTVar28;
  bVar11 = IndirectLightingAllowed(this,param_1,param_2);
  if (bVar11) {
    lVar23 = *(longlong *)&param_2->field_0x10;
    iVar12 = *(int *)&param_2->field_0x18;
    paVar24 = (atomic<unsigned_char> *)(lVar23 + 0x1e58);
    lVar20 = (longlong)iVar12 * 0x2970 + lVar23;
    while( true ) {
      if (*(int *)&param_2->field_0x18 != iVar12) {
        local_97 = 0;
        `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_97);
      }
      if (lVar23 == lVar20) break;
      LOCK();
      FVar3.State = *paVar24;
      if (FVar3.State == (atomic<unsigned_char>)0x0) {
        *paVar24 = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (FVar3.State != (atomic<unsigned_char>)0x0) {
        UE::FMutex::LockSlow((FMutex *)paVar24);
      }
      lVar23 = lVar23 + 0x2970;
      paVar24 = paVar24 + 0x2970;
    }
    if (this->bUpdateAllCacheEntries == false) {
      local_94 = 0;
      if (0 < *(int *)&param_2->field_0x18) {
        local_80 = (TMap<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
                    *)0x0;
        do {
          pTVar28 = local_80;
          uVar14 = local_94;
          uVar19 = 0;
          if ((int)local_94 < *(int *)&param_2->field_0x18) {
            uVar19 = ~local_94 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar29 = (FViewInfo *)((longlong)pTVar28 + *(longlong *)&param_2->field_0x10);
          iVar22 = 0;
          iVar12 = 0;
          uVar13 = 1;
          uVar27 = 0xffffffff;
          uVar19 = (pFVar29->PrimitiveVisibilityMap).NumBits;
          uVar21 = 0;
          if (uVar19 != 0) {
            pTVar6 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                      *)(pFVar29->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
            pTVar17 = &pFVar29->PrimitiveVisibilityMap;
            if (pTVar6 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                           *)0x0) {
              pTVar17 = pTVar6;
            }
            uVar21 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
            while (uVar21 == 0) {
              lVar23 = (longlong)iVar12;
              iVar22 = iVar22 + 0x20;
              iVar12 = iVar12 + 1;
              uVar21 = uVar19;
              if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
              goto LAB_144b4e2cf;
              uVar21 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar23 * 4 + 4);
            }
            uVar13 = -uVar21 & uVar21;
            uVar2 = (ulonglong)uVar13 * 2 + 1;
            lVar23 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            local_58 = (int)lVar23;
            uVar21 = local_58 + -1 + iVar22;
            if ((int)uVar19 < (int)uVar21) {
              uVar21 = uVar19;
            }
          }
LAB_144b4e2cf:
          if ((int)uVar21 < (int)uVar19) {
            do {
              uVar14 = 0;
              if ((int)uVar21 < (pFVar29->PrimitiveViewRelevanceMap).ArrayNum) {
                uVar14 = ~uVar21 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              ProcessPrimitiveUpdate
                        (this,param_1,pFVar29,uVar21,param_3,
                         (bool)(*(byte *)((longlong)
                                          &(pFVar29->PrimitiveViewRelevanceMap).AllocatorInstance.
                                           Data[(int)uVar21]._padding_ + 4) >> 2 & 1),param_4,
                         param_5,param_6);
              uVar14 = (pFVar29->PrimitiveVisibilityMap).NumBits;
              uVar27 = uVar27 & ~uVar13;
              pTVar6 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)(pFVar29->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
              pTVar17 = &pFVar29->PrimitiveVisibilityMap;
              if (pTVar6 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                             *)0x0) {
                pTVar17 = pTVar6;
              }
              uVar19 = uVar27 & *(uint *)((pTVar17->AllocatorInstance).InlineData +
                                         (longlong)iVar12 * 4);
              while (uVar19 == 0) {
                lVar23 = (longlong)iVar12;
                iVar22 = iVar22 + 0x20;
                iVar12 = iVar12 + 1;
                uVar21 = uVar14;
                if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
                goto LAB_144b4e403;
                uVar27 = 0xffffffff;
                uVar19 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar23 * 4 + 4);
              }
              uVar13 = -uVar19 & uVar19;
              uVar2 = (ulonglong)uVar13 * 2 + 1;
              lVar23 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              local_54 = (int)lVar23;
              uVar21 = local_54 + -1 + iVar22;
              if ((int)uVar14 < (int)uVar21) {
                uVar21 = uVar14;
              }
LAB_144b4e403:
              uVar14 = local_94;
            } while ((int)uVar21 < (pFVar29->PrimitiveVisibilityMap).NumBits);
          }
          uVar19 = 0;
          if (0 < (pFVar29->IndirectShadowPrimitives).ArrayNum) {
            lVar23 = 0;
            do {
              uVar14 = 0;
              if ((int)uVar19 < (pFVar29->IndirectShadowPrimitives).ArrayNum) {
                uVar14 = ~uVar19 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar14 = *(uint *)(*(longlong *)
                                  (lVar23 + (longlong)
                                            (pFVar29->IndirectShadowPrimitives).AllocatorInstance.
                                            Data) + 0x188);
              if ((((int)uVar14 < 0) || ((pFVar29->PrimitiveVisibilityMap).NumBits <= (int)uVar14))
                 && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index>=0 && Index<NumBits",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x5be,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pTVar6 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)(pFVar29->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
              pTVar17 = &pFVar29->PrimitiveVisibilityMap;
              if (pTVar6 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                             *)0x0) {
                pTVar17 = pTVar6;
              }
              uVar21 = uVar14;
              if ((int)uVar14 < 0) {
                uVar21 = uVar14 + 0x1f;
              }
              if ((*(uint *)((pTVar17->AllocatorInstance).InlineData +
                            (longlong)((int)uVar21 >> 5) * 4) >> (uVar14 & 0x1f) & 1) == 0) {
                ProcessPrimitiveUpdate
                          (this,param_1,pFVar29,uVar14,param_3,true,param_4,param_5,param_6);
              }
              uVar19 = uVar19 + 1;
              lVar23 = lVar23 + 8;
              uVar14 = local_94;
            } while ((int)uVar19 < (pFVar29->IndirectShadowPrimitives).ArrayNum);
          }
          local_94 = uVar14 + 1;
          local_80 = (TMap<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
                      *)((longlong)local_80 + 0x2970);
          FVar18 = local_90;
        } while ((int)local_94 < *(int *)&param_2->field_0x18);
      }
    }
    else {
      uVar14 = (param_1->Primitives).ArrayNum;
      uVar19 = 0;
      if (uVar14 != 0) {
        do {
          uVar21 = 0;
          if ((int)uVar19 < (param_1->Primitives).ArrayNum) {
            uVar21 = ~uVar19 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_88 = *(FPrimitiveSceneInfo **)
                      ((param_1->Primitives).AllocatorInstance.Data + (longlong)(int)uVar19 * 8);
          UpdateCachePrimitive(this,pTVar28,local_88,false,true,param_4,param_5,param_6);
          if (!local_88->bIndirectLightingCacheBufferDirty) {
            if (!local_88->bIndirectLightingCacheBufferDirty) {
              local_88->field_0x1a2 = local_88->field_0x1a2 | 2;
            }
            iVar12 = *(int *)&param_2->field_0x18;
            uVar21 = 0;
            if (0 < iVar12) {
              uVar27 = uVar19;
              if ((int)uVar19 < 0) {
                uVar27 = uVar19 + 0x1f;
              }
              lVar23 = 0;
              do {
                uVar13 = 0;
                if ((int)uVar21 < iVar12) {
                  uVar13 = ~uVar21 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                lVar20 = *(longlong *)&param_2->field_0x10;
                lVar25 = lVar20 + 0x1c50 + lVar23;
                if ((((int)uVar19 < 0) || (*(int *)(lVar25 + 0x18) <= (int)uVar19)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (*(longlong *)(lVar25 + 0x10) != 0) {
                  lVar25 = *(longlong *)(lVar25 + 0x10);
                }
                if ((*(uint *)(lVar25 + (longlong)((int)uVar27 >> 5) * 4) >> (uVar19 & 0x1f) & 1) !=
                    0) {
                  pFVar26 = (ForElementType<FPrimitiveSceneInfo_*> *)(lVar20 + 0x1e48 + lVar23);
                  if (((pFVar26->Data <= &local_88) &&
                      (&local_88 < pFVar26->Data + *(int *)((longlong)&pFVar26[1].Data + 4))) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar12 = *(int *)&pFVar26[1].Data;
                  piVar1 = (int *)((longlong)&pFVar26[1].Data + 4);
                  if (iVar12 == *piVar1) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_*>_>
                                       (0x808,pFVar26,piVar1);
                  }
                  *(int *)&pFVar26[1].Data = iVar12 + 1;
                  pFVar26->Data[iVar12] = local_88;
                  pTVar28 = local_80;
                  break;
                }
                iVar12 = *(int *)&param_2->field_0x18;
                uVar21 = uVar21 + 1;
                lVar23 = lVar23 + 0x2970;
                pTVar28 = local_80;
              } while ((int)uVar21 < iVar12);
            }
          }
          uVar19 = uVar19 + 1;
          FVar18 = local_90;
        } while (uVar19 < uVar14);
      }
    }
    lVar23 = *(longlong *)&param_2->field_0x10;
    iVar12 = *(int *)&param_2->field_0x18;
    paVar24 = (atomic<unsigned_char> *)(lVar23 + 0x1e58);
    lVar20 = (longlong)iVar12 * 0x2970 + lVar23;
    while( true ) {
      if (*(int *)&param_2->field_0x18 != iVar12) {
        `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_96);
      }
      if (lVar23 == lVar20) break;
      LOCK();
      aVar4 = *paVar24;
      *paVar24 = (atomic<unsigned_char>)((char)*paVar24 + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)paVar24);
      }
      lVar23 = lVar23 + 0x2970;
      paVar24 = paVar24 + 0x2970;
    }
    this->bUpdateAllCacheEntries = false;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// UpdateTransitionsOverTime @ 144b4e9d0

void __thiscall
FIndirectLightingCache::UpdateTransitionsOverTime
          (FIndirectLightingCache *this,
          TArray<FIndirectLightingCacheAllocation_*,TSizedDefaultAllocator<32>_> *param_1,
          float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar8 = __real_3f800000;
  fVar7 = __real_38d1b717;
  fVar6 = __real_3727c5ac;
  iVar15 = param_1->ArrayNum;
  uVar13 = 0;
  if (0 < iVar15) {
    lVar14 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < iVar15) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)((param_1->AllocatorInstance).Data + lVar14);
      dVar1 = *(double *)(lVar4 + 0x120);
      dVar2 = *(double *)(lVar4 + 0x128);
      dVar18 = dVar1 - *(double *)(lVar4 + 0x70);
      dVar3 = *(double *)(lVar4 + 0x130);
      dVar22 = dVar2 - *(double *)(lVar4 + 0x78);
      dVar17 = dVar3 - *(double *)(lVar4 + 0x80);
      auVar19._0_8_ = dVar17 * dVar17;
      auVar19._8_8_ = 0;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = dVar18 * dVar18 + dVar22 * dVar22 + auVar19._0_8_;
      auVar20 = sqrtpd(auVar19,auVar20);
      if (fVar6 < (float)auVar20._0_8_) {
        pfVar11 = (float *)(lVar4 + 0x94);
        lVar12 = 3;
        fVar25 = (param_2 * GSingleSampleTransitionSpeed) / (float)auVar20._0_8_;
        if (fVar8 <= fVar25) {
          fVar25 = fVar8;
        }
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        dVar18 = (double)fVar25;
        *(double *)(lVar4 + 0x120) = (*(double *)(lVar4 + 0x70) - dVar1) * dVar18 + dVar1;
        *(double *)(lVar4 + 0x128) = (*(double *)(lVar4 + 0x78) - dVar2) * dVar18 + dVar2;
        *(double *)(lVar4 + 0x130) = (*(double *)(lVar4 + 0x80) - dVar3) * dVar18 + dVar3;
        do {
          pfVar11[0x2b] = (pfVar11[-1] - pfVar11[0x2b]) * fVar25 + pfVar11[0x2b];
          pfVar11[0x2c] = (*pfVar11 - pfVar11[0x2c]) * fVar25 + pfVar11[0x2c];
          pfVar11[0x2d] = (pfVar11[1] - pfVar11[0x2d]) * fVar25 + pfVar11[0x2d];
          pfVar11[0x2e] = (pfVar11[2] - pfVar11[0x2e]) * fVar25 + pfVar11[0x2e];
          pfVar11[0x37] = (pfVar11[0xb] - pfVar11[0x37]) * fVar25 + pfVar11[0x37];
          pfVar11[0x38] = (pfVar11[0xc] - pfVar11[0x38]) * fVar25 + pfVar11[0x38];
          pfVar11[0x39] = (pfVar11[0xd] - pfVar11[0x39]) * fVar25 + pfVar11[0x39];
          pfVar11[0x3a] = (pfVar11[0xe] - pfVar11[0x3a]) * fVar25 + pfVar11[0x3a];
          pfVar11 = pfVar11 + 4;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        *(float *)(lVar4 + 0x1a0) =
             (*(float *)(lVar4 + 0xf0) - *(float *)(lVar4 + 0x1a0)) * fVar25 +
             *(float *)(lVar4 + 0x1a0);
        *(float *)(lVar4 + 0x1a4) =
             (*(float *)(lVar4 + 0xf4) - *(float *)(lVar4 + 0x1a4)) * fVar25 +
             *(float *)(lVar4 + 0x1a4);
        *(float *)(lVar4 + 0x1a8) =
             (*(float *)(lVar4 + 0xf8) - *(float *)(lVar4 + 0x1a8)) * fVar25 +
             *(float *)(lVar4 + 0x1a8);
        *(float *)(lVar4 + 0x1ac) =
             (*(float *)(lVar4 + 0xfc) - *(float *)(lVar4 + 0x1ac)) * fVar25 +
             *(float *)(lVar4 + 0x1ac);
        *(float *)(lVar4 + 0x1b0) =
             (*(float *)(lVar4 + 0x100) - *(float *)(lVar4 + 0x1b0)) * fVar25 +
             *(float *)(lVar4 + 0x1b0);
        fVar16 = *(float *)(lVar4 + 0x1cc);
        fVar24 = *(float *)(lVar4 + 0x11c);
        fVar21 = fVar16 * *(float *)(lVar4 + 0x1c0);
        fVar23 = fVar16 * *(float *)(lVar4 + 0x1c8);
        fVar16 = fVar16 * *(float *)(lVar4 + 0x1c4);
        fVar16 = (fVar24 * *(float *)(lVar4 + 0x114) - fVar16) * fVar25 + fVar16;
        fVar21 = (fVar24 * *(float *)(lVar4 + 0x110) - fVar21) * fVar25 + fVar21;
        fVar23 = (fVar24 * *(float *)(lVar4 + 0x118) - fVar23) * fVar25 + fVar23;
        fVar24 = SQRT(fVar21 * fVar21 + fVar16 * fVar16 + fVar23 * fVar23);
        fVar25 = fVar24;
        if (fVar24 <= fVar7) {
          fVar25 = fVar7;
        }
        fVar25 = fVar8 / fVar25;
        *(float *)(lVar4 + 0x1c0) = fVar25 * fVar21;
        *(float *)(lVar4 + 0x1c4) = fVar25 * fVar16;
        *(float *)(lVar4 + 0x1c8) = fVar25 * fVar23;
        *(float *)(lVar4 + 0x1cc) = fVar24;
      }
      iVar15 = param_1->ArrayNum;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar13 < iVar15);
  }
  return;
}

// ~FIndirectLightingCache @ 1454052c0

void __thiscall FIndirectLightingCache::~FIndirectLightingCache(FIndirectLightingCache *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar3;
  IPooledRenderTarget *pIVar4;
  
  *(undefined4 *)&(this->PrimitiveAllocations).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PrimitiveAllocations).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrimitiveAllocations);
  *(undefined4 *)&(this->BlockAllocator).UsedLeaves.field_0x48 = 0;
  pvVar1 = *(void **)&(this->BlockAllocator).UsedLeaves.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->BlockAllocator).UsedLeaves);
  pFVar2 = (this->BlockAllocator).UnusedLeaves.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BlockAllocator).FreeNodeIndices.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->BlockAllocator).Nodes.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  *(undefined4 *)&(this->VolumeBlocks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VolumeBlocks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VolumeBlocks);
  pIVar4 = (this->Texture2).Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  pIVar4 = (this->Texture1).Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  pIVar4 = (this->Texture0).Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar4->_padding_ + 0x38))();
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

