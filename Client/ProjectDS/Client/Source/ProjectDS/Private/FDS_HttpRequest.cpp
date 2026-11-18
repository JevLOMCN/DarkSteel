// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// ~FDS_HttpRequest @ 14b8b3160

void __thiscall FDS_HttpRequest::~FDS_HttpRequest(FDS_HttpRequest *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->FailDel);
  pvVar1 = *(void **)&(this->FailDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->FailDel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SuccessDel);
  pvVar1 = *(void **)&(this->SuccessDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SuccessDel);
  pFVar2 = (this->ContentString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetContentStringWithMessage @ 14bb8a290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_HttpRequest::SetContentStringWithMessage(FDS_HttpRequest *this,Message *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  int iVar3;
  undefined1 auStackY_198 [32];
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  bVar1 = DS_ProtoMessageToJsonString<google::protobuf::Message>(param_1,&local_158);
  if ((!bVar1) && (pUVar2 = UDS_LogManager::GetInst(), pUVar2 != (UDS_LogManager *)0x0)) {
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_HttpRequest::SetContentStringWithMessage",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x27,L"MessageToJsonString failed. %s");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  iVar3 = local_158.Data.ArrayNum + -1;
  if (local_158.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->ContentString,(wchar_t *)local_158.Data.AllocatorInstance.Data,iVar3);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return;
}

// VerbToString @ 14bb99af0

FString * __thiscall
FDS_HttpRequest::VerbToString(FDS_HttpRequest *this,FString *__return_storage_ptr__)

{
  if (this->Verb == GET) {
    ::FString::FString(__return_storage_ptr__,"GET");
    return __return_storage_ptr__;
  }
  if (this->Verb != POST) {
    ::FString::FString(__return_storage_ptr__,"");
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,"POST");
  return __return_storage_ptr__;
}

