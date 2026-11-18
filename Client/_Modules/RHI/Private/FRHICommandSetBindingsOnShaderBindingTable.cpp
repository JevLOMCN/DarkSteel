// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9fdd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandSetBindingsOnShaderBindingTable::Execute
          (FRHICommandSetBindingsOnShaderBindingTable *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  FRayTracingPipelineState *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  IRHICommandContext *pIVar7;
  FRHIRayTracingPipelineState *pFVar8;
  
  pFVar3 = this->Pipeline;
  if (pFVar3 == (FRayTracingPipelineState *)0x0) {
    pFVar8 = (FRHIRayTracingPipelineState *)0x0;
  }
  else {
    if ((pFVar3->RHIPipeline).Reference == (FRHIRayTracingPipelineState *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4687553501859939675>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x55b,"PipelineState->RHIPipeline");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar4 = (undefined8 *)pFVar3->_padding_;
    if (puVar4 != (undefined8 *)0x0) {
      pFVar3->_padding_ = 0;
      LOCK();
      piVar1 = (int *)(puVar4 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    pFVar8 = (pFVar3->RHIPipeline).Reference;
  }
  pIVar7 = FRHICommandListBase::GetContext(param_1);
  (**(code **)(pIVar7->_padding_ + 0x278))
            (pIVar7,this->SBT,pFVar8,this->NumBindings,this->Bindings,this->BindingType);
  return;
}

