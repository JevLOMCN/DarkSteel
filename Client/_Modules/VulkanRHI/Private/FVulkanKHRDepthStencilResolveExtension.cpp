// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanKHRDepthStencilResolveExtension @ 145b03090

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

FVulkanKHRDepthStencilResolveExtension * __thiscall
FVulkanKHRDepthStencilResolveExtension::FVulkanKHRDepthStencilResolveExtension
          (FVulkanKHRDepthStencilResolveExtension *this,FVulkanDevice *param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(char **)&this->field_0x8 = "VK_KHR_depth_stencil_resolve";
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  *(undefined ***)this = &___7FVulkanKHRDepthStencilResolveExtension__6B_;
  this->field_0x50 = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2be80

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanKHRDepthStencilResolveExtension::PostPhysicalDeviceFeatures
          (FVulkanKHRDepthStencilResolveExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | 0x100000000000;
  GRHIGlobals.SupportsDepthStencilResolve = true;
  return;
}

