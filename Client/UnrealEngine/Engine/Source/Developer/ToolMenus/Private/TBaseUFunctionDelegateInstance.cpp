// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 13

// TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext> @ 142c36c00

TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
* __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
          (TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
           *this,TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFToolMenuContext____6B_
  ;
  FToolMenuContext::FToolMenuContext
            ((FToolMenuContext *)&this->_padding_,(FToolMenuContext *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseUFunctionDelegateInstance_VUToolMenuEntryScript____A6AXXZUFDefaultDelegateUserPolicy__UFToolMenuContext____6B_
  ;
  this->CachedFunction = param_1->CachedFunction;
  this->FunctionName = param_1->FunctionName;
  (this->UserObjectPtr).WeakPtr = (param_1->UserObjectPtr).WeakPtr;
  return this;
}

// CreateCopy @ 142c54f10

void __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::CreateCopy(TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x90,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
       *)0x0) {
    TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142c54f80

void __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::CreateCopy(TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x90,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
       *)0x0) {
    TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 142c54fc0

void __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::CreateCopy(TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x90,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
       *)0x0) {
    TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142c579f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::Execute(TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
          *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 auStack_a8 [32];
  FToolMenuContext local_88;
  char local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FToolMenuContext::FToolMenuContext(&local_88,(FToolMenuContext *)&this->_padding_);
  local_20 = '\x01';
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_88);
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
    if (local_20 == '\0') {
      return;
    }
  }
  FToolMenuContext::~FToolMenuContext(&local_88);
  return;
}

// ExecuteIfSafe @ 142c586a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142c586e7) */
/* WARNING: Removing unreachable block (ram,0x000142c58731) */

bool __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::ExecuteIfSafe(TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStack_b8 [32];
  UObject *local_98;
  undefined8 local_90;
  FToolMenuContext local_88;
  char local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_98 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_98 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_98);
    }
    local_90 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    bVar1 = false;
  }
  else {
    local_20 = 0;
    FToolMenuContext::FToolMenuContext(&local_88,(FToolMenuContext *)&this->_padding_);
    local_20 = '\x01';
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_88);
    if (local_20 != '\0') {
      FToolMenuContext::~FToolMenuContext(&local_88);
    }
    bVar1 = true;
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 142c5dc50

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142c5f200

void * __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 142c60a50

UObject * __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::GetUObject(TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 142c611a0

bool __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::HasSameObject(TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 142c63680

bool __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::IsCompactable(TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 142c63a70

bool __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::IsSafeToExecute(TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
                  *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 142c728d0

FName __thiscall
TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
::TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UToolMenuEntryScript,void___cdecl(void),FDefaultDelegateUserPolicy,FToolMenuContext>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

