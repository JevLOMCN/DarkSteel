// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487d64e0

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
_anon_689E48D4::FAutoRTFMTestReconstructCameraShake::Run
          (FAutoRTFMTestReconstructCameraShake *this,UWorld *param_1,UAutoRTFMTestLevel *param_2,
          AAutoRTFMTestActor *param_3,UAutoRTFMTestPrimitiveComponent *param_4)

{
  UAutoRTFMTestCameraShake *pUVar1;
  FName local_28;
  UAutoRTFMTestCameraShake *local_20;
  UPackage *local_18;
  
  ::FName::FName(&local_28,L"ShakyMcShakeface");
  local_18 = GetTransientPackage();
  pUVar1 = NewObject<UAutoRTFMTestCameraShake>
                     ((UObject *)local_18,local_28,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"1.0 == Old->ShakeScale",
             __real_3f800000 == *(float *)&pUVar1->field_0x2c);
  *(undefined4 *)&pUVar1->field_0x2c = 0x42f60000;
  local_20 = (UAutoRTFMTestCameraShake *)0x0;
  local_20 = NewObject<UAutoRTFMTestCameraShake>
                       ((UObject *)local_18,local_28,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  ::FDebug::AssertFailed
            ("AUTORTFM_TESTING_ASSERT(ETransactionResult::Committed != Result)",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutoRTFM\\Public\\AutoRTFMTesting.h"
             ,0x20,L"");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"nullptr == New",
             local_20 == (UAutoRTFMTestCameraShake *)0x0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"123 == Old->ShakeScale",
             __real_42f60000 == *(float *)&pUVar1->field_0x2c);
  return;
}

