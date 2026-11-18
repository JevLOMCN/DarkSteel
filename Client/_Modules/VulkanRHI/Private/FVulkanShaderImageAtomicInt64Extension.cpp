// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanShaderImageAtomicInt64Extension @ 145b041d0

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

FVulkanShaderImageAtomicInt64Extension * __thiscall
FVulkanShaderImageAtomicInt64Extension::FVulkanShaderImageAtomicInt64Extension
          (FVulkanShaderImageAtomicInt64Extension *this,FVulkanDevice *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 auStack_68 [48];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar3 = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)"VK_EXT_shader_image_atomic_int64";
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FVulkanShaderImageAtomicInt64Extension__6B_;
  pTVar1 = GRHIAllow64bitShaderAtomicsCvar.Ref;
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    bVar2 = IsInParallelGameThread();
    if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
      lVar3 = 4;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) {
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
      return this;
    }
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2c2c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanShaderImageAtomicInt64Extension::PostPhysicalDeviceFeatures
          (FVulkanShaderImageAtomicInt64Extension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->ImageAtomicFeatures).shaderImageInt64Atomics == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfffffffffffffdff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 9;
  return;
}

// PreCreateDevice @ 145b2cde0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanShaderImageAtomicInt64Extension::PreCreateDevice
          (FVulkanShaderImageAtomicInt64Extension *this,VkDeviceCreateInfo *param_1)

{
  GRHIGlobals.SupportsAtomicUInt64 =
       (*(ulonglong *)(this->_padding_ + 0x21e0) & 0x400000200) == 0x400000200;
  if ((char)this->_padding_ != '\0') {
    (this->ImageAtomicFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->ImageAtomicFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d840

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanShaderImageAtomicInt64Extension::PrePhysicalDeviceFeatures
          (FVulkanShaderImageAtomicInt64Extension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->ImageAtomicFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT;
  *(undefined8 *)&(this->ImageAtomicFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->ImageAtomicFeatures).pNext + 4) = 0;
  (this->ImageAtomicFeatures).sparseImageInt64Atomics = 0;
  (this->ImageAtomicFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->ImageAtomicFeatures;
  return;
}

