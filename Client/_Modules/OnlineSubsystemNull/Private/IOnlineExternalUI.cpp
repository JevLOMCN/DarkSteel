// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 17

// ~IOnlineExternalUI @ 14ed13190

void __thiscall IOnlineExternalUI::~IOnlineExternalUI(IOnlineExternalUI *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlineExternalUI__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCreateAccountFlowUIRequiredDelegates).field_0x8,
             *(int *)&(this->OnCreateAccountFlowUIRequiredDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnCreateAccountFlowUIRequiredDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCreateAccountFlowUIRequiredDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLoginFlowUIRequiredDelegates).field_0x8,
             *(int *)&(this->OnLoginFlowUIRequiredDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnLoginFlowUIRequiredDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoginFlowUIRequiredDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnExternalUIChangeDelegates).field_0x8,
             *(int *)&(this->OnExternalUIChangeDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnExternalUIChangeDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExternalUIChangeDelegates);
  return;
}

// AddOnCreateAccountFlowUIRequiredDelegate_Handle @ 14ed1a770

FDelegateHandle __thiscall
IOnlineExternalUI::AddOnCreateAccountFlowUIRequiredDelegate_Handle
          (IOnlineExternalUI *this,
          TDelegate<void___cdecl(FString_const_&,TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy>_const_&,bool_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy>_const_&,bool_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy>_const_&,bool_&),FDefaultDelegateUserPolicy>
         *)&this->OnCreateAccountFlowUIRequiredDelegates,
        (TDelegate<void___cdecl(FString_const_&,TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy>_const_&,bool_&),FDefaultDelegateUserPolicy>
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

// AddOnExternalUIChangeDelegate_Handle @ 14ed1a9a0

FDelegateHandle __thiscall
IOnlineExternalUI::AddOnExternalUIChangeDelegate_Handle
          (IOnlineExternalUI *this,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1
          )

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &this->OnExternalUIChangeDelegates,
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

// AddOnLoginFlowUIRequiredDelegate_Handle @ 14ed1ad50

FDelegateHandle __thiscall
IOnlineExternalUI::AddOnLoginFlowUIRequiredDelegate_Handle
          (IOnlineExternalUI *this,
          TDelegate<void___cdecl(FString_const_&,TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy>_const_&,bool_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FString_const_&,TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy>_const_&,bool_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy>_const_&,bool_&),FDefaultDelegateUserPolicy>
         *)&this->OnLoginFlowUIRequiredDelegates,
        (TDelegate<void___cdecl(FString_const_&,TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy>_const_&,bool_&),FDefaultDelegateUserPolicy>
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

// ClearOnCreateAccountFlowUIRequiredDelegate_Handle @ 14ed1dfa0

void __thiscall
IOnlineExternalUI::ClearOnCreateAccountFlowUIRequiredDelegate_Handle
          (IOnlineExternalUI *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnCreateAccountFlowUIRequiredDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnCreateAccountFlowUIRequiredDelegates @ 14ed1dfd0

void __thiscall
IOnlineExternalUI::ClearOnCreateAccountFlowUIRequiredDelegates
          (IOnlineExternalUI *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnCreateAccountFlowUIRequiredDelegates,param_1);
  return;
}

// ClearOnExternalUIChangeDelegate_Handle @ 14ed1e100

void __thiscall
IOnlineExternalUI::ClearOnExternalUIChangeDelegate_Handle
          (IOnlineExternalUI *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnExternalUIChangeDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnExternalUIChangeDelegates @ 14ed1e130

void __thiscall
IOnlineExternalUI::ClearOnExternalUIChangeDelegates(IOnlineExternalUI *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnExternalUIChangeDelegates,param_1);
  return;
}

// ClearOnLoginFlowUIRequiredDelegate_Handle @ 14ed1e3d0

void __thiscall
IOnlineExternalUI::ClearOnLoginFlowUIRequiredDelegate_Handle
          (IOnlineExternalUI *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnLoginFlowUIRequiredDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnLoginFlowUIRequiredDelegates @ 14ed1e400

void __thiscall
IOnlineExternalUI::ClearOnLoginFlowUIRequiredDelegates(IOnlineExternalUI *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnLoginFlowUIRequiredDelegates,param_1);
  return;
}

// ReportEnterInGameStoreUI @ 14ed2e4b0

void __thiscall IOnlineExternalUI::ReportEnterInGameStoreUI(IOnlineExternalUI *this)

{
  return;
}

// ReportExitInGameStoreUI @ 14ed2e4c0

void __thiscall IOnlineExternalUI::ReportExitInGameStoreUI(IOnlineExternalUI *this)

{
  return;
}

// ShowPlatformMessageBox @ 14ed2f080

bool __thiscall
IOnlineExternalUI::ShowPlatformMessageBox
          (IOnlineExternalUI *this,FUniqueNetId *param_1,EPlatformMessageType param_2)

{
  return false;
}

// ShowSendMessageToUserUI @ 14ed2f0a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IOnlineExternalUI::ShowSendMessageToUserUI
          (IOnlineExternalUI *this,int param_1,FUniqueNetId *param_2,FShowSendMessageParams *param_3
          ,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_4)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (2 < (byte)LogOnlineExternalUI._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_virtual_bool___cdecl_IOnlineExternalUI::ShowSendMessageToUserUI(int,FUniqueNetId_const&___ptr64,FShowSendMessageParams_const&___ptr64,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_28);
  if ((*(int *)&param_4->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_4->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// TriggerOnCreateAccountFlowUIRequiredDelegates @ 14ed305b0

void __thiscall
IOnlineExternalUI::TriggerOnCreateAccountFlowUIRequiredDelegates
          (IOnlineExternalUI *this,FString *param_1,
          TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy> *param_3,
          bool *param_4)

{
  TMulticastDelegate<void___cdecl(FString_const_&,TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy>_const_&,bool_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnCreateAccountFlowUIRequiredDelegates,param_1,param_2,param_3,param_4);
  return;
}

// TriggerOnExternalUIChangeDelegates @ 14ed30740

void __thiscall
IOnlineExternalUI::TriggerOnExternalUIChangeDelegates(IOnlineExternalUI *this,bool param_1)

{
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnExternalUIChangeDelegates,param_1);
  return;
}

// TriggerOnLoginFlowUIRequiredDelegates @ 14ed30bb0

void __thiscall
IOnlineExternalUI::TriggerOnLoginFlowUIRequiredDelegates
          (IOnlineExternalUI *this,FString *param_1,
          TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy> *param_3,
          bool *param_4)

{
  TMulticastDelegate<void___cdecl(FString_const_&,TDelegate<FLoginFlowResult___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_const_&,TDelegate<void___cdecl(FLoginFlowResult_const_&),FDefaultDelegateUserPolicy>_const_&,bool_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnLoginFlowUIRequiredDelegates,param_1,param_2,param_3,param_4);
  return;
}

