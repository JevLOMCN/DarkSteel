// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 1470552e0

bool __thiscall FAITest_GameplayTask_Priorities::InstantTest(FAITest_GameplayTask_Priorities *this)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UMockTask_Log *pUVar7;
  FAutomationTestBase *pFVar8;
  ForAnyElementType FVar9;
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
  
  (**(code **)this->_padding_)();
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&MoveAndAnimResourceSet,'\x01');
  this->Tasks[0] = pUVar7;
  puVar1 = (uint *)((longlong)&pUVar7->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&MoveAndAnimResourceSet,'\x7f');
  this->Tasks[1] = pUVar7;
  puVar1 = (uint *)((longlong)&pUVar7->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&MoveAndAnimResourceSet,0xff);
  this->Tasks[2] = pUVar7;
  UGameplayTask::ReadyForActivation((UGameplayTask *)this->Tasks[1]);
  UGameplayTask::ReadyForActivation((UGameplayTask *)this->Tasks[0]);
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar8 = (FAutomationTestBase *)this->_padding_;
  if ((*(char *)((longlong)&this->Tasks[1]->_padding_ + 1) == '\x03') &&
     (*(char *)((longlong)&this->Tasks[0]->_padding_ + 1) != '\x03')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  ::FString::FString(&local_a8,
                     "Task at index 1 should be active at this point since it\'s higher priority");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar9.Data = local_a8.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar5);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar8 = (FAutomationTestBase *)this->_padding_;
    sVar2 = *(short *)((longlong)&this->Tasks[1]->_padding_ + 2);
    sVar3 = *(short *)(this->_padding_ + 0xd6);
    ::FString::FString(&local_98,"TasksComponent should claim it\'s using only resources of task 1")
    ;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar9.Data = local_98.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,sVar3 == sVar2);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      if ((this->_padding_ == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar8 = (FAutomationTestBase *)this->_padding_;
      bVar5 = (bool)(**(code **)(*(longlong *)this->_padding_ + 0x4f8))();
      ::FString::FString(&local_88,
                         "Current top action wants to tick so Component should want that as well");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar9.Data = local_88.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar5);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        UGameplayTask::ReadyForActivation((UGameplayTask *)this->Tasks[2]);
        pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        if (((*(char *)((longlong)&this->Tasks[2]->_padding_ + 1) == '\x03') &&
            (*(char *)((longlong)&this->Tasks[0]->_padding_ + 1) != '\x03')) &&
           (*(char *)((longlong)&this->Tasks[1]->_padding_ + 1) != '\x03')) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        ::FString::FString(&local_78,"Now the last pushed, highest priority task should be active");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar9.Data = local_78.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar5);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          bVar5 = (bool)(**(code **)(*(longlong *)this->_padding_ + 0x4f8))();
          ::FString::FString(&local_68,
                             "No ticking task is active so Component should not want to tick");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_68.Data.ArrayNum != 0) {
            FVar9.Data = local_68.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestFalse(pFVar8,(wchar_t *)FVar9.Data,bVar5);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            (**(code **)(this->Tasks[1]->_padding_ + 0x2d0))();
            pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
            if (((*(char *)((longlong)&this->Tasks[2]->_padding_ + 1) == '\x03') &&
                (*(char *)((longlong)&this->Tasks[0]->_padding_ + 1) != '\x03')) &&
               (*(char *)((longlong)&this->Tasks[1]->_padding_ + 1) != '\x03')) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            ::FString::FString(&local_58,
                               "Canceling mid-priority inactive task should not influence what\'s active"
                              );
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_58.Data.ArrayNum != 0) {
              FVar9.Data = local_58.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar5);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
              bVar5 = (bool)(**(code **)(*(longlong *)this->_padding_ + 0x4f8))();
              ::FString::FString(&local_48,
                                 "Current top action still doesn\'t want to tick, so neither should the Component"
                                );
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_48.Data.ArrayNum != 0) {
                FVar9.Data = local_48.Data.AllocatorInstance.Data;
              }
              bVar5 = FAutomationTestBase::TestFalse(pFVar8,(wchar_t *)FVar9.Data,bVar5);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
              if (bVar5) {
                (**(code **)(this->Tasks[2]->_padding_ + 0x2d0))();
                pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
                if (((*(char *)((longlong)&this->Tasks[2]->_padding_ + 1) == '\x03') ||
                    (*(char *)((longlong)&this->Tasks[0]->_padding_ + 1) != '\x03')) ||
                   (*(char *)((longlong)&this->Tasks[1]->_padding_ + 1) == '\x03')) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                ::FString::FString(&local_38,
                                   "After canceling the top-priority task the lowest priority task remains to be active"
                                  );
                FVar9.Data = (FScriptContainerElement *)L"";
                if (local_38.Data.ArrayNum != 0) {
                  FVar9.Data = local_38.Data.AllocatorInstance.Data;
                }
                bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar5);
                if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_38.Data.AllocatorInstance.Data);
                }
                if (bVar5) {
                  pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  bVar5 = (bool)(**(code **)(*(longlong *)this->_padding_ + 0x4f8))();
                  ::FString::FString(&local_28,"New top action wants tick, so should Component");
                  FVar9.Data = (FScriptContainerElement *)L"";
                  if (local_28.Data.ArrayNum != 0) {
                    FVar9.Data = local_28.Data.AllocatorInstance.Data;
                  }
                  bVar5 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar5);
                  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_28.Data.AllocatorInstance.Data);
                  }
                  if (bVar5) {
                    (**(code **)(this->Tasks[0]->_padding_ + 0x2d0))();
                    pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    bVar5 = (bool)(**(code **)(*(longlong *)this->_padding_ + 0x4f8))();
                    ::FString::FString(&local_18,"Task-less component should not want to tick");
                    FVar9.Data = (FScriptContainerElement *)L"";
                    if (local_18.Data.ArrayNum != 0) {
                      FVar9.Data = local_18.Data.AllocatorInstance.Data;
                    }
                    bVar5 = FAutomationTestBase::TestFalse(pFVar8,(wchar_t *)FVar9.Data,bVar5);
                    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_18.Data.AllocatorInstance.Data);
                    }
                    if (bVar5) {
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
  if ((UE::AITestSuite::bBreakOnTestFail != false) &&
     (bVar5 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  return false;
}

