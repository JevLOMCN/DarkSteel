// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanKHRTimelineSemaphoreExtension @ 145b03d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FVulkanKHRTimelineSemaphoreExtension * __thiscall
FVulkanKHRTimelineSemaphoreExtension::FVulkanKHRTimelineSemaphoreExtension
          (FVulkanKHRTimelineSemaphoreExtension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_KHR_timeline_semaphore";
  *(undefined4 *)&this->_padding_ = 0x402000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanKHRTimelineSemaphoreExtension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2c200

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRTimelineSemaphoreExtension::PostPhysicalDeviceFeatures
          (FVulkanKHRTimelineSemaphoreExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->TimelineSemaphoreFeatures).timelineSemaphore == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffffdfffffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x2d;
  return;
}

// PreCreateDevice @ 145b2cce0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRTimelineSemaphoreExtension::PreCreateDevice
          (FVulkanKHRTimelineSemaphoreExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->TimelineSemaphoreFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->TimelineSemaphoreFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d780

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRTimelineSemaphoreExtension::PrePhysicalDeviceFeatures
          (FVulkanKHRTimelineSemaphoreExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->TimelineSemaphoreFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;
  *(undefined8 *)&(this->TimelineSemaphoreFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->TimelineSemaphoreFeatures).pNext + 4) = 0;
  *(undefined4 *)&(this->TimelineSemaphoreFeatures).field_0x14 = 0;
  (this->TimelineSemaphoreFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->TimelineSemaphoreFeatures;
  return;
}

