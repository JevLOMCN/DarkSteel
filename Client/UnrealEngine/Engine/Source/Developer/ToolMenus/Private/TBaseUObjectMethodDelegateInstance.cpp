// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 26

// TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry> @ 142c36c80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
* __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
          (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
           *this,TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUToolMenu__UFWeakObjectPtr____UFToolMenuEntry____6B_
  ;
  this->_padding_ = param_1->_padding_;
  FToolMenuEntry::FToolMenuEntry
            ((FToolMenuEntry *)&this->_padding_,(FToolMenuEntry *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseUObjectMethodDelegateInstance__0A_VUToolMenus____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUToolMenu__UFWeakObjectPtr____UFToolMenuEntry____6B_
  ;
  (this->UserObject).WeakPtr = (param_1->UserObject).WeakPtr;
  this->MethodPtr = param_1->MethodPtr;
  return this;
}

// TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName> @ 142c36d00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
* __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
          (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
           *this,TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUToolMenu__UFWeakObjectPtr____UFToolMenuEntry__VFName____6B_
  ;
  this->_padding_ = param_1->_padding_;
  FToolMenuEntry::FToolMenuEntry
            ((FToolMenuEntry *)&this->_padding_,(FToolMenuEntry *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseUObjectMethodDelegateInstance__0A_VUToolMenus____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUToolMenu__UFWeakObjectPtr____UFToolMenuEntry__VFName____6B_
  ;
  (this->UserObject).WeakPtr = (param_1->UserObject).WeakPtr;
  this->MethodPtr = param_1->MethodPtr;
  return this;
}

// CreateCopy @ 142c55050

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x7a8,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142c550c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x7a8,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 142c55100

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x7a8,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142c55190

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x7b0,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142c55200

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x7b0,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 142c55240

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x7b0,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142c57ac0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::Execute(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
          *this,FMenuBuilder *param_1)

{
  pmf_c471b29c pVar1;
  UToolMenus *pUVar2;
  FToolMenuEntry *pFVar3;
  UToolMenus *local_res8;
  FToolMenuEntry local_788;
  
  local_res8 = (UToolMenus *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::DereferenceIfNecessary<UToolMenus,UToolMenus_*_&>(&local_res8);
  pVar1 = this->MethodPtr;
  pFVar3 = FToolMenuEntry::FToolMenuEntry(&local_788,(FToolMenuEntry *)&this->_padding_);
  (*(code *)pVar1)(pUVar2,param_1,this->_padding_,pFVar3);
  return;
}

// Execute @ 142c57b50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::Execute(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
          *this,FMenuBuilder *param_1)

{
  pmf_299b53a4 pVar1;
  longlong lVar2;
  UToolMenus *pUVar3;
  FToolMenuEntry *pFVar4;
  UToolMenus *local_res8;
  FToolMenuEntry local_798;
  
  local_res8 = (UToolMenus *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar3 = UE::Core::Private::DereferenceIfNecessary<UToolMenus,UToolMenus_*_&>(&local_res8);
  pVar1 = this->MethodPtr;
  lVar2 = this->_padding_;
  pFVar4 = FToolMenuEntry::FToolMenuEntry(&local_798,(FToolMenuEntry *)&this->_padding_);
  (*(code *)pVar1)(pUVar3,param_1,this->_padding_,pFVar4,lVar2);
  return;
}

// ExecuteIfSafe @ 142c587f0

/* WARNING: Removing unreachable block (ram,0x000142c58875) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
                *this,FMenuBuilder *param_1)

{
  pmf_c471b29c pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UToolMenus *pUVar4;
  UToolMenus *pUVar5;
  FToolMenuEntry *pFVar6;
  UObject *pUVar7;
  UToolMenus *local_res8;
  FToolMenuEntry local_798;
  
  pUVar7 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UToolMenus *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar7 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UToolMenus *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar4 = (UToolMenus *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 != (UToolMenus *)0x0) {
    local_res8 = pUVar4;
    pUVar5 = UE::Core::Private::DereferenceIfNecessary<UToolMenus,UToolMenus_*_&>(&local_res8);
    pVar1 = this->MethodPtr;
    pFVar6 = FToolMenuEntry::FToolMenuEntry(&local_798,(FToolMenuEntry *)&this->_padding_);
    (*(code *)pVar1)(pUVar5,param_1,this->_padding_,pFVar6);
  }
  if (pUVar7 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
  }
  return pUVar4 != (UToolMenus *)0x0;
}

// ExecuteIfSafe @ 142c58910

/* WARNING: Removing unreachable block (ram,0x000142c58995) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
                *this,FMenuBuilder *param_1)

{
  pmf_299b53a4 pVar1;
  longlong lVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UToolMenus *pUVar5;
  UToolMenus *pUVar6;
  FToolMenuEntry *pFVar7;
  UObject *pUVar8;
  UToolMenus *local_res8;
  FToolMenuEntry local_7a8;
  
  pUVar8 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (bVar3) {
    local_res8 = (UToolMenus *)0x0;
  }
  else {
    TVar4 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar8 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UToolMenus *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar5 = (UToolMenus *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar5 != (UToolMenus *)0x0) {
    local_res8 = pUVar5;
    pUVar6 = UE::Core::Private::DereferenceIfNecessary<UToolMenus,UToolMenus_*_&>(&local_res8);
    pVar1 = this->MethodPtr;
    lVar2 = this->_padding_;
    pFVar7 = FToolMenuEntry::FToolMenuEntry(&local_7a8,(FToolMenuEntry *)&this->_padding_);
    (*(code *)pVar1)(pUVar6,param_1,this->_padding_,pFVar7,lVar2);
  }
  if (pUVar8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar8);
  }
  return pUVar5 != (UToolMenus *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 142c5dc60

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142c5dc70

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 142c5f220

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 142c5f240

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 142c60a70

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 142c60a90

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 142c611d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 142c61200

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 142c636b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 142c636e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 142c63a90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 142c63ac0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 142c728f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142c72900

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UToolMenus,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UToolMenu,FWeakObjectPtr>,FToolMenuEntry,FName>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

