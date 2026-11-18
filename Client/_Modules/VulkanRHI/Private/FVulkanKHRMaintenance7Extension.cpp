// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// FVulkanKHRMaintenance7Extension @ 145b03670

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

FVulkanKHRMaintenance7Extension * __thiscall
FVulkanKHRMaintenance7Extension::FVulkanKHRMaintenance7Extension
          (FVulkanKHRMaintenance7Extension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_KHR_maintenance7";
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanKHRMaintenance7Extension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2c070

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMaintenance7Extension::PostPhysicalDeviceFeatures
          (FVulkanKHRMaintenance7Extension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->Maintenance7Features).maintenance7 == 1;
  *(bool *)&this->_padding_ = bVar1;
  if (bVar1) {
    (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | 0x400000;
  }
  return;
}

// PreCreateDevice @ 145b2cb60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMaintenance7Extension::PreCreateDevice
          (FVulkanKHRMaintenance7Extension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->Maintenance7Features).pNext = param_1->pNext;
    param_1->pNext = &this->Maintenance7Features;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d5d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMaintenance7Extension::PrePhysicalDeviceFeatures
          (FVulkanKHRMaintenance7Extension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->Maintenance7Features).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR;
  *(undefined8 *)&(this->Maintenance7Features).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->Maintenance7Features).pNext + 4) = 0;
  *(undefined4 *)&(this->Maintenance7Features).field_0x14 = 0;
  (this->Maintenance7Features).pNext = param_1->pNext;
  param_1->pNext = &this->Maintenance7Features;
  return;
}

// PrePhysicalDeviceProperties @ 145b2db60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMaintenance7Extension::PrePhysicalDeviceProperties
          (FVulkanKHRMaintenance7Extension *this,VkPhysicalDeviceProperties2 *param_1)

{
  longlong lVar1;
  
  if ((char)this->_padding_ != '\0') {
    lVar1 = this->_padding_;
    *(undefined4 *)(lVar1 + 0x2400) = 0x3ba35d51;
    *(undefined8 *)(lVar1 + 0x2404) = 0;
    *(undefined8 *)(lVar1 + 0x240c) = 0;
    *(undefined8 *)(lVar1 + 0x2414) = 0;
    *(undefined8 *)(lVar1 + 0x241c) = 0;
    *(undefined8 *)(lVar1 + 0x2424) = 0;
    *(undefined4 *)(lVar1 + 0x242c) = 0;
    *(void **)(lVar1 + 0x2408) = param_1->pNext;
    param_1->pNext = (undefined4 *)(lVar1 + 0x2400);
  }
  return;
}

