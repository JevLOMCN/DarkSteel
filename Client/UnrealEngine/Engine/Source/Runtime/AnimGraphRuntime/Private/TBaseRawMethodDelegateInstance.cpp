// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 22

// CreateCopy @ 146422840

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AMAEBU__TVector_N_Math_UE__MAEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFAnimNode_SplineIK____A6AMAEBU__TVector_N_Math_UE__MAEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5a9064ec *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1464228d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AMAEBU__TVector_N_Math_UE__MAEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFAnimNode_SplineIK____A6AMAEBU__TVector_N_Math_UE__MAEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5a9064ec *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146422920

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AMAEBU__TVector_N_Math_UE__MAEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFAnimNode_SplineIK____A6AMAEBU__TVector_N_Math_UE__MAEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_5a9064ec *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1464229d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AMM_ZUFDefaultDelegateUserPolicy__M__6B_;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFAnimNode_SplineIK____A6AMM_ZUFDefaultDelegateUserPolicy__M__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8840f4d8 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146422a70

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AMM_ZUFDefaultDelegateUserPolicy__M__6B_;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFAnimNode_SplineIK____A6AMM_ZUFDefaultDelegateUserPolicy__M__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8840f4d8 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146422ad0

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AMM_ZUFDefaultDelegateUserPolicy__M__6B_;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFAnimNode_SplineIK____A6AMM_ZUFDefaultDelegateUserPolicy__M__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_8840f4d8 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14643e700

float __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
          *this,TVector<double> *param_1,float param_2,int *param_3)

{
  FAnimNode_SplineIK *pFVar1;
  float fVar2;
  FAnimNode_SplineIK *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAnimNode_SplineIK,FAnimNode_SplineIK_*_&>
                     (&local_res8);
  fVar2 = (float)(*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3);
  return fVar2;
}

// Execute @ 14643e770

float __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
::Execute(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
          *this,float param_1)

{
  FAnimNode_SplineIK *pFVar1;
  float fVar2;
  FAnimNode_SplineIK *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAnimNode_SplineIK,FAnimNode_SplineIK_*_&>
                     (local_res8);
  fVar2 = (float)(*(code *)this->MethodPtr)(pFVar1,param_1,(int)this->_padding_);
  return fVar2;
}

// ExecuteIfSafe @ 14643e820

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
                *this,TVector<double> *param_1,float param_2,int *param_3)

{
  FAnimNode_SplineIK *pFVar1;
  FAnimNode_SplineIK *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAnimNode_SplineIK,FAnimNode_SplineIK_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 14643e890

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
                *this,float param_1)

{
  FAnimNode_SplineIK *pFVar1;
  FAnimNode_SplineIK *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAnimNode_SplineIK,FAnimNode_SplineIK_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,(int)this->_padding_);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1464486a0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1464486b0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14644bf00

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14644bf10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 146450540

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146450550

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
::GetUObject(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146450c90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 146450ca0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14645afc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14645afd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146470290

FName __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(UE::Math::TVector<double>_const_&,float,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1464702a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FAnimNode_SplineIK,float___cdecl(float),FDefaultDelegateUserPolicy,float>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

