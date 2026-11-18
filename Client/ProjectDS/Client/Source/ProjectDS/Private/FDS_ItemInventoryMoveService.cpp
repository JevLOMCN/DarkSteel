// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// ProcessError @ 14bc02470

bool __cdecl
FDS_ItemInventoryMoveService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// RequestItemInventoryMove @ 14bc0fd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDS_ItemInventoryMoveService::RequestItemInventoryMove
          (ulong64 param_1,TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> *param_2,
          int param_3)

{
  uint uVar1;
  SqlItemEquipmentTable *pSVar2;
  SqlItemStackableTable *pSVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FDS_ClientMessage_Twoway *pFVar9;
  bool bVar10;
  int iVar11;
  EDS_ItemUseType EVar12;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar13;
  Message *pMVar14;
  DbWorkItem *this;
  Message *pMVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  UDS_NetworkManager *this_00;
  Arena *pAVar18;
  atomic<unsigned_char> *paVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_110;
  FDestructionSentinel local_100;
  undefined1 *local_e8;
  FDestructionSentinel local_e0;
  undefined1 *local_c8;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_c0;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar13 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_c0);
  local_110.Object = pTVar13->Object;
  local_110.SharedReferenceCount.ReferenceController =
       (pTVar13->SharedReferenceCount).ReferenceController;
  if (local_110.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (local_110.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4432989746548965257>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemInventoryMoveService.cpp"
                        ,0x77,"false");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_110.SharedReferenceCount.ReferenceController);
    DestructItems<DS_ItemInventoryMoveData,int>
              ((DS_ItemInventoryMoveData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    pFVar20 = (param_2->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
  }
  else {
    if ((local_110.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar9 = local_110.Object;
    if (((local_110.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f5d) {
      client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                (&(local_110.Object)->clientMsg);
      (pFVar9->clientMsg)._impl_._oneof_case_[0] = 0x4f5d;
      pAVar18 = (Arena *)((pFVar9->clientMsg)._padding_ & 0xfffffffffffffffe);
      if (((pFVar9->clientMsg)._padding_ & 1) != 0) {
        pAVar18 = (Arena *)(pAVar18->impl_).tag_and_id_;
      }
      pMVar14 = google::protobuf::Arena::
                DefaultConstruct<client_msg_twoway::ItemInventoryMoveRequest>(pAVar18);
      (pFVar9->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar14;
    }
    pMVar14 = (pFVar9->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
    if (pMVar14 != (Message *)0x0) {
      *(ulong64 *)(pMVar14 + 3) = param_1;
      uVar1 = *(uint *)(pMVar14 + 1);
      *(int *)&pMVar14[3].field_0x8 = param_3;
      *(uint *)(pMVar14 + 1) = uVar1 | 3;
      uVar8 = _UNK_150631d98;
      uVar6 = ___xmm_00000000ffffffff0000008000000000;
      pFVar20 = (param_2->AllocatorInstance).Data;
      iVar21 = param_2->ArrayNum;
      pFVar22 = pFVar20 + (longlong)iVar21 * 0x58;
      do {
        if (param_2->ArrayNum != iVar21) {
          local_118[0] = 0;
          `TCheckedPointerIterator<DS_ItemInventoryMoveData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_118);
        }
        pFVar9 = local_110.Object;
        uVar7 = ___xmm_00000000ffffffff0000008000000000;
        if (pFVar20 == pFVar22) {
          if (local_110.Object == (FDS_ClientMessage_Twoway *)0x0) {
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4432989746548965242>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemInventoryMoveService.cpp"
                                ,0x86,"false");
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_110.Object)->SuccessDel,(FWriteAccessScope *)&local_100);
            local_e8 = &(pFVar9->SuccessDel).field_0x8;
            puVar16 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_e8);
            if (puVar16 != (undefined8 *)0x0) {
              *puVar16 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar17 = FDelegateHandle::GenerateNewID();
              puVar16[2] = uVar17;
              *puVar16 = &
                         ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar16[3] = ResponseItemInventoryMove;
            }
            if (local_100.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
            }
            if ((local_110.Object == (FDS_ClientMessage_Twoway *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar9 = local_110.Object;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(local_110.Object)->FailDel,(FWriteAccessScope *)&local_e0);
            local_c8 = &(pFVar9->FailDel).field_0x8;
            puVar16 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_c8);
            if (puVar16 != (undefined8 *)0x0) {
              *puVar16 = &
                         ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar17 = FDelegateHandle::GenerateNewID();
              puVar16[2] = uVar17;
              *puVar16 = &
                         ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar16[3] = ProcessError;
            }
            if (local_e0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
            }
            this_00 = UDS_NetworkManager::GetInst();
            if (this_00 != (UDS_NetworkManager *)0x0) {
              UDS_NetworkManager::SendTwoWayPacket(this_00,&local_110);
            }
          }
          goto LAB_14bc102ea;
        }
        local_a8 = *(undefined1 (*) [8])pFVar20;
        local_a0.Data = (FScriptContainerElement *)0x0;
        local_98 = 0;
        local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        ___xmm_00000000ffffffff0000008000000000 = (int)uVar6;
        _UNK_150631d94 = SUB84(uVar6,4);
        local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
        local_90.MaxBits = _UNK_150631d94;
        uStack_70 = uVar8;
        local_60 = (void *)0x0;
        local_58 = 0;
        ___xmm_00000000ffffffff0000008000000000 = uVar7;
        TSet<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
        ::operator=(&local_a0,
                    (TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
                     *)(pFVar20 + 8));
        this = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                         ((RepeatedPtrFieldBase *)&pMVar14[1].field_0x8,
                          google::protobuf::Arena::DefaultConstruct<ds_game::DbWorkItem>);
        if (this == (DbWorkItem *)0x0) {
          iVar21 = 0x82;
          paVar19 = &bGEnsureHasExecuted<_4432989746548965246>;
          goto LAB_14bc100e4;
        }
        iVar11 = DS_ItemDataUtil::ConvertUIDToTID((long64)local_a8);
        EVar12 = DS_ItemDataUtil::GetItemUseType(iVar11);
        uVar1 = (this->_impl_)._oneof_case_[0];
        if (EVar12 == Equipment) {
          if (uVar1 != 10) {
            ds_game::DbWorkItem::clear_Item(this);
            (this->_impl_)._oneof_case_[0] = 10;
            pAVar18 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
            if ((this->_padding_ & 1) != 0) {
              pAVar18 = (Arena *)(pAVar18->impl_).tag_and_id_;
            }
            pMVar15 = google::protobuf::Arena::DefaultConstruct<ds_game::SqlItemEquipmentTable>
                                (pAVar18);
            (this->_impl_).Item_.characterlevel_ = pMVar15;
          }
          pSVar2 = (SqlItemEquipmentTable *)(this->_impl_).Item_.characterlevel_;
          if (pSVar2 == (SqlItemEquipmentTable *)0x0) {
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4432989746548965333>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemInventoryMoveService.cpp"
                                ,0x2b,"false");
            if (bVar10) {
code_r0x00014bc100d6:
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            goto LAB_14bc100d7;
          }
          bVar10 = DS_ItemInventoryMoveData::SetEquipmentItem
                             ((DS_ItemInventoryMoveData *)local_a8,pSVar2);
        }
        else {
          if (uVar1 != 0xb) {
            ds_game::DbWorkItem::clear_Item(this);
            (this->_impl_)._oneof_case_[0] = 0xb;
            pAVar18 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
            if ((this->_padding_ & 1) != 0) {
              pAVar18 = (Arena *)(pAVar18->impl_).tag_and_id_;
            }
            pMVar15 = google::protobuf::Arena::DefaultConstruct<ds_game::SqlItemStackableTable>
                                (pAVar18);
            (this->_impl_).Item_.characterlevel_ = pMVar15;
          }
          pSVar3 = (SqlItemStackableTable *)(this->_impl_).Item_.characterlevel_;
          if (pSVar3 == (SqlItemStackableTable *)0x0) {
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4432989746548965326>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemInventoryMoveService.cpp"
                                ,0x32,"false");
            if (bVar10) goto code_r0x00014bc100d6;
LAB_14bc100d7:
            iVar21 = 0x84;
            paVar19 = &bGEnsureHasExecuted<_4432989746548965244>;
LAB_14bc100e4:
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (paVar19,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemInventoryMoveService.cpp"
                                ,iVar21,"false");
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_58 = 0;
            if (local_60 != (void *)0x0) {
              FMemory::Free(local_60);
            }
            uVar5 = local_98 >> 0x20;
            local_98 = local_98 & 0xffffffff00000000;
            if ((int)uVar5 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x14,4,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
            }
            iVar21 = local_90.MaxBits;
            local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
            uStack_70 = 0xffffffff;
            if (0x80 < (uint)iVar21) {
              local_90.NumBits = 0;
              local_90.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
            }
            if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
            }
            if (local_a0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data);
            }
LAB_14bc102ea:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_110.SharedReferenceCount.ReferenceController);
            DestructItems<DS_ItemInventoryMoveData,int>
                      ((DS_ItemInventoryMoveData *)(param_2->AllocatorInstance).Data,
                       param_2->ArrayNum);
            pFVar20 = (param_2->AllocatorInstance).Data;
            if (pFVar20 == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(pFVar20);
            return;
          }
          bVar10 = DS_ItemInventoryMoveData::SetStackableItem
                             ((DS_ItemInventoryMoveData *)local_a8,pSVar3);
        }
        if (bVar10 == false) goto LAB_14bc100d7;
        local_58 = 0;
        if (local_60 != (void *)0x0) {
          FMemory::Free(local_60);
        }
        uVar5 = local_98 >> 0x20;
        local_98 = local_98 & 0xffffffff00000000;
        if ((int)uVar5 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
        }
        iVar11 = local_90.MaxBits;
        uStack_70 = 0xffffffff;
        local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
        if (0x80 < (uint)iVar11) {
          local_90.NumBits = 0;
          local_90.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
        }
        if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
        }
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data);
        }
        pFVar20 = pFVar20 + 0x58;
      } while( true );
    }
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4432989746548965254>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemInventoryMoveService.cpp"
                        ,0x7a,"false");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_110.SharedReferenceCount.ReferenceController);
    DestructItems<DS_ItemInventoryMoveData,int>
              ((DS_ItemInventoryMoveData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    pFVar20 = (param_2->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
  }
  return;
}

// ResponseItemInventoryMove @ 14bc19e80

void __cdecl FDS_ItemInventoryMoveService::ResponseItemInventoryMove(ServerMessagesTwoway *param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x664bb,Complete_None_01,&local_28);
  return;
}

// ValidateMoveDataAndConvertion @ 14bc21950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EDS_ValidateResult __cdecl
FDS_ItemInventoryMoveService::ValidateMoveDataAndConvertion
          (EDS_InventoryType param_1,EDS_InventoryType param_2,
          TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  EDS_ValidateResult EVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  int *piVar8;
  int *piVar9;
  DS_ItemInventoryMoveQuantityData *pDVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  undefined1 auStack_1d8 [32];
  undefined1 *local_1b8;
  DS_ItemInventoryMoveData *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  EDS_InventoryType local_188 [8];
  EDS_InventoryType local_180 [8];
  EDS_InventoryType local_178 [8];
  undefined1 local_170 [8];
  EDS_InventoryType local_168 [8];
  EDS_InventoryType local_160 [8];
  EDS_InventoryType local_158 [8];
  EDS_InventoryType local_150;
  EDS_InventoryType local_148 [8];
  TArray<DS_ItemInventoryMoveData,TSizedDefaultAllocator<32>_> local_140;
  FWeakObjectPtr local_130;
  int local_128;
  FScriptContainerElement *local_120;
  uint local_118;
  DS_ItemInventoryMoveQuantityData local_114;
  undefined8 local_10c;
  undefined8 local_104;
  FScriptContainerElement *local_f8;
  initializer_list<TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&>_>
  local_e8;
  TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&> local_d8;
  EDS_InventoryType *local_c8;
  undefined8 *local_c0;
  EDS_InventoryType *local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [80];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_150 = param_2;
  local_128 = DS_ItemDataUtil::GetEnabledInventorySlotCount(param_1);
  local_118 = param_3->ArrayNum;
  uVar13 = (ulonglong)(int)local_118;
  pFVar18 = (param_3->AllocatorInstance).Data;
  local_120 = pFVar18 + 8;
  local_f8 = pFVar18 + uVar13 * 0x58;
  while( true ) {
    pFVar3 = local_f8;
    if (param_3->ArrayNum != (int)uVar13) {
      local_170[0] = 0;
      `TCheckedPointerIterator<DS_ItemInventoryMoveData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_170);
    }
    if (pFVar18 == pFVar3) break;
    DS_ItemDataUtil::GetItemDataByUID((long64)&local_130);
    bVar4 = FWeakObjectPtr::IsValid(&local_130);
    if (!bVar4) {
      bVar4 = true;
LAB_14bc21e46:
      DestructItems<DS_ItemInventoryMoveData,int>
                ((DS_ItemInventoryMoveData *)local_140.AllocatorInstance.Data,local_140.ArrayNum);
      if ((DS_ItemInventoryMoveData *)local_140.AllocatorInstance.Data !=
          (DS_ItemInventoryMoveData *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
      return bVar4;
    }
    pUVar6 = FWeakObjectPtr::Get(&local_130);
    pUVar7 = FWeakObjectPtr::Get(&local_130);
    uVar15 = (uint)param_1;
    local_168[0] = param_1;
    piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&pUVar6[0xc].field_0x18,(uint)param_1,local_168);
    iVar16 = *piVar8;
    local_188[0] = param_1;
    piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&pUVar7[10].field_0x18,uVar15,local_188);
    piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                       (&pUVar7[8].field_0x18,(uint)local_188[0],local_188);
    iVar12 = *piVar8;
    iVar17 = *piVar9;
    pUVar6 = FWeakObjectPtr::Get(&local_130);
    iVar16 = iVar16 * *(int *)&pUVar6[0x15].field_0x4 - (iVar12 + iVar17);
    if ((iVar16 != 0) || (local_128 != 0)) {
      pUVar6 = FWeakObjectPtr::Get(&local_130);
      local_180[0] = param_1;
      piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                         (&pUVar6[10].field_0x18,uVar15,local_180);
      piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                         (&pUVar6[8].field_0x18,(uint)local_180[0],local_180);
      iVar12 = *piVar8;
      iVar17 = *piVar9;
      pDVar10 = TMapBase<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
                ::FindChecked(local_120,param_1);
      iVar17 = (pDVar10->UntradableQuantity - (iVar12 + iVar17)) + pDVar10->TradableQuantity;
      iVar16 = iVar17 - iVar16;
      pUVar6 = FWeakObjectPtr::Get(&local_130);
      iVar12 = 1;
      if (1 < *(int *)&pUVar6[0x15].field_0x4) {
        iVar12 = *(int *)&pUVar6[0x15].field_0x4;
      }
      pUVar6 = FWeakObjectPtr::Get(&local_130);
      local_160[0] = PlayerNormal;
      local_160[1] = 3;
      local_114.TradableQuantity = 0;
      local_114.UntradableQuantity = 0;
      local_10c = 0;
      iVar11 = 0;
      if (0 < iVar16) {
        iVar11 = iVar16;
      }
      local_160[2] = 6;
      local_104 = 0;
      iVar12 = local_128 + (((int)(1 / (longlong)iVar12) - iVar11) - iVar12);
      iVar16 = 0;
      if (iVar12 < 0) {
        iVar16 = iVar12;
      }
      local_a8._0_8_ = (EDS_InventoryType *)0x0;
      iVar17 = iVar17 - iVar16 * *(int *)&pUVar6[0x15].field_0x4;
      local_128 = 0;
      if (0 < iVar12) {
        local_128 = iVar12;
      }
      local_d8.Key = local_160;
      local_d8.Value = &local_114;
      local_c8 = local_160 + 1;
      local_c0 = &local_10c;
      local_b8 = local_160 + 2;
      local_b0 = &local_104;
      local_e8._Last =
           (TPairInitializer<EDS_InventoryType_const_&,DS_ItemInventoryMoveQuantityData_const_&> *)
           local_a8;
      local_e8._First = &local_d8;
      TMap<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
      ::
      TMap<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
                (local_a8 + 8,&local_e8);
      pUVar6 = FWeakObjectPtr::Get(&local_130);
      DS_ItemInventoryMoveData::Init
                ((DS_ItemInventoryMoveData *)local_a8,*(long64 *)&pUVar6[8].field_0x8);
      local_158[0] = param_1;
      pUVar6 = FWeakObjectPtr::Get(&local_130);
      piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                         (&pUVar6[10].field_0x18,uVar15,local_158);
      pFVar3 = local_120;
      iVar16 = *piVar8;
      pDVar10 = TMapBase<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
                ::FindChecked(local_120,param_1);
      local_120 = (FScriptContainerElement *)
                  CONCAT44(local_120._4_4_,pDVar10->TradableQuantity - iVar16);
      pUVar6 = FWeakObjectPtr::Get(&local_130);
      if (*(int *)&pUVar6[8].field_0x20 != *(int *)&pUVar6[9].field_0x24) {
        pUVar7 = pUVar6 + 10;
        if (*(UObject **)&pUVar6[10].field_0x8 != (UObject *)0x0) {
          pUVar7 = *(UObject **)&pUVar6[10].field_0x8;
        }
        iVar16 = *(int *)(&pUVar7->field_0x0 +
                         ((ulonglong)(*(int *)&pUVar6[10].field_0x10 - 1) & (ulonglong)param_1) * 4)
        ;
        if (iVar16 != -1) {
          lVar1 = *(longlong *)&pUVar6[8].field_0x18;
          do {
            if (*(EDS_InventoryType *)(lVar1 + (longlong)iVar16 * 0x10) == param_1) {
              piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                       ::FindChecked(&pUVar6[8].field_0x18,param_1);
              iVar16 = *piVar8;
              goto LAB_14bc21c6b;
            }
            iVar16 = *(int *)(lVar1 + 8 + (longlong)iVar16 * 0x10);
          } while (iVar16 != -1);
        }
      }
      iVar16 = 0;
LAB_14bc21c6b:
      pDVar10 = TMapBase<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
                ::FindChecked(pFVar3,param_1);
      iVar16 = pDVar10->UntradableQuantity - iVar16;
      local_178[0] = local_150;
      iVar12 = iVar17;
      if ((int)local_120 < iVar17) {
        iVar12 = (int)local_120;
      }
      iVar11 = iVar17 - iVar12;
      if (iVar16 < iVar17 - iVar12) {
        iVar11 = iVar16;
      }
      local_148[0] = param_1;
      pDVar10 = TMapBase<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
                ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                          (local_a8 + 8,(uint)param_1,local_148);
      pDVar10->TradableQuantity = pDVar10->TradableQuantity + iVar12;
      pDVar10->UntradableQuantity = pDVar10->UntradableQuantity + iVar11;
      pDVar10 = TMapBase<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
                ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                          (local_a8 + 8,(uint)local_178[0],local_178);
      pDVar10->TradableQuantity = pDVar10->TradableQuantity - iVar12;
      pDVar10->UntradableQuantity = pDVar10->UntradableQuantity - iVar11;
      if (local_140.AllocatorInstance.Data <= (DS_ItemInventoryMoveData *)local_a8) {
        if ((FScriptContainerElement *)local_a8 <
            local_140.AllocatorInstance.Data + (longlong)local_140.ArrayMax * 0x58) {
          local_1a0 = (longlong)local_140.ArrayNum;
          local_198 = 0x58;
          local_1b8 = local_a8;
          local_1b0 = (DS_ItemInventoryMoveData *)local_140.AllocatorInstance.Data;
          local_1a8 = (longlong)local_140.ArrayMax;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            EVar5 = (*pcVar2)();
            return EVar5;
          }
        }
      }
      iVar16 = local_140.ArrayNum;
      if (local_140.ArrayNum == local_140.ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&local_140.AllocatorInstance,&local_140.ArrayMax);
      }
      local_140.ArrayNum = iVar16 + 1;
      pFVar14 = local_140.AllocatorInstance.Data + (longlong)iVar16 * 0x58;
      *(undefined8 *)&pFVar14->field_0x0 = local_a8._0_8_;
      *(undefined8 *)(pFVar14 + 8) = 0;
      *(undefined8 *)(pFVar14 + 0x10) = 0;
      *(undefined8 *)(pFVar14 + 0x28) = 0;
      *(undefined4 *)(pFVar14 + 0x30) = 0;
      *(undefined4 *)(pFVar14 + 0x34) = 0x80;
      *(undefined4 *)(pFVar14 + 0x38) = 0xffffffff;
      *(undefined4 *)(pFVar14 + 0x3c) = 0;
      *(undefined8 *)(pFVar14 + 0x48) = 0;
      *(undefined4 *)(pFVar14 + 0x50) = 0;
      TSet<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
      ::operator=(pFVar14 + 8,
                  (TSet<TTuple<EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
                   *)(local_a8 + 8));
      local_58 = 0;
      if ((void *)local_a8._72_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8._72_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (local_a8 + 8);
      local_120 = pFVar3;
    }
    pFVar18 = pFVar18 + 0x58;
    uVar13 = (ulonglong)local_118;
    local_120 = local_120 + 0x58;
  }
  if (param_3 != &local_140) {
    DestructItems<DS_ItemInventoryMoveData,int>
              ((DS_ItemInventoryMoveData *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
    pFVar18 = (param_3->AllocatorInstance).Data;
    if (pFVar18 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar18);
    }
    (param_3->AllocatorInstance).Data = local_140.AllocatorInstance.Data;
    param_3->ArrayNum = local_140.ArrayNum;
    param_3->ArrayMax = local_140.ArrayMax;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  bVar4 = param_3->ArrayNum == 0;
  goto LAB_14bc21e46;
}

