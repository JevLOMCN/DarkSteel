// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 9

// FStagingBuffer @ 145b00380

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

FStagingBuffer * __thiscall
VulkanRHI::FStagingBuffer::FStagingBuffer(FStagingBuffer *this,FVulkanDevice *param_1)

{
  this->Device = param_1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FStagingBuffer_VulkanRHI__6B_;
  (this->Track).Data = (void *)0x0;
  (this->Track).SizeOrLine = 0;
  (this->Allocation).VulkanHandle = 0;
  (this->Allocation).HandleId = 0;
  (this->Allocation).Size = 0;
  (this->Allocation).Offset = 0;
  (this->Allocation).AllocationIndex = 0;
  (this->Allocation).AllocatorIndex = 0;
  (this->Allocation).MetaType = EVulkanAllocationMetaUnknown;
  (this->Allocation).field_0x1b = 0;
  this->Buffer = (VkBuffer_T *)0x0;
  this->MemoryReadFlags = VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
  this->BufferSize = 0;
  return this;
}

// ~FStagingBuffer @ 145b05080

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

void __thiscall VulkanRHI::FStagingBuffer::~FStagingBuffer(FStagingBuffer *this)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FStagingBuffer_VulkanRHI__6B_;
  FMemoryManager::FreeVulkanAllocation
            (&this->Device->MemoryManager,&this->Allocation,EVulkanFreeFlag_None);
  uVar1 = (this->Allocation).field_0x1b;
  if (((this->Allocation).Type != 0 & (byte)uVar1 >> 6) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAllocation()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xebe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Destroy @ 145b13e20

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

void __thiscall VulkanRHI::FStagingBuffer::Destroy(FStagingBuffer *this)

{
  (*VulkanDynamicAPI::vkDestroyBuffer)(this->Device->Device,this->Buffer,&GAllocationCallbacks);
  this->Buffer = (VkBuffer_T *)0x0;
  FMemoryManager::FreeVulkanAllocation
            (&this->Device->MemoryManager,&this->Allocation,EVulkanFreeFlag_None);
  return;
}

// FlushMappedMemory @ 145b1a400

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

void __thiscall VulkanRHI::FStagingBuffer::FlushMappedMemory(FStagingBuffer *this)

{
  uint uVar1;
  FDeviceMemoryAllocation *pFVar2;
  code *pcVar3;
  bool bVar4;
  VkResult VVar5;
  FVulkanSubresourceAllocator *pFVar6;
  ulong64 uVar7;
  VkMappedMemoryRange local_38;
  
  pFVar6 = FVulkanAllocation::GetSubresourceAllocator(&this->Allocation,this->Device);
  pFVar2 = pFVar6->MemoryAllocation;
  if ((pFVar2->bIsCoherent == 0) || (GForceCoherent != 0)) {
    uVar1 = (this->Allocation).Offset;
    uVar7 = AdjustToNonCoherentAtomSize
                      ((ulonglong)uVar1,(ulonglong)(this->Allocation).Size,pFVar2->Size,
                       (pFVar6->Owner->Device->GpuProps).limits.nonCoherentAtomSize);
    if ((pFVar2->bIsCoherent == 0) || (GForceCoherent != 0)) {
      if ((pFVar2->MappedPointer == (void *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsMapped()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                             ,0x53c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pFVar2->Size < uVar7 + uVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOffset + InSize <= Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                             ,0x53d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_38.sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
      local_38._4_8_ = 0;
      local_38.pNext._4_4_ = 0;
      local_38.memory._0_4_ = SUB84(pFVar2->Handle,0);
      local_38.memory._4_4_ = (undefined4)((ulonglong)pFVar2->Handle >> 0x20);
      local_38.offset._4_4_ = 0;
      local_38.size._0_4_ = (undefined4)uVar7;
      local_38.size._4_4_ = (undefined4)(uVar7 >> 0x20);
      local_38.offset._0_4_ = uVar1;
      VVar5 = (*VulkanDynamicAPI::vkFlushMappedMemoryRanges)(pFVar2->DeviceHandle,1,&local_38);
      if (VVar5 != VK_SUCCESS) {
        VerifyVulkanResult(VVar5,"VulkanRHI::vkFlushMappedMemoryRanges(DeviceHandle, 1, &Range)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x543);
      }
    }
  }
  return;
}

// GetDeviceMemoryHandle @ 145b1d6e0

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

VkDeviceMemory_T * __thiscall VulkanRHI::FStagingBuffer::GetDeviceMemoryHandle(FStagingBuffer *this)

{
  FVulkanSubresourceAllocator *pFVar1;
  
  pFVar1 = FVulkanAllocation::GetSubresourceAllocator(&this->Allocation,this->Device);
  return pFVar1->MemoryAllocation->Handle;
}

// GetHandle @ 145b1df00

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

VkBuffer_T * __thiscall VulkanRHI::FStagingBuffer::GetHandle(FStagingBuffer *this)

{
  return this->Buffer;
}

// GetMappedPointer @ 145b1df30

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

void * __thiscall VulkanRHI::FStagingBuffer::GetMappedPointer(FStagingBuffer *this)

{
  void *pvVar1;
  
  pvVar1 = FVulkanAllocation::GetMappedPointer(&this->Allocation,this->Device);
  return pvVar1;
}

// GetSize @ 145b1f0c0

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

uint __thiscall VulkanRHI::FStagingBuffer::GetSize(FStagingBuffer *this)

{
  return this->BufferSize;
}

// InvalidateMappedMemory @ 145b26da0

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

void __thiscall VulkanRHI::FStagingBuffer::InvalidateMappedMemory(FStagingBuffer *this)

{
  uint uVar1;
  FDeviceMemoryAllocation *pFVar2;
  code *pcVar3;
  bool bVar4;
  VkResult VVar5;
  FVulkanSubresourceAllocator *pFVar6;
  ulong64 uVar7;
  VkMappedMemoryRange local_38;
  
  pFVar6 = FVulkanAllocation::GetSubresourceAllocator(&this->Allocation,this->Device);
  pFVar2 = pFVar6->MemoryAllocation;
  if ((pFVar2->bIsCoherent == 0) || (GForceCoherent != 0)) {
    uVar1 = (this->Allocation).Offset;
    uVar7 = AdjustToNonCoherentAtomSize
                      ((ulonglong)uVar1,(ulonglong)(this->Allocation).Size,pFVar2->Size,
                       (pFVar6->Owner->Device->GpuProps).limits.nonCoherentAtomSize);
    if ((pFVar2->bIsCoherent == 0) || (GForceCoherent != 0)) {
      if ((pFVar2->MappedPointer == (void *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsMapped()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                             ,0x54b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pFVar2->Size < uVar7 + uVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOffset + InSize <= Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                             ,0x54c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_38.sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
      local_38._4_8_ = 0;
      local_38.pNext._4_4_ = 0;
      local_38.memory._0_4_ = SUB84(pFVar2->Handle,0);
      local_38.memory._4_4_ = (undefined4)((ulonglong)pFVar2->Handle >> 0x20);
      local_38.offset._4_4_ = 0;
      local_38.size._0_4_ = (undefined4)uVar7;
      local_38.size._4_4_ = (undefined4)(uVar7 >> 0x20);
      local_38.offset._0_4_ = uVar1;
      VVar5 = (*VulkanDynamicAPI::vkInvalidateMappedMemoryRanges)(pFVar2->DeviceHandle,1,&local_38);
      if (VVar5 != VK_SUCCESS) {
        VerifyVulkanResult(VVar5,
                           "VulkanRHI::vkInvalidateMappedMemoryRanges(DeviceHandle, 1, &Range)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x552);
      }
    }
  }
  return;
}

