// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 2

// ExecuteAndDestruct @ 14e2c9ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FRenderDocPluginModule::BeginCapture_RenderThread'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x20),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  (**(code **)(*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x28) + 0x98))
            (*(undefined8 *)((longlong)this + 0x18),
             *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x30));
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteAndDestruct @ 14e2c9b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __thiscall
TRHILambdaCommand<FRHICommandListImmediate,`FRenderDocPluginModule::EndCapture_RenderThread'::__l2::<lambda_1>_>
::ExecuteAndDestruct(void *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)((longlong)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x173);
  }
  iVar2 = (**(code **)(*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x28) + 0xa8))
                    (*(undefined8 *)((longlong)this + 0x18),
                     *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x30));
  if (iVar2 == 1) {
    FRenderDocFrameCapturer::SaveAndLaunch
              (*(FRenderDocPluginModule **)((longlong)this + 0x10),*(uint *)((longlong)this + 0x20),
               (FString *)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

