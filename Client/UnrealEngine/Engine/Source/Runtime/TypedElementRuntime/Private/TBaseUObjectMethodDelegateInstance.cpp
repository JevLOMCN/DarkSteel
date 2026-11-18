// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 36

// CreateCopy @ 144541c10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TTypedElementList_UFTypedElementHandle_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTypedElementSelectionSet____A6AXAEBV__TTypedElementList_UFTypedElementHandle_____ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 144541ca0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TTypedElementList_UFTypedElementHandle_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTypedElementSelectionSet____A6AXAEBV__TTypedElementList_UFTypedElementHandle_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 144541cf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TTypedElementList_UFTypedElementHandle_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTypedElementSelectionSet____A6AXAEBV__TTypedElementList_UFTypedElementHandle_____ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 144541da0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBU__TTuple_UFTypedElementHandle__U1___H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTypedElementSelectionSet____A6AXV__TArrayView___CBU__TTuple_UFTypedElementHandle__U1___H___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 144541e30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBU__TTuple_UFTypedElementHandle__U1___H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTypedElementSelectionSet____A6AXV__TArrayView___CBU__TTuple_UFTypedElementHandle__U1___H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 144541e80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBU__TTuple_UFTypedElementHandle__U1___H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTypedElementSelectionSet____A6AXV__TArrayView___CBU__TTuple_UFTypedElementHandle__U1___H___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 144541f30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBUFTypedElementHandle__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTypedElementSelectionSet____A6AXV__TArrayView___CBUFTypedElementHandle__H___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 144541fc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBUFTypedElementHandle__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTypedElementSelectionSet____A6AXV__TArrayView___CBUFTypedElementHandle__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 144542010

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBUFTypedElementHandle__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTypedElementSelectionSet____A6AXV__TArrayView___CBUFTypedElementHandle__H___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 1445430c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
          *this,TTypedElementList<FTypedElementHandle> *param_1)

{
  UTypedElementSelectionSet *pUVar1;
  UTypedElementSelectionSet *local_res8;
  
  local_res8 = (UTypedElementSelectionSet *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UTypedElementSelectionSet,UTypedElementSelectionSet_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 144543110

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
          *this,TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int> *param_1)

{
  UTypedElementSelectionSet *pUVar1;
  UTypedElementSelectionSet *local_res8;
  TTuple<FTypedElementHandle,FTypedElementHandle> *local_18;
  undefined8 uStack_10;
  
  local_res8 = (UTypedElementSelectionSet *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->ArrayNum;
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UTypedElementSelectionSet,UTypedElementSelectionSet_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,&local_18
            );
  return;
}

// Execute @ 144543170

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
          *this,TArrayView<FTypedElementHandle_const_,int> *param_1)

{
  UTypedElementSelectionSet *pUVar1;
  UTypedElementSelectionSet *local_res8;
  FTypedElementHandle *local_18;
  undefined8 uStack_10;
  
  local_res8 = (UTypedElementSelectionSet *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->ArrayNum;
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UTypedElementSelectionSet,UTypedElementSelectionSet_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,&local_18
            );
  return;
}

// ExecuteIfSafe @ 1445431d0

/* WARNING: Removing unreachable block (ram,0x00014454323e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                *this,TTypedElementList<FTypedElementHandle> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UTypedElementSelectionSet *pUVar3;
  UTypedElementSelectionSet *pUVar4;
  UObject *pUVar5;
  UTypedElementSelectionSet *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UTypedElementSelectionSet *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UTypedElementSelectionSet *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UTypedElementSelectionSet *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UTypedElementSelectionSet *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UTypedElementSelectionSet,UTypedElementSelectionSet_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UTypedElementSelectionSet *)0x0;
}

// ExecuteIfSafe @ 1445432b0

/* WARNING: Removing unreachable block (ram,0x00014454331e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
                *this,TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>
                      *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UTypedElementSelectionSet *pUVar3;
  UTypedElementSelectionSet *pUVar4;
  UObject *pUVar5;
  UTypedElementSelectionSet *local_res8;
  TTuple<FTypedElementHandle,FTypedElementHandle> *local_28;
  undefined8 uStack_20;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UTypedElementSelectionSet *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UTypedElementSelectionSet *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UTypedElementSelectionSet *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UTypedElementSelectionSet *)0x0) {
    local_28 = param_1->DataPtr;
    uStack_20 = *(undefined8 *)&param_1->ArrayNum;
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UTypedElementSelectionSet,UTypedElementSelectionSet_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               &local_28);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UTypedElementSelectionSet *)0x0;
}

// ExecuteIfSafe @ 1445433a0

/* WARNING: Removing unreachable block (ram,0x00014454340e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
                *this,TArrayView<FTypedElementHandle_const_,int> *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UTypedElementSelectionSet *pUVar3;
  UTypedElementSelectionSet *pUVar4;
  UObject *pUVar5;
  UTypedElementSelectionSet *local_res8;
  FTypedElementHandle *local_28;
  undefined8 uStack_20;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UTypedElementSelectionSet *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UTypedElementSelectionSet *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UTypedElementSelectionSet *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UTypedElementSelectionSet *)0x0) {
    local_28 = param_1->DataPtr;
    uStack_20 = *(undefined8 *)&param_1->ArrayNum;
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UTypedElementSelectionSet,UTypedElementSelectionSet_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               &local_28);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UTypedElementSelectionSet *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 144543ef0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 144543f00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 144543f10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 144545610

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 144545620

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 144545630

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 144546c50

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 144546c60

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 144546c70

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 144546dc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 144546df0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 144546e20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 144546e80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 144546ea0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 144546ec0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1445477e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 144547800

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 144547820

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14454a8e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14454a8f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<TTuple<FTypedElementHandle,FTypedElementHandle>_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14454a900

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UTypedElementSelectionSet,void___cdecl(TArrayView<FTypedElementHandle_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

