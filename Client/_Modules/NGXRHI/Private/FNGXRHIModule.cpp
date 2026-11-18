// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXRHI
// Functions: 2

// StartupModule @ 14de0e0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNGXRHIModule::StartupModule(FNGXRHIModule *this)

{
  longlong lVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_1a8 [32];
  int local_188 [2];
  undefined8 local_180 [2];
  FString local_170;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined1 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXRHIModule::StartupModule",0x1c,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  pTVar2 = CVarNGXLogLevel.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar4 = 4;
    if (!bVar3) goto LAB_14de0e17b;
  }
  lVar4 = 0;
LAB_14de0e17b:
  local_188[0] = *(int *)((longlong)pTVar2->ShadowedValue + lVar4);
  pwVar5 = FCommandLine::Get();
  bVar3 = FParse::Value(pwVar5,L"ngxloglevel=",local_188);
  lVar4 = CVarNGXLogLevel._padding_;
  if (bVar3) {
    local_158 = 0;
    local_180[0] = 0;
    local_160 = 0xd000000;
    local_15c = 0;
    local_150 = 0;
    local_14c = 0xf000000;
    local_148 = 0x1000000;
    ::FString::PrintfImpl(&local_170,L"%d");
    lVar1 = *(longlong *)lVar4;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_170.Data.ArrayNum != 0) {
      FVar7.Data = local_170.Data.AllocatorInstance.Data;
    }
    uVar6 = (**(code **)(lVar1 + 0xa8))(lVar4,local_180,&local_160);
    (**(code **)(lVar1 + 0xb0))(lVar4,FVar7.Data,uVar6);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
  }
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXRHIModule::StartupModule",0x1c,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// ShutdownModule @ 14de0e2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNGXRHIModule::ShutdownModule(FNGXRHIModule *this)

{
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (4 < (byte)LogDLSSNGXRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FNGXRHIModule::ShutdownModule",0x1d,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (4 < (byte)LogDLSSNGXRHI._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FNGXRHIModule::ShutdownModule",0x1d,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSNGXRHI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

