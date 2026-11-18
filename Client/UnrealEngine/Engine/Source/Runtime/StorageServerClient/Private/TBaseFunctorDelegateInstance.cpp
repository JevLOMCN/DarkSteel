// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 22

// CreateCopy @ 148cbf9a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::`11'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148cbfa20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::`11'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 148cbfa60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::`11'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148cbfb00

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148cbfb80

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 148cbfbd0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 148cc2a90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
::Execute(void *this)

{
  TUniquePtr<FStorageServerEngineStartupPrecache,TDefaultDelete<FStorageServerEngineStartupPrecache>_>
  TVar1;
  
  TVar1.Ptr = GStorageServerEngineStartupPrecache.Ptr;
  if (GStorageServerEngineStartupPrecache.Ptr != (FStorageServerEngineStartupPrecache *)0x0) {
    GStorageServerEngineStartupPrecache.Ptr = (FStorageServerEngineStartupPrecache *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000148cc2aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((TVar1.Ptr)->_padding_ + 0x28))(TVar1.Ptr,1);
    return;
  }
  return;
}

// Execute @ 148cc2ac0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
::Execute(void *this,FName param_1)

{
  bool bVar1;
  
  bVar1 = `FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>::
          operator()((void *)((longlong)this + 0x18),param_1);
  return bVar1;
}

// ExecuteIfSafe @ 148cc2bc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TUniquePtr<FStorageServerEngineStartupPrecache,TDefaultDelete<FStorageServerEngineStartupPrecache>_>
  TVar1;
  
  TVar1.Ptr = GStorageServerEngineStartupPrecache.Ptr;
  if (GStorageServerEngineStartupPrecache.Ptr != (FStorageServerEngineStartupPrecache *)0x0) {
    GStorageServerEngineStartupPrecache.Ptr = (FStorageServerEngineStartupPrecache *)0x0;
    (**(code **)((TVar1.Ptr)->_padding_ + 0x28))(TVar1.Ptr,1);
  }
  return true;
}

// ExecuteIfSafe @ 148cc2c00

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FName param_1)

{
  `FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 148cc6d00

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 148cc6d10

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 148cc7890

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 148cc78a0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 148cc8680

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148cc8690

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 148cc9ad0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 148cc9ae0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 148ccd010

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 148ccd020

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 148ce1520

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStorageServerPlatformFile::InitializeConnection'::__l11::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ce1530

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy,`FCookOnTheFlyPackageStoreBackend::FCookOnTheFlyPackageStoreBackend'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

