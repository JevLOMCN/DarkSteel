// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 2

// GetComputeContext @ 1446ddbe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHIComputeContext * __thiscall FRHICommandListBase::GetComputeContext(FRHICommandListBase *this)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  IRHIComputeContext *pIVar4;
  
  EVar1 = this->ActivePipelines;
  if ((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSingleRHIPipeline(ActivePipelines)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b7,
                       L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IRHIComputeContext *)(*pcVar2)();
      return pIVar4;
    }
  }
  if (this->ComputeContext == (IRHIComputeContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComputeContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b8,
                       L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IRHIComputeContext *)(*pcVar2)();
      return pIVar4;
    }
  }
  return this->ComputeContext;
}

// GetContext @ 1446ddc60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHICommandContext * __thiscall FRHICommandListBase::GetContext(FRHICommandListBase *this)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  IRHICommandContext *pIVar4;
  
  EVar1 = this->ActivePipelines;
  if ((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSingleRHIPipeline(ActivePipelines)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b0,
                       L"Exactly one pipeline must be active to call GetContext(). Current pipeline mask is \'0x%02x\'."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IRHICommandContext *)(*pcVar2)();
      return pIVar4;
    }
  }
  if (this->GraphicsContext == (IRHICommandContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphicsContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b1,
                       L"There is no active graphics context on this command list. There may be a missing call to SwitchPipeline()."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IRHICommandContext *)(*pcVar2)();
      return pIVar4;
    }
  }
  return this->GraphicsContext;
}

