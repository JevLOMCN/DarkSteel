// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487d52f0

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
_anon_689E48D4::FAutoRTFMTestReconstructActor::Run
          (FAutoRTFMTestReconstructActor *this,UWorld *param_1,UAutoRTFMTestLevel *param_2,
          AAutoRTFMTestActor *param_3,UAutoRTFMTestPrimitiveComponent *param_4)

{
  bool bVar1;
  UObject *pUVar2;
  longlong lVar3;
  int local_res8 [2];
  AAutoRTFMTestActor *local_68;
  FWeakObjectPtr local_60;
  FName local_58;
  UPackage *local_50;
  AAutoRTFMTestActor *local_48;
  UPackage **local_40;
  FName *local_38;
  FAutoRTFMTestReconstructActor *local_30;
  AAutoRTFMTestActor **local_28;
  FWeakObjectPtr *local_20;
  int *local_18;
  
  ::FName::FName(&local_58,L"MyObjectToBeReplaced");
  local_50 = GetTransientPackage();
  local_68 = NewObject<AAutoRTFMTestActor>
                       ((UObject *)local_50,local_58,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"0 == Old->ActorCategory",
             *(char *)((longlong)&local_68->_padding_ + 1) == '\0');
  local_48 = local_68;
  *(undefined1 *)((longlong)&local_68->_padding_ + 1) = 0x7b;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_68 != (AAutoRTFMTestActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_68);
  }
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_48 != (AAutoRTFMTestActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48);
  }
  FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_48);
  bVar1 = TWeakObjectPtr<AAutoRTFMTestActor,FWeakObjectPtr>::UEOpEquals<AAutoRTFMTestActor,bool>
                    ((TWeakObjectPtr<AAutoRTFMTestActor,FWeakObjectPtr> *)&local_60,local_68);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"OldWeak == Old",bVar1);
  lVar3 = 5;
  local_res8[0] = *(int *)((longlong)&local_68->_padding_ + 4);
  do {
    pUVar2 = GetTransientPackageAsObject();
    NewObject<AAutoRTFMTestActor>(pUVar2);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  local_40 = &local_50;
  local_38 = &local_58;
  local_28 = &local_68;
  local_20 = &local_60;
  local_18 = local_res8;
  local_30 = this;
  AutoRTFM::
  AutoRTFMFunctorInvoker<__anonymous_namespace_::FAutoRTFMTestReconstructActor::Run_::__l2::<lambda_1>_>
            (&local_40);
  ::FDebug::AssertFailed
            ("AUTORTFM_TESTING_ASSERT(ETransactionResult::Committed != Result)",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutoRTFM\\Public\\AutoRTFMTesting.h"
             ,0x20,L"");
  bVar1 = TWeakObjectPtr<AAutoRTFMTestActor,FWeakObjectPtr>::UEOpEquals<AAutoRTFMTestActor,bool>
                    ((TWeakObjectPtr<AAutoRTFMTestActor,FWeakObjectPtr> *)&local_60,local_68);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"OldWeak == Old",bVar1);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"OldID == Old->GetUniqueID()",
             local_res8[0] == *(int *)((longlong)&local_68->_padding_ + 4));
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"123 == Old->ActorCategory",
             *(char *)((longlong)&local_68->_padding_ + 1) == '{');
  NewObject<AAutoRTFMTestActor>
            ((UObject *)local_50,local_58,RF_NoFlags,(UObject *)0x0,false,
             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return;
}

