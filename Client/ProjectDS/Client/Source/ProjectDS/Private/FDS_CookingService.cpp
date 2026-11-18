// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// OnClickedSharePopup @ 14bbc8810

void __cdecl
FDS_CookingService::OnClickedSharePopup
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,bool param_2)

{
  bool bVar1;
  UDS_M_CommonPopup *this;
  UDS_NetworkManager *this_00;
  FWeakObjectPtr local_res8 [4];
  ClientMessages local_28;
  
  local_res8[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res8);
    UDS_M_CommonPopup::CloseCommonPopup(this);
  }
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 500) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 500;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::ItemCampCookingPopupReplyRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::ItemCampCookingPopupReplyRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_2;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this_00 = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendPacket(this_00,&local_28);
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// OnOpenShareResult @ 14bbcb7c0

void __cdecl FDS_CookingService::OnOpenShareResult(UDS_UserWidget *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res18;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar3 = ::operator_new(0x48);
    pFVar6 = (FDS_ViewModelContext *)0x0;
    pFVar5 = pFVar6;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
      *(undefined2 *)((longlong)&pFVar3[1]._padding_ + 1) = 0;
      *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 3) = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_PhasingCompleteAlarm__6B_;
      *(undefined1 *)&pFVar3[1]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 4) = 0;
      *(undefined8 *)&pFVar3[1].DerivedStaticStruct = 0;
      pFVar3[1].ViewModelName.ComparisonIndex = 0;
      pFVar3[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar3[1].ViewModelTemplateKey = 0;
      pFVar3[2]._padding_ = 0;
      pFVar5 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PhasingCompleteAlarm__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar5;
      pFVar6 = pFVar3;
    }
    if ((pFVar5 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_PhasingCompleteAlarm::StaticStruct();
    *(UScriptStruct **)&pFVar5->DerivedStaticStruct = pUVar4;
    this = UDS_ViewModelContextManager::GetInst();
    if (this != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_38.Object = pFVar5;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_ViewModelContextManager::RegisterContext(this,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    pFVar5->ViewModelTemplateKey = W_Hud_PhasingCompleteAlarm;
    *(bool *)&pFVar5[1]._padding_ = param_2;
    *(uint *)((longlong)&pFVar5[1]._padding_ + 4) = (param_2 ^ 1) + 0x3a981;
    *(ulonglong *)&pFVar5[1].DerivedStaticStruct = ((ulonglong)param_2 ^ 1) + 0x4d26c;
    *(ulonglong *)&pFVar5[1].ViewModelName.ComparisonIndex = ((ulonglong)param_2 ^ 1) + 0x8f;
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_28.Object = pFVar5;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  return;
}

// ProcessError @ 14bbce7c0

bool __cdecl FDS_CookingService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveItemCampCookingPopupResponse @ 14bbd37d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FDS_CookingService::ReceiveItemCampCookingPopupResponse(ServerMessages *param_1)

{
  double dVar1;
  int iVar2;
  Message *pMVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UDS_M_CommonPopup *this;
  FDS_StringItemID *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  longlong *plVar12;
  undefined1 auStackY_268 [32];
  undefined1 local_228 [8];
  FDelegateAllocation local_220;
  undefined1 local_210 [8];
  FDelegateAllocation local_208;
  undefined1 local_1f8 [8];
  FDelegateAllocation local_1f0;
  FDS_Text local_1e0;
  FDS_Text local_190;
  FDestructionSentinel local_140;
  FDelegateAllocation *local_128;
  FDestructionSentinel local_120;
  FDelegateAllocation *local_108;
  FDestructionSentinel local_100;
  FDelegateAllocation *local_e8;
  FDS_StringItemID local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((param_1->_impl_)._oneof_case_[0] != 0x85) {
    return;
  }
  pMVar3 = (param_1->_impl_).ServerMessage_.errorcoderes_;
  iVar2 = *(int *)(pMVar3 + 2);
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar8);
  local_c8._8_8_ = pUVar7;
  this = (UDS_M_CommonPopup *)
         StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar12 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this != (UDS_M_CommonPopup *)0x0) goto LAB_14bbd3897;
  }
  else if (this != (UDS_M_CommonPopup *)0x0) {
    UE::GC::MarkAsReachable((UObject *)this);
LAB_14bbd3897:
    local_1e0.StringTableID = 0;
    local_1e0.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1e0.StringEnumTableNameID.Number = 0;
    local_1e0.TimeExpressionType = None;
    local_1e0.IsExpression = false;
    local_1e0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.UniqueString.Data.ArrayNum = 0;
    local_1e0.UniqueString.Data.ArrayMax = 0;
    local_1e0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.FormatArgs.ArrayNum = 0;
    local_1e0.FormatArgs.ArrayMax = 0;
    local_1e0.StringTableType = None;
    local_1e0.DateTime.Ticks = 0;
    local_1e0.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromStringTable(&local_1e0,StringUi,0x4d26a);
    UDS_M_CommonPopup::SetTitle(this,&local_1e0);
    pFVar9 = DS_ItemDataUtil::GetItemExplainByTID(&local_e0,iVar2);
    local_190.StringTableType = None;
    local_190.StringTableID = 0;
    local_190.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_190.StringEnumTableNameID.Number = 0;
    local_190.DateTime.Ticks = 0;
    local_190.TimeSpan.Ticks = 0;
    local_190.TimeExpressionType = None;
    local_190.IsExpression = false;
    local_190.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.UniqueString.Data.ArrayNum = 0;
    local_190.UniqueString.Data.ArrayMax = 0;
    local_190.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.FormatArgs.ArrayNum = 0;
    local_190.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&local_190,pFVar9);
    UDS_M_CommonPopup::SetSubContent02(this,&local_190);
    UDS_M_CommonPopup::SetItemSlot(this,ItemSlot01,iVar2,1,1,1,ItemCookingShare);
    UDS_M_CommonPopup::SetButton(this,ButtonCancel,StringUi,0x66,false);
    local_228 = (undefined1  [8])0x0;
    local_220.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_220.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
               (FWriteAccessScope *)&local_140);
    local_128 = &local_220;
    puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_220);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      *(undefined1 *)(puVar10 + 1) = 0;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      puVar10[3] = OnClickedSharePopup;
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    UDS_M_CommonPopup::SetDelegate
              (this,ButtonCancel,
               (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)local_228);
    UDS_M_CommonPopup::SetButton(this,ButtonConfirm,StringUi,0x65,false);
    local_210 = (undefined1  [8])0x0;
    local_208.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_208.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_210,
               (FWriteAccessScope *)&local_120);
    local_108 = &local_208;
    puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_208);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      *(undefined1 *)(puVar10 + 1) = 1;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      puVar10[3] = OnClickedSharePopup;
    }
    if (local_120.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
    }
    UDS_M_CommonPopup::SetDelegate
              (this,ButtonConfirm,
               (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)local_210);
    dVar1 = *(double *)&pMVar3[1].field_0x8;
    dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
    UDS_M_CommonPopup::SetProgressTime(this,dVar5,dVar1,true,None);
    local_1f8 = (undefined1  [8])0x0;
    local_1f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
               (FWriteAccessScope *)&local_100);
    local_e8 = &local_1f0;
    puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_1f0);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      *(undefined1 *)(puVar10 + 1) = 0;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      puVar10[3] = OnClickedSharePopup;
    }
    if (local_100.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
    }
    UDS_M_CommonPopup::SetDelegate
              (this,Progress,
               (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)local_1f8);
    UDS_M_CommonPopup::OpenCommonPopup(this);
    return;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<299992655192916102>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_CookingService.cpp"
                     ,0x86,"false");
  if (!bVar6) {
    return;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ReceiveItemCampCookingUseAnimationResponse @ 14bbd3bf0

void __cdecl FDS_CookingService::ReceiveItemCampCookingUseAnimationResponse(ServerMessages *param_1)

{
  Message *pMVar1;
  code *pcVar2;
  bool bVar3;
  EDS_StateTagType local_res8 [8];
  EDS_StateTagType local_res10 [8];
  ulong64 local_res18;
  ulong64 local_res20;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x86) {
    pMVar1 = (param_1->_impl_).ServerMessage_.errorcoderes_;
    local_res8[0] = Cooking_Eat;
    local_res18 = *(ulong64 *)&pMVar1[1].field_0x8;
    FDS_EntityBase::AddStateTag(&local_res18,local_res8);
    local_res20 = *(ulong64 *)&pMVar1[1].field_0x8;
    local_res10[0] = Cooking_Eat;
    FDS_EntityBase::RemoveStateTag(&local_res20,local_res10);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<299992655192916121>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_CookingService.cpp"
                       ,0x99,"InMsg.has_itemcampcookinguseanimationres()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RequestCampCooking @ 14bbda100

void __cdecl FDS_CookingService::RequestCampCooking(int param_1,bool param_2)

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
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<299992655192916012>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_CookingService.cpp"
                       ,0x2c,"false");
    if (bVar4) {
code_r0x00014bbda281:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar3 = local_68.Object;
    if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f59) {
      client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                (&(local_68.Object)->clientMsg);
      (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x4f59;
      pAVar9 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
      if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
        pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
      }
      pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::ItemCampCookingRequest>
                         (pAVar9);
      (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
    }
    pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
    if (pMVar6 == (Message *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<299992655192916015>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_CookingService.cpp"
                         ,0x2f,"false");
      if (bVar4) goto code_r0x00014bbda281;
    }
    else {
      *(int *)&pMVar6[1].field_0x8 = param_1;
      uVar1 = *(uint *)(pMVar6 + 1);
      pMVar6[1].field_0xc = param_2;
      *(uint *)(pMVar6 + 1) = uVar1 | 3;
      if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<299992655192916020>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_CookingService.cpp"
                           ,0x34,"false");
        if (bVar4) goto code_r0x00014bbda281;
      }
      else {
        if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
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
          puVar7[3] = ResponseCampCooking;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar3 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
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
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// ResponseCampCooking @ 14bbdc9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_CookingService::ResponseCampCooking(ServerMessagesTwoway *param_1)

{
  undefined1 uVar1;
  Message *pMVar2;
  UDS_WindowManager *this;
  UDS_LogManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  FDelegateAllocation local_170;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f59) {
    pMVar2 = (param_1->_impl_).ServerMessageTwoway_.pongres_;
    if (pMVar2[1].field_0x8 == '\0') {
      local_160.AccessType = Reader;
      local_160._4_4_ = 0;
      local_160.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
      local_160.bDestroyed = false;
      local_160._17_3_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x4d272,Complete_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)&local_160);
    }
    else {
      this = UDS_WindowManager::GetInst();
      if (this == (UDS_WindowManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_CookingService::ResponseCampCooking",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x46,L"windowMng is nullptr");
        if ((void *)local_138._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_138._padding_);
        return;
      }
      uVar1 = pMVar2[1].field_0x9;
      local_178 = (undefined1  [8])0x0;
      local_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_170.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
                 (FWriteAccessScope *)&local_160);
      local_148 = &local_170;
      puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_170);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___N__6B_
        ;
        *(undefined1 *)(puVar4 + 1) = uVar1;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___N__6B_
        ;
        puVar4[3] = OnOpenShareResult;
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_160,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_178);
      UDS_WindowManager::OpenWindow(this,SuccessFailureAlarm,pTVar6);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
                 (FWriteAccessScope *)&local_160);
      if ((local_170.DelegateSize != 0) &&
         (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_170.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_170,0,0,0x10);
        local_170.DelegateSize = 0;
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      if (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_170.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_178);
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&OnRecvDelegateCampCooking);
  return;
}

