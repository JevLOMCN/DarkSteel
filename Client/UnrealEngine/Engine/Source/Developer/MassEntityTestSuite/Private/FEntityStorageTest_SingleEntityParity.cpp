// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147159ee0

/* WARNING: Removing unreachable block (ram,0x000147159f0d) */
/* WARNING: Removing unreachable block (ram,0x00014715a00f) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityStorageTest::FEntityStorageTest_SingleEntityParity::InstantTest
          (FEntityStorageTest_SingleEntityParity *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityManager *pFVar4;
  FAutomationTestBase *pFVar5;
  FMassEntityHandle local_60;
  FMassEntityHandle local_50;
  FString local_20 [2];
  
  if (*(int *)&this->field_0x30 < 1) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     (*(TSharedPtr<FMassEntityManager,1> **)&this->field_0x28);
  FMassEntityManager::ReserveEntity(pFVar4);
  if (*(int *)&this->field_0x30 < 2) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)(*(longlong *)&this->field_0x28 + 0x10));
  FMassEntityManager::ReserveEntity(pFVar4);
  pFVar5 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(local_20,
                     "The reserved entities are expected to be the same, regardless of the storage type"
                    );
  bVar2 = FTestHelpers::TestEqual<FMassEntityHandle,FMassEntityHandle>
                    (local_20,local_50,local_60,pFVar5);
  ::FString::~FString(local_20);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return bVar2;
}

