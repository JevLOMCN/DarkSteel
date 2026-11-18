// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 33

// CreateCopy @ 144555740

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXUFIcmpEchoManyCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXUFIcmpEchoManyCompleteResult___ZUFDefaultDelegateUserPolicy__V__TFunction___A6AXUFIcmpEchoManyCompleteResult___Z____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1445557f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXUFIcmpEchoManyCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXUFIcmpEchoManyCompleteResult___ZUFDefaultDelegateUserPolicy__V__TFunction___A6AXUFIcmpEchoManyCompleteResult___Z____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar3 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000144555854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)();
      return;
    }
  }
  return;
}

// CreateCopy @ 144555870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXUFIcmpEchoManyCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AXUFIcmpEchoManyCompleteResult___ZUFDefaultDelegateUserPolicy__V__TFunction___A6AXUFIcmpEchoManyCompleteResult___Z____V__6B_
    ;
    lVar1 = *(longlong *)&this->Functor;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = *(undefined8 **)&(this->Functor).field_0x28;
      puVar5 = (undefined8 *)&(this->Functor).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4;
      }
      (**(code **)*puVar5)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 144555930

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFIcmpEchoManyResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1445559b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFIcmpEchoManyResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 144555a00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXUFIcmpEchoManyResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 144555aa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EIcmpEchoManyStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 144555b20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EIcmpEchoManyStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 144555b70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EIcmpEchoManyStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 144556180

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
          *this,FIcmpEchoManyCompleteResult *param_1)

{
  FScriptContainerElement *pFVar1;
  
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_&,FIcmpEchoManyCompleteResult>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)&this->_padding_,&this->Functor,param_1)
  ;
  DestructItems<FIcmpEchoManyResult,int>
            ((FIcmpEchoManyResult *)(param_1->AllResults).AllocatorInstance.Data,
             (param_1->AllResults).ArrayNum);
  pFVar1 = (param_1->AllResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Execute @ 1445561d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
::Execute(void *this,FIcmpEchoManyResult *param_1)

{
  FScriptContainerElement *pFVar1;
  
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_FUdpPingManyAsync::RunWorker_::__l2::<lambda_1>_&,FIcmpEchoManyResult>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_1> *)((longlong)this + 0x18),param_1);
  pFVar1 = (param_1->Target).Address.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->EchoResult).ReplyFrom.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->EchoResult).ResolvedAddress.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Execute @ 144556230

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
::Execute(void *this,EIcmpEchoManyStatus param_1)

{
  *(EIcmpEchoManyStatus *)(*(longlong *)((longlong)this + 0x18) + 0x10) = param_1;
  return;
}

// ExecuteIfSafe @ 144556240

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
                *this,FIcmpEchoManyCompleteResult *param_1)

{
  FScriptContainerElement *pFVar1;
  
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_&,FIcmpEchoManyCompleteResult>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)&this->_padding_,&this->Functor,param_1)
  ;
  DestructItems<FIcmpEchoManyResult,int>
            ((FIcmpEchoManyResult *)(param_1->AllResults).AllocatorInstance.Data,
             (param_1->AllResults).ArrayNum);
  pFVar1 = (param_1->AllResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return true;
}

// ExecuteIfSafe @ 144556280

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FIcmpEchoManyResult *param_1)

{
  FScriptContainerElement *pFVar1;
  
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_FUdpPingManyAsync::RunWorker_::__l2::<lambda_1>_&,FIcmpEchoManyResult>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_1> *)((longlong)this + 0x18),param_1);
  pFVar1 = (param_1->Target).Address.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->EchoResult).ReplyFrom.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->EchoResult).ResolvedAddress.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return true;
}

// ExecuteIfSafe @ 1445562e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,EIcmpEchoManyStatus param_1)

{
  *(EIcmpEchoManyStatus *)(*(longlong *)((longlong)this + 0x18) + 0x10) = param_1;
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1445566f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 144556700

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 144556710

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 144556780

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 144556790

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1445567a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 144556a00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 144556a10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 144556a20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 144556a70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 144556a80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 144556a90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 144557810

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 144557820

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 144557830

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14455b310

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy,TFunction<void___cdecl(FIcmpEchoManyCompleteResult)>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14455b320

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14455b330

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

