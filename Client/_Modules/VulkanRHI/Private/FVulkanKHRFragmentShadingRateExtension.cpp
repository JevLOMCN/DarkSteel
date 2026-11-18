// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// FVulkanKHRFragmentShadingRateExtension @ 145b03430

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVulkanKHRFragmentShadingRateExtension * __thiscall
FVulkanKHRFragmentShadingRateExtension::FVulkanKHRFragmentShadingRateExtension
          (FVulkanKHRFragmentShadingRateExtension *this,FVulkanDevice *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(char **)&this->field_0x8 = "VK_KHR_fragment_shading_rate";
  *(undefined4 *)&this->field_0x14 = 0x10001;
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  bVar1 = this->field_0x14;
  this->field_0x50 = 1;
  *(undefined ***)this = &___7FVulkanKHRFragmentShadingRateExtension__6B_;
  bVar2 = HardwareVariableRateShadingSupportedByPlatform(GMaxRHIShaderPlatform);
  this->field_0x14 = bVar2 & bVar1;
  iVar3 = (**(code **)(*(longlong *)GVulkanVariableRateShadingFormatCVar._padding_ + 200))();
  this->field_0x14 = this->field_0x14 & iVar3 < 4;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2bfd0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanKHRFragmentShadingRateExtension::PostPhysicalDeviceFeatures
          (FVulkanKHRFragmentShadingRateExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  longlong lVar1;
  
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | 0x40;
  lVar1 = *(longlong *)&this->field_0x18;
  GRHIGlobals.VariableRateShading.SupportsAttachment = *(int *)(lVar1 + 0x25d8) == 1;
  GRHIGlobals.VariableRateShading.SupportsPipeline = *(int *)(lVar1 + 0x25d0) == 1;
  GRHIGlobals.VariableRateShading.ImageDataType = VRSImage_Palette;
  GRHIGlobals.VariableRateShading.ImageFormat = PF_R8_UINT;
  if (*(int *)(lVar1 + 0x25d8) != 1) {
    GRHIGlobals.VariableRateShading.ImageDataType = VRSImage_NotSupported;
    GRHIGlobals.VariableRateShading.ImageFormat = PF_Unknown;
  }
  return;
}

// PostPhysicalDeviceProperties @ 145b2c5a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanKHRFragmentShadingRateExtension::PostPhysicalDeviceProperties
          (FVulkanKHRFragmentShadingRateExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  if (*(int *)(*(longlong *)&this->field_0x18 + 0x25d8) == 1) {
    GRHIGlobals.VariableRateShading.ImageTileMinWidth =
         (this->FragmentShadingRateProperties).minFragmentShadingRateAttachmentTexelSize.width;
    GRHIGlobals.VariableRateShading.ImageTileMinHeight =
         (this->FragmentShadingRateProperties).minFragmentShadingRateAttachmentTexelSize.height;
    GRHIGlobals.VariableRateShading.ImageTileMaxWidth =
         (this->FragmentShadingRateProperties).maxFragmentShadingRateAttachmentTexelSize.width;
    GRHIGlobals.VariableRateShading.ImageTileMaxHeight =
         (this->FragmentShadingRateProperties).maxFragmentShadingRateAttachmentTexelSize.height;
    if ((3 < (this->FragmentShadingRateProperties).maxFragmentSize.width) &&
       (3 < (this->FragmentShadingRateProperties).maxFragmentSize.height)) {
      GRHIGlobals.VariableRateShading.SupportsLargerSizes =
           GRHIGlobals.VariableRateShading.SupportsPipeline;
    }
    if (5 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_void___cdecl_FVulkanKHRFragmentShadingRateExtension::PostPhysicalDeviceProperties(FOptionalVulkanDeviceExtensions&___ptr64)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      return;
    }
  }
  return;
}

// PreCreateDevice @ 145b2cad0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRFragmentShadingRateExtension::PreCreateDevice
          (FVulkanKHRFragmentShadingRateExtension *this,VkDeviceCreateInfo *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x18;
  if ((*(int *)(lVar1 + 0x25d8) == 1) || (*(int *)(lVar1 + 0x25d0) == 1)) {
    *(void **)(lVar1 + 0x25c8) = param_1->pNext;
    param_1->pNext = (void *)(lVar1 + 0x25c0);
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d530

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRFragmentShadingRateExtension::PrePhysicalDeviceFeatures
          (FVulkanKHRFragmentShadingRateExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&this->field_0x18;
  *(undefined4 *)(lVar1 + 0x25c0) = 0x3b9e3cd3;
  *(undefined8 *)(lVar1 + 0x25c4) = 0;
  *(undefined8 *)(lVar1 + 0x25cc) = 0;
  *(undefined8 *)(lVar1 + 0x25d4) = 0;
  *(undefined4 *)(lVar1 + 0x25dc) = 0;
  *(void **)(lVar1 + 0x25c8) = param_1->pNext;
  param_1->pNext = (undefined4 *)(lVar1 + 0x25c0);
  return;
}

// PrePhysicalDeviceProperties @ 145b2daf0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanKHRFragmentShadingRateExtension::PrePhysicalDeviceProperties
          (FVulkanKHRFragmentShadingRateExtension *this,VkPhysicalDeviceProperties2 *param_1)

{
  (this->FragmentShadingRateProperties).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR;
  *(undefined8 *)&(this->FragmentShadingRateProperties).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->FragmentShadingRateProperties).pNext + 4) = 0;
  *(undefined8 *)
   &(this->FragmentShadingRateProperties).minFragmentShadingRateAttachmentTexelSize.height = 0;
  *(undefined8 *)
   &(this->FragmentShadingRateProperties).maxFragmentShadingRateAttachmentTexelSize.height = 0;
  (this->FragmentShadingRateProperties).primitiveFragmentShadingRateWithMultipleViewports = 0;
  (this->FragmentShadingRateProperties).layeredShadingRateAttachments = 0;
  (this->FragmentShadingRateProperties).fragmentShadingRateNonTrivialCombinerOps = 0;
  (this->FragmentShadingRateProperties).maxFragmentSize.width = 0;
  *(undefined8 *)&(this->FragmentShadingRateProperties).maxFragmentSize.height = 0;
  (this->FragmentShadingRateProperties).maxFragmentShadingRateCoverageSamples = 0;
  (this->FragmentShadingRateProperties).maxFragmentShadingRateRasterizationSamples = 0;
  (this->FragmentShadingRateProperties).fragmentShadingRateWithShaderDepthStencilWrites = 0;
  (this->FragmentShadingRateProperties).fragmentShadingRateWithSampleMask = 0;
  (this->FragmentShadingRateProperties).fragmentShadingRateWithShaderSampleMask = 0;
  (this->FragmentShadingRateProperties).fragmentShadingRateWithConservativeRasterization = 0;
  (this->FragmentShadingRateProperties).fragmentShadingRateWithFragmentShaderInterlock = 0;
  (this->FragmentShadingRateProperties).fragmentShadingRateWithCustomSampleLocations = 0;
  (this->FragmentShadingRateProperties).fragmentShadingRateStrictMultiplyCombiner = 0;
  (this->FragmentShadingRateProperties).pNext = param_1->pNext;
  param_1->pNext = &this->FragmentShadingRateProperties;
  return;
}

