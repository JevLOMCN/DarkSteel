// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// FDS_BreachDetailInfo @ 14ba311b0

FDS_BreachDetailInfo * __thiscall
FDS_BreachDetailInfo::FDS_BreachDetailInfo(FDS_BreachDetailInfo *this,FDS_BreachDetailInfo *param_1)

{
  this->StuffPortalEntityID = param_1->StuffPortalEntityID;
  this->RewardGrade = param_1->RewardGrade;
  ::FString::FString(&this->FirstPlayerName,&param_1->FirstPlayerName);
  this->FinderEntityID = param_1->FinderEntityID;
  this->CurrentTryCount = param_1->CurrentTryCount;
  this->MaxTryCount = param_1->MaxTryCount;
  this->LifeEndTime = param_1->LifeEndTime;
  this->BreachBaseID = param_1->BreachBaseID;
  this->NeedTicketType = param_1->NeedTicketType;
  this->NeedTicketValue = param_1->NeedTicketValue;
  return this;
}

// FDS_BreachDetailInfo @ 14ba31220

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

FDS_BreachDetailInfo * __thiscall
FDS_BreachDetailInfo::FDS_BreachDetailInfo
          (FDS_BreachDetailInfo *this,BreachDetailInfoResponse *param_1)

{
  size_t sVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  FDS_StuffBaseTableRow *pFVar4;
  FDS_StuffPortalTableRow *pFVar5;
  FDS_PhasingBaseTableRow *pFVar6;
  uchar *_Str;
  uint uVar7;
  undefined1 auStackY_198 [32];
  uint uVar8;
  wchar_t *pwVar9;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this->StuffPortalEntityID = 0;
  this->RewardGrade = 0;
  ::FString::FString(&this->FirstPlayerName,"");
  this->CurrentTryCount = 0;
  this->MaxTryCount = 0;
  this->FinderEntityID = 0;
  this->LifeEndTime = 0.0;
  this->BreachBaseID = 0;
  this->NeedTicketType = None;
  this->NeedTicketValue = 0;
  this->StuffPortalEntityID = (param_1->_impl_).stuffportal_entity_id_;
  this->RewardGrade = (param_1->_impl_).reward_grade_;
  this->FinderEntityID = (param_1->_impl_).find_entity_id_;
  this->CurrentTryCount = (param_1->_impl_).cur_try_count_;
  this->MaxTryCount = (param_1->_impl_).max_try_count_;
  this->LifeEndTime = (param_1->_impl_).life_end_time_;
  if (((param_1->_impl_)._has_bits_.has_bits_[0] & 1) == 0) goto LAB_14ba31366;
  _Str = (uchar *)((ulonglong)(param_1->_impl_).first_player_name_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(_Str + 0x18)) {
    _Str = *(uchar **)_Str;
  }
  local_158._padding_ = 0;
  if (_Str == (uchar *)0x0) {
    local_158.StringLength = 0;
    local_158.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar1 = strlen((char *)_Str);
    local_158.StringLength = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar1);
    uVar8 = local_158.StringLength + 1;
    uVar7 = uVar8;
    if (uVar8 < 0x81) {
      if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_158._padding_ !=
          (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
        uVar7 = 0;
        goto LAB_14ba3130b;
      }
    }
    else {
LAB_14ba3130b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_158._padding_,0,uVar7,2);
    }
    local_158.Ptr = (wchar_t *)&local_158;
    if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_158._padding_ !=
        (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
      local_158.Ptr = (wchar_t *)local_158._padding_;
    }
    UE::Core::Private::Convert(local_158.Ptr,uVar8,_Str,(int)sVar1 + 1);
  }
  ::FString::operator=(&this->FirstPlayerName,local_158.Ptr);
  if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_158._padding_ !=
      (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
LAB_14ba31366:
  pFVar2 = FDS_EntityBase::GetEntityBase(&this->StuffPortalEntityID);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return this;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_BreachDetailInfo::FDS_BreachDetailInfo",0x2a,Yes);
    pwVar9 = L"entityBase is nullptr. (%llu)";
    uVar8 = 0x3a;
  }
  else {
    pFVar4 = FDS_StuffBaseTableRow::Get(pFVar2->TableID,true);
    if (pFVar4 == (FDS_StuffBaseTableRow *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return this;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_BreachDetailInfo::FDS_BreachDetailInfo",0x2a,Yes);
      pwVar9 = L"stuffBaseTable is nullptr. (%d)";
      uVar8 = 0x41;
    }
    else if (pFVar4->StuffType == StuffPortal) {
      pFVar5 = FDS_StuffPortalTableRow::Get((longlong)pFVar4->ID_StuffValue,true);
      if (pFVar5 == (FDS_StuffPortalTableRow *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return this;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FDS_BreachDetailInfo::FDS_BreachDetailInfo",0x2a,Yes);
        pwVar9 = L"stuffPortalTable is nullptr. (%d)";
        uVar8 = 0x4e;
      }
      else {
        this->NeedTicketType = pFVar5->NeedTicketType;
        this->NeedTicketValue = pFVar5->NeedTicketValue;
        pFVar6 = FDS_PhasingBaseTableRow::Get((longlong)pFVar5->ID_OpenValue,true);
        if (pFVar6 != (FDS_PhasingBaseTableRow *)0x0) {
          this->BreachBaseID = pFVar6->ID_BreachBase;
          return this;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return this;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FDS_BreachDetailInfo::FDS_BreachDetailInfo",0x2a,Yes);
        pwVar9 = L"phasingBaseTable is nullptr. (%d)";
        uVar8 = 0x58;
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return this;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_BreachDetailInfo::FDS_BreachDetailInfo",0x2a,Yes);
      pwVar9 = L"StuffType is not StuffPortal. (%d)";
      uVar8 = 0x47;
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Error,local_158.Ptr,uVar8,pwVar9);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return this;
}

// IsEnoughTryCount @ 14ba5b2c0

bool __thiscall FDS_BreachDetailInfo::IsEnoughTryCount(FDS_BreachDetailInfo *this)

{
  return this->CurrentTryCount < this->MaxTryCount;
}

// IsOverLifeEndTime @ 14ba5be50

bool __thiscall FDS_BreachDetailInfo::IsOverLifeEndTime(FDS_BreachDetailInfo *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->LifeEndTime;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
    return dVar1 < dVar2;
  }
  return true;
}

// IsValidData @ 14ba5da90

bool __thiscall FDS_BreachDetailInfo::IsValidData(FDS_BreachDetailInfo *this)

{
  return this->StuffPortalEntityID != 0;
}

// operator= @ 14bd44110

FDS_BreachDetailInfo * __thiscall
FDS_BreachDetailInfo::operator=(FDS_BreachDetailInfo *this,FDS_BreachDetailInfo *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = &param_1->FirstPlayerName;
  pFVar2 = &this->FirstPlayerName;
  this->StuffPortalEntityID = param_1->StuffPortalEntityID;
  this->RewardGrade = param_1->RewardGrade;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FirstPlayerName).Data.ArrayNum = (param_1->FirstPlayerName).Data.ArrayNum;
    (this->FirstPlayerName).Data.ArrayMax = (param_1->FirstPlayerName).Data.ArrayMax;
    (param_1->FirstPlayerName).Data.ArrayNum = 0;
    (param_1->FirstPlayerName).Data.ArrayMax = 0;
  }
  this->FinderEntityID = param_1->FinderEntityID;
  this->CurrentTryCount = param_1->CurrentTryCount;
  this->MaxTryCount = param_1->MaxTryCount;
  this->LifeEndTime = param_1->LifeEndTime;
  this->BreachBaseID = param_1->BreachBaseID;
  this->NeedTicketType = param_1->NeedTicketType;
  this->NeedTicketValue = param_1->NeedTicketValue;
  return this;
}

