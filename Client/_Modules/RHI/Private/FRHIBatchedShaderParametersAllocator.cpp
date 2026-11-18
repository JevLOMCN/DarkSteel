// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// ~FRHIBatchedShaderParametersAllocator @ 145c8ab40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParametersAllocator::~FRHIBatchedShaderParametersAllocator
          (FRHIBatchedShaderParametersAllocator *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((!GIsCriticalError) && ((this->BindlessParameters).NumMarks != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&this->BindlessParameters,(FTaggedMemory *)0x0);
  if ((GIsCriticalError == false) && ((this->ResourceParameters).NumMarks != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&this->ResourceParameters,(FTaggedMemory *)0x0);
  if ((GIsCriticalError == false) && ((this->Parameters).NumMarks != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&this->Parameters,(FTaggedMemory *)0x0);
  if ((GIsCriticalError == false) && ((this->ParametersData).NumMarks != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&this->ParametersData,(FTaggedMemory *)0x0);
  return;
}

