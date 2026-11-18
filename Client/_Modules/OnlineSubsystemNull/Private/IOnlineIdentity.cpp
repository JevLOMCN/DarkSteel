// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 33

// IOnlineIdentity @ 14ed11990

IOnlineIdentity * __thiscall IOnlineIdentity::IOnlineIdentity(IOnlineIdentity *this)

{
  *(undefined8 *)&(this->OnLoginChangedDelegates).field_0x18 = 2;
  this->_padding_ = (longlong)&___7IOnlineIdentity__6B_;
  *(undefined8 *)&this->OnLoginChangedDelegates = 0;
  *(undefined8 *)&(this->OnLoginChangedDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoginChangedDelegates).field_0x10 = 0;
  *(undefined8 *)this->OnLoginStatusChangedDelegates = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[0].field_0x8 = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[0].field_0x10 = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[0].field_0x18 = 2;
  *(undefined8 *)(this->OnLoginStatusChangedDelegates + 1) = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[1].field_0x8 = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[1].field_0x10 = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[1].field_0x18 = 2;
  *(undefined8 *)(this->OnLoginStatusChangedDelegates + 2) = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[2].field_0x8 = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[2].field_0x10 = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[2].field_0x18 = 2;
  *(undefined8 *)(this->OnLoginStatusChangedDelegates + 3) = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[3].field_0x8 = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[3].field_0x10 = 0;
  *(undefined8 *)&this->OnLoginStatusChangedDelegates[3].field_0x18 = 2;
  *(undefined8 *)&this->OnAuthAboutToExpireDelegates = 0;
  *(undefined8 *)&(this->OnAuthAboutToExpireDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnAuthAboutToExpireDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnControllerPairingChangedDelegates = 0;
  *(undefined8 *)&(this->OnControllerPairingChangedDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnControllerPairingChangedDelegates).field_0x10 = 0;
  *(undefined8 *)&(this->OnAuthAboutToExpireDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnControllerPairingChangedDelegates).field_0x18 = 2;
  *(undefined8 *)this->OnLoginCompleteDelegates = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[0].field_0x8 = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[0].field_0x10 = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[0].field_0x18 = 2;
  *(undefined8 *)(this->OnLoginCompleteDelegates + 1) = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[1].field_0x8 = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[1].field_0x10 = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[1].field_0x18 = 2;
  *(undefined8 *)(this->OnLoginCompleteDelegates + 2) = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[2].field_0x8 = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[2].field_0x10 = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[2].field_0x18 = 2;
  *(undefined8 *)(this->OnLoginCompleteDelegates + 3) = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[3].field_0x8 = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[3].field_0x10 = 0;
  *(undefined8 *)&this->OnLoginCompleteDelegates[3].field_0x18 = 2;
  *(undefined8 *)this->OnLogoutCompleteDelegates = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[0].field_0x8 = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[0].field_0x10 = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[0].field_0x18 = 2;
  *(undefined8 *)(this->OnLogoutCompleteDelegates + 1) = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[1].field_0x8 = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[1].field_0x10 = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[1].field_0x18 = 2;
  *(undefined8 *)(this->OnLogoutCompleteDelegates + 2) = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[2].field_0x8 = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[2].field_0x10 = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[2].field_0x18 = 2;
  *(undefined8 *)(this->OnLogoutCompleteDelegates + 3) = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[3].field_0x8 = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[3].field_0x10 = 0;
  *(undefined8 *)&this->OnLogoutCompleteDelegates[3].field_0x18 = 2;
  *(undefined8 *)&this->OnLoginFlowLogoutDelegates = 0;
  *(undefined8 *)&(this->OnLoginFlowLogoutDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnLoginFlowLogoutDelegates).field_0x10 = 0;
  *(undefined8 *)&(this->OnLoginFlowLogoutDelegates).field_0x18 = 2;
  return this;
}

// ~IOnlineIdentity @ 14ed13240

void __thiscall IOnlineIdentity::~IOnlineIdentity(IOnlineIdentity *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlineIdentity__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLoginFlowLogoutDelegates).field_0x8,
             *(int *)&(this->OnLoginFlowLogoutDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnLoginFlowLogoutDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoginFlowLogoutDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLogoutCompleteDelegates[3].field_0x8,
             *(int *)&this->OnLogoutCompleteDelegates[3].field_0x10);
  pvVar1 = *(void **)&this->OnLogoutCompleteDelegates[3].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnLogoutCompleteDelegates + 3));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLogoutCompleteDelegates[2].field_0x8,
             *(int *)&this->OnLogoutCompleteDelegates[2].field_0x10);
  pvVar1 = *(void **)&this->OnLogoutCompleteDelegates[2].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnLogoutCompleteDelegates + 2));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLogoutCompleteDelegates[1].field_0x8,
             *(int *)&this->OnLogoutCompleteDelegates[1].field_0x10);
  pvVar1 = *(void **)&this->OnLogoutCompleteDelegates[1].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnLogoutCompleteDelegates + 1));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLogoutCompleteDelegates[0].field_0x8,
             *(int *)&this->OnLogoutCompleteDelegates[0].field_0x10);
  pvVar1 = *(void **)&this->OnLogoutCompleteDelegates[0].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this->OnLogoutCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLoginCompleteDelegates[3].field_0x8,
             *(int *)&this->OnLoginCompleteDelegates[3].field_0x10);
  pvVar1 = *(void **)&this->OnLoginCompleteDelegates[3].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnLoginCompleteDelegates + 3));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLoginCompleteDelegates[2].field_0x8,
             *(int *)&this->OnLoginCompleteDelegates[2].field_0x10);
  pvVar1 = *(void **)&this->OnLoginCompleteDelegates[2].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnLoginCompleteDelegates + 2));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLoginCompleteDelegates[1].field_0x8,
             *(int *)&this->OnLoginCompleteDelegates[1].field_0x10);
  pvVar1 = *(void **)&this->OnLoginCompleteDelegates[1].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnLoginCompleteDelegates + 1));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLoginCompleteDelegates[0].field_0x8,
             *(int *)&this->OnLoginCompleteDelegates[0].field_0x10);
  pvVar1 = *(void **)&this->OnLoginCompleteDelegates[0].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this->OnLoginCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnControllerPairingChangedDelegates).field_0x8,
             *(int *)&(this->OnControllerPairingChangedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnControllerPairingChangedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerPairingChangedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAuthAboutToExpireDelegates).field_0x8,
             *(int *)&(this->OnAuthAboutToExpireDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnAuthAboutToExpireDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAuthAboutToExpireDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLoginStatusChangedDelegates[3].field_0x8,
             *(int *)&this->OnLoginStatusChangedDelegates[3].field_0x10);
  pvVar1 = *(void **)&this->OnLoginStatusChangedDelegates[3].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnLoginStatusChangedDelegates + 3));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLoginStatusChangedDelegates[2].field_0x8,
             *(int *)&this->OnLoginStatusChangedDelegates[2].field_0x10);
  pvVar1 = *(void **)&this->OnLoginStatusChangedDelegates[2].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnLoginStatusChangedDelegates + 2));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLoginStatusChangedDelegates[1].field_0x8,
             *(int *)&this->OnLoginStatusChangedDelegates[1].field_0x10);
  pvVar1 = *(void **)&this->OnLoginStatusChangedDelegates[1].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnLoginStatusChangedDelegates + 1));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnLoginStatusChangedDelegates[0].field_0x8,
             *(int *)&this->OnLoginStatusChangedDelegates[0].field_0x10);
  pvVar1 = *(void **)&this->OnLoginStatusChangedDelegates[0].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this->OnLoginStatusChangedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLoginChangedDelegates).field_0x8,
             *(int *)&(this->OnLoginChangedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnLoginChangedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoginChangedDelegates);
  return;
}

// AddOnAuthAboutToExpireDelegate_Handle @ 14ed1a5b0

FDelegateHandle __thiscall
IOnlineIdentity::AddOnAuthAboutToExpireDelegate_Handle
          (IOnlineIdentity *this,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &this->OnAuthAboutToExpireDelegates,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnControllerPairingChangedDelegate_Handle @ 14ed1a700

FDelegateHandle __thiscall
IOnlineIdentity::AddOnControllerPairingChangedDelegate_Handle
          (IOnlineIdentity *this,
          TDelegate<void___cdecl(int,FControllerPairingChangedUserInfo,FControllerPairingChangedUserInfo),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(int,FControllerPairingChangedUserInfo,FControllerPairingChangedUserInfo),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(int,FControllerPairingChangedUserInfo,FControllerPairingChangedUserInfo),FDefaultDelegateUserPolicy>
         *)&this->OnControllerPairingChangedDelegates,
        (TDelegate<void___cdecl(int,FControllerPairingChangedUserInfo,FControllerPairingChangedUserInfo),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnLoginChangedDelegate_Handle @ 14ed1ac20

FDelegateHandle __thiscall
IOnlineIdentity::AddOnLoginChangedDelegate_Handle
          (IOnlineIdentity *this,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &this->OnLoginChangedDelegates,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnLoginCompleteDelegate_Handle @ 14ed1ac90

FDelegateHandle __thiscall
IOnlineIdentity::AddOnLoginCompleteDelegate_Handle
          (IOnlineIdentity *this,int param_1,
          TDelegate<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  FDelegateHandle FVar1;
  undefined4 in_register_00000014;
  undefined8 *puVar2;
  TDelegate<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  local_res10;
  
  puVar2 = (undefined8 *)CONCAT44(in_register_00000014,param_1);
  *puVar2 = 0;
  if ((uint)param_2 < 4) {
    FVar1 = TMulticastDelegateRegistration<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
            ::Add((TMulticastDelegateRegistration<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                   *)(this->OnLoginCompleteDelegates + (int)(uint)param_2),&local_res10);
    *puVar2 = *(undefined8 *)FVar1.ID;
  }
  return (FDelegateHandle)(ulong64)puVar2;
}

// AddOnLoginFlowLogoutDelegate_Handle @ 14ed1ace0

FDelegateHandle __thiscall
IOnlineIdentity::AddOnLoginFlowLogoutDelegate_Handle
          (IOnlineIdentity *this,
          TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnLoginFlowLogoutDelegates,
        (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnLoginStatusChangedDelegate_Handle @ 14ed1adc0

FDelegateHandle __thiscall
IOnlineIdentity::AddOnLoginStatusChangedDelegate_Handle
          (IOnlineIdentity *this,int param_1,
          TDelegate<void___cdecl(int,ELoginStatus::Type,ELoginStatus::Type,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  FDelegateHandle FVar1;
  undefined4 in_register_00000014;
  undefined8 *puVar2;
  TDelegate<void___cdecl(int,ELoginStatus::Type,ELoginStatus::Type,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
  local_res10;
  
  puVar2 = (undefined8 *)CONCAT44(in_register_00000014,param_1);
  *puVar2 = 0;
  if ((uint)param_2 < 4) {
    FVar1 = TMulticastDelegateRegistration<void___cdecl(int,enum_ELoginStatus::Type,enum_ELoginStatus::Type,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
            ::Add(this->OnLoginStatusChangedDelegates + (int)(uint)param_2,&local_res10);
    *puVar2 = *(undefined8 *)FVar1.ID;
  }
  return (FDelegateHandle)(ulong64)puVar2;
}

// AddOnLogoutCompleteDelegate_Handle @ 14ed1ae10

FDelegateHandle __thiscall
IOnlineIdentity::AddOnLogoutCompleteDelegate_Handle
          (IOnlineIdentity *this,int param_1,
          TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> *param_2)

{
  FDelegateHandle FVar1;
  undefined4 in_register_00000014;
  undefined8 *puVar2;
  TDelegate<void___cdecl(int,bool),FDefaultDelegateUserPolicy> local_res10;
  
  puVar2 = (undefined8 *)CONCAT44(in_register_00000014,param_1);
  *puVar2 = 0;
  if ((uint)param_2 < 4) {
    FVar1 = TMulticastDelegateRegistration<void___cdecl(int,bool),FDefaultDelegateUserPolicy>::Add
                      ((TMulticastDelegateRegistration<void___cdecl(int,bool),FDefaultDelegateUserPolicy>
                        *)(this->OnLogoutCompleteDelegates + (int)(uint)param_2),&local_res10);
    *puVar2 = *(undefined8 *)FVar1.ID;
  }
  return (FDelegateHandle)(ulong64)puVar2;
}

// ClearCachedAuthToken @ 14ed1de10

void __thiscall IOnlineIdentity::ClearCachedAuthToken(IOnlineIdentity *this,FUniqueNetId *param_1)

{
  return;
}

// ClearOnAuthAboutToExpireDelegate_Handle @ 14ed1de60

void __thiscall
IOnlineIdentity::ClearOnAuthAboutToExpireDelegate_Handle
          (IOnlineIdentity *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnAuthAboutToExpireDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnAuthAboutToExpireDelegates @ 14ed1de90

void __thiscall
IOnlineIdentity::ClearOnAuthAboutToExpireDelegates(IOnlineIdentity *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnAuthAboutToExpireDelegates,param_1);
  return;
}

// ClearOnControllerPairingChangedDelegate_Handle @ 14ed1df50

void __thiscall
IOnlineIdentity::ClearOnControllerPairingChangedDelegate_Handle
          (IOnlineIdentity *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnControllerPairingChangedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnControllerPairingChangedDelegates @ 14ed1df80

void __thiscall
IOnlineIdentity::ClearOnControllerPairingChangedDelegates(IOnlineIdentity *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnControllerPairingChangedDelegates,param_1);
  return;
}

// ClearOnLoginChangedDelegate_Handle @ 14ed1e2d0

void __thiscall
IOnlineIdentity::ClearOnLoginChangedDelegate_Handle(IOnlineIdentity *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnLoginChangedDelegates,
               (FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnLoginChangedDelegates @ 14ed1e300

void __thiscall IOnlineIdentity::ClearOnLoginChangedDelegates(IOnlineIdentity *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnLoginChangedDelegates,
             param_1);
  return;
}

// ClearOnLoginCompleteDelegate_Handle @ 14ed1e310

void __thiscall
IOnlineIdentity::ClearOnLoginCompleteDelegate_Handle
          (IOnlineIdentity *this,int param_1,FDelegateHandle *param_2)

{
  if ((uint)param_1 < 4) {
    if (param_2->ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 (this->OnLoginCompleteDelegates + param_1),(FDelegateHandle)param_2->ID);
    }
    param_2->ID = 0;
  }
  return;
}

// ClearOnLoginCompleteDelegates @ 14ed1e350

void __thiscall
IOnlineIdentity::ClearOnLoginCompleteDelegates(IOnlineIdentity *this,int param_1,void *param_2)

{
  if ((uint)param_1 < 4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (this->OnLoginCompleteDelegates + param_1),param_2);
    return;
  }
  return;
}

// ClearOnLoginFlowLogoutDelegate_Handle @ 14ed1e380

void __thiscall
IOnlineIdentity::ClearOnLoginFlowLogoutDelegate_Handle
          (IOnlineIdentity *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnLoginFlowLogoutDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnLoginFlowLogoutDelegates @ 14ed1e3b0

void __thiscall
IOnlineIdentity::ClearOnLoginFlowLogoutDelegates(IOnlineIdentity *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnLoginFlowLogoutDelegates
             ,param_1);
  return;
}

// ClearOnLoginStatusChangedDelegate_Handle @ 14ed1e410

void __thiscall
IOnlineIdentity::ClearOnLoginStatusChangedDelegate_Handle
          (IOnlineIdentity *this,int param_1,FDelegateHandle *param_2)

{
  if ((uint)param_1 < 4) {
    if (param_2->ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 (this->OnLoginStatusChangedDelegates + param_1),(FDelegateHandle)param_2->ID);
    }
    param_2->ID = 0;
  }
  return;
}

// ClearOnLoginStatusChangedDelegates @ 14ed1e450

void __thiscall
IOnlineIdentity::ClearOnLoginStatusChangedDelegates(IOnlineIdentity *this,int param_1,void *param_2)

{
  if ((uint)param_1 < 4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (this->OnLoginStatusChangedDelegates + param_1),param_2);
    return;
  }
  return;
}

// ClearOnLogoutCompleteDelegate_Handle @ 14ed1e480

void __thiscall
IOnlineIdentity::ClearOnLogoutCompleteDelegate_Handle
          (IOnlineIdentity *this,int param_1,FDelegateHandle *param_2)

{
  if ((uint)param_1 < 4) {
    if (param_2->ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 (this->OnLogoutCompleteDelegates + param_1),(FDelegateHandle)param_2->ID);
    }
    param_2->ID = 0;
  }
  return;
}

// ClearOnLogoutCompleteDelegates @ 14ed1e4c0

void __thiscall
IOnlineIdentity::ClearOnLogoutCompleteDelegates(IOnlineIdentity *this,int param_1,void *param_2)

{
  if ((uint)param_1 < 4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (this->OnLogoutCompleteDelegates + param_1),param_2);
    return;
  }
  return;
}

// GetLinkedAccountAuthToken @ 14ed255a0

void __thiscall
IOnlineIdentity::GetLinkedAccountAuthToken
          (IOnlineIdentity *this,int param_1,FString *param_2,
          TDelegate<void___cdecl(int,bool,FExternalAuthToken_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  longlong *plVar1;
  FReadAccessScope local_48;
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_48);
  if ((*(int *)&param_3->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,0,&local_30);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// GetSponsorUniquePlayerId @ 14ed265a0

TSharedPtr<FUniqueNetId_const_,1> * __thiscall
IOnlineIdentity::GetSponsorUniquePlayerId
          (IOnlineIdentity *this,TSharedPtr<FUniqueNetId_const_,1> *__return_storage_ptr__,
          int param_1)

{
  __return_storage_ptr__->Object = (FUniqueNetId *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// TriggerOnAuthAboutToExpireDelegates @ 14ed303d0

void __thiscall
IOnlineIdentity::TriggerOnAuthAboutToExpireDelegates(IOnlineIdentity *this,int param_1)

{
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnAuthAboutToExpireDelegates,param_1);
  return;
}

// TriggerOnControllerPairingChangedDelegates @ 14ed30430

void __thiscall
IOnlineIdentity::TriggerOnControllerPairingChangedDelegates
          (IOnlineIdentity *this,int param_1,FControllerPairingChangedUserInfo *param_2,
          FControllerPairingChangedUserInfo *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  FUniqueNetId *pFVar5;
  undefined8 uVar6;
  FUniqueNetId *pFVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FUniqueNetId *local_78;
  undefined8 uStack_70;
  FUniqueNetId *local_68;
  undefined8 uStack_60;
  FDestructionSentinel local_58 [2];
  
  pFVar5 = param_3->User;
  uVar6 = *(undefined8 *)&param_3->ControllersRemaining;
  pFVar7 = param_2->User;
  uVar8 = *(undefined8 *)&param_2->ControllersRemaining;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnControllerPairingChangedDelegates,(FWriteAccessScope *)local_58);
  puVar1 = &(this->OnControllerPairingChangedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar9 = false;
  uVar13 = *(int *)&(this->OnControllerPairingChangedDelegates).field_0x10 - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 << 4;
    bVar9 = false;
    do {
      uVar12 = 0;
      if ((int)uVar13 < *(int *)&(this->OnControllerPairingChangedDelegates).field_0x10) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnControllerPairingChangedDelegates).field_0x8;
      if (((*(int *)(lVar14 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar14 + lVar2), plVar3 == (longlong *)0x0)) ||
         (local_78 = pFVar5, uStack_70 = uVar6, local_68 = pFVar7, uStack_60 = uVar8,
         cVar11 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,&local_68,&local_78), cVar11 == '\0')
         ) {
        bVar9 = true;
      }
      lVar14 = lVar14 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  puVar1 = &(this->OnControllerPairingChangedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar9) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnControllerPairingChangedDelegates,false);
  }
  if (local_58[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58[0].Accessor,local_58);
  }
  return;
}

// TriggerOnLoginChangedDelegates @ 14ed30a40

void __thiscall IOnlineIdentity::TriggerOnLoginChangedDelegates(IOnlineIdentity *this,int param_1)

{
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnLoginChangedDelegates,param_1);
  return;
}

// TriggerOnLoginCompleteDelegates @ 14ed30a50

void __thiscall
IOnlineIdentity::TriggerOnLoginCompleteDelegates
          (IOnlineIdentity *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  if ((uint)param_1 < 4) {
    TMulticastDelegate<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(this->OnLoginCompleteDelegates + param_1,param_1,param_2,param_3,param_4);
    return;
  }
  return;
}

// TriggerOnLoginFlowLogoutDelegates @ 14ed30a80

void __thiscall
IOnlineIdentity::TriggerOnLoginFlowLogoutDelegates
          (IOnlineIdentity *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnLoginFlowLogoutDelegates,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnLoginFlowLogoutDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnLoginFlowLogoutDelegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnLoginFlowLogoutDelegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnLoginFlowLogoutDelegates).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnLoginFlowLogoutDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnLoginFlowLogoutDelegates,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// TriggerOnLoginStatusChangedDelegates @ 14ed30bc0

void __thiscall
IOnlineIdentity::TriggerOnLoginStatusChangedDelegates
          (IOnlineIdentity *this,int param_1,Type param_2,Type param_3,FUniqueNetId *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_48;
  
  if ((uint)param_1 < 4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               (this->OnLoginStatusChangedDelegates + param_1),(FWriteAccessScope *)&local_48);
    puVar1 = &this->OnLoginStatusChangedDelegates[param_1].field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&this->OnLoginStatusChangedDelegates[param_1].field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&this->OnLoginStatusChangedDelegates[param_1].field_0x10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&this->OnLoginStatusChangedDelegates[param_1].field_0x8;
        if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2,param_3,param_4),
           cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &this->OnLoginStatusChangedDelegates[param_1].field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 (this->OnLoginStatusChangedDelegates + param_1),false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// TriggerOnLogoutCompleteDelegates @ 14ed30d20

void __thiscall
IOnlineIdentity::TriggerOnLogoutCompleteDelegates(IOnlineIdentity *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FDestructionSentinel local_38;
  
  if ((uint)param_1 < 4) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (this->OnLogoutCompleteDelegates + param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_38);
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
    bVar4 = false;
    uVar8 = (this_00->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      bVar4 = false;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
            (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

