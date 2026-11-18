// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 40

// SupportsSampling @ 145af4c90

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall FVulkanTexture::SupportsSampling(FVulkanTexture *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  if (((GPixelFormats[*(byte *)(lVar1 + 0x33)].Capabilities & TextureSample) != None) &&
     ((this->ImageUsageFlags & 4) != 0)) {
    return true;
  }
  return false;
}

// GetNumberOfArrayLevels @ 145b1e990

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

uint __thiscall FVulkanTexture::GetNumberOfArrayLevels(FVulkanTexture *this)

{
  VkImageViewType VVar1;
  longlong lVar2;
  
  VVar1 = GetViewType(this);
  switch(VVar1) {
  case VK_IMAGE_VIEW_TYPE_1D:
  case VK_IMAGE_VIEW_TYPE_2D:
  case VK_IMAGE_VIEW_TYPE_3D:
    goto switchD_145b1e9b6_caseD_0;
  case VK_IMAGE_VIEW_TYPE_CUBE:
    return 6;
  default:
    ErrorInvalidViewType(this);
switchD_145b1e9b6_caseD_0:
    return 1;
  case VK_IMAGE_VIEW_TYPE_2D_ARRAY:
    lVar2 = (**(code **)(this->_padding_ + 0x20))(this);
    return (uint)*(ushort *)(lVar2 + 0x2e);
  case VK_IMAGE_VIEW_TYPE_CUBE_ARRAY:
    lVar2 = (**(code **)(this->_padding_ + 0x20))(this);
    return ((uint)*(ushort *)(lVar2 + 0x2e) + (uint)*(ushort *)(lVar2 + 0x2e) * 2) * 2;
  }
}

// GetViewType @ 145b23db0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

VkImageViewType __thiscall FVulkanTexture::GetViewType(FVulkanTexture *this)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  VkImageViewType VVar4;
  longlong lVar5;
  
  lVar5 = (**(code **)(this->_padding_ + 0x20))();
  cVar1 = *(char *)(lVar5 + 0x32);
  if (cVar1 == '\0') {
    return VK_IMAGE_VIEW_TYPE_2D;
  }
  if (cVar1 == '\x01') {
    return VK_IMAGE_VIEW_TYPE_2D_ARRAY;
  }
  if (cVar1 == '\x02') {
    return VK_IMAGE_VIEW_TYPE_3D;
  }
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      return VK_IMAGE_VIEW_TYPE_CUBE_ARRAY;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                       ,0x42,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      VVar4 = (*pcVar2)();
      return VVar4;
    }
    return VK_IMAGE_VIEW_TYPE_MAX_ENUM;
  }
  return VK_IMAGE_VIEW_TYPE_CUBE;
}

// FVulkanTexture @ 145b92b80

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanTexture * __thiscall
FVulkanTexture::FVulkanTexture
          (FVulkanTexture *this,FVulkanDevice *param_1,FRHITextureCreateDesc *param_2,
          TRefCountPtr<FRHITexture> *param_3)

{
  VkFormat *pVVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FVulkanTexture *pFVar7;
  VkFormat VVar8;
  uint uVar9;
  undefined1 auStackY_158 [32];
  FImageCreateInfo local_128;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FRHITexture::FRHITexture((FRHITexture *)this,param_2);
  this->Device = param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  pVVar1 = &this->ViewFormat;
  (this->AliasedTexture).Reference = (FRHITexture *)0x0;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->DefaultView = (FVulkanView *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FVulkanEvictable__;
  uVar9 = 1;
  this->PartialView = (FVulkanView *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FVulkanViewableResource__;
  this->ImageUsageFlags = 0;
  this->StorageFormat = VK_FORMAT_UNDEFINED;
  *pVVar1 = VK_FORMAT_UNDEFINED;
  (this->ExternalImageDeleteCallbackInfo).UserData = (void *)0x0;
  (this->ExternalImageDeleteCallbackInfo).Function = (_func___cdecl_void_void_ptr *)0x0;
  this->Image = (VkImage_T *)0x0;
  this->MemProps = 1;
  *(undefined8 *)(this->AllPlanesTrackedAccess).Elements = 0;
  this->Tiling = VK_IMAGE_TILING_MAX_ENUM;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&this->Allocation);
  this->FullAspectMask = 0;
  this->PartialAspectMask = 0;
  *(undefined8 *)&this->InternalViews = 0;
  *(undefined8 *)&(this->InternalViews).field_0x8 = 0;
  *(undefined8 *)&(this->InternalViews).field_0x20 = 0;
  this->CpuReadbackBuffer = (FVulkanCpuReadbackBuffer *)0x0;
  this->DefaultLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  *(undefined4 *)&(this->InternalViews).field_0x28 = 0;
  *(undefined4 *)&(this->InternalViews).field_0x2c = 0x80;
  *(undefined4 *)&(this->InternalViews).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InternalViews).field_0x34 = 0;
  *(undefined8 *)&(this->InternalViews).field_0x40 = 0;
  *(undefined4 *)&(this->InternalViews).field_0x48 = 0;
  (this->ReservedResourceData).Ptr = (FVulkanReservedResourceData *)0x0;
  this->ImageOwnerType = Aliased;
  VVar8 = GPixelFormats[*(byte *)((longlong)&param_2->_padding_ + 3)].PlatformFormat;
  this->StorageFormat = VVar8;
  if (((*(char *)((longlong)&param_2->_padding_ + 3) != '\0') && (VVar8 == VK_FORMAT_UNDEFINED)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCreateDesc.Format == PF_Unknown || StorageFormat != VK_FORMAT_UNDEFINED"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x990,L"PixelFormat %d, is not supported for images"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FVulkanTexture *)(*pcVar4)();
    return pFVar7;
  }
  bVar2 = *(byte *)((longlong)&param_2->_padding_ + 3);
  if ((param_2->_padding_ & 0x10) == 0) {
    VVar8 = GPixelFormats[bVar2].PlatformFormat;
  }
  else {
    VVar8 = GVulkanSRGBFormat[bVar2];
  }
  *pVVar1 = VVar8;
  cVar3 = *(char *)((longlong)&param_2->_padding_ + 3);
  if (cVar3 == '\v') {
    uVar6 = 6;
  }
  else if ((cVar3 == '\f') || (cVar3 == '\x14')) {
    uVar6 = 2;
  }
  else if (cVar3 == ',') {
    uVar6 = 4;
  }
  else {
    uVar6 = 1;
  }
  this->FullAspectMask = uVar6;
  cVar3 = *(char *)((longlong)&param_2->_padding_ + 3);
  if (((cVar3 == '\v') || (cVar3 == '\f')) || (cVar3 == '\x14')) {
    uVar9 = 2;
  }
  else if (cVar3 == ',') {
    uVar9 = 4;
  }
  this->PartialAspectMask = uVar9;
  if ((((uint)param_2->_padding_ >> 0x12 & 1) != 0) && (this->Tiling == VK_IMAGE_TILING_MAX_ENUM)) {
    this->Tiling = VK_IMAGE_TILING_OPTIMAL;
  }
  local_128.FormatsUsed.AllocatorInstance.SecondaryData = (ForElementType<VkFormat>)0x0;
  local_128.FormatsUsed.ArrayNum = 0;
  local_128.FormatsUsed.ArrayMax = 2;
  GenerateImageCreateInfo
            (&local_128,param_1,(FRHITextureDesc *)param_2,&this->StorageFormat,pVVar1,false);
  this->ImageUsageFlags = local_128.ImageCreateInfo.usage;
  if (local_128.FormatsUsed.AllocatorInstance.SecondaryData != (ForElementType<VkFormat>)0x0) {
    FMemory::Free((void *)local_128.FormatsUsed.AllocatorInstance.SecondaryData);
  }
  AliasTextureResources(this,param_3);
  return this;
}

// FVulkanTexture @ 145b92e50

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVulkanTexture * __thiscall
FVulkanTexture::FVulkanTexture
          (FVulkanTexture *this,FVulkanDevice *param_1,FRHITextureCreateDesc *param_2,
          VkImage_T *param_3,FVulkanRHIExternalImageDeleteCallbackInfo *param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  code *pcVar4;
  _func___cdecl_void_void_ptr *p_Var5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  VkImageLayout VVar9;
  FVulkanTexture *pFVar10;
  longlong lVar11;
  VkFormat VVar12;
  bool bVar13;
  ForAnyElementType FVar14;
  FString local_28;
  
  FRHITexture::FRHITexture((FRHITexture *)this,param_2);
  this->Device = param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  (this->AliasedTexture).Reference = (FRHITexture *)0x0;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanEvictable__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanViewableResource__;
  this->Image = param_3;
  uVar8 = 1;
  this->DefaultView = (FVulkanView *)0x0;
  this->PartialView = (FVulkanView *)0x0;
  this->ImageUsageFlags = 0;
  this->StorageFormat = VK_FORMAT_UNDEFINED;
  this->ViewFormat = VK_FORMAT_UNDEFINED;
  this->MemProps = 1;
  p_Var5 = param_4->Function;
  (this->ExternalImageDeleteCallbackInfo).UserData = param_4->UserData;
  (this->ExternalImageDeleteCallbackInfo).Function = p_Var5;
  *(undefined8 *)(this->AllPlanesTrackedAccess).Elements = 0;
  this->Tiling = VK_IMAGE_TILING_MAX_ENUM;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&this->Allocation);
  this->FullAspectMask = 0;
  this->PartialAspectMask = 0;
  this->DefaultLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  *(undefined8 *)&this->InternalViews = 0;
  *(undefined8 *)&(this->InternalViews).field_0x8 = 0;
  *(undefined8 *)&(this->InternalViews).field_0x20 = 0;
  this->CpuReadbackBuffer = (FVulkanCpuReadbackBuffer *)0x0;
  *(undefined4 *)&(this->InternalViews).field_0x28 = 0;
  *(undefined4 *)&(this->InternalViews).field_0x2c = 0x80;
  *(undefined4 *)&(this->InternalViews).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InternalViews).field_0x34 = 0;
  *(undefined8 *)&(this->InternalViews).field_0x40 = 0;
  *(undefined4 *)&(this->InternalViews).field_0x48 = 0;
  (this->ReservedResourceData).Ptr = (FVulkanReservedResourceData *)0x0;
  this->ImageOwnerType = ExternalOwner;
  VVar12 = GPixelFormats[*(byte *)((longlong)&param_2->_padding_ + 3)].PlatformFormat;
  this->StorageFormat = VVar12;
  if (((*(char *)((longlong)&param_2->_padding_ + 3) != '\0') && (VVar12 == VK_FORMAT_UNDEFINED)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCreateDesc.Format == PF_Unknown || StorageFormat != VK_FORMAT_UNDEFINED"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x809,L"PixelFormat %d, is not supported for images"), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FVulkanTexture *)(*pcVar4)();
    return pFVar10;
  }
  bVar1 = *(byte *)((longlong)&param_2->_padding_ + 3);
  if ((param_2->_padding_ & 0x10) == 0) {
    VVar12 = GPixelFormats[bVar1].PlatformFormat;
  }
  else {
    VVar12 = GVulkanSRGBFormat[bVar1];
  }
  this->ViewFormat = VVar12;
  cVar2 = *(char *)((longlong)&param_2->_padding_ + 3);
  if (cVar2 == '\v') {
    uVar7 = 6;
  }
  else if ((cVar2 == '\f') || (cVar2 == '\x14')) {
    uVar7 = 2;
  }
  else if (cVar2 == ',') {
    uVar7 = 4;
  }
  else {
    uVar7 = 1;
  }
  this->FullAspectMask = uVar7;
  cVar2 = *(char *)((longlong)&param_2->_padding_ + 3);
  if (((cVar2 == '\v') || (cVar2 == '\f')) || (cVar2 == '\x14')) {
    uVar8 = 2;
  }
  else if (cVar2 == ',') {
    uVar8 = 4;
  }
  this->PartialAspectMask = uVar8;
  if ((((uint)param_2->_padding_ >> 0x12 & 1) != 0) && (this->Tiling == VK_IMAGE_TILING_MAX_ENUM)) {
    this->Tiling = VK_IMAGE_TILING_OPTIMAL;
  }
  if (this->Image != (VkImage_T *)0x0) {
    uVar8 = GetUsageFlagsFromCreateFlags(param_1,(ETextureCreateFlags *)param_2);
    this->ImageUsageFlags = uVar8;
    ::FString::PrintfImpl(&local_28,L"%s:(FVulkanTexture*)0x%p");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar14.Data = local_28.Data.AllocatorInstance.Data;
    }
    FVulkanDevice::VulkanSetObjectName
              (param_1,VK_OBJECT_TYPE_IMAGE,(ulong64)this->Image,(wchar_t *)FVar14.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    uVar3 = param_2->_padding_;
    lVar11 = (**(code **)(this->_padding_ + 0x20))(this);
    if (((GPixelFormats[*(byte *)(lVar11 + 0x33)].Capabilities & TextureSample) == None) ||
       ((this->ImageUsageFlags & 4) == 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (((uVar3 & 5) == 0) || ((this->FullAspectMask & 6) == 0)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    VVar9 = GetInitialLayoutFromRHIAccess(param_2->InitialState,bVar13,bVar6);
    this->DefaultLayout = VVar9;
    if (((uint)param_2->_padding_ >> 0x12 & 1) == 0) {
      SetInitialImageState
                (this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 VK_IMAGE_LAYOUT_UNDEFINED,(uVar3 & 5) != 0,
                 (FClearValueBinding *)&param_2->_padding_,false);
    }
  }
  InitViews(this,0,(VkSamplerYcbcrConversion_T *)0x0);
  return this;
}

// FVulkanTexture @ 145b931c0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanTexture * __thiscall
FVulkanTexture::FVulkanTexture
          (FVulkanTexture *this,FVulkanDevice *param_1,FRHITextureCreateDesc *param_2,
          FRHITransientHeapAllocation *param_3)

{
  TUniquePtr<FVulkanReservedResourceData,TDefaultDelete<FVulkanReservedResourceData>_> *pTVar1;
  char cVar2;
  VkFormat VVar3;
  FVulkanDevice *pFVar4;
  FRHITransientHeap *pFVar5;
  code *pcVar6;
  ulong64 uVar7;
  undefined4 uVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  bool bVar11;
  VkResult VVar12;
  VkImageLayout VVar13;
  VkImageViewType VVar14;
  FVulkanTexture *pFVar15;
  FVulkanCpuReadbackBuffer *pFVar16;
  VkBuffer_T *pVVar17;
  void *_Dst;
  FVulkanReservedResourceData *pFVar18;
  longlong lVar19;
  longlong *plVar20;
  FVulkanTextureViewDesc *pFVar21;
  FVulkanReservedResourceData *pFVar22;
  FVulkanView *pFVar23;
  FVulkanReservedResourceData *this_00;
  VkFormat VVar24;
  bool bVar25;
  byte bVar26;
  uint uVar27;
  VkDescriptorType VVar28;
  ulonglong uVar29;
  ForAnyElementType FVar30;
  EVulkanAllocationMetaType EVar31;
  undefined1 auStackY_288 [32];
  undefined1 local_237 [7];
  FVulkanDevice *local_230;
  FLLMScope local_228 [2];
  ulonglong local_220;
  FVulkanAllocation local_218;
  ulonglong local_1f8;
  FMemScope local_1f0;
  FString local_1e8;
  FVulkanTextureViewDesc local_1d8;
  FVulkanTextureViewDesc local_1a0;
  undefined8 local_168;
  FVulkanTextureViewDesc local_160;
  FImageCreateInfo local_128;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_230 = param_1;
  FRHITexture::FRHITexture((FRHITexture *)this,param_2);
  this_00 = (FVulkanReservedResourceData *)0x0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->DefaultView = (FVulkanView *)0x0;
  this->PartialView = (FVulkanView *)0x0;
  (this->AliasedTexture).Reference = (FRHITexture *)0x0;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->Device = param_1;
  this->Image = (VkImage_T *)0x0;
  this->ImageUsageFlags = 0;
  this->StorageFormat = VK_FORMAT_UNDEFINED;
  this->ViewFormat = VK_FORMAT_UNDEFINED;
  this->MemProps = 1;
  this->_padding_ = (longlong)&_vftable__for__FVulkanEvictable__;
  (this->ExternalImageDeleteCallbackInfo).UserData = (void *)0x0;
  (this->ExternalImageDeleteCallbackInfo).Function = (_func___cdecl_void_void_ptr *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FVulkanViewableResource__;
  *(undefined8 *)(this->AllPlanesTrackedAccess).Elements = 0;
  this->Tiling = VK_IMAGE_TILING_MAX_ENUM;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&this->Allocation);
  this->FullAspectMask = 0;
  this->PartialAspectMask = 0;
  this->CpuReadbackBuffer = (FVulkanCpuReadbackBuffer *)0x0;
  this->DefaultLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  *(undefined8 *)&this->InternalViews = 0;
  *(undefined8 *)&(this->InternalViews).field_0x8 = 0;
  *(undefined8 *)&(this->InternalViews).field_0x20 = 0;
  *(undefined4 *)&(this->InternalViews).field_0x28 = 0;
  *(undefined4 *)&(this->InternalViews).field_0x2c = 0x80;
  *(undefined4 *)&(this->InternalViews).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InternalViews).field_0x34 = 0;
  *(undefined8 *)&(this->InternalViews).field_0x40 = 0;
  *(undefined4 *)&(this->InternalViews).field_0x48 = 0;
  (this->ReservedResourceData).Ptr = (FVulkanReservedResourceData *)0x0;
  this->ImageOwnerType = LocalOwner;
  if (((uint)param_2->_padding_ >> 0x13 & 1) != 0) {
    if ((*(char *)((longlong)&param_2->_padding_ + 1) != '\x01') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCreateDesc.NumSamples == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x760,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FVulkanTexture *)(*pcVar6)();
      return pFVar15;
    }
    if ((*(short *)((longlong)&param_2->_padding_ + 6) != 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCreateDesc.ArraySize == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x761,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FVulkanTexture *)(*pcVar6)();
      return pFVar15;
    }
    pFVar16 = ::operator_new(0x48);
    this->CpuReadbackBuffer = pFVar16;
    pFVar22 = this_00;
    if ((char)param_2->_padding_ != '\0') {
      do {
        local_230 = (FVulkanDevice *)0x0;
        GetMipSize(this,(uint)pFVar22,(ulong64 *)&local_230);
        uVar27 = (uint)pFVar22 + 1;
        this->CpuReadbackBuffer->MipOffsets[(longlong)pFVar22] = (uint)this_00;
        this_00 = (FVulkanReservedResourceData *)
                  ((longlong)&(this_00->Allocations).AllocatorInstance.Data +
                  (longlong)(local_230->GlobalSamplers).Elements);
        pFVar22 = (FVulkanReservedResourceData *)(ulonglong)uVar27;
      } while (uVar27 < (byte)param_2->_padding_);
    }
    pVVar17 = FVulkanDevice::CreateBuffer(param_1,(ulong64)this_00,2,0);
    this->CpuReadbackBuffer->Buffer = pVVar17;
    VulkanRHI::FMemoryManager::AllocateBufferMemory
              (&param_1->MemoryManager,&this->Allocation,this->CpuReadbackBuffer->Buffer,
               AutoBind|HostCached,param_2->DebugName,0x10);
    _Dst = VulkanRHI::FVulkanAllocation::GetMappedPointer(&this->Allocation,this->Device);
    memset(_Dst,0,(size_t)this_00);
    this->ImageOwnerType = None;
    VVar3 = GPixelFormats[*(byte *)((longlong)&param_2->_padding_ + 3)].PlatformFormat;
    this->StorageFormat = VVar3;
    this->ViewFormat = VVar3;
    (*VulkanDynamicAPI::vkGetBufferMemoryRequirements)
              (param_1->Device,this->CpuReadbackBuffer->Buffer,&this->MemoryRequirements);
    return this;
  }
  local_128.FormatsUsed.AllocatorInstance.SecondaryData = (ForElementType<VkFormat>)0x0;
  local_128.FormatsUsed.ArrayNum = 0;
  local_128.FormatsUsed.ArrayMax = 2;
  GenerateImageCreateInfo
            (&local_128,param_1,(FRHITextureDesc *)param_2,&this->StorageFormat,&this->ViewFormat,
             false);
  VVar12 = (*VulkanDynamicAPI::vkCreateImage)
                     (param_1->Device,&local_128.ImageCreateInfo,&VulkanRHI::GAllocationCallbacks,
                      &this->Image);
  if (VVar12 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar12,
               "VulkanRHI::vkCreateImage(InDevice.GetHandle(), &ImageCreateInfo.ImageCreateInfo, VULKAN_CPU_ALLOCATOR, &Image)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
               ,0x783);
  }
  (*VulkanDynamicAPI::vkGetImageMemoryRequirements)
            (param_1->Device,this->Image,&this->MemoryRequirements);
  ::FString::PrintfImpl(&local_1e8,L"%s:(FVulkanTexture*)0x%p");
  FVar30.Data = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    FVar30.Data = local_1e8.Data.AllocatorInstance.Data;
  }
  FVulkanDevice::VulkanSetObjectName
            (param_1,VK_OBJECT_TYPE_IMAGE,(ulong64)this->Image,(wchar_t *)FVar30.Data);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  cVar2 = *(char *)((longlong)&param_2->_padding_ + 3);
  if (cVar2 == '\v') {
    uVar27 = 6;
  }
  else if ((cVar2 == '\f') || (cVar2 == '\x14')) {
    uVar27 = 2;
  }
  else if (cVar2 == ',') {
    uVar27 = 4;
  }
  else {
    uVar27 = 1;
  }
  this->FullAspectMask = uVar27;
  cVar2 = *(char *)((longlong)&param_2->_padding_ + 3);
  if (((cVar2 == '\v') || (cVar2 == '\f')) || (cVar2 == '\x14')) {
    uVar27 = 2;
  }
  else if (cVar2 == ',') {
    uVar27 = 4;
  }
  else {
    uVar27 = 1;
  }
  this->PartialAspectMask = uVar27;
  if (local_128.ImageCreateInfo.tiling != VK_IMAGE_TILING_OPTIMAL) {
    this->MemProps = this->MemProps | 2;
  }
  uVar29 = param_2->_padding_;
  local_220 = (ulonglong)((uint)uVar29 & 7);
  local_1f8 = (ulonglong)((uint)uVar29 & 0x20000);
  bVar26 = (byte)(uVar29 >> 0x22);
  if ((param_3 == (FRHITransientHeapAllocation *)0x0) || (bVar10 = true, param_3->Size == 0)) {
    bVar10 = false;
  }
  if (((uVar29 >> 0xc & 1) == 0) || ((param_1->DeviceMemoryManager).bSupportsMemoryless == false)) {
LAB_145b93660:
    uVar27 = 1;
    bVar25 = false;
  }
  else {
    bVar25 = true;
    if (local_220 == 0) {
      local_237[0] = 0;
      bVar11 = `FVulkanTexture::FVulkanTexture'::__l34::<lambda_1>::operator()(local_237);
      if (!bVar11) goto LAB_145b93660;
    }
    uVar27 = 0x11;
  }
  uVar29 = local_220;
  if ((param_2->_padding_ & 0x2000000000U) != 0) {
    if ((bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsTransientResource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x7ab,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FVulkanTexture *)(*pcVar6)();
      return pFVar15;
    }
    pFVar18 = ::operator_new(0x38);
    pFVar22 = this_00;
    if (pFVar18 != (FVulkanReservedResourceData *)0x0) {
      (pFVar18->MemoryRequirements).size = 0;
      ((TVariant<FVulkanView::FInvalidatedState,FVulkanView::FTypedBufferView,FVulkanView::FTextureView,FVulkanView::FStructuredBufferView,FVulkanView::FAccelerationStructureView>
        *)&(pFVar18->MemoryRequirements).alignment)->_padding_ = 0;
      *(longlong *)&(pFVar18->MemoryRequirements).memoryTypeBits = 0;
      (pFVar18->Allocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar18->Allocations).ArrayNum = 0;
      *(ERHIDescriptorType *)&(pFVar18->Allocations).ArrayMax = BufferSRV;
      *(undefined3 *)((longlong)&(pFVar18->Allocations).ArrayMax + 1) = 0;
      pFVar18->LastBlockSize = 0;
      pFVar18->BlockCount = 0;
      pFVar18->NumCommittedTiles = 0;
      pFVar22 = pFVar18;
    }
    pTVar1 = &this->ReservedResourceData;
    if (pTVar1 == (TUniquePtr<FVulkanReservedResourceData,TDefaultDelete<FVulkanReservedResourceData>_>
                   *)&local_168) {
      if (pFVar22 != (FVulkanReservedResourceData *)0x0) {
        DestructItems<FVulkanReservedResourceData::FSparseAllocation,int>
                  ((FSparseAllocation *)(pFVar22->Allocations).AllocatorInstance.Data,
                   ((FRHIDescriptorHandle *)&(pFVar22->Allocations).ArrayNum)->Index);
        pFVar4 = (FVulkanDevice *)(pFVar22->Allocations).AllocatorInstance.Data;
        pFVar18 = pFVar22;
        if (pFVar4 != (FVulkanDevice *)0x0) {
          FMemory::Free(pFVar4);
        }
        goto LAB_145b93733;
      }
    }
    else {
      pFVar18 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar22;
      if (pFVar18 != (FVulkanReservedResourceData *)0x0) {
        DestructItems<FVulkanReservedResourceData::FSparseAllocation,int>
                  ((FSparseAllocation *)(pFVar18->Allocations).AllocatorInstance.Data,
                   ((FRHIDescriptorHandle *)&(pFVar18->Allocations).ArrayNum)->Index);
        pFVar4 = (FVulkanDevice *)(pFVar18->Allocations).AllocatorInstance.Data;
        if (pFVar4 != (FVulkanDevice *)0x0) {
          FMemory::Free(pFVar4);
        }
LAB_145b93733:
        ::operator_delete(pFVar18,0x38);
      }
    }
    pFVar22 = (this->ReservedResourceData).Ptr;
    uVar7 = (this->MemoryRequirements).alignment;
    uVar27 = (this->MemoryRequirements).memoryTypeBits;
    uVar8 = *(undefined4 *)&(this->MemoryRequirements).field_0x14;
    (pFVar22->MemoryRequirements).size = (this->MemoryRequirements).size;
    (pFVar22->MemoryRequirements).alignment = uVar7;
    (pFVar22->MemoryRequirements).memoryTypeBits = uVar27;
    pTVar9 = CVarVulkanSparseImageAllocSizeMB.Ref;
    *(undefined4 *)&(pFVar22->MemoryRequirements).field_0x14 = uVar8;
    bVar10 = IsInParallelGameThread();
    pFVar22 = this_00;
    if ((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) {
      pFVar22 = (FVulkanReservedResourceData *)&DAT_00000004;
    }
    uVar29 = (longlong)
             *(int *)((longlong)&(pFVar22->Allocations).AllocatorInstance.Data +
                     (longlong)pTVar9->ShadowedValue) << 0x14;
    ((this->ReservedResourceData).Ptr)->LastBlockSize =
         (this->MemoryRequirements).size % uVar29 + 0xffff & 0xffffffffffff0000;
    ((this->ReservedResourceData).Ptr)->BlockCount =
         (uint)((this->MemoryRequirements).size / uVar29);
    pFVar22 = (this->ReservedResourceData).Ptr;
    if (pFVar22->LastBlockSize == 0) {
      pFVar22->LastBlockSize = uVar29;
    }
    else {
      pFVar22->BlockCount = pFVar22->BlockCount + 1;
    }
    if (uVar29 % (((this->ReservedResourceData).Ptr)->MemoryRequirements).alignment != 0) {
      bVar10 = IsInParallelGameThread();
      if (!bVar10) {
        IsInGameThread();
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SparseBlockSize % ReservedResourceData->MemoryRequirements.alignment == 0"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x7bd,
                          L"The value of r.Vulkan.SparseImageAllocSizeMB (%dMB) is not compatible with this resource\'s tile size requirements (%d)."
                         );
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        pFVar15 = (FVulkanTexture *)(*pcVar6)();
        return pFVar15;
      }
    }
    pFVar22 = (this->ReservedResourceData).Ptr;
    if ((pFVar22->LastBlockSize % (pFVar22->MemoryRequirements).alignment != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ReservedResourceData->LastBlockSize % ReservedResourceData->MemoryRequirements.alignment == 0"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x7c0,
                            L"The value of GRHIGlobals.ReservedResources.TileSizeInBytes (%d) is not compatible with this resource\'s tile size requirements (%d)."
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FVulkanTexture *)(*pcVar6)();
      return pFVar15;
    }
    UE::RHICore::UpdateGlobalTextureStats
              (this->_padding_,*(ETextureDimension *)((longlong)&this->_padding_ + 2),
               (this->MemoryRequirements).size,false,true);
    uVar29 = local_220;
    goto LAB_145b93b77;
  }
  if (bVar10) {
    if ((bVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bMemoryless",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x7c8,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FVulkanTexture *)(*pcVar6)();
      return pFVar15;
    }
    if ((param_3->Offset % (this->MemoryRequirements).alignment != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InTransientHeapAllocation->Offset % MemoryRequirements.alignment == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x7c9,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FVulkanTexture *)(*pcVar6)();
      return pFVar15;
    }
    if ((param_3->Size < (this->MemoryRequirements).size) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InTransientHeapAllocation->Size >= MemoryRequirements.size",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x7ca,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FVulkanTexture *)(*pcVar6)();
      return pFVar15;
    }
    pFVar5 = param_3->Heap;
    if ((pFVar5 == (FRHITransientHeap *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Heap",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTransientResourceAllocator.cpp"
                            ,0x37,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FVulkanTexture *)(*pcVar6)();
      return pFVar15;
    }
    VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_218);
    VulkanRHI::FVulkanAllocation::Reference
              (&local_218,(FVulkanAllocation *)&pFVar5[1].Allocator.AllocationCount);
    local_218.VulkanHandle._0_4_ = pFVar5[1].Initializer.TextureCacheSize;
    local_218.VulkanHandle._4_4_ = pFVar5[1].Initializer.BufferCacheSize;
    local_218.Offset = local_218.Offset + (int)param_3->Offset;
    local_218.HandleId = (uint)pFVar5[1].Allocator.GpuVirtualAddress;
    local_218.bTransient = '\x01';
    local_218.Size = (uint)param_3->Size;
    if ((*(uint *)&pFVar5[1].Allocator.field_0x2c < local_218.Size + local_218.Offset) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(TransientAlloc.Offset + TransientAlloc.Size) <= Heap->InternalAllocation.Size"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTransientResourceAllocator.cpp"
                            ,0x40,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FVulkanTexture *)(*pcVar6)();
      return pFVar15;
    }
    (this->Allocation).VulkanHandle = local_218.VulkanHandle;
    (this->Allocation).HandleId = local_218.HandleId;
    (this->Allocation).Size = local_218.Size;
    (this->Allocation).Offset = local_218.Offset;
    (this->Allocation).AllocationIndex = local_218.AllocationIndex;
    (this->Allocation).AllocatorIndex = local_218.AllocatorIndex;
    (this->Allocation).MetaType = local_218.MetaType;
    *(int5 *)&(this->Allocation).field_0x1b =
         (int5)(CONCAT44(local_218._28_4_,local_218._24_4_) >> 0x18);
    VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_218);
    uVar29 = local_220;
  }
  else {
    if ((local_220 == 0) && (local_1f8 == 0)) {
      EVar31 = EVulkanAllocationMetaImageOther;
LAB_145b93a39:
      if (0xbfffff < (this->MemoryRequirements).size) goto LAB_145b93a4a;
LAB_145b93ad3:
      bVar10 = VulkanRHI::FMemoryManager::AllocateImageMemory
                         (&local_230->MemoryManager,&this->Allocation,
                          (FVulkanEvictable *)&this->_padding_,&this->MemoryRequirements,uVar27,
                          EVar31,(bool)(bVar26 & 1),
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x7de);
      if ((!bVar10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                              ,0x7e0,L""), bVar10)) {
code_r0x000145b93b3a:
        pcVar6 = (code *)swi(3);
        pFVar15 = (FVulkanTexture *)(*pcVar6)();
        return pFVar15;
      }
    }
    else {
      EVar31 = EVulkanAllocationMetaImageRenderTarget;
      if (local_220 == 0) goto LAB_145b93a39;
LAB_145b93a4a:
      if ((bVar25) || (GVulkanEnableDedicatedImageMemory == 0)) goto LAB_145b93ad3;
      bVar10 = VulkanRHI::FMemoryManager::AllocateDedicatedImageMemory
                         (&local_230->MemoryManager,&this->Allocation,
                          (FVulkanEvictable *)&this->_padding_,this->Image,&this->MemoryRequirements
                          ,uVar27,EVar31,(bool)(bVar26 & 1),
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x7d6);
      if ((!bVar10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                              ,0x7d8,L""), bVar10)) goto code_r0x000145b93b3a;
    }
    UE::RHICore::UpdateGlobalTextureStats
              (this->_padding_,*(ETextureDimension *)((longlong)&this->_padding_ + 2),
               (ulonglong)(this->Allocation).Size,false,true);
  }
  VulkanRHI::FVulkanAllocation::BindImage(&this->Allocation,this->Device,this->Image);
LAB_145b93b77:
  this->Tiling = local_128.ImageCreateInfo.tiling;
  if ((VK_IMAGE_TILING_LINEAR < local_128.ImageCreateInfo.tiling) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Tiling == VK_IMAGE_TILING_LINEAR || Tiling == VK_IMAGE_TILING_OPTIMAL",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x7eb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar15 = (FVulkanTexture *)(*pcVar6)();
    return pFVar15;
  }
  this->ImageUsageFlags = local_128.ImageCreateInfo.usage;
  lVar19 = (**(code **)(this->_padding_ + 0x20))(this);
  if (((GPixelFormats[*(byte *)(lVar19 + 0x33)].Capabilities & TextureSample) == None) ||
     ((this->ImageUsageFlags & 4) == 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((uVar29 == 0) || ((this->FullAspectMask & 6) == 0)) {
    bVar25 = false;
  }
  else {
    bVar25 = true;
  }
  VVar13 = GetInitialLayoutFromRHIAccess(param_2->InitialState,bVar25,bVar10);
  this->DefaultLayout = VVar13;
  FLLMScope::FLLMScope(local_228,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(&local_1f0,VideoRecording|ThreadStackPlatform,true);
  pcVar6 = *(code **)(this->_padding_ + 0x20);
  if (pcVar6 == FRHITexture::GetDesc) {
    plVar20 = &this->_padding_;
  }
  else {
    plVar20 = (longlong *)(*pcVar6)(this);
  }
  UETextureDimensionToVkImageViewType(*(ETextureDimension *)((longlong)plVar20 + 0x32));
  lVar19 = param_2->_padding_;
  if (this->ViewFormat == VK_FORMAT_UNDEFINED) {
    VVar3 = GPixelFormats[*(byte *)((longlong)&param_2->_padding_ + 3)].PlatformFormat;
    this->StorageFormat = VVar3;
    bVar26 = *(byte *)((longlong)&param_2->_padding_ + 3);
    if ((lVar19 & 0x10) == 0) {
      VVar24 = GPixelFormats[bVar26].PlatformFormat;
    }
    else {
      VVar24 = GVulkanSRGBFormat[bVar26];
    }
    this->ViewFormat = VVar24;
    if ((VVar3 == VK_FORMAT_UNDEFINED) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StorageFormat != VK_FORMAT_UNDEFINED",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x7f7,L"Pixel Format %d not defined!"), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar15 = (FVulkanTexture *)(*pcVar6)();
      return pFVar15;
    }
  }
  uVar27 = this->ImageUsageFlags;
  if (this->Image != (VkImage_T *)0x0) {
    pcVar6 = *(code **)(this->_padding_ + 0x20);
    if (pcVar6 == FRHITexture::GetDesc) {
      plVar20 = &this->_padding_;
    }
    else {
      plVar20 = (longlong *)(*pcVar6)(this);
    }
    VVar14 = UETextureDimensionToVkImageViewType(*(ETextureDimension *)((longlong)plVar20 + 0x32));
    if (VVar14 != VK_IMAGE_VIEW_TYPE_MAX_ENUM) {
      pFVar21 = CreateTextureViewDesc(&local_160,this,uVar27,(VkSamplerYcbcrConversion_T *)0x0);
      local_1d8.ViewType = pFVar21->ViewType;
      local_1d8.AspectFlags = pFVar21->AspectFlags;
      local_1d8.UEFormat = pFVar21->UEFormat;
      local_1d8._9_3_ = *(undefined3 *)&pFVar21->field_0x9;
      local_1d8.Format = pFVar21->Format;
      local_1d8.FirstMip = pFVar21->FirstMip;
      local_1d8.NumMips = pFVar21->NumMips;
      local_1d8.ArraySliceIndex = pFVar21->ArraySliceIndex;
      local_1d8.NumArraySlices = pFVar21->NumArraySlices;
      local_1d8.ImageUsageFlags = pFVar21->ImageUsageFlags;
      local_1d8._36_4_ = *(undefined4 *)&pFVar21->field_0x24;
      local_1d8.SamplerYcbcrConversion._0_4_ = *(undefined4 *)&pFVar21->SamplerYcbcrConversion;
      local_1d8.SamplerYcbcrConversion._4_4_ =
           *(undefined4 *)((longlong)&pFVar21->SamplerYcbcrConversion + 4);
      local_1d8._48_8_ = *(undefined8 *)&pFVar21->bUseIdentitySwizzle;
      lVar19 = (**(code **)(this->_padding_ + 0x20))(this);
      if (((GPixelFormats[*(byte *)(lVar19 + 0x33)].Capabilities & TextureSample) == None) ||
         (VVar28 = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, (this->ImageUsageFlags & 4) == 0)) {
        VVar28 = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
      }
      if (this->DefaultView == (FVulkanView *)0x0) {
        pFVar23 = ::operator_new(0x38);
        pFVar22 = this_00;
        if (pFVar23 != (FVulkanView *)0x0) {
          pFVar22 = (FVulkanReservedResourceData *)
                    FVulkanView::FVulkanView(pFVar23,this->Device,VVar28);
        }
        this->DefaultView = (FVulkanView *)pFVar22;
      }
      else {
        FVulkanView::Invalidate(this->DefaultView);
        pFVar22 = (FVulkanReservedResourceData *)this->DefaultView;
      }
      FVulkanView::CreateTextureView((FVulkanView *)pFVar22,this->Image,&local_1d8);
      if (this->FullAspectMask == this->PartialAspectMask) {
        this->PartialView = this->DefaultView;
      }
      else {
        local_1a0.UEFormat = local_1d8.UEFormat;
        local_1a0._9_3_ = local_1d8._9_3_;
        local_1a0.Format = local_1d8.Format;
        local_1a0.ViewType = local_1d8.ViewType;
        local_1a0.AspectFlags = this->PartialAspectMask;
        local_1a0._36_4_ = local_1d8._36_4_;
        local_1a0.ImageUsageFlags = local_1d8.ImageUsageFlags;
        local_1a0.FirstMip = local_1d8.FirstMip;
        local_1a0.NumMips = local_1d8.NumMips;
        local_1a0.ArraySliceIndex = local_1d8.ArraySliceIndex;
        local_1a0.NumArraySlices = local_1d8.NumArraySlices;
        local_1a0._48_8_ = local_1d8._48_8_ & 0xffffffffffffff00;
        local_1a0.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
        if (this->PartialView == (FVulkanView *)0x0) {
          pFVar23 = ::operator_new(0x38);
          if (pFVar23 != (FVulkanView *)0x0) {
            this_00 = (FVulkanReservedResourceData *)
                      FVulkanView::FVulkanView(pFVar23,this->Device,VVar28);
          }
          this->PartialView = (FVulkanView *)this_00;
        }
        else {
          FVulkanView::Invalidate(this->PartialView);
          this_00 = (FVulkanReservedResourceData *)this->PartialView;
        }
        FVulkanView::CreateTextureView((FVulkanView *)this_00,this->Image,&local_1a0);
      }
    }
  }
  FMemScope::~FMemScope(&local_1f0);
  FLLMScope::~FLLMScope(local_228);
  if (local_128.FormatsUsed.AllocatorInstance.SecondaryData != (ForElementType<VkFormat>)0x0) {
    FMemory::Free((void *)local_128.FormatsUsed.AllocatorInstance.SecondaryData);
  }
  return this;
}

// ~FVulkanTexture @ 145b96580

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FVulkanTexture::~FVulkanTexture(FVulkanTexture *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FVulkanView *pFVar4;
  FVulkanReservedResourceData *pFVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  FRHITexture *this_00;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanEvictable__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanViewableResource__;
  if (this->ImageOwnerType != Aliased) {
    pFVar4 = this->PartialView;
    if ((pFVar4 != this->DefaultView) && (pFVar4 != (FVulkanView *)0x0)) {
      FVulkanView::~FVulkanView(pFVar4);
      ::operator_delete(pFVar4,0x38);
    }
    pFVar4 = this->DefaultView;
    if (pFVar4 != (FVulkanView *)0x0) {
      FVulkanView::~FVulkanView(pFVar4);
      ::operator_delete(pFVar4,0x38);
    }
    iVar14 = 0;
    iVar3 = *(int *)&(this->InternalViews).field_0x28;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->InternalViews).field_0x10;
    iVar16 = 0;
    uVar10 = 1;
    iVar11 = 0;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&(this->InternalViews).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)TStack_60.Array;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar11 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145b966bf;
        uVar13 = puVar17[lVar12 + 1];
      }
      uVar10 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res10 = (int)lVar12;
      iVar11 = iVar16 + -1 + local_res10;
      if (iVar3 < iVar11) {
        iVar11 = iVar3;
      }
    }
LAB_145b966bf:
    uVar13 = *(uint *)&(this->InternalViews).field_0x28;
    puVar1 = &(this->InternalViews).field_0x10;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iVar11;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uVar10,iVar14);
    iVar14 = (int)uVar13 >> 5;
    TStack_60._28_4_ = iVar11;
    TStack_60.BaseBitIndex = iVar16;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->InternalViews).field_0x8 -
                         *(int *)&(this->InternalViews).field_0x34);
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar10 = *(uint *)&(this->InternalViews).field_0x28;
    if (uVar13 != uVar10) {
      puVar15 = *(undefined1 **)&(this->InternalViews).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_145b967d0;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res18 = (int)lVar12;
      uVar13 = local_res18 + -1 + uVar18;
      if ((int)uVar10 < (int)uVar13) {
        uVar13 = uVar10;
      }
    }
LAB_145b967d0:
    while( true ) {
      if (*(int *)&(this->InternalViews).field_0x8 - *(int *)&(this->InternalViews).field_0x34 !=
          (int)uStack_40) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanView_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar13) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pFVar4 = *(FVulkanView **)
                (*(longlong *)&(this->InternalViews).field_0x0 + 8 +
                (longlong)TStack_60.CurrentBitIndex * 0x18);
      if (pFVar4 != (FVulkanView *)0x0) {
        FVulkanView::~FVulkanView(pFVar4);
        ::operator_delete(pFVar4,0x38);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    TSet<TTuple<unsigned_int,FVulkanView_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanView_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,FVulkanView_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanView_*,0>,FDefaultSetAllocator>
             *)&this->InternalViews);
    DestroySurface(this);
  }
  pFVar5 = (this->ReservedResourceData).Ptr;
  if (pFVar5 != (FVulkanReservedResourceData *)0x0) {
    DestructItems<FVulkanReservedResourceData::FSparseAllocation,int>
              ((FSparseAllocation *)(pFVar5->Allocations).AllocatorInstance.Data,
               (pFVar5->Allocations).ArrayNum);
    pFVar6 = (pFVar5->Allocations).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    ::operator_delete(pFVar5,0x38);
  }
  *(undefined4 *)&(this->InternalViews).field_0x48 = 0;
  pvVar7 = *(void **)&(this->InternalViews).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanView_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanView_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanView_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InternalViews);
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&this->Allocation);
  this_00 = (this->AliasedTexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7FVulkanViewableResource__6B_;
  if ((this->_padding_ != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasLinkedViews()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                         ,0x232,
                         L"All linked views must have been removed before the underlying resource can be deleted."
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  RHIValidation::FTextureResource::~FTextureResource((FTextureResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 145b99ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
`FVulkanTexture::SetInitialImageState'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  uint uVar1;
  VkImageLayout VVar2;
  code *pcVar3;
  bool bVar4;
  IRHICommandContext *pIVar5;
  IRHIUploadContext *pIVar6;
  FVulkanCommandBuffer *pFVar7;
  VkImageSubresourceRange *pVVar8;
  FVulkanContextCommon *this_00;
  VkImageLayout VVar9;
  undefined1 auStackY_2d8 [32];
  VkClearDepthStencilValue local_2a8;
  VkImageSubresourceRange local_2a0;
  VkClearColorValue local_288;
  VkImageSubresourceRange local_278;
  FVulkanPipelineBarrier local_260;
  FVulkanPipelineBarrier local_140;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  if (*(char *)((longlong)this + 0xd) == '\0') {
    pIVar6 = param_1->UploadContext;
    if (pIVar6 == (IRHIUploadContext *)0x0) {
      pIVar6 = (IRHIUploadContext *)(**(code **)(GDynamicRHI->_padding_ + 0x3d0))();
      param_1->UploadContext = pIVar6;
    }
  }
  else {
    pIVar5 = FRHICommandListBase::GetContext(param_1);
    pIVar6 = (IRHIUploadContext *)(**(code **)(pIVar5->_padding_ + 0x148))(pIVar5);
  }
  this_00 = (FVulkanContextCommon *)(pIVar6 + -0x50);
  if (pIVar6 == (IRHIUploadContext *)0x0) {
    this_00 = (FVulkanContextCommon *)0x0;
  }
  pFVar7 = FVulkanContextCommon::GetCommandBuffer(this_00);
  if (pFVar7->State != IsInsideBegin) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5704882760083045528>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x368,"CommandBuffer.IsOutsideRenderPass()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pVVar8 = FVulkanPipelineBarrier::MakeSubresourceRange
                     (&local_2a0,*(uint *)(*(longlong *)this + 0x1e0),0,0xffffffff,0,0xffffffff);
  local_278.aspectMask = pVVar8->aspectMask;
  local_278.baseMipLevel = pVVar8->baseMipLevel;
  local_278.levelCount = pVVar8->levelCount;
  local_278.baseArrayLayer = pVVar8->baseArrayLayer;
  local_278.layerCount = pVVar8->layerCount;
  VVar9 = VK_IMAGE_LAYOUT_UNDEFINED;
  if ((*(char *)((longlong)this + 0xc) != '\0') &&
     (VVar9 = VK_IMAGE_LAYOUT_UNDEFINED, *(char *)((longlong)this + 0xd) == '\0')) {
    local_260.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0
    ;
    local_260.MemoryBarriers.ArrayNum = 0;
    VVar9 = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    local_260.MemoryBarriers.ArrayMax = 1;
    local_260.ImageBarriers.AllocatorInstance.SecondaryData =
         (ForElementType<VkImageMemoryBarrier2>)0x0;
    local_260.ImageBarriers.ArrayNum = 0;
    local_260.ImageBarriers.ArrayMax = 2;
    local_260.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.BufferBarriers.ArrayNum = 0;
    local_260.BufferBarriers.ArrayMax = 0;
    FVulkanPipelineBarrier::AddImageLayoutTransition
              (&local_260,*(VkImage_T **)(*(longlong *)this + 0x170),VK_IMAGE_LAYOUT_UNDEFINED,
               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,&local_278);
    FVulkanPipelineBarrier::Execute(&local_260,pFVar7);
    if (local_260.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.BufferBarriers.AllocatorInstance.Data);
    }
    if (local_260.ImageBarriers.AllocatorInstance.SecondaryData !=
        (ForElementType<VkImageMemoryBarrier2>)0x0) {
      FMemory::Free((void *)local_260.ImageBarriers.AllocatorInstance.SecondaryData);
    }
    if (local_260.MemoryBarriers.AllocatorInstance.SecondaryData !=
        (ForElementType<VkMemoryBarrier2>)0x0) {
      FMemory::Free((void *)local_260.MemoryBarriers.AllocatorInstance.SecondaryData);
    }
    uVar1 = *(uint *)(*(longlong *)this + 0x1e0);
    if (uVar1 == 1) {
      local_288._0_8_ = *(undefined8 *)((longlong)this + 0x14);
      local_288._8_8_ = *(undefined8 *)((longlong)this + 0x1c);
      (*VulkanDynamicAPI::vkCmdClearColorImage)
                (pFVar7->CommandBufferHandle,*(VkImage_T **)(*(longlong *)this + 0x170),
                 VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,&local_288,1,&local_278);
    }
    else {
      if ((uVar1 & 6) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("VulkanTexture->IsDepthOrStencilAspect()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                           ,0x382,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_2a8.stencil = *(uint *)((longlong)this + 0x18);
      local_2a8.depth = *(float *)((longlong)this + 0x14);
      (*VulkanDynamicAPI::vkCmdClearDepthStencilImage)
                (pFVar7->CommandBufferHandle,*(VkImage_T **)(*(longlong *)this + 0x170),
                 VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,&local_2a8,1,&local_278);
    }
  }
  VVar2 = *(VkImageLayout *)((longlong)this + 8);
  if ((VVar2 != VVar9) && (VVar2 != VK_IMAGE_LAYOUT_UNDEFINED)) {
    local_140.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0
    ;
    local_140.MemoryBarriers.ArrayNum = 0;
    local_140.MemoryBarriers.ArrayMax = 1;
    local_140.ImageBarriers.AllocatorInstance.SecondaryData =
         (ForElementType<VkImageMemoryBarrier2>)0x0;
    local_140.ImageBarriers.ArrayNum = 0;
    local_140.ImageBarriers.ArrayMax = 2;
    local_140.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.BufferBarriers.ArrayNum = 0;
    local_140.BufferBarriers.ArrayMax = 0;
    FVulkanPipelineBarrier::AddFullImageLayoutTransition
              (&local_140,*(FVulkanTexture **)this,VVar9,VVar2);
    FVulkanPipelineBarrier::Execute(&local_140,pFVar7);
    if (local_140.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.BufferBarriers.AllocatorInstance.Data);
    }
    if (local_140.ImageBarriers.AllocatorInstance.SecondaryData !=
        (ForElementType<VkImageMemoryBarrier2>)0x0) {
      FMemory::Free((void *)local_140.ImageBarriers.AllocatorInstance.SecondaryData);
    }
    if (local_140.MemoryBarriers.AllocatorInstance.SecondaryData !=
        (ForElementType<VkMemoryBarrier2>)0x0) {
      FMemory::Free((void *)local_140.MemoryBarriers.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// operator() @ 145b9a220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
`FVulkanTexture::UploadInitialData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  byte bVar1;
  ushort uVar2;
  VkCommandBuffer_T *pVVar3;
  VkImage_T *pVVar4;
  code *pcVar5;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_uint_VkBufferImageCopy_ptr
  *p_Var6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  IRHIUploadContext *pIVar13;
  FVulkanCommandBuffer *pFVar14;
  VkImageSubresourceRange *pVVar15;
  VkBuffer_T *pVVar16;
  ForElementType<VkBufferImageCopy> FVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  FVulkanContextCommon *this_00;
  ulonglong uVar26;
  undefined1 auStackY_5a8 [32];
  VkImageSubresourceRange local_560;
  VkImageSubresourceRange local_548;
  FVulkanPipelineBarrier local_530;
  FVulkanPipelineBarrier local_410;
  ForElementType<VkBufferImageCopy> local_2f0;
  uint local_48 [2];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  lVar11 = (**(code **)(**(longlong **)this + 0x20))();
  uVar8 = FVulkanTexture::GetNumberOfArrayLevels(*(FVulkanTexture **)this);
  uVar19 = 0;
  local_48[1] = 0xc;
  local_2f0.SecondaryData = (ForElementType<VkBufferImageCopy>)0x0;
  local_48[0] = 0;
  bVar21 = *(byte *)(lVar11 + 0x30);
  iVar9 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<VkBufferImageCopy>_>
                    (0x38,8,(uint)bVar21,&local_2f0,(int *)local_48,(int *)(local_48 + 1));
  FVar17 = (ForElementType<VkBufferImageCopy>)&local_2f0;
  if (local_2f0.SecondaryData != (ForElementType<VkBufferImageCopy>)0x0) {
    FVar17 = local_2f0.SecondaryData;
  }
  memset((void *)((longlong)iVar9 * 0x38 + (longlong)FVar17),0,(ulonglong)bVar21 * 0x38);
  uVar26 = uVar19;
  if (*(char *)(lVar11 + 0x30) != '\0') {
    do {
      uVar18 = (uint)uVar19;
      uVar10 = 0;
      if ((int)uVar18 < (int)local_48[0]) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar17 = (ForElementType<VkBufferImageCopy>)&local_2f0;
      if (local_2f0.SecondaryData != (ForElementType<VkBufferImageCopy>)0x0) {
        FVar17 = local_2f0.SecondaryData;
      }
      puVar20 = (ulonglong *)((longlong)(int)uVar18 * 0x38 + (longlong)FVar17);
      uVar10 = VulkanRHI::FStagingBuffer::GetSize(*(FStagingBuffer **)((longlong)this + 8));
      if ((uVar10 <= uVar26) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("MipOffset < UploadBuffer->GetSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                             ,0x50b,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar2 = *(ushort *)(lVar11 + 0x2c);
      uVar10 = *(uint *)(lVar11 + 0x24);
      uVar22 = *(uint *)(lVar11 + 0x28);
      *puVar20 = uVar26;
      bVar21 = (byte)uVar19;
      uVar24 = (uint)(uVar2 >> (bVar21 & 0x1f));
      uVar10 = uVar10 >> (bVar21 & 0x1f);
      uVar22 = uVar22 >> (bVar21 & 0x1f);
      uVar23 = 1;
      if (1 < uVar10) {
        uVar23 = uVar10;
      }
      *(uint *)((longlong)puVar20 + 0x2c) = uVar23;
      uVar10 = 1;
      if (1 < uVar22) {
        uVar10 = uVar22;
      }
      *(uint *)(puVar20 + 6) = uVar10;
      uVar10 = 1;
      if (1 < uVar24) {
        uVar10 = uVar24;
      }
      *(uint *)((longlong)puVar20 + 0x34) = uVar10;
      *(undefined4 *)(puVar20 + 2) = *(undefined4 *)(*(longlong *)this + 0x1e0);
      *(uint *)((longlong)puVar20 + 0x14) = uVar18;
      *(uint *)((longlong)puVar20 + 0x1c) = uVar8;
      bVar1 = *(byte *)(lVar11 + 0x33);
      uVar22 = *(uint *)(lVar11 + 0x24) >> (bVar21 & 0x1f);
      uVar10 = 1;
      if (1 < uVar22) {
        uVar10 = uVar22;
      }
      uVar23 = *(uint *)(lVar11 + 0x28) >> (bVar21 & 0x1f);
      uVar22 = 1;
      if (1 < uVar23) {
        uVar22 = uVar23;
      }
      uVar25 = (ulonglong)((uVar22 - 1) + GPixelFormats[bVar1].BlockSizeY) /
               (ulonglong)(uint)GPixelFormats[bVar1].BlockSizeY;
      uVar23 = (uint)(*(ushort *)(lVar11 + 0x2c) >> (bVar21 & 0x1f));
      uVar22 = 1;
      if (1 < uVar23) {
        uVar22 = uVar23;
      }
      uVar12 = (ulonglong)((uVar22 - 1) + GPixelFormats[bVar1].BlockSizeZ) /
               (ulonglong)(uint)GPixelFormats[bVar1].BlockSizeZ;
      iVar9 = (int)(CONCAT44(0 >> (bVar21 & 0x1f),(uVar10 - 1) + GPixelFormats[bVar1].BlockSizeX) /
                   (ulonglong)(uint)GPixelFormats[bVar1].BlockSizeX);
      if (iVar9 == 0) {
        iVar9 = 1;
      }
      if ((int)uVar12 == 0) {
        uVar12 = 1;
      }
      if ((int)uVar25 == 0) {
        uVar25 = 1;
      }
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar26 = uVar26 + (uint)(iVar9 * GPixelFormats[bVar1].BlockBytes) * uVar12 * uVar25 *
                        (ulonglong)uVar8;
    } while (uVar18 + 1 < (uint)*(byte *)(lVar11 + 0x30));
  }
  pIVar13 = param_1->UploadContext;
  if (pIVar13 == (IRHIUploadContext *)0x0) {
    pIVar13 = (IRHIUploadContext *)(**(code **)(GDynamicRHI->_padding_ + 0x3d0))();
    param_1->UploadContext = pIVar13;
  }
  this_00 = (FVulkanContextCommon *)(pIVar13 + -0x50);
  if (pIVar13 == (IRHIUploadContext *)0x0) {
    this_00 = (FVulkanContextCommon *)0x0;
  }
  pFVar14 = FVulkanContextCommon::GetCommandBuffer(this_00);
  if ((pFVar14->State != IsInsideBegin) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5704882760083045085>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x523,"CmdBuffer->IsOutsideRenderPass()"), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pVVar3 = pFVar14->CommandBufferHandle;
  pVVar15 = FVulkanPipelineBarrier::MakeSubresourceRange
                      (&local_560,*(uint *)(*(longlong *)this + 0x1e0),0,
                       (uint)*(byte *)(lVar11 + 0x30),0,uVar8);
  local_530.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_530.MemoryBarriers.ArrayNum = 0;
  local_548.aspectMask = pVVar15->aspectMask;
  local_548.baseMipLevel = pVVar15->baseMipLevel;
  local_548.levelCount = pVVar15->levelCount;
  local_548.baseArrayLayer = pVVar15->baseArrayLayer;
  local_530.MemoryBarriers.ArrayMax = 1;
  local_530.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_548.layerCount = pVVar15->layerCount;
  local_530.ImageBarriers.ArrayNum = 0;
  local_530.ImageBarriers.ArrayMax = 2;
  local_530.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_530.BufferBarriers.ArrayNum = 0;
  local_530.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_530,*(VkImage_T **)(*(longlong *)this + 0x170),VK_IMAGE_LAYOUT_UNDEFINED,
             VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,&local_548);
  FVulkanPipelineBarrier::Execute(&local_530,pFVar14);
  if (local_530.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_530.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_530.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_530.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_530.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  uVar8 = local_48[0];
  p_Var6 = VulkanDynamicAPI::vkCmdCopyBufferToImage;
  FVar17 = (ForElementType<VkBufferImageCopy>)&local_2f0;
  if (local_2f0.SecondaryData != (ForElementType<VkBufferImageCopy>)0x0) {
    FVar17 = local_2f0.SecondaryData;
  }
  pVVar4 = *(VkImage_T **)(*(longlong *)this + 0x170);
  pVVar16 = VulkanRHI::FStagingBuffer::GetHandle(*(FStagingBuffer **)((longlong)this + 8));
  (*p_Var6)(pVVar3,pVVar16,pVVar4,VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,uVar8,
            (VkBufferImageCopy *)FVar17);
  local_410.MemoryBarriers.ArrayMax = 1;
  local_410.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_410.MemoryBarriers.ArrayNum = 0;
  local_410.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_410.ImageBarriers.ArrayNum = 0;
  local_410.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_410.BufferBarriers.ArrayNum = 0;
  local_410.BufferBarriers.ArrayMax = 0;
  local_410.ImageBarriers.ArrayMax = 2;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_410,*(VkImage_T **)(*(longlong *)this + 0x170),
             VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
             &local_548);
  FVulkanPipelineBarrier::Execute(&local_410,pFVar14);
  if (local_410.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_410.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_410.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_410.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_410.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  VulkanRHI::FStagingManager::ReleaseBuffer
            ((FStagingManager *)(*(longlong *)(*(longlong *)this + 0x168) + 0x600),this_00,
             (FStagingBuffer **)((longlong)this + 8));
  if (local_2f0.SecondaryData != (ForElementType<VkBufferImageCopy>)0x0) {
    FMemory::Free((void *)local_2f0.SecondaryData);
  }
  return;
}

// AliasTextureResources @ 145b9eed0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanTexture::AliasTextureResources(FVulkanTexture *this,TRefCountPtr<FRHITexture> *param_1)

{
  FRHITexture *this_00;
  VkImageLayout VVar1;
  FRHITexture *this_01;
  
  this_01 = (FRHITexture *)(**(code **)(param_1->Reference->_padding_ + 0x48))();
  this->Image = (VkImage_T *)this_01[1]._padding_;
  this->DefaultView = (FVulkanView *)this_01[1]._padding_;
  this->PartialView = (FVulkanView *)this_01[1]._padding_;
  this_00 = (this->AliasedTexture).Reference;
  if (this_00 == this_01) {
    VVar1 = (VkImageLayout)this_01[1]._padding_;
  }
  else {
    (this->AliasedTexture).Reference = this_01;
    FRHIResource::AddRef((FRHIResource *)this_01);
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    VVar1 = (VkImageLayout)this_01[1]._padding_;
  }
  this->DefaultLayout = VVar1;
  return;
}

// CanEvict @ 145b9ffe0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall FVulkanTexture::CanEvict(FVulkanTexture *this)

{
  return false;
}

// CanMove @ 145ba0000

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall FVulkanTexture::CanMove(FVulkanTexture *this)

{
  return false;
}

// CommitReservedResource @ 145ba0c50

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> * __thiscall
FVulkanTexture::CommitReservedResource
          (FVulkanTexture *this,
          TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ulong64 param_1)

{
  FVulkanAllocation *pFVar1;
  FScriptContainerElement *pFVar2;
  FVulkanReservedResourceData *pFVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  ulonglong uVar15;
  VkDeviceMemory_T *pVVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulong64 uVar21;
  uint uVar22;
  ulonglong uVar23;
  int *piVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auStackY_f8 [32];
  FVulkanAllocation local_88;
  undefined8 local_68;
  VkMemoryRequirements local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((param_1 - 1 < 0xfffffffffffffffe) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(RequiredCommitSizeInBytes == 0xffffffffffffffffui64) || (RequiredCommitSizeInBytes == 0)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x399,L"Only full resource commits are supported for images."), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar13;
  }
  if (((this->ReservedResourceData).Ptr == (FVulkanReservedResourceData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReservedResourceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x39a,
                         L"CommitReservedResource called on a resource without any ReservedResourceData.  Resource needs to be created with the ReservedResource flag."
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar13;
  }
  pTVar8 = CVarVulkanSparseImageMergeBindings.Ref;
  bVar9 = IsInParallelGameThread();
  lVar18 = 4;
  if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
    lVar14 = 0;
  }
  else {
    lVar14 = 4;
  }
  pTVar7 = CVarVulkanSparseImageAllocSizeMB.Ref;
  iVar12 = *(int *)((longlong)pTVar8->ShadowedValue + lVar14);
  bVar9 = IsInParallelGameThread();
  if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
    lVar18 = 0;
  }
  pFVar3 = (this->ReservedResourceData).Ptr;
  piVar24 = &__return_storage_ptr__->ArrayMax;
  uVar23 = (longlong)*(int *)((longlong)pTVar7->ShadowedValue + lVar18) * 0x100000;
  uVar26 = (pFVar3->MemoryRequirements).size;
  uVar22 = pFVar3->NumCommittedTiles;
  uVar28 = (ulonglong)uVar22;
  uVar19 = (ulonglong)(pFVar3->Allocations).ArrayNum;
  if (param_1 < uVar26) {
    uVar26 = param_1;
  }
  uVar26 = uVar26 + 0xffff;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar24 = 0;
  uVar27 = uVar26 >> 0x10;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar23;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = ((uVar26 & 0xffffffffffff0000) - 1) + uVar23 & ~(uVar23 - 1);
  uVar15 = SUB168(auVar5 / auVar4,0);
  uVar25 = (uint)(uVar26 >> 0x10);
  if (uVar28 < uVar27) {
    pFVar3 = (this->ReservedResourceData).Ptr;
    local_60.alignment = (pFVar3->MemoryRequirements).alignment;
    local_60.memoryTypeBits = (pFVar3->MemoryRequirements).memoryTypeBits;
    local_60._20_4_ = *(undefined4 *)&(pFVar3->MemoryRequirements).field_0x14;
    iVar10 = SUB164(auVar5 / auVar4,0);
    local_60.size = uVar23;
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar15 & 0xffffffff);
    }
    if ((pFVar3->Allocations).ArrayMax < iVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar10,(ForAnyElementType *)pFVar3,(pFVar3->Allocations).ArrayNum,
                 &(pFVar3->Allocations).ArrayMax);
    }
    if (uVar19 < uVar15) {
      uVar21 = uVar19 * uVar23;
      lVar18 = uVar15 - uVar19;
      do {
        pFVar3 = (this->ReservedResourceData).Ptr;
        piVar24 = &(pFVar3->Allocations).ArrayMax;
        iVar10 = (pFVar3->Allocations).ArrayNum;
        if (iVar10 == *piVar24) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,(ForAnyElementType *)pFVar3,piVar24);
        }
        (pFVar3->Allocations).ArrayNum = iVar10 + 1;
        pFVar1 = (FVulkanAllocation *)
                 ((pFVar3->Allocations).AllocatorInstance.Data + (longlong)iVar10 * 0x28);
        DefaultConstructItems<FVulkanReservedResourceData::FSparseAllocation,int>(pFVar1,1);
        bVar9 = VulkanRHI::FMemoryManager::AllocateImageMemory
                          (&this->Device->MemoryManager,pFVar1,(FVulkanEvictable *)0x0,&local_60,1,
                           EVulkanAllocationMetaImageOther,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                           ,0x3b9);
        if (!bVar9) {
          VulkanRHI::FMemoryManager::HandleOOM(&this->Device->MemoryManager,false,VK_SUCCESS,0,0);
        }
        pFVar1[1].VulkanHandle = uVar21;
        uVar21 = uVar21 + uVar23;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    piVar24 = &__return_storage_ptr__->ArrayMax;
    uVar22 = uVar25 - uVar22;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if (*piVar24 < (int)uVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar22,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar24);
    }
    uVar26 = uVar28;
    uVar22 = 0xffffffff;
    do {
      pFVar3 = (this->ReservedResourceData).Ptr;
      uVar11 = (int)uVar26 * 0x10000;
      uVar20 = (uint)(uVar11 / uVar23);
      uVar17 = 0;
      if ((int)uVar20 < (pFVar3->Allocations).ArrayNum) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar13;
      }
      pFVar1 = (FVulkanAllocation *)
               ((pFVar3->Allocations).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x28);
      if (((iVar12 == 0) || (iVar10 = __return_storage_ptr__->ArrayNum, iVar10 == 0)) ||
         (uVar22 != uVar20)) {
        iVar10 = __return_storage_ptr__->ArrayNum;
        if (iVar10 == *piVar24) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&__return_storage_ptr__->AllocatorInstance,piVar24);
        }
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x28;
        *(ulonglong *)pFVar2 = 0;
        *(ulonglong *)(pFVar2 + 0x10) = 0;
        *(ulonglong *)(pFVar2 + 0x18) = 0;
        *(ulonglong *)(pFVar2 + 0x20) = 0;
        *(ulonglong *)(pFVar2 + 8) = 0x10000;
        pVVar16 = VulkanRHI::FVulkanAllocation::GetDeviceMemoryHandle(pFVar1,this->Device);
        *(VkDeviceMemory_T **)(pFVar2 + 0x10) = pVVar16;
        *(ulonglong *)(pFVar2 + 0x18) =
             (ulonglong)(pFVar1->Offset + uVar11) - pFVar1[1].VulkanHandle;
        *(ulonglong *)pFVar2 = (ulonglong)uVar11;
      }
      else {
        uVar22 = 0;
        if ((int)(iVar10 - 1U) < iVar10) {
          uVar22 = ~(iVar10 - 1U) >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar13 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar13;
        }
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data +
                 (longlong)__return_storage_ptr__->ArrayNum * 0x28 + -0x20;
        *(longlong *)pFVar2 = *(longlong *)pFVar2 + 0x10000;
      }
      uVar26 = uVar26 + 1;
      uVar22 = uVar20;
    } while (uVar26 < uVar27);
    bVar9 = true;
    lVar18 = uVar27 - uVar28;
  }
  else {
    if (uVar28 <= uVar27) goto LAB_145ba12e9;
    uVar26 = uVar28;
    if (iVar12 == 0) {
      while (uVar26 = uVar26 - 1, (longlong)uVar27 <= (longlong)uVar26) {
        iVar12 = __return_storage_ptr__->ArrayNum;
        if (iVar12 == *piVar24) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&__return_storage_ptr__->AllocatorInstance,piVar24);
        }
        lVar18 = (longlong)iVar12;
        __return_storage_ptr__->ArrayNum = iVar12 + 1;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar18 * 0x28 + 0x20) = 0;
        *(undefined8 *)(pFVar2 + lVar18 * 0x28 + 8) = 0x10000;
        *(undefined8 *)(pFVar2 + lVar18 * 0x28 + 0x10) = 0;
        *(longlong *)(pFVar2 + lVar18 * 0x28 + 0x18) = 0;
        *(ulonglong *)(pFVar2 + lVar18 * 0x28) = uVar26 * 0x10000;
      }
    }
    else {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&__return_storage_ptr__->AllocatorInstance,piVar24);
      lVar18 = (longlong)iVar12;
      __return_storage_ptr__->ArrayNum = iVar12 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + lVar18 * 0x28 + 0x20) = 0;
      *(undefined8 *)(pFVar2 + lVar18 * 0x28 + 0x10) = 0;
      *(undefined8 *)(pFVar2 + lVar18 * 0x28 + 0x18) = 0;
      *(ulonglong *)(pFVar2 + lVar18 * 0x28 + 8) = (uVar28 - uVar27) * 0x10000;
      *(ulonglong *)(pFVar2 + lVar18 * 0x28) = uVar27 << 0x10;
    }
    pFVar3 = (this->ReservedResourceData).Ptr;
    iVar12 = (pFVar3->Allocations).ArrayNum;
    while (uVar15 < (ulonglong)(longlong)iVar12) {
      iVar12 = (pFVar3->Allocations).ArrayNum;
      uVar17 = iVar12 - 1;
      uVar22 = 0;
      if ((int)uVar17 < iVar12) {
        uVar22 = ~uVar17 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar13;
      }
      VulkanRHI::FVulkanAllocation::Free
                ((FVulkanAllocation *)
                 ((pFVar3->Allocations).AllocatorInstance.Data +
                 (longlong)((pFVar3->Allocations).ArrayNum + -1) * 0x28),this->Device);
      pFVar3 = (this->ReservedResourceData).Ptr;
      if (((pFVar3->Allocations).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar13;
      }
      lVar18 = (longlong)(pFVar3->Allocations).ArrayNum;
      pFVar2 = (pFVar3->Allocations).AllocatorInstance.Data;
      local_88.VulkanHandle = *(ulong64 *)(pFVar2 + lVar18 * 0x28 + -0x28);
      local_88._8_8_ = *(undefined8 *)(pFVar2 + lVar18 * 0x28 + -0x28 + 8);
      local_88._16_8_ = *(undefined8 *)(pFVar2 + lVar18 * 0x28 + -0x18);
      local_88._24_8_ = *(undefined8 *)(pFVar2 + lVar18 * 0x28 + -0x18 + 8);
      local_68 = *(undefined8 *)(pFVar2 + lVar18 * 0x28 + -8);
      uVar22 = (pFVar3->Allocations).ArrayNum - 1;
      pFVar1 = (FVulkanAllocation *)
               ((pFVar3->Allocations).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x28);
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation(pFVar1);
      iVar12 = (pFVar3->Allocations).ArrayNum + ~uVar22;
      if (iVar12 != 0) {
        memmove(pFVar1,&pFVar1[1].HandleId,(longlong)iVar12 * 0x28);
      }
      piVar24 = &(pFVar3->Allocations).ArrayNum;
      *piVar24 = *piVar24 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,(ForAnyElementType *)pFVar3,(pFVar3->Allocations).ArrayNum,
                 &(pFVar3->Allocations).ArrayMax);
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_88);
      pFVar3 = (this->ReservedResourceData).Ptr;
      iVar12 = (pFVar3->Allocations).ArrayNum;
    }
    lVar18 = uVar28 - uVar27;
    bVar9 = false;
  }
  UE::RHICore::UpdateReservedResourceStatsOnCommit(lVar18 * 0x10000,false,bVar9);
LAB_145ba12e9:
  ((this->ReservedResourceData).Ptr)->NumCommittedTiles = uVar25;
  return __return_storage_ptr__;
}

// DestroySurface @ 145ba65e0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanTexture::DestroySurface(FVulkanTexture *this)

{
  EImageOwnerType EVar1;
  uint uVar2;
  ulong64 uVar3;
  _func___cdecl_void_void_ptr *p_Var4;
  code *pcVar5;
  bool bVar6;
  byte *pbVar7;
  ETextureCreateFlags *pEVar8;
  TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> local_18;
  
  EVar1 = this->ImageOwnerType;
  if (this->CpuReadbackBuffer != (FVulkanCpuReadbackBuffer *)0x0) {
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&this->Device->DeferredDeletionQueue,Buffer,(ulong64)this->CpuReadbackBuffer->Buffer)
    ;
    VulkanRHI::FMemoryManager::FreeVulkanAllocation
              (&this->Device->MemoryManager,&this->Allocation,EVulkanFreeFlag_None);
    ::operator_delete(this->CpuReadbackBuffer,0x48);
    return;
  }
  if ((byte)(EVar1 - LocalOwner) < 2) {
    pbVar7 = (byte *)(**(code **)(this->_padding_ + 0x20))();
    FVulkanDevice::NotifyDeletedImage(this->Device,this->Image,(*pbVar7 & 7) != 0);
    if (EVar1 == LocalOwner) {
      bVar6 = VulkanRHI::FVulkanAllocation::HasAllocation(&this->Allocation);
      if (bVar6) {
        uVar2 = (this->Allocation).Size;
        pEVar8 = (ETextureCreateFlags *)(**(code **)(this->_padding_ + 0x20))(this);
        UE::RHICore::UpdateGlobalTextureStats
                  (*pEVar8,*(ETextureDimension *)((longlong)pEVar8 + 0x32),(ulonglong)uVar2,false,
                   false);
      }
      if (this->Image != (VkImage_T *)0x0) {
        VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
                  (&this->Device->DeferredDeletionQueue,Image,(ulong64)this->Image);
        if ((this->ReservedResourceData).Ptr == (FVulkanReservedResourceData *)0x0) {
          VulkanRHI::FMemoryManager::FreeVulkanAllocation
                    (&this->Device->MemoryManager,&this->Allocation,EVulkanFreeFlag_None);
          this->Image = (VkImage_T *)0x0;
        }
        else {
          bVar6 = VulkanRHI::FVulkanAllocation::HasAllocation(&this->Allocation);
          if (bVar6) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Allocation.HasAllocation()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                               ,0x2e8,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          CommitReservedResource(this,&local_18,0);
          if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.AllocatorInstance.Data);
          }
          uVar3 = (this->MemoryRequirements).size;
          pEVar8 = (ETextureCreateFlags *)(**(code **)(this->_padding_ + 0x20))(this);
          UE::RHICore::UpdateGlobalTextureStats
                    (*pEVar8,*(ETextureDimension *)((longlong)pEVar8 + 0x32),uVar3,false,false);
          this->Image = (VkImage_T *)0x0;
        }
      }
    }
    else {
      p_Var4 = (this->ExternalImageDeleteCallbackInfo).Function;
      this->Image = (VkImage_T *)0x0;
      if (p_Var4 != (_func___cdecl_void_void_ptr *)0x0) {
        (*p_Var4)((this->ExternalImageDeleteCallbackInfo).UserData);
      }
    }
    this->ImageOwnerType = None;
  }
  return;
}

// ErrorInvalidViewType @ 145ba7c20

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanTexture::ErrorInvalidViewType(FVulkanTexture *this)

{
  VkImageViewType VVar1;
  longlong lVar2;
  size_t sVar3;
  char *_Str;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (1 < (byte)LogVulkanRHI._0_1_) {
    lVar2 = (**(code **)(this->_padding_ + 0x20))();
    VVar1 = UETextureDimensionToVkImageViewType(*(ETextureDimension *)(lVar2 + 0x32));
    switch(VVar1) {
    case VK_IMAGE_VIEW_TYPE_1D:
      _Str = "VK_IMAGE_VIEW_TYPE_1D";
      break;
    case VK_IMAGE_VIEW_TYPE_2D:
      _Str = "VK_IMAGE_VIEW_TYPE_2D";
      break;
    case VK_IMAGE_VIEW_TYPE_3D:
      _Str = "VK_IMAGE_VIEW_TYPE_3D";
      break;
    case VK_IMAGE_VIEW_TYPE_CUBE:
      _Str = "VK_IMAGE_VIEW_TYPE_CUBE";
      break;
    case VK_IMAGE_VIEW_TYPE_1D_ARRAY:
      _Str = "VK_IMAGE_VIEW_TYPE_1D_ARRAY";
      break;
    case VK_IMAGE_VIEW_TYPE_2D_ARRAY:
      _Str = "VK_IMAGE_VIEW_TYPE_2D_ARRAY";
      break;
    case VK_IMAGE_VIEW_TYPE_CUBE_ARRAY:
      _Str = "VK_IMAGE_VIEW_TYPE_CUBE_ARRAY";
      break;
    default:
      _Str = "Unhandled VkImageViewType";
    }
    local_138._padding_ = 0;
    sVar3 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,_Str,(int)sVar3,Yes);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// Evict @ 145ba7da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145ba7ea0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanTexture::Evict(FVulkanTexture *this,FVulkanDevice *param_1,FVulkanContextArray *param_2)

{
  longlong *this_00;
  char cVar1;
  ulonglong uVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  size_t sVar9;
  longlong lVar10;
  ulonglong *puVar11;
  void *pvVar12;
  ulong64 uVar13;
  int iVar14;
  FVulkanTexture *pFVar15;
  ForAnyElementType FVar16;
  undefined1 auStackY_4a8 [32];
  FName local_450;
  FString local_448;
  FVulkanAllocation local_438;
  FString local_418;
  _Bxty local_408;
  undefined8 local_3f8;
  ulonglong uStack_3f0;
  _Bxty local_3e8;
  undefined8 local_3d8;
  ulonglong uStack_3d0;
  _Bxty local_3c8;
  undefined8 local_3b8;
  ulonglong uStack_3b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  if ((this->_padding_ != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AliasedTexture == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x9f4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = &this[-1]._padding_;
  ::TotalSize = ::TotalSize + (uint)this->_padding_;
  if (GVulkanLogDefrag != 0) {
    local_450 = (FName)this[-1]._padding_;
    ::FName::ToString(&local_450,&local_418);
    FGenericPlatformMisc::LowLevelOutputDebugStringf
              (L"Evicted %8.4fkb %8.4fkb   TB %p  :: IMG %p   %-40s\n");
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
  }
  if ((this->_padding_ != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 == CpuReadbackBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x9fe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
  if (uVar7 != 1) {
    pbVar8 = string_VkMemoryPropertyFlags
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_408,uVar7);
    if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar8->_Mypair)._Myval2._Bx._Ptr;
    }
    local_3a8._padding_ = 0;
    if (pbVar8 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_3a8.StringLength = 0;
      local_3a8.Ptr = (wchar_t *)0x0;
    }
    else {
      sVar9 = strlen((char *)pbVar8);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,(char *)pbVar8,(int)sVar9,Yes);
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MemProps == VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x9ff,L"Can\'t evict surface that isn\'t device local.  MemoryProperties=%s"
                      );
    if ((void *)local_3a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3a8._padding_);
    }
    if (0xf < uStack_3f0) {
      pvVar4 = (void *)CONCAT71(local_408._1_7_,local_408._Buf[0]);
      uVar13 = uStack_3f0 + 1;
      pvVar12 = pvVar4;
      if (0xfff < uVar13) {
        pvVar12 = *(void **)((longlong)pvVar4 + -8);
        uVar13 = uStack_3f0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar12))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar12,uVar13);
    }
    local_408._Buf[0] = '\0';
    local_3f8 = ___xmm_000000000000000f0000000000000000;
    uStack_3f0 = _UNK_15076add8;
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar10 = (**(code **)(*this_00 + 0x20))(this_00);
  cVar1 = *(char *)(lVar10 + 0x33);
  iVar14 = 4;
  if (cVar1 == '\v') {
    iVar6 = 6;
  }
  else if ((cVar1 == '\f') || (cVar1 == '\x14')) {
    iVar6 = 2;
  }
  else if (cVar1 == ',') {
    iVar6 = 4;
  }
  else {
    iVar6 = 1;
  }
  if (iVar6 != (int)this->_padding_) {
    (**(code **)(*this_00 + 0x20))(this_00);
    pbVar8 = string_VkImageAspectFlags
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_3e8,(uint)this->_padding_);
    if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar8->_Mypair)._Myval2._Bx._Ptr;
    }
    local_288._padding_ = 0;
    if (pbVar8 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_288.Ptr = (wchar_t *)0x0;
      local_288.StringLength = 0;
    }
    else {
      sVar9 = strlen((char *)pbVar8);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,(char *)pbVar8,(int)sVar9,Yes);
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("VulkanRHI::GetAspectMaskFromUEFormat(GetDesc().Format, true, true) == FullAspectMask"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0xa00,L"FullAspectMask (%s) does not match with PixelFormat (%d)");
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
    if (0xf < uStack_3d0) {
      pvVar4 = (void *)CONCAT71(local_3e8._1_7_,local_3e8._Buf[0]);
      uVar13 = uStack_3d0 + 1;
      pvVar12 = pvVar4;
      if (0xfff < uVar13) {
        pvVar12 = *(void **)((longlong)pvVar4 + -8);
        uVar13 = uStack_3d0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar12))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar12,uVar13);
    }
    local_3e8._Buf[0] = '\0';
    local_3d8 = ___xmm_000000000000000f0000000000000000;
    uStack_3d0 = _UNK_15076add8;
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar10 = (**(code **)(*this_00 + 0x20))(this_00);
  cVar1 = *(char *)(lVar10 + 0x33);
  if (((cVar1 == '\v') || (cVar1 == '\f')) || (cVar1 == '\x14')) {
    iVar14 = 2;
  }
  else if (cVar1 != ',') {
    iVar14 = 1;
  }
  if (iVar14 != *(int *)((longlong)&this->_padding_ + 4)) {
    (**(code **)(*this_00 + 0x20))(this_00);
    pbVar8 = string_VkImageAspectFlags
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_3c8,*(uint *)((longlong)&this->_padding_ + 4));
    if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar8->_Mypair)._Myval2._Bx._Ptr;
    }
    local_168._padding_ = 0;
    if (pbVar8 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_168.Ptr = (wchar_t *)0x0;
      local_168.StringLength = 0;
    }
    else {
      sVar9 = strlen((char *)pbVar8);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,(char *)pbVar8,(int)sVar9,Yes);
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("VulkanRHI::GetAspectMaskFromUEFormat(GetDesc().Format, false, true) == PartialAspectMask"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0xa01,L"PartialAspectMask (%s) does not match with PixelFormat (%d)");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if (0xf < uStack_3b0) {
      pvVar4 = (void *)CONCAT71(local_3c8._1_7_,local_3c8._Buf[0]);
      uVar13 = uStack_3b0 + 1;
      pvVar12 = pvVar4;
      if (0xfff < uVar13) {
        pvVar12 = *(void **)((longlong)pvVar4 + -8);
        uVar13 = uStack_3b0 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar12))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar12,uVar13);
    }
    local_3c8._Buf[0] = '\0';
    local_3b8 = ___xmm_000000000000000f0000000000000000;
    uStack_3b0 = _UNK_15076add8;
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar11 = (ulonglong *)(**(code **)(*this_00 + 0x20))(this_00);
  uVar2 = *puVar11;
  if (((uVar2 & 7) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bRenderTarget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0xa07,L"RenderTargets do not support evict."), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((uVar2 & 0x20000) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bUAV",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0xa08,L"UAV do not support evict."), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = VulkanRHI::FDeviceMemoryManager::GetEvictedMemoryProperties(&param_1->DeviceMemoryManager)
  ;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar7;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_438);
  pFVar15 = this;
  if (this_00 == (longlong *)0x0) {
    pFVar15 = (FVulkanTexture *)0x0;
  }
  bVar5 = VulkanRHI::FMemoryManager::AllocateImageMemory
                    (&param_1->MemoryManager,&local_438,(FVulkanEvictable *)pFVar15,
                     (VkMemoryRequirements *)&this->_padding_,
                     *(uint *)((longlong)&this->_padding_ + 4),EVulkanAllocationMetaImageOther,false
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                     ,0xa0f);
  if (!bVar5) {
    VulkanRHI::FMemoryManager::HandleOOM(&param_1->MemoryManager,false,VK_SUCCESS,0,0);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0xa12,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  InternalMoveSurface((FVulkanTexture *)this_00,param_1,*(FVulkanCommandListContext **)param_2,
                      &local_438);
  VulkanRHI::FMemoryManager::FreeVulkanAllocation
            ((FMemoryManager *)(this->_padding_ + 0x408),(FVulkanAllocation *)&this->_padding_,
             EVulkanFreeFlag_None);
  VulkanRHI::FVulkanAllocation::Swap((FVulkanAllocation *)&this->_padding_,&local_438);
  ::FString::PrintfImpl(&local_448,L"(FVulkanTexture*)0x%p [hostimage]");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_448.Data.ArrayNum != 0) {
    FVar16.Data = local_448.Data.AllocatorInstance.Data;
  }
  FVulkanDevice::VulkanSetObjectName
            (param_1,VK_OBJECT_TYPE_IMAGE,this->_padding_,(wchar_t *)FVar16.Data);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 8))(&this->_padding_,param_2);
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_438);
  return;
}

// FindOrAddInternalView @ 145ba9880

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanView * __thiscall
FVulkanTexture::FindOrAddInternalView(FVulkanTexture *this,FVulkanTextureViewDesc *param_1)

{
  TMap<unsigned_int,FVulkanView_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanView_*,0>_>
  *this_00;
  EImageOwnerType EVar1;
  FRHITexture *pFVar2;
  FVulkanDevice *pFVar3;
  uint uVar4;
  int iVar5;
  FVulkanView *pFVar6;
  FVulkanView *pFVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint local_res8 [4];
  int local_res18 [2];
  undefined8 local_res20;
  uint *local_38;
  undefined8 *local_30;
  
  EVar1 = this->ImageOwnerType;
  while ((EVar1 == Aliased &&
         (pFVar2 = (this->AliasedTexture).Reference, pFVar2 != (FRHITexture *)0x0))) {
    this = (FVulkanTexture *)(**(code **)(pFVar2->_padding_ + 0x48))();
    EVar1 = this->ImageOwnerType;
  }
  AcquireSRWLockShared((PSRWLOCK)&GInternalViewRWLock);
  this_00 = &this->InternalViews;
  uVar4 = FVulkanTextureViewDesc::GetHash(param_1);
  puVar9 = &(this->InternalViews).field_0x40;
  pFVar7 = (FVulkanView *)0x0;
  if (*(int *)&(this->InternalViews).field_0x8 != *(int *)&(this->InternalViews).field_0x34) {
    puVar8 = *(undefined1 **)puVar9;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->InternalViews).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->InternalViews).field_0x48 - 1U & uVar4) *
                              4);
    if (iVar5 != -1) {
      do {
        lVar10 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18) == uVar4) {
          if (iVar5 != -1) {
            pFVar6 = (FVulkanView *)(lVar10 + 8);
            if (lVar10 == 0) {
              pFVar6 = pFVar7;
            }
            if (pFVar6 != (FVulkanView *)0x0) {
              pFVar3 = pFVar6->Device;
              ReleaseSRWLockShared((PSRWLOCK)&GInternalViewRWLock);
              return (FVulkanView *)pFVar3;
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar10 + 0x10);
      } while (iVar5 != -1);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&GInternalViewRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)&GInternalViewRWLock);
  local_res20 = 0;
  local_res8[0] = FVulkanTextureViewDesc::GetHash(param_1);
  if (*(int *)&(this->InternalViews).field_0x8 != *(int *)&(this->InternalViews).field_0x34) {
    puVar9 = *(undefined1 **)puVar9;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->InternalViews).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->InternalViews).field_0x48 - 1U & local_res8[0]) * 4);
    if (iVar5 != -1) {
      do {
        lVar10 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18) == local_res8[0]) {
          if (lVar10 != 0) goto LAB_145ba9a39;
          break;
        }
        iVar5 = *(int *)(lVar10 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_38 = local_res8;
  local_30 = &local_res20;
  TSet<TTuple<unsigned_int,FVulkanView_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanView_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<unsigned_int_&&,FVulkanView_*_&&>_>
            ((TSet<TTuple<unsigned_int,FVulkanView_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanView_*,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res18,
             (TPairInitializer<unsigned_int_&&,FVulkanView_*_&&> *)(ulonglong)local_res8[0],
             (bool *)&local_38);
  lVar10 = *(longlong *)&this_00->field_0x0 + (longlong)local_res18[0] * 0x18;
LAB_145ba9a39:
  if (*(longlong *)(lVar10 + 8) == 0) {
    pFVar6 = ::operator_new(0x38);
    if (pFVar6 != (FVulkanView *)0x0) {
      pFVar7 = FVulkanView::FVulkanView(pFVar6,this->Device,VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE);
    }
    *(FVulkanView **)(lVar10 + 8) = pFVar7;
    FVulkanView::CreateTextureView(pFVar7,this->Image,param_1);
  }
  pFVar7 = *(FVulkanView **)(lVar10 + 8);
  ReleaseSRWLockExclusive((PSRWLOCK)&GInternalViewRWLock);
  return pFVar7;
}

// GenerateImageCreateInfo @ 145baa9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVulkanTexture::GenerateImageCreateInfo
          (FImageCreateInfo *param_1,FVulkanDevice *param_2,FRHITextureDesc *param_3,
          VkFormat *param_4,VkFormat *param_5,bool param_6)

{
  int *piVar1;
  VkImageCompressionControlEXT *pVVar2;
  uint *puVar3;
  ForElementType<EPixelFormat> FVar4;
  EPixelFormat EVar5;
  uint uVar6;
  ETextureCreateFlags EVar7;
  code *pcVar8;
  VkFormat VVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  VkImageViewType VVar13;
  uint uVar14;
  int iVar15;
  VkImageTiling VVar16;
  VkResult VVar17;
  ForElementType<VkFormat> FVar18;
  ForElementType<VkFormat> FVar19;
  ForElementType<VkFormat> FVar20;
  VkFormatProperties *pVVar21;
  char *pcVar22;
  ForElementType<EPixelFormat> FVar23;
  undefined1 auStackY_168 [32];
  VkFormat local_114;
  undefined1 local_110 [4];
  VkFormat local_10c;
  ETextureCreateFlags local_108;
  char local_100;
  undefined3 uStack_ff;
  uint local_fc;
  VkFormat local_f8;
  VkFormat local_f4;
  VkFormat local_f0;
  VkImageViewType local_ec;
  FVulkanDevice *local_e8;
  VkPhysicalDeviceImageFormatInfo2 local_e0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  VkImageFormatProperties2 local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_168;
  EVar7 = param_3->Flags;
  local_fc = GPixelFormats[param_3->Format].PlatformFormat;
  bVar11 = true;
  if ((EVar7 >> 0x13 & 1) == 0) {
    bVar11 = param_6;
  }
  local_108 = EVar7;
  local_e8 = param_2;
  local_100 = bVar11;
  bVar10 = IsRHIDeviceAMD();
  if ((bVar10) && (local_100 = bVar11, param_3->Format == PF_R32_UINT)) {
    if (EVar7 == (AtomicCompatible|UAV|ShaderResource)) {
      local_100 = true;
    }
    uStack_ff = 0;
  }
  if ((local_fc == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TextureFormat != VK_FORMAT_UNDEFINED",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0xfc,L"PixelFormat %d, is not supported for images"), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (param_1->ImageCreateInfo).sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
  *(undefined8 *)&(param_1->ImageCreateInfo).field_0x4 = 0;
  *(undefined8 *)((longlong)&(param_1->ImageCreateInfo).pNext + 4) = 0;
  (param_1->ImageCreateInfo).imageType = VK_IMAGE_TYPE_1D;
  (param_1->ImageCreateInfo).format = VK_FORMAT_UNDEFINED;
  (param_1->ImageCreateInfo).extent.width = 0;
  (param_1->ImageCreateInfo).extent.height = 0;
  *(undefined8 *)&(param_1->ImageCreateInfo).extent.depth = 0;
  (param_1->ImageCreateInfo).arrayLayers = 0;
  (param_1->ImageCreateInfo).samples = 0;
  (param_1->ImageCreateInfo).tiling = VK_IMAGE_TILING_OPTIMAL;
  (param_1->ImageCreateInfo).usage = 0;
  (param_1->ImageCreateInfo).sharingMode = VK_SHARING_MODE_EXCLUSIVE;
  (param_1->ImageCreateInfo).queueFamilyIndexCount = 0;
  *(undefined8 *)&(param_1->ImageCreateInfo).field_0x44 = 0;
  *(undefined8 *)((longlong)&(param_1->ImageCreateInfo).pQueueFamilyIndices + 4) = 0;
  *(undefined4 *)&(param_1->ImageCreateInfo).field_0x54 = 0;
  VVar13 = UETextureDimensionToVkImageViewType(param_3->Dimension);
  local_ec = VVar13;
  switch(VVar13) {
  case VK_IMAGE_VIEW_TYPE_1D:
    (param_1->ImageCreateInfo).imageType = VK_IMAGE_TYPE_1D;
    if (((param_2->GpuProps).limits.maxImageDimension1D < (uint)(param_3->Extent).field0_0x0._s_0.X)
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(uint32)InDesc.Extent.X <= DeviceProperties.limits.maxImageDimension1D"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                               ,0x105,L""), bVar11)) {
code_r0x000145baac7f:
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    break;
  case VK_IMAGE_VIEW_TYPE_2D:
  case VK_IMAGE_VIEW_TYPE_2D_ARRAY:
    if (((param_2->GpuProps).limits.maxImageDimension2D < (uint)(param_3->Extent).field0_0x0._s_0.X)
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(uint32)InDesc.Extent.X <= DeviceProperties.limits.maxImageDimension2D"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                               ,0x110,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((param_2->GpuProps).limits.maxImageDimension2D < (uint)(param_3->Extent).field0_0x0._s_0.Y)
    {
      iVar15 = 0x111;
      pcVar22 = "(uint32)InDesc.Extent.Y <= DeviceProperties.limits.maxImageDimension2D";
LAB_145baabf9:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         (pcVar22,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,iVar15,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    goto LAB_145baac12;
  case VK_IMAGE_VIEW_TYPE_3D:
    if (((param_2->GpuProps).limits.maxImageDimension3D < (uint)(param_3->Extent).field0_0x0._s_0.Y)
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(uint32)InDesc.Extent.Y <= DeviceProperties.limits.maxImageDimension3D"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                               ,0x115,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (param_1->ImageCreateInfo).imageType = VK_IMAGE_TYPE_3D;
    break;
  case VK_IMAGE_VIEW_TYPE_CUBE:
  case VK_IMAGE_VIEW_TYPE_CUBE_ARRAY:
    if (((param_3->Extent).field0_0x0._s_0.X != (param_3->Extent).field0_0x0._s_0.Y) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InDesc.Extent.X == InDesc.Extent.Y",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x109,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((param_2->GpuProps).limits.maxImageDimensionCube <
         (uint)(param_3->Extent).field0_0x0._s_0.X) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)InDesc.Extent.X <= DeviceProperties.limits.maxImageDimensionCube"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x10a,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((param_2->GpuProps).limits.maxImageDimensionCube < (uint)(param_3->Extent).field0_0x0._s_0.Y
       ) {
      iVar15 = 0x10b;
      pcVar22 = "(uint32)InDesc.Extent.Y <= DeviceProperties.limits.maxImageDimensionCube";
      goto LAB_145baabf9;
    }
LAB_145baac12:
    (param_1->ImageCreateInfo).imageType = VK_IMAGE_TYPE_2D;
    break;
  default:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                        ,0x119,L"Unhandled image type %d");
    if (bVar11) goto code_r0x000145baac7f;
  }
  EVar5 = param_3->Format;
  if ((local_108 & SRGB) == None) {
    local_10c = GPixelFormats[EVar5].PlatformFormat;
  }
  else {
    local_10c = GVulkanSRGBFormat[EVar5];
  }
  local_114 = GPixelFormats[EVar5].PlatformFormat;
  VVar9 = local_10c;
  if ((local_108 & UAV) != None) {
    VVar9 = local_114;
  }
  (param_1->ImageCreateInfo).format = VVar9;
  if ((VVar9 == VK_FORMAT_UNDEFINED) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ImageCreateInfo.format != VK_FORMAT_UNDEFINED",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x122,L"Pixel Format %d not defined!"), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (param_5 != (VkFormat *)0x0) {
    *param_5 = local_10c;
  }
  if (param_4 != (VkFormat *)0x0) {
    *param_4 = local_114;
  }
  (param_1->ImageCreateInfo).extent.width = (param_3->Extent).field0_0x0._s_0.X;
  (param_1->ImageCreateInfo).extent.height = (param_3->Extent).field0_0x0._s_0.Y;
  if (VVar13 == VK_IMAGE_VIEW_TYPE_3D) {
    iVar15 = 1;
    (param_1->ImageCreateInfo).extent.depth = (uint)param_3->Depth;
    (param_1->ImageCreateInfo).mipLevels = (uint)param_3->NumMips;
  }
  else {
    (param_1->ImageCreateInfo).extent.depth = 1;
    (param_1->ImageCreateInfo).mipLevels = (uint)param_3->NumMips;
    if ((VVar13 == VK_IMAGE_VIEW_TYPE_CUBE) || (VVar13 == VK_IMAGE_VIEW_TYPE_CUBE_ARRAY)) {
      iVar15 = 6;
    }
    else {
      iVar15 = 1;
    }
  }
  uVar14 = (uint)param_3->ArraySize * iVar15;
  (param_1->ImageCreateInfo).arrayLayers = uVar14;
  if (((param_2->GpuProps).limits.maxImageArrayLayers < uVar14) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ImageCreateInfo.arrayLayers <= DeviceProperties.limits.maxImageArrayLayers"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x132,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((VVar13 == VK_IMAGE_VIEW_TYPE_CUBE) || (VVar13 == VK_IMAGE_VIEW_TYPE_CUBE_ARRAY)) {
    uVar14 = 0x10;
  }
  else {
    uVar14 = 0;
  }
  (param_1->ImageCreateInfo).flags = uVar14;
  if ((local_108 & ReservedResource) != None) {
    uVar14 = uVar14 | 1;
    (param_1->ImageCreateInfo).flags = uVar14;
  }
  if ((param_3->UAVFormat == PF_Unknown) || (param_3->UAVFormat == param_3->Format)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (((((local_108 & SRGB) != None) || (param_3->Format == PF_R64_UINT)) || (bVar11)) ||
     ((param_3->AliasableFormats).ArrayNum != ((uint)local_108 & 0x10))) {
    if (((param_2->OptionalDeviceExtensions).field0_0x0.Packed & 0x200000000) != 0) {
      (param_1->ImageFormatListCreateInfo).sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO;
      *(undefined8 *)&(param_1->ImageFormatListCreateInfo).field_0x4 = 0;
      *(undefined8 *)((longlong)&(param_1->ImageFormatListCreateInfo).pNext + 4) = 0;
      *(undefined8 *)&(param_1->ImageFormatListCreateInfo).field_0x14 = 0;
      *(undefined4 *)((longlong)&(param_1->ImageFormatListCreateInfo).pViewFormats + 4) = 0;
      (param_1->ImageFormatListCreateInfo).pNext = (param_1->ImageCreateInfo).pNext;
      (param_1->ImageCreateInfo).pNext = &param_1->ImageFormatListCreateInfo;
      if (((local_108 & SRGB) != None) && (local_114 != local_10c)) {
        FVar20 = (ForElementType<VkFormat>)&param_1->FormatsUsed;
        FVar19 = (param_1->FormatsUsed).AllocatorInstance.SecondaryData;
        FVar18 = FVar19;
        if (FVar19 == (ForElementType<VkFormat>)0x0) {
          FVar18 = FVar20;
        }
        if ((ulonglong)FVar18 <= &local_114) {
          if (FVar19 == (ForElementType<VkFormat>)0x0) {
            FVar19 = FVar20;
          }
          if ((&local_114 <
               (VkFormat *)((longlong)FVar19 + (longlong)(param_1->FormatsUsed).ArrayMax * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar15 = (param_1->FormatsUsed).ArrayNum;
        piVar1 = &(param_1->FormatsUsed).ArrayMax;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkFormat>_>
                             (0x404,(ForElementType<VkFormat> *)FVar20,piVar1);
        }
        (param_1->FormatsUsed).ArrayNum = iVar15 + 1;
        FVar19 = (param_1->FormatsUsed).AllocatorInstance.SecondaryData;
        if (FVar19 != (ForElementType<VkFormat>)0x0) {
          FVar20 = FVar19;
        }
        *(VkFormat *)((longlong)FVar20 + (longlong)iVar15 * 4) = local_114;
        FVar20 = (ForElementType<VkFormat>)&param_1->FormatsUsed;
        FVar19 = (param_1->FormatsUsed).AllocatorInstance.SecondaryData;
        FVar18 = FVar19;
        if (FVar19 == (ForElementType<VkFormat>)0x0) {
          FVar18 = FVar20;
        }
        if ((ulonglong)FVar18 <= &local_10c) {
          if (FVar19 == (ForElementType<VkFormat>)0x0) {
            FVar19 = FVar20;
          }
          if ((&local_10c <
               (VkFormat *)((longlong)FVar19 + (longlong)(param_1->FormatsUsed).ArrayMax * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar15 = (param_1->FormatsUsed).ArrayNum;
        if (iVar15 == (param_1->FormatsUsed).ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkFormat>_>
                             (0x404,(ForElementType<VkFormat> *)FVar20,
                              &(param_1->FormatsUsed).ArrayMax);
        }
        (param_1->FormatsUsed).ArrayNum = iVar15 + 1;
        FVar19 = (param_1->FormatsUsed).AllocatorInstance.SecondaryData;
        if (FVar19 != (ForElementType<VkFormat>)0x0) {
          FVar20 = FVar19;
        }
        *(VkFormat *)((longlong)FVar20 + (longlong)iVar15 * 4) = local_10c;
      }
      if (param_3->Format == PF_R64_UINT) {
        TArray<enum_VkFormat,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<enum_VkFormat_const_&>(&param_1->FormatsUsed,&local_114);
        local_f8 = GPixelFormats[0x44].PlatformFormat;
        TArray<enum_VkFormat,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<enum_VkFormat>(&param_1->FormatsUsed,&local_f8);
      }
      if (bVar11) {
        TArray<enum_VkFormat,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<enum_VkFormat_const_&>(&param_1->FormatsUsed,&local_114);
        local_f4 = GPixelFormats[param_3->UAVFormat].PlatformFormat;
        TArray<enum_VkFormat,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<enum_VkFormat>(&param_1->FormatsUsed,&local_f4);
      }
      FVar23 = (param_3->AliasableFormats).AllocatorInstance.SecondaryData;
      iVar15 = (param_3->AliasableFormats).ArrayNum;
      if (FVar23 == (ForElementType<EPixelFormat>)0x0) {
        FVar23 = (ForElementType<EPixelFormat>)&param_3->AliasableFormats;
      }
      FVar4 = (ForElementType<EPixelFormat>)((longlong)FVar23 + (longlong)iVar15);
      while( true ) {
        if ((param_3->AliasableFormats).ArrayNum != iVar15) {
          local_110[0] = 0;
          `TCheckedPointerIterator<enum_EPixelFormat_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_110);
        }
        if (FVar23 == FVar4) break;
        local_f0 = GPixelFormats[*(byte *)FVar23].PlatformFormat;
        if ((param_1->ImageCreateInfo).format != local_f0) {
          TArray<enum_VkFormat,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
          AddUniqueImpl<enum_VkFormat_const_&>(&param_1->FormatsUsed,&local_f0);
        }
        FVar23 = (ForElementType<EPixelFormat>)((longlong)FVar23 + 1);
      }
      FVar20 = (param_1->FormatsUsed).AllocatorInstance.SecondaryData;
      if (FVar20 == (ForElementType<VkFormat>)0x0) {
        FVar20 = (ForElementType<VkFormat>)&param_1->FormatsUsed;
      }
      (param_1->ImageFormatListCreateInfo).pViewFormats = (VkFormat *)FVar20;
      (param_1->ImageFormatListCreateInfo).viewFormatCount = (param_1->FormatsUsed).ArrayNum;
      param_2 = local_e8;
    }
    uVar6 = (param_1->ImageCreateInfo).flags;
    uVar14 = uVar6 | 8;
    (param_1->ImageCreateInfo).flags = uVar14;
    if (bVar11) {
      EVar5 = param_3->Format;
      bVar10 = IsBlockCompressedFormat(EVar5);
      if ((((bVar10) || (bVar10 = IsASTCBlockCompressedTextureFormat(EVar5), bVar10)) ||
          (EVar5 == PF_ETC2_RGB)) ||
         (((EVar5 == PF_ETC2_RGBA || (EVar5 == PF_ETC2_R11_EAC)) || (EVar5 == PF_ETC2_RG11_EAC)))) {
        EVar5 = param_3->UAVFormat;
        bVar10 = IsBlockCompressedFormat(EVar5);
        if (((!bVar10) && (bVar10 = IsASTCBlockCompressedTextureFormat(EVar5), !bVar10)) &&
           ((EVar5 != PF_ETC2_RGB &&
            (((EVar5 != PF_ETC2_RGBA && (EVar5 != PF_ETC2_R11_EAC)) && (EVar5 != PF_ETC2_RG11_EAC)))
            ))) {
          uVar14 = uVar6 | 0x88;
          (param_1->ImageCreateInfo).flags = uVar14;
        }
      }
    }
  }
  if (((param_1->ImageCreateInfo).imageType == VK_IMAGE_TYPE_3D) &&
     ((local_108 & ReservedResource) == None)) {
    (param_1->ImageCreateInfo).flags = uVar14 | 0x20;
  }
  if (local_100 == '\0') {
    VVar16 = GVulkanViewTypeTilingMode[(int)local_ec];
  }
  else {
    VVar16 = VK_IMAGE_TILING_LINEAR;
  }
  (param_1->ImageCreateInfo).tiling = VVar16;
  if ((local_108 &
      (DepthStencilResolveTarget|DepthStencilTargetable|ResolveTargetable|RenderTargetable)) != None
     ) {
    (param_1->ImageCreateInfo).tiling = VK_IMAGE_TILING_OPTIMAL;
  }
  uVar14 = GetUsageFlagsFromCreateFlags(param_2,&local_108);
  (param_1->ImageCreateInfo).usage = uVar14;
  if ((local_108 & External) != None) {
    (param_1->ExternalMemImageCreateInfo).sType =
         VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO;
    *(undefined8 *)&(param_1->ExternalMemImageCreateInfo).field_0x4 = 0;
    *(undefined8 *)((longlong)&(param_1->ExternalMemImageCreateInfo).pNext + 4) = 0;
    *(undefined8 *)&(param_1->ExternalMemImageCreateInfo).handleTypes = 2;
    (param_1->ExternalMemImageCreateInfo).pNext = (param_1->ImageCreateInfo).pNext;
    (param_1->ImageCreateInfo).pNext = &param_1->ExternalMemImageCreateInfo;
  }
  (param_1->ImageCreateInfo).sharingMode = VK_SHARING_MODE_EXCLUSIVE;
  (param_1->ImageCreateInfo).queueFamilyIndexCount = 0;
  (param_1->ImageCreateInfo).pQueueFamilyIndices = (uint *)0x0;
  bVar12 = param_3->NumSamples;
  if (((param_1->ImageCreateInfo).tiling == VK_IMAGE_TILING_LINEAR) && (1 < bVar12)) {
    if (2 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Not_allowed_to__1510d7ee0,
                 (FLogCategoryBase *)&LogVulkanRHI);
    }
    bVar12 = 1;
  }
  switch(bVar12) {
  case 1:
    (param_1->ImageCreateInfo).samples = VK_SAMPLE_COUNT_1_BIT;
    break;
  case 2:
    (param_1->ImageCreateInfo).samples = VK_SAMPLE_COUNT_2_BIT;
    break;
  default:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                        ,0x1ac,L"Unsupported number of samples %d");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    break;
  case 4:
    (param_1->ImageCreateInfo).samples = VK_SAMPLE_COUNT_4_BIT;
    break;
  case 8:
    (param_1->ImageCreateInfo).samples = VK_SAMPLE_COUNT_8_BIT;
    break;
  case 0x10:
    (param_1->ImageCreateInfo).samples = VK_SAMPLE_COUNT_16_BIT;
    break;
  case 0x20:
    (param_1->ImageCreateInfo).samples = VK_SAMPLE_COUNT_32_BIT;
    break;
  case 0x40:
    (param_1->ImageCreateInfo).samples = VK_SAMPLE_COUNT_64_BIT;
  }
  pVVar21 = FVulkanDevice::GetFormatProperties(param_2,(param_1->ImageCreateInfo).format);
  if ((param_1->ImageCreateInfo).tiling != VK_IMAGE_TILING_LINEAR) {
    pVVar21 = (VkFormatProperties *)&pVVar21->optimalTilingFeatures;
  }
  uVar14 = pVVar21->linearTilingFeatures;
  if ((uVar14 & 1) == 0) {
    if (((local_108 & (CPUReadback|UAV)) == None) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("EnumHasAnyFlags(UEFlags, ETextureCreateFlags::UAV | ETextureCreateFlags::CPUReadback)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x1ba,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar3 = &(param_1->ImageCreateInfo).usage;
    *puVar3 = *puVar3 & 0xfffffffb;
  }
  if (bVar11) {
    pVVar21 = FVulkanDevice::GetFormatProperties
                        (param_2,GPixelFormats[param_3->UAVFormat].PlatformFormat);
    if ((param_1->ImageCreateInfo).tiling != VK_IMAGE_TILING_LINEAR) {
      pVVar21 = (VkFormatProperties *)&pVVar21->optimalTilingFeatures;
    }
    if (((pVVar21->linearTilingFeatures & 2) == 0) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5704882760083045946>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x1c6,"(UAVFormatFlags & VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT) != 0"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((uVar14 & 2) != 0) goto LAB_145bab3c0;
  if (((param_1->ImageCreateInfo).usage & 8) == 0) {
    if (bVar11) goto LAB_145bab5e8;
  }
  else {
    if (bVar11) {
LAB_145bab5e8:
      puVar3 = &(param_1->ImageCreateInfo).flags;
      *puVar3 = *puVar3 | 0x100;
      goto LAB_145bab3c0;
    }
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5704882760083045941>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                        ,0x1cb,
                        "(ImageCreateInfo.usage & VK_IMAGE_USAGE_STORAGE_BIT) == 0 || bHasUAVFormat"
                       );
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  puVar3 = &(param_1->ImageCreateInfo).usage;
  *puVar3 = *puVar3 & 0xfffffff7;
LAB_145bab3c0:
  if (-1 < (char)uVar14) {
    if ((((param_1->ImageCreateInfo).usage & 0x10) != 0) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5704882760083045928>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x1d8,
                            "(ImageCreateInfo.usage & VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT) == 0"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar3 = &(param_1->ImageCreateInfo).usage;
    *puVar3 = *puVar3 & 0xffffffef;
  }
  if ((uVar14 >> 9 & 1) == 0) {
    if ((((param_1->ImageCreateInfo).usage & 0x20) != 0) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5704882760083045922>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                            ,0x1de,
                            "(ImageCreateInfo.usage & VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT) == 0"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    puVar3 = &(param_1->ImageCreateInfo).usage;
    *puVar3 = *puVar3 & 0xffffffdf;
  }
  if ((uVar14 >> 0xe & 1) == 0) {
    puVar3 = &(param_1->ImageCreateInfo).usage;
    *puVar3 = *puVar3 & 0xfffffffe;
  }
  if ((uVar14 >> 0xf & 1) == 0) {
    puVar3 = &(param_1->ImageCreateInfo).usage;
    *puVar3 = *puVar3 & 0xfffffffd;
  }
  if (((GVulkanDepthStencilForceStorageBit != 0) && ((local_108 & DepthStencilTargetable) != None))
     && ((local_fc - 0x7c & 0xfffffffd) != 0)) {
    puVar3 = &(param_1->ImageCreateInfo).usage;
    *puVar3 = *puVar3 | 8;
  }
  pVVar2 = &param_1->CompressionControl;
  pVVar2->sType = VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT;
  puVar3 = &param_1->CompressionFixedRateFlags;
  *(undefined8 *)&(param_1->CompressionControl).field_0x4 = 0;
  *(undefined8 *)((longlong)&(param_1->CompressionControl).pNext + 4) = 0;
  *(undefined8 *)&(param_1->CompressionControl).compressionControlPlaneCount = 0;
  *(undefined4 *)((longlong)&(param_1->CompressionControl).pFixedRateFlags + 4) = 0;
  *puVar3 = 0;
  if (((param_3->Flags & (LossyCompressionLowBitrate|LossyCompression)) != None) &&
     ((*(uint *)&(param_2->OptionalDeviceExtensions).field0_0x0 >> 0x14 & 1) != 0)) {
    local_a0 = 0x3b9ff251;
    uStack_88 = 0;
    local_80.imageFormatProperties.maxResourceSize = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    local_80.pNext = local_b8;
    local_b8[0] = 0x3b9ff254;
    local_80.sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2;
    local_e0.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;
    *(ulonglong *)pVVar2 = CONCAT44(uStack_9c,0x3b9ff251);
    (param_1->CompressionControl).pNext = (void *)0x0;
    (param_1->CompressionControl).flags = 0;
    (param_1->CompressionControl).compressionControlPlaneCount = 0;
    (param_1->CompressionControl).pFixedRateFlags = (uint *)0x0;
    (param_1->CompressionControl).flags = 1;
    local_80.imageFormatProperties.maxExtent.width = 0;
    local_80.imageFormatProperties.maxExtent.height = 0;
    local_e0.type = (param_1->ImageCreateInfo).imageType;
    local_e0.format = (param_1->ImageCreateInfo).format;
    local_e0.tiling = (param_1->ImageCreateInfo).tiling;
    local_e0.usage = (param_1->ImageCreateInfo).usage;
    local_e0._36_4_ = 0;
    local_e0.flags = (param_1->ImageCreateInfo).flags;
    local_b0 = 0;
    uStack_a8 = 0;
    local_80.imageFormatProperties.maxExtent.depth = 0;
    local_80.imageFormatProperties.maxMipLevels = 0;
    local_80.imageFormatProperties.maxArrayLayers = 0;
    local_80.imageFormatProperties.sampleCounts = 0;
    local_e0.pNext = pVVar2;
    VVar17 = (*VulkanDynamicAPI::vkGetPhysicalDeviceImageFormatProperties2)
                       (param_2->Gpu,&local_e0,&local_80);
    if ((VVar17 == VK_SUCCESS) && ((int)uStack_a8 == 2)) {
      (param_1->CompressionControl).pNext = (param_1->ImageCreateInfo).pNext;
      (param_1->ImageCreateInfo).pNext = pVVar2;
      if (((param_3->Flags & LossyCompressionLowBitrate) != None) && (uStack_a8._4_4_ != 0)) {
        iVar15 = 0;
        if (uStack_a8._4_4_ != 0) {
          for (; (uStack_a8._4_4_ >> iVar15 & 1) == 0; iVar15 = iVar15 + 1) {
          }
        }
        (param_1->CompressionControl).flags = 2;
        bVar12 = 0;
        if (uStack_a8._4_4_ != 0) {
          bVar12 = (byte)iVar15;
        }
        *puVar3 = 1 << (bVar12 & 0x1f);
        (param_1->CompressionControl).compressionControlPlaneCount = 1;
        (param_1->CompressionControl).pFixedRateFlags = puVar3;
      }
    }
  }
  if ((((param_2->Queues).Elements[1] == (FVulkanQueue *)0x0) &&
      ((param_2->Queues).Elements[2] == (FVulkanQueue *)0x0)) || (GVulkanAllowConcurrentImage == 0))
  {
    (param_1->ImageCreateInfo).sharingMode = VK_SHARING_MODE_EXCLUSIVE;
  }
  else {
    (param_1->ImageCreateInfo).sharingMode = VK_SHARING_MODE_CONCURRENT;
    (param_1->ImageCreateInfo).queueFamilyIndexCount = (param_2->ActiveQueueFamilies).ArrayNum;
    (param_1->ImageCreateInfo).pQueueFamilyIndices =
         (uint *)(param_2->ActiveQueueFamilies).AllocatorInstance.Data;
  }
  return;
}

// GetAllocationHandle @ 145bab8a0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

VkDeviceMemory_T * __thiscall FVulkanTexture::GetAllocationHandle(FVulkanTexture *this)

{
  bool bVar1;
  VkDeviceMemory_T *pVVar2;
  
  bVar1 = VulkanRHI::FVulkanAllocation::IsValid(&this->Allocation);
  if (bVar1) {
    pVVar2 = VulkanRHI::FVulkanAllocation::GetDeviceMemoryHandle(&this->Allocation,this->Device);
    return pVVar2;
  }
  return (VkDeviceMemory_T *)0x0;
}

// GetAllocationOffset @ 145bab8f0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ulong64 __thiscall FVulkanTexture::GetAllocationOffset(FVulkanTexture *this)

{
  bool bVar1;
  
  bVar1 = VulkanRHI::FVulkanAllocation::IsValid(&this->Allocation);
  if (bVar1) {
    return (ulonglong)(this->Allocation).Offset;
  }
  return 0;
}

// GetDefaultBindlessHandle @ 145babbb0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHIDescriptorHandle __thiscall FVulkanTexture::GetDefaultBindlessHandle(FVulkanTexture *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIDescriptorHandle FVar3;
  FRHIDescriptorHandle in_RDX;
  
  if (this->PartialView == (FVulkanView *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PartialView",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                       ,0x293,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FRHIDescriptorHandle)(*pcVar1)();
      return FVar3;
    }
  }
  *(FRHIDescriptorHandle *)in_RDX = this->PartialView->BindlessHandle;
  return in_RDX;
}

// GetEvictableTexture @ 145babc90

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanTexture * __thiscall FVulkanTexture::GetEvictableTexture(FVulkanTexture *this)

{
  char cVar1;
  FVulkanTexture *pFVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 8))();
  pFVar2 = (FVulkanTexture *)&this[-1]._padding_;
  if (cVar1 == '\0') {
    pFVar2 = (FVulkanTexture *)0x0;
  }
  return pFVar2;
}

// GetMappedPointer @ 145babf70

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void * __thiscall FVulkanTexture::GetMappedPointer(FVulkanTexture *this)

{
  void *pvVar1;
  
  pvVar1 = VulkanRHI::FVulkanAllocation::GetMappedPointer(&this->Allocation,this->Device);
  return pvVar1;
}

// GetMipSize @ 145babfb0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanTexture::GetMipSize(FVulkanTexture *this,uint param_1,ulong64 *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar4 = (**(code **)(this->_padding_ + 0x20))();
  bVar1 = *(byte *)(lVar4 + 0x33);
  uVar5 = GPixelFormats[bVar1].BlockSizeX;
  uVar3 = GPixelFormats[bVar1].BlockSizeY;
  bVar2 = (byte)param_1 & 0x1f;
  uVar6 = *(int *)(lVar4 + 0x24) >> bVar2;
  uVar7 = *(int *)(lVar4 + 0x28) >> ((byte)param_1 & 0x1f);
  uVar8 = uVar5;
  if (uVar5 < uVar6) {
    uVar8 = uVar6;
  }
  uVar8 = (uint)(CONCAT44(0 >> bVar2,(uVar8 - 1) + uVar5) / (ulonglong)uVar5);
  uVar5 = uVar3;
  if (uVar3 < uVar7) {
    uVar5 = uVar7;
  }
  uVar3 = ((uVar3 - 1) + uVar5) / uVar3;
  if ((bVar1 == 0x1e) || (uVar6 = uVar3, uVar5 = uVar8, bVar1 == 0x1f)) {
    uVar5 = 2;
    if (2 < uVar8) {
      uVar5 = uVar8;
    }
    uVar6 = 2;
    if (2 < uVar3) {
      uVar6 = uVar3;
    }
  }
  *param_2 = (ulonglong)
             (*(ushort *)(lVar4 + 0x2c) * uVar6 * uVar5 * GPixelFormats[bVar1].BlockBytes);
  return;
}

// GetMipStride @ 145bac090

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanTexture::GetMipStride(FVulkanTexture *this,uint param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = (**(code **)(this->_padding_ + 0x20))();
  bVar1 = *(byte *)(lVar5 + 0x33);
  bVar2 = (byte)param_1 & 0x1f;
  uVar6 = *(int *)(lVar5 + 0x24) >> bVar2;
  uVar3 = GPixelFormats[bVar1].BlockSizeX;
  uVar4 = uVar3;
  if (uVar3 < uVar6) {
    uVar4 = uVar6;
  }
  uVar3 = (uint)(CONCAT44(0 >> bVar2,(uVar4 - 1) + uVar3) / (ulonglong)uVar3);
  if (((bVar1 == 0x1e) || (uVar4 = uVar3, bVar1 == 0x1f)) && (uVar4 = 2, 2 < uVar3)) {
    uVar4 = uVar3;
  }
  *param_2 = uVar4 * GPixelFormats[bVar1].BlockBytes;
  return;
}

// GetNativeResource @ 145bac110

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void * __thiscall FVulkanTexture::GetNativeResource(FVulkanTexture *this)

{
  return this->Image;
}

// GetResourceInfo @ 145bac830

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall FVulkanTexture::GetResourceInfo(FVulkanTexture *this,FRHIResourceInfo *param_1)

{
  undefined4 uVar1;
  uint7 uStack_2f;
  undefined5 uStack_15;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  *(ulonglong *)&param_1->Type = (ulonglong)uStack_2f << 8;
  (param_1->VRamAllocation).AllocationStart = 0;
  (param_1->VRamAllocation).AllocationSize = 0;
  param_1->IsTransient = (bool)(char)0x10100;
  param_1->bValid = (bool)(char)(0x10100 >> 8);
  param_1->bResident = (bool)(char)(0x10100 >> 0x10);
  *(undefined5 *)&param_1->field_0x23 = uStack_15;
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (param_1->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (param_1->Name).Number = uVar1;
  param_1->Type = *(ERHIResourceType *)((longlong)&this->_padding_ + 4);
  (param_1->VRamAllocation).AllocationSize = (ulonglong)(uint)(this->MemoryRequirements).size;
  param_1->IsTransient = (this->Allocation).bTransient;
  return true;
}

// GetTextureBaseRHI @ 145bacc10

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void * __thiscall FVulkanTexture::GetTextureBaseRHI(FVulkanTexture *this)

{
  return this;
}

// GetTextureResourceInfo @ 145bacc20

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall
FVulkanTexture::GetTextureResourceInfo(FVulkanTexture *this,FRHIResourceInfo *param_1)

{
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  *(undefined8 *)&param_1->Type = 0;
  (param_1->VRamAllocation).AllocationStart = 0;
  (param_1->VRamAllocation).AllocationSize = 0;
  param_1->IsTransient = false;
  param_1->bValid = true;
  param_1->bResident = true;
  *(undefined5 *)&param_1->field_0x23 = 0;
  (param_1->VRamAllocation).AllocationSize = (ulonglong)(uint)(this->MemoryRequirements).size;
  return true;
}

// HostUploadInitialData @ 145badb60

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanTexture::HostUploadInitialData
          (FVulkanTexture *this,FRHICommandListBase *param_1,uchar *param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  VkResult VVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  IRHIUploadContext *pIVar12;
  FVulkanCommandBuffer *pFVar13;
  FVulkanContextCommon *this_00;
  uint uVar14;
  ForElementType<VkMemoryToImageCopy> FVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStackY_5a8 [32];
  VkCopyMemoryToImageInfo local_558;
  VkHostImageLayoutTransitionInfo local_528;
  VkImageSubresourceRange local_4f0;
  FVulkanPipelineBarrier local_4d8;
  ForElementType<VkMemoryToImageCopy> local_3b8;
  uint local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  if ((((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x400000000000000) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Device->GetOptionalExtensions().HasEXTHostImageCopy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x53c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2 == (uchar *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BulkData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x53d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->DefaultLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
  lVar10 = (**(code **)(this->_padding_ + 0x20))(this);
  uVar7 = GetNumberOfArrayLevels(this);
  local_4f0.aspectMask = this->FullAspectMask;
  uVar21 = 0;
  local_528.image = this->Image;
  local_4f0.baseMipLevel = 0;
  local_4f0.levelCount = (uint)*(byte *)(lVar10 + 0x30);
  local_4f0.baseArrayLayer = 0;
  local_528.subresourceRange._0_8_ = ZEXT48(local_4f0.aspectMask);
  local_528.subresourceRange._8_8_ = ZEXT48(local_4f0.levelCount);
  local_528.sType = VK_STRUCTURE_TYPE_HOST_IMAGE_LAYOUT_TRANSITION_INFO;
  local_528.pNext = (void *)0x0;
  local_528.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
  local_528.newLayout = VK_IMAGE_LAYOUT_GENERAL;
  local_528.subresourceRange.layerCount = uVar7;
  local_4f0.layerCount = uVar7;
  VVar8 = (*VulkanDynamicAPI::vkTransitionImageLayoutEXT)(this->Device->Device,1,&local_528);
  if (VVar8 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar8,
               "VulkanRHI::vkTransitionImageLayoutEXT(Device->GetHandle(), 1, &TransitionInfo)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
               ,0x556);
  }
  local_3b8.SecondaryData = (ForElementType<VkMemoryToImageCopy>)0x0;
  local_50[0] = 0;
  local_50[1] = 0xc;
  bVar2 = *(byte *)(lVar10 + 0x30);
  iVar9 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<VkMemoryToImageCopy>_>
                    (0x48,8,(uint)bVar2,&local_3b8,(int *)local_50,(int *)(local_50 + 1));
  FVar15 = (ForElementType<VkMemoryToImageCopy>)&local_3b8;
  if (local_3b8.SecondaryData != (ForElementType<VkMemoryToImageCopy>)0x0) {
    FVar15 = local_3b8.SecondaryData;
  }
  memset((void *)((longlong)FVar15 + (longlong)iVar9 * 0x48),0,(ulonglong)bVar2 * 0x48);
  uVar16 = 0;
  if (*(char *)(lVar10 + 0x30) != '\0') {
    do {
      uVar14 = 0;
      if ((int)uVar16 < (int)local_50[0]) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar15 = (ForElementType<VkMemoryToImageCopy>)&local_3b8;
      if (local_3b8.SecondaryData != (ForElementType<VkMemoryToImageCopy>)0x0) {
        FVar15 = local_3b8.SecondaryData;
      }
      lVar1 = (longlong)FVar15 + (longlong)(int)uVar16 * 0x48;
      if ((param_3 <= uVar21) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("MipOffset < BulkDataSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                             ,0x560,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar4 = *(ushort *)(lVar10 + 0x2c);
      uVar14 = *(uint *)(lVar10 + 0x24);
      uVar17 = *(uint *)(lVar10 + 0x28);
      bVar2 = (byte)uVar16;
      *(uchar **)(lVar1 + 0x10) = param_2 + uVar21;
      uVar19 = (uint)(uVar4 >> (bVar2 & 0x1f));
      uVar14 = uVar14 >> (bVar2 & 0x1f);
      uVar17 = uVar17 >> (bVar2 & 0x1f);
      uVar18 = 1;
      if (1 < uVar14) {
        uVar18 = uVar14;
      }
      *(uint *)(lVar1 + 0x3c) = uVar18;
      uVar14 = 1;
      if (1 < uVar17) {
        uVar14 = uVar17;
      }
      *(uint *)(lVar1 + 0x40) = uVar14;
      uVar14 = 1;
      if (1 < uVar19) {
        uVar14 = uVar19;
      }
      *(uint *)(lVar1 + 0x44) = uVar14;
      *(uint *)(lVar1 + 0x20) = this->FullAspectMask;
      *(uint *)(lVar1 + 0x2c) = uVar7;
      *(uint *)(lVar1 + 0x24) = uVar16;
      bVar3 = *(byte *)(lVar10 + 0x33);
      uVar17 = *(uint *)(lVar10 + 0x24) >> (bVar2 & 0x1f);
      uVar14 = 1;
      if (1 < uVar17) {
        uVar14 = uVar17;
      }
      uVar18 = *(uint *)(lVar10 + 0x28) >> (bVar2 & 0x1f);
      uVar17 = 1;
      if (1 < uVar18) {
        uVar17 = uVar18;
      }
      uVar20 = (ulonglong)((uVar17 - 1) + GPixelFormats[bVar3].BlockSizeY) /
               (ulonglong)(uint)GPixelFormats[bVar3].BlockSizeY;
      uVar18 = (uint)(*(ushort *)(lVar10 + 0x2c) >> (bVar2 & 0x1f));
      uVar17 = 1;
      if (1 < uVar18) {
        uVar17 = uVar18;
      }
      uVar11 = (ulonglong)((uVar17 - 1) + GPixelFormats[bVar3].BlockSizeZ) /
               (ulonglong)(uint)GPixelFormats[bVar3].BlockSizeZ;
      iVar9 = (int)(CONCAT44(0 >> (bVar2 & 0x1f),(uVar14 - 1) + GPixelFormats[bVar3].BlockSizeX) /
                   (ulonglong)(uint)GPixelFormats[bVar3].BlockSizeX);
      if (iVar9 == 0) {
        iVar9 = 1;
      }
      if ((int)uVar11 == 0) {
        uVar11 = 1;
      }
      if ((int)uVar20 == 0) {
        uVar20 = 1;
      }
      uVar21 = uVar21 + (uint)(iVar9 * GPixelFormats[bVar3].BlockBytes) * uVar11 * uVar20 *
                        (ulonglong)uVar7;
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(byte *)(lVar10 + 0x30));
  }
  local_558.dstImage = this->Image;
  local_558.regionCount = local_50[0];
  local_558.sType = VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INFO;
  local_558.pNext = (void *)0x0;
  local_558.pRegions = (VkMemoryToImageCopy *)&local_3b8;
  if (local_3b8.SecondaryData != (ForElementType<VkMemoryToImageCopy>)0x0) {
    local_558.pRegions = (VkMemoryToImageCopy *)local_3b8.SecondaryData;
  }
  local_558.flags = 0;
  local_558.dstImageLayout = VK_IMAGE_LAYOUT_GENERAL;
  VVar8 = (*VulkanDynamicAPI::vkCopyMemoryToImageEXT)(this->Device->Device,&local_558);
  if (VVar8 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar8,
               "VulkanRHI::vkCopyMemoryToImageEXT(Device->GetHandle(), &CopyMemoryToImageInfo)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
               ,0x57f);
  }
  pIVar12 = param_1->UploadContext;
  if (pIVar12 == (IRHIUploadContext *)0x0) {
    pIVar12 = (IRHIUploadContext *)(**(code **)(GDynamicRHI->_padding_ + 0x3d0))();
    param_1->UploadContext = pIVar12;
  }
  this_00 = (FVulkanContextCommon *)(pIVar12 + -0x50);
  if (pIVar12 == (IRHIUploadContext *)0x0) {
    this_00 = (FVulkanContextCommon *)0x0;
  }
  pFVar13 = FVulkanContextCommon::GetCommandBuffer(this_00);
  if ((pFVar13->State != IsInsideBegin) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5704882760083044987>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0x585,"CommandBuffer.IsOutsideRenderPass()"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_4d8.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_4d8.MemoryBarriers.ArrayNum = 0;
  local_4d8.MemoryBarriers.ArrayMax = 1;
  local_4d8.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_4d8.ImageBarriers.ArrayNum = 0;
  local_4d8.ImageBarriers.ArrayMax = 2;
  local_4d8.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4d8.BufferBarriers.ArrayNum = 0;
  local_4d8.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_4d8,this->Image,VK_IMAGE_LAYOUT_GENERAL,VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL
             ,&local_4f0);
  FVulkanPipelineBarrier::Execute(&local_4d8,pFVar13->CommandBufferHandle);
  if (local_4d8.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_4d8.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_4d8.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_4d8.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_4d8.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_3b8.SecondaryData != (ForElementType<VkMemoryToImageCopy>)0x0) {
    FMemory::Free((void *)local_3b8.SecondaryData);
  }
  return;
}

// InitViews @ 145baf980

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanTexture::InitViews(FVulkanTexture *this,uint param_1,VkSamplerYcbcrConversion_T *param_2)

{
  VkImageViewType VVar1;
  longlong lVar2;
  FVulkanTextureViewDesc *pFVar3;
  FVulkanView *this_00;
  FVulkanView *pFVar4;
  FVulkanView *this_01;
  VkDescriptorType VVar5;
  FVulkanTextureViewDesc local_78;
  FVulkanTextureViewDesc local_40;
  
  if (this->Image != (VkImage_T *)0x0) {
    lVar2 = (**(code **)(this->_padding_ + 0x20))();
    VVar1 = UETextureDimensionToVkImageViewType(*(ETextureDimension *)(lVar2 + 0x32));
    if (VVar1 != VK_IMAGE_VIEW_TYPE_MAX_ENUM) {
      pFVar3 = CreateTextureViewDesc(&local_40,this,param_1,param_2);
      local_78.ViewType = pFVar3->ViewType;
      local_78.AspectFlags = pFVar3->AspectFlags;
      local_78.UEFormat = pFVar3->UEFormat;
      local_78._9_3_ = *(undefined3 *)&pFVar3->field_0x9;
      local_78.Format = pFVar3->Format;
      local_78.FirstMip = pFVar3->FirstMip;
      local_78.NumMips = pFVar3->NumMips;
      local_78.ArraySliceIndex = pFVar3->ArraySliceIndex;
      local_78.NumArraySlices = pFVar3->NumArraySlices;
      local_78.ImageUsageFlags = pFVar3->ImageUsageFlags;
      local_78._36_4_ = *(undefined4 *)&pFVar3->field_0x24;
      local_78.SamplerYcbcrConversion._0_4_ = *(undefined4 *)&pFVar3->SamplerYcbcrConversion;
      local_78.SamplerYcbcrConversion._4_4_ =
           *(undefined4 *)((longlong)&pFVar3->SamplerYcbcrConversion + 4);
      local_78._48_8_ = *(undefined8 *)&pFVar3->bUseIdentitySwizzle;
      lVar2 = (**(code **)(this->_padding_ + 0x20))(this);
      if (((GPixelFormats[*(byte *)(lVar2 + 0x33)].Capabilities & TextureSample) == None) ||
         (VVar5 = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, (this->ImageUsageFlags & 4) == 0)) {
        VVar5 = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
      }
      this_01 = (FVulkanView *)0x0;
      if (this->DefaultView == (FVulkanView *)0x0) {
        this_00 = ::operator_new(0x38);
        pFVar4 = this_01;
        if (this_00 != (FVulkanView *)0x0) {
          pFVar4 = FVulkanView::FVulkanView(this_00,this->Device,VVar5);
        }
        this->DefaultView = pFVar4;
      }
      else {
        FVulkanView::Invalidate(this->DefaultView);
        pFVar4 = this->DefaultView;
      }
      FVulkanView::CreateTextureView(pFVar4,this->Image,&local_78);
      if (this->FullAspectMask == this->PartialAspectMask) {
        this->PartialView = this->DefaultView;
      }
      else {
        local_40.UEFormat = local_78.UEFormat;
        local_40._9_3_ = local_78._9_3_;
        local_40.Format = local_78.Format;
        local_40.ViewType = local_78.ViewType;
        local_40.AspectFlags = this->PartialAspectMask;
        local_40._36_4_ = local_78._36_4_;
        local_40.ImageUsageFlags = local_78.ImageUsageFlags;
        local_40.FirstMip = local_78.FirstMip;
        local_40.NumMips = local_78.NumMips;
        local_40.ArraySliceIndex = local_78.ArraySliceIndex;
        local_40.NumArraySlices = local_78.NumArraySlices;
        local_40._48_8_ = local_78._48_8_ & 0xffffffffffffff00;
        local_40.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
        if (this->PartialView == (FVulkanView *)0x0) {
          pFVar4 = ::operator_new(0x38);
          if (pFVar4 != (FVulkanView *)0x0) {
            this_01 = FVulkanView::FVulkanView(pFVar4,this->Device,VVar5);
          }
          this->PartialView = this_01;
        }
        else {
          FVulkanView::Invalidate(this->PartialView);
          this_01 = this->PartialView;
        }
        FVulkanView::CreateTextureView(this_01,this->Image,&local_40);
      }
    }
  }
  return;
}

// InternalLockWrite @ 145baff40

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __cdecl
FVulkanTexture::InternalLockWrite
          (FVulkanContextCommon *param_1,FVulkanTexture *param_2,VkBufferImageCopy *param_3,
          FStagingBuffer *param_4)

{
  VkCommandBuffer_T *pVVar1;
  VkImage_T *pVVar2;
  code *pcVar3;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_uint_VkBufferImageCopy_ptr
  *p_Var4;
  bool bVar5;
  FVulkanCommandBuffer *pFVar6;
  VkImageSubresourceRange *pVVar7;
  VkBuffer_T *pVVar8;
  undefined1 auStackY_2f8 [32];
  FStagingBuffer *local_2c8;
  VkImageSubresourceRange local_2c0;
  VkImageSubresourceRange local_2a8;
  FVulkanPipelineBarrier local_290;
  FVulkanPipelineBarrier local_170;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_2c8 = param_4;
  pFVar6 = FVulkanContextCommon::GetCommandBuffer(param_1);
  if (pFVar6->State != IsInsideBegin) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5704882760083046263>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x89,"CmdBuffer->IsOutsideRenderPass()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pVVar1 = pFVar6->CommandBufferHandle;
  pVVar7 = FVulkanPipelineBarrier::MakeSubresourceRange
                     (&local_2c0,(param_3->imageSubresource).aspectMask,
                      (param_3->imageSubresource).mipLevel,1,
                      (param_3->imageSubresource).baseArrayLayer,
                      (param_3->imageSubresource).layerCount);
  local_290.MemoryBarriers.ArrayMax = 1;
  local_290.ImageBarriers.ArrayMax = 2;
  local_2a8.aspectMask = pVVar7->aspectMask;
  local_2a8.baseMipLevel = pVVar7->baseMipLevel;
  local_2a8.levelCount = pVVar7->levelCount;
  local_2a8.baseArrayLayer = pVVar7->baseArrayLayer;
  local_2a8.layerCount = pVVar7->layerCount;
  local_290.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_290.MemoryBarriers.ArrayNum = 0;
  local_290.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_290.ImageBarriers.ArrayNum = 0;
  local_290.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.BufferBarriers.ArrayNum = 0;
  local_290.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_290,param_2->Image,VK_IMAGE_LAYOUT_UNDEFINED,
             VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,&local_2a8);
  FVulkanPipelineBarrier::Execute(&local_290,pFVar6);
  if (local_290.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_290.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_290.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_290.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_290.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  p_Var4 = VulkanDynamicAPI::vkCmdCopyBufferToImage;
  pVVar2 = param_2->Image;
  pVVar8 = VulkanRHI::FStagingBuffer::GetHandle(local_2c8);
  (*p_Var4)(pVVar1,pVVar8,pVVar2,VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,1,param_3);
  local_170.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_170.MemoryBarriers.ArrayNum = 0;
  local_170.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_170.ImageBarriers.ArrayNum = 0;
  local_170.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.BufferBarriers.ArrayNum = 0;
  local_170.BufferBarriers.ArrayMax = 0;
  local_170.MemoryBarriers.ArrayMax = 1;
  local_170.ImageBarriers.ArrayMax = 2;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_170,param_2->Image,VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,param_2->DefaultLayout,
             &local_2a8);
  FVulkanPipelineBarrier::Execute(&local_170,pFVar6);
  if (local_170.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_170.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_170.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_170.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_170.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  VulkanRHI::FStagingManager::ReleaseBuffer(&param_2->Device->StagingManager,param_1,&local_2c8);
  return;
}

// InternalMoveSurface @ 145bb01a0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanTexture::InternalMoveSurface
          (FVulkanTexture *this,FVulkanDevice *param_1,FVulkanCommandListContext *param_2,
          FVulkanAllocation *param_3)

{
  byte bVar1;
  ushort uVar2;
  VkImageTiling VVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ETextureCreateFlags EVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  VkResult VVar11;
  uint uVar12;
  VkImageLayout VVar13;
  uint uVar14;
  FRHITextureDesc *pFVar15;
  size_t sVar16;
  FVulkanCommandBuffer *pFVar17;
  VkImageSubresourceRange *pVVar18;
  longlong lVar19;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  char *_Str;
  char *_Str_00;
  undefined1 auStackY_a48 [32];
  VkImage_T *local_a00;
  FVulkanAllocation *local_9f8;
  VkImageSubresourceRange local_9f0;
  FImageCreateInfo local_9d8;
  VkImageSubresourceRange local_908;
  VkMemoryRequirements local_8f0;
  FVulkanPipelineBarrier local_8d8;
  FVulkanPipelineBarrier local_7b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_698;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_578;
  VkImageCopy local_458 [15];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_a48;
  local_9d8.FormatsUsed.AllocatorInstance.SecondaryData = (ForElementType<VkFormat>)0x0;
  local_9d8.FormatsUsed.ArrayNum = 0;
  local_9d8.FormatsUsed.ArrayMax = 2;
  local_9f8 = param_3;
  pFVar15 = (FRHITextureDesc *)(**(code **)(this->_padding_ + 0x20))();
  GenerateImageCreateInfo(&local_9d8,param_1,pFVar15,&this->StorageFormat,&this->ViewFormat,false);
  VVar11 = (*VulkanDynamicAPI::vkCreateImage)
                     (param_1->Device,&local_9d8.ImageCreateInfo,&VulkanRHI::GAllocationCallbacks,
                      &local_a00);
  if (VVar11 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar11,
               "VulkanRHI::vkCreateImage(InDevice.GetHandle(), &ImageCreateInfo.ImageCreateInfo, VULKAN_CPU_ALLOCATOR, &MovedImage)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
               ,0x26e);
  }
  if (this->Tiling != local_9d8.ImageCreateInfo.tiling) {
    _Str_00 = "Unhandled VkImageTiling";
    if (local_9d8.ImageCreateInfo.tiling == VK_IMAGE_TILING_OPTIMAL) {
      _Str = "VK_IMAGE_TILING_OPTIMAL";
    }
    else if (local_9d8.ImageCreateInfo.tiling == VK_IMAGE_TILING_LINEAR) {
      _Str = "VK_IMAGE_TILING_LINEAR";
    }
    else if (local_9d8.ImageCreateInfo.tiling == VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT) {
      _Str = "VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT";
    }
    else {
      _Str = "Unhandled VkImageTiling";
    }
    local_578._padding_ = 0;
    sVar16 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_578,_Str,(int)sVar16,Yes);
    VVar3 = this->Tiling;
    if (VVar3 == VK_IMAGE_TILING_OPTIMAL) {
      _Str_00 = "VK_IMAGE_TILING_OPTIMAL";
    }
    else if (VVar3 == VK_IMAGE_TILING_LINEAR) {
      _Str_00 = "VK_IMAGE_TILING_LINEAR";
    }
    else if (VVar3 == VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT) {
      _Str_00 = "VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT";
    }
    local_698._padding_ = 0;
    sVar16 = strlen(_Str_00);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_698,_Str_00,(int)sVar16,Yes);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Tiling == ImageCreateInfo.ImageCreateInfo.tiling",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                        ,0x26f,L"Move has changed image tiling:  before [%s] != after [%s]");
    if ((void *)local_698._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_698._padding_);
    }
    if ((void *)local_578._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_578._padding_);
    }
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  EVar7 = pFVar15->Flags;
  if (((EVar7 >> 0x13 & 1) != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bCPUReadback",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x276,
                          L"Move of CPUReadback surfaces not currently supported.   UEFlags=0x%x"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((((EVar7 & Memoryless) != None) &&
      ((param_1->DeviceMemoryManager).bSupportsMemoryless != false)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bMemoryless || !InDevice.GetDeviceMemoryManager().SupportsMemoryless()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x277,
                          L"Move of Memoryless surfaces not currently supported.   UEFlags=0x%x"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((EVar7 & External) != None) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bExternal",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x278,L"Move of external memory not supported. UEFlags=0x%x"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (*VulkanDynamicAPI::vkGetImageMemoryRequirements)(param_1->Device,local_a00,&local_8f0);
  if (((this->MemoryRequirements).alignment != local_8f0.alignment) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(MemoryRequirements.alignment == MovedMemReqs.alignment)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x27e,L"Memory requirements changed: alignment %d -> %d"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->MemoryRequirements).size != local_8f0.size) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(MemoryRequirements.size == MovedMemReqs.size)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x27f,L"Memory requirements changed: size %d -> %d"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->MemoryRequirements).memoryTypeBits != local_8f0.memoryTypeBits) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(MemoryRequirements.memoryTypeBits == MovedMemReqs.memoryTypeBits)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x280,L"Memory requirements changed: memoryTypeBits %d -> %d"), bVar10))
  {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  VulkanRHI::FVulkanAllocation::BindImage(local_9f8,param_1,local_a00);
  pFVar17 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_2);
  local_9f8 = (FVulkanAllocation *)pFVar17->CommandBufferHandle;
  if ((pFVar17->State != IsInsideBegin) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5704882760083045752>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x288,"CommandBuffer.IsOutsideRenderPass()"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar12 = GetNumberOfArrayLevels(this);
  pVVar18 = FVulkanPipelineBarrier::MakeSubresourceRange
                      (&local_9f0,this->FullAspectMask,0,0xffffffff,0,0xffffffff);
  lVar9 = this->_padding_;
  local_908.aspectMask = pVVar18->aspectMask;
  local_908.baseMipLevel = pVVar18->baseMipLevel;
  local_908.levelCount = pVVar18->levelCount;
  local_908.baseArrayLayer = pVVar18->baseArrayLayer;
  local_908.layerCount = pVVar18->layerCount;
  lVar19 = (**(code **)(this->_padding_ + 0x20))(this);
  if (((GPixelFormats[*(byte *)(lVar19 + 0x33)].Capabilities & TextureSample) == None) ||
     ((this->ImageUsageFlags & 4) == 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  VVar13 = GetInitialLayoutFromRHIAccess((ERHIAccess)lVar9,(this->FullAspectMask & 6) != 0,bVar10);
  uVar21 = 0;
  local_8d8.MemoryBarriers.ArrayMax = 1;
  local_8d8.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_8d8.MemoryBarriers.ArrayNum = 0;
  local_8d8.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_8d8.ImageBarriers.ArrayNum = 0;
  local_8d8.ImageBarriers.ArrayMax = 2;
  local_8d8.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8d8.BufferBarriers.ArrayNum = 0;
  local_8d8.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_8d8,this->Image,VVar13,VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,&local_908);
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_8d8,local_a00,VK_IMAGE_LAYOUT_UNDEFINED,VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
             &local_908);
  FVulkanPipelineBarrier::Execute(&local_8d8,pFVar17);
  if (local_8d8.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d8.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_8d8.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_8d8.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_8d8.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_8d8.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  if ((0xf < pFVar15->NumMips) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Desc.NumMips <= MAX_TEXTURE_MIP_COUNT",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,0x29a,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  memset(local_458,0,0x3fc);
  bVar1 = pFVar15->NumMips;
  if (bVar1 != 0) {
    iVar4 = (pFVar15->Extent).field0_0x0._s_0.X;
    iVar5 = (pFVar15->Extent).field0_0x0._s_0.Y;
    uVar2 = pFVar15->Depth;
    uVar6 = this->FullAspectMask;
    puVar22 = &local_458[0].extent.height;
    do {
      puVar22[-0xe] = uVar21;
      bVar20 = (byte)uVar21;
      uVar14 = iVar4 >> (bVar20 & 0x1f);
      puVar22[-7] = uVar21;
      puVar22[-0xf] = uVar6;
      puVar22[-8] = uVar6;
      if ((int)uVar14 < 1) {
        uVar14 = 1;
      }
      ((VkExtent3D *)(puVar22 + -1))->width = uVar14;
      uVar14 = iVar5 >> (bVar20 & 0x1f);
      puVar22[-0xc] = uVar12;
      puVar22[-5] = uVar12;
      if ((int)uVar14 < 1) {
        uVar14 = 1;
      }
      *puVar22 = uVar14;
      uVar14 = (uint)(uVar2 >> (bVar20 & 0x1f));
      if (uVar14 == 0) {
        uVar14 = 1;
      }
      uVar21 = uVar21 + 1;
      puVar22[1] = uVar14;
      puVar22[-0xd] = 0;
      puVar22[-6] = 0;
      puVar22 = puVar22 + 0x11;
    } while (uVar21 < bVar1);
  }
  (*VulkanDynamicAPI::vkCmdCopyImage)
            ((VkCommandBuffer_T *)local_9f8,this->Image,VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
             local_a00,VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,(uint)bVar1,local_458);
  local_7b8.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_7b8.MemoryBarriers.ArrayNum = 0;
  local_7b8.MemoryBarriers.ArrayMax = 1;
  local_7b8.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_7b8.ImageBarriers.ArrayNum = 0;
  local_7b8.ImageBarriers.ArrayMax = 2;
  local_7b8.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7b8.BufferBarriers.ArrayNum = 0;
  local_7b8.BufferBarriers.ArrayMax = 0;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_7b8,this->Image,VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,VVar13,&local_908);
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_7b8,local_a00,VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,VVar13,&local_908);
  FVulkanPipelineBarrier::Execute(&local_7b8,pFVar17);
  if (local_7b8.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7b8.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_7b8.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_7b8.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_7b8.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_7b8.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  if ((this->Image == (VkImage_T *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Image != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                          ,700,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVulkanDevice::NotifyDeletedImage
            (param_1,this->Image,
             (EVar7 & (DepthStencilTargetable|ResolveTargetable|RenderTargetable)) != None);
  VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
            (&param_1->DeferredDeletionQueue,Image,(ulong64)this->Image);
  if (GVulkanLogDefrag != 0) {
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"** MOVE IMAGE %p -> %p\n");
  }
  this->Image = local_a00;
  if (local_9d8.FormatsUsed.AllocatorInstance.SecondaryData != (ForElementType<VkFormat>)0x0) {
    FMemory::Free((void *)local_9d8.FormatsUsed.AllocatorInstance.SecondaryData);
  }
  return;
}

// InvalidateMappedMemory @ 145bb12d0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanTexture::InvalidateMappedMemory(FVulkanTexture *this)

{
  VulkanRHI::FVulkanAllocation::InvalidateMappedMemory(&this->Allocation,this->Device);
  return;
}

// Move @ 145bb1bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145bb1ced) */
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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanTexture::Move
          (FVulkanTexture *this,FVulkanDevice *param_1,FVulkanContextArray *param_2,
          FVulkanAllocation *param_3)

{
  longlong *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  ulonglong *puVar5;
  size_t sVar6;
  char *_Str;
  wchar_t *pwVar7;
  undefined1 auStack_1d8 [32];
  FScriptContainerElement *local_1b8;
  longlong local_1b0;
  FScriptContainerElement *local_1a8;
  FName local_198;
  FName local_190;
  FString local_188;
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this_00 = &this[-1]._padding_;
  ::TotalSize = ::TotalSize + (uint)this->_padding_;
  if ((GVulkanLogDefrag != 0) && (pwVar7 = L"", 3 < (byte)LogVulkanRHI._0_1_)) {
    local_198 = (FName)this[-1]._padding_;
    pFVar4 = ::FName::ToString(&local_198,&local_188);
    if ((pFVar4->Data).ArrayNum == 0) {
      local_1b8 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_1b8 = (pFVar4->Data).AllocatorInstance.Data;
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (3 < (byte)LogVulkanRHI._0_1_) {
      local_190 = (FName)this[-1]._padding_;
      pFVar4 = ::FName::ToString(&local_190,&local_178);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      local_1b0 = this->_padding_;
      local_1b8 = (FScriptContainerElement *)this_00;
      local_1a8 = (FScriptContainerElement *)pwVar7;
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
  }
  puVar5 = (ulonglong *)(**(code **)(*this_00 + 0x20))(this_00);
  if ((*puVar5 & 0x20007) == 0) {
    local_1b8 = (FScriptContainerElement *)CONCAT44(local_1b8._4_4_,(int)*puVar5);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRenderTarget || bUAV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x9e7,
                       L"Surface must be a RenderTarget or a UAV in order to be moved.  UEFlags=0x%x"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (int)this->_padding_;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      _Str = "VK_IMAGE_TILING_LINEAR";
    }
    else if (iVar1 == 0x3b9d3330) {
      _Str = "VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT";
    }
    else {
      _Str = "Unhandled VkImageTiling";
    }
    local_168._padding_ = 0;
    sVar6 = strlen(_Str);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,_Str,(int)sVar6,Yes);
    local_1b8 = (FScriptContainerElement *)local_168.Ptr;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tiling == VK_IMAGE_TILING_OPTIMAL",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x9e8,L"Tiling [%s] is not supported for move, only VK_IMAGE_TILING_OPTIMAL"
                      );
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  InternalMoveSurface((FVulkanTexture *)this_00,param_1,*(FVulkanCommandListContext **)param_2,
                      param_3);
  VulkanRHI::FVulkanAllocation::Swap((FVulkanAllocation *)&this->_padding_,param_3);
  (**(code **)(this->_padding_ + 8))(&this->_padding_,param_2);
  return;
}

// SetInitialImageState @ 145bbd1f0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanTexture::SetInitialImageState
          (FVulkanTexture *this,FRHICommandListBase *param_1,VkImageLayout param_2,bool param_3,
          FClearValueBinding *param_4,bool param_5)

{
  longlong lVar1;
  FRHICommandBase *pFVar2;
  FRHICommandBase *pFVar3;
  FVulkanTexture *local_38;
  VkImageLayout VStack_30;
  undefined1 uStack_2c;
  bool bStack_2b;
  undefined2 uStack_2a;
  longlong local_28;
  FRHICommandBase *pFStack_20;
  float local_18;
  undefined4 uStack_14;
  
  bStack_2b = param_5;
  lVar1 = *(longlong *)param_4;
  pFVar2 = *(FRHICommandBase **)((longlong)&param_4->Value + 4);
  local_18 = (param_4->Value).Color[3];
  local_38 = this;
  VStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = lVar1;
  pFStack_20 = pFVar2;
  if (((!GRHICommandList.bLatchedBypass) || ((param_1->PersistentState).bImmediate == '\0')) &&
     (param_1->bExecuting == false)) {
    pFVar3 = FMemStackBase::Alloc(&param_1->MemManager,0x40,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar3;
    param_1->CommandLink = &pFVar3->Next;
    pFVar3[1]._padding_ = (longlong)local_38;
    pFVar3[1].Next =
         (FRHICommandBase *)CONCAT26(uStack_2a,CONCAT15(bStack_2b,CONCAT14(uStack_2c,VStack_30)));
    pFVar3->Next = (FRHICommandBase *)0x0;
    pFVar3->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FVulkanTexture::SetInitialImageState'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar3[2]._padding_ = lVar1;
    pFVar3[2].Next = pFVar2;
    pFVar3[3].Next = (FRHICommandBase *)L"FVulkanTexture::SetInitialImageState";
    pFVar3[3]._padding_ = CONCAT44(uStack_14,local_18);
    return;
  }
  `FVulkanTexture::SetInitialImageState'::__l2::<lambda_1>::operator()(&local_38,param_1);
  return;
}

// UpdateLinkedViews @ 145bc0320

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanTexture::UpdateLinkedViews(FVulkanTexture *this,FVulkanContextArray *param_1)

{
  ulonglong uVar1;
  int iVar2;
  FVulkanView *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 local_res8 [8];
  FVulkanContextArray *local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_res10 = param_1;
  UpdateViews((FVulkanTexture *)&this[-1]._padding_,param_1,(uint)this->_padding_,
              (VkSamplerYcbcrConversion_T *)0x0);
  pbVar7 = (byte *)(**(code **)(this[-1]._padding_ + 0x20))(&this[-1]._padding_);
  if ((*pbVar7 & 7) != 0) {
    FVulkanDevice::NotifyDeletedImage
              ((FVulkanDevice *)this->_padding_,(VkImage_T *)this->_padding_,true);
  }
  iVar11 = 0;
  iVar2 = (int)this->_padding_;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
  uVar5 = 1;
  iVar13 = 0;
  iVar6 = 0;
  if (iVar2 != 0) {
    plVar12 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar12 = (longlong *)TStack_60.Array;
    }
    uVar10 = (uint)*plVar12;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar6 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145bc040e;
      uVar10 = *(uint *)((longlong)plVar12 + lVar8 * 4 + 4);
    }
    uVar5 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar6 = iVar13 + -1 + local_res18;
    if (iVar2 < iVar6) {
      iVar6 = iVar2;
    }
  }
LAB_145bc040e:
  uVar10 = (uint)this->_padding_;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar5,iVar11);
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar6;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,(int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
  if ((((int)uVar10 < 0) || (iVar2 < (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = (uint)this->_padding_;
  if (uVar10 != uVar5) {
    plVar12 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar12 = &this->_padding_;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)plVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145bc0510;
      uVar10 = *(uint *)((longlong)plVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
  }
LAB_145bc0510:
  while( true ) {
    if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanView_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_)) break;
    this_00 = *(FVulkanView **)(this->_padding_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (this_00 != (FVulkanView *)0x0) {
      FVulkanView::~FVulkanView(this_00);
      ::operator_delete(this_00,0x38);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<unsigned_int,FVulkanView_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanView_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,FVulkanView_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanView_*,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  FVulkanViewableResource::UpdateLinkedViews((FVulkanViewableResource *)this,local_res10);
  return;
}

// UpdateViews @ 145bc1910

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanTexture::UpdateViews
          (FVulkanTexture *this,FVulkanContextArray *param_1,uint param_2,
          VkSamplerYcbcrConversion_T *param_3)

{
  VkImageViewType VVar1;
  longlong lVar2;
  FVulkanTextureViewDesc *pFVar3;
  FVulkanView *this_00;
  FVulkanView *pFVar4;
  FVulkanView *this_01;
  VkDescriptorType VVar5;
  FVulkanTextureViewDesc local_78;
  FVulkanTextureViewDesc local_40;
  
  if (this->Image != (VkImage_T *)0x0) {
    lVar2 = (**(code **)(this->_padding_ + 0x20))();
    VVar1 = UETextureDimensionToVkImageViewType(*(ETextureDimension *)(lVar2 + 0x32));
    if (VVar1 != VK_IMAGE_VIEW_TYPE_MAX_ENUM) {
      pFVar3 = CreateTextureViewDesc(&local_40,this,param_2,param_3);
      local_78.ViewType = pFVar3->ViewType;
      local_78.AspectFlags = pFVar3->AspectFlags;
      local_78.UEFormat = pFVar3->UEFormat;
      local_78._9_3_ = *(undefined3 *)&pFVar3->field_0x9;
      local_78.Format = pFVar3->Format;
      local_78.FirstMip = pFVar3->FirstMip;
      local_78.NumMips = pFVar3->NumMips;
      local_78.ArraySliceIndex = pFVar3->ArraySliceIndex;
      local_78.NumArraySlices = pFVar3->NumArraySlices;
      local_78.ImageUsageFlags = pFVar3->ImageUsageFlags;
      local_78._36_4_ = *(undefined4 *)&pFVar3->field_0x24;
      local_78.SamplerYcbcrConversion._0_4_ = *(undefined4 *)&pFVar3->SamplerYcbcrConversion;
      local_78.SamplerYcbcrConversion._4_4_ =
           *(undefined4 *)((longlong)&pFVar3->SamplerYcbcrConversion + 4);
      local_78._48_8_ = *(undefined8 *)&pFVar3->bUseIdentitySwizzle;
      lVar2 = (**(code **)(this->_padding_ + 0x20))(this);
      if (((GPixelFormats[*(byte *)(lVar2 + 0x33)].Capabilities & TextureSample) == None) ||
         (VVar5 = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, (this->ImageUsageFlags & 4) == 0)) {
        VVar5 = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
      }
      this_01 = (FVulkanView *)0x0;
      if (this->DefaultView == (FVulkanView *)0x0) {
        this_00 = ::operator_new(0x38);
        pFVar4 = this_01;
        if (this_00 != (FVulkanView *)0x0) {
          pFVar4 = FVulkanView::FVulkanView(this_00,this->Device,VVar5);
        }
        this->DefaultView = pFVar4;
        FVulkanView::CreateTextureView(pFVar4,this->Image,&local_78);
      }
      else {
        FVulkanView::Invalidate(this->DefaultView);
        FVulkanView::UpdateTextureView(this->DefaultView,param_1,this->Image,&local_78);
      }
      if (this->FullAspectMask == this->PartialAspectMask) {
        this->PartialView = this->DefaultView;
      }
      else {
        local_40.UEFormat = local_78.UEFormat;
        local_40._9_3_ = local_78._9_3_;
        local_40.Format = local_78.Format;
        local_40.ViewType = local_78.ViewType;
        local_40.AspectFlags = this->PartialAspectMask;
        local_40._36_4_ = local_78._36_4_;
        local_40.ImageUsageFlags = local_78.ImageUsageFlags;
        local_40.FirstMip = local_78.FirstMip;
        local_40.NumMips = local_78.NumMips;
        local_40.ArraySliceIndex = local_78.ArraySliceIndex;
        local_40.NumArraySlices = local_78.NumArraySlices;
        local_40._48_8_ = local_78._48_8_ & 0xffffffffffffff00;
        local_40.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
        if (this->PartialView == (FVulkanView *)0x0) {
          pFVar4 = ::operator_new(0x38);
          if (pFVar4 != (FVulkanView *)0x0) {
            this_01 = FVulkanView::FVulkanView(pFVar4,this->Device,VVar5);
          }
          this->PartialView = this_01;
          FVulkanView::CreateTextureView(this_01,this->Image,&local_40);
        }
        else {
          FVulkanView::Invalidate(this->PartialView);
          FVulkanView::UpdateTextureView(this->PartialView,param_1,this->Image,&local_40);
        }
      }
    }
  }
  return;
}

// UploadInitialData @ 145bc1b30

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanTexture::UploadInitialData
          (FVulkanTexture *this,FRHICommandListBase *param_1,FStagingBuffer *param_2)

{
  FRHICommandBase *pFVar1;
  FVulkanTexture *local_18;
  FStagingBuffer *pFStack_10;
  
  this->DefaultLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
  local_18 = this;
  pFStack_10 = param_2;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar1 = FMemStackBase::Alloc(&param_1->MemManager,0x28,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar1;
    param_1->CommandLink = &pFVar1->Next;
    pFVar1->Next = (FRHICommandBase *)0x0;
    pFVar1->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FVulkanTexture::UploadInitialData'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar1[2]._padding_ = (longlong)L"FVulkanTexture::UploadInitialData";
    pFVar1[1]._padding_ = (longlong)local_18;
    pFVar1[1].Next = (FRHICommandBase *)pFStack_10;
    return;
  }
  `FVulkanTexture::UploadInitialData'::__l2::<lambda_1>::operator()(&local_18,param_1);
  return;
}

// operator() @ 1504d93c0

bool __thiscall `FVulkanTexture::FVulkanTexture'::__l34::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5704882760083044449>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5704882760083044449>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

