// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 133

// CreateCopy @ 1460b90e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneCompiledDataManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_dcd39841 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1460b9170

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneCompiledDataManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_dcd39841 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1460b91c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneCompiledDataManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_dcd39841 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1460c4610

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMovieSceneCompiledDataManager *pUVar1;
  UMovieSceneCompiledDataManager *local_res8 [4];
  
  local_res8[0] = (UMovieSceneCompiledDataManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneCompiledDataManager,UMovieSceneCompiledDataManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// ExecuteIfSafe @ 1460c4660

/* WARNING: Removing unreachable block (ram,0x0001460c46c6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneCompiledDataManager *pUVar3;
  UMovieSceneCompiledDataManager *pUVar4;
  UObject *pUVar5;
  UMovieSceneCompiledDataManager *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneCompiledDataManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneCompiledDataManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMovieSceneCompiledDataManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneCompiledDataManager *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneCompiledDataManager,UMovieSceneCompiledDataManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneCompiledDataManager *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1460c9340

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1460ce300

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1460d0fc0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 1460d1520

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 1460d89d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1460d92a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 1460faa90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneCompiledDataManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146129dd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneEntitySystemLinker____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_2c9a9adc *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146129e60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneEntitySystemLinker____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_2c9a9adc *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146129eb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneEntitySystemLinker____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_2c9a9adc *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146129f60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneEvaluationHookSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_356a2711 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146129ff0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneEvaluationHookSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_356a2711 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14612a040

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneEvaluationHookSystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_356a2711 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14612fbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMovieSceneEntitySystemLinker *pUVar1;
  UMovieSceneEntitySystemLinker *local_res8 [4];
  
  local_res8[0] = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneEntitySystemLinker,UMovieSceneEntitySystemLinker_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14612fc30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMovieSceneEvaluationHookSystem *pUVar1;
  UMovieSceneEvaluationHookSystem *local_res8 [4];
  
  local_res8[0] =
       (UMovieSceneEvaluationHookSystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneEvaluationHookSystem,UMovieSceneEvaluationHookSystem_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// ExecuteIfSafe @ 14612fc70

/* WARNING: Removing unreachable block (ram,0x00014612fcd6) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneEntitySystemLinker *pUVar3;
  UMovieSceneEntitySystemLinker *pUVar4;
  UObject *pUVar5;
  UMovieSceneEntitySystemLinker *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneEntitySystemLinker *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneEntitySystemLinker *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneEntitySystemLinker *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneEntitySystemLinker,UMovieSceneEntitySystemLinker_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneEntitySystemLinker *)0x0;
}

// ExecuteIfSafe @ 14612fd40

/* WARNING: Removing unreachable block (ram,0x00014612fda6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneEvaluationHookSystem *pUVar3;
  UMovieSceneEvaluationHookSystem *pUVar4;
  UObject *pUVar5;
  UMovieSceneEvaluationHookSystem *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneEvaluationHookSystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneEvaluationHookSystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMovieSceneEvaluationHookSystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneEvaluationHookSystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneEvaluationHookSystem,UMovieSceneEvaluationHookSystem_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneEvaluationHookSystem *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14613a280

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14613a290

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14613ba00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14613ba10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14613d030

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14613d040

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14613de60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14613de90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 146140c50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146140c70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146141650

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146141670

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 146159520

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146159530

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEvaluationHookSystem,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14619ac10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___ZUFDefaultDelegateUserPolicy__UFInstanceHandle_MovieScene_UE____6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneEntitySystemLinker____A6AXAEBUFGuid___ZUFDefaultDelegateUserPolicy__UFInstanceHandle_MovieScene_UE____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_16bb65d0 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14619aca0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___ZUFDefaultDelegateUserPolicy__UFInstanceHandle_MovieScene_UE____6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneEntitySystemLinker____A6AXAEBUFGuid___ZUFDefaultDelegateUserPolicy__UFInstanceHandle_MovieScene_UE____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_16bb65d0 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14619ad00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid___ZUFDefaultDelegateUserPolicy__UFInstanceHandle_MovieScene_UE____6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneEntitySystemLinker____A6AXAEBUFGuid___ZUFDefaultDelegateUserPolicy__UFInstanceHandle_MovieScene_UE____6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_16bb65d0 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1461a46a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
          *this,FGuid *param_1)

{
  UMovieSceneEntitySystemLinker *pUVar1;
  UMovieSceneEntitySystemLinker *local_res8;
  
  local_res8 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneEntitySystemLinker,UMovieSceneEntitySystemLinker_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,(int)this->_padding_);
  return;
}

// ExecuteIfSafe @ 1461a47f0

/* WARNING: Removing unreachable block (ram,0x0001461a485e) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
                *this,FGuid *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneEntitySystemLinker *pUVar3;
  UMovieSceneEntitySystemLinker *pUVar4;
  UObject *pUVar5;
  UMovieSceneEntitySystemLinker *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneEntitySystemLinker *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneEntitySystemLinker *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneEntitySystemLinker *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneEntitySystemLinker,UMovieSceneEntitySystemLinker_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,(int)this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneEntitySystemLinker *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1461b0640

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1461b1a60

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1461b48f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 1461b5610

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 1461bba70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1461bbe70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 1461da760

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneEntitySystemLinker,void___cdecl(FGuid_const_&),FDefaultDelegateUserPolicy,UE::MovieScene::FInstanceHandle>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams> @ 1461fc310

TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
* __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
           *this,TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
                 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMovieSceneSequencePlaybackParams____6B_
  ;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  ::FString::FString((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMovieSceneSequencePlaybackParams____6B_
  ;
  (this->UserObject).WeakPtr = (param_1->UserObject).WeakPtr;
  uVar2 = *(undefined8 *)&(param_1->MethodPtr).field_0x8;
  *(undefined8 *)&this->MethodPtr = *(undefined8 *)&param_1->MethodPtr;
  *(undefined8 *)&(this->MethodPtr).field_0x8 = uVar2;
  return this;
}

// CreateCopy @ 14620cdb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14620ce40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14620ce90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14620cf40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14620cfd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14620d020

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14620d0d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar2 + 1) = (int)this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__H__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14620d160

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar2 + 1) = (int)this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__H__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14620d1c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar6 + 1) = (int)this->_padding_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__H__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14620d270

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFFrameTime____6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFFrameTime____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14620d300

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFFrameTime____6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFFrameTime____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14620d360

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFFrameTime____6B_
    ;
    puVar6[1] = this->_padding_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequencePlayer____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFFrameTime____6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14620d410

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x68,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14620d480

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x68,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14620d4c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
  *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x68,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14620d550

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequenceTickManager____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b0d2747d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14620d5e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequenceTickManager____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b0d2747d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14620d630

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneSequenceTickManager____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b0d2747d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14620fcc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMovieSceneSequencePlayer *pUVar1;
  UMovieSceneSequencePlayer *local_res8 [4];
  
  local_res8[0] = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneSequencePlayer,UMovieSceneSequencePlayer_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14620fd00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UMovieSceneSequencePlayer *pUVar1;
  UMovieSceneSequencePlayer *local_res8 [4];
  
  local_res8[0] = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneSequencePlayer,UMovieSceneSequencePlayer_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14620fd40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
          *this)

{
  UMovieSceneSequencePlayer *pUVar1;
  UMovieSceneSequencePlayer *local_res8 [4];
  
  local_res8[0] = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneSequencePlayer,UMovieSceneSequencePlayer_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             (int)this->_padding_);
  return;
}

// Execute @ 14620fd90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
          *this)

{
  UMovieSceneSequencePlayer *pUVar1;
  UMovieSceneSequencePlayer *local_res8 [4];
  
  local_res8[0] = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneSequencePlayer,UMovieSceneSequencePlayer_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             this->_padding_);
  return;
}

// Execute @ 14620fde0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
          *this)

{
  int iVar1;
  code *pcVar2;
  UMovieSceneSequencePlayer *pUVar3;
  UMovieSceneSequencePlayer *local_res8;
  longlong local_58;
  undefined4 local_50;
  FString local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  
  local_res8 = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pcVar2 = *(code **)&this->MethodPtr;
  pUVar3 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneSequencePlayer,UMovieSceneSequencePlayer_*_&>
                     (&local_res8);
  iVar1 = *(int *)&(this->MethodPtr).field_0x8;
  local_50 = (undefined4)this->_padding_;
  local_58 = this->_padding_;
  ::FString::FString(&local_48,(FString *)&this->_padding_);
  local_20 = (undefined1)this->_padding_;
  local_38 = (undefined4)this->_padding_;
  uStack_34 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uStack_30 = (undefined4)this->_padding_;
  uStack_2c = *(undefined4 *)((longlong)&this->_padding_ + 4);
  local_28 = this->_padding_;
  local_1f = *(undefined1 *)((longlong)&this->_padding_ + 1);
  local_1e = *(undefined1 *)((longlong)&this->_padding_ + 2);
  (*pcVar2)((longlong)&pUVar3->_padding_ + (longlong)iVar1,&local_58);
  return;
}

// Execute @ 14620fea0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  UMovieSceneSequenceTickManager *pUVar1;
  UMovieSceneSequenceTickManager *local_res8 [4];
  
  local_res8[0] = (UMovieSceneSequenceTickManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneSequenceTickManager,UMovieSceneSequenceTickManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// ExecuteIfSafe @ 14620ffe0

/* WARNING: Removing unreachable block (ram,0x000146210046) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneSequencePlayer *pUVar3;
  UMovieSceneSequencePlayer *pUVar4;
  UObject *pUVar5;
  UMovieSceneSequencePlayer *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneSequencePlayer *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneSequencePlayer *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneSequencePlayer *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneSequencePlayer,UMovieSceneSequencePlayer_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneSequencePlayer *)0x0;
}

// ExecuteIfSafe @ 1462100b0

/* WARNING: Removing unreachable block (ram,0x000146210116) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneSequencePlayer *pUVar3;
  UMovieSceneSequencePlayer *pUVar4;
  UObject *pUVar5;
  UMovieSceneSequencePlayer *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneSequencePlayer *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneSequencePlayer *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneSequencePlayer *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneSequencePlayer,UMovieSceneSequencePlayer_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneSequencePlayer *)0x0;
}

// ExecuteIfSafe @ 146210180

/* WARNING: Removing unreachable block (ram,0x0001462101e6) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneSequencePlayer *pUVar3;
  UMovieSceneSequencePlayer *pUVar4;
  UObject *pUVar5;
  UMovieSceneSequencePlayer *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneSequencePlayer *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneSequencePlayer *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneSequencePlayer *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneSequencePlayer,UMovieSceneSequencePlayer_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               (int)this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneSequencePlayer *)0x0;
}

// ExecuteIfSafe @ 146210250

/* WARNING: Removing unreachable block (ram,0x0001462102b6) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneSequencePlayer *pUVar3;
  UMovieSceneSequencePlayer *pUVar4;
  UObject *pUVar5;
  UMovieSceneSequencePlayer *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneSequencePlayer *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneSequencePlayer *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneSequencePlayer *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneSequencePlayer,UMovieSceneSequencePlayer_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneSequencePlayer *)0x0;
}

// ExecuteIfSafe @ 146210320

/* WARNING: Removing unreachable block (ram,0x00014621034c) */
/* WARNING: Removing unreachable block (ram,0x000146210390) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneSequencePlayer *pUVar3;
  UObject *pUVar4;
  UMovieSceneSequencePlayer *local_res8;
  undefined8 local_res10;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneSequencePlayer *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneSequencePlayer *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMovieSceneSequencePlayer *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneSequencePlayer *)0x0) {
    local_res8 = pUVar3;
    UE::Core::Private::Tuple::
    TTupleBase<TIntegerSequence<unsigned_int,0>,FMovieSceneSequencePlaybackParams>::
    ApplyAfter<void_(__cdecl_UMovieSceneSequencePlayer::*const_&)(FMovieSceneSequencePlaybackParams),UMovieSceneSequencePlayer_*_&>
              ((TTupleBase<TIntegerSequence<unsigned_int,0>,FMovieSceneSequencePlaybackParams> *)
               &this->_padding_,(pmf_a1d89628 *)&this->MethodPtr,&local_res8);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UMovieSceneSequencePlayer *)0x0;
}

// ExecuteIfSafe @ 1462103f0

/* WARNING: Removing unreachable block (ram,0x00014621045e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneSequenceTickManager *pUVar3;
  UMovieSceneSequenceTickManager *pUVar4;
  UObject *pUVar5;
  UMovieSceneSequenceTickManager *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneSequenceTickManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneSequenceTickManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMovieSceneSequenceTickManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneSequenceTickManager *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneSequenceTickManager,UMovieSceneSequenceTickManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneSequenceTickManager *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1462171d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1462171e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1462171f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146217200

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146217210

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146217220

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 146219d70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146219d80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146219d90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146219da0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146219db0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146219dc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14621dbf0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14621dc00

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14621dc10

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14621dc20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14621dc30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14621dc40

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14621dfe0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14621e010

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14621e040

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14621e070

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14621e0a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14621e0d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 1462223a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1462223c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1462223e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146222400

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146222420

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146222440

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1462227b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 1462227d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 1462227f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146222810

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146222830

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146222850

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14623a0a0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14623a0b0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14623a0c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14623a0d0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FFrameTime>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14623a0e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequencePlayer,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FMovieSceneSequencePlaybackParams>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14623a0f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneSequenceTickManager,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1462ab0b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieScenePlayRateCurve____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1462ab140

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieScenePlayRateCurve____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 1462ab190

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieScenePlayRateCurve____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1462ac330

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMovieScenePlayRateCurve *pUVar1;
  UMovieScenePlayRateCurve *local_res8 [4];
  
  local_res8[0] = (UMovieScenePlayRateCurve *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieScenePlayRateCurve,UMovieScenePlayRateCurve_*_&>(local_res8)
  ;
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// ExecuteIfSafe @ 1462ac380

/* WARNING: Removing unreachable block (ram,0x0001462ac3e6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieScenePlayRateCurve *pUVar3;
  UMovieScenePlayRateCurve *pUVar4;
  UObject *pUVar5;
  UMovieScenePlayRateCurve *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieScenePlayRateCurve *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieScenePlayRateCurve *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMovieScenePlayRateCurve *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieScenePlayRateCurve *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieScenePlayRateCurve,UMovieScenePlayRateCurve_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieScenePlayRateCurve *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1462aece0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 1462af2e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1462b1020

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 1462b14d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 1462b5440

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1462b5720

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 1462be6f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieScenePlayRateCurve,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

