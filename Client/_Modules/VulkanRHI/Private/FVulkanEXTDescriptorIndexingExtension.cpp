// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanEXTDescriptorIndexingExtension @ 145b01490

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

FVulkanEXTDescriptorIndexingExtension * __thiscall
FVulkanEXTDescriptorIndexingExtension::FVulkanEXTDescriptorIndexingExtension
          (FVulkanEXTDescriptorIndexingExtension *this,FVulkanDevice *param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(char **)&this->field_0x8 = "VK_EXT_descriptor_indexing";
  *(undefined4 *)&this->field_0x10 = 0x402000;
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  *(undefined ***)this = &___7FVulkanEXTDescriptorIndexingExtension__6B_;
  this->field_0x50 = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2b9e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTDescriptorIndexingExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTDescriptorIndexingExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  byte bVar1;
  
  if (((((this->DescriptorIndexingFeatures).runtimeDescriptorArray == 1) &&
       ((this->DescriptorIndexingFeatures).descriptorBindingPartiallyBound == 1)) &&
      ((this->DescriptorIndexingFeatures).descriptorBindingUpdateUnusedWhilePending == 1)) &&
     ((this->DescriptorIndexingFeatures).descriptorBindingVariableDescriptorCount == 1)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  this->field_0x50 = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfffffeffffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x28;
  return;
}

// PreCreateDevice @ 145b2c700

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTDescriptorIndexingExtension::PreCreateDevice
          (FVulkanEXTDescriptorIndexingExtension *this,VkDeviceCreateInfo *param_1)

{
  if (this->field_0x50 != '\0') {
    (this->DescriptorIndexingFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->DescriptorIndexingFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2cfe0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTDescriptorIndexingExtension::PrePhysicalDeviceFeatures
          (FVulkanEXTDescriptorIndexingExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->DescriptorIndexingFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES;
  *(undefined8 *)&(this->DescriptorIndexingFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->DescriptorIndexingFeatures).pNext + 4) = 0;
  (this->DescriptorIndexingFeatures).shaderUniformTexelBufferArrayDynamicIndexing = 0;
  (this->DescriptorIndexingFeatures).shaderStorageTexelBufferArrayDynamicIndexing = 0;
  (this->DescriptorIndexingFeatures).shaderUniformBufferArrayNonUniformIndexing = 0;
  (this->DescriptorIndexingFeatures).shaderSampledImageArrayNonUniformIndexing = 0;
  (this->DescriptorIndexingFeatures).shaderStorageBufferArrayNonUniformIndexing = 0;
  (this->DescriptorIndexingFeatures).shaderStorageImageArrayNonUniformIndexing = 0;
  (this->DescriptorIndexingFeatures).shaderInputAttachmentArrayNonUniformIndexing = 0;
  (this->DescriptorIndexingFeatures).shaderUniformTexelBufferArrayNonUniformIndexing = 0;
  (this->DescriptorIndexingFeatures).shaderStorageTexelBufferArrayNonUniformIndexing = 0;
  (this->DescriptorIndexingFeatures).descriptorBindingUniformBufferUpdateAfterBind = 0;
  (this->DescriptorIndexingFeatures).descriptorBindingSampledImageUpdateAfterBind = 0;
  (this->DescriptorIndexingFeatures).descriptorBindingStorageImageUpdateAfterBind = 0;
  (this->DescriptorIndexingFeatures).descriptorBindingStorageBufferUpdateAfterBind = 0;
  (this->DescriptorIndexingFeatures).descriptorBindingUniformTexelBufferUpdateAfterBind = 0;
  (this->DescriptorIndexingFeatures).descriptorBindingStorageTexelBufferUpdateAfterBind = 0;
  (this->DescriptorIndexingFeatures).descriptorBindingUpdateUnusedWhilePending = 0;
  (this->DescriptorIndexingFeatures).descriptorBindingPartiallyBound = 0;
  (this->DescriptorIndexingFeatures).descriptorBindingVariableDescriptorCount = 0;
  (this->DescriptorIndexingFeatures).runtimeDescriptorArray = 0;
  (this->DescriptorIndexingFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->DescriptorIndexingFeatures;
  return;
}

