// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 10

// GetTextureView @ 145ae77e0

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

FTextureView * __thiscall FVulkanView::GetTextureView(FVulkanView *this)

{
  code *pcVar1;
  bool bVar2;
  FTextureView *pFVar3;
  
  if ((this->Storage).TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTextureView *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FTextureView *)&this->Storage;
}

// FVulkanView @ 145bc9020

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

FVulkanView * __thiscall
FVulkanView::FVulkanView(FVulkanView *this,FVulkanDevice *param_1,VkDescriptorType param_2)

{
  FRHIDescriptorHandle FVar1;
  undefined1 local_res8 [32];
  
  this->Device = param_1;
  (this->BindlessHandle).Index = 0xffffffff;
  (this->BindlessHandle).Type = Invalid;
  this->DescriptorType = param_2;
  *(undefined1 *)&(this->Storage)._padding_ = 0;
  (this->Storage).TypeIndex = '\0';
  FVar1 = FVulkanBindlessDescriptorManager::AllocateDescriptor
                    (param_1->BindlessDescriptorManager,(VkDescriptorType)local_res8);
  this->BindlessHandle = *(FRHIDescriptorHandle *)FVar1;
  return this;
}

// ~FVulkanView @ 145bc9600

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

void __thiscall FVulkanView::~FVulkanView(FVulkanView *this)

{
  FRHIDescriptorHandle FVar1;
  
  Invalidate(this);
  if (((this->BindlessHandle).Index != 0xffffffff) && ((this->BindlessHandle).Type != Invalid)) {
    FVar1 = this->BindlessHandle;
    if ((FVar1.Index != 0xffffffff) && (FVar1.Type != Invalid)) {
      VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
                (&this->Device->DeferredDeletionQueue,BindlessHandle,(ulong64)FVar1);
    }
    (this->BindlessHandle).Index = 0xffffffff;
    (this->BindlessHandle).Type = Invalid;
    *(undefined3 *)&(this->BindlessHandle).field_0x5 = 0;
  }
  return;
}

// CreateTextureView @ 145bcc280

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
FVulkanView::CreateTextureView(FVulkanView *this,VkImage_T *param_1,FVulkanTextureViewDesc *param_2)

{
  FVulkanContextArray local_18;
  
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  InitAsTextureView(this,&local_18,param_1,param_2);
  return;
}

// InitAsAccelerationStructureView @ 145bce300

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
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */

void __thiscall
FVulkanView::InitAsAccelerationStructureView
          (FVulkanView *this,FVulkanContextArray *param_1,FVulkanBuffer *param_2,uint param_3,
          uint param_4)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  VkResult VVar4;
  ulonglong uVar5;
  VkAccelerationStructureCreateInfoKHR local_58;
  
  if ((this->Storage).TypeIndex != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetViewType() == EType::Null",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                       ,0x142,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = (ulonglong)(this->Storage).TypeIndex;
  if (4 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FVulkanView::FInvalidatedState,FVulkanView::FTypedBufferView,FVulkanView::FTextureView,FVulkanView::FStructuredBufferView,FVulkanView::FAccelerationStructureView>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])();
  local_58.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR;
  local_58._52_8_ = 0;
  local_58.deviceAddress._4_4_ = 0;
  (this->Storage)._padding_ = 0;
  (this->Storage).TypeIndex = '\x04';
  uVar1 = (param_2->CurrentBufferAlloc).Alloc.VulkanHandle;
  local_58.type = VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR;
  local_58._20_4_ = 0;
  local_58.buffer._0_4_ = (undefined4)uVar1;
  local_58.buffer._4_4_ = (undefined4)(uVar1 >> 0x20);
  local_58.offset._0_4_ = (param_2->CurrentBufferAlloc).Alloc.Offset + param_3;
  local_58.offset._4_4_ = 0;
  local_58.size._0_4_ = param_4;
  local_58.size._4_4_ = 0;
  local_58._4_8_ = 0;
  local_58._12_8_ = 0;
  VVar4 = (*VulkanDynamicAPI::vkCreateAccelerationStructureKHR)
                    (this->Device->Device,&local_58,&VulkanRHI::GAllocationCallbacks,
                     (VkAccelerationStructureKHR_T **)&this->Storage);
  if (VVar4 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar4,
               "VulkanDynamicAPI::vkCreateAccelerationStructureKHR(Device.GetHandle(), &CreateInfo, VULKAN_CPU_ALLOCATOR, &ASV.Handle)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
               ,0x14d);
  }
  FVulkanBindlessDescriptorManager::UpdateAccelerationStructure
            (this->Device->BindlessDescriptorManager,param_1,this->BindlessHandle,
             (VkAccelerationStructureKHR_T *)(this->Storage)._padding_,true);
  return;
}

// InitAsStructuredBufferView @ 145bce470

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
FVulkanView::InitAsStructuredBufferView
          (FVulkanView *this,FVulkanContextArray *param_1,FVulkanBuffer *param_2,uint param_3,
          uint param_4)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar1 = (this->Storage).TypeIndex;
  if ((uVar1 == '\0') && ((char)(this->Storage)._padding_ == '\0')) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
    if ((uVar1 != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetViewType() == EType::Null",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                           ,299,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar7 = (ulonglong)(this->Storage).TypeIndex;
  if ((4 < uVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FVulkanView::FInvalidatedState,FVulkanView::FTypedBufferView,FVulkanView::FTextureView,FVulkanView::FStructuredBufferView,FVulkanView::FAccelerationStructureView>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar7])(&this->Storage);
  (this->Storage)._padding_ = 0;
  (this->Storage)._padding_ = 0;
  (this->Storage)._padding_ = 0;
  (this->Storage).TypeIndex = '\x03';
  uVar5 = (param_2->CurrentBufferAlloc).Alloc.Offset + param_3;
  (this->Storage)._padding_ = (param_2->CurrentBufferAlloc).Alloc.VulkanHandle;
  *(uint *)&(this->Storage)._padding_ = (param_2->CurrentBufferAlloc).Alloc.HandleId;
  *(uint *)((longlong)&(this->Storage)._padding_ + 4) = uVar5;
  uVar4 = param_4;
  if (((param_2->_padding_ & 4) != 0) &&
     (uVar4 = (param_2->CurrentBufferAlloc).Alloc.Size, param_4 < uVar4)) {
    uVar4 = param_4;
  }
  *(uint *)&(this->Storage)._padding_ = uVar4;
  FVulkanBindlessDescriptorManager::UpdateBuffer
            (this->Device->BindlessDescriptorManager,param_1,this->BindlessHandle,
             this->DescriptorType,(VkBuffer_T *)(param_2->CurrentBufferAlloc).Alloc.VulkanHandle,
             (ulonglong)uVar5,(ulonglong)uVar4,bVar6);
  return;
}

// InitAsTextureView @ 145bce5e0

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanView::InitAsTextureView
          (FVulkanView *this,FVulkanContextArray *param_1,VkImage_T *param_2,
          FVulkanTextureViewDesc *param_3)

{
  uchar uVar1;
  VkSamplerYcbcrConversion_T *pVVar2;
  FName FVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  VkResult VVar12;
  VkComponentMapping *pVVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews> FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar16;
  undefined1 auStackY_198 [32];
  bool local_138;
  FLLMScope local_134;
  FName local_130;
  VkImage_T *local_128;
  FVulkanContextArray *local_120;
  FMemScope local_118;
  FStatMessage local_110;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 uStack_c8;
  uint uStack_c0;
  undefined4 local_bc;
  FName local_b8 [2];
  VkImageViewCreateInfo local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar1 = (this->Storage).TypeIndex;
  local_128 = param_2;
  local_120 = param_1;
  if ((uVar1 == '\0') && ((char)(this->Storage)._padding_ == '\0')) {
    local_138 = true;
  }
  else {
    local_138 = false;
    if (uVar1 != '\0') {
      local_138 = false;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetViewType() == EType::Null",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                          ,0xc4,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  uVar16 = (ulonglong)(this->Storage).TypeIndex;
  if ((4 < uVar16) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FVulkanView::FInvalidatedState,FVulkanView::FTypedBufferView,FVulkanView::FTextureView,FVulkanView::FStructuredBufferView,FVulkanView::FAccelerationStructureView>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar16])(&this->Storage);
  (this->Storage)._padding_ = 0;
  (this->Storage)._padding_ = 0;
  (this->Storage)._padding_ = 0;
  (this->Storage).TypeIndex = '\x02';
  FLLMScope::FLLMScope(&local_134,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(&local_118,VideoRecording|ThreadStackPlatform,true);
  local_a8.format = param_3->Format;
  local_a8._20_4_ = 0;
  local_a8.subresourceRange.baseArrayLayer = 0;
  local_a8.subresourceRange.layerCount = 0;
  local_a8._76_4_ = 0;
  local_a8.viewType = param_3->ViewType;
  local_a8.components.r = VK_COMPONENT_SWIZZLE_IDENTITY;
  local_a8.components.g = VK_COMPONENT_SWIZZLE_IDENTITY;
  local_a8.components.b = VK_COMPONENT_SWIZZLE_IDENTITY;
  local_a8.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
  local_a8._4_4_ = 0;
  local_a8.flags = 0;
  local_a8.components.a = VK_COMPONENT_SWIZZLE_IDENTITY;
  local_a8.subresourceRange.aspectMask = 0;
  local_a8.subresourceRange.baseMipLevel = 0;
  local_a8.subresourceRange.levelCount = 0;
  puVar10 = (undefined4 *)0x0;
  if (((*(byte *)&(this->Device->OptionalDeviceExtensions).field0_0x0 & 8) != 0) &&
     (puVar10 = (undefined4 *)0x0, local_a8.format - VK_FORMAT_ASTC_4x4_UNORM_BLOCK < 0x1c)) {
    puVar10 = (undefined4 *)0x0;
    switch(local_a8.format) {
    case VK_FORMAT_ASTC_4x4_SRGB_BLOCK:
    case VK_FORMAT_ASTC_5x4_SRGB_BLOCK:
    case VK_FORMAT_ASTC_5x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_6x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_6x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x8_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x8_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x10_SRGB_BLOCK:
    case VK_FORMAT_ASTC_12x10_SRGB_BLOCK:
    case VK_FORMAT_ASTC_12x12_SRGB_BLOCK:
      break;
    default:
      local_fc = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      puVar10 = &local_100;
      local_100 = 0x3b9bcfb8;
      uStack_f0 = 0x25;
      uStack_ec = 0;
    }
  }
  pVVar2 = param_3->SamplerYcbcrConversion;
  local_a8.pNext = puVar10;
  uStack_e0 = (undefined4 *)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
  if (pVVar2 != (VkSamplerYcbcrConversion_T *)0x0) {
    local_e4 = 0;
    uStack_d8 = SUB84(pVVar2,0);
    uStack_d4 = (undefined4)((ulonglong)pVVar2 >> 0x20);
    local_a8.pNext = &local_e8;
    local_e8 = 0x3b9d2b61;
    uStack_e0 = puVar10;
  }
  local_a8.image = param_2;
  if (param_3->bUseIdentitySwizzle == false) {
    pVVar13 = FVulkanDevice::GetFormatComponentMapping(this->Device,param_3->UEFormat);
    uVar6 = pVVar13->r;
    uVar7 = pVVar13->g;
    uVar8 = pVVar13->b;
    uVar9 = pVVar13->a;
    local_a8.components.r = uVar6;
    local_a8.components.g = uVar7;
    local_a8.components.b = uVar8;
    local_a8.components.a = uVar9;
  }
  else {
    local_a8.components.b = VK_COMPONENT_SWIZZLE_IDENTITY;
    local_a8.components.a = VK_COMPONENT_SWIZZLE_IDENTITY;
    local_a8.components.r = VK_COMPONENT_SWIZZLE_IDENTITY;
    local_a8.components.g = VK_COMPONENT_SWIZZLE_IDENTITY;
  }
  local_a8.subresourceRange.aspectMask = param_3->AspectFlags;
  local_a8.subresourceRange.baseMipLevel = param_3->FirstMip;
  if (param_3->NumMips == 0xffffffff) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4078520026821295886>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                        ,0xf2,"ViewDesc.NumMips != 0xFFFFFFFF");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_a8.subresourceRange.levelCount = param_3->NumMips;
  if (param_3->ArraySliceIndex == 0xffffffff) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4078520026821295883>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                        ,0xf5,"ViewDesc.ArraySliceIndex != 0xFFFFFFFF");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_3->NumArraySlices == 0xffffffff) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4078520026821295882>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                        ,0xf6,"ViewDesc.NumArraySlices != 0xFFFFFFFF");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_a8.subresourceRange.baseArrayLayer = param_3->ArraySliceIndex;
  local_a8.subresourceRange.layerCount = param_3->NumArraySlices;
  if (param_3->UEFormat == PF_X24_G8) {
    if ((local_a8.format != GPixelFormats[0xb].PlatformFormat) ||
       (local_a8.format == VK_FORMAT_UNDEFINED)) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4078520026821295873>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                          ,0xff,
                          "(ViewInfo.format == (VkFormat)GPixelFormats[PF_DepthStencil].PlatformFormat) && (ViewInfo.format != VK_FORMAT_UNDEFINED)"
                         );
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_a8.subresourceRange.aspectMask = 4;
  }
  puVar10 = local_a8.pNext;
  uStack_c8 = (undefined4 *)CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8);
  if (param_3->ImageUsageFlags != 0) {
    local_d0 = 0x3b9c930a;
    local_cc = 0;
    puVar10 = &local_d0;
    local_bc = 0;
    uStack_c0 = param_3->ImageUsageFlags;
    uStack_c8 = local_a8.pNext;
  }
  FVar15 = StatPtr_STAT_VulkanNumImageViews;
  local_a8.pNext = puVar10;
  if (StatPtr_STAT_VulkanNumImageViews == (FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews>)0x0
     ) {
    pFVar14 = ::FName::FName(local_b8,"STAT_VulkanNumImageViews");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumImageViews,*pFVar14,
                        L"Num Image Views","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar15;
  local_130 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_110.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_110.StatData.Pad[0] = '\x01';
    local_110.StatData.Pad[1] = '\0';
    local_110.StatData.Pad[2] = '\0';
    local_110.StatData.Pad[3] = '\0';
    local_110.StatData.Pad[4] = '\0';
    local_110.StatData.Pad[5] = '\0';
    local_110.StatData.Pad[6] = '\0';
    local_110.StatData.Pad[7] = '\0';
    local_130 = FVar3;
    local_110.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_110);
    FStatsTrace::Add(&local_130,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
      param_2 = local_128;
    }
    else {
      param_2 = local_128;
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
        param_2 = local_128;
      }
    }
  }
  VVar12 = (*VulkanDynamicAPI::vkCreateImageView)
                     (this->Device->Device,&local_a8,&VulkanRHI::GAllocationCallbacks,
                      (VkImageView_T **)&this->Storage);
  if (VVar12 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar12,
               "VulkanRHI::vkCreateImageView(Device.GetHandle(), &ViewInfo, VULKAN_CPU_ALLOCATOR, &TV.View)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
               ,0x10f);
  }
  (this->Storage)._padding_ = (longlong)param_2;
  if ((int)GMaxRHIFeatureLevel < 2) {
    LOCK();
    UNLOCK();
    iVar5 = GVulkanImageViewHandleIdCounter._0_4_;
    GVulkanImageViewHandleIdCounter =
         (TAtomic<unsigned___int64>)((longlong)GVulkanImageViewHandleIdCounter + 1);
    *(int *)&(this->Storage)._padding_ = iVar5 + 1;
  }
  FVulkanBindlessDescriptorManager::UpdateImage
            (this->Device->BindlessDescriptorManager,local_120,this->BindlessHandle,
             this->DescriptorType,(VkImageView_T *)(this->Storage)._padding_,
             (param_3->AspectFlags & 6) != 0,local_138);
  FMemScope::~FMemScope(&local_118);
  FLLMScope::~FLLMScope(&local_134);
  return;
}

// InitAsTypedBufferView @ 145bceb30

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanView::InitAsTypedBufferView
          (FVulkanView *this,FVulkanContextArray *param_1,FVulkanBuffer *param_2,
          EPixelFormat param_3,uint param_4,uint param_5)

{
  uchar uVar1;
  VkFormat VVar2;
  uint uVar3;
  ulong64 uVar4;
  FVulkanDevice *pFVar5;
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  VkResult VVar9;
  longlong lVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumBufferViews> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar13;
  bool bVar14;
  int iVar15;
  FName local_res8;
  FVulkanContextArray *local_res10;
  FName local_res18;
  FStatMessage local_88;
  VkBufferViewCreateInfo local_78;
  
  uVar1 = (this->Storage).TypeIndex;
  local_res10 = param_1;
  if ((uVar1 == '\0') && ((char)(this->Storage)._padding_ == '\0')) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
    if ((uVar1 != '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetViewType() == EType::Null",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                           ,0x91,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar13 = (ulonglong)(this->Storage).TypeIndex;
  if ((4 < uVar13) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FVulkanView::FInvalidatedState,FVulkanView::FTypedBufferView,FVulkanView::FTextureView,FVulkanView::FStructuredBufferView,FVulkanView::FAccelerationStructureView>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar13])(&this->Storage);
  (this->Storage)._padding_ = 0;
  (this->Storage)._padding_ = 0;
  (this->Storage).TypeIndex = '\x01';
  iVar15 = (param_2->CurrentBufferAlloc).Alloc.Offset + param_4;
  if ((param_3 == PF_Unknown) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("UEFormat != PF_Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                         ,0x97,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  VVar2 = GVulkanBufferFormat[param_3];
  if ((VVar2 == VK_FORMAT_UNDEFINED) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Format != VK_FORMAT_UNDEFINED",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                         ,0x99,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_78.sType = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;
  local_78.range._4_4_ = 0;
  uVar4 = (param_2->CurrentBufferAlloc).Alloc.VulkanHandle;
  local_78._20_4_ = 0;
  local_78.buffer._0_4_ = (undefined4)uVar4;
  local_78.buffer._4_4_ = (undefined4)(uVar4 >> 0x20);
  local_78._36_4_ = 0;
  local_78.range._0_4_ = 0;
  local_78.offset._4_4_ = 0;
  local_78._4_8_ = 0;
  local_78._12_8_ = 0;
  local_78.format = VVar2;
  local_78.offset._0_4_ = iVar15;
  switch(VVar2) {
  case VK_FORMAT_R5G6B5_UNORM_PACK16:
  case VK_FORMAT_R8G8_UNORM:
  case VK_FORMAT_R16_UNORM:
  case VK_FORMAT_R16_UINT:
  case VK_FORMAT_R16_SINT:
  case VK_FORMAT_R16_SFLOAT:
  case VK_FORMAT_D16_UNORM:
    lVar10 = 2;
    break;
  default:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                       ,0x135,L"Unhandled bits per pixel for VkFormat %d");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  case VK_FORMAT_R8_UNORM:
  case VK_FORMAT_R8_UINT:
  case VK_FORMAT_D32_SFLOAT_S8_UINT:
  case VK_FORMAT_BC2_UNORM_BLOCK:
  case VK_FORMAT_BC2_SRGB_BLOCK:
  case VK_FORMAT_BC3_UNORM_BLOCK:
  case VK_FORMAT_BC3_SRGB_BLOCK:
  case VK_FORMAT_BC4_UNORM_BLOCK:
  case VK_FORMAT_BC4_SNORM_BLOCK:
  case VK_FORMAT_BC5_UNORM_BLOCK:
  case VK_FORMAT_BC5_SNORM_BLOCK:
  case VK_FORMAT_BC6H_UFLOAT_BLOCK:
  case VK_FORMAT_BC6H_SFLOAT_BLOCK:
  case VK_FORMAT_BC7_UNORM_BLOCK:
  case VK_FORMAT_BC7_SRGB_BLOCK:
    lVar10 = 1;
    break;
  case VK_FORMAT_R8G8B8A8_UNORM:
  case VK_FORMAT_R8G8B8A8_SNORM:
  case VK_FORMAT_R8G8B8A8_UINT:
  case VK_FORMAT_B8G8R8A8_UNORM:
  case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
  case VK_FORMAT_R16G16_UNORM:
  case VK_FORMAT_R16G16_UINT:
  case VK_FORMAT_R16G16_SFLOAT:
  case VK_FORMAT_R32_UINT:
  case VK_FORMAT_R32_SINT:
  case VK_FORMAT_R32_SFLOAT:
  case VK_FORMAT_B10G11R11_UFLOAT_PACK32:
  case VK_FORMAT_X8_D24_UNORM_PACK32:
  case VK_FORMAT_D32_SFLOAT:
  case VK_FORMAT_D24_UNORM_S8_UINT:
    lVar10 = 4;
    break;
  case VK_FORMAT_R16G16B16A16_UNORM:
  case VK_FORMAT_R16G16B16A16_SNORM:
  case VK_FORMAT_R16G16B16A16_UINT:
  case VK_FORMAT_R16G16B16A16_SINT:
  case VK_FORMAT_R16G16B16A16_SFLOAT:
  case VK_FORMAT_R32G32_UINT:
  case VK_FORMAT_R32G32_SINT:
  case VK_FORMAT_R32G32_SFLOAT:
  case VK_FORMAT_R64_UINT:
  case VK_FORMAT_R64_SINT:
    lVar10 = 8;
    break;
  case VK_FORMAT_R32G32B32A32_UINT:
  case VK_FORMAT_R32G32B32A32_SFLOAT:
    lVar10 = 0x10;
    break;
  case VK_FORMAT_BC1_RGB_UNORM_BLOCK:
  case VK_FORMAT_BC1_RGB_SRGB_BLOCK:
  case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:
  case VK_FORMAT_BC1_RGBA_SRGB_BLOCK:
    lVar10 = 0;
  }
  pFVar5 = this->Device;
  uVar13 = (ulonglong)(pFVar5->GpuProps).limits.maxTexelBufferElements * lVar10;
  if (param_5 < uVar13) {
    uVar13 = (ulonglong)param_5;
  }
  local_78.range._0_4_ = (undefined4)uVar13;
  local_78.range._4_4_ = (undefined4)(uVar13 >> 0x20);
  if (((param_2->BufferUsageFlags & 0xc) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer->GetBufferUsageFlags() & (VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT | VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                         ,0xae,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((ulonglong)param_4 & (pFVar5->GpuProps).limits.minTexelBufferOffsetAlignment - 1) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(InOffset, Limits.minTexelBufferOffsetAlignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                         ,0xaf,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  VVar9 = (*VulkanDynamicAPI::vkCreateBufferView)
                    (this->Device->Device,&local_78,&VulkanRHI::GAllocationCallbacks,
                     (VkBufferView_T **)&this->Storage);
  if (VVar9 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar9,
               "VulkanRHI::vkCreateBufferView(Device.GetHandle(), &ViewInfo, VULKAN_CPU_ALLOCATOR, &TBV.View)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
               ,0xb1);
  }
  uVar3 = (uint)param_2->_padding_;
  *(bool *)((longlong)&(this->Storage)._padding_ + 4) = (uVar3 >> 2 & 1) != 0;
  if (((uVar3 >> 2 & 1) == 0) && ((int)GMaxRHIFeatureLevel < 2)) {
    LOCK();
    UNLOCK();
    iVar15 = GVulkanBufferViewHandleIdCounter._0_4_;
    GVulkanBufferViewHandleIdCounter =
         (TAtomic<unsigned___int64>)((longlong)GVulkanBufferViewHandleIdCounter + 1);
    *(int *)&(this->Storage)._padding_ = iVar15 + 1;
  }
  FVar12 = StatPtr_STAT_VulkanNumBufferViews;
  if (StatPtr_STAT_VulkanNumBufferViews ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumBufferViews>)0x0) {
    pFVar11 = ::FName::FName(&local_res18,"STAT_VulkanNumBufferViews");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumBufferViews>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumBufferViews,*pFVar11,
                        L"Num Buffer Views","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar12;
  local_res8 = FVar6;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_88.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
    local_88.StatData.Pad[0] = '\x01';
    local_88.StatData.Pad[1] = '\0';
    local_88.StatData.Pad[2] = '\0';
    local_88.StatData.Pad[3] = '\0';
    local_88.StatData.Pad[4] = '\0';
    local_88.StatData.Pad[5] = '\0';
    local_88.StatData.Pad[6] = '\0';
    local_88.StatData.Pad[7] = '\0';
    local_res8 = FVar6;
    local_88.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_88);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  FVulkanBindlessDescriptorManager::UpdateTexelBuffer
            (this->Device->BindlessDescriptorManager,local_res10,this->BindlessHandle,
             this->DescriptorType,&local_78,bVar14);
  return;
}

// Invalidate @ 145bcf680

/* WARNING: Removing unreachable block (ram,0x000145bcf71d) */
/* WARNING: Removing unreachable block (ram,0x000145bcf742) */
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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanView::Invalidate(FVulkanView *this)

{
  uchar uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumBufferViews> FVar9;
  EType EVar10;
  FVulkanDevice *pFVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_48;
  FStatMessage local_38;
  
  uVar1 = (this->Storage).TypeIndex;
  if ((uVar1 == '\0') && ((char)(this->Storage)._padding_ == '\0')) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  if (uVar1 != '\0') {
    if (uVar1 == '\x01') {
      FVar9 = StatPtr_STAT_VulkanNumBufferViews;
      if (StatPtr_STAT_VulkanNumBufferViews ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanNumBufferViews>)0x0) {
        pFVar5 = ::FName::FName(&local_res20,"STAT_VulkanNumBufferViews");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumBufferViews>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumBufferViews,*pFVar5,
                           L"Num Buffer Views","STATGROUP_VulkanRHI","STATCAT_Advanced",
                           L"Vulkan RHI",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar9;
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar7 == (FThreadStats *)0x0) {
          pFVar8 = FThreadStatsPool::Get();
          pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
        }
        local_38.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_38.StatData.Pad[0] = '\x01';
        local_38.StatData.Pad[1] = '\0';
        local_38.StatData.Pad[2] = '\0';
        local_38.StatData.Pad[3] = '\0';
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_res10 = FVar2;
        local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar7,&local_38);
        FStatsTrace::Add(&local_res10,-1);
        if (pFVar7->ScopeCount == 0) {
          FThreadStats::Flush(pFVar7,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar7,false,false);
        }
      }
      pFVar11 = this->Device;
      if (((this->Storage).TypeIndex != '\x01') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar10 = BufferView;
    }
    else {
      if (uVar1 != '\x02') {
        if (uVar1 != '\x03') {
          if (uVar1 == '\x04') {
            VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
                      (&this->Device->DeferredDeletionQueue,AccelerationStructure,
                       (this->Storage)._padding_);
          }
          else {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                               ,0x71,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        goto LAB_145bcfa8d;
      }
      FVar6 = StatPtr_STAT_VulkanNumImageViews;
      if (StatPtr_STAT_VulkanNumImageViews ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews>)0x0) {
        pFVar5 = ::FName::FName(&local_res18,"STAT_VulkanNumImageViews");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumImageViews,*pFVar5,
                           L"Num Image Views","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI"
                           ,true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar6;
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar7 == (FThreadStats *)0x0) {
          pFVar8 = FThreadStatsPool::Get();
          pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
        }
        local_48.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_48.StatData.Pad[0] = '\x01';
        local_48.StatData.Pad[1] = '\0';
        local_48.StatData.Pad[2] = '\0';
        local_48.StatData.Pad[3] = '\0';
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_res8 = FVar2;
        local_48.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar7,&local_48);
        FStatsTrace::Add(&local_res8,-1);
        if (pFVar7->ScopeCount == 0) {
          FThreadStats::Flush(pFVar7,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar7,false,false);
        }
      }
      pFVar11 = this->Device;
      if (((this->Storage).TypeIndex != '\x02') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar10 = ImageView;
    }
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&pFVar11->DeferredDeletionQueue,EVar10,(this->Storage)._padding_);
  }
LAB_145bcfa8d:
  uVar12 = (ulonglong)(this->Storage).TypeIndex;
  if ((4 < uVar12) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FVulkanView::FInvalidatedState,FVulkanView::FTypedBufferView,FVulkanView::FTextureView,FVulkanView::FStructuredBufferView,FVulkanView::FAccelerationStructureView>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar12])(&this->Storage);
  (this->Storage).TypeIndex = '\0';
  *(undefined1 *)&(this->Storage)._padding_ = uVar13;
  return;
}

// UpdateTextureView @ 145bd6120

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanView::UpdateTextureView
          (FVulkanView *this,FVulkanContextArray *param_1,VkImage_T *param_2,
          FVulkanTextureViewDesc *param_3)

{
  uchar uVar1;
  VkSamplerYcbcrConversion_T *pVVar2;
  FName FVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  VkResult VVar12;
  VkComponentMapping *pVVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews> FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar16;
  undefined1 auStackY_198 [32];
  bool bStack_138;
  FLLMScope FStack_134;
  FName FStack_130;
  VkImage_T *pVStack_128;
  FVulkanContextArray *pFStack_120;
  FMemScope FStack_118;
  FStatMessage FStack_110;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  FName aFStack_b8 [2];
  VkImageViewCreateInfo VStack_a8;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar1 = (this->Storage).TypeIndex;
  pVStack_128 = param_2;
  pFStack_120 = param_1;
  if ((uVar1 == '\0') && ((char)(this->Storage)._padding_ == '\0')) {
    bStack_138 = true;
  }
  else {
    bStack_138 = false;
    if (uVar1 != '\0') {
      bStack_138 = false;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetViewType() == EType::Null",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                          ,0xc4,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  uVar16 = (ulonglong)(this->Storage).TypeIndex;
  if ((4 < uVar16) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FVulkanView::FInvalidatedState,FVulkanView::FTypedBufferView,FVulkanView::FTextureView,FVulkanView::FStructuredBufferView,FVulkanView::FAccelerationStructureView>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar16])(&this->Storage);
  (this->Storage)._padding_ = 0;
  (this->Storage)._padding_ = 0;
  (this->Storage)._padding_ = 0;
  (this->Storage).TypeIndex = '\x02';
  FLLMScope::FLLMScope(&FStack_134,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(&FStack_118,VideoRecording|ThreadStackPlatform,true);
  VStack_a8.format = param_3->Format;
  VStack_a8._20_4_ = 0;
  VStack_a8.subresourceRange.baseArrayLayer = 0;
  VStack_a8.subresourceRange.layerCount = 0;
  VStack_a8._76_4_ = 0;
  VStack_a8.viewType = param_3->ViewType;
  VStack_a8.components.r = VK_COMPONENT_SWIZZLE_IDENTITY;
  VStack_a8.components.g = VK_COMPONENT_SWIZZLE_IDENTITY;
  VStack_a8.components.b = VK_COMPONENT_SWIZZLE_IDENTITY;
  VStack_a8.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
  VStack_a8._4_4_ = 0;
  VStack_a8.flags = 0;
  VStack_a8.components.a = VK_COMPONENT_SWIZZLE_IDENTITY;
  VStack_a8.subresourceRange.aspectMask = 0;
  VStack_a8.subresourceRange.baseMipLevel = 0;
  VStack_a8.subresourceRange.levelCount = 0;
  puVar10 = (undefined4 *)0x0;
  if (((*(byte *)&(this->Device->OptionalDeviceExtensions).field0_0x0 & 8) != 0) &&
     (puVar10 = (undefined4 *)0x0, VStack_a8.format - VK_FORMAT_ASTC_4x4_UNORM_BLOCK < 0x1c)) {
    puVar10 = (undefined4 *)0x0;
    switch(VStack_a8.format) {
    case VK_FORMAT_ASTC_4x4_SRGB_BLOCK:
    case VK_FORMAT_ASTC_5x4_SRGB_BLOCK:
    case VK_FORMAT_ASTC_5x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_6x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_6x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_8x8_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x5_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x6_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x8_SRGB_BLOCK:
    case VK_FORMAT_ASTC_10x10_SRGB_BLOCK:
    case VK_FORMAT_ASTC_12x10_SRGB_BLOCK:
    case VK_FORMAT_ASTC_12x12_SRGB_BLOCK:
      break;
    default:
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      puVar10 = &uStack_100;
      uStack_100 = 0x3b9bcfb8;
      uStack_f0 = 0x25;
      uStack_ec = 0;
    }
  }
  pVVar2 = param_3->SamplerYcbcrConversion;
  VStack_a8.pNext = puVar10;
  uStack_e0 = (undefined4 *)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0);
  if (pVVar2 != (VkSamplerYcbcrConversion_T *)0x0) {
    uStack_e4 = 0;
    uStack_d8 = SUB84(pVVar2,0);
    uStack_d4 = (undefined4)((ulonglong)pVVar2 >> 0x20);
    VStack_a8.pNext = &uStack_e8;
    uStack_e8 = 0x3b9d2b61;
    uStack_e0 = puVar10;
  }
  VStack_a8.image = param_2;
  if (param_3->bUseIdentitySwizzle == false) {
    pVVar13 = FVulkanDevice::GetFormatComponentMapping(this->Device,param_3->UEFormat);
    uVar6 = pVVar13->r;
    uVar7 = pVVar13->g;
    uVar8 = pVVar13->b;
    uVar9 = pVVar13->a;
    VStack_a8.components.r = uVar6;
    VStack_a8.components.g = uVar7;
    VStack_a8.components.b = uVar8;
    VStack_a8.components.a = uVar9;
  }
  else {
    VStack_a8.components.b = VK_COMPONENT_SWIZZLE_IDENTITY;
    VStack_a8.components.a = VK_COMPONENT_SWIZZLE_IDENTITY;
    VStack_a8.components.r = VK_COMPONENT_SWIZZLE_IDENTITY;
    VStack_a8.components.g = VK_COMPONENT_SWIZZLE_IDENTITY;
  }
  VStack_a8.subresourceRange.aspectMask = param_3->AspectFlags;
  VStack_a8.subresourceRange.baseMipLevel = param_3->FirstMip;
  if (param_3->NumMips == 0xffffffff) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4078520026821295886>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                        ,0xf2,"ViewDesc.NumMips != 0xFFFFFFFF");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  VStack_a8.subresourceRange.levelCount = param_3->NumMips;
  if (param_3->ArraySliceIndex == 0xffffffff) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4078520026821295883>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                        ,0xf5,"ViewDesc.ArraySliceIndex != 0xFFFFFFFF");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_3->NumArraySlices == 0xffffffff) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4078520026821295882>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                        ,0xf6,"ViewDesc.NumArraySlices != 0xFFFFFFFF");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  VStack_a8.subresourceRange.baseArrayLayer = param_3->ArraySliceIndex;
  VStack_a8.subresourceRange.layerCount = param_3->NumArraySlices;
  if (param_3->UEFormat == PF_X24_G8) {
    if ((VStack_a8.format != GPixelFormats[0xb].PlatformFormat) ||
       (VStack_a8.format == VK_FORMAT_UNDEFINED)) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4078520026821295873>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
                          ,0xff,
                          "(ViewInfo.format == (VkFormat)GPixelFormats[PF_DepthStencil].PlatformFormat) && (ViewInfo.format != VK_FORMAT_UNDEFINED)"
                         );
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    VStack_a8.subresourceRange.aspectMask = 4;
  }
  puVar10 = VStack_a8.pNext;
  uStack_c8 = (undefined4 *)CONCAT44(uStack_c8._4_4_,(undefined4)uStack_c8);
  if (param_3->ImageUsageFlags != 0) {
    uStack_d0 = 0x3b9c930a;
    uStack_cc = 0;
    puVar10 = &uStack_d0;
    uStack_bc = 0;
    uStack_c0 = param_3->ImageUsageFlags;
    uStack_c8 = VStack_a8.pNext;
  }
  FVar15 = StatPtr_STAT_VulkanNumImageViews;
  VStack_a8.pNext = puVar10;
  if (StatPtr_STAT_VulkanNumImageViews == (FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews>)0x0
     ) {
    pFVar14 = ::FName::FName(aFStack_b8,"STAT_VulkanNumImageViews");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumImageViews>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumImageViews,*pFVar14,
                        L"Num Image Views","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar15;
  FStack_130 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    FStack_110.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    FStack_110.StatData.Pad[0] = '\x01';
    FStack_110.StatData.Pad[1] = '\0';
    FStack_110.StatData.Pad[2] = '\0';
    FStack_110.StatData.Pad[3] = '\0';
    FStack_110.StatData.Pad[4] = '\0';
    FStack_110.StatData.Pad[5] = '\0';
    FStack_110.StatData.Pad[6] = '\0';
    FStack_110.StatData.Pad[7] = '\0';
    FStack_130 = FVar3;
    FStack_110.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&FStack_110);
    FStatsTrace::Add(&FStack_130,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
      param_2 = pVStack_128;
    }
    else {
      param_2 = pVStack_128;
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
        param_2 = pVStack_128;
      }
    }
  }
  VVar12 = (*VulkanDynamicAPI::vkCreateImageView)
                     (this->Device->Device,&VStack_a8,&VulkanRHI::GAllocationCallbacks,
                      (VkImageView_T **)&this->Storage);
  if (VVar12 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar12,
               "VulkanRHI::vkCreateImageView(Device.GetHandle(), &ViewInfo, VULKAN_CPU_ALLOCATOR, &TV.View)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanView.cpp"
               ,0x10f);
  }
  (this->Storage)._padding_ = (longlong)param_2;
  if ((int)GMaxRHIFeatureLevel < 2) {
    LOCK();
    UNLOCK();
    iVar5 = GVulkanImageViewHandleIdCounter._0_4_;
    GVulkanImageViewHandleIdCounter =
         (TAtomic<unsigned___int64>)((longlong)GVulkanImageViewHandleIdCounter + 1);
    *(int *)&(this->Storage)._padding_ = iVar5 + 1;
  }
  FVulkanBindlessDescriptorManager::UpdateImage
            (this->Device->BindlessDescriptorManager,pFStack_120,this->BindlessHandle,
             this->DescriptorType,(VkImageView_T *)(this->Storage)._padding_,
             (param_3->AspectFlags & 6) != 0,bStack_138);
  FMemScope::~FMemScope(&FStack_118);
  FLLMScope::~FLLMScope(&FStack_134);
  return;
}

