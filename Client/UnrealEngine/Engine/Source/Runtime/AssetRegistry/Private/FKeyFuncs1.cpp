// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// GetTypeHash @ 142b59c80

uint __thiscall `FSetKeyFuncsTest::TestBody'::__l2::FKeyFuncs1::GetTypeHash(void *this,uint param_1)

{
  longlong *plVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAutomationTestFramework *pFVar6;
  FString local_18;
  
  plVar1 = *(longlong **)this;
  if (param_1 < *(uint *)((longlong)plVar1 + 100)) {
    uVar5 = 0;
    if ((int)param_1 < (int)plVar1[1]) {
      uVar5 = ~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    uVar5 = *(uint *)(*plVar1 + (longlong)(int)param_1 * 4);
    if (uVar5 != 0xffffffff) {
      return uVar5;
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"GetTypeHash was unexpectedly called on unknown value %u.");
  (*pcVar3)(pFVar2,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return 0xffffffff;
}

