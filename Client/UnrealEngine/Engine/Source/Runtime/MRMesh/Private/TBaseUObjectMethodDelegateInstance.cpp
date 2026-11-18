// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 37

// TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs> @ 146c64fa0

TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
* __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
           *this,TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
                 *param_1)

{
  undefined8 uVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFSendBrickDataArgs_IMRMesh____6B_
  ;
  IMRMesh::FSendBrickDataArgs::FSendBrickDataArgs
            ((FSendBrickDataArgs *)&this->_padding_,(FSendBrickDataArgs *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseUObjectMethodDelegateInstance__0A_VUMRMeshComponent____A6AXXZUFDefaultDelegateUserPolicy__UFSendBrickDataArgs_IMRMesh____6B_
  ;
  (this->UserObject).WeakPtr = (param_1->UserObject).WeakPtr;
  uVar1 = *(undefined8 *)&(param_1->MethodPtr).field_0x8;
  *(undefined8 *)&this->MethodPtr = *(undefined8 *)&param_1->MethodPtr;
  *(undefined8 *)&(this->MethodPtr).field_0x8 = uVar1;
  return this;
}

// CreateCopy @ 146c69100

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
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
              ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMRMeshBodyHolder____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
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

// CreateCopy @ 146c69190

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMRMeshBodyHolder____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146c691f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
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
              ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
    ;
    puVar6[1] = this->_padding_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMRMeshBodyHolder____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
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

// CreateCopy @ 146c692a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMRMeshComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c69330

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMRMeshComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 146c69380

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMRMeshComponent____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146c69430

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0xa0,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146c694a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0xa0,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 146c694e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
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
  this_00 = UE::Core::Private::DelegateAllocate(0xa0,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146c69ad0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
          *this,bool param_1)

{
  UMRMeshBodyHolder *pUVar1;
  UMRMeshBodyHolder *local_res8;
  
  local_res8 = (UMRMeshBodyHolder *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UMRMeshBodyHolder,UMRMeshBodyHolder_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             this->_padding_);
  return;
}

// Execute @ 146c69b30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMRMeshComponent *pUVar1;
  UMRMeshComponent *local_res8 [4];
  
  local_res8[0] = (UMRMeshComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UMRMeshComponent,UMRMeshComponent_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)(&pUVar1->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 146c69b70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
          *this)

{
  code *pcVar1;
  undefined8 uVar2;
  UMRMeshComponent *pUVar3;
  FSendBrickDataArgs *pFVar4;
  UMRMeshComponent *local_res8;
  int iStack_90;
  FSendBrickDataArgs local_88;
  
  local_res8 = (UMRMeshComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pcVar1 = *(code **)&this->MethodPtr;
  uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pUVar3 = UE::Core::Private::DereferenceIfNecessary<UMRMeshComponent,UMRMeshComponent_*_&>
                     (&local_res8);
  iStack_90 = (int)uVar2;
  pFVar4 = IMRMesh::FSendBrickDataArgs::FSendBrickDataArgs
                     (&local_88,(FSendBrickDataArgs *)&this->_padding_);
  (*pcVar1)(&pUVar3->field_0x0 + iStack_90,pFVar4);
  return;
}

// ExecuteIfSafe @ 146c69c00

/* WARNING: Removing unreachable block (ram,0x000146c69c6f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMRMeshBodyHolder *pUVar3;
  UMRMeshBodyHolder *pUVar4;
  UObject *pUVar5;
  UMRMeshBodyHolder *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMRMeshBodyHolder *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMRMeshBodyHolder *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMRMeshBodyHolder *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMRMeshBodyHolder *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UMRMeshBodyHolder,UMRMeshBodyHolder_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMRMeshBodyHolder *)0x0;
}

// ExecuteIfSafe @ 146c69ce0

/* WARNING: Removing unreachable block (ram,0x000146c69d46) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMRMeshComponent *pUVar3;
  UMRMeshComponent *pUVar4;
  UObject *pUVar5;
  UMRMeshComponent *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMRMeshComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMRMeshComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMRMeshComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMRMeshComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UMRMeshComponent,UMRMeshComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)(&pUVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMRMeshComponent *)0x0;
}

// ExecuteIfSafe @ 146c69db0

/* WARNING: Removing unreachable block (ram,0x000146c69e2e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
                *this)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UMRMeshComponent *pUVar5;
  UMRMeshComponent *pUVar6;
  FSendBrickDataArgs *pFVar7;
  UObject *pUVar8;
  UMRMeshComponent *local_res8;
  undefined8 local_res10;
  int iStack_a0;
  FSendBrickDataArgs local_98;
  
  pUVar8 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (bVar3) {
    local_res8 = (UMRMeshComponent *)0x0;
  }
  else {
    TVar4 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar8 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UMRMeshComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar5 = (UMRMeshComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar5 != (UMRMeshComponent *)0x0) {
    pcVar1 = *(code **)&this->MethodPtr;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_res8 = pUVar5;
    pUVar6 = UE::Core::Private::DereferenceIfNecessary<UMRMeshComponent,UMRMeshComponent_*_&>
                       (&local_res8);
    iStack_a0 = (int)uVar2;
    pFVar7 = IMRMesh::FSendBrickDataArgs::FSendBrickDataArgs
                       (&local_98,(FSendBrickDataArgs *)&this->_padding_);
    (*pcVar1)(&pUVar6->field_0x0 + iStack_a0,pFVar7);
  }
  if (pUVar8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar8);
  }
  return pUVar5 != (UMRMeshComponent *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146c6aca0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146c6acb0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146c6acc0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146c6ba30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146c6ba40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 146c6ba50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146c6c1c0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146c6c1d0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146c6c1e0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146c6c500

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146c6c530

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146c6c560

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 146c6c750

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146c6c770

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 146c6c790

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146c6c7f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146c6c810

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 146c6c830

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 146c708c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshBodyHolder,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146c708d0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146c708e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),FDefaultDelegateUserPolicy,IMRMesh::FSendBrickDataArgs>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

