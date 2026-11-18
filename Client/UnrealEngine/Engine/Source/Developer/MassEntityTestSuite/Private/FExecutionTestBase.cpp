// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// SetUp @ 1471a63f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FExecutionTestBase::SetUp(FExecutionTestBase *this)

{
  FMassEntityManager *pFVar1;
  TRawPtrProxy<FMassEntityManager> TVar2;
  UWorld *local_48;
  undefined1 local_28 [40];
  
  pFVar1 = ::operator_new(0x7d8);
  if (pFVar1 != (FMassEntityManager *)0x0) {
    if (this->bMakeWorldEntityManagersOwner == false) {
      local_48 = (UWorld *)0x0;
    }
    else {
      local_48 = FAITestHelpers::GetWorld();
    }
    FMassEntityManager::FMassEntityManager(pFVar1,(UObject *)local_48);
  }
  TVar2 = MakeShareable<FMassEntityManager>((FMassEntityManager *)local_28);
  TSharedPtr<FMassEntityManager,1>::operator=<FMassEntityManager>
            (&this->EntityManager,(TRawPtrProxy<FMassEntityManager> *)TVar2.Object);
  pFVar1 = TSharedPtr<FMassEntityManager,1>::operator->(&this->EntityManager);
  ::FString::FString((FString *)(local_28 + 8),L"MassEntityTestSuite");
  FMassEntityManager::SetDebugName(pFVar1,(FString *)(local_28 + 8));
  ::FString::~FString((FString *)(local_28 + 8));
  pFVar1 = TSharedPtr<FMassEntityManager,1>::operator->(&this->EntityManager);
  FMassEntityManager::Initialize(pFVar1);
  pFVar1 = TSharedPtr<FMassEntityManager,1>::operator->(&this->EntityManager);
  FMassEntityManager::PostInitialize(pFVar1);
  return true;
}

// TearDown @ 1471abcc0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FExecutionTestBase::TearDown(FExecutionTestBase *this)

{
  FMassEntityManager *this_00;
  
  FAITestBase::TearDown((FAITestBase *)this);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->(&this->EntityManager);
  FMassEntityManager::Deinitialize(this_00);
  TSharedPtr<FMassEntityManager,1>::operator=(&this->EntityManager,(FNullTag *)0x0);
  return;
}

