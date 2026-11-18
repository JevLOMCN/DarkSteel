// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 12

// CreateCopy @ 14d286150

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAppleARKitLiveLinkConnectionSettings___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)(puVar1 + 1),
               (TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUAppleARKitLiveLinkSourceFactory____A6AXAEBUFAppleARKitLiveLinkConnectionSettings___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObject).WeakPtr;
    *(pmf_fb69f5be *)(puVar1 + 6) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d2861f0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAppleARKitLiveLinkConnectionSettings___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)(puVar1 + 1),
               (TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUAppleARKitLiveLinkSourceFactory____A6AXAEBUFAppleARKitLiveLinkConnectionSettings___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObject).WeakPtr;
    *(pmf_fb69f5be *)(puVar1 + 6) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d286260

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFAppleARKitLiveLinkConnectionSettings___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)(puVar3 + 1),
               (TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUAppleARKitLiveLinkSourceFactory____A6AXAEBUFAppleARKitLiveLinkConnectionSettings___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr_VILiveLinkSource___00__VFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObject).WeakPtr;
    *(pmf_fb69f5be *)(puVar3 + 6) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d287080

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::Execute(TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
          *this,FAppleARKitLiveLinkConnectionSettings *param_1)

{
  pmf_fb69f5be pVar1;
  UAppleARKitLiveLinkSourceFactory *pUVar2;
  TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy> *pTVar3;
  UObject *local_res8;
  TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy> local_28
  ;
  
  local_res8 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UAppleARKitLiveLinkSourceFactory,UAppleARKitLiveLinkSourceFactory_*_&>
                     ((UAppleARKitLiveLinkSourceFactory **)&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
           ::
           TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                     (&local_28,
                      (TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  (*(code *)pVar1)(pUVar2,param_1,pTVar3);
  return;
}

// ExecuteIfSafe @ 14d287160

/* WARNING: Removing unreachable block (ram,0x00014d2871ce) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
                *this,FAppleARKitLiveLinkConnectionSettings *param_1)

{
  pmf_fb69f5be pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UObject *pUVar4;
  UAppleARKitLiveLinkSourceFactory *pUVar5;
  TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy> *pTVar6;
  UObject *pUVar7;
  UAppleARKitLiveLinkSourceFactory *local_res8;
  TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy> local_38
  ;
  
  pUVar7 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UAppleARKitLiveLinkSourceFactory *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar7 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UAppleARKitLiveLinkSourceFactory *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    local_res8 = (UAppleARKitLiveLinkSourceFactory *)pUVar4;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<UAppleARKitLiveLinkSourceFactory,UAppleARKitLiveLinkSourceFactory_*_&>
                       (&local_res8);
    pVar1 = this->MethodPtr;
    pTVar6 = TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
             ::
             TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                       (&local_38,
                        (TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                         *)&this->_padding_);
    (*(code *)pVar1)(pUVar5,param_1,pTVar6);
  }
  if (pUVar7 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
  }
  return pUVar4 != (UObject *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14d287600

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14d287800

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d288130

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14d288150

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14d288940

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14d288970

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14d28c5a0

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UAppleARKitLiveLinkSourceFactory_const_,void___cdecl(FAppleARKitLiveLinkConnectionSettings_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

