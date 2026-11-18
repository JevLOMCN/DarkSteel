// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanEXTFragmentDensityMap2Extension @ 145b01800

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVulkanEXTFragmentDensityMap2Extension * __thiscall
FVulkanEXTFragmentDensityMap2Extension::FVulkanEXTFragmentDensityMap2Extension
          (FVulkanEXTFragmentDensityMap2Extension *this,FVulkanDevice *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(char **)&this->field_0x8 = "VK_EXT_fragment_density_map2";
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  bVar1 = this->field_0x14;
  this->field_0x50 = 1;
  *(undefined ***)this = &___7FVulkanEXTFragmentDensityMap2Extension__6B_;
  bVar2 = HardwareVariableRateShadingSupportedByPlatform(GMaxRHIShaderPlatform);
  this->field_0x14 = bVar2 & bVar1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2bb20

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanEXTFragmentDensityMap2Extension::PostPhysicalDeviceFeatures
          (FVulkanEXTFragmentDensityMap2Extension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(*(longlong *)&this->field_0x18 + 0x2610) == 1;
  this->field_0x50 = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffffffffffffffdf;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 5;
  GRHIGlobals.VariableRateShading.SupportsLateUpdate = (bool)this->field_0x50;
  return;
}

// PreCreateDevice @ 145b2c7a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTFragmentDensityMap2Extension::PreCreateDevice
          (FVulkanEXTFragmentDensityMap2Extension *this,VkDeviceCreateInfo *param_1)

{
  longlong lVar1;
  
  if (this->field_0x50 != '\0') {
    lVar1 = *(longlong *)&this->field_0x18;
    *(void **)(lVar1 + 0x2608) = param_1->pNext;
    param_1->pNext = (void *)(lVar1 + 0x2600);
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d100

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTFragmentDensityMap2Extension::PrePhysicalDeviceFeatures
          (FVulkanEXTFragmentDensityMap2Extension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x18;
  *(undefined4 *)(lVar1 + 0x2600) = 0x3b9fdae0;
  *(undefined8 *)(lVar1 + 0x2604) = 0;
  *(undefined8 *)(lVar1 + 0x260c) = 0;
  *(undefined4 *)(lVar1 + 0x2614) = 0;
  *(void **)(lVar1 + 0x2608) = param_1->pNext;
  param_1->pNext = (undefined4 *)(lVar1 + 0x2600);
  return;
}

