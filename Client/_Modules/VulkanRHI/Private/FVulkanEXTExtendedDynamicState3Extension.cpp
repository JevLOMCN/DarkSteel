// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanEXTExtendedDynamicState3Extension @ 145b01660

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

FVulkanEXTExtendedDynamicState3Extension * __thiscall
FVulkanEXTExtendedDynamicState3Extension::FVulkanEXTExtendedDynamicState3Extension
          (FVulkanEXTExtendedDynamicState3Extension *this,FVulkanDevice *param_1)

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
  *(char **)&this->field_0x8 = "VK_EXT_extended_dynamic_state3";
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  this->field_0x50 = 1;
  *(undefined ***)this = &___7FVulkanEXTExtendedDynamicState3Extension__6B_;
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

// PostPhysicalDeviceFeatures @ 145b2ba90

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTExtendedDynamicState3Extension::PostPhysicalDeviceFeatures
          (FVulkanEXTExtendedDynamicState3Extension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  byte bVar1;
  
  if (((((this->ExtendedDynamicState3Features).extendedDynamicState3PolygonMode == 1) &&
       ((this->ExtendedDynamicState3Features).extendedDynamicState3ColorBlendEnable == 1)) &&
      ((this->ExtendedDynamicState3Features).extendedDynamicState3ColorBlendEquation == 1)) &&
     ((((this->ExtendedDynamicState3Features).extendedDynamicState3ColorWriteMask == 1 &&
       ((this->ExtendedDynamicState3Features).extendedDynamicState3RasterizationSamples == 1)) &&
      ((this->ExtendedDynamicState3Features).extendedDynamicState3AlphaToCoverageEnable == 1)))) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  this->field_0x50 = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xff7fffffffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x37;
  return;
}

// PreCreateDevice @ 145b2c760

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTExtendedDynamicState3Extension::PreCreateDevice
          (FVulkanEXTExtendedDynamicState3Extension *this,VkDeviceCreateInfo *param_1)

{
  if (this->field_0x50 != '\0') {
    (this->ExtendedDynamicState3Features).pNext = param_1->pNext;
    param_1->pNext = &this->ExtendedDynamicState3Features;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d080

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTExtendedDynamicState3Extension::PrePhysicalDeviceFeatures
          (FVulkanEXTExtendedDynamicState3Extension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->ExtendedDynamicState3Features).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT;
  *(undefined8 *)&(this->ExtendedDynamicState3Features).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->ExtendedDynamicState3Features).pNext + 4) = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3DepthClampEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3PolygonMode = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3RasterizationSamples = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3SampleMask = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3AlphaToCoverageEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3AlphaToOneEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3LogicOpEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3ColorBlendEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3ColorBlendEquation = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3ColorWriteMask = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3RasterizationStream = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3ConservativeRasterizationMode = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3ExtraPrimitiveOverestimationSize = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3DepthClipEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3SampleLocationsEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3ColorBlendAdvanced = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3ProvokingVertexMode = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3LineRasterizationMode = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3LineStippleEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3DepthClipNegativeOneToOne = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3ViewportWScalingEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3ViewportSwizzle = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3CoverageToColorEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3CoverageToColorLocation = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3CoverageModulationMode = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3CoverageModulationTableEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3CoverageModulationTable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3CoverageReductionMode = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3RepresentativeFragmentTestEnable = 0;
  (this->ExtendedDynamicState3Features).extendedDynamicState3ShadingRateImageEnable = 0;
  *(undefined4 *)&(this->ExtendedDynamicState3Features).field_0x8c = 0;
  (this->ExtendedDynamicState3Features).pNext = param_1->pNext;
  param_1->pNext = &this->ExtendedDynamicState3Features;
  return;
}

