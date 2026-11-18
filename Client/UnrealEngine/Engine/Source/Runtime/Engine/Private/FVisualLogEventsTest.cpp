// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 14899bd80

EAutomationTestFlags __thiscall FVisualLogEventsTest::GetTestFlags(FVisualLogEventsTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 14899bd90

bool __thiscall FVisualLogEventsTest::IsStressTest(FVisualLogEventsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14899bda0

uint __thiscall FVisualLogEventsTest::GetRequiredDeviceNum(FVisualLogEventsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14899bdb0

FString * __thiscall
FVisualLogEventsTest::GetTestSourceFileName
          (FVisualLogEventsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14899bde0

int __thiscall FVisualLogEventsTest::GetTestSourceFileLine(FVisualLogEventsTest *this)

{
  return 0xe6;
}

// GetTests @ 14899bdf0

/* WARNING: Removing unreachable block (ram,0x00014899bedd) */
/* WARNING: Removing unreachable block (ram,0x00014899bfa8) */

void __thiscall
FVisualLogEventsTest::GetTests
          (FVisualLogEventsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.VisualLogger.Logging events");
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

// RunTest @ 14899c090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FVisualLogEventsTest::RunTest(FVisualLogEventsTest *this,FString *param_1)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  EAutomationTestFlags EVar7;
  int iVar8;
  UWorld *pUVar9;
  FVisualLogger *pFVar10;
  FVisualLogEntry *pFVar11;
  int *piVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  double dVar15;
  FName local_5d8;
  FName local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  FName local_4a8;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
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
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FTestDeviceContext<FVisualLoggerTestDevice> local_108;
  
  EVar7 = (**(code **)(*(longlong *)this + 8))();
  pUVar9 = ::`anonymous_namespace'::GetSimpleEngineAutomationTestWorld(EVar7);
  if (pUVar9 == (UWorld *)0x0) {
    pcVar3 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_160,L"Expected \'%s\' to be not null.");
    (*pcVar3)(this,&local_160,0);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    return false;
  }
  FTestDeviceContext<FVisualLoggerTestDevice>::FTestDeviceContext<FVisualLoggerTestDevice>
            (&local_108);
  pFVar10 = FVisualLogger::Get();
  if (pFVar10->bIsRecordingToFile) {
    FVisualLogger::SetIsRecordingToFile(pFVar10,false);
  }
  pwVar13 = L"";
  FVisualLogger::bIsRecording = 1;
  if (EventTest.Name.Data.ArrayNum != 0) {
    pwVar13 = (wchar_t *)EventTest.Name.Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,L"EventTest");
  ::FString::PrintfImpl(&local_4a0,L"%s (%s:%d)");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_4a0.Data.ArrayNum != 0) {
    FVar14.Data = local_4a0.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue
                    ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8 == 0);
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pwVar13 = L"";
    if (EventTest.FriendlyDesc.Data.ArrayNum != 0) {
      pwVar13 = (wchar_t *)EventTest.FriendlyDesc.Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,L"Simple event for vlog tests");
    ::FString::PrintfImpl(&local_490,L"%s (%s:%d)");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_490.Data.ArrayNum != 0) {
      FVar14.Data = local_490.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8 == 0);
    if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_490.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pwVar13 = L"";
      if (EventTest2.Name.Data.ArrayNum != 0) {
        pwVar13 = (wchar_t *)EventTest2.Name.Data.AllocatorInstance.Data;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,L"EventTest2");
      ::FString::PrintfImpl(&local_480,L"%s (%s:%d)");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_480.Data.ArrayNum != 0) {
        FVar14.Data = local_480.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8 == 0);
      if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_480.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pwVar13 = L"";
        if (EventTest2.FriendlyDesc.Data.ArrayNum != 0) {
          pwVar13 = (wchar_t *)EventTest2.FriendlyDesc.Data.AllocatorInstance.Data;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,L"Second simple event for vlog tests");
        ::FString::PrintfImpl(&local_470,L"%s (%s:%d)");
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_470.Data.ArrayNum != 0) {
          FVar14.Data = local_470.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8 == 0);
        if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_470.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pwVar13 = L"";
          if (EventTest3.Name.Data.ArrayNum != 0) {
            pwVar13 = (wchar_t *)EventTest3.Name.Data.AllocatorInstance.Data;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,L"EventTest3");
          ::FString::PrintfImpl(&local_460,L"%s (%s:%d)");
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_460.Data.ArrayNum != 0) {
            FVar14.Data = local_460.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8 == 0);
          if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_460.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pwVar13 = L"";
            if (EventTest3.FriendlyDesc.Data.ArrayNum != 0) {
              pwVar13 = (wchar_t *)EventTest3.FriendlyDesc.Data.AllocatorInstance.Data;
            }
            iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,L"Third simple event for vlog tests");
            ::FString::PrintfImpl(&local_450,L"%s (%s:%d)");
            FVar14.Data = (FScriptContainerElement *)L"";
            if (local_450.Data.ArrayNum != 0) {
              FVar14.Data = local_450.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8 == 0);
            if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_450.Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              pFVar10 = FVisualLogger::Get();
              dVar15 = FVisualLogger::GetTimeStampForObject(pFVar10,(UObject *)pUVar9);
              pFVar10 = FVisualLogger::Get();
              pFVar11 = FVisualLogger::GetEntryToWrite(pFVar10,(UObject *)pUVar9,dVar15,DontCreate);
              ::FString::PrintfImpl(&local_440,L"%s (%s:%d)");
              FVar14.Data = (FScriptContainerElement *)L"";
              if (local_440.Data.ArrayNum != 0) {
                FVar14.Data = local_440.Data.AllocatorInstance.Data;
              }
              bVar5 = FAutomationTestBase::TestTrue
                                ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                                 pFVar11 == (FVisualLogEntry *)0x0);
              if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_440.Data.AllocatorInstance.Data);
              }
              if (bVar5) {
                if (FVisualLogger::bIsRecording != 0) {
                  local_5c8 = 0;
                  local_5c0 = 0;
                  local_5b8 = 0;
                  local_5b0 = 0;
                  local_5a8 = 0;
                  local_5a0 = 0;
                  FVisualLogger::EventLog
                            ((UObject *)pUVar9,(FName)0x0,&EventTest,(FName)0x0,(FName)0x0,
                             (FName)0x0,(FName)0x0,(FName)0x0);
                }
                pFVar10 = FVisualLogger::Get();
                pFVar11 = FVisualLogger::GetEntryToWrite
                                    (pFVar10,(UObject *)pUVar9,dVar15,DontCreate);
                if (pFVar11 == (FVisualLogEntry *)0x0) {
                  pcVar3 = *(code **)(*(longlong *)this + 0x28);
                  ::FString::PrintfImpl(&local_150,L"Expected \'%s\' to be not null.");
                  (*pcVar3)(this,&local_150,0);
                  goto LAB_14899c5c6;
                }
                dVar1 = pFVar11->TimeStamp;
                ::FString::PrintfImpl(&local_430,L"%s (%s:%d)");
                FVar14.Data = (FScriptContainerElement *)L"";
                if (local_430.Data.ArrayNum != 0) {
                  FVar14.Data = local_430.Data.AllocatorInstance.Data;
                }
                bVar5 = FAutomationTestBase::TestTrue
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                                   dVar15 == dVar1);
                if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_430.Data.AllocatorInstance.Data);
                }
                if (bVar5) {
                  iVar8 = (pFVar11->Events).ArrayNum;
                  ::FString::PrintfImpl(&local_420,L"%s (%s:%d)");
                  FVar14.Data = (FScriptContainerElement *)L"";
                  if (local_420.Data.ArrayNum != 0) {
                    FVar14.Data = local_420.Data.AllocatorInstance.Data;
                  }
                  bVar5 = FAutomationTestBase::TestTrue
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8 == 1);
                  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_420.Data.AllocatorInstance.Data);
                  }
                  if (bVar5) {
                    if (((pFVar11->Events).ArrayNum < 1) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar5)) {
                      pcVar3 = (code *)swi(3);
                      uVar6 = (*pcVar3)();
                      return (bool)uVar6;
                    }
                    pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                    if (*(int *)(pFVar4 + 8) == 0) {
                      pwVar13 = L"";
                    }
                    else {
                      pwVar13 = *(wchar_t **)pFVar4;
                    }
                    iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,L"EventTest");
                    ::FString::PrintfImpl(&local_410,L"%s (%s:%d)");
                    FVar14.Data = (FScriptContainerElement *)L"";
                    if (local_410.Data.ArrayNum != 0) {
                      FVar14.Data = local_410.Data.AllocatorInstance.Data;
                    }
                    bVar5 = FAutomationTestBase::TestTrue
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar8 == 0
                                      );
                    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_410.Data.AllocatorInstance.Data);
                    }
                    if (bVar5) {
                      if (FVisualLogger::bIsRecording != 0) {
                        local_598 = 0;
                        FVisualLogger::EventLog((UObject *)pUVar9,(FName)0x0,&EventTest,&EventTest2)
                        ;
                      }
                      dVar1 = pFVar11->TimeStamp;
                      ::FString::PrintfImpl(&local_400,L"%s (%s:%d)");
                      FVar14.Data = (FScriptContainerElement *)L"";
                      if (local_400.Data.ArrayNum != 0) {
                        FVar14.Data = local_400.Data.AllocatorInstance.Data;
                      }
                      bVar5 = FAutomationTestBase::TestTrue
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                                         dVar15 == dVar1);
                      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_400.Data.AllocatorInstance.Data);
                      }
                      if (bVar5) {
                        iVar8 = (pFVar11->Events).ArrayNum;
                        ::FString::PrintfImpl(&local_3f0,L"%s (%s:%d)");
                        FVar14.Data = (FScriptContainerElement *)L"";
                        if (local_3f0.Data.ArrayNum != 0) {
                          FVar14.Data = local_3f0.Data.AllocatorInstance.Data;
                        }
                        bVar5 = FAutomationTestBase::TestTrue
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                                           iVar8 == 2);
                        if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
                        }
                        if (bVar5) {
                          if (((pFVar11->Events).ArrayNum < 1) &&
                             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar5)) {
                            pcVar3 = (code *)swi(3);
                            uVar6 = (*pcVar3)();
                            return (bool)uVar6;
                          }
                          iVar8 = *(int *)((pFVar11->Events).AllocatorInstance.Data + 0x78);
                          ::FString::PrintfImpl(&local_3e0,L"%s (%s:%d)");
                          FVar14.Data = (FScriptContainerElement *)L"";
                          if (local_3e0.Data.ArrayNum != 0) {
                            FVar14.Data = local_3e0.Data.AllocatorInstance.Data;
                          }
                          bVar5 = FAutomationTestBase::TestTrue
                                            ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                                             iVar8 == 2);
                          if (local_3e0.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
                          }
                          if (bVar5) {
                            if (((pFVar11->Events).ArrayNum < 1) &&
                               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                              pcVar3 = (code *)swi(3);
                              uVar6 = (*pcVar3)();
                              return (bool)uVar6;
                            }
                            pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                            if (*(int *)(pFVar4 + 8) == 0) {
                              pwVar13 = L"";
                            }
                            else {
                              pwVar13 = *(wchar_t **)pFVar4;
                            }
                            iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,L"EventTest");
                            ::FString::PrintfImpl(&local_3d0,L"%s (%s:%d)");
                            FVar14.Data = (FScriptContainerElement *)L"";
                            if (local_3d0.Data.ArrayNum != 0) {
                              FVar14.Data = local_3d0.Data.AllocatorInstance.Data;
                            }
                            bVar5 = FAutomationTestBase::TestTrue
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                                               iVar8 == 0);
                            if (local_3d0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
                            }
                            if (bVar5) {
                              if (((pFVar11->Events).ArrayNum < 2) &&
                                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                pcVar3 = (code *)swi(3);
                                uVar6 = (*pcVar3)();
                                return (bool)uVar6;
                              }
                              iVar8 = *(int *)((pFVar11->Events).AllocatorInstance.Data + 0x108);
                              ::FString::PrintfImpl(&local_3c0,L"%s (%s:%d)");
                              FVar14.Data = (FScriptContainerElement *)L"";
                              if (local_3c0.Data.ArrayNum != 0) {
                                FVar14.Data = local_3c0.Data.AllocatorInstance.Data;
                              }
                              bVar5 = FAutomationTestBase::TestTrue
                                                ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,
                                                 iVar8 == 1);
                              if (local_3c0.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                              }
                              if (bVar5) {
                                if (((pFVar11->Events).ArrayNum < 2) &&
                                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                  pcVar3 = (code *)swi(3);
                                  uVar6 = (*pcVar3)();
                                  return (bool)uVar6;
                                }
                                pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                                if (*(int *)(pFVar4 + 0x98) == 0) {
                                  pwVar13 = L"";
                                }
                                else {
                                  pwVar13 = *(wchar_t **)(pFVar4 + 0x90);
                                }
                                iVar8 = FGenericPlatformStricmp::Stricmp(pwVar13,L"EventTest2");
                                ::FString::PrintfImpl(&local_3b0,L"%s (%s:%d)");
                                FVar14.Data = (FScriptContainerElement *)L"";
                                if (local_3b0.Data.ArrayNum != 0) {
                                  FVar14.Data = local_3b0.Data.AllocatorInstance.Data;
                                }
                                bVar5 = FAutomationTestBase::TestTrue
                                                  ((FAutomationTestBase *)this,
                                                   (wchar_t *)FVar14.Data,iVar8 == 0);
                                if (local_3b0.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
                                }
                                if (bVar5) {
                                  pFVar10 = FVisualLogger::Get();
                                  dVar15 = FVisualLogger::GetTimeStampForObject
                                                     (pFVar10,(UObject *)pUVar9);
                                  if (FVisualLogger::bIsRecording != 0) {
                                    local_568 = 0;
                                    local_590 = 0;
                                    local_588 = 0;
                                    local_580 = 0;
                                    local_578 = 0;
                                    local_570 = 0;
                                    FVisualLogger::EventLog
                                              ((UObject *)pUVar9,(FName)0x0,&EventTest,(FName)0x0,
                                               (FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
                                    local_560 = 0;
                                    local_558 = 0;
                                    local_550 = 0;
                                    local_548 = 0;
                                    local_540 = 0;
                                    FVisualLogger::EventLog
                                              ((UObject *)pUVar9,(FName)0x0,&EventTest2,(FName)0x0,
                                               (FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
                                    local_538 = 0;
                                    local_530 = 0;
                                    local_528 = 0;
                                    local_520 = 0;
                                    local_518 = 0;
                                    FVisualLogger::EventLog
                                              ((UObject *)pUVar9,(FName)0x0,&EventTest3,(FName)0x0,
                                               (FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0);
                                  }
                                  dVar1 = pFVar11->TimeStamp;
                                  ::FString::PrintfImpl(&local_3a0,L"%s (%s:%d)");
                                  FVar14.Data = (FScriptContainerElement *)L"";
                                  if (local_3a0.Data.ArrayNum != 0) {
                                    FVar14.Data = local_3a0.Data.AllocatorInstance.Data;
                                  }
                                  bVar5 = FAutomationTestBase::TestTrue
                                                    ((FAutomationTestBase *)this,
                                                     (wchar_t *)FVar14.Data,dVar15 == dVar1);
                                  if (local_3a0.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
                                  }
                                  if (bVar5) {
                                    iVar8 = (pFVar11->Events).ArrayNum;
                                    ::FString::PrintfImpl(&local_390,L"%s (%s:%d)");
                                    FVar14.Data = (FScriptContainerElement *)L"";
                                    if (local_390.Data.ArrayNum != 0) {
                                      FVar14.Data = local_390.Data.AllocatorInstance.Data;
                                    }
                                    bVar5 = FAutomationTestBase::TestTrue
                                                      ((FAutomationTestBase *)this,
                                                       (wchar_t *)FVar14.Data,iVar8 == 3);
                                    if (local_390.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_390.Data.AllocatorInstance.Data);
                                    }
                                    if (bVar5) {
                                      if (((pFVar11->Events).ArrayNum < 1) &&
                                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                            ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                        pcVar3 = (code *)swi(3);
                                        uVar6 = (*pcVar3)();
                                        return (bool)uVar6;
                                      }
                                      iVar8 = *(int *)((pFVar11->Events).AllocatorInstance.Data +
                                                      0x78);
                                      ::FString::PrintfImpl(&local_380,L"%s (%s:%d)");
                                      FVar14.Data = (FScriptContainerElement *)L"";
                                      if (local_380.Data.ArrayNum != 0) {
                                        FVar14.Data = local_380.Data.AllocatorInstance.Data;
                                      }
                                      bVar5 = FAutomationTestBase::TestTrue
                                                        ((FAutomationTestBase *)this,
                                                         (wchar_t *)FVar14.Data,iVar8 == 3);
                                      if (local_380.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_380.Data.AllocatorInstance.Data);
                                      }
                                      if (bVar5) {
                                        if (((pFVar11->Events).ArrayNum < 1) &&
                                           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                              ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                          pcVar3 = (code *)swi(3);
                                          uVar6 = (*pcVar3)();
                                          return (bool)uVar6;
                                        }
                                        pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                                        if (*(int *)(pFVar4 + 8) == 0) {
                                          pwVar13 = L"";
                                        }
                                        else {
                                          pwVar13 = *(wchar_t **)pFVar4;
                                        }
                                        iVar8 = FGenericPlatformStricmp::Stricmp
                                                          (pwVar13,L"EventTest");
                                        ::FString::PrintfImpl(&local_370,L"%s (%s:%d)");
                                        FVar14.Data = (FScriptContainerElement *)L"";
                                        if (local_370.Data.ArrayNum != 0) {
                                          FVar14.Data = local_370.Data.AllocatorInstance.Data;
                                        }
                                        bVar5 = FAutomationTestBase::TestTrue
                                                          ((FAutomationTestBase *)this,
                                                           (wchar_t *)FVar14.Data,iVar8 == 0);
                                        if (local_370.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_370.Data.AllocatorInstance.Data);
                                        }
                                        if (bVar5) {
                                          if (((pFVar11->Events).ArrayNum < 2) &&
                                             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                ("(Index >= 0) & (Index < ArrayNum)"
                                                                 ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                            pcVar3 = (code *)swi(3);
                                            uVar6 = (*pcVar3)();
                                            return (bool)uVar6;
                                          }
                                          iVar8 = *(int *)((pFVar11->Events).AllocatorInstance.Data
                                                          + 0x108);
                                          ::FString::PrintfImpl(&local_360,L"%s (%s:%d)");
                                          FVar14.Data = (FScriptContainerElement *)L"";
                                          if (local_360.Data.ArrayNum != 0) {
                                            FVar14.Data = local_360.Data.AllocatorInstance.Data;
                                          }
                                          bVar5 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar14.Data,iVar8 == 2);
                                          if (local_360.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_360.Data.AllocatorInstance.Data);
                                          }
                                          if (bVar5) {
                                            if (((pFVar11->Events).ArrayNum < 2) &&
                                               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                  (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                              pcVar3 = (code *)swi(3);
                                              uVar6 = (*pcVar3)();
                                              return (bool)uVar6;
                                            }
                                            pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                                            if (*(int *)(pFVar4 + 0x98) == 0) {
                                              pwVar13 = L"";
                                            }
                                            else {
                                              pwVar13 = *(wchar_t **)(pFVar4 + 0x90);
                                            }
                                            iVar8 = FGenericPlatformStricmp::Stricmp
                                                              (pwVar13,L"EventTest2");
                                            ::FString::PrintfImpl(&local_350,L"%s (%s:%d)");
                                            FVar14.Data = (FScriptContainerElement *)L"";
                                            if (local_350.Data.ArrayNum != 0) {
                                              FVar14.Data = local_350.Data.AllocatorInstance.Data;
                                            }
                                            bVar5 = FAutomationTestBase::TestTrue
                                                              ((FAutomationTestBase *)this,
                                                               (wchar_t *)FVar14.Data,iVar8 == 0);
                                            if (local_350.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_350.Data.AllocatorInstance.Data);
                                            }
                                            if (bVar5) {
                                              if (((pFVar11->Events).ArrayNum < 3) &&
                                                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                pcVar3 = (code *)swi(3);
                                                uVar6 = (*pcVar3)();
                                                return (bool)uVar6;
                                              }
                                              iVar8 = *(int *)((pFVar11->Events).AllocatorInstance.
                                                               Data + 0x198);
                                              ::FString::PrintfImpl(&local_340,L"%s (%s:%d)");
                                              FVar14.Data = (FScriptContainerElement *)L"";
                                              if (local_340.Data.ArrayNum != 0) {
                                                FVar14.Data = local_340.Data.AllocatorInstance.Data;
                                              }
                                              bVar5 = FAutomationTestBase::TestTrue
                                                                ((FAutomationTestBase *)this,
                                                                 (wchar_t *)FVar14.Data,iVar8 == 1);
                                              if (local_340.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_340.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                              if (bVar5) {
                                                if (((pFVar11->Events).ArrayNum < 3) &&
                                                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                      (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                  pcVar3 = (code *)swi(3);
                                                  uVar6 = (*pcVar3)();
                                                  return (bool)uVar6;
                                                }
                                                pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                                                if (*(int *)(pFVar4 + 0x128) == 0) {
                                                  pwVar13 = L"";
                                                }
                                                else {
                                                  pwVar13 = *(wchar_t **)(pFVar4 + 0x120);
                                                }
                                                iVar8 = FGenericPlatformStricmp::Stricmp
                                                                  (pwVar13,L"EventTest3");
                                                ::FString::PrintfImpl(&local_330,L"%s (%s:%d)");
                                                FVar14.Data = (FScriptContainerElement *)L"";
                                                if (local_330.Data.ArrayNum != 0) {
                                                  FVar14.Data = local_330.Data.AllocatorInstance.
                                                                Data;
                                                }
                                                bVar5 = FAutomationTestBase::TestTrue
                                                                  ((FAutomationTestBase *)this,
                                                                   (wchar_t *)FVar14.Data,iVar8 == 0
                                                                  );
                                                if (local_330.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_330.Data.AllocatorInstance.
                                                                Data);
                                                }
                                                if (bVar5) {
                                                  if (((pFVar11->Events).ArrayNum < 1) &&
                                                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                        (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                                                  if (*(int *)(pFVar4 + 0x18) == 0) {
                                                    pwVar13 = L"";
                                                  }
                                                  else {
                                                    pwVar13 = *(wchar_t **)(pFVar4 + 0x10);
                                                  }
                                                  iVar8 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar13,
                                                  L"Simple event for vlog tests");
                                                  ::FString::PrintfImpl(&local_320,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_320.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_320.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 0);
                                                  if (local_320.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_320.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if (((pFVar11->Events).ArrayNum < 2) &&
                                                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                                                  if (*(int *)(pFVar4 + 0xa8) == 0) {
                                                    pwVar13 = L"";
                                                  }
                                                  else {
                                                    pwVar13 = *(wchar_t **)(pFVar4 + 0xa0);
                                                  }
                                                  iVar8 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar13,
                                                  L"Second simple event for vlog tests");
                                                  ::FString::PrintfImpl(&local_310,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_310.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_310.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 0);
                                                  if (local_310.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_310.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if (((pFVar11->Events).ArrayNum < 3) &&
                                                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                                                  if (*(int *)(pFVar4 + 0x138) == 0) {
                                                    pwVar13 = L"";
                                                  }
                                                  else {
                                                    pwVar13 = *(wchar_t **)(pFVar4 + 0x130);
                                                  }
                                                  iVar8 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar13,
                                                  L"Third simple event for vlog tests");
                                                  ::FString::PrintfImpl(&local_300,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_300.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_300.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 0);
                                                  if (local_300.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_300.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    dVar1 = dVar15 + __real_3fb999999999999a;
                                                    pFVar10 = FVisualLogger::Get();
                                                    pFVar11 = FVisualLogger::GetEntryToWrite
                                                                        (pFVar10,(UObject *)pUVar9,
                                                                         dVar1,Create);
                                                    pFVar10 = FVisualLogger::Get();
                                                    FVisualLogger::FlushThreadsEntries(pFVar10);
                                                    ::FString::PrintfImpl(&local_2f0,L"%s (%s:%d)");
                                                    FVar14.Data = (FScriptContainerElement *)L"";
                                                    if (local_2f0.Data.ArrayNum != 0) {
                                                      FVar14.Data = local_2f0.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar5 = FAutomationTestBase::TestTrue
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar14.Data,
                                                                       local_108.Device.LastEntry.
                                                                       TimeStamp == dVar15);
                                                    if (local_2f0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_2f0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar5) {
                                                      bVar5 = local_108.Device.LastEntry.Events.
                                                              ArrayNum == 3;
                                                      ::FString::PrintfImpl
                                                                (&local_2e0,L"%s (%s:%d)");
                                                      FVar14.Data = (FScriptContainerElement *)L"";
                                                      if (local_2e0.Data.ArrayNum != 0) {
                                                        FVar14.Data = local_2e0.Data.
                                                                      AllocatorInstance.Data;
                                                      }
                                                      bVar5 = FAutomationTestBase::TestTrue
                                                                        ((FAutomationTestBase *)this
                                                                         ,(wchar_t *)FVar14.Data,
                                                                         bVar5);
                                                      if (local_2e0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_2e0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar5) {
                                                        if ((local_108.Device.LastEntry.Events.
                                                             ArrayNum < 1) &&
                                                           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                              (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  iVar8 = *(int *)(local_108.Device.LastEntry.Events
                                                                   .AllocatorInstance.Data + 0x78);
                                                  ::FString::PrintfImpl(&local_2d0,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_2d0.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_2d0.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 3);
                                                  if (local_2d0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2d0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if ((local_108.Device.LastEntry.Events.ArrayNum
                                                         < 1) && (bVar5 = ::FDebug::
                                                                          CheckVerifyFailedImpl2
                                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  if (*(int *)(local_108.Device.LastEntry.Events.
                                                               AllocatorInstance.Data + 8) == 0) {
                                                    pwVar13 = L"";
                                                  }
                                                  else {
                                                    pwVar13 = *(wchar_t **)
                                                               local_108.Device.LastEntry.Events.
                                                               AllocatorInstance.Data;
                                                  }
                                                  iVar8 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar13,L"EventTest");
                                                  ::FString::PrintfImpl(&local_2c0,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_2c0.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_2c0.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 0);
                                                  if (local_2c0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2c0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if ((local_108.Device.LastEntry.Events.ArrayNum
                                                         < 2) && (bVar5 = ::FDebug::
                                                                          CheckVerifyFailedImpl2
                                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  iVar8 = *(int *)(local_108.Device.LastEntry.Events
                                                                   .AllocatorInstance.Data + 0x108);
                                                  ::FString::PrintfImpl(&local_2b0,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_2b0.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_2b0.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 2);
                                                  if (local_2b0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2b0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if ((local_108.Device.LastEntry.Events.ArrayNum
                                                         < 2) && (bVar5 = ::FDebug::
                                                                          CheckVerifyFailedImpl2
                                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  if (*(int *)(local_108.Device.LastEntry.Events.
                                                               AllocatorInstance.Data + 0x98) == 0)
                                                  {
                                                    pwVar13 = L"";
                                                  }
                                                  else {
                                                    pwVar13 = *(wchar_t **)
                                                               (local_108.Device.LastEntry.Events.
                                                                AllocatorInstance.Data + 0x90);
                                                  }
                                                  iVar8 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar13,L"EventTest2");
                                                  ::FString::PrintfImpl(&local_2a0,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_2a0.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_2a0.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 0);
                                                  if (local_2a0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2a0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if ((local_108.Device.LastEntry.Events.ArrayNum
                                                         < 3) && (bVar5 = ::FDebug::
                                                                          CheckVerifyFailedImpl2
                                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  iVar8 = *(int *)(local_108.Device.LastEntry.Events
                                                                   .AllocatorInstance.Data + 0x198);
                                                  ::FString::PrintfImpl(&local_290,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_290.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_290.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 1);
                                                  if (local_290.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_290.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if ((local_108.Device.LastEntry.Events.ArrayNum
                                                         < 3) && (bVar5 = ::FDebug::
                                                                          CheckVerifyFailedImpl2
                                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  if (*(int *)(local_108.Device.LastEntry.Events.
                                                               AllocatorInstance.Data + 0x128) == 0)
                                                  {
                                                    pwVar13 = L"";
                                                  }
                                                  else {
                                                    pwVar13 = *(wchar_t **)
                                                               (local_108.Device.LastEntry.Events.
                                                                AllocatorInstance.Data + 0x120);
                                                  }
                                                  iVar8 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar13,L"EventTest3");
                                                  ::FString::PrintfImpl(&local_280,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_280.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_280.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 0);
                                                  if (local_280.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_280.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if ((local_108.Device.LastEntry.Events.ArrayNum
                                                         < 1) && (bVar5 = ::FDebug::
                                                                          CheckVerifyFailedImpl2
                                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  if (*(int *)(local_108.Device.LastEntry.Events.
                                                               AllocatorInstance.Data + 0x18) == 0)
                                                  {
                                                    pwVar13 = L"";
                                                  }
                                                  else {
                                                    pwVar13 = *(wchar_t **)
                                                               (local_108.Device.LastEntry.Events.
                                                                AllocatorInstance.Data + 0x10);
                                                  }
                                                  iVar8 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar13,
                                                  L"Simple event for vlog tests");
                                                  ::FString::PrintfImpl(&local_270,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_270.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_270.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 0);
                                                  if (local_270.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_270.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if ((local_108.Device.LastEntry.Events.ArrayNum
                                                         < 2) && (bVar5 = ::FDebug::
                                                                          CheckVerifyFailedImpl2
                                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  if (*(int *)(local_108.Device.LastEntry.Events.
                                                               AllocatorInstance.Data + 0xa8) == 0)
                                                  {
                                                    pwVar13 = L"";
                                                  }
                                                  else {
                                                    pwVar13 = *(wchar_t **)
                                                               (local_108.Device.LastEntry.Events.
                                                                AllocatorInstance.Data + 0xa0);
                                                  }
                                                  iVar8 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar13,
                                                  L"Second simple event for vlog tests");
                                                  ::FString::PrintfImpl(&local_260,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_260.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_260.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 0);
                                                  if (local_260.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_260.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if ((local_108.Device.LastEntry.Events.ArrayNum
                                                         < 3) && (bVar5 = ::FDebug::
                                                                          CheckVerifyFailedImpl2
                                                                                    (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  if (*(int *)(local_108.Device.LastEntry.Events.
                                                               AllocatorInstance.Data + 0x138) == 0)
                                                  {
                                                    pwVar13 = L"";
                                                  }
                                                  else {
                                                    pwVar13 = *(wchar_t **)
                                                               (local_108.Device.LastEntry.Events.
                                                                AllocatorInstance.Data + 0x130);
                                                  }
                                                  iVar8 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar13,
                                                  L"Third simple event for vlog tests");
                                                  ::FString::PrintfImpl(&local_250,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_250.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_250.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 0);
                                                  if (local_250.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_250.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if (pFVar11 == (FVisualLogEntry *)0x0) {
                                                      pcVar3 = *(code **)(*(longlong *)this + 0x28);
                                                      ::FString::PrintfImpl
                                                                (&local_140,
                                                                 L"Expected \'%s\' to be not null.")
                                                      ;
                                                      (*pcVar3)(this,&local_140,0);
                                                      local_150.Data.AllocatorInstance.Data =
                                                           local_140.Data.AllocatorInstance.Data;
LAB_14899c5c6:
                                                      if (local_150.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_150.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    else {
                                                      bVar5 = pFVar11->TimeStamp - dVar1 <=
                                                              __real_3e45798ee0000000;
                                                      ::FString::PrintfImpl
                                                                (&local_240,L"%s (%s:%d)");
                                                      FVar14.Data = (FScriptContainerElement *)L"";
                                                      if (local_240.Data.ArrayNum != 0) {
                                                        FVar14.Data = local_240.Data.
                                                                      AllocatorInstance.Data;
                                                      }
                                                      bVar5 = FAutomationTestBase::TestTrue
                                                                        ((FAutomationTestBase *)this
                                                                         ,(wchar_t *)FVar14.Data,
                                                                         bVar5);
                                                      if (local_240.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_240.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar5) {
                                                        iVar8 = (pFVar11->Events).ArrayNum;
                                                        ::FString::PrintfImpl
                                                                  (&local_230,L"%s (%s:%d)");
                                                        FVar14.Data = (FScriptContainerElement *)L""
                                                        ;
                                                        if (local_230.Data.ArrayNum != 0) {
                                                          FVar14.Data = local_230.Data.
                                                                        AllocatorInstance.Data;
                                                        }
                                                        bVar5 = FAutomationTestBase::TestTrue
                                                                          ((FAutomationTestBase *)
                                                                           this,(wchar_t *)
                                                                                FVar14.Data,
                                                                           iVar8 == 0);
                                                        if (local_230.Data.AllocatorInstance.Data !=
                                                            (FScriptContainerElement *)0x0) {
                                                          FMemory::Free(local_230.Data.
                                                                        AllocatorInstance.Data);
                                                        }
                                                        if (bVar5) {
                                                          ::FName::FName(&local_5d8,L"ATLAS_C_0");
                                                          ::FName::FName(&local_4a8,L"ATLAS_C_1");
                                                          ::FName::FName(&local_5d0,L"ATLAS_C_2");
                                                          dVar15 = pUVar9->TimeSeconds +
                                                                   __real_3fc999999999999a;
                                                          pFVar10 = FVisualLogger::Get();
                                                          pFVar11 = FVisualLogger::GetEntryToWrite
                                                                              (pFVar10,(UObject *)
                                                                                       pUVar9,dVar15
                                                                               ,Create);
                                                          if (FVisualLogger::bIsRecording != 0) {
                                                            local_510 = 0;
                                                            local_508 = 0;
                                                            local_500 = 0;
                                                            local_4f8 = 0;
                                                            local_4f0 = 0;
                                                            FVisualLogger::EventLog
                                                                      ((UObject *)pUVar9,local_5d8,
                                                                       &EventTest,(FName)0x0,
                                                                       (FName)0x0,(FName)0x0,
                                                                       (FName)0x0,(FName)0x0);
                                                          }
                                                          if (pFVar11 == (FVisualLogEntry *)0x0) {
                                                            pcVar3 = *(code **)(*(longlong *)this +
                                                                               0x28);
                                                            ::FString::PrintfImpl
                                                                      (&local_130,
                                                                                                                                              
                                                  L"Expected \'%s\' to be not null.");
                                                  (*pcVar3)(this,&local_130,0);
                                                  local_150.Data.AllocatorInstance.Data =
                                                       local_130.Data.AllocatorInstance.Data;
                                                  goto LAB_14899c5c6;
                                                  }
                                                  dVar1 = pFVar11->TimeStamp;
                                                  ::FString::PrintfImpl(&local_220,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_220.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_220.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     dVar15 == dVar1);
                                                  if (local_220.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_220.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    iVar8 = (pFVar11->Events).ArrayNum;
                                                    ::FString::PrintfImpl(&local_210,L"%s (%s:%d)");
                                                    FVar14.Data = (FScriptContainerElement *)L"";
                                                    if (local_210.Data.ArrayNum != 0) {
                                                      FVar14.Data = local_210.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar5 = FAutomationTestBase::TestTrue
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar14.Data,
                                                                       iVar8 == 1);
                                                    if (local_210.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_210.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar5) {
                                                      if (((pFVar11->Events).ArrayNum < 1) &&
                                                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                            (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                                                  if (*(int *)(pFVar4 + 8) == 0) {
                                                    pwVar13 = L"";
                                                  }
                                                  else {
                                                    pwVar13 = *(wchar_t **)pFVar4;
                                                  }
                                                  iVar8 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar13,L"EventTest");
                                                  ::FString::PrintfImpl(&local_200,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_200.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_200.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 0);
                                                  if (local_200.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_200.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if (((pFVar11->Events).ArrayNum < 1) &&
                                                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                                                  iVar8 = *(int *)(pFVar4 + 0x30);
                                                  iVar2 = *(int *)(pFVar4 + 0x5c);
                                                  ::FString::PrintfImpl(&local_1f0,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_1f0.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_1f0.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 - iVar2 == 1);
                                                  if (local_1f0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_1f0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if (((pFVar11->Events).ArrayNum < 1) &&
                                                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  piVar12 = 
                                                  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                                  ::FindChecked((
                                                  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                                  *)((pFVar11->Events).AllocatorInstance.Data + 0x28
                                                    ),local_5d8);
                                                  iVar8 = *piVar12;
                                                  ::FString::PrintfImpl(&local_1e0,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_1e0.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_1e0.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 1);
                                                  if (local_1e0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_1e0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    dVar15 = pUVar9->TimeSeconds +
                                                             __real_3fd3333333333333;
                                                    pFVar10 = FVisualLogger::Get();
                                                    pFVar11 = FVisualLogger::GetEntryToWrite
                                                                        (pFVar10,(UObject *)pUVar9,
                                                                         dVar15,Create);
                                                    if (FVisualLogger::bIsRecording != 0) {
                                                      local_4e8 = 0;
                                                      local_4e0 = 0;
                                                      local_4d8 = 0;
                                                      FVisualLogger::EventLog
                                                                ((UObject *)pUVar9,local_5d8,
                                                                 &EventTest,local_4a8,local_5d0,
                                                                 (FName)0x0,(FName)0x0,(FName)0x0);
                                                      if (FVisualLogger::bIsRecording != 0) {
                                                        local_4d0 = 0;
                                                        local_4c8 = 0;
                                                        local_4c0 = 0;
                                                        local_4b8 = 0;
                                                        local_4b0 = 0;
                                                        FVisualLogger::EventLog
                                                                  ((UObject *)pUVar9,local_5d0,
                                                                   &EventTest,(FName)0x0,(FName)0x0,
                                                                   (FName)0x0,(FName)0x0,(FName)0x0)
                                                        ;
                                                      }
                                                    }
                                                    if (pFVar11 == (FVisualLogEntry *)0x0) {
                                                      pcVar3 = *(code **)(*(longlong *)this + 0x28);
                                                      ::FString::PrintfImpl
                                                                (&local_120,
                                                                 L"Expected \'%s\' to be not null.")
                                                      ;
                                                      (*pcVar3)(this,&local_120,0);
                                                      local_150.Data.AllocatorInstance.Data =
                                                           local_120.Data.AllocatorInstance.Data;
                                                      goto LAB_14899c5c6;
                                                    }
                                                    dVar1 = pFVar11->TimeStamp;
                                                    ::FString::PrintfImpl(&local_1d0,L"%s (%s:%d)");
                                                    FVar14.Data = (FScriptContainerElement *)L"";
                                                    if (local_1d0.Data.ArrayNum != 0) {
                                                      FVar14.Data = local_1d0.Data.AllocatorInstance
                                                                    .Data;
                                                    }
                                                    bVar5 = FAutomationTestBase::TestTrue
                                                                      ((FAutomationTestBase *)this,
                                                                       (wchar_t *)FVar14.Data,
                                                                       dVar15 == dVar1);
                                                    if (local_1d0.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_1d0.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                    if (bVar5) {
                                                      iVar8 = (pFVar11->Events).ArrayNum;
                                                      ::FString::PrintfImpl
                                                                (&local_1c0,L"%s (%s:%d)");
                                                      FVar14.Data = (FScriptContainerElement *)L"";
                                                      if (local_1c0.Data.ArrayNum != 0) {
                                                        FVar14.Data = local_1c0.Data.
                                                                      AllocatorInstance.Data;
                                                      }
                                                      bVar5 = FAutomationTestBase::TestTrue
                                                                        ((FAutomationTestBase *)this
                                                                         ,(wchar_t *)FVar14.Data,
                                                                         iVar8 == 1);
                                                      if (local_1c0.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_1c0.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                      if (bVar5) {
                                                        if (((pFVar11->Events).ArrayNum < 1) &&
                                                           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                              (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                                                  if (*(int *)(pFVar4 + 8) == 0) {
                                                    pwVar13 = L"";
                                                  }
                                                  else {
                                                    pwVar13 = *(wchar_t **)pFVar4;
                                                  }
                                                  iVar8 = FGenericPlatformStricmp::Stricmp
                                                                    (pwVar13,L"EventTest");
                                                  ::FString::PrintfImpl(&local_1b0,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_1b0.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_1b0.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 0);
                                                  if (local_1b0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_1b0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if (((pFVar11->Events).ArrayNum < 1) &&
                                                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  pFVar4 = (pFVar11->Events).AllocatorInstance.Data;
                                                  iVar8 = *(int *)(pFVar4 + 0x30);
                                                  iVar2 = *(int *)(pFVar4 + 0x5c);
                                                  ::FString::PrintfImpl(&local_1a0,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_1a0.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_1a0.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 - iVar2 == 3);
                                                  if (local_1a0.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_1a0.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if (((pFVar11->Events).ArrayNum < 1) &&
                                                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  piVar12 = 
                                                  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                                  ::FindChecked((
                                                  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                                  *)((pFVar11->Events).AllocatorInstance.Data + 0x28
                                                    ),local_5d8);
                                                  iVar8 = *piVar12;
                                                  ::FString::PrintfImpl(&local_190,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_190.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_190.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 1);
                                                  if (local_190.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_190.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if (((pFVar11->Events).ArrayNum < 1) &&
                                                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  piVar12 = 
                                                  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                                  ::FindChecked((
                                                  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                                  *)((pFVar11->Events).AllocatorInstance.Data + 0x28
                                                    ),local_4a8);
                                                  iVar8 = *piVar12;
                                                  ::FString::PrintfImpl(&local_180,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_180.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_180.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 1);
                                                  if (local_180.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_180.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    if (((pFVar11->Events).ArrayNum < 1) &&
                                                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                                                          (
                                                  "(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar5)) {
                                                    pcVar3 = (code *)swi(3);
                                                    uVar6 = (*pcVar3)();
                                                    return (bool)uVar6;
                                                  }
                                                  piVar12 = 
                                                  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                                  ::FindChecked((
                                                  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                                  *)((pFVar11->Events).AllocatorInstance.Data + 0x28
                                                    ),local_5d0);
                                                  iVar8 = *piVar12;
                                                  ::FString::PrintfImpl(&local_170,L"%s (%s:%d)");
                                                  FVar14.Data = (FScriptContainerElement *)L"";
                                                  if (local_170.Data.ArrayNum != 0) {
                                                    FVar14.Data = local_170.Data.AllocatorInstance.
                                                                  Data;
                                                  }
                                                  bVar5 = FAutomationTestBase::TestTrue
                                                                    ((FAutomationTestBase *)this,
                                                                     (wchar_t *)FVar14.Data,
                                                                     iVar8 == 2);
                                                  if (local_170.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_170.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  if (bVar5) {
                                                    bVar5 = true;
                                                    goto LAB_14899c5d2;
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
  }
  bVar5 = false;
LAB_14899c5d2:
  FTestDeviceContext<FVisualLoggerTestDevice>::~FTestDeviceContext<FVisualLoggerTestDevice>
            (&local_108);
  return bVar5;
}

// GetBeautifiedTestName @ 14899e670

FString * __thiscall
FVisualLogEventsTest::GetBeautifiedTestName
          (FVisualLogEventsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.VisualLogger.Logging events");
  return __return_storage_ptr__;
}

