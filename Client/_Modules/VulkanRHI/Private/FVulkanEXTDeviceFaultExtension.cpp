// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanEXTDeviceFaultExtension @ 145b01510

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

FVulkanEXTDeviceFaultExtension * __thiscall
FVulkanEXTDeviceFaultExtension::FVulkanEXTDeviceFaultExtension
          (FVulkanEXTDeviceFaultExtension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_EXT_device_fault";
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanEXTDeviceFaultExtension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2ba30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTDeviceFaultExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTDeviceFaultExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->DeviceFaultFeatures).deviceFault == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfffffffffffdffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x11;
  return;
}

// PreCreateDevice @ 145b2c720

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTDeviceFaultExtension::PreCreateDevice
          (FVulkanEXTDeviceFaultExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->DeviceFaultFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->DeviceFaultFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d020

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTDeviceFaultExtension::PrePhysicalDeviceFeatures
          (FVulkanEXTDeviceFaultExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->DeviceFaultFeatures).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT;
  *(undefined8 *)&(this->DeviceFaultFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->DeviceFaultFeatures).pNext + 4) = 0;
  (this->DeviceFaultFeatures).deviceFaultVendorBinary = 0;
  (this->DeviceFaultFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->DeviceFaultFeatures;
  return;
}

