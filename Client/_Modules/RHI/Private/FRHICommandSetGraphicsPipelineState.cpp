// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145ca0000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandSetGraphicsPipelineState::Execute
          (FRHICommandSetGraphicsPipelineState *this,FRHICommandListBase *param_1)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FGraphicsPipelineState *pFVar3;
  FRHIGraphicsPipelineState *pFVar4;
  code *pcVar5;
  bool bVar6;
  IRHICommandContext *pIVar7;
  
  pFVar3 = this->GraphicsPipelineState;
  pFVar4 = (pFVar3->RHIPipeline).Reference;
  FPipelineStateStats::UpdateStats((FPipelineStateStats *)pFVar3->_padding_);
  LOCK();
  pFVar1 = &pFVar3->InUseCount;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x4e5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar7 = FRHICommandListBase::GetContext(param_1);
                    /* WARNING: Could not recover jumptable at 0x000145ca0095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar7->_padding_ + 0x1b8))
            (pIVar7,pFVar4,this->StencilRef,this->bApplyAdditionalState);
  return;
}

