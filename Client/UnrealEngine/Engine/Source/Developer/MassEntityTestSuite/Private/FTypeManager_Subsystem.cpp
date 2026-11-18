// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147190130

/* WARNING: Enum "<unnamed-enum-GameThreadOnly>": Some values do not have unique names */

bool __thiscall UE::Mass::Test::FTypeManager_Subsystem::InstantTest(FTypeManager_Subsystem *this)

{
  bool bVar1;
  FSubsystemTypeTraits FVar2;
  FAutomationTestBase *pFVar3;
  bool local_64;
  bool bStack_63;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FVar2 = FSubsystemTypeTraits::Make<UMassTestWorldSubsystem>();
  pFVar3 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_38,"Subsystem bGameThreadOnly value");
  local_64 = FVar2.bGameThreadOnly;
  bVar1 = FTestHelpers::
          TestEqual<bool,enum_TMassExternalSubsystemTraits<UMassTestWorldSubsystem>::<unnamed_enum_GameThreadOnly>_>
                    (&local_38,local_64,GameThreadOnly,pFVar3);
  ::FString::~FString(&local_38);
  if (bVar1) {
    pFVar3 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_28,"Subsystem ThreadSafeWrite value");
    bStack_63 = FVar2.bThreadSafeWrite;
    bVar1 = FTestHelpers::
            TestEqual<bool,enum_TMassExternalSubsystemTraits<UMassTestWorldSubsystem>::<unnamed_enum_GameThreadOnly>_>
                      (&local_28,bStack_63,GameThreadOnly,pFVar3);
    ::FString::~FString(&local_28);
    if (bVar1) {
      FSharedFragmentTypeTraits::Make<FTestSharedFragment_Int>();
      pFVar3 = FAITestBase::GetTestRunner((FAITestBase *)this);
      ::FString::FString(&local_18,"Shared fragment bGameThreadOnly value");
      bVar1 = FTestHelpers::
              TestEqual<bool,enum_TMassExternalSubsystemTraits<UMassTestWorldSubsystem>::<unnamed_enum_GameThreadOnly>_>
                        (&local_18,local_64,GameThreadOnly,pFVar3);
      ::FString::~FString(&local_18);
      if (bVar1) {
        bVar1 = true;
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        bVar1 = false;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      bVar1 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    bVar1 = false;
  }
  return bVar1;
}

