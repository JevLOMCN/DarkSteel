// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanKHRMultiviewExtension @ 145b036f0

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

FVulkanKHRMultiviewExtension * __thiscall
FVulkanKHRMultiviewExtension::FVulkanKHRMultiviewExtension
          (FVulkanKHRMultiviewExtension *this,FVulkanDevice *param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(char **)&this->field_0x8 = "VK_KHR_multiview";
  *(undefined4 *)&this->field_0x10 = 0x401000;
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  *(undefined ***)this = &___7FVulkanKHRMultiviewExtension__6B_;
  this->field_0x50 = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2c090

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMultiviewExtension::PostPhysicalDeviceFeatures
          (FVulkanKHRMultiviewExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->DeviceMultiviewFeatures).multiview == 1;
  this->field_0x50 = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffffffffdfffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x1d;
  return;
}

// PreCreateDevice @ 145b2cb80

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMultiviewExtension::PreCreateDevice
          (FVulkanKHRMultiviewExtension *this,VkDeviceCreateInfo *param_1)

{
  if (this->field_0x50 != '\0') {
    (this->DeviceMultiviewFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->DeviceMultiviewFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d600

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMultiviewExtension::PrePhysicalDeviceFeatures
          (FVulkanKHRMultiviewExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->DeviceMultiviewFeatures).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
  *(undefined8 *)&(this->DeviceMultiviewFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->DeviceMultiviewFeatures).pNext + 4) = 0;
  (this->DeviceMultiviewFeatures).multiviewGeometryShader = 0;
  (this->DeviceMultiviewFeatures).multiviewTessellationShader = 0;
  *(undefined4 *)&(this->DeviceMultiviewFeatures).field_0x1c = 0;
  (this->DeviceMultiviewFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->DeviceMultiviewFeatures;
  return;
}

