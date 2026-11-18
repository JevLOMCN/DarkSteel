// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// SetShaderUniformBuffer @ 149307440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBatchedShaderParameters::SetShaderUniformBuffer
          (FRHIBatchedShaderParameters *this,uint param_1,FRHIUniformBuffer *param_2)

{
  FRHIBatchedShaderParametersAllocator *pFVar1;
  FRHIBatchedShaderParameters *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort local_res10 [4];
  FRHIUniformBuffer *local_res18;
  
  pFVar1 = this->Allocator;
  pFVar2 = pFVar1->AttachedParameters;
  local_res18 = param_2;
  if (pFVar2 != this) {
    if (pFVar2 != (FRHIBatchedShaderParameters *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AttachedParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                         ,0x82,
                         L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1->AttachedParameters = this;
  }
  pFVar1 = this->Allocator;
  local_res10[0] = (ushort)param_1;
  pFVar2 = pFVar1->AttachedParameters;
  if (pFVar2 != this) {
    if (pFVar2 != (FRHIBatchedShaderParameters *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AttachedParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                         ,0x82,
                         L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1->AttachedParameters = this;
  }
  FRHIBatchedShaderParametersAllocator::
  Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,unsigned_short_&>
            (this->Allocator,&this->Allocator->ResourceParameters,&this->ResourceParameters,
             &local_res18,local_res10);
  return;
}

