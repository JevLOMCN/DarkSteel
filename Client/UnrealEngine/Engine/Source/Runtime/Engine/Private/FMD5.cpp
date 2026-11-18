// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// HashAnsiString @ 147712c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FMD5::HashAnsiString(FString *__return_storage_ptr__,wchar_t *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  size_t sVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_178 [32];
  FString local_158;
  FScriptContainerElement local_148 [128];
  ForAnyElementType local_c8;
  FScriptContainerElement *local_c0;
  int local_b8;
  FMD5 local_a8;
  uchar local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  sVar4 = wcslen(param_1);
  pFVar9 = (FScriptContainerElement *)0x0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    local_c0 = (FScriptContainerElement *)0x0;
    local_b8 = 0;
  }
  else {
    sVar5 = wcslen(param_1);
    local_b8 = (int)sVar5;
    uVar10 = local_b8 + 1;
    FVar11.Data = pFVar9;
    if (0x80 < uVar10) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,uVar10,1);
      FVar11.Data = local_c8.Data;
    }
    lVar13 = (longlong)(int)uVar10;
    pFVar8 = local_148;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      pFVar8 = FVar11.Data;
    }
    bVar3 = false;
    pFVar7 = pFVar9;
    local_c0 = pFVar8;
    if (0 < lVar13) {
      do {
        wVar1 = param_1[(longlong)pFVar7];
        pFVar8[(longlong)pFVar7] = SUB21(wVar1,0);
        pFVar7 = pFVar7 + 1;
        bVar3 = (bool)(bVar3 | 0x7f < (ushort)wVar1);
      } while ((longlong)pFVar7 < lVar13);
      pFVar7 = pFVar9;
      if (bVar3) {
        do {
          if (0x7f < (ushort)param_1[(longlong)pFVar7]) {
            pFVar7[(longlong)pFVar8] = (FScriptContainerElement)0x3f;
          }
          pFVar7 = pFVar7 + 1;
        } while ((longlong)pFVar7 < lVar13);
      }
    }
    if ((pFVar8 + lVar13 == (FScriptContainerElement *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar8 = local_c0;
  FMD5(&local_a8);
  Update(&local_a8,(uchar *)pFVar8,(longlong)(int)sVar4);
  Final(&local_a8,local_48);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  do {
    ::FString::PrintfImpl(&local_158,L"%02x");
    iVar12 = local_158.Data.ArrayNum + -1;
    if (local_158.Data.ArrayNum == 0) {
      iVar12 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_158.Data.AllocatorInstance.Data,iVar12);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    pFVar9 = pFVar9 + 1;
  } while ((longlong)pFVar9 < 0x10);
  ~FMD5(&local_a8);
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return __return_storage_ptr__;
}

