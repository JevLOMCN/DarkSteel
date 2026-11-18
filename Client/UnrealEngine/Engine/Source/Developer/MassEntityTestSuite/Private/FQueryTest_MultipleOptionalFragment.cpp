// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717e6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_MultipleOptionalFragment::InstantTest
          (FQueryTest_MultipleOptionalFragment *this)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_398 [32];
  FString local_378;
  FMassEntityQuery local_368;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_398;
  FMassEntityQuery::FMassEntityQuery
            (&local_368,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&local_368,ReadWrite,Optional);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)&local_368,ReadWrite,Optional);
  FMassEntityQuery::CacheArchetypes(&local_368);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_00 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_378,"All three archetype meet requirements");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_378.Data.ArrayNum != 0) {
    FVar4.Data = local_378.Data.AllocatorInstance.Data;
  }
  bVar2 = FAutomationTestBase::TestEqual
                    (this_00,(wchar_t *)FVar4.Data,local_368.ValidArchetypes.ArrayNum,3);
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  FMassEntityQuery::~FMassEntityQuery(&local_368);
  return bVar2;
}

