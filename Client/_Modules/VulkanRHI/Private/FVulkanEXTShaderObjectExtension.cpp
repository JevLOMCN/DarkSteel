// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanEXTShaderObjectExtension @ 145b01ed0

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

FVulkanEXTShaderObjectExtension * __thiscall
FVulkanEXTShaderObjectExtension::FVulkanEXTShaderObjectExtension
          (FVulkanEXTShaderObjectExtension *this,FVulkanDevice *param_1)

{
  char cVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [48];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)"VK_EXT_shader_object";
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FVulkanEXTShaderObjectExtension__6B_;
  pTVar2 = GVulkanAllowDynamicStatesCVar.Ref;
  if (cVar1 != '\0') {
    bVar4 = IsInParallelGameThread();
    lVar6 = 4;
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 4;
    }
    pTVar3 = GVulkanAllowShaderObjectCVar.Ref;
    if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) != 0) {
      bVar4 = IsInParallelGameThread();
      if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
        lVar6 = 0;
      }
      if (*(int *)((longlong)pTVar3->ShadowedValue + lVar6) != 0) {
        *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
        return this;
      }
    }
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2bd20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTShaderObjectExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTShaderObjectExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->ShaderObjectFeatures).shaderObject == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffffffffff7fffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x17;
  return;
}

// PreCreateDevice @ 145b2c940

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTShaderObjectExtension::PreCreateDevice
          (FVulkanEXTShaderObjectExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->ShaderObjectFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->ShaderObjectFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d320

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTShaderObjectExtension::PrePhysicalDeviceFeatures
          (FVulkanEXTShaderObjectExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->ShaderObjectFeatures).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT;
  *(undefined8 *)&(this->ShaderObjectFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->ShaderObjectFeatures).pNext + 4) = 0;
  *(undefined4 *)&(this->ShaderObjectFeatures).field_0x14 = 0;
  (this->ShaderObjectFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->ShaderObjectFeatures;
  return;
}

