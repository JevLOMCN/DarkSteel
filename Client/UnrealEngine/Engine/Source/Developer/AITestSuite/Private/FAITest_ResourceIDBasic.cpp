// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// InstantTest @ 147055f20

bool __thiscall FAITest_ResourceIDBasic::InstantTest(FAITest_ResourceIDBasic *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FAINamedID<FAIResCounter> *pFVar6;
  ForAnyElementType FVar7;
  FString local_28;
  FString local_18;
  
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  iVar5 = FAIResources::GetResourcesCount();
  ::FString::FString(&local_28,"There are always some resources as long as AIModule is present");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar7.Data = local_28.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar7.Data,0 < iVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar6 = FAIResources::GetResource((uint)FAIResources::Movement.Index);
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = FAIResources::Movement.Index == pFVar6->Index;
    pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_18,"Resource ID\'s indexes are broken!");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar7.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar7.Data,bVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      return true;
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

