// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 5

// CopyFrom<FDefaultDelegateUserPolicy> @ 14df6ec20

void __thiscall
TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
           *this,TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// CopyFrom<FDefaultDelegateUserPolicy> @ 14df6ed20

void __thiscall
TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
           *this,TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,bool,int,FFBIKLinkData_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// ~TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy> @ 14df74090

void __thiscall
TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
::
~TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<UE::Math::TVector<double>___cdecl(FFBIKLinkData_const_&,JacobianIK::FFBIKEffectorTarget_const_&,bool,JacobianIK::FSolverParameter_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// ~TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy> @ 14df740c0

void __thiscall
TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::
~TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// operator= @ 14df74460

TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<void___cdecl(TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                  *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

