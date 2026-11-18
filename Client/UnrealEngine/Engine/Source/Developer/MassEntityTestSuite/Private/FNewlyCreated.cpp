// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147171640

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::EntityCollection::FNewlyCreated::InstantTest(FNewlyCreated *this)

{
  bool bVar1;
  TArrayView<FMassEntityHandle_const_,int> *this_00;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar2;
  FEntityCollection local_e0;
  FAutomationTestBase *local_b8;
  FAutomationTestBase *local_b0;
  FAutomationTestBase *local_a8;
  FAutomationTestBase *local_a0;
  FMassEntityManager *local_98;
  FAutomationTestBase *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_28;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_18;
  
  FEntityCollection::FEntityCollection(&local_e0);
  local_b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar1 = FEntityCollection::IsEmpty(&local_e0);
  ::FString::FString(&local_88,"Newly created collection is empty");
  bVar1 = FAutomationTestBase::TestTrue(local_b8,&local_88,bVar1);
  ::FString::~FString(&local_88);
  if (bVar1) {
    local_b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    bVar1 = FEntityCollection::IsUpToDate(&local_e0);
    ::FString::FString(&local_78,"Newly created collection is up-to-date");
    bVar1 = FAutomationTestBase::TestTrue(local_b0,&local_78,bVar1);
    ::FString::~FString(&local_78);
    if (bVar1) {
      local_a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      this_00 = FEntityCollection::GetEntityHandlesView(&local_e0,&local_38);
      bVar1 = TArrayView<FMassEntityHandle_const_,int>::IsEmpty(this_00);
      ::FString::FString(&local_68,"Newly created collection contains no entity handles");
      bVar1 = FAutomationTestBase::TestTrue(local_a8,&local_68,bVar1);
      ::FString::~FString(&local_68);
      if (bVar1) {
        local_a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pTVar2 = FEntityCollection::GetCachedPerArchetypeCollections(&local_e0,&local_28);
        bVar1 = TArrayView<FMassArchetypeEntityCollection_const_,int>::IsEmpty(pTVar2);
        ::FString::FString(&local_58,"Newly created collection contains no archetype collections");
        bVar1 = FAutomationTestBase::TestTrue(local_a0,&local_58,bVar1);
        ::FString::~FString(&local_58);
        if (bVar1) {
          local_90 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_98 = *(FMassEntityManager **)&this->field_0x28;
          pTVar2 = FEntityCollection::GetUpToDatePerArchetypeCollections
                             (&local_e0,&local_18,local_98);
          bVar1 = TArrayView<FMassArchetypeEntityCollection_const_,int>::IsEmpty(pTVar2);
          ::FString::FString(&local_48,
                             "Newly created collection contains no archetype collections after rebuilding them"
                            );
          bVar1 = FAutomationTestBase::TestTrue(local_90,&local_48,bVar1);
          ::FString::~FString(&local_48);
          if (bVar1) {
            FEntityCollection::~FEntityCollection(&local_e0);
            bVar1 = true;
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            FEntityCollection::~FEntityCollection(&local_e0);
            bVar1 = false;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          FEntityCollection::~FEntityCollection(&local_e0);
          bVar1 = false;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        FEntityCollection::~FEntityCollection(&local_e0);
        bVar1 = false;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      FEntityCollection::~FEntityCollection(&local_e0);
      bVar1 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    FEntityCollection::~FEntityCollection(&local_e0);
    bVar1 = false;
  }
  return bVar1;
}

