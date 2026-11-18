// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanEXTImageCompressionControlExtension @ 145b01bd0

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

FVulkanEXTImageCompressionControlExtension * __thiscall
FVulkanEXTImageCompressionControlExtension::FVulkanEXTImageCompressionControlExtension
          (FVulkanEXTImageCompressionControlExtension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_EXT_image_compression_control";
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanEXTImageCompressionControlExtension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2bc00

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTImageCompressionControlExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTImageCompressionControlExtension *this,FOptionalVulkanDeviceExtensions *param_1
          )

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  bVar3 = (this->PhysicalDeviceImageCompressionControlFeatures).imageCompressionControl == 1;
  *(bool *)&this->_padding_ = bVar3;
  uVar1 = (param_1->field0_0x0).Packed;
  uVar2 = (ulonglong)bVar3;
  (param_1->field0_0x0).Packed = uVar1 & 0xffffffffffefffff | uVar2 << 0x14;
  if (((uVar2 != 0) && ((uVar1 >> 0x30 & 1) == 0)) &&
     (VulkanDynamicAPI::vkGetImageSubresourceLayout2KHR ==
      (_func___cdecl_void_VkDevice_T_ptr_VkImage_T_ptr_VkImageSubresource2_ptr_VkSubresourceLayout2_ptr
       *)0x0)) {
    VulkanDynamicAPI::vkGetImageSubresourceLayout2KHR =
         VulkanDynamicAPI::vkGetImageSubresourceLayout2EXT;
  }
  return;
}

// PreCreateDevice @ 145b2c860

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTImageCompressionControlExtension::PreCreateDevice
          (FVulkanEXTImageCompressionControlExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->PhysicalDeviceImageCompressionControlFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->PhysicalDeviceImageCompressionControlFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d200

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTImageCompressionControlExtension::PrePhysicalDeviceFeatures
          (FVulkanEXTImageCompressionControlExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->PhysicalDeviceImageCompressionControlFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT;
  *(undefined8 *)&(this->PhysicalDeviceImageCompressionControlFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->PhysicalDeviceImageCompressionControlFeatures).pNext + 4) = 0;
  *(undefined4 *)&(this->PhysicalDeviceImageCompressionControlFeatures).field_0x14 = 0;
  (this->PhysicalDeviceImageCompressionControlFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->PhysicalDeviceImageCompressionControlFeatures;
  return;
}

