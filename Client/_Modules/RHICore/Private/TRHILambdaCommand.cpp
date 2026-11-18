// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 2

// ExecuteAndDestruct @ 1446d9d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FRHITransientResourceHeapAllocator::Flush'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x58),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(lVar1 + 0x30) = *(longlong *)(lVar1 + 0x30) + *(longlong *)((longlong)this + 0x18);
  *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + *(int *)((longlong)this + 0x20);
  *(int *)(lVar1 + 0x3c) = *(int *)(lVar1 + 0x3c) + *(int *)((longlong)this + 0x24);
  *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + *(int *)((longlong)this + 0x28);
  *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + *(longlong *)((longlong)this + 0x30);
  *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + *(int *)((longlong)this + 0x38);
  *(int *)(lVar1 + 0x54) = *(int *)(lVar1 + 0x54) + *(int *)((longlong)this + 0x3c);
  *(int *)(lVar1 + 0x58) = *(int *)(lVar1 + 0x58) + *(int *)((longlong)this + 0x40);
  uVar3 = *(ulonglong *)((longlong)this + 0x50);
  if (*(ulonglong *)((longlong)this + 0x50) < *(ulonglong *)(lVar1 + 0x68)) {
    uVar3 = *(ulonglong *)(lVar1 + 0x68);
  }
  *(ulonglong *)(lVar1 + 0x68) = uVar3;
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 1446d9e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FRHITransientResourcePageAllocator::Flush'::__l2::<lambda_6>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x58),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(lVar1 + 0x28) = *(longlong *)(lVar1 + 0x28) + *(longlong *)((longlong)this + 0x18);
  *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + *(int *)((longlong)this + 0x20);
  *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + *(int *)((longlong)this + 0x24);
  *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + *(int *)((longlong)this + 0x28);
  *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + *(longlong *)((longlong)this + 0x30);
  *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + *(int *)((longlong)this + 0x38);
  *(int *)(lVar1 + 0x4c) = *(int *)(lVar1 + 0x4c) + *(int *)((longlong)this + 0x3c);
  *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + *(int *)((longlong)this + 0x40);
  uVar3 = *(ulonglong *)((longlong)this + 0x50);
  if (*(ulonglong *)((longlong)this + 0x50) < *(ulonglong *)(lVar1 + 0x60)) {
    uVar3 = *(ulonglong *)(lVar1 + 0x60);
  }
  *(ulonglong *)(lVar1 + 0x60) = uVar3;
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

