// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// CreateDependentWorkPriority @ 1421c3a70

FRemoteWorkPriority __thiscall
FRemoteWorkPriority::CreateDependentWorkPriority(FRemoteWorkPriority *this)

{
  code *pcVar1;
  bool bVar2;
  FRemoteWorkPriority FVar3;
  ulonglong *in_RDX;
  
  *in_RDX = this->PackedData;
  *(undefined1 *)((longlong)in_RDX + 3) = 0;
  if (*(char *)((longlong)&this->PackedData + 3) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorkDepth() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteExecutor.cpp"
                       ,0x3fa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.PackedData = (*pcVar1)();
      return (FRemoteWorkPriority)FVar3.PackedData;
    }
  }
  *in_RDX = *in_RDX | (ulonglong)(*(byte *)((longlong)&this->PackedData + 3) - 1) << 0x18;
  return (FRemoteWorkPriority)(ulong64)in_RDX;
}

// CreateRootWorkPriority @ 1421c4560

FRemoteWorkPriority __cdecl
FRemoteWorkPriority::CreateRootWorkPriority(FRemoteServerId param_1,FRemoteTransactionId param_2)

{
  code *pcVar1;
  bool bVar2;
  FRemoteWorkPriority FVar3;
  
  if (((param_1.Id == 0x3fd) &&
      (param_1.Id = FRemoteServerId::GlobalServerId.Id, FRemoteServerId::GlobalServerId.Id == 0x3fd)
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("GlobalServerId.Id != (uint32)ERemoteServerIdConstants::Local",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteObjectTypes.h"
                               ,0x9d,
                               L"Unable to convert Local server id to global. Global server id hasn\'t been initialized yet."
                              ), param_1 = FRemoteServerId::GlobalServerId, bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3.PackedData = (*pcVar1)();
    return (FRemoteWorkPriority)FVar3.PackedData;
  }
  return (FRemoteWorkPriority)(CONCAT44(param_1.Id,param_2.Id) | 0xff000000);
}

// ToString @ 1421ea150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FRemoteWorkPriority::ToString(FRemoteWorkPriority *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_108 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FRemoteServerId local_b8 [2];
  FString local_b0;
  FString local_a0;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar5 = (uint)(this->PackedData >> 0x20);
  if (0x3fc < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumber < (uint32)ERemoteServerIdConstants::FirstReserved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                       ,0x45e,L"Remote server id can not be greater than %u, got: %u");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_b8[0].Id = uVar5;
  pFVar3 = FRemoteServerId::ToString(local_b8,&local_a0);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_88,pwVar4);
  FStringFormatArg::FStringFormatArg(&local_68,(uint)*(byte *)((longlong)&this->PackedData + 3));
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_b0,(uint)this->PackedData & 0xffffff);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_b0.Data.ArrayNum != 0) {
    FVar6.Data = local_b0.Data.AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_48,(wchar_t *)FVar6.Data);
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,0,&local_c8.AllocatorInstance,3,&local_c8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_c8.AllocatorInstance.Data,&local_88,3)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"[pri: rsi {0} depth {1} id {2}]",&local_c8);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

