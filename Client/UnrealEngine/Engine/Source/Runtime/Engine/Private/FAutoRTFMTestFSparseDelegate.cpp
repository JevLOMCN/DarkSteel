// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487ee6c0

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
_anon_689E48D4::FAutoRTFMTestFSparseDelegate::Run
          (FAutoRTFMTestFSparseDelegate *this,UWorld *param_1,UAutoRTFMTestLevel *param_2,
          AAutoRTFMTestActor *param_3,UAutoRTFMTestPrimitiveComponent *param_4)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UAutoRTFMTestObject *pUVar4;
  char *pcVar5;
  char *pcVar6;
  FName local_28 [2];
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UAutoRTFMTestObject>(pUVar3);
  UActorComponent::RegisterComponent((UActorComponent *)param_4);
  pcVar5 = strstr("&UAutoRTFMTestObject::OnComponentPhysicsStateChanged","::");
  if (pcVar5 == (char *)0x0) {
LAB_1487ee74b:
    pcVar6 = &DAT_00000002;
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_1487ee74b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 != '0') goto LAB_1487ee77e;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1487ee77e:
  ::FName::FName(local_28,pcVar6);
  TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
  ::__Internal_AddDynamic<UAutoRTFMTestObject>
            ((TSparseDynamicDelegate<FComponentPhysicsStateChanged_MCSignature,UPrimitiveComponent,FComponentPhysicsStateChangedInfoGetter>
              *)((longlong)&param_4->_padding_ + 6),pUVar4,(pmf_d30b1ac4)0x14884b970,local_28[0]);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Object->bHitOnComponentPhysicsStateChanged",
             pUVar4->bHitOnComponentPhysicsStateChanged);
  UActorComponent::UnregisterComponent((UActorComponent *)param_4);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Object->bHitOnComponentPhysicsStateChanged",
             pUVar4->bHitOnComponentPhysicsStateChanged);
  UActorComponent::UnregisterComponent((UActorComponent *)param_4);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Object->bHitOnComponentPhysicsStateChanged",
             pUVar4->bHitOnComponentPhysicsStateChanged);
  return;
}

