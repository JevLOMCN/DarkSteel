// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 5

// ~FDeviceMemoryAllocation @ 145b04e20

void __thiscall
VulkanRHI::FDeviceMemoryAllocation::~FDeviceMemoryAllocation(FDeviceMemoryAllocation *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bFreedBySystem == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bFreedBySystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x522,L"Memory has to released calling FDeviceMemory::Free()!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FlushMappedMemory @ 145b1a300

/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
VulkanRHI::FDeviceMemoryAllocation::FlushMappedMemory
          (FDeviceMemoryAllocation *this,ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  VkResult VVar3;
  VkMappedMemoryRange local_38;
  
  if ((this->bIsCoherent == 0) || (GForceCoherent != 0)) {
    if (this->MappedPointer == (void *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsMapped()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x53c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->Size < param_1 + param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOffset + InSize <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x53d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_38.sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
    local_38._4_8_ = 0;
    local_38.pNext._4_4_ = 0;
    local_38.memory._0_4_ = SUB84(this->Handle,0);
    local_38.memory._4_4_ = (undefined4)((ulonglong)this->Handle >> 0x20);
    local_38.offset = param_1;
    local_38.size = param_2;
    VVar3 = (*VulkanDynamicAPI::vkFlushMappedMemoryRanges)(this->DeviceHandle,1,&local_38);
    if (VVar3 != VK_SUCCESS) {
      VerifyVulkanResult(VVar3,"VulkanRHI::vkFlushMappedMemoryRanges(DeviceHandle, 1, &Range)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x543);
    }
  }
  return;
}

// InvalidateMappedMemory @ 145b26ca0

/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
VulkanRHI::FDeviceMemoryAllocation::InvalidateMappedMemory
          (FDeviceMemoryAllocation *this,ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  VkResult VVar3;
  VkMappedMemoryRange local_38;
  
  if ((this->bIsCoherent == 0) || (GForceCoherent != 0)) {
    if (this->MappedPointer == (void *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsMapped()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x54b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->Size < param_1 + param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOffset + InSize <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x54c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_38.sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
    local_38._4_8_ = 0;
    local_38.pNext._4_4_ = 0;
    local_38.memory._0_4_ = SUB84(this->Handle,0);
    local_38.memory._4_4_ = (undefined4)((ulonglong)this->Handle >> 0x20);
    local_38.offset = param_1;
    local_38.size = param_2;
    VVar3 = (*VulkanDynamicAPI::vkInvalidateMappedMemoryRanges)(this->DeviceHandle,1,&local_38);
    if (VVar3 != VK_SUCCESS) {
      VerifyVulkanResult(VVar3,"VulkanRHI::vkInvalidateMappedMemoryRanges(DeviceHandle, 1, &Range)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x552);
    }
  }
  return;
}

// Map @ 145b2a970

/* WARNING: Enum "VkResult": Some values do not have unique names */

void * __thiscall
VulkanRHI::FDeviceMemoryAllocation::Map
          (FDeviceMemoryAllocation *this,ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  VkResult VVar3;
  void *pvVar4;
  
  if (this->bCanBeMapped == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bCanBeMapped",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x527,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  if (this->MappedPointer == (void *)0x0) {
    if ((param_1 != 0xffffffffffffffff) && (this->Size < param_1 + param_2)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSize == (~0ULL) || InSize + Offset <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x52b,L"Failed to Map %llu bytes, Offset %llu, AllocSize %llu bytes");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar1)();
        return pvVar4;
      }
    }
    VVar3 = (*VulkanDynamicAPI::vkMapMemory)
                      (this->DeviceHandle,this->Handle,param_2,param_1,0,&this->MappedPointer);
    if (VVar3 != VK_SUCCESS) {
      VerifyVulkanResult(VVar3,
                         "VulkanRHI::vkMapMemory(DeviceHandle, Handle, Offset, InSize, 0, &MappedPointer)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x52c);
    }
  }
  return this->MappedPointer;
}

// Unmap @ 145b37590

void __thiscall VulkanRHI::FDeviceMemoryAllocation::Unmap(FDeviceMemoryAllocation *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->MappedPointer == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MappedPointer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x533,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*VulkanDynamicAPI::vkUnmapMemory)(this->DeviceHandle,this->Handle);
  this->MappedPointer = (void *)0x0;
  return;
}

