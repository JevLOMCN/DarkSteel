// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 9

// ~IOnlineLeaderboards @ 14ed13530

void __thiscall IOnlineLeaderboards::~IOnlineLeaderboards(IOnlineLeaderboards *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlineLeaderboards__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLeaderboardFlushCompleteDelegates).field_0x8,
             *(int *)&(this->OnLeaderboardFlushCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnLeaderboardFlushCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLeaderboardFlushCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLeaderboardReadCompleteDelegates).field_0x8,
             *(int *)&(this->OnLeaderboardReadCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnLeaderboardReadCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLeaderboardReadCompleteDelegates);
  return;
}

// AddOnLeaderboardFlushCompleteDelegate_Handle @ 14ed1ab40

FDelegateHandle __thiscall
IOnlineLeaderboards::AddOnLeaderboardFlushCompleteDelegate_Handle
          (IOnlineLeaderboards *this,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
             &this->OnLeaderboardFlushCompleteDelegates,
             (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)local_res8);
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

// AddOnLeaderboardReadCompleteDelegate_Handle @ 14ed1abb0

FDelegateHandle __thiscall
IOnlineLeaderboards::AddOnLeaderboardReadCompleteDelegate_Handle
          (IOnlineLeaderboards *this,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &this->OnLeaderboardReadCompleteDelegates,
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

// ClearOnLeaderboardFlushCompleteDelegate_Handle @ 14ed1e250

void __thiscall
IOnlineLeaderboards::ClearOnLeaderboardFlushCompleteDelegate_Handle
          (IOnlineLeaderboards *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnLeaderboardFlushCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnLeaderboardFlushCompleteDelegates @ 14ed1e280

void __thiscall
IOnlineLeaderboards::ClearOnLeaderboardFlushCompleteDelegates
          (IOnlineLeaderboards *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnLeaderboardFlushCompleteDelegates,param_1);
  return;
}

// ClearOnLeaderboardReadCompleteDelegate_Handle @ 14ed1e290

void __thiscall
IOnlineLeaderboards::ClearOnLeaderboardReadCompleteDelegate_Handle
          (IOnlineLeaderboards *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnLeaderboardReadCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnLeaderboardReadCompleteDelegates @ 14ed1e2c0

void __thiscall
IOnlineLeaderboards::ClearOnLeaderboardReadCompleteDelegates
          (IOnlineLeaderboards *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnLeaderboardReadCompleteDelegates,param_1);
  return;
}

// TriggerOnLeaderboardFlushCompleteDelegates @ 14ed30a10

void __thiscall
IOnlineLeaderboards::TriggerOnLeaderboardFlushCompleteDelegates
          (IOnlineLeaderboards *this,FName *param_1,bool param_2)

{
  TMulticastDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnLeaderboardFlushCompleteDelegates,*param_1,param_2);
  return;
}

// TriggerOnLeaderboardReadCompleteDelegates @ 14ed30a30

void __thiscall
IOnlineLeaderboards::TriggerOnLeaderboardReadCompleteDelegates
          (IOnlineLeaderboards *this,bool param_1)

{
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnLeaderboardReadCompleteDelegates,param_1);
  return;
}

