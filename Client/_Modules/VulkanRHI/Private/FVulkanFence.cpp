// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanFence @ 145b91890

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

FVulkanFence * __thiscall
FVulkanFence::FVulkanFence
          (FVulkanFence *this,FVulkanDevice *param_1,FVulkanFenceManager *param_2,bool param_3)

{
  VkResult VVar1;
  VkFenceCreateInfo local_28;
  
  this->Owner = param_2;
  this->State = (uint)param_3;
  local_28.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
  local_28._20_4_ = 0;
  local_28._4_8_ = 0;
  local_28._12_8_ = (ulonglong)param_3 << 0x20;
  VVar1 = (*VulkanDynamicAPI::vkCreateFence)
                    (param_1->Device,&local_28,&VulkanRHI::GAllocationCallbacks,&this->Handle);
  if (VVar1 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar1,
               "VulkanRHI::vkCreateFence(InDevice.GetHandle(), &Info, VULKAN_CPU_ALLOCATOR, &Handle)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
               ,0xf);
  }
  return this;
}

// ~FVulkanFence @ 145b957c0

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

void __thiscall FVulkanFence::~FVulkanFence(FVulkanFence *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Handle != (VkFence_T *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                       ,0x14,L"Didn\'t get properly destroyed by FVulkanFenceManager!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

