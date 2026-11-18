// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 11

// CreateCopy @ 14abd4840

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMutableStreamableManager::RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____RequestAsyncLoad_AEAV__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_____V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____FMutableStreamableManager__QEAA_AV__TSharedPtr_UFStreamableHandle___00__AEAV__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_______QEAV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____H_N2__QEAVFString____QEAVFSourceLocation_UE___Z___V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    lVar1 = *(longlong *)((longlong)this + 0x30);
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14abd48f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMutableStreamableManager::RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____RequestAsyncLoad_AEAV__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_____V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____FMutableStreamableManager__QEAA_AV__TSharedPtr_UFStreamableHandle___00__AEAV__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_______QEAV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____H_N2__QEAVFString____QEAVFSourceLocation_UE___Z___V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    lVar1 = *(longlong *)((longlong)this + 0x30);
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 14abd4970

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMutableStreamableManager::RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____RequestAsyncLoad_AEAV__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_____V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____FMutableStreamableManager__QEAA_AV__TSharedPtr_UFStreamableHandle___00__AEAV__TArray_UFSoftObjectPath__V__TSizedDefaultAllocator__0CA_______QEAV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____H_N2__QEAVFString____QEAVFSourceLocation_UE___Z___V__6B_
    ;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[5] = *(undefined8 *)((longlong)this + 0x28);
    lVar1 = *(longlong *)((longlong)this + 0x30);
    puVar4[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14abd7030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMutableStreamableManager::RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FMutableStreamableManager::
  RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 14abd7090

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMutableStreamableManager::RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FMutableStreamableManager::
  RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14abd9aa0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMutableStreamableManager::RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14abdc980

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMutableStreamableManager::RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14abe1470

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMutableStreamableManager::RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14abe1520

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMutableStreamableManager::RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14abe4190

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMutableStreamableManager::RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14abf22e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMutableStreamableManager::RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

