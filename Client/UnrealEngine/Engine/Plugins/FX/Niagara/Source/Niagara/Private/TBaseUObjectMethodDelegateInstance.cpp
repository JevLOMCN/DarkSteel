// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 312

// CreateCopy @ 148e61860

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNiagaraDataInterfaceArrayDistributionInt____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cb2f942e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148e618f0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNiagaraDataInterfaceArrayDistributionInt____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cb2f942e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148e61940

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNiagaraDataInterfaceArrayDistributionInt____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cb2f942e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 148e64710

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceArrayDistributionInt *pUVar1;
  UNiagaraDataInterfaceArrayDistributionInt *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceArrayDistributionInt *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceArrayDistributionInt,UNiagaraDataInterfaceArrayDistributionInt_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// ExecuteIfSafe @ 148e64ef0

/* WARNING: Removing unreachable block (ram,0x000148e64f5e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceArrayDistributionInt *pUVar3;
  UNiagaraDataInterfaceArrayDistributionInt *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceArrayDistributionInt *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceArrayDistributionInt *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceArrayDistributionInt *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceArrayDistributionInt *)
           FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceArrayDistributionInt *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceArrayDistributionInt,UNiagaraDataInterfaceArrayDistributionInt_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceArrayDistributionInt *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 148e68ab0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 148e6d760

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148e6fbe0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 148e72b90

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 148e750f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 148e75630

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 148e83230

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UNiagaraDataInterfaceArrayDistributionInt_const_,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 148eb14a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cd2ae9e5 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148eb1530

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cd2ae9e5 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148eb1580

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cd2ae9e5 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148eb1630

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_758f3ae7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148eb16c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_758f3ae7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148eb1720

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_758f3ae7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148eb17d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H_N__6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H_N__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9a338059 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148eb1860

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H_N__6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H_N__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9a338059 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148eb18c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H_N__6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H_N__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9a338059 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148eb1970

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimpleCounter____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148eb1a00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimpleCounter____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 148eb1a50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimpleCounter____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 148eb6be0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceSimCacheReader *pUVar1;
  UNiagaraDataInterfaceSimCacheReader *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceSimCacheReader *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceSimCacheReader,UNiagaraDataInterfaceSimCacheReader_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 148eb6c30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceSimCacheReader *pUVar1;
  UNiagaraDataInterfaceSimCacheReader *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceSimCacheReader *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceSimCacheReader,UNiagaraDataInterfaceSimCacheReader_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,(int)this->_padding_);
  return;
}

// Execute @ 148eb6c80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceSimCacheReader *pUVar1;
  UNiagaraDataInterfaceSimCacheReader *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceSimCacheReader *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceSimCacheReader,UNiagaraDataInterfaceSimCacheReader_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)
            (pUVar1,param_1,(int)this->_padding_,*(undefined1 *)((longlong)&this->_padding_ + 4));
  return;
}

// Execute @ 148eb6ce0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceSimpleCounter *pUVar1;
  UNiagaraDataInterfaceSimpleCounter *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceSimpleCounter *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceSimpleCounter,UNiagaraDataInterfaceSimpleCounter_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// ExecuteIfSafe @ 148eb77f0

/* WARNING: Removing unreachable block (ram,0x000148eb785e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceSimCacheReader *pUVar3;
  UNiagaraDataInterfaceSimCacheReader *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceSimCacheReader *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceSimCacheReader *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceSimCacheReader *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceSimCacheReader *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceSimCacheReader *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceSimCacheReader,UNiagaraDataInterfaceSimCacheReader_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceSimCacheReader *)0x0;
}

// ExecuteIfSafe @ 148eb78d0

/* WARNING: Removing unreachable block (ram,0x000148eb793e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceSimCacheReader *pUVar3;
  UNiagaraDataInterfaceSimCacheReader *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceSimCacheReader *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceSimCacheReader *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceSimCacheReader *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceSimCacheReader *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceSimCacheReader *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceSimCacheReader,UNiagaraDataInterfaceSimCacheReader_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,(int)this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceSimCacheReader *)0x0;
}

// ExecuteIfSafe @ 148eb79b0

/* WARNING: Removing unreachable block (ram,0x000148eb7a1e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceSimCacheReader *pUVar3;
  UNiagaraDataInterfaceSimCacheReader *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceSimCacheReader *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceSimCacheReader *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceSimCacheReader *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceSimCacheReader *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceSimCacheReader *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceSimCacheReader,UNiagaraDataInterfaceSimCacheReader_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)
              (pUVar4,param_1,(int)this->_padding_,*(undefined1 *)((longlong)&this->_padding_ + 4));
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceSimCacheReader *)0x0;
}

// ExecuteIfSafe @ 148eb7a90

/* WARNING: Removing unreachable block (ram,0x000148eb7afe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceSimpleCounter *pUVar3;
  UNiagaraDataInterfaceSimpleCounter *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceSimpleCounter *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceSimpleCounter *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceSimpleCounter *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceSimpleCounter *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceSimpleCounter *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceSimpleCounter,UNiagaraDataInterfaceSimpleCounter_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceSimpleCounter *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 148ebcf00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148ebcf10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148ebcf20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148ebcf30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 148ebf140

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 148ebf150

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 148ebf160

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 148ebf170

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148ec10f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148ec1100

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148ec1110

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148ec1120

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 148ec6b50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 148ec6b80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 148ec6bb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 148ec6be0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 148ec8c20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 148ec8c40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 148ec8c60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 148ec8c80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 148ec8db0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 148ec8dd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 148ec8df0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 148ec8e10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 148ed4dd0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ed4de0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ed4df0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimCacheReader,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,int,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148ed4e00

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSimpleCounter,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 148fa6d10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceStaticMesh____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_02cadf7e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148fa6da0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceStaticMesh____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_02cadf7e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 148fa6df0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceStaticMesh____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_02cadf7e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 148faaf30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceStaticMesh *pUVar1;
  UNiagaraDataInterfaceStaticMesh *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceStaticMesh *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceStaticMesh,UNiagaraDataInterfaceStaticMesh_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// ExecuteIfSafe @ 148fad6e0

/* WARNING: Removing unreachable block (ram,0x000148fad74e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceStaticMesh *pUVar3;
  UNiagaraDataInterfaceStaticMesh *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceStaticMesh *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceStaticMesh *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceStaticMesh *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceStaticMesh *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceStaticMesh *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceStaticMesh,UNiagaraDataInterfaceStaticMesh_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceStaticMesh *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 148fb2bc0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 148fb5930

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 148fbb6c0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 148fbfbf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 148fc4f90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 148fc5de0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 148fcf6c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceStaticMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14903ae60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14903aef0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14903af40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14903aff0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraComponent____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14903b080

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraComponent____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14903b0d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraComponent____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 1490409b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UNiagaraComponent *pUVar1;
  UNiagaraComponent *local_res8 [4];
  
  local_res8[0] = (UNiagaraComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UNiagaraComponent,UNiagaraComponent_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 1490409f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  UNiagaraComponent *pUVar1;
  UNiagaraComponent *local_res8;
  
  local_res8 = (UNiagaraComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UNiagaraComponent,UNiagaraComponent_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// ExecuteIfSafe @ 149041360

/* WARNING: Removing unreachable block (ram,0x0001490413c6) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraComponent *pUVar3;
  UNiagaraComponent *pUVar4;
  UObject *pUVar5;
  UNiagaraComponent *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UNiagaraComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNiagaraComponent,UNiagaraComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraComponent *)0x0;
}

// ExecuteIfSafe @ 149041430

/* WARNING: Removing unreachable block (ram,0x00014904149f) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraComponent *pUVar3;
  UNiagaraComponent *pUVar4;
  UObject *pUVar5;
  UNiagaraComponent *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UNiagaraComponent,UNiagaraComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraComponent *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 149044690

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1490446a0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 149047500

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 149047510

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14904a510

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14904a520

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14904cd00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14904cd30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 149059290

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1490592b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14905ac40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14905ac60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14906d280

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14906d290

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraComponent,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1490e68f0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNiagaraDataChannel_Islands____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_62725a55 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1490e6980

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNiagaraDataChannel_Islands____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_62725a55 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1490e69d0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUNiagaraDataChannel_Islands____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_62725a55 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1490e6a80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterface2DArrayTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f8b07c53 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1490e6b10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterface2DArrayTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f8b07c53 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1490e6b60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterface2DArrayTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f8b07c53 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1490e6c10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceCubeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_2677844b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1490e6ca0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceCubeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_2677844b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1490e6cf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceCubeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_2677844b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1490f38b0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UNiagaraDataChannel_Islands *pUVar1;
  UNiagaraDataChannel_Islands *local_res8 [4];
  
  local_res8[0] = (UNiagaraDataChannel_Islands *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataChannel_Islands,UNiagaraDataChannel_Islands_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 1490f38f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterface2DArrayTexture *pUVar1;
  UNiagaraDataInterface2DArrayTexture *local_res8;
  
  local_res8 = (UNiagaraDataInterface2DArrayTexture *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterface2DArrayTexture,UNiagaraDataInterface2DArrayTexture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 1490f3940

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceCubeTexture *pUVar1;
  UNiagaraDataInterfaceCubeTexture *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceCubeTexture *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceCubeTexture,UNiagaraDataInterfaceCubeTexture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// ExecuteIfSafe @ 1490f8290

/* WARNING: Removing unreachable block (ram,0x0001490f82f6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataChannel_Islands *pUVar3;
  UNiagaraDataChannel_Islands *pUVar4;
  UObject *pUVar5;
  UNiagaraDataChannel_Islands *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataChannel_Islands *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataChannel_Islands *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UNiagaraDataChannel_Islands *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataChannel_Islands *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataChannel_Islands,UNiagaraDataChannel_Islands_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataChannel_Islands *)0x0;
}

// ExecuteIfSafe @ 1490f8360

/* WARNING: Removing unreachable block (ram,0x0001490f83ce) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterface2DArrayTexture *pUVar3;
  UNiagaraDataInterface2DArrayTexture *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterface2DArrayTexture *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterface2DArrayTexture *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterface2DArrayTexture *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterface2DArrayTexture *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterface2DArrayTexture *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterface2DArrayTexture,UNiagaraDataInterface2DArrayTexture_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterface2DArrayTexture *)0x0;
}

// ExecuteIfSafe @ 1490f8440

/* WARNING: Removing unreachable block (ram,0x0001490f84ae) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceCubeTexture *pUVar3;
  UNiagaraDataInterfaceCubeTexture *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceCubeTexture *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceCubeTexture *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceCubeTexture *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceCubeTexture *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceCubeTexture *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceCubeTexture,UNiagaraDataInterfaceCubeTexture_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceCubeTexture *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 149103a20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 149103a30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 149103a40

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 149107dc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 149107dd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 149107de0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14910be30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14910be40

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14910be50

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 1491126b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 1491126e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 149112710

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 1491174b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1491174d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1491174f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 149118520

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 149118540

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 149118560

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14913d780

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UNiagaraDataChannel_Islands_const_,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14913d790

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterface2DArrayTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14913d7a0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceCubeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1491bbd60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceMeshRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_0d8c73f5 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1491bbdf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceMeshRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_0d8c73f5 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1491bbe40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceMeshRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_0d8c73f5 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1491bbef0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRasterizationGrid3D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_98d89113 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1491bbf80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRasterizationGrid3D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_98d89113 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1491bbfd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRasterizationGrid3D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_98d89113 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1491bc080

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTarget2D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1491bc110

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTarget2D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 1491bc160

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTarget2D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1491bc210

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTarget2DArray____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_bf0f4d71 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1491bc2a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTarget2DArray____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_bf0f4d71 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1491bc2f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTarget2DArray____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_bf0f4d71 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1491bc3a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetCube____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a43119bb *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1491bc430

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetCube____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a43119bb *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1491bc480

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetCube____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a43119bb *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1491bc530

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetVolume____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1491bc5c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetVolume____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 1491bc610

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetVolume____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 1491c1f60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceMeshRendererInfo *pUVar1;
  UNiagaraDataInterfaceMeshRendererInfo *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceMeshRendererInfo *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceMeshRendererInfo,UNiagaraDataInterfaceMeshRendererInfo_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 1491c1fb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceRasterizationGrid3D *pUVar1;
  UNiagaraDataInterfaceRasterizationGrid3D *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceRasterizationGrid3D *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceRasterizationGrid3D,UNiagaraDataInterfaceRasterizationGrid3D_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 1491c2000

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceRenderTarget2D *pUVar1;
  UNiagaraDataInterfaceRenderTarget2D *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceRenderTarget2D *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceRenderTarget2D,UNiagaraDataInterfaceRenderTarget2D_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 1491c2050

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceRenderTarget2DArray *pUVar1;
  UNiagaraDataInterfaceRenderTarget2DArray *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceRenderTarget2DArray *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceRenderTarget2DArray,UNiagaraDataInterfaceRenderTarget2DArray_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 1491c20a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceRenderTargetCube *pUVar1;
  UNiagaraDataInterfaceRenderTargetCube *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceRenderTargetCube *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceRenderTargetCube,UNiagaraDataInterfaceRenderTargetCube_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 1491c20f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceRenderTargetVolume *pUVar1;
  UNiagaraDataInterfaceRenderTargetVolume *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceRenderTargetVolume *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceRenderTargetVolume,UNiagaraDataInterfaceRenderTargetVolume_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// ExecuteIfSafe @ 1491c2a30

/* WARNING: Removing unreachable block (ram,0x0001491c2a9e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceMeshRendererInfo *pUVar3;
  UNiagaraDataInterfaceMeshRendererInfo *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceMeshRendererInfo *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceMeshRendererInfo *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceMeshRendererInfo *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceMeshRendererInfo *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  if (pUVar3 != (UNiagaraDataInterfaceMeshRendererInfo *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceMeshRendererInfo,UNiagaraDataInterfaceMeshRendererInfo_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceMeshRendererInfo *)0x0;
}

// ExecuteIfSafe @ 1491c2b10

/* WARNING: Removing unreachable block (ram,0x0001491c2b7e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceRasterizationGrid3D *pUVar3;
  UNiagaraDataInterfaceRasterizationGrid3D *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceRasterizationGrid3D *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceRasterizationGrid3D *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceRasterizationGrid3D *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceRasterizationGrid3D *)
           FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceRasterizationGrid3D *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceRasterizationGrid3D,UNiagaraDataInterfaceRasterizationGrid3D_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceRasterizationGrid3D *)0x0;
}

// ExecuteIfSafe @ 1491c2bf0

/* WARNING: Removing unreachable block (ram,0x0001491c2c5e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceRenderTarget2D *pUVar3;
  UNiagaraDataInterfaceRenderTarget2D *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceRenderTarget2D *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceRenderTarget2D *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceRenderTarget2D *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceRenderTarget2D *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceRenderTarget2D *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceRenderTarget2D,UNiagaraDataInterfaceRenderTarget2D_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceRenderTarget2D *)0x0;
}

// ExecuteIfSafe @ 1491c2cd0

/* WARNING: Removing unreachable block (ram,0x0001491c2d3e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceRenderTarget2DArray *pUVar3;
  UNiagaraDataInterfaceRenderTarget2DArray *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceRenderTarget2DArray *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceRenderTarget2DArray *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceRenderTarget2DArray *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceRenderTarget2DArray *)
           FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceRenderTarget2DArray *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceRenderTarget2DArray,UNiagaraDataInterfaceRenderTarget2DArray_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceRenderTarget2DArray *)0x0;
}

// ExecuteIfSafe @ 1491c2db0

/* WARNING: Removing unreachable block (ram,0x0001491c2e1e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceRenderTargetCube *pUVar3;
  UNiagaraDataInterfaceRenderTargetCube *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceRenderTargetCube *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceRenderTargetCube *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceRenderTargetCube *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceRenderTargetCube *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  if (pUVar3 != (UNiagaraDataInterfaceRenderTargetCube *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceRenderTargetCube,UNiagaraDataInterfaceRenderTargetCube_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceRenderTargetCube *)0x0;
}

// ExecuteIfSafe @ 1491c2e90

/* WARNING: Removing unreachable block (ram,0x0001491c2efe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceRenderTargetVolume *pUVar3;
  UNiagaraDataInterfaceRenderTargetVolume *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceRenderTargetVolume *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceRenderTargetVolume *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceRenderTargetVolume *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceRenderTargetVolume *)
           FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceRenderTargetVolume *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceRenderTargetVolume,UNiagaraDataInterfaceRenderTargetVolume_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceRenderTargetVolume *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1491c7790

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1491c77a0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1491c77b0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1491c77c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1491c77d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1491c77e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 1491c97b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1491c97c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1491c97d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1491c97e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1491c97f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1491c9800

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1491cc110

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1491cc120

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1491cc130

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1491cc140

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1491cc150

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1491cc160

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 1491d14c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 1491d14f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 1491d1520

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 1491d1550

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 1491d1580

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 1491d15b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 1491d3db0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1491d3dd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1491d3df0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1491d3e10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1491d3e30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1491d3e50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1491d41b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 1491d41d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 1491d41f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 1491d4210

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 1491d4230

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 1491d4250

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 1491e3b50

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceMeshRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1491e3b60

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRasterizationGrid3D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1491e3b70

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2D,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1491e3b80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTarget2DArray,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1491e3b90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetCube,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1491e3ba0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceRenderTargetVolume,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1492299c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSkeletalMesh____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_17b005dd *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149229a50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSkeletalMesh____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_17b005dd *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 149229aa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSkeletalMesh____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_17b005dd *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149229b50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSparseVolumeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_0e559b50 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149229be0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSparseVolumeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_0e559b50 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 149229c30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSparseVolumeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_0e559b50 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149229ce0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSpline____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_22989bbc *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149229d70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSpline____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_22989bbc *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 149229dc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSpline____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_22989bbc *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149229e70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSpriteRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_774fe5ad *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149229f00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSpriteRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_774fe5ad *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 149229f50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSpriteRendererInfo____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_774fe5ad *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14922a000

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fd5a4616 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14922a090

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fd5a4616 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14922a0e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_fd5a4616 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14922a190

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVectorField____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_83d60aba *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14922a220

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVectorField____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_83d60aba *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14922a270

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVectorField____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_83d60aba *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14922a320

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVirtualTextureSample____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6de18dc1 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14922a3b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVirtualTextureSample____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6de18dc1 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14922a400

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVirtualTextureSample____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6de18dc1 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14922a4b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVolumeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_73da6690 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14922a540

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVolumeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_73da6690 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14922a590

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVolumeTexture____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_73da6690 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14922e650

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceSkeletalMesh *pUVar1;
  UNiagaraDataInterfaceSkeletalMesh *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceSkeletalMesh *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterfaceSkeletalMesh_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14922e6a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceSparseVolumeTexture *pUVar1;
  UNiagaraDataInterfaceSparseVolumeTexture *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceSparseVolumeTexture *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceSparseVolumeTexture,UNiagaraDataInterfaceSparseVolumeTexture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14922e6f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceSpline *pUVar1;
  UNiagaraDataInterfaceSpline *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceSpline *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceSpline,UNiagaraDataInterfaceSpline_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14922e740

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceSpriteRendererInfo *pUVar1;
  UNiagaraDataInterfaceSpriteRendererInfo *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceSpriteRendererInfo *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceSpriteRendererInfo,UNiagaraDataInterfaceSpriteRendererInfo_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14922e790

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceTexture *pUVar1;
  UNiagaraDataInterfaceTexture *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceTexture *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceTexture,UNiagaraDataInterfaceTexture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14922e7e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceVectorField *pUVar1;
  UNiagaraDataInterfaceVectorField *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceVectorField *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceVectorField,UNiagaraDataInterfaceVectorField_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14922e830

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceVirtualTextureSample *pUVar1;
  UNiagaraDataInterfaceVirtualTextureSample *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceVirtualTextureSample *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceVirtualTextureSample,UNiagaraDataInterfaceVirtualTextureSample_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14922e880

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *this,FVectorVMExternalFunctionContext *param_1)

{
  UNiagaraDataInterfaceVolumeTexture *pUVar1;
  UNiagaraDataInterfaceVolumeTexture *local_res8;
  
  local_res8 = (UNiagaraDataInterfaceVolumeTexture *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UNiagaraDataInterfaceVolumeTexture,UNiagaraDataInterfaceVolumeTexture_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// ExecuteIfSafe @ 14922f400

/* WARNING: Removing unreachable block (ram,0x00014922f46e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceSkeletalMesh *pUVar3;
  UNiagaraDataInterfaceSkeletalMesh *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceSkeletalMesh *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceSkeletalMesh *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceSkeletalMesh *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceSkeletalMesh *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceSkeletalMesh,UNiagaraDataInterfaceSkeletalMesh_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceSkeletalMesh *)0x0;
}

// ExecuteIfSafe @ 14922f4e0

/* WARNING: Removing unreachable block (ram,0x00014922f54e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceSparseVolumeTexture *pUVar3;
  UNiagaraDataInterfaceSparseVolumeTexture *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceSparseVolumeTexture *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceSparseVolumeTexture *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceSparseVolumeTexture *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceSparseVolumeTexture *)
           FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceSparseVolumeTexture *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceSparseVolumeTexture,UNiagaraDataInterfaceSparseVolumeTexture_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceSparseVolumeTexture *)0x0;
}

// ExecuteIfSafe @ 14922f5c0

/* WARNING: Removing unreachable block (ram,0x00014922f62e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceSpline *pUVar3;
  UNiagaraDataInterfaceSpline *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceSpline *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceSpline *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceSpline *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceSpline *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceSpline *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceSpline,UNiagaraDataInterfaceSpline_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceSpline *)0x0;
}

// ExecuteIfSafe @ 14922f6a0

/* WARNING: Removing unreachable block (ram,0x00014922f70e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceSpriteRendererInfo *pUVar3;
  UNiagaraDataInterfaceSpriteRendererInfo *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceSpriteRendererInfo *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceSpriteRendererInfo *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceSpriteRendererInfo *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceSpriteRendererInfo *)
           FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceSpriteRendererInfo *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceSpriteRendererInfo,UNiagaraDataInterfaceSpriteRendererInfo_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceSpriteRendererInfo *)0x0;
}

// ExecuteIfSafe @ 14922f780

/* WARNING: Removing unreachable block (ram,0x00014922f7ee) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceTexture *pUVar3;
  UNiagaraDataInterfaceTexture *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceTexture *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceTexture *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceTexture *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceTexture *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceTexture *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceTexture,UNiagaraDataInterfaceTexture_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceTexture *)0x0;
}

// ExecuteIfSafe @ 14922f860

/* WARNING: Removing unreachable block (ram,0x00014922f8ce) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceVectorField *pUVar3;
  UNiagaraDataInterfaceVectorField *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceVectorField *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceVectorField *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceVectorField *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceVectorField *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceVectorField *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceVectorField,UNiagaraDataInterfaceVectorField_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceVectorField *)0x0;
}

// ExecuteIfSafe @ 14922f940

/* WARNING: Removing unreachable block (ram,0x00014922f9ae) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceVirtualTextureSample *pUVar3;
  UNiagaraDataInterfaceVirtualTextureSample *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceVirtualTextureSample *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceVirtualTextureSample *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceVirtualTextureSample *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceVirtualTextureSample *)
           FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceVirtualTextureSample *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceVirtualTextureSample,UNiagaraDataInterfaceVirtualTextureSample_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceVirtualTextureSample *)0x0;
}

// ExecuteIfSafe @ 14922fa20

/* WARNING: Removing unreachable block (ram,0x00014922fa8e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UNiagaraDataInterfaceVolumeTexture *pUVar3;
  UNiagaraDataInterfaceVolumeTexture *pUVar4;
  UObject *pUVar5;
  UNiagaraDataInterfaceVolumeTexture *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UNiagaraDataInterfaceVolumeTexture *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UNiagaraDataInterfaceVolumeTexture *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UNiagaraDataInterfaceVolumeTexture *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UNiagaraDataInterfaceVolumeTexture *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UNiagaraDataInterfaceVolumeTexture,UNiagaraDataInterfaceVolumeTexture_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UNiagaraDataInterfaceVolumeTexture *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1492342d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1492342e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1492342f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 149234300

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 149234310

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 149234320

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 149234330

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 149234340

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1492369a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1492369b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1492369c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1492369d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1492369e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1492369f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 149236a00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 149236a10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 149238fc0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 149238fd0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 149238fe0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 149238ff0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 149239000

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 149239010

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 149239020

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 149239030

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14923c9d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14923ca00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14923ca30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14923ca60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14923ca90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14923cac0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14923caf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14923cb20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 149242800

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 149242820

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 149242840

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 149242860

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 149242880

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1492428a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1492428c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1492428e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 149242ce0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 149242d00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 149242d20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 149242d40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 149242d60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 149242d80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 149242da0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 149242dc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 149252380

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSkeletalMesh,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 149252390

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSparseVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1492523a0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpline,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1492523b0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceSpriteRendererInfo,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1492523c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1492523d0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVectorField,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1492523e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVirtualTextureSample,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1492523f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UNiagaraDataInterfaceVolumeTexture,void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 149399fa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAsyncNiagaraCaptureSimCache____A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d31017e8 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14939a030

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAsyncNiagaraCaptureSimCache____A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d31017e8 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14939a080

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAsyncNiagaraCaptureSimCache____A6AXPEAVUNiagaraSimCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d31017e8 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1493a0750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
          *this,UNiagaraSimCache *param_1)

{
  UAsyncNiagaraCaptureSimCache *pUVar1;
  UAsyncNiagaraCaptureSimCache *local_res8;
  
  local_res8 = (UAsyncNiagaraCaptureSimCache *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UAsyncNiagaraCaptureSimCache,UAsyncNiagaraCaptureSimCache_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// ExecuteIfSafe @ 1493a0e30

/* WARNING: Removing unreachable block (ram,0x0001493a0e9e) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
                *this,UNiagaraSimCache *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAsyncNiagaraCaptureSimCache *pUVar3;
  UAsyncNiagaraCaptureSimCache *pUVar4;
  UObject *pUVar5;
  UAsyncNiagaraCaptureSimCache *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAsyncNiagaraCaptureSimCache *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAsyncNiagaraCaptureSimCache *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAsyncNiagaraCaptureSimCache *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAsyncNiagaraCaptureSimCache *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UAsyncNiagaraCaptureSimCache,UAsyncNiagaraCaptureSimCache_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAsyncNiagaraCaptureSimCache *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1493a3980

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1493a67c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1493a8270

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 1493a8410

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 1493aa410

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1493aa580

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 1493ba190

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAsyncNiagaraCaptureSimCache,void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

