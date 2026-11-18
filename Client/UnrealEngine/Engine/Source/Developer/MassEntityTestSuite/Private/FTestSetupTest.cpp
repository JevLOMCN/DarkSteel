// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// PopulatePhasesConfig @ 147199c60

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassProcessingPhasesTest::FTestSetupTest::PopulatePhasesConfig(FTestSetupTest *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UMassTestStaticCounterProcessor *pUVar6;
  UMassProcessor *pUVar7;
  TObjectPtr<UMassProcessor>_u_0 local_b8 [2];
  UMassTestStaticCounterProcessor *local_a8;
  UMassTestStaticCounterProcessor *local_a0;
  TObjectPtr<UMassProcessor>_u_0 *local_98;
  TObjectPtr<UMassProcessor>_u_0 *local_90;
  TObjectPtr<UMassProcessor>_u_0 *local_88;
  TObjectPtr<UMassProcessor>_u_0 *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  void *local_20;
  TObjectPtr<UMassProcessor> *local_18;
  
  puVar1 = &this->field_0xb0;
  pUVar6 = GetMutableDefault<UMassTestStaticCounterProcessor>();
  local_98 = local_b8;
  local_a8 = pUVar6;
  local_a0 = pUVar6;
  pUVar7 = (UMassProcessor *)UE::CoreUObject::Private::MakeObjectHandle((UObject *)pUVar6);
  local_98->DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UMassTestStaticCounterProcessor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_90 = *(TObjectPtr<UMassProcessor>_u_0 **)puVar1;
  local_88 = local_90;
  local_80 = local_90;
  if ((local_90 <= local_b8) &&
     (local_78 = *(longlong *)puVar1, local_70 = local_78, local_68 = local_78,
     local_b8 <
     (TObjectPtr<UMassProcessor>_u_0 *)(local_78 + (longlong)*(int *)&this->field_0xbc * 8))) {
    local_60 = 0;
    local_5c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_40 = (longlong)*(int *)&this->field_0xb8;
    local_38 = (longlong)*(int *)&this->field_0xbc;
    local_58 = *(undefined8 *)puVar1;
    local_50 = local_58;
    local_48 = local_58;
    local_30 = local_58;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(int *)&this->field_0xb8 == *(int *)&this->field_0xbc) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar1,(int *)&this->field_0xbc);
    *(int *)&this->field_0xb8 = iVar5;
  }
  iVar5 = *(int *)&this->field_0xb8;
  *(int *)&this->field_0xb8 = *(int *)&this->field_0xb8 + 1;
  local_28 = *(longlong *)puVar1;
  local_20 = (void *)(local_28 + (longlong)iVar5 * 8);
  local_18 = ::operator_new(8,local_20);
  TObjectPtr<UMassProcessor>::TObjectPtr<UMassProcessor>
            (local_18,(TObjectPtr<UMassProcessor> *)&local_b8[0].ObjectPtr);
  return true;
}

// SetUp @ 1471aa410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FMassProcessingPhasesTest::FTestSetupTest::SetUp(FTestSetupTest *this)

{
  bool bVar1;
  
  bVar1 = FProcessingPhasesTestBase::SetUp((FProcessingPhasesTestBase *)this);
  if (bVar1) {
    UMassTestStaticCounterProcessor::StaticCounter = -1;
  }
  return bVar1;
}

// Update @ 1471b1670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FMassProcessingPhasesTest::FTestSetupTest::Update(FTestSetupTest *this)

{
  FProcessingPhasesTestBase::Update((FProcessingPhasesTestBase *)this);
  return 2 < *(int *)&this->field_0x160;
}

// VerifyLatentResults @ 1471b2030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FMassProcessingPhasesTest::FTestSetupTest::VerifyLatentResults(FTestSetupTest *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FAutomationTestBase *pFVar4;
  FString local_20 [2];
  
  FProcessingPhasesTestBase::VerifyLatentResults((FProcessingPhasesTestBase *)this);
  pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
  iVar2 = UMassTestStaticCounterProcessor::StaticCounter;
  iVar1 = *(int *)&this->field_0x160;
  ::FString::FString(local_20,
                     "Expecting the UMassTestStaticCounterProcessor getting ticked as many times as the test ticked"
                    );
  bVar3 = FTestHelpers::TestEqual<int,int>(local_20,iVar2,iVar1,pFVar4);
  ::FString::~FString(local_20);
  if (!bVar3) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return;
}

