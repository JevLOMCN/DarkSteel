// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 44

// AddLabelInternal @ 14167f2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FPlatformFileOpenLog::AddLabelInternal(wchar_t *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FPlatformFileOpenLog *pFVar4;
  bool bVar5;
  ulong64 *puVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  wchar_t *_Str;
  undefined1 local_res10 [24];
  undefined1 auStack_338 [32];
  longlong local_318;
  undefined1 *local_310;
  FString local_308;
  undefined8 local_2f8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_2e8;
  undefined1 local_248 [510];
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_338;
  if (GPlatformFileOpenLog != (FPlatformFileOpenLog *)0x0) {
    puVar6 = __local_stdio_printf_options();
    local_318 = 0;
    local_310 = local_res10;
    __stdio_common_vswprintf(*puVar6,local_248,0x100,param_1);
    pFVar4 = GPlatformFileOpenLog;
    local_2f8 = 0;
    local_4a = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&GPlatformFileOpenLog->CriticalSection);
    for (uVar8 = 0; (-1 < (int)uVar8 && ((int)uVar8 < (pFVar4->LogOutput).ArrayNum));
        uVar8 = uVar8 + 1) {
      ::FString::PrintfImpl(&local_308,L"# %s\n");
      iVar1 = (pFVar4->LogOutput).ArrayNum;
      uVar9 = 0;
      if ((int)uVar8 < iVar1) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_318 = (longlong)(int)uVar8;
        local_310 = (undefined1 *)(longlong)iVar1;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = *(longlong **)((pFVar4->LogOutput).AllocatorInstance.Data + (longlong)(int)uVar8 * 8)
      ;
      local_2e8._padding_ = 0;
      pcVar3 = *(code **)(*plVar2 + 0x30);
      uVar9 = local_308.Data.ArrayNum - 1;
      if (local_308.Data.ArrayNum == 0) {
        _Str = L"";
        uVar9 = 0;
LAB_14167f451:
        sVar7 = wcslen(_Str);
        TStringConversion<TStringConvert<wchar_t,char>,128>::Init(&local_2e8,_Str,(int)sVar7,Yes);
      }
      else {
        _Str = (wchar_t *)local_308.Data.AllocatorInstance.Data;
        if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14167f451;
        local_2e8.StringLength = 0;
        local_2e8.Ptr = (char *)0x0;
      }
      (*pcVar3)(plVar2,local_2e8.Ptr,(longlong)(int)uVar9);
      if ((void *)local_2e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_2e8._padding_);
      }
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar4->CriticalSection);
    if (4 < (byte)LogFileOpenOrder._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFileOpenOrder);
    }
  }
  return;
}

// AddToOpenLog @ 14167fa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPlatformFileOpenLog::AddToOpenLog(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  int iVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  wchar_t *local_1e8;
  LPCRITICAL_SECTION local_1e0;
  FString local_1d8;
  undefined1 local_1c8 [24];
  FString local_1b0;
  wchar_t **local_1a0;
  long64 *local_198;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_188;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_1e8 = param_1;
  local_1e0 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  if (this->bLogDuplicates == false) {
    ::FString::FString(&local_1d8,local_1e8);
    uVar9 = 0;
    if (local_1d8.Data.ArrayNum == 0) {
      pwVar10 = L"";
      iVar7 = 0;
    }
    else {
      pwVar10 = (wchar_t *)local_1d8.Data.AllocatorInstance.Data;
      iVar7 = local_1d8.Data.ArrayNum + -1;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
    iVar7 = TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                        *)&this->FilenameAccessMap,uVar4,&local_1d8);
    uVar6 = uVar9;
    if (iVar7 != -1) {
      uVar6 = (longlong)iVar7 * 0x20 + *(longlong *)&this->FilenameAccessMap;
    }
    uVar8 = uVar6 + 0x10;
    if (uVar6 == 0) {
      uVar8 = uVar9;
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (uVar8 != 0) goto LAB_14167fd37;
    this->OpenOrder = this->OpenOrder + 1;
    local_198 = &this->OpenOrder;
    local_1a0 = &local_1e8;
    TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<wchar_t_const_*_&,__int64_&>_>
              ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                *)&this->FilenameAccessMap,
               (TPairInitializer<wchar_t_const_*_&,__int64_&> *)local_1c8,(bool *)&local_1a0);
    ::FString::PrintfImpl(&local_1b0,L"\"%s\" %llu\n");
    while ((iVar7 = (int)uVar9, -1 < iVar7 && (iVar11 = (this->LogOutput).ArrayNum, iVar7 < iVar11))
          ) {
      if (iVar7 < 0) {
        local_1f8 = (longlong)iVar7;
        local_1f0 = (longlong)iVar11;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)((this->LogOutput).AllocatorInstance.Data + (longlong)iVar7 * 8);
      local_e8._padding_ = 0;
      pcVar2 = *(code **)(*plVar1 + 0x30);
      iVar11 = local_1b0.Data.ArrayNum + -1;
      if (local_1b0.Data.ArrayNum == 0) {
        pwVar10 = L"";
        iVar11 = 0;
LAB_14167fcde:
        sVar5 = wcslen(pwVar10);
        TStringConversion<TStringConvert<wchar_t,char>,128>::Init(&local_e8,pwVar10,(int)sVar5,Yes);
      }
      else {
        pwVar10 = (wchar_t *)local_1b0.Data.AllocatorInstance.Data;
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14167fcde;
        local_e8.StringLength = 0;
        local_e8.Ptr = (char *)0x0;
      }
      (*pcVar2)(plVar1,local_e8.Ptr,(longlong)iVar11);
      if ((void *)local_e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._padding_);
      }
      uVar9 = (ulonglong)(iVar7 + 1);
    }
  }
  else {
    ::FString::PrintfImpl((FString *)(local_1c8 + 8),L"\"%s\"\n");
    for (iVar7 = 0;
        (local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1c8._8_8_,
        -1 < iVar7 && (iVar11 = (this->LogOutput).ArrayNum, iVar7 < iVar11)); iVar7 = iVar7 + 1) {
      if (iVar7 < 0) {
        local_1f8 = (longlong)iVar7;
        local_1f0 = (longlong)iVar11;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)((this->LogOutput).AllocatorInstance.Data + (longlong)iVar7 * 8);
      local_188._padding_ = 0;
      pcVar2 = *(code **)(*plVar1 + 0x30);
      iVar11 = (int)local_1c8._16_8_ + -1;
      if ((int)local_1c8._16_8_ == 0) {
        pwVar10 = L"";
        iVar11 = 0;
LAB_14167fb2f:
        sVar5 = wcslen(pwVar10);
        TStringConversion<TStringConvert<wchar_t,char>,128>::Init(&local_188,pwVar10,(int)sVar5,Yes)
        ;
      }
      else {
        pwVar10 = (wchar_t *)local_1c8._8_8_;
        if ((FScriptContainerElement *)local_1c8._8_8_ != (FScriptContainerElement *)0x0)
        goto LAB_14167fb2f;
        local_188.StringLength = 0;
        local_188.Ptr = (char *)0x0;
      }
      (*pcVar2)(plVar1,local_188.Ptr,(longlong)iVar11);
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
    }
  }
  lpCriticalSection = local_1e0;
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    lpCriticalSection = local_1e0;
  }
LAB_14167fd37:
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// Initialize @ 1416afa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPlatformFileOpenLog::Initialize(FPlatformFileOpenLog *this,IPlatformFile *param_1,wchar_t *param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  FPlatformFileOpenLog *pFVar4;
  IPlatformFile *pIVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  FString *pFVar12;
  FDataDrivenPlatformInfo *pFVar13;
  wchar_t *pwVar14;
  size_t sVar15;
  ForAnyElementType FVar16;
  void *pvVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  TArray<IFileHandle_*,TSizedDefaultAllocator<32>_> *pTVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  undefined1 auStackY_528 [32];
  FString local_4d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_4c8;
  longlong local_4b8;
  longlong local_4b0;
  FString local_4a8;
  longlong local_498;
  longlong local_490;
  FPlatformFileOpenLog *local_488;
  wchar_t *local_480;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  IPlatformFile *local_408;
  FString local_400;
  TStringView<wchar_t> local_3f0;
  FScriptContainerElement *local_3e0;
  undefined4 local_3d8;
  TStringView<wchar_t> local_3d0;
  wchar_t *local_3c0;
  undefined4 local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringView<wchar_t> local_168;
  wchar_t *local_158;
  undefined4 local_150;
  wchar_t *local_148;
  undefined4 local_140;
  wchar_t *local_138;
  undefined4 local_130;
  TStringView<wchar_t> local_128;
  wchar_t *local_118;
  undefined4 local_110;
  wchar_t *local_108;
  int local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  TStringView<wchar_t> local_e8;
  wchar_t *local_d8;
  undefined4 local_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  TStringView<wchar_t> local_98;
  wchar_t *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_528;
  FVar22.Data = (FScriptContainerElement *)0x0;
  this->LowerLevel = param_1;
  local_4a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a8.Data.ArrayNum = 0;
  local_4a8.Data.ArrayMax = 0;
  local_4d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4d8.Data.ArrayNum = 0;
  local_4d8.Data.ArrayMax = 0;
  local_488 = this;
  local_480 = param_2;
  local_408 = param_1;
  bVar6 = FParse::Value(param_2,L"FOOBASEDIR=",&local_4d8,true,(wchar_t **)0x0);
  if (!bVar6) {
    bVar6 = FParse::Param(param_2,L"FOOUSESAVEDDIR");
    if (bVar6) {
      pFVar12 = FPaths::ProjectSavedDir();
      if (&local_4d8 != pFVar12) {
        iVar8 = (pFVar12->Data).ArrayNum;
        pFVar18 = (pFVar12->Data).AllocatorInstance.Data;
        local_4d8.Data.ArrayNum = iVar8;
        if ((iVar8 == 0) && (local_4d8.Data.ArrayMax == 0)) {
          local_4d8.Data.ArrayNum = 0;
          local_4d8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar8,local_4d8.Data.ArrayMax,(ForAnyElementType *)&local_4d8,iVar8,
                     &local_4d8.Data.ArrayMax);
          if (iVar8 != 0) {
            memcpy(local_4d8.Data.AllocatorInstance.Data,pFVar18,(longlong)iVar8 * 2);
          }
        }
      }
    }
    else {
      pwVar14 = FGenericPlatformMisc::ProjectDir();
      ::FString::operator=(&local_4d8,pwVar14);
    }
  }
  uVar23 = 0;
  bVar6 = FParse::Value(param_2,L"TARGETPLATFORM=",&local_4a8,true,(wchar_t **)0x0);
  if (bVar6) {
    local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_4a8.Data.ArrayNum != 0) {
      FVar16.Data = local_4a8.Data.AllocatorInstance.Data;
    }
    local_4c8.ArrayNum = 0;
    local_4c8.ArrayMax = 0;
    iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"None");
    if (iVar8 != 0) {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_4a8.Data.ArrayNum != 0) {
        FVar16.Data = local_4a8.Data.AllocatorInstance.Data;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"All");
      if (iVar8 != 0) {
        ::FString::ParseIntoArray(&local_4a8,&local_4c8,L"+",true);
      }
    }
    FVar16.Data = FVar22.Data;
    if (0 < local_4c8.ArrayNum) {
      local_498 = 0;
      local_490 = 0;
      do {
        lVar3 = local_490;
        uVar20 = ~uVar23 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar23 < local_4c8.ArrayNum) {
          uVar9 = uVar20;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        pFVar13 = FDataDrivenPlatformInfoRegistry::GetPlatformInfo
                            ((FString *)(local_4c8.AllocatorInstance.Data + lVar3));
        if (pFVar13->bIsConfidential == false) {
          uVar9 = 0;
          if ((int)uVar23 < local_4c8.ArrayNum) {
            uVar9 = uVar20;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          if (*(int *)(local_4c8.AllocatorInstance.Data + lVar3 + 8) == 0) {
            local_148 = L"";
          }
          else {
            local_148 = *(wchar_t **)(local_4c8.AllocatorInstance.Data + lVar3);
          }
          local_168.DataPtr = (wchar_t *)local_4d8.Data.AllocatorInstance.Data;
          local_150 = 5;
          local_168.Size = local_4d8.Data.ArrayNum + -1;
          if (local_4d8.Data.ArrayNum == 0) {
            local_168.Size = 0;
          }
          local_158 = L"Build";
          uVar10 = 0;
          if (local_148 != (wchar_t *)0x0) {
            sVar15 = wcslen(local_148);
            uVar10 = (undefined4)sVar15;
          }
          local_130 = 0xd;
          local_138 = L"FileOpenOrder";
          local_140 = uVar10;
          FPaths::CombineInternal(&local_468,&local_168,4);
          if (FVar22.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar22.Data);
          }
          FVar22.Data = local_468.Data.AllocatorInstance.Data;
          iVar8 = local_468.Data.ArrayNum;
          local_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_468.Data.ArrayNum = 0;
          local_468.Data.ArrayMax = 0;
        }
        else {
          uVar9 = 0;
          if ((int)uVar23 < local_4c8.ArrayNum) {
            uVar9 = uVar20;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          if (*(int *)(local_4c8.AllocatorInstance.Data + lVar3 + 8) == 0) {
            local_c8 = L"";
          }
          else {
            local_c8 = *(wchar_t **)(local_4c8.AllocatorInstance.Data + lVar3);
          }
          local_e8.DataPtr = (wchar_t *)local_4d8.Data.AllocatorInstance.Data;
          local_d0 = 9;
          local_e8.Size = local_4d8.Data.ArrayNum + -1;
          if (local_4d8.Data.ArrayNum == 0) {
            local_e8.Size = 0;
          }
          local_d8 = L"Platforms";
          uVar10 = 0;
          if (local_c8 != (wchar_t *)0x0) {
            sVar15 = wcslen(local_c8);
            uVar10 = (undefined4)sVar15;
          }
          local_b0 = 5;
          local_b8 = L"Build";
          local_a0 = 0xd;
          local_a8 = L"FileOpenOrder";
          local_c0 = uVar10;
          FPaths::CombineInternal(&local_478,&local_e8,5);
          if (FVar22.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar22.Data);
          }
          FVar22.Data = local_478.Data.AllocatorInstance.Data;
          iVar8 = local_478.Data.ArrayNum;
          local_478.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_478.Data.ArrayNum = 0;
          local_478.Data.ArrayMax = 0;
        }
        ::FString::FString(&local_418,L"");
        FParse::Value(local_480,L"FooSuffix=",&local_418,true,(wchar_t **)0x0);
        ::FString::PrintfImpl(&local_400,L"GameOpenOrder%s.log");
        iVar11 = 0;
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_400.Data.ArrayNum != 0) {
          FVar19.Data = local_400.Data.AllocatorInstance.Data;
        }
        local_3f0.DataPtr = L"";
        if (iVar8 != 0) {
          local_3f0.DataPtr = (wchar_t *)FVar22.Data;
        }
        if ((FScriptContainerElement *)local_3f0.DataPtr != (FScriptContainerElement *)0x0) {
          sVar15 = wcslen(local_3f0.DataPtr);
          iVar11 = (int)sVar15;
        }
        uVar10 = 0;
        local_3f0.Size = iVar11;
        local_3e0 = FVar19.Data;
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          sVar15 = wcslen((wchar_t *)FVar19.Data);
          uVar10 = (undefined4)sVar15;
        }
        local_3d8 = uVar10;
        FPaths::CombineInternal(&local_458,&local_3f0,2);
        if (FVar16.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar16.Data);
        }
        pIVar5 = local_408;
        FVar16.Data = local_458.Data.AllocatorInstance.Data;
        local_458.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar11 = local_458.Data.ArrayNum;
        pFVar18 = (FScriptContainerElement *)L"";
        if (iVar8 != 0) {
          pFVar18 = FVar22.Data;
        }
        local_458.Data.ArrayNum = 0;
        local_458.Data.ArrayMax = 0;
        (**(code **)((longlong)*local_408 + 0x200))(local_408,pFVar18);
        FVar19.Data = (FScriptContainerElement *)L"";
        if (iVar11 != 0) {
          FVar19.Data = FVar16.Data;
        }
        local_4b8 = (**(code **)((longlong)*pIVar5 + 0x110))(pIVar5,FVar19.Data,0,0);
        pFVar4 = local_488;
        if (local_4b8 != 0) {
          pTVar21 = &local_488->LogOutput;
          pFVar18 = (pTVar21->AllocatorInstance).Data;
          if (((pFVar18 <= (FScriptContainerElement *)&local_4b8) &&
              ((FScriptContainerElement *)&local_4b8 <
               pFVar18 + (longlong)(local_488->LogOutput).ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          iVar8 = (pFVar4->LogOutput).ArrayNum;
          piVar1 = &(pFVar4->LogOutput).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar21->AllocatorInstance,piVar1);
          }
          (pFVar4->LogOutput).ArrayNum = iVar8 + 1;
          *(longlong *)((pTVar21->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_4b8;
        }
        if (4 < (byte)LogFileOpenOrder._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFileOpenOrder);
        }
        if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.Data.AllocatorInstance.Data);
        }
        if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_418.Data.AllocatorInstance.Data);
        }
        uVar23 = uVar23 + 1;
        local_498 = local_498 + 1;
        local_490 = local_490 + 0x10;
        this = local_488;
      } while ((int)uVar23 < local_4c8.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_4c8.AllocatorInstance.Data,local_4c8.ArrayNum);
    if (local_4c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.AllocatorInstance.Data);
    }
  }
  else {
    pFVar13 = FDataDrivenPlatformInfoRegistry::GetPlatformInfo("Windows");
    iVar8 = 0;
    if (pFVar13->bIsConfidential == false) {
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,"Windows",7,Yes);
      local_128.DataPtr = (wchar_t *)local_4d8.Data.AllocatorInstance.Data;
      local_110 = 5;
      local_128.Size = local_4d8.Data.ArrayNum + -1;
      if (local_4d8.Data.ArrayNum == 0) {
        local_128.Size = iVar8;
      }
      local_118 = L"Build";
      local_108 = local_288.Ptr;
      local_100 = iVar8;
      if (local_288.Ptr != (wchar_t *)0x0) {
        sVar15 = wcslen(local_288.Ptr);
        local_100 = (int)sVar15;
      }
      local_f0 = 0xd;
      local_f8 = L"FileOpenOrder";
      FPaths::CombineInternal(&local_438,&local_128,4);
      iVar11 = local_438.Data.ArrayNum;
      FVar22.Data = local_438.Data.AllocatorInstance.Data;
      local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_438.Data.ArrayNum = 0;
      local_438.Data.ArrayMax = 0;
      pvVar17 = (void *)local_288._padding_;
    }
    else {
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3a8,"Windows",7,Yes);
      local_98.DataPtr = (wchar_t *)local_4d8.Data.AllocatorInstance.Data;
      local_80 = 9;
      local_98.Size = local_4d8.Data.ArrayNum + -1;
      if (local_4d8.Data.ArrayNum == 0) {
        local_98.Size = iVar8;
      }
      local_88 = L"Platforms";
      local_78 = local_3a8.Ptr;
      local_70 = iVar8;
      if (local_3a8.Ptr != (wchar_t *)0x0) {
        sVar15 = wcslen(local_3a8.Ptr);
        local_70 = (int)sVar15;
      }
      local_60 = 5;
      local_68 = L"Build";
      local_50 = 0xd;
      local_58 = L"FileOpenOrder";
      FPaths::CombineInternal(&local_448,&local_98,5);
      iVar11 = local_448.Data.ArrayNum;
      FVar22.Data = local_448.Data.AllocatorInstance.Data;
      local_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_448.Data.ArrayNum = 0;
      local_448.Data.ArrayMax = 0;
      pvVar17 = (void *)local_3a8._padding_;
    }
    if (pvVar17 != (void *)0x0) {
      FMemory::Free(pvVar17);
    }
    local_3d0.DataPtr = L"";
    if (iVar11 != 0) {
      local_3d0.DataPtr = (wchar_t *)FVar22.Data;
    }
    if ((FScriptContainerElement *)local_3d0.DataPtr != (FScriptContainerElement *)0x0) {
      sVar15 = wcslen(local_3d0.DataPtr);
      iVar8 = (int)sVar15;
    }
    local_3b8 = 0x11;
    local_3c0 = L"GameOpenOrder.log";
    local_3d0.Size = iVar8;
    FPaths::CombineInternal(&local_428,&local_3d0,2);
    iVar8 = local_428.Data.ArrayNum;
    FVar16.Data = local_428.Data.AllocatorInstance.Data;
    local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_428.Data.ArrayNum = 0;
    local_428.Data.ArrayMax = 0;
    pFVar18 = (FScriptContainerElement *)L"";
    if (iVar11 != 0) {
      pFVar18 = FVar22.Data;
    }
    (**(code **)((longlong)*param_1 + 0x200))(param_1,pFVar18);
    FVar19.Data = (FScriptContainerElement *)L"";
    if (iVar8 != 0) {
      FVar19.Data = FVar16.Data;
    }
    local_4b0 = (**(code **)((longlong)*param_1 + 0x110))(param_1,FVar19.Data,0,0);
    if (local_4b0 != 0) {
      pTVar21 = &this->LogOutput;
      pFVar18 = (pTVar21->AllocatorInstance).Data;
      if (((pFVar18 <= (FScriptContainerElement *)&local_4b0) &&
          ((FScriptContainerElement *)&local_4b0 <
           pFVar18 + (longlong)(this->LogOutput).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      iVar8 = (this->LogOutput).ArrayNum;
      piVar1 = &(this->LogOutput).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar21->AllocatorInstance,piVar1);
      }
      (this->LogOutput).ArrayNum = iVar8 + 1;
      *(longlong *)((pTVar21->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_4b0;
    }
    if (4 < (byte)LogFileOpenOrder._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogFileOpenOrder);
    }
  }
  bVar6 = FParse::Param(local_480,L"FooLogDuplicates");
  this->bLogDuplicates = bVar6;
  GPlatformFileOpenLog = this;
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  if (FVar22.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar22.Data);
  }
  return true;
}

// OpenMappedEx @ 1416b5d70

TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError> *
__thiscall
FPlatformFileOpenLog::OpenMappedEx
          (FPlatformFileOpenLog *this,
          TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>
          *__return_storage_ptr__,wchar_t *param_1,EOpenReadFlags param_2,long64 param_3)

{
  (**(code **)((longlong)*this->LowerLevel + 0x1b0))();
  return __return_storage_ptr__;
}

// ~FPlatformFileOpenLog @ 1416d8f40

void __thiscall FPlatformFileOpenLog::~FPlatformFileOpenLog(FPlatformFileOpenLog *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FPlatformFileOpenLog__6B_;
  pFVar1 = (this->LogOutput).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FilenameAccessMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FilenameAccessMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FilenameAccessMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  IPlatformFile::~IPlatformFile((IPlatformFile *)this);
  return;
}

// ConvertToAbsolutePathForExternalAppForRead @ 1416e6750

FString * __thiscall
FPlatformFileOpenLog::ConvertToAbsolutePathForExternalAppForRead
          (FPlatformFileOpenLog *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 0x218))();
  return __return_storage_ptr__;
}

// ConvertToAbsolutePathForExternalAppForWrite @ 1416e67b0

FString * __thiscall
FPlatformFileOpenLog::ConvertToAbsolutePathForExternalAppForWrite
          (FPlatformFileOpenLog *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 0x220))();
  return __return_storage_ptr__;
}

// CopyDirectoryTree @ 1416e6800

bool __thiscall
FPlatformFileOpenLog::CopyDirectoryTree
          (FPlatformFileOpenLog *this,wchar_t *param_1,wchar_t *param_2,bool param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e6807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x210))();
  return (bool)uVar1;
}

// CopyFile @ 1416e6a10

bool __thiscall
FPlatformFileOpenLog::CopyFile
          (FPlatformFileOpenLog *this,wchar_t *param_1,wchar_t *param_2,EPlatformFileRead param_3,
          EPlatformFileWrite param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e6a27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x208))();
  return (bool)uVar1;
}

// CreateDirectory @ 1416e8030

bool __thiscall FPlatformFileOpenLog::CreateDirectory(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e8037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x120))();
  return (bool)uVar1;
}

// CreateDirectoryTree @ 1416e8070

bool __thiscall
FPlatformFileOpenLog::CreateDirectoryTree(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e8077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x200))();
  return (bool)uVar1;
}

// DeleteDirectory @ 1416e9d90

bool __thiscall FPlatformFileOpenLog::DeleteDirectory(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e9d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x128))();
  return (bool)uVar1;
}

// DeleteDirectoryRecursively @ 1416e9f80

bool __thiscall
FPlatformFileOpenLog::DeleteDirectoryRecursively(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416e9f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x1f8))();
  return (bool)uVar1;
}

// DeleteFile @ 1416ea170

bool __thiscall FPlatformFileOpenLog::DeleteFile(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ea177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x88))();
  return (bool)uVar1;
}

// DirectoryExists @ 1416ebc80

bool __thiscall FPlatformFileOpenLog::DirectoryExists(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ebc87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x118))();
  return (bool)uVar1;
}

// FileExists @ 1416edd40

bool __thiscall FPlatformFileOpenLog::FileExists(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416edd47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x78))();
  return (bool)uVar1;
}

// FileJournalGetFileData @ 1416eddc0

FFileJournalData * __thiscall
FPlatformFileOpenLog::FileJournalGetFileData
          (FPlatformFileOpenLog *this,FFileJournalData *__return_storage_ptr__,wchar_t *param_1,
          FString *param_2)

{
  (**(code **)((longlong)*this->LowerLevel + 0x178))();
  return __return_storage_ptr__;
}

// FileJournalGetLatestEntry @ 1416ede30

EFileJournalResult __thiscall
FPlatformFileOpenLog::FileJournalGetLatestEntry
          (FPlatformFileOpenLog *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3,
          FString *param_4)

{
  EFileJournalResult EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ede3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*this->LowerLevel + 0x168))();
  return EVar1;
}

// FileJournalGetMaximumSize @ 1416ede90

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FPlatformFileOpenLog::FileJournalGetMaximumSize
          (FPlatformFileOpenLog *this,wchar_t *param_1,Type *param_2,FString *param_3)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ede97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x160))();
  return uVar1;
}

// FileJournalGetVolumeName @ 1416edf30

FString * __thiscall
FPlatformFileOpenLog::FileJournalGetVolumeName
          (FPlatformFileOpenLog *this,FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)((longlong)*this->LowerLevel + 0x188))
            (this->LowerLevel,__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// FileJournalIsAvailable @ 1416edfb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPlatformFileOpenLog::FileJournalIsAvailable
          (FPlatformFileOpenLog *this,wchar_t *param_1,Type *param_2,FString *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416edfb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x158))();
  return (bool)uVar1;
}

// FileJournalIterateDirectory @ 1416ee050

bool __thiscall
FPlatformFileOpenLog::FileJournalIterateDirectory
          (FPlatformFileOpenLog *this,wchar_t *param_1,
          TFunctionRef<bool___cdecl(wchar_t_const_*,FFileJournalData_const_&)> *param_2,
          FString *param_3)

{
  undefined1 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x170))(this->LowerLevel,param_1,&local_18);
  return (bool)uVar1;
}

// FileJournalReadModified @ 1416ee0d0

EFileJournalResult __thiscall
FPlatformFileOpenLog::FileJournalReadModified
          (FPlatformFileOpenLog *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3,
          TMap<FFileJournalFileHandle,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileJournalFileHandle,FString,0>_>
          *param_4,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_5,
          ulong64 *param_6,FString *param_7)

{
  EFileJournalResult EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ee0de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*this->LowerLevel + 0x180))();
  return EVar1;
}

// FileSize @ 1416ee2b0

long64 __thiscall FPlatformFileOpenLog::FileSize(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ee2b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)((longlong)*this->LowerLevel + 0x80))();
  return lVar1;
}

// GetAccessTimeStamp @ 1416f19a0

FDateTime __thiscall
FPlatformFileOpenLog::GetAccessTimeStamp(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 0xc0))();
  return (FDateTime)(long64)param_1;
}

// GetFilenameOnDisk @ 1416f84a0

FString * __thiscall
FPlatformFileOpenLog::GetFilenameOnDisk
          (FPlatformFileOpenLog *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 200))();
  return __return_storage_ptr__;
}

// GetLowerLevel @ 1416f8ae0

IPlatformFile * __thiscall FPlatformFileOpenLog::GetLowerLevel(FPlatformFileOpenLog *this)

{
  return this->LowerLevel;
}

// GetName @ 1416f8cd0

wchar_t * __thiscall FPlatformFileOpenLog::GetName(FPlatformFileOpenLog *this)

{
  return L"FileOpenLog";
}

// GetStatData @ 1416fb9b0

FFileStatData * __thiscall
FPlatformFileOpenLog::GetStatData
          (FPlatformFileOpenLog *this,FFileStatData *__return_storage_ptr__,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 0x130))();
  return __return_storage_ptr__;
}

// GetTimeStamp @ 1416fc520

FDateTime __thiscall FPlatformFileOpenLog::GetTimeStamp(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  (**(code **)((longlong)*this->LowerLevel + 0xb0))();
  return (FDateTime)(long64)param_1;
}

// IsReadOnly @ 141702820

bool __thiscall FPlatformFileOpenLog::IsReadOnly(FPlatformFileOpenLog *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141702827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x98))();
  return (bool)uVar1;
}

// IterateDirectory @ 141702c80

bool __thiscall
FPlatformFileOpenLog::IterateDirectory
          (FPlatformFileOpenLog *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141702c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x140))();
  return (bool)uVar1;
}

// IterateDirectoryRecursively @ 141702ea0

bool __thiscall
FPlatformFileOpenLog::IterateDirectoryRecursively
          (FPlatformFileOpenLog *this,wchar_t *param_1,FDirectoryVisitor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141702ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x1d0))();
  return (bool)uVar1;
}

// IterateDirectoryStat @ 1417030b0

bool __thiscall
FPlatformFileOpenLog::IterateDirectoryStat
          (FPlatformFileOpenLog *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001417030b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x150))();
  return (bool)uVar1;
}

// IterateDirectoryStatRecursively @ 1417032c0

bool __thiscall
FPlatformFileOpenLog::IterateDirectoryStatRecursively
          (FPlatformFileOpenLog *this,wchar_t *param_1,FDirectoryStatVisitor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001417032c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x1e0))();
  return (bool)uVar1;
}

// MoveFile @ 141705310

bool __thiscall
FPlatformFileOpenLog::MoveFile(FPlatformFileOpenLog *this,wchar_t *param_1,wchar_t *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141705317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0xa0))();
  return (bool)uVar1;
}

// OpenAsyncRead @ 141706650

/* WARNING: Enum "Type": Some values do not have unique names */

IAsyncReadFileHandle * __thiscall
FPlatformFileOpenLog::OpenAsyncRead(FPlatformFileOpenLog *this,wchar_t *param_1,bool param_2)

{
  FName FVar1;
  IAsyncReadFileHandle *pIVar2;
  IAsyncReadFileHandle IVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res20;
  FStatMessage local_38;
  
  pIVar2 = ::operator_new(0x28);
  if (pIVar2 == (IAsyncReadFileHandle *)0x0) {
    return (IAsyncReadFileHandle *)0x0;
  }
  IVar3 = (IAsyncReadFileHandle)
          (**(code **)((longlong)*this->LowerLevel + 400))(this->LowerLevel,param_1);
  *pIVar2 = (IAsyncReadFileHandle)&___7IAsyncReadFileHandle__6B_;
  FVar5 = StatPtr_STAT_AsyncFileHandles;
  if (StatPtr_STAT_AsyncFileHandles == (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)0x0) {
    pFVar4 = ::FName::FName(&local_res20,"STAT_AsyncFileHandles");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileHandles,*pFVar4,
                       L"Num Async File Handles","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar5;
  local_res20 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res20 = FVar1;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_38);
    FStatsTrace::Add(&local_res20,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  pIVar2[1] = (IAsyncReadFileHandle)this;
  *pIVar2 = (IAsyncReadFileHandle)&___7FLoggingAsyncReadFileHandle__6B_;
  ::FString::FString((FString *)(pIVar2 + 2),param_1);
  pIVar2[4] = IVar3;
  return pIVar2;
}

// OpenRead @ 141707030

IFileHandle * __thiscall
FPlatformFileOpenLog::OpenRead(FPlatformFileOpenLog *this,wchar_t *param_1,bool param_2)

{
  IFileHandle *pIVar1;
  
  pIVar1 = (IFileHandle *)(**(code **)((longlong)*this->LowerLevel + 0xe8))();
  if (pIVar1 != (IFileHandle *)0x0) {
    AddToOpenLog(this,param_1);
  }
  return pIVar1;
}

// OpenWrite @ 1417072e0

IFileHandle * __thiscall
FPlatformFileOpenLog::OpenWrite
          (FPlatformFileOpenLog *this,wchar_t *param_1,bool param_2,bool param_3)

{
  IFileHandle *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001417072e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IFileHandle *)(**(code **)((longlong)*this->LowerLevel + 0x110))();
  return pIVar1;
}

// SendMessageToServer @ 14170ff00

bool __thiscall
FPlatformFileOpenLog::SendMessageToServer
          (FPlatformFileOpenLog *this,wchar_t *param_1,IFileServerMessageHandler *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014170ff07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0x228))();
  return (bool)uVar1;
}

// SetLowerLevel @ 1417114e0

void __thiscall
FPlatformFileOpenLog::SetLowerLevel(FPlatformFileOpenLog *this,IPlatformFile *param_1)

{
  this->LowerLevel = param_1;
  return;
}

// SetReadOnly @ 1417119b0

bool __thiscall
FPlatformFileOpenLog::SetReadOnly(FPlatformFileOpenLog *this,wchar_t *param_1,bool param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001417119b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->LowerLevel + 0xa8))();
  return (bool)uVar1;
}

// SetTimeStamp @ 141712390

void __thiscall
FPlatformFileOpenLog::SetTimeStamp(FPlatformFileOpenLog *this,wchar_t *param_1,FDateTime param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141712397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->LowerLevel + 0xb8))();
  return;
}

// ShouldBeUsed @ 141712930

bool __thiscall
FPlatformFileOpenLog::ShouldBeUsed
          (FPlatformFileOpenLog *this,IPlatformFile *param_1,wchar_t *param_2)

{
  bool bVar1;
  
  bVar1 = FParse::Param(param_2,L"FileOpenLog");
  if (!bVar1) {
    bVar1 = FParse::Param(param_2,L"FilePackageOpenLog");
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

