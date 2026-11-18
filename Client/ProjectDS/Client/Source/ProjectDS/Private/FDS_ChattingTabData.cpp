// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// FDS_ChattingTabData @ 14b9d79a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_ChattingTabData * __thiscall
FDS_ChattingTabData::FDS_ChattingTabData(FDS_ChattingTabData *this,FDS_ChattingTabTableRow *param_1)

{
  TArray<EDS_ChattingType,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  FDS_ChattingTabData *pFVar10;
  UDS_LogManager *pUVar11;
  FDS_ResourceColorTableRow *pFVar12;
  FScriptContainerElement *pFVar13;
  float fVar14;
  undefined1 auStackY_2c8 [32];
  undefined1 local_288 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  this->ChattingTabType = None;
  this->InputChattingType = Zone;
  this->ChattingTypeFlag = 0;
  pTVar1 = &this->ShowChattingTypes;
  this->Order = 0;
  this->TabIconID = 0;
  (this->TabStringID).ID = 0;
  (this->TabStringID)._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  piVar2 = &(this->ShowChattingTypes).ArrayMax;
  *piVar2 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ShowChattingTypes).ArrayNum = 0;
  this->bIsAlwaysVisible = false;
  this->bIsSubTabAvailable = false;
  if (param_1 == (FDS_ChattingTabTableRow *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<978511124758528086>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_ChattingDefines.cpp"
                       ,0x56,"InChattingTabTableRow");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar10 = (FDS_ChattingTabData *)(*pcVar8)();
      return pFVar10;
    }
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"FDS_ChattingTabData::FDS_ChattingTabData",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,local_278.Ptr,0x58,L"InChattingTabTableRow is null.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    this->ChattingTabType = param_1->ID;
    this->InputChattingType = param_1->DefaultChatType;
    this->Order = param_1->Order;
    this->TabIconID = param_1->ID_Icon;
    (this->TabStringID).ID = (param_1->ID_Name).ID;
    if (pTVar1 != &param_1->ID_DisplayableChatTypes) {
      iVar5 = (param_1->ID_DisplayableChatTypes).ArrayNum;
      pFVar7 = (param_1->ID_DisplayableChatTypes).AllocatorInstance.Data;
      iVar6 = *piVar2;
      (this->ShowChattingTypes).ArrayNum = iVar5;
      if (iVar5 == 0) {
        if (iVar6 == 0) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,iVar6,&pTVar1->AllocatorInstance,0,piVar2);
        }
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar5,iVar6,&pTVar1->AllocatorInstance,iVar5,piVar2);
        memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar5);
      }
    }
    this->bIsAlwaysVisible = param_1->IsAlwaysVisible;
    this->bIsSubTabAvailable = param_1->IsSubTabAvailable;
    pFVar12 = FDS_ResourceColorTableRow::Get((longlong)param_1->ID_Color,true);
    if (pFVar12 == (FDS_ResourceColorTableRow *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 != (UDS_LogManager *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FDS_ChattingTabData::FDS_ChattingTabData",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_158.Ptr,0x68,
                   L"[Chat] FDS_ResourceColorTableRow is null (%d).");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      (this->TabColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    }
    else {
      fVar3 = FLinearColor::sRGBToLinearTable[(pFVar12->Color).field0_0x0._s_0.G];
      fVar4 = FLinearColor::sRGBToLinearTable[(pFVar12->Color).field0_0x0._s_0.B];
      fVar14 = (float)(pFVar12->Color).field0_0x0._s_0.A * __real_3b808081;
      (this->TabColor).field0_0x0._s_0.R =
           FLinearColor::sRGBToLinearTable[(pFVar12->Color).field0_0x0._s_0.R];
      (this->TabColor).field0_0x0._s_0.G = fVar3;
      (this->TabColor).field0_0x0._s_0.B = fVar4;
      (this->TabColor).field0_0x0._s_0.A = fVar14;
    }
    pFVar13 = (pTVar1->AllocatorInstance).Data;
    iVar5 = (this->ShowChattingTypes).ArrayNum;
    pFVar7 = pFVar13 + iVar5;
    while( true ) {
      if ((this->ShowChattingTypes).ArrayNum != iVar5) {
        `TCheckedPointerIterator<enum_EDS_ChattingType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_288);
      }
      if (pFVar13 == pFVar7) break;
      this->ChattingTypeFlag = this->ChattingTypeFlag | 1L << ((ulonglong)(byte)*pFVar13 & 0x3f);
      pFVar13 = pFVar13 + 1;
    }
  }
  return this;
}

// GetChattingTypeFlag @ 14b9ee7f0

ulong64 __thiscall FDS_ChattingTabData::GetChattingTypeFlag(FDS_ChattingTabData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ShowChattingTypes).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->ShowChattingTypes).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
    return 1L << ((byte)(this->ShowChattingTypes).AllocatorInstance.Data[param_1] & 0x3f);
  }
  return this->ChattingTypeFlag;
}

// GetInputChattingType @ 14b9f09b0

EDS_ChattingType __thiscall
FDS_ChattingTabData::GetInputChattingType(FDS_ChattingTabData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_ChattingType EVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ShowChattingTypes).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->ShowChattingTypes).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    return (EDS_ChattingType)(this->ShowChattingTypes).AllocatorInstance.Data[param_1];
  }
  return this->InputChattingType;
}

// IsShowChattingTab @ 14b9f9f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_ChattingTabData::IsShowChattingTab(FDS_ChattingTabData *this)

{
  FDS_ChatCustomTabManager *pFVar1;
  FDS_ChatBookmarkManager *pFVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar7;
  FDS_PartyRepo *this_01;
  FDS_RaidPartyRepo *this_02;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->bIsAlwaysVisible == true) {
    return true;
  }
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_ChattingTabData::IsShowChattingTab",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0x94,L"chattingManager == nullptr");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return false;
    }
    FMemory::Free((void *)local_148._padding_);
    return false;
  }
  switch(this->ChattingTabType) {
  case Custom:
    pFVar1 = (this_00->ChatCustomTabManager).Object;
    if (pFVar1 == (FDS_ChatCustomTabManager *)0x0) {
      return false;
    }
    iVar5 = (pFVar1->CustomDatas).ArrayNum;
    iVar10 = 0;
    pFVar8 = (pFVar1->CustomDatas).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar5 * 0x10;
    while( true ) {
      if ((pFVar1->CustomDatas).ArrayNum != iVar5) {
        `TCheckedPointerIterator<TSharedPtr<FDS_ChatCustomData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_158);
      }
      if (pFVar8 == pFVar9) break;
      if ((*(longlong *)pFVar8 != 0) && (*(longlong *)(*(longlong *)pFVar8 + 8) != 0)) {
        iVar10 = iVar10 + 1;
      }
      pFVar8 = pFVar8 + 0x10;
    }
    goto LAB_14b9fa17a;
  default:
    goto switchD_14b9fa058_caseD_3;
  case Whisper:
    iVar5 = UDS_ChattingManager::GetChatRoomDataCount(this_00,Whisper);
    bVar4 = iVar5 < 0;
    bVar11 = iVar5 == 0;
    break;
  case Party:
    this_01 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar4 = FDS_PartyRepo::IsPartyJoined(this_01);
    if (bVar4) {
      return true;
    }
    return false;
  case Guild:
    goto switchD_14b9fa058_caseD_8;
  case Group:
    iVar5 = UDS_ChattingManager::GetChatRoomDataCount(this_00,Group);
    bVar4 = iVar5 < 0;
    bVar11 = iVar5 == 0;
    break;
  case Favorite:
    pFVar2 = (this_00->ChatBookmarkManager).Object;
    if (pFVar2 == (FDS_ChatBookmarkManager *)0x0) {
      return false;
    }
    pFVar8 = (pFVar2->BookmarkDatas).AllocatorInstance.Data;
    iVar10 = 0;
    iVar5 = (pFVar2->BookmarkDatas).ArrayNum;
    pFVar9 = pFVar8 + (longlong)iVar5 * 0x10;
    while( true ) {
      if ((pFVar2->BookmarkDatas).ArrayNum != iVar5) {
        `TCheckedPointerIterator<TSharedPtr<FDS_ChatBookmarkData,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_158);
      }
      if (pFVar8 == pFVar9) break;
      piVar3 = *(int **)pFVar8;
      if ((((piVar3 != (int *)0x0) && ((char)piVar3[1] != '\0')) && (-1 < *piVar3)) &&
         ((-1 < piVar3[2] &&
          (iVar6 = DS_CommonDataHelper::ChattingMaxFavoriteCount(), *piVar3 < iVar6)))) {
        iVar10 = iVar10 + 1;
      }
      pFVar8 = pFVar8 + 0x10;
    }
LAB_14b9fa17a:
    bVar4 = iVar10 < 0;
    bVar11 = iVar10 == 0;
    break;
  case RaidParty:
    this_02 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_02);
    if (bVar4) {
      return true;
    }
    return false;
  }
  if (bVar11 || bVar4) {
switchD_14b9fa058_caseD_8:
    return false;
  }
switchD_14b9fa058_caseD_3:
  return true;
}

