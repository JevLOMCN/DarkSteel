// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147176690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_AbsentAndPresentFragments::InstantTest
          (FQueryTest_AbsentAndPresentFragments *this)

{
  FAutomationTestBase *pFVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  ForAnyElementType FVar8;
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  longlong local_3a0;
  FString local_398;
  FString local_388;
  FString local_378;
  FMassEntityQuery local_368;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  FMassEntityQuery::FMassEntityQuery
            (&local_368,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&local_368,None,None);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)&local_368,ReadOnly,All);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  bVar6 = FMassFragmentRequirements::CheckValidity((FMassFragmentRequirements *)&local_368);
  ::FString::FString(&local_398,"The query is valid");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_398.Data.ArrayNum != 0) {
    FVar8.Data = local_398.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,bVar6);
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    FMassEntityQuery::CacheArchetypes(&local_368);
    if (*(longlong *)&this->field_0x20 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    iVar5 = local_368.ValidArchetypes.ArrayNum;
    pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_388,"There is only one archetype matching the query");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_388.Data.ArrayNum != 0) {
      FVar8.Data = local_388.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar8.Data,iVar5,1);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      if (*(longlong *)&this->field_0x20 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
      if (local_368.ValidArchetypes.ArrayNum < 1) {
        local_3a0 = (longlong)local_368.ValidArchetypes.ArrayNum;
        local_3a8 = 0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      lVar2 = *(longlong *)local_368.ValidArchetypes.AllocatorInstance.Data;
      lVar3 = *(longlong *)&this->field_0x50;
      ::FString::FString(&local_378,"FloatsArchetype is the only one matching the query");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_378.Data.ArrayNum != 0) {
        FVar8.Data = local_378.Data.AllocatorInstance.Data;
      }
      bVar6 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,lVar3 == lVar2);
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        bVar6 = true;
        goto LAB_1471768c3;
      }
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar6 = false;
LAB_1471768c3:
  FMassEntityQuery::~FMassEntityQuery(&local_368);
  return bVar6;
}

