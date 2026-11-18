// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// GetSize @ 145cde440

uint __thiscall FRHIUniformBuffer::GetSize(FRHIUniformBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->LayoutConstantBufferSize == ((this->Layout).Reference)->ConstantBufferSize) {
    return this->LayoutConstantBufferSize;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("LayoutConstantBufferSize == Layout->ConstantBufferSize",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                     ,0x4de,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return this->LayoutConstantBufferSize;
}

