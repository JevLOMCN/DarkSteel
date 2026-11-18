// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 147054c20

bool __thiscall
FAITest_GameplayTask_OverlappingResources::InstantTest
          (FAITest_GameplayTask_OverlappingResources *this)

{
  char cVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UMockTask_Log *pUVar7;
  UMockTask_Log *pUVar8;
  FAutomationTestBase *pFVar9;
  ForAnyElementType FVar10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (**(code **)this->_padding_)();
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&MoveAndAnimResourceSet,'\x7f');
  this->Tasks[0] = pUVar7;
  pUVar8 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&MoveAndLogicResourceSet,'\x7f');
  pUVar7 = this->Tasks[0];
  this->Tasks[1] = pUVar8;
  UGameplayTask::ReadyForActivation((UGameplayTask *)pUVar7);
  UGameplayTask::ReadyForActivation((UGameplayTask *)this->Tasks[1]);
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar9 = (FAutomationTestBase *)this->_padding_;
  cVar1 = *(char *)((longlong)&this->Tasks[1]->_padding_ + 1);
  ::FString::FString(&local_68,
                     "Only the latter task should be active since it shadows the other one in terms of required resources"
                    );
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar10.Data = local_68.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue(pFVar9,(wchar_t *)FVar10.Data,cVar1 == '\x03');
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
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
    pFVar9 = (FAutomationTestBase *)this->_padding_;
    cVar1 = *(char *)((longlong)&this->Tasks[0]->_padding_ + 1);
    ::FString::FString(&local_58,"The first task should be paused at this moment");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar10.Data = local_58.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue(pFVar9,(wchar_t *)FVar10.Data,cVar1 == '\x02');
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
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
      pFVar9 = (FAutomationTestBase *)this->_padding_;
      sVar2 = *(short *)((longlong)&this->Tasks[1]->_padding_ + 2);
      sVar3 = *(short *)(this->_padding_ + 0xd6);
      ::FString::FString(&local_48,
                         "TasksComponent should claim it\'s using only latter task\'s resources");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar10.Data = local_48.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue(pFVar9,(wchar_t *)FVar10.Data,sVar3 == sVar2);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        (**(code **)(this->Tasks[1]->_padding_ + 0x2d0))();
        pFVar9 = FAITestBase::GetTestRunner((FAITestBase *)this);
        cVar1 = *(char *)((longlong)&this->Tasks[1]->_padding_ + 1);
        ::FString::FString(&local_38,"Now the latter task should be marked as Finished");
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar10.Data = local_38.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestTrue(pFVar9,(wchar_t *)FVar10.Data,cVar1 == '\x04');
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pFVar9 = FAITestBase::GetTestRunner((FAITestBase *)this);
          cVar1 = *(char *)((longlong)&this->Tasks[0]->_padding_ + 1);
          ::FString::FString(&local_28,"And the first task should be resumed");
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_28.Data.ArrayNum != 0) {
            FVar10.Data = local_28.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestTrue(pFVar9,(wchar_t *)FVar10.Data,cVar1 == '\x03');
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pFVar9 = FAITestBase::GetTestRunner((FAITestBase *)this);
            sVar2 = *(short *)((longlong)&this->Tasks[0]->_padding_ + 2);
            sVar3 = *(short *)(this->_padding_ + 0xd6);
            ::FString::FString(&local_18,
                               "TasksComponent should claim it\'s using only first task\'s resources"
                              );
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_18.Data.ArrayNum != 0) {
              FVar10.Data = local_18.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestTrue(pFVar9,(wchar_t *)FVar10.Data,sVar3 == sVar2);
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
  if ((UE::AITestSuite::bBreakOnTestFail != false) &&
     (bVar5 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  return false;
}

