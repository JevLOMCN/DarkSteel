// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FInvalidatingPrimitiveCollector @ 1457c1340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInvalidatingPrimitiveCollector * __thiscall
FVirtualShadowMapArrayCacheManager::FInvalidatingPrimitiveCollector::FInvalidatingPrimitiveCollector
          (FInvalidatingPrimitiveCollector *this,FVirtualShadowMapArrayCacheManager *param_1)

{
  ulonglong uVar1;
  TArray<FVirtualShadowMapPerLightCacheEntry_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  int iVar3;
  uint uVar4;
  FVirtualShadowMapArrayCacheManager *pFVar5;
  longlong lVar6;
  FVirtualShadowMapPerLightCacheEntry *pFVar7;
  FVirtualShadowMapPerLightCacheEntry **ppFVar8;
  code *pcVar9;
  ForElementType<unsigned_int> FVar10;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *pTVar11;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *pTVar12;
  bool bVar13;
  FData *pFVar14;
  FInvalidatingPrimitiveCollector *pFVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ForElementType<unsigned_int> FVar20;
  uint *puVar21;
  uint uVar22;
  bool bVar23;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  FVirtualShadowMapPerLightCacheEntry *local_c8;
  ForElementType<unsigned_int> local_c0;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *local_88;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  pFVar14 = ::operator_new(0x28);
  iVar18 = 0;
  if (pFVar14 == (FData *)0x0) {
    (this->Instances).Data.Reference = (FData *)0x0;
  }
  else {
    *(undefined4 *)&pFVar14->_padding_ = 0;
    (pFVar14->Batches).AllocatorInstance.Data = (FPackedBatch *)0x0;
    (pFVar14->Batches).ArrayNum = 0;
    (pFVar14->Batches).ArrayMax = 0;
    (pFVar14->Items).AllocatorInstance.Data = (FPackedItem *)0x0;
    (pFVar14->Items).ArrayNum = 0;
    (pFVar14->Items).ArrayMax = 0;
    (this->Instances).Data.Reference = pFVar14;
    LOCK();
    *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
    UNLOCK();
  }
  (this->Instances).CurrentBatchPrefixSum = 0;
  (this->Instances).CurrentBatchNumItems = 0;
  (this->Instances).CurrentBatchPackedPrefixSum = 0;
  (this->Instances).CurrentBatchFirstItem = 0;
  pTVar2 = &this->CacheEntriesForInvalidation;
  (this->Instances).TotalInstances = 0;
  (this->InvalidatedPrimitives).AllocatorInstance.Data = (uint *)0x0;
  (this->InvalidatedPrimitives).NumBits = 0;
  (this->InvalidatedPrimitives).MaxBits = 0;
  (pTVar2->AllocatorInstance).Data = (FVirtualShadowMapPerLightCacheEntry **)0x0;
  (this->CacheEntriesForInvalidation).ArrayNum = 0;
  (this->CacheEntriesForInvalidation).ArrayMax = 0;
  (this->RemovedPrimitives).AllocatorInstance.Data = (uint *)0x0;
  (this->RemovedPrimitives).NumBits = 0;
  (this->RemovedPrimitives).MaxBits = 0;
  this->Scene = *(FScene **)&param_1->field_0x8;
  this->Manager = param_1;
  iVar3 = (param_1->CachePrimitiveAsDynamic).NumBits;
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetNum<bool>
            (&this->InvalidatedPrimitives,iVar3,false);
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetNum<bool>
            (&this->RemovedPrimitives,iVar3,false);
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Orange,"FScene_VirtualShadowCollectVSMsForInvalidation");
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId449,"FScene_VirtualShadowCollectVSMsForInvalidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
               ,0x1c1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId449);
  }
  pFVar5 = this->Manager;
  uStack_ac = 1;
  local_98 = 0;
  local_c0 = (ForElementType<unsigned_int>)&(pFVar5->CacheEntries).field_0x10;
  iVar3 = *(int *)&(pFVar5->CacheEntries).field_0x28;
  local_88 = &pFVar5->CacheEntries;
  iStack_9c = local_98;
  if (iVar3 != 0) {
    puVar21 = *(uint **)&(pFVar5->CacheEntries).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)local_c0;
    }
    uVar17 = *puVar21;
    local_98 = 0;
    iVar18 = 0;
    while (uVar17 == 0) {
      lVar16 = (longlong)iVar18;
      local_98 = local_98 + 0x20;
      iVar18 = iVar18 + 1;
      iStack_9c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1457c14ed;
      uVar17 = (puVar21 + 1)[lVar16];
    }
    uStack_ac = -uVar17 & uVar17;
    uVar1 = (ulonglong)uStack_ac * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res18 = (int)lVar16;
    iStack_9c = local_98 + -1 + local_res18;
    if (iVar3 < iStack_9c) {
      iStack_9c = iVar3;
    }
  }
LAB_1457c14ed:
  local_b8 = &pFVar5->CacheEntries;
  iStack_90 = *(int *)&(pFVar5->CacheEntries).field_0x8 - *(int *)&(pFVar5->CacheEntries).field_0x34
  ;
  TStack_78._padding_ = CONCAT44(uStack_ac,iVar18);
  uVar17 = *(uint *)&(pFVar5->CacheEntries).field_0x28;
  uStack_a0 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_9c;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  uVar22 = uVar17 & 0xffffffe0;
  iVar19 = (int)uVar17 >> 5;
  TStack_78._28_4_ = iStack_9c;
  TStack_78.BaseBitIndex = local_98;
  uStack_58 = CONCAT44(uStack_8c,iStack_90);
  iStack_b0 = iVar18;
  local_a8 = (undefined1 *)local_c0;
  iStack_94 = iStack_9c;
  local_80 = local_b8;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar15 = (FInvalidatingPrimitiveCollector *)(*pcVar9)();
    return pFVar15;
  }
  pTVar11 = local_88;
  FVar10 = local_c0;
  uVar4 = *(int *)((longlong)local_c0 + 0x18);
  if (uVar17 != uVar4) {
    FVar20 = local_c0;
    if (*(ForElementType<unsigned_int> *)((longlong)local_c0 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_c0 + 0x10);
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar19 * 4);
    while (uVar17 == 0) {
      lVar16 = (longlong)iVar19;
      uVar22 = uVar22 + 0x20;
      iVar19 = iVar19 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1457c1610;
      uVar17 = *(uint *)((undefined1 *)((longlong)FVar20 + 4) + lVar16 * 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res20 = (int)lVar16;
    uVar17 = local_res20 + -1 + uVar22;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_1457c1610:
  while( true ) {
    pTVar12 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar16 = (longlong)TStack_78.CurrentBitIndex;
    if (((TStack_78.CurrentBitIndex == uVar17) &&
        ((ForElementType<unsigned_int>)TStack_78.Array == FVar10)) && (pTVar12 == pTVar11)) break;
    lVar6 = *(longlong *)pTVar12;
    if ((*(longlong *)(lVar6 + 0x10 + lVar16 * 0x28) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      pFVar15 = (FInvalidatingPrimitiveCollector *)(*pcVar9)();
      return pFVar15;
    }
    pFVar7 = *(FVirtualShadowMapPerLightCacheEntry **)(lVar6 + lVar16 * 0x28 + 0x10);
    if ((((pFVar7->bIsDistantLight == false) || (pFVar7->RenderedFrameNumber < 0)) &&
        (pFVar7->bIsUncached == false)) &&
       ((-1 < pFVar7->RenderedFrameNumber && (-1 < pFVar7->VirtualShadowMapId)))) {
      ppFVar8 = (pTVar2->AllocatorInstance).Data;
      local_c8 = pFVar7;
      if ((ppFVar8 <= &local_c8) &&
         ((&local_c8 < ppFVar8 + (this->CacheEntriesForInvalidation).ArrayMax &&
          (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar13)))) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FInvalidatingPrimitiveCollector *)(*pcVar9)();
        return pFVar15;
      }
      iVar18 = (this->CacheEntriesForInvalidation).ArrayNum;
      if (iVar18 == (this->CacheEntriesForInvalidation).ArrayMax) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualShadowMapPerLightCacheEntry_const_*>_>
                           (0x808,&pTVar2->AllocatorInstance,
                            &(this->CacheEntriesForInvalidation).ArrayMax);
      }
      (this->CacheEntriesForInvalidation).ArrayNum = iVar18 + 1;
      (pTVar2->AllocatorInstance).Data[iVar18] = local_c8;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return this;
}

// AddInvalidation @ 1457d1c40

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
FVirtualShadowMapArrayCacheManager::FInvalidatingPrimitiveCollector::AddInvalidation
          (FInvalidatingPrimitiveCollector *this,FVirtualShadowMapPerLightCacheEntry *param_1,
          int param_2,int param_3,bool param_4,bool param_5,TBoxSphereBounds<double,double> *param_6
          )

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (((((!param_4) || (param_1->bUseReceiverMask == false)) &&
       ((!param_5 ||
        ((param_1->LightRadius <= 0.0 ||
         (dVar9 = (param_6->Origin).field0_0x0._s_0.Y - (param_1->LightOrigin).field0_0x0._s_0.Y,
         dVar8 = (param_6->Origin).field0_0x0._s_0.X - (param_1->LightOrigin).field0_0x0._s_0.X,
         dVar6 = (param_6->Origin).field0_0x0._s_0.Z - (param_1->LightOrigin).field0_0x0._s_0.Z,
         dVar7 = (double)param_1->LightRadius + param_6->SphereRadius,
         dVar9 * dVar9 + dVar8 * dVar8 + dVar6 * dVar6 <= dVar7 * dVar7)))))) &&
      (iVar4 = param_1->VirtualShadowMapId, -1 < iVar4)) &&
     (uVar1 = (param_1->ShadowMapEntries).ArrayNum, 0 < (int)uVar1)) {
    uVar5 = (ulonglong)uVar1;
    do {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("VirtualShadowMapId >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                             ,0x1b0,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
      ::Add(&this->Instances,param_2,param_3,iVar4 << 8);
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// AddInvalidation @ 1457d1d60

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
FVirtualShadowMapArrayCacheManager::FInvalidatingPrimitiveCollector::AddInvalidation
          (FInvalidatingPrimitiveCollector *this,FPrimitiveSceneInfo *param_1,
          EInvalidationCause param_2)

{
  uint *puVar1;
  FVirtualShadowMapPerLightCacheEntry **ppFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FScene *pFVar6;
  FPrimitiveSceneProxy *pFVar7;
  FVirtualShadowMapArrayCacheManager *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ForElementType<unsigned_int> FVar13;
  byte bVar14;
  longlong lVar15;
  FVirtualShadowMapPerLightCacheEntry **ppFVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  
  uVar3 = param_1->PackedIndex;
  if ((-1 < (int)uVar3) && (iVar4 = param_1->InstanceSceneDataOffset, iVar4 != -1)) {
    pFVar6 = this->Scene;
    uVar11 = 0;
    if ((int)uVar3 < (pFVar6->PrimitiveFlagsCompact).ArrayNum) {
      uVar11 = ~uVar3 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((byte)(pFVar6->PrimitiveFlagsCompact).AllocatorInstance.Data[(int)uVar3] & 1) != 0) {
      uVar3 = (param_1->PersistentIndex).Index;
      uVar11 = (int)uVar3 >> 0x1f;
      bVar14 = (byte)uVar3;
      if (param_2 == Removed) {
        if ((((int)uVar3 < 0) || ((this->RemovedPrimitives).NumBits <= (int)uVar3)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar12 = (int)(uVar3 + (uVar11 & 0x1f)) >> 5;
        uVar17 = 1 << (bVar14 & 0x1f);
        puVar1 = (this->RemovedPrimitives).AllocatorInstance.Data + iVar12;
        *puVar1 = *puVar1 | uVar17;
        if ((((int)uVar3 < 0) || ((this->InvalidatedPrimitives).NumBits <= (int)uVar3)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar1 = (this->InvalidatedPrimitives).AllocatorInstance.Data + iVar12;
        *puVar1 = *puVar1 | uVar17;
      }
      else if (param_2 == Updated) {
        if (param_1->Proxy->ShadowCacheInvalidationBehavior == Static) {
          return;
        }
        if ((((int)uVar3 < 0) || ((this->InvalidatedPrimitives).NumBits <= (int)uVar3)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar1 = (this->InvalidatedPrimitives).AllocatorInstance.Data +
                 ((int)(uVar3 + (uVar11 & 0x1f)) >> 5);
        *puVar1 = *puVar1 | 1 << (bVar14 & 0x1f);
      }
      else if ((param_2 == Added) &&
              (((pFVar7 = param_1->Proxy, (pFVar7->Mobility).Value == '\x02' ||
                (pFVar7->bGoodCandidateForCachedShadowmap == '\0')) &&
               (pFVar7->ShadowCacheInvalidationBehavior != Static)))) {
        if ((((int)uVar3 < 0) || ((this->InvalidatedPrimitives).NumBits <= (int)uVar3)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar15 = (longlong)((int)(uVar3 + (uVar11 & 0x1f)) >> 5);
        uVar17 = 1 << (bVar14 & 0x1f);
        puVar1 = (this->InvalidatedPrimitives).AllocatorInstance.Data + lVar15;
        *puVar1 = *puVar1 | uVar17;
        pFVar8 = this->Manager;
        if ((((int)uVar3 < 0) || ((pFVar8->CachePrimitiveAsDynamic).NumBits <= (int)uVar3)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar13 = (pFVar8->CachePrimitiveAsDynamic).AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<unsigned_int>)0x0) {
          FVar13 = (ForElementType<unsigned_int>)&pFVar8->CachePrimitiveAsDynamic;
        }
        puVar1 = (uint *)((longlong)FVar13 + lVar15 * 4);
        *puVar1 = *puVar1 | uVar17;
      }
      pFVar7 = param_1->Proxy;
      iVar12 = param_1->NumInstanceSceneDataEntries;
      pFVar8 = this->Manager;
      local_68._s_0.X = (pFVar7->Bounds).Origin.field0_0x0._s_0.X;
      local_68._s_0.Y = (pFVar7->Bounds).Origin.field0_0x0._s_0.Y;
      local_68._s_0.Z = (pFVar7->Bounds).Origin.field0_0x0._s_0.Z;
      dStack_50 = (pFVar7->Bounds).BoxExtent.field0_0x0._s_0.X;
      local_48 = (pFVar7->Bounds).BoxExtent.field0_0x0._s_0.Y;
      dStack_40 = (pFVar7->Bounds).BoxExtent.field0_0x0._s_0.Z;
      local_38 = (pFVar7->Bounds).SphereRadius;
      if ((((int)uVar3 < 0) || ((pFVar8->CachePrimitiveAsDynamic).NumBits <= (int)uVar3)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar13 = (pFVar8->CachePrimitiveAsDynamic).AllocatorInstance.SecondaryData;
      iVar5 = (this->CacheEntriesForInvalidation).ArrayNum;
      if (FVar13 == (ForElementType<unsigned_int>)0x0) {
        FVar13 = (ForElementType<unsigned_int>)&pFVar8->CachePrimitiveAsDynamic;
      }
      uVar11 = *(uint *)((longlong)FVar13 + (longlong)((int)(uVar3 + (uVar11 & 0x1f)) >> 5) * 4);
      ppFVar16 = (this->CacheEntriesForInvalidation).AllocatorInstance.Data;
      ppFVar2 = ppFVar16 + iVar5;
      while( true ) {
        if ((this->CacheEntriesForInvalidation).ArrayNum != iVar5) {
          `TCheckedPointerIterator<FVirtualShadowMapPerLightCacheEntry_const_*,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        if (ppFVar16 == ppFVar2) break;
        AddInvalidation(this,*ppFVar16,iVar4,iVar12,(uVar11 >> (uVar3 & 0x1f) & 1) != 0,
                        GVSMLightRadiusInvalidationCulling != 0,
                        (TBoxSphereBounds<double,double> *)&local_68._s_0);
        ppFVar16 = ppFVar16 + 1;
      }
    }
  }
  return;
}

// AddPrimitivesToInvalidate @ 1457d2140

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
FVirtualShadowMapArrayCacheManager::FInvalidatingPrimitiveCollector::AddPrimitivesToInvalidate
          (FInvalidatingPrimitiveCollector *this)

{
  undefined1 *puVar1;
  uint *puVar2;
  FVirtualShadowMapArrayCacheManager *pFVar3;
  longlong lVar4;
  FVirtualShadowMapArrayCacheManager *pFVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ForElementType<unsigned_int> FVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  uint *puVar23;
  FScriptContainerElement *pFVar24;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_150;
  undefined4 uStack_114;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pFVar3 = this->Manager;
  iVar18 = 0;
  iVar20 = 0;
  uVar10 = 1;
  puVar1 = &(pFVar3->CacheEntries).field_0x10;
  iVar15 = *(int *)&(pFVar3->CacheEntries).field_0x28;
  iVar11 = 0;
  if (iVar15 != 0) {
    puVar21 = *(uint **)&(pFVar3->CacheEntries).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar16 = *puVar21;
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1457d21ff;
      uVar16 = puVar21[lVar13 + 1];
    }
    uVar10 = -uVar16 & uVar16;
    uVar12 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = (int)lVar13 + -1 + iVar20;
    if (iVar15 < iVar11) {
      iVar11 = iVar15;
    }
  }
LAB_1457d21ff:
  local_150 = *(uint *)&(pFVar3->CacheEntries).field_0x28;
  uVar16 = local_150 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uVar10,iVar18);
  TStack_e8.CurrentBitIndex = iVar11;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)local_150 >> 5;
  TStack_e8._28_4_ = iVar11;
  TStack_e8.BaseBitIndex = iVar20;
  uStack_c8 = CONCAT44(uStack_114,
                       *(int *)&(pFVar3->CacheEntries).field_0x8 -
                       *(int *)&(pFVar3->CacheEntries).field_0x34);
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_150 < 0) || (iVar15 < (int)local_150)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = *(uint *)&(pFVar3->CacheEntries).field_0x28;
  if (local_150 != uVar10) {
    puVar19 = *(undefined1 **)&(pFVar3->CacheEntries).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)local_150 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      uVar16 = uVar16 + 0x20;
      iVar18 = iVar18 + 1;
      local_150 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_1457d2330;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar12 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_150 = (int)lVar13 + -1 + uVar16;
    if ((int)uVar10 < (int)local_150) {
      local_150 = uVar10;
    }
  }
LAB_1457d2330:
  while( true ) {
    if (*(int *)&(pFVar3->CacheEntries).field_0x8 - *(int *)&(pFVar3->CacheEntries).field_0x34 !=
        (int)uStack_c8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar13 = (longlong)TStack_e8.CurrentBitIndex;
    if ((TStack_e8.CurrentBitIndex == local_150) &&
       (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&pFVar3->CacheEntries;
    if ((*(longlong *)(lVar4 + 0x10 + lVar13 * 0x28) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = this->Manager;
    lVar13 = *(longlong *)(lVar4 + 0x10 + lVar13 * 0x28);
    uVar10 = (pFVar5->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.
             ArrayNum;
    uVar12 = (ulonglong)(int)uVar10;
    pFVar24 = (pFVar5->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.
              AllocatorInstance.Data;
    pFVar22 = pFVar24 + uVar12 * 0x10;
    while( true ) {
      if ((pFVar5->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.
          ArrayNum != (int)uVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FVirtualShadowMapInstanceRange,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar24 == pFVar22) break;
      uVar16 = *(uint *)pFVar24;
      bVar8 = true;
      if (uVar16 != 0xffffffff) {
        if ((((int)uVar16 < 0) || ((pFVar3->CachePrimitiveAsDynamic).NumBits <= (int)uVar16)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar6 = (pFVar3->CachePrimitiveAsDynamic).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)&pFVar3->CachePrimitiveAsDynamic;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar6;
        }
        uVar17 = uVar16 & 0x1f;
        if ((int)uVar16 < 0) {
          uVar16 = uVar16 + 0x1f;
        }
        bVar8 = (*(uint *)((longlong)FVar14 + (longlong)((int)uVar16 >> 5) * 4) >> uVar17 & 1) != 0;
        if (pFVar24[0xc] != (FScriptContainerElement)0x0) {
          uVar16 = *(uint *)pFVar24;
          if ((((int)uVar16 < 0) || ((this->InvalidatedPrimitives).NumBits <= (int)uVar16)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar17 = uVar16;
          if ((int)uVar16 < 0) {
            uVar17 = uVar16 + 0x1f;
          }
          puVar21 = (this->InvalidatedPrimitives).AllocatorInstance.Data + ((int)uVar17 >> 5);
          *puVar21 = *puVar21 | 1 << ((byte)uVar16 & 0x1f);
        }
      }
      uVar16 = *(uint *)(pFVar24 + 8);
      uVar17 = *(uint *)(pFVar24 + 4);
      local_90 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      if (((!bVar8) || (*(char *)(lVar13 + 0x12) == '\0')) &&
         ((iVar15 = *(int *)(lVar13 + 0xc), -1 < iVar15 && (0 < (int)*(uint *)(lVar13 + 0x40))))) {
        uVar12 = (ulonglong)*(uint *)(lVar13 + 0x40);
        do {
          if ((iVar15 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("VirtualShadowMapId >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                                 ,0x1b0,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          ::Add(&this->Instances,uVar17,uVar16,iVar15 << 8);
          iVar15 = iVar15 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      uVar12 = (ulonglong)uVar10;
      pFVar24 = pFVar24 + 0x10;
    }
    uVar10 = *(uint *)(lVar13 + 0x50);
    uVar12 = (ulonglong)(int)uVar10;
    puVar21 = *(uint **)(lVar13 + 0x48);
    puVar23 = puVar21 + uVar12 * 4;
    while( true ) {
      if (*(int *)(lVar13 + 0x50) != (int)uVar12) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FVirtualShadowMapInstanceRange,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (puVar21 == puVar23) break;
      if ((*puVar21 == 0xffffffff) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Range.PersistentPrimitiveIndex.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                             ,0x1fe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar16 = *puVar21;
      bVar8 = true;
      if (uVar16 != 0xffffffff) {
        if ((((int)uVar16 < 0) || ((pFVar3->CachePrimitiveAsDynamic).NumBits <= (int)uVar16)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar6 = (pFVar3->CachePrimitiveAsDynamic).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)&pFVar3->CachePrimitiveAsDynamic;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar6;
        }
        uVar17 = uVar16 & 0x1f;
        if ((int)uVar16 < 0) {
          uVar16 = uVar16 + 0x1f;
        }
        bVar8 = (*(uint *)((longlong)FVar14 + (longlong)((int)uVar16 >> 5) * 4) >> uVar17 & 1) != 0;
        if ((char)puVar21[3] != '\0') {
          uVar16 = *puVar21;
          if ((((int)uVar16 < 0) || ((this->InvalidatedPrimitives).NumBits <= (int)uVar16)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar17 = uVar16;
          if ((int)uVar16 < 0) {
            uVar17 = uVar16 + 0x1f;
          }
          puVar2 = (this->InvalidatedPrimitives).AllocatorInstance.Data + ((int)uVar17 >> 5);
          *puVar2 = *puVar2 | 1 << ((byte)uVar16 & 0x1f);
        }
      }
      uVar16 = puVar21[2];
      uVar17 = puVar21[1];
      local_58 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      if (((!bVar8) || (*(char *)(lVar13 + 0x12) == '\0')) &&
         ((iVar15 = *(int *)(lVar13 + 0xc), -1 < iVar15 && (0 < (int)*(uint *)(lVar13 + 0x40))))) {
        uVar12 = (ulonglong)*(uint *)(lVar13 + 0x40);
        do {
          if ((iVar15 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("VirtualShadowMapId >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                                 ,0x1b0,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          ::Add(&this->Instances,uVar17,uVar16,iVar15 << 8);
          iVar15 = iVar15 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        uVar12 = (ulonglong)uVar10;
      }
      puVar21 = puVar21 + 4;
    }
    *(undefined4 *)(lVar13 + 0x50) = 0;
    if (*(int *)(lVar13 + 0x54) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)(lVar13 + 0x48),0,(int *)(lVar13 + 0x54));
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  pFVar3 = this->Manager;
  iVar15 = (pFVar3->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.
           ArrayMax;
  (pFVar3->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.ArrayNum = 0;
  if (iVar15 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(pFVar3->ShadowInvalidatingInstancesImplementation).
                         PrimitiveInstancesToInvalidate.AllocatorInstance,0,
               &(pFVar3->ShadowInvalidatingInstancesImplementation).PrimitiveInstancesToInvalidate.
                ArrayMax);
  }
  return;
}

