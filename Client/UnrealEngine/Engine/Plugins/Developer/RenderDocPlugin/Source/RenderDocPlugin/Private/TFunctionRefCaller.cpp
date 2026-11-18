// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 3

// Call @ 14e2c91c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderDocPluginModule::BeginFrameCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  uVar2 = *(undefined8 *)((longlong)param_1 + 8);
  FRenderDocFrameCapturer::UE_GEmitDrawEvents_BeforeCapture = GetEmitDrawEvents();
  SetEmitDrawEvents(true);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar1 + 0x98);
  iVar3 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar3 == 4) {
    puVar4 = (undefined8 *)(**(code **)(GDynamicRHI->_padding_ + 0x3a8))();
                    /* WARNING: Could not recover jumptable at 0x00014e2c8a73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*puVar4,uVar2);
    return;
  }
  uVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
                    /* WARNING: Could not recover jumptable at 0x00014e2c8a8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(uVar5,uVar2);
  return;
}

// Call @ 14e2c91d0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderDocPluginModule::EndFrameCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(&GRHICommandList.CommandListImmediate);
  pcVar3 = *(code **)(lVar1 + 0xa8);
  iVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar4 == 4) {
    puVar5 = (undefined8 *)(**(code **)(GDynamicRHI->_padding_ + 0x3a8))();
    uVar6 = *puVar5;
  }
  else {
    uVar6 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
  }
  (*pcVar3)(uVar6,uVar2);
  SetEmitDrawEvents(FRenderDocFrameCapturer::UE_GEmitDrawEvents_BeforeCapture);
  FRenderDocFrameCapturer::SaveAndLaunch
            (*(FRenderDocPluginModule **)((longlong)param_1 + 0x10),
             *(uint *)((longlong)param_1 + 0x18),(FString *)((longlong)param_1 + 0x20));
  return;
}

// Call @ 14e2c91e0

/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRenderDocFrameCapturer::SaveAndLaunch'::__l75::<lambda_1>,void>::Call
          (void *param_1)

{
  FRenderDocPluginModule *this;
  FString *pFVar1;
  FString local_18;
  
  this = *(FRenderDocPluginModule **)param_1;
  if (*(char *)((longlong)param_1 + 0x18) != '\0') {
    pFVar1 = ::FString::FString(&local_18,(FString *)((longlong)param_1 + 8));
    FRenderDocPluginModule::StartRenderDoc(this,pFVar1);
    return;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FRenderDocPluginModule::StartRenderDoc(this,&local_18);
  return;
}

