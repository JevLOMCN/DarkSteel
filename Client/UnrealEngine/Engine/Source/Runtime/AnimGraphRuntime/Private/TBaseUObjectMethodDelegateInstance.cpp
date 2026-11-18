// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 12

// CreateCopy @ 146422b80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUAnimMontage___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPlayMontageCallbackProxy____A6AXPEAVUAnimMontage___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a6a46e2e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146422c10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUAnimMontage___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPlayMontageCallbackProxy____A6AXPEAVUAnimMontage___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a6a46e2e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146422c60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUAnimMontage___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUPlayMontageCallbackProxy____A6AXPEAVUAnimMontage___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a6a46e2e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14643e7c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
          *this,UAnimMontage *param_1,bool param_2)

{
  UPlayMontageCallbackProxy *pUVar1;
  UPlayMontageCallbackProxy *local_res8;
  
  local_res8 = (UPlayMontageCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UPlayMontageCallbackProxy,UPlayMontageCallbackProxy_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 14643e8e0

/* WARNING: Removing unreachable block (ram,0x00014643e957) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
                *this,UAnimMontage *param_1,bool param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UPlayMontageCallbackProxy *pUVar3;
  UPlayMontageCallbackProxy *pUVar4;
  UObject *pUVar5;
  UPlayMontageCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UPlayMontageCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UPlayMontageCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UPlayMontageCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UPlayMontageCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UPlayMontageCallbackProxy,UPlayMontageCallbackProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UPlayMontageCallbackProxy *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1464486c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14644bf20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146450560

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146450cb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14645ad50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14645afe0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 1464702b0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UPlayMontageCallbackProxy,void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

