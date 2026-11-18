// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MsQuicRuntime
// Functions: 4

// ShutdownModule @ 14f040df0

void __thiscall FMsQuicRuntimeModule::ShutdownModule(FMsQuicRuntimeModule *this)

{
  if (MsQuicLibraryHandle != (void *)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(MsQuicLibraryHandle);
    MsQuicLibraryHandle = (void *)0x0;
  }
  return;
}

// FreeMsQuicDll @ 14f040e60

void __cdecl FMsQuicRuntimeModule::FreeMsQuicDll(void)

{
  if (MsQuicLibraryHandle != (void *)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(MsQuicLibraryHandle);
    MsQuicLibraryHandle = (void *)0x0;
  }
  return;
}

// InitRuntime @ 14f040e90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FMsQuicRuntimeModule::InitRuntime(void)

{
  int iVar1;
  FString *pFVar2;
  size_t sVar3;
  void *pvVar4;
  wchar_t *_Str;
  FString local_58;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  if (MsQuicLibraryHandle == (void *)0x0) {
    _Str = L"";
    if (MSQUIC_BINARIES_PATH.Data.ArrayNum != 0) {
      _Str = (wchar_t *)MSQUIC_BINARIES_PATH.Data.AllocatorInstance.Data;
    }
    pFVar2 = FPaths::EngineDir(&local_48);
    if ((pFVar2->Data).ArrayNum == 0) {
      local_28.DataPtr = L"";
    }
    else {
      local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    pvVar4 = (void *)0x0;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      sVar3 = wcslen(local_28.DataPtr);
      local_28.Size = (int)sVar3;
    }
    iVar1 = 0;
    local_10 = iVar1;
    local_18 = (FScriptContainerElement *)_Str;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
      sVar3 = wcslen(_Str);
      local_10 = (int)sVar3;
    }
    FPaths::CombineInternal(&local_38,&local_28,2);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_58,"");
    local_28.DataPtr = L"";
    if (local_38.Data.ArrayNum != 0) {
      local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    }
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      sVar3 = wcslen(local_28.DataPtr);
      iVar1 = (int)sVar3;
    }
    local_10 = 0x10;
    local_18 = (FScriptContainerElement *)0x1530e3df8;
    local_28.Size = iVar1;
    FPaths::CombineInternal(&local_48,&local_28,2);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
    if (1 < local_48.Data.ArrayNum) {
      pvVar4 = FWindowsPlatformProcess::GetDllHandle
                         ((wchar_t *)local_48.Data.AllocatorInstance.Data);
    }
    MsQuicLibraryHandle = pvVar4;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (pvVar4 == (void *)0x0) {
      if (1 < (byte)LogMsQuicRuntime._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMsQuicRuntime);
      }
      return false;
    }
  }
  else if (3 < (byte)LogMsQuicRuntime._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMsQuicRuntime);
  }
  return true;
}

// LoadMsQuicDll @ 14f041090

bool __cdecl FMsQuicRuntimeModule::LoadMsQuicDll(void)

{
  int iVar1;
  FString *pFVar2;
  size_t sVar3;
  void *pvVar4;
  wchar_t *_Str;
  FString local_58;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  _Str = L"";
  if (MSQUIC_BINARIES_PATH.Data.ArrayNum != 0) {
    _Str = (wchar_t *)MSQUIC_BINARIES_PATH.Data.AllocatorInstance.Data;
  }
  pFVar2 = FPaths::EngineDir(&local_48);
  if ((pFVar2->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  pvVar4 = (void *)0x0;
  local_28.Size = 0;
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(local_28.DataPtr);
    local_28.Size = (int)sVar3;
  }
  iVar1 = 0;
  local_10 = iVar1;
  local_18 = (FScriptContainerElement *)_Str;
  if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(_Str);
    local_10 = (int)sVar3;
  }
  FPaths::CombineInternal(&local_38,&local_28,2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,"");
  local_28.DataPtr = L"";
  if (local_38.Data.ArrayNum != 0) {
    local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  }
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen(local_28.DataPtr);
    iVar1 = (int)sVar3;
  }
  local_10 = 0x10;
  local_18 = (FScriptContainerElement *)0x1530e3df8;
  local_28.Size = iVar1;
  FPaths::CombineInternal(&local_48,&local_28,2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  local_58.Data.ArrayMax = local_48.Data.ArrayMax;
  if (1 < local_48.Data.ArrayNum) {
    pvVar4 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)local_48.Data.AllocatorInstance.Data);
  }
  MsQuicLibraryHandle = pvVar4;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return pvVar4 != (void *)0x0;
}

