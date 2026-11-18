// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 147055850

bool __thiscall
FAITest_GameplayTask_ResourceSet::InstantTest(FAITest_GameplayTask_ResourceSet *this)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  undefined1 uVar4;
  FAutomationTestBase *pFVar5;
  byte bVar6;
  ForAnyElementType FVar7;
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
  FString local_28;
  FString local_18;
  
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pFVar5 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_e8,"New FGameplayResourceSet should be empty initialy");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar7.Data = local_e8.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue(pFVar5,(wchar_t *)FVar7.Data,true);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pFVar5 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_d8,"Added one ID, ResourcesSet should not be perceived as empty now");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar7.Data = local_d8.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestFalse(pFVar5,(wchar_t *)FVar7.Data,false);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pFVar5 = *(FAutomationTestBase **)&this->field_0x20;
      ::FString::FString(&local_c8,
                         "Removed ID not previously added, ResourcesSet should not be perceived as empty now"
                        );
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar7.Data = local_c8.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestFalse(pFVar5,(wchar_t *)FVar7.Data,false);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
        ::FString::FString(&local_b8,"Removed ID previously added, ResourcesSet should be empty now"
                          );
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_b8.Data.ArrayNum != 0) {
          FVar7.Data = local_b8.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestTrue(pFVar5,(wchar_t *)FVar7.Data,true);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
          uVar2 = MoveAndAnimResourceSet.Flags & LogicResourceSet.Flags;
          ::FString::FString(&local_a8,"Single ID checking, not present ID");
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_a8.Data.ArrayNum != 0) {
            FVar7.Data = local_a8.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestFalse(pFVar5,(wchar_t *)FVar7.Data,uVar2 != 0);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
            uVar2 = MoveAndAnimResourceSet.Flags & MovementResourceSet.Flags;
            ::FString::FString(&local_98,"Single ID checking");
            FVar7.Data = (FScriptContainerElement *)L"";
            if (local_98.Data.ArrayNum != 0) {
              FVar7.Data = local_98.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestTrue(pFVar5,(wchar_t *)FVar7.Data,uVar2 != 0);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (bVar3) {
              pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
              uVar2 = MoveAndAnimResourceSet.Flags & AnimationResourceSet.Flags;
              ::FString::FString(&local_88,"Single ID checking");
              FVar7.Data = (FScriptContainerElement *)L"";
              if (local_88.Data.ArrayNum != 0) {
                FVar7.Data = local_88.Data.AllocatorInstance.Data;
              }
              bVar3 = FAutomationTestBase::TestTrue(pFVar5,(wchar_t *)FVar7.Data,uVar2 != 0);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              if (bVar3) {
                pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
                ::FString::FString(&local_78,"Multiple ID checking - has all, self test");
                FVar7.Data = (FScriptContainerElement *)L"";
                if (local_78.Data.ArrayNum != 0) {
                  FVar7.Data = local_78.Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestTrue(pFVar5,(wchar_t *)FVar7.Data,true);
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
                if (bVar3) {
                  pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  bVar6 = (byte)MoveAndAnimResourceSet.Flags & 5;
                  ::FString::FString(&local_68,"Multiple ID checking - has all, other identical");
                  FVar7.Data = (FScriptContainerElement *)L"";
                  if (local_68.Data.ArrayNum != 0) {
                    FVar7.Data = local_68.Data.AllocatorInstance.Data;
                  }
                  bVar3 = FAutomationTestBase::TestTrue(pFVar5,(wchar_t *)FVar7.Data,bVar6 == 5);
                  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_68.Data.AllocatorInstance.Data);
                  }
                  if (bVar3) {
                    pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    bVar3 = (MoveAndAnimResourceSet.Flags & MoveAndLogicResourceSet.Flags) ==
                            MoveAndLogicResourceSet.Flags;
                    ::FString::FString(&local_58,"Multiple ID checking - has all, other different");
                    FVar7.Data = (FScriptContainerElement *)L"";
                    if (local_58.Data.ArrayNum != 0) {
                      FVar7.Data = local_58.Data.AllocatorInstance.Data;
                    }
                    bVar3 = FAutomationTestBase::TestFalse(pFVar5,(wchar_t *)FVar7.Data,bVar3);
                    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_58.Data.AllocatorInstance.Data);
                    }
                    if (bVar3) {
                      pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
                      bVar3 = (MoveAndLogicResourceSet.Flags & MoveAndAnimResourceSet.Flags) ==
                              MovementResourceSet.Flags;
                      ::FString::FString(&local_48,"Multiple ID checking - overlap");
                      FVar7.Data = (FScriptContainerElement *)L"";
                      if (local_48.Data.ArrayNum != 0) {
                        FVar7.Data = local_48.Data.AllocatorInstance.Data;
                      }
                      bVar3 = FAutomationTestBase::TestTrue(pFVar5,(wchar_t *)FVar7.Data,bVar3);
                      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_48.Data.AllocatorInstance.Data);
                      }
                      if (bVar3) {
                        pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
                        bVar3 = (~(MoveAndLogicResourceSet.Flags & MoveAndAnimResourceSet.Flags) &
                                MoveAndAnimResourceSet.Flags) == AnimationResourceSet.Flags;
                        ::FString::FString(&local_38,"Multiple ID checking - substraction");
                        FVar7.Data = (FScriptContainerElement *)L"";
                        if (local_38.Data.ArrayNum != 0) {
                          FVar7.Data = local_38.Data.AllocatorInstance.Data;
                        }
                        bVar3 = FAutomationTestBase::TestTrue(pFVar5,(wchar_t *)FVar7.Data,bVar3);
                        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_38.Data.AllocatorInstance.Data);
                        }
                        if (bVar3) {
                          pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
                          bVar3 = MovementResourceSet.Flags == 0;
                          ::FString::FString(&local_28,
                                             "FGameplayResourceSet containing 0-th ID is not empty")
                          ;
                          FVar7.Data = (FScriptContainerElement *)L"";
                          if (local_28.Data.ArrayNum != 0) {
                            FVar7.Data = local_28.Data.AllocatorInstance.Data;
                          }
                          bVar3 = FAutomationTestBase::TestFalse(pFVar5,(wchar_t *)FVar7.Data,bVar3)
                          ;
                          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_28.Data.AllocatorInstance.Data);
                          }
                          if (bVar3) {
                            pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
                            bVar3 = (bool)((byte)MovementResourceSet.Flags & 1);
                            ::FString::FString(&local_18,"FGameplayResourceSet has 0-th ID");
                            FVar7.Data = (FScriptContainerElement *)L"";
                            if (local_18.Data.ArrayNum != 0) {
                              FVar7.Data = local_18.Data.AllocatorInstance.Data;
                            }
                            bVar3 = FAutomationTestBase::TestTrue
                                              (pFVar5,(wchar_t *)FVar7.Data,bVar3);
                            if (local_18.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_18.Data.AllocatorInstance.Data);
                            }
                            if (bVar3) {
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
        }
      }
    }
  }
  if ((UE::AITestSuite::bBreakOnTestFail != false) &&
     (bVar3 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  return false;
}

