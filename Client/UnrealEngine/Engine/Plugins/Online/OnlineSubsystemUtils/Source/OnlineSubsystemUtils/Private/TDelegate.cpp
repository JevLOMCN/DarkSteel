// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 12

// CreateUObject<UCreateSessionCallbackProxy> @ 14ec4a750

TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
CreateUObject<UCreateSessionCallbackProxy>
          (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          UCreateSessionCallbackProxy *param_1,pmf_f83ca02e param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UCreateSessionCallbackProxy *local_res8;
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCreateSessionCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UCreateSessionCallbackProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar2[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UCreateSessionCallbackProxy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    *(pmf_f83ca02e *)(puVar2 + 4) = param_2;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return __return_storage_ptr__;
}

// TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy> @ 14ec51180

TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>::
TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
          (TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
           *this,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
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

// TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> @ 14ec51320

TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *param_1)

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

// TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy> @ 14ec514c0

TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy> *
__thiscall
TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
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

// TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> @ 14ec51660

TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> *this,
          TDelegate<void___cdecl(FString,bool),FDefaultDelegateUserPolicy> *param_1)

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

// ~TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> @ 14ec54fb0

void __thiscall
TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>::
~TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *this)

{
  if ((*(int *)&this->field_0x8 != 0) && (*(undefined8 **)this != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)this)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,0,0,0x10);
    *(undefined4 *)&this->field_0x8 = 0;
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// Execute @ 14ec6f500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EEncryptionFailureAction __thiscall
TDelegate<enum_EEncryptionFailureAction___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>::
Execute(void *this,UNetConnection *param_1)

{
  EEncryptionFailureAction EVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if (*(int *)((longlong)this + 0x10) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  EVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return EVar1;
}

// ExecuteIfBound @ 14ec6f610

bool __thiscall
TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *this,
          int param_1,bool param_2,FString *param_3)

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

// ExecuteIfBound @ 14ecb8160

bool __thiscall
TDelegate<void___cdecl(FPlayerReservation_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(FPlayerReservation_const_&),FDefaultDelegateUserPolicy> *this,
          FPlayerReservation *param_1)

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

// CreateRaw<FTestSessionInterface> @ 14ecd5450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::CreateRaw<FTestSessionInterface>
          (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FTestSessionInterface *param_1,pmf_7a5b359f *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *pTVar8;
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar6 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = param_1;
    puVar6[4] = uVar3;
    puVar6[5] = uVar4;
    if ((param_1 == (FTestSessionInterface *)0x0) || (puVar6[4] == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar8;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// CreateRaw<FTestSessionInterface> @ 14ecd5540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CreateRaw<FTestSessionInterface>
          (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FTestSessionInterface *param_1,pmf_97f7bcc5 *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *pTVar8;
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar6 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = param_1;
    puVar6[4] = uVar3;
    puVar6[5] = uVar4;
    if ((param_1 == (FTestSessionInterface *)0x0) || (puVar6[4] == 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)(*pcVar2)();
        return pTVar8;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// TDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy> @ 14ecd7330

TDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy> *
__thiscall
TDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
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

