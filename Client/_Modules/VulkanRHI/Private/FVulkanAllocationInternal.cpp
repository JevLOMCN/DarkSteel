// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// Init @ 145b25560

void __thiscall
VulkanRHI::FVulkanAllocationInternal::Init
          (FVulkanAllocationInternal *this,FVulkanAllocation *param_1,FVulkanEvictable *param_2,
          uint param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->State != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EUNUSED",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xec4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->State = 1;
  this->Type = param_1->Type;
  this->MetaType = param_1->MetaType;
  this->Size = param_1->Size;
  this->AllocationSize = param_4;
  this->AllocationOffset = param_3;
  this->AllocationOwner = param_2;
  this->Alignment = param_5;
  return;
}

