// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AddActorContainerID @ 148abf280

FString * __cdecl
FWorldPartitionLevelHelper::AddActorContainerID
          (FString *__return_storage_ptr__,FActorContainerID *param_1,FString *param_2)

{
  FString *pFVar1;
  FName *this;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  FName local_res8;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((param_2->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar2);
  CityHash64((char *)param_1,0x10);
  ::FString::PrintfImpl(&local_28,L"%016llx");
  pFVar1 = ::FName::GetPlainNameString(&local_res8,&local_18);
  ::FString::ConcatFC(&local_38,pFVar1,L"_");
  ::FString::ConcatFF(&local_48,&local_38,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar3.Data = local_48.Data.AllocatorInstance.Data;
  }
  this = ::FName::FName(&local_res10,(wchar_t *)FVar3.Data,local_res8.Number);
  ::FName::ToString(this,__return_storage_ptr__);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddActorContainerIDToSubPathString @ 148abf390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FWorldPartitionLevelHelper::AddActorContainerIDToSubPathString
          (FString *__return_storage_ptr__,FActorContainerID *param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  FString *pFVar4;
  undefined1 auStackY_b8 [32];
  FString local_88;
  FString local_78;
  FString local_68;
  wchar_t local_58 [20];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((((param_1->Guid).D != 0 || (param_1->Guid).C != 0) || (param_1->Guid).B != 0) ||
      (param_1->Guid).A != 0) {
    builtin_wcsncpy(local_58,L"PersistentLevel.",0x11);
    sVar3 = wcslen(local_58);
    bVar1 = ::FString::StartsWith(param_2,local_58,(int)sVar3,IgnoreCase);
    if (bVar1) {
      iVar2 = ::FString::Find(param_2,L".",1,IgnoreCase,FromStart,0x11);
      if (iVar2 == -1) {
        AddActorContainerID(__return_storage_ptr__,param_1,param_2);
        return __return_storage_ptr__;
      }
      ::FString::RightChop(param_2,&local_88,iVar2);
      pFVar4 = ::FString::Mid(param_2,&local_68,0,iVar2);
      pFVar4 = AddActorContainerID(&local_78,param_1,pFVar4);
      ::FString::ConcatFF(__return_storage_ptr__,pFVar4,&local_88);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  ::FString::FString(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

