// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// FVulkanTransientResourceAllocator @ 145b941e0

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

FVulkanTransientResourceAllocator * __thiscall
FVulkanTransientResourceAllocator::FVulkanTransientResourceAllocator
          (FVulkanTransientResourceAllocator *this,FVulkanTransientHeapCache *param_1)

{
  FRHITransientResourceHeapAllocator::FRHITransientResourceHeapAllocator
            ((FRHITransientResourceHeapAllocator *)this,(FRHITransientHeapCache *)param_1);
  this->_padding_ = (longlong)&___7FVulkanTransientResourceAllocator__6B_;
  this->Device = param_1->Device;
  return this;
}

// operator() @ 145b99080

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientBuffer * __thiscall
`FVulkanTransientResourceAllocator::CreateBuffer'::__l2::<lambda_1>::operator()
          (void *this,FResourceInitializer *param_1)

{
  longlong lVar1;
  FVulkanBuffer *pFVar2;
  FVulkanBuffer *pFVar3;
  FVulkanBuffer *pFVar4;
  
  pFVar2 = ::operator_new(0x148);
  pFVar4 = (FVulkanBuffer *)0x0;
  pFVar3 = pFVar4;
  if (pFVar2 != (FVulkanBuffer *)0x0) {
    pFVar3 = FVulkanBuffer::FVulkanBuffer
                       (pFVar2,*(FVulkanDevice **)this,(FRHIBufferCreateDesc *)((longlong)this + 8),
                        param_1->Allocation);
  }
  pFVar2 = ::operator_new(0x110);
  if (pFVar2 != (FVulkanBuffer *)0x0) {
    FRHITransientResource::FRHITransientResource
              ((FRHITransientResource *)pFVar2,(FRHIResource *)pFVar3,0,param_1->Hash,
               *(ulong64 *)((longlong)this + 0x48),Heap,Buffer);
    pFVar2->_padding_ = (longlong)&___7FRHITransientBuffer__6B_;
    lVar1 = *(longlong *)((longlong)this + 0x10);
    pFVar2->_padding_ = ((FRHIBufferCreateDesc *)((longlong)this + 8))->_padding_;
    pFVar2->_padding_ = lVar1;
    pFVar2->_padding_ = 0;
    *(undefined4 *)&pFVar2->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar2->_padding_ + 4) = 1;
    pFVar2->BufferUsageFlags = 0;
    pFVar2->LockStatus = Unlocked;
    *(undefined3 *)&pFVar2->field_0x105 = 0;
    *(undefined4 *)&(pFVar2->CurrentBufferAlloc).Alloc.VulkanHandle = 0;
    *(undefined4 *)((longlong)&(pFVar2->CurrentBufferAlloc).Alloc.VulkanHandle + 4) = 1;
    pFVar4 = pFVar2;
  }
  return (FRHITransientBuffer *)pFVar4;
}

// operator() @ 145b99170

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

FRHITransientTexture * __thiscall
`FVulkanTransientResourceAllocator::CreateTexture'::__l2::<lambda_1>::operator()
          (void *this,FResourceInitializer *param_1)

{
  wchar_t *pwVar1;
  FRHITransientHeapAllocation *pFVar2;
  code *pcVar3;
  bool bVar4;
  FVulkanDynamicRHI *this_00;
  FRHITransientTexture *pFVar5;
  FRHITransientTexture *this_01;
  undefined1 auStackY_f8 [32];
  FCreateTextureResult local_b8;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pwVar1 = *(wchar_t **)((longlong)this + 0x50);
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_a8,this);
  pFVar5 = (FRHITransientTexture *)0x0;
  local_a8.InitialState = Discard;
  local_a8.InitAction = Default;
  local_a8.BulkData = (FResourceBulkDataInterface *)0x0;
  local_a8.ClassName.ComparisonIndex.Value = 0;
  local_a8.ClassName.Number = 0;
  local_a8.OwnerName.ComparisonIndex.Value = 0;
  local_a8.OwnerName.Number = 0;
  local_a8.DebugName = pwVar1;
  this_00 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  pFVar2 = param_1->Allocation;
  if ((local_a8._padding_ & 0x2000000000U) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(CreateDesc.Flags, ETextureCreateFlags::ReservedResource)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       ,0x596,L"Can\'t use reserved resources with transient allocation.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRHITransientTexture *)(*pcVar3)();
      return pFVar5;
    }
  }
  FVulkanDynamicRHI::BeginCreateTextureInternal(this_00,&local_b8,&local_a8,pFVar2);
  this_01 = ::operator_new(0x150);
  if (this_01 != (FRHITransientTexture *)0x0) {
    pFVar5 = FRHITransientTexture::FRHITransientTexture
                       (this_01,(FRHIResource *)local_b8.Texture,0,param_1->Hash,
                        *(ulong64 *)((longlong)this + 0x58),Heap,this);
  }
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  return pFVar5;
}

// CreateBuffer @ 145ba3bc0

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientBuffer * __thiscall
FVulkanTransientResourceAllocator::CreateBuffer
          (FVulkanTransientResourceAllocator *this,FRHIBufferDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  FRHITransientBuffer *pFVar5;
  int iVar6;
  uint uVar7;
  FRHIBufferDesc local_118;
  wchar_t *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  FRHIBufferDesc local_e0;
  wchar_t *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  FVulkanDevice *local_a8;
  FRHIBufferDesc FStack_a0;
  wchar_t *pwStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  wchar_t *local_68;
  ulonglong uStack_60;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_118.Size = param_1->Size;
  local_118.Stride = param_1->Stride;
  local_118.Usage = param_1->Usage;
  local_118.GPUMask.GPUMask = (param_1->GPUMask).GPUMask;
  local_c0 = 0x40000;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  local_f8 = 0x40000;
  uStack_f0 = 0;
  uStack_ac = 0;
  uStack_100 = 0;
  local_e8 = 0;
  local_108 = param_2;
  local_e0._0_8_ = local_118._0_8_;
  local_e0._8_8_ = local_118._8_8_;
  local_d0 = param_2;
  if ((param_1->Usage & AccelerationStructure) != None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(CreateDesc.Usage, EBufferUsageFlags::AccelerationStructure)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTransientResourceAllocator.cpp"
                       ,0x77,L"AccelerationStructure not yet supported as TransientResource.");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRHITransientBuffer *)(*pcVar1)();
      return pFVar5;
    }
  }
  if ((local_118._8_8_ & 4) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(CreateDesc.Usage, EBufferUsageFlags::Volatile)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTransientResourceAllocator.cpp"
                       ,0x78,L"The volatile flag is not supported for transient resources.");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRHITransientBuffer *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar4 = VulkanRHI::FMemoryManager::CalculateBufferAlignment
                    (this->Device,local_118.Usage,local_118.Size == 0);
  uVar2 = local_e8;
  iVar6 = local_118.Size - 1;
  local_58[0] = (code *)0x0;
  FStack_a0.Size = local_118.Size;
  FStack_a0.Stride = local_118.Stride;
  FStack_a0.Usage = local_118.Usage;
  FStack_a0.GPUMask.GPUMask = local_118.GPUMask.GPUMask;
  uVar7 = iVar6 + uVar4 & -uVar4;
  uStack_60 = (ulonglong)uVar7;
  local_a8 = this->Device;
  local_80 = local_f8;
  uStack_78 = uStack_f0;
  pwStack_90 = local_108;
  uStack_88 = uStack_100;
  local_68 = param_2;
  local_30 = FMemory::Malloc(0x58,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateBuffer'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_30[1] = local_a8;
  local_30[2] = FStack_a0._0_8_;
  local_30[3] = FStack_a0._8_8_;
  local_30[4] = pwStack_90;
  local_30[5] = uStack_88;
  local_30[6] = local_80;
  *(undefined4 *)(local_30 + 7) = (undefined4)uStack_78;
  *(undefined4 *)((longlong)local_30 + 0x3c) = uStack_78._4_4_;
  *(int *)(local_30 + 8) = (int)uVar2;
  *(int *)((longlong)local_30 + 0x44) = (int)((ulonglong)uVar2 >> 0x20);
  local_30[9] = local_68;
  local_30[10] = uStack_60;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FVulkanTransientResourceAllocator::CreateBuffer'::__l2::<lambda_1>,FRHITransientBuffer_*,FRHITransientHeap::FResourceInitializer_const_&>
                  ::Call;
  }
  pFVar5 = FRHITransientResourceHeapAllocator::CreateBufferInternal
                     ((FRHITransientResourceHeapAllocator *)this,&local_118,param_2,param_3,uVar7,
                      uVar4,(TFunction<FRHITransientBuffer_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)>
                             *)local_58);
  return pFVar5;
}

// CreateTexture @ 145ba5b40

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientTexture * __thiscall
FVulkanTransientResourceAllocator::CreateTexture
          (FVulkanTransientResourceAllocator *this,FRHITextureDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3)

{
  undefined8 *puVar1;
  FRHITransientTexture *pFVar2;
  undefined1 auStackY_128 [32];
  code *local_e8 [5];
  undefined8 *local_c0;
  ulong64 local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  FRHITextureDesc local_a8;
  wchar_t *local_58;
  ulong64 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  (**(code **)(GDynamicRHI->_padding_ + 0x178))(GDynamicRHI,&local_b8,param_1,0);
  FRHITextureDesc::FRHITextureDesc(&local_a8,param_1);
  uStack_48 = CONCAT44(uStack_ac,uStack_b0);
  local_e8[0] = (code *)0x0;
  local_50 = local_b8;
  local_58 = param_2;
  puVar1 = FMemory::Malloc(0x70,8);
  *puVar1 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FVulkanTransientResourceAllocator::CreateTexture'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  local_c0 = puVar1;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)(puVar1 + 1),&local_a8);
  puVar1[0xb] = local_58;
  puVar1[0xc] = local_50;
  puVar1[0xd] = uStack_48;
  if ((FRHITextureDesc *)(puVar1 + 1) != (FRHITextureDesc *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FVulkanTransientResourceAllocator::CreateTexture'::__l2::<lambda_1>,FRHITransientTexture_*,FRHITransientHeap::FResourceInitializer_const_&>
                  ::Call;
  }
  pFVar2 = FRHITransientResourceHeapAllocator::CreateTextureInternal
                     ((FRHITransientResourceHeapAllocator *)this,param_1,param_2,param_3,local_b8,
                      uStack_b0,
                      (TFunction<FRHITransientTexture_*___cdecl(FRHITransientHeap::FResourceInitializer_const_&)>
                       *)local_e8);
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return pFVar2;
}

// SupportsResourceType @ 145bbe610

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

bool __thiscall
FVulkanTransientResourceAllocator::SupportsResourceType
          (FVulkanTransientResourceAllocator *this,ERHITransientResourceType param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 != Texture) && (param_1 != Buffer)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTransientResourceAllocator.h"
                       ,0x39,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
    return false;
  }
  return true;
}

