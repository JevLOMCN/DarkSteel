// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 96

// CreateCopy @ 14b7e31f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b7e3280

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14b7e32d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14b7e6dd0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
::Execute(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b7e6dd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x4a0))
            (*(longlong **)((longlong)this + 0x20),0);
  return;
}

// ExecuteIfSafe @ 14b7ea6e0

/* WARNING: Removing unreachable block (ram,0x00014b7ea746) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

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
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x4a0))
              (*(longlong **)((longlong)this + 0x20),0);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 14b7eb590

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14b7ec700

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14b7ecaf0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14b7ed7e0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14b7f2690

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14b7f3bf0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14b816bf0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`UDS_HitProcessAbility::CompleteChainEffect'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bbb2400

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::`14'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bbb2490

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::`14'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14bbb24e0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::`14'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bbb5a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
::Execute(void *this,uint param_1,uint param_2)

{
  UDS_SoundManager *this_00;
  
  this_00 = *(UDS_SoundManager **)((longlong)this + 0x20);
  UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
  this_00->CurrentZoneDistrictId = param_2;
  UDS_SoundManager::RefreshBGM(this_00);
  UDS_SoundManager::RefreshZoneVolumeAmbient(this_00);
  return;
}

// ExecuteIfSafe @ 14bbb7120

/* WARNING: Removing unreachable block (ram,0x00014bbb718e) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
::ExecuteIfSafe(void *this,uint param_1,uint param_2)

{
  UDS_SoundManager *this_00;
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
    this_00 = *(UDS_SoundManager **)((longlong)this + 0x20);
    UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
    this_00->CurrentZoneDistrictId = param_2;
    UDS_SoundManager::RefreshBGM(this_00);
    UDS_SoundManager::RefreshZoneVolumeAmbient(this_00);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 14bbbb990

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14bbbcf80

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14bbbe570

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14bbc00c0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14bbc49d0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14bbc4e10

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14bbe3120

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`UDS_SoundManager::PostInitialize'::__l14::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bc95890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::CreateCopy(TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__PEAVUWorld____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TWeakBaseFunctorDelegateInstance___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__P6AX01PEAVUWorld___ZPEAV4___6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->ContextObject).WeakPtr;
    puVar1[4] = this->Functor;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bc95920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::CreateCopy(TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__PEAVUWorld____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TWeakBaseFunctorDelegateInstance___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__P6AX01PEAVUWorld___ZPEAV4___6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->ContextObject).WeakPtr;
    puVar1[4] = this->Functor;
  }
  return;
}

// CreateCopy @ 14bc95980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::CreateCopy(TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__PEAVUWorld____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TWeakBaseFunctorDelegateInstance___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__P6AX01PEAVUWorld___ZPEAV4___6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->ContextObject).WeakPtr;
    puVar3[4] = this->Functor;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bc95a30

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bc95ac0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14bc95b10

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bc99140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::Execute(TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
          *this,FSoftObjectPath *param_1,UObject *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc99154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->Functor)(param_1,param_2,(UWorld *)this->_padding_);
  return;
}

// Execute @ 14bc99160

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
::Execute(void *this,bool param_1)

{
  `ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1);
  return;
}

// ExecuteIfSafe @ 14bc9dfd0

/* WARNING: Removing unreachable block (ram,0x00014bc9e046) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::ExecuteIfSafe(TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
                *this,FSoftObjectPath *param_1,UObject *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  
  pUVar3 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar2 = FWeakObjectPtr::Pin(&(this->ContextObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar3 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->ContextObject).WeakPtr);
  if (bVar1) {
    (*this->Functor)(param_1,param_2,(UWorld *)this->_padding_);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14bc9e0b0

/* WARNING: Removing unreachable block (ram,0x00014bc9e11f) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,bool param_1)

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
    `ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 14bc9f340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::GetBoundProgramCounterForTimerManager
          (TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14bc9f350

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14bca13d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::GetObjectForTimerManager
          (TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14bca13e0

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14bca2460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::GetUObject(TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14bca2470

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14bca3f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::HasSameObject(TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14bca3f40

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14bca7670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::IsCompactable(TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14bca7690

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14bca8ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::IsSafeToExecute(TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
                  *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ContextObject).WeakPtr);
  return bVar1;
}

// IsSafeToExecute @ 14bca8eb0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14bccd9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
::TryGetBoundFunctionName
          (TWeakBaseFunctorDelegateInstance<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(FSoftObjectPath_const_&,UObject_*,UWorld_*),UWorld_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bccd9b0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`ADS_StuffGather::InitStuffDebugUI'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bceecd0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    puVar1[1] = *(undefined8 *)((longlong)this + 8);
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`14'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bceed60

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    puVar1[1] = *(undefined8 *)((longlong)this + 8);
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`14'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14bceedb0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    puVar3[1] = *(undefined8 *)((longlong)this + 8);
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`14'::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bcf05a0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::Execute(void *this,UDS_UserWidget *param_1)

{
  ```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()'::__l14::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1,
             (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*(FWeakObjectPtr *)((longlong)this + 8));
  return;
}

// ExecuteIfSafe @ 14bcf1bf0

/* WARNING: Removing unreachable block (ram,0x00014bcf1c24) */
/* WARNING: Removing unreachable block (ram,0x00014bcf1c68) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::ExecuteIfSafe(void *this,UDS_UserWidget *param_1)

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
    ```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
    operator()'::__l14::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1,
               (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*(FWeakObjectPtr *)((longlong)this + 8))
    ;
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 14bcf5b70

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14bcf9980

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14bcfeca0

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14bd00b70

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14bd055c0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14bd06160

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14bd238f0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,```UDS_M_Inventory::OpenFunctionList'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l14::<lambda_1>,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bee42d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::CreateCopy(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_MiniGame_KeyTimeAttack___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TWeakBaseFunctorDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__P6AX0V__TSharedPtr_UFDS_ViewModelContext_MiniGame_KeyTimeAttack___00___ZV3___6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 4) = (this->ContextObject).WeakPtr;
    puVar2[5] = this->Functor;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bee4380

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::CreateCopy(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_MiniGame_KeyTimeAttack___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TWeakBaseFunctorDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__P6AX0V__TSharedPtr_UFDS_ViewModelContext_MiniGame_KeyTimeAttack___00___ZV3___6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 4) = (this->ContextObject).WeakPtr;
    puVar2[5] = this->Functor;
  }
  return;
}

// CreateCopy @ 14bee43f0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::CreateCopy(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_MiniGame_KeyTimeAttack___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TWeakBaseFunctorDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__P6AX0V__TSharedPtr_UFDS_ViewModelContext_MiniGame_KeyTimeAttack___00___ZV3___6B_
    ;
    *(FWeakObjectPtr *)(puVar4 + 4) = (this->ContextObject).WeakPtr;
    puVar4[5] = this->Functor;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bee68d0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::Execute(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
          *this,UDS_UserWidget *param_1)

{
  _func___cdecl_void_UDS_UserWidget_ptr_TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>
  *p_Var1;
  TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1> local_18;
  
  local_18.Object = (FDS_ViewModelContext_MiniGame_KeyTimeAttack *)this->_padding_;
  p_Var1 = this->Functor;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(param_1,&local_18);
  return;
}

// ExecuteIfSafe @ 14beec1f0

/* WARNING: Removing unreachable block (ram,0x00014beec224) */
/* WARNING: Removing unreachable block (ram,0x00014beec268) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::ExecuteIfSafe(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
                *this,UDS_UserWidget *param_1)

{
  _func___cdecl_void_UDS_UserWidget_ptr_TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>
  *p_Var1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UObject *pUVar4;
  UObject *local_res8;
  TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1> local_28;
  
  pUVar4 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    TVar3 = FWeakObjectPtr::Pin(&(this->ContextObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->ContextObject).WeakPtr);
  if (bVar2) {
    local_28.Object = (FDS_ViewModelContext_MiniGame_KeyTimeAttack *)this->_padding_;
    p_Var1 = this->Functor;
    local_28.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)this->_padding_;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*p_Var1)(param_1,&local_28);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return bVar2;
}

// GetBoundProgramCounterForTimerManager @ 14beedbf0

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::GetBoundProgramCounterForTimerManager
          (TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14beefa20

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::GetObjectForTimerManager
          (TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14bef1170

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::GetUObject(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14bef24a0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::HasSameObject(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14bef4d60

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::IsCompactable(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14bef6190

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::IsSafeToExecute(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
                  *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ContextObject).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 14bf1dac0

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
::TryGetBoundFunctionName
          (TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>),TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14bf4e250

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::CreateCopy(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_SkillData__UFWeakObjectPtr____U__TVector2_N_Math_UE__U456___6B_
    ;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    lVar1 = this->_padding_;
    puVar2[3] = this->_padding_;
    puVar2[4] = lVar1;
    puVar2[5] = this->_padding_;
    puVar2[6] = this->_padding_;
    *puVar2 = &
              ___7__TWeakBaseFunctorDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__P6AX0U__TWeakObjectPtr_VUDS_SkillData__UFWeakObjectPtr____U__TVector2_N_Math_UE__2_ZU3_U456_U456___6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 7) = (this->ContextObject).WeakPtr;
    puVar2[8] = this->Functor;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bf4e300

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::CreateCopy(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_SkillData__UFWeakObjectPtr____U__TVector2_N_Math_UE__U456___6B_
    ;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    lVar1 = this->_padding_;
    puVar2[3] = this->_padding_;
    puVar2[4] = lVar1;
    puVar2[5] = this->_padding_;
    puVar2[6] = this->_padding_;
    *puVar2 = &
              ___7__TWeakBaseFunctorDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__P6AX0U__TWeakObjectPtr_VUDS_SkillData__UFWeakObjectPtr____U__TVector2_N_Math_UE__2_ZU3_U456_U456___6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 7) = (this->ContextObject).WeakPtr;
    puVar2[8] = this->Functor;
  }
  return;
}

// CreateCopy @ 14bf4e370

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::CreateCopy(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_SkillData__UFWeakObjectPtr____U__TVector2_N_Math_UE__U456___6B_
    ;
    lVar2 = this->_padding_;
    puVar4[1] = this->_padding_;
    puVar4[2] = lVar2;
    lVar2 = this->_padding_;
    puVar4[3] = this->_padding_;
    puVar4[4] = lVar2;
    puVar4[5] = this->_padding_;
    puVar4[6] = this->_padding_;
    *puVar4 = &
              ___7__TWeakBaseFunctorDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__P6AX0U__TWeakObjectPtr_VUDS_SkillData__UFWeakObjectPtr____U__TVector2_N_Math_UE__2_ZU3_U456_U456___6B_
    ;
    *(FWeakObjectPtr *)(puVar4 + 7) = (this->ContextObject).WeakPtr;
    puVar4[8] = this->Functor;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14bf4e430

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bf4e4c0

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14bf4e510

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bf51240

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::Execute(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
          *this,UDS_UserWidget *param_1)

{
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  local_28._0_4_ = (undefined4)this->_padding_;
  local_28._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_28._8_4_ = (undefined4)this->_padding_;
  local_28._12_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_18._0_4_ = (undefined4)this->_padding_;
  local_18._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_18._8_4_ = (undefined4)this->_padding_;
  local_18._12_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (*this->Functor)(param_1,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)this->_padding_,
                   (TVector2<double> *)&local_18._s_0,(TVector2<double> *)&local_28._s_0);
  return;
}

// Execute @ 14bf51280

void __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
::Execute(void *this,UDS_UserWidget *param_1)

{
  `UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x20),param_1);
  return;
}

// ExecuteIfSafe @ 14bf567c0

/* WARNING: Removing unreachable block (ram,0x00014bf567f4) */
/* WARNING: Removing unreachable block (ram,0x00014bf56838) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::ExecuteIfSafe(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
                *this,UDS_UserWidget *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *local_res8;
  TVector2<double>_u_0 local_38;
  TVector2<double>_u_0 local_28;
  
  pUVar3 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    TVar2 = FWeakObjectPtr::Pin(&(this->ContextObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar3 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->ContextObject).WeakPtr);
  if (bVar1) {
    local_38._0_4_ = (undefined4)this->_padding_;
    local_38._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_38._8_4_ = (undefined4)this->_padding_;
    local_38._12_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_28._0_4_ = (undefined4)this->_padding_;
    local_28._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_28._8_4_ = (undefined4)this->_padding_;
    local_28._12_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    (*this->Functor)(param_1,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)this->_padding_,
                     (TVector2<double> *)&local_28._s_0,(TVector2<double> *)&local_38._s_0);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// ExecuteIfSafe @ 14bf568b0

/* WARNING: Removing unreachable block (ram,0x00014bf5691e) */

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UDS_UserWidget *param_1)

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
    `UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>::operator()
              ((void *)((longlong)this + 0x20),param_1);
  }
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 14bf57050

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::GetBoundProgramCounterForTimerManager
          (TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14bf57060

ulong64 __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14bf57e40

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::GetObjectForTimerManager
          (TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14bf57e50

void * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14bf58710

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::GetUObject(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14bf58720

UObject * __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14bf59ae0

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::HasSameObject(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14bf59b10

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14bf5d120

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::IsCompactable(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->ContextObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14bf5d140

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14bf5dd80

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::IsSafeToExecute(TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
                  *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ContextObject).WeakPtr);
  return bVar1;
}

// IsSafeToExecute @ 14bf5dd90

bool __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x18));
  return bVar1;
}

// TryGetBoundFunctionName @ 14bf84140

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
::TryGetBoundFunctionName
          (TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,void_(__cdecl*)(UDS_UserWidget_*,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>),TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14bf84150

FName __thiscall
TWeakBaseFunctorDelegateInstance<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy,`UDS_VM_W_Skill::OnSkillAccelerateClick'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

