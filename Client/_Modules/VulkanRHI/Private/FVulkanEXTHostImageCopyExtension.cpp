// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// FVulkanEXTHostImageCopyExtension @ 145b01a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FVulkanEXTHostImageCopyExtension * __thiscall
FVulkanEXTHostImageCopyExtension::FVulkanEXTHostImageCopyExtension
          (FVulkanEXTHostImageCopyExtension *this,FVulkanDevice *param_1)

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
  *(char **)&this->field_0x8 = "VK_EXT_host_image_copy";
  *(undefined4 *)&this->field_0x10 = 0x404000;
  *(FVulkanDevice **)&this->field_0x18 = param_1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x30 = local_38;
  *(undefined8 *)&this->field_0x38 = uStack_30;
  *(undefined8 *)&this->field_0x40 = local_28;
  this->field_0x50 = 1;
  *(undefined ***)this = &___7FVulkanEXTHostImageCopyExtension__6B_;
  pTVar1 = GVulkanAllowHostImageCopyCVar.Ref;
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

// PostPhysicalDeviceFeatures @ 145b2bbb0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FVulkanEXTHostImageCopyExtension::PostPhysicalDeviceFeatures
          (FVulkanEXTHostImageCopyExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  this->field_0x50 = (this->HostImageCopyFeatures).hostImageCopy == 1;
  return;
}

// PostPhysicalDeviceProperties @ 145b2c3a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanEXTHostImageCopyExtension::PostPhysicalDeviceProperties
          (FVulkanEXTHostImageCopyExtension *this,FOptionalVulkanDeviceExtensions *param_1)

{
  byte bVar1;
  
  if ((this->field_0x50 == '\0') ||
     ((this->HostImageCopyProperties).identicalMemoryTypeRequirements != 1)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  this->field_0x50 = bVar1;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed & 0xfbffffffffffffff;
  (param_1->field0_0x0).Packed = (param_1->field0_0x0).Packed | (ulonglong)bVar1 << 0x3a;
  if ((this->field_0x50 != '\0') && (3 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_virtual_void___cdecl_FVulkanEXTHostImageCopyExtension::PostPhysicalDeviceProperties(FOptionalVulkanDeviceExtensions&___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    return;
  }
  return;
}

// PreCreateDevice @ 145b2c820

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FVulkanEXTHostImageCopyExtension::PreCreateDevice
          (FVulkanEXTHostImageCopyExtension *this,VkDeviceCreateInfo *param_1)

{
  if (this->field_0x50 != '\0') {
    (this->HostImageCopyFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->HostImageCopyFeatures;
  }
  return;
}

// PrePhysicalDeviceFeatures @ 145b2d1a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FVulkanEXTHostImageCopyExtension::PrePhysicalDeviceFeatures
          (FVulkanEXTHostImageCopyExtension *this,VkPhysicalDeviceFeatures2 *param_1)

{
  (this->HostImageCopyFeatures).sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES;
  *(undefined8 *)&(this->HostImageCopyFeatures).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->HostImageCopyFeatures).pNext + 4) = 0;
  *(undefined4 *)&(this->HostImageCopyFeatures).field_0x14 = 0;
  (this->HostImageCopyFeatures).pNext = param_1->pNext;
  param_1->pNext = &this->HostImageCopyFeatures;
  return;
}

// PrePhysicalDeviceProperties @ 145b2d950

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */

void __thiscall
FVulkanEXTHostImageCopyExtension::PrePhysicalDeviceProperties
          (FVulkanEXTHostImageCopyExtension *this,VkPhysicalDeviceProperties2 *param_1)

{
  if (this->field_0x50 != '\0') {
    (this->HostImageCopyProperties).sType =
         VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES;
    *(undefined8 *)&(this->HostImageCopyProperties).field_0x4 = 0;
    *(undefined8 *)((longlong)&(this->HostImageCopyProperties).pNext + 4) = 0;
    *(undefined8 *)&(this->HostImageCopyProperties).field_0x14 = 0;
    *(undefined8 *)((longlong)&(this->HostImageCopyProperties).pCopySrcLayouts + 4) = 0;
    *(undefined8 *)&(this->HostImageCopyProperties).field_0x24 = 0;
    *(undefined8 *)((longlong)&(this->HostImageCopyProperties).pCopyDstLayouts + 4) = 0;
    (this->HostImageCopyProperties).optimalTilingLayoutUUID[4] = '\0';
    (this->HostImageCopyProperties).optimalTilingLayoutUUID[5] = '\0';
    (this->HostImageCopyProperties).optimalTilingLayoutUUID[6] = '\0';
    (this->HostImageCopyProperties).optimalTilingLayoutUUID[7] = '\0';
    (this->HostImageCopyProperties).optimalTilingLayoutUUID[8] = '\0';
    (this->HostImageCopyProperties).optimalTilingLayoutUUID[9] = '\0';
    (this->HostImageCopyProperties).optimalTilingLayoutUUID[10] = '\0';
    (this->HostImageCopyProperties).optimalTilingLayoutUUID[0xb] = '\0';
    *(undefined8 *)((this->HostImageCopyProperties).optimalTilingLayoutUUID + 0xc) = 0;
    *(undefined4 *)&(this->HostImageCopyProperties).field_0x44 = 0;
    (this->HostImageCopyProperties).pNext = param_1->pNext;
    param_1->pNext = &this->HostImageCopyProperties;
  }
  return;
}

