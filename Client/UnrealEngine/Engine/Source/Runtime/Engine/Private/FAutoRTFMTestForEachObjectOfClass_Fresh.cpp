// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487d6650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
_anon_689E48D4::FAutoRTFMTestForEachObjectOfClass_Fresh::Run
          (FAutoRTFMTestForEachObjectOfClass_Fresh *this,UWorld *param_1,UAutoRTFMTestLevel *param_2
          ,AAutoRTFMTestActor *param_3,UAutoRTFMTestPrimitiveComponent *param_4)

{
  UClass *pUVar1;
  longlong local_res8;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [16];
  
  local_20 = &local_28;
  local_18._8_8_ = &local_20;
  local_28 = 0;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``anonymous_namespace'::CountAAutoRTFMTestActors'::__l2::<lambda_1>,void,UObject_*>
       ::Call;
  pUVar1 = Z_Construct_UClass_AAutoRTFMTestActor_NoRegister();
  ForEachObjectOfClass
            (pUVar1,(TFunctionRef<void___cdecl(UObject_*)> *)local_18,true,RF_ClassDefaultObject,
             Borrowed);
  local_res8 = local_28;
  local_20 = &local_28;
  local_18._8_8_ = &local_20;
  local_28 = 0;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``anonymous_namespace'::CountAAutoRTFMTestActors'::__l2::<lambda_1>,void,UObject_*>
       ::Call;
  pUVar1 = Z_Construct_UClass_AAutoRTFMTestActor_NoRegister();
  ForEachObjectOfClass
            (pUVar1,(TFunctionRef<void___cdecl(UObject_*)> *)local_18,true,RF_ClassDefaultObject,
             Borrowed);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"CountAAutoRTFMTestActors() == InitialCount",
             local_28 == local_res8);
  local_18._8_8_ = &local_res8;
  local_18._0_8_ = this;
  AutoRTFM::
  AutoRTFMFunctorInvoker<__anonymous_namespace_::FAutoRTFMTestForEachObjectOfClass_Fresh::Run_::__l2::<lambda_1>_>
            (local_18);
  ::FDebug::AssertFailed
            ("AUTORTFM_TESTING_ASSERT(ETransactionResult::Committed != Result)",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutoRTFM\\Public\\AutoRTFMTesting.h"
             ,0x20,L"");
  local_20 = &local_28;
  local_28 = 0;
  local_18._8_8_ = &local_20;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``anonymous_namespace'::CountAAutoRTFMTestActors'::__l2::<lambda_1>,void,UObject_*>
       ::Call;
  pUVar1 = Z_Construct_UClass_AAutoRTFMTestActor_NoRegister();
  ForEachObjectOfClass
            (pUVar1,(TFunctionRef<void___cdecl(UObject_*)> *)local_18,true,RF_ClassDefaultObject,
             Borrowed);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"CountAAutoRTFMTestActors() == InitialCount",
             local_28 == local_res8);
  return;
}

