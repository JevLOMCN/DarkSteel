// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14716fa40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::CreationContext::FManualCreate::InstantTest(FManualCreate *this)

{
  bool bVar1;
  FCreationContext *pFVar2;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_1f0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_1e0;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  int local_1c0;
  int local_1bc;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_1b8;
  FMassEntityManager *local_1a8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_1a0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_198;
  FAutomationTestBase *local_190;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_188;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_180;
  FMassEntityManager *local_178;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_170;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_168;
  FAutomationTestBase *local_160;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_158;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_150;
  FAutomationTestBase *local_148;
  FMassEntityManager *local_140;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_138;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_130;
  FAutomationTestBase *local_128;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_120;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_118;
  FAutomationTestBase *local_110;
  FMassEntityManager *local_108;
  FMassEntityManager *local_100;
  FCreationContext *local_f8;
  FAutomationTestBase *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  FMassEntityManager *local_e0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_d8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_c8;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_68;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_58;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_48;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_38;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_28;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_18;
  
  local_e8 = 6;
  local_e4 = 7;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1e0.AllocatorInstance);
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1e0.AllocatorInstance);
  local_e0 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::GetOrMakeCreationContext(local_e0,&local_1f0);
  local_1a8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::GetOrMakeCreationContext(local_1a8,&local_d8);
  local_190 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_1a0 = &local_68;
  local_188 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
              TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_1a0,&local_d8);
  local_198 = &local_58;
  local_180 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
              TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_198,&local_1f0);
  ::FString::FString(&local_a8,
                     L"Two back to back creation context fetching should result in the same instance"
                    );
  bVar1 = FTestHelpers::
          TestEqual<TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>,TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>_>
                    (&local_a8,local_180,local_188,local_190);
  local_1d0 = (uint)!bVar1;
  ::FString::~FString(&local_a8);
  if (!bVar1) {
    AITestSuite::ConditionallyBreakOnTestFail();
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_d8);
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1f0);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1e0);
    bVar1 = false;
  }
  else {
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_d8);
    local_178 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassEntityManager::BatchCreateEntities
              (local_178,&local_c8,(FMassArchetypeHandle *)&this->field_0x60,6,&local_1e0);
    local_160 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_170 = &local_48;
    local_158 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
                TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_170,&local_c8);
    local_168 = &local_38;
    local_150 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
                TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_168,&local_1f0);
    ::FString::FString(&local_98,L"Creating entities should return the original context");
    bVar1 = FTestHelpers::
            TestEqual<TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>,TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>_>
                      (&local_98,local_150,local_158,local_160);
    local_1cc = (uint)!bVar1;
    ::FString::~FString(&local_98);
    if (!bVar1) {
      AITestSuite::ConditionallyBreakOnTestFail();
      TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
      ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_c8);
      TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
      ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1f0);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1e0);
      bVar1 = false;
    }
    else {
      TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
      ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_c8);
      local_148 = FAITestBase::GetTestRunner((FAITestBase *)this);
      pFVar2 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->(&local_1f0);
      bVar1 = ObserverManager::FCreationContext::DebugAreEntityCollectionsUpToDate(pFVar2);
      bVar1 = FAutomationTestBase::TestTrue
                        (local_148,
                         L"CreationContext\'s entity collection should be still valid at this moment since we only added one entity collection/array"
                         ,bVar1);
      if (bVar1) {
        local_140 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        FMassEntityManager::BatchCreateEntities
                  (local_140,&local_1b8,(FMassArchetypeHandle *)&this->field_0x60,6,&local_1e0);
        local_128 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_138 = &local_28;
        local_120 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
                    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_138,&local_1b8);
        local_130 = &local_18;
        local_118 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
                    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_130,&local_1f0);
        ::FString::FString(&local_88,L"Creating entities should return the original context");
        bVar1 = FTestHelpers::
                TestEqual<TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>,TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>_>
                          (&local_88,local_118,local_120,local_128);
        local_1c8 = (uint)!bVar1;
        ::FString::~FString(&local_88);
        if (!bVar1) {
          AITestSuite::ConditionallyBreakOnTestFail();
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
          ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1b8);
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
          ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1f0);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1e0);
          bVar1 = false;
        }
        else {
          local_110 = FAITestBase::GetTestRunner((FAITestBase *)this);
          pFVar2 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->(&local_1b8)
          ;
          bVar1 = ObserverManager::FCreationContext::DebugAreEntityCollectionsUpToDate(pFVar2);
          bVar1 = FAutomationTestBase::TestTrue
                            (local_110,
                             L"CreationContext\'s entity collection should be still valid, because we\'re only piling up consistent entity collections"
                             ,bVar1);
          if (bVar1) {
            TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
            ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1b8);
            local_f8 = TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::operator->
                                 (&local_1f0);
            local_108 = *(FMassEntityManager **)&this->field_0x28;
            local_100 = local_108;
            ObserverManager::FCreationContext::GetEntityCollections(local_f8,&local_b8,local_108);
            local_f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_1c0 = local_b8.ArrayNum;
            local_1bc = local_b8.ArrayNum;
            ::FString::FString(&local_78,
                               L"We expect the number of resulting collections to match expectations"
                              );
            bVar1 = FTestHelpers::TestEqual<int,int>(&local_78,local_1bc,1,local_f0);
            local_1c4 = (uint)!bVar1;
            ::FString::~FString(&local_78);
            if (!bVar1) {
              AITestSuite::ConditionallyBreakOnTestFail();
              TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_b8);
              TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
              ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1f0);
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1e0);
              bVar1 = false;
            }
            else {
              TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_b8);
              TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
              ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1f0);
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1e0);
              bVar1 = true;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
            ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1b8);
            TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
            ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1f0);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1e0);
            bVar1 = false;
          }
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_1f0);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1e0);
        bVar1 = false;
      }
    }
  }
  return bVar1;
}

