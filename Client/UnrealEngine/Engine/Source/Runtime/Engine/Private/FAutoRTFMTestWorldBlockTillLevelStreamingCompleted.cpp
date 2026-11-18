// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487d4820

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
_anon_689E48D4::FAutoRTFMTestWorldBlockTillLevelStreamingCompleted::Run
          (FAutoRTFMTestWorldBlockTillLevelStreamingCompleted *this,UWorld *param_1,
          UAutoRTFMTestLevel *param_2,AAutoRTFMTestActor *param_3,
          UAutoRTFMTestPrimitiveComponent *param_4)

{
  FName FVar1;
  code *pcVar2;
  UWorld *pUVar3;
  FName *pFVar4;
  UClass *pUVar5;
  ULevelStreaming *pUVar6;
  longlong *plVar7;
  undefined1 auStack_118 [32];
  UWorld *local_f8;
  undefined1 local_f0 [24];
  FUtf8String local_d8;
  UWorld *local_c8;
  FName local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8 = param_1;
  pFVar4 = ::FName::FName(&local_c0,L"WOWWEE");
  pUVar3 = local_f8;
  FVar1 = *pFVar4;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)local_f8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar5 = Z_Construct_UClass_ULevelStreamingPersistent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._8_8_ = pUVar3;
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._16_8_ = FVar1;
  pUVar6 = (ULevelStreaming *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar7 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  pUVar3 = local_f8;
  pcVar2 = *(code **)(pUVar6->_padding_ + 0x2d8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_f8);
  }
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_f0._0_8_ = 0;
  local_f0._16_8_ = 0;
  local_f0._8_8_ = 0;
  FUtf8String::Reset(&local_d8,0);
  local_c8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_f0,(FObjectPtr)&local_c8);
  (*pcVar2)(pUVar6,local_f0);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  UWorld::AddStreamingLevel(local_f8,pUVar6);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"World->HasStreamingLevelsToConsider()",
             0 < (local_f8->StreamingLevelsToConsider).StreamingLevels.ArrayNum);
  UWorld::BlockTillLevelStreamingCompleted(local_f8);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"World->HasStreamingLevelsToConsider()",
             0 < (local_f8->StreamingLevelsToConsider).StreamingLevels.ArrayNum);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::Committed == Result",true);
  return;
}

