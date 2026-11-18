// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FRHICommandListScopedFlushAndExecute @ 145c874a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandListScopedFlushAndExecute * __thiscall
FRHICommandListScopedFlushAndExecute::FRHICommandListScopedFlushAndExecute
          (FRHICommandListScopedFlushAndExecute *this,FRHICommandListImmediate *param_1)

{
  FRHICommandListBase **ppFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRHICommandListScopedFlushAndExecute *pFVar5;
  TArrayView<FRHICommandListBase_*_const,int> local_res8 [2];
  uint uStack_1c;
  undefined8 local_18;
  longlong lStack_10;
  
  this->RHICmdList = param_1;
  if (((GRHICommandList.bLatchedBypass != false) && ((param_1->field_0x29b & 0x20) != 0)) ||
     (param_1->field_0x64 != '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RHICmdList.IsTopOfPipe()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x13ac,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRHICommandListScopedFlushAndExecute *)(*pcVar3)();
      return pFVar5;
    }
  }
  lStack_10 = (ulonglong)uStack_1c << 0x20;
  local_18 = 0;
  FRHICommandListExecutor::Submit(&GRHICommandList,local_res8,(ERHISubmitFlags)&local_18);
  if (local_res8[0].DataPtr != (FRHICommandListBase **)0x0) {
    LOCK();
    ppFVar1 = local_res8[0].DataPtr + 6;
    iVar2 = *(int *)ppFVar1;
    *(int *)ppFVar1 = *(int *)ppFVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)((*local_res8[0].DataPtr)->MemManager).Top)(local_res8[0].DataPtr,1);
    }
  }
  this->RHICmdList->field_0x64 = 1;
  return this;
}

