// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanShaderAtomicInt64Extension @ 145b04100

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

FVulkanShaderAtomicInt64Extension * __thiscall
FVulkanShaderAtomicInt64Extension::FVulkanShaderAtomicInt64Extension
          (FVulkanShaderAtomicInt64Extension *this,FVulkanDevice *param_1)

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
  this->_padding_ = (longlong)"VK_KHR_shader_atomic_int64";
  *(undefined4 *)&this->_padding_ = 0x402000;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FVulkanShaderAtomicInt64Extension__6B_;
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

// PostPhysicalDeviceFeatures @ 145b2c290

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanShaderAtomicInt64Extension::PostPhysicalDeviceFeatures
          (FVulkanShaderAtomicInt64Extension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->BufferAtomicFeatures).shaderBufferInt64Atomics == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfffffffbffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x22;
  return;
}

// PreCreateDevice @ 145b2cdc0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanShaderAtomicInt64Extension::PreCreateDevice
          (FVulkanShaderAtomicInt64Extension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->BufferAtomicFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->BufferAtomicFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d810

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanShaderAtomicInt64Extension::PrePhysicalDeviceFeatures
          (FVulkanShaderAtomicInt64Extension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->BufferAtomicFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES;
  *(undefined8 *)&(this->BufferAtomicFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->BufferAtomicFeatures).pNext + 4) = 0;
  (this->BufferAtomicFeatures).shaderSharedInt64Atomics = 0;
  (this->BufferAtomicFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->BufferAtomicFeatures;
  return;
}

