// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanKHR16BitStorageExtension @ 145b02de0

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

FVulkanKHR16BitStorageExtension * __thiscall
FVulkanKHR16BitStorageExtension::FVulkanKHR16BitStorageExtension
          (FVulkanKHR16BitStorageExtension *this,FVulkanDevice *param_1)

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
  *(char **)&this->field_0x8 = "VK_KHR_16bit_storage";
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  this->field_0x50 = 1;
  *(undefined ***)this = &___7FVulkanKHR16BitStorageExtension__6B_;
  pTVar1 = GRHIAllow16bitOps.Ref;
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

// PostPhysicalDeviceFeatures @ 145b2bdc0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHR16BitStorageExtension::PostPhysicalDeviceFeatures
          (FVulkanKHR16BitStorageExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  byte bVar1;
  
  if ((((this->Device16BitStorageFeatures).storageBuffer16BitAccess == 1) &&
      ((this->Device16BitStorageFeatures).uniformAndStorageBuffer16BitAccess == 1)) &&
     ((this->Device16BitStorageFeatures).storagePushConstant16 == 1)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  this->field_0x50 = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffffffffbfffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x1e;
  return;
}

// PreCreateDevice @ 145b2c9c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHR16BitStorageExtension::PreCreateDevice
          (FVulkanKHR16BitStorageExtension *this,VkDeviceCreateInfo *param_1)

{
  if (this->field_0x50 != '\0') {
    (this->Device16BitStorageFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->Device16BitStorageFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d3b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHR16BitStorageExtension::PrePhysicalDeviceFeatures
          (FVulkanKHR16BitStorageExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->Device16BitStorageFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;
  *(undefined8 *)&(this->Device16BitStorageFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->Device16BitStorageFeatures).pNext + 4) = 0;
  (this->Device16BitStorageFeatures).uniformAndStorageBuffer16BitAccess = 0;
  (this->Device16BitStorageFeatures).storagePushConstant16 = 0;
  (this->Device16BitStorageFeatures).storageInputOutput16 = 0;
  (this->Device16BitStorageFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->Device16BitStorageFeatures;
  return;
}

