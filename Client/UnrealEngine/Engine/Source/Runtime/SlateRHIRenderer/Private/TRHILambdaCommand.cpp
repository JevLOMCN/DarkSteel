// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 3

// ExecuteAndDestruct @ 146008060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FSlateRHIRenderer::PresentWindow_RenderThread'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    UEngine::SetPresentLatencyMarkerStart(*(ulong64 *)((longlong)this + 0x10));
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  UEngine::SetPresentLatencyMarkerStart(*(ulong64 *)((longlong)this + 0x10));
  return;
}

// ExecuteAndDestruct @ 1460080d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FSlateRHIRenderer::PresentWindow_RenderThread'::__l2::<lambda_2>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    UEngine::SetPresentLatencyMarkerEnd(*(ulong64 *)((longlong)this + 0x10));
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  UEngine::SetPresentLatencyMarkerEnd(*(ulong64 *)((longlong)this + 0x10));
  return;
}

// ExecuteAndDestruct @ 146008140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FSlateRHIRenderer::PresentWindow_RenderThread'::__l54::<lambda_3>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < RHICommandsChannel->Enabled)) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x18),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
    `FSlateRHIRenderer::PresentWindow_RenderThread'::__l54::<lambda_3>::operator()
              ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  `FSlateRHIRenderer::PresentWindow_RenderThread'::__l54::<lambda_3>::operator()
            ((void *)((longlong)this + 0x10),(FRHICommandListImmediate *)param_1);
  return;
}

