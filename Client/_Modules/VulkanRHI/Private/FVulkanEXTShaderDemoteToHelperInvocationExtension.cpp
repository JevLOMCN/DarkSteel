// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanEXTShaderDemoteToHelperInvocationExtension @ 145b01e50

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

FVulkanEXTShaderDemoteToHelperInvocationExtension * __thiscall
FVulkanEXTShaderDemoteToHelperInvocationExtension::FVulkanEXTShaderDemoteToHelperInvocationExtension
          (FVulkanEXTShaderDemoteToHelperInvocationExtension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_EXT_shader_demote_to_helper_invocation";
  *(undefined4 *)&this->_padding_ = 0x403000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanEXTShaderDemoteToHelperInvocationExtension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2bd00

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTShaderDemoteToHelperInvocationExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTShaderDemoteToHelperInvocationExtension *this,
          FOptionalVulkanDeviceExtensions *param_1)

{
  *(bool *)&this->_padding_ =
       (this->ShaderDemoteToHelperInvocationFeatures).shaderDemoteToHelperInvocation == 1;
  return;
}

// PreCreateDevice @ 145b2c920

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTShaderDemoteToHelperInvocationExtension::PreCreateDevice
          (FVulkanEXTShaderDemoteToHelperInvocationExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->ShaderDemoteToHelperInvocationFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->ShaderDemoteToHelperInvocationFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d2f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTShaderDemoteToHelperInvocationExtension::PrePhysicalDeviceFeatures
          (FVulkanEXTShaderDemoteToHelperInvocationExtension *this,
          VkPhysicalDeviceFeatures2 *param_1)

{
  (this->ShaderDemoteToHelperInvocationFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES;
  *(undefined8 *)&(this->ShaderDemoteToHelperInvocationFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->ShaderDemoteToHelperInvocationFeatures).pNext + 4) = 0;
  *(undefined4 *)&(this->ShaderDemoteToHelperInvocationFeatures).field_0x14 = 0;
  (this->ShaderDemoteToHelperInvocationFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->ShaderDemoteToHelperInvocationFeatures;
  return;
}

