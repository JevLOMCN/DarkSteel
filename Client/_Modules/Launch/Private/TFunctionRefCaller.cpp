// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 9

// Call @ 148da02c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FPackageLocalizationManager_&),void,FPackageLocalizationManager_&>
::Call(void *param_1,FPackageLocalizationManager *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000148da02c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 148da02d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEngineLoop::Tick'::__l51::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  BeginFrameRenderThread(param_2,*(ulong64 *)param_1);
  return;
}

// Call @ 148da02f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScopedSampleMallocChurn::FScopedSampleMallocChurn'::__l1::<lambda_24_>,void,int>
::Call(void *param_1,int *param_2)

{
  `FScopedSampleMallocChurn::FScopedSampleMallocChurn'::__l1::<lambda_24_>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 148da0300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEngineLoop::Tick'::__l55::<lambda_2>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000148da0306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x4d8))();
  return;
}

// Call @ 148da0320

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`LaunchCheckForCmdLineFile'::__l34::<lambda_3>,bool,wchar_t_const_*,bool>::Call
          (void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = `LaunchCheckForCmdLineFile'::__l34::<lambda_3>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 148da0340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FEngineLoop::Tick'::__l127::<lambda_4>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  uint uVar4;
  
  pTVar2 = CVarDoAsyncEndOfFrameTasksRandomize.Ref;
  bVar3 = IsInActualRenderingThread();
  if (bVar3) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6e9,"!IsInActualRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0 < pTVar2->ShadowedValue[0]) {
    uVar4 = rand();
    FWindowsPlatformProcess::Sleep((float)(uVar4 & 0x7fff) * ___real_33c49d2f);
  }
  if (*(UDemoNetDriver **)param_1 != (UDemoNetDriver *)0x0) {
    UDemoNetDriver::TickFlushAsyncEndOfFrame
              (*(UDemoNetDriver **)param_1,*(float *)((longlong)param_1 + 8));
  }
  return;
}

// Call @ 148da0350

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEngineLoop::Tick'::__l206::<lambda_5>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000148da0356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x4e0))();
  return;
}

// Call @ 148da0370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEngineLoop::Tick'::__l61::<lambda_6>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  GFrameCounterRenderThread = *(ulong64 *)param_1;
  return;
}

// Call @ 148da0390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FEngineLoop::Tick'::__l222::<lambda_7>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  EndFrameRenderThread(param_2,*(ulong64 *)param_1);
  return;
}

