// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// FVulkanSemaphore @ 145b91fd0

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

FVulkanSemaphore * __thiscall
FVulkanSemaphore::FVulkanSemaphore
          (FVulkanSemaphore *this,FVulkanDevice *param_1,VkSemaphore_T **param_2)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVulkanSemaphore__6B_;
  this->Device = param_1;
  this->SemaphoreHandle = *param_2;
  this->Flags = ExternallySignaled;
  return this;
}

// FVulkanSemaphore @ 145b92000

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

FVulkanSemaphore * __thiscall
FVulkanSemaphore::FVulkanSemaphore
          (FVulkanSemaphore *this,FVulkanDevice *param_1,EVulkanSemaphoreFlags param_2,
          ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  VkResult VVar3;
  FVulkanSemaphore *pFVar4;
  VkSemaphoreCreateInfo local_48;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  undefined8 uStack_18;
  
  local_48.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
  local_48._4_4_ = 0;
  local_48.pNext._0_4_ = 0;
  local_48.pNext._4_4_ = 0;
  local_48.pNext = (undefined4 *)0x0;
  local_48.flags = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVulkanSemaphore__6B_;
  this->Device = param_1;
  this->SemaphoreHandle = (VkSemaphore_T *)0x0;
  this->Flags = param_2;
  local_48._20_4_ = 0;
  uStack_18 = CONCAT44(uStack_18._4_4_,(undefined4)uStack_18);
  if ((param_2 & Timeline) != None) {
    if (((param_1->OptionalDeviceExtensions).field0_0x0.Packed & 0x200000000000) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDevice.GetOptionalExtensions().HasKHRTimelineSemaphore",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                         ,199,L"Trying to create timeline semaphore without device support!");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVulkanSemaphore *)(*pcVar1)();
        return pFVar4;
      }
    }
    local_30 = 0x3b9df29a;
    local_1c = 0;
    local_48.pNext = &local_30;
    local_2c = 0;
    uStack_24 = 0x100000000;
    uStack_18 = param_3;
  }
  VVar3 = (*VulkanDynamicAPI::vkCreateSemaphore)
                    (this->Device->Device,&local_48,&VulkanRHI::GAllocationCallbacks,
                     &this->SemaphoreHandle);
  if (VVar3 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar3,
               "VulkanRHI::vkCreateSemaphore(Device.GetHandle(), &CreateInfo, VULKAN_CPU_ALLOCATOR, &SemaphoreHandle)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
               ,0xce);
  }
  return this;
}

// ~FVulkanSemaphore @ 145b95c70

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

void __thiscall FVulkanSemaphore::~FVulkanSemaphore(FVulkanSemaphore *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FVulkanSemaphore__6B_;
  if (this->SemaphoreHandle == (VkSemaphore_T *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SemaphoreHandle != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                       ,0xd9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Flags & ImmediateDeletion) == None) {
    if ((this->Flags & ExternallyOwned) == None) {
      VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
                (&this->Device->DeferredDeletionQueue,Semaphore,(ulong64)this->SemaphoreHandle);
    }
  }
  else {
    (*VulkanDynamicAPI::vkDestroySemaphore)
              (this->Device->Device,this->SemaphoreHandle,&VulkanRHI::GAllocationCallbacks);
  }
  this->SemaphoreHandle = (VkSemaphore_T *)0x0;
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetTimelineSemaphoreValue @ 145bacc60

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

ulong64 __thiscall FVulkanSemaphore::GetTimelineSemaphoreValue(FVulkanSemaphore *this)

{
  code *pcVar1;
  bool bVar2;
  VkResult VVar3;
  ulong64 uVar4;
  ulong64 local_res8 [4];
  
  if ((this->Flags & Timeline) == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTimeline()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                       ,0xfe,
                       L"GetTimelineSemaphoreValue not available!  Semaphore was not created with EVulkanSemaphoreFlags::Timeline."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  local_res8[0] = 0;
  VVar3 = (*VulkanDynamicAPI::vkGetSemaphoreCounterValueKHR)
                    (this->Device->Device,this->SemaphoreHandle,local_res8);
  if (VVar3 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar3,
               "VulkanRHI::vkGetSemaphoreCounterValueKHR(Device.GetHandle(), SemaphoreHandle, (uint64_t*)&Value)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
               ,0x100);
  }
  return local_res8[0];
}

// WaitForTimelineSemaphoreValue @ 145bc3050

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

bool __thiscall
FVulkanSemaphore::WaitForTimelineSemaphoreValue
          (FVulkanSemaphore *this,ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  VkResult VVar4;
  ulong64 local_res10 [3];
  VkSemaphoreWaitInfo local_38;
  
  local_res10[0] = param_1;
  if ((this->Flags & Timeline) == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTimeline()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                       ,0xe7,
                       L"WaitForTimelineSemaphoreValue not available!  Semaphore was not created with EVulkanSemaphoreFlags::Timeline."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_38.pSemaphores = &this->SemaphoreHandle;
  local_38.sType = VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO;
  local_38.pValues = local_res10;
  local_38.semaphoreCount = 1;
  local_38._4_8_ = 0;
  local_38._12_8_ = 0;
  VVar4 = (*VulkanDynamicAPI::vkWaitSemaphoresKHR)(this->Device->Device,&local_38,param_2);
  if (VVar4 != VK_SUCCESS) {
    if (VVar4 != VK_TIMEOUT) {
      VulkanRHI::VerifyVulkanResult
                (VVar4,"Result",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                 ,0xf6);
    }
    return false;
  }
  return true;
}

