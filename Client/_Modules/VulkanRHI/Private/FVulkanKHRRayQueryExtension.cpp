// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanKHRRayQueryExtension @ 145b03770

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

FVulkanKHRRayQueryExtension * __thiscall
FVulkanKHRRayQueryExtension::FVulkanKHRRayQueryExtension
          (FVulkanKHRRayQueryExtension *this,FVulkanDevice *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined1 auStack_68 [48];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar4 = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  this->_padding_ = (longlong)"VK_KHR_ray_query";
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FVulkanKHRRayQueryExtension__6B_;
  pTVar1 = GVulkanRayTracingCVar.Ref;
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    bVar2 = IsInParallelGameThread();
    if ((!bVar2) && (bVar2 = IsInGameThread(), !bVar2)) {
      lVar4 = 4;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != 0) {
      pwVar3 = FCommandLine::Get();
      bVar2 = FParse::Param(pwVar3,L"noraytracing");
      if (!bVar2) {
        *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
        return this;
      }
    }
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2c0c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRRayQueryExtension::PostPhysicalDeviceFeatures
          (FVulkanKHRRayQueryExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = (this->RayQueryFeatures).rayQuery == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffffffffffffefff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0xc;
  return;
}

// PreCreateDevice @ 145b2cba0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRRayQueryExtension::PreCreateDevice
          (FVulkanKHRRayQueryExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->RayQueryFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->RayQueryFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d630

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRRayQueryExtension::PrePhysicalDeviceFeatures
          (FVulkanKHRRayQueryExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->RayQueryFeatures).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
  *(undefined8 *)&(this->RayQueryFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->RayQueryFeatures).pNext + 4) = 0;
  *(undefined4 *)&(this->RayQueryFeatures).field_0x14 = 0;
  (this->RayQueryFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->RayQueryFeatures;
  return;
}

