// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 147056080

bool __thiscall FAITest_ResourceLock::InstantTest(FAITest_ResourceLock *this)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FAutomationTestBase *pFVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  byte bVar9;
  uint uVar10;
  FAIResourceLock local_f8;
  FAIResourceLock local_e0;
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
  
  FAIResourceLock::FAIResourceLock(&local_f8);
  FAIResourceLock::SetLock(&local_f8,HardScript);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  bVar3 = local_f8.Locks != 0;
  pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_c8,"Resource should be locked");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar8.Data = local_c8.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar8.Data,bVar3);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if (*(longlong *)&this->field_0x20 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
    bVar9 = (byte)local_f8.Locks >> 2;
    ::FString::FString(&local_b8,"Resource should be locked with specified priority");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar8.Data = local_b8.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar8.Data,(bool)(bVar9 & 1));
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      if (*(longlong *)&this->field_0x20 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
      uVar10 = 4;
      uVar7 = 4;
      uVar5 = 4;
      do {
        if ((local_f8.Locks >> (uVar5 & 0x1f) & 1) != 0) {
          bVar3 = false;
          goto LAB_147056242;
        }
        uVar5 = uVar5 - 1;
      } while (0 < (int)uVar5);
      bVar3 = true;
LAB_147056242:
      ::FString::FString(&local_a8,"Resource should not be available for lower priorities");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar8.Data = local_a8.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestFalse(pFVar6,(wchar_t *)FVar8.Data,bVar3);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
        do {
          if ((local_f8.Locks >> (uVar7 & 0x1f) & 1) != 0) {
            bVar3 = false;
            goto LAB_1470562c5;
          }
          uVar7 = uVar7 - 1;
        } while (2 < (int)uVar7);
        bVar3 = true;
LAB_1470562c5:
        ::FString::FString(&local_98,"Resource should be available for higher priorities");
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar8.Data = local_98.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar8.Data,bVar3);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          FAIResourceLock::ClearLock(&local_f8,Logic);
          pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
          bVar3 = local_f8.Locks != 0;
          ::FString::FString(&local_88,"Resource should be still locked");
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_88.Data.ArrayNum != 0) {
            FVar8.Data = local_88.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar8.Data,bVar3);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
            uVar5 = 4;
            do {
              if ((local_f8.Locks >> (uVar5 & 0x1f) & 1) != 0) {
                bVar3 = false;
                goto LAB_1470563c2;
              }
              uVar5 = uVar5 - 1;
            } while (0 < (int)uVar5);
            bVar3 = true;
LAB_1470563c2:
            ::FString::FString(&local_78,
                               "Resource should still not be available for lower priorities");
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_78.Data.ArrayNum != 0) {
              FVar8.Data = local_78.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestFalse(pFVar6,(wchar_t *)FVar8.Data,bVar3);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (bVar3) {
              pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
              do {
                if ((local_f8.Locks >> (uVar10 & 0x1f) & 1) != 0) {
                  bVar3 = false;
                  goto LAB_147056442;
                }
                uVar10 = uVar10 - 1;
              } while (2 < (int)uVar10);
              bVar3 = true;
LAB_147056442:
              ::FString::FString(&local_68,
                                 "Resource should still be available for higher priorities");
              FVar8.Data = (FScriptContainerElement *)L"";
              if (local_68.Data.ArrayNum != 0) {
                FVar8.Data = local_68.Data.AllocatorInstance.Data;
              }
              bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar8.Data,bVar3);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (bVar3) {
                FAIResourceLock::ClearLock(&local_f8,HardScript);
                pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
                bVar3 = local_f8.Locks != 0;
                ::FString::FString(&local_58,"Resource should be available now");
                FVar8.Data = (FScriptContainerElement *)L"";
                if (local_58.Data.ArrayNum != 0) {
                  FVar8.Data = local_58.Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestFalse(pFVar6,(wchar_t *)FVar8.Data,bVar3);
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                if (bVar3) {
                  FAIResourceLock::SetLock(&local_f8,HardScript);
                  FAIResourceLock::SetLock(&local_f8,Logic);
                  FAIResourceLock::SetLock(&local_f8,Reaction);
                  uVar2 = local_f8.Locks;
                  FAIResourceLock::ForceClearAllLocks(&local_f8);
                  pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  if ((uVar2 == 0) || (local_f8.Locks != 0)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  ::FString::FString(&local_48,"Resource should no longer be locked");
                  FVar8.Data = (FScriptContainerElement *)L"";
                  if (local_48.Data.ArrayNum != 0) {
                    FVar8.Data = local_48.Data.AllocatorInstance.Data;
                  }
                  bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar8.Data,bVar3);
                  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_48.Data.AllocatorInstance.Data);
                  }
                  if (bVar3) {
                    FAIResourceLock::FAIResourceLock(&local_e0);
                    FAIResourceLock::SetLock(&local_f8,HardScript);
                    FAIResourceLock::SetLock(&local_e0,Logic);
                    local_e0.Locks = local_e0.Locks | local_f8.Locks;
                    pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    if (((local_e0.Locks & 2) == 0) || ((local_e0.Locks & 4) == 0)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    ::FString::FString(&local_38,"Resource should be locked on both priorities");
                    FVar8.Data = (FScriptContainerElement *)L"";
                    if (local_38.Data.ArrayNum != 0) {
                      FVar8.Data = local_38.Data.AllocatorInstance.Data;
                    }
                    bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar8.Data,bVar3);
                    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_38.Data.AllocatorInstance.Data);
                    }
                    if (bVar3) {
                      FAIResourceLock::ClearLock(&local_e0,Logic);
                      pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
                      bVar3 = local_f8.Locks == local_e0.Locks;
                      ::FString::FString(&local_28,"At this point both locks should be identical");
                      FVar8.Data = (FScriptContainerElement *)L"";
                      if (local_28.Data.ArrayNum != 0) {
                        FVar8.Data = local_28.Data.AllocatorInstance.Data;
                      }
                      bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar8.Data,bVar3);
                      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_28.Data.AllocatorInstance.Data);
                      }
                      if (!bVar3) {
                        if (UE::AITestSuite::bBreakOnTestFail != false) {
                          bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
                          if (bVar3) goto code_r0x0001470566e7;
                        }
                        goto LAB_1470566e8;
                      }
                      bVar3 = true;
                    }
                    else if (UE::AITestSuite::bBreakOnTestFail == false) {
LAB_1470566e8:
                      bVar3 = false;
                    }
                    else {
                      bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
                      if (bVar3) {
code_r0x0001470566e7:
                        pcVar1 = (code *)swi(3);
                        uVar4 = (*pcVar1)();
                        return (bool)uVar4;
                      }
                      bVar3 = false;
                    }
                    if (local_e0.ResourceLockCount.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_e0.ResourceLockCount.AllocatorInstance.Data);
                    }
                    goto LAB_1470566fd;
                  }
                  if (UE::AITestSuite::bBreakOnTestFail != false) {
                    bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
                    if (bVar3) goto code_r0x0001470565c3;
                  }
                }
                else if (UE::AITestSuite::bBreakOnTestFail != false) {
                  bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
                  if (bVar3) goto code_r0x0001470565c3;
                  bVar3 = false;
                  goto LAB_1470566fd;
                }
              }
              else if (UE::AITestSuite::bBreakOnTestFail != false) {
                bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
                if (bVar3) goto code_r0x0001470565c3;
                bVar3 = false;
                goto LAB_1470566fd;
              }
            }
            else if (UE::AITestSuite::bBreakOnTestFail != false) {
              bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
              if (bVar3) goto code_r0x0001470565c3;
              bVar3 = false;
              goto LAB_1470566fd;
            }
          }
          else if (UE::AITestSuite::bBreakOnTestFail != false) {
            bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
            if (bVar3) goto code_r0x0001470565c3;
            bVar3 = false;
            goto LAB_1470566fd;
          }
        }
        else if (UE::AITestSuite::bBreakOnTestFail != false) {
          bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
          if (bVar3) goto code_r0x0001470565c3;
          bVar3 = false;
          goto LAB_1470566fd;
        }
      }
      else if (UE::AITestSuite::bBreakOnTestFail != false) {
        bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
        if (bVar3) goto code_r0x0001470565c3;
        bVar3 = false;
        goto LAB_1470566fd;
      }
    }
    else if (UE::AITestSuite::bBreakOnTestFail != false) {
      bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar3) goto code_r0x0001470565c3;
      bVar3 = false;
      goto LAB_1470566fd;
    }
  }
  else if (UE::AITestSuite::bBreakOnTestFail != false) {
    bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar3) {
code_r0x0001470565c3:
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    bVar3 = false;
    goto LAB_1470566fd;
  }
  bVar3 = false;
LAB_1470566fd:
  if (local_f8.ResourceLockCount.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.ResourceLockCount.AllocatorInstance.Data);
  }
  return bVar3;
}

