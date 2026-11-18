// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 147053d80

bool __thiscall
FAITest_GameplayTask_ComponentState::InstantTest(FAITest_GameplayTask_ComponentState *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForAnyElementType FVar4;
  FString local_18;
  
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = *(FAutomationTestBase **)&this->field_0x20;
  bVar2 = (bool)(**(code **)(**(longlong **)&this->field_0x50 + 0x4f8))();
  ::FString::FString(&local_18,
                     "UGameplayTasksComponent\'s default behavior is not to tick initially");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  bVar2 = FAutomationTestBase::TestFalse(this_00,(wchar_t *)FVar4.Data,bVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    if (UE::AITestSuite::bBreakOnTestFail != false) {
      bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return false;
  }
  return true;
}

