// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 36

// CreateCopy @ 14d7a0370

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXPEAMH_ZUFDefaultDelegateUserPolicy__I__6B_;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMediaIOCoreSubsystem____A6AXPEAMH_ZUFDefaultDelegateUserPolicy__I__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e51ee13b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7a0400

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXPEAMH_ZUFDefaultDelegateUserPolicy__I__6B_;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMediaIOCoreSubsystem____A6AXPEAMH_ZUFDefaultDelegateUserPolicy__I__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e51ee13b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d7a0460

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXPEAMH_ZUFDefaultDelegateUserPolicy__I__6B_;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMediaIOCoreSubsystem____A6AXPEAMH_ZUFDefaultDelegateUserPolicy__I__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e51ee13b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d7a0510

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaCapture____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a57cc5e9 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7a05a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaCapture____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a57cc5e9 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d7a05f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaCapture____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a57cc5e9 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d7a06a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaIOCoreSubsystem____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_dc4134c3 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7a0730

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaIOCoreSubsystem____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_dc4134c3 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d7a0780

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaIOCoreSubsystem____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_dc4134c3 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d7a4650

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::Execute(TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
          *this,float *param_1,int param_2)

{
  UMediaIOCoreSubsystem *pUVar1;
  UMediaIOCoreSubsystem *local_res8;
  
  local_res8 = (UMediaIOCoreSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMediaIOCoreSubsystem,UMediaIOCoreSubsystem_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2,(int)this->_padding_);
  return;
}

// Execute @ 14d7a46b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  UMediaCapture *pUVar1;
  UMediaCapture *local_res8 [4];
  
  local_res8[0] = (UMediaCapture *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UMediaCapture,UMediaCapture_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14d7a46f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
          *this,uint param_1)

{
  UMediaIOCoreSubsystem *pUVar1;
  UMediaIOCoreSubsystem *local_res8;
  
  local_res8 = (UMediaIOCoreSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMediaIOCoreSubsystem,UMediaIOCoreSubsystem_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// ExecuteIfSafe @ 14d7a67a0

/* WARNING: Removing unreachable block (ram,0x00014d7a6816) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
                *this,float *param_1,int param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMediaIOCoreSubsystem *pUVar3;
  UMediaIOCoreSubsystem *pUVar4;
  UObject *pUVar5;
  UMediaIOCoreSubsystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMediaIOCoreSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMediaIOCoreSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMediaIOCoreSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMediaIOCoreSubsystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMediaIOCoreSubsystem,UMediaIOCoreSubsystem_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2,(int)this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMediaIOCoreSubsystem *)0x0;
}

// ExecuteIfSafe @ 14d7a6890

/* WARNING: Removing unreachable block (ram,0x00014d7a68f6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMediaCapture *pUVar3;
  UMediaCapture *pUVar4;
  UObject *pUVar5;
  UMediaCapture *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMediaCapture *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMediaCapture *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMediaCapture *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMediaCapture *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UMediaCapture,UMediaCapture_*_&>(&local_res8)
    ;
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMediaCapture *)0x0;
}

// ExecuteIfSafe @ 14d7a6960

/* WARNING: Removing unreachable block (ram,0x00014d7a69ce) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *this,uint param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMediaIOCoreSubsystem *pUVar3;
  UMediaIOCoreSubsystem *pUVar4;
  UObject *pUVar5;
  UMediaIOCoreSubsystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMediaIOCoreSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMediaIOCoreSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMediaIOCoreSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMediaIOCoreSubsystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMediaIOCoreSubsystem,UMediaIOCoreSubsystem_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMediaIOCoreSubsystem *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14d7a9300

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d7a9310

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d7a9320

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14d7ac4c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d7ac4d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d7ac4e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d7aeaf0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d7aeb00

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d7aeb10

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14d7aef60

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d7aef90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d7aefc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14d7b1620

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d7b1640

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d7b1660

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14d7b1900

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d7b1920

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d7b1940

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14d7c1b70

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UMediaIOCoreSubsystem_const_,void___cdecl(float_*,int),FDefaultDelegateUserPolicy,unsigned_int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7c1b80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMediaCapture,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7c1b90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMediaIOCoreSubsystem,void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

