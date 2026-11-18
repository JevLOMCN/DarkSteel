// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanEXTHostQueryResetExtension @ 145b01b00

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

FVulkanEXTHostQueryResetExtension * __thiscall
FVulkanEXTHostQueryResetExtension::FVulkanEXTHostQueryResetExtension
          (FVulkanEXTHostQueryResetExtension *this,FVulkanDevice *param_1)

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
  this->_padding_ = (longlong)"VK_EXT_host_query_reset";
  *(undefined4 *)&this->_padding_ = 0x402000;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FVulkanEXTHostQueryResetExtension__6B_;
  pTVar1 = GVulkanAllowHostQueryResetCVar.Ref;
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

// PostPhysicalDeviceFeatures @ 145b2bbd0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTHostQueryResetExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTHostQueryResetExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->HostQueryResetFeatures).hostQueryReset == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfffffbffffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x2a;
  return;
}

// PreCreateDevice @ 145b2c840

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTHostQueryResetExtension::PreCreateDevice
          (FVulkanEXTHostQueryResetExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->HostQueryResetFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->HostQueryResetFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d1d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTHostQueryResetExtension::PrePhysicalDeviceFeatures
          (FVulkanEXTHostQueryResetExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->HostQueryResetFeatures).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES
  ;
  *(undefined8 *)&(this->HostQueryResetFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->HostQueryResetFeatures).pNext + 4) = 0;
  *(undefined4 *)&(this->HostQueryResetFeatures).field_0x14 = 0;
  (this->HostQueryResetFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->HostQueryResetFeatures;
  return;
}

