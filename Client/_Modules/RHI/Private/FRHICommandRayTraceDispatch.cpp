// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9fbd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandRayTraceDispatch::Execute(FRHICommandRayTraceDispatch *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  FRayTracingPipelineState *pFVar3;
  undefined8 *puVar4;
  bool bVar5;
  IRHIComputeContext *pIVar6;
  FRHIRayTracingPipelineState *pFVar7;
  code *pcVar8;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar10;
  FRHIBuffer *pFVar9;
  uint uVar11;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  pFVar3 = this->Pipeline;
  if (pFVar3 == (FRayTracingPipelineState *)0x0) {
    pFVar7 = (FRHIRayTracingPipelineState *)0x0;
  }
  else {
    if ((pFVar3->RHIPipeline).Reference == (FRHIRayTracingPipelineState *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4687553501859939675>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x55b,"PipelineState->RHIPipeline");
      if (bVar5) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
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
    pFVar7 = (pFVar3->RHIPipeline).Reference;
  }
  if (this->ArgumentBuffer == (FRHIBuffer *)0x0) {
    pIVar6 = FRHICommandListBase::GetComputeContext(param_1);
    pcVar8 = *(code **)(pIVar6->_padding_ + 0x20);
    uVar11 = this->Height;
    pFVar9 = (FRHIBuffer *)CONCAT44(uVar10,this->Width);
  }
  else {
    pIVar6 = FRHICommandListBase::GetComputeContext(param_1);
    pcVar8 = *(code **)(pIVar6->_padding_ + 0x28);
    uVar11 = this->ArgumentOffset;
    pFVar9 = this->ArgumentBuffer;
  }
  (*pcVar8)(pIVar6,pFVar7,this->RayGenShader,this->SBT,&this->GlobalResourceBindings,pFVar9,uVar11);
  return;
}

