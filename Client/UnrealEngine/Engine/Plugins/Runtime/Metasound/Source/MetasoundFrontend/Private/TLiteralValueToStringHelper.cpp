// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// Convert @ 14ae27a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
MetasoundFrontendLiteralPrivate::
TLiteralValueToStringHelper<TArray<int,TSizedDefaultAllocator<32>_>_>::Convert
          (FString *__return_storage_ptr__,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  FString *pFVar7;
  ulong64 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  FString local_298;
  FString *local_288;
  FString local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_288 = __return_storage_ptr__;
  pvVar6 = FGenericPlatformString::Memcpy(local_248,L"[",2);
  iVar10 = param_1->ArrayNum;
  uVar9 = 0;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  if (0 < iVar10) {
    do {
      if (0 < (int)uVar9) {
        if (local_268.End < local_268.CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L", ",4);
        iVar10 = param_1->ArrayNum;
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
      }
      uVar5 = 0;
      if ((int)uVar9 < iVar10) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_2a0 = (longlong)iVar10;
        local_2a8 = (longlong)(int)uVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
      }
      ::FString::PrintfImpl(&local_298,L"%d");
      FVar3.Data = local_298.Data.AllocatorInstance.Data;
      iVar10 = local_298.Data.ArrayNum + -1;
      if (local_298.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      uVar8 = (ulong64)iVar10;
      if (local_268.End < local_268.CurPos + uVar8) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar8);
      }
      if (iVar10 != 0) {
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar3.Data,uVar8 * 2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      iVar10 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      __return_storage_ptr__ = local_288;
    } while ((int)uVar9 < iVar10);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L"]",2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  pFVar7 = ::FString::ConstructFromPtrSize
                     (&local_280,local_268.Base,
                      (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  if (__return_storage_ptr__ != pFVar7) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// Convert @ 14ae27d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
MetasoundFrontendLiteralPrivate::
TLiteralValueToStringHelper<TArray<float,TSizedDefaultAllocator<32>_>_>::Convert
          (FString *__return_storage_ptr__,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  FString *pFVar7;
  ulong64 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  FString local_298;
  FString *local_288;
  FString local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_288 = __return_storage_ptr__;
  pvVar6 = FGenericPlatformString::Memcpy(local_248,L"[",2);
  iVar10 = param_1->ArrayNum;
  uVar9 = 0;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  if (0 < iVar10) {
    do {
      if (0 < (int)uVar9) {
        if (local_268.End < local_268.CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L", ",4);
        iVar10 = param_1->ArrayNum;
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
      }
      uVar5 = 0;
      if ((int)uVar9 < iVar10) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_2a0 = (longlong)iVar10;
        local_2a8 = (longlong)(int)uVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
      }
      ::FString::PrintfImpl(&local_298,L"%f");
      FVar3.Data = local_298.Data.AllocatorInstance.Data;
      iVar10 = local_298.Data.ArrayNum + -1;
      if (local_298.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      uVar8 = (ulong64)iVar10;
      if (local_268.End < local_268.CurPos + uVar8) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar8);
      }
      if (iVar10 != 0) {
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar3.Data,uVar8 * 2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      iVar10 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      __return_storage_ptr__ = local_288;
    } while ((int)uVar9 < iVar10);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L"]",2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  pFVar7 = ::FString::ConstructFromPtrSize
                     (&local_280,local_268.Base,
                      (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  if (__return_storage_ptr__ != pFVar7) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// Convert @ 14ae28040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
MetasoundFrontendLiteralPrivate::
TLiteralValueToStringHelper<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>::Convert
          (FString *__return_storage_ptr__,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  UObject *this;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  FString *pFVar7;
  int iVar8;
  uint uVar9;
  ulong64 uVar10;
  longlong lVar11;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  FString local_298;
  FString *local_288;
  FString local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_288 = __return_storage_ptr__;
  pvVar6 = FGenericPlatformString::Memcpy(local_248,L"[",2);
  iVar8 = param_1->ArrayNum;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  uVar9 = 0;
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      if (0 < (int)uVar9) {
        if (local_268.End < local_268.CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L", ",4);
        iVar8 = param_1->ArrayNum;
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
      }
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_2a0 = (longlong)iVar8;
        local_2a8 = (longlong)(int)uVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
      }
      this = *(UObject **)((param_1->AllocatorInstance).Data + lVar11);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this != (UObject *)0x0) goto LAB_14ae281a7;
LAB_14ae28342:
        local_298.Data.ArrayMax = 0;
        local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_298.Data.ArrayNum = 0;
      }
      else {
        if (this == (UObject *)0x0) goto LAB_14ae28342;
        UE::GC::MarkAsReachable(this);
LAB_14ae281a7:
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_298,(UObject *)0x0);
      }
      FVar3.Data = local_298.Data.AllocatorInstance.Data;
      uVar5 = local_298.Data.ArrayNum - 1;
      if (local_298.Data.ArrayNum == 0) {
        uVar5 = 0;
      }
      uVar10 = (ulong64)(int)uVar5;
      if (local_268.End < local_268.CurPos + uVar10) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar10);
      }
      if (uVar5 != 0) {
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar3.Data,uVar10 * 2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + uVar10 * 2);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      iVar8 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 8;
      __return_storage_ptr__ = local_288;
    } while ((int)uVar9 < iVar8);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L"]",2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  pFVar7 = ::FString::ConstructFromPtrSize
                     (&local_280,local_268.Base,
                      (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  if (__return_storage_ptr__ != pFVar7) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// Convert @ 14ae28370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
MetasoundFrontendLiteralPrivate::
TLiteralValueToStringHelper<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_>::
Convert(FString *__return_storage_ptr__,
       TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  FString *pFVar7;
  int iVar8;
  ulong64 uVar9;
  uint uVar10;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  FString local_288;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  pvVar6 = FGenericPlatformString::Memcpy(local_248,L"[",2);
  iVar8 = param_1->ArrayNum;
  uVar10 = 0;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  if (0 < iVar8) {
    do {
      if (0 < (int)uVar10) {
        if (local_268.End < local_268.CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L", ",4);
        iVar8 = param_1->ArrayNum;
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
      }
      uVar5 = 0;
      if ((int)uVar10 < iVar8) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_290 = (longlong)iVar8;
        local_298 = (longlong)(int)uVar10;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
      }
      ::FString::FString(&local_288,L"");
      FVar3.Data = local_288.Data.AllocatorInstance.Data;
      uVar5 = local_288.Data.ArrayNum - 1;
      if (local_288.Data.ArrayNum == 0) {
        uVar5 = 0;
      }
      uVar9 = (ulong64)(int)uVar5;
      if (local_268.End < local_268.CurPos + uVar9) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar9);
      }
      if (uVar5 != 0) {
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar3.Data,uVar9 * 2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + uVar9 * 2);
      }
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      iVar8 = param_1->ArrayNum;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar8);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L"]",2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  pFVar7 = ::FString::ConstructFromPtrSize
                     (&local_278,local_268.Base,
                      (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  if (__return_storage_ptr__ != pFVar7) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// Convert @ 14ae28630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
MetasoundFrontendLiteralPrivate::
TLiteralValueToStringHelper<TArray<FString,TSizedDefaultAllocator<32>_>_>::Convert
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  FString *pFVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulong64 uVar11;
  longlong lVar12;
  undefined1 auStackY_2d8 [32];
  ForAnyElementType local_298;
  int local_290;
  int local_28c;
  FString *local_288;
  FString local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_288 = __return_storage_ptr__;
  pvVar6 = FGenericPlatformString::Memcpy(local_248,L"[",2);
  iVar9 = param_1->ArrayNum;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  uVar8 = 0;
  if (0 < iVar9) {
    lVar12 = 0;
    do {
      if (0 < (int)uVar8) {
        if (local_268.End < local_268.CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L", ",4);
        iVar9 = param_1->ArrayNum;
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
      }
      uVar5 = 0;
      if ((int)uVar8 < iVar9) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_298.Data = (FScriptContainerElement *)0x0;
      local_290 = *(int *)(pFVar1 + lVar12 + 8);
      lVar10 = (longlong)local_290;
      pvVar6 = *(void **)(pFVar1 + lVar12);
      if (local_290 == 0) {
        local_28c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_290,0,&local_298,local_290,&local_28c);
        memcpy(local_298.Data,pvVar6,lVar10 * 2);
      }
      FVar3.Data = local_298.Data;
      iVar9 = local_290 + -1;
      if (local_290 == 0) {
        iVar9 = 0;
      }
      uVar11 = (ulong64)iVar9;
      if (local_268.End < local_268.CurPos + uVar11) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar11);
      }
      if (iVar9 != 0) {
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar3.Data,uVar11 * 2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + uVar11 * 2);
      }
      if (local_298.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data);
      }
      iVar9 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar12 = lVar12 + 0x10;
      __return_storage_ptr__ = local_288;
    } while ((int)uVar8 < iVar9);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L"]",2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  pFVar7 = ::FString::ConstructFromPtrSize
                     (&local_280,local_268.Base,
                      (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  if (__return_storage_ptr__ != pFVar7) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// Convert @ 14ae28960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
MetasoundFrontendLiteralPrivate::
TLiteralValueToStringHelper<TArray<bool,TSizedDefaultAllocator<32>_>_>::Convert
          (FString *__return_storage_ptr__,TArray<bool,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  FString *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  ulong64 uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  FString local_298;
  FString *local_288;
  FString local_280;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)local_48;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_288 = __return_storage_ptr__;
  pvVar6 = FGenericPlatformString::Memcpy(local_248,L"[",2);
  iVar8 = param_1->ArrayNum;
  uVar11 = 0;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  if (0 < iVar8) {
    lVar12 = 0;
    do {
      if (0 < (int)uVar11) {
        if (local_268.End < local_268.CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L", ",4);
        iVar8 = param_1->ArrayNum;
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
      }
      uVar5 = 0;
      if ((int)uVar11 < iVar8) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_2a0 = (longlong)iVar8;
        local_2a8 = (longlong)(int)uVar11;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
      }
      pwVar9 = L"true";
      if ((param_1->AllocatorInstance).Data[lVar12] == (FScriptContainerElement)0x0) {
        pwVar9 = L"false";
      }
      ::FString::FString(&local_298,pwVar9);
      FVar3.Data = local_298.Data.AllocatorInstance.Data;
      uVar5 = local_298.Data.ArrayNum - 1;
      if (local_298.Data.ArrayNum == 0) {
        uVar5 = 0;
      }
      uVar10 = (ulong64)(int)uVar5;
      if (local_268.End < local_268.CurPos + uVar10) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar10);
      }
      if (uVar5 != 0) {
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar3.Data,uVar10 * 2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + uVar10 * 2);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      iVar8 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
      __return_storage_ptr__ = local_288;
    } while ((int)uVar11 < iVar8);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L"]",2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  pFVar7 = ::FString::ConstructFromPtrSize
                     (&local_280,local_268.Base,
                      (int)((longlong)local_268.CurPos - (longlong)local_268.Base >> 1));
  if (__return_storage_ptr__ != pFVar7) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

