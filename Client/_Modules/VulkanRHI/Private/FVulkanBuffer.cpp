// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 12

// FVulkanBuffer @ 145adab80

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

FVulkanBuffer * __thiscall
FVulkanBuffer::FVulkanBuffer
          (FVulkanBuffer *this,FVulkanDevice *param_1,FRHIBufferCreateDesc *param_2,
          FRHITransientHeapAllocation *param_3)

{
  TUniquePtr<FVulkanReservedResourceData,TDefaultDelete<FVulkanReservedResourceData>_> *pTVar1;
  int iVar2;
  FVulkanDevice *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ushort uVar6;
  EVulkanAllocationMetaType EVar7;
  undefined5 uVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FVulkanBuffer *pFVar14;
  FVulkanAllocation *pFVar15;
  FVulkanReservedResourceData *pFVar16;
  VkBuffer_T *pVVar17;
  FVulkanReservedResourceData *pFVar18;
  ulong64 uVar19;
  FVulkanReservedResourceData *pFVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined8 local_68;
  VkBufferDeviceAddressInfo local_60;
  FVulkanAllocation local_48;
  
  FRHIBuffer::FRHIBuffer((FRHIBuffer *)this,param_2);
  pFVar18 = (FVulkanReservedResourceData *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRHIBuffer__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FVulkanViewableResource__;
  this->Device = param_1;
  this->LockStatus = Unlocked;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&(this->CurrentBufferAlloc).Alloc);
  (this->CurrentBufferAlloc).HostPtr = (void *)0x0;
  (this->CurrentBufferAlloc).DeviceAddress = 0;
  this->LockCounter = 0;
  (this->ReservedResourceData).Ptr = (FVulkanReservedResourceData *)0x0;
  uVar13 = (uint)param_2->_padding_;
  iVar2 = (int)param_2->_padding_;
  uVar22 = (((uVar13 & 0x200000 | 0x20000) >> 8 | uVar13 & 0x8000) >> 2 | uVar13 & 0x4000) >> 7 |
           -(uint)((uVar13 & 0x10010) != 0) & 0x20 | -(uint)((uVar13 & 0x2000) != 0) & 0x100000;
  if (iVar2 == 0) {
LAB_145adad1c:
    this->BufferUsageFlags = uVar22;
    if (iVar2 == 0) {
      return this;
    }
  }
  else {
    uVar22 = uVar22 | ~(uVar13 >> 1) & 2 | -(uint)((uVar13 & 0x200) != 0) & 3 | (uVar13 & 0x80) * 2
                      | uVar13 >> 6 & 4 | uVar13 & 8;
    uVar21 = (param_1->OptionalDeviceExtensions).field0_0x0.Packed;
    if (((uVar21 >> 10 & 1) != 0) &&
       (((((uint)uVar21 & 0x2800) == 0x2800 || ((uVar21 >> 0xc & 1) != 0)) &&
        ((uVar21 & 0x17000004000) == 0x17000004000)))) {
      uVar12 = 0xa0000;
      if ((uVar13 & 0x2000) != 0) {
        uVar12 = 0x20000;
      }
      uVar22 = uVar22 | uVar12;
    }
    if ((uVar21 >> 0x24 & 1) == 0) goto LAB_145adad1c;
    this->BufferUsageFlags = uVar22 | 0x20000;
  }
  bVar11 = (param_1->DeviceMemoryManager).bHasUnifiedMemory;
  uVar13 = VulkanRHI::FMemoryManager::CalculateBufferAlignment
                     (param_1,(EBufferUsageFlags)param_2->_padding_,iVar2 == 0);
  uVar22 = (uint)param_2->_padding_ & 0x400000;
  if (param_3 != (FRHITransientHeapAllocation *)0x0) {
    if ((uVar22 != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsSparseResource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                            ,0x90,
                            L"Resources with the ReservedResource flag cannot be backed by a transient allocation."
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar14 = (FVulkanBuffer *)(*pcVar5)();
      return pFVar14;
    }
    pFVar15 = FVulkanTransientHeap::GetVulkanAllocation(&local_48,param_3);
    uVar22 = pFVar15->HandleId;
    uVar12 = pFVar15->Size;
    (this->CurrentBufferAlloc).Alloc.VulkanHandle = pFVar15->VulkanHandle;
    (this->CurrentBufferAlloc).Alloc.HandleId = uVar22;
    (this->CurrentBufferAlloc).Alloc.Size = uVar12;
    uVar22 = pFVar15->AllocationIndex;
    uVar6 = pFVar15->AllocatorIndex;
    EVar7 = pFVar15->MetaType;
    uVar8 = *(undefined5 *)&pFVar15->field_0x1b;
    (this->CurrentBufferAlloc).Alloc.Offset = pFVar15->Offset;
    (this->CurrentBufferAlloc).Alloc.AllocationIndex = uVar22;
    (this->CurrentBufferAlloc).Alloc.AllocatorIndex = uVar6;
    (this->CurrentBufferAlloc).Alloc.MetaType = EVar7;
    *(undefined5 *)&(this->CurrentBufferAlloc).Alloc.field_0x1b = uVar8;
    VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_48);
    pFVar16 = pFVar18;
    if (bVar11 != false) {
      pFVar16 = VulkanRHI::FVulkanAllocation::GetMappedPointer
                          (&(this->CurrentBufferAlloc).Alloc,this->Device);
    }
    (this->CurrentBufferAlloc).HostPtr = pFVar16;
    pVVar17 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&(this->CurrentBufferAlloc).Alloc);
    if (((param_1->OptionalDeviceExtensions).field0_0x0.Packed & 0x1000000000) != 0) {
      local_60.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
      local_60._4_8_ = 0;
      local_60.pNext._4_4_ = 0;
      local_60.buffer._0_4_ = SUB84(pVVar17,0);
      local_60.buffer._4_4_ = (undefined4)((ulonglong)pVVar17 >> 0x20);
      pFVar18 = (FVulkanReservedResourceData *)
                (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)(param_1->Device,&local_60);
    }
    uVar22 = (this->CurrentBufferAlloc).Alloc.Offset;
    (this->CurrentBufferAlloc).DeviceAddress =
         (ulong64)((longlong)&(pFVar18->Allocations).AllocatorInstance.Data + (ulonglong)uVar22);
    if ((uVar22 % uVar13 != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentBufferAlloc.Alloc.Offset % BufferAlignment == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                            ,0x94,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      pFVar14 = (FVulkanBuffer *)(*pcVar5)();
      return pFVar14;
    }
    if ((uint)param_2->_padding_ <= (this->CurrentBufferAlloc).Alloc.Size) {
      return this;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentBufferAlloc.Alloc.Size >= CreateDesc.Size",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                        ,0x95,L"");
    if (!bVar11) {
      return this;
    }
    pcVar5 = (code *)swi(3);
    pFVar14 = (FVulkanBuffer *)(*pcVar5)();
    return pFVar14;
  }
  if (uVar22 == 0) {
    AllocateMemory(this,&this->CurrentBufferAlloc);
    return this;
  }
  if ((((this->_padding_ & 2) != 0) || ((this->_padding_ & 4) != 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!EnumHasAnyFlags(GetUsage(), EBufferUsageFlags::Dynamic) && !EnumHasAnyFlags(GetUsage(), EBufferUsageFlags::Volatile)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                          ,0x99,
                          L"The ReservedResource flag is incompatible with dynamic and volatile buffers."
                         ), bVar11)) {
    pcVar5 = (code *)swi(3);
    pFVar14 = (FVulkanBuffer *)(*pcVar5)();
    return pFVar14;
  }
  pTVar9 = CVarVulkanSparseBufferAllocSizeMB.Ref;
  bVar11 = IsInParallelGameThread();
  if (bVar11) {
LAB_145adaeff:
    pFVar16 = pFVar18;
  }
  else {
    bVar11 = IsInGameThread();
    pFVar16 = (FVulkanReservedResourceData *)&DAT_00000004;
    if (bVar11) goto LAB_145adaeff;
  }
  iVar2 = *(int *)((longlong)pTVar9->ShadowedValue + (longlong)&pFVar16->Allocations);
  uVar13 = this->BufferUsageFlags;
  pFVar3 = this->Device;
  uVar22 = (int)this->_padding_ + 0xffffU & 0xffff0000;
  (this->CurrentBufferAlloc).Alloc.Size = uVar22;
  uVar21 = (longlong)iVar2 << 0x14;
  pVVar17 = FVulkanDevice::CreateBuffer(pFVar3,(ulonglong)uVar22,uVar13,3);
  pFVar3 = this->Device;
  (this->CurrentBufferAlloc).Alloc.VulkanHandle = (ulong64)pVVar17;
  uVar19 = GetBufferDeviceAddress(pFVar3,pVVar17);
  (this->CurrentBufferAlloc).DeviceAddress = uVar19;
  pFVar20 = ::operator_new(0x38);
  pFVar16 = pFVar18;
  if (pFVar20 != (FVulkanReservedResourceData *)0x0) {
    (pFVar20->MemoryRequirements).size = 0;
    (pFVar20->MemoryRequirements).alignment = 0;
    *(undefined8 *)&(pFVar20->MemoryRequirements).memoryTypeBits = 0;
    (pFVar20->Allocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->Allocations).ArrayNum = 0;
    (pFVar20->Allocations).ArrayMax = 0;
    pFVar20->LastBlockSize = 0;
    pFVar20->BlockCount = 0;
    pFVar20->NumCommittedTiles = 0;
    pFVar16 = pFVar20;
  }
  pTVar1 = &this->ReservedResourceData;
  if (pTVar1 != (TUniquePtr<FVulkanReservedResourceData,TDefaultDelete<FVulkanReservedResourceData>_>
                 *)&local_68) {
    pFVar20 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar16;
    pFVar16 = pFVar18;
    if (pFVar20 != (FVulkanReservedResourceData *)0x0) {
      DestructItems<FVulkanReservedResourceData::FSparseAllocation,int>
                ((FSparseAllocation *)(pFVar20->Allocations).AllocatorInstance.Data,
                 (pFVar20->Allocations).ArrayNum);
      pFVar4 = (pFVar20->Allocations).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(pFVar20,0x38);
      goto LAB_145adb012;
    }
  }
  if (pFVar16 != (FVulkanReservedResourceData *)0x0) {
    DestructItems<FVulkanReservedResourceData::FSparseAllocation,int>
              ((FSparseAllocation *)(pFVar16->Allocations).AllocatorInstance.Data,
               (pFVar16->Allocations).ArrayNum);
    pFVar4 = (pFVar16->Allocations).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar16,0x38);
  }
LAB_145adb012:
  ((this->ReservedResourceData).Ptr)->LastBlockSize =
       (ulonglong)(uint)this->_padding_ % uVar21 + 0xffff & 0xffffffffffff0000;
  ((this->ReservedResourceData).Ptr)->BlockCount = (uint)((uint)this->_padding_ / uVar21);
  pFVar18 = (this->ReservedResourceData).Ptr;
  if (pFVar18->LastBlockSize == 0) {
    pFVar18->LastBlockSize = uVar21;
  }
  else {
    pFVar18->BlockCount = pFVar18->BlockCount + 1;
  }
  (*VulkanDynamicAPI::vkGetBufferMemoryRequirements)
            (this->Device->Device,pVVar17,&((this->ReservedResourceData).Ptr)->MemoryRequirements);
  if (uVar21 % (((this->ReservedResourceData).Ptr)->MemoryRequirements).alignment != 0) {
    bVar11 = IsInParallelGameThread();
    if (!bVar11) {
      IsInGameThread();
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("SparseBlockSize % ReservedResourceData->MemoryRequirements.alignment == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                        ,0xb2,
                        L"The value of r.Vulkan.SparseBufferAllocSizeMB (%dMB) is not compatible with this resource\'s tile size requirements (%d)."
                       );
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      pFVar14 = (FVulkanBuffer *)(*pcVar5)();
      return pFVar14;
    }
  }
  pFVar18 = (this->ReservedResourceData).Ptr;
  if ((pFVar18->LastBlockSize % (pFVar18->MemoryRequirements).alignment != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ReservedResourceData->LastBlockSize % ReservedResourceData->MemoryRequirements.alignment == 0"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                          ,0xb5,
                          L"The value of GRHIGlobals.ReservedResources.TileSizeInBytes (%d) is not compatible with this resource\'s tile size requirements (%d)."
                         ), bVar11)) {
    pcVar5 = (code *)swi(3);
    pFVar14 = (FVulkanBuffer *)(*pcVar5)();
    return pFVar14;
  }
  UE::RHICore::UpdateGlobalBufferStats((FRHIBufferDesc *)&this->_padding_,(ulonglong)uVar22);
  return this;
}

// ~FVulkanBuffer @ 145adc310

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

void __thiscall FVulkanBuffer::~FVulkanBuffer(FVulkanBuffer *this)

{
  FVulkanReservedResourceData *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar1 = (this->ReservedResourceData).Ptr;
  this->_padding_ = (longlong)&_vftable__for__FRHIBuffer__;
  this->_padding_ = (longlong)&_vftable__for__FVulkanViewableResource__;
  if (pFVar1 != (FVulkanReservedResourceData *)0x0) {
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&this->Device->DeferredDeletionQueue,Buffer,
               (this->CurrentBufferAlloc).Alloc.VulkanHandle);
    CommitReservedResource(this,&local_18,0);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  ReleaseOwnership(this);
  pFVar1 = (this->ReservedResourceData).Ptr;
  if (pFVar1 != (FVulkanReservedResourceData *)0x0) {
    DestructItems<FVulkanReservedResourceData::FSparseAllocation,int>
              ((FSparseAllocation *)(pFVar1->Allocations).AllocatorInstance.Data,
               (pFVar1->Allocations).ArrayNum);
    pFVar2 = (pFVar1->Allocations).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x38);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&(this->CurrentBufferAlloc).Alloc);
  this->_padding_ = (longlong)&___7FVulkanViewableResource__6B_;
  if (this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                       ,0x232,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRHIBuffer::~FRHIBuffer((FRHIBuffer *)this);
  return;
}

// operator() @ 145add1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FVulkanBuffer::Lock'::__l31::<lambda_1>::operator()(void *this,FRHICommandListBase *param_1)

{
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkBuffer_T_ptr_uint_VkBufferCopy_ptr
  *p_Var1;
  FVulkanCommandListContext *this_00;
  FVulkanCommandBuffer *pFVar2;
  VkBuffer_T *pVVar3;
  VkMemoryBarrier local_38;
  VkMemoryBarrier local_20;
  
  this_00 = FVulkanCommandListContext::Get(param_1);
  pFVar2 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  local_38.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
  local_38.pNext = (void *)0x0;
  local_38.srcAccessMask = 0x10000;
  local_38.dstAccessMask = 0x8000;
  (*VulkanDynamicAPI::vkCmdPipelineBarrier)
            (pFVar2->CommandBufferHandle,0x2000,0x1000,0,1,&local_38,0,(VkBufferMemoryBarrier *)0x0,
             0,(VkImageMemoryBarrier *)0x0);
  p_Var1 = VulkanDynamicAPI::vkCmdCopyBuffer;
  pVVar3 = VulkanRHI::FStagingBuffer::GetHandle(*(FStagingBuffer **)this);
  (*p_Var1)(pFVar2->CommandBufferHandle,*(VkBuffer_T **)((longlong)this + 0x20),pVVar3,1,
            (VkBufferCopy *)((longlong)this + 8));
  local_20.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
  local_20.pNext = (void *)0x0;
  local_20.srcAccessMask = 0x10000;
  local_20.dstAccessMask = 0x2000;
  (*VulkanDynamicAPI::vkCmdPipelineBarrier)
            (pFVar2->CommandBufferHandle,0x1000,0x4000,0,1,&local_20,0,(VkBufferMemoryBarrier *)0x0,
             0,(VkImageMemoryBarrier *)0x0);
  return;
}

// operator() @ 145addac0

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
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FVulkanBuffer::Unlock'::__l14::<lambda_1>::operator()(void *this,FRHICommandListBase *param_1)

{
  VkCommandBuffer_T *pVVar1;
  code *pcVar2;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkBuffer_T_ptr_uint_VkBufferCopy_ptr
  *p_Var3;
  bool bVar4;
  FVulkanCommandListContext *this_00;
  FVulkanCommandBuffer *pFVar5;
  VkBuffer_T *pVVar6;
  VkBuffer_T *pVVar7;
  undefined1 auStackY_b8 [32];
  FStagingBuffer *local_68;
  VkMemoryBarrier local_60;
  VkBufferCopy local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_68 = *(FStagingBuffer **)((longlong)this + 8);
  if (local_68 == (FStagingBuffer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StagingBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                       ,0x1df,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  VulkanRHI::FStagingBuffer::FlushMappedMemory(local_68);
  if (*(int *)((longlong)this + 0x18) == 0) {
    VulkanRHI::FStagingManager::ReleaseBuffer
              ((FStagingManager *)(*(longlong *)(*(longlong *)this + 0xf8) + 0x600),
               (FVulkanContextCommon *)0x0,&local_68);
  }
  else if (*(int *)((longlong)this + 0x18) == 1) {
    if (*(char *)((longlong)this + 0x1c) == '\0') {
      this_00 = FVulkanCommandListContext::Get(param_1);
    }
    else {
      this_00 = (FVulkanCommandListContext *)FVulkanUploadContext::Get(param_1);
    }
    pFVar5 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
    if (pFVar5->State != IsInsideBegin) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandBuffer.IsOutsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                         ,0x1f6,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pVVar1 = pFVar5->CommandBufferHandle;
    VulkanRHI::DebugHeavyWeightBarrier(pVVar1,0x10);
    p_Var3 = VulkanDynamicAPI::vkCmdCopyBuffer;
    local_48.size = (ulong64)*(uint *)((longlong)this + 0x14);
    local_48.srcOffset = 0;
    local_48.dstOffset =
         (ulong64)(uint)(*(int *)(*(longlong *)this + 0x118) + *(int *)((longlong)this + 0x10));
    pVVar6 = VulkanRHI::FVulkanAllocation::GetBufferHandle
                       ((FVulkanAllocation *)(*(longlong *)this + 0x108));
    pVVar7 = VulkanRHI::FStagingBuffer::GetHandle(local_68);
    (*p_Var3)(pVVar1,pVVar7,pVVar6,1,&local_48);
    local_60.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    local_60.pNext = (void *)0x0;
    local_60.srcAccessMask = 0x1000;
    local_60.dstAccessMask = 0x18000;
    (*VulkanDynamicAPI::vkCmdPipelineBarrier)
              (pVVar1,0x1000,0x10000,0,1,&local_60,0,(VkBufferMemoryBarrier *)0x0,0,
               (VkImageMemoryBarrier *)0x0);
    VulkanRHI::FStagingManager::ReleaseBuffer
              ((FStagingManager *)(*(longlong *)(*(longlong *)this + 0xf8) + 0x600),
               (FVulkanContextCommon *)this_00,&local_68);
  }
  return;
}

// AllocateMemory @ 145ae0030

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

void __thiscall FVulkanBuffer::AllocateMemory(FVulkanBuffer *this,FBufferAlloc *param_1)

{
  bool bVar1;
  EBufferUsageFlags EVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  VkBuffer_T *pVVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  VkBufferDeviceAddressInfo local_38;
  
  EVar2 = (EBufferUsageFlags)this->_padding_;
  bVar1 = (this->Device->DeviceMemoryManager).bHasUnifiedMemory;
  if (((EVar2 & Dynamic) == None) && ((EVar2 & Volatile) == None)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar1 == false) {
    uVar10 = 1;
    if (bVar3) {
      uVar10 = 6;
    }
  }
  else {
    uVar10 = 7;
  }
  uVar9 = (int)this->_padding_ + 3U & 0xfffffffc;
  uVar5 = VulkanRHI::FMemoryManager::CalculateBufferAlignment(this->Device,EVar2,uVar9 == 0);
  bVar4 = VulkanRHI::FMemoryManager::AllocateBufferPooled
                    (&this->Device->MemoryManager,&param_1->Alloc,(FVulkanEvictable *)0x0,uVar9,
                     uVar5,this->BufferUsageFlags,uVar10,EVulkanAllocationMetaMultiBuffer,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                     ,0xe1);
  pvVar8 = (void *)0x0;
  if (!bVar4) {
    VulkanRHI::FMemoryManager::HandleOOM(&this->Device->MemoryManager,false,VK_SUCCESS,0,0);
  }
  if ((bVar1 != false) || (pvVar6 = pvVar8, bVar3)) {
    pvVar6 = VulkanRHI::FVulkanAllocation::GetMappedPointer(&param_1->Alloc,this->Device);
  }
  param_1->HostPtr = pvVar6;
  pVVar7 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&param_1->Alloc);
  if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x1000000000) != 0) {
    local_38.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
    local_38._4_8_ = 0;
    local_38.pNext._4_4_ = 0;
    local_38.buffer._0_4_ = SUB84(pVVar7,0);
    local_38.buffer._4_4_ = (undefined4)((ulonglong)pVVar7 >> 0x20);
    pvVar8 = (void *)(*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)
                               (this->Device->Device,&local_38);
  }
  uVar10 = (param_1->Alloc).Size;
  param_1->DeviceAddress = (ulonglong)(param_1->Alloc).Offset + (longlong)pvVar8;
  UE::RHICore::UpdateGlobalBufferStats((FRHIBufferDesc *)&this->_padding_,(ulonglong)uVar10);
  return;
}

// CommitReservedResource @ 145ae1240

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

TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> * __thiscall
FVulkanBuffer::CommitReservedResource
          (FVulkanBuffer *this,
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
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  VkDeviceMemory_T *pVVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ulong64 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulong64 local_res10;
  FVulkanAllocation local_68;
  undefined8 local_48;
  
  if (((uint)this->_padding_ < param_1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredCommitSizeInBytes <= GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                         ,0xed,L"Commit size too large for reserve resource\'s maximum size."),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar12;
  }
  if (((this->ReservedResourceData).Ptr == (FVulkanReservedResourceData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReservedResourceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                         ,0xee,
                         L"CommitReservedResource called on a resource without any ReservedResourceData.  Resource needs to be created with the ReservedResource flag."
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar12;
  }
  pTVar7 = CVarVulkanSparseBufferAllocSizeMB.Ref;
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar13 = 0;
  }
  else {
    lVar13 = 4;
  }
  uVar21 = (longlong)*(int *)((longlong)pTVar7->ShadowedValue + lVar13) * 0x100000;
  piVar18 = &__return_storage_ptr__->ArrayMax;
  pFVar3 = (this->ReservedResourceData).Ptr;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar21;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar21 + (param_1 - 1) & ~(uVar21 - 1);
  uVar14 = SUB168(auVar5 / auVar4,0);
  uVar19 = pFVar3->NumCommittedTiles;
  uVar23 = (ulonglong)uVar19;
  uVar22 = (ulonglong)(pFVar3->Allocations).ArrayNum;
  uVar15 = param_1 + 0xffff >> 0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar18 = 0;
  uVar9 = (uint)(param_1 + 0xffff >> 0x10);
  if (uVar23 < uVar15) {
    pFVar3 = (this->ReservedResourceData).Ptr;
    iVar10 = SUB164(auVar5 / auVar4,0);
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar14 & 0xffffffff);
    }
    if ((pFVar3->Allocations).ArrayMax < iVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar10,(ForAnyElementType *)pFVar3,(pFVar3->Allocations).ArrayNum,
                 &(pFVar3->Allocations).ArrayMax);
    }
    if (uVar22 < uVar14) {
      uVar20 = uVar22 * uVar21;
      do {
        pFVar3 = (this->ReservedResourceData).Ptr;
        local_res10 = uVar21;
        if (uVar22 == pFVar3->BlockCount - 1) {
          local_res10 = pFVar3->LastBlockSize;
        }
        iVar10 = (pFVar3->Allocations).ArrayNum;
        piVar18 = &(pFVar3->Allocations).ArrayMax;
        if (iVar10 == *piVar18) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,(ForAnyElementType *)pFVar3,piVar18);
        }
        (pFVar3->Allocations).ArrayNum = iVar10 + 1;
        pFVar1 = (FVulkanAllocation *)
                 ((pFVar3->Allocations).AllocatorInstance.Data + (longlong)iVar10 * 0x28);
        DefaultConstructItems<FVulkanReservedResourceData::FSparseAllocation,int>(pFVar1,1);
        bVar8 = VulkanRHI::FMemoryManager::AllocateBufferPooled
                          (&this->Device->MemoryManager,pFVar1,(FVulkanEvictable *)0x0,
                           (uint)local_res10,
                           (uint)(((this->ReservedResourceData).Ptr)->MemoryRequirements).alignment,
                           this->BufferUsageFlags,1,EVulkanAllocationMetaMultiBuffer,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                           ,0x107);
        if (!bVar8) {
          VulkanRHI::FMemoryManager::HandleOOM(&this->Device->MemoryManager,false,VK_SUCCESS,0,0);
        }
        pFVar1[1].VulkanHandle = uVar20;
        uVar22 = uVar22 + 1;
        uVar20 = uVar20 + uVar21;
      } while (uVar22 < uVar14);
    }
    piVar18 = &__return_storage_ptr__->ArrayMax;
    uVar19 = uVar9 - uVar19;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if (*piVar18 < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar19,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar18);
    }
    do {
      pFVar3 = (this->ReservedResourceData).Ptr;
      uVar11 = (int)uVar23 * 0x10000;
      uVar17 = (uint)(uVar11 / uVar21);
      uVar19 = 0;
      if ((int)uVar17 < (pFVar3->Allocations).ArrayNum) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar12;
      }
      pFVar1 = (FVulkanAllocation *)
               ((pFVar3->Allocations).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x28);
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar18) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&__return_storage_ptr__->AllocatorInstance,piVar18);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x28;
      *(undefined8 *)pFVar2 = 0;
      *(undefined8 *)(pFVar2 + 0x10) = 0;
      *(undefined8 *)(pFVar2 + 0x18) = 0;
      *(undefined8 *)(pFVar2 + 0x20) = 0;
      *(undefined8 *)(pFVar2 + 8) = 0x10000;
      pVVar16 = VulkanRHI::FVulkanAllocation::GetDeviceMemoryHandle(pFVar1,this->Device);
      *(VkDeviceMemory_T **)(pFVar2 + 0x10) = pVVar16;
      uVar23 = uVar23 + 1;
      *(ulonglong *)(pFVar2 + 0x18) = (ulonglong)(pFVar1->Offset + uVar11) - pFVar1[1].VulkanHandle;
      *(ulonglong *)pFVar2 = (ulonglong)uVar11;
    } while (uVar23 < uVar15);
    bVar8 = true;
  }
  else {
    if (uVar23 <= uVar15) goto LAB_145ae181a;
    uVar19 = uVar19 - uVar9;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if (0 < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar19,&__return_storage_ptr__->AllocatorInstance,0,piVar18);
    }
    while (uVar23 = uVar23 - 1, (longlong)uVar15 <= (longlong)uVar23) {
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar18) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&__return_storage_ptr__->AllocatorInstance,piVar18);
      }
      lVar13 = (longlong)iVar10;
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + lVar13 * 0x28 + 0x20) = 0;
      *(undefined8 *)(pFVar2 + lVar13 * 0x28 + 8) = 0x10000;
      *(undefined8 *)(pFVar2 + lVar13 * 0x28 + 0x10) = 0;
      *(longlong *)(pFVar2 + lVar13 * 0x28 + 0x18) = 0;
      *(ulonglong *)(pFVar2 + lVar13 * 0x28) = uVar23 * 0x10000;
    }
    pFVar3 = (this->ReservedResourceData).Ptr;
    iVar10 = (pFVar3->Allocations).ArrayNum;
    while (uVar14 < (ulonglong)(longlong)iVar10) {
      iVar10 = (pFVar3->Allocations).ArrayNum;
      uVar11 = iVar10 - 1;
      uVar19 = 0;
      if ((int)uVar11 < iVar10) {
        uVar19 = ~uVar11 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar12;
      }
      VulkanRHI::FVulkanAllocation::Free
                ((FVulkanAllocation *)
                 ((pFVar3->Allocations).AllocatorInstance.Data +
                 (longlong)((pFVar3->Allocations).ArrayNum + -1) * 0x28),this->Device);
      pFVar3 = (this->ReservedResourceData).Ptr;
      if (((pFVar3->Allocations).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<VkSparseMemoryBind,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar12;
      }
      lVar13 = (longlong)(pFVar3->Allocations).ArrayNum;
      pFVar2 = (pFVar3->Allocations).AllocatorInstance.Data;
      local_68.VulkanHandle = *(ulong64 *)(pFVar2 + lVar13 * 0x28 + -0x28);
      local_68._8_8_ = *(undefined8 *)(pFVar2 + lVar13 * 0x28 + -0x28 + 8);
      local_68._16_8_ = *(undefined8 *)(pFVar2 + lVar13 * 0x28 + -0x18);
      local_68._24_8_ = *(undefined8 *)(pFVar2 + lVar13 * 0x28 + -0x18 + 8);
      local_48 = *(undefined8 *)(pFVar2 + lVar13 * 0x28 + -8);
      uVar19 = (pFVar3->Allocations).ArrayNum - 1;
      pFVar1 = (FVulkanAllocation *)
               ((pFVar3->Allocations).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x28);
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation(pFVar1);
      iVar10 = (pFVar3->Allocations).ArrayNum + ~uVar19;
      if (iVar10 != 0) {
        memmove(pFVar1,&pFVar1[1].HandleId,(longlong)iVar10 * 0x28);
      }
      piVar18 = &(pFVar3->Allocations).ArrayNum;
      *piVar18 = *piVar18 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,(ForAnyElementType *)pFVar3,(pFVar3->Allocations).ArrayNum,
                 &(pFVar3->Allocations).ArrayMax);
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_68);
      pFVar3 = (this->ReservedResourceData).Ptr;
      iVar10 = (pFVar3->Allocations).ArrayNum;
    }
    bVar8 = false;
  }
  UE::RHICore::UpdateReservedResourceStatsOnCommit
            ((longlong)__return_storage_ptr__->ArrayNum << 0x10,true,bVar8);
LAB_145ae181a:
  ((this->ReservedResourceData).Ptr)->NumCommittedTiles = uVar9;
  return __return_storage_ptr__;
}

// GetResourceInfo @ 145ae75f0

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

bool __thiscall FVulkanBuffer::GetResourceInfo(FVulkanBuffer *this,FRHIResourceInfo *param_1)

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
  (param_1->VRamAllocation).AllocationSize = (ulonglong)(this->CurrentBufferAlloc).Alloc.Size;
  param_1->IsTransient = (this->CurrentBufferAlloc).Alloc.bTransient;
  return true;
}

// Lock @ 145aea930

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FVulkanBuffer::Lock(FVulkanBuffer *this,FRHICommandListBase *param_1,EResourceLockMode param_2,
                   uint param_3,uint param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  FStagingBuffer *this_00;
  undefined8 *puVar10;
  ERHIPipeline EVar11;
  longlong lVar12;
  TPairInitializer<FVulkanBuffer_*_const_&,FVulkanPendingBufferLock_const_&> *pTVar13;
  ulonglong uVar14;
  FVulkanBuffer ***pppFVar15;
  ulonglong uVar16;
  undefined1 auStackY_178 [32];
  FVulkanBuffer *local_138;
  FVulkanBuffer *local_130;
  undefined1 local_128 [8];
  FStagingBuffer *local_120;
  undefined4 local_118;
  uint local_114;
  undefined4 local_110;
  undefined1 local_10c;
  FStagingBuffer *local_108;
  uint local_100;
  uint local_fc;
  EResourceLockMode local_f8;
  undefined1 local_f4;
  FBufferAlloc local_f0;
  FVulkanBuffer **local_c0;
  FStagingBuffer **local_b8;
  FVulkanBuffer **local_b0;
  FStagingBuffer **local_a8;
  <lambda_2> local_a0;
  FStagingBuffer *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  VkBuffer_T *local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar14 = 0;
  if ((this->LockStatus != Unlocked) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LockStatus == ELockStatus::Unlocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                         ,0x141,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pvVar9 = (void *)(*pcVar2)();
    return pvVar9;
  }
  uVar8 = this->LockCounter;
  lVar12 = this->_padding_;
  this->LockStatus = Locked;
  this->LockCounter = uVar8 + 1;
  bVar5 = (this->Device->DeviceMemoryManager).bHasUnifiedMemory;
  if (((lVar12 & 2) == 0) && ((lVar12 & 4) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((lVar12 & 1) != 0) || (bVar3 = false, !bVar6)) {
    bVar3 = true;
  }
  if (param_2 == RLM_ReadOnly) {
    bVar6 = IsInRenderingThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                           ,0x156,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar2)();
      return pvVar9;
    }
    if (bVar5 != false) {
LAB_145aeaf10:
      uVar14 = (ulonglong)param_4;
      pvVar9 = (this->CurrentBufferAlloc).HostPtr;
      this->LockStatus = PersistentMapping;
      goto LAB_145aeaf1e;
    }
    this_00 = VulkanRHI::FStagingManager::AcquireBuffer
                        (&this->Device->StagingManager,param_3,2,VK_MEMORY_PROPERTY_HOST_CACHED_BIT)
    ;
    uVar16 = (ulonglong)((this->CurrentBufferAlloc).Alloc.Offset + param_4);
    local_48 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&(this->CurrentBufferAlloc).Alloc);
    if (((param_1->PersistentState).bImmediate == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsImmediate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x17,L"This operation expects the immediate command list."), bVar5)) {
      pcVar2 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar2)();
      return pvVar9;
    }
    local_58 = 0;
    local_68 = this_00;
    uStack_60 = uVar16;
    uStack_50 = (ulonglong)param_3;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
      puVar10 = FRHICommandListBase::AllocCommand(param_1,0x40,8);
      *puVar10 = &TRHILambdaCommand<FRHICommandListImmediate,`FVulkanBuffer::Lock'::`31'::<lambda_1>_>
                  ::_vftable_;
      puVar10[1] = 0;
      puVar10[2] = local_68;
      puVar10[3] = uStack_60;
      puVar10[4] = local_58;
      puVar10[5] = uStack_50;
      puVar10[6] = local_48;
      puVar10[7] = L"TRHILambdaCommand";
    }
    else {
      `FVulkanBuffer::Lock'::__l31::<lambda_1>::operator()(&local_68,param_1);
    }
    FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle((FRHICommandListImmediate *)param_1);
    VulkanRHI::FStagingBuffer::FlushMappedMemory(this_00);
    pvVar9 = VulkanRHI::FStagingBuffer::GetMappedPointer(this_00);
    local_10c = 0;
    local_118 = 0;
    local_110 = 0;
    local_138 = this;
    local_120 = this_00;
    local_114 = param_3;
    EnterCriticalSection((LPCRITICAL_SECTION)&GPendingLockMutex);
    uVar8 = ((uint)((ulonglong)local_138 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_138 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    if (GPendingLocks._8_4_ != GPendingLocks._52_4_) {
      lVar12 = 0x154bdc3a8;
      if (GPendingLocks._64_8_ != 0) {
        lVar12 = GPendingLocks._64_8_;
      }
      for (iVar1 = *(int *)(lVar12 + (ulonglong)(GPendingLocks._72_4_ - 1 & (uVar8 >> 0x10 ^ uVar8))
                                     * 4); iVar1 != -1;
          iVar1 = *(int *)(GPendingLocks._0_8_ + 0x20 + (longlong)iVar1 * 0x28)) {
        if (*(FVulkanBuffer **)(GPendingLocks._0_8_ + (longlong)iVar1 * 0x28) == local_138) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!GPendingLocks.Contains(Buffer)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                             ,0x3f,L"");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            pvVar9 = (void *)(*pcVar2)();
            return pvVar9;
          }
          break;
        }
      }
    }
    local_c0 = &local_138;
    pppFVar15 = &local_c0;
    local_b8 = &local_120;
    pTVar13 = (TPairInitializer<FVulkanBuffer_*_const_&,FVulkanPendingBufferLock_const_&> *)
              local_128;
  }
  else {
    if ((1 < param_2 - RLM_WriteOnly) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LockMode == RLM_WriteOnly) || (LockMode == RLM_WriteOnly_NoOverwrite)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                           ,0x191,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar2)();
      return pvVar9;
    }
    if (((bVar5 == false) || (param_3 != (uint)this->_padding_)) || (param_4 != 0)) {
      bVar7 = false;
      bVar4 = false;
      if ((bVar5 != false) || (bVar6)) goto LAB_145aeacf4;
    }
    else {
      bVar4 = true;
LAB_145aeacf4:
      bVar7 = bVar4;
      if ((uVar8 == 0) || (param_2 == RLM_WriteOnly_NoOverwrite)) {
        if (((this->CurrentBufferAlloc).HostPtr == (void *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentBufferAlloc.HostPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                               ,0x19b,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          pvVar9 = (void *)(*pcVar2)();
          return pvVar9;
        }
        goto LAB_145aeaf10;
      }
    }
    if ((((!bVar3) || (bVar7)) && (GVulkanForceStagingBufferOnLock == 0)) &&
       ((lVar12 & 0x400000) == 0)) {
      VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_f0.Alloc);
      local_f0.HostPtr = (void *)0x0;
      local_f0.DeviceAddress = 0;
      AllocateMemory(this,&local_f0);
      VulkanRHI::FVulkanAllocation::Disown(&local_f0.Alloc);
      EVar11 = Graphics;
      if (GRHIGlobals.SupportsEfficientAsyncCompute != false) {
        EVar11 = All;
      }
      local_a0.NewAlloc.Alloc.VulkanHandle = local_f0.Alloc.VulkanHandle;
      local_a0.NewAlloc.Alloc.HandleId = local_f0.Alloc.HandleId;
      local_a0.NewAlloc.Alloc.Size = local_f0.Alloc.Size;
      local_a0.NewAlloc.Alloc.Offset = local_f0.Alloc.Offset;
      local_a0.NewAlloc.Alloc.AllocationIndex = local_f0.Alloc.AllocationIndex;
      local_a0.NewAlloc.Alloc.AllocatorIndex = local_f0.Alloc.AllocatorIndex;
      local_a0.NewAlloc.Alloc.MetaType = local_f0.Alloc.MetaType;
      local_a0.NewAlloc.Alloc._27_5_ = local_f0.Alloc._27_5_;
      local_a0.NewAlloc.HostPtr = local_f0.HostPtr;
      local_a0.NewAlloc.DeviceAddress = local_f0.DeviceAddress;
      local_a0.Buffer = this;
      FRHICommandListBase::EnqueueLambdaMultiPipe<_FVulkanBuffer::Lock_::__l56::<lambda_2>_>
                (param_1,EVar11,Enabled,L"FVulkanBuffer::Lock",&local_a0);
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_a0.NewAlloc.Alloc);
      pvVar9 = local_f0.HostPtr;
      uVar14 = (ulonglong)param_4;
      this->LockStatus = PersistentMapping;
      VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_f0.Alloc);
      goto LAB_145aeaf1e;
    }
    local_100 = param_4;
    local_fc = param_3;
    local_f8 = param_2;
    local_f4 = uVar8 == 0;
    local_108 = VulkanRHI::FStagingManager::AcquireBuffer
                          (&this->Device->StagingManager,param_3,1,
                           VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    pvVar9 = VulkanRHI::FStagingBuffer::GetMappedPointer(local_108);
    local_130 = this;
    EnterCriticalSection((LPCRITICAL_SECTION)&GPendingLockMutex);
    uVar8 = ((uint)((ulonglong)local_130 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_130 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    if (GPendingLocks._8_4_ != GPendingLocks._52_4_) {
      lVar12 = 0x154bdc3a8;
      if (GPendingLocks._64_8_ != 0) {
        lVar12 = GPendingLocks._64_8_;
      }
      for (iVar1 = *(int *)(lVar12 + (ulonglong)(GPendingLocks._72_4_ - 1 & (uVar8 >> 0x10 ^ uVar8))
                                     * 4); iVar1 != -1;
          iVar1 = *(int *)(GPendingLocks._0_8_ + 0x20 + (longlong)iVar1 * 0x28)) {
        if (*(FVulkanBuffer **)(GPendingLocks._0_8_ + (longlong)iVar1 * 0x28) == local_130) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!GPendingLocks.Contains(Buffer)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                             ,0x3f,L"");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            pvVar9 = (void *)(*pcVar2)();
            return pvVar9;
          }
          break;
        }
      }
    }
    local_b0 = &local_130;
    pppFVar15 = &local_b0;
    local_a8 = &local_108;
    pTVar13 = (TPairInitializer<FVulkanBuffer_*_const_&,FVulkanPendingBufferLock_const_&> *)
              (local_128 + 4);
  }
  TSet<TTuple<FVulkanBuffer_*,FVulkanPendingBufferLock>,TDefaultMapHashableKeyFuncs<FVulkanBuffer_*,FVulkanPendingBufferLock,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FVulkanBuffer_*_const_&,FVulkanPendingBufferLock_const_&>_>
            ((TSet<TTuple<FVulkanBuffer_*,FVulkanPendingBufferLock>,TDefaultMapHashableKeyFuncs<FVulkanBuffer_*,FVulkanPendingBufferLock,0>,FDefaultSetAllocator>
              *)&GPendingLocks,pTVar13,(bool *)pppFVar15);
  LeaveCriticalSection((LPCRITICAL_SECTION)&GPendingLockMutex);
LAB_145aeaf1e:
  if ((pvVar9 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                         ,0x1c4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pvVar9 = (void *)(*pcVar2)();
    return pvVar9;
  }
  return (void *)(uVar14 + (longlong)pvVar9);
}

// ReleaseOwnership @ 145af2e50

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

void __thiscall FVulkanBuffer::ReleaseOwnership(FVulkanBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uStackX_c;
  
  if (this->LockStatus != Unlocked) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LockStatus == ELockStatus::Unlocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                       ,0x221,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = VulkanRHI::FVulkanAllocation::HasAllocation(&(this->CurrentBufferAlloc).Alloc);
  if (bVar2) {
    UE::RHICore::UpdateGlobalBufferStats
              ((FRHIBufferDesc *)&this->_padding_,-(ulonglong)(this->CurrentBufferAlloc).Alloc.Size)
    ;
    VulkanRHI::FMemoryManager::FreeVulkanAllocation
              (&this->Device->MemoryManager,&(this->CurrentBufferAlloc).Alloc,EVulkanFreeFlag_None);
  }
  uStackX_c = uStackX_c & 0xffffff00;
  this->_padding_ = (ulonglong)uStackX_c << 0x20;
  bVar3 = (byte)GNumExplicitGPUsForRendering;
  this->_padding_ = 0;
  *(int *)((longlong)&this->_padding_ + 4) = (1 << (bVar3 & 0x1f)) + -1;
  *(undefined4 *)&this->_padding_ = 0x100000;
  return;
}

// TakeOwnership @ 145af4ce0

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

void __thiscall FVulkanBuffer::TakeOwnership(FVulkanBuffer *this,FVulkanBuffer *param_1)

{
  code *pcVar1;
  ulong64 uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  EVulkanAllocationMetaType EVar6;
  undefined5 uVar7;
  bool bVar8;
  FVulkanAllocation local_38;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1->LockStatus != Unlocked) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other.LockStatus == ELockStatus::Unlocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                       ,0x210,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ReleaseOwnership(this);
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->BufferUsageFlags = param_1->BufferUsageFlags;
  uVar3 = (param_1->CurrentBufferAlloc).Alloc.HandleId;
  uVar4 = (param_1->CurrentBufferAlloc).Alloc.Size;
  (this->CurrentBufferAlloc).Alloc.VulkanHandle = (param_1->CurrentBufferAlloc).Alloc.VulkanHandle;
  (this->CurrentBufferAlloc).Alloc.HandleId = uVar3;
  (this->CurrentBufferAlloc).Alloc.Size = uVar4;
  uVar3 = (param_1->CurrentBufferAlloc).Alloc.AllocationIndex;
  uVar5 = (param_1->CurrentBufferAlloc).Alloc.AllocatorIndex;
  EVar6 = (param_1->CurrentBufferAlloc).Alloc.MetaType;
  uVar7 = *(undefined5 *)&(param_1->CurrentBufferAlloc).Alloc.field_0x1b;
  (this->CurrentBufferAlloc).Alloc.Offset = (param_1->CurrentBufferAlloc).Alloc.Offset;
  (this->CurrentBufferAlloc).Alloc.AllocationIndex = uVar3;
  (this->CurrentBufferAlloc).Alloc.AllocatorIndex = uVar5;
  (this->CurrentBufferAlloc).Alloc.MetaType = EVar6;
  *(undefined5 *)&(this->CurrentBufferAlloc).Alloc.field_0x1b = uVar7;
  uVar2 = (param_1->CurrentBufferAlloc).DeviceAddress;
  (this->CurrentBufferAlloc).HostPtr = (param_1->CurrentBufferAlloc).HostPtr;
  (this->CurrentBufferAlloc).DeviceAddress = uVar2;
  param_1->BufferUsageFlags = 0;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&local_38);
  local_18 = 0;
  uStack_10 = 0;
  (param_1->CurrentBufferAlloc).Alloc.VulkanHandle = local_38.VulkanHandle;
  (param_1->CurrentBufferAlloc).Alloc.HandleId = local_38.HandleId;
  (param_1->CurrentBufferAlloc).Alloc.Size = local_38.Size;
  (param_1->CurrentBufferAlloc).Alloc.Offset = local_38.Offset;
  (param_1->CurrentBufferAlloc).Alloc.AllocationIndex = local_38.AllocationIndex;
  (param_1->CurrentBufferAlloc).Alloc.AllocatorIndex = local_38.AllocatorIndex;
  (param_1->CurrentBufferAlloc).Alloc.MetaType = local_38.MetaType;
  *(undefined5 *)&(param_1->CurrentBufferAlloc).Alloc.field_0x1b = local_38._27_5_;
  (param_1->CurrentBufferAlloc).HostPtr = (void *)0x0;
  (param_1->CurrentBufferAlloc).DeviceAddress = 0;
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&local_38);
  return;
}

// UEToVKBufferUsageFlags @ 145af5920

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

uint __cdecl
FVulkanBuffer::UEToVKBufferUsageFlags(FVulkanDevice *param_1,EBufferUsageFlags param_2,bool param_3)

{
  ulonglong uVar1;
  EBufferUsageFlags EVar2;
  EBufferUsageFlags EVar3;
  
  EVar3 = (((param_2 & UniformBuffer | MultiGPUAllocate) >> 8 | param_2 & IndexBuffer) >> 2 |
          param_2 & VertexBuffer) >> 7 |
          -(uint)((param_2 & (StructuredBuffer|ByteAddressBuffer)) != None) & SourceCopy |
          -(uint)((param_2 & AccelerationStructure) != None) & NullResource;
  if (!param_3) {
    uVar1 = (param_1->OptionalDeviceExtensions).field0_0x0.Packed;
    EVar3 = EVar3 | -(uint)((param_2 & KeepCPUAccessible) != None) & (Dynamic|Static) |
                    ~(param_2 >> 1) & Dynamic | (param_2 & DrawIndirect) * 2 |
                    param_2 >> 6 & Volatile | param_2 & UnorderedAccess;
    if (((uVar1 >> 10 & 1) != 0) &&
       (((((uint)uVar1 & 0x2800) == 0x2800 || ((uVar1 >> 0xc & 1) != 0)) &&
        ((uVar1 & 0x17000004000) == 0x17000004000)))) {
      EVar2 = 0xa0000;
      if ((param_2 & AccelerationStructure) != None) {
        EVar2 = MultiGPUAllocate;
      }
      EVar3 = EVar3 | EVar2;
    }
    if ((uVar1 >> 0x24 & 1) != 0) {
      EVar3 = EVar3 | MultiGPUAllocate;
    }
  }
  return EVar3;
}

// Unlock @ 145af6080

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
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FVulkanBuffer::Unlock(FVulkanBuffer *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  FVulkanPendingBufferLock local_58;
  FVulkanBuffer *local_40;
  FStagingBuffer *pFStack_38;
  uint local_30;
  uint uStack_2c;
  EResourceLockMode EStack_28;
  undefined1 uStack_24;
  undefined2 uStack_23;
  undefined1 uStack_21;
  
  lVar3 = this->_padding_;
  if (((lVar3 & 2) == 0) && ((lVar3 & 4) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((lVar3 & 1) == 0) && (bVar5)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (this->LockStatus == Unlocked) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LockStatus != ELockStatus::Unlocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                       ,0x1d0,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->LockStatus == PersistentMapping) {
    this->LockStatus = Unlocked;
  }
  else {
    if (((!bVar2) && (!bVar5)) && ((lVar3 & 0x100) == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bStatic || bDynamic || bSR",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58.LockMode = RLM_Num;
    local_58.StagingBuffer = (FStagingBuffer *)0x0;
    local_58.Offset = 0;
    local_58.Size = 0;
    local_58.FirstLock = false;
    EnterCriticalSection((LPCRITICAL_SECTION)&GPendingLockMutex);
    bVar5 = TMap<FVulkanBuffer_*,FVulkanPendingBufferLock,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanBuffer_*,FVulkanPendingBufferLock,0>_>
            ::RemoveAndCopyValue(&GPendingLocks,this,&local_58);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBuffer.cpp"
                         ,0x38,L"Mismatched Buffer Lock/Unlock!");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GPendingLockMutex);
    pFStack_38 = local_58.StagingBuffer;
    local_30 = local_58.Offset;
    uStack_2c = local_58.Size;
    EStack_28 = local_58.LockMode;
    uStack_24 = local_58.FirstLock;
    uStack_23 = local_58._21_2_;
    uStack_21 = local_58._23_1_;
    local_40 = this;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
      puVar6 = FRHICommandListBase::AllocCommand(param_1,0x38,8);
      *puVar6 = &TRHILambdaCommand<FRHICommandListBase,`FVulkanBuffer::Unlock'::`14'::<lambda_1>_>::
                 _vftable_;
      puVar6[2] = local_40;
      puVar6[3] = pFStack_38;
      puVar6[6] = L"FVulkanBuffer::Unlock";
      puVar6[1] = 0;
      puVar6[4] = CONCAT44(uStack_2c,local_30);
      puVar6[5] = CONCAT17(uStack_21,CONCAT25(uStack_23,CONCAT14(uStack_24,EStack_28)));
      this->LockStatus = Unlocked;
    }
    else {
      `FVulkanBuffer::Unlock'::__l14::<lambda_1>::operator()(&local_40,param_1);
      this->LockStatus = Unlocked;
    }
  }
  return;
}

