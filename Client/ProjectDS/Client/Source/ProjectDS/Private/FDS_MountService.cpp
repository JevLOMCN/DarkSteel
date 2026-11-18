// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// DisMountResponseProcessError @ 14bbf0260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
FDS_MountService::DisMountResponseProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  FDS_EntityBase *pFVar1;
  UDS_LogManager *pUVar2;
  DisMountResponseDefaultTypeInternal *pDVar3;
  bool bVar4;
  undefined1 auStackY_188 [32];
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&param_2[1].field_0xc == 0x250) {
    pDVar3 = *(DisMountResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pDVar3 = &server_msg::_DisMountResponse_default_instance_;
  }
  local_148[0] = (pDVar3->_instance)._impl_.entity_;
  pFVar1 = FDS_EntityBase::GetEntityBase(local_148);
  if (pFVar1 == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_MountService::DisMountResponseProcessError",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x83,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar4 = false;
  }
  else {
    bVar4 = pFVar1->EntityType != MainCharacter;
  }
  return bVar4;
}

// MountResponseProcessError @ 14bbfa420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
FDS_MountService::MountResponseProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  FDS_EntityBase *pFVar1;
  UDS_LogManager *pUVar2;
  MountResponseDefaultTypeInternal *pMVar3;
  bool bVar4;
  undefined1 auStackY_188 [32];
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&param_2[1].field_0xc == 0x24f) {
    pMVar3 = *(MountResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pMVar3 = &server_msg::_MountResponse_default_instance_;
  }
  local_148[0] = (pMVar3->_instance)._impl_.entity_id_;
  pFVar1 = FDS_EntityBase::GetEntityBase(local_148);
  if (pFVar1 == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_MountService::MountResponseProcessError",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x54,L"sourceEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar4 = false;
  }
  else {
    bVar4 = pFVar1->EntityType != MainCharacter;
  }
  return bVar4;
}

// OnCancelEquip @ 14bbfa530

void __cdecl
FDS_MountService::OnCancelEquip(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_M_CommonPopup *this;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res8);
    UDS_M_CommonPopup::CloseCommonPopup(this);
  }
  return;
}

// OnConfirmEquip @ 14bbfac50

void __cdecl
FDS_MountService::OnConfirmEquip
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,ulong64 param_2,long64 param_3,
          int param_4,int param_5)

{
  bool bVar1;
  UDS_M_CommonPopup *this;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_18 [2];
  
  local_res8 = param_1.WeakPtr;
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_18);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      this = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res8);
      UDS_M_CommonPopup::CloseCommonPopup(this);
    }
    pUVar2 = FWeakObjectPtr::Get(local_18);
    RequestMountItemEquip(param_2,param_3,param_4,param_5,*(int *)&pUVar2[9].field_0x10);
  }
  return;
}

// OnOpenMountRegisterPopUp @ 14bbfb100

void __cdecl
FDS_MountService::OnOpenMountRegisterPopUp
          (UDS_UserWidget *param_1,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2,
          ulong64 param_3,int param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this;
  UObject *pUVar5;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_40;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    local_res10 = param_2.WeakPtr;
    pFVar3 = ::operator_new(0x38);
    pFVar7 = (FDS_ViewModelContext *)0x0;
    pFVar6 = pFVar7;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_MountGetPopup__6B_;
      pFVar3[1]._padding_ = -1;
      *(undefined8 *)&pFVar3[1].DerivedStaticStruct = 0;
      pFVar3[1].ViewModelName.ComparisonIndex = 0xffffffff;
      pFVar3[1].ViewModelName.Number = 0xffffffff;
      pFVar6 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MountGetPopup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
      pFVar7 = pFVar3;
    }
    if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_MountGetPopup::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
    this = UDS_ViewModelContextManager::GetInst();
    if (this != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_50.Object = pFVar6;
      local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      UDS_ViewModelContextManager::RegisterContext(this,&local_50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.SharedReferenceCount.ReferenceController);
    }
    pFVar6->ViewModelTemplateKey = W_Mount_Get_Popup;
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    *(undefined4 *)&pFVar6[1]._padding_ = *(undefined4 *)&pUVar5[0x16].field_0x8;
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = *(undefined4 *)&pUVar5[8].field_0x10;
    *(ulong64 *)&pFVar6[1].DerivedStaticStruct = param_3;
    pFVar6[1].ViewModelName.ComparisonIndex.Value = param_4;
    pFVar6[1].ViewModelName.Number = param_5;
    if (pFVar7 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar7->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_40.Object = pFVar6;
    local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_58 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_58);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_40,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
  }
  return;
}

// ProcessError @ 14bc02570

bool __cdecl FDS_MountService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveDisMountResponse @ 14bc03d20

void __cdecl FDS_MountService::ReceiveDisMountResponse(ServerMessages *param_1)

{
  Message *pMVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x250) {
    pMVar1 = (param_1->_impl_).ServerMessage_.errorcoderes_;
    UDS_MountAbility_DisMount::TryActivate(*(ulong64 *)&pMVar1[1].field_0x8,*(bool *)(pMVar1 + 2));
    return;
  }
  UDS_MountAbility_DisMount::TryActivate
            (server_msg::_DisMountResponse_default_instance_._instance._impl_.entity_,
             server_msg::_DisMountResponse_default_instance_._instance._impl_.is_despawn_);
  return;
}

// ReceiveMountChangeCompanion @ 14bc04e80

void __cdecl FDS_MountService::ReceiveMountChangeCompanion(ServerMessagesTwoway *param_1)

{
  bool bVar1;
  MountChangeCompanionResponseDefaultTypeInternal *pMVar2;
  UDS_MountEvent *pUVar3;
  long64 lVar4;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5655) {
    pMVar2 = (MountChangeCompanionResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pMVar2 = &server_msg_twoway::_MountChangeCompanionResponse_default_instance_;
  }
  lVar4 = 0x55766;
  if (*(longlong *)&((Message *)((longlong)pMVar2 + 0x10))->field_0x8 != 0) {
    lVar4 = 0x5577a;
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(lVar4,Complete_None_01,&local_28);
  pUVar3 = UDS_MountEvent::GetEvent();
  if (pUVar3 != (UDS_MountEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->UpdateMountListDel);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->UpdateMountListDel).Delegate);
    }
  }
  return;
}

// ReceiveMountChangeNickName @ 14bc04f10

void __cdecl FDS_MountService::ReceiveMountChangeNickName(ServerMessagesTwoway *param_1)

{
  bool bVar1;
  UDS_MountEvent *pUVar2;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x55779,Alert_None_01,&local_28);
  pUVar2 = UDS_MountEvent::GetEvent();
  if (pUVar2 != (UDS_MountEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->UpdateMountListDel);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->UpdateMountListDel).Delegate);
    }
  }
  return;
}

// ReceiveMountDelete @ 14bc04f80

void __cdecl FDS_MountService::ReceiveMountDelete(ServerMessagesTwoway *param_1)

{
  bool bVar1;
  UDS_MountEvent *pUVar2;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x5577b,Complete_None_01,&local_28);
  pUVar2 = UDS_MountEvent::GetEvent();
  if (pUVar2 != (UDS_MountEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->UpdateMountListDel);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->UpdateMountListDel).Delegate);
    }
  }
  return;
}

// ReceiveMountItemEquip @ 14bc04ff0

void __cdecl FDS_MountService::ReceiveMountItemEquip(ServerMessagesTwoway *param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x5577c,Complete_None_01,&local_28);
  return;
}

// ReceiveMountListSlotExtend @ 14bc05030

void __cdecl FDS_MountService::ReceiveMountListSlotExtend(ServerMessagesTwoway *param_1)

{
  bool bVar1;
  UDS_MountEvent *pUVar2;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x55778,Complete_None_01,&local_28);
  pUVar2 = UDS_MountEvent::GetEvent();
  if (pUVar2 != (UDS_MountEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->UpdateMountExtendedTextDel);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->UpdateMountExtendedTextDel).Delegate);
    }
  }
  return;
}

// ReceiveMountLostReclaimResponse @ 14bc050a0

void __cdecl FDS_MountService::ReceiveMountLostReclaimResponse(ServerMessages *param_1)

{
  ulong64 uVar1;
  bool bVar2;
  MountLostReclaimResponseDefaultTypeInternal *pMVar3;
  UDS_DataSetBase *this;
  FWeakObjectPtr local_res8 [4];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5399) {
    pMVar3 = *(MountLostReclaimResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pMVar3 = &server_msg::_MountLostReclaimResponse_default_instance_;
  }
  uVar1 = *(ulong64 *)&((Message *)((longlong)pMVar3 + 0x10))->field_0x8;
  TDS_DataSetGetter<UDS_MountLostDataSet>::Get((ulong64)local_res8);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this = (UDS_DataSetBase *)FWeakObjectPtr::Get(local_res8);
    UDS_DataSetBase::RemoveData(this,uVar1);
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x5577d,Complete_None_01,&local_28);
  }
  return;
}

// ReceiveMountLostViewResponse @ 14bc05130

void __cdecl FDS_MountService::ReceiveMountLostViewResponse(ServerMessages *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_MountLostData *this;
  UDS_DataSetBase *this_00;
  MountLostViewResponseDefaultTypeInternal *pMVar5;
  Message *pMVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  MountLostInfo local_88;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x5398) {
    pMVar5 = *(MountLostViewResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pMVar5 = &server_msg::_MountLostViewResponse_default_instance_;
  }
  TDS_DataSetGetter<UDS_MountLostDataSet>::Get((ulong64)&local_res8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    (**(code **)(*(longlong *)pUVar4 + 0x2c0))(pUVar4);
    iVar1 = *(int *)&((Message *)((longlong)pMVar5 + 0x10))->field_0x8;
    if (0 < iVar1) {
      pMVar6 = (Message *)((longlong)pMVar5 + 0x10);
      if ((*(ulonglong *)((longlong)pMVar5 + 0x10) & 1) != 0) {
        pMVar6 = (Message *)(*(ulonglong *)((longlong)pMVar5 + 0x10) + 7);
      }
      puVar2 = (undefined8 *)&pMVar6->field_0x0;
      for (; pMVar6 != (Message *)(puVar2 + iVar1); pMVar6 = (Message *)&pMVar6->field_0x8) {
        MountLostInfo::MountLostInfo(&local_88,(Arena *)0x0,*(MountLostInfo **)pMVar6);
        local_88._padding_ = (longlong)&___7MountLostInfo__6B_;
        UDS_MountLostData::GetData
                  ((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,
                   SUB81(local_88._impl_.list_id_,0));
        bVar3 = FWeakObjectPtr::IsValid(&local_res10);
        if (bVar3) {
          this = (UDS_MountLostData *)FWeakObjectPtr::Get(&local_res10);
          UDS_MountLostData::SetMountLostData(this,&local_88);
        }
        MountLostInfo::~MountLostInfo(&local_88);
      }
      this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res8);
      UDS_DataSetBase::SetIsDirty(this_00,true);
    }
  }
  return;
}

// ReceiveMountResponse @ 14bc05290

void __cdecl FDS_MountService::ReceiveMountResponse(ServerMessages *param_1)

{
  MountResponseDefaultTypeInternal *pMVar1;
  MountInfoDefaultTypeInternal *pMVar2;
  FDS_MountInfo local_18;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x24f) {
    pMVar1 = *(MountResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pMVar1 = &server_msg::_MountResponse_default_instance_;
  }
  pMVar2 = &server_msg::_MountInfo_default_instance_;
  if (*(MountInfoDefaultTypeInternal **)&((Message *)((longlong)pMVar1 + 0x10))->field_0x8 !=
      (MountInfoDefaultTypeInternal *)0x0) {
    pMVar2 = *(MountInfoDefaultTypeInternal **)&((Message *)((longlong)pMVar1 + 0x10))->field_0x8;
  }
  local_18.MountEntity = (pMVar2->_instance)._impl_.mount_entity_;
  local_18.SeatIndex = (pMVar2->_instance)._impl_.seat_index_;
  UDS_MountAbility::TryActivate(*(ulong64 *)((longlong)pMVar1 + 0x20),&local_18);
  return;
}

// RequestDisMount @ 14bc0ddd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_MountService::RequestDisMount(void)

{
  Message *pMVar1;
  ClientMessageUnion CVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_NetworkManager *this;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_170;
  ClientMessages local_168;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_148[0] = FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
            ((ulong64 *)&local_170,(EDS_AbilityTagType *)local_148);
  bVar3 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&local_170,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_MountService::RequestDisMount",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x65,L"abilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    client_msg::ClientMessages::ClientMessages(&local_168,(Arena *)0x0);
    local_168._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_168._impl_._oneof_case_[0] != 0x1eb) {
      client_msg::ClientMessages::clear_ClientMessage(&local_168);
      local_168._impl_._oneof_case_[0] = 0x1eb;
      if (((byte)local_168._padding_ & 1) == 0) {
        local_168._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::DisMountRequest>
                       ((Arena *)(CONCAT71(local_168._padding_._1_7_,(byte)local_168._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_168._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::DisMountRequest>
                       (*(Arena **)
                         (CONCAT71(local_168._padding_._1_7_,(byte)local_168._padding_) &
                         0xfffffffffffffffe));
      }
    }
    CVar2 = local_168._impl_.ClientMessage_;
    if (local_168._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
      pUVar5 = FWeakObjectPtr::Get(&local_170);
      CVar2.joincontinentreq_[1].field_0x8 = pUVar5[3].field_0x3;
      pMVar1 = CVar2.joincontinentreq_ + 1;
      *(uint *)pMVar1 = *(uint *)pMVar1 | 1;
      this = UDS_NetworkManager::GetInst();
      UDS_NetworkManager::SendPacket(this,&local_168);
    }
    client_msg::ClientMessages::~ClientMessages(&local_168);
  }
  return;
}

// RequestMount @ 14bc11340

void __cdecl FDS_MountService::RequestMount(int param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  bVar1 = UDS_MountManager::IsMountAble();
  if ((bVar1) && (-1 < param_1)) {
    client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
    local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_28._impl_._oneof_case_[0] != 0x1ea) {
      client_msg::ClientMessages::clear_ClientMessage(&local_28);
      local_28._impl_._oneof_case_[0] = 0x1ea;
      if (((byte)local_28._padding_ & 1) == 0) {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::MountRequest>
                       ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::MountRequest>
                       (*(Arena **)
                         (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                         0xfffffffffffffffe));
      }
    }
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendPacket(this,&local_28);
    client_msg::ClientMessages::~ClientMessages(&local_28);
  }
  return;
}

// RequestMountChangeCompanion @ 14bc11400

void __cdecl
FDS_MountService::RequestMountChangeCompanion(ulong64 *param_1,long64 *param_2,int param_3)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5655) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5655;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::
             DefaultConstruct<client_msg_twoway::MountChangeCompanionRequest>(pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(ulong64 *)&pMVar5[1].field_0x8 = *param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
    *(long64 *)(pMVar5 + 2) = *param_2;
    *(int *)&pMVar5[2].field_0x8 = param_3;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 6;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ReceiveMountChangeCompanion;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// RequestMountChangeNickName @ 14bc11650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FDS_MountService::RequestMountChangeNickName
          (ulong64 *param_1,long64 *param_2,FString *param_3,int param_4)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  wchar_t *pwVar10;
  undefined1 auStack_158 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_138;
  basic_string_view<char,std::char_traits<char>_> local_128;
  FDestructionSentinel local_118;
  undefined1 *local_100;
  FDestructionSentinel local_f8;
  undefined1 *local_e0;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_d8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_d8);
  local_138.Object = pTVar4->Object;
  local_138.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  if (local_138.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_138.Object;
  if (((local_138.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5657) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_138.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5657;
    pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::
             DefaultConstruct<client_msg_twoway::MountChangeNickNameRequest>(pAVar9);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(ulong64 *)(pMVar5 + 2) = *param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 2;
    *(long64 *)&pMVar5[2].field_0x8 = *param_2;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 4;
    if ((param_3->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    pTVar6 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
             TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                       (&local_c8,pwVar10);
    local_128._Mydata = pTVar6->Ptr;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
    pAVar9 = (Arena *)(*(ulonglong *)&pMVar5->field_0x8 & 0xfffffffffffffffe);
    if ((pMVar5->field_0x8 & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    local_128._Mysize = strlen(local_128._Mydata);
    google::protobuf::internal::ArenaStringPtr::Set
              ((ArenaStringPtr *)&pMVar5[1].field_0x8,&local_128,pAVar9);
    if ((void *)local_c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._padding_);
    }
    *(int *)(pMVar5 + 3) = param_4;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 8;
    if (local_138.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_138.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_138.Object)->SuccessDel,(FWriteAccessScope *)&local_118);
    local_100 = &(pFVar2->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_100);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ReceiveMountChangeNickName;
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
    if (local_138.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_138.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_138.Object)->FailDel,(FWriteAccessScope *)&local_f8);
    local_e0 = &(pFVar2->FailDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_e0);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ProcessError;
    }
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_138);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  return;
}

// RequestMountDelete @ 14bc11930

void __cdecl FDS_MountService::RequestMountDelete(ulong64 *param_1,long64 *param_2,int param_3)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5656) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5656;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::MountDeleteRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(ulong64 *)&pMVar5[1].field_0x8 = *param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
    *(long64 *)(pMVar5 + 2) = *param_2;
    *(int *)&pMVar5[2].field_0x8 = param_3;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 6;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ReceiveMountDelete;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// RequestMountItemEquip @ 14bc11b80

void __cdecl
FDS_MountService::RequestMountItemEquip
          (ulong64 param_1,long64 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar5->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar3 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5658) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x5658;
    pAVar9 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::MountItemEquipRequest>
                       (pAVar9);
    (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(ulong64 *)&pMVar6[1].field_0x8 = param_1;
    uVar1 = *(uint *)(pMVar6 + 1);
    *(long64 *)(pMVar6 + 2) = param_2;
    *(int *)&pMVar6[2].field_0x8 = param_3;
    *(int *)&pMVar6[2].field_0xc = param_4;
    *(int *)(pMVar6 + 3) = param_5;
    *(uint *)(pMVar6 + 1) = uVar1 | 0x1f;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar3 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar3->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ReceiveMountItemEquip;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar3 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar3->FailDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// RequestMountListSlotExtend @ 14bc11df0

void __cdecl
FDS_MountService::RequestMountListSlotExtend(ulong64 *param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5654) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5654;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::
             DefaultConstruct<client_msg_twoway::MountListSlotExtendRequest>(pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(ulong64 *)&pMVar5[1].field_0x8 = *param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
    *(uint *)(pMVar5 + 2) = *param_2;
    *(int *)&pMVar5[2].field_0x4 = param_3;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 6;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ReceiveMountListSlotExtend;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// RequestMountLostReclaim @ 14bc12040

void __cdecl FDS_MountService::RequestMountLostReclaim(long64 param_1,int param_2)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x5399) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x5399;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::MountLostReclaimRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::MountLostReclaimRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(long64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(int *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_2;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 3;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// RequestMountLostView @ 14bc12120

void __cdecl FDS_MountService::RequestMountLostView(int param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x5398) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x5398;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::MountLostViewRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::MountLostViewRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(int *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 2;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// TryEquipItemToMount @ 14bc1fe70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FDS_MountService::TryEquipItemToMount
          (long64 param_1,ulong64 param_2,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_3)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  int *piVar7;
  FDS_SlotBaseTableRow *this;
  UClass *pUVar8;
  UDS_M_CommonPopup *this_00;
  undefined8 *puVar9;
  ulong64 uVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  FWeakObjectPtr local_res18;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [4];
  undefined4 local_1e4;
  TArray<FDS_SlotBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_1e0;
  undefined1 local_1d0 [8];
  FDelegateAllocation local_1c8;
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  FDS_Text local_1a0;
  FDS_Text local_150;
  FDestructionSentinel local_100;
  FDelegateAllocation *local_e8;
  FDestructionSentinel local_e0;
  FDelegateAllocation *local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_res18 = param_3.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar5) {
    return;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res18);
  local_1e4 = *(undefined4 *)&pUVar6[8].field_0x10;
  pUVar6 = FWeakObjectPtr::Get(&local_res18);
  iVar16 = 0;
  iVar15 = *(int *)&pUVar6[0x13].field_0x20;
  FDS_SlotBaseTableRow::GetAll(&local_1e0);
  iVar13 = local_1e0.ArrayNum;
  pFVar1 = local_1e0.AllocatorInstance.Data + (longlong)iVar13 * 8;
  FVar12.Data = local_1e0.AllocatorInstance.Data;
  uVar14 = local_1e0._8_8_;
  while( true ) {
    if ((int)uVar14 != iVar13) {
      local_1e8[0] = 0;
      `TCheckedPointerIterator<FDS_SlotBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1e8);
      uVar14 = local_1e0._8_8_;
    }
    if (FVar12.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar12.Data;
    if (lVar3 != 0) {
      piVar7 = *(int **)(lVar3 + 0x20);
      piVar2 = piVar7 + *(int *)(lVar3 + 0x28);
      for (; piVar7 != piVar2; piVar7 = piVar7 + 1) {
        if (*piVar7 == iVar15) {
          iVar16 = *(int *)(lVar3 + 8);
          goto LAB_14bc1ff77;
        }
      }
    }
    FVar12.Data = FVar12.Data + 8;
  }
LAB_14bc1ff77:
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  this = FDS_SlotBaseTableRow::GetRef((longlong)iVar16,true);
  bVar5 = FDS_SlotBaseTableRow::IsValid(this);
  iVar15 = 0;
  if (bVar5) {
    iVar15 = this->SlotNumber;
  }
  pUVar6 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar6;
  this_00 = (UDS_M_CommonPopup *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar11 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_M_CommonPopup *)0x0) goto LAB_14bc20275;
  }
  else {
    if (this_00 == (UDS_M_CommonPopup *)0x0) {
LAB_14bc20275:
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8039147968781090452>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_MountService.cpp"
                         ,0x16c,"false");
      if (!bVar5) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_1a0.StringTableType = None;
  local_1a0.StringTableID = 0;
  local_1a0.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_1a0.StringEnumTableNameID.Number = 0;
  local_1a0.TimeExpressionType = None;
  local_1a0.DateTime.Ticks = 0;
  local_1a0.TimeSpan.Ticks = 0;
  local_1a0.IsExpression = false;
  local_1a0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.UniqueString.Data.ArrayNum = 0;
  local_1a0.UniqueString.Data.ArrayMax = 0;
  local_1a0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.FormatArgs.ArrayNum = 0;
  local_1a0.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_1a0,StringUi,0x55762);
  UDS_M_CommonPopup::SetTitle(this_00,&local_1a0);
  local_150.StringTableType = None;
  local_150.StringTableID = 0;
  local_150.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_150.StringEnumTableNameID.Number = 0;
  local_150.TimeExpressionType = None;
  local_150.DateTime.Ticks = 0;
  local_150.TimeSpan.Ticks = 0;
  local_150.IsExpression = false;
  local_150.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.UniqueString.Data.ArrayNum = 0;
  local_150.UniqueString.Data.ArrayMax = 0;
  local_150.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.FormatArgs.ArrayNum = 0;
  local_150.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_150,StringUi,0x55763);
  UDS_M_CommonPopup::SetMainContent(this_00,&local_150);
  UDS_M_CommonPopup::SetButton(this_00,ButtonCancel,StringUi,0x66,false);
  UDS_M_CommonPopup::SetButton(this_00,ButtonConfirm,StringUi,0x9ece,false);
  local_1d0 = (undefined1  [8])0x0;
  local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
             (FWriteAccessScope *)&local_100);
  local_e8 = &local_1c8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_1c8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = OnCancelEquip;
  }
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  UDS_M_CommonPopup::SetDelegate
            (this_00,ButtonCancel,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_1d0);
  local_1b8 = (undefined1  [8])0x0;
  local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
             (FWriteAccessScope *)&local_e0);
  local_c8 = &local_1b0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___K_JHH__6B_
    ;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = local_1e4;
    puVar9[1] = param_2;
    puVar9[2] = param_1;
    *(int *)(puVar9 + 3) = iVar15;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[4] = uVar10;
    *puVar9 = &
              ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___K_JHH__6B_
    ;
    puVar9[5] = OnConfirmEquip;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  UDS_M_CommonPopup::SetDelegate
            (this_00,ButtonConfirm,
             (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)local_1b8);
  UDS_M_CommonPopup::OpenCommonPopup(this_00);
  return;
}

// TryUseMountRegister @ 14bc20770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
FDS_MountService::TryUseMountRegister
          (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,ulong64 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_MountDataSet *this;
  UDS_UIMessageManager *pUVar6;
  UDS_WindowManager *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar9;
  FWeakObjectPtr local_res8;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  FWeakObjectPtr local_180;
  FDestructionSentinel local_178;
  FDelegateAllocation *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_res8 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if ((bVar2) && (pUVar4 = FWeakObjectPtr::Get(&local_res8), pUVar4[0x16].field_0x4 == 'o')) {
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_180);
    bVar2 = FWeakObjectPtr::IsValid(&local_180);
    if (bVar2) {
      this = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_180);
      iVar3 = UDS_MountDataSet::GetTotalSlotCount(this);
      pUVar4 = FWeakObjectPtr::Get(&local_180);
      iVar1 = *(int *)&pUVar4[3].field_0x20;
      if (iVar1 < iVar3) {
        this_00 = UDS_WindowManager::GetInst();
        if (this_00 != (UDS_WindowManager *)0x0) {
          local_198 = (undefined1  [8])0x0;
          local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_190.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                     (FWriteAccessScope *)&local_178);
          local_160 = &local_190;
          puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_190);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &
                      ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr_____KHH__6B_
            ;
            *(FWeakObjectPtr *)(puVar7 + 1) = local_res8;
            *(int *)(puVar7 + 3) = iVar3;
            *(int *)((longlong)puVar7 + 0x1c) = iVar3 - iVar1;
            puVar7[2] = param_2;
            uVar8 = FDelegateHandle::GenerateNewID();
            puVar7[4] = uVar8;
            *puVar7 = &
                      ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr_____KHH__6B_
            ;
            puVar7[5] = OnOpenMountRegisterPopUp;
          }
          if (local_178.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
          }
          pTVar9 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                   TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                             ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)&local_178,
                              (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)local_198);
          UDS_WindowManager::OpenWindow(this_00,MountRegisterPopup,pTVar9);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                     (FWriteAccessScope *)&local_178);
          if ((local_190.DelegateSize != 0) &&
             (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_190,0,0,0x10);
            local_190.DelegateSize = 0;
          }
          if (local_178.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
          }
          if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_190.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_198);
        }
      }
      else {
        pUVar6 = UDS_UIMessageManager::GetInst();
        if (pUVar6 != (UDS_UIMessageManager *)0x0) {
          local_178.AccessType = Reader;
          local_178._4_4_ = 0;
          local_178.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
          local_178.bDestroyed = false;
          local_178._17_3_ = 0;
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x55735,Alert_System_01,
                     (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                      *)&local_178);
        }
      }
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FDS_MountService::TryUseMountRegister",0x25,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x11f,L"mountDataSet is InValid.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
  }
  return;
}

