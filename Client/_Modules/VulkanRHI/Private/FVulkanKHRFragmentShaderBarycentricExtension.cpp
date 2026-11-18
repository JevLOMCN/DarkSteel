// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// FVulkanKHRFragmentShaderBarycentricExtension @ 145b033b0

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

FVulkanKHRFragmentShaderBarycentricExtension * __thiscall
FVulkanKHRFragmentShaderBarycentricExtension::FVulkanKHRFragmentShaderBarycentricExtension
          (FVulkanKHRFragmentShaderBarycentricExtension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_KHR_fragment_shader_barycentric";
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanKHRFragmentShaderBarycentricExtension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2bfa0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanKHRFragmentShaderBarycentricExtension::PostPhysicalDeviceFeatures
          (FVulkanKHRFragmentShaderBarycentricExtension *this,
          FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->FragmentShaderBarycentricFeatures).fragmentShaderBarycentric == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffffffffffffff7f;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 7;
  GRHIGlobals.SupportsBarycentricsSemantic = (bool)(char)this->_padding_;
  return;
}

// PostPhysicalDeviceProperties @ 145b2c590

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRFragmentShaderBarycentricExtension::PostPhysicalDeviceProperties
          (FVulkanKHRFragmentShaderBarycentricExtension *this,
          FOptionalVulkanDeviceExtensions *param_1)

{
  return;
}

// PreCreateDevice @ 145b2cab0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRFragmentShaderBarycentricExtension::PreCreateDevice
          (FVulkanKHRFragmentShaderBarycentricExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->FragmentShaderBarycentricFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->FragmentShaderBarycentricFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d500

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRFragmentShaderBarycentricExtension::PrePhysicalDeviceFeatures
          (FVulkanKHRFragmentShaderBarycentricExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->FragmentShaderBarycentricFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR;
  *(undefined8 *)&(this->FragmentShaderBarycentricFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->FragmentShaderBarycentricFeatures).pNext + 4) = 0;
  *(undefined4 *)&(this->FragmentShaderBarycentricFeatures).field_0x14 = 0;
  (this->FragmentShaderBarycentricFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->FragmentShaderBarycentricFeatures;
  return;
}

// PrePhysicalDeviceProperties @ 145b2dac0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRFragmentShaderBarycentricExtension::PrePhysicalDeviceProperties
          (FVulkanKHRFragmentShaderBarycentricExtension *this,VkPhysicalDeviceProperties2 *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  *(undefined4 *)(lVar1 + 0x2618) = 0x3b9fb3d0;
  *(undefined8 *)(lVar1 + 0x261c) = 0;
  *(undefined8 *)(lVar1 + 0x2624) = 0;
  *(undefined4 *)(lVar1 + 0x262c) = 0;
  *(void **)(lVar1 + 0x2620) = param_1->pNext;
  param_1->pNext = (undefined4 *)(lVar1 + 0x2618);
  return;
}

