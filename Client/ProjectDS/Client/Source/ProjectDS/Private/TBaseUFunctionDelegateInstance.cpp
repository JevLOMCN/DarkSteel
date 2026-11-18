// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 60

// CreateCopy @ 14b99da80

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TTransform_N_Math_UE__AEBUFDS_StreamingCompleteNotifyData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXAEBU__TTransform_N_Math_UE__AEBUFDS_StreamingCompleteNotifyData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14b99db10

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TTransform_N_Math_UE__AEBUFDS_StreamingCompleteNotifyData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXAEBU__TTransform_N_Math_UE__AEBUFDS_StreamingCompleteNotifyData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 14b99db70

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TTransform_N_Math_UE__AEBUFDS_StreamingCompleteNotifyData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXAEBU__TTransform_N_Math_UE__AEBUFDS_StreamingCompleteNotifyData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14b9a7b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
          *this,TTransform<double> *param_1,FDS_StreamingCompleteNotifyData *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  char local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_90 = (param_1->Rotation).XY.m128d_f64[1];
  local_88 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_80 = (param_1->Rotation).ZW.m128d_f64[1];
  local_78 = (param_1->Translation).XY.m128d_f64[0];
  dStack_70 = (param_1->Translation).XY.m128d_f64[1];
  local_68 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_60 = (param_1->Translation).ZW.m128d_f64[1];
  local_58 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_50 = (param_1->Scale3D).XY.m128d_f64[1];
  local_48 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_40 = (param_1->Scale3D).ZW.m128d_f64[1];
  local_28 = '\x01';
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_98);
  if (local_28 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ExecuteIfSafe @ 14b9a8560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014b9a85a9) */
/* WARNING: Removing unreachable block (ram,0x00014b9a85f0) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
                *this,TTransform<double> *param_1,FDS_StreamingCompleteNotifyData *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStack_d8 [32];
  UObject *local_b8;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_b8 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_b8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_b8);
    }
    local_b0 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    local_a8 = (param_1->Rotation).XY.m128d_f64[0];
    dStack_a0 = (param_1->Rotation).XY.m128d_f64[1];
    local_98 = (param_1->Rotation).ZW.m128d_f64[0];
    dStack_90 = (param_1->Rotation).ZW.m128d_f64[1];
    local_88 = (param_1->Translation).XY.m128d_f64[0];
    dStack_80 = (param_1->Translation).XY.m128d_f64[1];
    local_78 = (param_1->Translation).ZW.m128d_f64[0];
    dStack_70 = (param_1->Translation).ZW.m128d_f64[1];
    local_68 = *(undefined4 *)(param_1->Scale3D).XY.m128d_f64;
    uStack_64 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
    uStack_60 = *(undefined4 *)((param_1->Scale3D).XY.m128d_f64 + 1);
    uStack_5c = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
    local_58 = *(undefined4 *)(param_1->Scale3D).ZW.m128d_f64;
    uStack_54 = *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4);
    uStack_50 = *(undefined4 *)((param_1->Scale3D).ZW.m128d_f64 + 1);
    uStack_4c = *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc);
    local_38 = 1;
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_a8);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14b9ad300

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14b9b0820

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14b9b4400

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14b9b4990

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14b9b6fd0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14b9b7670

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 14b9c7c20

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(UE::Math::TTransform<double>_const_&,FDS_StreamingCompleteNotifyData_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

// CreateCopy @ 14ba9a940

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ba9a9d0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 14ba9aa30

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ba9e750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::Execute
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 auStack_38 [32];
  int local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_14 = '\x01';
  local_18 = param_1;
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_18);
  if (local_14 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ExecuteIfSafe @ 14ba9ef40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ba9ef83) */
/* WARNING: Removing unreachable block (ram,0x00014ba9efc7) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,int param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_30 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_30 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_30);
    }
    local_38 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    local_30._0_5_ = CONCAT14(1,param_1);
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_30);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14baa4d50

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14baae7b0

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14bab1000

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14bab2950

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14bab7200

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::IsCompactable
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14baba790

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 14bacf250

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

// CreateCopy @ 14bafbc00

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_UFDS_NotificationData__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXAEBV__TArray_UFDS_NotificationData__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bafbc90

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_UFDS_NotificationData__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXAEBV__TArray_UFDS_NotificationData__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 14bafbcf0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_UFDS_NotificationData__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AXAEBV__TArray_UFDS_NotificationData__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bb03d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FDS_NotificationData *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  undefined1 auStackY_68 [32];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  char local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  iVar1 = param_1->ArrayNum;
  pFVar2 = (FDS_NotificationData *)(param_1->AllocatorInstance).Data;
  local_18 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = iVar1;
  if (iVar1 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar1,0,&local_28,iVar1,&local_1c);
    ConstructItems<FDS_NotificationData,FDS_NotificationData,int>(local_28.Data,pFVar2,iVar1);
  }
  local_18 = '\x01';
  pUVar5 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar5 + 0x260))(pUVar5,this->CachedFunction,&local_28);
  if (local_18 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_18 == '\0') {
      return;
    }
  }
  DestructItems<FDS_NotificationData,int>((FDS_NotificationData *)local_28.Data,local_20);
  if ((FDS_NotificationData *)local_28.Data != (FDS_NotificationData *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// ExecuteIfSafe @ 14bb05120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014bb051a2) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FDS_NotificationData *pFVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  undefined1 auStackY_98 [32];
  UObject *local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  char local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pUVar6 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  pUVar7 = pUVar6;
  if (!bVar3) {
    TVar4 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar7 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_58 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_58);
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar5 != (UObject *)0x0) {
    iVar1 = param_1->ArrayNum;
    pFVar2 = (FDS_NotificationData *)(param_1->AllocatorInstance).Data;
    local_38 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = iVar1;
    if (iVar1 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar1,0,&local_48,iVar1,&local_3c);
      ConstructItems<FDS_NotificationData,FDS_NotificationData,int>(local_48.Data,pFVar2,iVar1);
    }
    local_38 = '\x01';
    (**(code **)(*(longlong *)pUVar5 + 0x260))(pUVar5,this->CachedFunction,&local_48);
    if ((local_38 != '\0') &&
       (DestructItems<FDS_NotificationData,int>((FDS_NotificationData *)local_48.Data,local_40),
       (FDS_NotificationData *)local_48.Data != (FDS_NotificationData *)0x0)) {
      FMemory::Free(local_48.Data);
    }
    pUVar6 = (UObject *)&DAT_00000001;
  }
  if (pUVar7 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
  }
  return (bool)(char)pUVar6;
}

// GetBoundProgramCounterForTimerManager @ 14bb09a50

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14bb0d0e0

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14bb10f70

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14bb11590

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14bb14c80

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14bb16ad0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 14bb3ad60

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

// CreateCopy @ 14bc8d2a0

void __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUDS_CommonTileView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14bc8d330

void __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUDS_CommonTileView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 14bc8d390

void __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUDS_CommonTileView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14bc97240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 auStack_48 [32];
  UObject *local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_20 = '\x01';
  local_28 = param_1;
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_28);
  if (local_20 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ExecuteIfSafe @ 14bc991e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014bc99223) */
/* WARNING: Removing unreachable block (ram,0x00014bc99267) */

bool __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStack_58 [32];
  UObject *local_38;
  UObject *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_38 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_38 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_38);
    }
    local_30 = (UObject *)0x0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    local_28 = 1;
    local_30 = param_1;
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_30);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14bc9ee00

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14bca0e90

void * __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14bca1f20

UObject * __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14bca2f50

bool __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14bca6bf0

bool __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14bca8430

bool __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 14bccd450

FName __thiscall
TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UDS_CommonTileView,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

// CreateCopy @ 14c006d80

void __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUDS_VM_W_ZoneInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14c006e10

void __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUDS_VM_W_ZoneInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 14c006e70

void __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUDS_VM_W_ZoneInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14c011a90

void __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 local_res8;
  char local_res9;
  
  local_res9 = '\x01';
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_res8);
  if (local_res9 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ExecuteIfSafe @ 14c013e50

/* WARNING: Removing unreachable block (ram,0x00014c013e7c) */
/* WARNING: Removing unreachable block (ram,0x00014c013ec0) */

bool __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    local_res8._0_2_ = CONCAT11(1,(undefined1)local_res8);
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_res8);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14c01a460

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14c01b090

void * __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14c01b7a0

UObject * __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14c01c260

bool __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14c021850

bool __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14c022bd0

bool __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 14c047de0

FName __thiscall
TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UDS_VM_W_ZoneInfo,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

