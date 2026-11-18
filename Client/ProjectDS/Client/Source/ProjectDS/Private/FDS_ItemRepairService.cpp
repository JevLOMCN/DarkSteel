// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// ProcessError @ 14bc02480

bool __cdecl FDS_ItemRepairService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (param_1->ErrorCode == InventorySlotShortage) {
    UDS_UIMessageManager::GetInst();
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x9c6f,Alert_None_01,&local_28);
  }
  return true;
}

// ReceiveItemDurabilityAlertRes @ 14bc04d60

void __cdecl FDS_ItemRepairService::ReceiveItemDurabilityAlertRes(ServerMessages *param_1)

{
  ItemDurabilityAlertResponseDefaultTypeInternal *pIVar1;
  long64 lVar2;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x53fd) {
    pIVar1 = *(ItemDurabilityAlertResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pIVar1 = &server_msg::_ItemDurabilityAlertResponse_default_instance_;
  }
  if (-1 < *(int *)&((Message *)((longlong)pIVar1 + 0x10))->field_0x8) {
    if (*(int *)&((Message *)((longlong)pIVar1 + 0x10))->field_0x8 < 1) {
      UDS_UIMessageManager::GetInst();
      lVar2 = 0x9fcb;
    }
    else {
      UDS_UIMessageManager::GetInst();
      lVar2 = 0x9fca;
    }
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(lVar2,Alert_None_01,&local_28);
  }
  return;
}

// ReceiveItemRepair @ 14bc04dd0

void __cdecl FDS_ItemRepairService::ReceiveItemRepair(ServerMessagesTwoway *param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4f5f) {
    UDS_UIMessageManager::GetInst();
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x9fef,Complete_None_01,&local_28);
  }
  return;
}

// ReceiveItemRestoreCancelResponse @ 14bc04e20

void __cdecl FDS_ItemRepairService::ReceiveItemRestoreCancelResponse(ServerMessagesTwoway *param_1)

{
  bool bVar1;
  UDS_ItemRepairEvent *pUVar2;
  
  pUVar2 = UDS_ItemRepairEvent::GetEvent();
  if (pUVar2 != (UDS_ItemRepairEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnReceiveRestoreCancelResult);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnReceiveRestoreCancelResult).Delegate);
      return;
    }
  }
  return;
}

// ReceiveItemRestoreCompleteResponse @ 14bc04e70

void __cdecl
FDS_ItemRepairService::ReceiveItemRestoreCompleteResponse(ServerMessagesTwoway *param_1)

{
  return;
}

// ReceiveRegisterRestoreWaitComplete @ 14bc088e0

void __cdecl
FDS_ItemRepairService::ReceiveRegisterRestoreWaitComplete(ServerMessagesTwoway *param_1)

{
  bool bVar1;
  UDS_ItemRepairEvent *pUVar2;
  
  pUVar2 = UDS_ItemRepairEvent::GetEvent();
  if (pUVar2 != (UDS_ItemRepairEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnReceivedRegisterRestoreWaitCompleteResult);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnReceivedRegisterRestoreWaitCompleteResult).Delegate);
      return;
    }
  }
  return;
}

// SendItemRepair @ 14bc1c2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_ItemRepairService::SendItemRepair
          (ulong64 param_1,
          TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
          *param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  FDS_ClientMessage_Twoway *pFVar4;
  TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
  *pTVar5;
  bool bVar6;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  Message *pMVar10;
  void *pvVar11;
  UDS_NetworkManager *this;
  UDS_LogManager *pUVar12;
  Arena *pAVar13;
  longlong lVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  int *piVar21;
  undefined1 auStackY_298 [32];
  undefined1 local_268;
  undefined1 local_267 [7];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_260;
  int local_250;
  int local_24c;
  Message *local_248;
  TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
  *local_240;
  int iStack_238;
  uint uStack_234;
  undefined1 *local_230;
  undefined4 uStack_228;
  int iStack_224;
  int local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  TMap<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
  *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  FDestructionSentinel local_1e0;
  undefined1 *local_1c8;
  FDestructionSentinel local_1c0;
  undefined1 *local_1a8;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_1a0;
  int local_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  undefined4 local_164;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pTVar7 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_1a0);
  local_260.Object = pTVar7->Object;
  local_260.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_260.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_260.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_260.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
  if ((local_260.Object == (FDS_ClientMessage_Twoway *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = local_260.Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(local_260.Object)->SuccessDel,(FWriteAccessScope *)&local_1e0);
  local_1c8 = &(pFVar4->SuccessDel).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_1c8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = ReceiveItemRepair;
  }
  if (local_1e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
  }
  if ((local_260.Object == (FDS_ClientMessage_Twoway *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = local_260.Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_260.Object)->FailDel,
             (FWriteAccessScope *)&local_1c0);
  local_1a8 = &(pFVar4->FailDel).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_1a8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = ProcessError;
  }
  if (local_1c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
  }
  if ((local_260.Object == (FDS_ClientMessage_Twoway *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = local_260.Object;
  if (((local_260.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f5f) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_260.Object)->clientMsg);
    (pFVar4->clientMsg)._impl_._oneof_case_[0] = 0x4f5f;
    pAVar13 = (Arena *)((pFVar4->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar4->clientMsg)._padding_ & 1) != 0) {
      pAVar13 = (Arena *)(pAVar13->impl_).tag_and_id_;
    }
    pMVar10 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::ItemRepairRequest>
                        (pAVar13);
    (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar10;
  }
  pMVar10 = (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  local_248 = pMVar10;
  if (pMVar10 != (Message *)0x0) {
    *(ulong64 *)(pMVar10 + 3) = param_1;
    iStack_238 = 0;
    uVar18 = *(uint *)(pMVar10 + 1);
    *(int *)&pMVar10[3].field_0x8 = param_3;
    local_230 = &param_2->field_0x10;
    *(uint *)(pMVar10 + 1) = uVar18 | 3;
    iVar15 = *(int *)&param_2->field_0x28;
    local_220 = 0;
    uStack_234 = 1;
    iStack_224 = 0;
    if (iVar15 != 0) {
      puVar20 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar20 = (uint *)local_230;
      }
      uVar18 = *puVar20;
      while (uVar18 == 0) {
        lVar14 = (longlong)iStack_238;
        local_220 = local_220 + 0x20;
        iStack_238 = iStack_238 + 1;
        iStack_224 = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_238)
        goto LAB_14bc1c56e;
        uVar18 = puVar20[lVar14 + 1];
      }
      uStack_234 = -uVar18 & uVar18;
      uVar1 = (ulonglong)uStack_234 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_250 = (int)lVar14;
      iStack_224 = local_220 + -1 + local_250;
      if (iVar15 < iStack_224) {
        iStack_224 = iVar15;
      }
    }
LAB_14bc1c56e:
    uVar18 = *(uint *)&param_2->field_0x28;
    uStack_21c = local_164;
    iStack_218 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
    uVar17 = uVar18 & 0xffffffe0;
    uStack_228 = 0xffffffff;
    TStack_208.CurrentBitIndex = iStack_224;
    TStack_208.UnvisitedBitMask = 0xffffffff;
    TStack_208._padding_ = CONCAT44(uStack_234,iStack_238);
    iVar15 = (int)uVar18 >> 5;
    TStack_208._28_4_ = local_164;
    TStack_208.BaseBitIndex = local_220;
    uStack_1e8 = CONCAT44(uStack_214,iStack_218);
    local_240 = param_2;
    local_210 = param_2;
    TStack_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_230;
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
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
      while (uVar18 == 0) {
        lVar14 = (longlong)iVar15;
        uVar17 = uVar17 + 0x20;
        iVar15 = iVar15 + 1;
        uVar18 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14bc1c680;
        uVar18 = *(uint *)(puVar19 + lVar14 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_24c = (int)lVar14;
      uVar18 = local_24c + -1 + uVar17;
      if ((int)uVar2 < (int)uVar18) {
        uVar18 = uVar2;
      }
    }
LAB_14bc1c680:
    do {
      pTVar5 = local_210;
      if (*(int *)&local_210->field_0x8 - *(int *)&local_210->field_0x34 != (int)uStack_1e8) {
        local_268 = 0;
        `TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_268);
      }
      if (((TStack_208.CurrentBitIndex == uVar18) &&
          (TStack_208.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10)) &&
         (pTVar5 == param_2)) {
        this = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendTwoWayPacket(this,&local_260);
        goto LAB_14bc1c831;
      }
      puVar8 = (undefined8 *)((longlong)TStack_208.CurrentBitIndex * 0x20 + *(longlong *)pTVar5);
      pvVar11 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                          ((RepeatedPtrFieldBase *)&pMVar10[1].field_0x8,
                           google::protobuf::Arena::DefaultConstruct<ItemRepairInfo>);
      if (pvVar11 == (void *)0x0) goto LAB_14bc1c78c;
      *(undefined8 *)((longlong)pvVar11 + 0x48) = *puVar8;
      *(uint *)((longlong)pvVar11 + 0x10) = *(uint *)((longlong)pvVar11 + 0x10) | 1;
      iVar15 = *(int *)(puVar8 + 2);
      piVar16 = (int *)puVar8[1];
      piVar21 = piVar16 + (longlong)iVar15 * 4;
      while( true ) {
        if (*(int *)(puVar8 + 2) != iVar15) {
          local_267[0] = 0;
          `TCheckedPointerIterator<FDS_MaterialSlotInfo_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_267);
        }
        if (piVar16 == piVar21) break;
        local_190 = *piVar16;
        iStack_18c = piVar16[1];
        iStack_188 = piVar16[2];
        iStack_184 = piVar16[3];
        if (0 < iStack_18c) {
          google::protobuf::RepeatedField<int>::Add
                    ((RepeatedField<int> *)((longlong)pvVar11 + 0x18),local_190);
          google::protobuf::RepeatedField<int>::Add
                    ((RepeatedField<int> *)((longlong)pvVar11 + 0x30),iStack_18c);
        }
        piVar16 = piVar16 + 4;
      }
      TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
      pMVar10 = local_248;
    } while( true );
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_260.SharedReferenceCount.ReferenceController);
  *(undefined4 *)&param_2->field_0x48 = 0;
  if (*(void **)&param_2->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x40);
  }
LAB_14bc1c861:
  TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,FDS_MaterialSlotInfoArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_2);
  return;
LAB_14bc1c78c:
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4607838767112257482>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemRepairService.cpp"
                     ,0x36,"false");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar12 = UDS_LogManager::GetInst();
  if (pUVar12 != (UDS_LogManager *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_ItemRepairService::SendItemRepair",0x25,Yes);
    UDS_LogManager::PrintLog(pUVar12,1,Warning,local_158.Ptr,0x37,L"itemRepair is nullptr.");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
LAB_14bc1c831:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_260.SharedReferenceCount.ReferenceController);
  *(undefined4 *)&param_2->field_0x48 = 0;
  if (*(void **)&param_2->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x40);
  }
  goto LAB_14bc1c861;
}

// SendItemRestoreCancel @ 14bc1c8a0

void __cdecl
FDS_ItemRepairService::SendItemRestoreCancel(ulong64 param_1,long64 param_2,int param_3)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f61) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x4f61;
    pAVar9 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::ItemRestoreCancelRequest>
                       (pAVar9);
    (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  *(ulong64 *)&pMVar6[1].field_0x8 = param_1;
  uVar1 = *(uint *)(pMVar6 + 1);
  *(long64 *)(pMVar6 + 2) = param_2;
  *(int *)&pMVar6[2].field_0x8 = param_3;
  *(uint *)(pMVar6 + 1) = uVar1 | 7;
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
    puVar7[3] = ReceiveItemRestoreCancelResponse;
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel,
             (FWriteAccessScope *)&local_28);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// SendItemRestoreComplete @ 14bc1cae0

void __cdecl
FDS_ItemRepairService::SendItemRestoreComplete
          (ulong64 param_1,TArray<__int64,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FDS_ClientMessage_Twoway *pFVar4;
  bool bVar5;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar6;
  Message *pMVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  Arena *pAVar10;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar6 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar6->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
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
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar4 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f62) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar4->clientMsg)._impl_._oneof_case_[0] = 0x4f62;
    pAVar10 = (Arena *)((pFVar4->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar4->clientMsg)._padding_ & 1) != 0) {
      pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
    }
    pMVar7 = google::protobuf::Arena::
             DefaultConstruct<client_msg_twoway::ItemRestoreCompleteRequest>(pAVar10);
    (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar7;
  }
  pMVar7 = (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  *(ulong64 *)&pMVar7[1].field_0x8 = param_1;
  uVar1 = *(uint *)(pMVar7 + 1);
  *(int *)&pMVar7[2].field_0x8 = param_3;
  *(uint *)(pMVar7 + 1) = uVar1 | 5;
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (pFVar2 != pFVar2 + (longlong)param_2->ArrayNum * 8) {
    *(undefined8 *)(pMVar7 + 2) = *(undefined8 *)pFVar2;
    *(uint *)(pMVar7 + 1) = uVar1 | 7;
  }
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar4 = local_68.Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
  local_30 = &(pFVar4->SuccessDel).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = ReceiveItemRestoreCompleteResponse;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar4 = local_68.Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel,
             (FWriteAccessScope *)&local_28);
  local_10 = &(pFVar4->FailDel).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = ProcessError;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  this = UDS_NetworkManager::GetInst();
  UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// SendItemRestoreCompleteAll @ 14bc1cd40

void __cdecl FDS_ItemRepairService::SendItemRestoreCompleteAll(ulong64 param_1,int param_2)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f63) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4f63;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::
             DefaultConstruct<client_msg_twoway::ItemRestoreCompleteAllRequest>(pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  *(ulong64 *)&pMVar5[1].field_0x8 = param_1;
  *(int *)(pMVar5 + 2) = param_2;
  *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 3;
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
    puVar6[3] = ReceiveItemRestoreCompleteResponse;
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel,
             (FWriteAccessScope *)&local_28);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// SendRegisterRestoreWaitComplete @ 14bc1dec0

void __cdecl
FDS_ItemRepairService::SendRegisterRestoreWaitComplete(ulong64 param_1,long64 param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  Message *pMVar8;
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
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
  local_30 = &(pFVar3->SuccessDel).field_0x8;
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
    puVar6[3] = ReceiveRegisterRestoreWaitComplete;
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel,
             (FWriteAccessScope *)&local_28);
  local_10 = &(pFVar3->FailDel).field_0x8;
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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f60) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x4f60;
    pAVar9 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar8 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::ItemRestoreRequest>
                       (pAVar9);
    (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar8;
  }
  pMVar8 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar8 != (Message *)0x0) {
    *(ulong64 *)&pMVar8[1].field_0x8 = param_1;
    uVar1 = *(uint *)(pMVar8 + 1);
    *(long64 *)(pMVar8 + 2) = param_2;
    *(int *)&pMVar8[2].field_0x8 = param_3;
    *(uint *)(pMVar8 + 1) = uVar1 | 7;
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

