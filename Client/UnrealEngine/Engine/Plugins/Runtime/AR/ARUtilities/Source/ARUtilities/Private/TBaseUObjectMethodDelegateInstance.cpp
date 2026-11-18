// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ARUtilities
// Functions: 24

// CreateCopy @ 14cfc87a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAARPassthroughManager____A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c132bd02 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cfc8830

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAARPassthroughManager____A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c132bd02 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14cfc8880

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAARPassthroughManager____A6AXPEAVAARActor__PEAVUARComponent__UFGuid___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c132bd02 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cfc8930

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMRMeshComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAARPassthroughManager____A6AXPEAVUMRMeshComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d871ac47 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cfc89c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMRMeshComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAARPassthroughManager____A6AXPEAVUMRMeshComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d871ac47 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14cfc8a10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMRMeshComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAARPassthroughManager____A6AXPEAVUMRMeshComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d871ac47 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cfc8b10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
          *this,AARActor *param_1,UARComponent *param_2,FGuid *param_3)

{
  AARPassthroughManager *pAVar1;
  AARPassthroughManager *local_res8;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  local_res8 = (AARPassthroughManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AARPassthroughManager,AARPassthroughManager_*_&>(&local_res8);
  local_18 = param_3->A;
  uStack_14 = param_3->B;
  uStack_10 = param_3->C;
  uStack_c = param_3->D;
  (*(code *)this->MethodPtr)(pAVar1,param_1,param_2,&local_18);
  return;
}

// Execute @ 14cfc8b90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
          *this,UMRMeshComponent *param_1)

{
  AARPassthroughManager *pAVar1;
  AARPassthroughManager *local_res8;
  
  local_res8 = (AARPassthroughManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AARPassthroughManager,AARPassthroughManager_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pAVar1,param_1);
  return;
}

// ExecuteIfSafe @ 14cfc8be0

/* WARNING: Removing unreachable block (ram,0x00014cfc8c5e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
                *this,AARActor *param_1,UARComponent *param_2,FGuid *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AARPassthroughManager *pAVar3;
  AARPassthroughManager *pAVar4;
  UObject *pUVar5;
  AARPassthroughManager *local_res8;
  undefined8 local_38;
  uint uStack_30;
  uint uStack_2c;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AARPassthroughManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AARPassthroughManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_38 = 0;
  }
  pAVar3 = (AARPassthroughManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AARPassthroughManager *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AARPassthroughManager,AARPassthroughManager_*_&>(&local_res8);
    local_38._0_4_ = param_3->A;
    local_38._4_4_ = param_3->B;
    uStack_30 = param_3->C;
    uStack_2c = param_3->D;
    (*(code *)this->MethodPtr)(pAVar4,param_1,param_2,&local_38);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AARPassthroughManager *)0x0;
}

// ExecuteIfSafe @ 14cfc8cf0

/* WARNING: Removing unreachable block (ram,0x00014cfc8d5e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
                *this,UMRMeshComponent *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AARPassthroughManager *pAVar3;
  AARPassthroughManager *pAVar4;
  UObject *pUVar5;
  AARPassthroughManager *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AARPassthroughManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AARPassthroughManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AARPassthroughManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AARPassthroughManager *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AARPassthroughManager,AARPassthroughManager_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pAVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AARPassthroughManager *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14cfc8dd0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14cfc8de0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14cfc8e30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14cfc8e40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14cfc9450

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14cfc9460

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14cfc94d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14cfc9500

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14cfc9560

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cfc9580

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14cfc95a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14cfc95c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14cfc9e40

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(AARActor_*,UARComponent_*,FGuid),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cfc9e50

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AARPassthroughManager,void___cdecl(UMRMeshComponent_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

