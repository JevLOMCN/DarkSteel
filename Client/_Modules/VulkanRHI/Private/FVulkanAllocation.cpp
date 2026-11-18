// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 19

// FVulkanAllocation @ 145b00590

FVulkanAllocation * __thiscall
VulkanRHI::FVulkanAllocation::FVulkanAllocation(FVulkanAllocation *this)

{
  this->VulkanHandle = 0;
  this->HandleId = 0;
  this->Size = 0;
  this->Offset = 0;
  this->AllocationIndex = 0;
  this->AllocatorIndex = 0;
  this->MetaType = EVulkanAllocationMetaUnknown;
  this->field_0x1b = 0;
  return this;
}

// ~FVulkanAllocation @ 145b05500

void __thiscall VulkanRHI::FVulkanAllocation::~FVulkanAllocation(FVulkanAllocation *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Type != 0 & (byte)this->field_0x1b >> 6) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAllocation()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xebe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// BindBuffer @ 145b0f650

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

void __thiscall
VulkanRHI::FVulkanAllocation::BindBuffer
          (FVulkanAllocation *this,FVulkanDevice *param_1,VkBuffer_T *param_2)

{
  VkResult VVar1;
  FVulkanSubresourceAllocator *pFVar2;
  
  pFVar2 = GetSubresourceAllocator(this,param_1);
  VVar1 = (*VulkanDynamicAPI::vkBindBufferMemory)
                    (param_1->Device,param_2,pFVar2->MemoryAllocation->Handle,(ulong64)this->Offset)
  ;
  if (VVar1 + VK_TIMEOUT < 2) {
    FMemoryManager::DumpMemory(&param_1->MemoryManager,true);
  }
  if (VVar1 != VK_SUCCESS) {
    VerifyVulkanResult(VVar1,"Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xf31);
  }
  return;
}

// BindImage @ 145b0f6e0

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

void __thiscall
VulkanRHI::FVulkanAllocation::BindImage
          (FVulkanAllocation *this,FVulkanDevice *param_1,VkImage_T *param_2)

{
  VkResult VVar1;
  FVulkanSubresourceAllocator *pFVar2;
  
  pFVar2 = GetSubresourceAllocator(this,param_1);
  VVar1 = (*VulkanDynamicAPI::vkBindImageMemory)
                    (param_1->Device,param_2,pFVar2->MemoryAllocation->Handle,(ulong64)this->Offset)
  ;
  if (VVar1 + VK_TIMEOUT < 2) {
    FMemoryManager::DumpMemory(&param_1->MemoryManager,true);
  }
  if (VVar1 != VK_SUCCESS) {
    VerifyVulkanResult(VVar1,"Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xf3b);
  }
  return;
}

// Disown @ 145b14a90

void __thiscall VulkanRHI::FVulkanAllocation::Disown(FVulkanAllocation *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bHasOwnership != '\0') {
    this->bHasOwnership = '\0';
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bHasOwnership",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                     ,0xefa,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bHasOwnership = '\0';
  return;
}

// FlushMappedMemory @ 145b1a540

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

void __thiscall
VulkanRHI::FVulkanAllocation::FlushMappedMemory(FVulkanAllocation *this,FVulkanDevice *param_1)

{
  uint uVar1;
  FDeviceMemoryAllocation *pFVar2;
  code *pcVar3;
  bool bVar4;
  VkResult VVar5;
  FVulkanSubresourceAllocator *pFVar6;
  ulong64 uVar7;
  VkMappedMemoryRange local_38;
  
  pFVar6 = GetSubresourceAllocator(this,param_1);
  pFVar2 = pFVar6->MemoryAllocation;
  if ((pFVar2->bIsCoherent == 0) || (GForceCoherent != 0)) {
    uVar1 = this->Offset;
    uVar7 = AdjustToNonCoherentAtomSize
                      ((ulonglong)uVar1,(ulonglong)this->Size,pFVar2->Size,
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

// Free @ 145b1b1a0

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

void __thiscall VulkanRHI::FVulkanAllocation::Free(FVulkanAllocation *this,FVulkanDevice *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Type != 0 & (byte)this->field_0x1b >> 6) != 0) {
    FMemoryManager::FreeVulkanAllocation(&param_1->MemoryManager,this,EVulkanFreeFlag_None);
    if (this->Type == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EVulkanAllocationEmpty != Type",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xee6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// GetBufferAlignment @ 145b1cd30

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

uint __thiscall
VulkanRHI::FVulkanAllocation::GetBufferAlignment(FVulkanAllocation *this,FVulkanDevice *param_1)

{
  FVulkanSubresourceAllocator *pFVar1;
  
  pFVar1 = GetSubresourceAllocator(this,param_1);
  return pFVar1->Alignment;
}

// GetBufferHandle @ 145b1cd50

VkBuffer_T * __thiscall VulkanRHI::FVulkanAllocation::GetBufferHandle(FVulkanAllocation *this)

{
  return (VkBuffer_T *)this->VulkanHandle;
}

// GetDeviceMemoryHandle @ 145b1d710

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

VkDeviceMemory_T * __thiscall
VulkanRHI::FVulkanAllocation::GetDeviceMemoryHandle(FVulkanAllocation *this,FVulkanDevice *param_1)

{
  FVulkanSubresourceAllocator *pFVar1;
  
  pFVar1 = GetSubresourceAllocator(this,param_1);
  return pFVar1->MemoryAllocation->Handle;
}

// GetMappedPointer @ 145b1df50

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

void * __thiscall
VulkanRHI::FVulkanAllocation::GetMappedPointer(FVulkanAllocation *this,FVulkanDevice *param_1)

{
  FDeviceMemoryAllocation *pFVar1;
  code *pcVar2;
  bool bVar3;
  FVulkanSubresourceAllocator *pFVar4;
  void *pvVar5;
  
  pFVar4 = GetSubresourceAllocator(this,param_1);
  pFVar1 = pFVar4->MemoryAllocation;
  if (pFVar1->MappedPointer == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsMapped()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.h"
                       ,0xcf,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  pvVar5 = pFVar1->MappedPointer;
  if (pvVar5 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("pMappedPointer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xf0a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  return (void *)((ulonglong)this->Offset + (longlong)pvVar5);
}

// GetSubresourceAllocator @ 145b1f640

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

FVulkanSubresourceAllocator * __thiscall
VulkanRHI::FVulkanAllocation::GetSubresourceAllocator
          (FVulkanAllocation *this,FVulkanDevice *param_1)

{
  code *pcVar1;
  bool bVar2;
  FVulkanSubresourceAllocator *pFVar3;
  byte bVar4;
  
  bVar4 = this->Type;
  if (this->Type != 0) {
    if ((((bVar4 == 1) || (bVar4 == 2)) || (bVar4 == 3)) || (bVar4 == 4)) {
      pFVar3 = FMemoryManager::GetSubresourceAllocator
                         (&param_1->MemoryManager,(uint)this->AllocatorIndex);
      return pFVar3;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xf49,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FVulkanSubresourceAllocator *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FVulkanSubresourceAllocator *)0x0;
}

// HasAllocation @ 145b23f80

bool __thiscall VulkanRHI::FVulkanAllocation::HasAllocation(FVulkanAllocation *this)

{
  return (bool)(this->Type != 0 & (byte)this->field_0x1b >> 6);
}

// Init @ 145b25430

void __thiscall
VulkanRHI::FVulkanAllocation::Init
          (FVulkanAllocation *this,EVulkanAllocationType param_1,EVulkanAllocationMetaType param_2,
          ulong64 param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8)

{
  code *pcVar1;
  bool bVar2;
  EVulkanAllocationType EVar3;
  
  if ((this->Type != 0 & (byte)this->field_0x1b >> 6) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAllocation()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xed2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = this->field_0x1b | 0x40;
  this->MetaType = param_2;
  this->field_0x1b = (EVar3 ^ param_1) & 0x3f ^ EVar3;
  this->Size = param_4;
  this->Offset = param_5;
  if (0xfffe < param_6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAllocatorIndex < (uint32)((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xed8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->AllocationIndex = param_7;
  this->HandleId = param_8;
  this->AllocatorIndex = (ushort)param_6;
  this->VulkanHandle = param_3;
  if (((int)GMaxRHIFeatureLevel < 2) && (param_8 == 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2475541483520782626>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xede,"!UseVulkanDescriptorCache() || HandleId != 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// InvalidateMappedMemory @ 145b26ee0

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

void __thiscall
VulkanRHI::FVulkanAllocation::InvalidateMappedMemory(FVulkanAllocation *this,FVulkanDevice *param_1)

{
  uint uVar1;
  FDeviceMemoryAllocation *pFVar2;
  code *pcVar3;
  bool bVar4;
  VkResult VVar5;
  FVulkanSubresourceAllocator *pFVar6;
  ulong64 uVar7;
  VkMappedMemoryRange local_38;
  
  pFVar6 = GetSubresourceAllocator(this,param_1);
  pFVar2 = pFVar6->MemoryAllocation;
  if ((pFVar2->bIsCoherent == 0) || (GForceCoherent != 0)) {
    uVar1 = this->Offset;
    uVar7 = AdjustToNonCoherentAtomSize
                      ((ulonglong)uVar1,(ulonglong)this->Size,pFVar2->Size,
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

// IsValid @ 145b270e0

bool __thiscall VulkanRHI::FVulkanAllocation::IsValid(FVulkanAllocation *this)

{
  return this->Size != 0;
}

// Own @ 145b2b6e0

void __thiscall VulkanRHI::FVulkanAllocation::Own(FVulkanAllocation *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bHasOwnership == '\0') {
    this->bHasOwnership = '\x01';
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!bHasOwnership",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                     ,0xeff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bHasOwnership = '\x01';
  return;
}

// Reference @ 145b2f300

void __thiscall
VulkanRHI::FVulkanAllocation::Reference(FVulkanAllocation *this,FVulkanAllocation *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  EVulkanAllocationMetaType EVar4;
  undefined5 uVar5;
  
  uVar1 = param_1->HandleId;
  uVar2 = param_1->Size;
  this->VulkanHandle = param_1->VulkanHandle;
  this->HandleId = uVar1;
  this->Size = uVar2;
  uVar1 = param_1->AllocationIndex;
  uVar3 = param_1->AllocatorIndex;
  EVar4 = param_1->MetaType;
  uVar5 = *(undefined5 *)&param_1->field_0x1b;
  this->Offset = param_1->Offset;
  this->AllocationIndex = uVar1;
  this->AllocatorIndex = uVar3;
  this->MetaType = EVar4;
  *(undefined5 *)&this->field_0x1b = uVar5;
  this->bHasOwnership = '\0';
  return;
}

// Swap @ 145b35310

void __thiscall
VulkanRHI::FVulkanAllocation::Swap(FVulkanAllocation *this,FVulkanAllocation *param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  EVulkanAllocationMetaType EVar5;
  undefined5 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  EVulkanAllocationMetaType EVar12;
  undefined5 uVar13;
  
  uVar2 = param_1->HandleId;
  uVar3 = param_1->Size;
  uVar1 = this->VulkanHandle;
  uVar7 = this->HandleId;
  uVar8 = this->Size;
  uVar9 = this->Offset;
  uVar10 = this->AllocationIndex;
  uVar11 = this->AllocatorIndex;
  EVar12 = this->MetaType;
  uVar13 = *(undefined5 *)&this->field_0x1b;
  this->VulkanHandle = param_1->VulkanHandle;
  this->HandleId = uVar2;
  this->Size = uVar3;
  uVar2 = param_1->AllocationIndex;
  uVar4 = param_1->AllocatorIndex;
  EVar5 = param_1->MetaType;
  uVar6 = *(undefined5 *)&param_1->field_0x1b;
  this->Offset = param_1->Offset;
  this->AllocationIndex = uVar2;
  this->AllocatorIndex = uVar4;
  this->MetaType = EVar5;
  *(undefined5 *)&this->field_0x1b = uVar6;
  param_1->VulkanHandle = uVar1;
  param_1->HandleId = uVar7;
  param_1->Size = uVar8;
  param_1->Offset = uVar9;
  param_1->AllocationIndex = uVar10;
  param_1->AllocatorIndex = uVar11;
  param_1->MetaType = EVar12;
  *(undefined5 *)&param_1->field_0x1b = uVar13;
  return;
}

