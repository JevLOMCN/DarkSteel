// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticStruct @ 14b5565b0

UScriptStruct * __cdecl FDS_PartyInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_PartyInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_PartyInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_PartyInfo,(UObject *)pUVar1,L"DS_PartyInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_PartyInfo.OuterSingleton;
}

// ~FDS_PartyInfo @ 14b55b320

void __thiscall FDS_PartyInfo::~FDS_PartyInfo(FDS_PartyInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->DefaultPartyMemberInfo).Stats.field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultPartyMemberInfo).Stats.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DefaultPartyMemberInfo).Stats);
  pFVar2 = (this->DefaultPartyMemberInfo).Nickname.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_PartyMemberInfo,int>
            ((FDS_PartyMemberInfo *)(this->PartyMemberInfos).AllocatorInstance.Data,
             (this->PartyMemberInfos).ArrayNum);
  pFVar2 = (this->PartyMemberInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// BindEntity @ 14b8b64f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_PartyInfo::BindEntity(FDS_PartyInfo *this,long64 param_1,ulong64 param_2)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  FDS_PartyMemberInfo *this_00;
  FDS_PartyMemberInfo *pFVar3;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1 < 1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_PartyInfo::BindEntity",0x19,Yes);
    pwVar5 = L"InPlayerUID <= 0ll";
    uVar4 = 0x277;
  }
  else {
    if (param_2 != 0) {
      this_00 = (FDS_PartyMemberInfo *)(this->PartyMemberInfos).AllocatorInstance.Data;
      iVar1 = (this->PartyMemberInfos).ArrayNum;
      pFVar3 = this_00 + iVar1;
      while( true ) {
        if ((this->PartyMemberInfos).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FDS_PartyMemberInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_158);
        }
        if (this_00 == pFVar3) break;
        if (this_00->PlayerUID == param_1) {
          FDS_PartyMemberInfo::BindEntity(this_00,param_2);
          return;
        }
        this_00 = this_00 + 1;
      }
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = param_2;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_PartyInfo::BindEntity",0x19,Yes);
    pwVar5 = L"InEntityID == 0ull";
    uVar4 = 0x27d;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar4,pwVar5);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// Clear @ 14b8b86b0

void __thiscall FDS_PartyInfo::Clear(FDS_PartyInfo *this)

{
  int *piVar1;
  int iVar2;
  FDS_PartyMemberInfo *pFVar3;
  FDS_PartyMemberInfo *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->PartyMemberInfos).ArrayNum;
  pFVar3 = (FDS_PartyMemberInfo *)(this->PartyMemberInfos).AllocatorInstance.Data;
  pFVar4 = pFVar3 + iVar2;
  while( true ) {
    if ((this->PartyMemberInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_PartyMemberInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    FDS_PartyMemberInfo::Clear(pFVar3);
    pFVar3 = pFVar3 + 1;
  }
  piVar1 = &(this->PartyMemberInfos).ArrayMax;
  this->PartyType = None;
  this->PartyUID = 0;
  this->PartyLeaderUID = 0;
  pFVar3 = (FDS_PartyMemberInfo *)(this->PartyMemberInfos).AllocatorInstance.Data;
  iVar2 = (this->PartyMemberInfos).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FDS_PartyMemberInfo,int>(pFVar3,iVar2);
    (this->PartyMemberInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,0,&(this->PartyMemberInfos).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FDS_PartyMemberInfo,int>(pFVar3,iVar2);
    (this->PartyMemberInfos).ArrayNum = 0;
  }
  this->PartyMemberCount = 0;
  this->MySlotIndex = -1;
  return;
}

// ExistPartyGroup @ 14b8c1b30

bool __thiscall FDS_PartyInfo::ExistPartyGroup(FDS_PartyInfo *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res18 [16];
  
  iVar4 = 0;
  do {
    iVar1 = (this->PartyMemberInfos).ArrayNum;
    pFVar2 = (this->PartyMemberInfos).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0xa8;
    while( true ) {
      if ((this->PartyMemberInfos).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDS_PartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar2 == pFVar3) break;
      if (*(int *)(pFVar2 + 0x10) == param_1 * 4 + -4 + iVar4) goto LAB_14b8c1b97;
      pFVar2 = pFVar2 + 0xa8;
    }
    pFVar2 = (FScriptContainerElement *)&this->DefaultPartyMemberInfo;
LAB_14b8c1b97:
    if (0 < *(longlong *)&pFVar2->field_0x0) {
      return true;
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return false;
    }
  } while( true );
}

// GetMyPartyGroupNumber @ 14b8c7be0

int __thiscall FDS_PartyInfo::GetMyPartyGroupNumber(FDS_PartyInfo *this)

{
  return ((int)(this->MySlotIndex + (this->MySlotIndex >> 0x1f & 3U)) >> 2) + 1;
}

// GetMyPartyNumber @ 14b8c7c00

int __thiscall FDS_PartyInfo::GetMyPartyNumber(FDS_PartyInfo *this)

{
  return this->MySlotIndex + 1;
}

// GetMySlotIndex @ 14b8c7c70

int __thiscall FDS_PartyInfo::GetMySlotIndex(FDS_PartyInfo *this)

{
  return this->MySlotIndex;
}

// GetPartyGroupNumber @ 14b8c8000

int __thiscall FDS_PartyInfo::GetPartyGroupNumber(FDS_PartyInfo *this,long64 param_1)

{
  FDS_PartyMemberInfo *pFVar1;
  
  pFVar1 = GetPartyMemberInfo(this,param_1);
  if (0 < pFVar1->PlayerUID) {
    return ((int)(pFVar1->SlotIndex + (pFVar1->SlotIndex >> 0x1f & 3U)) >> 2) + 1;
  }
  return 0;
}

// GetPartyLeaderUID @ 14b8c8030

long64 __thiscall FDS_PartyInfo::GetPartyLeaderUID(FDS_PartyInfo *this)

{
  return this->PartyLeaderUID;
}

// GetPartyMemberCount @ 14b8c8040

int __thiscall FDS_PartyInfo::GetPartyMemberCount(FDS_PartyInfo *this)

{
  return this->PartyMemberCount;
}

// GetPartyMemberInfo @ 14b8c8050

FDS_PartyMemberInfo * __thiscall
FDS_PartyInfo::GetPartyMemberInfo(FDS_PartyInfo *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FDS_PartyMemberInfo *pFVar4;
  FDS_PartyMemberInfo *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PartyMemberInfos).ArrayNum;
  pFVar4 = (FDS_PartyMemberInfo *)(this->PartyMemberInfos).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar1;
  do {
    if ((this->PartyMemberInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_PartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      return &this->DefaultPartyMemberInfo;
    }
    if (0 < pFVar4->PlayerUID) {
      iVar3 = (pFVar4->Nickname).Data.ArrayNum;
      iVar2 = (param_1->Data).ArrayNum;
      if (iVar3 == iVar2) {
        if (iVar3 < 2) {
          return pFVar4;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar4->Nickname).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar3 + iVar2 == 1;
      }
      if (bVar6) {
        return pFVar4;
      }
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// GetPartyMemberInfo @ 14b8c8100

FDS_PartyMemberInfo * __thiscall FDS_PartyInfo::GetPartyMemberInfo(FDS_PartyInfo *this,int param_1)

{
  int iVar1;
  FDS_PartyMemberInfo *pFVar2;
  FDS_PartyMemberInfo *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PartyMemberInfos).ArrayNum;
  pFVar2 = (FDS_PartyMemberInfo *)(this->PartyMemberInfos).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->PartyMemberInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_PartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->SlotIndex == param_1) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return &this->DefaultPartyMemberInfo;
}

// GetPartyMemberInfo @ 14b8c8180

FDS_PartyMemberInfo * __thiscall
FDS_PartyInfo::GetPartyMemberInfo(FDS_PartyInfo *this,long64 param_1)

{
  int iVar1;
  FDS_PartyMemberInfo *pFVar2;
  FDS_PartyMemberInfo *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PartyMemberInfos).ArrayNum;
  pFVar2 = (FDS_PartyMemberInfo *)(this->PartyMemberInfos).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->PartyMemberInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_PartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((0 < pFVar2->PlayerUID) && (pFVar2->PlayerUID == param_1)) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return &this->DefaultPartyMemberInfo;
}

// GetPartyNumber @ 14b8c8200

int __thiscall FDS_PartyInfo::GetPartyNumber(FDS_PartyInfo *this,long64 param_1)

{
  FDS_PartyMemberInfo *pFVar1;
  
  pFVar1 = GetPartyMemberInfo(this,param_1);
  if (0 < pFVar1->PlayerUID) {
    return pFVar1->SlotIndex + 1;
  }
  return 0;
}

// GetPartyType @ 14b8c8230

EDS_PartyType __thiscall FDS_PartyInfo::GetPartyType(FDS_PartyInfo *this)

{
  return this->PartyType;
}

// GetPartyUID @ 14b8c8240

long64 __thiscall FDS_PartyInfo::GetPartyUID(FDS_PartyInfo *this)

{
  return this->PartyUID;
}

// IsPartyMemeber @ 14b8d0340

bool __thiscall FDS_PartyInfo::IsPartyMemeber(FDS_PartyInfo *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PartyMemberInfos).ArrayNum;
  pFVar4 = (this->PartyMemberInfos).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0xa8;
  do {
    if ((this->PartyMemberInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_PartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      pFVar4 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      return false;
    }
    if (0 < *(longlong *)pFVar4) {
      iVar3 = *(int *)(pFVar4 + 0x20);
      iVar2 = (param_1->Data).ArrayNum;
      if (iVar3 == iVar2) {
        if (iVar3 < 2) {
LAB_14b8d03bf:
          pFVar4 = (param_1->Data).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          return true;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar4 + 0x18),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar3 + iVar2 == 1;
      }
      if (bVar6) goto LAB_14b8d03bf;
    }
    pFVar4 = pFVar4 + 0xa8;
  } while( true );
}

// IsPartyMemeber @ 14b8d0400

bool __thiscall FDS_PartyInfo::IsPartyMemeber(FDS_PartyInfo *this,long64 param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PartyMemberInfos).ArrayNum;
  pFVar2 = (this->PartyMemberInfos).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0xa8;
  while( true ) {
    if ((this->PartyMemberInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_PartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((0 < *(longlong *)pFVar2) && (*(longlong *)pFVar2 == param_1)) {
      return true;
    }
    pFVar2 = pFVar2 + 0xa8;
  }
  return false;
}

// IsValid @ 14b8d0b00

bool __thiscall FDS_PartyInfo::IsValid(FDS_PartyInfo *this)

{
  if ((0 < this->PartyUID) && (this->PartyType != None)) {
    return true;
  }
  return false;
}

// SetPartyInfo @ 14b8e9010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDS_PartyInfo::SetPartyInfo(FDS_PartyInfo *this,PartyInfoResponse *param_1)

{
  PartyInfo *pPVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  PartyInfo *pPVar7;
  UObject *pUVar8;
  RepeatedPtrField<ds_proto::PartySlotInfo> *pRVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [8];
  FWeakObjectPtr local_f0;
  undefined1 local_e8 [80];
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  lVar11 = 0;
  Clear(this);
  iVar5 = 0;
  if (FDS_PartyMemberStat::CollectStatusTypes.ArrayNum == 0) {
    if (FDS_PartyMemberStat::CollectStatusTypes.ArrayMax == 0) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&FDS_PartyMemberStat::CollectStatusTypes.AllocatorInstance,
                         &FDS_PartyMemberStat::CollectStatusTypes.ArrayMax);
    }
    FDS_PartyMemberStat::CollectStatusTypes.ArrayNum = iVar5 + 1;
    *(undefined4 *)
     (FDS_PartyMemberStat::CollectStatusTypes.AllocatorInstance.Data + (longlong)iVar5 * 4) = 1;
  }
  this->PartyType = Party;
  pPVar1 = (param_1->_impl_).party_;
  pPVar7 = &ds_proto::_PartyInfo_default_instance_._instance;
  if (pPVar1 != (PartyInfo *)0x0) {
    pPVar7 = pPVar1;
  }
  this->PartyUID = (pPVar7->_impl_).party_uid_;
  pPVar1 = (param_1->_impl_).party_;
  pPVar7 = &ds_proto::_PartyInfo_default_instance_._instance;
  if (pPVar1 != (PartyInfo *)0x0) {
    pPVar7 = pPVar1;
  }
  this->PartyLeaderUID = (pPVar7->_impl_).leader_uid_;
  pRVar9 = &(param_1->_impl_).slots_;
  uVar2 = *(ulonglong *)&(param_1->_impl_).slots_;
  if ((uVar2 & 1) != 0) {
    pRVar9 = (RepeatedPtrField<ds_proto::PartySlotInfo> *)(uVar2 + 7);
  }
  iVar5 = *(int *)&(param_1->_impl_).slots_.field_0x8;
  puVar3 = (undefined8 *)&pRVar9->field_0x0;
  for (; pRVar9 != (RepeatedPtrField<ds_proto::PartySlotInfo> *)(puVar3 + iVar5);
      pRVar9 = (RepeatedPtrField<ds_proto::PartySlotInfo> *)&pRVar9->field_0x8) {
    local_e8._0_8_ = 0;
    local_e8._24_8_ = (FScriptContainerElement *)0x0;
    local_e8._8_8_ = 0;
    local_e8._32_4_ = 0;
    local_e8._36_4_ = 0;
    local_e8._40_4_ = 0;
    local_e8._44_4_ = 0;
    local_e8._16_4_ = 0;
    local_e8._48_4_ = 0;
    local_e8[0x34] = false;
    local_e8[0x35] = false;
    local_e8._56_8_ = 0.0;
    local_e8._64_8_ = 0.0;
    local_e8._72_8_ = 0.0;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.NumBits = 0;
    local_88.MaxBits = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_48 = 0;
    FDS_PartyMemberInfo::SetPartySlotInfo((FDS_PartyMemberInfo *)local_e8,*(PartySlotInfo **)pRVar9)
    ;
    iVar6 = (this->PartyMemberInfos).ArrayNum;
    if (iVar6 == (this->PartyMemberInfos).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8a8,&(this->PartyMemberInfos).AllocatorInstance,
                         &(this->PartyMemberInfos).ArrayMax);
    }
    (this->PartyMemberInfos).ArrayNum = iVar6 + 1;
    FDS_PartyMemberInfo::FDS_PartyMemberInfo
              ((FDS_PartyMemberInfo *)
               ((this->PartyMemberInfos).AllocatorInstance.Data + (longlong)iVar6 * 0xa8),
               (FDS_PartyMemberInfo *)local_e8);
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    uVar2 = local_90 >> 0x20;
    local_90 = local_90 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_88.NumBits = 0;
    if (0x80 < (uint)local_88.MaxBits) {
      local_88.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
    }
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    if ((FScriptContainerElement *)local_e8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._24_8_);
    }
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar4 = FWeakObjectPtr::IsValid(&local_f0);
  if (bVar4) {
    pUVar8 = FWeakObjectPtr::Get(&local_f0);
    lVar11 = *(longlong *)&pUVar8[6].field_0x8;
  }
  iVar5 = (this->PartyMemberInfos).ArrayNum;
  pFVar10 = (this->PartyMemberInfos).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar5 * 0xa8;
  while( true ) {
    if ((this->PartyMemberInfos).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FDS_PartyMemberInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f8);
    }
    if (pFVar10 == pFVar12) break;
    if (((0 < *(longlong *)pFVar10) &&
        (this->PartyMemberCount = this->PartyMemberCount + 1, 0 < lVar11)) &&
       (lVar11 == *(longlong *)pFVar10)) {
      this->MySlotIndex = *(int *)(pFVar10 + 0x10);
    }
    pFVar10 = pFVar10 + 0xa8;
  }
  return;
}

// SetPartyLeader @ 14b8e9430

void __thiscall FDS_PartyInfo::SetPartyLeader(FDS_PartyInfo *this,long64 param_1)

{
  this->PartyLeaderUID = param_1;
  return;
}

// SetPartyMemberSync @ 14b8e9480

void __thiscall
FDS_PartyInfo::SetPartyMemberSync(FDS_PartyInfo *this,PartyMemberSyncResponse *param_1)

{
  FDS_PartyMemberInfo *this_00;
  
  this_00 = GetPartyMemberInfo(this,(param_1->_impl_).player_uid_);
  if (0 < this_00->PlayerUID) {
    FDS_PartyMemberInfo::SetPartyMemberSync(this_00,param_1);
    return;
  }
  return;
}

// SetPartySlotInfo @ 14b8e9710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FDS_PartyInfo::SetPartySlotInfo(FDS_PartyInfo *this,PartySlotInfo *param_1)

{
  int iVar1;
  ForAnyElementType _Src;
  UDS_PartyEvent *pUVar2;
  FString *pFVar3;
  long64 lVar4;
  FDS_PartyMemberInfo *this_00;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FDS_PartyMemberInfo *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_178 [32];
  undefined1 local_138 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_130;
  FString local_120;
  FStringFormatArg local_110;
  longlong local_e8;
  ulong64 local_e0;
  int local_d8;
  FString local_d0;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined2 local_b4;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar1 = (this->PartyMemberInfos).ArrayNum;
  this_00 = (FDS_PartyMemberInfo *)(this->PartyMemberInfos).AllocatorInstance.Data;
  local_e8 = 0;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b0 = 0.0;
  dStack_a8 = 0.0;
  local_e0 = 0;
  pFVar7 = this_00 + iVar1;
  local_d8 = 0;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  local_b4 = 0;
  local_a0 = 0.0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  while( true ) {
    if ((this->PartyMemberInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_PartyMemberInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_138);
    }
    if (this_00 == pFVar7) goto LAB_14b8e9b1c;
    if (this_00->SlotIndex == (param_1->_impl_).slot_index_) break;
    this_00 = this_00 + 1;
  }
  local_e8 = this_00->PlayerUID;
  local_e0 = this_00->EntityID;
  local_d8 = this_00->SlotIndex;
  ::FString::operator=(&local_d0,&this_00->Nickname);
  local_c0 = this_00->Level;
  local_bc = this_00->CharID;
  local_b8 = this_00->ZoneID;
  local_b4._0_1_ = this_00->Online;
  local_b4._1_1_ = this_00->Dead;
  local_b0 = (this_00->Position).field0_0x0._s_0.X;
  dStack_a8 = (this_00->Position).field0_0x0._s_0.Y;
  local_a0 = (this_00->Position).field0_0x0._s_0.Z;
  TSet<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_PartyMemberStat,0>,FDefaultSetAllocator>
  ::operator=(&local_98,
              (TSet<TTuple<EDS_StatusType,FDS_PartyMemberStat>,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_PartyMemberStat,0>,FDefaultSetAllocator>
               *)&this_00->Stats);
  local_48 = this_00->GameServerIndex;
  FDS_PartyMemberInfo::SetPartySlotInfo(this_00,param_1);
  pUVar2 = UDS_PartyEvent::GetEvent();
  if (pUVar2 == (UDS_PartyEvent *)0x0) goto LAB_14b8e9b1c;
  if ((local_e8 < 1) && (0 < this_00->PlayerUID)) {
    FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar2->OnJoinedPartyMember,this_00->PlayerUID);
    pFVar3 = ::FString::FString(&local_120,&this_00->Nickname);
    FStringFormatArg::FStringFormatArg(&local_110,pFVar3);
    local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_130.AllocatorInstance,1,&local_130.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_130.AllocatorInstance.Data,&local_110,1);
    lVar4 = 0xc369;
LAB_14b8e990a:
    UDS_UIMessageManager::OpenMsgByStringUi
              (lVar4,None_Party_01,&local_130,
               (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                *)0x0);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
    if ((FStringFormatArg *)local_130.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
  }
  else {
    if (local_e8 < 1) goto LAB_14b8e9b1c;
    if (this_00->PlayerUID < 1) {
      FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar2->OnLeftPartyMember,local_e8);
      _Src.Data = local_d0.Data.AllocatorInstance.Data;
      lVar5 = (longlong)local_d0.Data.ArrayNum;
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.Data.ArrayNum = local_d0.Data.ArrayNum;
      if (local_d0.Data.ArrayNum == 0) {
        local_120.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_120,
                   local_d0.Data.ArrayNum,&local_120.Data.ArrayMax);
        memcpy(local_120.Data.AllocatorInstance.Data,_Src.Data,lVar5 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_110,&local_120);
      local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_130.AllocatorInstance,1,&local_130.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_130.AllocatorInstance.Data,&local_110,1);
      lVar4 = 0xc36a;
      goto LAB_14b8e990a;
    }
    FDS_EventDelegate<__int64_const_>::Broadcast
              (&pUVar2->OnPartyMemberInfoChanged,this_00->PlayerUID);
    if ((local_bc != this_00->CharID) || ((bool)(char)local_b4 == this_00->Online))
    goto LAB_14b8e9b1c;
    pFVar3 = ::FString::FString(&local_120,&this_00->Nickname);
    FStringFormatArg::FStringFormatArg(&local_110,pFVar3);
    local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_130.AllocatorInstance,1,&local_130.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_130.AllocatorInstance.Data,&local_110,1);
    if ((FStringFormatArg *)local_110.StringValue.Data.AllocatorInstance.Data !=
        (FStringFormatArg *)0x0) {
      FMemory::Free(local_110.StringValue.Data.AllocatorInstance.Data);
    }
    UDS_UIMessageManager::OpenMsgByStringUi
              ((ulonglong)(this_00->Online == true) + 0x41ed5,None_Party_01,&local_130,
               (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                *)0x0);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
    local_110.StringValue.Data.AllocatorInstance.Data = local_130.AllocatorInstance.Data;
  }
  if ((FStringFormatArg *)local_110.StringValue.Data.AllocatorInstance.Data !=
      (FStringFormatArg *)0x0) {
    FMemory::Free(local_110.StringValue.Data.AllocatorInstance.Data);
  }
LAB_14b8e9b1c:
  this->PartyMemberCount = 0;
  iVar1 = (this->PartyMemberInfos).ArrayNum;
  pFVar6 = (this->PartyMemberInfos).AllocatorInstance.Data;
  pFVar8 = pFVar6 + (longlong)iVar1 * 0xa8;
  while( true ) {
    if ((this->PartyMemberInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_PartyMemberInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_138);
    }
    if (pFVar6 == pFVar8) break;
    if (0 < *(longlong *)pFVar6) {
      this->PartyMemberCount = this->PartyMemberCount + 1;
    }
    pFVar6 = pFVar6 + 0xa8;
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return;
}

// UnbindEntity @ 14b8efa60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_PartyInfo::UnbindEntity(FDS_PartyInfo *this,long64 param_1,ulong64 param_2)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  FDS_PartyMemberInfo *this_00;
  FDS_PartyMemberInfo *pFVar3;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1 < 1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_PartyInfo::UnbindEntity",0x1b,Yes);
    pwVar5 = L"InPlayerUID <= 0ll";
    uVar4 = 0x290;
  }
  else {
    if (param_2 != 0) {
      this_00 = (FDS_PartyMemberInfo *)(this->PartyMemberInfos).AllocatorInstance.Data;
      iVar1 = (this->PartyMemberInfos).ArrayNum;
      pFVar3 = this_00 + iVar1;
      while( true ) {
        if ((this->PartyMemberInfos).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FDS_PartyMemberInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_158);
        }
        if (this_00 == pFVar3) break;
        if (this_00->PlayerUID == param_1) {
          FDS_PartyMemberInfo::UnbindEntity(this_00,param_2);
          return;
        }
        this_00 = this_00 + 1;
      }
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = param_2;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_PartyInfo::UnbindEntity",0x1b,Yes);
    pwVar5 = L"InEntityID == 0ull";
    uVar4 = 0x296;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar4,pwVar5);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

