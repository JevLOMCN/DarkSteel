// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanKHRMaintenance5Extension @ 145b035f0

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

FVulkanKHRMaintenance5Extension * __thiscall
FVulkanKHRMaintenance5Extension::FVulkanKHRMaintenance5Extension
          (FVulkanKHRMaintenance5Extension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_KHR_maintenance5";
  *(undefined4 *)&this->_padding_ = 0x404000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanKHRMaintenance5Extension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2c050

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMaintenance5Extension::PostPhysicalDeviceFeatures
          (FVulkanKHRMaintenance5Extension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->Maintenance5Features).maintenance5 == 1;
  *(bool *)&this->_padding_ = bVar1;
  if (bVar1) {
    (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | 0x1000000000000;
  }
  return;
}

// PreCreateDevice @ 145b2cb40

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMaintenance5Extension::PreCreateDevice
          (FVulkanKHRMaintenance5Extension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->Maintenance5Features).pNext = param_1->pNext;
    param_1->pNext = &this->Maintenance5Features;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d5a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMaintenance5Extension::PrePhysicalDeviceFeatures
          (FVulkanKHRMaintenance5Extension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->Maintenance5Features).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES;
  *(undefined8 *)&(this->Maintenance5Features).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->Maintenance5Features).pNext + 4) = 0;
  *(undefined4 *)&(this->Maintenance5Features).field_0x14 = 0;
  (this->Maintenance5Features).pNext = param_1->pNext;
  param_1->pNext = &this->Maintenance5Features;
  return;
}

