// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FInstanceCullingMergedContext @ 144b97b20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FInstanceCullingMergedContext * __thiscall
FInstanceCullingMergedContext::FInstanceCullingMergedContext
          (FInstanceCullingMergedContext *this,EShaderPlatform param_1,bool param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TArray<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *this_00;
  TArray<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *this_01;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FInstanceCullingMergedContext *pFVar8;
  uint uVar9;
  
  (this->Batches).AllocatorInstance.Data = (FBatchItem *)0x0;
  this_00 = &this->LoadBalancers;
  (this->LoadBalancers).ArrayNum = 0;
  this_01 = &this->BatchInds;
  (this->LoadBalancers).ArrayMax = 0;
  piVar1 = &(this->LoadBalancers).ArrayNum;
  (this->BatchInds).ArrayNum = 0;
  piVar2 = &(this->LoadBalancers).ArrayMax;
  (this->Batches).ArrayNum = 0;
  (this->Batches).ArrayMax = 0;
  piVar3 = &(this->BatchInds).ArrayNum;
  (this->AsyncBatches).AllocatorInstance.Data = (FBatchItem *)0x0;
  (this->AsyncBatches).ArrayNum = 0;
  (this->AsyncBatches).ArrayMax = 0;
  (this->ViewIds).AllocatorInstance.Data = (int *)0x0;
  (this->ViewIds).ArrayNum = 0;
  (this->ViewIds).ArrayMax = 0;
  (this->IndirectArgs).AllocatorInstance.Data = (FRHIDrawIndexedIndirectParameters *)0x0;
  (this->IndirectArgs).ArrayNum = 0;
  (this->IndirectArgs).ArrayMax = 0;
  (this->DrawCommandDescs).AllocatorInstance.Data = (TIntVector2<unsigned_int> *)0x0;
  (this->DrawCommandDescs).ArrayNum = 0;
  (this->DrawCommandDescs).ArrayMax = 0;
  (this->PayloadData).AllocatorInstance.Data = (FPayloadData *)0x0;
  (this->PayloadData).ArrayNum = 0;
  (this->PayloadData).ArrayMax = 0;
  (this->InstanceIdOffsets).AllocatorInstance.Data = (uint *)0x0;
  (this->InstanceIdOffsets).ArrayNum = 0;
  (this->InstanceIdOffsets).ArrayMax = 0;
  (this->DrawCommandCompactionData).AllocatorInstance.Data = (FCompactionData *)0x0;
  (this->DrawCommandCompactionData).ArrayNum = 0;
  (this->DrawCommandCompactionData).ArrayMax = 0;
  (this->CompactionBlockDataIndices).AllocatorInstance.Data = (uint *)0x0;
  (this->CompactionBlockDataIndices).ArrayNum = 0;
  (this->CompactionBlockDataIndices).ArrayMax = 0;
  (this_00->AllocatorInstance).Data =
       (TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        *)0x0;
  (this_01->AllocatorInstance).Data =
       (TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)0x0;
  (this->BatchInds).ArrayMax = 0;
  (this->BatchInfos).AllocatorInstance.Data = (FContextBatchInfoPacked *)0x0;
  (this->BatchInfos).ArrayNum = 0;
  (this->BatchInfos).ArrayMax = 0;
  (this->TotalBatches).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  this->ShaderPlatform = param_1;
  this->bMustAddAllContexts = param_2;
  this->InstanceIdBufferElements = 0;
  (this->TotalBatches).ArrayNum = 0;
  (this->TotalBatches).ArrayMax = 5;
  (this->TotalItems).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->TotalItems).ArrayNum = 0;
  *(undefined8 *)&(this->TotalItems).ArrayMax = 5;
  this->TotalPayloads = 0;
  this->TotalViewIds = 0;
  this->TotalInstances = 0;
  this->TotalCompactionDrawCommands = 0;
  this->TotalCompactionBlocks = 0;
  this->TotalCompactionInstances = 0;
  this->NumCullingViews = 0;
  if (param_3 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumBins >= 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                       ,0xc,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FInstanceCullingMergedContext *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar4 = *piVar1;
  if (iVar4 < param_3) {
    iVar7 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                      (0x20,8,param_3 - iVar4,&this_00->AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int>
              ((this_00->AllocatorInstance).Data + iVar7,param_3 - iVar4);
  }
  else {
    if (param_3 < 0) goto LAB_144b97e34;
    if (param_3 < iVar4) {
      uVar9 = iVar4 - param_3;
      if ((int)(uVar9 | param_3) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FInstanceCullingMergedContext *)(*pcVar5)();
          return pFVar8;
        }
      }
      if (uVar9 != 0) {
        TArray<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        ::RemoveAtImpl(this_00,param_3,uVar9);
        UE::Core::Private::
        ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                  (0x20,8,&this_00->AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  iVar4 = *piVar3;
  if (iVar4 < param_3) {
    iVar7 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                      (0x10,8,param_3 - iVar4,&this_01->AllocatorInstance,piVar3,
                       &(this->BatchInds).ArrayMax);
    memset((this_01->AllocatorInstance).Data + iVar7,0,(longlong)(param_3 - iVar4) << 4);
  }
  else {
    if (param_3 < 0) {
LAB_144b97e34:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
    }
    if (param_3 < iVar4) {
      uVar9 = iVar4 - param_3;
      if ((int)(uVar9 | param_3) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FInstanceCullingMergedContext *)(*pcVar5)();
          return pFVar8;
        }
      }
      if (uVar9 != 0) {
        TArray<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        ::RemoveAtImpl(this_01,param_3,uVar9);
        UE::Core::Private::
        ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                  (0x10,8,&this_01->AllocatorInstance,*piVar3,&(this->BatchInds).ArrayMax);
      }
    }
  }
  TArray<int,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&this->TotalBatches,param_3,Default);
  TArray<int,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&this->TotalItems,param_3,Default);
  return this;
}

// ~FInstanceCullingMergedContext @ 144b99300

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstanceCullingMergedContext::~FInstanceCullingMergedContext(FInstanceCullingMergedContext *this)

{
  ForElementType<int> FVar1;
  FContextBatchInfoPacked *pFVar2;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar3;
  TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar4;
  uint *puVar5;
  FCompactionData *pFVar6;
  FPayloadData *pFVar7;
  TIntVector2<unsigned_int> *pTVar8;
  FRHIDrawIndexedIndirectParameters *pFVar9;
  int *piVar10;
  FBatchItem *pFVar11;
  
  FVar1 = (this->TotalItems).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->TotalBatches).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->BatchInfos).AllocatorInstance.Data;
  if (pFVar2 != (FContextBatchInfoPacked *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  DestructItems<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int>
            ((this->BatchInds).AllocatorInstance.Data,(this->BatchInds).ArrayNum);
  pTVar3 = (this->BatchInds).AllocatorInstance.Data;
  if (pTVar3 != (TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                 *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar3);
  }
  DestructItems<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int>
            ((this->LoadBalancers).AllocatorInstance.Data,(this->LoadBalancers).ArrayNum);
  pTVar4 = (this->LoadBalancers).AllocatorInstance.Data;
  if (pTVar4 != (TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                 *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar4);
  }
  puVar5 = (this->CompactionBlockDataIndices).AllocatorInstance.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  pFVar6 = (this->DrawCommandCompactionData).AllocatorInstance.Data;
  if (pFVar6 != (FCompactionData *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar6);
  }
  puVar5 = (this->InstanceIdOffsets).AllocatorInstance.Data;
  if (puVar5 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar5);
  }
  pFVar7 = (this->PayloadData).AllocatorInstance.Data;
  if (pFVar7 != (FPayloadData *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar7);
  }
  pTVar8 = (this->DrawCommandDescs).AllocatorInstance.Data;
  if (pTVar8 != (TIntVector2<unsigned_int> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar8);
  }
  pFVar9 = (this->IndirectArgs).AllocatorInstance.Data;
  if (pFVar9 != (FRHIDrawIndexedIndirectParameters *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar9);
  }
  piVar10 = (this->ViewIds).AllocatorInstance.Data;
  if (piVar10 != (int *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar10);
  }
  pFVar11 = (this->AsyncBatches).AllocatorInstance.Data;
  if (pFVar11 != (FBatchItem *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar11);
  }
  pFVar11 = (this->Batches).AllocatorInstance.Data;
  if (pFVar11 != (FBatchItem *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar11);
    return;
  }
  return;
}

// AddBatch @ 144ba7f40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstanceCullingMergedContext::AddBatch
          (FInstanceCullingMergedContext *this,FRDGBuilder *param_1,FInstanceCullingContext *param_2
          ,FInstanceCullingDrawParams *param_3)

{
  int *piVar1;
  IPooledRenderTarget *pIVar2;
  FScriptContainerElement *pFVar3;
  FBatchItem *pFVar4;
  FBatchItem *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FBatchItem local_38;
  FBatchItem local_20;
  
  if ((((param_2->PrevHZB).Reference == (IPooledRenderTarget *)0x0) ||
      (bVar7 = FInstanceCullingContext::IsOcclusionCullingEnabled(), !bVar7)) ||
     (pIVar2 = (param_2->PrevHZB).Reference, pIVar2 == (IPooledRenderTarget *)0x0)) {
    iVar8 = 1;
  }
  else {
    pFVar3 = (param_2->InstanceCullingManager->ViewPrevHZBs).AllocatorInstance.Data;
    for (pFVar9 = pFVar3;
        pFVar9 != pFVar3 + (longlong)(param_2->InstanceCullingManager->ViewPrevHZBs).ArrayNum * 8;
        pFVar9 = pFVar9 + 8) {
      if (*(IPooledRenderTarget **)pFVar9 == pIVar2) {
        iVar8 = (int)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
        if (iVar8 != -1) {
          iVar8 = iVar8 + 1;
          if (iVar8 < 1) goto LAB_144ba7fa3;
          goto LAB_144ba7fe5;
        }
        break;
      }
    }
    iVar8 = -1;
LAB_144ba7fa3:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("BinIndex > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                       ,0xab,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
LAB_144ba7fe5:
  if (*(longlong *)&param_2->SyncPrerequisitesFunc == 0) {
    local_20.Context = param_2;
    local_20.Result = param_3;
    local_20.GenericBinIndex = iVar8;
    AddBatchItem(this,&local_20);
  }
  else {
    pFVar4 = (this->AsyncBatches).AllocatorInstance.Data;
    local_38.Context = param_2;
    local_38.Result = param_3;
    local_38.GenericBinIndex = iVar8;
    if (((pFVar4 <= &local_38) && (&local_38 < pFVar4 + (this->AsyncBatches).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = (this->AsyncBatches).ArrayNum;
    piVar1 = &(this->AsyncBatches).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FBatchItem>_>
                        (0x818,&(this->AsyncBatches).AllocatorInstance,piVar1);
    }
    (this->AsyncBatches).ArrayNum = iVar8 + 1;
    pFVar5 = (this->AsyncBatches).AllocatorInstance.Data;
    pFVar4 = pFVar5 + iVar8;
    pFVar4->Context = local_38.Context;
    pFVar4->Result = local_38.Result;
    *(ulonglong *)&pFVar5[iVar8].GenericBinIndex =
         CONCAT44(local_38._20_4_,local_38.GenericBinIndex);
  }
  return;
}

// AddBatchItem @ 144ba80f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstanceCullingMergedContext::AddBatchItem(FInstanceCullingMergedContext *this,FBatchItem *param_1)

{
  int *piVar1;
  FInstanceCullingContext *pFVar2;
  FBatchItem *pFVar3;
  FBatchItem *pFVar4;
  FInstanceProcessingGPULoadBalancer *pFVar5;
  longlong lVar6;
  code *pcVar7;
  FInstanceCullingDrawParams *pFVar8;
  ForElementType<int> *pFVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  ForElementType<int> FVar14;
  uint uVar15;
  TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar16;
  undefined1 local_res10 [8];
  uint local_38 [4];
  
  pFVar2 = param_1->Context;
  if (*(longlong *)&pFVar2->SyncPrerequisitesFunc != 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!SyncPrerequisitesFunc",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                        ,0x2b7,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pFVar2->TotalInstances != 0) {
    pFVar3 = (this->Batches).AllocatorInstance.Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Batches).ArrayMax)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar12 = (this->Batches).ArrayNum;
    piVar1 = &(this->Batches).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FBatchItem>_>
                         (0x818,(ForElementType<FInstanceCullingMergedContext::FBatchItem> *)this,
                          piVar1);
    }
    (this->Batches).ArrayNum = iVar12 + 1;
    pFVar8 = param_1->Result;
    pFVar4 = (this->Batches).AllocatorInstance.Data;
    pFVar3 = pFVar4 + iVar12;
    pFVar3->Context = param_1->Context;
    pFVar3->Result = pFVar8;
    uVar10 = *(undefined4 *)&param_1->field_0x14;
    pFVar4 = pFVar4 + iVar12;
    pFVar4->GenericBinIndex = param_1->GenericBinIndex;
    *(undefined4 *)&pFVar4->field_0x14 = uVar10;
    pFVar5 = (pFVar2->LoadBalancers).Elements[0];
    if (*(uint *)&pFVar5->field_0xc != 0) {
      lVar6 = *(longlong *)pFVar5;
      local_38[0] = *(int *)&pFVar5->field_0x14 << 7 | *(uint *)&pFVar5->field_0xc & 0x7f;
      if ((*(uint **)(lVar6 + 8) <= local_38) &&
         (local_38 < *(uint **)(lVar6 + 8) + *(int *)(lVar6 + 0x14))) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar12 = *(int *)(lVar6 + 0x10);
      if (iVar12 == *(int *)(lVar6 + 0x14)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(lVar6 + 8),(int *)(lVar6 + 0x14));
      }
      *(int *)(lVar6 + 0x10) = iVar12 + 1;
      *(uint *)(*(longlong *)(lVar6 + 8) + (longlong)iVar12 * 4) = local_38[0];
      *(undefined4 *)&pFVar5->field_0xc = 0;
    }
    uVar15 = param_1->GenericBinIndex;
    if (((int)uVar15 < 0) || ((this->LoadBalancers).ArrayNum <= (int)uVar15)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BinIndex >= 0 && BinIndex < LoadBalancers.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                          ,0x18,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar5 = (pFVar2->LoadBalancers).Elements[0];
    if (*(int *)&pFVar5->field_0xc != 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentBatchNumItems == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                          ,0xdc,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar12 = *(int *)(*(longlong *)pFVar5 + 0x14);
    uVar13 = 0;
    if ((int)uVar15 < (this->TotalBatches).ArrayNum) {
      uVar13 = ~uVar15 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FVar14 = (this->TotalBatches).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<int>)0x0) {
      FVar14 = (ForElementType<int>)&this->TotalBatches;
    }
    piVar1 = (int *)((longlong)FVar14 + (longlong)(int)uVar15 * 4);
    *piVar1 = *piVar1 + iVar12;
    pFVar5 = (pFVar2->LoadBalancers).Elements[0];
    if (*(int *)&pFVar5->field_0xc != 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentBatchNumItems == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                          ,0xe2,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar12 = *(int *)(*(longlong *)pFVar5 + 0x24);
    uVar13 = 0;
    if ((int)uVar15 < (this->TotalItems).ArrayNum) {
      uVar13 = ~uVar15 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FVar14 = (this->TotalItems).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<int>)0x0) {
      FVar14 = (ForElementType<int>)&this->TotalItems;
    }
    piVar1 = (int *)((longlong)FVar14 + (longlong)(int)uVar15 * 4);
    *piVar1 = *piVar1 + iVar12;
    pFVar5 = (pFVar2->LoadBalancers).Elements[1];
    if (*(uint *)&pFVar5->field_0xc != 0) {
      lVar6 = *(longlong *)pFVar5;
      local_38[0] = *(int *)&pFVar5->field_0x14 << 7 | *(uint *)&pFVar5->field_0xc & 0x7f;
      if ((*(uint **)(lVar6 + 8) <= local_38) &&
         (local_38 < *(uint **)(lVar6 + 8) + *(int *)(lVar6 + 0x14))) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar12 = *(int *)(lVar6 + 0x10);
      if (iVar12 == *(int *)(lVar6 + 0x14)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(lVar6 + 8),(int *)(lVar6 + 0x14));
      }
      *(int *)(lVar6 + 0x10) = iVar12 + 1;
      *(uint *)(*(longlong *)(lVar6 + 8) + (longlong)iVar12 * 4) = local_38[0];
      *(undefined4 *)&pFVar5->field_0xc = 0;
    }
    if ((this->LoadBalancers).ArrayNum < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BinIndex >= 0 && BinIndex < LoadBalancers.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                          ,0x18,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar5 = (pFVar2->LoadBalancers).Elements[1];
    if (*(int *)&pFVar5->field_0xc != 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentBatchNumItems == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                          ,0xdc,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar12 = *(int *)(*(longlong *)pFVar5 + 0x14);
    if ((this->TotalBatches).ArrayNum < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FVar14 = (this->TotalBatches).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<int>)0x0) {
      FVar14 = (ForElementType<int>)&this->TotalBatches;
    }
    *(int *)FVar14 = *(int *)FVar14 + iVar12;
    pFVar5 = (pFVar2->LoadBalancers).Elements[1];
    if (*(int *)&pFVar5->field_0xc != 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentBatchNumItems == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                          ,0xe2,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar12 = *(int *)(*(longlong *)pFVar5 + 0x24);
    if ((this->TotalItems).ArrayNum < 1) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FVar14 = (this->TotalItems).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<int>)0x0) {
      FVar14 = (ForElementType<int>)&this->TotalItems;
    }
    *(int *)FVar14 = *(int *)FVar14 + iVar12;
    pTVar16 = (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(pFVar2->ViewIds).AllocatorInstance.SecondaryData.Data;
    iVar12 = (pFVar2->ViewIds).ArrayNum;
    if (pTVar16 ==
        (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar16 = &pFVar2->ViewIds;
    }
    pFVar9 = &pTVar16->AllocatorInstance;
    while( true ) {
      if ((pFVar2->ViewIds).ArrayNum != iVar12) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pTVar16 ==
          (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)(pFVar9->InlineData + (longlong)iVar12 * 4)) break;
      if ((-1 < this->NumCullingViews) &&
         (this->NumCullingViews <= *(int *)(pTVar16->AllocatorInstance).InlineData)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumCullingViews < 0 || ViewId < NumCullingViews",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                            ,0xce,
                            L"Attempting to defer a culling context that references a view that has not been uploaded yet."
                           );
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pTVar16 = (TArray<int,TSizedInlineAllocator<6,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)((pTVar16->AllocatorInstance).InlineData + 4);
    }
    this->TotalIndirectArgs = this->TotalIndirectArgs + (pFVar2->IndirectArgs).ArrayNum;
    this->TotalPayloads = this->TotalPayloads + (pFVar2->PayloadData).ArrayNum;
    this->TotalViewIds = this->TotalViewIds + (pFVar2->ViewIds).ArrayNum;
    if (pFVar2->bUsesUniformBufferView == false) {
      uVar15 = pFVar2->TotalInstances;
    }
    else {
      uVar15 = (*(uint *)&(pFVar2->LoadBalancers).Elements[1]->field_0x18 & 0x7fffff) * 0x20 +
               (*(uint *)&(pFVar2->LoadBalancers).Elements[0]->field_0x18 & 0xffffff) * 0x10;
    }
    this->InstanceIdBufferElements =
         this->InstanceIdBufferElements + uVar15 * (pFVar2->ViewIds).ArrayNum;
    this->TotalInstances = this->TotalInstances + pFVar2->TotalInstances;
    this->TotalCompactionDrawCommands =
         this->TotalCompactionDrawCommands + (pFVar2->DrawCommandCompactionData).ArrayNum;
    this->TotalCompactionBlocks =
         this->TotalCompactionBlocks + (pFVar2->CompactionBlockDataIndices).ArrayNum;
    this->TotalCompactionInstances = this->TotalCompactionInstances + pFVar2->NumCompactionInstances
    ;
    return;
  }
  if (this->bMustAddAllContexts != false) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bMustAddAllContexts",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                        ,0xde,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}

// GetLoadBalancerIndex @ 144bc6c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FInstanceCullingMergedContext::GetLoadBalancerIndex
          (FInstanceCullingMergedContext *this,EBatchProcessingMode param_1,FBatchItem *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == UnCulled) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_2->GenericBinIndex;
    if (iVar3 < 0) goto LAB_144bc6caf;
  }
  if (iVar3 < (this->LoadBalancers).ArrayNum) {
    return iVar3;
  }
LAB_144bc6caf:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("BinIndex >= 0 && BinIndex < LoadBalancers.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                     ,0x18,L"");
  if (!bVar2) {
    return iVar3;
  }
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}

// MergeBatches @ 144bd3a20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FInstanceCullingMergedContext::MergeBatches(FInstanceCullingMergedContext *this)

{
  TArray<FRHIDrawIndexedIndirectParameters,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar1;
  TArray<UE::Math::TIntVector2<unsigned_int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  TArray<FInstanceCullingContext::FPayloadData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar3;
  TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar4;
  FBatchItem *pFVar5;
  FContextBatchInfoPacked *pFVar6;
  ForElementType<int> FVar7;
  FData *pFVar8;
  void *pvVar9;
  FCompactionData *pFVar10;
  FCompactionData *pFVar11;
  uint *puVar12;
  code *pcVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ForElementType<int> FVar18;
  uint uVar19;
  uint uVar20;
  FBatchItem *pFVar21;
  undefined1 *_Src;
  uint *puVar22;
  int *piVar23;
  TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar24;
  FContextBatchInfoPacked *pFVar25;
  uint uVar26;
  uint uVar27;
  int *piVar28;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar29;
  longlong *plVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong *plVar34;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  FContextBatchInfoPacked *local_b0;
  TArray<FInstanceCullingContext::FCompactionData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *local_a8;
  FCompactionData local_a0;
  uint *local_88;
  longlong *local_80;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *local_58;
  
  iVar15 = (this->AsyncBatches).ArrayNum;
  pFVar21 = (this->AsyncBatches).AllocatorInstance.Data;
  pFVar5 = pFVar21 + iVar15;
  while( true ) {
    if ((this->AsyncBatches).ArrayNum != iVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FInstanceCullingMergedContext::FBatchItem,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar21 == pFVar5) break;
    FInstanceCullingContext::WaitForSetupTask(pFVar21->Context);
    if ((pFVar21->Context->DynamicInstanceIdOffset < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("AsyncBatchItem.Context->DynamicInstanceIdOffset >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                            ,0x22,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if ((pFVar21->Context->DynamicInstanceIdNum < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("AsyncBatchItem.Context->DynamicInstanceIdNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                            ,0x23,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    AddBatchItem(this,pFVar21);
    pFVar21 = pFVar21 + 1;
  }
  (this->AsyncBatches).ArrayNum = 0;
  if ((this->AsyncBatches).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FBatchItem>_>
              (0x18,8,0,&(this->AsyncBatches).AllocatorInstance,0,&(this->AsyncBatches).ArrayMax);
  }
  uVar19 = 0;
  if ((this->LoadBalancers).ArrayNum != 0) {
    do {
      uVar26 = ~uVar19 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar19 < (this->LoadBalancers).ArrayNum) {
        uVar20 = uVar26;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar32 = (longlong)(int)uVar19;
      pTVar24 = (this->LoadBalancers).AllocatorInstance.Data + lVar32;
      uVar20 = 0;
      if ((int)uVar19 < (this->TotalItems).ArrayNum) {
        uVar20 = uVar26;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar7 = (this->TotalItems).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<int>)&this->TotalItems;
      if (FVar7 != (ForElementType<int>)0x0) {
        FVar18 = FVar7;
      }
      uVar20 = *(uint *)((longlong)FVar18 + lVar32 * 4);
      uVar27 = 0;
      if ((int)uVar19 < (this->TotalBatches).ArrayNum) {
        uVar27 = uVar26;
      }
      if ((uVar27 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar7 = (this->TotalBatches).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<int>)&this->TotalBatches;
      if (FVar7 != (ForElementType<int>)0x0) {
        FVar18 = FVar7;
      }
      uVar26 = *(uint *)((longlong)FVar18 + lVar32 * 4);
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
      pFVar8 = (pTVar24->Data).Reference;
      piVar28 = &(pFVar8->Batches).ArrayMax;
      (pFVar8->Batches).ArrayNum = 0;
      if (*piVar28 != uVar26) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_>
                  (4,4,uVar26,&(pFVar8->Batches).AllocatorInstance,0,piVar28);
      }
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      pFVar8 = (pTVar24->Data).Reference;
      piVar28 = &(pFVar8->Items).ArrayMax;
      (pFVar8->Items).ArrayNum = 0;
      if (*piVar28 != uVar20) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>_>
                  (8,4,uVar20,&(pFVar8->Items).AllocatorInstance,0,piVar28);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < (uint)(this->LoadBalancers).ArrayNum);
  }
  uVar19 = this->TotalIndirectArgs;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  piVar28 = &(this->IndirectArgs).ArrayMax;
  (this->IndirectArgs).ArrayNum = 0;
  if (*piVar28 != uVar19) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_>
              (0x14,4,uVar19,&(this->IndirectArgs).AllocatorInstance,0,piVar28);
  }
  uVar19 = this->TotalIndirectArgs;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  piVar28 = &(this->DrawCommandDescs).ArrayMax;
  (this->DrawCommandDescs).ArrayNum = 0;
  if (*piVar28 != uVar19) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_>
              (8,4,uVar19,&(this->DrawCommandDescs).AllocatorInstance,0,piVar28);
  }
  uVar19 = this->TotalIndirectArgs;
  local_78 = &this->InstanceIdOffsets;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  piVar28 = &(this->InstanceIdOffsets).ArrayMax;
  (this->InstanceIdOffsets).ArrayNum = 0;
  if (*piVar28 != uVar19) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
              (4,4,uVar19,&local_78->AllocatorInstance,0,piVar28);
  }
  uVar19 = this->TotalPayloads;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  piVar28 = &(this->PayloadData).ArrayMax;
  (this->PayloadData).ArrayNum = 0;
  if (*piVar28 != uVar19) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_>
              (0x10,4,uVar19,&(this->PayloadData).AllocatorInstance,0,piVar28);
  }
  uVar19 = this->TotalViewIds;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  piVar28 = &(this->ViewIds).ArrayMax;
  (this->ViewIds).ArrayNum = 0;
  if (*piVar28 != uVar19) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
              (4,4,uVar19,&(this->ViewIds).AllocatorInstance,0,piVar28);
  }
  uVar19 = this->TotalCompactionDrawCommands;
  local_a8 = &this->DrawCommandCompactionData;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  piVar28 = &(this->DrawCommandCompactionData).ArrayMax;
  (this->DrawCommandCompactionData).ArrayNum = 0;
  if (*piVar28 != uVar19) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FCompactionData>_>
              (0x14,4,uVar19,&local_a8->AllocatorInstance,0,piVar28);
  }
  uVar19 = this->TotalCompactionBlocks;
  local_58 = &this->CompactionBlockDataIndices;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  piVar28 = &(this->CompactionBlockDataIndices).ArrayMax;
  (this->CompactionBlockDataIndices).ArrayNum = 0;
  if (*piVar28 != uVar19) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
              (4,4,uVar19,&local_58->AllocatorInstance,0,piVar28);
  }
  uVar19 = (this->Batches).ArrayNum;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if ((this->BatchInfos).ArrayMax < (int)uVar19) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked>_>
              (0x28,4,uVar19,&(this->BatchInfos).AllocatorInstance,(this->BatchInfos).ArrayNum,
               &(this->BatchInfos).ArrayMax);
  }
  iVar15 = (this->Batches).ArrayNum;
  local_d0 = 0;
  local_c8 = 0;
  local_cc = 0;
  local_b4 = 0;
  if (0 < iVar15) {
    local_68 = 0;
    do {
      lVar32 = local_68;
      piVar28 = &(this->BatchInfos).ArrayMax;
      uVar19 = 0;
      if ((int)local_b4 < iVar15) {
        uVar19 = ~local_b4 >> 0x1f;
      }
      local_b8 = local_d0;
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      plVar30 = (longlong *)((longlong)&((this->Batches).AllocatorInstance.Data)->Context + lVar32);
      lVar32 = *plVar30;
      local_80 = plVar30;
      local_60 = lVar32;
      if ((*(longlong *)(lVar32 + 0x60) != 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!SyncPrerequisitesFunc",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingContext.cpp"
                              ,0x2b7,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((*(int *)(lVar32 + 0x4c) == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceCullingContext.HasCullingCommands()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                              ,0x42,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar15 = (this->BatchInfos).ArrayNum;
      local_c4 = iVar15;
      if (iVar15 == *piVar28) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingMergedContext::FContextBatchInfoPacked>_>
                           (0x428,&(this->BatchInfos).AllocatorInstance,piVar28);
      }
      (this->BatchInfos).ArrayNum = iVar15 + 1;
      pFVar6 = (this->BatchInfos).AllocatorInstance.Data + iVar15;
      pFVar6->IndirectArgsOffset = (this->IndirectArgs).ArrayNum;
      local_b0 = pFVar6;
      if ((*(int *)(lVar32 + 0xb8) != *(int *)(lVar32 + 0xa8)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceCullingContext.DrawCommandDescs.Num() == InstanceCullingContext.IndirectArgs.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                              ,0x49,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pTVar1 = &this->IndirectArgs;
      if ((pTVar1 == (TArray<FRHIDrawIndexedIndirectParameters,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                      *)(lVar32 + 0xa0)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar15 = *(int *)(lVar32 + 0xa8);
      if (iVar15 != 0) {
        iVar16 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIDrawIndexedIndirectParameters>_>
                           (0x14,4,iVar15,&pTVar1->AllocatorInstance,&(this->IndirectArgs).ArrayNum,
                            &(this->IndirectArgs).ArrayMax);
        memcpy((pTVar1->AllocatorInstance).Data + iVar16,*(void **)(lVar32 + 0xa0),
               (longlong)iVar15 * 0x14);
      }
      pTVar2 = &this->DrawCommandDescs;
      if ((pTVar2 == (TArray<UE::Math::TIntVector2<unsigned_int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                      *)(lVar32 + 0xb0)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar15 = *(int *)(lVar32 + 0xb8);
      if (iVar15 != 0) {
        iVar16 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<unsigned_int>_>_>
                           (8,4,iVar15,&pTVar2->AllocatorInstance,&(this->DrawCommandDescs).ArrayNum
                            ,&(this->DrawCommandDescs).ArrayMax);
        memcpy((pTVar2->AllocatorInstance).Data + iVar16,*(void **)(lVar32 + 0xb0),
               (longlong)iVar15 << 3);
      }
      pTVar3 = &this->PayloadData;
      pFVar6->PayloadDataOffset = (this->PayloadData).ArrayNum;
      if ((pTVar3 == (TArray<FInstanceCullingContext::FPayloadData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                      *)(lVar32 + 0xc0)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar15 = *(int *)(lVar32 + 200);
      if (iVar15 != 0) {
        iVar16 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FPayloadData>_>
                           (0x10,4,iVar15,&pTVar3->AllocatorInstance,&(this->PayloadData).ArrayNum,
                            &(this->PayloadData).ArrayMax);
        memcpy((pTVar3->AllocatorInstance).Data + iVar16,*(void **)(lVar32 + 0xc0),
               (longlong)iVar15 << 4);
      }
      if ((*(int *)(lVar32 + 0xd8) != *(int *)(lVar32 + 0xa8)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceCullingContext.InstanceIdOffsets.Num() == InstanceCullingContext.IndirectArgs.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                              ,0x50,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar15 = *(int *)(lVar32 + 0xd8);
      iVar16 = UE::Core::Private::
               ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                         (4,4,iVar15,&(this->InstanceIdOffsets).AllocatorInstance,
                          &(this->InstanceIdOffsets).ArrayNum,&(this->InstanceIdOffsets).ArrayMax);
      memset((this->InstanceIdOffsets).AllocatorInstance.Data + iVar16,0,(longlong)iVar15 << 2);
      uVar19 = local_d0;
      uVar20 = 0;
      pFVar25 = pFVar6;
      if (0 < *(int *)(lVar32 + 0xd8)) {
        lVar33 = 0;
        do {
          uVar26 = 0;
          if ((int)uVar20 < *(int *)(lVar32 + 0xd8)) {
            uVar26 = ~uVar20 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar27 = pFVar6->IndirectArgsOffset + uVar20;
          iVar15 = *(int *)(lVar33 + *(longlong *)(lVar32 + 0xd0));
          uVar26 = 0;
          if ((int)uVar27 < local_78->ArrayNum) {
            uVar26 = ~uVar27 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar20 = uVar20 + 1;
          lVar33 = lVar33 + 4;
          (local_78->AllocatorInstance).Data[(int)uVar27] = iVar15 + uVar19;
          pFVar25 = local_b0;
          plVar30 = local_80;
        } while ((int)uVar20 < *(int *)(lVar32 + 0xd8));
      }
      pFVar25->ViewIdsOffset = (this->ViewIds).ArrayNum;
      uVar19 = *(int *)(lVar32 + 0x30) * 2;
      pFVar25->NumViewIds_bAllowOcclusionCulling = uVar19;
      if (*(longlong *)(lVar32 + 0x38) != 0) {
        pFVar25->NumViewIds_bAllowOcclusionCulling = uVar19 | 1;
      }
      pTVar4 = &this->ViewIds;
      if ((pTVar4 == (TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)
                     (lVar32 + 0x10)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar15 = *(int *)(lVar32 + 0x30);
      if (iVar15 != 0) {
        iVar16 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                           (4,4,iVar15,&pTVar4->AllocatorInstance,&(this->ViewIds).ArrayNum,
                            &(this->ViewIds).ArrayMax);
        _Src = (undefined1 *)(lVar32 + 0x10);
        if (*(undefined1 **)(lVar32 + 0x28) != (undefined1 *)0x0) {
          _Src = *(undefined1 **)(lVar32 + 0x28);
        }
        memcpy((pTVar4->AllocatorInstance).Data + iVar16,_Src,(longlong)iVar15 << 2);
      }
      if ((*(int *)(lVar32 + 0x50) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceCullingContext.DynamicInstanceIdOffset >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                              ,0x61,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((*(int *)(lVar32 + 0x54) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceCullingContext.DynamicInstanceIdNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                              ,0x62,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      plVar34 = (longlong *)(lVar32 + 0x108);
      pFVar25->DynamicInstanceIdOffset = *(uint *)(lVar32 + 0x50);
      pFVar25->DynamicInstanceIdMax = *(int *)(lVar32 + 0x54) + *(int *)(lVar32 + 0x50);
      local_88 = local_b0->ItemDataOffset;
      local_bc = 0;
      do {
        uVar19 = local_bc;
        local_70 = plVar34;
        if (local_bc == 1) {
          uVar20 = 0;
LAB_144bd4444:
          if ((this->LoadBalancers).ArrayNum <= (int)uVar20) goto LAB_144bd444d;
        }
        else {
          uVar20 = *(uint *)(plVar30 + 2);
          if (-1 < (int)uVar20) goto LAB_144bd4444;
LAB_144bd444d:
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("BinIndex >= 0 && BinIndex < LoadBalancers.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                              ,0x18,L"");
          if (bVar14) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        uVar26 = ~uVar20 >> 0x1f;
        uVar27 = 0;
        if ((int)uVar20 < (this->BatchInds).ArrayNum) {
          uVar27 = uVar26;
        }
        local_c0 = uVar26;
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar31 = (ulonglong)(this->BatchInds).AllocatorInstance.Data[(int)uVar20].ArrayNum;
        uVar27 = 0;
        if ((int)uVar20 < (this->LoadBalancers).ArrayNum) {
          uVar27 = uVar26;
        }
        if ((uVar27 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pTVar24 = (this->LoadBalancers).AllocatorInstance.Data + (int)uVar20;
        if ((pTVar24->CurrentBatchNumItems != 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentBatchNumItems == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                                ,0xe2,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        *local_88 = (((pTVar24->Data).Reference)->Items).ArrayNum;
        plVar34 = (longlong *)*plVar34;
        if (*(uint *)((longlong)plVar34 + 0xc) != 0) {
          lVar32 = *plVar34;
          local_d8 = *(int *)((longlong)plVar34 + 0x14) << 7 |
                     *(uint *)((longlong)plVar34 + 0xc) & 0x7f;
          if (((*(uint **)(lVar32 + 8) <= &local_d8) &&
              (&local_d8 < *(uint **)(lVar32 + 8) + *(int *)(lVar32 + 0x14))) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar15 = *(int *)(lVar32 + 0x10);
          if (iVar15 == *(int *)(lVar32 + 0x14)) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)(lVar32 + 8),(int *)(lVar32 + 0x14));
          }
          *(int *)(lVar32 + 0x10) = iVar15 + 1;
          *(uint *)(*(longlong *)(lVar32 + 8) + (longlong)iVar15 * 4) = local_d8;
          *(undefined4 *)((longlong)plVar34 + 0xc) = 0;
          uVar26 = local_c0;
        }
        if (((uVar19 == 1) && ((int)plVar34[3] != *(int *)(*plVar34 + 0x20))) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("EBatchProcessingMode(Mode) != EBatchProcessingMode::UnCulled || LoadBalancer->HasSingleInstanceItemsOnly()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingMergedContext.cpp"
                                ,0x73,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar19 = 0;
        if ((int)uVar20 < (this->BatchInds).ArrayNum) {
          uVar19 = uVar26;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pTVar29 = (this->BatchInds).AllocatorInstance.Data + (int)uVar20;
        if ((*(int *)((longlong)plVar34 + 0xc) != 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentBatchNumItems == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                                ,0xdc,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar15 = *(int *)(*plVar34 + 0x10);
        iVar16 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                           (4,4,iVar15,&pTVar29->AllocatorInstance,&pTVar29->ArrayNum,
                            &pTVar29->ArrayMax);
        memset((pTVar29->AllocatorInstance).Data + iVar16,0,(longlong)iVar15 << 2);
        pFVar8 = (pTVar24->Data).Reference;
        if ((*(int *)((longlong)plVar34 + 0xc) != 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentBatchNumItems == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                                ,0xdc,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar15 = *(int *)(*plVar34 + 0x10);
        if ((*(int *)((longlong)plVar34 + 0xc) != 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentBatchNumItems == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                                ,0xdc,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pvVar9 = *(void **)(*plVar34 + 8);
        if (((pvVar9 == (void *)0x0) && (iVar15 != 0)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar16 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedBatch>_>
                           (4,4,iVar15,&(pFVar8->Batches).AllocatorInstance,
                            &(pFVar8->Batches).ArrayNum,&(pFVar8->Batches).ArrayMax);
        if (iVar15 != 0) {
          memcpy((pFVar8->Batches).AllocatorInstance.Data + iVar16,pvVar9,(longlong)iVar15 << 2);
        }
        pFVar8 = (pTVar24->Data).Reference;
        if ((*(int *)((longlong)plVar34 + 0xc) != 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentBatchNumItems == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                                ,0xe2,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar15 = *(int *)(*plVar34 + 0x20);
        if ((*(int *)((longlong)plVar34 + 0xc) != 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentBatchNumItems == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                                ,0xe2,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pvVar9 = *(void **)(*plVar34 + 0x18);
        if (((pvVar9 == (void *)0x0) && (iVar15 != 0)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar16 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingLoadBalancerBase::FPackedItem>_>
                           (8,4,iVar15,&(pFVar8->Items).AllocatorInstance,&(pFVar8->Items).ArrayNum,
                            &(pFVar8->Items).ArrayMax);
        if (iVar15 != 0) {
          memcpy((pFVar8->Items).AllocatorInstance.Data + iVar16,pvVar9,(longlong)iVar15 << 3);
        }
        uVar19 = local_c0;
        lVar32 = uVar31 * 4;
        pTVar24->TotalInstances = pTVar24->TotalInstances + (int)plVar34[3];
        while( true ) {
          uVar26 = 0;
          if ((int)uVar20 < (this->BatchInds).ArrayNum) {
            uVar26 = uVar19;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar33 = local_60;
          pFVar6 = local_b0;
          uVar26 = local_d0;
          uVar27 = (uint)uVar31;
          if ((this->BatchInds).AllocatorInstance.Data[(int)uVar20].ArrayNum <= (int)uVar27) break;
          uVar26 = 0;
          if ((int)uVar20 < (this->BatchInds).ArrayNum) {
            uVar26 = uVar19;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pTVar29 = (this->BatchInds).AllocatorInstance.Data;
          uVar26 = 0;
          if ((int)uVar27 < pTVar29[(int)uVar20].ArrayNum) {
            uVar26 = ~uVar27 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar31 = (ulonglong)(uVar27 + 1);
          *(int *)(lVar32 + (longlong)pTVar29[(int)uVar20].AllocatorInstance.Data) = local_c4;
          lVar32 = lVar32 + 4;
        }
        local_bc = local_bc + 1;
        local_88 = local_88 + 1;
        plVar34 = local_70 + 1;
        plVar30 = local_80;
      } while (local_bc < 2);
      local_c4 = *(int *)(local_60 + 0xd8);
      lVar32 = local_80[1];
      *(int *)(lVar32 + 0x20) = local_c8;
      *(uint *)(lVar32 + 0x24) = local_b0->IndirectArgsOffset * 0x14;
      local_b0->InstanceDataWriteOffset = local_d0;
      local_b0->CompactionDataOffset = (this->DrawCommandCompactionData).ArrayNum;
      iVar15 = *(int *)(local_60 + 0xe8);
      puVar22 = *(uint **)(local_60 + 0xe0);
      iVar16 = (this->CompactionBlockDataIndices).ArrayNum;
      puVar12 = puVar22 + (longlong)iVar15 * 5;
      local_70 = plVar34;
      while( true ) {
        if (*(int *)(lVar33 + 0xe8) != iVar15) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FInstanceCullingContext::FCompactionData_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        pTVar29 = local_58;
        pFVar25 = local_b0;
        iVar17 = local_c4;
        if (puVar22 == puVar12) break;
        local_a0.NumInstances_NumViews = *puVar22;
        local_a0.DestInstanceIdOffset = puVar22[4] + uVar26;
        pFVar10 = (local_a8->AllocatorInstance).Data;
        local_a0.BlockOffset = puVar22[1] + iVar16;
        local_a0.IndirectArgsIndex = puVar22[2] + pFVar6->IndirectArgsOffset;
        local_a0.SrcInstanceIdOffset = puVar22[3] + local_cc;
        if (((pFVar10 <= &local_a0) && (&local_a0 < pFVar10 + local_a8->ArrayMax)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar17 = local_a8->ArrayNum;
        if (iVar17 == local_a8->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FInstanceCullingContext::FCompactionData>_>
                             (0x414,&local_a8->AllocatorInstance,&local_a8->ArrayMax);
        }
        puVar22 = puVar22 + 5;
        local_a8->ArrayNum = iVar17 + 1;
        pFVar11 = (local_a8->AllocatorInstance).Data;
        pFVar10 = pFVar11 + iVar17;
        pFVar10->NumInstances_NumViews = local_a0.NumInstances_NumViews;
        pFVar10->BlockOffset = local_a0.BlockOffset;
        pFVar10->IndirectArgsIndex = local_a0.IndirectArgsIndex;
        pFVar10->SrcInstanceIdOffset = local_a0.SrcInstanceIdOffset;
        pFVar11[iVar17].DestInstanceIdOffset = local_a0.DestInstanceIdOffset;
      }
      piVar23 = *(int **)(lVar33 + 0xf0);
      iVar15 = *(int *)(lVar33 + 0xf8);
      piVar28 = piVar23 + iVar15;
      while( true ) {
        if (*(int *)(lVar33 + 0xf8) != iVar15) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (piVar23 == piVar28) break;
        local_d4 = *piVar23 + pFVar25->CompactionDataOffset;
        puVar12 = (pTVar29->AllocatorInstance).Data;
        if (((puVar12 <= &local_d4) && (&local_d4 < puVar12 + pTVar29->ArrayMax)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar16 = pTVar29->ArrayNum;
        if (iVar16 == pTVar29->ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                             (0x404,&pTVar29->AllocatorInstance,&pTVar29->ArrayMax);
        }
        piVar23 = piVar23 + 1;
        pTVar29->ArrayNum = iVar16 + 1;
        (pTVar29->AllocatorInstance).Data[iVar16] = local_d4;
      }
      local_cc = local_cc + *(int *)(lVar33 + 0x100);
      if (*(char *)(lVar33 + 0x11d) == '\0') {
        iVar17 = iVar17 * 4;
        iVar15 = *(int *)(lVar33 + 0x4c);
      }
      else {
        iVar15 = (*(uint *)(*(longlong *)(lVar33 + 0x110) + 0x18) & 0x7fffff) * 0x20 +
                 (*(uint *)(*(longlong *)(lVar33 + 0x108) + 0x18) & 0xffffff) * 0x10;
        iVar17 = (*(int *)(*(longlong *)(lVar33 + 0x108) + 0x18) +
                 *(int *)(*(longlong *)(lVar33 + 0x110) + 0x18) * 2) * *(int *)(lVar33 + 0x30) *
                 0x100;
      }
      local_c8 = local_c8 + iVar17;
      local_b4 = local_b4 + 1;
      local_d0 = iVar15 * *(int *)(lVar33 + 0x30) + local_b8;
      local_68 = local_68 + 0x18;
      iVar15 = (this->Batches).ArrayNum;
    } while ((int)local_b4 < iVar15);
  }
  return;
}

