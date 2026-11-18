// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanPayload @ 145b91a10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FVulkanPayload * __thiscall
FVulkanPayload::FVulkanPayload(FVulkanPayload *this,FVulkanQueue *param_1)

{
  FQueue_u_0 FVar1;
  FQueue FVar2;
  undefined4 extraout_var;
  
  this->Queue = param_1;
  (this->WaitFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaitFlags).ArrayNum = 0;
  (this->WaitFlags).ArrayMax = 0;
  (this->WaitSemaphores).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaitSemaphores).ArrayNum = 0;
  (this->WaitSemaphores).ArrayMax = 0;
  (this->CommandBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandBuffers).ArrayNum = 0;
  (this->CommandBuffers).ArrayMax = 0;
  (this->SignalSemaphores).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignalSemaphores).ArrayNum = 0;
  (this->SignalSemaphores).ArrayMax = 0;
  (this->SubmissionEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmissionEvents).ArrayNum = 0;
  (this->SubmissionEvents).ArrayMax = 0;
  this->TimelineSemaphoreValue = 0;
  this->Fence = (FVulkanFence *)0x0;
  (this->SyncPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SyncPoints).ArrayNum = 0;
  (this->SyncPoints).ArrayMax = 0;
  (this->QueryPools).Elements[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryPools).Elements[0].ArrayNum = 0;
  (this->QueryPools).Elements[0].ArrayMax = 0;
  (this->QueryPools).Elements[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryPools).Elements[1].ArrayNum = 0;
  (this->QueryPools).Elements[1].ArrayMax = 0;
  (this->QueryPools).Elements[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryPools).Elements[2].ArrayNum = 0;
  (this->QueryPools).Elements[2].ArrayMax = 0;
  (this->QueryPools).Elements[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryPools).Elements[3].ArrayNum = 0;
  (this->QueryPools).Elements[3].ArrayMax = 0;
  (this->DescriptorPoolSetContainers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescriptorPoolSetContainers).ArrayNum = 0;
  (this->DescriptorPoolSetContainers).ArrayMax = 0;
  *(undefined8 *)&this->PreExecuteCallback = 0;
  *(undefined8 *)&(this->PreExecuteCallback).field_0x28 = 0;
  (this->BreadcrumbRange).First = (FRHIBreadcrumbNode *)0x0;
  (this->BreadcrumbRange).Last = (FRHIBreadcrumbNode *)0x0;
  (this->BreadcrumbAllocators).Object = (FRHIBreadcrumbAllocatorArray *)0x0;
  (this->BreadcrumbAllocators).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Timing).bIsSet = false;
  (this->ExternalGPUTime).bIsSet = false;
  (this->EndFrameEvent).bIsSet = false;
  FVar2 = FVulkanQueue::GetProfilerQueue(param_1);
  FVar1 = *(FQueue_u_0 *)CONCAT44(extraout_var,FVar2.field0_0x0);
  (this->EventStream).First = (FChunk *)0x0;
  (this->EventStream).Current = (FChunk *)0x0;
  (this->EventStream).Queue.field0_0x0 = FVar1;
  (this->ReservedResourcesToCommit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReservedResourcesToCommit).ArrayNum = 0;
  (this->ReservedResourcesToCommit).ArrayMax = 0;
  return this;
}

// ~FVulkanPayload @ 145b95910

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanPayload::~FVulkanPayload(FVulkanPayload *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  
  pFVar9 = (this->WaitSemaphores).AllocatorInstance.Data;
  iVar3 = (this->WaitSemaphores).ArrayNum;
  pFVar4 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->WaitSemaphores).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FVulkanSemaphore_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar4) break;
    puVar6 = *(undefined8 **)pFVar9;
    piVar1 = (int *)(puVar6 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (piVar1 == (int *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  if (this->Fence != (FVulkanFence *)0x0) {
    FVulkanFenceManager::ReleaseFence(this->Fence->Owner,&this->Fence);
  }
  DestructItems<FVulkanCommitReservedResourceDesc,int>
            ((FVulkanCommitReservedResourceDesc *)
             (this->ReservedResourcesToCommit).AllocatorInstance.Data,
             (this->ReservedResourcesToCommit).ArrayNum);
  pFVar4 = (this->ReservedResourcesToCommit).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  UE::RHI::GPUProfiler::FEventStream::~FEventStream(&this->EventStream);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BreadcrumbAllocators).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->PreExecuteCallback != 0) {
    plVar5 = *(longlong **)&(this->PreExecuteCallback).field_0x28;
    plVar7 = (longlong *)&(this->PreExecuteCallback).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar7 = plVar5;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  pTVar8 = (TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> *)
           &this->DescriptorPoolSetContainers;
  pFVar4 = (((TArray<FVulkanDescriptorPoolSetContainer_*,TSizedDefaultAllocator<32>_> *)pTVar8)->
           AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  lVar10 = 4;
  do {
    pFVar4 = pTVar8[-1].AllocatorInstance.Data;
    pTVar8 = pTVar8 + -1;
    lVar10 = lVar10 + -1;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  } while (lVar10 != 0);
  DestructItems<TRefCountPtr<FVulkanSyncPoint>,int>
            ((TRefCountPtr<FVulkanSyncPoint> *)(this->SyncPoints).AllocatorInstance.Data,
             (this->SyncPoints).ArrayNum);
  pFVar4 = (this->SyncPoints).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)(this->SubmissionEvents).AllocatorInstance.Data,
             (this->SubmissionEvents).ArrayNum);
  pFVar4 = (this->SubmissionEvents).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->SignalSemaphores).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CommandBuffers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->WaitSemaphores).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->WaitFlags).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// Merge @ 145bb16e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanPayload::Merge(FVulkanPayload *this,FVulkanPayload *param_1)

{
  TStaticArray<TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>,4,4294967295> *pTVar1;
  TArray<FVulkanCommandBuffer_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FVulkanDescriptorPoolSetContainer_*,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TArray<TRefCountPtr<FVulkanSyncPoint>,TSizedDefaultAllocator<32>_> *pTVar10;
  
  if ((param_1->SignalSemaphores).ArrayNum != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("OtherPayload.SignalSemaphores.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                       ,0x36,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((param_1->WaitSemaphores).ArrayNum != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("OtherPayload.WaitSemaphores.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                       ,0x37,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar1 = &this->QueryPools;
  if (pTVar1 == &param_1->QueryPools) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar6 = (param_1->QueryPools).Elements[0].ArrayNum;
  if (iVar6 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar6,(ForAnyElementType *)pTVar1,
                       &(this->QueryPools).Elements[0].ArrayNum,
                       &(this->QueryPools).Elements[0].ArrayMax);
    memmove(pTVar1->Elements[0].AllocatorInstance.Data + (longlong)iVar9 * 8,
            (param_1->QueryPools).Elements[0].AllocatorInstance.Data,(longlong)iVar6 << 3);
    (param_1->QueryPools).Elements[0].ArrayNum = 0;
  }
  pTVar3 = (this->QueryPools).Elements + 1;
  pTVar4 = (param_1->QueryPools).Elements + 1;
  if (pTVar3 == pTVar4) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar6 = (param_1->QueryPools).Elements[1].ArrayNum;
  if (iVar6 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar6,&pTVar3->AllocatorInstance,&(this->QueryPools).Elements[1].ArrayNum
                       ,&(this->QueryPools).Elements[1].ArrayMax);
    memmove((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 8,(pTVar4->AllocatorInstance).Data,
            (longlong)iVar6 << 3);
    (param_1->QueryPools).Elements[1].ArrayNum = 0;
  }
  pTVar3 = (this->QueryPools).Elements + 2;
  pTVar4 = (param_1->QueryPools).Elements + 2;
  if (pTVar3 == pTVar4) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar6 = (param_1->QueryPools).Elements[2].ArrayNum;
  if (iVar6 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar6,&pTVar3->AllocatorInstance,&(this->QueryPools).Elements[2].ArrayNum
                       ,&(this->QueryPools).Elements[2].ArrayMax);
    memmove((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 8,(pTVar4->AllocatorInstance).Data,
            (longlong)iVar6 << 3);
    (param_1->QueryPools).Elements[2].ArrayNum = 0;
  }
  pTVar3 = (this->QueryPools).Elements + 3;
  pTVar4 = (param_1->QueryPools).Elements + 3;
  if (pTVar3 == pTVar4) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar6 = (param_1->QueryPools).Elements[3].ArrayNum;
  if (iVar6 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar6,&pTVar3->AllocatorInstance,&(this->QueryPools).Elements[3].ArrayNum
                       ,&(this->QueryPools).Elements[3].ArrayMax);
    memmove((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 8,(pTVar4->AllocatorInstance).Data,
            (longlong)iVar6 << 3);
    (param_1->QueryPools).Elements[3].ArrayNum = 0;
  }
  pTVar5 = &this->DescriptorPoolSetContainers;
  if (pTVar5 == &param_1->DescriptorPoolSetContainers) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar6 = (param_1->DescriptorPoolSetContainers).ArrayNum;
  if (iVar6 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar6,&pTVar5->AllocatorInstance,
                       &(this->DescriptorPoolSetContainers).ArrayNum,
                       &(this->DescriptorPoolSetContainers).ArrayMax);
    memmove((pTVar5->AllocatorInstance).Data + (longlong)iVar9 * 8,
            (param_1->DescriptorPoolSetContainers).AllocatorInstance.Data,(longlong)iVar6 << 3);
    (param_1->DescriptorPoolSetContainers).ArrayNum = 0;
  }
  iVar6 = (param_1->CommandBuffers).ArrayNum;
  if (iVar6 != 0) {
    if (iVar6 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (*(char *)(*(longlong *)
                   (*(longlong *)(param_1->CommandBuffers).AllocatorInstance.Data + 0xb8) + 0x10) ==
        '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OtherPayload.CommandBuffers.IsEmpty() || (OtherPayload.CommandBuffers[0]->GetCommandBufferType() != EVulkanCommandBufferType::Primary)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.cpp"
                         ,0x41,
                         L"Merging payloads should only be used on Secondary or Parallel command buffers."
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  pTVar2 = &this->CommandBuffers;
  if (pTVar2 == &param_1->CommandBuffers) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar6 = (param_1->CommandBuffers).ArrayNum;
  if (iVar6 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar6,&pTVar2->AllocatorInstance,&(this->CommandBuffers).ArrayNum,
                       &(this->CommandBuffers).ArrayMax);
    memmove((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8,
            (param_1->CommandBuffers).AllocatorInstance.Data,(longlong)iVar6 << 3);
    (param_1->CommandBuffers).ArrayNum = 0;
  }
  pTVar10 = &this->SyncPoints;
  if (pTVar10 == &param_1->SyncPoints) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar6 = (param_1->SyncPoints).ArrayNum;
  if (iVar6 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar6,&pTVar10->AllocatorInstance,&(this->SyncPoints).ArrayNum,
                       &(this->SyncPoints).ArrayMax);
    memmove((pTVar10->AllocatorInstance).Data + (longlong)iVar9 * 8,
            (param_1->SyncPoints).AllocatorInstance.Data,(longlong)iVar6 << 3);
    (param_1->SyncPoints).ArrayNum = 0;
  }
  return;
}

// PreExecute @ 145bb2810

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanPayload::PreExecute(FVulkanPayload *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  VkQueue_T *local_res8;
  
  if (*(void **)&this->PreExecuteCallback != (void *)0x0) {
    local_res8 = this->Queue->Queue;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->PreExecuteCallback);
    pcVar1 = *(code **)&this->PreExecuteCallback;
    plVar2 = *(longlong **)&(this->PreExecuteCallback).field_0x28;
    plVar4 = (longlong *)&(this->PreExecuteCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_res8);
  }
  return;
}

