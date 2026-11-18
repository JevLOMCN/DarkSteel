// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// FVulkanKHRAccelerationStructureExtension @ 145b02eb0

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

FVulkanKHRAccelerationStructureExtension * __thiscall
FVulkanKHRAccelerationStructureExtension::FVulkanKHRAccelerationStructureExtension
          (FVulkanKHRAccelerationStructureExtension *this,FVulkanDevice *param_1)

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
  this->_padding_ = (longlong)"VK_KHR_acceleration_structure";
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FVulkanKHRAccelerationStructureExtension__6B_;
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

// PostPhysicalDeviceFeatures @ 145b2be00

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRAccelerationStructureExtension::PostPhysicalDeviceFeatures
          (FVulkanKHRAccelerationStructureExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  byte bVar1;
  
  if (((this->AccelerationStructureFeatures).accelerationStructure == 1) &&
     ((this->AccelerationStructureFeatures).descriptorBindingAccelerationStructureUpdateAfterBind ==
      1)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfffffffffffffbff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 10;
  return;
}

// PreCreateDevice @ 145b2c9e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRAccelerationStructureExtension::PreCreateDevice
          (FVulkanKHRAccelerationStructureExtension *this,VkDeviceCreateInfo *param_1)

{
  if ((char)this->_padding_ != '\0') {
    (this->AccelerationStructureFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->AccelerationStructureFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d3e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRAccelerationStructureExtension::PrePhysicalDeviceFeatures
          (FVulkanKHRAccelerationStructureExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->AccelerationStructureFeatures).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR;
  *(undefined8 *)&(this->AccelerationStructureFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->AccelerationStructureFeatures).pNext + 4) = 0;
  (this->AccelerationStructureFeatures).accelerationStructureCaptureReplay = 0;
  (this->AccelerationStructureFeatures).accelerationStructureIndirectBuild = 0;
  (this->AccelerationStructureFeatures).accelerationStructureHostCommands = 0;
  (this->AccelerationStructureFeatures).descriptorBindingAccelerationStructureUpdateAfterBind = 0;
  *(undefined4 *)&(this->AccelerationStructureFeatures).field_0x24 = 0;
  (this->AccelerationStructureFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->AccelerationStructureFeatures;
  return;
}

// PrePhysicalDeviceProperties @ 145b2da30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRAccelerationStructureExtension::PrePhysicalDeviceProperties
          (FVulkanKHRAccelerationStructureExtension *this,VkPhysicalDeviceProperties2 *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  *(undefined4 *)(lVar1 + 0x2550) = 0x3b9d13fe;
  *(undefined8 *)(lVar1 + 0x2554) = 0;
  *(undefined8 *)(lVar1 + 0x255c) = 0;
  *(undefined8 *)(lVar1 + 0x2564) = 0;
  *(undefined8 *)(lVar1 + 0x256c) = 0;
  *(undefined8 *)(lVar1 + 0x2574) = 0;
  *(undefined8 *)(lVar1 + 0x257c) = 0;
  *(undefined8 *)(lVar1 + 0x2584) = 0;
  *(undefined4 *)(lVar1 + 0x258c) = 0;
  *(void **)(lVar1 + 0x2558) = param_1->pNext;
  param_1->pNext = (undefined4 *)(lVar1 + 0x2550);
  return;
}

