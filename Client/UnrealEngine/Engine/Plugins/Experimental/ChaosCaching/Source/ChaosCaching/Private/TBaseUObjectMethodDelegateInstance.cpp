// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 36

// CreateCopy @ 14daee150

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d54ca65d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14daee1e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d54ca65d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14daee230

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXAEBUFObservedComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d54ca65d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14daee2e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
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
              ___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_bce918e1 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14daee370

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_bce918e1 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14daee3d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
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
              ___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXN_ZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_bce918e1 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14daee480

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXXZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_142da05b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14daee510

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXXZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_142da05b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14daee570

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAChaosCacheManager____A6AXXZUFDefaultDelegateUserPolicy__PEAVFPhysicsSolverEvents_Chaos____6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_142da05b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14daf49c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
          *this,FObservedComponent *param_1)

{
  AChaosCacheManager *pAVar1;
  AChaosCacheManager *local_res8;
  
  local_res8 = (AChaosCacheManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<AChaosCacheManager,AChaosCacheManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pAVar1,param_1);
  return;
}

// Execute @ 14daf4a10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::Execute(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
          *this,double param_1)

{
  AChaosCacheManager *pAVar1;
  AChaosCacheManager *local_res8 [4];
  
  local_res8[0] = (AChaosCacheManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<AChaosCacheManager,AChaosCacheManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pAVar1,SUB84(param_1,0),this->_padding_);
  return;
}

// Execute @ 14daf4a60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::Execute(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
          *this)

{
  AChaosCacheManager *pAVar1;
  AChaosCacheManager *local_res8 [4];
  
  local_res8[0] = (AChaosCacheManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<AChaosCacheManager,AChaosCacheManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pAVar1,this->_padding_);
  return;
}

// ExecuteIfSafe @ 14daf4d70

/* WARNING: Removing unreachable block (ram,0x00014daf4dde) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
                *this,FObservedComponent *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AChaosCacheManager *pAVar3;
  AChaosCacheManager *pAVar4;
  UObject *pUVar5;
  AChaosCacheManager *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AChaosCacheManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AChaosCacheManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AChaosCacheManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AChaosCacheManager *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<AChaosCacheManager,AChaosCacheManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pAVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AChaosCacheManager *)0x0;
}

// ExecuteIfSafe @ 14daf4e50

/* WARNING: Removing unreachable block (ram,0x00014daf4ebe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
                *this,double param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AChaosCacheManager *pAVar3;
  AChaosCacheManager *pAVar4;
  UObject *pUVar5;
  AChaosCacheManager *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AChaosCacheManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AChaosCacheManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AChaosCacheManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AChaosCacheManager *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<AChaosCacheManager,AChaosCacheManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pAVar4,SUB84(param_1,0),this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AChaosCacheManager *)0x0;
}

// ExecuteIfSafe @ 14daf4f30

/* WARNING: Removing unreachable block (ram,0x00014daf4f96) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AChaosCacheManager *pAVar3;
  AChaosCacheManager *pAVar4;
  UObject *pUVar5;
  AChaosCacheManager *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AChaosCacheManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AChaosCacheManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pAVar3 = (AChaosCacheManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AChaosCacheManager *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<AChaosCacheManager,AChaosCacheManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pAVar4,this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AChaosCacheManager *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14daf7b10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14daf7b20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14daf7b30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14daf82b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14daf82c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14daf82d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14daf8aa0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14daf8ab0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14daf8ac0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14daf98a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14daf98d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14daf9900

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14dafa6e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dafa700

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dafa720

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14dafa7b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dafa7d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dafa7f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14db05b60

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(FObservedComponent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14db05b70

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(double),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14db05b80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AChaosCacheManager,void___cdecl(void),FDefaultDelegateUserPolicy,Chaos::FPhysicsSolverEvents_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

