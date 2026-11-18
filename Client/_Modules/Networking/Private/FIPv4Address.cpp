// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Networking
// Functions: 2

// Parse @ 143119a60

bool __cdecl FIPv4Address::Parse(FString *param_1,FIPv4Address *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  wchar_t *_Str;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  bVar2 = false;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar4 = ::FString::ParseIntoArray(param_1,&local_18,L".",false);
  if (iVar4 == 4) {
    if ((local_18.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    _Str = L"";
    if (*(int *)(local_18.AllocatorInstance.Data + 8) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)local_18.AllocatorInstance.Data;
    }
    uVar5 = _wtoi(pwVar9);
    if ((local_18.ArrayNum < 2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(int *)(local_18.AllocatorInstance.Data + 0x18) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)(local_18.AllocatorInstance.Data + 0x10);
    }
    uVar6 = _wtoi(pwVar9);
    if ((local_18.ArrayNum < 3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(int *)(local_18.AllocatorInstance.Data + 0x28) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)(local_18.AllocatorInstance.Data + 0x20);
    }
    uVar7 = _wtoi(pwVar9);
    if ((local_18.ArrayNum < 4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(int *)(local_18.AllocatorInstance.Data + 0x38) != 0) {
      _Str = *(wchar_t **)(local_18.AllocatorInstance.Data + 0x30);
    }
    uVar8 = _wtoi(_Str);
    if ((((uVar5 < 0x100) && (uVar6 < 0x100)) && (uVar7 < 0x100)) && (uVar8 < 0x100)) {
      (param_2->field0_0x0)._s_0.A = (uchar)uVar5;
      bVar2 = true;
      (param_2->field0_0x0)._s_0.B = (uchar)uVar6;
      (param_2->field0_0x0)._s_0.C = (uchar)uVar7;
      (param_2->field0_0x0)._s_0.D = (uchar)uVar8;
    }
    else {
      bVar2 = false;
    }
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar2;
}

// ToString @ 14311a0d0

FString * __thiscall FIPv4Address::ToString(FIPv4Address *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%i.%i.%i.%i");
  return __return_storage_ptr__;
}

