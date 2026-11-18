// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// FVulkanKHRMaintenance4Extension @ 145b03570

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

FVulkanKHRMaintenance4Extension * __thiscall
FVulkanKHRMaintenance4Extension::FVulkanKHRMaintenance4Extension
          (FVulkanKHRMaintenance4Extension *this,FVulkanDevice *param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(char **)&this->field_0x8 = "VK_KHR_maintenance4";
  *(undefined4 *)&this->field_0x10 = 0x403000;
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  *(undefined ***)this = &___7FVulkanKHRMaintenance4Extension__6B_;
  this->field_0x50 = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2c020

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMaintenance4Extension::PostPhysicalDeviceFeatures
          (FVulkanKHRMaintenance4Extension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->Maintenance4Features).maintenance4 == 1;
  this->field_0x50 = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffff7fffffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x2f;
  return;
}

// PreCreateDevice @ 145b2cb00

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanKHRMaintenance4Extension::PreCreateDevice
          (FVulkanKHRMaintenance4Extension *this,VkDeviceCreateInfo *param_1)

{
  ulonglong uVar1;
  
  if (this->field_0x50 != '\0') {
    (this->Maintenance4Features).pNext = param_1->pNext;
    param_1->pNext = &this->Maintenance4Features;
    uVar1 = (this->Maintenance4Properties).maxBufferSize;
    if (uVar1 < GRHIGlobals.MaxViewSizeBytesForNonTypedBuffer.Value) {
      GRHIGlobals.MaxViewSizeBytesForNonTypedBuffer.Value = uVar1;
    }
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d570

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMaintenance4Extension::PrePhysicalDeviceFeatures
          (FVulkanKHRMaintenance4Extension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->Maintenance4Features).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES;
  *(undefined8 *)&(this->Maintenance4Features).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->Maintenance4Features).pNext + 4) = 0;
  *(undefined4 *)&(this->Maintenance4Features).field_0x14 = 0;
  (this->Maintenance4Features).pNext = param_1->pNext;
  param_1->pNext = &this->Maintenance4Features;
  return;
}

// PrePhysicalDeviceProperties @ 145b2db30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRMaintenance4Extension::PrePhysicalDeviceProperties
          (FVulkanKHRMaintenance4Extension *this,VkPhysicalDeviceProperties2 *param_1)

{
  if (this->field_0x50 != '\0') {
    (this->Maintenance4Properties).sType =
         VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES;
    *(undefined8 *)&(this->Maintenance4Properties).field_0x4 = 0;
    *(undefined8 *)((longlong)&(this->Maintenance4Properties).pNext + 4) = 0;
    *(undefined4 *)((longlong)&(this->Maintenance4Properties).maxBufferSize + 4) = 0;
    (this->Maintenance4Properties).pNext = param_1->pNext;
    param_1->pNext = &this->Maintenance4Properties;
  }
  return;
}

