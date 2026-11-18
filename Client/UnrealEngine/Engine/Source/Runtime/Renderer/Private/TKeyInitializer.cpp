// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// operator<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>_TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_> @ 144d21180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_> * __thiscall
TKeyInitializer<FLumenCardId_const_&>::
operator<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>_TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>
          (TKeyInitializer<FLumenCardId_const_&> *this,
          TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [24];
  undefined8 uStack_30;
  void *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_48._16_8_ = 0;
  uStack_30 = 0;
  local_20 = ___xmm_00000000ffffffff0000008000000000;
  uStack_18 = _UNK_150631d98;
  local_48._0_8_ = (FScriptContainerElement *)0x0;
  local_48._8_8_ = 0;
  local_28 = (void *)0x0;
  *(FLumenCardId *)__return_storage_ptr__ = *this->Key;
  TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>::
  TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>
            ((TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator> *)local_48);
  iVar1 = SUB84(local_48._8_8_,4);
  local_48._8_8_ = local_48._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)local_48,0,(int *)(local_48 + 0xc));
  }
  uVar2 = local_20._4_4_;
  uStack_18 = 0xffffffff;
  local_20 = (ulonglong)local_20._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_20 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_48 + 0x10),0);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FGuid,FMaterialCachePendingTagBucket>_TTuple<FGuid,FMaterialCachePendingTagBucket> @ 144e5a800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FGuid,FMaterialCachePendingTagBucket> * __thiscall
TKeyInitializer<FGuid_const_&>::
operator<FGuid,FMaterialCachePendingTagBucket>_TTuple<FGuid,FMaterialCachePendingTagBucket>
          (TKeyInitializer<FGuid_const_&> *this,
          TTuple<FGuid,FMaterialCachePendingTagBucket> *__return_storage_ptr__)

{
  int iVar1;
  FGuid *pFVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FMaterialCachePendingEntry> FVar7;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  ForElementType<FMaterialCacheLayer> FVar8;
  int *piVar9;
  undefined1 auStack_138 [32];
  FMaterialCachePendingTagBucket local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  memset(&local_108.TagLayout.Layers,0,0xc0);
  local_108.TagLayout.Layers.ArrayMax = 8;
  local_108.TagLayout.Guid.A = 0;
  local_108.TagLayout.Guid.B = 0;
  local_108.TagLayout.Guid.C = 0;
  local_108.TagLayout.Guid.D = 0;
  local_108.TagLayout.Layers.AllocatorInstance.SecondaryData =
       (ForElementType<FMaterialCacheLayer>)0x0;
  local_108.TagLayout.Layers.ArrayNum = 0;
  local_108.PendingEntries.AllocatorInstance.Data = (FMaterialCachePendingEntry *)0x0;
  local_108.PendingEntries.ArrayNum = 0;
  local_108.PendingEntries.ArrayMax = 0;
  pFVar2 = this->Key;
  uVar4 = pFVar2->B;
  uVar5 = pFVar2->C;
  uVar6 = pFVar2->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar2->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar6;
  FMaterialCachePendingTagBucket::FMaterialCachePendingTagBucket
            ((FMaterialCachePendingTagBucket *)&__return_storage_ptr__->field_0x10,&local_108);
  FVar7.Data = local_108.PendingEntries.AllocatorInstance.Data;
  DestructItems<FMaterialCachePendingEntry,int>
            (local_108.PendingEntries.AllocatorInstance.Data,local_108.PendingEntries.ArrayNum);
  if (FVar7.Data != (FMaterialCachePendingEntry *)0x0) {
    piVar9 = &FVar7.Data[-1].Pages.ArrayNum;
    MemoryTrace_Free((ulong64)piVar9,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,piVar9,FMalloc,true);
    }
    piVar9 = (int *)((longlong)piVar9 - (ulonglong)(uint)*piVar9);
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar3 = *(longlong *)(piVar9 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar9,0,0);
      if (lVar3 - (longlong)piVar9 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,piVar9);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar9);
      }
    }
  }
  FVar8 = (ForElementType<FMaterialCacheLayer>)&local_108.TagLayout.Layers;
  if (local_108.TagLayout.Layers.AllocatorInstance.SecondaryData !=
      (ForElementType<FMaterialCacheLayer>)0x0) {
    FVar8 = local_108.TagLayout.Layers.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMaterialCacheLayer,int>
            ((FMaterialCacheLayer *)FVar8,local_108.TagLayout.Layers.ArrayNum);
  if (local_108.TagLayout.Layers.AllocatorInstance.SecondaryData !=
      (ForElementType<FMaterialCacheLayer>)0x0) {
    FMemory::Free((void *)local_108.TagLayout.Layers.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// operator<FGuid,FMaterialCachePrimitiveCachedTagCommands>_TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands> @ 144e5a9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands> * __thiscall
TKeyInitializer<FGuid_const_&>::
operator<FGuid,FMaterialCachePrimitiveCachedTagCommands>_TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>
          (TKeyInitializer<FGuid_const_&> *this,
          TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands> *__return_storage_ptr__)

{
  FGuid *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar1 = this->Key;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar3 = pFVar1->B;
  uVar4 = pFVar1->C;
  uVar5 = pFVar1->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<UMaterialInterface_*,TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<UMaterialInterface_*,TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<TTuple<UMaterialInterface_*,TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TUniquePtr<FMaterialCachePrimitiveCachedLayerCommands,TDefaultDelete<FMaterialCachePrimitiveCachedLayerCommands>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FPrimitiveComponentId,FMaterialCachePrimitiveData>_TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData> @ 144e5aad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData> * __thiscall
TKeyInitializer<FPrimitiveComponentId_&&>::
operator<FPrimitiveComponentId,FMaterialCachePrimitiveData>_TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>
          (TKeyInitializer<FPrimitiveComponentId_&&> *this,
          TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_a8 [32];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_38;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_38.InlineData[0] = '\0';
  local_38.InlineData[1] = '\0';
  local_38.InlineData[2] = '\0';
  local_38.InlineData[3] = '\0';
  local_38._padding_ = 0;
  local_28 = 0;
  auStack_70._16_8_ = 0;
  uStack_58 = 0;
  auStack_70._8_8_ = 0;
  auStack_70._0_8_ = (FScriptContainerElement *)0x0;
  local_50 = (void *)0x0;
  local_48 = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_38.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(uint *)__return_storage_ptr__ = this->Key->PrimIDValue;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  TSet<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>,FDefaultSetAllocator>
              *)auStack_70);
  local_28 = local_28 & 0xffffffff00000000;
  if (local_38.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)auStack_70,0,auStack_70._8_4_);
  iVar1 = SUB84(auStack_70._8_8_,4);
  auStack_70._8_8_ = auStack_70._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)auStack_70,0,(int *)(auStack_70 + 0xc));
  }
  uVar2 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_70 + 0x10),0);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if ((FScriptContainerElement *)auStack_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_70._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<int,FMeshDrawCommandStatsManager::FStatCollection>_TTuple<int,FMeshDrawCommandStatsManager::FStatCollection> @ 144ed3ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<int,FMeshDrawCommandStatsManager::FStatCollection> * __thiscall
TKeyInitializer<int_const_&>::
operator<int,FMeshDrawCommandStatsManager::FStatCollection>_TTuple<int,FMeshDrawCommandStatsManager::FStatCollection>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,FMeshDrawCommandStatsManager::FStatCollection> *__return_storage_ptr__)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [16];
  undefined1 local_148 [24];
  undefined8 uStack_130;
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  void *local_108;
  ulonglong local_100;
  FName local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  TBitArray<FDefaultBitArrayAllocator> local_d0;
  undefined8 uStack_b0;
  ForElementType<FSetElementId> local_a8;
  ulonglong local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_58;
  ulonglong local_48;
  ulong64 local_40;
  ulong64 local_38;
  ulong64 uStack_30;
  ulong64 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_11c = 0x80;
  local_158._0_8_ = (FCollectionCategory *)0x0;
  local_110 = 0;
  local_148._16_8_ = 0;
  uStack_130 = 0;
  local_d0.AllocatorInstance.InlineData[0] = '\0';
  local_d0.AllocatorInstance.InlineData[1] = '\0';
  local_d0.AllocatorInstance.InlineData[2] = '\0';
  local_d0.AllocatorInstance.InlineData[3] = '\0';
  local_d0.AllocatorInstance.InlineData[4] = '\0';
  local_d0.AllocatorInstance.InlineData[5] = '\0';
  local_d0.AllocatorInstance.InlineData[6] = '\0';
  local_d0.AllocatorInstance.InlineData[7] = '\0';
  local_d0.AllocatorInstance.InlineData[8] = '\0';
  local_d0.AllocatorInstance.InlineData[9] = '\0';
  local_d0.AllocatorInstance.InlineData[10] = '\0';
  local_d0.AllocatorInstance.InlineData[0xb] = '\0';
  local_d0.AllocatorInstance.InlineData[0xc] = '\0';
  local_d0.AllocatorInstance.InlineData[0xd] = '\0';
  local_d0.AllocatorInstance.InlineData[0xe] = '\0';
  local_d0.AllocatorInstance.InlineData[0xf] = '\0';
  local_100 = 0;
  local_80.AllocatorInstance.InlineData[0] = '\0';
  local_80.AllocatorInstance.InlineData[1] = '\0';
  local_80.AllocatorInstance.InlineData[2] = '\0';
  local_80.AllocatorInstance.InlineData[3] = '\0';
  local_80.AllocatorInstance.InlineData[4] = '\0';
  local_80.AllocatorInstance.InlineData[5] = '\0';
  local_80.AllocatorInstance.InlineData[6] = '\0';
  local_80.AllocatorInstance.InlineData[7] = '\0';
  local_80.AllocatorInstance.InlineData[8] = '\0';
  local_80.AllocatorInstance.InlineData[9] = '\0';
  local_80.AllocatorInstance.InlineData[10] = '\0';
  local_80.AllocatorInstance.InlineData[0xb] = '\0';
  local_80.AllocatorInstance.InlineData[0xc] = '\0';
  local_80.AllocatorInstance.InlineData[0xd] = '\0';
  local_80.AllocatorInstance.InlineData[0xe] = '\0';
  local_80.AllocatorInstance.InlineData[0xf] = '\0';
  local_a8.InlineData[0] = '\0';
  local_a8.InlineData[1] = '\0';
  local_a8.InlineData[2] = '\0';
  local_a8.InlineData[3] = '\0';
  local_a8._padding_ = 0;
  local_98 = 0;
  local_58.InlineData[0] = '\0';
  local_58.InlineData[1] = '\0';
  local_58.InlineData[2] = '\0';
  local_58.InlineData[3] = '\0';
  local_58._padding_ = 0;
  local_48 = 0;
  local_d0._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_b0 = _UNK_150631d98;
  local_80._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_38 = 0;
  uStack_30 = 0;
  local_158._8_4_ = 0;
  local_158._12_4_ = 0;
  local_148._0_8_ = (FScriptContainerElement *)0x0;
  local_148._8_8_ = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  local_118 = 0xffffffff;
  local_114 = 0;
  local_108 = (void *)0x0;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  local_d0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_28 = 0;
  *(int *)__return_storage_ptr__ = *this->Key;
  FMeshDrawCommandStatsManager::FStatCollection::FStatCollection
            ((FStatCollection *)&__return_storage_ptr__->field_0x8,(FStatCollection *)local_158);
  local_48 = local_48 & 0xffffffff00000000;
  if (local_58.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58.SecondaryData);
  }
  uVar2 = local_88 >> 0x20;
  local_88 = local_88 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_90,0,(int *)((longlong)&local_88 + 4));
  }
  iVar1 = local_80.MaxBits;
  uStack_60 = 0xffffffff;
  local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_80.NumBits = 0;
    local_80.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
  }
  if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  local_98 = local_98 & 0xffffffff00000000;
  if (local_a8.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.SecondaryData);
  }
  uVar2 = local_d8 >> 0x20;
  local_d8 = local_d8 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_e0,0,(int *)((longlong)&local_d8 + 4));
  }
  iVar1 = local_d0.MaxBits;
  uStack_b0 = 0xffffffff;
  local_d0._24_8_ = (ulonglong)(uint)local_d0.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_d0.NumBits = 0;
    local_d0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_d0,0);
  }
  if (local_d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d0.AllocatorInstance.SecondaryData);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  local_100 = local_100 & 0xffffffff00000000;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_148,0,local_148._8_4_);
  iVar1 = SUB84(local_148._8_8_,4);
  local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
  }
  local_118 = 0xffffffff;
  local_114 = 0;
  local_120 = 0;
  if (0x80 < local_11c) {
    local_11c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
  }
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  DestructItems<FMeshDrawCommandStatsManager::FCollectionCategory,int>
            ((FCollectionCategory *)local_158._0_8_,local_158._8_4_);
  if ((FCollectionCategory *)local_158._0_8_ != (FCollectionCategory *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>_>_TTuple<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>_> @ 144ed41b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>_>
* __thiscall
TKeyInitializer<FName_&&>::
operator<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>_>_TTuple<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>_>
          (TKeyInitializer<FName_&&> *this,
          TTuple<FName,TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
  ::
  TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
            ((TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<FName,FMeshDrawCommandStatsManager::FDrawData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshDrawCommandStatsManager::FDrawData,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<int,FIndividualOcclusionHistory>_TTuple<int,FIndividualOcclusionHistory> @ 14509aa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,FIndividualOcclusionHistory> * __thiscall
TKeyInitializer<int_const_&>::
operator<int,FIndividualOcclusionHistory>_TTuple<int,FIndividualOcclusionHistory>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,FIndividualOcclusionHistory> *__return_storage_ptr__)

{
  undefined1 auStack_88 [32];
  FIndividualOcclusionHistory local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.PendingOcclusionQueryFrames[0] = 0;
  local_68.PendingOcclusionQueryFrames[1] = 0;
  local_68.PendingOcclusionQueryFrames[2] = 0;
  local_68.PendingOcclusionQueryFrames[3] = 0;
  local_68.PendingOcclusionQuery[0].QueryPool = (FRHIRenderQueryPool *)0x0;
  local_68.PendingOcclusionQuery[1].QueryPool = (FRHIRenderQueryPool *)0x0;
  local_68.PendingOcclusionQuery[2].QueryPool = (FRHIRenderQueryPool *)0x0;
  local_68.PendingOcclusionQuery[3].QueryPool = (FRHIRenderQueryPool *)0x0;
  *(int *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  local_68.PendingOcclusionQuery[0].Query.Reference = (FRHIRenderQuery *)0x0;
  local_68.PendingOcclusionQuery[1].Query.Reference = (FRHIRenderQuery *)0x0;
  local_68.PendingOcclusionQuery[2].Query.Reference = (FRHIRenderQuery *)0x0;
  local_68.PendingOcclusionQuery[3].Query.Reference = (FRHIRenderQuery *)0x0;
  FIndividualOcclusionHistory::~FIndividualOcclusionHistory(&local_68);
  return __return_storage_ptr__;
}

// operator<FPrimitiveComponentId,FComponentVelocityData>_TTuple<FPrimitiveComponentId,FComponentVelocityData> @ 1453c9ce0

TTuple<FPrimitiveComponentId,FComponentVelocityData> * __thiscall
TKeyInitializer<FPrimitiveComponentId_const_&>::
operator<FPrimitiveComponentId,FComponentVelocityData>_TTuple<FPrimitiveComponentId,FComponentVelocityData>
          (TKeyInitializer<FPrimitiveComponentId_const_&> *this,
          TTuple<FPrimitiveComponentId,FComponentVelocityData> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_138 [38];
  
  memset(local_138,0,0x130);
  lVar9 = 2;
  *(uint *)__return_storage_ptr__ = this->Key->PrimIDValue;
  puVar5 = local_138;
  puVar6 = (undefined8 *)&__return_storage_ptr__->field_0x10;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *puVar8 = *puVar7;
    puVar8[1] = uVar1;
    uVar1 = puVar7[4];
    uVar4 = puVar7[5];
    puVar8[2] = uVar2;
    puVar8[3] = uVar3;
    uVar2 = puVar7[6];
    uVar3 = puVar7[7];
    puVar8[4] = uVar1;
    puVar8[5] = uVar4;
    uVar1 = puVar7[8];
    uVar4 = puVar7[9];
    puVar8[6] = uVar2;
    puVar8[7] = uVar3;
    uVar2 = puVar7[10];
    uVar3 = puVar7[0xb];
    puVar8[8] = uVar1;
    puVar8[9] = uVar4;
    uVar1 = puVar7[0xc];
    uVar4 = puVar7[0xd];
    puVar8[10] = uVar2;
    puVar8[0xb] = uVar3;
    uVar2 = puVar7[0xe];
    uVar3 = puVar7[0xf];
    puVar8[0xc] = uVar1;
    puVar8[0xd] = uVar4;
    puVar8[0xe] = uVar2;
    puVar8[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar1 = puVar7[0x11];
  uVar2 = puVar7[0x12];
  uVar3 = puVar7[0x13];
  puVar8[0x10] = puVar7[0x10];
  puVar8[0x11] = uVar1;
  uVar1 = puVar7[0x14];
  uVar4 = puVar7[0x15];
  puVar8[0x12] = uVar2;
  puVar8[0x13] = uVar3;
  puVar8[0x14] = uVar1;
  puVar8[0x15] = uVar4;
  return __return_storage_ptr__;
}

