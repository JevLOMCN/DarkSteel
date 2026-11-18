// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487eece0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
_anon_689E48D4::FAutoRTFMTestChildActor::Run
          (FAutoRTFMTestChildActor *this,UWorld *param_1,UAutoRTFMTestLevel *param_2,
          AAutoRTFMTestActor *param_3,UAutoRTFMTestPrimitiveComponent *param_4)

{
  UChildActorComponent *this_00;
  UClass *pUVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  UChildActorComponent *local_e8;
  UObject *local_e0;
  undefined8 local_d8 [5];
  undefined8 local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UAutoRTFMTestChildActorComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._8_8_ = param_3;
  local_e8 = (UChildActorComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_AAutoRTFMTestAnotherActor_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._8_8_ = pUVar2;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  UActorComponent::RegisterComponentWithWorld
            ((UActorComponent *)local_e8,param_1,(FRegisterComponentContext *)0x0);
  this_00 = local_e8;
  local_e0 = *(UObject **)&pUVar2->field_0x10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e0);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e0);
  }
  UChildActorComponent::SetChildActorClass(this_00,(TSubclassOf<AActor>)&local_e0,(AActor *)0x0);
  if ((local_e8->ChildActor).field0_0x0.DebugPtr != (AActor *)0x0) {
    UChildActorComponent::DestroyChildActor(local_e8);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,
               L"AutoRTFM::ETransactionResult::AbortedByRequest == Result",false);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"nullptr != ChildActorComponent->GetChildActor()",
               (local_e8->ChildActor).field0_0x0.DebugPtr != (AActor *)0x0);
    UChildActorComponent::DestroyChildActor(local_e8);
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::Committed == Result",true
              );
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"nullptr == ChildActorComponent->GetChildActor()",
               (local_e8->ChildActor).field0_0x0.DebugPtr == (AActor *)0x0);
  }
  local_d8[0] = 0;
  local_b0 = 0;
  (**(code **)(*(longlong *)local_e8 + 0x640))(local_e8,local_d8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"nullptr == ChildActorComponent->GetChildActor()",
             (local_e8->ChildActor).field0_0x0.DebugPtr == (AActor *)0x0);
  local_d8[0] = 0;
  local_b0 = 0;
  (**(code **)(*(longlong *)local_e8 + 0x640))(local_e8,local_d8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::Committed == Result",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"nullptr != ChildActorComponent->GetChildActor()",
             (local_e8->ChildActor).field0_0x0.DebugPtr != (AActor *)0x0);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,
             L"ChildActorComponent->GetChildActor()->HasAnyFlags(EObjectFlags::RF_MirroredGarbage)",
             (bool)((byte)((uint)(int)((local_e8->ChildActor).field0_0x0.DebugPtr)->_padding_ >>
                          0x1e) & 1));
  pFVar3 = FUObjectArray::IndexToObject
                     (&GUObjectArray,
                      *(int *)((longlong)&((local_e8->ChildActor).field0_0x0.DebugPtr)->_padding_ +
                              4));
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,
             L"ChildActorComponent->GetChildActor()->HasAnyInternalFlags(EInternalObjectFlags::Garbage)"
             ,(bool)((byte)((ulonglong)((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15) & 1)
            );
  UChildActorComponent::DestroyChildActor(local_e8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"nullptr != ChildActorComponent->GetChildActor()",
             (local_e8->ChildActor).field0_0x0.DebugPtr != (AActor *)0x0);
  UChildActorComponent::DestroyChildActor(local_e8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::Committed == Result",true);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"nullptr == ChildActorComponent->GetChildActor()",
             (local_e8->ChildActor).field0_0x0.DebugPtr == (AActor *)0x0);
  return;
}

