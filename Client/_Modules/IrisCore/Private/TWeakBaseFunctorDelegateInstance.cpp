// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 12

// CreateCopy @ 144272010

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::`31'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1442720a0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::`31'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 1442720f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::`31'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1442778e0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::Execute(void *this,FName *param_1,UPackage *param_2,Type param_3)

{
  UE::Net::Private::FObjectReferenceCache::AsyncPackageCallback
            (*(FObjectReferenceCache **)((longlong)this + 0x20),param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 144277a10

/* WARNING: Removing unreachable block (ram,0x000144277a8f) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::ExecuteIfSafe(void *this,FName *param_1,UPackage *param_2,Type param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  pUVar3 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar3 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  if (bVar1) {
    UE::Net::Private::FObjectReferenceCache::AsyncPackageCallback
              (*(FObjectReferenceCache **)((longlong)this + 0x20),param_1,param_2,param_3);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 144279840

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14427ade0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14427d1b0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14427d890

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 1442829a0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 144282f70

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 1442981c0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy,`UE::Net::Private::FObjectReferenceCache::StartAsyncLoadingPackage'::__l31::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

