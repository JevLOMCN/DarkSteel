// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// GetBuffer @ 145b68d00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIBuffer * __thiscall FRHIView::GetBuffer(FRHIView *this)

{
  EViewType EVar1;
  code *pcVar2;
  bool bVar3;
  FRHIBuffer *pFVar4;
  
  EVar1 = (this->ViewDesc).field0_0x0.Common.ViewType;
  if ((EVar1 != BufferSRV) && (EVar1 != BufferUAV)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewDesc.IsBuffer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xcbd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRHIBuffer *)(*pcVar2)();
      return pFVar4;
    }
    return (FRHIBuffer *)(this->Resource).Reference;
  }
  return (FRHIBuffer *)(this->Resource).Reference;
}

