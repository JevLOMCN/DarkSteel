// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717fd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_SingleOptionalFragment::InstantTest
          (FQueryTest_SingleOptionalFragment *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  ForAnyElementType FVar6;
  undefined1 auStack_3b8 [32];
  undefined8 local_398;
  longlong local_390;
  FString local_388;
  FString local_378;
  FMassEntityQuery local_368;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  FMassEntityQuery::FMassEntityQuery
            (&local_368,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&local_368,ReadWrite,Optional);
  FMassEntityQuery::CacheArchetypes(&local_368);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar3 = local_368.ValidArchetypes.ArrayNum;
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_388,"There are exactly two archetypes matching the requirements");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_388.Data.ArrayNum != 0) {
    FVar6.Data = local_388.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar6.Data,iVar3,2);
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
    if (local_368.ValidArchetypes.ArrayNum < 1) {
      local_390 = (longlong)local_368.ValidArchetypes.ArrayNum;
      local_398 = 0;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    if (*(longlong *)&this->field_0x50 ==
        *(longlong *)local_368.ValidArchetypes.AllocatorInstance.Data) {
LAB_14717ff13:
      bVar4 = false;
    }
    else {
      if (local_368.ValidArchetypes.ArrayNum < 2) {
        local_390 = (longlong)local_368.ValidArchetypes.ArrayNum;
        local_398 = 1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      if (*(longlong *)&this->field_0x50 ==
          *(longlong *)(local_368.ValidArchetypes.AllocatorInstance.Data + 0x10))
      goto LAB_14717ff13;
      bVar4 = true;
    }
    ::FString::FString(&local_378,"FloatsArchetype is not amongst matching archetypes");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_378.Data.ArrayNum != 0) {
      FVar6.Data = local_378.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar6.Data,bVar4);
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      bVar4 = true;
      goto LAB_14717ff61;
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar4 = false;
LAB_14717ff61:
  FMassEntityQuery::~FMassEntityQuery(&local_368);
  return bVar4;
}

