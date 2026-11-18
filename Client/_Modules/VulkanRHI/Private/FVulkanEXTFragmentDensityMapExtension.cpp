// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// FVulkanEXTFragmentDensityMapExtension @ 145b018a0

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

FVulkanEXTFragmentDensityMapExtension * __thiscall
FVulkanEXTFragmentDensityMapExtension::FVulkanEXTFragmentDensityMapExtension
          (FVulkanEXTFragmentDensityMapExtension *this,FVulkanDevice *param_1)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined1 auStack_68 [48];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this->_padding_ = (longlong)"VK_EXT_fragment_density_map";
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10001;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = local_38;
  this->_padding_ = lStack_30;
  this->_padding_ = local_28;
  bVar3 = *(byte *)((longlong)&this->_padding_ + 4);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FVulkanEXTFragmentDensityMapExtension__6B_;
  bVar2 = HardwareVariableRateShadingSupportedByPlatform(GMaxRHIShaderPlatform);
  *(byte *)((longlong)&this->_padding_ + 4) = bVar2 & bVar3;
  iVar4 = (**(code **)(*(longlong *)GVulkanVariableRateShadingFormatCVar._padding_ + 200))();
  if ((iVar4 < 3) && (iVar4 != 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & bVar3;
  return this;
}

// PostPhysicalDeviceFeatures @ 145b2bb50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTFragmentDensityMapExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTFragmentDensityMapExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(this->_padding_ + 0x25f0) == 1;
  *(bool *)&this->_padding_ = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xffffffffffffffef;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 4;
  return;
}

// PostPhysicalDeviceProperties @ 145b2c300

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanEXTFragmentDensityMapExtension::PostPhysicalDeviceProperties
          (FVulkanEXTFragmentDensityMapExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  int iVar1;
  
  if ((GRHIGlobals.VariableRateShading.SupportsAttachment) &&
     (iVar1 = (**(code **)(*(longlong *)GVulkanVariableRateShadingFormatCVar._padding_ + 200))(),
     iVar1 < 3)) {
    return;
  }
  if ((char)this->_padding_ != '\0') {
    GRHIGlobals.VariableRateShading.SupportsAttachment = true;
    GRHIGlobals.VariableRateShading.ImageTileMinWidth =
         (this->FragmentDensityMapProperties).minFragmentDensityTexelSize.width;
    GRHIGlobals.VariableRateShading.ImageTileMinHeight =
         (this->FragmentDensityMapProperties).minFragmentDensityTexelSize.height;
    GRHIGlobals.VariableRateShading.ImageTileMaxWidth =
         (this->FragmentDensityMapProperties).maxFragmentDensityTexelSize.width;
    GRHIGlobals.VariableRateShading.ImageTileMaxHeight =
         (this->FragmentDensityMapProperties).maxFragmentDensityTexelSize.height;
    GRHIGlobals.VariableRateShading.ImageDataType = VRSImage_Fractional;
    GRHIGlobals.VariableRateShading.ImageFormat = PF_R8G8;
    if (3 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:_virtual_void___cdecl_FVulkanEXTFragmentDensityMapExtension::PostPhysicalDeviceProperties(FOptionalVulkanDeviceExtensions&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      return;
    }
  }
  return;
}

// PreCreateDevice @ 145b2c7d0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTFragmentDensityMapExtension::PreCreateDevice
          (FVulkanEXTFragmentDensityMapExtension *this,VkDeviceCreateInfo *param_1)

{
  longlong lVar1;
  
  if ((char)this->_padding_ != '\0') {
    lVar1 = this->_padding_;
    *(void **)(lVar1 + 0x25e8) = param_1->pNext;
    param_1->pNext = (void *)(lVar1 + 0x25e0);
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d130

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTFragmentDensityMapExtension::PrePhysicalDeviceFeatures
          (FVulkanEXTFragmentDensityMapExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  *(undefined4 *)(lVar1 + 0x25e0) = 0x3b9e1d90;
  *(undefined8 *)(lVar1 + 0x25e4) = 0;
  *(undefined8 *)(lVar1 + 0x25ec) = 0;
  *(undefined8 *)(lVar1 + 0x25f4) = 0;
  *(undefined4 *)(lVar1 + 0x25fc) = 0;
  *(void **)(lVar1 + 0x25e8) = param_1->pNext;
  param_1->pNext = (undefined4 *)(lVar1 + 0x25e0);
  return;
}

// PrePhysicalDeviceProperties @ 145b2d8e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTFragmentDensityMapExtension::PrePhysicalDeviceProperties
          (FVulkanEXTFragmentDensityMapExtension *this,VkPhysicalDeviceProperties2 *param_1)

{
  (this->FragmentDensityMapProperties).sType =
       VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT;
  *(undefined8 *)&(this->FragmentDensityMapProperties).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->FragmentDensityMapProperties).pNext + 4) = 0;
  *(undefined8 *)&(this->FragmentDensityMapProperties).minFragmentDensityTexelSize.height = 0;
  *(undefined8 *)&(this->FragmentDensityMapProperties).maxFragmentDensityTexelSize.height = 0;
  *(undefined4 *)&(this->FragmentDensityMapProperties).field_0x24 = 0;
  (this->FragmentDensityMapProperties).pNext = param_1->pNext;
  param_1->pNext = &this->FragmentDensityMapProperties;
  return;
}

