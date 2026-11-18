// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// Update @ 1471b0d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddGCShield::Update
          (FDynamicProcessorsAddGCShield *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FOutputDeviceRedirector *pFVar4;
  
  plVar3 = &GEngine->_padding_;
  pcVar1 = *(code **)(GEngine->_padding_ + 8);
  pFVar4 = GetGlobalLogSingleton();
  (*pcVar1)(plVar3,*(undefined8 *)&this->field_0x178,L"obj gc",pFVar4);
  bVar2 = FDynamicProcessorsAddTrivial::Update((FDynamicProcessorsAddTrivial *)this);
  return bVar2;
}

// VerifyLatentResults @ 1471b1a50

void __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddGCShield::VerifyLatentResults
          (FDynamicProcessorsAddGCShield *this)

{
  bool bVar1;
  FAutomationTestBase *this_00;
  UMassTestProcessorBase *pUVar2;
  FString local_18;
  
  FDynamicProcessorsAddTrivial::VerifyLatentResults((FDynamicProcessorsAddTrivial *)this);
  this_00 = FAITestBase::GetTestRunner((FAITestBase *)this);
  pUVar2 = (UMassTestProcessorBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x198);
  ::FString::FString(&local_18,
                     "Expecting the dynamic processor to be valid regardless of multiple garbage collections"
                    );
  bVar1 = FAutomationTestBase::TestNotNull<UMassTestProcessorBase>(this_00,&local_18,pUVar2);
  ::FString::~FString(&local_18);
  if (!bVar1) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return;
}

