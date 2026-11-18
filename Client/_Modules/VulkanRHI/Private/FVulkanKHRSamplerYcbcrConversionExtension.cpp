// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanKHRSamplerYcbcrConversionExtension @ 145b03a10

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

FVulkanKHRSamplerYcbcrConversionExtension * __thiscall
FVulkanKHRSamplerYcbcrConversionExtension::FVulkanKHRSamplerYcbcrConversionExtension
          (FVulkanKHRSamplerYcbcrConversionExtension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_KHR_sampler_ycbcr_conversion";
  *(undefined4 *)&this->_padding_ = 0x401000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanKHRSamplerYcbcrConversionExtension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2c140

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRSamplerYcbcrConversionExtension::PostPhysicalDeviceFeatures
          (FVulkanKHRSamplerYcbcrConversionExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->PhysicalDeviceSamplerYcbcrConversionFeatures).samplerYcbcrConversion == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffffffff7fffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x1f;
  return;
}

// PreCreateDevice @ 145b2cc10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRSamplerYcbcrConversionExtension::PreCreateDevice
          (FVulkanKHRSamplerYcbcrConversionExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->PhysicalDeviceSamplerYcbcrConversionFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->PhysicalDeviceSamplerYcbcrConversionFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d6c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRSamplerYcbcrConversionExtension::PrePhysicalDeviceFeatures
          (FVulkanKHRSamplerYcbcrConversionExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->PhysicalDeviceSamplerYcbcrConversionFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;
  *(undefined8 *)&(this->PhysicalDeviceSamplerYcbcrConversionFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->PhysicalDeviceSamplerYcbcrConversionFeatures).pNext + 4) = 0;
  *(undefined4 *)&(this->PhysicalDeviceSamplerYcbcrConversionFeatures).field_0x14 = 0;
  (this->PhysicalDeviceSamplerYcbcrConversionFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->PhysicalDeviceSamplerYcbcrConversionFeatures;
  return;
}

