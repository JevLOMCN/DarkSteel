// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 22

// CreateCopy @ 14df7dbc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData__AEBUFFBIKEffectorTarget_JacobianIK___NAEBUFSolverParameter_6__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFJacobianSolverBase____A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData__AEBUFFBIKEffectorTarget_JacobianIK___NAEBUFSolverParameter_7__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e6ae15ad *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14df7dc50

void __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData__AEBUFFBIKEffectorTarget_JacobianIK___NAEBUFSolverParameter_6__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFJacobianSolverBase____A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData__AEBUFFBIKEffectorTarget_JacobianIK___NAEBUFSolverParameter_7__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e6ae15ad *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14df7dca0

void __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData__AEBUFFBIKEffectorTarget_JacobianIK___NAEBUFSolverParameter_6__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFJacobianSolverBase____A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData__AEBUFFBIKEffectorTarget_JacobianIK___NAEBUFSolverParameter_7__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_e6ae15ad *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14df7dd50

void __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData___NH01AEBUFSolverParameter_JacobianIK___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFJacobianSolverBase____A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData___NH01AEBUFSolverParameter_JacobianIK___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e1edf9e1 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14df7dde0

void __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData___NH01AEBUFSolverParameter_JacobianIK___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFJacobianSolverBase____A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData___NH01AEBUFSolverParameter_JacobianIK___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e1edf9e1 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14df7de30

void __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData___NH01AEBUFSolverParameter_JacobianIK___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFJacobianSolverBase____A6A_AU__TVector_N_Math_UE__AEBUFFBIKLinkData___NH01AEBUFSolverParameter_JacobianIK___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_e1edf9e1 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14df7ef00

TVector<double> * __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
          *this,TVector<double> *__return_storage_ptr__,FFBIKLinkData *param_1,
         FFBIKEffectorTarget *param_2,bool param_3,FSolverParameter *param_4)

{
  FJacobianSolverBase *pFVar1;
  FJacobianSolverBase *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FJacobianSolverBase,FJacobianSolverBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// Execute @ 14df7ef80

TVector<double> * __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
          *this,TVector<double> *__return_storage_ptr__,FFBIKLinkData *param_1,bool param_2,
         int param_3,FFBIKLinkData *param_4,bool param_5,FSolverParameter *param_6)

{
  FJacobianSolverBase *pFVar1;
  FJacobianSolverBase *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FJacobianSolverBase,FJacobianSolverBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)
            (pFVar1,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,param_6);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 14df7f130

bool __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
                *this,FFBIKLinkData *param_1,FFBIKEffectorTarget *param_2,bool param_3,
               FSolverParameter *param_4)

{
  FJacobianSolverBase *pFVar1;
  FJacobianSolverBase *local_res8;
  undefined1 local_28 [32];
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FJacobianSolverBase,FJacobianSolverBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,local_28,param_1,param_2,param_3,param_4);
  return true;
}

// ExecuteIfSafe @ 14df7f1b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
                *this,FFBIKLinkData *param_1,bool param_2,int param_3,FFBIKLinkData *param_4,
               bool param_5,FSolverParameter *param_6)

{
  FJacobianSolverBase *pFVar1;
  FJacobianSolverBase *local_res8;
  undefined1 local_28 [32];
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FJacobianSolverBase,FJacobianSolverBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,local_28,param_1,param_2,param_3,param_4,param_5,param_6);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14df7f570

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14df7f580

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14df7fc50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14df7fc60

void * __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14df7ff40

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14df7ff50

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14df7ff70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14df7ff80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14df81060

bool __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14df81070

bool __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14df873e0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14df873f0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FJacobianSolverBase,UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

