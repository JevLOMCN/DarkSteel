// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanRayTracingCompactedSizeQueryPool @ 145b471d0

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

FVulkanRayTracingCompactedSizeQueryPool * __thiscall
FVulkanRayTracingCompactedSizeQueryPool::FVulkanRayTracingCompactedSizeQueryPool
          (FVulkanRayTracingCompactedSizeQueryPool *this,FVulkanDevice *param_1,uint param_2)

{
  FVulkanQueryPool::FVulkanQueryPool((FVulkanQueryPool *)this,param_1,param_2,ASCompactedSize);
  this->_padding_ = (longlong)&___7FVulkanRayTracingCompactedSizeQueryPool__6B_;
  (this->QueryOutput).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryOutput).ArrayNum = 0;
  (this->QueryOutput).ArrayMax = 0;
  (this->SyncPoint).Reference = (FVulkanSyncPoint *)0x0;
  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
    }
  }
  else {
    TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddZeroed(&this->QueryOutput,param_2);
  }
  (*VulkanDynamicAPI::vkResetQueryPoolEXT)
            (param_1->Device,(VkQueryPool_T *)this->_padding_,0,(uint)this->_padding_);
  return this;
}

// EndBatch @ 145b65aa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanRayTracingCompactedSizeQueryPool::EndBatch
          (FVulkanRayTracingCompactedSizeQueryPool *this,FVulkanCommandListContext *param_1)

{
  TRefCountPtr<FVulkanSyncPoint> *pTVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  TRefCountPtr<FVulkanSyncPoint> TVar5;
  int *piVar6;
  FVulkanSyncPoint *pFVar7;
  undefined8 *local_res8;
  
  TVar5 = FVulkanContextCommon::GetContextSyncPoint((FVulkanContextCommon *)param_1);
  pTVar1 = &this->SyncPoint;
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
  return;
}

// Reset @ 145b7a030

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanRayTracingCompactedSizeQueryPool::Reset
          (FVulkanRayTracingCompactedSizeQueryPool *this,FVulkanCommandBuffer *param_1)

{
  longlong *plVar1;
  FVulkanSyncPoint *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  
  (*VulkanDynamicAPI::vkCmdResetQueryPool)
            (param_1->CommandBufferHandle,(VkQueryPool_T *)this->_padding_,0,(uint)this->_padding_);
  pFVar2 = (this->SyncPoint).Reference;
  if (pFVar2 != (FVulkanSyncPoint *)0x0) {
    (this->SyncPoint).Reference = (FVulkanSyncPoint *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)();
    }
  }
  if ((this->QueryOutput).ArrayNum != (int)this->_padding_) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueryOutput.Num() == MaxQueries",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x6db,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  memset((this->QueryOutput).AllocatorInstance.Data,0,(ulonglong)(uint)this->_padding_ << 3);
  return;
}

// TryGetResults @ 145b7fe00

/* WARNING: Enum "VkResult": Some values do not have unique names */

bool __thiscall
FVulkanRayTracingCompactedSizeQueryPool::TryGetResults
          (FVulkanRayTracingCompactedSizeQueryPool *this,uint param_1)

{
  FVulkanSyncPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  VkResult VVar5;
  
  pFVar1 = (this->SyncPoint).Reference;
  if (pFVar1 != (FVulkanSyncPoint *)0x0) {
    if ((pFVar1->GraphEvent).Reference == (FBaseGraphTask *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                         ,0x55,
                         L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (((pFVar1->GraphEvent).Reference)->field_0xd0 != '\0') {
      VVar5 = (*VulkanDynamicAPI::vkGetQueryPoolResults)
                        (*(VkDevice_T **)(this->_padding_ + 0x30),(VkQueryPool_T *)this->_padding_,0
                         ,param_1,(ulonglong)param_1 << 3,(this->QueryOutput).AllocatorInstance.Data
                         ,8,3);
      if (VVar5 == VK_SUCCESS) {
        return true;
      }
    }
  }
  return false;
}

