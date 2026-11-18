// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 147053bf0

bool __thiscall
FAITest_GameplayTask_ClaimedResourcesAndInstantFinish::InstantTest
          (FAITest_GameplayTask_ClaimedResourcesAndInstantFinish *this)

{
  short sVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UMockTask_Log *pUVar7;
  ForAnyElementType FVar8;
  FString local_28;
  FString local_18;
  
  (**(code **)this->_padding_)();
  pUVar7 = UMockTask_Log::CreateTask
                     ((IGameplayTaskOwnerInterface *)(this->_padding_ + 0xc0),
                      (FTestLogger<int> *)&this->_padding_,&MovementResourceSet,'\x7f');
  this->Task = pUVar7;
  pUVar7->bShoudEndAsPartOfActivation = true;
  UGameplayTask::ReadyForActivation((UGameplayTask *)this->Task);
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = (FAutomationTestBase *)this->_padding_;
  sVar1 = *(short *)(this->_padding_ + 0xd6);
  ::FString::FString(&local_28,"No claimed resources should be left behind");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar8.Data = local_28.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar8.Data,sVar1 == 0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
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
    pFVar3 = (FAutomationTestBase *)this->_padding_;
    iVar2 = *(int *)(this->_padding_ + 0xe0);
    ::FString::FString(&local_18,"There should no active tasks when task auto-insta-ended");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar8.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar8.Data,iVar2 == 0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      return true;
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

