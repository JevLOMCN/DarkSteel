// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 7

// WriteDouble @ 141dfde70

void __cdecl TJsonPrintPolicy<char8_t>::WriteDouble(FArchive *param_1,double param_2)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  ::FString::PrintfImpl(&local_28,L"%.17g");
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  WriteString(param_1,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// WriteDouble @ 141dfdef0

void __cdecl TJsonPrintPolicy<wchar_t>::WriteDouble(FArchive *param_1,double param_2)

{
  size_t sVar1;
  int iVar2;
  ForAnyElementType FVar3;
  code *pcVar4;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%.17g");
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    FVar3.Data = (FScriptContainerElement *)0x0;
    iVar2 = 0;
    pcVar4 = *(code **)(*(longlong *)param_1 + 0x188);
  }
  else {
    if ((0 < iVar2) &&
       (*(short *)(local_18.Data.AllocatorInstance.Data + (longlong)iVar2 * 2 + -2) == 0)) {
      iVar2 = iVar2 + -1;
    }
    pcVar4 = *(code **)(*(longlong *)param_1 + 0x188);
    if (iVar2 == -1) {
      sVar1 = wcslen((wchar_t *)local_18.Data.AllocatorInstance.Data);
      iVar2 = (int)sVar1;
    }
  }
  (*pcVar4)(param_1,FVar3.Data,(longlong)iVar2 * 2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// WriteFloat @ 141dfe290

void __cdecl TJsonPrintPolicy<char8_t>::WriteFloat(FArchive *param_1,float param_2)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  ::FString::PrintfImpl(&local_28,L"%g");
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  WriteString(param_1,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// WriteFloat @ 141dfe310

void __cdecl TJsonPrintPolicy<wchar_t>::WriteFloat(FArchive *param_1,float param_2)

{
  size_t sVar1;
  int iVar2;
  ForAnyElementType FVar3;
  code *pcVar4;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%g");
  FVar3.Data = local_18.Data.AllocatorInstance.Data;
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    FVar3.Data = (FScriptContainerElement *)0x0;
    iVar2 = 0;
    pcVar4 = *(code **)(*(longlong *)param_1 + 0x188);
  }
  else {
    if ((0 < iVar2) &&
       (*(short *)(local_18.Data.AllocatorInstance.Data + (longlong)iVar2 * 2 + -2) == 0)) {
      iVar2 = iVar2 + -1;
    }
    pcVar4 = *(code **)(*(longlong *)param_1 + 0x188);
    if (iVar2 == -1) {
      sVar1 = wcslen((wchar_t *)local_18.Data.AllocatorInstance.Data);
      iVar2 = (int)sVar1;
    }
  }
  (*pcVar4)(param_1,FVar3.Data,(longlong)iVar2 * 2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// WriteString @ 141e00b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TJsonPrintPolicy<char>::WriteString(FArchive *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  FScriptContainerElement local_b8 [128];
  ForAnyElementType local_38;
  FScriptContainerElement *local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar8 = 0;
  pwVar2 = param_2->DataPtr;
  local_28 = param_2->Size;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (pwVar2 == (wchar_t *)0x0) {
    local_30 = (FScriptContainerElement *)0x0;
    local_28 = 0;
  }
  else {
    iVar6 = 0;
    if ((0 < local_28) && (iVar6 = 0, pwVar2[(longlong)local_28 + -1] == L'\0')) {
      iVar6 = 1;
      local_28 = local_28 + -1;
    }
    uVar9 = iVar6 + local_28;
    if (0x80 < uVar9) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,uVar9,1);
    }
    FVar7.Data = local_b8;
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FVar7.Data = local_38.Data;
    }
    lVar10 = (longlong)(int)uVar9;
    bVar4 = false;
    lVar5 = lVar8;
    local_30 = FVar7.Data;
    if (0 < lVar10) {
      do {
        wVar1 = pwVar2[lVar5];
        FVar7.Data[lVar5] = SUB21(wVar1,0);
        lVar5 = lVar5 + 1;
        bVar4 = (bool)(bVar4 | 0x7f < (ushort)wVar1);
      } while (lVar5 < lVar10);
      if (bVar4) {
        do {
          if (0x7f < (ushort)pwVar2[lVar8]) {
            FVar7.Data[lVar8] = (FScriptContainerElement)0x3f;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar10);
      }
    }
    if ((FVar7.Data + lVar10 == (FScriptContainerElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_30,(longlong)local_28);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// WriteString @ 141e00ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TJsonPrintPolicy<char8_t>::WriteString(FArchive *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_e8 [32];
  FScriptContainerElement local_c8 [128];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar5 = 0;
  pwVar1 = param_2->DataPtr;
  iVar7 = param_2->Size;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (pwVar1 == (wchar_t *)0x0) {
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    goto LAB_141e00df2;
  }
  if ((0 < iVar7) && (pwVar1[(longlong)iVar7 + -1] == L'\0')) {
    iVar5 = 1;
    iVar7 = iVar7 + -1;
  }
  local_38 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar1,iVar7);
  uVar6 = local_38 + iVar5;
  uVar8 = uVar6;
  if (uVar6 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_141e00d6f;
    }
  }
  else {
LAB_141e00d6f:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar8,1);
  }
  local_40 = local_c8;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  puVar4 = UE::Core::Private::Convert((uchar *)local_40,uVar6,pwVar1,iVar5 + iVar7);
  if ((puVar4 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141e00df2:
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_40,(longlong)local_38);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// WriteString @ 141e00e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl TJsonPrintPolicy<wchar_t>::WriteString(FArchive *param_1,TStringView<char8_t> *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_168 [32];
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  iVar5 = 0;
  puVar1 = param_2->DataPtr;
  iVar7 = param_2->Size;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (puVar1 == (uchar *)0x0) {
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    goto LAB_141e00f71;
  }
  if ((0 < iVar7) && (puVar1[(longlong)iVar7 + -1] == '\0')) {
    iVar5 = 1;
    iVar7 = iVar7 + -1;
  }
  local_38 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar1,iVar7);
  uVar6 = local_38 + iVar5;
  uVar8 = uVar6;
  if (uVar6 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_141e00eee;
    }
  }
  else {
LAB_141e00eee:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar8,2);
  }
  local_40 = local_148;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  pwVar4 = UE::Core::Private::Convert((wchar_t *)local_40,uVar6,puVar1,iVar5 + iVar7);
  if ((pwVar4 == (wchar_t *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141e00f71:
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_40,(longlong)local_38 * 2);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

