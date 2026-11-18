// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 8

// FTempBlockAllocator @ 145b00450

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

FTempBlockAllocator * __thiscall
VulkanRHI::FTempBlockAllocator::FTempBlockAllocator
          (FTempBlockAllocator *this,FVulkanDevice *param_1,uint param_2,uint param_3,uint param_4)

{
  FTempMemoryBlock *pFVar1;
  
  this->Device = param_1;
  this->_padding_ = (longlong)&___7FTempBlockAllocator_VulkanRHI__6B_;
  this->BufferUsage = param_4;
  this->CurrentBlock = (FTempMemoryBlock *)0x0;
  (this->BusyBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BusyBlocks).ArrayNum = 0;
  (this->BusyBlocks).ArrayMax = 0;
  (this->AvailableBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableBlocks).ArrayNum = 0;
  (this->AvailableBlocks).ArrayMax = 0;
  this->BlockSize = param_2;
  this->BlockAlignment = param_3;
  (this->RWLock).Mutex.Mutex.Ptr = (void *)0x0;
  pFVar1 = AllocBlock(this);
  this->CurrentBlock = pFVar1;
  return this;
}

// ~FTempBlockAllocator @ 145b051a0

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

void __thiscall VulkanRHI::FTempBlockAllocator::~FTempBlockAllocator(FTempBlockAllocator *this)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  FVulkanAllocation *pFVar4;
  FVulkanDevice *pFVar5;
  FTempMemoryBlock *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  BOOLEAN BVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&___7FTempBlockAllocator_VulkanRHI__6B_;
  pFVar11 = (this->AvailableBlocks).AllocatorInstance.Data;
  iVar3 = (this->AvailableBlocks).ArrayNum;
  pFVar7 = pFVar11 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AvailableBlocks).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<VulkanRHI::FTempBlockAllocator::FTempMemoryBlock_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar7) break;
    pFVar4 = *(FVulkanAllocation **)pFVar11;
    pFVar5 = this->Device;
    (*VulkanDynamicAPI::vkDestroyBuffer)
              (pFVar5->Device,(VkBuffer_T *)pFVar4[1].VulkanHandle,&GAllocationCallbacks);
    FMemoryManager::FreeVulkanAllocation(&pFVar5->MemoryManager,pFVar4,EVulkanFreeFlag_DontDefer);
    DestructItems<TRefCountPtr<FVulkanSyncPoint>,int>
              (*(TRefCountPtr<FVulkanSyncPoint> **)&pFVar4[1].AllocatorIndex,
               (int)pFVar4[2].VulkanHandle);
    if (*(void **)&pFVar4[1].AllocatorIndex != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar4[1].AllocatorIndex);
    }
    if ((pFVar4->Type != 0 & (byte)pFVar4->field_0x1b >> 6) != 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAllocation()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xebe,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    ::operator_delete(pFVar4,0x50);
    pFVar11 = pFVar11 + 8;
  }
  piVar1 = &(this->AvailableBlocks).ArrayMax;
  (this->AvailableBlocks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AvailableBlocks).AllocatorInstance,0,piVar1);
  }
  pFVar11 = (this->BusyBlocks).AllocatorInstance.Data;
  iVar3 = (this->BusyBlocks).ArrayNum;
  pFVar7 = pFVar11 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->BusyBlocks).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<VulkanRHI::FTempBlockAllocator::FTempMemoryBlock_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar7) break;
    pFVar4 = *(FVulkanAllocation **)pFVar11;
    pFVar5 = this->Device;
    (*VulkanDynamicAPI::vkDestroyBuffer)
              (pFVar5->Device,(VkBuffer_T *)pFVar4[1].VulkanHandle,&GAllocationCallbacks);
    FMemoryManager::FreeVulkanAllocation(&pFVar5->MemoryManager,pFVar4,EVulkanFreeFlag_DontDefer);
    DestructItems<TRefCountPtr<FVulkanSyncPoint>,int>
              (*(TRefCountPtr<FVulkanSyncPoint> **)&pFVar4[1].AllocatorIndex,
               (int)pFVar4[2].VulkanHandle);
    if (*(void **)&pFVar4[1].AllocatorIndex != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar4[1].AllocatorIndex);
    }
    if ((pFVar4->Type != 0 & (byte)pFVar4->field_0x1b >> 6) != 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAllocation()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xebe,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    ::operator_delete(pFVar4,0x50);
    pFVar11 = pFVar11 + 8;
  }
  piVar1 = &(this->BusyBlocks).ArrayMax;
  (this->BusyBlocks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->BusyBlocks).AllocatorInstance,0,piVar1);
  }
  pFVar6 = this->CurrentBlock;
  pFVar5 = this->Device;
  (*VulkanDynamicAPI::vkDestroyBuffer)(pFVar5->Device,pFVar6->Buffer,&GAllocationCallbacks);
  FMemoryManager::FreeVulkanAllocation
            (&pFVar5->MemoryManager,&pFVar6->Allocation,EVulkanFreeFlag_DontDefer);
  DestructItems<TRefCountPtr<FVulkanSyncPoint>,int>
            ((TRefCountPtr<FVulkanSyncPoint> *)(pFVar6->SyncPoints).AllocatorInstance.Data,
             (pFVar6->SyncPoints).ArrayNum);
  pFVar7 = (pFVar6->SyncPoints).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  uVar2 = (pFVar6->Allocation).field_0x1b;
  if (((pFVar6->Allocation).Type != 0 & (byte)uVar2 >> 6) != 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAllocation()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xebe,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  ::operator_delete(pFVar6,0x50);
  this->CurrentBlock = (FTempMemoryBlock *)0x0;
  BVar10 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
  if (BVar10 == '\0') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
  }
  pFVar7 = (this->AvailableBlocks).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (this->BusyBlocks).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

// Alloc @ 145b0c1b0

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

uchar * __thiscall
VulkanRHI::FTempBlockAllocator::Alloc
          (FTempBlockAllocator *this,uint param_1,FVulkanContextCommon *param_2,
          VkDescriptorBufferBindingInfoEXT *param_3,ulong64 *param_4)

{
  FInternalAlloc local_18;
  
  InternalAlloc(this,&local_18,param_1,param_2);
  param_3->sType = VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_INFO_EXT;
  *(undefined8 *)&param_3->field_0x4 = 0;
  *(undefined8 *)((longlong)&param_3->pNext + 4) = 0;
  *(undefined8 *)((longlong)&param_3->address + 4) = 0;
  *(undefined4 *)&param_3->field_0x1c = 0;
  param_3->address = (local_18.Block)->BufferAddress;
  param_3->usage = this->BufferUsage;
  *param_4 = (ulonglong)local_18.Offset;
  return (local_18.Block)->MappedPointer + local_18.Offset;
}

// Alloc @ 145b0c220

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

uchar * __thiscall
VulkanRHI::FTempBlockAllocator::Alloc
          (FTempBlockAllocator *this,uint param_1,FVulkanContextCommon *param_2,
          VkStridedDeviceAddressRegionKHR *param_3)

{
  ulong64 uVar1;
  FInternalAlloc local_18;
  
  InternalAlloc(this,&local_18,param_1,param_2);
  uVar1 = (local_18.Block)->BufferAddress;
  param_3->size = (ulonglong)param_1;
  param_3->stride = (ulonglong)param_1;
  param_3->deviceAddress = uVar1 + local_18.Offset;
  return (local_18.Block)->MappedPointer + local_18.Offset;
}

// Alloc @ 145b0c280

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

uchar * __thiscall
VulkanRHI::FTempBlockAllocator::Alloc
          (FTempBlockAllocator *this,uint param_1,uint param_2,FVulkanContextCommon *param_3,
          FVulkanAllocation *param_4,VkDescriptorAddressInfoEXT *param_5)

{
  VkBuffer_T *pVVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  EVulkanAllocationMetaType EVar5;
  undefined5 uVar6;
  FInternalAlloc local_18;
  
  InternalAlloc(this,&local_18,param_1,param_3);
  uVar2 = ((local_18.Block)->Allocation).HandleId;
  uVar3 = ((local_18.Block)->Allocation).Size;
  param_4->VulkanHandle = ((local_18.Block)->Allocation).VulkanHandle;
  param_4->HandleId = uVar2;
  param_4->Size = uVar3;
  uVar2 = ((local_18.Block)->Allocation).AllocationIndex;
  uVar4 = ((local_18.Block)->Allocation).AllocatorIndex;
  EVar5 = ((local_18.Block)->Allocation).MetaType;
  uVar6 = *(undefined5 *)&((local_18.Block)->Allocation).field_0x1b;
  param_4->Offset = ((local_18.Block)->Allocation).Offset;
  param_4->AllocationIndex = uVar2;
  param_4->AllocatorIndex = uVar4;
  param_4->MetaType = EVar5;
  *(undefined5 *)&param_4->field_0x1b = uVar6;
  param_4->bHasOwnership = '\0';
  pVVar1 = (local_18.Block)->Buffer;
  param_4->Offset = param_4->Offset + local_18.Offset;
  param_4->VulkanHandle = (ulong64)pVVar1;
  param_4->Size = param_1;
  if (param_5 != (VkDescriptorAddressInfoEXT *)0x0) {
    param_5->sType = VK_STRUCTURE_TYPE_DESCRIPTOR_ADDRESS_INFO_EXT;
    *(undefined8 *)&param_5->field_0x4 = 0;
    *(undefined8 *)((longlong)&param_5->pNext + 4) = 0;
    *(undefined8 *)((longlong)&param_5->address + 4) = 0;
    *(undefined8 *)((longlong)&param_5->range + 4) = 0;
    *(undefined4 *)&param_5->field_0x24 = 0;
    param_5->address = (ulonglong)local_18.Offset + (local_18.Block)->BufferAddress;
    param_5->range = (ulonglong)param_1;
  }
  return (local_18.Block)->MappedPointer + local_18.Offset;
}

// AllocBlock @ 145b0c490

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

FTempMemoryBlock * __thiscall VulkanRHI::FTempBlockAllocator::AllocBlock(FTempBlockAllocator *this)

{
  FName FVar1;
  FTempMemoryBlock *this_00;
  VkBuffer_T *pVVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferOther> FVar4;
  FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_TempBlocks> FVar5;
  uchar *puVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  FName local_res8;
  VkBufferDeviceAddressInfo local_38;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (FTempMemoryBlock *)0x0) {
    (this_00->Allocation).VulkanHandle = 0;
    (this_00->Allocation).HandleId = 0;
    (this_00->Allocation).Size = 0;
    (this_00->Allocation).Offset = 0;
    (this_00->Allocation).AllocationIndex = 0;
    (this_00->Allocation).AllocatorIndex = 0;
    (this_00->Allocation).MetaType = EVulkanAllocationMetaUnknown;
    (this_00->Allocation).field_0x1b = 0;
    this_00->Buffer = (VkBuffer_T *)0x0;
    this_00->MappedPointer = (uchar *)0x0;
    this_00->BufferAddress = 0;
    (this_00->SyncPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->SyncPoints).ArrayNum = 0;
    (this_00->SyncPoints).ArrayMax = 0;
    this_00->CurrentOffset = (atomic<unsigned_int>)0x0;
  }
  pVVar2 = FVulkanDevice::CreateBuffer(this->Device,(ulonglong)this->BlockSize,this->BufferUsage,0);
  this_00->Buffer = pVVar2;
  FMemoryManager::AllocateBufferMemory
            (&this->Device->MemoryManager,&this_00->Allocation,pVVar2,
             AutoBind|Dedicated|PreferBAR|HostVisible,L"FTempBlockAllocator",this->BlockAlignment);
  uVar8 = (ulonglong)(this_00->Allocation).Size;
  if (uVar8 != 0) {
    FVar4 = StatPtr_STAT_VulkanAllocation_BufferOther;
    if (StatPtr_STAT_VulkanAllocation_BufferOther ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferOther>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_VulkanAllocation_BufferOther");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_BufferOther>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_BufferOther,
                         *pFVar3,L"BufferOther","STATGROUP_VulkanMemory","STATCAT_Advanced",
                         L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_res8.Number = FVar1.Number;
    FThreadStats::AddMessage<__int64>(FVar1,Subtract,uVar8,false);
  }
  uVar8 = (ulonglong)(this_00->Allocation).Size;
  if (uVar8 != 0) {
    FVar5 = StatPtr_STAT_VulkanAllocation_TempBlocks;
    if (StatPtr_STAT_VulkanAllocation_TempBlocks ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_TempBlocks>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_VulkanAllocation_TempBlocks");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_VulkanAllocation_TempBlocks>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAllocation_TempBlocks,
                         *pFVar3,L"TempBlocks","STATGROUP_VulkanMemory","STATCAT_Advanced",
                         L"Vulkan Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    local_res8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_res8.Number = FVar1.Number;
    FThreadStats::AddMessage<__int64>(FVar1,Add,uVar8,false);
  }
  puVar6 = FVulkanAllocation::GetMappedPointer(&this_00->Allocation,this->Device);
  this_00->MappedPointer = puVar6;
  if (((this->BufferUsage & 0x20000) != 0) &&
     (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x1000000000) != 0)) {
    local_38._4_8_ = 0;
    local_38.pNext._4_4_ = 0;
    local_38.buffer._0_4_ = SUB84(this_00->Buffer,0);
    local_38.buffer._4_4_ = (undefined4)((ulonglong)this_00->Buffer >> 0x20);
    local_38.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
    uVar7 = (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)(this->Device->Device,&local_38);
    this_00->BufferAddress = uVar7;
  }
  return this_00;
}

// InternalAlloc @ 145b267f0

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

FInternalAlloc * __thiscall
VulkanRHI::FTempBlockAllocator::InternalAlloc
          (FTempBlockAllocator *this,FInternalAlloc *__return_storage_ptr__,uint param_1,
          FVulkanContextCommon *param_2)

{
  FTempMemoryBlock **ppFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TRefCountPtr<FVulkanSyncPoint> TVar8;
  int *piVar9;
  FInternalAlloc *pFVar10;
  FTempMemoryBlock *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  undefined8 *local_res8;
  undefined8 *local_48;
  undefined8 *local_40;
  
  uVar13 = (param_1 - 1) + this->BlockAlignment & -this->BlockAlignment;
  AcquireSRWLockShared((PSRWLOCK)&this->RWLock);
  pFVar11 = this->CurrentBlock;
  ppFVar1 = &this->CurrentBlock;
  TVar8 = FVulkanContextCommon::GetContextSyncPoint(param_2);
  pFVar12 = (pFVar11->SyncPoints).AllocatorInstance.Data;
  pFVar4 = pFVar12 + (longlong)(pFVar11->SyncPoints).ArrayNum * 8;
  if (pFVar12 != pFVar4) {
    do {
      if (*(longlong *)pFVar12 == (TVar8.Reference)->_padding_) {
        bVar6 = true;
        goto LAB_145b26871;
      }
      pFVar12 = pFVar12 + 8;
    } while (pFVar12 != pFVar4);
  }
  bVar6 = false;
LAB_145b26871:
  if (local_res8 != (undefined8 *)0x0) {
    piVar9 = (int *)(local_res8 + 1);
    LOCK();
    iVar7 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (((iVar7 == 1) && (piVar9 != (int *)0x0)) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  if (bVar6) {
    LOCK();
    paVar2 = &(*ppFVar1)->CurrentOffset;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + uVar13);
    UNLOCK();
    if ((int)aVar3 + param_1 < this->BlockSize) {
      pFVar11 = *ppFVar1;
      __return_storage_ptr__->Offset = (uint)aVar3;
      __return_storage_ptr__->Block = pFVar11;
      ReleaseSRWLockShared((PSRWLOCK)&this->RWLock);
      return __return_storage_ptr__;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->RWLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->RWLock);
  LOCK();
  paVar2 = &(*ppFVar1)->CurrentOffset;
  aVar3 = *paVar2;
  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + uVar13);
  UNLOCK();
  if (param_1 + (int)aVar3 < this->BlockSize) {
    pFVar11 = *ppFVar1;
    TVar8 = FVulkanContextCommon::GetContextSyncPoint(param_2);
    TArray<TRefCountPtr<FVulkanSyncPoint>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TRefCountPtr<FVulkanSyncPoint>_>
              (&pFVar11->SyncPoints,(TRefCountPtr<FVulkanSyncPoint> *)TVar8.Reference);
    if (local_48 != (undefined8 *)0x0) {
      piVar9 = (int *)(local_48 + 1);
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (((iVar7 == 1) && (piVar9 != (int *)0x0)) && (local_48 != (undefined8 *)0x0)) {
        (**(code **)*local_48)(local_48,1);
      }
    }
    __return_storage_ptr__->Offset = (uint)aVar3;
  }
  else {
    pFVar4 = (this->BusyBlocks).AllocatorInstance.Data;
    if (((pFVar4 <= ppFVar1) && (ppFVar1 < pFVar4 + (longlong)(this->BusyBlocks).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FInternalAlloc *)(*pcVar5)();
      return pFVar10;
    }
    iVar7 = (this->BusyBlocks).ArrayNum;
    piVar9 = &(this->BusyBlocks).ArrayMax;
    if (iVar7 == *piVar9) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->BusyBlocks).AllocatorInstance,piVar9);
    }
    (this->BusyBlocks).ArrayNum = iVar7 + 1;
    *(FTempMemoryBlock **)((this->BusyBlocks).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         *ppFVar1;
    iVar7 = (this->AvailableBlocks).ArrayNum;
    if (iVar7 == 0) {
      pFVar11 = AllocBlock(this);
    }
    else {
      if ((iVar7 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FInternalAlloc *)(*pcVar5)();
        return pFVar10;
      }
      iVar7 = (this->AvailableBlocks).ArrayNum;
      pFVar11 = *(FTempMemoryBlock **)
                 ((this->AvailableBlocks).AllocatorInstance.Data + (longlong)iVar7 * 8 + -8);
      (this->AvailableBlocks).ArrayNum = iVar7 + -1;
    }
    this->CurrentBlock = pFVar11;
    TVar8 = FVulkanContextCommon::GetContextSyncPoint(param_2);
    TArray<TRefCountPtr<FVulkanSyncPoint>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TRefCountPtr<FVulkanSyncPoint>_>
              (&pFVar11->SyncPoints,(TRefCountPtr<FVulkanSyncPoint> *)TVar8.Reference);
    if (local_40 != (undefined8 *)0x0) {
      piVar9 = (int *)(local_40 + 1);
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (((iVar7 == 1) && (piVar9 != (int *)0x0)) && (local_40 != (undefined8 *)0x0)) {
        (**(code **)*local_40)(local_40,1);
      }
    }
    LOCK();
    paVar2 = &this->CurrentBlock->CurrentOffset;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + uVar13);
    UNLOCK();
    __return_storage_ptr__->Offset = (uint)aVar3;
  }
  __return_storage_ptr__->Block = this->CurrentBlock;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->RWLock);
  return __return_storage_ptr__;
}

// UpdateBlocks @ 145b37700

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

void __thiscall VulkanRHI::FTempBlockAllocator::UpdateBlocks(FTempBlockAllocator *this)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FPlatformRWLock *SRWLock;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  longlong local_res20;
  longlong local_58;
  FPlatformRWLock *local_50;
  
  SRWLock = &this->RWLock;
  local_50 = SRWLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  uVar13 = (this->BusyBlocks).ArrayNum - 1;
  if (-1 < (int)uVar13) {
    lVar10 = (longlong)(int)uVar13;
    lVar12 = lVar10 * 8;
    do {
      local_res18 = ~uVar13;
      local_res10 = local_res18 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < (this->BusyBlocks).ArrayNum) {
        uVar7 = local_res10;
      }
      local_res20 = lVar12;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar12 = *(longlong *)((this->BusyBlocks).AllocatorInstance.Data + lVar12);
      plVar11 = *(longlong **)(lVar12 + 0x38);
      iVar9 = *(int *)(lVar12 + 0x40);
      plVar2 = plVar11 + iVar9;
      local_58 = lVar12;
      while( true ) {
        if (*(int *)(lVar12 + 0x40) != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TRefCountPtr<FVulkanSyncPoint>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        lVar3 = local_58;
        if (plVar11 == plVar2) break;
        lVar3 = *plVar11;
        if ((*(longlong *)(lVar3 + 0x10) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("GraphEvent",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                               ,0x55,
                               L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0xd0) == '\0') goto LAB_145b379a9;
        plVar11 = plVar11 + 1;
      }
      DestructItems<TRefCountPtr<FVulkanSyncPoint>,int>
                (*(TRefCountPtr<FVulkanSyncPoint> **)(local_58 + 0x38),*(int *)(local_58 + 0x40));
      *(undefined4 *)(lVar3 + 0x40) = 0;
      if (*(int *)(lVar3 + 0x44) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(lVar3 + 0x38),0,(int *)(lVar3 + 0x44));
      }
      LOCK();
      *(undefined4 *)(local_58 + 0x48) = 0;
      UNLOCK();
      uVar7 = 0;
      if ((int)uVar13 < (this->BusyBlocks).ArrayNum) {
        uVar7 = local_res10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (this->BusyBlocks).ArrayNum;
      iVar8 = local_res18 + iVar9;
      pFVar4 = (this->BusyBlocks).AllocatorInstance.Data;
      if (1 < iVar8) {
        iVar8 = 1;
      }
      if (iVar8 != 0) {
        memmove(pFVar4 + lVar10 * 8,pFVar4 + (longlong)(iVar9 - iVar8) * 8,(longlong)iVar8 << 3);
      }
      piVar1 = &(this->BusyBlocks).ArrayNum;
      *piVar1 = *piVar1 + -1;
      pFVar4 = (this->AvailableBlocks).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar4 + (longlong)(this->AvailableBlocks).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (this->AvailableBlocks).ArrayNum;
      piVar1 = &(this->AvailableBlocks).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->AvailableBlocks).AllocatorInstance,piVar1);
      }
      (this->AvailableBlocks).ArrayNum = iVar9 + 1;
      *(longlong *)((this->AvailableBlocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_58
      ;
LAB_145b379a9:
      lVar10 = lVar10 + -1;
      lVar12 = local_res20 + -8;
      uVar13 = uVar13 - 1;
      SRWLock = local_50;
      local_res20 = lVar12;
    } while (-1 < (int)uVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x000145b379fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

