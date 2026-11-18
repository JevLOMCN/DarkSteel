// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// GetTexture @ 145983f90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITexture * __thiscall FRHIView::GetTexture(FRHIView *this)

{
  EViewType EVar1;
  code *pcVar2;
  bool bVar3;
  FRHITexture *pFVar4;
  
  EVar1 = (this->ViewDesc).field0_0x0.Common.ViewType;
  if ((EVar1 != BufferSRV) && (EVar1 != BufferUAV)) {
    return (FRHITexture *)(this->Resource).Reference;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ViewDesc.IsTexture()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                     ,0xcc3,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FRHITexture *)(*pcVar2)();
    return pFVar4;
  }
  return (FRHITexture *)(this->Resource).Reference;
}

