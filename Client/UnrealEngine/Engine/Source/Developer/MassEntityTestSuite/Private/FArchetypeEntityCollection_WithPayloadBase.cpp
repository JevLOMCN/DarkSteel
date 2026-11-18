// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// SetUp @ 14719d9d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_WithPayloadBase::SetUp
          (FArchetypeEntityCollection_WithPayloadBase *this)

{
  int iVar1;
  FMassEntityManager *pFVar2;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_20 [2];
  
  FEntityTestBase::SetUp((FEntityTestBase *)this);
  pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar1 = FMassEntityManager::DebugGetArchetypeEntitiesCountPerChunk
                    (pFVar2,(FMassArchetypeHandle *)&this->field_0x50);
  pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (pFVar2,local_20,(FMassArchetypeHandle *)&this->field_0x50,iVar1 << 1,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x90);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_20);
  return true;
}

