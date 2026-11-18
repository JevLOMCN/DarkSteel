// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// AltarBossSummonError @ 14bbab8d0

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
FDS_GimmickService::AltarBossSummonError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  AltarBossSummonResponseDefaultTypeInternal *pAVar6;
  undefined1 auStackY_198 [32];
  ulong64 local_158;
  FWeakObjectPtr local_150;
  ulong64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (*(int *)&param_2[1].field_0xc == 0x264) {
    pAVar6 = *(AltarBossSummonResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pAVar6 = &server_msg::_AltarBossSummonResponse_default_instance_;
  }
  local_158 = (pAVar6->_instance)._impl_.altar_entity_id_;
  iVar1 = (pAVar6->_instance)._impl_.error_code_;
  local_148[0] = (pAVar6->_instance)._impl_.summoner_entity_id_;
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_GimmickService::AltarBossSummonError",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x143,L"ErrorCode : %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  pFVar4 = FDS_EntityBase::GetEntityBase(&local_158);
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    UDS_NPCGimmickData::GetData((ulong64)&local_150);
    bVar2 = FWeakObjectPtr::IsValid(&local_150);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_150);
      TMulticastDelegate<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
                  *)&pUVar5[7].field_0x20,local_158,iVar1);
      (**(code **)(pFVar4->_padding_ + 0xa0))(pFVar4);
    }
  }
  pFVar4 = FDS_EntityBase::GetEntityBase(local_148);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    bVar2 = true;
  }
  else {
    bVar2 = pFVar4->EntityType != MainCharacter;
  }
  return bVar2;
}

// GimmickInteractionError @ 14bbbeb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FDS_GimmickService::GimmickInteractionError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  FDS_EntityBase *pFVar10;
  FDS_EntityBase *pFVar11;
  UDS_LogManager *pUVar12;
  UDS_InteractionDataSet *this;
  UObject *pUVar13;
  FWeakObjectPtr *pFVar14;
  UDS_NPCGimmickData *pUVar15;
  FDS_NpcGimmickEventTableRow *this_00;
  long64 lVar16;
  int iVar17;
  uint uVar18;
  GimmickInteractionResponseDefaultTypeInternal *pGVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined1 auStackY_378 [32];
  EDS_StateTagType local_328 [8];
  ulong64 local_320;
  FWeakObjectPtr local_318;
  FWeakObjectPtr local_310;
  FWeakObjectPtr local_308;
  FWeakObjectPtr local_300;
  FWeakObjectPtr local_2f8;
  FWeakObjectPtr local_2f0;
  TArray<FDS_NPCGimmickInfo,TSizedDefaultAllocator<32>_> local_2e8;
  ulong64 local_2d8;
  FDestructionSentinel local_2d0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_2b8;
  undefined1 local_2a0 [8];
  undefined1 local_298 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  if (*(int *)&param_2[1].field_0xc == 500) {
    pGVar19 = *(GimmickInteractionResponseDefaultTypeInternal **)(param_2 + 1);
  }
  else {
    pGVar19 = &server_msg::_GimmickInteractionResponse_default_instance_;
  }
  local_320 = (pGVar19->_instance)._impl_.entity_id_;
  iVar17 = (pGVar19->_instance)._impl_.error_code_;
  pFVar10 = FDS_EntityBase::GetEntityBase(&local_320);
  if (pFVar10 == (FDS_EntityBase *)0x0) {
    return true;
  }
  local_2d8 = (pGVar19->_instance)._impl_.interaction_entity_id_;
  pFVar11 = FDS_EntityBase::GetEntityBase(&local_2d8);
  if (pFVar11 == (FDS_EntityBase *)0x0) {
    return true;
  }
  pUVar12 = UDS_LogManager::GetInst();
  if (pUVar12 != (UDS_LogManager *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"FDS_GimmickService::GimmickInteractionError",0x2b,Yes);
    UDS_LogManager::PrintLog
              (pUVar12,1,Display,local_288.Ptr,0xe6,
               L"[errorCode: %d]  [gimmickEventID: %d]  [gimmickEntityID: %llu]");
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
  }
  if (iVar17 == 0x2d50) {
    UDS_NPCGimmickData::GetData((ulong64)&local_300);
    bVar5 = FWeakObjectPtr::IsValid(&local_300);
    if (bVar5) {
      uVar22 = 0;
      TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_310);
      bVar5 = FWeakObjectPtr::IsValid(&local_310);
      if (bVar5) {
        this = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_310);
        UDS_InteractionDataSet::GetInteractionDataByType
                  (this,(EDS_InteractionFunctionType)&local_308);
        bVar5 = FWeakObjectPtr::IsValid(&local_308);
        if (bVar5) {
          pUVar13 = FWeakObjectPtr::Get(&local_308);
          uVar22 = *(undefined4 *)&pUVar13[2].field_0x18;
        }
      }
      pUVar13 = FWeakObjectPtr::Get(&local_300);
      uVar4 = local_320;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar13[5].field_0x10,
                 (FWriteAccessScope *)&local_2d0);
      *(int *)&pUVar13[6].field_0x4 = *(int *)&pUVar13[6].field_0x4 + 1;
      bVar5 = false;
      uVar18 = *(int *)&pUVar13[5].field_0x20 - 1;
      if (-1 < (int)uVar18) {
        lVar21 = (longlong)(int)uVar18 << 4;
        bVar5 = false;
        do {
          uVar9 = 0;
          if ((int)uVar18 < *(int *)&pUVar13[5].field_0x20) {
            uVar9 = ~uVar18 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          if (((*(int *)(*(longlong *)&pUVar13[5].field_0x18 + 8 + lVar21) == 0) ||
              (plVar2 = *(longlong **)(*(longlong *)&pUVar13[5].field_0x18 + lVar21),
              plVar2 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar2 + 0x68))(plVar2,uVar4,uVar22), cVar8 == '\0')) {
            bVar5 = true;
          }
          lVar21 = lVar21 + -0x10;
          uVar18 = uVar18 - 1;
        } while (-1 < (int)uVar18);
      }
      *(int *)&pUVar13[6].field_0x4 = *(int *)&pUVar13[6].field_0x4 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar13[5].field_0x10,
                   false);
      }
      if (local_2d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
      }
    }
    if (pFVar11->EntityType == MainCharacter) {
      return true;
    }
    local_328[0] = Interaction_NPCGimmick;
    pFVar14 = (FWeakObjectPtr *)(**(code **)(pFVar11->_padding_ + 0x178))(pFVar11,local_2a0);
    UDS_AbilitySystemComponent::AddStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar14,local_328);
    return true;
  }
  if (iVar17 == 0x2d51) {
    UDS_NPCGimmickData::GetData((ulong64)&local_2f8);
    bVar5 = FWeakObjectPtr::IsValid(&local_2f8);
    if (!bVar5) goto LAB_14bbbefd5;
    pUVar13 = FWeakObjectPtr::Get(&local_2f8);
  }
  else {
    if (iVar17 == 0x2d52) {
      UDS_NPCGimmickData::GetData((ulong64)&local_318);
      bVar5 = FWeakObjectPtr::IsValid(&local_318);
      if (bVar5) {
        pUVar15 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_318);
        UDS_NPCGimmickData::SetIsOpened(pUVar15,true);
        pUVar15 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_318);
        UDS_NPCGimmickData::SetIsInteraction(pUVar15,false);
        pUVar13 = FWeakObjectPtr::Get(&local_318);
        TMulticastDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy> *)
                   (pUVar13 + 7),local_320);
        pUVar15 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_318);
        UDS_NPCGimmickData::GetGimmickInfoList(pUVar15,&local_2e8);
        iVar17 = local_2e8.ArrayNum;
        pFVar1 = local_2e8.AllocatorInstance.Data + (longlong)iVar17 * 0x14;
        FVar20.Data = local_2e8.AllocatorInstance.Data;
        while( true ) {
          if (local_2e8.ArrayNum != iVar17) {
            `TCheckedPointerIterator<FDS_NPCGimmickInfo_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_328 + 2);
          }
          if (FVar20.Data == pFVar1) break;
          this_00 = FDS_NpcGimmickEventTableRow::GetRef((longlong)*(int *)(FVar20.Data + 8),true);
          bVar5 = FDS_NpcGimmickEventTableRow::IsValid(this_00);
          if (bVar5) {
            local_2b8._0_8_ = 0;
            local_2b8._8_8_ = 0;
            local_2b8._16_4_ = 0;
            lVar16 = (**(code **)(this_00->ID_StringUi)._padding_)(&this_00->ID_StringUi);
            UDS_UIMessageManager::OpenMsgByStringUi(lVar16,Complete_None_01,&local_2b8);
          }
          FVar20.Data = FVar20.Data + 0x14;
        }
        (**(code **)(pFVar10->_padding_ + 0xa0))(pFVar10);
        if (local_2e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.AllocatorInstance.Data);
        }
      }
      goto LAB_14bbbefd5;
    }
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 != (UDS_LogManager *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_GimmickService::GimmickInteractionError",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar12,1,Warning,local_168.Ptr,0x124,L"ErrorCode : %d");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    UDS_NPCGimmickData::GetData((ulong64)&local_2f0);
    bVar5 = FWeakObjectPtr::IsValid(&local_2f0);
    if (!bVar5) goto LAB_14bbbefd5;
    pUVar13 = FWeakObjectPtr::Get(&local_2f0);
  }
  TMulticastDelegate<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy> *)
             &pUVar13[6].field_0x8,local_320,iVar17);
LAB_14bbbefd5:
  if (pFVar11->EntityType != MainCharacter) {
    local_328[1] = 0x4c;
    pFVar14 = (FWeakObjectPtr *)(**(code **)(pFVar11->_padding_ + 0x178))(pFVar11,local_298);
    UDS_AbilitySystemComponent::RemoveStateTag
              ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)*pFVar14,local_328 + 1);
  }
  return true;
}

// ProcessError @ 14bbce820

bool __cdecl FDS_GimmickService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveAltarBossSummon @ 14bbd00c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_GimmickService::ReceiveAltarBossSummon(ServerMessages *param_1)

{
  int iVar1;
  ulong64 uVar2;
  bool bVar3;
  AltarBossSummonResponseDefaultTypeInternal *pAVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_SummonBossTableRow *pFVar7;
  FDS_NpcBaseTableRow *pFVar8;
  FString *pFVar9;
  undefined1 auStackY_1d8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_188;
  FWeakObjectPtr local_178;
  FStringFormatArg local_170;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x264) {
    pAVar4 = *(AltarBossSummonResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pAVar4 = &server_msg::_AltarBossSummonResponse_default_instance_;
  }
  uVar2 = *(ulong64 *)&((Message *)((longlong)pAVar4 + 0x10))->field_0x8;
  iVar1 = *(int *)&((Message *)((longlong)pAVar4 + 0x20))->field_0xc;
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_GimmickService::ReceiveAltarBossSummon",0x2a,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Display,local_138.Ptr,0xbf,
               L"altar: %llu  , summoner: %llu , boss npc : %llu");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  UDS_NPCGimmickData::GetData((ulong64)&local_178);
  bVar3 = FWeakObjectPtr::IsValid(&local_178);
  if (bVar3) {
    pUVar6 = FWeakObjectPtr::Get(&local_178);
    TMulticastDelegate<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy> *)
               &pUVar6[7].field_0x20,uVar2,1);
  }
  if ((longlong)iVar1 != 0) {
    pFVar7 = FDS_SummonBossTableRow::GetRef((longlong)iVar1,true);
    pFVar8 = FDS_NpcBaseTableRow::GetRef((longlong)pFVar7->ID_SummonBoss,true);
    pFVar9 = (FString *)(**(code **)((pFVar8->ID_NameSid)._padding_ + 8))(&pFVar8->ID_NameSid);
    pFVar9 = ::FString::FString(&local_150,pFVar9);
    FStringFormatArg::FStringFormatArg(&local_170,pFVar9);
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_188.AllocatorInstance,1,&local_188.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_188.AllocatorInstance.Data,&local_170,1);
    if (local_170.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.StringValue.Data.AllocatorInstance.Data);
    }
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x57ea6,Complete_None_01,&local_188,
               (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                *)0x0);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
    if ((FStringFormatArg *)local_188.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
  }
  return;
}

// ReceiveGimmickAction @ 14bbd1f20

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

void __cdecl FDS_GimmickService::ReceiveGimmickAction(ServerMessages *param_1)

{
  FScriptContainerElement *pFVar1;
  FWeakObjectPtr *pFVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  FDS_EntityBase *pFVar6;
  UDS_LogManager *pUVar7;
  UDS_NPCGimmickData *pUVar8;
  FDS_NpcGimmickEventTableRow *this;
  long64 lVar9;
  UObject *pUVar10;
  int iVar11;
  GimmickActionResponseDefaultTypeInternal *pGVar12;
  ForAnyElementType FVar13;
  FWeakObjectPtr *pFVar14;
  undefined1 auStackY_228 [32];
  undefined1 local_1d8 [8];
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr local_1c8;
  ulong64 local_1c0;
  TArray<FDS_NPCGimmickInfo,TSizedDefaultAllocator<32>_> local_1b8;
  FWeakObjectPtr *local_1a8 [2];
  FString local_198;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((param_1->_impl_)._oneof_case_[0] == 0x1f5) {
    pGVar12 = *(GimmickActionResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pGVar12 = &server_msg::_GimmickActionResponse_default_instance_;
  }
  local_1c0 = *(ulong64 *)&((Message *)((longlong)pGVar12 + 0x10))->field_0x8;
  bVar4 = *(byte *)((longlong)pGVar12 + 0x20);
  uVar3 = *(undefined4 *)&((Message *)((longlong)pGVar12 + 0x20))->field_0x4;
  pFVar6 = FDS_EntityBase::GetEntityBase(&local_1c0);
  if (pFVar6 != (FDS_EntityBase *)0x0) {
    ::FString::FString((FString *)&local_1b8,"EDS_GimmickActionType");
    DS_Util::GetEnumToString(&local_198,(FString *)&local_1b8,(ulonglong)bVar4);
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_GimmickService::ReceiveGimmickAction",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Display,local_168.Ptr,0x78,
                 L"[Entity: %llu]  [gimmickEventID: %d]  [Action: %s]  [Value: %f]");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    if (bVar4 == 0xd) {
      local_1c8.ObjectIndex = 0x100;
      local_1c8.ObjectSerialNumber = 0;
      (**(code **)(pFVar6->_padding_ + 0x60))(pFVar6,&local_1c8,uVar3);
    }
    else if (bVar4 == 0xe) {
      local_1c8.ObjectIndex = 0x100;
      local_1c8.ObjectSerialNumber = 0;
      (**(code **)(pFVar6->_padding_ + 0x58))(pFVar6,&local_1c8,uVar3);
    }
    if (pFVar6->EntityType == NPC) {
      UDS_NPCGimmickData::GetData((ulong64)&local_1d0);
      bVar5 = FWeakObjectPtr::IsValid(&local_1d0);
      if (bVar5) {
        if ((bVar4 == 1) || (bVar4 == 8)) {
          pUVar8 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_1d0);
          UDS_NPCGimmickData::SetIsOpened(pUVar8,true);
          pUVar8 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_1d0);
          UDS_NPCGimmickData::GetGimmickInfoList(pUVar8,&local_1b8);
          iVar11 = local_1b8.ArrayNum;
          pFVar1 = local_1b8.AllocatorInstance.Data + (longlong)iVar11 * 0x14;
          FVar13.Data = local_1b8.AllocatorInstance.Data;
          while( true ) {
            if (local_1b8.ArrayNum != iVar11) {
              `TCheckedPointerIterator<FDS_NPCGimmickInfo_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_1d8);
            }
            if (FVar13.Data == pFVar1) break;
            local_188._16_4_ = *(undefined4 *)(FVar13.Data + 0x10);
            this = FDS_NpcGimmickEventTableRow::GetRef((longlong)*(int *)(FVar13.Data + 8),true);
            bVar5 = FDS_NpcGimmickEventTableRow::IsValid(this);
            if (bVar5) {
              local_188._0_8_ = 0;
              local_188._8_8_ = 0;
              local_188._16_4_ = 0;
              lVar9 = (**(code **)(this->ID_StringUi)._padding_)(&this->ID_StringUi);
              UDS_UIMessageManager::OpenMsgByStringUi(lVar9,Complete_None_01,&local_188);
            }
            FVar13.Data = FVar13.Data + 0x14;
          }
          (**(code **)(pFVar6->_padding_ + 0x168))(pFVar6,local_1a8);
          iVar11 = (int)local_1a8[1];
          pFVar2 = local_1a8[0] + iVar11;
          pFVar14 = local_1a8[0];
          while( true ) {
            if ((int)local_1a8[1] != iVar11) {
              `TCheckedPointerIterator<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_1d8);
            }
            if (pFVar14 == pFVar2) break;
            local_1c8 = *pFVar14;
            bVar5 = FWeakObjectPtr::IsValid(&local_1c8);
            if (bVar5) {
              pUVar10 = FWeakObjectPtr::Get(&local_1c8);
              (**(code **)(*(longlong *)pUVar10 + 0x788))(pUVar10,::COLLISION_PROFILE_NOCOLLISION,1)
              ;
            }
            pFVar14 = pFVar14 + 1;
          }
          if (local_1a8[0] != (FWeakObjectPtr *)0x0) {
            FMemory::Free(local_1a8[0]);
          }
          if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.AllocatorInstance.Data);
          }
        }
        else if ((bVar4 == 2) || (bVar4 == 9)) {
          pUVar8 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_1d0);
          UDS_NPCGimmickData::SetIsOpened(pUVar8,false);
        }
        else if (bVar4 == 0xb) {
          pUVar8 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_1d0);
          UDS_NPCGimmickData::SetIsEnabled(pUVar8,true);
        }
        else if (bVar4 == 0xc) {
          pUVar8 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_1d0);
          UDS_NPCGimmickData::SetIsEnabled(pUVar8,false);
        }
      }
    }
    else if (pFVar6->EntityType == StuffPortal) {
      FDS_PhasingService::RequestBreachDetailInfo(&local_1c0);
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ReceiveGimmickInteraction @ 14bbd2320

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

void __cdecl FDS_GimmickService::ReceiveGimmickInteraction(ServerMessages *param_1)

{
  int iVar1;
  bool bVar2;
  GimmickInteractionResponseDefaultTypeInternal *pGVar3;
  FDS_EntityBase *pFVar4;
  UDS_NPCGimmickData *pUVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  ulong64 local_res10;
  
  if ((param_1->_impl_)._oneof_case_[0] == 500) {
    pGVar3 = *(GimmickInteractionResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pGVar3 = &server_msg::_GimmickInteractionResponse_default_instance_;
  }
  iVar1 = *(int *)((longlong)pGVar3 + 0x20);
  local_res10 = *(ulong64 *)&((Message *)((longlong)pGVar3 + 0x10))->field_0x8;
  pFVar4 = FDS_EntityBase::GetEntityBase(&local_res10);
  if ((pFVar4 != (FDS_EntityBase *)0x0) && (iVar1 == 1)) {
    UDS_NPCGimmickData::GetData((ulong64)&local_res8);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      pUVar5 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_res8);
      UDS_NPCGimmickData::SetIsOpened(pUVar5,true);
      pUVar5 = (UDS_NPCGimmickData *)FWeakObjectPtr::Get(&local_res8);
      UDS_NPCGimmickData::SetIsInteraction(pUVar5,false);
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy> *)
                 (pUVar6 + 7),local_res10);
      (**(code **)(pFVar4->_padding_ + 0xa0))(pFVar4);
    }
  }
  return;
}

// RequestAltarBossSummon @ 14bbda000

bool __cdecl FDS_GimmickService::RequestAltarBossSummon(ulong64 param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  this = UDS_NetworkManager::GetInst();
  if ((this == (UDS_NetworkManager *)0x0) ||
     (bVar2 = UDS_NetworkManager::GetIsConnected(this), !bVar2)) {
    bVar2 = false;
  }
  else {
    client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
    local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_28._impl_._oneof_case_[0] != 0x230) {
      client_msg::ClientMessages::clear_ClientMessage(&local_28);
      local_28._impl_._oneof_case_[0] = 0x230;
      if (((byte)local_28._padding_ & 1) == 0) {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::AltarBossSummonRequest>
                       ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::AltarBossSummonRequest>
                       (*(Arena **)
                         (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                         0xfffffffffffffffe));
      }
    }
    *(ulong64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    uVar1 = *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1);
    *(int *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_2;
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[2].field_0x4 = param_3;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 7;
    UDS_NetworkManager::SendPacket(this,&local_28);
    client_msg::ClientMessages::~ClientMessages(&local_28);
    bVar2 = true;
  }
  return bVar2;
}

// RequestGimmickInteraction @ 14bbdb2b0

bool __cdecl FDS_GimmickService::RequestGimmickInteraction(ulong64 param_1,int param_2)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  this = UDS_NetworkManager::GetInst();
  if ((this != (UDS_NetworkManager *)0x0) &&
     (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
    client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
    local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
    if (local_28._impl_._oneof_case_[0] != 0x1b8) {
      client_msg::ClientMessages::clear_ClientMessage(&local_28);
      local_28._impl_._oneof_case_[0] = 0x1b8;
      if (((byte)local_28._padding_ & 1) == 0) {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::GimmickInteractionRequest>
                       ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                                 0xfffffffffffffffe));
      }
      else {
        local_28._impl_.ClientMessage_.joincontinentreq_ =
             google::protobuf::Arena::DefaultConstruct<client_msg::GimmickInteractionRequest>
                       (*(Arena **)
                         (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                         0xfffffffffffffffe));
      }
    }
    *(ulong64 *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(int *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 2) = param_2;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 3;
    UDS_NetworkManager::SendPacket(this,&local_28);
    client_msg::ClientMessages::~ClientMessages(&local_28);
    return true;
  }
  return false;
}

