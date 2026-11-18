// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// FromString @ 14ec72fc0

Type __cdecl EOnlineKeyValuePairDataType::FromString(FString *param_1)

{
  int iVar1;
  bool bVar2;
  FString local_18;
  
  ::FString::FString(&local_18,L"Empty");
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar2 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    return Empty;
  }
  ::FString::FString(&local_18,L"Int32");
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar2 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    return Int32;
  }
  ::FString::FString(&local_18,L"UInt32");
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar2 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    return UInt32;
  }
  ::FString::FString(&local_18,L"Int64");
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar2 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    return Int64;
  }
  ::FString::FString(&local_18,L"UInt64");
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar2 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    return UInt64;
  }
  ::FString::FString(&local_18,L"Double");
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar2 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    return Double;
  }
  ::FString::FString(&local_18,L"String");
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar2 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    return String;
  }
  ::FString::FString(&local_18,L"Float");
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar2 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    return Float;
  }
  ::FString::FString(&local_18,L"Blob");
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar2 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    return Blob;
  }
  ::FString::FString(&local_18,L"Bool");
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar2 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    return Bool;
  }
  ::FString::FString(&local_18,L"Json");
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == local_18.Data.ArrayNum) {
    if (iVar1 < 2) {
      bVar2 = true;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = iVar1 + local_18.Data.ArrayNum == 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return !bVar2 + Json;
}

