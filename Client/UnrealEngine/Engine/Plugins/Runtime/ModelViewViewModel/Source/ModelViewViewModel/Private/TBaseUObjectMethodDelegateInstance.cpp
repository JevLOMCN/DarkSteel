// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 36

// CreateCopy @ 14a746320

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMVVMView_SourceKey____6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMVVMView____A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMVVMView_SourceKey____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_88ffe67a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7463b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMVVMView_SourceKey____6B_
    ;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMVVMView____A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMVVMView_SourceKey____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_88ffe67a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a746410

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMVVMView_SourceKey____6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMVVMView____A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMVVMView_SourceKey____6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_88ffe67a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a7464c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMVVMView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_74ad9f0c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a746550

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMVVMView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_74ad9f0c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a7465a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMVVMView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_74ad9f0c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a746650

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy__PEAV1_PEAVUListViewBase__VFName____6B_
    ;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMVVMViewListViewBaseClassExtension____A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy__PEAV2_PEAVUListViewBase__VFName____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 5) = (this->UserObject).WeakPtr;
    *(pmf_213511b8 *)(puVar2 + 6) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a7466f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy__PEAV1_PEAVUListViewBase__VFName____6B_
    ;
    lVar1 = this->_padding_;
    puVar2[1] = this->_padding_;
    puVar2[2] = lVar1;
    puVar2[3] = this->_padding_;
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMVVMViewListViewBaseClassExtension____A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy__PEAV2_PEAVUListViewBase__VFName____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 5) = (this->UserObject).WeakPtr;
    *(pmf_213511b8 *)(puVar2 + 6) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a746760

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy__PEAV1_PEAVUListViewBase__VFName____6B_
    ;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar4 = this->_padding_;
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(int *)(puVar6 + 1) = (int)this->_padding_;
    *(undefined4 *)((longlong)puVar6 + 0xc) = uVar2;
    *(int *)(puVar6 + 2) = (int)lVar4;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
    puVar6[3] = this->_padding_;
    puVar6[4] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMVVMViewListViewBaseClassExtension____A6AXAEAVUUserWidget___ZUFDefaultDelegateUserPolicy__PEAV2_PEAVUListViewBase__VFName____6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 5) = (this->UserObject).WeakPtr;
    *(pmf_213511b8 *)(puVar6 + 6) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a7484d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
          *this,UObject *param_1,FFieldId *param_2)

{
  UMVVMView *pUVar1;
  UMVVMView *local_res8;
  FName local_18;
  int local_10;
  
  local_res8 = (UMVVMView *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UMVVMView,UMVVMView_*_&>(&local_res8);
  local_10 = param_2->BitNumber;
  local_18 = param_2->FieldName;
  (*(code *)this->MethodPtr)(pUVar1,param_1,&local_18,(int)this->_padding_);
  return;
}

// Execute @ 14a748550

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  UMVVMView *pUVar1;
  UMVVMView *local_res8 [4];
  
  local_res8[0] = (UMVVMView *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UMVVMView,UMVVMView_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14a748590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
          *this,UUserWidget *param_1)

{
  UMVVMViewListViewBaseClassExtension *pUVar1;
  UMVVMViewListViewBaseClassExtension *local_res8;
  
  local_res8 = (UMVVMViewListViewBaseClassExtension *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMVVMViewListViewBaseClassExtension,UMVVMViewListViewBaseClassExtension_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,this->_padding_,this->_padding_,this->_padding_);
  return;
}

// ExecuteIfSafe @ 14a74c0c0

/* WARNING: Removing unreachable block (ram,0x00014a74c136) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
                *this,UObject *param_1,FFieldId *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMVVMView *pUVar3;
  UMVVMView *pUVar4;
  UObject *pUVar5;
  UMVVMView *local_res8;
  FName local_38;
  int local_30;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMVVMView *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMVVMView *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMVVMView *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMVVMView *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UMVVMView,UMVVMView_*_&>(&local_res8);
    local_30 = param_2->BitNumber;
    local_38 = param_2->FieldName;
    (*(code *)this->MethodPtr)(pUVar4,param_1,&local_38,(int)this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMVVMView *)0x0;
}

// ExecuteIfSafe @ 14a74c1c0

/* WARNING: Removing unreachable block (ram,0x00014a74c226) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMVVMView *pUVar3;
  UMVVMView *pUVar4;
  UObject *pUVar5;
  UMVVMView *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMVVMView *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMVVMView *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMVVMView *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMVVMView *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UMVVMView,UMVVMView_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMVVMView *)0x0;
}

// ExecuteIfSafe @ 14a74c290

/* WARNING: Removing unreachable block (ram,0x00014a74c2fe) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
                *this,UUserWidget *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMVVMViewListViewBaseClassExtension *pUVar3;
  UMVVMViewListViewBaseClassExtension *pUVar4;
  UObject *pUVar5;
  UMVVMViewListViewBaseClassExtension *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMVVMViewListViewBaseClassExtension *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMVVMViewListViewBaseClassExtension *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMVVMViewListViewBaseClassExtension *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMVVMViewListViewBaseClassExtension *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMVVMViewListViewBaseClassExtension,UMVVMViewListViewBaseClassExtension_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,this->_padding_,this->_padding_,this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMVVMViewListViewBaseClassExtension *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14a750ea0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a750eb0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a750ec0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14a752760

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a752770

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a752780

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a754970

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a754980

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a754990

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14a755870

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7558a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a7558d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14a7596c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a7596e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a759700

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14a759e30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a759e50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a759e70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14a765140

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy,FMVVMView_SourceKey>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a765150

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMVVMView,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a765160

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMVVMViewListViewBaseClassExtension,void___cdecl(UUserWidget_&),FDefaultDelegateUserPolicy,UUserWidget_*,UListViewBase_*,FName>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

