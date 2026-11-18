// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FAsyncLoadingThreadSettings @ 141f20860

FAsyncLoadingThreadSettings * __thiscall
FAsyncLoadingThreadSettings::FAsyncLoadingThreadSettings(FAsyncLoadingThreadSettings *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FAsyncLoadingThreadSettings *pFVar4;
  wchar_t *pwVar5;
  bool local_res8 [8];
  
  this->bAsyncLoadingThreadEnabled = false;
  this->bAsyncPostLoadEnabled = false;
  this->bLooseFileLoadingEnabled = false;
  if (GConfig == (FConfigCacheIni *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GConfig",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                       ,0x89,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAsyncLoadingThreadSettings *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_res8[0] = true;
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/Engine.StreamingSettings",L"s.AsyncLoadingThreadEnabled",local_res8,
             &GEngineIni);
  pwVar5 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar5,L"NoAsyncLoadingThread");
  pwVar5 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar5,L"AsyncLoadingThread");
  if (bVar3) {
LAB_141f20922:
    bVar2 = true;
  }
  else {
    if (local_res8[0] != false) {
      bVar3 = FApp::ShouldUseThreadingForPerformance();
      if ((bVar3) && (!bVar2)) goto LAB_141f20922;
    }
    bVar2 = false;
  }
  this->bAsyncLoadingThreadEnabled = bVar2;
  local_res8[0] = true;
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/Engine.StreamingSettings",L"s.AsyncPostLoadEnabled",local_res8,
             &GEngineIni);
  pwVar5 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar5,L"NoAsyncPostLoad");
  pwVar5 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar5,L"AsyncPostLoad");
  if (bVar3) {
LAB_141f20996:
    bVar2 = true;
  }
  else {
    if (local_res8[0] != false) {
      bVar3 = FApp::ShouldUseThreadingForPerformance();
      if ((bVar3) && (!bVar2)) goto LAB_141f20996;
    }
    bVar2 = false;
  }
  this->bAsyncPostLoadEnabled = bVar2;
  local_res8[0] = false;
  FConfigCacheIni::GetBool
            (GConfig,L"/Script/Engine.StreamingSettings",L"s.LooseFileLoadingEnabled",local_res8,
             &GEngineIni);
  pwVar5 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar5,L"loosefileloading");
  if ((local_res8[0] == false) && (!bVar2)) {
    this->bLooseFileLoadingEnabled = false;
    return this;
  }
  this->bLooseFileLoadingEnabled = true;
  return this;
}

// Get @ 141f327d0

FAsyncLoadingThreadSettings * __cdecl FAsyncLoadingThreadSettings::Get(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FAsyncLoadingThreadSettings *pFVar4;
  wchar_t *pwVar5;
  bool local_res8 [8];
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &Settings;
  }
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 == -1) {
    if ((GConfig == (FConfigCacheIni *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("GConfig",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                           ,0x89,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAsyncLoadingThreadSettings *)(*pcVar1)();
      return pFVar4;
    }
    local_res8[0] = true;
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/Engine.StreamingSettings",L"s.AsyncLoadingThreadEnabled",local_res8
               ,&GEngineIni);
    pwVar5 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar5,L"NoAsyncLoadingThread");
    pwVar5 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar5,L"AsyncLoadingThread");
    if ((bVar3) ||
       (((local_res8[0] != false && (bVar3 = FApp::ShouldUseThreadingForPerformance(), bVar3)) &&
        (!bVar2)))) {
      Settings.bAsyncLoadingThreadEnabled = true;
    }
    else {
      Settings.bAsyncLoadingThreadEnabled = false;
    }
    local_res8[0] = true;
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/Engine.StreamingSettings",L"s.AsyncPostLoadEnabled",local_res8,
               &GEngineIni);
    pwVar5 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar5,L"NoAsyncPostLoad");
    pwVar5 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar5,L"AsyncPostLoad");
    if ((bVar3) ||
       (((local_res8[0] != false && (bVar3 = FApp::ShouldUseThreadingForPerformance(), bVar3)) &&
        (!bVar2)))) {
      Settings.bAsyncPostLoadEnabled = true;
    }
    else {
      Settings.bAsyncPostLoadEnabled = false;
    }
    local_res8[0] = false;
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/Engine.StreamingSettings",L"s.LooseFileLoadingEnabled",local_res8,
               &GEngineIni);
    pwVar5 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar5,L"loosefileloading");
    if ((local_res8[0] != false) || (Settings.bLooseFileLoadingEnabled = false, bVar2)) {
      Settings.bLooseFileLoadingEnabled = true;
    }
    _Init_thread_footer(&::_TSS0);
    return &Settings;
  }
  return &Settings;
}

