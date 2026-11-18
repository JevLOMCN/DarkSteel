// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147147b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassCompositeProcessorTest::FCompositeProcessorTest_Empty::InstantTest
          (FCompositeProcessorTest_Empty *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  undefined1 auStack_628 [32];
  undefined1 local_608;
  UMassCompositeProcessor *local_600;
  FProcessingContext local_5f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_628;
  pUVar4 = GetTransientPackageAsObject();
  local_600 = NewObject<UMassCompositeProcessor>(pUVar4);
  if (local_600 == (UMassCompositeProcessor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeProcessor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassCompositeProcessorTest.cpp"
                       ,0x18,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  UE::Mass::FProcessingContext::FProcessingContext
            (&local_5f8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,0.0,true);
  UE::Mass::Executor::Run((UMassProcessor *)local_600,&local_5f8);
  local_608 = 1;
  UE::Mass::FProcessingContext::~FProcessingContext(&local_5f8);
  return (bool)local_608;
}

