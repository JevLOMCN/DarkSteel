// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 5

// ~IOnlineStoreV2 @ 14ed13ad0

void __thiscall IOnlineStoreV2::~IOnlineStoreV2(IOnlineStoreV2 *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlineStoreV2__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnQueryForAvailablePurchasesCompleteDelegates).field_0x8,
             *(int *)&(this->OnQueryForAvailablePurchasesCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnQueryForAvailablePurchasesCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueryForAvailablePurchasesCompleteDelegates);
  return;
}

// AddOnQueryForAvailablePurchasesCompleteDelegate_Handle @ 14ed1afb0

FDelegateHandle __thiscall
IOnlineStoreV2::AddOnQueryForAvailablePurchasesCompleteDelegate_Handle
          (IOnlineStoreV2 *this,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &this->OnQueryForAvailablePurchasesCompleteDelegates,
             (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_res8);
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

// ClearOnQueryForAvailablePurchasesCompleteDelegate_Handle @ 14ed1e5e0

void __thiscall
IOnlineStoreV2::ClearOnQueryForAvailablePurchasesCompleteDelegate_Handle
          (IOnlineStoreV2 *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnQueryForAvailablePurchasesCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnQueryForAvailablePurchasesCompleteDelegates @ 14ed1e610

void __thiscall
IOnlineStoreV2::ClearOnQueryForAvailablePurchasesCompleteDelegates
          (IOnlineStoreV2 *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnQueryForAvailablePurchasesCompleteDelegates,param_1);
  return;
}

// TriggerOnQueryForAvailablePurchasesCompleteDelegates @ 14ed30fc0

void __thiscall
IOnlineStoreV2::TriggerOnQueryForAvailablePurchasesCompleteDelegates
          (IOnlineStoreV2 *this,bool param_1)

{
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnQueryForAvailablePurchasesCompleteDelegates,param_1);
  return;
}

