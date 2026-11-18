// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRHICommandListScopedPipelineGuard @ 144d41e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandListScopedPipelineGuard * __thiscall
FRHICommandListScopedPipelineGuard::FRHICommandListScopedPipelineGuard
          (FRHICommandListScopedPipelineGuard *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  FRHICommandListScopedPipelineGuard *pFVar4;
  
  this->RHICmdList = param_1;
  this->bPipelineSet = false;
  EVar1 = param_1->ActivePipelines;
  if ((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRHICommandListScopedPipelineGuard *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    this->bPipelineSet = true;
  }
  return this;
}

