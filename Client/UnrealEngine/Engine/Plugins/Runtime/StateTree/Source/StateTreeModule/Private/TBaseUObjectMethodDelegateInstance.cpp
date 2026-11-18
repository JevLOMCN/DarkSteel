// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 12

// CreateCopy @ 14d4b8c10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUStateTree____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4fefa828 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d4b8ca0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUStateTree____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4fefa828 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d4b8cf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUStateTree____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_4fefa828 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d4bbf60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
        *this)

{
  UStateTree *pUVar1;
  UStateTree *local_res8 [4];
  
  local_res8[0] = (UStateTree *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UStateTree,UStateTree_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// ExecuteIfSafe @ 14d4bc150

/* WARNING: Removing unreachable block (ram,0x00014d4bc1b6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UStateTree *pUVar3;
  UStateTree *pUVar4;
  UObject *pUVar5;
  UStateTree *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UStateTree *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UStateTree *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UStateTree *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UStateTree *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UStateTree,UStateTree_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UStateTree *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14d4bd5d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14d4beb30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d4c0800

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14d4c2650

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14d4c3ec0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14d4c40a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14d4d2e80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UStateTree,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

