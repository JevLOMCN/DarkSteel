// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487d6450

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
_anon_689E48D4::FAutoRTFMTestReconstructActorThenObtainWeakPtr::Run
          (FAutoRTFMTestReconstructActorThenObtainWeakPtr *this,UWorld *param_1,
          UAutoRTFMTestLevel *param_2,AAutoRTFMTestActor *param_3,
          UAutoRTFMTestPrimitiveComponent *param_4)

{
  AAutoRTFMTestActor *local_res20;
  AAutoRTFMTestActor **local_18;
  FAutoRTFMTestReconstructActorThenObtainWeakPtr *local_10;
  
  local_18 = &local_res20;
  local_res20 = param_3;
  local_10 = this;
  AutoRTFM::
  AutoRTFMFunctorInvoker<__anonymous_namespace_::FAutoRTFMTestReconstructActorThenObtainWeakPtr::Run_::__l2::<lambda_1>_>
            (&local_18);
  ::FDebug::AssertFailed
            ("AUTORTFM_TESTING_ASSERT(ETransactionResult::Committed != Result)",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutoRTFM\\Public\\AutoRTFMTesting.h"
             ,0x20,L"");
  return;
}

