// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanKHRComputeShaderDerivatives @ 145b03010

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

FVulkanKHRComputeShaderDerivatives * __thiscall
FVulkanKHRComputeShaderDerivatives::FVulkanKHRComputeShaderDerivatives
          (FVulkanKHRComputeShaderDerivatives *this,FVulkanDevice *param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(char **)&this->field_0x8 = "VK_KHR_compute_shader_derivatives";
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  *(undefined ***)this = &___7FVulkanKHRComputeShaderDerivatives__6B_;
  this->field_0x50 = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2be60

void __thiscall
FVulkanKHRComputeShaderDerivatives::PostPhysicalDeviceFeatures
          (FVulkanKHRComputeShaderDerivatives *this,FOptionalVulkanDeviceExtensions *param_1)

{
  this->field_0x50 = *(int *)(*(longlong *)&this->field_0x18 + 0x2644) == 1;
  return;
}

// PreCreateDevice @ 145b2ca20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRComputeShaderDerivatives::PreCreateDevice
          (FVulkanKHRComputeShaderDerivatives *this,VkDeviceCreateInfo *param_1)

{
  longlong lVar1;
  
  if (this->field_0x50 != '\0') {
    lVar1 = *(longlong *)&this->field_0x18;
    *(void **)(lVar1 + 0x2638) = param_1->pNext;
    param_1->pNext = (void *)(lVar1 + 0x2630);
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d440

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRComputeShaderDerivatives::PrePhysicalDeviceFeatures
          (FVulkanKHRComputeShaderDerivatives *this,VkPhysicalDeviceFeatures2 *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x18;
  *(undefined4 *)(lVar1 + 0x2630) = 0x3b9ddb28;
  *(undefined8 *)(lVar1 + 0x2634) = 0;
  *(undefined8 *)(lVar1 + 0x263c) = 0;
  *(undefined4 *)(lVar1 + 0x2644) = 0;
  *(void **)(lVar1 + 0x2638) = param_1->pNext;
  param_1->pNext = (undefined4 *)(lVar1 + 0x2630);
  return;
}

