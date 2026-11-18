// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// CreateCopy @ 1474452c0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 147445350

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 1474453b0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14744a4a0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 local_res8;
  char local_res9;
  
  local_res9 = '\x01';
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_res8);
  if (local_res9 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ExecuteIfSafe @ 14744a510

/* WARNING: Removing unreachable block (ram,0x00014744a53c) */
/* WARNING: Removing unreachable block (ram,0x00014744a580) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    local_res8._0_2_ = CONCAT11(1,(undefined1)local_res8);
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_res8);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 147454490

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 147459390

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 147464be0

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 1474654a0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 147467360

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::IsCompactable
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 147467740

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 14747d5f0

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

