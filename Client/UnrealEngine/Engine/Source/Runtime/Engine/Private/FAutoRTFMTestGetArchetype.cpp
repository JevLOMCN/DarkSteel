// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487d36c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
_anon_689E48D4::FAutoRTFMTestGetArchetype::Run
          (FAutoRTFMTestGetArchetype *this,UWorld *param_1,UAutoRTFMTestLevel *param_2,
          AAutoRTFMTestActor *param_3,UAutoRTFMTestPrimitiveComponent *param_4)

{
  UObject::GetArchetype((UObject *)param_3);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  return;
}

