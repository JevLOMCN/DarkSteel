// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 24

// CreateCopy @ 14cf0a680

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__AEBU123_PEAVUCharacterMovementComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMotionWarpingCharacterAdapter____A6A_AU__TTransform_N_Math_UE__AEBU234_PEAVUCharacterMovementComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_50c7c9d9 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cf0a710

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__AEBU123_PEAVUCharacterMovementComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMotionWarpingCharacterAdapter____A6A_AU__TTransform_N_Math_UE__AEBU234_PEAVUCharacterMovementComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_50c7c9d9 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14cf0a760

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__AEBU123_PEAVUCharacterMovementComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMotionWarpingCharacterAdapter____A6A_AU__TTransform_N_Math_UE__AEBU234_PEAVUCharacterMovementComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_50c7c9d9 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cf0a810

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__AEBU123_MPEBUFMotionWarpingUpdateContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMotionWarpingComponent____A6A_AU__TTransform_N_Math_UE__AEBU234_MPEBUFMotionWarpingUpdateContext___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cf0a8a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__AEBU123_MPEBUFMotionWarpingUpdateContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMotionWarpingComponent____A6A_AU__TTransform_N_Math_UE__AEBU234_MPEBUFMotionWarpingUpdateContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14cf0a8f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__AEBU123_MPEBUFMotionWarpingUpdateContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMotionWarpingComponent____A6A_AU__TTransform_N_Math_UE__AEBU234_MPEBUFMotionWarpingUpdateContext___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 14cf0c230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTransform<double> * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
          *this,TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
         UCharacterMovementComponent *param_2,float param_3)

{
  UMotionWarpingCharacterAdapter *pUVar1;
  UMotionWarpingCharacterAdapter *local_res8;
  
  local_res8 = (UMotionWarpingCharacterAdapter *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMotionWarpingCharacterAdapter,UMotionWarpingCharacterAdapter_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// Execute @ 14cf0c2b0

TTransform<double> * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
          *this,TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,float param_2
         ,FMotionWarpingUpdateContext *param_3)

{
  UMotionWarpingComponent *pUVar1;
  UMotionWarpingComponent *local_res8;
  
  local_res8 = (UMotionWarpingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMotionWarpingComponent,UMotionWarpingComponent_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 14cf0c450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cf0c4e1) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
                *this,TTransform<double> *param_1,UCharacterMovementComponent *param_2,float param_3
               )

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMotionWarpingCharacterAdapter *pUVar3;
  UMotionWarpingCharacterAdapter *pUVar4;
  UObject *pUVar5;
  undefined1 auStack_f8 [32];
  float local_d8;
  UMotionWarpingCharacterAdapter *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_c8 = (UMotionWarpingCharacterAdapter *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_c8 != (UMotionWarpingCharacterAdapter *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_c8);
    }
    local_c0 = 0;
  }
  pUVar3 = (UMotionWarpingCharacterAdapter *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMotionWarpingCharacterAdapter *)0x0) {
    local_c8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMotionWarpingCharacterAdapter,UMotionWarpingCharacterAdapter_*_&>
                       (&local_c8);
    local_d8 = param_3;
    (*(code *)this->MethodPtr)(pUVar4,local_b8,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMotionWarpingCharacterAdapter *)0x0;
}

// ExecuteIfSafe @ 14cf0c590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cf0c621) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
                *this,TTransform<double> *param_1,float param_2,FMotionWarpingUpdateContext *param_3
               )

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMotionWarpingComponent *pUVar3;
  UMotionWarpingComponent *pUVar4;
  UObject *pUVar5;
  undefined1 auStack_108 [32];
  FMotionWarpingUpdateContext *local_e8;
  UMotionWarpingComponent *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_d8 = (UMotionWarpingComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_d8 != (UMotionWarpingComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_d8);
    }
    local_d0 = 0;
  }
  pUVar3 = (UMotionWarpingComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMotionWarpingComponent *)0x0) {
    local_d8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMotionWarpingComponent,UMotionWarpingComponent_*_&>(&local_d8);
    local_e8 = param_3;
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
               local_c8,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMotionWarpingComponent *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14cf0f280

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14cf0f290

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14cf0fff0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14cf10000

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14cf11bf0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14cf11c00

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14cf11f80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14cf11fb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14cf12340

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14cf12360

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14cf125a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14cf125c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14cf1c5c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMotionWarpingCharacterAdapter,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,UCharacterMovementComponent_*,float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cf1c5d0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMotionWarpingComponent,UE::Math::TTransform<double>___cdecl(UE::Math::TTransform<double>_const_&,float,FMotionWarpingUpdateContext_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

