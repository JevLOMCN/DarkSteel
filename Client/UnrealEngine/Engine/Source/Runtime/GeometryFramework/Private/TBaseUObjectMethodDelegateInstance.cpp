// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 24

// CreateCopy @ 149706b80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDynamicMesh__UFDynamicMeshChangeInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDynamicMeshComponent____A6AXPEAVUDynamicMesh__UFDynamicMeshChangeInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 149706c10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDynamicMesh__UFDynamicMeshChangeInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDynamicMeshComponent____A6AXPEAVUDynamicMesh__UFDynamicMeshChangeInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 149706c60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDynamicMesh__UFDynamicMeshChangeInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDynamicMeshComponent____A6AXPEAVUDynamicMesh__UFDynamicMeshChangeInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 149706d10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDynamicMeshComponent____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
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

// CreateCopy @ 149706da0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDynamicMeshComponent____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 149706e00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDynamicMeshComponent____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
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

// Execute @ 149709040

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
          *this,UDynamicMesh *param_1,FDynamicMeshChangeInfo *param_2)

{
  UDynamicMeshComponent *pUVar1;
  UDynamicMeshComponent *local_res8;
  undefined8 local_28;
  FMeshChange *pFStack_20;
  FMeshReplacementChange *local_18;
  FMeshVertexChange *pFStack_10;
  
  local_res8 = (UDynamicMeshComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  local_28._0_1_ = param_2->Type;
  local_28._1_1_ = param_2->Flags;
  local_28._2_1_ = param_2->bIsRevertChange;
  local_28._3_5_ = *(undefined5 *)&param_2->field_0x3;
  pFStack_20 = param_2->MeshChange;
  local_18 = param_2->ReplaceChange;
  pFStack_10 = param_2->VertexChange;
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UDynamicMeshComponent,UDynamicMeshComponent_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             &local_28);
  return;
}

// Execute @ 1497090c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::Execute(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
          *this,bool param_1)

{
  UDynamicMeshComponent *pUVar1;
  UDynamicMeshComponent *local_res8;
  
  local_res8 = (UDynamicMeshComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UDynamicMeshComponent,UDynamicMeshComponent_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             this->_padding_);
  return;
}

// ExecuteIfSafe @ 149709160

/* WARNING: Removing unreachable block (ram,0x0001497091dc) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                *this,UDynamicMesh *param_1,FDynamicMeshChangeInfo *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UDynamicMeshComponent *pUVar3;
  UDynamicMeshComponent *pUVar4;
  UObject *pUVar5;
  UDynamicMeshComponent *local_res8;
  undefined8 local_48;
  FMeshChange *pFStack_40;
  FMeshReplacementChange *local_38;
  FMeshVertexChange *pFStack_30;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UDynamicMeshComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UDynamicMeshComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UDynamicMeshComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UDynamicMeshComponent *)0x0) {
    local_48._0_1_ = param_2->Type;
    local_48._1_1_ = param_2->Flags;
    local_48._2_1_ = param_2->bIsRevertChange;
    local_48._3_5_ = *(undefined5 *)&param_2->field_0x3;
    pFStack_40 = param_2->MeshChange;
    local_38 = param_2->ReplaceChange;
    pFStack_30 = param_2->VertexChange;
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UDynamicMeshComponent,UDynamicMeshComponent_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,&local_48);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UDynamicMeshComponent *)0x0;
}

// ExecuteIfSafe @ 149709270

/* WARNING: Removing unreachable block (ram,0x0001497092df) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UDynamicMeshComponent *pUVar3;
  UDynamicMeshComponent *pUVar4;
  UObject *pUVar5;
  UDynamicMeshComponent *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UDynamicMeshComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UDynamicMeshComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UDynamicMeshComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UDynamicMeshComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UDynamicMeshComponent,UDynamicMeshComponent_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UDynamicMeshComponent *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14970ea80

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14970ea90

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 149710d70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 149710d80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 149711960

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 149711970

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 149711eb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 149711ee0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 149713f10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 149713f30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1497140f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 149714110

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14971ae30

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(UDynamicMesh_*,FDynamicMeshChangeInfo),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14971ae40

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UDynamicMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

