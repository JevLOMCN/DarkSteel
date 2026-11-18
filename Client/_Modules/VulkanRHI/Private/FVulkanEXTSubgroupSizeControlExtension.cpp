// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// FVulkanEXTSubgroupSizeControlExtension @ 145b02050

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

FVulkanEXTSubgroupSizeControlExtension * __thiscall
FVulkanEXTSubgroupSizeControlExtension::FVulkanEXTSubgroupSizeControlExtension
          (FVulkanEXTSubgroupSizeControlExtension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_EXT_subgroup_size_control";
  *(undefined4 *)&this->_padding_ = 0x403000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanEXTSubgroupSizeControlExtension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2bd60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTSubgroupSizeControlExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTSubgroupSizeControlExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->SubgroupSizeControlFeatures).subgroupSizeControl == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfff7ffffffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x33;
  return;
}

// PreCreateDevice @ 145b2c960

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanEXTSubgroupSizeControlExtension::PreCreateDevice
          (FVulkanEXTSubgroupSizeControlExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    GRHIGlobals.MinimumWaveSize = *(int *)(this->_padding_ + 0x2540);
    GRHIGlobals.MaximumWaveSize = *(int *)(this->_padding_ + 0x2544);
    (this->SubgroupSizeControlFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->SubgroupSizeControlFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d350

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTSubgroupSizeControlExtension::PrePhysicalDeviceFeatures
          (FVulkanEXTSubgroupSizeControlExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->SubgroupSizeControlFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES;
  *(undefined8 *)&(this->SubgroupSizeControlFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->SubgroupSizeControlFeatures).pNext + 4) = 0;
  (this->SubgroupSizeControlFeatures).computeFullSubgroups = 0;
  (this->SubgroupSizeControlFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->SubgroupSizeControlFeatures;
  return;
}

// PrePhysicalDeviceProperties @ 145b2d9f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTSubgroupSizeControlExtension::PrePhysicalDeviceProperties
          (FVulkanEXTSubgroupSizeControlExtension *this,VkPhysicalDeviceProperties2 *param_1)

{
  longlong lVar1;
  
  if ((char)this->_padding_ != '\0') {
    lVar1 = this->_padding_;
    *(undefined4 *)(lVar1 + 0x2530) = 0x3b9e38e8;
    *(undefined8 *)(lVar1 + 0x2534) = 0;
    *(undefined8 *)(lVar1 + 0x253c) = 0;
    *(undefined8 *)(lVar1 + 0x2544) = 0;
    *(undefined4 *)(lVar1 + 0x254c) = 0;
    *(void **)(lVar1 + 0x2538) = param_1->pNext;
    param_1->pNext = (undefined4 *)(lVar1 + 0x2530);
  }
  return;
}

