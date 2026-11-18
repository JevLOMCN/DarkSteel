// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 1487ea7f0

EAutomationTestFlags __thiscall FAutomationEqualEXPR::GetTestFlags(FAutomationEqualEXPR *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1487ea800

bool __thiscall FAutomationEqualEXPR::IsStressTest(FAutomationEqualEXPR *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1487ea810

uint __thiscall FAutomationEqualEXPR::GetRequiredDeviceNum(FAutomationEqualEXPR *this)

{
  return 1;
}

// GetTestSourceFileName @ 1487ea820

FString * __thiscall
FAutomationEqualEXPR::GetTestSourceFileName
          (FAutomationEqualEXPR *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\EngineAutomationTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1487ea850

int __thiscall FAutomationEqualEXPR::GetTestSourceFileLine(FAutomationEqualEXPR *this)

{
  return 0x577;
}

// GetTests @ 1487ea860

/* WARNING: Removing unreachable block (ram,0x0001487ea94d) */
/* WARNING: Removing unreachable block (ram,0x0001487eaa18) */

void __thiscall
FAutomationEqualEXPR::GetTests
          (FAutomationEqualEXPR *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"TestFramework.Validation.UTestEqual");
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

// RunTest @ 1487eaa40

bool __thiscall FAutomationEqualEXPR::RunTest(FAutomationEqualEXPR *this,FString *param_1)

{
  float fVar1;
  bool bVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28 [2];
  
  fVar1 = __real_38d1b717;
  bVar2 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"ActualFloatValue",0.0,0.0,__real_38d1b717);
  if (bVar2) {
    pwVar5 = L"";
    pwVar3 = L"";
    if (FAutomationUTestMacrosExpr::CustomDescriptionString.Data.ArrayNum != 0) {
      pwVar3 = (wchar_t *)FAutomationUTestMacrosExpr::CustomDescriptionString.Data.AllocatorInstance
      ;
    }
    bVar2 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar3,0.0,0.0,fVar1);
    if (bVar2) {
      bVar2 = FAutomationTestBase::TestNearlyEqual
                        ((FAutomationTestBase *)this,L"ActualFloatValue",0.0,fVar1,fVar1);
      if (bVar2) {
        pwVar3 = L"";
        if (FAutomationUTestMacrosExpr::CustomDescriptionString.Data.ArrayNum != 0) {
          pwVar3 = (wchar_t *)
                   FAutomationUTestMacrosExpr::CustomDescriptionString.Data.AllocatorInstance;
        }
        bVar2 = FAutomationTestBase::TestNearlyEqual
                          ((FAutomationTestBase *)this,pwVar3,0.0,fVar1,fVar1);
        if (bVar2) {
          bVar2 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,L"ActualFloatValue",0.0,fVar1,fVar1);
          if (bVar2) {
            pwVar3 = L"";
            if (FAutomationUTestMacrosExpr::CustomDescriptionString.Data.ArrayNum != 0) {
              pwVar3 = (wchar_t *)
                       FAutomationUTestMacrosExpr::CustomDescriptionString.Data.AllocatorInstance;
            }
            bVar2 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,pwVar3,0.0,fVar1,fVar1);
            if (bVar2) {
              ::FString::PrintfImpl(local_28,L"%s != %s");
              FVar4.Data = (FScriptContainerElement *)L"";
              if (local_28[0].Data.ArrayNum != 0) {
                FVar4.Data = local_28[0].Data.AllocatorInstance.Data;
              }
              bVar2 = FAutomationTestBase::TestNotEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar4.Data,0.0,
                                 __real_3f800000,fVar1);
              if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
              }
              if (bVar2) {
                pwVar3 = L"";
                if (FAutomationUTestMacrosExpr::CustomDescriptionString.Data.ArrayNum != 0) {
                  pwVar3 = (wchar_t *)
                           FAutomationUTestMacrosExpr::CustomDescriptionString.Data.
                           AllocatorInstance.Data;
                }
                bVar2 = FAutomationTestBase::TestNotEqual
                                  ((FAutomationTestBase *)this,pwVar3,0.0,__real_3f800000,fVar1);
                if (bVar2) {
                  pwVar6 = L"";
                  pwVar3 = L"";
                  if (FAutomationUTestMacrosExpr::ExpectedFStringValueLowerCase.Data.ArrayNum != 0)
                  {
                    pwVar6 = (wchar_t *)
                             FAutomationUTestMacrosExpr::ExpectedFStringValueLowerCase.Data.
                             AllocatorInstance;
                  }
                  if (FAutomationUTestMacrosExpr::ActualFStringValue.Data.ArrayNum != 0) {
                    pwVar3 = (wchar_t *)
                             FAutomationUTestMacrosExpr::ActualFStringValue.Data.AllocatorInstance;
                  }
                  bVar2 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,L"*ActualFStringValue",pwVar3,
                                     pwVar6);
                  if (bVar2) {
                    pwVar7 = L"";
                    pwVar6 = L"";
                    pwVar3 = L"";
                    if (FAutomationUTestMacrosExpr::ExpectedFStringValueLowerCase.Data.ArrayNum != 0
                       ) {
                      pwVar7 = (wchar_t *)
                               FAutomationUTestMacrosExpr::ExpectedFStringValueLowerCase.Data.
                               AllocatorInstance;
                    }
                    if (FAutomationUTestMacrosExpr::ActualFStringValue.Data.ArrayNum != 0) {
                      pwVar6 = (wchar_t *)
                               FAutomationUTestMacrosExpr::ActualFStringValue.Data.AllocatorInstance
                      ;
                    }
                    if (FAutomationUTestMacrosExpr::CustomDescriptionString.Data.ArrayNum != 0) {
                      pwVar3 = (wchar_t *)
                               FAutomationUTestMacrosExpr::CustomDescriptionString.Data.
                               AllocatorInstance;
                    }
                    bVar2 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,pwVar3,pwVar6,pwVar7);
                    if (bVar2) {
                      pwVar6 = L"";
                      pwVar3 = L"";
                      if (FAutomationUTestMacrosExpr::UnexpectedFStringValueLowerCase.Data.ArrayNum
                          != 0) {
                        pwVar6 = (wchar_t *)
                                 FAutomationUTestMacrosExpr::UnexpectedFStringValueLowerCase.Data.
                                 AllocatorInstance;
                      }
                      if (FAutomationUTestMacrosExpr::ActualFStringValue.Data.ArrayNum != 0) {
                        pwVar3 = (wchar_t *)
                                 FAutomationUTestMacrosExpr::ActualFStringValue.Data.
                                 AllocatorInstance;
                      }
                      bVar2 = FAutomationTestBase::TestNotEqual
                                        ((FAutomationTestBase *)this,L"*ActualFStringValue",pwVar3,
                                         pwVar6);
                      if (bVar2) {
                        pwVar7 = L"";
                        pwVar6 = L"";
                        pwVar3 = L"";
                        if (FAutomationUTestMacrosExpr::UnexpectedFStringValueLowerCase.Data.
                            ArrayNum != 0) {
                          pwVar7 = (wchar_t *)
                                   FAutomationUTestMacrosExpr::UnexpectedFStringValueLowerCase.Data.
                                   AllocatorInstance;
                        }
                        if (FAutomationUTestMacrosExpr::ActualFStringValue.Data.ArrayNum != 0) {
                          pwVar6 = (wchar_t *)
                                   FAutomationUTestMacrosExpr::ActualFStringValue.Data.
                                   AllocatorInstance;
                        }
                        if (FAutomationUTestMacrosExpr::CustomDescriptionString.Data.ArrayNum != 0)
                        {
                          pwVar3 = (wchar_t *)
                                   FAutomationUTestMacrosExpr::CustomDescriptionString.Data.
                                   AllocatorInstance;
                        }
                        bVar2 = FAutomationTestBase::TestNotEqual
                                          ((FAutomationTestBase *)this,pwVar3,pwVar6,pwVar7);
                        if (bVar2) {
                          pwVar6 = L"";
                          pwVar3 = L"";
                          if (FAutomationUTestMacrosExpr::ActualFStringValueCopy.Data.ArrayNum != 0)
                          {
                            pwVar6 = (wchar_t *)
                                     FAutomationUTestMacrosExpr::ActualFStringValueCopy.Data.
                                     AllocatorInstance;
                          }
                          if (FAutomationUTestMacrosExpr::ActualFStringValue.Data.ArrayNum != 0) {
                            pwVar3 = (wchar_t *)
                                     FAutomationUTestMacrosExpr::ActualFStringValue.Data.
                                     AllocatorInstance;
                          }
                          bVar2 = FAutomationTestBase::TestEqualSensitive
                                            ((FAutomationTestBase *)this,L"*ActualFStringValue",
                                             pwVar3,pwVar6);
                          if (bVar2) {
                            pwVar7 = L"";
                            pwVar6 = L"";
                            pwVar3 = L"";
                            if (FAutomationUTestMacrosExpr::ActualFStringValueCopy.Data.ArrayNum !=
                                0) {
                              pwVar7 = (wchar_t *)
                                       FAutomationUTestMacrosExpr::ActualFStringValueCopy.Data.
                                       AllocatorInstance;
                            }
                            if (FAutomationUTestMacrosExpr::ActualFStringValue.Data.ArrayNum != 0) {
                              pwVar6 = (wchar_t *)
                                       FAutomationUTestMacrosExpr::ActualFStringValue.Data.
                                       AllocatorInstance;
                            }
                            if (FAutomationUTestMacrosExpr::CustomDescriptionString.Data.ArrayNum !=
                                0) {
                              pwVar3 = (wchar_t *)
                                       FAutomationUTestMacrosExpr::CustomDescriptionString.Data.
                                       AllocatorInstance;
                            }
                            bVar2 = FAutomationTestBase::TestEqualSensitive
                                              ((FAutomationTestBase *)this,pwVar3,pwVar6,pwVar7);
                            if (bVar2) {
                              pwVar6 = L"";
                              pwVar3 = L"";
                              if (FAutomationUTestMacrosExpr::ExpectedFStringValueLowerCase.Data.
                                  ArrayNum != 0) {
                                pwVar6 = (wchar_t *)
                                         FAutomationUTestMacrosExpr::ExpectedFStringValueLowerCase.
                                         Data.AllocatorInstance;
                              }
                              if (FAutomationUTestMacrosExpr::ActualFStringValue.Data.ArrayNum != 0)
                              {
                                pwVar3 = (wchar_t *)
                                         FAutomationUTestMacrosExpr::ActualFStringValue.Data.
                                         AllocatorInstance;
                              }
                              bVar2 = FAutomationTestBase::TestNotEqualSensitive
                                                ((FAutomationTestBase *)this,L"*ActualFStringValue",
                                                 pwVar3,pwVar6);
                              if (bVar2) {
                                pwVar6 = L"";
                                pwVar3 = L"";
                                if (FAutomationUTestMacrosExpr::ExpectedFStringValueLowerCase.Data.
                                    ArrayNum != 0) {
                                  pwVar6 = (wchar_t *)
                                           FAutomationUTestMacrosExpr::ExpectedFStringValueLowerCase
                                           .Data.AllocatorInstance;
                                }
                                if (FAutomationUTestMacrosExpr::ActualFStringValue.Data.ArrayNum !=
                                    0) {
                                  pwVar3 = (wchar_t *)
                                           FAutomationUTestMacrosExpr::ActualFStringValue.Data.
                                           AllocatorInstance;
                                }
                                if (FAutomationUTestMacrosExpr::CustomDescriptionString.Data.
                                    ArrayNum != 0) {
                                  pwVar5 = (wchar_t *)
                                           FAutomationUTestMacrosExpr::CustomDescriptionString.Data.
                                           AllocatorInstance;
                                }
                                bVar2 = FAutomationTestBase::TestNotEqualSensitive
                                                  ((FAutomationTestBase *)this,pwVar5,pwVar3,pwVar6)
                                ;
                                return bVar2;
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
  return false;
}

// GetBeautifiedTestName @ 1487eae20

FString * __thiscall
FAutomationEqualEXPR::GetBeautifiedTestName
          (FAutomationEqualEXPR *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"TestFramework.Validation.UTestEqual");
  return __return_storage_ptr__;
}

