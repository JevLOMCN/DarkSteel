// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 1470548f0

bool __thiscall
FAITest_GameplayTask_NonOverlappingResources::InstantTest
          (FAITest_GameplayTask_NonOverlappingResources *this)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UMockTask_Log *pUVar6;
  UMockTask_Log *pUVar7;
  FAutomationTestBase *pFVar8;
  ForAnyElementType FVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (**(code **)this->_padding_)();
  pUVar6 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&MoveAndAnimResourceSet,'\x7f');
  this->Tasks[0] = pUVar6;
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&LogicResourceSet,'\x7f');
  pUVar6 = this->Tasks[0];
  this->Tasks[1] = pUVar7;
  UGameplayTask::ReadyForActivation((UGameplayTask *)pUVar6);
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar8 = (FAutomationTestBase *)this->_padding_;
  sVar1 = *(short *)((longlong)&this->Tasks[0]->_padding_ + 2);
  sVar2 = *(short *)(this->_padding_ + 0xd6);
  ::FString::FString(&local_58,"TasksComponent should claim it\'s using 0th task\'s resources");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar9.Data = local_58.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,sVar2 == sVar1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    UGameplayTask::ReadyForActivation((UGameplayTask *)this->Tasks[1]);
    if ((this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar8 = (FAutomationTestBase *)this->_padding_;
    if ((*(char *)((longlong)&this->Tasks[0]->_padding_ + 1) == '\x03') &&
       (*(char *)((longlong)&this->Tasks[1]->_padding_ + 1) == '\x03')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    ::FString::FString(&local_48,
                       "Both tasks should be \'Active\' since their resources do not overlap");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar9.Data = local_48.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      if ((this->_padding_ == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar8 = (FAutomationTestBase *)this->_padding_;
      bVar4 = *(ushort *)(this->_padding_ + 0xd6) == MoveAnimLogicResourceSet.Flags;
      ::FString::FString(&local_38,
                         "TasksComponent should claim it\'s using only latter task\'s resources");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar9.Data = local_38.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar4);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        (**(code **)(this->Tasks[0]->_padding_ + 0x2d0))();
        pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        sVar1 = *(short *)((longlong)&this->Tasks[1]->_padding_ + 2);
        sVar2 = *(short *)(this->_padding_ + 0xd6);
        ::FString::FString(&local_28,"Only index 1 task\'s resources should be relevant now");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar9.Data = local_28.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,sVar2 == sVar1);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          (**(code **)(this->Tasks[1]->_padding_ + 0x2d0))();
          pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          sVar1 = *(short *)(this->_padding_ + 0xd6);
          ::FString::FString(&local_18,"No resources should be occupied now");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_18.Data.ArrayNum != 0) {
            FVar9.Data = local_18.Data.AllocatorInstance.Data;
          }
          bVar4 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,sVar1 == 0);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            return true;
          }
        }
      }
    }
  }
  if ((UE::AITestSuite::bBreakOnTestFail != false) &&
     (bVar4 = FWindowsPlatformMisc::IsDebuggerPresent(), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

