// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// AddCVarABData @ 141924a00

/* WARNING: Removing unreachable block (ram,0x000141924c5e) */
/* WARNING: Removing unreachable block (ram,0x000141924c6c) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCsvABTest::AddCVarABData(FCsvABTest *this,FString *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  FStaticBasicLogRecord *pFVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  int iVar11;
  ForAnyElementType local_68;
  undefined8 local_60;
  FName local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  
  pwVar10 = L"";
  iVar11 = (this->CVarValues).ArrayNum - param_2;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  plVar6 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,pwVar8,1);
  if (iVar11 < 1) {
    if (plVar6 != (longlong *)0x0) {
      if (iVar11 != 0) {
        return;
      }
      if ((byte)LogCsvProfiler._0_1_ < 5) {
        return;
      }
      pFVar7 = &`public:_void___cdecl_FCsvABTest::AddCVarABData(FString_const&___ptr64,int)___ptr64'
                ::__l32::LOG_Static;
      goto LAB_141924cb1;
    }
  }
  else if (plVar6 != (longlong *)0x0) {
    iVar2 = (param_1->Data).ArrayNum;
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = CONCAT44(local_60._4_4_,iVar2);
    if (iVar2 == 0) {
      local_60 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,0,&local_68,iVar2,(int *)((longlong)&local_60 + 4));
      memcpy(local_68.Data,pFVar3,(longlong)iVar2 * 2);
    }
    if ((param_1->Data).ArrayNum != 0) {
      pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_58,pwVar10);
    local_50 = plVar6;
    (**(code **)(*plVar6 + 0xd8))(plVar6,&local_48);
    pFVar3 = (this->CVarABDataArray).AllocatorInstance.Data;
    local_34 = 0x7f7fffff;
    local_38 = iVar11;
    if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar3 + (longlong)(this->CVarABDataArray).ArrayMax * 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = (this->CVarABDataArray).ArrayNum;
    piVar1 = &(this->CVarABDataArray).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,(ForAnyElementType *)this,piVar1);
    }
    lVar9 = (longlong)iVar11 * 0x38;
    (this->CVarABDataArray).ArrayNum = iVar11 + 1;
    pFVar3 = (this->CVarABDataArray).AllocatorInstance.Data;
    *(undefined8 *)(pFVar3 + lVar9) = 0;
    *(FScriptContainerElement **)(pFVar3 + lVar9) = local_68.Data;
    *(undefined4 *)(pFVar3 + lVar9 + 8) = (undefined4)local_60;
    *(undefined4 *)(pFVar3 + lVar9 + 0xc) = local_60._4_4_;
    *(FName *)(pFVar3 + lVar9 + 0x10) = local_58;
    *(undefined8 *)(pFVar3 + lVar9 + 0x20) = 0;
    *(longlong **)(pFVar3 + lVar9 + 0x18) = local_50;
    *(undefined8 *)(pFVar3 + lVar9 + 0x20) = local_48;
    *(undefined4 *)(pFVar3 + lVar9 + 0x28) = local_40;
    *(undefined4 *)(pFVar3 + lVar9 + 0x2c) = uStack_3c;
    *(int *)(pFVar3 + lVar9 + 0x30) = local_38;
    *(undefined4 *)(pFVar3 + lVar9 + 0x34) = local_34;
    return;
  }
  if ((byte)LogCsvProfiler._0_1_ < 5) {
    return;
  }
  pFVar7 = &`public:_void___cdecl_FCsvABTest::AddCVarABData(FString_const&___ptr64,int)___ptr64'::
            __l10::LOG_Static;
LAB_141924cb1:
  UE::Logging::Private::BasicLog<5>(pFVar7,(FLogCategoryBase *)&LogCsvProfiler);
  return;
}

// BeginFrameUpdate @ 141928ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCsvABTest::BeginFrameUpdate(FCsvABTest *this,int param_1,bool param_2)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  int iVar17;
  uint uVar18;
  wchar_t *pwVar19;
  FString local_b8;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [12];
  undefined1 local_64 [36];
  ulonglong uVar16;
  
  iVar17 = (this->CVarABDataArray).ArrayNum;
  if (iVar17 != 0) {
    if (param_2) {
      uVar12 = 0;
      uVar16 = uVar12;
      uVar13 = uVar12;
      if (0 < iVar17) {
        do {
          uVar14 = (uint)uVar13;
          uVar8 = 0;
          if ((int)uVar14 < iVar17) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar2 = (this->CVarABDataArray).AllocatorInstance.Data;
          uVar13 = (longlong)param_1 / (longlong)this->SwitchDuration;
          iVar17 = *(int *)(pFVar2 + uVar16 + 0x30);
          iVar6 = (int)uVar12;
          uVar10 = (int)((longlong)
                         ((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff) %
                        (longlong)iVar17) + iVar6;
          uVar13 = (longlong)(param_1 - this->StatFrameOffset) / (longlong)this->SwitchDuration;
          uVar18 = (int)((longlong)
                         ((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff) %
                        (longlong)iVar17) + iVar6;
          uVar8 = 0;
          if ((int)uVar10 < (this->CVarValues).ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar1 = *(float *)((this->CVarValues).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
          if (fVar1 != *(float *)(pFVar2 + uVar16 + 0x34)) {
            plVar3 = *(longlong **)(pFVar2 + uVar16 + 0x18);
            uVar11 = 0xe010000;
            if (this->bFastCVarSet == false) {
              uVar11 = 0xe000000;
            }
            ::FString::PrintfImpl(&local_b8,L"%f");
            lVar4 = *plVar3;
            FVar15.Data = (FScriptContainerElement *)L"";
            if (local_b8.Data.ArrayNum != 0) {
              FVar15.Data = local_b8.Data.AllocatorInstance.Data;
            }
            local_a4 = 0;
            local_a0 = 0;
            local_98 = 0;
            local_94 = 0xf000000;
            local_90 = 0x1000000;
            local_a8 = uVar11;
            uVar9 = (**(code **)(lVar4 + 0xa8))(plVar3,local_70,&local_a8);
            (**(code **)(lVar4 + 0xb0))(plVar3,FVar15.Data,uVar9);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            *(float *)(pFVar2 + uVar16 + 0x34) = fVar1;
          }
          uVar12 = (ulonglong)(uint)(iVar6 + iVar17);
          uVar8 = 0;
          if ((int)uVar18 < (this->CVarValues).ArrayNum) {
            uVar8 = ~uVar18 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FCsvProfiler::RecordCustomStat
                    ((FName *)(pFVar2 + uVar16 + 0x10),0,
                     *(float *)((this->CVarValues).AllocatorInstance.Data +
                               (longlong)(int)uVar18 * 4),Set);
          iVar17 = (this->CVarABDataArray).ArrayNum;
          uVar16 = uVar16 + 0x38;
          uVar13 = (ulonglong)(uVar14 + 1);
        } while ((int)(uVar14 + 1) < iVar17);
      }
    }
    else if (this->bPrevCapturing == true) {
      uVar13 = 0;
      uVar16 = uVar13;
      if (0 < iVar17) {
        do {
          uVar14 = (uint)uVar16;
          uVar10 = ~uVar14 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar14 < iVar17) {
            uVar8 = uVar10;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar3 = *(longlong **)((this->CVarABDataArray).AllocatorInstance.Data + uVar13 + 0x18);
          uVar8 = 0;
          if ((int)uVar14 < (this->CVarABDataArray).ArrayNum) {
            uVar8 = uVar10;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar2 = (this->CVarABDataArray).AllocatorInstance.Data;
          if (*(int *)(pFVar2 + uVar13 + 0x28) == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = *(wchar_t **)(pFVar2 + uVar13 + 0x20);
          }
          local_8c = 0xe000000;
          lVar4 = *plVar3;
          local_88 = 0;
          local_84 = 0;
          local_7c = 0;
          local_78 = 0xf000000;
          local_74 = 0x1000000;
          uVar9 = (**(code **)(lVar4 + 0xa8))(plVar3,local_64,&local_8c);
          (**(code **)(lVar4 + 0xb0))(plVar3,pwVar19,uVar9);
          if (4 < (byte)LogCsvProfiler._0_1_) {
            uVar8 = 0;
            if ((int)uVar14 < (this->CVarABDataArray).ArrayNum) {
              uVar8 = uVar10;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar8 = 0;
            if ((int)uVar14 < (this->CVarABDataArray).ArrayNum) {
              uVar8 = uVar10;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FCsvABTest::BeginFrameUpdate(int,bool)___ptr64'::__l24
                        ::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
          }
          iVar17 = (this->CVarABDataArray).ArrayNum;
          uVar13 = uVar13 + 0x38;
          uVar16 = (ulonglong)(uVar14 + 1);
        } while ((int)(uVar14 + 1) < iVar17);
      }
    }
    this->bPrevCapturing = param_2;
  }
  return;
}

// InitFromCommandline @ 14194ee80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCsvABTest::InitFromCommandline(FCsvABTest *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  FString local_38;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pwVar5 = FCommandLine::Get();
  bVar3 = FParse::Value(pwVar5,L"csvABTest=",&local_38,false,(wchar_t **)0x0);
  if (bVar3) {
    IterateABTestArguments(this,&local_38);
    if ((this->CVarABDataArray).ArrayNum < 1) {
      if (4 < (byte)LogCsvProfiler._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FCsvABTest::InitFromCommandline(void)___ptr64'::__l123::
                    LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
    }
    else {
      if (4 < (byte)LogCsvProfiler._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FCsvABTest::InitFromCommandline(void)___ptr64'::__l9::
                    LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
      iVar7 = (this->CVarABDataArray).ArrayNum;
      uVar11 = 0;
      uVar10 = 0;
      if (0 < iVar7) {
        lVar9 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar10 < iVar7) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->CVarABDataArray).AllocatorInstance.Data;
          if (4 < (byte)LogCsvProfiler._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&`public:_void___cdecl_FCsvABTest::InitFromCommandline(void)___ptr64'::__l29
                        ::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
          }
          iVar6 = *(int *)(pFVar1 + lVar9 + 0x30);
          if (0 < iVar6) {
            uVar8 = uVar11;
            do {
              if (4 < (byte)LogCsvProfiler._0_1_) {
                uVar4 = 0;
                if ((int)uVar8 < (this->CVarValues).ArrayNum) {
                  uVar4 = ~uVar8 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                UE::Logging::Private::BasicLog<5>
                          (&`public:_void___cdecl_FCsvABTest::InitFromCommandline(void)___ptr64'::
                            __l49::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
              }
              iVar6 = *(int *)(pFVar1 + lVar9 + 0x30);
              uVar8 = uVar8 + 1;
            } while ((int)(uVar8 - uVar11) < iVar6);
          }
          iVar7 = (this->CVarABDataArray).ArrayNum;
          uVar11 = uVar11 + iVar6;
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0x38;
        } while ((int)uVar10 < iVar7);
      }
      pwVar5 = FCommandLine::Get();
      FParse::Value(pwVar5,L"csvABTestStatFrameOffset=",&this->StatFrameOffset);
      pwVar5 = FCommandLine::Get();
      FParse::Value(pwVar5,L"csvABTestSwitchDuration=",&this->SwitchDuration);
      pwVar5 = FCommandLine::Get();
      bVar3 = FParse::Param(pwVar5,L"csvABTestFastCVarSet");
      this->bFastCVarSet = bVar3;
      if (4 < (byte)LogCsvProfiler._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FCsvABTest::InitFromCommandline(void)___ptr64'::__l67::
                    LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
      if (4 < (byte)LogCsvProfiler._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FCsvABTest::InitFromCommandline(void)___ptr64'::__l85::
                    LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
      if (4 < (byte)LogCsvProfiler._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FCsvABTest::InitFromCommandline(void)___ptr64'::__l103::
                    LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
      }
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// IterateABTestArguments @ 141953280

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FCsvABTest::IterateABTestArguments(FCsvABTest *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  double dVar12;
  float local_78;
  float local_74;
  float local_70 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  pFVar8 = pFVar3;
  while( true ) {
    if (pFVar8 == pFVar3 + (longlong)(param_1->Data).ArrayNum * 2) {
      return;
    }
    if (*(short *)pFVar8 == 0x3d) break;
    pFVar8 = pFVar8 + 2;
  }
  iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar3 >> 1);
  if (iVar7 == -1) {
    return;
  }
  iVar2 = (this->CVarValues).ArrayNum;
  ::FString::Mid(param_1,&local_38,0,iVar7);
  ::FString::RightChop(param_1,&local_68,iVar7 + 1);
LAB_141953311:
  do {
    for (FVar10.Data = local_68.Data.AllocatorInstance.Data;
        FVar9.Data = local_68.Data.AllocatorInstance.Data,
        FVar10.Data != local_68.Data.AllocatorInstance.Data + (longlong)local_68.Data.ArrayNum * 2;
        FVar10.Data = FVar10.Data + 2) {
      if (*(wchar_t *)FVar10.Data == L',') {
        lVar11 = (longlong)FVar10.Data - (longlong)local_68.Data.AllocatorInstance.Data >> 1;
        goto LAB_141953350;
      }
    }
    lVar11 = 0xffffffff;
    iVar7 = -1;
    for (; FVar9.Data != local_68.Data.AllocatorInstance.Data + (longlong)local_68.Data.ArrayNum * 2
        ; FVar9.Data = FVar9.Data + 2) {
LAB_141953350:
      iVar7 = (int)lVar11;
      if (*(wchar_t *)FVar9.Data == L';') {
        iVar6 = (int)((longlong)FVar9.Data - (longlong)local_68.Data.AllocatorInstance.Data >> 1);
        goto LAB_141953368;
      }
    }
    iVar6 = -1;
LAB_141953368:
    if (iVar7 == -1) {
      if (iVar6 == -1) {
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar10.Data = local_68.Data.AllocatorInstance.Data;
        }
        dVar12 = _wtof((wchar_t *)FVar10.Data);
        pFVar3 = (this->CVarValues).AllocatorInstance.Data;
        local_70[0] = (float)dVar12;
        if (((pFVar3 <= (FScriptContainerElement *)local_70) &&
            ((FScriptContainerElement *)local_70 <
             pFVar3 + (longlong)(this->CVarValues).ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (this->CVarValues).ArrayNum;
        piVar1 = &(this->CVarValues).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->CVarValues).AllocatorInstance,piVar1);
        }
        (this->CVarValues).ArrayNum = iVar7 + 1;
        *(float *)((this->CVarValues).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_70[0];
        AddCVarABData(this,&local_38,iVar2);
        goto LAB_141953699;
      }
LAB_141953494:
      if (iVar6 == 0) {
        AddCVarABData(this,&local_38,iVar2);
        ::FString::RightChop(&local_68,&local_28,1);
        IterateABTestArguments(this,&local_28);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
LAB_141953699:
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return;
      }
      ::FString::Mid(&local_68,&local_48,0,iVar6);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar10.Data = local_48.Data.AllocatorInstance.Data;
      }
      dVar12 = _wtof((wchar_t *)FVar10.Data);
      pFVar3 = (this->CVarValues).AllocatorInstance.Data;
      local_74 = (float)dVar12;
      if (((pFVar3 <= (FScriptContainerElement *)&local_74) &&
          ((FScriptContainerElement *)&local_74 < pFVar3 + (longlong)(this->CVarValues).ArrayMax * 4
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->CVarValues).ArrayNum;
      piVar1 = &(this->CVarValues).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->CVarValues).AllocatorInstance,piVar1);
      }
      (this->CVarValues).ArrayNum = iVar7 + 1;
      *(float *)((this->CVarValues).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_74;
      ::FString::RemoveAt(&local_68,0,iVar6,No);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      goto LAB_141953311;
    }
    if ((iVar6 != -1) && (iVar6 <= iVar7)) goto LAB_141953494;
    ::FString::Mid(&local_68,&local_58,0,iVar7);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar10.Data = local_58.Data.AllocatorInstance.Data;
    }
    dVar12 = _wtof((wchar_t *)FVar10.Data);
    pFVar3 = (this->CVarValues).AllocatorInstance.Data;
    local_78 = (float)dVar12;
    if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)(this->CVarValues).ArrayMax * 4))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->CVarValues).ArrayNum;
    piVar1 = &(this->CVarValues).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->CVarValues).AllocatorInstance,piVar1);
    }
    (this->CVarValues).ArrayNum = iVar6 + 1;
    *(float *)((this->CVarValues).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_78;
    ::FString::RemoveAt(&local_68,0,iVar7 + 1,No);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  } while( true );
}

