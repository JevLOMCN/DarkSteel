// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 24

// CreateCopy @ 145ffadf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSlateFXSubsystem____A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_5cad1ee0 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145ffae80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSlateFXSubsystem____A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_5cad1ee0 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 145ffaed0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSlateFXSubsystem____A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_5cad1ee0 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 145ffaf80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSlateFXSubsystem____A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_aef4e03a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145ffb010

void __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSlateFXSubsystem____A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_aef4e03a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 145ffb060

void __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSlateFXSubsystem____A6AXPEAVUWorld___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_aef4e03a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146005420

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
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1,FWorldInitializationValues *param_2)

{
  USlateFXSubsystem *local_res8;
  UWorld *local_res10;
  
  local_res10 = param_1;
  local_res8 = (USlateFXSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<void_(__cdecl_USlateFXSubsystem::*const_&)(UWorld_*,FWorldInitializationValues),USlateFXSubsystem_*_&,UWorld_*,FWorldInitializationValues>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)&this->_padding_,
             (pmf_66aa6c63 *)&this->MethodPtr,&local_res8,&local_res10,param_2);
  return;
}

// Execute @ 146005470

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
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1,bool param_2,bool param_3)

{
  USlateFXSubsystem *pUVar1;
  USlateFXSubsystem *local_res8;
  
  local_res8 = (USlateFXSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<USlateFXSubsystem,USlateFXSubsystem_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 146008210

/* WARNING: Removing unreachable block (ram,0x000146008282) */
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
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,FWorldInitializationValues *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  USlateFXSubsystem *pUVar3;
  UObject *pUVar4;
  USlateFXSubsystem *local_res8;
  UWorld *local_res10 [2];
  undefined8 local_res20;
  
  pUVar4 = (UObject *)0x0;
  local_res10[0] = param_1;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (USlateFXSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (USlateFXSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res20 = 0;
  }
  pUVar3 = (USlateFXSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (USlateFXSubsystem *)0x0) {
    local_res8 = pUVar3;
    UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
    ApplyAfter<void_(__cdecl_USlateFXSubsystem::*const_&)(UWorld_*,FWorldInitializationValues),USlateFXSubsystem_*_&,UWorld_*,FWorldInitializationValues>
              ((TTupleBase<TIntegerSequence<unsigned_int>_> *)&this->_padding_,
               (pmf_66aa6c63 *)&this->MethodPtr,&local_res8,local_res10,param_2);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (USlateFXSubsystem *)0x0;
}

// ExecuteIfSafe @ 1460082f0

/* WARNING: Removing unreachable block (ram,0x000146008370) */
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
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  USlateFXSubsystem *pUVar3;
  USlateFXSubsystem *pUVar4;
  UObject *pUVar5;
  USlateFXSubsystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (USlateFXSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (USlateFXSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (USlateFXSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (USlateFXSubsystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<USlateFXSubsystem,USlateFXSubsystem_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (USlateFXSubsystem *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14600c5c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14600c5d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14600d260

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14600d270

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146019570

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146019580

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146019b30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146019b60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14601b6c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14601b6e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14601b7a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14601b7c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14602c720

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14602c730

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,USlateFXSubsystem,void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

