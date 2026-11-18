// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// SetOwner @ 145a307f0

void __thiscall
FRHIPoolAllocationData::SetOwner(FRHIPoolAllocationData *this,FRHIPoolResource *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Owner == (FRHIPoolResource *)0x0) {
    this->Owner = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Owner == nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHIPoolAllocator.h"
                     ,0x4b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Owner = param_1;
  return;
}

