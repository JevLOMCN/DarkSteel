// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// GetLogString @ 14ec75980

FString * __thiscall
UE::Online::FOnlineError::GetLogString
          (FOnlineError *this,FString *__return_storage_ptr__,bool param_1)

{
  IOnlineErrorDetails *pIVar1;
  FOnlineError *this_00;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  void *local_48 [2];
  void *local_38 [2];
  FString local_28;
  
  ::FString::FString(&local_b8,L"");
  if ((this->Details).Object == (IOnlineErrorDetails *)0x0) {
    GetErrorId(this,&local_28);
    ::FString::PrintfImpl(&local_78,L"[%s]");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_b8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    local_b8.Data.ArrayNum = local_78.Data.ArrayNum;
    local_b8.Data.ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    ::FString::FString(&local_a8,L"");
    if (param_1) {
      GetErrorId(this,&local_58);
      ::FString::PrintfImpl(&local_98,L"[%s] ");
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      local_a8.Data.ArrayNum = local_98.Data.ArrayNum;
      local_a8.Data.ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (((this->Details).Object == (IOnlineErrorDetails *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    pIVar1 = (this->Details).Object;
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,local_38,this);
    if (((this->Details).Object == (IOnlineErrorDetails *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    pIVar1 = (this->Details).Object;
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,local_48,this);
    ::FString::PrintfImpl(&local_88,L"%s%s");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_b8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    local_b8.Data.ArrayNum = local_88.Data.ArrayNum;
    local_b8.Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
    local_28.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
      local_28.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this_00 = (this->Inner).Object;
  if (this_00 == (FOnlineError *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_b8.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_b8.Data.ArrayMax;
  }
  else {
    GetLogString(this_00,&local_68,false);
    if (local_68.Data.ArrayNum < 2) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_b8.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_b8.Data.ArrayMax;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    else {
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s (%s)");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

