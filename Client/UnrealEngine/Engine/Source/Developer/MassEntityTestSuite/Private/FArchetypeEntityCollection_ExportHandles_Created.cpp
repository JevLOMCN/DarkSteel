// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fbb30

bool __thiscall
`FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_ExportHandles_Created::InstantTest'
::__l2::<lambda_1>::operator()(void *this,FMassEntityHandle *param_1)

{
  float fVar1;
  
  fVar1 = FRandomStream::GetFraction(*(FRandomStream **)this);
  return fVar1 < __real_3f000000;
}

// InstantTest @ 14712e790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_ExportHandles_Created::InstantTest
          (FArchetypeEntityCollection_ExportHandles_Created *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  longlong lVar5;
  FMassArchetypeSharedFragmentValues *pFVar6;
  TArrayView<FMassEntityHandle_const_,int> *pTVar7;
  undefined1 auStackY_1c8 [32];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_190;
  int local_180;
  int local_17c;
  int local_178;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_170;
  FMassArchetypeHandle local_160;
  undefined4 local_150;
  FMassArchetypeData *local_148;
  FMassArchetypeData *local_140;
  FMassEntityManager *local_138;
  FRandomStream local_130;
  FRandomStream *local_128;
  FRandomStream **local_120;
  TArrayView<FMassEntityHandle_const_,int> *local_118;
  FAutomationTestBase *local_110;
  FString local_108;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_f8;
  TArrayView<FMassEntityHandle_const_,int> local_e8;
  FMassArchetypeEntityCollection local_d8;
  TArrayView<FMassEntityHandle_const_,int> local_b0;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FMassArchetypeHandle::FMassArchetypeHandle(&local_160,(FMassArchetypeHandle *)&this->field_0x50);
  bVar2 = FMassArchetypeHandle::IsValid(&local_160);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_148 = local_160.DataPtr.Object;
  local_140 = local_160.DataPtr.Object;
  local_180 = FMassArchetypeData::GetNumEntitiesPerChunk(local_160.DataPtr.Object);
  local_150 = 3;
  local_17c = local_180 * 3;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_190.AllocatorInstance);
  local_190.ArrayNum = 0;
  local_190.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_190.AllocatorInstance);
  local_138 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar6 = &local_98;
  for (lVar5 = 0x68; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pFVar6->HashCache = 0;
    pFVar6 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar6->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  FMassEntityManager::BatchCreateEntities
            (local_138,&local_f8,&local_160,&local_98,local_17c,&local_190);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_f8);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
  FRandomStream::FRandomStream(&local_130,0);
  local_128 = &local_130;
  local_120 = &local_128;
  local_178 = Algo::
              StableRemoveIf<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,_FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_ExportHandles_Created::InstantTest_::__l2::<lambda_1>_>
                        (&local_190,(<lambda_1>)local_128);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::SetNum(&local_190,local_178,Default);
  local_118 = &local_b0;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_118,&local_190);
  pTVar7 = &local_e8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_d8,&local_160,&local_e8,NoDuplicates);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_170.AllocatorInstance);
  local_170.ArrayNum = 0;
  local_170.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_170.AllocatorInstance);
  FMassArchetypeEntityCollection::ExportEntityHandles(&local_d8,&local_170);
  local_110 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = Algo::
          Compare<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                    (&local_170,&local_190);
  ::FString::FString(&local_108,"Exported handles are the same as the input data");
  bVar2 = FAutomationTestBase::TestTrue(local_110,&local_108,bVar2);
  ::FString::~FString(&local_108);
  if (bVar2) {
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_170);
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_d8);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_190);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_160);
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_170);
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_d8);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_190);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_160);
  }
  return bVar2;
}

