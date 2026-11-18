// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldNotification
// Functions: 12

// CreateCopy @ 1441c17d0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXPEAV1_UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1441c1860

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXPEAV1_UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 1441c18c0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXPEAV1_UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
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

// Execute @ 1441c1a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this,UObject *param_1,FFieldId *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 auStack_58 [32];
  UObject *local_38;
  FName local_30;
  int local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_30 = param_2->FieldName;
  local_28 = param_2->BitNumber;
  local_20 = '\x01';
  local_38 = param_1;
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_38);
  if (local_20 == '\0') {
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

// ExecuteIfSafe @ 1441c1b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001441c1b6a) */
/* WARNING: Removing unreachable block (ram,0x0001441c1bb1) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,UObject *param_1,FFieldId *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStack_78 [32];
  UObject *local_58;
  undefined8 local_50;
  UObject *local_48;
  FName local_40;
  int local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_58 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_58 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_58);
    }
    local_50 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    local_38 = param_2->BitNumber;
    local_40 = param_2->FieldName;
    local_30 = 1;
    local_48 = param_1;
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_48);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1441c2320

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1441c2370

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1441c2460

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 1441c2610

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 1441c26c0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1441c2700

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 1441c3a90

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

