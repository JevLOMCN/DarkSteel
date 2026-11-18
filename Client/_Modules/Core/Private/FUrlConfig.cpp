// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Init @ 141878610

void __thiscall FUrlConfig::Init(FUrlConfig *this)

{
  FString *pFVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType _Str;
  FScriptContainerElement *pFVar6;
  FString local_78;
  undefined1 local_68 [80];
  FString local_18;
  
  pFVar6 = (FScriptContainerElement *)0x0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_4_ = 0;
  local_68._12_4_ = 0;
  FConfigCacheIni::GetString(GConfig,L"URL",L"Protocol",(FString *)local_68,&GEngineIni);
  pFVar5 = (FScriptContainerElement *)local_68._0_8_;
  if (this != (FUrlConfig *)local_68) {
    pFVar5 = (this->DefaultProtocol).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (this->DefaultProtocol).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_68._0_8_;
    (this->DefaultProtocol).Data.ArrayNum = local_68._8_4_;
    (this->DefaultProtocol).Data.ArrayMax = local_68._12_4_;
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  local_68._16_8_ = (FScriptContainerElement *)0x0;
  local_68._24_4_ = 0;
  local_68._28_4_ = 0;
  FConfigCacheIni::GetString(GConfig,L"URL",L"Name",(FString *)(local_68 + 0x10),&GEngineIni);
  pFVar1 = &this->DefaultName;
  pFVar5 = (FScriptContainerElement *)local_68._16_8_;
  if (pFVar1 != (FString *)(local_68 + 0x10)) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_68._16_8_;
    (this->DefaultName).Data.ArrayNum = local_68._24_4_;
    (this->DefaultName).Data.ArrayMax = local_68._28_4_;
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  local_68._32_8_ = (FScriptContainerElement *)0x0;
  local_68._40_4_ = 0;
  local_68._44_4_ = 0;
  FConfigCacheIni::GetString(GConfig,L"URL",L"Host",(FString *)(local_68 + 0x20),&GEngineIni);
  pFVar1 = &this->DefaultHost;
  pFVar5 = (FScriptContainerElement *)local_68._32_8_;
  if (pFVar1 != (FString *)(local_68 + 0x20)) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_68._32_8_;
    (this->DefaultHost).Data.ArrayNum = local_68._40_4_;
    (this->DefaultHost).Data.ArrayMax = local_68._44_4_;
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  local_68._48_8_ = (FScriptContainerElement *)0x0;
  local_68._56_4_ = 0;
  local_68._60_4_ = 0;
  FConfigCacheIni::GetString(GConfig,L"URL",L"Portal",(FString *)(local_68 + 0x30),&GEngineIni);
  pFVar1 = &this->DefaultPortal;
  pFVar5 = (FScriptContainerElement *)local_68._48_8_;
  if (pFVar1 != (FString *)(local_68 + 0x30)) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_68._48_8_;
    (this->DefaultPortal).Data.ArrayNum = local_68._56_4_;
    (this->DefaultPortal).Data.ArrayMax = local_68._60_4_;
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  local_68._64_8_ = (FScriptContainerElement *)0x0;
  local_68._72_4_ = 0;
  local_68._76_4_ = 0;
  FConfigCacheIni::GetString(GConfig,L"URL",L"SaveExt",(FString *)(local_68 + 0x40),&GEngineIni);
  pFVar1 = &this->DefaultSaveExt;
  pFVar5 = (FScriptContainerElement *)local_68._64_8_;
  if (pFVar1 != (FString *)(local_68 + 0x40)) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_68._64_8_;
    (this->DefaultSaveExt).Data.ArrayNum = local_68._72_4_;
    (this->DefaultSaveExt).Data.ArrayMax = local_68._76_4_;
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pwVar4 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar4,L"Port=",&local_78,true,(wchar_t **)0x0);
  if (bVar2) {
    iVar3 = local_78.Data.ArrayNum;
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FConfigCacheIni::GetString(GConfig,L"URL",L"Port",&local_18,&GEngineIni);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    iVar3 = local_18.Data.ArrayNum;
    local_78.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_78.Data.ArrayNum = local_18.Data.ArrayNum;
    local_78.Data.ArrayMax = local_18.Data.ArrayMax;
  }
  _Str.Data = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    _Str.Data = local_78.Data.AllocatorInstance.Data;
  }
  iVar3 = _wtoi((wchar_t *)_Str.Data);
  this->DefaultPort = iVar3;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// Reset @ 14188c8e0

void __thiscall FUrlConfig::Reset(FUrlConfig *this)

{
  ::FString::operator=(&this->DefaultProtocol,L"");
  ::FString::operator=(&this->DefaultName,L"");
  ::FString::operator=(&this->DefaultHost,L"");
  ::FString::operator=(&this->DefaultPortal,L"");
  ::FString::operator=(&this->DefaultSaveExt,L"");
  return;
}

