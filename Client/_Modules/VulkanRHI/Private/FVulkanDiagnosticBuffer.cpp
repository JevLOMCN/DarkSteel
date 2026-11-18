// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanDiagnosticBuffer @ 145b454b0

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

FVulkanDiagnosticBuffer * __thiscall
FVulkanDiagnosticBuffer::FVulkanDiagnosticBuffer
          (FVulkanDiagnosticBuffer *this,FVulkanDevice *param_1,FVulkanQueue *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  VkResult VVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  FVulkanDiagnosticBuffer *pFVar10;
  uint uVar11;
  VkBufferCreateInfo local_68;
  
  this->Device = param_1;
  this->_padding_ = 0;
  this->Buffer = (VkBuffer_T *)0x0;
  this->Queue = param_2;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&this->Allocation);
  (this->ExtendedBreadcrumbAllocators).ArrayNum = 0;
  piVar1 = &(this->ExtendedBreadcrumbAllocators).ArrayNum;
  (this->ExtendedBreadcrumbAllocators).ArrayMax = 0;
  piVar2 = &(this->ExtendedBreadcrumbAllocators).ArrayMax;
  (this->ExtendedBreadcrumbAllocators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->CurrentExtendedIndex = 0;
  local_68._20_4_ = 0;
  local_68.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
  local_68.pQueueFamilyIndices._4_4_ = 0;
  local_68._4_8_ = 0;
  local_68._12_8_ = 0;
  local_68.size._0_4_ = 0x608;
  local_68.size._4_4_ = 0;
  local_68.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
  local_68.queueFamilyIndexCount = 0;
  local_68._44_8_ = 0;
  local_68.usage = 2;
  VVar6 = (*VulkanDynamicAPI::vkCreateBuffer)
                    (this->Device->Device,&local_68,&VulkanRHI::GAllocationCallbacks,&this->Buffer);
  if (VVar6 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar6,
               "VulkanRHI::vkCreateBuffer(Device.GetHandle(), &CreateInfo, VULKAN_CPU_ALLOCATOR, &Buffer)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
               ,0x2da);
  }
  VulkanRHI::FMemoryManager::AllocateBufferMemory
            (&this->Device->MemoryManager,&this->Allocation,this->Buffer,
             AutoBind|Dedicated|HostCached|HostVisible,L"DiagnosticBuffer",1);
  pvVar9 = VulkanRHI::FVulkanAllocation::GetMappedPointer(&this->Allocation,param_1);
  this->_padding_ = (longlong)pvVar9;
  if (pvVar9 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp"
                       ,0x2e4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FVulkanDiagnosticBuffer *)(*pcVar4)();
      return pFVar10;
    }
  }
  memset((void *)this->_padding_,0,0x608);
  if ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0x1a & 1) != 0) {
    bVar5 = UE::RHI::UseGPUCrashBreadcrumbs();
    if (bVar5) {
      uVar7 = (**(code **)(*(longlong *)CVarVulkanExtendedLifetimeFrames._padding_ + 200))();
      iVar3 = *piVar1;
      if (iVar3 < (int)uVar7) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,8,uVar7 - iVar3,
                           &(this->ExtendedBreadcrumbAllocators).AllocatorInstance,piVar1,piVar2);
        memset((this->ExtendedBreadcrumbAllocators).AllocatorInstance.Data + (longlong)iVar8 * 0x30,
               0,(longlong)(int)(uVar7 - iVar3) * 0x30);
      }
      else {
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
        if ((int)uVar7 < iVar3) {
          uVar11 = iVar3 - uVar7;
          if ((int)(uVar11 | uVar7) < 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar10 = (FVulkanDiagnosticBuffer *)(*pcVar4)();
              return pFVar10;
            }
          }
          if (uVar11 != 0) {
            TArray<FRHIBreadcrumbAllocatorArray,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (&this->ExtendedBreadcrumbAllocators,uVar7,uVar11);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,&(this->ExtendedBreadcrumbAllocators).AllocatorInstance,*piVar1,piVar2
                      );
          }
        }
      }
    }
  }
  return this;
}

// ~FVulkanDiagnosticBuffer @ 145b4d860

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

void __thiscall FVulkanDiagnosticBuffer::~FVulkanDiagnosticBuffer(FVulkanDiagnosticBuffer *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  
  if (this->Buffer != (VkBuffer_T *)0x0) {
    (*VulkanDynamicAPI::vkDestroyBuffer)
              (this->Device->Device,this->Buffer,&VulkanRHI::GAllocationCallbacks);
    this->Buffer = (VkBuffer_T *)0x0;
  }
  bVar2 = VulkanRHI::FVulkanAllocation::IsValid(&this->Allocation);
  if (bVar2) {
    VulkanRHI::FMemoryManager::FreeVulkanAllocation
              (&this->Device->MemoryManager,&this->Allocation,EVulkanFreeFlag_DontDefer);
  }
  DestructItems<FRHIBreadcrumbAllocatorArray,int>
            ((FRHIBreadcrumbAllocatorArray *)
             (this->ExtendedBreadcrumbAllocators).AllocatorInstance.Data,
             (this->ExtendedBreadcrumbAllocators).ArrayNum);
  pFVar1 = (this->ExtendedBreadcrumbAllocators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&this->Allocation);
  return;
}

// WriteMarkerIn @ 145b84bb0

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
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */

void __thiscall
FVulkanDiagnosticBuffer::WriteMarkerIn
          (FVulkanDiagnosticBuffer *this,FVulkanCommandBuffer *param_1,FRHIBreadcrumbNode *param_2)

{
  VkCommandBuffer_T *pVVar1;
  
  pVVar1 = param_1->CommandBufferHandle;
  if (param_2 == (FRHIBreadcrumbNode *)0x0) {
    param_2 = FRHIBreadcrumbNode::Sentinel;
  }
  if ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0x19 & 1) == 0) {
    if (param_1->State == IsInsideBegin) {
      ManuallyWriteMarker(pVVar1,this->Buffer,0x600,param_2->ID);
    }
  }
  else {
    (*VulkanDynamicAPI::vkCmdWriteBufferMarkerAMD)
              (pVVar1,VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,this->Buffer,0x600,param_2->ID);
  }
  if ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0x1a & 1) != 0) {
    (*VulkanDynamicAPI::vkCmdSetCheckpointNV)(pVVar1,param_2);
  }
  return;
}

// WriteMarkerOut @ 145b84c60

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
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */

void __thiscall
FVulkanDiagnosticBuffer::WriteMarkerOut
          (FVulkanDiagnosticBuffer *this,FVulkanCommandBuffer *param_1,FRHIBreadcrumbNode *param_2)

{
  VkCommandBuffer_T *pVVar1;
  
  pVVar1 = param_1->CommandBufferHandle;
  if (param_2 == (FRHIBreadcrumbNode *)0x0) {
    param_2 = FRHIBreadcrumbNode::Sentinel;
  }
  if ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0x19 & 1) == 0) {
    if (param_1->State == IsInsideBegin) {
      ManuallyWriteMarker(pVVar1,this->Buffer,0x604,param_2->ID);
    }
  }
  else {
    (*VulkanDynamicAPI::vkCmdWriteBufferMarkerAMD)
              (pVVar1,VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,this->Buffer,0x604,param_2->ID);
  }
  if ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0x1a & 1) != 0) {
    (*VulkanDynamicAPI::vkCmdSetCheckpointNV)(pVVar1,param_2->Parent);
  }
  return;
}

