// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 11

// CreateCopy @ 146cb9d50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),
               (TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146cb9de0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 3),
               (TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
    return;
  }
  return;
}

// CreateCopy @ 146cb9e40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::`2'::<lambda_1>_>
               ::_vftable_;
    TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy> *)
               (puVar3 + 3),
               (TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy> *)
               ((longlong)this + 0x18));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146cbc510

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::Execute(void *this,FEnumerateStreamsResult *param_1)

{
  `FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 146cbcb40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FEnumerateStreamsResult *param_1)

{
  `FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146cbdab0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 146cbdc60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 146cbdd90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146cbe9c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146cc49f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146cc92e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

