// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// ProcessError @ 14bc02590

bool __cdecl FDS_NpcRelationService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return true;
}

// ReceiveNpcRelationGradeEvolveRes @ 14bc052f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_NpcRelationService::ReceiveNpcRelationGradeEvolveRes(ServerMessages *param_1)

{
  int iVar1;
  bool bVar2;
  NpcRelationGradeEvolveResponseDefaultTypeInternal *pNVar3;
  FDS_NpcBaseTableRow *this;
  UDS_LogManager *pUVar4;
  FDS_CommonGradeTableRow *this_00;
  FString *pFVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_1f8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1b8;
  FStringFormatArg local_1a8;
  FStringFormatArg local_188;
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x227) {
    pNVar3 = *(NpcRelationGradeEvolveResponseDefaultTypeInternal **)
              &(param_1->_impl_).ServerMessage_;
  }
  else {
    pNVar3 = &server_msg::_NpcRelationGradeEvolveResponse_default_instance_;
  }
  iVar1 = *(int *)((longlong)pNVar3 + 0x20);
  this = FDS_NpcBaseTableRow::GetRef
                   ((longlong)*(int *)&((Message *)((longlong)pNVar3 + 0x10))->field_0x8,true);
  bVar2 = FDS_NpcBaseTableRow::IsValid(this);
  if (bVar2) {
    this_00 = FDS_CommonGradeTableRow::GetRef((longlong)iVar1,true);
    bVar2 = FDS_CommonGradeTableRow::IsValid(this_00);
    if (bVar2) {
      pFVar5 = (FString *)(**(code **)((this->ID_NameSid)._padding_ + 8))(&this->ID_NameSid);
      pFVar5 = ::FString::FString(&local_168,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_1a8,pFVar5);
      pFVar5 = (FString *)
               (**(code **)((this_00->ID_RelationGradeName)._padding_ + 8))
                         (&this_00->ID_RelationGradeName);
      pFVar5 = ::FString::FString(&local_158,pFVar5);
      FStringFormatArg::FStringFormatArg(&local_188,pFVar5);
      local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_1b8.AllocatorInstance,2,&local_1b8.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_1b8.AllocatorInstance.Data,&local_1a8,2);
      if (local_188.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_1a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.StringValue.Data.AllocatorInstance.Data);
      }
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x4e269,Attention_None_01,&local_1b8,
                 (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                  *)0x0);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
      FVar6.Data = local_1b8.AllocatorInstance.Data;
      goto LAB_14bc0552f;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_NpcRelationService::ReceiveNpcRelationGradeEvolveRes",0x38,Yes);
    pwVar8 = L"commonGradeTableRow is Invalid. ID : %d";
    uVar7 = 0x99;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_NpcRelationService::ReceiveNpcRelationGradeEvolveRes",0x38,Yes);
    pwVar8 = L"npcBaseTableRow is Invalid. ID : %d";
    uVar7 = 0x92;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar7,pwVar8);
  FVar6.Data = (FScriptContainerElement *)local_148._padding_;
LAB_14bc0552f:
  if ((FStringFormatArg *)FVar6.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return;
}

// ReceiveNpcRelationGrowRes @ 14bc05570

void __cdecl FDS_NpcRelationService::ReceiveNpcRelationGrowRes(ServerMessages *param_1)

{
  return;
}

// RequestNpcRelationItemGrow @ 14bc121e0

void __cdecl
FDS_NpcRelationService::RequestNpcRelationItemGrow
          (ulong64 param_1,TWeakObjectPtr<UDS_NpcFunctionGift,FWeakObjectPtr> param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FDS_ClientMessage_Twoway *pFVar6;
  bool bVar7;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar8;
  Message *pMVar9;
  UDS_NpcFunctionGift *this;
  DbWorkItem *this_00;
  UObject *pUVar10;
  int *piVar11;
  SqlItemStackableTable *this_01;
  SqlItemEquipmentTable *this_02;
  undefined8 *puVar12;
  ulong64 uVar13;
  int iVar14;
  Arena *pAVar15;
  ulonglong uVar16;
  UObject *pUVar17;
  FWeakObjectPtr *this_03;
  FWeakObjectPtr *pFVar18;
  FWeakObjectPtr local_res10 [2];
  undefined1 local_res20 [8];
  EDS_InventoryType local_a8 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_a0;
  uint local_90;
  FWeakObjectPtr local_88;
  Message *local_80;
  TArray<FDS_NPCGiftItemInfo,TSizedDefaultAllocator<32>_> *local_78;
  UDS_NetworkManager *local_70;
  FDestructionSentinel local_68;
  undefined1 *local_50;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_48;
  
  local_res10[0] = param_2.WeakPtr;
  local_70 = UDS_NetworkManager::GetInst();
  if ((((local_70 != (UDS_NetworkManager *)0x0) &&
       (bVar7 = UDS_NetworkManager::GetIsConnected(local_70), bVar7)) && (param_1 != 0)) &&
     (bVar7 = TWeakObjectPtr<UDS_NpcFunctionGift,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NpcFunctionGift,FWeakObjectPtr> *)local_res10,
                         (void *)0x0), !bVar7)) {
    UDS_PlayerData::GetData((ulong64)&local_88,UDS_PlayerData::MainPlayerEntityID,false);
    bVar7 = FWeakObjectPtr::IsValid(&local_88);
    if (bVar7) {
      pTVar8 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_48);
      local_a0.Object = pTVar8->Object;
      local_a0.SharedReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      if ((local_a0.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = local_a0.Object;
      if (((local_a0.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5398) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_a0.Object)->clientMsg);
        (pFVar6->clientMsg)._impl_._oneof_case_[0] = 0x5398;
        pAVar15 = (Arena *)((pFVar6->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar6->clientMsg)._padding_ & 1) != 0) {
          pAVar15 = (Arena *)(pAVar15->impl_).tag_and_id_;
        }
        pMVar9 = google::protobuf::Arena::
                 DefaultConstruct<client_msg_twoway::NpcRelationItemGrowRequest>(pAVar15);
        (pFVar6->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar9;
      }
      pMVar9 = (pFVar6->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      *(ulong64 *)(pMVar9 + 3) = param_1;
      uVar1 = *(uint *)(pMVar9 + 1);
      *(int *)&pMVar9[3].field_0x8 = param_3;
      *(uint *)(pMVar9 + 1) = uVar1 | 3;
      local_80 = pMVar9;
      this = (UDS_NpcFunctionGift *)FWeakObjectPtr::Get(local_res10);
      local_78 = UDS_NpcFunctionGift::GetNPCGiftBasket(this);
      local_90 = local_78->ArrayNum;
      uVar16 = (ulonglong)(int)local_90;
      this_03 = (FWeakObjectPtr *)(local_78->AllocatorInstance).Data;
      pFVar18 = this_03 + uVar16 * 2;
      while( true ) {
        if (local_78->ArrayNum != (int)uVar16) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FDS_NPCGiftItemInfo_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
        }
        if (this_03 == pFVar18) break;
        bVar7 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)this_03,(void *)0x0);
        if (bVar7) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7751695445566422975>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_NpcRelationService.cpp"
                             ,0x41,"false");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
LAB_14bc125ca:
          this_03 = this_03 + 2;
          uVar16 = (ulonglong)local_90;
        }
        else {
          this_00 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                              ((RepeatedPtrFieldBase *)&pMVar9[1].field_0x8,
                               google::protobuf::Arena::DefaultConstruct<ds_game::DbWorkItem>);
          if (this_00 == (DbWorkItem *)0x0) {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7751695445566422968>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_NpcRelationService.cpp"
                               ,0x48,"false");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            break;
          }
          pUVar10 = FWeakObjectPtr::Get(this_03);
          if (pUVar10[0x13].field_0x1c != '\0') {
            this_02 = ::operator_new(0x88);
            if (this_02 == (SqlItemEquipmentTable *)0x0) {
              this_02 = (SqlItemEquipmentTable *)0x0;
            }
            else {
              ds_game::SqlItemEquipmentTable::SqlItemEquipmentTable(this_02,(Arena *)0x0);
              this_02->_padding_ = (longlong)&___7SqlItemEquipmentTable_ds_game__6B_;
            }
            pUVar10 = FWeakObjectPtr::Get(&local_88);
            (this_02->_impl_).player_uid_ = *(long64 *)&pUVar10[6].field_0x8;
            (this_02->_impl_)._has_bits_.has_bits_[0] =
                 (this_02->_impl_)._has_bits_.has_bits_[0] | 1;
            pUVar10 = FWeakObjectPtr::Get(this_03);
            (this_02->_impl_).item_id_ = *(int *)&pUVar10[8].field_0x10;
            (this_02->_impl_)._has_bits_.has_bits_[0] =
                 (this_02->_impl_)._has_bits_.has_bits_[0] | 4;
            pUVar10 = FWeakObjectPtr::Get(this_03);
            (this_02->_impl_).item_uid_ = *(long64 *)&pUVar10[8].field_0x8;
            (this_02->_impl_)._has_bits_.has_bits_[0] =
                 (this_02->_impl_)._has_bits_.has_bits_[0] | 2;
            ds_game::DbWorkItem::set_allocated_itemequipment(this_00,this_02);
            pMVar9 = local_80;
            goto LAB_14bc125ca;
          }
          iVar2 = this_03[1].ObjectIndex;
          iVar3 = this_03[1].ObjectSerialNumber;
          local_a8[0] = PlayerNormal;
          pUVar10 = FWeakObjectPtr::Get(this_03);
          piVar11 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                    ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                              (&pUVar10[10].field_0x18,1,local_a8);
          iVar4 = *piVar11;
          pUVar10 = FWeakObjectPtr::Get(this_03);
          if (*(int *)&pUVar10[8].field_0x20 != *(int *)&pUVar10[9].field_0x24) {
            pUVar17 = pUVar10 + 10;
            if (*(UObject **)&pUVar10[10].field_0x8 != (UObject *)0x0) {
              pUVar17 = *(UObject **)&pUVar10[10].field_0x8;
            }
            iVar14 = *(int *)(&pUVar17->field_0x0 +
                             (ulonglong)(*(int *)&pUVar10[10].field_0x10 - 1U & 1) * 4);
            if (iVar14 != -1) {
              do {
                if (*(char *)(*(longlong *)&pUVar10[8].field_0x18 + (longlong)iVar14 * 0x10) ==
                    '\x01') {
                  piVar11 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                            ::FindChecked(&pUVar10[8].field_0x18,PlayerNormal);
                  iVar14 = *piVar11;
                  goto LAB_14bc124aa;
                }
                iVar14 = *(int *)(*(longlong *)&pUVar10[8].field_0x18 + 8 + (longlong)iVar14 * 0x10)
                ;
              } while (iVar14 != -1);
            }
          }
          iVar14 = 0;
LAB_14bc124aa:
          if (iVar4 < iVar2) {
            iVar2 = iVar4;
          }
          if (iVar14 < iVar3) {
            iVar3 = iVar14;
          }
          this_01 = ::operator_new(0x40);
          if (this_01 == (SqlItemStackableTable *)0x0) {
            this_01 = (SqlItemStackableTable *)0x0;
          }
          else {
            ds_game::SqlItemStackableTable::SqlItemStackableTable(this_01,(Arena *)0x0);
            this_01->_padding_ = (longlong)&___7SqlItemStackableTable_ds_game__6B_;
          }
          pUVar10 = FWeakObjectPtr::Get(&local_88);
          (this_01->_impl_).player_uid_ = *(long64 *)&pUVar10[6].field_0x8;
          (this_01->_impl_)._has_bits_.has_bits_[0] = (this_01->_impl_)._has_bits_.has_bits_[0] | 1;
          pUVar10 = FWeakObjectPtr::Get(this_03);
          (this_01->_impl_).item_id_ = *(int *)&pUVar10[8].field_0x10;
          uVar1 = (this_01->_impl_)._has_bits_.has_bits_[0];
          (this_01->_impl_).quantity_ = iVar3;
          (this_01->_impl_).quantity_trade_ = iVar2;
          (this_01->_impl_)._has_bits_.has_bits_[0] = uVar1 | 0xe;
          ds_game::DbWorkItem::set_allocated_itemstackable(this_00,this_01);
          uVar16 = (ulonglong)local_90;
          this_03 = this_03 + 2;
          pMVar9 = local_80;
        }
      }
      if ((local_a0.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TDelegateRegistration<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
      ::BindStatic<>((TDelegateRegistration<void___cdecl(server_msg_twoway::ServerMessagesTwoway_const_&),FDefaultDelegateUserPolicy>
                      *)&(local_a0.Object)->SuccessDel,ResponseNpcRelationItemGrow);
      if ((local_a0.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = local_a0.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_a0.Object)->FailDel,(FWriteAccessScope *)&local_68);
      local_50 = &(pFVar6->FailDel).field_0x8;
      puVar12 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_50);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &
                   ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar13 = FDelegateHandle::GenerateNewID();
        puVar12[2] = uVar13;
        *puVar12 = &
                   ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar12[3] = ProcessError;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      UDS_NetworkManager::SendTwoWayPacket(local_70,&local_a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.SharedReferenceCount.ReferenceController);
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7751695445566422990>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_NpcRelationService.cpp"
                         ,0x32,"false");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  return;
}

// ResponseNpcRelationItemGrow @ 14bc1a560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_NpcRelationService::ResponseNpcRelationItemGrow(ServerMessagesTwoway *param_1)

{
  bool bVar1;
  UDS_EventManager *this;
  UDS_LogManager *pUVar2;
  UDS_NPCShopEvent *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ == '\x01') {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar3 = UDS_EventManager::GetEventInternal<UDS_NPCShopEvent>(this);
      if (pUVar3 != (UDS_NPCShopEvent *)0x0) {
        bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &pUVar3->OnBasketGiftCompleted);
        if (bVar1) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pUVar3->OnBasketGiftCompleted).Delegate);
        }
      }
    }
  }
  return;
}

