// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 4

// FConnectivityCommon @ 14ee0cbd0

FConnectivityCommon * __thiscall
UE::Online::FConnectivityCommon::FConnectivityCommon
          (FConnectivityCommon *this,FOnlineServicesCommon *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FConnectivityCommon *pFVar6;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Connectivity");
  *(FOnlineServicesCommon **)&this->field_0x10 = param_1;
  *(undefined ***)this =
       &TOnlineComponent<UE::Online::IConnectivity>::_vftable__for__UE__Online__IConnectivity__;
  *(undefined ***)&this->field_0x8 =
       &TOnlineComponent<UE::Online::IConnectivity>::_vftable__for__UE__Online__IOnlineComponent__;
  pTVar4 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_28);
  pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    *(FConnectivityCommon **)&this->field_0x18 = this;
    *(undefined8 *)&this->field_0x20 = 0;
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    *(FConnectivityCommon **)&this->field_0x18 = this;
    *(TReferenceControllerBase<1> **)&this->field_0x20 = pTVar5;
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  puVar1 = &this->field_0x28;
  *(undefined8 *)puVar1 = 0;
  *(int *)&this->field_0x30 = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    *(undefined4 *)&this->field_0x34 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)puVar1,local_38.Data.ArrayNum,
               (int *)&this->field_0x34);
    memcpy(*(void **)puVar1,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x64 = 0x80;
  *(undefined4 *)&this->field_0x68 = 0xffffffff;
  *(undefined4 *)&this->field_0x6c = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined4 *)&this->field_0x80 = 0;
  FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial
            ((FOnlineAsyncOpQueueSerial *)&this->field_0x90,&param_1->ParallelQueue);
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(undefined4 *)&this->field_0x138 = 0;
  *(undefined4 *)&this->field_0x13c = 0x80;
  *(undefined4 *)&this->field_0x140 = 0xffffffff;
  *(undefined4 *)&this->field_0x144 = 0;
  *(undefined8 *)&this->field_0x150 = 0;
  *(undefined4 *)&this->field_0x158 = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->ConnectionStatus = NotConnected;
  *(undefined ***)this = &_vftable__for__UE__Online__IConnectivity__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__UE__Online__IOnlineComponent__;
  pTVar5 = ::operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnConnectionStatusChangedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FConnectionStatusChanged_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnConnectionStatusChangedEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFConnectionStatusChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnConnectionStatusChangedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FConnectionStatusChanged_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar5 + 1);
    (this->OnConnectionStatusChangedEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         pTVar5;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FConnectionStatusChanged_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar5 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FConnectionStatusChanged_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FConnectivityCommon *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  return this;
}

// GetConnectionStatus @ 14eedc120

TOnlineResult<UE::Online::FGetConnectionStatus> * __thiscall
UE::Online::FConnectivityCommon::GetConnectionStatus
          (FConnectivityCommon *this,
          TOnlineResult<UE::Online::FGetConnectionStatus> *__return_storage_ptr__,Params *param_1)

{
  __return_storage_ptr__->field_0x8 = this->ConnectionStatus;
  __return_storage_ptr__->field_0x30 = 0;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetConnectionStatus_Online_UE___Online_UE__6B_;
  return __return_storage_ptr__;
}

// OnConnectionStatusChanged @ 14eef2ce0

TOnlineEvent<void___cdecl(UE::Online::FConnectionStatusChanged_const_&)> __thiscall
UE::Online::FConnectivityCommon::OnConnectionStatusChanged(FConnectivityCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FConnectionStatusChanged_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FConnectionStatusChanged_const_&),FDefaultDelegateUserPolicy>
        *)&this->OnConnectionStatusChangedEvent;
  return (TOnlineEvent<void___cdecl(UE::Online::FConnectionStatusChanged_const_&)>)in_RDX;
}

// RegisterCommands @ 14eefa510

void __thiscall UE::Online::FConnectivityCommon::RegisterCommands(FConnectivityCommon *this)

{
  TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FConnectivityCommon,UE::Online::TOnlineResult<UE::Online::FGetConnectionStatus>_(__cdecl_UE::Online::FConnectivityCommon::*)(UE::Online::FGetConnectionStatus::Params_&&)>_*_&>
  local_res8;
  undefined8 *local_res18 [2];
  TOnlineInterfaceOperationExecHandler<UE::Online::FConnectivityCommon,UE::Online::TOnlineResult<UE::Online::FGetConnectionStatus>_(__cdecl_UE::Online::FConnectivityCommon::*)(UE::Online::FGetConnectionStatus::Params_&&)>
  ***local_18;
  undefined8 **ppuStack_10;
  
  local_18 = (TOnlineInterfaceOperationExecHandler<UE::Online::FConnectivityCommon,UE::Online::TOnlineResult<UE::Online::FGetConnectionStatus>_(__cdecl_UE::Online::FConnectivityCommon::*)(UE::Online::FGetConnectionStatus::Params_&&)>
              ***)_vcall__0__flat______;
  ppuStack_10 = (undefined8 **)((ulonglong)ppuStack_10 & 0xffffffff00000000);
  local_res18[0] = ::operator_new(0x20);
  if (local_res18[0] != (undefined8 *)0x0) {
    *local_res18[0] =
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFConnectivityCommon_Online_UE__P8123_EAA_AV__TOnlineResult_UFGetConnectionStatus_Online_UE___23___QEAUParams_FGetConnectionStatus_23__Z_Online_UE__6B_
    ;
    local_res18[0][2] = local_18;
    local_res18[0][3] = ppuStack_10;
    local_res18[0][1] = this;
  }
  local_res8.Value =
       (TOnlineInterfaceOperationExecHandler<UE::Online::FConnectivityCommon,UE::Online::TOnlineResult<UE::Online::FGetConnectionStatus>_(__cdecl_UE::Online::FConnectivityCommon::*)(UE::Online::FGetConnectionStatus::Params_&&)>
        **)0x15309d868;
  local_18 = &local_res8.Value;
  ppuStack_10 = local_res18;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FConnectivityCommon,UE::Online::TOnlineResult<UE::Online::FGetConnectionStatus>_(__cdecl_UE::Online::FConnectivityCommon::*)(UE::Online::FGetConnectionStatus::Params_&&)>_*_&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&this->field_0x38,&local_res8,(bool *)&local_18);
  return;
}

