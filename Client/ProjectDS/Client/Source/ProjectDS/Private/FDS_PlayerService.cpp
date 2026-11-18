// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// InitCharOriginStatus @ 14bbf92e0

void __cdecl FDS_PlayerService::InitCharOriginStatus(ulong64 *param_1)

{
  return;
}

// Initialize @ 14bbf94d0

void __cdecl FDS_PlayerService::Initialize(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &OnPlayerExpChangeEventDelegate,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnPlayerExpChangeEventDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// OnCheckPlayerInfoByItem @ 14bbfa9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_PlayerService::OnCheckPlayerInfoByItem(void)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_140,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PlayerService::OnCheckPlayerInfoByItem",0x2a,Yes);
    pwVar4 = L"playerData is nullptr";
    uVar3 = 0x12f;
  }
  else {
    FWeakObjectPtr::Get(&local_140);
    UDS_CharInfoData::GetData((ulong64)&local_148);
    bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_148,(void *)0x0);
    if (!bVar1) {
      bVar1 = FDS_CharacterService::CanUseItemForLevelUp
                        ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_148);
      if (bVar1) {
        return true;
      }
      bVar1 = FDS_CharacterService::CanAscendWithCost
                        ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_148);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PlayerService::OnCheckPlayerInfoByItem",0x2a,Yes);
    pwVar4 = L"charInfo is nullptr";
    uVar3 = 0x136;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// ProcessError @ 14bc025d0

bool __cdecl FDS_PlayerService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  if (param_1->ErrorCode == PlayerExpNotGain) {
    UDS_PlayerData::ShowPlayerExpNotChangeMessage();
    return true;
  }
  return false;
}

// ReceivePlayerExpChangeResponse @ 14bc05b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_PlayerService::ReceivePlayerExpChangeResponse(PlayerExpChangeResponse *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  UDS_PlayerData *this;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_PlayerData::GetData((ulong64)local_148,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerService::ReceivePlayerExpChangeResponse",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x6e,L"Failed to Get PlayerData.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6293279522854797201>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_PlayerService.cpp"
                       ,0x6f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = false;
  }
  else {
    this = (UDS_PlayerData *)FWeakObjectPtr::Get(local_148);
    UDS_PlayerData::SetDataByPlayerExpChangeResponse(this,param_1);
    TMulticastDelegate<void___cdecl(__int64),FDefaultDelegateUserPolicy>::Broadcast
              (&OnPlayerExpChangeEventDelegate,(param_1->_impl_).delta_exp_);
    bVar2 = true;
  }
  return bVar2;
}

// ReceivePlayerGradeChangeResponse @ 14bc05cd0

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

bool __cdecl FDS_PlayerService::ReceivePlayerGradeChangeResponse(PlayerGradeChangeResponse *param_1)

{
  uint *puVar1;
  ulong64 uVar2;
  longlong lVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  UDS_DataManager *pUVar9;
  UDS_LogManager *pUVar10;
  UDS_PlayerData *this;
  UDS_ChattingManager *this_00;
  UObject *pUVar11;
  UDS_EntityManager *this_01;
  FDS_EntityBase *this_02;
  FDS_StringUiTableRow *pFVar12;
  ulonglong uVar13;
  int iVar14;
  ForAnyElementType FVar15;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar16;
  uint uVar17;
  wchar_t *pwVar18;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar19;
  undefined8 *puVar20;
  uint uVar21;
  ForElementType<unsigned_int> FVar22;
  ulonglong uVar23;
  undefined1 auStackY_268 [32];
  wchar_t *pwVar24;
  EDS_AbilityTagType local_228 [8];
  FString local_220;
  FSparseArrayAllocationInfo local_210;
  undefined4 local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  int local_1f0 [2];
  FWeakObjectPtr local_1e8;
  FString local_1e0;
  longlong *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  ForElementType<unsigned_int> local_188;
  uint local_180;
  int local_17c;
  int local_178;
  int local_174;
  FScriptContainerElement local_170 [8];
  ForAnyElementType local_168;
  uint local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pUVar9 = UDS_DataManager::GetInst();
  if (pUVar9 == (UDS_DataManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_PlayerService::ReceivePlayerGradeChangeResponse",0x33,Yes);
    pwVar24 = L"dataMgr is nullptr.";
    uVar8 = 0x7e;
  }
  else {
    uVar2 = (param_1->_impl_).entity_id_;
    local_1f0[0] = (param_1->_impl_).grade_;
    UDS_PlayerData::GetData((ulong64)&local_1e8,uVar2,false);
    bVar5 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_1e8,(void *)0x0);
    if (bVar5) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar10 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_PlayerService::ReceivePlayerGradeChangeResponse",0x33,Yes);
      pwVar24 = L"Failed to Get PlayerData.";
      uVar8 = 0x88;
    }
    else {
      this = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_1e8);
      UDS_PlayerData::SetDataByPlayerGradeChangeResponse(this,param_1);
      this_00 = UDS_ChattingManager::GetInst();
      if (this_00 != (UDS_ChattingManager *)0x0) {
        if (uVar2 != UDS_PlayerData::MainPlayerEntityID) {
          if ((param_1->_impl_).is_party_ != true) {
            return true;
          }
          pFVar12 = FDS_StringUiTableRow::GetRef(0x2b00,true);
          local_17c = 0x80;
          local_1a8._0_8_ = (FScriptContainerElement *)0x0;
          local_1a8._8_8_ = 0;
          local_188 = (ForElementType<unsigned_int>)0x0;
          local_180 = 0;
          local_174 = 0;
          local_168.Data = (FScriptContainerElement *)0x0;
          local_160 = 0;
          local_178 = -1;
          pUVar11 = FWeakObjectPtr::Get(&local_1e8);
          local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_220.Data.ArrayNum = 0;
          local_220.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_220,1);
          TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          ::Emplace<FString,FString_const_&>
                    ((TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                      *)local_1a8,&local_220,(FString *)&pUVar11[7].field_0x20);
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_220.Data.ArrayNum = 0;
          local_220.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_220,2);
          TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          ::Emplace<FString,int_&>
                    ((TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                      *)local_1a8,&local_220,local_1f0);
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          if ((pFVar12->Text).Data.ArrayNum == 0) {
            pwVar24 = L"";
          }
          else {
            pwVar24 = (wchar_t *)(pFVar12->Text).Data.AllocatorInstance.Data;
          }
          ::FString::FormatImpl
                    (&local_1e0,pwVar24,
                     (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                      *)local_1a8);
          UDS_ChattingManager::SendChattingMessage(this_00,Party,&local_1e0);
          goto LAB_14bc064cf;
        }
        pUVar11 = FWeakObjectPtr::Get(&local_1e8);
        uVar2 = *(ulong64 *)&pUVar11[8].field_0x10;
        this_01 = UDS_EntityManager::GetInst();
        if (this_01 == (UDS_EntityManager *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          if (pUVar10 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar10 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_PlayerService::ReceivePlayerGradeChangeResponse",0x33,Yes);
          pwVar24 = L"entityMng is nullptr.";
          uVar8 = 0x9e;
          goto LAB_14bc05d53;
        }
        this_02 = UDS_EntityManager::FindEntityBase(this_01,uVar2);
        if (this_02 == (FDS_EntityBase *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          if (pUVar10 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar10 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_PlayerService::ReceivePlayerGradeChangeResponse",0x33,Yes);
          UDS_LogManager::PrintLog
                    (pUVar10,1,Warning,local_158.Ptr,0xa5,L"entityBase is nullptr. (%d)");
          goto LAB_14bc05f60;
        }
        pTVar16 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
        local_210._0_8_ = 0;
        local_228[0] = PlayerGradeUp;
        FDS_EntityBase::TryActivateAbility
                  (this_02,local_228,(TObjectPtr<UWN_AbilityContext>)&local_210);
        pFVar12 = FDS_StringUiTableRow::GetRef(0x2aff,true);
        local_1a8._0_8_ = (FScriptContainerElement *)0x0;
        local_1a8._8_8_ = 0;
        local_188 = (ForElementType<unsigned_int>)0x0;
        iVar14 = 0;
        local_180 = 0;
        local_17c = 0x80;
        local_178 = -1;
        local_174 = 0;
        local_168.Data = (FScriptContainerElement *)0x0;
        local_160 = 0;
        local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_220.Data.ArrayNum = 0;
        local_220.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_220,1);
        if (local_174 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x38,8,1,(ForAnyElementType *)local_1a8,(int *)(local_1a8 + 8),
                             (int *)(local_1a8 + 0xc));
          iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)local_198,1);
          FVar22 = (ForElementType<unsigned_int>)local_198;
          if (local_188 != (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_188;
          }
          uVar8 = iVar7 >> 0x1f & 0x1f;
          iVar7 = iVar7 + uVar8;
          puVar1 = (uint *)((longlong)FVar22 + (longlong)(iVar7 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar8 & 0x1f));
          iVar7 = local_178;
        }
        else {
          local_174 = local_174 + -1;
          iVar7 = *(int *)(local_1a8._0_8_ + (longlong)local_178 * 0x38 + 4);
          iVar6 = local_178;
          if (local_174 != 0) {
            *(undefined4 *)(local_1a8._0_8_ + (longlong)iVar7 * 0x38) = 0xffffffff;
          }
        }
        local_178 = iVar7;
        TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_1a8,&local_210,iVar6);
        pvVar4 = local_210.Pointer;
        pTVar19 = pTVar16;
        if (local_210.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
          *(undefined8 *)local_210.Pointer = 0;
          *(FScriptContainerElement **)local_210.Pointer = local_220.Data.AllocatorInstance.Data;
          local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)((longlong)local_210.Pointer + 8) = local_220.Data.ArrayNum;
          *(int *)((longlong)local_210.Pointer + 0xc) = local_220.Data.ArrayMax;
          local_220.Data.ArrayNum = 0;
          local_220.Data.ArrayMax = 0;
          FStringFormatArg::FStringFormatArg
                    ((FStringFormatArg *)((longlong)local_210.Pointer + 0x10),local_1f0[0]);
          *(undefined4 *)((longlong)pvVar4 + 0x30) = 0xffffffff;
          pTVar19 = pvVar4;
        }
        pwVar24 = L"";
        if (*(int *)&pTVar19->field_0x8 == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = *(wchar_t **)pTVar19;
          iVar14 = *(int *)&pTVar19->field_0x8 + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar18);
        bVar5 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                ::TryReplaceExisting
                          ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                            *)local_1a8,uVar8,pTVar19,&local_210.Index,(bool *)0x0);
        if (!bVar5) {
          uVar21 = 1;
          uVar17 = local_1a8._8_4_ - local_174;
          if (3 < uVar17) {
            uVar23 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
            lVar3 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            uVar21 = 1 << ((byte)lVar3 & 0x1f);
          }
          if (((int)uVar17 < 1) || ((int)uVar21 <= (int)local_160)) {
            uVar8 = local_160 - 1 & uVar8;
            *(uint *)&pTVar19->field_0x34 = uVar8;
            FVar15.Data = local_170;
            if (local_168.Data != (FScriptContainerElement *)0x0) {
              FVar15.Data = local_168.Data;
            }
            uVar23 = (longlong)(int)local_160 - 1U & (longlong)(int)uVar8;
            *(undefined4 *)&pTVar19->field_0x30 = *(undefined4 *)(FVar15.Data + uVar23 * 4);
            *(int *)(FVar15.Data + uVar23 * 4) = local_210.Index;
          }
          else {
            local_160 = uVar21;
            if (local_168.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,0,4)
              ;
            }
            if (uVar21 != 0) {
              uVar8 = uVar21;
              if (uVar21 < 2) {
                if (local_168.Data != (FScriptContainerElement *)0x0) {
                  uVar8 = 0;
                  goto LAB_14bc061ad;
                }
              }
              else {
LAB_14bc061ad:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_168,0,uVar8,4);
              }
              if (0 < (int)uVar21) {
                uVar23 = (ulonglong)uVar21;
                pTVar19 = pTVar16;
                do {
                  FVar15.Data = local_170;
                  if (local_168.Data != (FScriptContainerElement *)0x0) {
                    FVar15.Data = local_168.Data;
                  }
                  uVar13 = (ulonglong)pTVar19 & (longlong)(int)uVar21 - 1U;
                  pTVar19 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
                            &pTVar19->field_0x1;
                  *(undefined4 *)(FVar15.Data + uVar13 * 4) = 0xffffffff;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
              }
            }
            if (local_160 != 0) {
              local_210.Pointer = local_198;
              local_210._0_8_ = 0x100000000;
              uStack_1fc = 0;
              uStack_1f8 = 0;
              if (local_180 != 0) {
                FVar22 = (ForElementType<unsigned_int>)local_198;
                if (local_188 != (ForElementType<unsigned_int>)0x0) {
                  FVar22 = local_188;
                }
                uVar8 = *(uint *)FVar22;
                pTVar19 = pTVar16;
                while (uVar8 == 0) {
                  uStack_1f8 = (int)pTVar19 + 0x20;
                  pTVar19 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
                            (ulonglong)uStack_1f8;
                  iVar14 = (int)pTVar16;
                  uVar8 = iVar14 + 1;
                  pTVar16 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)(ulonglong)uVar8
                  ;
                  local_210._4_4_ = SUB84((ulonglong)local_210._0_8_ >> 0x20,0);
                  local_210.Index = uVar8;
                  if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 <
                      (int)uVar8) goto LAB_14bc062ad;
                  uVar8 = ((uint *)((longlong)FVar22 + 4))[iVar14];
                }
                local_210._4_4_ = -uVar8 & uVar8;
                uVar23 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
                lVar3 = 0x3f;
                if (uVar23 != 0) {
                  for (; uVar23 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                  }
                }
                uStack_1fc = (uStack_1f8 - 1) + (int)lVar3;
                pTVar16 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
                          (ulonglong)uStack_1fc;
                if ((int)local_180 < (int)uStack_1fc) {
LAB_14bc062ad:
                  pTVar16 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
                            (ulonglong)local_180;
                  uStack_1fc = local_180;
                }
              }
              local_200 = 0xffffffff;
              local_1d0 = (longlong *)local_1a8;
              local_1c8.CurrentBitIndex = uStack_1fc;
              local_1c8.UnvisitedBitMask = 0xffffffff;
              local_1c8._28_4_ = uStack_1f4;
              local_1c8.BaseBitIndex = uStack_1f8;
              local_1c8._padding_ = local_210._0_8_;
              local_1c8.Array = local_210.Pointer;
              if ((int)pTVar16 < (int)local_180) {
                do {
                  puVar20 = (undefined8 *)((longlong)(int)pTVar16 * 0x38 + *local_1d0);
                  if (*(int *)(puVar20 + 1) == 0) {
                    pwVar18 = L"";
                    iVar14 = 0;
                  }
                  else {
                    pwVar18 = (wchar_t *)*puVar20;
                    iVar14 = *(int *)(puVar20 + 1) + -1;
                  }
                  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar18);
                  uVar8 = local_160 - 1 & uVar8;
                  *(uint *)((longlong)puVar20 + 0x34) = uVar8;
                  FVar15.Data = local_170;
                  if (local_168.Data != (FScriptContainerElement *)0x0) {
                    FVar15.Data = local_168.Data;
                  }
                  uVar23 = (longlong)(int)local_160 - 1U & (longlong)(int)uVar8;
                  *(undefined4 *)(puVar20 + 6) = *(undefined4 *)(FVar15.Data + uVar23 * 4);
                  *(int *)(FVar15.Data + uVar23 * 4) = (int)pTVar16;
                  local_1c8.UnvisitedBitMask =
                       local_1c8.UnvisitedBitMask & ~local_1c8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c8);
                  pTVar16 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
                            (ulonglong)(uint)local_1c8.CurrentBitIndex;
                } while (local_1c8.CurrentBitIndex < (local_1c8.Array)->NumBits);
              }
            }
          }
        }
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        if ((pFVar12->Text).Data.ArrayNum != 0) {
          pwVar24 = (wchar_t *)(pFVar12->Text).Data.AllocatorInstance.Data;
        }
        ::FString::FormatImpl
                  (&local_1e0,pwVar24,
                   (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                    *)local_1a8);
        UDS_ChattingManager::AddSystemMessage(System,&local_1e0);
LAB_14bc064cf:
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        local_160 = 0;
        if (local_168.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_1a8);
        return true;
      }
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar10 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_PlayerService::ReceivePlayerGradeChangeResponse",0x33,Yes);
      pwVar24 = L"chattingMgr is nullptr.";
      uVar8 = 0x91;
    }
  }
LAB_14bc05d53:
  UDS_LogManager::PrintLog(pUVar10,1,Warning,local_158.Ptr,uVar8,pwVar24);
LAB_14bc05f60:
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// RequestPlayerGradeCapUp @ 14bc12b90

void __cdecl FDS_PlayerService::RequestPlayerGradeCapUp(void)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x14) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x14;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PlayerGradeCapUpRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  if ((pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ != (Message *)0x0) {
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
      puVar6[3] = ResponsePlayerGradeCapUp;
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

// RequestPlayerIconChange @ 14bc12da0

void __cdecl FDS_PlayerService::RequestPlayerIconChange(int param_1)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x52d1) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x52d1;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PlayerIconChangeRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(int *)&pMVar5[1].field_0x8 = param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
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
      puVar6[3] = ResponsePlayerIconChange;
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

// RequestPlayerIconOpen @ 14bc12fc0

void __cdecl FDS_PlayerService::RequestPlayerIconOpen(int param_1)

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
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x52d0) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x52d0;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PlayerIconOpenRequest>
                       (pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  pMVar5 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar5 != (Message *)0x0) {
    *(int *)&pMVar5[1].field_0x8 = param_1;
    *(uint *)(pMVar5 + 1) = *(uint *)(pMVar5 + 1) | 1;
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
      puVar6[3] = ResponsePlayerIconOpen;
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

// ResponsePlayerGradeCapUp @ 14bc1aa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PlayerService::ResponsePlayerGradeCapUp(ServerMessagesTwoway *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_PlayerData *this;
  PlayerGradeCapUpResponseDefaultTypeInternal *pPVar4;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_1->_impl_)._oneof_case_[0] == 0x14) {
    pPVar4 = (PlayerGradeCapUpResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pPVar4 = &server_msg_twoway::_PlayerGradeCapUpResponse_default_instance_;
  }
  UDS_PlayerData::GetData((ulong64)&local_158,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PlayerService::ResponsePlayerGradeCapUp",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x42,L"Failed to Get PlayerData.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_PlayerService.cpp"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_158);
    UDS_PlayerData::SetDataByPlayerGradeCapUpResponse(this,&pPVar4->_instance);
    local_150._0_8_ = 0;
    local_150._8_8_ = 0;
    local_150._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x2b03,None,&local_150);
  }
  return;
}

// ResponsePlayerIconChange @ 14bc1ab50

void __cdecl FDS_PlayerService::ResponsePlayerIconChange(ServerMessagesTwoway *param_1)

{
  return;
}

// ResponsePlayerIconOpen @ 14bc1ab60

void __cdecl FDS_PlayerService::ResponsePlayerIconOpen(ServerMessagesTwoway *param_1)

{
  return;
}

// SendActionPointCharge @ 14bc1b000

bool __cdecl FDS_PlayerService::SendActionPointCharge(void)

{
  bool bVar1;
  UDS_ContentManager *this;
  UDS_NetworkManager *this_00;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 300) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 300;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::ActionPointCurrencyChargeRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::ActionPointCurrencyChargeRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (((local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) &&
      (this = UDS_ContentManager::GetInst(), this != (UDS_ContentManager *)0x0)) &&
     (bVar1 = UDS_ContentManager::CheckValidPacket(this,(Message *)&local_28), bVar1)) {
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      UDS_NetworkManager::SendPacket(this_00,&local_28);
    }
    client_msg::ClientMessages::~ClientMessages(&local_28);
    return true;
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return false;
}

