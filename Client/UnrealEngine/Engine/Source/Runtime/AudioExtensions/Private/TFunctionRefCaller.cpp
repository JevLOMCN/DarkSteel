// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 6

// Call @ 144532470

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(float_&),void,float_&>::Call
          (void *param_1,float *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144532476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 144532480

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(float_&,float),void,float_&,float>::
Call(void *param_1,float *param_2,float *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014453248b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,*param_3);
  return;
}

// Call @ 1445324a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ISoundfieldEndpoint::RunCallbackSynchronously'::__l2::<lambda_1>,void,ISoundfieldEndpointSettingsProxy_const_*>
::Call(void *param_1,ISoundfieldEndpointSettingsProxy **param_2)

{
  `ISoundfieldEndpoint::RunCallbackSynchronously'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1445324b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ISoundfieldEndpoint::StartRunningCallback'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong local_res8;
  
  lVar1 = *(longlong *)param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x30);
  local_res8 = lVar1;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    `ISoundfieldEndpoint::RunCallbackSynchronously'::__l2::<lambda_1>::operator()
              (&local_res8,*(ISoundfieldEndpointSettingsProxy **)(lVar1 + 0x28));
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ReportNotNullPtr();
}

// Call @ 144532510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`IAudioEndpoint::RunCallbackSynchronously'::__l4::<lambda_1>,void,IAudioEndpointSettingsProxy_const_*>
::Call(void *param_1,IAudioEndpointSettingsProxy **param_2)

{
  longlong *plVar1;
  IAudioEndpointSettingsProxy *pIVar2;
  longlong lVar3;
  char cVar4;
  undefined4 local_res8 [2];
  
  plVar1 = *(longlong **)((longlong)param_1 + 0x10);
  pIVar2 = *param_2;
  lVar3 = *plVar1;
  local_res8[0] = (**(code **)(lVar3 + 0x18))(plVar1);
  cVar4 = (**(code **)(lVar3 + 0x30))(plVar1,param_1,local_res8,pIVar2);
  if (cVar4 == '\0') {
    ::Audio::FPatchMixer::DisconnectAllInputs
              ((FPatchMixer *)(*(longlong *)((longlong)param_1 + 0x10) + 0x50));
  }
  return;
}

// Call @ 144532580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`IAudioEndpoint::StartRunningAsyncCallback'::__l2::<lambda_2>,void>::Call
          (void *param_1)

{
  IAudioEndpoint::RunCallbackSynchronously(*(IAudioEndpoint **)param_1);
  return;
}

