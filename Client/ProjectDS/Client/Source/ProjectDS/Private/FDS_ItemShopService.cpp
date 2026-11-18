// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// IsShopGoodsBuyLimitCotentsCheck @ 14bbfa160

bool __cdecl
FDS_ItemShopService::IsShopGoodsBuyLimitCotentsCheck
          (TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> param_1,int param_2)

{
  EDS_BuyLimitContentsType EVar1;
  bool bVar2;
  UDS_NPCShopData *this;
  FDS_NPCShopGoodsInfo *pFVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  local_res8[0] = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar2) {
    this = (UDS_NPCShopData *)FWeakObjectPtr::Get(local_res8);
    pFVar3 = UDS_NPCShopData::GetNPCShopGoodsInfo(this,param_2);
    if (pFVar3 != (FDS_NPCShopGoodsInfo *)0x0) {
      UDS_PlayerData::GetMainPlayerData();
      bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res18,(void *)0x0);
      if (!bVar2) {
        EVar1 = pFVar3->BuyLimitContentsType;
        if (EVar1 == None) {
          return false;
        }
        if (EVar1 == PlayerUnder) {
          pUVar4 = FWeakObjectPtr::Get(&local_res18);
          if (*(int *)&pUVar4[6].field_0x10 < pFVar3->BuyLimitContentsValue) {
            return false;
          }
        }
        else if (EVar1 == PlayerOver) {
          pUVar4 = FWeakObjectPtr::Get(&local_res18);
          if (pFVar3->BuyLimitContentsValue <= *(int *)&pUVar4[6].field_0x10) {
            return false;
          }
        }
        else {
          if (EVar1 != Character) {
            return false;
          }
          UDS_PlayerData::GetMainPlayerCurrentEntityID();
          UDS_CharInfoData::GetData((ulong64)&local_res20);
          bVar2 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res20,
                             (void *)0x0);
          if ((!bVar2) &&
             (pUVar4 = FWeakObjectPtr::Get(&local_res20),
             pFVar3->BuyLimitContentsValue <= *(int *)&pUVar4[8].field_0xc)) {
            return false;
          }
        }
      }
    }
  }
  return true;
}

// OnNPCShopResult @ 14bbfb050

void __cdecl FDS_ItemShopService::OnNPCShopResult(EDS_NPCShopResult param_1)

{
  long64 lVar1;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  switch(param_1) {
  case NotEnoughQuantity:
    lVar1 = 0x4e4d;
    break;
  case NotEnoughInventory:
    lVar1 = 0x4e25;
    break;
  case NotEnoughCost:
    lVar1 = 0x4e24;
    break;
  case NotEnoughBasket:
    lVar1 = 0x4e2f;
    break;
  default:
    goto switchD_14bbfb075_caseD_6;
  case EmptyPurchaseBasket:
    lVar1 = 0x4e33;
    break;
  case Equipped:
    lVar1 = 0x4e46;
    break;
  case NotSellable:
    lVar1 = 0x4e41;
    break;
  case EmptySellBasket:
    lVar1 = 0x4e34;
  }
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(lVar1,Alert_None_01,&local_28);
switchD_14bbfb075_caseD_6:
  return;
}

// ProcessError @ 14bc024d0

bool __cdecl FDS_ItemShopService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// RequestItemBuy @ 14bc0e810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_ItemShopService::RequestItemBuy
          (TWeakObjectPtr<UDS_NPCShopData,FWeakObjectPtr> param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  FDS_ClientMessage_Twoway *pFVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar7;
  Message *pMVar8;
  UDS_DataBase *pUVar9;
  ulong64 uVar10;
  UObject *pUVar11;
  UDS_NPCShopData *this;
  TArray<FDS_NPCShopGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar12;
  void *pvVar13;
  undefined8 *puVar14;
  UDS_NetworkManager *this_00;
  Arena *pAVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FWeakObjectPtr local_res8;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_2d0;
  TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> local_2c0;
  FDestructionSentinel local_2b8;
  undefined1 *local_2a0;
  FDestructionSentinel local_298;
  undefined1 *local_280;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_res8 = param_1.WeakPtr;
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar5) {
    UDS_PlayerData::GetMainPlayerData();
    bVar5 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals(&local_2c0,(void *)0x0);
    if (bVar5) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"FDS_ItemShopService::RequestItemBuy",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_268.Ptr,0x5b,L"playerData is nullptr");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
    }
    else {
      pTVar7 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_278);
      local_2d0.Object = pTVar7->Object;
      local_2d0.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_2d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
      if ((local_2d0.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = local_2d0.Object;
      if (((local_2d0.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f53) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_2d0.Object)->clientMsg);
        (pFVar4->clientMsg)._impl_._oneof_case_[0] = 0x4f53;
        pAVar15 = (Arena *)((pFVar4->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar4->clientMsg)._padding_ & 1) != 0) {
          pAVar15 = (Arena *)(pAVar15->impl_).tag_and_id_;
        }
        pMVar8 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::ItemBuyRequest>
                           (pAVar15);
        (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar8;
      }
      pMVar8 = (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar8 == (Message *)0x0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8166303228653207652>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemShopService.cpp"
                           ,100,"false");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        pUVar9 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res8);
        uVar10 = UDS_DataBase::GetEntityID(pUVar9);
        *(ulong64 *)(pMVar8 + 3) = uVar10;
        *(uint *)(pMVar8 + 1) = *(uint *)(pMVar8 + 1) | 1;
        pUVar11 = FWeakObjectPtr::Get(&local_res8);
        *(undefined4 *)&pMVar8[3].field_0x8 = *(undefined4 *)&pUVar11[2].field_0x10;
        uVar1 = *(uint *)(pMVar8 + 1);
        *(int *)&pMVar8[3].field_0xc = param_2;
        *(uint *)(pMVar8 + 1) = uVar1 | 6;
        this = (UDS_NPCShopData *)FWeakObjectPtr::Get(&local_res8);
        pTVar12 = UDS_NPCShopData::GetNPCShopBasket(this);
        iVar2 = pTVar12->ArrayNum;
        pFVar16 = (pTVar12->AllocatorInstance).Data;
        pFVar17 = pFVar16 + (longlong)iVar2 * 0x50;
        while( true ) {
          if (pTVar12->ArrayNum != iVar2) {
            local_2d8[0] = 0;
            `TCheckedPointerIterator<FDS_NPCShopGoodsInfo_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_2d8);
          }
          if (pFVar16 == pFVar17) {
            if ((local_2d0.Object == (FDS_ClientMessage_Twoway *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar4 = local_2d0.Object;
            pUVar9 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res8);
            uVar10 = UDS_DataBase::GetEntityID(pUVar9);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4->SuccessDel
                       ,(FWriteAccessScope *)&local_2b8);
            local_2a0 = &(pFVar4->SuccessDel).field_0x8;
            puVar14 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_2a0);
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
              ;
              puVar14[1] = uVar10;
              uVar10 = FDelegateHandle::GenerateNewID();
              puVar14[2] = uVar10;
              *puVar14 = &
                         ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
              ;
              puVar14[3] = ResponseItemBuy;
            }
            if (local_2b8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
            }
            if ((local_2d0.Object == (FDS_ClientMessage_Twoway *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar4 = local_2d0.Object;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_2d0.Object)->FailDel,(FWriteAccessScope *)&local_298);
            local_280 = &(pFVar4->FailDel).field_0x8;
            puVar14 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_280);
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = &
                         ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar10 = FDelegateHandle::GenerateNewID();
              puVar14[2] = uVar10;
              *puVar14 = &
                         ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar14[3] = ProcessError;
            }
            if (local_298.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
            }
            this_00 = UDS_NetworkManager::GetInst();
            if (this_00 != (UDS_NetworkManager *)0x0) {
              UDS_NetworkManager::SendTwoWayPacket(this_00,&local_2d0);
            }
            goto LAB_14bc0ecf6;
          }
          pvVar13 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                              ((RepeatedPtrFieldBase *)&pMVar8[1].field_0x8,
                               google::protobuf::Arena::DefaultConstruct<ItemBuy>);
          if (pvVar13 == (void *)0x0) break;
          *(undefined4 *)((longlong)pvVar13 + 0x18) = *(undefined4 *)(pFVar16 + 8);
          *(uint *)((longlong)pvVar13 + 0x10) = *(uint *)((longlong)pvVar13 + 0x10) | 1;
          *(undefined4 *)((longlong)pvVar13 + 0x1c) = *(undefined4 *)(pFVar16 + 0x40);
          *(uint *)((longlong)pvVar13 + 0x10) = *(uint *)((longlong)pvVar13 + 0x10) | 2;
          pFVar16 = pFVar16 + 0x50;
        }
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8166303228653207666>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemShopService.cpp"
                           ,0x72,"false");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"FDS_ItemShopService::RequestItemBuy",0x23,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x73,L"itemBuy is nullptr.");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
LAB_14bc0ecf6:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d0.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8166303228653207635>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemShopService.cpp"
                       ,0x53,"InNPCShopData.IsValid()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// RequestItemSell @ 14bc10350

void __cdecl
FDS_ItemShopService::RequestItemSell
          (TWeakObjectPtr<UDS_NPCSellData,FWeakObjectPtr> param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FDS_ClientMessage_Twoway *pFVar6;
  bool bVar7;
  UDS_NPCSellData *this;
  TArray<FDS_NPCSellGoodsInfo,TSizedDefaultAllocator<32>_> *pTVar8;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar9;
  Message *pMVar10;
  UDS_DataBase *pUVar11;
  ulong64 uVar12;
  DbWorkItem *this_00;
  UObject *pUVar13;
  int *piVar14;
  SqlItemStackableTable *this_01;
  SqlItemEquipmentTable *this_02;
  undefined8 *puVar15;
  UDS_NetworkManager *this_03;
  int iVar16;
  Arena *pAVar17;
  ulonglong uVar18;
  UObject *pUVar19;
  FScriptContainerElement *pFVar20;
  FWeakObjectPtr *this_04;
  FScriptContainerElement *pFVar21;
  FWeakObjectPtr local_res8 [2];
  undefined1 local_res18 [8];
  EDS_InventoryType local_res20 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_d8;
  uint local_c8;
  FWeakObjectPtr local_c0;
  FScriptContainerElement *local_b8;
  TArray<FDS_NPCSellGoodsInfo,TSizedDefaultAllocator<32>_> *local_b0;
  Message *local_a8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_a0;
  FDestructionSentinel local_88;
  undefined1 *local_70;
  FDestructionSentinel local_68;
  undefined1 *local_50;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_48;
  
  local_res8[0] = param_1.WeakPtr;
  bVar7 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar7) {
    UDS_PlayerData::GetData((ulong64)&local_c0,UDS_PlayerData::MainPlayerEntityID,false);
    bVar7 = FWeakObjectPtr::IsValid(&local_c0);
    if (bVar7) {
      this = (UDS_NPCSellData *)FWeakObjectPtr::Get(local_res8);
      pTVar8 = UDS_NPCSellData::GetNPCSellBasket(this);
      local_b0 = pTVar8;
      if (pTVar8->ArrayNum == 0) {
        local_a0._0_8_ = 0;
        local_a0._8_8_ = 0;
        local_a0._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x4e34,Alert_None_01,&local_a0);
        return;
      }
      pTVar9 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_48);
      local_d8.Object = pTVar9->Object;
      local_d8.SharedReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      if ((local_d8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = local_d8.Object;
      if (((local_d8.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f54) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_d8.Object)->clientMsg);
        (pFVar6->clientMsg)._impl_._oneof_case_[0] = 0x4f54;
        pAVar17 = (Arena *)((pFVar6->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar6->clientMsg)._padding_ & 1) != 0) {
          pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
        }
        pMVar10 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::ItemSellRequest>
                            (pAVar17);
        (pFVar6->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar10;
      }
      pMVar10 = (pFVar6->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      local_a8 = pMVar10;
      pUVar11 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res8);
      uVar12 = UDS_DataBase::GetEntityID(pUVar11);
      *(ulong64 *)(pMVar10 + 3) = uVar12;
      uVar1 = *(uint *)(pMVar10 + 1);
      *(int *)&pMVar10[3].field_0x8 = param_2;
      *(uint *)(pMVar10 + 1) = uVar1 | 3;
      local_c8 = pTVar8->ArrayNum;
      uVar18 = (ulonglong)(int)local_c8;
      pFVar21 = (pTVar8->AllocatorInstance).Data;
      this_04 = (FWeakObjectPtr *)(pFVar21 + 8);
      pFVar20 = pFVar21 + uVar18 * 0x1c;
      local_b8 = pFVar20;
      while( true ) {
        if (pTVar8->ArrayNum != (int)uVar18) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FDS_NPCSellGoodsInfo_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res18);
        }
        if (pFVar21 == pFVar20) break;
        bVar7 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)this_04,(void *)0x0);
        if (bVar7) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8166303228653207716>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemShopService.cpp"
                             ,0xa4,"false");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          this_00 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                              ((RepeatedPtrFieldBase *)&pMVar10[1].field_0x8,
                               google::protobuf::Arena::DefaultConstruct<ds_game::DbWorkItem>);
          if (this_00 == (DbWorkItem *)0x0) {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<8166303228653207723>,true,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemShopService.cpp"
                               ,0xab,"false");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            break;
          }
          pUVar13 = FWeakObjectPtr::Get(this_04);
          if (pUVar13[0x13].field_0x1c == '\0') {
            iVar2 = this_04[1].ObjectIndex;
            iVar3 = this_04[1].ObjectSerialNumber;
            local_res20[0] = PlayerNormal;
            pUVar13 = FWeakObjectPtr::Get(this_04);
            piVar14 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                      ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                (&pUVar13[10].field_0x18,1,local_res20);
            iVar4 = *piVar14;
            pUVar13 = FWeakObjectPtr::Get(this_04);
            if (*(int *)&pUVar13[8].field_0x20 != *(int *)&pUVar13[9].field_0x24) {
              pUVar19 = pUVar13 + 10;
              if (*(UObject **)&pUVar13[10].field_0x8 != (UObject *)0x0) {
                pUVar19 = *(UObject **)&pUVar13[10].field_0x8;
              }
              iVar16 = *(int *)(&pUVar19->field_0x0 +
                               (ulonglong)(*(int *)&pUVar13[10].field_0x10 - 1U & 1) * 4);
              if (iVar16 != -1) {
                do {
                  if (*(char *)(*(longlong *)&pUVar13[8].field_0x18 + (longlong)iVar16 * 0x10) ==
                      '\x01') {
                    piVar14 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                              ::FindChecked(&pUVar13[8].field_0x18,PlayerNormal);
                    iVar16 = *piVar14;
                    goto LAB_14bc10687;
                  }
                  iVar16 = *(int *)(*(longlong *)&pUVar13[8].field_0x18 + 8 +
                                   (longlong)iVar16 * 0x10);
                } while (iVar16 != -1);
              }
            }
            iVar16 = 0;
LAB_14bc10687:
            if (iVar4 < iVar2) {
              iVar2 = iVar4;
            }
            if (iVar16 < iVar3) {
              iVar3 = iVar16;
            }
            this_01 = ::operator_new(0x40);
            if (this_01 == (SqlItemStackableTable *)0x0) {
              this_01 = (SqlItemStackableTable *)0x0;
            }
            else {
              ds_game::SqlItemStackableTable::SqlItemStackableTable(this_01,(Arena *)0x0);
              this_01->_padding_ = (longlong)&___7SqlItemStackableTable_ds_game__6B_;
            }
            pUVar13 = FWeakObjectPtr::Get(&local_c0);
            (this_01->_impl_).player_uid_ = *(long64 *)&pUVar13[6].field_0x8;
            (this_01->_impl_)._has_bits_.has_bits_[0] =
                 (this_01->_impl_)._has_bits_.has_bits_[0] | 1;
            pUVar13 = FWeakObjectPtr::Get(this_04);
            (this_01->_impl_).item_id_ = *(int *)&pUVar13[8].field_0x10;
            uVar1 = (this_01->_impl_)._has_bits_.has_bits_[0];
            (this_01->_impl_).quantity_ = iVar3;
            (this_01->_impl_).quantity_trade_ = iVar2;
            (this_01->_impl_)._has_bits_.has_bits_[0] = uVar1 | 0xe;
            ds_game::DbWorkItem::set_allocated_itemstackable(this_00,this_01);
            pFVar20 = local_b8;
            pTVar8 = local_b0;
            pMVar10 = local_a8;
          }
          else {
            this_02 = ::operator_new(0x88);
            if (this_02 == (SqlItemEquipmentTable *)0x0) {
              this_02 = (SqlItemEquipmentTable *)0x0;
            }
            else {
              ds_game::SqlItemEquipmentTable::SqlItemEquipmentTable(this_02,(Arena *)0x0);
              this_02->_padding_ = (longlong)&___7SqlItemEquipmentTable_ds_game__6B_;
            }
            pUVar13 = FWeakObjectPtr::Get(&local_c0);
            (this_02->_impl_).player_uid_ = *(long64 *)&pUVar13[6].field_0x8;
            (this_02->_impl_)._has_bits_.has_bits_[0] =
                 (this_02->_impl_)._has_bits_.has_bits_[0] | 1;
            pUVar13 = FWeakObjectPtr::Get(this_04);
            (this_02->_impl_).item_id_ = *(int *)&pUVar13[8].field_0x10;
            (this_02->_impl_)._has_bits_.has_bits_[0] =
                 (this_02->_impl_)._has_bits_.has_bits_[0] | 4;
            pUVar13 = FWeakObjectPtr::Get(this_04);
            (this_02->_impl_).item_uid_ = *(long64 *)&pUVar13[8].field_0x8;
            (this_02->_impl_)._has_bits_.has_bits_[0] =
                 (this_02->_impl_)._has_bits_.has_bits_[0] | 2;
            ds_game::DbWorkItem::set_allocated_itemequipment(this_00,this_02);
            pFVar20 = local_b8;
          }
        }
        uVar18 = (ulonglong)local_c8;
        pFVar21 = pFVar21 + 0x1c;
        this_04 = (FWeakObjectPtr *)&this_04[3].ObjectSerialNumber;
      }
      if ((local_d8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = local_d8.Object;
      pUVar11 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res8);
      uVar12 = UDS_DataBase::GetEntityID(pUVar11);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->SuccessDel,
                 (FWriteAccessScope *)&local_88);
      local_70 = &(pFVar6->SuccessDel).field_0x8;
      puVar15 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_70);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
        ;
        puVar15[1] = uVar12;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar12;
        *puVar15 = &
                   ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy___K__6B_
        ;
        puVar15[3] = ResponseItemSell;
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      if ((local_d8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = local_d8.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_d8.Object)->FailDel,(FWriteAccessScope *)&local_68);
      local_50 = &(pFVar6->FailDel).field_0x8;
      puVar15 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_50);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = &
                   ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar12;
        *puVar15 = &
                   ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar15[3] = ProcessError;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      this_03 = UDS_NetworkManager::GetInst();
      if (this_03 != (UDS_NetworkManager *)0x0) {
        UDS_NetworkManager::SendTwoWayPacket(this_03,&local_d8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8166303228653207693>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemShopService.cpp"
                         ,0x8d,"playerData.IsValid()");
      if (bVar7) goto code_r0x00014bc103fa;
    }
    return;
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8166303228653207687>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemShopService.cpp"
                     ,0x87,"InNPCSellData.IsValid()");
  if (!bVar7) {
    return;
  }
code_r0x00014bc103fa:
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ResponseItemBuy @ 14bc19da0

void __cdecl FDS_ItemShopService::ResponseItemBuy(ServerMessagesTwoway *param_1,ulong64 param_2)

{
  bool bVar1;
  UDS_NPCShopData *this;
  FWeakObjectPtr local_res18 [2];
  
  UDS_NPCShopData::GetData((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    this = (UDS_NPCShopData *)FWeakObjectPtr::Get(local_res18);
    if ((param_1->_impl_)._oneof_case_[0] == 0x4f53) {
      UDS_NPCShopData::OnItemBuyResponse
                (this,(ItemBuyResponse *)(param_1->_impl_).ServerMessageTwoway_.pongres_);
      return;
    }
    UDS_NPCShopData::OnItemBuyResponse
              (this,&server_msg_twoway::_ItemBuyResponse_default_instance_._instance);
  }
  return;
}

// ResponseItemSell @ 14bc19ec0

void __cdecl FDS_ItemShopService::ResponseItemSell(ServerMessagesTwoway *param_1,ulong64 param_2)

{
  bool bVar1;
  UDS_NPCSellData *this;
  FWeakObjectPtr local_res18 [2];
  
  UDS_NPCSellData::GetData((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    this = (UDS_NPCSellData *)FWeakObjectPtr::Get(local_res18);
    if ((param_1->_impl_)._oneof_case_[0] == 0x4f54) {
      UDS_NPCSellData::OnItemSellResponse
                (this,(ItemSellResponse *)(param_1->_impl_).ServerMessageTwoway_.pongres_);
      return;
    }
    UDS_NPCSellData::OnItemSellResponse
              (this,&server_msg_twoway::_ItemSellResponse_default_instance_._instance);
  }
  return;
}

