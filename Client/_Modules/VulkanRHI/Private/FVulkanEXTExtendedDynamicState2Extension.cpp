// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanEXTExtendedDynamicState2Extension @ 145b01590

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

FVulkanEXTExtendedDynamicState2Extension * __thiscall
FVulkanEXTExtendedDynamicState2Extension::FVulkanEXTExtendedDynamicState2Extension
          (FVulkanEXTExtendedDynamicState2Extension *this,FVulkanDevice *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar3 = 0;
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(char **)&this->field_0x8 = "VK_EXT_extended_dynamic_state2";
  *(undefined4 *)&this->field_0x10 = 0x403000;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  this->field_0x50 = 1;
  *(undefined ***)this = &___7FVulkanEXTExtendedDynamicState2Extension__6B_;
  pTVar1 = GVulkanAllowDynamicStatesCVar.Ref;
  if (this->field_0x14 != '\0') {
    bVar2 = IsInParallelGameThread();
    if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
      lVar3 = 4;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) {
      this->field_0x14 = 1;
      return this;
    }
  }
  this->field_0x14 = 0;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2ba60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTExtendedDynamicState2Extension::PostPhysicalDeviceFeatures
          (FVulkanEXTExtendedDynamicState2Extension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->ExtendedDynamicState2Features).extendedDynamicState2 == 1;
  this->field_0x50 = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffbfffffffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x36;
  return;
}

// PreCreateDevice @ 145b2c740

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTExtendedDynamicState2Extension::PreCreateDevice
          (FVulkanEXTExtendedDynamicState2Extension *this,VkDeviceCreateInfo *param_1)

{
  if (this->field_0x50 != '\0') {
    (this->ExtendedDynamicState2Features).pNext = param_1->pNext;
    param_1->pNext = &this->ExtendedDynamicState2Features;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d050

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTExtendedDynamicState2Extension::PrePhysicalDeviceFeatures
          (FVulkanEXTExtendedDynamicState2Extension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->ExtendedDynamicState2Features).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT;
  *(undefined8 *)&(this->ExtendedDynamicState2Features).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->ExtendedDynamicState2Features).pNext + 4) = 0;
  (this->ExtendedDynamicState2Features).extendedDynamicState2LogicOp = 0;
  (this->ExtendedDynamicState2Features).extendedDynamicState2PatchControlPoints = 0;
  *(undefined4 *)&(this->ExtendedDynamicState2Features).field_0x1c = 0;
  (this->ExtendedDynamicState2Features).pNext = param_1->pNext;
  param_1->pNext = &this->ExtendedDynamicState2Features;
  return;
}

