// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// ProcessError @ 14bc02440

bool __cdecl FDS_ItemDismantleService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// RequestItemDismantle @ 14bc0ed30

void __cdecl
FDS_ItemDismantleService::RequestItemDismantle
          (ulong64 param_1,
          TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
          *param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  FDS_ClientMessage_Twoway *pFVar4;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *pTVar5;
  bool bVar6;
  EDS_ItemUseType EVar7;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar8;
  Message *pMVar9;
  DbWorkItem *this;
  UDS_QuantityData *this_00;
  UObject *pUVar10;
  SqlItemStackableTable *this_01;
  SqlItemEquipmentTable *this_02;
  undefined8 *puVar11;
  ulong64 uVar12;
  UDS_NetworkManager *this_03;
  Arena *pAVar13;
  longlong lVar14;
  atomic<unsigned_char> *paVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res20 [8];
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_118;
  int local_108;
  int local_104;
  UObject *local_100;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FDestructionSentinel local_98;
  undefined1 *local_80;
  FDestructionSentinel local_78;
  undefined1 *local_60;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58 [2];
  undefined4 local_2c;
  
  pTVar8 = MakeShared<FDS_ClientMessage_Twoway,1>(local_58);
  local_118.Object = pTVar8->Object;
  local_118.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58[0].SharedReferenceCount.ReferenceController);
  if (local_118.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2537006206443061219>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemDismantleService.cpp"
                       ,0x1d,"false");
    if (bVar6) {
code_r0x00014bc0f4ed:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((local_118.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = local_118.Object;
    if (((local_118.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f56) {
      client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                (&(local_118.Object)->clientMsg);
      (pFVar4->clientMsg)._impl_._oneof_case_[0] = 0x4f56;
      pAVar13 = (Arena *)((pFVar4->clientMsg)._padding_ & 0xfffffffffffffffe);
      if (((pFVar4->clientMsg)._padding_ & 1) != 0) {
        pAVar13 = (Arena *)(pAVar13->impl_).tag_and_id_;
      }
      pMVar9 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::ItemDismantleRequest>
                         (pAVar13);
      (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar9;
    }
    pMVar9 = (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
    if (pMVar9 != (Message *)0x0) {
      *(ulong64 *)(pMVar9 + 3) = param_1;
      local_e8 = &param_2->field_0x10;
      uVar18 = *(uint *)(pMVar9 + 1);
      iStack_f0 = 0;
      *(int *)&pMVar9[3].field_0x8 = param_3;
      local_d8 = 0;
      *(uint *)(pMVar9 + 1) = uVar18 | 3;
      uStack_ec = 1;
      iVar16 = *(int *)&param_2->field_0x28;
      iStack_dc = 0;
      if (iVar16 != 0) {
        puVar20 = *(uint **)&param_2->field_0x20;
        if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
          puVar20 = (uint *)local_e8;
        }
        uVar18 = *puVar20;
        while (uVar18 == 0) {
          lVar14 = (longlong)iStack_f0;
          local_d8 = local_d8 + 0x20;
          iStack_f0 = iStack_f0 + 1;
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0)
          goto LAB_14bc0ef13;
          uVar18 = puVar20[lVar14 + 1];
        }
        uStack_ec = -uVar18 & uVar18;
        uVar1 = (ulonglong)uStack_ec * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_108 = (int)lVar14;
        iStack_dc = local_d8 + -1 + local_108;
        if (iVar16 < iStack_dc) {
LAB_14bc0ef13:
          iStack_dc = iVar16;
        }
      }
      uVar18 = *(uint *)&param_2->field_0x28;
      uVar17 = uVar18 & 0xffffffe0;
      uStack_d4 = local_2c;
      iStack_d0 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
      uStack_e0 = 0xffffffff;
      TStack_c0.CurrentBitIndex = iStack_dc;
      TStack_c0.UnvisitedBitMask = 0xffffffff;
      TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
      iVar16 = (int)uVar18 >> 5;
      TStack_c0._28_4_ = local_2c;
      TStack_c0.BaseBitIndex = local_d8;
      uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
      local_f8 = param_2;
      local_c8 = param_2;
      TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e8;
      if (((int)uVar18 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(uint *)&param_2->field_0x28;
      if (uVar18 != uVar2) {
        puVar19 = &param_2->field_0x10;
        if (*(undefined1 **)&param_2->field_0x20 != (undefined1 *)0x0) {
          puVar19 = *(undefined1 **)&param_2->field_0x20;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
        while (uVar18 == 0) {
          lVar14 = (longlong)iVar16;
          uVar17 = uVar17 + 0x20;
          iVar16 = iVar16 + 1;
          uVar18 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_14bc0f030;
          uVar18 = *(uint *)(puVar19 + lVar14 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_104 = (int)lVar14;
        uVar18 = local_104 + -1 + uVar17;
        if ((int)uVar2 < (int)uVar18) {
          uVar18 = uVar2;
        }
      }
LAB_14bc0f030:
      do {
        pTVar5 = local_c8;
        if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_c0.CurrentBitIndex == uVar18) &&
            (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10)) &&
           (pTVar5 == param_2)) {
          if (local_118.Object == (FDS_ClientMessage_Twoway *)0x0) {
            iVar16 = 0x51;
            paVar15 = &bGEnsureHasExecuted<_2537006206443061167>;
LAB_14bc0f4ce:
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (paVar15,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemDismantleService.cpp"
                               ,iVar16,"false");
            if (bVar6) goto code_r0x00014bc0f4ed;
          }
          else {
            if ((local_118.Object == (FDS_ClientMessage_Twoway *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar4 = local_118.Object;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_118.Object)->SuccessDel,(FWriteAccessScope *)&local_98);
            local_80 = &(pFVar4->SuccessDel).field_0x8;
            puVar11 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_80);
            if (puVar11 != (undefined8 *)0x0) {
              *puVar11 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar12 = FDelegateHandle::GenerateNewID();
              puVar11[2] = uVar12;
              *puVar11 = &
                         ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar11[3] = ResponseItemDismantle;
            }
            if (local_98.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
            }
            if ((local_118.Object == (FDS_ClientMessage_Twoway *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar4 = local_118.Object;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_118.Object)->FailDel,(FWriteAccessScope *)&local_78);
            local_60 = &(pFVar4->FailDel).field_0x8;
            puVar11 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_60);
            if (puVar11 != (undefined8 *)0x0) {
              *puVar11 = &
                         ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar12 = FDelegateHandle::GenerateNewID();
              puVar11[2] = uVar12;
              *puVar11 = &
                         ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar11[3] = ProcessError;
            }
            if (local_78.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
            }
            this_03 = UDS_NetworkManager::GetInst();
            UDS_NetworkManager::SendTwoWayPacket(this_03,&local_118);
          }
          goto LAB_14bc0f4ee;
        }
        pUVar10 = *(UObject **)
                   (*(longlong *)pTVar5 + 8 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar10 == (UObject *)0x0) goto LAB_14bc0f4c1;
        }
        else {
          if (pUVar10 == (UObject *)0x0) {
LAB_14bc0f4c1:
            iVar16 = 0x27;
            paVar15 = &bGEnsureHasExecuted<_2537006206443061209>;
            goto LAB_14bc0f4ce;
          }
          UE::GC::MarkAsReachable(pUVar10);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable(pUVar10), UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable(pUVar10);
        }
        local_128.ObjectIndex = 0;
        local_128.ObjectSerialNumber = 0;
        local_100 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar10);
        }
        FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_100);
        bVar6 = FWeakObjectPtr::IsValid(&local_128);
        if (!bVar6) {
          iVar16 = 0x2a;
          paVar15 = &bGEnsureHasExecuted<_2537006206443061206>;
          goto LAB_14bc0f4ce;
        }
        this = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                         ((RepeatedPtrFieldBase *)&pMVar9[1].field_0x8,
                          google::protobuf::Arena::DefaultConstruct<ds_game::DbWorkItem>);
        if (this == (DbWorkItem *)0x0) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2537006206443061203>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemDismantleService.cpp"
                             ,0x2d,"false");
          if (bVar6) goto code_r0x00014bc0f4ed;
          goto LAB_14bc0f4ee;
        }
        this_00 = (UDS_QuantityData *)FWeakObjectPtr::Get(&local_128);
        UDS_QuantityData::GetItemUID(this_00);
        DS_ItemDataUtil::GetItemDataByUID((long64)&local_120);
        bVar6 = FWeakObjectPtr::IsValid(&local_120);
        if (!bVar6) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2537006206443061200>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemDismantleService.cpp"
                             ,0x30,"false");
          if (bVar6) goto code_r0x00014bc0f4ed;
          goto LAB_14bc0f4ee;
        }
        pUVar10 = FWeakObjectPtr::Get(&local_120);
        EVar7 = DS_ItemDataUtil::GetItemUseType(*(int *)&pUVar10[8].field_0x10);
        if (EVar7 == Equipment) {
          this_02 = ::operator_new(0x88);
          if (this_02 == (SqlItemEquipmentTable *)0x0) {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_2537006206443061193>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemDismantleService.cpp"
                               ,0x37,"false");
            if (bVar6) goto code_r0x00014bc0f4ed;
            goto LAB_14bc0f4ee;
          }
          ds_game::SqlItemEquipmentTable::SqlItemEquipmentTable(this_02,(Arena *)0x0);
          this_02->_padding_ = (longlong)&___7SqlItemEquipmentTable_ds_game__6B_;
          (this_02->_impl_).player_uid_ = UDS_PlayerData::MainPlayerEntityID;
          (this_02->_impl_)._has_bits_.has_bits_[0] = (this_02->_impl_)._has_bits_.has_bits_[0] | 1;
          pUVar10 = FWeakObjectPtr::Get(&local_120);
          (this_02->_impl_).item_id_ = *(int *)&pUVar10[8].field_0x10;
          (this_02->_impl_)._has_bits_.has_bits_[0] = (this_02->_impl_)._has_bits_.has_bits_[0] | 4;
          pUVar10 = FWeakObjectPtr::Get(&local_120);
          (this_02->_impl_).item_uid_ = *(long64 *)&pUVar10[8].field_0x8;
          (this_02->_impl_)._has_bits_.has_bits_[0] = (this_02->_impl_)._has_bits_.has_bits_[0] | 2;
          ds_game::DbWorkItem::set_allocated_itemequipment(this,this_02);
        }
        else {
          this_01 = ::operator_new(0x40);
          if (this_01 == (SqlItemStackableTable *)0x0) goto LAB_14bc0f3f0;
          ds_game::SqlItemStackableTable::SqlItemStackableTable(this_01,(Arena *)0x0);
          this_01->_padding_ = (longlong)&___7SqlItemStackableTable_ds_game__6B_;
          (this_01->_impl_).player_uid_ = UDS_PlayerData::MainPlayerEntityID;
          (this_01->_impl_)._has_bits_.has_bits_[0] = (this_01->_impl_)._has_bits_.has_bits_[0] | 1;
          pUVar10 = FWeakObjectPtr::Get(&local_120);
          (this_01->_impl_).item_id_ = *(int *)&pUVar10[8].field_0x10;
          (this_01->_impl_)._has_bits_.has_bits_[0] = (this_01->_impl_)._has_bits_.has_bits_[0] | 2;
          pUVar10 = FWeakObjectPtr::Get(&local_128);
          iVar16 = (**(code **)(*(longlong *)pUVar10 + 0x2f0))(pUVar10);
          (this_01->_impl_).quantity_ = iVar16;
          (this_01->_impl_)._has_bits_.has_bits_[0] = (this_01->_impl_)._has_bits_.has_bits_[0] | 4;
          pUVar10 = FWeakObjectPtr::Get(&local_128);
          iVar16 = (**(code **)(*(longlong *)pUVar10 + 0x2e8))(pUVar10);
          (this_01->_impl_).quantity_trade_ = iVar16;
          (this_01->_impl_)._has_bits_.has_bits_[0] = (this_01->_impl_)._has_bits_.has_bits_[0] | 8;
          ds_game::DbWorkItem::set_allocated_itemstackable(this,this_01);
        }
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      } while( true );
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2537006206443061216>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemDismantleService.cpp"
                       ,0x20,"false");
    if (bVar6) goto code_r0x00014bc0f4ed;
  }
LAB_14bc0f4ee:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  return;
LAB_14bc0f3f0:
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2537006206443061180>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemDismantleService.cpp"
                     ,0x44,"false");
  if (bVar6) goto code_r0x00014bc0f4ed;
  goto LAB_14bc0f4ee;
}

// ResponseItemDismantle @ 14bc19e10

void __cdecl FDS_ItemDismantleService::ResponseItemDismantle(ServerMessagesTwoway *param_1)

{
  return;
}

