// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 12

// CreateCopy @ 14d26b370

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUProceduralMeshComponent____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
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

// CreateCopy @ 14d26b400

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUProceduralMeshComponent____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14d26b460

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUProceduralMeshComponent____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
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

// Execute @ 14d26e3f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::Execute(TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
          *this,bool param_1)

{
  UProceduralMeshComponent *pUVar1;
  UProceduralMeshComponent *local_res8;
  
  local_res8 = (UProceduralMeshComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UProceduralMeshComponent,UProceduralMeshComponent_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             this->_padding_);
  return;
}

// ExecuteIfSafe @ 14d26e450

/* WARNING: Removing unreachable block (ram,0x00014d26e4bf) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UProceduralMeshComponent *pUVar3;
  UProceduralMeshComponent *pUVar4;
  UObject *pUVar5;
  UProceduralMeshComponent *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UProceduralMeshComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UProceduralMeshComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UProceduralMeshComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UProceduralMeshComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UProceduralMeshComponent,UProceduralMeshComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UProceduralMeshComponent *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14d2713e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14d272ab0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d274260

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14d2743a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14d274710

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14d2747d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14d27b920

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UProceduralMeshComponent,void___cdecl(bool),FDefaultDelegateUserPolicy,UBodySetup_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

