// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 147053860

bool __thiscall
FAITest_GameplayTask_ClaimedResources::InstantTest(FAITest_GameplayTask_ClaimedResources *this)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UMockTask_Log *pUVar5;
  FAutomationTestBase *pFVar6;
  ForAnyElementType FVar7;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (**(code **)this->_padding_)();
  pUVar5 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&MovementResourceSet,'\x7f');
  this->Tasks[0] = pUVar5;
  UGameplayTask::ReadyForActivation((UGameplayTask *)pUVar5);
  pUVar5 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&AnimationResourceSet,'\x7f');
  this->Tasks[1] = pUVar5;
  UGameplayTask::AddClaimedResourceSet((UGameplayTask *)pUVar5,MovementResourceSet);
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
  pFVar6 = (FAutomationTestBase *)this->_padding_;
  cVar1 = *(char *)((longlong)&this->Tasks[0]->_padding_ + 1);
  ::FString::FString(&local_78,
                     "The first task should get paused since its required resource is claimed, or shadowed, by the newer task"
                    );
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar7.Data = local_78.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestFalse(pFVar6,(wchar_t *)FVar7.Data,cVar1 == '\x03');
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
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
    pFVar6 = (FAutomationTestBase *)this->_padding_;
    cVar1 = *(char *)((longlong)&this->Tasks[1]->_padding_ + 1);
    ::FString::FString(&local_68,"The second task should be running, nothing obstructing it");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar7.Data = local_68.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar7.Data,cVar1 == '\x03');
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pUVar5 = UMockTask_Log::CreateTask
                         ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                          (FTestLogger<int> *)&this->_padding_,&MovementResourceSet,'\x01');
      this->Tasks[2] = pUVar5;
      UGameplayTask::ReadyForActivation((UGameplayTask *)pUVar5);
      if ((this->_padding_ == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar6 = (FAutomationTestBase *)this->_padding_;
      cVar1 = *(char *)((longlong)&this->Tasks[2]->_padding_ + 1);
      ::FString::FString(&local_58,"The new low-priority task should not be allowed to run neither")
      ;
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar7.Data = local_58.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestFalse(pFVar6,(wchar_t *)FVar7.Data,cVar1 == '\x03');
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
        cVar1 = *(char *)((longlong)&this->Tasks[1]->_padding_ + 1);
        ::FString::FString(&local_48,"The second task should be still running");
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar7.Data = local_48.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar7.Data,cVar1 == '\x03');
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pUVar5 = UMockTask_Log::CreateTask
                             ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                              (FTestLogger<int> *)&this->_padding_,&MovementResourceSet,0xff);
          this->Tasks[3] = pUVar5;
          UGameplayTask::ReadyForActivation((UGameplayTask *)pUVar5);
          pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
          cVar1 = *(char *)((longlong)&this->Tasks[3]->_padding_ + 1);
          ::FString::FString(&local_38,"The new high-priority task should be allowed to run");
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_38.Data.ArrayNum != 0) {
            FVar7.Data = local_38.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar7.Data,cVar1 == '\x03');
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
            cVar1 = *(char *)((longlong)&this->Tasks[1]->_padding_ + 1);
            ::FString::FString(&local_28,
                               "The second task should be still running, it\'s required resources are not being overlapped"
                              );
            FVar7.Data = (FScriptContainerElement *)L"";
            if (local_28.Data.ArrayNum != 0) {
              FVar7.Data = local_28.Data.AllocatorInstance.Data;
            }
            bVar3 = FAutomationTestBase::TestTrue(pFVar6,(wchar_t *)FVar7.Data,cVar1 == '\x03');
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
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

