// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 148999340

EAutomationTestFlags __thiscall FVisualLogTest::GetTestFlags(FVisualLogTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 148999350

bool __thiscall FVisualLogTest::IsStressTest(FVisualLogTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 148999360

uint __thiscall FVisualLogTest::GetRequiredDeviceNum(FVisualLogTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 148999370

FString * __thiscall
FVisualLogTest::GetTestSourceFileName(FVisualLogTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1489993a0

int __thiscall FVisualLogTest::GetTestSourceFileLine(FVisualLogTest *this)

{
  return 0x6b;
}

// GetTests @ 1489993b0

/* WARNING: Removing unreachable block (ram,0x00014899949d) */
/* WARNING: Removing unreachable block (ram,0x000148999568) */

void __thiscall
FVisualLogTest::GetTests
          (FVisualLogTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.VisualLogger.Logging simple text");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 148999590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FVisualLogTest::RunTest(FVisualLogTest *this,FString *param_1)

{
  double dVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  EAutomationTestFlags EVar6;
  int iVar7;
  UWorld *pUVar8;
  FVisualLogger *pFVar9;
  wchar_t *pwVar10;
  UWorld *pUVar11;
  FVisualLogEntry *pFVar12;
  ForAnyElementType FVar13;
  double dVar14;
  undefined1 auStack_2c8 [32];
  FScriptContainerElement *local_2a8;
  longlong local_2a0;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FTestDeviceContext<FVisualLoggerTestDevice> local_148;
  TBox<double> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  EVar6 = (**(code **)(*(longlong *)this + 8))();
  pUVar8 = ::`anonymous_namespace'::GetSimpleEngineAutomationTestWorld(EVar6);
  if (pUVar8 == (UWorld *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_178,L"Expected \'%s\' to be not null.");
    (*pcVar2)(this,&local_178,0);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    return false;
  }
  FTestDeviceContext<FVisualLoggerTestDevice>::FTestDeviceContext<FVisualLoggerTestDevice>
            (&local_148);
  pFVar9 = FVisualLogger::Get();
  if (FVisualLogger::bIsRecording != 0) {
    pwVar10 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar10,L"LogNavOctree");
    if (bVar4) {
      local_88.IsValid = '\0';
      pUVar11 = ::`anonymous_namespace'::GetWorldForVisualLogger((UObject *)0x0);
      FVisualLogger::NavigationDataDump
                ((UObject *)pUVar11,(FName *)&LogNavigation.field_0x4,Log,&local_88);
    }
  }
  if (pFVar9->bIsRecordingToFile) {
    FVisualLogger::SetIsRecordingToFile(pFVar9,false);
  }
  FVisualLogger::bIsRecording = 0;
  FVisualLogger::Get();
  bVar4 = FVisualLogger::bIsRecording != 0;
  local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x7b);
  ::FString::PrintfImpl(&local_288,L"%s (%s:%d)");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_288.Data.ArrayNum != 0) {
    FVar13.Data = local_288.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,bVar4);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)pUVar8,(FName *)&LogVisual.field_0x4,Log,
                 L"Simple text line to test vlog");
    }
    local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x7e);
    ::FString::PrintfImpl(&local_278,L"%s (%s:%d)");
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_278.Data.ArrayNum != 0) {
      FVar13.Data = local_278.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                       (UWorld *)local_148.Device.LastObject == (UWorld *)0x0);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    dVar1 = __real_bff0000000000000;
    if (bVar4) {
      bVar4 = local_148.Device.LastEntry.TimeStamp == __real_bff0000000000000;
      local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x7f);
      ::FString::PrintfImpl(&local_268,L"%s (%s:%d)");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_268.Data.ArrayNum != 0) {
        FVar13.Data = local_268.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,bVar4);
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pFVar9 = FVisualLogger::Get();
        if (pFVar9->bIsRecordingToFile) {
          FVisualLogger::SetIsRecordingToFile(pFVar9,false);
        }
        FVisualLogger::bIsRecording = 1;
        FVisualLogger::Get();
        bVar4 = FVisualLogger::bIsRecording != 0;
        local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x82);
        ::FString::PrintfImpl(&local_258,L"%s (%s:%d)");
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_258.Data.ArrayNum != 0) {
          FVar13.Data = local_258.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,bVar4);
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          ::FString::FString(&local_298,L"Simple text line to test if UE_VLOG_UELOG works fine");
          pFVar9 = FVisualLogger::Get();
          dVar14 = FVisualLogger::GetTimeStampForObject(pFVar9,(UObject *)pUVar8);
          if (FVisualLogger::bIsRecording != 0) {
            local_2a8 = (FScriptContainerElement *)L"";
            if (local_298.Data.ArrayNum != 0) {
              local_2a8 = local_298.Data.AllocatorInstance.Data;
            }
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)pUVar8,(FName *)&LogVisual.field_0x4,Log,L"%s");
          }
          if (4 < (byte)LogVisual._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVisual);
          }
          local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x88);
          ::FString::PrintfImpl(&local_248,L"%s (%s:%d)");
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_248.Data.ArrayNum != 0) {
            FVar13.Data = local_248.Data.AllocatorInstance.Data;
          }
          bVar4 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                             (UWorld *)local_148.Device.LastObject != pUVar8);
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            bVar4 = local_148.Device.LastEntry.TimeStamp == dVar1;
            local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x89);
            ::FString::PrintfImpl(&local_238,L"%s (%s:%d)");
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_238.Data.ArrayNum != 0) {
              FVar13.Data = local_238.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,bVar4);
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
            if (bVar4) {
              pFVar9 = FVisualLogger::Get();
              pFVar12 = FVisualLogger::GetEntryToWrite
                                  (pFVar9,(UObject *)pUVar8,pUVar8->TimeSeconds,DontCreate);
              if (pFVar12 == (FVisualLogEntry *)0x0) {
                pcVar2 = *(code **)(*(longlong *)this + 0x28);
                ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
                (*pcVar2)(this,&local_168,0);
LAB_148999a4d:
                if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_168.Data.AllocatorInstance.Data);
                }
              }
              else {
                dVar1 = pFVar12->TimeStamp;
                local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x8e);
                ::FString::PrintfImpl(&local_228,L"%s (%s:%d)");
                FVar13.Data = (FScriptContainerElement *)L"";
                if (local_228.Data.ArrayNum != 0) {
                  FVar13.Data = local_228.Data.AllocatorInstance.Data;
                }
                bVar4 = FAutomationTestBase::TestTrue
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                   dVar14 == dVar1);
                if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_228.Data.AllocatorInstance.Data);
                }
                if (bVar4) {
                  iVar7 = (pFVar12->LogLines).ArrayNum;
                  local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x8f);
                  ::FString::PrintfImpl(&local_218,L"%s (%s:%d)");
                  FVar13.Data = (FScriptContainerElement *)L"";
                  if (local_218.Data.ArrayNum != 0) {
                    FVar13.Data = local_218.Data.AllocatorInstance.Data;
                  }
                  bVar4 = FAutomationTestBase::TestTrue
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar7 == 1);
                  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_218.Data.AllocatorInstance.Data);
                  }
                  if (bVar4) {
                    iVar7 = (pFVar12->LogLines).ArrayNum;
                    if (iVar7 < 1) {
                      local_2a8 = (FScriptContainerElement *)0x0;
                      local_2a0 = (longlong)iVar7;
                      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar4) {
                        pcVar2 = (code *)swi(3);
                        uVar5 = (*pcVar2)();
                        return (bool)uVar5;
                      }
                    }
                    local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x90);
                    bVar4 = *(longlong *)((pFVar12->LogLines).AllocatorInstance.Data + 0x10) ==
                            LogVisual._4_8_;
                    ::FString::PrintfImpl(&local_208,L"%s (%s:%d)");
                    FVar13.Data = (FScriptContainerElement *)L"";
                    if (local_208.Data.ArrayNum != 0) {
                      FVar13.Data = local_208.Data.AllocatorInstance.Data;
                    }
                    bVar4 = FAutomationTestBase::TestTrue
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,bVar4);
                    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_208.Data.AllocatorInstance.Data);
                    }
                    if (bVar4) {
                      iVar7 = (pFVar12->LogLines).ArrayNum;
                      if (iVar7 < 1) {
                        local_2a8 = (FScriptContainerElement *)0x0;
                        local_2a0 = (longlong)iVar7;
                        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar4) {
                          pcVar2 = (code *)swi(3);
                          uVar5 = (*pcVar2)();
                          return (bool)uVar5;
                        }
                      }
                      pFVar3 = (pFVar12->LogLines).AllocatorInstance.Data;
                      iVar7 = *(int *)(pFVar3 + 8);
                      if (iVar7 == local_298.Data.ArrayNum) {
                        if (iVar7 < 2) {
                          bVar4 = true;
                        }
                        else {
                          iVar7 = FGenericPlatformStricmp::Stricmp
                                            (*(wchar_t **)pFVar3,
                                             (wchar_t *)local_298.Data.AllocatorInstance.Data);
                          bVar4 = iVar7 == 0;
                        }
                      }
                      else {
                        bVar4 = iVar7 + local_298.Data.ArrayNum == 1;
                      }
                      local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x91);
                      ::FString::PrintfImpl(&local_1f8,L"%s (%s:%d)");
                      FVar13.Data = (FScriptContainerElement *)L"";
                      if (local_1f8.Data.ArrayNum != 0) {
                        FVar13.Data = local_1f8.Data.AllocatorInstance.Data;
                      }
                      bVar4 = FAutomationTestBase::TestTrue
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,bVar4);
                      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
                      }
                      if (bVar4) {
                        dVar1 = dVar14 + __real_3fb999999999999a;
                        pFVar9 = FVisualLogger::Get();
                        pFVar12 = FVisualLogger::GetEntryToWrite
                                            (pFVar9,(UObject *)pUVar8,dVar1,Create);
                        pFVar9 = FVisualLogger::Get();
                        FVisualLogger::FlushThreadsEntries(pFVar9);
                        local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x98);
                        ::FString::PrintfImpl(&local_1e8,L"%s (%s:%d)");
                        FVar13.Data = (FScriptContainerElement *)L"";
                        if (local_1e8.Data.ArrayNum != 0) {
                          FVar13.Data = local_1e8.Data.AllocatorInstance.Data;
                        }
                        bVar4 = FAutomationTestBase::TestTrue
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                           local_148.Device.LastEntry.TimeStamp == dVar14);
                        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
                        }
                        if (bVar4) {
                          bVar4 = local_148.Device.LastEntry.LogLines.ArrayNum == 1;
                          local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x99);
                          ::FString::PrintfImpl(&local_1d8,L"%s (%s:%d)");
                          FVar13.Data = (FScriptContainerElement *)L"";
                          if (local_1d8.Data.ArrayNum != 0) {
                            FVar13.Data = local_1d8.Data.AllocatorInstance.Data;
                          }
                          bVar4 = FAutomationTestBase::TestTrue
                                            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                             bVar4);
                          if (local_1d8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                          }
                          if (bVar4) {
                            if (local_148.Device.LastEntry.LogLines.ArrayNum < 1) {
                              local_2a0 = (longlong)local_148.Device.LastEntry.LogLines.ArrayNum;
                              local_2a8 = (FScriptContainerElement *)0x0;
                              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                );
                              if (bVar4) {
                                pcVar2 = (code *)swi(3);
                                uVar5 = (*pcVar2)();
                                return (bool)uVar5;
                              }
                            }
                            local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x9a);
                            bVar4 = *(longlong *)
                                     (local_148.Device.LastEntry.LogLines.AllocatorInstance.Data +
                                     0x10) == LogVisual._4_8_;
                            ::FString::PrintfImpl(&local_1c8,L"%s (%s:%d)");
                            FVar13.Data = (FScriptContainerElement *)L"";
                            if (local_1c8.Data.ArrayNum != 0) {
                              FVar13.Data = local_1c8.Data.AllocatorInstance.Data;
                            }
                            bVar4 = FAutomationTestBase::TestTrue
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                               bVar4);
                            if (local_1c8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                            }
                            if (bVar4) {
                              if (local_148.Device.LastEntry.LogLines.ArrayNum < 1) {
                                local_2a0 = (longlong)local_148.Device.LastEntry.LogLines.ArrayNum;
                                local_2a8 = (FScriptContainerElement *)0x0;
                                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  );
                                if (bVar4) {
                                  pcVar2 = (code *)swi(3);
                                  uVar5 = (*pcVar2)();
                                  return (bool)uVar5;
                                }
                              }
                              iVar7 = *(int *)(local_148.Device.LastEntry.LogLines.AllocatorInstance
                                               .Data + 8);
                              if (iVar7 == local_298.Data.ArrayNum) {
                                if (iVar7 < 2) {
                                  bVar4 = true;
                                }
                                else {
                                  iVar7 = FGenericPlatformStricmp::Stricmp
                                                    (*(wchar_t **)
                                                      local_148.Device.LastEntry.LogLines.
                                                      AllocatorInstance.Data,
                                                     (wchar_t *)
                                                     local_298.Data.AllocatorInstance.Data);
                                  bVar4 = iVar7 == 0;
                                }
                              }
                              else {
                                bVar4 = iVar7 + local_298.Data.ArrayNum == 1;
                              }
                              local_2a8 = (FScriptContainerElement *)CONCAT44(local_2a8._4_4_,0x9b);
                              ::FString::PrintfImpl(&local_1b8,L"%s (%s:%d)");
                              FVar13.Data = (FScriptContainerElement *)L"";
                              if (local_1b8.Data.ArrayNum != 0) {
                                FVar13.Data = local_1b8.Data.AllocatorInstance.Data;
                              }
                              bVar4 = FAutomationTestBase::TestTrue
                                                ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,
                                                 bVar4);
                              if (local_1b8.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                              }
                              if (bVar4) {
                                if (pFVar12 == (FVisualLogEntry *)0x0) {
                                  pcVar2 = *(code **)(*(longlong *)this + 0x28);
                                  ::FString::PrintfImpl
                                            (&local_158,L"Expected \'%s\' to be not null.");
                                  (*pcVar2)(this,&local_158,0);
                                  local_168.Data.AllocatorInstance.Data =
                                       local_158.Data.AllocatorInstance.Data;
                                  goto LAB_148999a4d;
                                }
                                local_2a8 = (FScriptContainerElement *)
                                            CONCAT44(local_2a8._4_4_,0x9e);
                                bVar4 = pFVar12->TimeStamp - dVar1 <= __real_3e45798ee0000000;
                                ::FString::PrintfImpl(&local_1a8,L"%s (%s:%d)");
                                FVar13.Data = (FScriptContainerElement *)L"";
                                if (local_1a8.Data.ArrayNum != 0) {
                                  FVar13.Data = local_1a8.Data.AllocatorInstance.Data;
                                }
                                bVar4 = FAutomationTestBase::TestTrue
                                                  ((FAutomationTestBase *)this,
                                                   (wchar_t *)FVar13.Data,bVar4);
                                if (local_1a8.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                                }
                                if (bVar4) {
                                  iVar7 = (pFVar12->LogLines).ArrayNum;
                                  local_2a8 = (FScriptContainerElement *)
                                              CONCAT44(local_2a8._4_4_,0x9f);
                                  ::FString::PrintfImpl(&local_198,L"%s (%s:%d)");
                                  FVar13.Data = (FScriptContainerElement *)L"";
                                  if (local_198.Data.ArrayNum != 0) {
                                    FVar13.Data = local_198.Data.AllocatorInstance.Data;
                                  }
                                  bVar4 = FAutomationTestBase::TestTrue
                                                    ((FAutomationTestBase *)this,
                                                     (wchar_t *)FVar13.Data,iVar7 == 0);
                                  if (local_198.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_198.Data.AllocatorInstance.Data);
                                  }
                                  if (bVar4) {
                                    if (local_298.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_298.Data.AllocatorInstance.Data);
                                    }
                                    pFVar9 = FVisualLogger::Get();
                                    FVisualLogger::SetIsRecording(pFVar9,false);
                                    FVisualLogger::Get();
                                    bVar4 = FVisualLogger::bIsRecording != 0;
                                    local_2a8 = (FScriptContainerElement *)
                                                CONCAT44(local_2a8._4_4_,0xa4);
                                    ::FString::PrintfImpl(&local_188,L"%s (%s:%d)");
                                    FVar13.Data = (FScriptContainerElement *)L"";
                                    if (local_188.Data.ArrayNum != 0) {
                                      FVar13.Data = local_188.Data.AllocatorInstance.Data;
                                    }
                                    bVar4 = FAutomationTestBase::TestFalse
                                                      ((FAutomationTestBase *)this,
                                                       (wchar_t *)FVar13.Data,bVar4);
                                    if (local_188.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_188.Data.AllocatorInstance.Data);
                                    }
                                    if (bVar4) {
                                      bVar4 = true;
                                      goto LAB_148999a68;
                                    }
                                    goto LAB_148999a66;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
LAB_148999a66:
  bVar4 = false;
LAB_148999a68:
  FTestDeviceContext<FVisualLoggerTestDevice>::~FTestDeviceContext<FVisualLoggerTestDevice>
            (&local_148);
  return bVar4;
}

// GetBeautifiedTestName @ 14899a0f0

FString * __thiscall
FVisualLogTest::GetBeautifiedTestName(FVisualLogTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.VisualLogger.Logging simple text");
  return __return_storage_ptr__;
}

