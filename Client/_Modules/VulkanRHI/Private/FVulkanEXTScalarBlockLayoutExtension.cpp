// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanEXTScalarBlockLayoutExtension @ 145b01dd0

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

FVulkanEXTScalarBlockLayoutExtension * __thiscall
FVulkanEXTScalarBlockLayoutExtension::FVulkanEXTScalarBlockLayoutExtension
          (FVulkanEXTScalarBlockLayoutExtension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_EXT_scalar_block_layout";
  *(undefined4 *)&this->_padding_ = 0x402000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanEXTScalarBlockLayoutExtension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2bcd0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTScalarBlockLayoutExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTScalarBlockLayoutExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->ScalarBlockLayoutFeatures).scalarBlockLayout == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfffffff7ffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x23;
  return;
}

// PreCreateDevice @ 145b2c900

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTScalarBlockLayoutExtension::PreCreateDevice
          (FVulkanEXTScalarBlockLayoutExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->ScalarBlockLayoutFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->ScalarBlockLayoutFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d2c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTScalarBlockLayoutExtension::PrePhysicalDeviceFeatures
          (FVulkanEXTScalarBlockLayoutExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->ScalarBlockLayoutFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;
  *(undefined8 *)&(this->ScalarBlockLayoutFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->ScalarBlockLayoutFeatures).pNext + 4) = 0;
  *(undefined4 *)&(this->ScalarBlockLayoutFeatures).field_0x14 = 0;
  (this->ScalarBlockLayoutFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->ScalarBlockLayoutFeatures;
  return;
}

