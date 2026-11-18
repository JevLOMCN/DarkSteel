// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// ToString @ 146fd9780

FString * __cdecl
FPathFollowingResultFlags::ToString(FString *__return_storage_ptr__,ushort param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  FString *pFVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FString local_38;
  FString local_28;
  
  pFVar4 = FlagDesc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(FlagDesc,L"Success");
    ::FString::FString(FlagDesc + 1,L"Blocked");
    ::FString::FString(FlagDesc + 2,L"OffPath");
    ::FString::FString(FlagDesc + 3,L"UserAbort");
    ::FString::FString(FlagDesc + 4,L"OwnerFinished");
    ::FString::FString(FlagDesc + 5,L"InvalidPath");
    ::FString::FString(FlagDesc + 6,L"MovementStop");
    ::FString::FString(FlagDesc + 7,L"NewRequest");
    ::FString::FString(FlagDesc + 8,L"ForcedScript");
    ::FString::FString(FlagDesc + 9,L"AlreadyAtGoal");
    atexit(`FPathFollowingResultFlags::ToString'::__l2::_dynamic_atexit_destructor_for__FlagDesc__);
    _Init_thread_footer(&::_TSS0);
  }
  uVar2 = 1;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar8 = 10;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  do {
    iVar3 = 0;
    if ((uVar2 & param_1) != 0) {
      iVar7 = (pFVar4->Data).ArrayNum;
      iVar6 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar6 = iVar3;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar6);
      ::FString::AppendChar(&local_38,L' ');
    }
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    pFVar4 = pFVar4 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  for (uVar5 = param_1 >> 10; uVar5 != 0; uVar5 = uVar5 >> 1) {
    if ((uVar5 & 1) != 0) {
      ::FString::AppendChars(&local_38,L"Game",4);
      ::FString::PrintfImpl(&local_28,L"%d");
      iVar7 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar7 = iVar3;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar7);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChar(&local_38,L' ');
    }
  }
  iVar7 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar7 = iVar3;
  }
  if (iVar7 + -1 < iVar7) {
    iVar7 = iVar7 + -1;
  }
  iVar3 = 0;
  if (0 < iVar7) {
    iVar3 = iVar7;
  }
  pFVar1 = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    pFVar1 = local_38.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(__return_storage_ptr__,(wchar_t *)pFVar1,iVar3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

