// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FABTest @ 141915240

FABTest * __thiscall FABTest::FABTest(FABTest *this)

{
  (this->Stream).InitialSeed = 0x255f;
  (this->Stream).Seed = 0x255f;
  this->bABTestActive = false;
  this->bABScopeTestActive = false;
  this->bFrameLog = false;
  this->ABTestCmds[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ABTestCmds[0].Data.ArrayNum = 0;
  this->ABTestCmds[0].Data.ArrayMax = 0;
  this->ABTestCmds[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ABTestCmds[1].Data.ArrayNum = 0;
  this->ABTestCmds[1].Data.ArrayMax = 0;
  this->ABTestNumSamples = 0;
  this->RemainingCoolDown = 0;
  this->CurrentTest = 0;
  this->RemainingTrial = 0;
  this->RemainingPrint = 0;
  this->HistoryNum = 0;
  this->ReportNum = 0;
  this->CoolDown = 0;
  this->MinFramesPerTrial = 0;
  this->NumResamples = 0;
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samples).ArrayNum = 0;
  (this->Samples).ArrayMax = 0;
  (this->ResampleAccumulators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResampleAccumulators).ArrayNum = 0;
  (this->ResampleAccumulators).ArrayMax = 0;
  (this->ResampleCount).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResampleCount).ArrayNum = 0;
  (this->ResampleCount).ArrayMax = 0;
  this->TotalScopeTimeInFrame = 0.0;
  this->LastGCFrame = 0;
  return this;
}

// ABTestCmdFunc @ 141923ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FABTest::ABTestCmdFunc(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  FABTest *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  FStaticBasicLogRecord *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  wchar_t *pwVar19;
  ulonglong uVar20;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar16 = 0;
  pwVar19 = L"";
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  uVar14 = uVar16;
  if (param_1->ArrayNum == 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    pFVar7 = ::FString::FString(&local_e8,L"framelog");
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    if (*(int *)(pFVar1 + 8) == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = *(wchar_t **)pFVar1;
    }
    uVar14 = 1;
    iVar5 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
    if (iVar5 != 0) goto LAB_141923b42;
    bVar4 = true;
  }
  else {
LAB_141923b42:
    bVar4 = false;
  }
  if ((uVar14 != 0) && (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  bVar3 = false;
  if (bVar4) {
    pFVar8 = Get();
    Stop(pFVar8);
    pFVar8 = Get();
    pFVar8->TotalTime = 0.0;
    pFVar8->TotalFrames = 0;
    pFVar8->Spikes = 0;
    pFVar8->bFrameLog = true;
    if ((byte)LogConsoleResponse._0_1_ < 4) goto LAB_14192421f;
    pFVar11 = &::LOG_Static;
LAB_141924213:
    UE::Logging::Private::BasicLog<4>(pFVar11,(FLogCategoryBase *)&LogConsoleResponse);
  }
  else {
    if (param_1->ArrayNum == 1) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      bVar3 = true;
      pFVar7 = ::FString::FString(&local_d8,L"stop");
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)pFVar1;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
      if (iVar5 != 0) goto LAB_141923be9;
      bVar4 = true;
    }
    else {
LAB_141923be9:
      bVar4 = false;
    }
    if ((bVar3) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
    if (bVar4) {
      pFVar8 = Get();
      Stop(pFVar8);
      goto LAB_14192421f;
    }
    if (param_1->ArrayNum == 1) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      bVar3 = true;
      pFVar7 = ::FString::FString(&local_c8,L"scope");
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      if (*(int *)(pFVar1 + 8) != 0) {
        pwVar19 = *(wchar_t **)pFVar1;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar19,pwVar13);
      if (iVar5 != 0) goto LAB_141923c5c;
      bVar4 = true;
    }
    else {
LAB_141923c5c:
      bVar4 = false;
    }
    if ((bVar3) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pFVar7 = ::FString::FString(&local_b8,"ScopeA");
      ::FString::operator=(&local_148,pFVar7);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      pFVar7 = ::FString::FString(&local_a8,"ScopeB");
      ::FString::operator=(&local_138,pFVar7);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      pFVar8 = Get();
      Start(pFVar8,&local_148,true);
      goto LAB_14192421f;
    }
    if ((param_1->ArrayNum != 3) ||
       (bVar4 = ::FString::StartsWith
                          ((FString *)(param_1->AllocatorInstance).Data,L"\"",1,IgnoreCase), bVar4))
    {
      iVar5 = param_1->ArrayNum;
      if (2 < iVar5) {
        bVar4 = ::FString::StartsWith
                          ((FString *)(param_1->AllocatorInstance).Data,L"\"",1,IgnoreCase);
        if (bVar4) {
          iVar5 = param_1->ArrayNum;
          local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_158.Data.ArrayNum = 0;
          local_158.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
          if (0 < iVar5) {
            pFVar7 = &local_148;
            uVar14 = uVar16;
            uVar20 = uVar16;
            do {
              uVar18 = (uint)uVar20;
              uVar6 = 0;
              if ((int)uVar18 < iVar5) {
                uVar6 = ~uVar18 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (param_1->AllocatorInstance).Data;
              iVar5 = *(int *)(pFVar1 + uVar14 + 8);
              iVar15 = iVar5 + -1;
              if (iVar5 == 0) {
                iVar15 = 0;
              }
              ::FString::AppendChars(&local_158,*(wchar_t **)(pFVar1 + uVar14),iVar15);
              uVar6 = local_158.Data.ArrayNum - 1;
              if (local_158.Data.ArrayNum == 0) {
                uVar6 = 0;
              }
              if ((((int)uVar6 < 3) ||
                  (bVar4 = ::FString::StartsWith(&local_158,L"\"",1,IgnoreCase), !bVar4)) ||
                 (bVar4 = ::FString::EndsWith(&local_158,L"\"",1,IgnoreCase), !bVar4)) {
                pFVar9 = pFVar7;
                if ((int)(uVar18 + 1) < param_1->ArrayNum) {
                  ::FString::AppendChars(&local_158,L" ",1);
                }
              }
              else {
                pFVar9 = pFVar7 + 1;
                uVar16 = uVar16 + 1;
                pFVar10 = ::FString::TrimQuotes(&local_158,&local_58,(bool *)0x0);
                if (pFVar7 != pFVar10) {
                  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
                  if (pFVar1 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar1);
                  }
                  (pFVar7->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
                  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  (pFVar7->Data).ArrayNum = (pFVar10->Data).ArrayNum;
                  (pFVar7->Data).ArrayMax = (pFVar10->Data).ArrayMax;
                  (pFVar10->Data).ArrayNum = 0;
                  (pFVar10->Data).ArrayMax = 0;
                }
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                ::FString::Empty(&local_158);
                local_38.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
                if (1 < (longlong)uVar16) break;
              }
              iVar5 = param_1->ArrayNum;
              uVar20 = (ulonglong)(uVar18 + 1);
              uVar14 = uVar14 + 0x10;
              pFVar7 = pFVar9;
              local_38.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
            } while ((int)(uVar18 + 1) < iVar5);
          }
          goto joined_r0x000141924101;
        }
        iVar5 = param_1->ArrayNum;
      }
      if (iVar5 != 2) {
        if ((((byte)LogConsoleResponse._0_1_ < 4) ||
            (UE::Logging::Private::BasicLog<4>
                       (&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
            (byte)LogConsoleResponse._0_1_ < 4)) ||
           (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse)
           , (byte)LogConsoleResponse._0_1_ < 4)) goto LAB_14192421f;
        pFVar11 = &::LOG_Static;
        goto LAB_141924213;
      }
      pFVar7 = ::FString::TrimQuotes
                         ((FString *)(param_1->AllocatorInstance).Data,&local_48,(bool *)0x0);
      ::FString::operator=(&local_148,pFVar7);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((param_1->ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = ::FString::TrimQuotes
                         ((FString *)((param_1->AllocatorInstance).Data + 0x10),&local_38,
                          (bool *)0x0);
      ::FString::operator=(&local_138,pFVar7);
    }
    else {
      if ((param_1->ArrayNum < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = ::FString::TrimQuotes
                         ((FString *)((param_1->AllocatorInstance).Data + 0x10),&local_88,
                          (bool *)0x0);
      if ((param_1->ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = ::FString::TrimQuotes
                         ((FString *)(param_1->AllocatorInstance).Data,&local_98,(bool *)0x0);
      ::FString::ConcatFC(&local_108,pFVar9,L" ");
      ::FString::ConcatFF(&local_118,&local_108,pFVar7);
      ::FString::operator=(&local_148,&local_118);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if ((param_1->ArrayNum < 3) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = ::FString::TrimQuotes
                         ((FString *)((param_1->AllocatorInstance).Data + 0x20),&local_68,
                          (bool *)0x0);
      if ((param_1->ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = ::FString::TrimQuotes
                         ((FString *)(param_1->AllocatorInstance).Data,&local_78,(bool *)0x0);
      ::FString::ConcatFC(&local_f8,pFVar9,L" ");
      ::FString::ConcatFF(&local_128,&local_f8,pFVar7);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      local_138.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
      local_138.Data.ArrayNum = local_128.Data.ArrayNum;
      local_138.Data.ArrayMax = local_128.Data.ArrayMax;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        local_38.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      }
    }
joined_r0x000141924101:
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar8 = Get();
    Start(pFVar8,&local_148,false);
  }
LAB_14192421f:
  lVar17 = 2;
  pFVar7 = &local_128;
  do {
    pFVar1 = pFVar7[-1].Data.AllocatorInstance.Data;
    pFVar7 = pFVar7 + -1;
    lVar17 = lVar17 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar17 != 0);
  return;
}

// FrameLogTick @ 141943a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FABTest::FrameLogTick(FABTest *this,double param_1)

{
  uint uVar1;
  
  if (param_1 <= ___real_3fa16872b020c49c) {
    this->TotalFrames = this->TotalFrames + 1;
    this->TotalTime = param_1 + this->TotalTime;
  }
  else {
    this->Spikes = this->Spikes + 1;
  }
  uVar1 = this->TotalFrames;
  if (((uVar1 != 0) && (uVar1 == (uVar1 / 1000) * 1000)) && (3 < (byte)LogConsoleResponse._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  return;
}

// Get @ 141944860

FABTest * __cdecl FABTest::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FABTest::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// Start @ 14196e580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FABTest::Start(FABTest *this,FString *param_1,bool param_2)

{
  FString *pFVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  int iVar10;
  FString *pFVar11;
  FString local_48;
  FString local_38;
  
  if (this->bABTestActive != false) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    SwitchTest(this,0);
    this->bABTestActive = false;
    this->bABScopeTestActive = false;
  }
  pFVar1 = this->ABTestCmds;
  if (param_1 == (FString *)0x0) {
    pFVar11 = ::FString::FString(&local_48,"");
    if (pFVar1 != pFVar11) {
      pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this->ABTestCmds[0].Data.ArrayNum = (pFVar11->Data).ArrayNum;
      this->ABTestCmds[0].Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar11 = ::FString::FString(&local_38,"");
    pFVar1 = this->ABTestCmds + 1;
    if (pFVar1 != pFVar11) {
      pFVar6 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this->ABTestCmds[1].Data.ArrayNum = (pFVar11->Data).ArrayNum;
      this->ABTestCmds[1].Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar4 = (param_1->Data).ArrayNum;
    iVar10 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange(pFVar1,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar10);
    iVar4 = param_1[1].Data.ArrayNum;
    iVar10 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange
              (this->ABTestCmds + 1,(wchar_t *)param_1[1].Data.AllocatorInstance.Data,iVar10);
  }
  this->bABScopeTestActive = param_2;
  pTVar8 = CVarABTestHistory.Ref;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->HistoryNum = pTVar8->ShadowedValue[0];
  pTVar8 = CVarABTestReportNum.Ref;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->ReportNum = pTVar8->ShadowedValue[0];
  pTVar8 = CVarABTestCoolDown.Ref;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->CoolDown = pTVar8->ShadowedValue[0];
  pTVar8 = CVarABTestMinFramesPerTrial.Ref;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->MinFramesPerTrial = pTVar8->ShadowedValue[0];
  pTVar8 = CVarABTestNumResamples.Ref;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = this->HistoryNum;
  this->NumResamples = pTVar8->ShadowedValue[0];
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  DestructItems<FABTest::FSample,int>
            ((FSample *)(this->Samples).AllocatorInstance.Data,(this->Samples).ArrayNum);
  piVar2 = &(this->Samples).ArrayMax;
  (this->Samples).ArrayNum = 0;
  if (*piVar2 != uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar5,&(this->Samples).AllocatorInstance,0,piVar2);
  }
  uVar5 = this->NumResamples;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar2 = &(this->ResampleAccumulators).ArrayMax;
  piVar3 = &(this->ResampleAccumulators).ArrayNum;
  *piVar3 = 0;
  if (*piVar2 != uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar5,&(this->ResampleAccumulators).AllocatorInstance,0,piVar2);
  }
  iVar4 = this->NumResamples;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar4,&(this->ResampleAccumulators).AllocatorInstance,piVar3,piVar2);
  memset((this->ResampleAccumulators).AllocatorInstance.Data + (longlong)iVar10 * 4,0,
         (longlong)iVar4 << 2);
  uVar5 = this->NumResamples;
  if (-1 < (int)uVar5) {
    piVar2 = &(this->ResampleCount).ArrayMax;
    piVar3 = &(this->ResampleCount).ArrayNum;
    *piVar3 = 0;
    if (*piVar2 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&(this->ResampleCount).AllocatorInstance,0,piVar2);
    }
    iVar4 = this->NumResamples;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar4,&(this->ResampleCount).AllocatorInstance,piVar3,piVar2);
    memset((this->ResampleCount).AllocatorInstance.Data + (longlong)iVar10 * 4,0,
           (longlong)iVar4 << 2);
    this->RemainingPrint = this->ReportNum;
    this->ABTestNumSamples = 0;
    this->Totals[0] = 0;
    this->Totals[1] = 0;
    this->Counts[0] = 0;
    this->Counts[1] = 0;
    this->bABTestActive = true;
    SwitchTest(this,0);
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// StartFrameLog @ 14196ea10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FABTest::StartFrameLog(FABTest *this)

{
  this->bFrameLog = true;
  this->TotalTime = 0.0;
  this->TotalFrames = 0;
  this->Spikes = 0;
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return;
  }
  return;
}

// Stop @ 14196f070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FABTest::Stop(FABTest *this)

{
  if (this->bABTestActive != false) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    SwitchTest(this,0);
    this->bABTestActive = false;
    this->bABScopeTestActive = false;
    return;
  }
  if (this->bFrameLog != false) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    this->bABScopeTestActive = false;
    this->bFrameLog = false;
    return;
  }
  this->bABScopeTestActive = false;
  return;
}

// SwitchTest @ 14196f180

wchar_t * __thiscall FABTest::SwitchTest(FABTest *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  this->CurrentTest = param_1;
  this->RemainingCoolDown = this->CoolDown;
  iVar1 = this->MinFramesPerTrial;
  iVar5 = iVar1 * 2 + 1;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    uVar4 = (this->Stream).Seed * 0xbb38435 + 0x3619636b;
    (this->Stream).Seed = uVar4;
    iVar5 = (int)(((float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar5);
  }
  iVar5 = iVar5 + iVar1;
  pwVar6 = L"";
  this->RemainingTrial = iVar5;
  if (iVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RemainingTrial",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                       ,0x178,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar6 = (wchar_t *)(*pcVar2)();
      return pwVar6;
    }
  }
  if (this->bABScopeTestActive == false) {
    if (this->ABTestCmds[this->CurrentTest].Data.ArrayNum != 0) {
      pwVar6 = (wchar_t *)this->ABTestCmds[this->CurrentTest].Data.AllocatorInstance.Data;
    }
    return (wchar_t *)(FScriptContainerElement *)pwVar6;
  }
  return (wchar_t *)0x0;
}

// TickAndGetCommand @ 141970810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall FABTest::TickAndGetCommand(FABTest *this)

{
  int *piVar1;
  ulonglong uVar2;
  FIdentityFunctor FVar3;
  code *pcVar4;
  float fVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  wchar_t *pwVar12;
  byte bVar13;
  longlong lVar14;
  FStaticBasicLogRecord *pFVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  double dVar23;
  float fVar24;
  uint local_res8;
  undefined1 local_res10 [8];
  ulonglong local_res18;
  int local_res20;
  uint local_b8;
  int local_b4;
  longlong local_b0;
  wchar_t *local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90 [10];
  
  dVar6 = __real_4170000000000000;
  local_a8 = (wchar_t *)0x0;
  if (this->bABTestActive == false) {
    if (this->bFrameLog != false) {
      QueryPerformanceCounter(&local_98);
      dVar23 = ((double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6) -
               LastTime;
      if (dVar23 <= ___real_3fa16872b020c49c) {
        this->TotalFrames = this->TotalFrames + 1;
        this->TotalTime = dVar23 + this->TotalTime;
      }
      else {
        this->Spikes = this->Spikes + 1;
      }
      uVar9 = this->TotalFrames;
      if (((uVar9 != 0) && (uVar9 == (uVar9 / 1000) * 1000)) && (3 < (byte)LogConsoleResponse._0_1_)
         ) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      }
    }
    goto LAB_141971809;
  }
  if (this->RemainingCoolDown != 0) {
    this->RemainingCoolDown = this->RemainingCoolDown + -1;
    goto LAB_141971809;
  }
  if ((this->LastGCFrame != GLastGCFrame) && (this->bABScopeTestActive == false)) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    goto LAB_141971809;
  }
  if (this->bABScopeTestActive == false) {
    QueryPerformanceCounter(&local_a0);
    dVar23 = ((double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6) - LastTime;
    if ((dVar23 <= 0.0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Delta > 0.0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                           ,0x77,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pwVar12 = (wchar_t *)(*pcVar4)();
      return pwVar12;
    }
  }
  else {
    dVar23 = this->TotalScopeTimeInFrame;
  }
  iVar8 = this->ABTestNumSamples;
  iVar16 = (this->Samples).ArrayNum;
  if (iVar8 < this->HistoryNum) {
    if ((iVar8 != iVar16) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ABTestNumSamples == Samples.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                           ,0x7d,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pwVar12 = (wchar_t *)(*pcVar4)();
      return pwVar12;
    }
    iVar8 = (this->Samples).ArrayNum;
    piVar1 = &(this->Samples).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->Samples).AllocatorInstance,piVar1);
    }
    (this->Samples).ArrayNum = iVar8 + 1;
    pFVar22 = (this->Samples).AllocatorInstance.Data + (longlong)iVar8 * 0x28;
    DefaultConstructItems<FABTest::FSample,int>(pFVar22,1);
  }
  else {
    uVar10 = iVar8 % this->HistoryNum;
    uVar9 = 0;
    if ((int)uVar10 < iVar16) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pwVar12 = (wchar_t *)(*pcVar4)();
      return pwVar12;
    }
    pFVar20 = (this->Samples).AllocatorInstance.Data;
    pFVar22 = pFVar20 + (longlong)(int)uVar10 * 0x28;
    if (((this->Totals[*(int *)(pFVar20 + (longlong)(int)uVar10 * 0x28 + 4)] <= *(uint *)pFVar22) &&
        (this->bABScopeTestActive == false)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Totals[Sample->TestIndex] > Sample->Micros || bABScopeTestActive",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                           ,0x85,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pwVar12 = (wchar_t *)(*pcVar4)();
      return pwVar12;
    }
    this->Totals[(int)*(uint *)(pFVar22 + 4)] =
         this->Totals[(int)*(uint *)(pFVar22 + 4)] - *(uint *)pFVar22;
    if ((this->Counts[(int)*(uint *)(pFVar22 + 4)] == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Counts[Sample->TestIndex]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                           ,0x87,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pwVar12 = (wchar_t *)(*pcVar4)();
      return pwVar12;
    }
    this->Counts[(int)*(uint *)(pFVar22 + 4)] = this->Counts[(int)*(uint *)(pFVar22 + 4)] - 1;
    if ((*(uint *)(pFVar22 + 0x20) != this->NumResamples) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Sample->InResamples.Num() == NumResamples",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                           ,0x89,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pwVar12 = (wchar_t *)(*pcVar4)();
      return pwVar12;
    }
    uVar9 = *(uint *)(pFVar22 + 0x20);
    iVar8 = 0;
    iVar16 = 0;
    if (uVar9 != 0) {
      pFVar20 = *(FScriptContainerElement **)(pFVar22 + 0x18);
      if (*(FScriptContainerElement **)(pFVar22 + 0x18) == (FScriptContainerElement *)0x0) {
        pFVar20 = pFVar22 + 8;
      }
      uVar10 = *(uint *)pFVar20;
      while (uVar10 == 0) {
        lVar18 = (longlong)iVar8;
        iVar16 = iVar16 + 0x20;
        iVar8 = iVar8 + 1;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_141970d97;
        uVar10 = *(uint *)(pFVar20 + (lVar18 + 1) * 4);
      }
      uVar10 = ~(uVar10 - 1) & uVar10;
      uVar2 = (ulonglong)uVar10 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_res20 = (int)lVar18;
      uVar19 = iVar16 + -1 + local_res20;
      local_res18 = (ulonglong)uVar10;
      if ((int)uVar19 < (int)uVar9) {
        local_res8 = 0xffffffff;
        do {
          uVar10 = ~uVar19 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar19 < (this->ResampleAccumulators).ArrayNum) {
            uVar9 = uVar10;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          lVar18 = (longlong)(int)uVar19;
          if (((*(uint *)((this->ResampleAccumulators).AllocatorInstance.Data + lVar18 * 4) <=
                *(uint *)pFVar22) && (this->bABScopeTestActive == false)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ResampleAccumulators[ResampleIndex] > Sample->Micros || bABScopeTestActive"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                                 ,0x8d,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          uVar9 = *(uint *)pFVar22;
          uVar21 = 0;
          if ((int)uVar19 < (this->ResampleAccumulators).ArrayNum) {
            uVar21 = uVar10;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          pFVar20 = (this->ResampleAccumulators).AllocatorInstance.Data + lVar18 * 4;
          *(uint *)pFVar20 = *(int *)pFVar20 - uVar9;
          uVar9 = 0;
          if ((int)uVar19 < (this->ResampleCount).ArrayNum) {
            uVar9 = uVar10;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          if ((*(int *)((this->ResampleCount).AllocatorInstance.Data + lVar18 * 4) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ResampleCount[ResampleIndex]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                                 ,0x8f,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          uVar9 = 0;
          if ((int)uVar19 < (this->ResampleCount).ArrayNum) {
            uVar9 = uVar10;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          local_res8 = ~(uint)local_res18 & local_res8;
          pFVar20 = (this->ResampleCount).AllocatorInstance.Data + lVar18 * 4;
          *(int *)pFVar20 = *(int *)pFVar20 + -1;
          uVar9 = *(uint *)(pFVar22 + 0x20);
          pFVar20 = pFVar22 + 8;
          if (*(FScriptContainerElement **)(pFVar22 + 0x18) != (FScriptContainerElement *)0x0) {
            pFVar20 = *(FScriptContainerElement **)(pFVar22 + 0x18);
          }
          uVar10 = local_res8 & *(uint *)(pFVar20 + (longlong)iVar8 * 4);
          while (uVar10 == 0) {
            lVar18 = (longlong)iVar8;
            iVar16 = iVar16 + 0x20;
            iVar8 = iVar8 + 1;
            if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
            goto LAB_141970d97;
            uVar10 = *(uint *)(pFVar20 + (lVar18 + 1) * 4);
            local_res8 = 0xffffffff;
          }
          uVar10 = ~(uVar10 - 1) & uVar10;
          uVar2 = (ulonglong)uVar10 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_b4 = (int)lVar18;
          uVar19 = iVar16 + -1 + local_b4;
        } while (((int)uVar19 <= (int)uVar9) &&
                (local_res18 = (ulonglong)uVar10, (int)uVar19 < (int)uVar9));
      }
    }
  }
LAB_141970d97:
  this->ABTestNumSamples = this->ABTestNumSamples + 1;
  dVar23 = dVar23 * __real_412e848000000000;
  uVar9 = (uint)(longlong)dVar23;
  *(uint *)pFVar22 = uVar9;
  if (((uVar9 == 0) && (this->bABScopeTestActive == (bool)(char)(longlong)dVar23)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sample->Micros || bABScopeTestActive",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                         ,0x95,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pwVar12 = (wchar_t *)(*pcVar4)();
    return pwVar12;
  }
  uVar9 = this->CurrentTest;
  *(uint *)(pFVar22 + 4) = uVar9;
  this->Totals[(int)uVar9] = this->Totals[(int)uVar9] + *(uint *)pFVar22;
  this->Counts[(int)*(uint *)(pFVar22 + 4)] = this->Counts[(int)*(uint *)(pFVar22 + 4)] + 1;
  uVar9 = this->NumResamples + 0x1fU & 0xffffffe0;
  *(uint *)(pFVar22 + 0x20) = 0;
  if (((int)*(uint *)(pFVar22 + 0x24) < (int)uVar9) || (0x80 < (int)*(uint *)(pFVar22 + 0x24))) {
    uVar10 = 0x80;
    if (0x80 < (int)uVar9) {
      uVar10 = uVar9;
    }
    *(uint *)(pFVar22 + 0x24) = uVar10;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar22 + 8),0);
  }
  fVar24 = __real_3f000000;
  fVar5 = __real_3f800000;
  uVar9 = 0;
  if (0 < this->NumResamples) {
    lVar18 = 0;
    do {
      uVar10 = (this->Stream).Seed * 0xbb38435 + 0x3619636b;
      (this->Stream).Seed = uVar10;
      bVar7 = fVar24 < (float)(uVar10 >> 9 | 0x3f800000) - fVar5;
      iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar22 + 8),1);
      pFVar20 = pFVar22 + 8;
      if (*(FScriptContainerElement **)(pFVar22 + 0x18) != (FScriptContainerElement *)0x0) {
        pFVar20 = *(FScriptContainerElement **)(pFVar22 + 0x18);
      }
      bVar13 = (byte)iVar8 & 0x1f;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1f;
        bVar13 = bVar13 - 0x20;
      }
      *(uint *)(pFVar20 + (longlong)(iVar8 >> 5) * 4) =
           ~(1 << (bVar13 & 0x1f)) & *(uint *)(pFVar20 + (longlong)(iVar8 >> 5) * 4) |
           (uint)bVar7 << (bVar13 & 0x1f);
      if (bVar7) {
        uVar10 = *(uint *)pFVar22;
        uVar19 = 0 << (bVar13 & 0x1f);
        if ((int)uVar9 < (this->ResampleAccumulators).ArrayNum) {
          uVar19 = ~uVar9 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pwVar12 = (wchar_t *)(*pcVar4)();
          return pwVar12;
        }
        pFVar20 = (this->ResampleAccumulators).AllocatorInstance.Data + lVar18 * 4;
        *(uint *)pFVar20 = *(int *)pFVar20 + uVar10;
        uVar10 = 0;
        if ((int)uVar9 < (this->ResampleCount).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pwVar12 = (wchar_t *)(*pcVar4)();
          return pwVar12;
        }
        pFVar20 = (this->ResampleCount).AllocatorInstance.Data + lVar18 * 4;
        *(int *)pFVar20 = *(int *)pFVar20 + 1;
      }
      uVar9 = uVar9 + 1;
      lVar18 = lVar18 + 1;
    } while ((int)uVar9 < this->NumResamples);
  }
  piVar1 = &this->RemainingPrint;
  if ((this->RemainingPrint == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RemainingPrint",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                         ,0xa4,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pwVar12 = (wchar_t *)(*pcVar4)();
    return pwVar12;
  }
  *piVar1 = *piVar1 + -1;
  fVar5 = __real_3a83126f;
  if (*piVar1 == 0) {
    if ((this->Counts[0] == 0) || (this->Counts[1] == 0)) {
      if (3 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      }
    }
    else {
      if ((3 < (byte)LogConsoleResponse._0_1_) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse),
         3 < (byte)LogConsoleResponse._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u________7_4fms___1506ba160,
                   (FLogCategoryBase *)&LogConsoleResponse);
      }
      fVar24 = ((float)this->Totals[0] / (float)this->Counts[0]) * fVar5 -
               ((float)this->Totals[1] / (float)this->Counts[1]) * fVar5;
      FVar3 = (FIdentityFunctor)(fVar24 < 0.0);
      if ((bool)FVar3) {
        fVar24 = (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FABTest::TickAndGetCommand'::__l117::_dynamic_atexit_destructor_for__Scores__);
        _Init_thread_footer(&::_TSS0);
      }
      Scores.ArrayNum = 0;
      if (Scores.ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&Scores.AllocatorInstance,0,&Scores.ArrayMax);
      }
      uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      uVar21 = this->Totals[0] + this->Totals[1];
      uVar19 = 0;
      uVar10 = this->Counts[1] + this->Counts[0];
      local_res18 = CONCAT44(local_res18._4_4_,uVar10);
      if (0 < this->NumResamples) {
        lVar18 = 0;
        local_b0 = 0;
        do {
          lVar14 = local_b0;
          uVar17 = ~uVar19 >> 0x1f;
          uVar11 = 0;
          if ((int)uVar19 < (this->ResampleAccumulators).ArrayNum) {
            uVar11 = uVar17;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          if (((uVar21 <= *(uint *)((this->ResampleAccumulators).AllocatorInstance.Data + lVar14))
              && (this->bABScopeTestActive == false)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TotalFrame > ResampleAccumulators[ResampleIndex] || bABScopeTestActive"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                                 ,0xb9,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          uVar11 = 0;
          if ((int)uVar19 < (this->ResampleAccumulators).ArrayNum) {
            uVar11 = uVar17;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          iVar8 = *(int *)((this->ResampleAccumulators).AllocatorInstance.Data + lVar18 * 4);
          uVar11 = 0;
          if ((int)uVar19 < (this->ResampleCount).ArrayNum) {
            uVar11 = uVar17;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          if (((uVar10 <= *(uint *)((this->ResampleCount).AllocatorInstance.Data + lVar18 * 4)) &&
              (this->bABScopeTestActive == false)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TotalCount > ResampleCount[ResampleIndex] || bABScopeTestActive",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                                 ,0xbb,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          uVar11 = 0;
          if ((int)uVar19 < (this->ResampleCount).ArrayNum) {
            uVar11 = uVar17;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          iVar16 = *(int *)((this->ResampleCount).AllocatorInstance.Data + lVar18 * 4);
          uVar11 = 0;
          if ((int)uVar19 < (this->ResampleAccumulators).ArrayNum) {
            uVar11 = uVar17;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          pFVar22 = (this->ResampleAccumulators).AllocatorInstance.Data;
          uVar11 = 0;
          if ((int)uVar19 < (this->ResampleCount).ArrayNum) {
            uVar11 = uVar17;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          local_b8 = (uint)(((float)*(uint *)(pFVar22 + lVar18 * 4) /
                            (float)*(uint *)((this->ResampleCount).AllocatorInstance.Data +
                                            lVar18 * 4)) * fVar5 -
                           ((float)(uVar21 - iVar8) / (float)(uVar10 - iVar16)) * fVar5) & uVar9;
          if (((Scores.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b8) &&
              ((FScriptContainerElement *)&local_b8 <
               Scores.AllocatorInstance.Data + (longlong)Scores.ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          if (Scores.ArrayNum == Scores.ArrayMax) {
            Scores.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&Scores.AllocatorInstance,&Scores.ArrayMax);
          }
          lVar14 = (longlong)Scores.ArrayNum;
          uVar19 = uVar19 + 1;
          lVar18 = lVar18 + 1;
          local_b0 = local_b0 + 4;
          Scores.ArrayNum = Scores.ArrayNum + 1;
          *(uint *)(Scores.AllocatorInstance.Data + lVar14 * 4) = local_b8;
          uVar10 = (uint)local_res18;
        } while ((int)uVar19 < this->NumResamples);
      }
      AlgoImpl::
      IntroSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_>
                ((float *)Scores.AllocatorInstance.Data,Scores.ArrayNum,FVar3,
                 (TLess<void> *)local_res10);
      uVar9 = 0;
      if (0 < this->NumResamples) {
        lVar18 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar9 < Scores.ArrayNum) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pwVar12 = (wchar_t *)(*pcVar4)();
            return pwVar12;
          }
          if (fVar24 < *(float *)(Scores.AllocatorInstance.Data + lVar18)) break;
          uVar9 = uVar9 + 1;
          lVar18 = lVar18 + 4;
        } while ((int)uVar9 < this->NumResamples);
      }
      if ((bool)FVar3) {
        if (3 < (byte)LogConsoleResponse._0_1_) {
          pFVar15 = &::LOG_Static;
LAB_141971632:
          UE::Logging::Private::BasicLog<4>(pFVar15,(FLogCategoryBase *)&LogConsoleResponse);
          if (3 < (byte)LogConsoleResponse._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse)
            ;
          }
        }
      }
      else if (3 < (byte)LogConsoleResponse._0_1_) {
        pFVar15 = &::LOG_Static;
        goto LAB_141971632;
      }
    }
    this->RemainingPrint = this->ReportNum;
  }
  if ((this->RemainingTrial == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RemainingTrial",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\ABTesting.cpp"
                         ,0xe2,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pwVar12 = (wchar_t *)(*pcVar4)();
    return pwVar12;
  }
  piVar1 = &this->RemainingTrial;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    local_a8 = SwitchTest(this,1 - this->CurrentTest);
  }
LAB_141971809:
  QueryPerformanceCounter(local_90);
  dVar23 = (double)local_90[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->TotalScopeTimeInFrame = 0.0;
  this->LastGCFrame = GLastGCFrame;
  LastTime = dVar23 + dVar6;
  return local_a8;
}

