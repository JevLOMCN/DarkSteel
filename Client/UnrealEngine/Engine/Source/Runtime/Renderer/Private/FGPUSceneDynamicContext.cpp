// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// ~FGPUSceneDynamicContext @ 1448ee650

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUSceneDynamicContext::~FGPUSceneDynamicContext(FGPUSceneDynamicContext *this)

{
  FUploadData **ppFVar1;
  
  Release(this);
  ppFVar1 = (this->DymamicPrimitiveUploadData).AllocatorInstance.SecondaryData.Data;
  if (ppFVar1 != (FUploadData **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar1);
    return;
  }
  return;
}

// AllocateDynamicPrimitiveData @ 1448ffeb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUploadData * __thiscall
FGPUSceneDynamicContext::AllocateDynamicPrimitiveData(FGPUSceneDynamicContext *this)

{
  TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar1;
  int *piVar2;
  atomic<unsigned_char> aVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FUploadData *pFVar7;
  TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar8;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FUploadData *local_28 [3];
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  pFVar7 = ::operator_new(0x378);
  local_28[0] = (FUploadData *)0x0;
  if (pFVar7 != (FUploadData *)0x0) {
    (pFVar7->PrimitiveData).AllocatorInstance.SecondaryData =
         (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0;
    (pFVar7->PrimitiveData).ArrayNum = 0;
    (pFVar7->PrimitiveData).ArrayMax = 8;
    (pFVar7->GPUWritePrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->GPUWritePrimitives).ArrayNum = 0;
    (pFVar7->GPUWritePrimitives).ArrayMax = 0;
    pFVar7->InstanceSceneDataOffset = 0xffffffff;
    pFVar7->TotalInstanceCount = 0;
    pFVar7->InstancePayloadDataOffset = 0xffffffff;
    pFVar7->InstancePayloadDataFloat4Count = 0;
    pFVar7->bIsUploaded = false;
    local_28[0] = pFVar7;
  }
  if ((this == (FGPUSceneDynamicContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FUploadData *)(*pcVar4)();
    return pFVar7;
  }
  LOCK();
  bVar5 = (this->DymamicPrimitiveUploadDataMutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->DymamicPrimitiveUploadDataMutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->DymamicPrimitiveUploadDataMutex);
  }
  pTVar8 = (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->DymamicPrimitiveUploadData).AllocatorInstance.SecondaryData.Data;
  pTVar1 = &this->DymamicPrimitiveUploadData;
  if (pTVar8 == (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar8 = pTVar1;
  }
  if (((pTVar8 <= local_28) &&
      (local_28 <
       (pTVar8->AllocatorInstance).InlineData +
       (longlong)(this->DymamicPrimitiveUploadData).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FUploadData *)(*pcVar4)();
    return pFVar7;
  }
  iVar6 = (this->DymamicPrimitiveUploadData).ArrayNum;
  piVar2 = &(this->DymamicPrimitiveUploadData).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  pFVar7 = local_28[0];
  (this->DymamicPrimitiveUploadData).ArrayNum = iVar6 + 1;
  pTVar8 = (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->DymamicPrimitiveUploadData).AllocatorInstance.SecondaryData.Data;
  if (pTVar8 == (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar8 = pTVar1;
  }
  *(FUploadData **)((pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 8) = local_28[0];
  if (this != (FGPUSceneDynamicContext *)0x0) {
    LOCK();
    aVar3 = (this->DymamicPrimitiveUploadDataMutex).State;
    (this->DymamicPrimitiveUploadDataMutex).State =
         (atomic<unsigned_char>)((char)(this->DymamicPrimitiveUploadDataMutex).State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->DymamicPrimitiveUploadDataMutex);
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return pFVar7;
}

// Release @ 14492d4b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUSceneDynamicContext::Release(FGPUSceneDynamicContext *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FUploadData *pFVar5;
  FGPUScene *pFVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> FVar8;
  uchar *puVar9;
  TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar10;
  FName local_res8;
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  FMemScope local_68;
  uchar *local_60;
  FGPUSceneInstanceRange local_58 [2];
  
  pTVar10 = (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->DymamicPrimitiveUploadData).AllocatorInstance.SecondaryData.Data;
  iVar2 = (this->DymamicPrimitiveUploadData).ArrayNum;
  if (pTVar10 ==
      (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar10 = &this->DymamicPrimitiveUploadData;
  }
  local_60 = (pTVar10->AllocatorInstance).InlineData + (longlong)iVar2 * 8;
  while( true ) {
    puVar9 = local_60;
    if ((this->DymamicPrimitiveUploadData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGPUScenePrimitiveCollector::FUploadData_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_res8);
    }
    if (pTVar10 ==
        (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar9) break;
    pFVar5 = *(FUploadData **)(pTVar10->AllocatorInstance).InlineData;
    uVar3 = pFVar5->InstanceSceneDataOffset;
    if (uVar3 != 0xffffffff) {
      pFVar6 = this->GPUScene;
      uVar4 = pFVar5->TotalInstanceCount;
      FLLMScope::FLLMScope
                (local_res10,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
      local_res8 = LLMTagDeclaration_GPUScene.UniqueName;
      FMemScope::FMemScope(&local_res20,&local_res8,true);
      if (pFVar6->bIsEnabled != false) {
        FSpanAllocator::Free(&pFVar6->InstanceSceneDataAllocator,uVar3,uVar4);
        local_58[0].Primitive.Index = -1;
        local_58[0].InstanceSceneDataOffset = uVar3;
        local_58[0].NumInstanceSceneDataEntries = uVar4;
        AddOrMergeInstanceRange(&pFVar6->InstanceRangesToClear,local_58);
      }
      FMemScope::~FMemScope(&local_res20);
      FLLMScope::~FLLMScope(local_res10);
    }
    uVar3 = pFVar5->InstancePayloadDataOffset;
    if (uVar3 != 0xffffffff) {
      pFVar6 = this->GPUScene;
      uVar4 = pFVar5->InstancePayloadDataFloat4Count;
      FLLMScope::FLLMScope
                (local_res18,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
      local_res8 = LLMTagDeclaration_GPUScene.UniqueName;
      FMemScope::FMemScope(&local_68,&local_res8,true);
      if (pFVar6->bIsEnabled != false) {
        FSpanAllocator::Free(&pFVar6->InstancePayloadDataAllocator,uVar3,uVar4);
      }
      FMemScope::~FMemScope(&local_68);
      FLLMScope::~FLLMScope(local_res18);
    }
    pFVar7 = (pFVar5->GPUWritePrimitives).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    FVar8 = (pFVar5->PrimitiveData).AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    ::operator_delete(pFVar5,0x378);
    pTVar10 = (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)((pTVar10->AllocatorInstance).InlineData + 8);
  }
  piVar1 = &(this->DymamicPrimitiveUploadData).ArrayMax;
  (this->DymamicPrimitiveUploadData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FGPUScenePrimitiveCollector::FUploadData_*>_>
              (8,8,0,&(this->DymamicPrimitiveUploadData).AllocatorInstance,0,piVar1);
  }
  return;
}

