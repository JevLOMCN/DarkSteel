// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// ~FRHIBuffer @ 145adc120

void __thiscall FRHIBuffer::~FRHIBuffer(FRHIBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (((int)this->_padding_ != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumOpRefs.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationCommon.h"
                         ,0x15f,
                         L"RHI validation resource \'%s\' is being deleted, but it is still queued in the replay command stream!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

