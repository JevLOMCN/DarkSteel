// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// ProcessError @ 14bc02460

bool __cdecl FDS_ItemGemService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// RequestItemGemSocketEquip @ 14bc0f810

void __cdecl
FDS_ItemGemService::RequestItemGemSocketEquip
          (long64 param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  FDS_ClientMessage_Twoway *pFVar4;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  bool bVar6;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar7;
  Message *pMVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  UDS_NetworkManager *this;
  Arena *pAVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_128 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_120;
  int local_110;
  int local_10c;
  undefined8 local_108;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FDestructionSentinel local_a0;
  undefined1 *local_88;
  FDestructionSentinel local_80;
  undefined1 *local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_60 [2];
  undefined4 local_34;
  
  pTVar7 = MakeShared<FDS_ClientMessage_Twoway,1>(local_60);
  local_120.Object = pTVar7->Object;
  local_120.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_120.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60[0].SharedReferenceCount.ReferenceController);
  if (local_120.Object == (FDS_ClientMessage_Twoway *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.SharedReferenceCount.ReferenceController);
    *(undefined4 *)&param_2->field_0x48 = 0;
    if (*(void **)&param_2->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&param_2->field_0x40);
    }
  }
  else {
    if ((local_120.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = local_120.Object;
    if (((local_120.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f52) {
      client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                (&(local_120.Object)->clientMsg);
      (pFVar4->clientMsg)._impl_._oneof_case_[0] = 0x4f52;
      pAVar11 = (Arena *)((pFVar4->clientMsg)._padding_ & 0xfffffffffffffffe);
      if (((pFVar4->clientMsg)._padding_ & 1) != 0) {
        pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
      }
      pMVar8 = google::protobuf::Arena::
               DefaultConstruct<client_msg_twoway::ItemGemSocketEquipRequest>(pAVar11);
      (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar8;
    }
    pMVar8 = (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
    if (pMVar8 == (Message *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
    }
    else {
      *(long64 *)&pMVar8[4].field_0x8 = param_1;
      *(uint *)(pMVar8 + 1) = *(uint *)(pMVar8 + 1) | 1;
      local_f0 = &param_2->field_0x10;
      iVar13 = *(int *)&param_2->field_0x28;
      iStack_f8 = 0;
      uStack_f4 = 1;
      local_e0 = 0;
      iStack_e4 = 0;
      if (iVar13 != 0) {
        puVar16 = *(uint **)&param_2->field_0x20;
        if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
          puVar16 = (uint *)local_f0;
        }
        uVar14 = *puVar16;
        local_e0 = 0;
        while (uVar14 == 0) {
          lVar12 = (longlong)iStack_f8;
          local_e0 = local_e0 + 0x20;
          iStack_f8 = iStack_f8 + 1;
          iStack_e4 = iVar13;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8)
          goto LAB_14bc0f9b1;
          uVar14 = puVar16[lVar12 + 1];
        }
        uStack_f4 = -uVar14 & uVar14;
        uVar1 = (ulonglong)uStack_f4 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_110 = (int)lVar12;
        iStack_e4 = local_e0 + -1 + local_110;
        if (iVar13 < iStack_e4) {
          iStack_e4 = iVar13;
        }
      }
LAB_14bc0f9b1:
      uVar14 = *(uint *)&param_2->field_0x28;
      uStack_dc = local_34;
      iStack_d8 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
      uStack_e8 = 0xffffffff;
      uVar17 = uVar14 & 0xffffffe0;
      TStack_c8.CurrentBitIndex = iStack_e4;
      TStack_c8.UnvisitedBitMask = 0xffffffff;
      TStack_c8._padding_ = CONCAT44(uStack_f4,iStack_f8);
      iVar13 = (int)uVar14 >> 5;
      TStack_c8._28_4_ = local_34;
      TStack_c8.BaseBitIndex = local_e0;
      uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
      local_100 = param_2;
      local_d0 = param_2;
      TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
      if (((int)uVar14 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(uint *)&param_2->field_0x28;
      if (uVar14 != uVar2) {
        puVar15 = &param_2->field_0x10;
        if (*(undefined1 **)&param_2->field_0x20 != (undefined1 *)0x0) {
          puVar15 = *(undefined1 **)&param_2->field_0x20;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
        while (uVar14 == 0) {
          lVar12 = (longlong)iVar13;
          uVar17 = uVar17 + 0x20;
          iVar13 = iVar13 + 1;
          uVar14 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14bc0fac0;
          uVar14 = *(uint *)(puVar15 + lVar12 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_10c = (int)lVar12;
        uVar14 = local_10c + -1 + uVar17;
        if ((int)uVar2 < (int)uVar14) {
          uVar14 = uVar2;
        }
      }
LAB_14bc0fac0:
      while( true ) {
        pTVar5 = local_d0;
        if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
          local_128[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
        }
        if (((TStack_c8.CurrentBitIndex == uVar14) &&
            (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10)) &&
           (pTVar5 == param_2)) break;
        local_108 = *(undefined8 *)
                     (*(longlong *)pTVar5 + (longlong)TStack_c8.CurrentBitIndex * 0x10);
        google::protobuf::RepeatedField<int>::Add
                  ((RepeatedField<int> *)&pMVar8[1].field_0x8,(int)local_108);
        google::protobuf::RepeatedField<int>::Add
                  ((RepeatedField<int> *)(pMVar8 + 3),local_108._4_4_);
        TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
      }
      if (local_120.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5291643920512450527>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemGemService.cpp"
                           ,0x21,"false");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if ((local_120.Object == (FDS_ClientMessage_Twoway *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar4 = local_120.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_120.Object)->SuccessDel,(FWriteAccessScope *)&local_a0);
        local_88 = &(pFVar4->SuccessDel).field_0x8;
        puVar9 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_88);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar9[3] = ResponseItemGemSocketEquip;
        }
        if (local_a0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
        }
        if ((local_120.Object == (FDS_ClientMessage_Twoway *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar4 = local_120.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_120.Object)->FailDel,(FWriteAccessScope *)&local_80);
        local_68 = &(pFVar4->FailDel).field_0x8;
        puVar9 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_68);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar9[3] = ProcessError;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        this = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this,&local_120);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
    }
    *(undefined4 *)&param_2->field_0x48 = 0;
    if (*(void **)&param_2->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&param_2->field_0x40);
    }
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_2);
  return;
}

// ResponseItemGemSocketEquip @ 14bc19e40

void __cdecl FDS_ItemGemService::ResponseItemGemSocketEquip(ServerMessagesTwoway *param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x9ecf,Alert_System_01,&local_28);
  return;
}

