// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b54eed0

UClass * __cdecl UDS_PacketProcessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PacketProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PacketProcessor",
               &Z_Registration_Info_UClass_UDS_PacketProcessor.InnerSingleton,
               StaticRegisterNativesUDS_PacketProcessor,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PacketProcessor>,
               InternalVTableHelperCtorCaller<UDS_PacketProcessor>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PacketProcessor.InnerSingleton;
}

// UDS_PacketProcessor @ 14b551bf0

UDS_PacketProcessor * __thiscall
UDS_PacketProcessor::UDS_PacketProcessor(UDS_PacketProcessor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameParser__;
  return this;
}

// UDS_PacketProcessor @ 14b551c30

UDS_PacketProcessor * __thiscall
UDS_PacketProcessor::UDS_PacketProcessor(UDS_PacketProcessor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameParser__;
  return this;
}

// ~UDS_PacketProcessor @ 14b551d70

void __thiscall UDS_PacketProcessor::~UDS_PacketProcessor(UDS_PacketProcessor *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IGameParser__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5523f0

UClass * __cdecl UDS_PacketProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PacketProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PacketProcessor",
               &Z_Registration_Info_UClass_UDS_PacketProcessor.InnerSingleton,
               StaticRegisterNativesUDS_PacketProcessor,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PacketProcessor>,
               InternalVTableHelperCtorCaller<UDS_PacketProcessor>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PacketProcessor.InnerSingleton;
}

// StaticRegisterNativesUDS_PacketProcessor @ 14b553390

void __cdecl UDS_PacketProcessor::StaticRegisterNativesUDS_PacketProcessor(void)

{
  return;
}

// Initialize @ 14bb6dc60

void __cdecl UDS_PacketProcessor::Initialize(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnExpChangeEventDelegate,
             (FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnExpChangeEventDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnRewardResponseDelegate,
             (FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnRewardResponseDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &OnQuestLocationCompleteEventDelegate,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &OnQuestLocationCompleteEventDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// ParseAiTrainingRoundResponse @ 14bb7c3c0

bool __thiscall
UDS_PacketProcessor::ParseAiTrainingRoundResponse
          (UDS_PacketProcessor *this,AiTrainingRoundResponse *param_1)

{
  bool bVar1;
  ADS_AI_GYM_GameMode *this_00;
  FWeakObjectPtr local_res18 [2];
  
  bVar1 = UDS_GameInstance::GetIsAIGymMode();
  if (bVar1) {
    ADS_AI_GYM_GameMode::GetInst();
    bVar1 = TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr> *)local_res18,(void *)0x0
                      );
    if (!bVar1) {
      this_00 = (ADS_AI_GYM_GameMode *)FWeakObjectPtr::Get(local_res18);
      ADS_AI_GYM_GameMode::OnParseAiTrainingRoundResponse(this_00,param_1);
    }
  }
  return true;
}

// ParseAiTrainingRoundResultResponse @ 14bb7c410

bool __thiscall
UDS_PacketProcessor::ParseAiTrainingRoundResultResponse
          (UDS_PacketProcessor *this,AiTrainingRoundResultResponse *param_1)

{
  bool bVar1;
  ADS_AI_GYM_GameMode *this_00;
  FWeakObjectPtr local_res18 [2];
  
  bVar1 = UDS_GameInstance::GetIsAIGymMode();
  if (bVar1) {
    ADS_AI_GYM_GameMode::GetInst();
    bVar1 = TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr> *)local_res18,(void *)0x0
                      );
    if (!bVar1) {
      this_00 = (ADS_AI_GYM_GameMode *)FWeakObjectPtr::Get(local_res18);
      ADS_AI_GYM_GameMode::OnParseAiTrainingRoundResultResponse(this_00,param_1);
    }
  }
  return true;
}

// ParseBuffTargetListResponse @ 14bb7c460

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

bool __thiscall
UDS_PacketProcessor::ParseBuffTargetListResponse
          (UDS_PacketProcessor *this,BuffTargetListResponse *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_CharBuffData *this_00;
  BuffTargetList *pBVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStackY_1a8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  ulong64 local_168;
  FWeakObjectPtr local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  lVar5 = (longlong)*(int *)&(param_1->_impl_).buff_target_list_.field_0x8;
  lVar6 = 0;
  if (0 < lVar5) {
    do {
      pBVar4 = *(BuffTargetList **)&(param_1->_impl_).buff_target_list_;
      if (((ulonglong)pBVar4 & 1) != 0) {
        pBVar4 = *(BuffTargetList **)
                  ((longlong)(&(pBVar4->_impl_)._has_bits_)[lVar6 * 2 + -3].has_bits_ + 3);
      }
      local_168 = (pBVar4->_impl_).entity_id_;
      pFVar2 = FDS_EntityBase::GetEntityBase(&local_168);
      if (pFVar2 == (FDS_EntityBase *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_PacketProcessor::ParseBuffTargetListResponse",0x30,Yes);
          pwVar8 = L"entityBase is nullptr. (%d)";
          uVar7 = 0x7e;
LAB_14bb7c53c:
          UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar7,pwVar8);
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else {
        UDS_CharBuffData::GetData((ulong64)&local_160);
        bVar1 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_160,(void *)0x0
                          );
        if (bVar1) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_PacketProcessor::ParseBuffTargetListResponse",0x30,Yes);
            pwVar8 = L"charBuffData is nullptr. (%d)";
            uVar7 = 0x85;
            goto LAB_14bb7c53c;
          }
        }
        else {
          this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_160);
          UDS_CharBuffData::SetDataByBuffTargetList(this_00,pBVar4);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar5);
  }
  return true;
}

// ParseContentsDataResponse @ 14bb7c660

bool __thiscall
UDS_PacketProcessor::ParseContentsDataResponse
          (UDS_PacketProcessor *this,ContentsDataResponse *param_1)

{
  bool bVar1;
  UDS_ContentDataSet *this_00;
  FWeakObjectPtr local_res18 [2];
  
  TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    this_00 = (UDS_ContentDataSet *)FWeakObjectPtr::Get(local_res18);
    UDS_ContentDataSet::UpdateContentLockData(this_00,param_1);
  }
  return true;
}

// ParseExpChangeResponse @ 14bb7c890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_PacketProcessor::ParseExpChangeResponse(UDS_PacketProcessor *this,ExpChangeResponse *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  UDS_LogManager *pUVar9;
  UDS_CharInfoData *this_00;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  FDestructionSentinel local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar1 = (param_1->_impl_).char_id_;
  iVar7 = UDS_PlayerData::GetMainPlayerCurrentCharID();
  if (iVar7 == iVar1) {
    UDS_PlayerData::GetMainPlayerCurrentEntityID();
    UDS_CharInfoData::GetData((ulong64)&local_168);
    bVar3 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_168,(void *)0x0);
    if (!bVar3) {
      this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_168);
      UDS_CharInfoData::SetDataByExpChangeResponse(this_00,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnExpChangeEventDelegate
                 ,(FWriteAccessScope *)&local_160);
      bVar3 = false;
      OnExpChangeEventDelegate._28_4_ = OnExpChangeEventDelegate._28_4_ + 1;
      uVar10 = OnExpChangeEventDelegate._16_4_ - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar3 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < (int)OnExpChangeEventDelegate._16_4_) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (((*(int *)(lVar11 + 8 + OnExpChangeEventDelegate._8_8_) == 0) ||
              (*(longlong **)(lVar11 + OnExpChangeEventDelegate._8_8_) == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(**(longlong **)(lVar11 + OnExpChangeEventDelegate._8_8_) + 0x68))
                                (), cVar6 == '\0')) {
            bVar3 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      OnExpChangeEventDelegate._28_4_ = OnExpChangeEventDelegate._28_4_ + -1;
      if (bVar3) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnExpChangeEventDelegate,
                   false);
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      return true;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_PacketProcessor::ParseExpChangeResponse",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_148.Ptr,0x99,L"charInfoData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return false;
}

// ParseInvalidPositionUpdateResponse @ 14bb7cad0

bool __thiscall
UDS_PacketProcessor::ParseInvalidPositionUpdateResponse
          (UDS_PacketProcessor *this,InvalidPositionUpdateResponse *param_1)

{
  return true;
}

// ParseItemUseResponse @ 14bb7cae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_PacketProcessor::ParseItemUseResponse(UDS_PacketProcessor *this,ItemUseResponse *param_1)

{
  int iVar1;
  DbWorkItem *pDVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  EnumDescriptor *pEVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  UDS_ItemDataSet *this_00;
  DbWorkItem *pDVar7;
  SqlItemStackableTableDefaultTypeInternal *pSVar8;
  undefined1 auStackY_1c8 [32];
  FString local_188;
  SqlItemStackableTable local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  iVar1 = (param_1->_impl_).error_code_;
  if (iVar1 == 1) {
    pDVar2 = (param_1->_impl_).db_work_item_;
    pDVar7 = &ds_game::_DbWorkItem_default_instance_._instance;
    if (pDVar2 != (DbWorkItem *)0x0) {
      pDVar7 = pDVar2;
    }
    if ((pDVar7->_impl_)._oneof_case_[0] == 0xb) {
      TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_188);
      bVar3 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_188,(void *)0x0);
      if (!bVar3) {
        if ((pDVar7->_impl_)._oneof_case_[0] == 0xb) {
          pSVar8 = (SqlItemStackableTableDefaultTypeInternal *)
                   (pDVar7->_impl_).Item_.characterlevel_;
        }
        else {
          pSVar8 = &ds_game::_SqlItemStackableTable_default_instance_;
        }
        ds_game::SqlItemStackableTable::SqlItemStackableTable
                  (&local_178,(Arena *)0x0,&pSVar8->_instance);
        local_178._padding_ = (longlong)&___7SqlItemStackableTable_ds_game__6B_;
        this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_188);
        UDS_ItemDataSet::Use(this_00,local_178._impl_.item_id_);
        ds_game::SqlItemStackableTable::~SqlItemStackableTable(&local_178);
      }
    }
    bVar3 = true;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      pEVar5 = ErrorCode_descriptor();
      pbVar6 = google::protobuf::internal::NameOfEnum(pEVar5,iVar1);
      if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
        pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar6->_Mypair)._Myval2._Bx._Ptr;
      }
      DS_Util::ConvertUTF8ToFString(&local_188,(char *)pbVar6);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PacketProcessor::ParseItemUseResponse",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x13e,L"ErrorCode: %s(%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FWeakObjectPtr)local_188.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = false;
  }
  return bVar3;
}

// ParseLevelChangeResponse @ 14bb7ccb0

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

bool __thiscall
UDS_PacketProcessor::ParseLevelChangeResponse
          (UDS_PacketProcessor *this,LevelChangeResponse *param_1)

{
  ulong64 uVar1;
  bool bVar2;
  UDS_CharInfoData *this_00;
  UDS_EntityManager *this_01;
  UDS_LogManager *pUVar3;
  FDS_EntityBase *this_02;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar1 = (param_1->_impl_).entity_id_;
  if (uVar1 != 0) {
    UDS_CharInfoData::GetData((ulong64)&local_150);
    bVar2 = FWeakObjectPtr::IsValid(&local_150);
    if (bVar2) {
      this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_150);
      UDS_CharInfoData::SetDataByLevelChangeResponse(this_00,param_1);
    }
    this_01 = UDS_EntityManager::GetInst();
    if (this_01 == (UDS_EntityManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_PacketProcessor::ParseLevelChangeResponse",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xb6,L"entityMng is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      return false;
    }
    this_02 = UDS_EntityManager::FindEntityBase(this_01,uVar1);
    if (this_02 != (FDS_EntityBase *)0x0) {
      local_148[0] = 0;
      local_158[0] = LevelUp;
      FDS_EntityBase::TryActivateAbility
                (this_02,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
    }
  }
  return true;
}

// ParseLogOutSuccess @ 14bb7ce00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_PacketProcessor::ParseLogOutSuccess(UDS_PacketProcessor *this,LogOutSuccess *param_1)

{
  UDS_NetworkManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_NetworkManager::GetInst();
  if (this_00 == (UDS_NetworkManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PacketProcessor::ParseLogOutSuccess",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x66,L"netMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  UDS_NetworkManager::DisconnectWithPopup(this_00,Network_ReceiveLogoutPacket);
  return true;
}

// ParsePlayerExpChangeResponse @ 14bb7cf00

bool __thiscall
UDS_PacketProcessor::ParsePlayerExpChangeResponse
          (UDS_PacketProcessor *this,PlayerExpChangeResponse *param_1)

{
  bool bVar1;
  
  bVar1 = FDS_PlayerService::ReceivePlayerExpChangeResponse(param_1);
  return bVar1;
}

// ParsePlayerGradeChangeResponse @ 14bb7cf10

bool __thiscall
UDS_PacketProcessor::ParsePlayerGradeChangeResponse
          (UDS_PacketProcessor *this,PlayerGradeChangeResponse *param_1)

{
  bool bVar1;
  
  bVar1 = FDS_PlayerService::ReceivePlayerGradeChangeResponse(param_1);
  return bVar1;
}

// ParseResultUiResponse @ 14bb7cf20

bool __thiscall
UDS_PacketProcessor::ParseResultUiResponse(UDS_PacketProcessor *this,ResultUiResponse *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnRewardResponseDelegate,
             (FWriteAccessScope *)&local_28);
  bVar2 = false;
  OnRewardResponseDelegate._28_4_ = OnRewardResponseDelegate._28_4_ + 1;
  uVar7 = OnRewardResponseDelegate._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar2 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnRewardResponseDelegate._16_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (((*(int *)(lVar8 + 8 + OnRewardResponseDelegate._8_8_) == 0) ||
          (*(longlong **)(lVar8 + OnRewardResponseDelegate._8_8_) == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(**(longlong **)(lVar8 + OnRewardResponseDelegate._8_8_) + 0x68))(),
         cVar5 == '\0')) {
        bVar2 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnRewardResponseDelegate._28_4_ = OnRewardResponseDelegate._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnRewardResponseDelegate,false
              );
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return true;
}

// ParseTimeSyncResponse @ 14bb7d060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_PacketProcessor::ParseTimeSyncResponse(UDS_PacketProcessor *this,TimeSyncResponse *param_1)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  FDS_TimeInfo *pFVar9;
  FDateTime *pFVar10;
  UDS_DataManager *this_00;
  UDS_TimeData *this_01;
  UDS_LogManager *pUVar11;
  UDS_GameInstance *this_02;
  UClass *pUVar12;
  UDS_SendPacketManager *this_03;
  undefined1 auStackY_238 [32];
  longlong local_1e8;
  FDateTime local_1e0;
  FWeakObjectPtr local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  double dStack_1c0;
  FDS_TimeInfo local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar8 = UDS_GameInstance::GetIsCCSAIMode();
  dVar7 = __real_3e7ad7f29abcaf48;
  if (bVar8) {
LAB_14bb7d101:
    FDateTime::UtcNow();
    FDateTime::FDateTime(&local_1e0,0x7b2,1,1,0,0,0,0);
    dVar4 = (double)(local_1e8 - local_1e0.Ticks) * dVar7;
  }
  else {
    bVar8 = UDS_GameInstance::GetIsDungeonPlayBuild();
    if (bVar8) goto LAB_14bb7d101;
    pFVar9 = UDS_TimeData::GetTime(&local_1a8,NTPTime);
    local_1c8 = (pFVar9->ChronoTime)._MyDur._MyRep;
    dStack_1c0 = pFVar9->diff;
    dVar4 = pFVar9->Time;
    std::chrono::steady_clock::now();
    dVar4 = (double)(local_1e8 - local_1c8) * __real_3e112e0be826d695 + dVar4;
  }
  UDS_TimeData::GetTime(&local_1a8,ServerTime);
  std::chrono::steady_clock::now();
  FDateTime::UtcNow();
  pFVar10 = FDateTime::FDateTime(&local_1e0,0x7b2,1,1,0,0,0,0);
  dVar5 = dVar4 - (param_1->_impl_).client_ticks_;
  lVar2 = pFVar10->Ticks;
  dVar6 = dVar5 * __real_3fe0000000000000 + (param_1->_impl_).server_ticks_;
  dVar3 = dVar4 - dVar6;
  UDS_TimeUtilManager::DiffServerTime = dVar3;
  this_00 = UDS_DataManager::GetInst();
  UDS_DataManager::GetTimeData(this_00);
  bVar8 = FWeakObjectPtr::IsValid(&local_1d8);
  if (bVar8) {
    this_01 = (UDS_TimeData *)FWeakObjectPtr::Get(&local_1d8);
    UDS_TimeData::SetDateTime(this_01,ServerTime,dVar6);
  }
  pUVar11 = UDS_LogManager::GetInst();
  if (pUVar11 != (UDS_LogManager *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"UDS_PacketProcessor::ParseTimeSyncResponse",0x2a,Yes);
    UDS_LogManager::PrintLog
              (pUVar11,1,Display,local_188.Ptr,0x11e,
               L"Latency: %f DiffServerTick: %f finalGap: %f diffLocalTick: %f");
    if ((void *)local_188._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
  }
  this_02 = UDS_GameInstance::GetInst();
  if (this_02 != (UDS_GameInstance *)0x0) {
    pUVar12 = Z_Construct_UClass_UDS_SendPacketManager_NoRegister();
    this_03 = (UDS_SendPacketManager *)
              UDS_GameInstance::GetManager(this_02,(FName)pUVar12->_padding_);
    if (this_03 != (UDS_SendPacketManager *)0x0) {
      pUVar12 = Z_Construct_UClass_UDS_SendPacketManager_NoRegister();
      iVar1 = (int)pUVar12->_padding_;
      if ((iVar1 <= *(int *)(this_03->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar12->_padding_)) goto LAB_14bb7d309;
    }
  }
  this_03 = (UDS_SendPacketManager *)0x0;
LAB_14bb7d309:
  UDS_SendPacketManager::SendTimeLogRequest
            (this_03,(float)dVar5,dVar4 - (double)(local_1d0 - lVar2) * dVar7,dVar3);
  return true;
}

// ParseUpdatePvpInfoNotify @ 14bb7d360

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

bool __thiscall
UDS_PacketProcessor::ParseUpdatePvpInfoNotify
          (UDS_PacketProcessor *this,UpdatePvpInfoNotify *param_1)

{
  int iVar1;
  SqlPvpTable *pSVar2;
  bool bVar3;
  UDS_EntityManager *pUVar4;
  FDS_EntityBase *pFVar5;
  FDS_EntityBase *pFVar6;
  UDS_PKDataSet *pUVar7;
  FDS_PkCriminalGradeTableRow *pFVar8;
  FDS_PkCriminalGradeTableRow *this_00;
  FDS_EntityBase *this_01;
  UObject *pUVar9;
  FString *pFVar10;
  long64 lVar11;
  SqlPvpTable *pSVar12;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FStringFormatArg local_a8;
  FWeakObjectPtr local_88;
  FString local_80;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  pUVar4 = UDS_EntityManager::GetInst();
  if (pUVar4 == (UDS_EntityManager *)0x0) {
    return false;
  }
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)(param_1->_impl_).attacker_eid_;
  pFVar5 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_b8);
  pFVar6 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar5 == (FDS_EntityBase *)0x0) {
    return false;
  }
  TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar3) {
    return false;
  }
  pUVar7 = (UDS_PKDataSet *)FWeakObjectPtr::Get(&local_res18);
  pFVar8 = UDS_PKDataSet::GetLoadedCriminalGradeTableRow(pUVar7);
  pUVar7 = (UDS_PKDataSet *)FWeakObjectPtr::Get(&local_res18);
  pSVar2 = (param_1->_impl_).char_pvp_table_;
  pSVar12 = &ds_game::_SqlPvpTable_default_instance_._instance;
  if (pSVar2 != (SqlPvpTable *)0x0) {
    pSVar12 = pSVar2;
  }
  UDS_PKDataSet::SetSqlPvpTable(pUVar7,pSVar12);
  pUVar7 = (UDS_PKDataSet *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_PKDataSet::GetLoadedCriminalGradeTableRow(pUVar7);
  pUVar7 = (UDS_PKDataSet *)FWeakObjectPtr::Get(&local_res18);
  UDS_PKDataSet::SetRecentAttackCharUID
            (pUVar7,(param_1->_impl_).recent_first_attack_player_uid_,
             (param_1->_impl_).recent_first_attack_valid_real_ticks_);
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)(param_1->_impl_).defender_eid_;
  this_01 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_b8);
  if (this_01 == (FDS_EntityBase *)0x0) {
    return false;
  }
  TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)&local_88);
  bVar3 = FWeakObjectPtr::IsValid(&local_88);
  if (!bVar3) {
    return false;
  }
  FDS_EntityBase::GetCharInfoData(this_01);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar3) {
    return false;
  }
  if (pFVar6 != pFVar5) {
    if (pFVar6 != this_01) {
      return true;
    }
    pUVar9 = FWeakObjectPtr::Get(&local_res18);
    *(double *)&pUVar9[0xc].field_0x18 = (param_1->_impl_).recent_first_attack_valid_real_ticks_;
    return true;
  }
  iVar1 = (param_1->_impl_).pvp_change_type_;
  if (iVar1 == 2) {
    pUVar9 = FWeakObjectPtr::Get(&local_res20);
    pFVar10 = ::FString::FString(&local_80,(FString *)&pUVar9[8].field_0x18);
    FStringFormatArg::FStringFormatArg(&local_68,pFVar10);
    local_a8.Type = Int;
    local_a8._4_4_ = 0;
    local_a8.field1_0x8.IntValue = 0;
    ::FString::AppendInt((FString *)&local_a8,(param_1->_impl_).change_criminal_point_);
    FStringFormatArg::FStringFormatArg(&local_48,(FString *)&local_a8);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_b8.AllocatorInstance.Data,&local_68,2);
    lVar11 = 0x16f95;
  }
  else {
    if (iVar1 != 3) goto LAB_14bb7d633;
    pUVar9 = FWeakObjectPtr::Get(&local_res20);
    pFVar10 = ::FString::FString(&local_80,(FString *)&pUVar9[8].field_0x18);
    FStringFormatArg::FStringFormatArg(&local_68,pFVar10);
    local_a8.Type = Int;
    local_a8._4_4_ = 0;
    local_a8.field1_0x8.IntValue = 0;
    ::FString::AppendInt((FString *)&local_a8,(param_1->_impl_).change_criminal_point_);
    FStringFormatArg::FStringFormatArg(&local_48,(FString *)&local_a8);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_b8.AllocatorInstance,2,&local_b8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_b8.AllocatorInstance.Data,&local_68,2);
    lVar11 = 0x16f96;
  }
  UDS_UIMessageManager::OpenMsgByStringUi
            (lVar11,Alert_System_01,&local_b8,
             (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
              *)0x0);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
LAB_14bb7d633:
  if (((pFVar8 != (FDS_PkCriminalGradeTableRow *)0x0) &&
      (this_00 != (FDS_PkCriminalGradeTableRow *)0x0)) && (pFVar8->ID != this_00->ID)) {
    pFVar10 = FDS_PkCriminalGradeTableRow::GetGradeString(this_00,&local_80);
    FStringFormatArg::FStringFormatArg(&local_a8,pFVar10);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_b8.AllocatorInstance.Data,&local_a8,1);
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x16f97,Alert_System_01,&local_b8,
               (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                *)0x0);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
      return true;
    }
  }
  return true;
}

// ParseUpdateTeamInfoResponse @ 14bb7d750

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

bool __thiscall
UDS_PacketProcessor::ParseUpdateTeamInfoResponse
          (UDS_PacketProcessor *this,UpdateTeamInfoResponse *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_CharInfoData *this_00;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  
  local_res18[0] = (param_1->_impl_).entity_id_;
  pFVar2 = FDS_EntityBase::GetEntityBase(local_res18);
  if (pFVar2 != (FDS_EntityBase *)0x0) {
    UDS_CharInfoData::GetData((ulong64)&local_res10);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      this_00 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_res10);
      UDS_CharInfoData::SetUpdateTeamInfoResponse(this_00,param_1);
      return true;
    }
  }
  return false;
}

// ParseZoneIdChangeResponse @ 14bb7d7c0

bool __thiscall
UDS_PacketProcessor::ParseZoneIdChangeResponse
          (UDS_PacketProcessor *this,ZoneIdChangeResponse *param_1)

{
  UDS_ZoneManager *this_00;
  
  this_00 = UDS_ZoneManager::GetInst();
  if (this_00 != (UDS_ZoneManager *)0x0) {
    UDS_ZoneManager::ZoneIdChangeResponse(this_00,param_1);
  }
  return true;
}

