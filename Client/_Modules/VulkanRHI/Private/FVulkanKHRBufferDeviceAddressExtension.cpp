// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanKHRBufferDeviceAddressExtension @ 145b02f90

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

FVulkanKHRBufferDeviceAddressExtension * __thiscall
FVulkanKHRBufferDeviceAddressExtension::FVulkanKHRBufferDeviceAddressExtension
          (FVulkanKHRBufferDeviceAddressExtension *this,FVulkanDevice *param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(char **)&this->field_0x8 = "VK_KHR_buffer_device_address";
  *(undefined4 *)&this->field_0x10 = 0x402000;
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  *(undefined ***)this = &___7FVulkanKHRBufferDeviceAddressExtension__6B_;
  this->field_0x50 = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2be30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRBufferDeviceAddressExtension::PostPhysicalDeviceFeatures
          (FVulkanKHRBufferDeviceAddressExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->BufferDeviceAddressFeatures).bufferDeviceAddress == 1;
  this->field_0x50 = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffffffefffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x24;
  return;
}

// PreCreateDevice @ 145b2ca00

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRBufferDeviceAddressExtension::PreCreateDevice
          (FVulkanKHRBufferDeviceAddressExtension *this,VkDeviceCreateInfo *param_1)

{
  if (this->field_0x50 != '\0') {
    (this->BufferDeviceAddressFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->BufferDeviceAddressFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d410

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRBufferDeviceAddressExtension::PrePhysicalDeviceFeatures
          (FVulkanKHRBufferDeviceAddressExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->BufferDeviceAddressFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES;
  *(undefined8 *)&(this->BufferDeviceAddressFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->BufferDeviceAddressFeatures).pNext + 4) = 0;
  (this->BufferDeviceAddressFeatures).bufferDeviceAddressCaptureReplay = 0;
  (this->BufferDeviceAddressFeatures).bufferDeviceAddressMultiDevice = 0;
  *(undefined4 *)&(this->BufferDeviceAddressFeatures).field_0x1c = 0;
  (this->BufferDeviceAddressFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->BufferDeviceAddressFeatures;
  return;
}

