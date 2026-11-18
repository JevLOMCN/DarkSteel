// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145ca02d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandSetTrackedAccess::Execute(FRHICommandSetTrackedAccess *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  FRHITrackedAccessInfo *pFVar4;
  FRHITrackedAccessInfo *pFVar5;
  
  pFVar4 = (this->Infos).DataPtr;
  pFVar5 = pFVar4 + (this->Infos).ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar5) {
      return;
    }
    EVar1 = param_1->ActivePipelines;
    if (((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSingleRHIPipeline(ActivePipelines)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b7,
                           L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                          ), bVar3)) break;
    if ((param_1->ComputeContext == (IRHIComputeContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComputeContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b8,
                           L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(param_1->ComputeContext->_padding_ + 0x150))(param_1->ComputeContext,pFVar4);
    pFVar4 = pFVar4 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

