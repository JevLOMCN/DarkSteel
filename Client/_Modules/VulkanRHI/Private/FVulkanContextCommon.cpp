// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 18

// FVulkanContextCommon @ 145adb930

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

FVulkanContextCommon * __thiscall
FVulkanContextCommon::FVulkanContextCommon
          (FVulkanContextCommon *this,FVulkanDevice *param_1,FVulkanQueue *param_2,
          EVulkanCommandBufferType param_3)

{
  FVulkanCommandBufferPool *pFVar1;
  
  this->Device = param_1;
  this->_padding_ = (longlong)&___7FVulkanContextCommon__6B_;
  this->Queue = param_2;
  pFVar1 = FVulkanQueue::AcquireCommandBufferPool(param_2,param_3);
  this->Pool = pFVar1;
  (this->Payloads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Payloads).ArrayNum = 0;
  (this->Payloads).ArrayMax = 0;
  this->CurrentPhase = Wait;
  (this->PendingSyncPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingSyncPoints).ArrayNum = 0;
  (this->PendingSyncPoints).ArrayMax = 0;
  (this->ContextSyncPoint).Reference = (FVulkanSyncPoint *)0x0;
  return this;
}

// ~FVulkanContextCommon @ 145adcae0

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

void __thiscall FVulkanContextCommon::~FVulkanContextCommon(FVulkanContextCommon *this)

{
  longlong *plVar1;
  FVulkanSyncPoint *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  
  this->_padding_ = (longlong)&___7FVulkanContextCommon__6B_;
  FVulkanQueue::ReleaseCommandBufferPool(this->Queue,this->Pool);
  pFVar2 = (this->ContextSyncPoint).Reference;
  if (pFVar2 != (FVulkanSyncPoint *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  DestructItems<TRefCountPtr<FVulkanSyncPoint>,int>
            ((TRefCountPtr<FVulkanSyncPoint> *)(this->PendingSyncPoints).AllocatorInstance.Data,
             (this->PendingSyncPoints).ArrayNum);
  pFVar3 = (this->PendingSyncPoints).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Payloads).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// AddWaitSemaphores @ 145adf770

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

void __thiscall
FVulkanContextCommon::AddWaitSemaphores
          (FVulkanContextCommon *this,uint param_1,TArrayView<FVulkanSemaphore_*,int> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FVulkanPayload *pFVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res10 [2];
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 != 0) {
    local_res10[0] = param_1;
    pFVar9 = GetPayload(this,Wait);
    iVar8 = (pFVar9->WaitFlags).ArrayNum;
    uVar10 = iVar8 + iVar3;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar1 = &(pFVar9->WaitFlags).ArrayMax;
    if ((pFVar9->WaitFlags).ArrayMax < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar10,&(pFVar9->WaitFlags).AllocatorInstance,iVar8,piVar1);
    }
    uVar10 = 0;
    if (0 < iVar3) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < iVar3) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        LOCK();
        piVar2 = (int *)(*(longlong *)(lVar11 + (longlong)param_2->DataPtr) + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        pFVar4 = (pFVar9->WaitFlags).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_res10) &&
            ((FScriptContainerElement *)local_res10 < pFVar4 + (longlong)*piVar1 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (pFVar9->WaitFlags).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(pFVar9->WaitFlags).AllocatorInstance,piVar1);
        }
        (pFVar9->WaitFlags).ArrayNum = iVar8 + 1;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 8;
        *(uint *)((pFVar9->WaitFlags).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_res10[0]
        ;
      } while ((int)uVar10 < iVar3);
    }
    TArray<FVulkanSemaphore_*,TSizedDefaultAllocator<32>_>::
    Append<TArrayView<FVulkanSemaphore_*,int>_&>(&pFVar9->WaitSemaphores,param_2);
  }
  return;
}

// AppendParallelRenderPayload @ 145ae01e0

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

void __thiscall
FVulkanContextCommon::AppendParallelRenderPayload
          (FVulkanContextCommon *this,FVulkanPayload *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FVulkanPayload *pFVar4;
  bool bVar5;
  int iVar6;
  FVulkanPayload *local_res10 [3];
  
  local_res10[0] = param_1;
  if ((((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x4000000000000) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Device.GetOptionalExtensions().HasKHRDynamicRendering",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                         ,0x4e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = local_res10[0];
  iVar6 = (local_res10[0]->CommandBuffers).ArrayNum;
  if (iVar6 != 0) {
    if ((iVar6 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(char *)(*(longlong *)
                    (*(longlong *)(pFVar4->CommandBuffers).AllocatorInstance.Data + 0xb8) + 0x10) !=
         '\x02') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParallelRenderingPayload->CommandBuffers.IsEmpty() || (ParallelRenderingPayload->CommandBuffers[0]->GetCommandBufferType() == EVulkanCommandBufferType::Parallel)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                           ,0x50,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EndPayload(this);
  pFVar2 = (this->Payloads).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->Payloads).ArrayMax * 8))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->Payloads).ArrayNum;
  piVar1 = &(this->Payloads).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Payloads).AllocatorInstance,piVar1);
  }
  (this->Payloads).ArrayNum = iVar6 + 1;
  *(FVulkanPayload **)((this->Payloads).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_res10[0];
  PrepareNewCommandBuffer(this,local_res10[0]);
  this->CurrentPhase = Execute;
  return;
}

// EndPayload @ 145ae3350

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */

void __thiscall FVulkanContextCommon::EndPayload(FVulkanContextCommon *this)

{
  FScriptContainerElement *pFVar1;
  EVulkanCommandBufferType EVar2;
  int iVar3;
  FVulkanPayload *pFVar4;
  FVulkanCommandBuffer *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  VkResult VVar8;
  FVulkanQueryPool *this_01;
  FEndWork *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  if (0 < (this->Payloads).ArrayNum) {
    FlushPendingSyncPoints(this);
    iVar3 = (this->Payloads).ArrayNum;
    uVar10 = iVar3 - 1;
    uVar7 = 0;
    if ((int)uVar10 < iVar3) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = *(FVulkanPayload **)
              ((this->Payloads).AllocatorInstance.Data +
              (longlong)(this->Payloads).ArrayNum * 8 + -8);
    iVar3 = (pFVar4->CommandBuffers).ArrayNum;
    if (0 < iVar3) {
      uVar7 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar7 = ~(iVar3 - 1U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = *(FVulkanCommandBuffer **)
                 ((pFVar4->CommandBuffers).AllocatorInstance.Data +
                 (longlong)(pFVar4->CommandBuffers).ArrayNum * 8 + -8);
      if (this_00->State != HasEnded) {
        EVar2 = this_00->CommandBufferPool->CommandBufferType;
        if ((this_00->State != IsInsideBegin) && (EVar2 != Secondary)) {
          if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x4000000000000) == 0) {
            if (2 < (byte)LogVulkanRHI._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
            }
            if ((this_00->State != IsInsideRenderPass) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsInsideRenderPass()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                                   ,0x5b,
                                   L"Can\'t EndRP as we\'re NOT inside one! CmdBuffer 0x%p State=%d"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (*VulkanDynamicAPI::vkCmdEndRenderPass)(this_00->CommandBufferHandle);
            this_00->State = IsInsideBegin;
            this_00->CurrentMultiViewCount = '\0';
          }
          else {
            if (2 < (byte)LogVulkanRHI._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
            }
            FVulkanCommandBuffer::EndDynamicRendering(this_00);
          }
        }
        if ((GRHIGlobals.SupportsTimestampRenderQueries == false) || (EVar2 == Secondary)) {
          this_01 = (FVulkanQueryPool *)0x0;
        }
        else {
          this_01 = GetCurrentTimestampQueryPool(this,pFVar4);
        }
        if (((this_00->State != IsInsideBegin) &&
            (this_00->CommandBufferPool->CommandBufferType != Secondary)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsOutsideRenderPass() || (GetCommandBufferType() == EVulkanCommandBufferType::Secondary)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                               ,0x96,
                               L"Can\'t End as we\'re inside a render pass! CmdBuffer 0x%p State=%d"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = (this_00->EndedBarrierEvents).AllocatorInstance.Data;
        iVar3 = (this_00->EndedBarrierEvents).ArrayNum;
        pFVar1 = pFVar11 + (longlong)iVar3 * 8;
        while( true ) {
          if ((this_00->EndedBarrierEvents).ArrayNum != iVar3) {
            `TCheckedPointerIterator<VkEvent_T_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar11 == pFVar1) break;
          (*VulkanDynamicAPI::vkCmdResetEvent)
                    (this_00->CommandBufferHandle,*(VkEvent_T **)pFVar11,0x10000);
          pFVar11 = pFVar11 + 8;
        }
        if (this_01 != (FVulkanQueryPool *)0x0) {
          local_res10[0] = 0;
          pFVar9 = UE::RHI::GPUProfiler::FEventStream::
                   Emplace<UE::RHI::GPUProfiler::FEvent::FEndWork,int>
                             (&this_00->EventStream,local_res10);
          uVar7 = FVulkanQueryPool::ReserveQuery(this_01,&pFVar9->GPUTimestampBOP);
          (*VulkanDynamicAPI::vkCmdWriteTimestamp)
                    (this_00->CommandBufferHandle,VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
                     this_01->QueryPool,uVar7);
        }
        VVar8 = (*VulkanDynamicAPI::vkEndCommandBuffer)(this_00->CommandBufferHandle);
        if (VVar8 != VK_SUCCESS) {
          VulkanRHI::VerifyVulkanResult
                    (VVar8,"VulkanRHI::vkEndCommandBuffer(GetHandle())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                     ,0xad);
        }
        this_00->State = HasEnded;
      }
    }
  }
  return;
}

// Finalize @ 145ae4fc0

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

void __thiscall
FVulkanContextCommon::Finalize
          (FVulkanContextCommon *this,TArray<FVulkanPayload_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TRefCountPtr<FVulkanSyncPoint> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FVulkanSyncPoint *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FVulkanPayload *pFVar11;
  
  FlushPendingSyncPoints(this);
  pTVar1 = &this->ContextSyncPoint;
  if ((this->ContextSyncPoint).Reference != (FVulkanSyncPoint *)0x0) {
    pFVar11 = GetPayload(this,Signal);
    pFVar4 = (pFVar11->SyncPoints).AllocatorInstance.Data;
    if ((pFVar4 <= pTVar1) && (pTVar1 < pFVar4 + (longlong)(pFVar11->SyncPoints).ArrayMax * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (pFVar11->SyncPoints).ArrayNum;
    piVar2 = &(pFVar11->SyncPoints).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar11->SyncPoints).AllocatorInstance,piVar2);
    }
    (pFVar11->SyncPoints).ArrayNum = iVar9 + 1;
    pFVar4 = (pFVar11->SyncPoints).AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + (longlong)iVar9 * 8) = 0;
    pFVar5 = pTVar1->Reference;
    *(FVulkanSyncPoint **)(pFVar4 + (longlong)iVar9 * 8) = pFVar5;
    if (pFVar5 != (FVulkanSyncPoint *)0x0) {
      LOCK();
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
      UNLOCK();
    }
    pFVar5 = pTVar1->Reference;
    if (pFVar5 != (FVulkanSyncPoint *)0x0) {
      pTVar1->Reference = (FVulkanSyncPoint *)0x0;
      plVar3 = &pFVar5->_padding_;
      LOCK();
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar3 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  EndPayload(this);
  if (param_1 == &this->Payloads) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar9 = (this->Payloads).ArrayNum;
  if (iVar9 != 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar9,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax)
    ;
    memmove((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8,
            (this->Payloads).AllocatorInstance.Data,(longlong)iVar9 << 3);
    (this->Payloads).ArrayNum = 0;
  }
  return;
}

// FlushCommands @ 145ae5210

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

void __thiscall
FVulkanContextCommon::FlushCommands(FVulkanContextCommon *this,EVulkanFlushFlags param_1)

{
  TRefCountPtr<FVulkanSyncPoint> *pTVar1;
  atomic<unsigned_int> *paVar2;
  int *piVar3;
  atomic<unsigned_int> aVar4;
  undefined1 auVar5 [8];
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auVar10 [8];
  bool bVar11;
  int iVar12;
  TRefCountPtr<FVulkanSyncPoint> TVar13;
  TRefCountPtr<FBaseGraphTask> TVar14;
  FVulkanPayload *pFVar15;
  FVulkanSyncPoint *pFVar16;
  FVulkanDynamicRHI *pFVar17;
  FVulkanSyncPoint *pFVar18;
  FVulkanSyncPoint *pFVar19;
  FVulkanSyncPoint *pFVar20;
  undefined1 local_58 [8];
  FRHISubmitCommandListsArgs local_50;
  FVulkanSyncPoint *local_38;
  undefined8 *local_30;
  FVulkanSyncPoint *local_28 [2];
  
  pFVar20 = (FVulkanSyncPoint *)0x0;
  pFVar18 = pFVar20;
  if ((param_1 & WaitForCompletion) != None) {
    pTVar1 = &this->ContextSyncPoint;
    if ((this->ContextSyncPoint).Reference == (FVulkanSyncPoint *)0x0) {
      TVar13 = FVulkanSyncPoint::Create((EVulkanSyncPointType)&local_38,(wchar_t *)&DAT_00000001);
      if ((FVulkanSyncPoint *)pTVar1 != TVar13.Reference) {
        pFVar18 = pTVar1->Reference;
        pTVar1->Reference = (FVulkanSyncPoint *)(TVar13.Reference)->_padding_;
        (TVar13.Reference)->_padding_ = 0;
        if (pFVar18 != (FVulkanSyncPoint *)0x0) {
          plVar8 = &pFVar18->_padding_;
          LOCK();
          lVar9 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            if (plVar8 == (longlong *)0x0) {
              pFVar18 = pFVar20;
            }
            if (pFVar18 != (FVulkanSyncPoint *)0x0) {
              (**(code **)pFVar18->_padding_)(pFVar18,1);
            }
          }
        }
      }
      if (local_38 != (FVulkanSyncPoint *)0x0) {
        plVar8 = &local_38->_padding_;
        LOCK();
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          if (plVar8 == (longlong *)0x0) {
            local_38 = pFVar20;
          }
          if (local_38 != (FVulkanSyncPoint *)0x0) {
            (**(code **)local_38->_padding_)(local_38,1);
          }
        }
      }
    }
    pFVar18 = pTVar1->Reference;
    if (pFVar18 != (FVulkanSyncPoint *)0x0) {
      LOCK();
      *(int *)&pFVar18->_padding_ = (int)pFVar18->_padding_ + 1;
      UNLOCK();
    }
  }
  local_58 = (undefined1  [8])0x0;
  if ((param_1 & WaitForSubmission) != None) {
    TVar14 = FBaseGraphTask::CreateGraphEvent();
    auVar10 = local_58;
    auVar5 = local_58;
    if ((FBaseGraphTask *)local_58 != TVar14.Reference) {
      auVar5 = *(undefined1 (*) [8])TVar14.Reference;
      *(undefined8 *)TVar14.Reference = 0;
      if (local_58 != (undefined1  [8])0x0) {
        LOCK();
        paVar2 = (atomic<unsigned_int> *)((longlong)local_58 + 0x30);
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<unsigned_int>)0x1) {
          plVar8 = (longlong *)local_58;
          local_58 = auVar5;
          (**(code **)*plVar8)(auVar10,1);
          auVar5 = local_58;
        }
      }
    }
    local_58 = auVar5;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar3 = (int *)(local_30 + 6);
      iVar12 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((iVar12 == 1) && (local_30 != (undefined8 *)0x0)) {
        (**(code **)*local_30)(local_30,1);
      }
    }
    pFVar15 = GetPayload(this,this->CurrentPhase);
    pFVar6 = (pFVar15->SubmissionEvents).AllocatorInstance.Data;
    if (((pFVar6 <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 <
         pFVar6 + (longlong)(pFVar15->SubmissionEvents).ArrayMax * 8)) &&
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
    iVar12 = (pFVar15->SubmissionEvents).ArrayNum;
    piVar3 = &(pFVar15->SubmissionEvents).ArrayMax;
    if (iVar12 == *piVar3) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(pFVar15->SubmissionEvents).AllocatorInstance,piVar3);
    }
    (pFVar15->SubmissionEvents).ArrayNum = iVar12 + 1;
    pFVar6 = (pFVar15->SubmissionEvents).AllocatorInstance.Data;
    *(undefined8 *)(pFVar6 + (longlong)iVar12 * 8) = 0;
    *(undefined1 (*) [8])(pFVar6 + (longlong)iVar12 * 8) = local_58;
    if (local_58 != (undefined1  [8])0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)local_58 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)local_58 + 0x30) + 1);
      UNLOCK();
    }
  }
  pFVar16 = ::operator_new(0x50);
  pFVar19 = pFVar20;
  if (pFVar16 != (FVulkanSyncPoint *)0x0) {
    pFVar16->DebugName = (wchar_t *)0x0;
    *(undefined4 *)&pFVar16[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar16[1]._padding_ + 4) = 2;
    pFVar16[1]._padding_ = 0;
    pFVar16[1].GraphEvent.Reference = (FBaseGraphTask *)0x0;
    *(undefined8 *)&pFVar16[1].Type = 0;
    pFVar16[1].DebugName = (wchar_t *)0x0;
    pFVar19 = pFVar16;
  }
  (**(code **)(this->_padding_ + 8))(this,&pFVar19[1].Type);
  local_50.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.CommandLists.ArrayNum = 0;
  local_50.CommandLists.ArrayMax = 0;
  iVar12 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,(ForAnyElementType *)&local_50,&local_50.CommandLists.ArrayMax);
  local_50.CommandLists.ArrayNum = iVar12 + 1;
  *(FVulkanSyncPoint **)(local_50.CommandLists.AllocatorInstance.Data + (longlong)iVar12 * 8) =
       pFVar19;
  pFVar17 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  FVulkanDynamicRHI::RHISubmitCommandLists(pFVar17,&local_50);
  if (pFVar18 != (FVulkanSyncPoint *)0x0) {
    pFVar17 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
    LOCK();
    *(int *)&pFVar18->_padding_ = (int)pFVar18->_padding_ + 1;
    UNLOCK();
    local_28[0] = pFVar18;
    FVulkanDynamicRHI::ProcessInterruptQueueUntil(pFVar17,(FVulkanSyncPoint *)local_28);
  }
  bVar11 = FVulkanDevice::UseMinimalSubmits(this->Device);
  if (bVar11) {
    pFVar17 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
    FVulkanDynamicRHI::KickSubmissionThread(pFVar17,true);
  }
  if ((local_58 != (undefined1  [8])0x0) &&
     (((FSubsequents<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
      ((longlong)local_58 + 0xb8))->bIsClosed == (atomic<bool>)0x0)) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,"Submission_Wait");
    if (CpuChannel->Enabled < 0) {
      UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport((FTaskBase *)local_58);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId139,"Submission_Wait",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                 ,0x8b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId139);
      UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport((FTaskBase *)local_58);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (local_50.CommandLists.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.CommandLists.AllocatorInstance.Data);
  }
  if (local_58 != (undefined1  [8])0x0) {
    LOCK();
    paVar2 = (atomic<unsigned_int> *)((longlong)local_58 + 0x30);
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if ((aVar4 == (atomic<unsigned_int>)0x1) && (local_58 != (undefined1  [8])0x0)) {
      (**(code **)*(longlong *)local_58)(local_58,1);
    }
  }
  if (pFVar18 != (FVulkanSyncPoint *)0x0) {
    plVar8 = &pFVar18->_padding_;
    LOCK();
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      if (plVar8 == (longlong *)0x0) {
        pFVar18 = pFVar20;
      }
      if (pFVar18 != (FVulkanSyncPoint *)0x0) {
        (**(code **)pFVar18->_padding_)(pFVar18,1);
      }
    }
  }
  return;
}

// FlushPendingSyncPoints @ 145ae55f0

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

void __thiscall FVulkanContextCommon::FlushPendingSyncPoints(FVulkanContextCommon *this)

{
  TArray<TRefCountPtr<FVulkanSyncPoint>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVulkanPayload *pFVar7;
  TArray<TRefCountPtr<FVulkanSyncPoint>,TSizedDefaultAllocator<32>_> *pTVar8;
  
  if ((this->PendingSyncPoints).ArrayNum != 0) {
    pFVar7 = GetPayload(this,Signal);
    pTVar8 = &this->PendingSyncPoints;
    pTVar1 = &pFVar7->SyncPoints;
    if (pTVar1 == pTVar8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar3 = (this->PendingSyncPoints).ArrayNum;
    if (iVar3 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar3,&pTVar1->AllocatorInstance,&(pFVar7->SyncPoints).ArrayNum,
                         &(pFVar7->SyncPoints).ArrayMax);
      ConstructItems<TRefCountPtr<FVulkanSyncPoint>,TRefCountPtr<FVulkanSyncPoint>,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8,
                 (TRefCountPtr<FVulkanSyncPoint> *)(pTVar8->AllocatorInstance).Data,iVar3);
    }
    DestructItems<TRefCountPtr<FVulkanSyncPoint>,int>
              ((TRefCountPtr<FVulkanSyncPoint> *)(pTVar8->AllocatorInstance).Data,
               (this->PendingSyncPoints).ArrayNum);
    piVar2 = &(this->PendingSyncPoints).ArrayMax;
    (this->PendingSyncPoints).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar8->AllocatorInstance,0,piVar2);
    }
  }
  return;
}

// FreeUnusedCmdBuffers @ 145ae5c20

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FVulkanContextCommon::FreeUnusedCmdBuffers(FVulkanContextCommon *this,bool param_1)

{
  FVulkanQueue *pFVar1;
  FVulkanCommandBufferPool *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  bVar4 = IsInRenderingThread();
  if ((bVar4) &&
     (((GRHICommandList.bLatchedBypass == false ||
       ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
      (GIsRunningRHIInSeparateThread_InternalUseOnly != false)))) {
    bVar4 = IsInRenderingThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                         ,0xaf,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar5 = FRHICommandListBase::AllocCommand
                       ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,0x28,8);
    pFVar1 = this->Queue;
    pFVar2 = this->Pool;
    puVar5[1] = 0;
    *puVar5 = &___7FRHICommandFreeUnusedCmdBuffers__6B_;
    puVar5[2] = pFVar2;
    puVar5[3] = pFVar1;
    *(bool *)(puVar5 + 4) = param_1;
    return;
  }
  FVulkanCommandBufferPool::FreeUnusedCmdBuffers(this->Pool,this->Queue,param_1);
  return;
}

// GetCommandBuffer @ 145ae6180

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

FVulkanCommandBuffer * __thiscall FVulkanContextCommon::GetCommandBuffer(FVulkanContextCommon *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FVulkanPayload *pFVar5;
  FVulkanCommandBuffer *pFVar6;
  uint uVar7;
  
  pFVar5 = GetPayload(this,Execute);
  if ((pFVar5->CommandBuffers).ArrayNum == 0) {
    PrepareNewCommandBuffer(this,pFVar5);
  }
  iVar1 = (pFVar5->CommandBuffers).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar7 < iVar1) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FVulkanCommandBuffer *)(*pcVar2)();
      return pFVar6;
    }
  }
  return *(FVulkanCommandBuffer **)
          ((pFVar5->CommandBuffers).AllocatorInstance.Data +
          (longlong)(pFVar5->CommandBuffers).ArrayNum * 8 + -8);
}

// GetParallelRenderPassInfo @ 145ae71a0

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
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */

FVulkanParallelRenderPassInfo * __thiscall
FVulkanContextCommon::GetParallelRenderPassInfo(FVulkanContextCommon *this)

{
  return (FVulkanParallelRenderPassInfo *)0x0;
}

// GetPayload @ 145ae71b0

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
FVulkanContextCommon::GetPayload(FVulkanContextCommon *this,EPhase param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FVulkanPayload *pFVar5;
  uint uVar6;
  
  if (((this->Payloads).ArrayNum == 0) || ((int)param_1 < (int)this->CurrentPhase)) {
    NewPayload(this);
  }
  this->CurrentPhase = param_1;
  iVar1 = (this->Payloads).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FVulkanPayload *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FVulkanPayload **)
          ((this->Payloads).AllocatorInstance.Data + (longlong)(this->Payloads).ArrayNum * 8 + -8);
}

// HandleReservedResourceCommits @ 145ae8080

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVulkanContextCommon::HandleReservedResourceCommits
          (FVulkanContextCommon *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  TArray<FVulkanCommitReservedResourceDesc,TSizedDefaultAllocator<32>_> *pTVar1;
  FRHITransition **ppFVar2;
  int iVar3;
  FRHIResource *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVulkanPayload *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FRHITransition **ppFVar12;
  undefined1 local_res10 [8];
  ForAnyElementType local_58;
  int local_50;
  int iStack_4c;
  FVulkanCommitReservedResourceDesc local_48;
  
  ppFVar12 = param_1->DataPtr;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iStack_4c = 0;
  ppFVar2 = ppFVar12 + param_1->ArrayNum;
  if (ppFVar12 != ppFVar2) {
    do {
      uVar9 = (ulonglong)(&(*ppFVar12)->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
              ~(GRHITransitionPrivateData_AlignInBytes - 1);
      iVar3 = *(int *)(uVar9 + 0x20);
      lVar8 = *(longlong *)(uVar9 + 0x18);
      lVar11 = (longlong)iVar3 * 0x30 + lVar8;
      while( true ) {
        if (*(int *)(uVar9 + 0x20) != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FRHITransitionInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (lVar8 == lVar11) break;
        if ((*(char *)(lVar8 + 0x28) == '\0') || ((ulong64 *)(lVar8 + 0x20) == (ulong64 *)0x0)) {
LAB_145ae82a1:
          lVar8 = lVar8 + 0x30;
        }
        else {
          if (*(char *)(lVar8 + 0x10) != '\x02') {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                               ,0xef,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            goto LAB_145ae82a1;
          }
          this_00 = *(FRHIResource **)(lVar8 + 8);
          local_48.Resource.Reference = (FRHIResource *)0x0;
          local_48.CommitSizeInBytes = 0;
          if (this_00 != (FRHIResource *)0x0) {
            local_48.Resource.Reference = this_00;
            FRHIResource::AddRef(this_00);
          }
          local_48.CommitSizeInBytes = *(ulong64 *)(lVar8 + 0x20);
          if ((local_48.Resource.Reference == (FRHIResource *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("CommitDesc.Resource",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                                 ,0xe9,L"FVulkanCommitReservedResourceDesc::Resource must be set"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((local_58.Data <= &local_48) &&
              (&local_48 <
               (FVulkanCommitReservedResourceDesc *)(local_58.Data + (longlong)iStack_4c * 0x10)))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_50 == iStack_4c) {
            local_50 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_58,&iStack_4c);
          }
          pFVar10 = local_58.Data + (longlong)local_50 * 0x10;
          local_50 = local_50 + 1;
          *(undefined8 *)&pFVar10->field_0x0 = 0;
          *(FRHIResource **)&pFVar10->field_0x0 = local_48.Resource.Reference;
          if (local_48.Resource.Reference != (FRHIResource *)0x0) {
            FRHIResource::AddRef(local_48.Resource.Reference);
          }
          *(ulong64 *)(pFVar10 + 8) = local_48.CommitSizeInBytes;
          if (local_48.Resource.Reference == (FRHIResource *)0x0) goto LAB_145ae82a1;
          FRHIResource::Release(local_48.Resource.Reference);
          lVar8 = lVar8 + 0x30;
        }
      }
      ppFVar12 = ppFVar12 + 1;
    } while (ppFVar12 != ppFVar2);
    if (local_50 != 0) {
      pFVar7 = GetPayload(this,UpdateReservedResources);
      pTVar1 = &pFVar7->ReservedResourcesToCommit;
      if ((pTVar1 == (TArray<FVulkanCommitReservedResourceDesc,TSizedDefaultAllocator<32>_> *)
                     &local_58) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = local_50;
      if (local_50 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,local_50,&pTVar1->AllocatorInstance,
                           &(pFVar7->ReservedResourcesToCommit).ArrayNum,
                           &(pFVar7->ReservedResourcesToCommit).ArrayMax);
        ConstructItems<FVulkanCommitReservedResourceDesc,FVulkanCommitReservedResourceDesc,int>
                  ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10,
                   (FVulkanCommitReservedResourceDesc *)local_58.Data,iVar3);
      }
    }
  }
  DestructItems<FVulkanCommitReservedResourceDesc,int>
            ((FVulkanCommitReservedResourceDesc *)local_58.Data,local_50);
  if ((FVulkanCommitReservedResourceDesc *)local_58.Data != (FVulkanCommitReservedResourceDesc *)0x0
     ) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// NewPayload @ 145aeb370

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

void __thiscall FVulkanContextCommon::NewPayload(FVulkanContextCommon *this)

{
  int *piVar1;
  undefined4 uVar2;
  FVulkanQueue *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FQueue FVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 extraout_var;
  undefined8 *local_18 [2];
  
  EndPayload(this);
  puVar8 = ::operator_new(400);
  local_18[0] = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    this_00 = this->Queue;
    *puVar8 = this_00;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x18] = 0;
    puVar8[0x1a] = 0;
    puVar8[0x1f] = 0;
    puVar8[0x20] = 0;
    puVar8[0x21] = 0;
    puVar8[0x22] = 0;
    puVar8[0x23] = 0;
    *(undefined1 *)(puVar8 + 0x25) = 0;
    *(undefined1 *)(puVar8 + 0x27) = 0;
    *(undefined1 *)(puVar8 + 0x2c) = 0;
    FVar6 = FVulkanQueue::GetProfilerQueue(this_00);
    uVar2 = *(undefined4 *)CONCAT44(extraout_var,FVar6.field0_0x0);
    puVar8[0x2d] = 0;
    puVar8[0x2e] = 0;
    *(undefined4 *)(puVar8 + 0x2f) = uVar2;
    puVar8[0x30] = 0;
    puVar8[0x31] = 0;
    local_18[0] = puVar8;
  }
  pFVar3 = (this->Payloads).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Payloads).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->Payloads).ArrayNum;
  piVar1 = &(this->Payloads).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Payloads).AllocatorInstance,piVar1);
  }
  (this->Payloads).ArrayNum = iVar7 + 1;
  *(undefined8 **)((this->Payloads).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_18[0];
  this->CurrentPhase = Wait;
  return;
}

// PrepareNewCommandBuffer @ 145aeb790

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanContextCommon::PrepareNewCommandBuffer(FVulkanContextCommon *this,FVulkanPayload *param_1)

{
  int *piVar1;
  EState EVar2;
  FVulkanCommandBuffer *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FVulkanQueryPool *pFVar9;
  longlong lVar10;
  undefined8 *puVar11;
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar12;
  FVulkanQueryPool *pFVar13;
  FVulkanCommandBufferPool *pFVar14;
  VkRenderPass_T *pVVar15;
  FVulkanQueryPool *pFVar16;
  FVulkanCommandBuffer *local_28 [2];
  
  lpCriticalSection = &this->Pool->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar14 = this->Pool;
  pFVar9 = (FVulkanQueryPool *)0x0;
  local_28[0] = (FVulkanCommandBuffer *)0x0;
  pFVar13 = pFVar9;
  pFVar16 = pFVar9;
  if (0 < (pFVar14->CmdBuffers).ArrayNum) {
    do {
      uVar12 = (uint)pFVar13;
      uVar7 = 0;
      if ((int)uVar12 < (pFVar14->CmdBuffers).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = *(FVulkanCommandBuffer **)
                ((longlong)&pFVar16->_padding_ +
                (longlong)(pFVar14->CmdBuffers).AllocatorInstance.Data);
      EVar2 = pFVar3->State;
      if ((EVar2 == ReadyForBegin) || (EVar2 == NeedReset)) break;
      if ((1 < (byte)(EVar2 - HasEnded)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CmdBuffer->IsSubmitted() || CmdBuffer->HasEnded()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                             ,0xc5,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar14 = this->Pool;
      pFVar13 = (FVulkanQueryPool *)(ulonglong)(uVar12 + 1);
      pFVar16 = (FVulkanQueryPool *)&pFVar16->Device;
      pFVar3 = local_28[0];
    } while ((int)(uVar12 + 1) < (pFVar14->CmdBuffers).ArrayNum);
    local_28[0] = pFVar3;
    if (local_28[0] != (FVulkanCommandBuffer *)0x0) goto LAB_145aeb8b0;
  }
  local_28[0] = FVulkanCommandBufferPool::Create(this->Pool);
LAB_145aeb8b0:
  pFVar4 = (param_1->CommandBuffers).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 <
       pFVar4 + (longlong)(param_1->CommandBuffers).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (param_1->CommandBuffers).ArrayNum;
  piVar1 = &(param_1->CommandBuffers).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->CommandBuffers).AllocatorInstance,piVar1);
  }
  (param_1->CommandBuffers).ArrayNum = iVar8 + 1;
  *(FVulkanCommandBuffer **)((param_1->CommandBuffers).AllocatorInstance.Data + (longlong)iVar8 * 8)
       = local_28[0];
  if ((GRHIGlobals.SupportsTimestampRenderQueries != false) &&
     (local_28[0]->CommandBufferPool->CommandBufferType != Secondary)) {
    pFVar9 = GetCurrentTimestampQueryPool(this,param_1);
  }
  lVar10 = (**(code **)(this->_padding_ + 0x10))(this);
  if (lVar10 == 0) {
    pVVar15 = (VkRenderPass_T *)0x0;
  }
  else {
    puVar11 = (undefined8 *)(**(code **)(this->_padding_ + 0x10))(this);
    pVVar15 = (VkRenderPass_T *)*puVar11;
  }
  FVulkanCommandBuffer::Begin(local_28[0],pFVar9,pVVar15);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetContextSyncPoint @ 145b1d390

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

TRefCountPtr<FVulkanSyncPoint> __thiscall
FVulkanContextCommon::GetContextSyncPoint(FVulkanContextCommon *this)

{
  TRefCountPtr<FVulkanSyncPoint> *pTVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  TRefCountPtr<FVulkanSyncPoint> TVar5;
  int *piVar6;
  FVulkanSyncPoint *in_RDX;
  FVulkanSyncPoint *pFVar7;
  undefined8 *local_res8;
  
  pTVar1 = &this->ContextSyncPoint;
  if ((this->ContextSyncPoint).Reference == (FVulkanSyncPoint *)0x0) {
    TVar5 = FVulkanSyncPoint::Create((EVulkanSyncPointType)&local_res8,(wchar_t *)&DAT_00000001);
    if ((FVulkanSyncPoint *)pTVar1 != TVar5.Reference) {
      pFVar7 = pTVar1->Reference;
      pTVar1->Reference = (FVulkanSyncPoint *)(TVar5.Reference)->_padding_;
      (TVar5.Reference)->_padding_ = 0;
      if (pFVar7 != (FVulkanSyncPoint *)0x0) {
        plVar2 = &pFVar7->_padding_;
        LOCK();
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          if (plVar2 == (longlong *)0x0) {
            pFVar7 = (FVulkanSyncPoint *)0x0;
          }
          if (pFVar7 != (FVulkanSyncPoint *)0x0) {
            (**(code **)pFVar7->_padding_)(pFVar7,1);
          }
        }
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      piVar6 = (int *)(local_res8 + 1);
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if (piVar6 == (int *)0x0) {
          local_res8 = (undefined8 *)0x0;
        }
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
    }
  }
  pFVar7 = pTVar1->Reference;
  in_RDX->_padding_ = (longlong)pFVar7;
  if (pFVar7 != (FVulkanSyncPoint *)0x0) {
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<FVulkanSyncPoint>)in_RDX;
}

// AddPendingSyncPoint @ 145b56d70

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

void __thiscall
FVulkanContextCommon::AddPendingSyncPoint
          (FVulkanContextCommon *this,TRefCountPtr<FVulkanSyncPoint> *param_1)

{
  TArray<TRefCountPtr<FVulkanSyncPoint>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FVulkanSyncPoint *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pTVar1 = &this->PendingSyncPoints;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->PendingSyncPoints).ArrayMax * 8))
  {
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
  iVar7 = (this->PendingSyncPoints).ArrayNum;
  piVar2 = &(this->PendingSyncPoints).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->PendingSyncPoints).ArrayNum = iVar7 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0;
  pFVar4 = param_1->Reference;
  *(FVulkanSyncPoint **)(pFVar3 + (longlong)iVar7 * 8) = pFVar4;
  if (pFVar4 != (FVulkanSyncPoint *)0x0) {
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
  }
  return;
}

// GetCurrentTimestampQueryPool @ 145b68de0

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

FVulkanQueryPool * __thiscall
FVulkanContextCommon::GetCurrentTimestampQueryPool
          (FVulkanContextCommon *this,FVulkanPayload *param_1)

{
  int *piVar1;
  TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar3;
  longlong lVar4;
  FVulkanDevice *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FVulkanQueryPool *pFVar11;
  uint uVar12;
  uint uVar13;
  FVulkanQueryPool *local_38 [2];
  
  pTVar2 = (param_1->QueryPools).Elements + 2;
  iVar10 = (param_1->CommandBuffers).ArrayNum;
  uVar9 = 1;
  if (0 < iVar10) {
    uVar13 = 0;
    if ((int)(iVar10 - 1U) < iVar10) {
      uVar13 = ~(iVar10 - 1U) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FVulkanQueryPool *)(*pcVar7)();
      return pFVar11;
    }
    iVar10 = (param_1->CommandBuffers).ArrayNum;
    if (*(char *)(*(longlong *)
                   ((param_1->CommandBuffers).AllocatorInstance.Data + ((longlong)iVar10 + -1) * 8)
                 + 0x74) == '\x02') {
      uVar9 = 0;
      if ((int)(iVar10 - 1U) < iVar10) {
        uVar9 = ~(iVar10 - 1U) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FVulkanQueryPool *)(*pcVar7)();
        return pFVar11;
      }
      bVar3 = *(byte *)(*(longlong *)
                         ((param_1->CommandBuffers).AllocatorInstance.Data +
                         (longlong)(param_1->CommandBuffers).ArrayNum * 8 + -8) + 0x81);
      uVar9 = (uint)bVar3;
      if (bVar3 == 0) {
        uVar9 = 1;
      }
    }
  }
  iVar10 = (param_1->QueryPools).Elements[2].ArrayNum;
  if (iVar10 != 0) {
    uVar13 = 0;
    if ((int)(iVar10 - 1U) < iVar10) {
      uVar13 = ~(iVar10 - 1U) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FVulkanQueryPool *)(*pcVar7)();
      return pFVar11;
    }
    iVar10 = (param_1->QueryPools).Elements[2].ArrayNum;
    lVar4 = *(longlong *)((pTVar2->AllocatorInstance).Data + ((longlong)iVar10 + -1) * 8);
    if ((uint)(*(int *)(lVar4 + 0x44) * *(int *)(lVar4 + 0x40)) < *(uint *)(lVar4 + 0x18)) {
      uVar13 = 0;
      if ((int)(iVar10 - 1U) < iVar10) {
        uVar13 = ~(iVar10 - 1U) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FVulkanQueryPool *)(*pcVar7)();
        return pFVar11;
      }
      if (*(uint *)(*(longlong *)
                     ((pTVar2->AllocatorInstance).Data +
                     (longlong)(param_1->QueryPools).Elements[2].ArrayNum * 8 + -8) + 0x44) == uVar9
         ) goto LAB_145b6918f;
    }
  }
  pFVar5 = this->Device;
  lpCriticalSection = &pFVar5->QueryPoolLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar10 = (pFVar5->FreeQueryPools).Elements[2].ArrayNum;
  if (iVar10 == 0) {
    pFVar11 = ::operator_new(0x50);
    if (pFVar11 == (FVulkanQueryPool *)0x0) {
      pFVar11 = (FVulkanQueryPool *)0x0;
    }
    else {
      pFVar11 = FVulkanQueryPool::FVulkanQueryPool(pFVar11,pFVar5,GTimingQueryPoolSize,Timestamp);
    }
  }
  else {
    if ((iVar10 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FVulkanQueryPool *)(*pcVar7)();
      return pFVar11;
    }
    iVar10 = (pFVar5->FreeQueryPools).Elements[2].ArrayNum;
    pFVar11 = *(FVulkanQueryPool **)
               ((pFVar5->FreeQueryPools).Elements[2].AllocatorInstance.Data +
               (longlong)iVar10 * 8 + -8);
    (pFVar5->FreeQueryPools).Elements[2].ArrayNum = iVar10 + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_38[0] = pFVar11;
  if ((param_1->CommandBuffers).ArrayNum == 0) {
    PrepareNewCommandBuffer(this,param_1);
  }
  iVar10 = (param_1->CommandBuffers).ArrayNum;
  uVar12 = iVar10 - 1;
  uVar13 = 0;
  if ((int)uVar12 < iVar10) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FVulkanQueryPool *)(*pcVar7)();
    return pFVar11;
  }
  FVulkanQueryPool::Reset
            (local_38[0],
             *(FVulkanCommandBuffer **)
              ((param_1->CommandBuffers).AllocatorInstance.Data +
              (longlong)(param_1->CommandBuffers).ArrayNum * 8 + -8),uVar9);
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar6 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 <
       pFVar6 + (longlong)(param_1->QueryPools).Elements[2].ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FVulkanQueryPool *)(*pcVar7)();
    return pFVar11;
  }
  iVar10 = (param_1->QueryPools).Elements[2].ArrayNum;
  piVar1 = &(param_1->QueryPools).Elements[2].ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (param_1->QueryPools).Elements[2].ArrayNum = iVar10 + 1;
  *(FVulkanQueryPool **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_38[0];
LAB_145b6918f:
  iVar10 = (param_1->QueryPools).Elements[2].ArrayNum;
  uVar13 = iVar10 - 1;
  uVar9 = 0;
  if ((int)uVar13 < iVar10) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FVulkanQueryPool *)(*pcVar7)();
    return pFVar11;
  }
  return *(FVulkanQueryPool **)
          ((pTVar2->AllocatorInstance).Data +
          (longlong)(param_1->QueryPools).Elements[2].ArrayNum * 8 + -8);
}

