// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 4

// GetLineFollowing @ 1423df7e0

bool __cdecl
FWindowsPlatformSurvey::GetLineFollowing
          (FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,FString *param_3,
          int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FString local_38;
  
  iVar5 = param_2->ArrayNum;
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar9 < iVar5) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar5 = (param_1->Data).ArrayNum;
      pFVar11 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
      if (iVar5 == 0) {
        pwVar8 = L"";
        iVar5 = 0;
      }
      else {
        pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        iVar5 = iVar5 + -1;
      }
      iVar5 = ::FString::Find((FString *)pFVar11,pwVar8,iVar5,IgnoreCase,FromStart,-1);
      if ((-1 < iVar5) && (bVar2 = param_4 == uVar10, uVar10 = uVar10 + 1, bVar2)) {
        iVar7 = (param_1->Data).ArrayNum;
        if (iVar7 != 0) {
          iVar5 = iVar5 + -1 + iVar7;
        }
        pFVar6 = ::FString::RightChop((FString *)pFVar11,&local_38,iVar5);
        if (param_3 != pFVar6) {
          pFVar11 = (param_3->Data).AllocatorInstance.Data;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          (param_3->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_3->Data).ArrayNum = (pFVar6->Data).ArrayNum;
          (param_3->Data).ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        iVar5 = (param_3->Data).ArrayNum;
        iVar7 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar7 = 0;
        }
        return 0 < iVar7;
      }
      iVar5 = param_2->ArrayNum;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar5);
  }
  return false;
}

// GetNamedSection @ 1423e0750

bool __cdecl
FWindowsPlatformSurvey::GetNamedSection
          (FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  DestructItems<FString,int>((FString *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_3->AllocatorInstance,0,piVar1);
  }
  iVar6 = param_2->ArrayNum;
  uVar10 = 0xffffffff;
  uVar14 = 0;
  if (0 < iVar6) {
    uVar8 = 1;
    do {
      if ((int)uVar14 < iVar6 + -2) {
        uVar12 = 0;
        if ((int)uVar14 < iVar6) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar4 = ::FString::StartsWith
                          ((FString *)
                           ((param_2->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10),L"---"
                           ,3,IgnoreCase);
        if (bVar4) {
          uVar11 = uVar8 + 1;
          uVar12 = 0;
          if ((int)uVar11 < param_2->ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          bVar4 = ::FString::StartsWith
                            ((FString *)
                             ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10),
                             L"---",3,IgnoreCase);
          if (bVar4) {
            if (-1 < (int)uVar10) goto LAB_1423e096c;
            uVar12 = 0;
            uVar11 = uVar12;
            if ((int)uVar8 < param_2->ArrayNum) {
              uVar11 = ~uVar8 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            iVar6 = (param_1->Data).ArrayNum;
            if (iVar6 == 0) {
              pwVar7 = L"";
            }
            else {
              pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
              uVar12 = iVar6 - 1;
            }
            bVar4 = ::FString::StartsWith
                              ((FString *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10),
                               pwVar7,uVar12,IgnoreCase);
            if (bVar4) {
              uVar10 = uVar8 + 2;
            }
          }
        }
      }
      iVar6 = param_2->ArrayNum;
      uVar14 = uVar14 + 1;
      uVar8 = uVar8 + 1;
    } while ((int)uVar14 < iVar6);
    if (-1 < (int)uVar10) {
LAB_1423e096c:
      if ((int)uVar10 < (int)uVar14) {
        lVar13 = (ulonglong)uVar10 << 4;
        do {
          uVar8 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (param_3->AllocatorInstance).Data;
          pFVar9 = (param_2->AllocatorInstance).Data + lVar13;
          if (((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)*piVar1 * 0x10)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar6 = param_3->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_3->AllocatorInstance,piVar1);
          }
          param_3->ArrayNum = iVar6 + 1;
          ::FString::FString((FString *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x10)
                             ,(FString *)pFVar9);
          uVar10 = uVar10 + 1;
          lVar13 = lVar13 + 0x10;
        } while ((int)uVar10 < (int)uVar14);
      }
    }
  }
  iVar6 = param_3->ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return 0 < iVar6;
}

// GetSubComponentIndex @ 1423e3150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FWindowsPlatformSurvey::GetSubComponentIndex
          (IProvideWinSATResultsInfo *param_1,FHardwareSurveyResults *param_2,int param_3,
          float *param_4)

{
  int iVar1;
  bool bVar2;
  longlong *local_res8;
  FString local_28;
  
  local_res8 = (longlong *)0x0;
  bVar2 = false;
  iVar1 = (**(code **)((longlong)*param_1 + 0x38))(param_1,param_3,&local_res8);
  if (iVar1 < 0) {
    if (4 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    param_2->ErrorCount = param_2->ErrorCount + 1;
    ::FString::PrintfImpl
              (&local_28,L"GetAssessmentInfo() failed to get WinSAT assessment for sub-component %d"
              );
    WriteFStringToResults(param_2->LastPerformanceIndexError,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_28,L"HRESULT: 0x%0x");
    WriteFStringToResults(param_2->LastPerformanceIndexErrorDetail,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    *param_4 = 0.0;
    iVar1 = (**(code **)(*local_res8 + 0x38))(local_res8,param_4);
    if (iVar1 < 0) {
      if (4 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
      param_2->ErrorCount = param_2->ErrorCount + 1;
      ::FString::PrintfImpl
                (&local_28,L"get_Score() failed to get WinSAT WIE score for sub-component %d");
      WriteFStringToResults(param_2->LastPerformanceIndexError,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_28,L"HRESULT: 0x%0x");
      WriteFStringToResults(param_2->LastPerformanceIndexErrorDetail,&local_28);
      bVar2 = false;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar2 = true;
    }
    (**(code **)(*local_res8 + 0x10))();
  }
  return bVar2;
}

// GetSurveyResults @ 1423e3300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FWindowsPlatformSurvey::GetSurveyResults(FHardwareSurveyResults *param_1,bool param_2)

{
  FName FVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  FHardwareSurveyResults *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  LCID Locale;
  int iVar9;
  HRESULT HVar10;
  FName *pFVar11;
  FModuleManager *pFVar12;
  IModuleInterface *pIVar13;
  ulong64 uVar14;
  void *_Dst;
  wchar_t *pwVar15;
  int iVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  wchar_t *pwVar24;
  ulonglong uVar25;
  uint *puVar26;
  wchar_t *pwVar27;
  undefined1 auStackY_498 [32];
  IProvideWinSATResultsInfo *local_468;
  int local_460;
  float local_45c;
  float local_458 [2];
  void *local_450;
  undefined8 local_448;
  FHardwareSurveyResults *local_440;
  ulong64 local_438;
  ulong64 local_430;
  longlong *local_428;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FDisplayMetrics local_208;
  FName local_188;
  FName local_180;
  _SYSTEM_INFO local_178;
  FPlatformMemoryStats local_148;
  undefined1 local_b8 [30];
  char local_9a;
  char local_99;
  WCHAR local_68 [12];
  WCHAR local_50 [12];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_440 = param_1;
  memset(param_1,0,0x4508);
  ::FString::FString(&local_3e0,L"Windows");
  WriteFStringToResults(param_1->Platform,&local_3e0);
  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
  }
  FWindowsPlatformMemory::GetStats(&local_148);
  param_1->MemoryMB = (int)local_148._padding_ << 10;
  uVar20 = 0;
  local_208.MonitorInfo.ArrayNum = 0;
  local_208.MonitorInfo.ArrayMax = 0;
  local_208.PrimaryDisplayWorkAreaRect.Left = 0;
  local_208.PrimaryDisplayWorkAreaRect.Top = 0;
  local_208.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.PrimaryDisplayWorkAreaRect.Right = 0;
  local_208.PrimaryDisplayWorkAreaRect.Bottom = 0;
  local_208.VirtualDisplayRect.Left = 0;
  local_208.VirtualDisplayRect.Top = 0;
  local_208.VirtualDisplayRect.Right = 0;
  local_208.VirtualDisplayRect.Bottom = 0;
  local_208.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
  local_208.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  local_208.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_208.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
  local_208.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
  local_208.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  local_208.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_208.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
  FDisplayMetrics::RebuildDisplayMetrics(&local_208);
  uVar8 = 8;
  if (local_208.MonitorInfo.ArrayNum < 8) {
    uVar8 = local_208.MonitorInfo.ArrayNum;
  }
  param_1->DisplayCount = uVar8;
  uVar22 = uVar20;
  uVar21 = local_208.MonitorInfo.ArrayNum;
  if (uVar8 != 0) {
    do {
      uVar18 = (uint)uVar22;
      uVar8 = 0;
      if ((int)uVar18 < (int)uVar21) {
        uVar8 = ~uVar18 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        uVar21 = local_208.MonitorInfo.ArrayNum;
      }
      param_1->Displays[uVar22].CurrentModeHeight =
           *(uint *)(local_208.MonitorInfo.AllocatorInstance.Data +
                    (longlong)(int)uVar18 * 0x58 + 0x24);
      param_1->Displays[uVar22].CurrentModeWidth =
           *(uint *)(local_208.MonitorInfo.AllocatorInstance.Data +
                    (longlong)(int)uVar18 * 0x58 + 0x20);
      uVar22 = (ulonglong)(uVar18 + 1);
    } while (uVar18 + 1 < param_1->DisplayCount);
  }
  bVar5 = FWindowsPlatformMisc::Is64bitOperatingSystem();
  if (bVar5) {
    GetNativeSystemInfo((LPSYSTEM_INFO)&local_178);
  }
  else {
    GetSystemInfo((LPSYSTEM_INFO)&local_178);
  }
  param_1->CPUCount = local_178.dwNumberOfProcessors;
  pFVar11 = ::FName::FName(&local_188,"SynthBenchmark");
  FVar1 = *pFVar11;
  pFVar12 = FModuleManager::Get();
  pIVar13 = FModuleManager::LoadModuleChecked(pFVar12,FVar1);
  (**(code **)((longlong)*pIVar13 + 0x40))(pIVar13,&param_1->SynthBenchmark,1,__real_40a00000);
  local_450 = (void *)0x0;
  local_448 = 0;
  pFVar11 = ::FName::FName(&local_180,"SynthBenchmark");
  FVar1 = *pFVar11;
  pFVar12 = FModuleManager::Get();
  pIVar13 = FModuleManager::LoadModuleChecked(pFVar12,FVar1);
  (**(code **)((longlong)*pIVar13 + 0x50))(pIVar13,&param_1->RHIAdapter,&local_450);
  pwVar15 = param_1->RenderingAPI;
  memset(pwVar15,0,0x208);
  uVar22 = uVar20;
  uVar25 = uVar20;
  iVar7 = (int)local_448;
  while( true ) {
    uVar8 = iVar7 - 1U;
    if (iVar7 == 0) {
      uVar8 = 0;
    }
    uVar21 = 0x103;
    if ((int)uVar8 < 0x103) {
      uVar21 = uVar8;
    }
    iVar9 = (int)uVar22;
    if ((int)uVar21 <= iVar9) break;
    if (((iVar9 < 0) || (iVar7 == 0)) || ((int)(iVar7 - 1U) <= iVar9)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar7 = (int)local_448;
    }
    uVar22 = (ulonglong)(iVar9 + 1);
    *pwVar15 = *(wchar_t *)((longlong)local_450 + uVar25);
    pwVar15 = pwVar15 + 1;
    uVar25 = uVar25 + 2;
  }
  if (param_1->CPUCount == 0) {
    param_1->ErrorCount = param_1->ErrorCount + 1;
    ::FString::FString(&local_390,
                       L"FWindowsPlatformSurvey::TickSurveyHardware() failed to get processor count from GetSystemInfo()"
                      );
    WriteFStringToResults(param_1->LastSurveyError,&local_390);
    if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_380,L"");
    WriteFStringToResults(param_1->LastSurveyErrorDetail,&local_380);
    if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data.AllocatorInstance.Data);
    }
  }
  else {
    auVar3 = ZEXT816(0x18) * ZEXT416(param_1->CPUCount);
    uVar14 = auVar3._0_8_;
    if (auVar3._8_8_ != 0) {
      uVar14 = 0xffffffffffffffff;
    }
    _Dst = operator_new__(uVar14);
    if (_Dst == (void *)0x0) {
      param_1->ErrorCount = param_1->ErrorCount + 1;
      ::FString::FString(&local_3b0,
                         L"FWindowsPlatformSurvey::TickSurveyHardware() failed to get processor count"
                        );
      WriteFStringToResults(param_1->LastSurveyError,&local_3b0);
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_3a0,L"");
      WriteFStringToResults(param_1->LastSurveyErrorDetail,&local_3a0);
      if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
      }
    }
    else {
      memset(_Dst,0,(ulonglong)(param_1->CPUCount * 0x18));
      iVar7 = CallNtPowerInformation(0xb,0,0,_Dst);
      if (iVar7 < 0) {
        param_1->ErrorCount = param_1->ErrorCount + 1;
        ::FString::FString(&local_3d0,L"CallNtPowerInformation() failed to get processor power info"
                          );
        WriteFStringToResults(param_1->LastSurveyError,&local_3d0);
        if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_3c0,L"NTSTATUS: 0x%0x");
        WriteFStringToResults(param_1->LastSurveyErrorDetail,&local_3c0);
        if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
        }
      }
      else {
        param_1->CPUClockGHz = (float)*(uint *)((longlong)_Dst + 4) * __real_3a83126f;
      }
      operator_delete__(_Dst);
    }
  }
  pwVar27 = param_1->LastSurveyError;
  puVar26 = &param_1->ErrorCount;
  pwVar24 = param_1->LastSurveyErrorDetail;
  FWindowsPlatformMisc::GetCPUVendor(&local_410);
  pwVar15 = param_1->CPUBrand;
  memset(pwVar15,0,0x208);
  uVar17 = local_410.Data._8_8_;
  uVar22 = uVar20;
  while( true ) {
    pFVar4 = local_440;
    iVar9 = (int)uVar17;
    iVar7 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar7 = 0;
    }
    iVar16 = 0x103;
    if (iVar7 < 0x103) {
      iVar16 = iVar7;
    }
    iVar19 = (int)uVar20;
    if (iVar16 <= iVar19) break;
    if ((((iVar19 < 0) || (iVar9 == 0)) || (iVar9 + -1 <= iVar19)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), uVar17 = local_410.Data._8_8_, bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    uVar20 = (ulonglong)(iVar19 + 1);
    *pwVar15 = *(wchar_t *)(local_410.Data.AllocatorInstance.Data + uVar22);
    pwVar15 = pwVar15 + 1;
    uVar22 = uVar22 + 2;
  }
  if (iVar7 == 0) {
    *puVar26 = *puVar26 + 1;
    ::FString::FString(&local_370,
                       L"FWindowsPlatformSurvey::TickSurveyHardware() failed to get processor brand from FWindowsPlatformMisc::GetCPUVendor()"
                      );
    WriteFStringToResults(pwVar27,&local_370);
    if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_360,L"");
    WriteFStringToResults(pwVar24,&local_360);
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
  }
  FWindowsPlatformMisc::GetCPUBrand(&local_420);
  pwVar15 = pFVar4->CPUNameString;
  memset(pwVar15,0,0x208);
  iVar7 = 0;
  lVar23 = 0;
  uVar17 = local_420.Data._8_8_;
  while( true ) {
    pFVar4 = local_440;
    iVar16 = (int)uVar17;
    iVar9 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar9 = 0;
    }
    iVar19 = 0x103;
    if (iVar9 < 0x103) {
      iVar19 = iVar9;
    }
    if (iVar19 <= iVar7) break;
    if ((((iVar7 < 0) || (iVar16 == 0)) || (iVar16 + -1 <= iVar7)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), uVar17 = local_420.Data._8_8_, bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    iVar7 = iVar7 + 1;
    *pwVar15 = *(wchar_t *)(local_420.Data.AllocatorInstance.Data + lVar23);
    pwVar15 = pwVar15 + 1;
    lVar23 = lVar23 + 2;
  }
  if (iVar9 == 0) {
    *puVar26 = *puVar26 + 1;
    ::FString::FString(&local_350,
                       L"FWindowsPlatformSurvey::TickSurveyHardware() failed to get processor name from FWindowsPlatformMisc::GetCPUBrand()"
                      );
    WriteFStringToResults(pwVar27,&local_350);
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_340,L"");
    WriteFStringToResults(pwVar24,&local_340);
    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.Data.AllocatorInstance.Data);
    }
  }
  uVar8 = FWindowsPlatformMisc::GetCPUInfo();
  pFVar4->CPUInfo = uVar8;
  local_438 = 0;
  local_430 = 0;
  pFVar4->HardDriveGB = 0xffffffff;
  pFVar4->HardDriveFreeMB = 0xffffffff;
  pwVar15 = FWindowsPlatformProcess::BaseDir();
  ::FString::FString(&local_330,pwVar15);
  bVar5 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(&local_330,&local_438,&local_430);
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pFVar4->HardDriveGB = (uint)(local_438 >> 0x1e);
    pFVar4->HardDriveFreeMB = (uint)(local_430 >> 0x14);
  }
  else {
    FWindowsPlatformMisc::GetLastError();
    if (2 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    *puVar26 = *puVar26 + 1;
    ::FString::FString(&local_320,L"GetDiskFreeSpaceEx() failed");
    WriteFStringToResults(pwVar27,&local_320);
    if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_310,L"ErrorCode: 0x%0x");
    WriteFStringToResults(pwVar24,&local_310);
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
  }
  GetOSVersionLabels(&local_178,pFVar4);
  bVar5 = FWindowsPlatformMisc::Is64bitOperatingSystem();
  pFVar4->OSBits = (bVar5 + 1) * 0x20;
  Locale = GetSystemDefaultLCID();
  iVar7 = GetLocaleInfoW(Locale,0x59,local_50,9);
  iVar9 = GetLocaleInfoW(Locale,0x5a,local_68,9);
  if ((iVar7 == 0) || (iVar9 == 0)) {
    FWindowsPlatformMisc::GetLastError();
    if (2 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    *puVar26 = *puVar26 + 1;
    ::FString::FString(&local_2f0,L"GetLocaleInfo() failed");
    WriteFStringToResults(pwVar27,&local_2f0);
    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_2e0,L"ErrorCode: 0x%0x");
    WriteFStringToResults(pwVar24,&local_2e0);
    local_300.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
  }
  else {
    ::FString::PrintfImpl(&local_300,L"%s-%s");
    WriteFStringToResults(pFVar4->OSLanguage,&local_300);
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  HVar10 = CoCreateInstance((IID *)&_GUID_f3bdfad3_f276_49e9_9b17_c474f48f0764,(LPUNKNOWN)0x0,1,
                            (IID *)&_GUID_f8ad5d1f_3b47_4bdc_9375_7c6b1da4eca7,&local_428);
  if (HVar10 < 0) {
    if (2 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    *puVar26 = *puVar26 + 1;
    ::FString::FString(&local_2d0,L"CoCreateInstance() failed to get WinSAT");
    WriteFStringToResults(pwVar27,&local_2d0);
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_2c0,L"HRESULT: 0x%0x");
    WriteFStringToResults(pwVar24,&local_2c0);
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    goto LAB_1423e412d;
  }
  local_468 = (IProvideWinSATResultsInfo *)0x0;
  iVar7 = (**(code **)(*local_428 + 0x40))(local_428,&local_468);
  if (iVar7 < 0) {
    if (1 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    *puVar26 = *puVar26 + 1;
    ::FString::FString(&local_2b0,L"get_Info() failed to get WinSAT assessment results");
    WriteFStringToResults(pwVar27,&local_2b0);
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_2a0,L"HRESULT: 0x%0x");
    WriteFStringToResults(pwVar24,&local_2a0);
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    goto LAB_1423e412d;
  }
  iVar7 = (**(code **)((longlong)*local_468 + 0x40))(local_468,&local_460);
  if (iVar7 < 0) {
    if (1 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    *puVar26 = *puVar26 + 1;
    ::FString::FString(&local_290,L"get_AssessmentState() failed to get WinSAT assessment state");
    WriteFStringToResults(pwVar27,&local_290);
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_280,L"HRESULT: 0x%0x");
    WriteFStringToResults(pwVar24,&local_280);
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (local_460 != 1) {
      if (local_460 != 2) {
        if (local_460 == 3) {
          if (4 < (byte)LogWindows._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
          }
          *puVar26 = *puVar26 + 1;
          ::FString::FString(&local_250,
                             L"WinSAT assessment unavailable. User hasn\'t run Windows Experience Index Assessment."
                            );
          WriteFStringToResults(pwVar27,&local_250);
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_240,L"");
          WriteFStringToResults(pwVar24,&local_240);
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (2 < (byte)LogWindows._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
          }
          *puVar26 = *puVar26 + 1;
          ::FString::FString(&local_270,L"WinSAT assessment state unknown");
          WriteFStringToResults(pwVar27,&local_270);
          if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_270.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_260,L"WinSATState: %d");
          WriteFStringToResults(pwVar24,&local_260);
          if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_260.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_1423e4122;
      }
      if (4 < (byte)LogWindows._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
      *puVar26 = *puVar26 + 1;
      ::FString::FString(&local_230,L"WinSAT assessment out-of-date. Using old results.");
      WriteFStringToResults(pwVar27,&local_230);
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_220,L"");
      WriteFStringToResults(pwVar24,&local_220);
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = GetSubComponentIndex(local_468,pFVar4,0,&pFVar4->RAMPerformanceIndex);
    if ((!bVar5) && (1 < (byte)LogWindows._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    bVar5 = GetSubComponentIndex(local_468,pFVar4,1,&pFVar4->CPUPerformanceIndex);
    if ((!bVar5) && (1 < (byte)LogWindows._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    local_458[0] = 0.0;
    bVar5 = GetSubComponentIndex(local_468,pFVar4,3,local_458);
    if ((!bVar5) && (1 < (byte)LogWindows._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    local_45c = 0.0;
    bVar5 = GetSubComponentIndex(local_468,pFVar4,3,&local_45c);
    if ((!bVar5) && (1 < (byte)LogWindows._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    pFVar4->GPUPerformanceIndex = (local_45c + local_458[0]) * __real_3f000000;
  }
LAB_1423e4122:
  (**(code **)((longlong)*local_468 + 0x10))();
LAB_1423e412d:
  if (local_428 != (longlong *)0x0) {
    (**(code **)(*local_428 + 0x10))();
  }
  pFVar4->bIsLaptopComputer = 0;
  iVar7 = CallNtPowerInformation(4,0,0,local_b8);
  if (iVar7 < 0) {
    if (2 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    *puVar26 = *puVar26 + 1;
    ::FString::FString(&local_400,
                       L"CallNtPowerInformation() failed to get system power capabilities");
    WriteFStringToResults(pwVar27,&local_400);
    if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_3f0,L"NTSTATUS: 0x%0x");
    WriteFStringToResults(pwVar24,&local_3f0);
    if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((local_9a == '\0') || (uVar8 = 1, local_99 != '\0')) {
      uVar8 = 0;
    }
    pFVar4->bIsLaptopComputer = 0;
    *(uint *)&pFVar4->field_0xc4c = *(uint *)&pFVar4->field_0xc4c | uVar8;
  }
  iVar7 = GetSystemMetrics(0x1000);
  pFVar4->bIsRemoteSession = -(uint)(iVar7 != 0) >> 1;
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
  }
  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data.AllocatorInstance.Data);
  }
  if (local_450 != (void *)0x0) {
    FMemory::Free(local_450);
  }
  DestructItems<FMonitorInfo,int>
            ((FMonitorInfo *)local_208.MonitorInfo.AllocatorInstance.Data,
             local_208.MonitorInfo.ArrayNum);
  if ((FMonitorInfo *)local_208.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
    FMemory::Free(local_208.MonitorInfo.AllocatorInstance.Data);
  }
  return true;
}

