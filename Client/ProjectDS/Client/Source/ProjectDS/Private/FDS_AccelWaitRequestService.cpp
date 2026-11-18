// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// ProcessError @ 14bbce720

bool __cdecl
FDS_AccelWaitRequestService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// RequestAccelWaitRequest @ 14bbd91f0

void __cdecl
FDS_AccelWaitRequestService::RequestAccelWaitRequest
          (long64 param_1,EDS_WaitCompleteType param_2,
          TWeakObjectPtr<UDS_QuantityDataContainer,FWeakObjectPtr> param_3,bool param_4,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_5)

{
  UObject *pUVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  FDS_ClientMessage_Twoway *pFVar5;
  bool bVar6;
  EDS_ItemUseType EVar7;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar8;
  Message *pMVar9;
  UObject *pUVar10;
  DbWorkItem *this;
  UDS_QuantityData *pUVar11;
  UObject *pUVar12;
  SqlItemStackableTable *this_00;
  undefined8 *puVar13;
  ulong64 uVar14;
  UDS_NetworkManager *this_01;
  atomic<unsigned_char> *paVar15;
  Arena *pAVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  FWeakObjectPtr local_res18;
  undefined1 local_138 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_130;
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118;
  int local_110;
  int local_10c;
  UDS_QuantityData *local_108;
  UObject *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  UObject *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FDestructionSentinel local_a0;
  undefined1 *local_88;
  FDestructionSentinel local_80;
  undefined1 *local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_60 [2];
  undefined4 local_34;
  
  local_res18 = param_3.WeakPtr;
  bVar6 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar6) {
    pTVar8 = MakeShared<FDS_ClientMessage_Twoway,1>(local_60);
    local_130.Object = pTVar8->Object;
    local_130.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_130.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
    if (local_130.Object == (FDS_ClientMessage_Twoway *)0x0) {
      iVar18 = 0x15;
      paVar15 = &bGEnsureHasExecuted<_4278920580922605547>;
    }
    else {
      if ((local_130.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar5 = local_130.Object;
      if (((local_130.Object)->clientMsg)._impl_._oneof_case_[0] != 0x526c) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_130.Object)->clientMsg);
        (pFVar5->clientMsg)._impl_._oneof_case_[0] = 0x526c;
        pAVar16 = (Arena *)((pFVar5->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar5->clientMsg)._padding_ & 1) != 0) {
          pAVar16 = (Arena *)(pAVar16->impl_).tag_and_id_;
        }
        pMVar9 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::AccelWaitRequest>
                           (pAVar16);
        (pFVar5->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar9;
      }
      pMVar9 = (pFVar5->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar9 != (Message *)0x0) {
        *(long64 *)(pMVar9 + 3) = param_1;
        uVar20 = *(uint *)(pMVar9 + 1);
        *(uint *)&pMVar9[3].field_0x8 = (uint)param_2;
        pMVar9[3].field_0xc = param_4;
        *(uint *)(pMVar9 + 1) = uVar20 | 7;
        if (!param_4) {
          pUVar10 = FWeakObjectPtr::Get(&local_res18);
          iVar18 = *(int *)(pUVar10 + 2);
          iStack_f8 = 0;
          local_e0 = 0;
          uStack_f4 = 1;
          local_f0 = &pUVar10[1].field_0x10;
          pUVar1 = pUVar10 + 1;
          iStack_e4 = 0;
          if (iVar18 != 0) {
            puVar22 = *(uint **)&pUVar10[1].field_0x20;
            if (*(uint **)&pUVar10[1].field_0x20 == (uint *)0x0) {
              puVar22 = (uint *)local_f0;
            }
            uVar20 = *puVar22;
            while (uVar20 == 0) {
              lVar17 = (longlong)iStack_f8;
              local_e0 = local_e0 + 0x20;
              iStack_f8 = iStack_f8 + 1;
              iStack_e4 = iVar18;
              if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8)
              goto LAB_14bbd941e;
              uVar20 = puVar22[lVar17 + 1];
            }
            uStack_f4 = -uVar20 & uVar20;
            uVar2 = (ulonglong)uStack_f4 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_110 = (int)lVar17;
            iStack_e4 = local_e0 + -1 + local_110;
            if (iVar18 < iStack_e4) {
              iStack_e4 = iVar18;
            }
          }
LAB_14bbd941e:
          uStack_dc = local_34;
          iStack_d8 = *(int *)&pUVar10[1].field_0x8 - *(int *)&pUVar10[2].field_0xc;
          uVar20 = *(uint *)(pUVar10 + 2);
          uStack_e8 = 0xffffffff;
          TStack_c8.CurrentBitIndex = iStack_e4;
          TStack_c8.UnvisitedBitMask = 0xffffffff;
          uVar19 = uVar20 & 0xffffffe0;
          TStack_c8._padding_ = CONCAT44(uStack_f4,iStack_f8);
          iVar18 = (int)uVar20 >> 5;
          TStack_c8._28_4_ = local_34;
          TStack_c8.BaseBitIndex = local_e0;
          uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
          local_100 = pUVar1;
          local_d0 = pUVar1;
          TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
          if (((int)uVar20 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(uint *)(pUVar10 + 2);
          if (uVar20 != uVar3) {
            puVar21 = &pUVar10[1].field_0x10;
            if (*(undefined1 **)&pUVar10[1].field_0x20 != (undefined1 *)0x0) {
              puVar21 = *(undefined1 **)&pUVar10[1].field_0x20;
            }
            uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar18 * 4);
            while (uVar20 == 0) {
              lVar17 = (longlong)iVar18;
              uVar19 = uVar19 + 0x20;
              iVar18 = iVar18 + 1;
              uVar20 = uVar3;
              if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
              goto LAB_14bbd9520;
              uVar20 = *(uint *)(puVar21 + lVar17 * 4 + 4);
            }
            uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_10c = (int)lVar17;
            uVar20 = local_10c + -1 + uVar19;
            if ((int)uVar3 < (int)uVar20) {
              uVar20 = uVar3;
            }
          }
LAB_14bbd9520:
          do {
            pUVar12 = local_d0;
            if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0[1].field_0xc != (int)uStack_a8) {
              local_138[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
            }
            if (((TStack_c8.CurrentBitIndex == uVar20) &&
                (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&pUVar10[1].field_0x10))
               && (pUVar12 == pUVar1)) break;
            pUVar11 = *(UDS_QuantityData **)
                       (*(longlong *)pUVar12 + 8 + (longlong)TStack_c8.CurrentBitIndex * 0x18);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar11 == (UDS_QuantityData *)0x0) goto LAB_14bbd978b;
            }
            else {
              if (pUVar11 == (UDS_QuantityData *)0x0) goto LAB_14bbd978b;
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            bVar6 = UDS_QuantityData::IsValid(pUVar11);
            if (bVar6) {
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (UE::GC::MarkAsReachable((UObject *)pUVar11),
                 UE::GC::GIsIncrementalReachabilityPending != false)) {
                UE::GC::MarkAsReachable((UObject *)pUVar11);
              }
              local_120.ObjectIndex = 0;
              local_120.ObjectSerialNumber = 0;
              local_108 = pUVar11;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar11);
              }
              FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_108);
              bVar6 = FWeakObjectPtr::IsValid(&local_120);
              if (!bVar6) {
                iVar18 = 0x2a;
                paVar15 = &bGEnsureHasExecuted<_4278920580922605526>;
LAB_14bbd9750:
                bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (paVar15,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_AccelWaitRequestService.cpp"
                                   ,iVar18,"false");
                if (!bVar6) {
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_130.SharedReferenceCount.ReferenceController)
                  ;
                  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(param_5);
                  return;
                }
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              this = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                               ((RepeatedPtrFieldBase *)&pMVar9[1].field_0x8,
                                google::protobuf::Arena::DefaultConstruct<ds_game::DbWorkItem>);
              if (this == (DbWorkItem *)0x0) {
                iVar18 = 0x2d;
                paVar15 = &bGEnsureHasExecuted<_4278920580922605523>;
                goto LAB_14bbd9750;
              }
              pUVar11 = (UDS_QuantityData *)FWeakObjectPtr::Get(&local_120);
              UDS_QuantityData::GetItemUID(pUVar11);
              DS_ItemDataUtil::GetItemDataByUID((long64)&local_118);
              bVar6 = FWeakObjectPtr::IsValid(&local_118);
              if (!bVar6) {
                iVar18 = 0x30;
                paVar15 = &bGEnsureHasExecuted<_4278920580922605520>;
                goto LAB_14bbd9750;
              }
              pUVar12 = FWeakObjectPtr::Get(&local_118);
              EVar7 = DS_ItemDataUtil::GetItemUseType(*(int *)&pUVar12[8].field_0x10);
              if (EVar7 != Equipment) {
                this_00 = ::operator_new(0x40);
                if (this_00 == (SqlItemStackableTable *)0x0) {
                  iVar18 = 0x3d;
                  paVar15 = &bGEnsureHasExecuted<_4278920580922605507>;
                  goto LAB_14bbd9750;
                }
                ds_game::SqlItemStackableTable::SqlItemStackableTable(this_00,(Arena *)0x0);
                this_00->_padding_ = (longlong)&___7SqlItemStackableTable_ds_game__6B_;
                (this_00->_impl_).player_uid_ = UDS_PlayerData::MainPlayerEntityID;
                (this_00->_impl_)._has_bits_.has_bits_[0] =
                     (this_00->_impl_)._has_bits_.has_bits_[0] | 1;
                pUVar12 = FWeakObjectPtr::Get(&local_118);
                (this_00->_impl_).item_id_ = *(int *)&pUVar12[8].field_0x10;
                (this_00->_impl_)._has_bits_.has_bits_[0] =
                     (this_00->_impl_)._has_bits_.has_bits_[0] | 2;
                pUVar12 = FWeakObjectPtr::Get(&local_120);
                iVar18 = (**(code **)(*(longlong *)pUVar12 + 0x2f0))(pUVar12);
                (this_00->_impl_).quantity_ = iVar18;
                (this_00->_impl_)._has_bits_.has_bits_[0] =
                     (this_00->_impl_)._has_bits_.has_bits_[0] | 4;
                pUVar12 = FWeakObjectPtr::Get(&local_120);
                iVar18 = (**(code **)(*(longlong *)pUVar12 + 0x2e8))(pUVar12);
                (this_00->_impl_).quantity_trade_ = iVar18;
                (this_00->_impl_)._has_bits_.has_bits_[0] =
                     (this_00->_impl_)._has_bits_.has_bits_[0] | 8;
                ds_game::DbWorkItem::set_allocated_itemstackable(this,this_00);
              }
            }
            TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
          } while( true );
        }
        if ((local_130.Object == (FDS_ClientMessage_Twoway *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar5 = local_130.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_130.Object)->SuccessDel,(FWriteAccessScope *)&local_a0);
        local_88 = &(pFVar5->SuccessDel).field_0x8;
        puVar13 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_88);
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar13 + 1),
                     param_5);
          uVar14 = FDelegateHandle::GenerateNewID();
          puVar13[4] = uVar14;
          *puVar13 = &
                     ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          puVar13[5] = ResponseAccelWaitRequest;
        }
        if (local_a0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
        }
        if ((local_130.Object == (FDS_ClientMessage_Twoway *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar5 = local_130.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_130.Object)->FailDel,(FWriteAccessScope *)&local_80);
        local_68 = &(pFVar5->FailDel).field_0x8;
        puVar13 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_68);
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = &
                     ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar14 = FDelegateHandle::GenerateNewID();
          puVar13[2] = uVar14;
          *puVar13 = &
                     ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar13[3] = ProcessError;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        this_01 = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this_01,&local_130);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_130.SharedReferenceCount.ReferenceController);
        goto LAB_14bbd9940;
      }
      iVar18 = 0x18;
      paVar15 = &bGEnsureHasExecuted<_4278920580922605544>;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar15,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_AccelWaitRequestService.cpp"
                       ,iVar18,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_130.SharedReferenceCount.ReferenceController);
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4278920580922605550>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_AccelWaitRequestService.cpp"
                       ,0x12,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
LAB_14bbd9940:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
LAB_14bbd9959:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  return;
LAB_14bbd978b:
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4278920580922605534>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_AccelWaitRequestService.cpp"
                     ,0x22,"false");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
  goto LAB_14bbd9959;
}

// ResponseAccelWaitRequest @ 14bbdc8c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_AccelWaitRequestService::ResponseAccelWaitRequest
          (ServerMessagesTwoway *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  UDS_WindowManager *this;
  void *pvVar2;
  float local_res18 [2];
  uint local_res20 [2];
  FDestructionSentinel local_28;
  
  this = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this == (UDS_WindowManager *)0x0) goto LAB_14bbdc9a3;
  }
  else {
    if (this == (UDS_WindowManager *)0x0) {
LAB_14bbdc9a3:
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
      pvVar2 = *(void **)&param_2->field_0x8;
      goto LAB_14bbdc97e;
    }
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this,PopupAccelBase,local_res20,local_res18);
  local_28.AccessType = Reader;
  local_28._4_4_ = 0;
  local_28.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_28.bDestroyed = false;
  local_28._17_3_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi
            (0x1397,Alert_System_01,
             (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> *)
             &local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar2 = *(void **)&param_2->field_0x8;
LAB_14bbdc97e:
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

