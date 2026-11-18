// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 147054f70

bool __thiscall
FAITest_GameplayTask_PausingTasksBlockingOtherTasks::InstantTest
          (FAITest_GameplayTask_PausingTasksBlockingOtherTasks *this)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UMockTask_Log *pUVar5;
  UMockTask_Log *pUVar6;
  FAutomationTestBase *pFVar7;
  ForAnyElementType FVar8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (**(code **)this->_padding_)();
  pUVar5 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&MovementResourceSet,'\x7f');
  this->Tasks[0] = pUVar5;
  pUVar5 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&MoveAndLogicResourceSet,'\x7f');
  this->Tasks[1] = pUVar5;
  pUVar6 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&LogicResourceSet,'\x7f');
  pUVar5 = this->Tasks[0];
  this->Tasks[2] = pUVar6;
  UGameplayTask::ReadyForActivation((UGameplayTask *)pUVar5);
  UGameplayTask::ReadyForActivation((UGameplayTask *)this->Tasks[1]);
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar7 = (FAutomationTestBase *)this->_padding_;
  cVar1 = *(char *)((longlong)&this->Tasks[0]->_padding_ + 1);
  ::FString::FString(&local_68,"First task should be paused since it\'s resources get overlapped");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar8.Data = local_68.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestFalse(pFVar7,(wchar_t *)FVar8.Data,cVar1 == '\x03');
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar7 = (FAutomationTestBase *)this->_padding_;
    cVar1 = *(char *)((longlong)&this->Tasks[1]->_padding_ + 1);
    ::FString::FString(&local_58,"Second task should on top and active");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestTrue(pFVar7,(wchar_t *)FVar8.Data,cVar1 == '\x03');
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      UGameplayTask::ReadyForActivation((UGameplayTask *)this->Tasks[2]);
      if ((this->_padding_ == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar7 = (FAutomationTestBase *)this->_padding_;
      cVar1 = *(char *)((longlong)&this->Tasks[1]->_padding_ + 1);
      ::FString::FString(&local_48,
                         "Second task should get paused since its resources got overlapped");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar8.Data = local_48.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestFalse(pFVar7,(wchar_t *)FVar8.Data,cVar1 == '\x03');
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pFVar7 = FAITestBase::GetTestRunner((FAITestBase *)this);
        cVar1 = *(char *)((longlong)&this->Tasks[0]->_padding_ + 1);
        ::FString::FString(&local_38,
                           "First task should remain paused since it\'s resources get overlapped by the paused task"
                          );
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar8.Data = local_38.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestFalse(pFVar7,(wchar_t *)FVar8.Data,cVar1 == '\x03');
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          (**(code **)(this->Tasks[2]->_padding_ + 0x2d0))();
          pFVar7 = FAITestBase::GetTestRunner((FAITestBase *)this);
          cVar1 = *(char *)((longlong)&this->Tasks[0]->_padding_ + 1);
          ::FString::FString(&local_28,"Nothing shoud change for the first task");
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_28.Data.ArrayNum != 0) {
            FVar8.Data = local_28.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestFalse(pFVar7,(wchar_t *)FVar8.Data,cVar1 == '\x03');
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            pFVar7 = FAITestBase::GetTestRunner((FAITestBase *)this);
            cVar1 = *(char *)((longlong)&this->Tasks[1]->_padding_ + 1);
            ::FString::FString(&local_18,"Second task should be active again");
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_18.Data.ArrayNum != 0) {
              FVar8.Data = local_18.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestTrue(pFVar7,(wchar_t *)FVar8.Data,cVar1 == '\x03');
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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
  if ((UE::AITestSuite::bBreakOnTestFail != false) &&
     (bVar3 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

