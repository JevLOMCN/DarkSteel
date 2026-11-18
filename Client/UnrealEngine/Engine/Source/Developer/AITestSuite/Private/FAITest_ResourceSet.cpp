// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 147056740

bool __thiscall FAITest_ResourceSet::InstantTest(FAITest_ResourceSet *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FAINamedID<FAIResCounter> *pFVar4;
  FAINamedID<FAIResCounter> *pFVar5;
  FAutomationTestBase *pFVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  byte bVar9;
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
  
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_f8,"Resource Set should be empty by default");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar7.Data = local_f8.Data.AllocatorInstance.Data;
  }
  bVar2 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar7.Data,true);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    bVar9 = 0;
    do {
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
      ::FString::FString(&local_e8,"Resource Set should not contain any resources when empty");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_e8.Data.ArrayNum != 0) {
        FVar7.Data = local_e8.Data.AllocatorInstance.Data;
      }
      bVar2 = FAutomationTestBase::TestFalse(pFVar6,(wchar_t *)FVar7.Data,false);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (!bVar2) goto LAB_147056df7;
      bVar9 = bVar9 + 1;
    } while (bVar9 < 0x20);
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_d8,"Resource Set should be empty by default");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar7.Data = local_d8.Data.AllocatorInstance.Data;
    }
    bVar2 = FAutomationTestBase::TestFalse(pFVar6,(wchar_t *)FVar7.Data,false);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      bVar9 = 0;
      do {
        if ((*(longlong *)&this->field_0x20 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
        ::FString::FString(&local_c8,"Full Resource Set should contain every resource");
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_c8.Data.ArrayNum != 0) {
          FVar7.Data = local_c8.Data.AllocatorInstance.Data;
        }
        bVar2 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar7.Data,1 << (bVar9 & 0x1f) != 0)
        ;
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (!bVar2) goto LAB_147056df7;
        bVar9 = bVar9 + 1;
      } while (bVar9 < 0x20);
      pFVar4 = FAIResources::GetResource((uint)FAIResources::Movement.Index);
      pFVar5 = FAIResources::GetResource((uint)FAIResources::Perception.Index);
      uVar8 = 1 << (pFVar5->Index & 0x1f);
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar9 = pFVar5->Index;
      pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
      ::FString::FString(&local_b8,"Resource Set should contain added resource");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar7.Data = local_b8.Data.AllocatorInstance.Data;
      }
      bVar2 = FAutomationTestBase::TestTrue
                        (pFVar6,(wchar_t *)FVar7.Data,(uVar8 >> (bVar9 & 0x1f) & 1) != 0);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        if ((*(longlong *)&this->field_0x20 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TestRunner",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                               ,0x46,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        bVar9 = pFVar5->Index;
        pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
        ::FString::FString(&local_a8,"Resource Set should contain added resource given by Index");
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar7.Data = local_a8.Data.AllocatorInstance.Data;
        }
        bVar2 = FAutomationTestBase::TestTrue
                          (pFVar6,(wchar_t *)FVar7.Data,(uVar8 >> (bVar9 & 0x1f) & 1) != 0);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          bVar9 = 0;
          do {
            if (bVar9 != pFVar5->Index) {
              if ((*(longlong *)&this->field_0x20 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TestRunner",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                                     ,0x46,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
              ::FString::FString(&local_98,"Resource Set should not contain any other resources");
              FVar7.Data = (FScriptContainerElement *)L"";
              if (local_98.Data.ArrayNum != 0) {
                FVar7.Data = local_98.Data.AllocatorInstance.Data;
              }
              bVar2 = FAutomationTestBase::TestFalse
                                (pFVar6,(wchar_t *)FVar7.Data,(uVar8 >> (bVar9 & 0x1f) & 1) != 0);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (!bVar2) goto LAB_147056df7;
            }
            bVar9 = bVar9 + 1;
          } while (bVar9 < 0x20);
          if ((*(longlong *)&this->field_0x20 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("TestRunner",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                                 ,0x46,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
          ::FString::FString(&local_88,"Resource Set should not be empty after adding a resource");
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_88.Data.ArrayNum != 0) {
            FVar7.Data = local_88.Data.AllocatorInstance.Data;
          }
          bVar2 = FAutomationTestBase::TestFalse(pFVar6,(wchar_t *)FVar7.Data,uVar8 == 0);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (bVar2) {
            uVar8 = uVar8 | 1 << (pFVar4->Index & 0x1f);
            if ((*(longlong *)&this->field_0x20 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TestRunner",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                                   ,0x46,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            bVar9 = pFVar4->Index;
            pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
            ::FString::FString(&local_78,"Resource Set should contain second added resource");
            FVar7.Data = (FScriptContainerElement *)L"";
            if (local_78.Data.ArrayNum != 0) {
              FVar7.Data = local_78.Data.AllocatorInstance.Data;
            }
            bVar2 = FAutomationTestBase::TestTrue
                              (pFVar6,(wchar_t *)FVar7.Data,(uVar8 >> (bVar9 & 0x1f) & 1) != 0);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (bVar2) {
              if ((*(longlong *)&this->field_0x20 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TestRunner",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                                     ,0x46,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
              bVar9 = pFVar4->Index;
              ::FString::FString(&local_68,
                                 "Resource Set should contain second added resource given by Index")
              ;
              FVar7.Data = (FScriptContainerElement *)L"";
              if (local_68.Data.ArrayNum != 0) {
                FVar7.Data = local_68.Data.AllocatorInstance.Data;
              }
              bVar2 = FAutomationTestBase::TestTrue
                                (pFVar6,(wchar_t *)FVar7.Data,(uVar8 >> (bVar9 & 0x1f) & 1) != 0);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (bVar2) {
                uVar8 = uVar8 & ~(1 << (pFVar4->Index & 0x1f));
                if ((*(longlong *)&this->field_0x20 == 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TestRunner",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                                       ,0x46,L""), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  uVar3 = (*pcVar1)();
                  return (bool)uVar3;
                }
                bVar9 = pFVar4->Index;
                pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
                ::FString::FString(&local_58,
                                   "Resource Set should no longer contain second added resource");
                FVar7.Data = (FScriptContainerElement *)L"";
                if (local_58.Data.ArrayNum != 0) {
                  FVar7.Data = local_58.Data.AllocatorInstance.Data;
                }
                bVar2 = FAutomationTestBase::TestFalse
                                  (pFVar6,(wchar_t *)FVar7.Data,(uVar8 >> (bVar9 & 0x1f) & 1) != 0);
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                if (bVar2) {
                  if ((*(longlong *)&this->field_0x20 == 0) &&
                     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                        ("TestRunner",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                                         ,0x46,L""), bVar2)) {
                    pcVar1 = (code *)swi(3);
                    uVar3 = (*pcVar1)();
                    return (bool)uVar3;
                  }
                  pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
                  ::FString::FString(&local_48,
                                     "Resource Set should still be not empty after removing one resource"
                                    );
                  FVar7.Data = (FScriptContainerElement *)L"";
                  if (local_48.Data.ArrayNum != 0) {
                    FVar7.Data = local_48.Data.AllocatorInstance.Data;
                  }
                  bVar2 = FAutomationTestBase::TestFalse(pFVar6,(wchar_t *)FVar7.Data,uVar8 == 0);
                  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_48.Data.AllocatorInstance.Data);
                  }
                  if (bVar2) {
                    bVar9 = pFVar5->Index;
                    pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    ::FString::FString(&local_38,
                                       "Resource Set should be empty after removing last resource");
                    FVar7.Data = (FScriptContainerElement *)L"";
                    if (local_38.Data.ArrayNum != 0) {
                      FVar7.Data = local_38.Data.AllocatorInstance.Data;
                    }
                    bVar2 = FAutomationTestBase::TestTrue
                                      (pFVar6,(wchar_t *)FVar7.Data,
                                       (uVar8 & ~(1 << (bVar9 & 0x1f))) == 0);
                    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_38.Data.AllocatorInstance.Data);
                    }
                    if (bVar2) {
                      return true;
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
LAB_147056df7:
  if ((UE::AITestSuite::bBreakOnTestFail != false) &&
     (bVar2 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

