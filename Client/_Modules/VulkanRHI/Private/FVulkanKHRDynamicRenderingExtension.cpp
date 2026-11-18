// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanKHRDynamicRenderingExtension @ 145b03190

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

FVulkanKHRDynamicRenderingExtension * __thiscall
FVulkanKHRDynamicRenderingExtension::FVulkanKHRDynamicRenderingExtension
          (FVulkanKHRDynamicRenderingExtension *this,FVulkanDevice *param_1)

{
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  this->_padding_ = (longlong)"VK_KHR_dynamic_rendering";
  *(undefined4 *)&this->_padding_ = 0x403000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  this->_padding_ = (longlong)&___7FVulkanKHRDynamicRenderingExtension__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2bea0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRDynamicRenderingExtension::PostPhysicalDeviceFeatures
          (FVulkanKHRDynamicRenderingExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *(bool *)&this->_padding_ = (this->DynamicRenderingFeatures).dynamicRendering == 1;
  pTVar1 = GVulkanAllowDynamicRenderingCVar.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_145b2bee1;
    }
  }
  lVar3 = 0;
LAB_145b2bee1:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) {
    uVar4 = (ulonglong)(byte)this->_padding_ << 0x32;
    (param_1->field0_0x0).Packed =
         (uVar4 ^ (param_1->field0_0x0).Packed) & 0xfffbffffffffffff ^ uVar4;
  }
  return;
}

// PreCreateDevice @ 145b2ca50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRDynamicRenderingExtension::PreCreateDevice
          (FVulkanKHRDynamicRenderingExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->DynamicRenderingFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->DynamicRenderingFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d470

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRDynamicRenderingExtension::PrePhysicalDeviceFeatures
          (FVulkanKHRDynamicRenderingExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->DynamicRenderingFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES;
  *(undefined8 *)&(this->DynamicRenderingFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->DynamicRenderingFeatures).pNext + 4) = 0;
  *(undefined4 *)&(this->DynamicRenderingFeatures).field_0x14 = 0;
  (this->DynamicRenderingFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->DynamicRenderingFeatures;
  return;
}

