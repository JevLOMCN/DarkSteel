// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 80

// CopyFrom<FDefaultDelegateUserPolicy> @ 14b4291a0

void __thiscall
TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_1)

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

// operator= @ 14b5e9a70

TDelegate<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy> *param_1)

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

// operator= @ 14b5e9b70

TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *param_1)

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

// TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> @ 14b7585d0

TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> @ 14b79a6a0

TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// CreateUObject<UDS_InteractionAbility_StuffQuestBoard> @ 14b7d1000

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_InteractionAbility_StuffQuestBoard>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_InteractionAbility_StuffQuestBoard *param_1,
                    pmf_23432b0a *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_InteractionAbility_StuffQuestBoard *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_StuffQuestBoard____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_InteractionAbility_StuffQuestBoard *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_InteractionAbility_StuffQuestBoard *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> @ 14b7d7ba0

TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// ExecuteIfBound @ 14b8736c0

bool __thiscall
TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>::
ExecuteIfBound(TDelegate<void___cdecl(FDS_ISKM_BoidsFSM_ExecutionContext_*),FDefaultDelegateUserPolicy>
               *this,FDS_ISKM_BoidsFSM_ExecutionContext *param_1)

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
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// CreateStatic<> @ 14b8ab680

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateStatic<>(TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                           *__return_storage_ptr__,
                          _func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>
                          *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar6;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = param_1;
    if (param_1 == (_func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_DungeonPlayBuild_DebugScreen> @ 14b98e0d0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_DungeonPlayBuild_DebugScreen>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_DungeonPlayBuild_DebugScreen *param_1,
                    pmf_3889675b *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_DungeonPlayBuild_DebugScreen *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_DungeonPlayBuild_DebugScreen____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_DungeonPlayBuild_DebugScreen *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_DungeonPlayBuild_DebugScreen *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateStatic<FString_const_&> @ 14b9cbb80

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateStatic<FString_const_&>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,
                    _func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>_FString
                    *param_1,FString *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar6;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar4 + 1),param_2);
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[3] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar4[4] = param_1;
    if (param_1 ==
        (_func___cdecl_void_TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>_FString *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_CommonPopupManager> @ 14ba86070

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_CommonPopupManager>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_CommonPopupManager *param_1,pmf_dd1ba275 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_CommonPopupManager *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonPopupManager____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_dd1ba275 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CopyFrom<FDefaultDelegateUserPolicy> @ 14bae1670

void __thiscall
TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
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

// CopyFrom<FDefaultDelegateUserPolicy> @ 14bae1770

void __thiscall
TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
::CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
           *this,TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
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

// CopyFrom<FDefaultDelegateUserPolicy> @ 14bae1870

void __thiscall
TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
           *this,TDelegate<bool___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
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

// CreateUObject<UDS_DungeonManager> @ 14bae1970

TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
CreateUObject<UDS_DungeonManager>
          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,UDS_DungeonManager *param_1,pmf_bed09b88 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_DungeonManager *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_DungeonManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_DungeonManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_DungeonManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_bed09b88 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_DungeonManager> @ 14bae1a70

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateUObject<UDS_DungeonManager>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UDS_DungeonManager *param_1,pmf_9b6dd274 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_DungeonManager *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_DungeonManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_DungeonManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_DungeonManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_9b6dd274 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_ItemDetailInfoManager> @ 14bae1b70

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
CreateUObject<UDS_ItemDetailInfoManager>
          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,UDS_ItemDetailInfoManager *param_1,pmf_a08c5574 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_ItemDetailInfoManager *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ItemDetailInfoManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_ItemDetailInfoManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_ItemDetailInfoManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_a08c5574 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_ItemDetailInfoManager> @ 14bae1c70

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

TDelegate<void___cdecl(EDS_ItemDetailInfoType),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(enum_EDS_ItemDetailInfoType),FDefaultDelegateUserPolicy>::
CreateUObject<UDS_ItemDetailInfoManager>
          (TDelegate<void___cdecl(EDS_ItemDetailInfoType),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,UDS_ItemDetailInfoManager *param_1,pmf_6a509866 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_ItemDetailInfoManager *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EDS_ItemDetailInfoType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ItemDetailInfoManager____A6AXW4EDS_ItemDetailInfoType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_ItemDetailInfoManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_ItemDetailInfoManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_6a509866 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_ItemDetailInfoManager,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_> @ 14bae1d70

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateUObject<UDS_ItemDetailInfoManager,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UDS_ItemDetailInfoManager *param_1,pmf_c30c5458 param_2,
          TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_ItemDetailInfoManager *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr______6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 1) = param_3->WeakPtr;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ItemDetailInfoManager____A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr______6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_ItemDetailInfoManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_ItemDetailInfoManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_c30c5458 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// TDelegate<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy> @ 14baec130

TDelegate<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(FDS_SpawnInfo_&),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy> @ 14baec2d0

TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::
TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// TDelegate<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy> @ 14baec470

TDelegate<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy> @ 14baec610

TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
::
TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// ExecuteIfBound @ 14bb04fa0

bool __thiscall
TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
ExecuteIfBound(TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
               *this,ServerMessages *param_1)

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
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// ExecuteIfBound @ 14bb05000

bool __thiscall
TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                 *this,ServerMessagesTwoway *param_1)

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
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// ExecuteIfBound @ 14bb05060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
TDelegate<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy> *this,
          FDS_EffectSpawnCompleteInfo param_1)

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
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1.NiagaraComponent);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// CopyFrom<FDefaultDelegateUserPolicy> @ 14bb430e0

void __thiscall
TDelegate<void___cdecl(enum_EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (void *this,
          TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
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
              (this,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
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

// CreateUObject<UDS_ViewerManager> @ 14bb431e0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateUObject<UDS_ViewerManager>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UDS_ViewerManager *param_1,pmf_84d966d2 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_ViewerManager *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ViewerManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_ViewerManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_ViewerManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_84d966d2 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_ViewerSceneInfo> @ 14bb432e0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
CreateUObject<UDS_ViewerSceneInfo>
          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,UDS_ViewerSceneInfo *param_1,pmf_fd984b4d param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_ViewerSceneInfo *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ViewerSceneInfo____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_ViewerSceneInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_ViewerSceneInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_fd984b4d *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// ~TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> @ 14bb4ceb0

void __thiscall
TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
~TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// Execute @ 14bb5f190

bool __thiscall
TDelegate<bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<bool___cdecl(TSharedPtr<IHttpResponse,1>),FDefaultDelegateUserPolicy> *this,
          TSharedPtr<IHttpResponse,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  IHttpResponse *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  plVar3 = (longlong *)0x0;
  if (*(int *)&this->field_0x10 != 0) {
    plVar3 = *(longlong **)&this->field_0x8;
  }
  pcVar1 = *(code **)(*plVar3 + 0x60);
  local_38 = param_1->Object;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpResponse *)0x0;
  uVar2 = (*pcVar1)(plVar3,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// ExecuteIfBound @ 14bb5f410

bool __thiscall
TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *this,
          UDS_UserWidget *param_1)

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
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// ExecuteIfBound @ 14bb5f470

bool __thiscall
TDelegate<void___cdecl(enum_EDS_MoveMode,enum_EDS_MoveMode),FDefaultDelegateUserPolicy>::
ExecuteIfBound(void *this,EDS_MoveMode param_1,EDS_MoveMode param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if ((*(int *)((longlong)this + 0x10) == 0) ||
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// CreateStatic<> @ 14bb9c920

TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>::
CreateStatic<>(TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
               *__return_storage_ptr__,_func___cdecl_void_ServerMessages_ptr *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy> *pTVar6;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessages_server_msg___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = param_1;
    if (param_1 == (_func___cdecl_void_ServerMessages_ptr *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDelegate<void___cdecl(server_msg::ServerMessages_const_&),FDefaultDelegateUserPolicy>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateStatic<> @ 14bb9c9f0

TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
          ::CreateStatic<>(TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
                           *__return_storage_ptr__,
                          _func___cdecl_bool_FDS_ErrorMessageInfo_ptr_Message_ptr *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = param_1;
    if (param_1 == (_func___cdecl_bool_FDS_ErrorMessageInfo_ptr_Message_ptr *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDelegate<bool___cdecl(FDS_ErrorMessageInfo_const_&,google::protobuf::Message_const_&),FDefaultDelegateUserPolicy>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> @ 14bba8140

TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> @ 14bba82e0

TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> @ 14bba8480

TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// CreateStatic<> @ 14bbe65f0

TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
          ::CreateStatic<>(TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                           *__return_storage_ptr__,
                          _func___cdecl_void_ServerMessagesTwoway_ptr *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = param_1;
    if (param_1 == (_func___cdecl_void_ServerMessagesTwoway_ptr *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticFuncPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x2e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDelegate<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateUObject<ADS_TotemActor,FWN_EndOfRefs_&> @ 14bc7a9c0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateUObject<ADS_TotemActor,FWN_EndOfRefs_&>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          ADS_TotemActor *param_1,pmf_53d05d74 *param_2,FWN_EndOfRefs *param_3)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  ADS_TotemActor *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)puVar1);
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    puVar5[1] = (param_3->TaskCaller).Object;
    pTVar2 = (param_3->TaskCaller).SharedReferenceCount.ReferenceController;
    puVar5[2] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[3] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_TotemActor____A6AXXZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ADS_TotemActor *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar5[4] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ADS_TotemActor *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 4),(FObjectPtr)&local_res8);
    puVar5[5] = uVar3;
    puVar5[6] = uVar4;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// ExecuteIfBound @ 14bc99170

bool __thiscall
TDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *this,UObject *param_1
          ,bool param_2)

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
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// CopyFrom<FDefaultDelegateUserPolicy> @ 14bcd2db0

void __thiscall
TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
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

// CopyFrom<FDefaultDelegateUserPolicy> @ 14bcd2eb0

void __thiscall
TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
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

// CreateUObject<UDS_M_Common_AccelBase_Popup> @ 14bcd4cf0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_M_Common_AccelBase_Popup>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_M_Common_AccelBase_Popup *param_1,
                    pmf_2b8d22bd param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_M_Common_AccelBase_Popup *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Common_AccelBase_Popup____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_M_Common_AccelBase_Popup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_M_Common_AccelBase_Popup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_2b8d22bd *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_M_Common_AccelBase_Popup> @ 14bcd4df0

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateUObject<UDS_M_Common_AccelBase_Popup>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UDS_M_Common_AccelBase_Popup *param_1,pmf_67508763 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_M_Common_AccelBase_Popup *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Common_AccelBase_Popup____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_M_Common_AccelBase_Popup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_M_Common_AccelBase_Popup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_67508763 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_M_Filter> @ 14bcd4ef0

TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_M_Filter>
                    (TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_M_Filter *param_1,pmf_380250b2 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_M_Filter *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Filter____A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_M_Filter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_M_Filter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_380250b2 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_M_ItemGemPopup> @ 14bcd4ff0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_M_ItemGemPopup>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_M_ItemGemPopup *param_1,pmf_cbfaa2df param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_M_ItemGemPopup *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_ItemGemPopup____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_M_ItemGemPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_M_ItemGemPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_cbfaa2df *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy> @ 14bce3540

TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
::
TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy> @ 14bce36e0

TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
::
TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
          (void *this,
          TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (this,(FWriteAccessScope *)&local_30);
    if ((*(int *)((longlong)this + 0x10) != 0) &&
       (*(undefined8 **)((longlong)this + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((longlong)this + 8))();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 8),0,0,0x10);
      *(undefined4 *)((longlong)this + 0x10) = 0;
    }
    if (*(void **)((longlong)this + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)this + 8));
    }
    *(FScriptContainerElement **)((longlong)this + 8) = FVar2.Data;
    *(int *)((longlong)this + 0x10) = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy> @ 14bce3880

TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
::
TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
          (void *this,
          TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined4 *)((longlong)this + 0x10) = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (this,(FWriteAccessScope *)&local_30);
    if ((*(int *)((longlong)this + 0x10) != 0) &&
       (*(undefined8 **)((longlong)this + 8) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((longlong)this + 8))();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 8),0,0,0x10);
      *(undefined4 *)((longlong)this + 0x10) = 0;
    }
    if (*(void **)((longlong)this + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)this + 8));
    }
    *(FScriptContainerElement **)((longlong)this + 8) = FVar2.Data;
    *(int *)((longlong)this + 0x10) = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// CreateUObject<UDS_VM_CharacterLevelup> @ 14bd9d4d0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_CharacterLevelup>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_CharacterLevelup *param_1,pmf_1d13ddb7 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_CharacterLevelup *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CharacterLevelup____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_CharacterLevelup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_CharacterLevelup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_MoneyTooltipDetector> @ 14bd9d5e0

TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
CreateUObject<UDS_VM_MoneyTooltipDetector>
          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,UDS_VM_MoneyTooltipDetector *param_1,pmf_032593b8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_MoneyTooltipDetector *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MoneyTooltipDetector____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_MoneyTooltipDetector *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_MoneyTooltipDetector *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// ExecuteIfBound @ 14bdbddb0

bool __thiscall
TDelegate<void___cdecl(FDS_ButtonEventField_const_&,FString_&),FDefaultDelegateUserPolicy>::
ExecuteIfBound(TDelegate<void___cdecl(FDS_ButtonEventField_const_&,FString_&),FDefaultDelegateUserPolicy>
               *this,FDS_ButtonEventField *param_1,FString *param_2)

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
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// CreateUObject<UDS_VM_Item> @ 14be03c50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateUObject<UDS_VM_Item>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UDS_VM_Item *param_1,pmf_0d7c8f2c *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_Item *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Item____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_VM_Item *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_VM_Item *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_OpenPopupTicketCharge> @ 14be03d60

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_OpenPopupTicketCharge>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_OpenPopupTicketCharge *param_1,
                    pmf_ee5be0e1 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_OpenPopupTicketCharge *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_OpenPopupTicketCharge____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_OpenPopupTicketCharge *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_OpenPopupTicketCharge *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_Warehouse> @ 14be03e70

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_Warehouse>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_Warehouse *param_1,pmf_c46a70a0 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_Warehouse *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Warehouse____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_VM_Warehouse *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_VM_Warehouse *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// Execute @ 14be1c6b0

void __thiscall
TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *this,int param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if (*(int *)&this->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&this->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// CreateUObject<UDS_VM_GuildCreate> @ 14be662d0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_GuildCreate>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_GuildCreate *param_1,pmf_b4df1a14 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_GuildCreate *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildCreate____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildCreate *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_GuildJoinWaitingSlot> @ 14be663e0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_GuildJoinWaitingSlot>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_GuildJoinWaitingSlot *param_1,
                    pmf_ef988d6f *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_GuildJoinWaitingSlot *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildJoinWaitingSlot____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildJoinWaitingSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildJoinWaitingSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_GuildMemberGradePopup> @ 14be664f0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_GuildMemberGradePopup>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_GuildMemberGradePopup *param_1,
                    pmf_c3a6a401 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_GuildMemberGradePopup *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildMemberGradePopup____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildMemberGradePopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildMemberGradePopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_GuildPermissionPopup> @ 14be66600

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_GuildPermissionPopup>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_GuildPermissionPopup *param_1,
                    pmf_9f6f0aab *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_GuildPermissionPopup *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildPermissionPopup____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildPermissionPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildPermissionPopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_GuildSetting> @ 14be66710

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_GuildSetting>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_GuildSetting *param_1,pmf_cc6a553e *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_GuildSetting *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSetting____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildSetting *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildSetting *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_GuildSettingInviteSlot> @ 14be66820

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_GuildSettingInviteSlot>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_GuildSettingInviteSlot *param_1,
                    pmf_12f3cf65 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_GuildSettingInviteSlot *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingInviteSlot____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildSettingInviteSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_GuildSettingInviteSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_NpcFunctionGift,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_&> @ 14beccbf0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_NpcFunctionGift,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_&>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_NpcFunctionGift *param_1,pmf_5cfb454c *param_2,
                    TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_NpcFunctionGift *local_res8;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    *(FWeakObjectPtr *)(puVar4 + 1) = param_3->WeakPtr;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionGift____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_NpcFunctionGift *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_NpcFunctionGift *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_NpcFunctionRetrunHome> @ 14beccd10

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_NpcFunctionRetrunHome>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_NpcFunctionRetrunHome *param_1,pmf_c19e0801 param_2
                    )

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_NpcFunctionRetrunHome *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionRetrunHome____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_NpcFunctionRetrunHome *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_NpcFunctionRetrunHome *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_c19e0801 *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_NpcFunctionShop> @ 14becce10

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_NpcFunctionShop>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_NpcFunctionShop *param_1,pmf_f0ad2748 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_NpcFunctionShop *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_NpcFunctionShop *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_NpcFunctionShop *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_NpcFunctionShop,int_&> @ 14beccf20

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_NpcFunctionShop,int_&>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_NpcFunctionShop *param_1,pmf_b1d8d062 *param_2,
                    int *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_NpcFunctionShop *local_res8;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar4 + 1) = *param_3;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_NpcFunctionShop *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_NpcFunctionShop *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_NpcFunctionShop,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_&> @ 14becd040

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_NpcFunctionShop,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_&>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_NpcFunctionShop *param_1,pmf_2e828d3a *param_2,
                    TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_NpcFunctionShop *local_res8;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    *(FWeakObjectPtr *)(puVar4 + 1) = param_3->WeakPtr;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionShop____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr______6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_NpcFunctionShop *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_NpcFunctionShop *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_Mail> @ 14becd160

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_Mail>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_Mail *param_1,pmf_03e3d958 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_Mail *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Mail____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_VM_Mail *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_VM_Mail *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_Mounts_Interaction_Main> @ 14becd270

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_Mounts_Interaction_Main>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_Mounts_Interaction_Main *param_1,
                    pmf_8f2255cd *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_Mounts_Interaction_Main *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Mounts_Interaction_Main____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_Mounts_Interaction_Main *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_Mounts_Interaction_Main *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// ExecuteIfBound @ 14bee6910

bool __thiscall
TDelegate<void___cdecl(enum_EDS_KeyTimeAttack_KeyState),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (void *this,EDS_KeyTimeAttack_KeyState param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if ((*(int *)((longlong)this + 0x10) == 0) ||
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// CreateUObject<UDS_VM_W_PlayerSkill_SkillInfo> @ 14bf31960

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_W_PlayerSkill_SkillInfo>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_W_PlayerSkill_SkillInfo *param_1,
                    pmf_106b4f9b *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_W_PlayerSkill_SkillInfo *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillInfo____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_PlayerSkill_SkillInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_PlayerSkill_SkillInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_W_PlayerSkill_SkillInfo> @ 14bf31a70

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateUObject<UDS_VM_W_PlayerSkill_SkillInfo>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UDS_VM_W_PlayerSkill_SkillInfo *param_1,pmf_ea6b9101 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_W_PlayerSkill_SkillInfo *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_PlayerSkill_SkillInfo____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_PlayerSkill_SkillInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_PlayerSkill_SkillInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_W_Skill> @ 14bf31b80

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateUObject<UDS_VM_W_Skill>
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UDS_VM_W_Skill *param_1,pmf_91b87c60 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_W_Skill *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Skill____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_VM_W_Skill *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_VM_W_Skill *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_W_B_MountsMain> @ 14bf8ffa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_W_B_MountsMain>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_W_B_MountsMain *param_1,pmf_00a60bd9 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_W_B_MountsMain *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_B_MountsMain____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_B_MountsMain *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_B_MountsMain *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_W_HUD_Phasing> @ 14bf900b0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_W_HUD_Phasing>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_W_HUD_Phasing *param_1,pmf_bc8c383b *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_W_HUD_Phasing *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_HUD_Phasing____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_HUD_Phasing *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_HUD_Phasing *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_W_Inventory> @ 14bf901c0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_W_Inventory>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_W_Inventory *param_1,pmf_9f2362af *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_W_Inventory *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Inventory____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_Inventory *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDS_VM_W_Inventory *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// CreateUObject<UDS_VM_WorldMap> @ 14bff65e0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __cdecl TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          ::CreateUObject<UDS_VM_WorldMap>
                    (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                     *__return_storage_ptr__,UDS_VM_WorldMap *param_1,pmf_78ea8beb *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_WorldMap *local_res8;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_38);
  local_20 = puVar1;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)&param_2->field_0x8;
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMap____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_VM_WorldMap *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar4[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_VM_WorldMap *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = uVar2;
    puVar4[5] = uVar3;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// ExecuteIfBound @ 14c07fea0

bool __thiscall
TDelegate<void___cdecl(float_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(float_const_&),FDefaultDelegateUserPolicy> *this,float *param_1)

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
    uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

