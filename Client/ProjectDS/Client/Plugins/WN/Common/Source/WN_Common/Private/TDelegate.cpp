// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 5

// operator= @ 149490fa0

TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy> *param_1)

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

// Execute @ 14949e260

bool __thiscall
TDelegate<bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::Execute(TDelegate<bool___cdecl(FName,FName,FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
          *this,FName param_1,FName param_2,FName param_3,float param_4,
         FWN_StateMachine_ExecutionContext *param_5)

{
  undefined1 uVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)&this->field_0x8;
  }
  uVar1 = (**(code **)(*plVar2 + 0x60))(param_4,param_1,param_2,param_3,param_4,param_5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar1;
}

// ExecuteIfBound @ 14949ea80

bool __thiscall
TDelegate<void___cdecl(FName,FName,FName,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(FName,FName,FName,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
                 *this,FName param_1,FName param_2,FName param_3,
                FWN_StateMachine_ExecutionContext *param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3,param_4);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// ExecuteIfBound @ 14949eb10

bool __thiscall
TDelegate<void___cdecl(FName,FName,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(FName,FName,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
                 *this,FName param_1,FName param_2,FWN_StateMachine_ExecutionContext *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// ExecuteIfBound @ 14949eb90

bool __thiscall
TDelegate<void___cdecl(FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(FName,float,FWN_StateMachine_ExecutionContext_*),FDefaultDelegateUserPolicy>
                 *this,FName param_1,float param_2,FWN_StateMachine_ExecutionContext *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,local_38);
  if ((*(int *)&this->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return (bool)uVar2;
}

