// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Advertising
// Functions: 6

// FAdvertising @ 144651bc0

FAdvertising * __thiscall FAdvertising::FAdvertising(FAdvertising *this)

{
  *this = (FAdvertising)&___7FAdvertising__6B_;
  return this;
}

// ~FAdvertising @ 144651be0

void __thiscall FAdvertising::~FAdvertising(FAdvertising *this)

{
  *this = (FAdvertising)IModuleInterface::vftable;
  return;
}

// GetAdvertisingProvider @ 144651c40

/* WARNING: Enum "Type": Some values do not have unique names */

IAdvertisingProvider * __thiscall
FAdvertising::GetAdvertisingProvider(FAdvertising *this,FName *param_1)

{
  FName FVar1;
  FModuleManager *this_00;
  IModuleInterface *pIVar2;
  FString local_18;
  
  if (*param_1 == (FName)0x0) {
    if (2 < (byte)LogAdvertising._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAdvertising);
    }
  }
  else {
    FModuleManager::Get();
    FVar1 = *param_1;
    this_00 = FModuleManager::Get();
    pIVar2 = FModuleManager::LoadModule(this_00,FVar1,None);
    if (pIVar2 != (IModuleInterface *)0x0) {
      if (4 < (byte)LogAdvertising._0_1_) {
        ::FName::ToString(param_1,&local_18);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAdvertising);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return (IAdvertisingProvider *)pIVar2;
    }
    if (2 < (byte)LogAdvertising._0_1_) {
      ::FName::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAdvertising);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return (IAdvertisingProvider *)0x0;
      }
    }
  }
  return (IAdvertisingProvider *)0x0;
}

// GetDefaultProvider @ 144651d60

IAdvertisingProvider * __thiscall FAdvertising::GetDefaultProvider(FAdvertising *this)

{
  code *pcVar1;
  IAdvertisingProvider *pIVar2;
  ForAnyElementType FVar3;
  FName local_res8;
  FString local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0x40);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FConfigCacheIni::GetString(GConfig,L"Advertising",L"DefaultProviderName",&local_18,&GEngineIni);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pIVar2 = (IAdvertisingProvider *)(*pcVar1)(this,&local_res8);
  return pIVar2;
}

// ShutdownModule @ 144651e30

void __thiscall FAdvertising::ShutdownModule(FAdvertising *this)

{
  return;
}

// StartupModule @ 144651e40

void __thiscall FAdvertising::StartupModule(FAdvertising *this)

{
  return;
}

