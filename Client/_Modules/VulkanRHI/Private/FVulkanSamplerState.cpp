// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// GetBindlessHandle @ 145b1cd10

FRHIDescriptorHandle __thiscall FVulkanSamplerState::GetBindlessHandle(FVulkanSamplerState *this)

{
  FRHIDescriptorHandle in_RDX;
  
  *(FRHIDescriptorHandle *)in_RDX = this->BindlessHandle;
  return in_RDX;
}

// FVulkanSamplerState @ 145b91ed0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFilter": Some values do not have unique names */
/* WARNING: Enum "VkSamplerAddressMode": Some values do not have unique names */
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

FVulkanSamplerState * __thiscall
FVulkanSamplerState::FVulkanSamplerState
          (FVulkanSamplerState *this,VkSamplerCreateInfo *param_1,FVulkanDevice *param_2,
          bool param_3)

{
  bool bVar1;
  VkResult VVar2;
  int iVar3;
  ERHIBindlessConfiguration EVar4;
  FRHIDescriptorHandle FVar5;
  VkSampler_T local_res8 [8];
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_SamplerState);
  this->_padding_ = (longlong)&___7FVulkanSamplerState__6B_;
  this->Sampler = (VkSampler_T *)0x0;
  this->SamplerId = 0;
  (this->BindlessHandle).Index = 0;
  (this->BindlessHandle).Type = BufferSRV;
  *(undefined3 *)&(this->BindlessHandle).field_0x5 = 0;
  (this->BindlessHandle).Index = 0xffffffff;
  (this->BindlessHandle).Type = Invalid;
  this->bIsImmutable = param_3;
  VVar2 = (*VulkanDynamicAPI::vkCreateSampler)
                    (param_2->Device,param_1,&VulkanRHI::GAllocationCallbacks,&this->Sampler);
  if (VVar2 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar2,
               "VulkanRHI::vkCreateSampler(InDevice.GetHandle(), &InInfo, VULKAN_CPU_ALLOCATOR, &Sampler)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
               ,0xe6);
  }
  if ((int)GMaxRHIFeatureLevel < 2) {
    LOCK();
    UNLOCK();
    iVar3 = GVulkanSamplerHandleIdCounter._0_4_;
    GVulkanSamplerHandleIdCounter =
         (TAtomic<unsigned___int64>)((longlong)GVulkanSamplerHandleIdCounter + 1);
    this->SamplerId = iVar3 + 1;
  }
  bVar1 = FVulkanDevice::SupportsBindless(param_2);
  if (bVar1) {
    EVar4 = RHIGetRuntimeBindlessConfiguration(GMaxRHIShaderPlatform);
    if (EVar4 != Disabled) {
      FVar5 = FVulkanBindlessDescriptorManager::AllocateDescriptor
                        (param_2->BindlessDescriptorManager,local_res8);
      this->BindlessHandle = *(FRHIDescriptorHandle *)FVar5;
    }
  }
  return this;
}

// IsImmutable @ 145bb12f0

bool __thiscall FVulkanSamplerState::IsImmutable(FVulkanSamplerState *this)

{
  return this->bIsImmutable;
}

// SetupSamplerCreateInfo @ 145bbd810

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
/* WARNING: Enum "VkFilter": Some values do not have unique names */
/* WARNING: Enum "VkSamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __cdecl
FVulkanSamplerState::SetupSamplerCreateInfo
          (FSamplerStateInitializerRHI *param_1,FVulkanDevice *param_2,VkSamplerCreateInfo *param_3)

{
  float fVar1;
  uchar uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  VkFilter VVar6;
  VkSamplerMipmapMode VVar7;
  VkSamplerAddressMode VVar8;
  uint uVar9;
  longlong lVar10;
  IConsoleManager *pIVar11;
  longlong *plVar12;
  TConsoleVariableData<int> *pTVar13;
  VkCompareOp VVar14;
  float fVar15;
  
  param_3->sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
  *(undefined8 *)&param_3->field_0x4 = 0;
  *(undefined8 *)((longlong)&param_3->pNext + 4) = 0;
  param_3->magFilter = VK_FILTER_NEAREST;
  param_3->minFilter = VK_FILTER_NEAREST;
  param_3->mipmapMode = VK_SAMPLER_MIPMAP_MODE_NEAREST;
  param_3->addressModeU = VK_SAMPLER_ADDRESS_MODE_REPEAT;
  param_3->addressModeV = VK_SAMPLER_ADDRESS_MODE_REPEAT;
  param_3->addressModeW = VK_SAMPLER_ADDRESS_MODE_REPEAT;
  param_3->mipLodBias = 0.0;
  param_3->anisotropyEnable = 0;
  param_3->maxAnisotropy = 0.0;
  param_3->compareEnable = 0;
  param_3->compareOp = VK_COMPARE_OP_NEVER;
  param_3->minLod = 0.0;
  param_3->maxLod = 0.0;
  param_3->borderColor = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
  param_3->unnormalizedCoordinates = 0;
  VVar6 = TranslateMinMagFilterMode((uint)(param_1->Filter).Value);
  param_3->magFilter = VVar6;
  VVar6 = TranslateMinMagFilterMode((uint)(param_1->Filter).Value);
  param_3->minFilter = VVar6;
  uVar2 = (param_1->Filter).Value;
  VVar14 = VK_COMPARE_OP_MAX_ENUM;
  if ((uVar2 == '\0') || (uVar2 == '\x01')) {
LAB_145bbd8c2:
    VVar7 = VK_SAMPLER_MIPMAP_MODE_NEAREST;
  }
  else if (uVar2 == '\x02') {
LAB_145bbd8bb:
    VVar7 = VK_SAMPLER_MIPMAP_MODE_LINEAR;
  }
  else {
    if (uVar2 == '\x03') goto LAB_145bbd8c2;
    if (uVar2 == '\x04') goto LAB_145bbd8bb;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                       ,0x1c,L"Unknown Mip ESamplerFilter %d");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    VVar7 = VK_SAMPLER_MIPMAP_MODE_MAX_ENUM;
  }
  param_3->mipmapMode = VVar7;
  VVar8 = TranslateWrapMode((uint)(param_1->AddressU).Value);
  param_3->addressModeU = VVar8;
  VVar8 = TranslateWrapMode((uint)(param_1->AddressV).Value);
  param_3->addressModeV = VVar8;
  VVar8 = TranslateWrapMode((uint)(param_1->AddressW).Value);
  param_3->addressModeW = VVar8;
  param_3->mipLodBias = param_1->MipBias;
  param_3->maxAnisotropy = 1.0;
  uVar2 = (param_1->Filter).Value;
  if ((uVar2 != '\x04') && (fVar15 = __real_3f800000, uVar2 != '\x03')) goto LAB_145bbd9af;
  uVar3 = param_1->MaxAnisotropy;
  fVar1 = (param_2->GpuProps).limits.maxSamplerAnisotropy;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::_thread_safe_static_guard_0__ == -1)
    {
      pIVar11 = IConsoleManager::Get();
      plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"r.MaxAnisotropy",1);
      pTVar13 = (TConsoleVariableData<int> *)0x0;
      if (plVar12 != (longlong *)0x0) {
        pTVar13 = (TConsoleVariableData<int> *)(**(code **)(*plVar12 + 0x68))(plVar12);
      }
      `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::CVar = pTVar13;
      _Init_thread_footer(&`unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  pTVar13 = `unsigned_int___cdecl_ComputeAnisotropyRT(int)'::__l2::CVar;
  bVar5 = IsInParallelGameThread();
  if (bVar5) {
LAB_145bbd96c:
    lVar10 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    if (bVar5) goto LAB_145bbd96c;
    lVar10 = 4;
  }
  uVar9 = *(uint *)((longlong)pTVar13->ShadowedValue + lVar10);
  if (0 < (int)uVar3) {
    uVar9 = uVar3;
  }
  uVar3 = 0x10;
  if ((int)uVar9 < 0x10) {
    uVar3 = uVar9;
  }
  uVar9 = 1;
  if (1 < (int)uVar3) {
    uVar9 = uVar3;
  }
  fVar15 = (float)uVar9;
  if (fVar1 <= (float)uVar9) {
    fVar15 = fVar1;
  }
  if (fVar15 <= __real_3f800000) {
    fVar15 = __real_3f800000;
  }
  param_3->maxAnisotropy = fVar15;
LAB_145bbd9af:
  param_3->anisotropyEnable = (uint)(__real_3f800000 < fVar15);
  param_3->compareEnable = (uint)((param_1->SamplerComparisonFunction).Value != '\0');
  uVar2 = (param_1->SamplerComparisonFunction).Value;
  if (uVar2 == '\0') {
    VVar14 = VK_COMPARE_OP_NEVER;
  }
  else if (uVar2 == '\x01') {
    VVar14 = VK_COMPARE_OP_LESS;
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                       ,0x4b,L"Unknown ESamplerCompareFunction %d");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_3->compareOp = VVar14;
  param_3->minLod = param_1->MinMipLevel;
  param_3->maxLod = param_1->MaxMipLevel;
  param_3->borderColor = -(uint)(param_1->BorderColor != 0) & VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE;
  return;
}

