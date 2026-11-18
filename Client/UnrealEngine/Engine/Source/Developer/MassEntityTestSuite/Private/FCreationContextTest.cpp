// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147150c20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::CreationContext::FCreationContextTest::InstantTest(FCreationContextTest *this)

{
  bool bVar1;
  FCreationContext *this_00;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_108;
  int local_f8;
  int local_f4;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_f0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_e0;
  FMassEntityManager *local_d0;
  FMassEntityManager *local_c8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_c0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_b8;
  FAutomationTestBase *local_b0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_a8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_a0;
  FAutomationTestBase *local_98;
  FMassEntityManager *local_90;
  FMassEntityManager *local_88;
  FCreationContext *local_80;
  FAutomationTestBase *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  FString local_40;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_30;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_20 [2];
  
  local_70 = 6;
  local_6c = 7;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_108.AllocatorInstance);
  local_108.ArrayNum = 0;
  local_108.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_108.AllocatorInstance);
  local_d0 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_d0,&local_f0,(FMassArchetypeHandle *)&this->field_0x60,6,&local_108);
  local_c8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_c8,&local_e0,(FMassArchetypeHandle *)&this->field_0x50,7,&local_108);
  local_68 = 2;
  local_b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_c0 = &local_30;
  local_a8 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
             TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_c0,&local_e0);
  local_b8 = local_20;
  local_a0 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
             TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_b8,&local_f0);
  ::FString::FString(&local_50,
                     L"Two back to back entity creation operations should result in the same creation context"
                    );
  bVar1 = FTestHelpers::
          TestEqual<TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>,TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>_>
                    (&local_50,local_a0,local_a8,local_b0);
  ::FString::~FString(&local_50);
  if (bVar1) {
    local_98 = FAITestBase::GetTestRunner((FAITestBase *)this);
    this_00 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->(&local_f0);
    bVar1 = ObserverManager::FCreationContext::DebugAreEntityCollectionsUpToDate(this_00);
    bVar1 = FAutomationTestBase::TestTrue
                      (local_98,
                       L"CreationContext\'s entity collection should be still valid since we only created two consistent collections of entities"
                       ,bVar1);
    if (bVar1) {
      local_80 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->(&local_f0);
      local_90 = *(FMassEntityManager **)&this->field_0x28;
      local_88 = local_90;
      ObserverManager::FCreationContext::GetEntityCollections(local_80,&local_60,local_90);
      local_78 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_f8 = local_60.ArrayNum;
      local_f4 = local_60.ArrayNum;
      ::FString::FString(&local_40,
                         L"We expect the number of resulting collections to match expectations");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_40,local_f4,2,local_78);
      ::FString::~FString(&local_40);
      if (bVar1) {
        TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_60);
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_e0);
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_f0);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_108);
        bVar1 = true;
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_60);
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_e0);
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_f0);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_108);
        bVar1 = false;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
      ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_e0);
      TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
      ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_f0);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_108);
      bVar1 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_e0);
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_f0);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_108);
    bVar1 = false;
  }
  return bVar1;
}

