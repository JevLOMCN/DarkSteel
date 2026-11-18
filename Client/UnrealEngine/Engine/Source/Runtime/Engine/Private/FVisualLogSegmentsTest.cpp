// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 14899a470

EAutomationTestFlags __thiscall FVisualLogSegmentsTest::GetTestFlags(FVisualLogSegmentsTest *this)

{
  return EngineFilter|ClientContext|EditorContext;
}

// IsStressTest @ 14899a480

bool __thiscall FVisualLogSegmentsTest::IsStressTest(FVisualLogSegmentsTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14899a490

uint __thiscall FVisualLogSegmentsTest::GetRequiredDeviceNum(FVisualLogSegmentsTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14899a4a0

FString * __thiscall
FVisualLogSegmentsTest::GetTestSourceFileName
          (FVisualLogSegmentsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14899a4d0

int __thiscall FVisualLogSegmentsTest::GetTestSourceFileLine(FVisualLogSegmentsTest *this)

{
  return 0xa9;
}

// GetTests @ 14899a4e0

/* WARNING: Removing unreachable block (ram,0x00014899a5cd) */
/* WARNING: Removing unreachable block (ram,0x00014899a698) */

void __thiscall
FVisualLogSegmentsTest::GetTests
          (FVisualLogSegmentsTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.VisualLogger.Logging segment shape");
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

// RunTest @ 14899a700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FVisualLogSegmentsTest::RunTest(FVisualLogSegmentsTest *this,FString *param_1)

{
  double dVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  double *pdVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 uVar9;
  EAutomationTestFlags EVar10;
  UWorld *pUVar11;
  FVisualLogger *pFVar12;
  wchar_t *pwVar13;
  UWorld *pUVar14;
  FVisualLogEntry *pFVar15;
  ForAnyElementType FVar16;
  double dVar17;
  undefined1 auStackY_358 [32];
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_300;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
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
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  FTestDeviceContext<FVisualLoggerTestDevice> local_148;
  TBox<double> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_358;
  EVar10 = (**(code **)(*(longlong *)this + 8))();
  pUVar11 = ::`anonymous_namespace'::GetSimpleEngineAutomationTestWorld(EVar10);
  if (pUVar11 == (UWorld *)0x0) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_1a8,L"Expected \'%s\' to be not null.");
    (*pcVar4)(this,&local_1a8,0);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    return false;
  }
  FTestDeviceContext<FVisualLoggerTestDevice>::FTestDeviceContext<FVisualLoggerTestDevice>
            (&local_148);
  pFVar12 = FVisualLogger::Get();
  if (FVisualLogger::bIsRecording != 0) {
    pwVar13 = FCommandLine::Get();
    bVar8 = FParse::Param(pwVar13,L"LogNavOctree");
    if (bVar8) {
      local_88.IsValid = '\0';
      pUVar14 = ::`anonymous_namespace'::GetWorldForVisualLogger((UObject *)0x0);
      FVisualLogger::NavigationDataDump
                ((UObject *)pUVar14,(FName *)&LogNavigation.field_0x4,Log,&local_88);
    }
  }
  if (pFVar12->bIsRecordingToFile) {
    FVisualLogger::SetIsRecordingToFile(pFVar12,false);
  }
  FVisualLogger::bIsRecording = 0;
  FVisualLogger::Get();
  bVar8 = FVisualLogger::bIsRecording != 0;
  ::FString::PrintfImpl(&local_2e8,L"%s (%s:%d)");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_2e8.Data.ArrayNum != 0) {
    FVar16.Data = local_2e8.Data.AllocatorInstance.Data;
  }
  bVar8 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,bVar8);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    if (FVisualLogger::bIsRecording != 0) {
      local_178._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_178._s_0.Y = _UNK_150689518;
      local_178._s_0.Z = 0.0;
      local_160._s_0.Z = 0.0;
      local_160._s_0.X = 0.0;
      local_160._s_0.Y = 0.0;
      FVisualLogger::SegmentLogfImpl
                ((UObject *)pUVar11,(FName *)&LogVisual.field_0x4,Log,
                 (TVector<double> *)&local_160._s_0,(TVector<double> *)&local_178._s_0,&FColor::Red,
                 0,L"Simple segment log to test vlog");
    }
    ::FString::PrintfImpl(&local_2d8,L"%s (%s:%d)");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_2d8.Data.ArrayNum != 0) {
      FVar16.Data = local_2d8.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestTrue
                      ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                       local_148.Device.LastObject == (UObject *)0x0);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    dVar17 = __real_bff0000000000000;
    if (bVar8) {
      bVar8 = local_148.Device.LastEntry.TimeStamp == __real_bff0000000000000;
      ::FString::PrintfImpl(&local_2c8,L"%s (%s:%d)");
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_2c8.Data.ArrayNum != 0) {
        FVar16.Data = local_2c8.Data.AllocatorInstance.Data;
      }
      bVar8 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,bVar8);
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pFVar12 = FVisualLogger::Get();
        if (pFVar12->bIsRecordingToFile) {
          FVisualLogger::SetIsRecordingToFile(pFVar12,false);
        }
        FVisualLogger::bIsRecording = 1;
        FVisualLogger::Get();
        bVar8 = FVisualLogger::bIsRecording != 0;
        ::FString::PrintfImpl(&local_2b8,L"%s (%s:%d)");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_2b8.Data.ArrayNum != 0) {
          FVar16.Data = local_2b8.Data.AllocatorInstance.Data;
        }
        bVar8 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,bVar8);
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          local_318._s_0.X = 0.0;
          local_318._s_0.Y = 0.0;
          local_300._s_0.X = ___xmm_00000000000000003ff0000000000000;
          local_300._s_0.Y = _UNK_150689518;
          local_318._s_0.Z = 0.0;
          local_300._s_0.Z = 0.0;
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::SegmentLogfImpl
                      ((UObject *)pUVar11,(FName *)&LogVisual.field_0x4,Log,
                       (TVector<double> *)&local_318._s_0,(TVector<double> *)&local_300._s_0,
                       &FColor::Red,0,L"Simple segment log to test vlog");
          }
          ::FString::PrintfImpl(&local_2a8,L"%s (%s:%d)");
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_2a8.Data.ArrayNum != 0) {
            FVar16.Data = local_2a8.Data.AllocatorInstance.Data;
          }
          bVar8 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                             local_148.Device.LastObject == (UObject *)0x0);
          if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
          }
          if (bVar8) {
            bVar8 = local_148.Device.LastEntry.TimeStamp == dVar17;
            ::FString::PrintfImpl(&local_298,L"%s (%s:%d)");
            FVar16.Data = (FScriptContainerElement *)L"";
            if (local_298.Data.ArrayNum != 0) {
              FVar16.Data = local_298.Data.AllocatorInstance.Data;
            }
            bVar8 = FAutomationTestBase::TestTrue
                              ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,bVar8);
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
            if (bVar8) {
              pFVar12 = FVisualLogger::Get();
              pFVar15 = FVisualLogger::GetEntryToWrite
                                  (pFVar12,(UObject *)pUVar11,pUVar11->TimeSeconds,DontCreate);
              pFVar12 = FVisualLogger::Get();
              dVar17 = FVisualLogger::GetTimeStampForObject(pFVar12,(UObject *)pUVar11);
              if (pFVar15 == (FVisualLogEntry *)0x0) {
                pcVar4 = *(code **)(*(longlong *)this + 0x28);
                ::FString::PrintfImpl(&local_198,L"Expected \'%s\' to be not null.");
                (*pcVar4)(this,&local_198,0);
LAB_14899ac09:
                if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_198.Data.AllocatorInstance.Data);
                }
              }
              else {
                dVar1 = pFVar15->TimeStamp;
                ::FString::PrintfImpl(&local_288,L"%s (%s:%d)");
                FVar16.Data = (FScriptContainerElement *)L"";
                if (local_288.Data.ArrayNum != 0) {
                  FVar16.Data = local_288.Data.AllocatorInstance.Data;
                }
                bVar8 = FAutomationTestBase::TestTrue
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                                   dVar17 == dVar1);
                if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_288.Data.AllocatorInstance.Data);
                }
                if (bVar8) {
                  iVar3 = (pFVar15->ElementsToDraw).ArrayNum;
                  ::FString::PrintfImpl(&local_278,L"%s (%s:%d)");
                  FVar16.Data = (FScriptContainerElement *)L"";
                  if (local_278.Data.ArrayNum != 0) {
                    FVar16.Data = local_278.Data.AllocatorInstance.Data;
                  }
                  bVar8 = FAutomationTestBase::TestTrue
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,iVar3 == 1);
                  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_278.Data.AllocatorInstance.Data);
                  }
                  if (bVar8) {
                    if (((pFVar15->ElementsToDraw).ArrayNum < 1) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar4 = (code *)swi(3);
                      uVar9 = (*pcVar4)();
                      return (bool)uVar9;
                    }
                    FVar2 = (pFVar15->ElementsToDraw).AllocatorInstance.Data[0xb4];
                    ::FString::PrintfImpl(&local_268,L"%s (%s:%d)");
                    FVar16.Data = (FScriptContainerElement *)L"";
                    if (local_268.Data.ArrayNum != 0) {
                      FVar16.Data = local_268.Data.AllocatorInstance.Data;
                    }
                    bVar8 = FAutomationTestBase::TestTrue
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                                       FVar2 == (FScriptContainerElement)0x4);
                    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_268.Data.AllocatorInstance.Data);
                    }
                    if (bVar8) {
                      if (((pFVar15->ElementsToDraw).ArrayNum < 1) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar4 = (code *)swi(3);
                        uVar9 = (*pcVar4)();
                        return (bool)uVar9;
                      }
                      iVar3 = *(int *)((pFVar15->ElementsToDraw).AllocatorInstance.Data + 0x28);
                      ::FString::PrintfImpl(&local_258,L"%s (%s:%d)");
                      FVar16.Data = (FScriptContainerElement *)L"";
                      if (local_258.Data.ArrayNum != 0) {
                        FVar16.Data = local_258.Data.AllocatorInstance.Data;
                      }
                      bVar8 = FAutomationTestBase::TestTrue
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                                         iVar3 == 2);
                      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_258.Data.AllocatorInstance.Data);
                      }
                      if (bVar8) {
                        if (((pFVar15->ElementsToDraw).ArrayNum < 1) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar4 = (code *)swi(3);
                          uVar9 = (*pcVar4)();
                          return (bool)uVar9;
                        }
                        pFVar5 = (pFVar15->ElementsToDraw).AllocatorInstance.Data;
                        if ((*(int *)(pFVar5 + 0x28) < 1) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar4 = (code *)swi(3);
                          uVar9 = (*pcVar4)();
                          return (bool)uVar9;
                        }
                        pdVar6 = *(double **)(pFVar5 + 0x20);
                        if (((local_318._s_0.X == *pdVar6) && (local_318._s_0.Y == pdVar6[1])) &&
                           (local_318._s_0.Z == pdVar6[2])) {
                          bVar8 = true;
                        }
                        else {
                          bVar8 = false;
                        }
                        ::FString::PrintfImpl(&local_248,L"%s (%s:%d)");
                        FVar16.Data = (FScriptContainerElement *)L"";
                        if (local_248.Data.ArrayNum != 0) {
                          FVar16.Data = local_248.Data.AllocatorInstance.Data;
                        }
                        bVar8 = FAutomationTestBase::TestTrue
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,bVar8)
                        ;
                        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_248.Data.AllocatorInstance.Data);
                        }
                        if (bVar8) {
                          if (((pFVar15->ElementsToDraw).ArrayNum < 1) &&
                             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar8)) {
                            pcVar4 = (code *)swi(3);
                            uVar9 = (*pcVar4)();
                            return (bool)uVar9;
                          }
                          pFVar5 = (pFVar15->ElementsToDraw).AllocatorInstance.Data;
                          if ((*(int *)(pFVar5 + 0x28) < 2) &&
                             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar8)) {
                            pcVar4 = (code *)swi(3);
                            uVar9 = (*pcVar4)();
                            return (bool)uVar9;
                          }
                          lVar7 = *(longlong *)(pFVar5 + 0x20);
                          if (((local_300._s_0.X == *(double *)(lVar7 + 0x18)) &&
                              (local_300._s_0.Y == *(double *)(lVar7 + 0x20))) &&
                             (local_300._s_0.Z == *(double *)(lVar7 + 0x28))) {
                            bVar8 = true;
                          }
                          else {
                            bVar8 = false;
                          }
                          ::FString::PrintfImpl(&local_238,L"%s (%s:%d)");
                          FVar16.Data = (FScriptContainerElement *)L"";
                          if (local_238.Data.ArrayNum != 0) {
                            FVar16.Data = local_238.Data.AllocatorInstance.Data;
                          }
                          bVar8 = FAutomationTestBase::TestTrue
                                            ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                                             bVar8);
                          if (local_238.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_238.Data.AllocatorInstance.Data);
                          }
                          if (bVar8) {
                            dVar1 = dVar17 + __real_3fb999999999999a;
                            pFVar12 = FVisualLogger::Get();
                            pFVar15 = FVisualLogger::GetEntryToWrite
                                                (pFVar12,(UObject *)pUVar11,dVar1,Create);
                            pFVar12 = FVisualLogger::Get();
                            FVisualLogger::FlushThreadsEntries(pFVar12);
                            ::FString::PrintfImpl(&local_228,L"%s (%s:%d)");
                            FVar16.Data = (FScriptContainerElement *)L"";
                            if (local_228.Data.ArrayNum != 0) {
                              FVar16.Data = local_228.Data.AllocatorInstance.Data;
                            }
                            bVar8 = FAutomationTestBase::TestTrue
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                                               local_148.Device.LastEntry.TimeStamp == dVar17);
                            if (local_228.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_228.Data.AllocatorInstance.Data);
                            }
                            if (bVar8) {
                              bVar8 = local_148.Device.LastEntry.ElementsToDraw.ArrayNum == 1;
                              ::FString::PrintfImpl(&local_218,L"%s (%s:%d)");
                              FVar16.Data = (FScriptContainerElement *)L"";
                              if (local_218.Data.ArrayNum != 0) {
                                FVar16.Data = local_218.Data.AllocatorInstance.Data;
                              }
                              bVar8 = FAutomationTestBase::TestTrue
                                                ((FAutomationTestBase *)this,(wchar_t *)FVar16.Data,
                                                 bVar8);
                              if (local_218.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_218.Data.AllocatorInstance.Data);
                              }
                              if (bVar8) {
                                if ((local_148.Device.LastEntry.ElementsToDraw.ArrayNum < 1) &&
                                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                  pcVar4 = (code *)swi(3);
                                  uVar9 = (*pcVar4)();
                                  return (bool)uVar9;
                                }
                                FVar2 = local_148.Device.LastEntry.ElementsToDraw.AllocatorInstance.
                                        Data[0xb4];
                                ::FString::PrintfImpl(&local_208,L"%s (%s:%d)");
                                FVar16.Data = (FScriptContainerElement *)L"";
                                if (local_208.Data.ArrayNum != 0) {
                                  FVar16.Data = local_208.Data.AllocatorInstance.Data;
                                }
                                bVar8 = FAutomationTestBase::TestTrue
                                                  ((FAutomationTestBase *)this,
                                                   (wchar_t *)FVar16.Data,
                                                   FVar2 == (FScriptContainerElement)0x4);
                                if (local_208.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_208.Data.AllocatorInstance.Data);
                                }
                                if (bVar8) {
                                  if ((local_148.Device.LastEntry.ElementsToDraw.ArrayNum < 1) &&
                                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                        ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                    pcVar4 = (code *)swi(3);
                                    uVar9 = (*pcVar4)();
                                    return (bool)uVar9;
                                  }
                                  iVar3 = *(int *)(local_148.Device.LastEntry.ElementsToDraw.
                                                   AllocatorInstance.Data + 0x28);
                                  ::FString::PrintfImpl(&local_1f8,L"%s (%s:%d)");
                                  FVar16.Data = (FScriptContainerElement *)L"";
                                  if (local_1f8.Data.ArrayNum != 0) {
                                    FVar16.Data = local_1f8.Data.AllocatorInstance.Data;
                                  }
                                  bVar8 = FAutomationTestBase::TestTrue
                                                    ((FAutomationTestBase *)this,
                                                     (wchar_t *)FVar16.Data,iVar3 == 2);
                                  if (local_1f8.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
                                  }
                                  if (bVar8) {
                                    if ((local_148.Device.LastEntry.ElementsToDraw.ArrayNum < 1) &&
                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                          ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                      pcVar4 = (code *)swi(3);
                                      uVar9 = (*pcVar4)();
                                      return (bool)uVar9;
                                    }
                                    FVar16.Data = local_148.Device.LastEntry.ElementsToDraw.
                                                  AllocatorInstance.Data;
                                    if ((*(int *)(local_148.Device.LastEntry.ElementsToDraw.
                                                  AllocatorInstance.Data + 0x28) < 1) &&
                                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                          ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                      pcVar4 = (code *)swi(3);
                                      uVar9 = (*pcVar4)();
                                      return (bool)uVar9;
                                    }
                                    pdVar6 = *(double **)(FVar16.Data + 0x20);
                                    if (((local_318._s_0.X == *pdVar6) &&
                                        (local_318._s_0.Y == pdVar6[1])) &&
                                       (local_318._s_0.Z == pdVar6[2])) {
                                      bVar8 = true;
                                    }
                                    else {
                                      bVar8 = false;
                                    }
                                    ::FString::PrintfImpl(&local_1e8,L"%s (%s:%d)");
                                    FVar16.Data = (FScriptContainerElement *)L"";
                                    if (local_1e8.Data.ArrayNum != 0) {
                                      FVar16.Data = local_1e8.Data.AllocatorInstance.Data;
                                    }
                                    bVar8 = FAutomationTestBase::TestTrue
                                                      ((FAutomationTestBase *)this,
                                                       (wchar_t *)FVar16.Data,bVar8);
                                    if (local_1e8.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
                                    }
                                    if (bVar8) {
                                      if ((local_148.Device.LastEntry.ElementsToDraw.ArrayNum < 1)
                                         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                        pcVar4 = (code *)swi(3);
                                        uVar9 = (*pcVar4)();
                                        return (bool)uVar9;
                                      }
                                      if ((*(int *)(local_148.Device.LastEntry.ElementsToDraw.
                                                    AllocatorInstance.Data + 0x28) < 2) &&
                                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                            ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar8)) {
                                        pcVar4 = (code *)swi(3);
                                        uVar9 = (*pcVar4)();
                                        return (bool)uVar9;
                                      }
                                      lVar7 = *(longlong *)
                                               (local_148.Device.LastEntry.ElementsToDraw.
                                                AllocatorInstance.Data + 0x20);
                                      if (((local_300._s_0.X == *(double *)(lVar7 + 0x18)) &&
                                          (local_300._s_0.Y == *(double *)(lVar7 + 0x20))) &&
                                         (local_300._s_0.Z == *(double *)(lVar7 + 0x28))) {
                                        bVar8 = true;
                                      }
                                      else {
                                        bVar8 = false;
                                      }
                                      ::FString::PrintfImpl(&local_1d8,L"%s (%s:%d)");
                                      FVar16.Data = (FScriptContainerElement *)L"";
                                      if (local_1d8.Data.ArrayNum != 0) {
                                        FVar16.Data = local_1d8.Data.AllocatorInstance.Data;
                                      }
                                      bVar8 = FAutomationTestBase::TestTrue
                                                        ((FAutomationTestBase *)this,
                                                         (wchar_t *)FVar16.Data,bVar8);
                                      if (local_1d8.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                                      }
                                      if (bVar8) {
                                        if (pFVar15 == (FVisualLogEntry *)0x0) {
                                          pcVar4 = *(code **)(*(longlong *)this + 0x28);
                                          ::FString::PrintfImpl
                                                    (&local_188,L"Expected \'%s\' to be not null.");
                                          (*pcVar4)(this,&local_188,0);
                                          local_198.Data.AllocatorInstance.Data =
                                               local_188.Data.AllocatorInstance.Data;
                                          goto LAB_14899ac09;
                                        }
                                        bVar8 = pFVar15->TimeStamp - dVar1 <=
                                                __real_3e45798ee0000000;
                                        ::FString::PrintfImpl(&local_1c8,L"%s (%s:%d)");
                                        FVar16.Data = (FScriptContainerElement *)L"";
                                        if (local_1c8.Data.ArrayNum != 0) {
                                          FVar16.Data = local_1c8.Data.AllocatorInstance.Data;
                                        }
                                        bVar8 = FAutomationTestBase::TestTrue
                                                          ((FAutomationTestBase *)this,
                                                           (wchar_t *)FVar16.Data,bVar8);
                                        if (local_1c8.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                                        }
                                        if (bVar8) {
                                          iVar3 = (pFVar15->ElementsToDraw).ArrayNum;
                                          ::FString::PrintfImpl(&local_1b8,L"%s (%s:%d)");
                                          FVar16.Data = (FScriptContainerElement *)L"";
                                          if (local_1b8.Data.ArrayNum != 0) {
                                            FVar16.Data = local_1b8.Data.AllocatorInstance.Data;
                                          }
                                          bVar8 = FAutomationTestBase::TestTrue
                                                            ((FAutomationTestBase *)this,
                                                             (wchar_t *)FVar16.Data,iVar3 == 0);
                                          if (local_1b8.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                                          }
                                          if (bVar8) {
                                            bVar8 = true;
                                            goto LAB_14899ac15;
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
  bVar8 = false;
LAB_14899ac15:
  FTestDeviceContext<FVisualLoggerTestDevice>::~FTestDeviceContext<FVisualLoggerTestDevice>
            (&local_148);
  return bVar8;
}

// GetBeautifiedTestName @ 14899b5f0

FString * __thiscall
FVisualLogSegmentsTest::GetBeautifiedTestName
          (FVisualLogSegmentsTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.VisualLogger.Logging segment shape");
  return __return_storage_ptr__;
}

