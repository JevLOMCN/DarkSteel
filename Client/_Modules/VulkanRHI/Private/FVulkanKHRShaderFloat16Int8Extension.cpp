// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanKHRShaderFloat16Int8Extension @ 145b03b60

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

FVulkanKHRShaderFloat16Int8Extension * __thiscall
FVulkanKHRShaderFloat16Int8Extension::FVulkanKHRShaderFloat16Int8Extension
          (FVulkanKHRShaderFloat16Int8Extension *this,FVulkanDevice *param_1)

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
  this->_padding_ = (longlong)"VK_KHR_shader_float16_int8";
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FVulkanKHRShaderFloat16Int8Extension__6B_;
  pTVar1 = GRHIAllow16bitOps.Ref;
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

// PostPhysicalDeviceFeatures @ 145b2c1a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRShaderFloat16Int8Extension::PostPhysicalDeviceFeatures
          (FVulkanKHRShaderFloat16Int8Extension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->ShaderFloat16Int8Features).shaderFloat16 == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffffff7fffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x27;
  return;
}

// PreCreateDevice @ 145b2cc50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVulkanKHRShaderFloat16Int8Extension::PreCreateDevice
          (FVulkanKHRShaderFloat16Int8Extension *this,VkDeviceCreateInfo *param_1)

{
  if (((*(ulonglong *)(this->_padding_ + 0x21e0) & 0x8040000000) != 0x8040000000) ||
     (GRHIGlobals.SupportsNative16BitOps = true,
     FGenericDataDrivenShaderPlatformInfo::Infos[GMaxRHIShaderPlatform].bSupportsRealTypes == 0)) {
    GRHIGlobals.SupportsNative16BitOps = false;
  }
  if ((char)this->_padding_ != '\0') {
    (this->ShaderFloat16Int8Features).pNext = param_1->pNext;
    param_1->pNext = &this->ShaderFloat16Int8Features;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d720

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRShaderFloat16Int8Extension::PrePhysicalDeviceFeatures
          (FVulkanKHRShaderFloat16Int8Extension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->ShaderFloat16Int8Features).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT16_INT8_FEATURES_KHR;
  *(undefined8 *)&(this->ShaderFloat16Int8Features).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->ShaderFloat16Int8Features).pNext + 4) = 0;
  (this->ShaderFloat16Int8Features).shaderInt8 = 0;
  (this->ShaderFloat16Int8Features).pNext = param_1->pNext;
  param_1->pNext = &this->ShaderFloat16Int8Features;
  return;
}

