// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// GetDebugString @ 14b9efa20

FString * __thiscall
FDS_V2TIMRequestMarkMessageAsRead::GetDebugString
          (FDS_V2TIMRequestMarkMessageAsRead *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestMarkMessageAsRead");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba07af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestMarkMessageAsRead::OnSuccessInternal(FDS_V2TIMRequestMarkMessageAsRead *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  uint uVar2;
  wchar_t *pwVar3;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->WhisperPlayerUID < 1) {
    if ((this->GroupID).Data.ArrayNum < 2) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestMarkMessageAsRead::OnSuccessInternal",0x34,Yes);
      pwVar3 = L"[TCC] MarkAsRead - OnSuccessInternal : All";
      uVar2 = 0x2ce;
    }
    else {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestMarkMessageAsRead::OnSuccessInternal",0x34,Yes);
      pwVar3 = L"[TCC] MarkAsRead - OnSuccessInternal : Group";
      uVar2 = 0x2ca;
    }
  }
  else {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestMarkMessageAsRead::OnSuccessInternal",0x34,Yes);
    pwVar3 = L"[TCC] MarkAsRead - OnSuccessInternal : C2C";
    uVar2 = 0x2c6;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,uVar2,pwVar3);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// Request @ 14ba118f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestMarkMessageAsRead::Request(FDS_V2TIMRequestMarkMessageAsRead *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  FString *pFVar4;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar5;
  longlong *plVar6;
  undefined1 auStackY_188 [32];
  uint uVar7;
  wchar_t *pwVar8;
  V2TIMString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pVVar1 = V2TIMManager::GetInstance();
  if (pVVar1 == (V2TIMManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestMarkMessageAsRead::Request",0x2a,Yes);
    pwVar8 = L"v2TIMMng is nullptr.";
    uVar7 = 0x2a3;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xe8))(pVVar1);
    if (plVar3 != (longlong *)0x0) {
      if (this->WhisperPlayerUID < 1) {
        if ((this->GroupID).Data.ArrayNum < 2) {
          plVar6 = &this->_padding_;
          if (this == (FDS_V2TIMRequestMarkMessageAsRead *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          (**(code **)(*plVar3 + 0xd0))(plVar3,plVar6);
        }
        else {
          DS_ChatHelper::ToV2TIMString(&local_158,&this->GroupID);
          plVar6 = &this->_padding_;
          if (this == (FDS_V2TIMRequestMarkMessageAsRead *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          (**(code **)(*plVar3 + 200))(plVar3,&local_158,plVar6);
          V2TIMString::~V2TIMString(&local_158);
        }
      }
      else {
        pFVar4 = DS_Util::FromInt64(&local_148,this->WhisperPlayerUID);
        if ((pFVar4->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
        pTVar5 = StringCast<char8_t,128,wchar_t>
                           ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,
                            pwVar8);
        V2TIMString::V2TIMString(&local_158,(char *)pTVar5->Ptr);
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        plVar6 = &this->_padding_;
        if (this == (FDS_V2TIMRequestMarkMessageAsRead *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        (**(code **)(*plVar3 + 0xc0))(plVar3,&local_158,plVar6);
        V2TIMString::~V2TIMString(&local_158);
      }
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestMarkMessageAsRead::Request",0x2a,Yes);
    pwVar8 = L"v2TIMMessageMng is nullptr.";
    uVar7 = 0x2aa;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// SetGroupID @ 14ba1c970

void __thiscall
FDS_V2TIMRequestMarkMessageAsRead::SetGroupID
          (FDS_V2TIMRequestMarkMessageAsRead *this,FString *param_1)

{
  ::FString::operator=(&this->GroupID,param_1);
  return;
}

// SetWhisperPlayerUID @ 14ba1d500

void __thiscall
FDS_V2TIMRequestMarkMessageAsRead::SetWhisperPlayerUID
          (FDS_V2TIMRequestMarkMessageAsRead *this,long64 param_1)

{
  this->WhisperPlayerUID = param_1;
  return;
}

