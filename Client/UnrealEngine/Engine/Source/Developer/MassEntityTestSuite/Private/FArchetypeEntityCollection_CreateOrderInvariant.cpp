// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 1471285b0

/* WARNING: Removing unreachable block (ram,0x0001471285e2) */
/* WARNING: Removing unreachable block (ram,0x0001471286c8) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_CreateOrderInvariant::InstantTest
          (FArchetypeEntityCollection_CreateOrderInvariant *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  longlong lVar5;
  TArrayView<FMassEntityHandle_const_,int> *pTVar6;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_150;
  int local_140;
  int local_13c;
  longlong *local_138;
  FMassEntityHandle *local_130;
  longlong local_128;
  longlong local_120;
  FMassEntityHandle *local_118;
  TArrayView<FMassEntityHandle_const_,int> *local_110;
  FRandomStream local_108;
  TArrayView<FMassEntityHandle_const_,int> *local_100;
  FAutomationTestBase *local_f8;
  FAutomationTestBase *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  FString local_e0;
  FString local_d0;
  FMassArchetypeEntityCollection local_c0;
  TArrayView<FMassEntityHandle_const_,int> local_98;
  TArrayView<FMassEntityHandle_const_,int> local_88;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_78;
  FMassArchetypeEntityCollection local_68;
  TArrayView<FMassEntityHandle_const_,int> local_40;
  TArrayView<FMassEntityHandle_const_,int> local_30 [2];
  
  local_138 = (longlong *)&this->field_0x90;
  if (*(int *)&this->field_0x98 < 0xb) {
    local_e8 = 0;
    local_e4 = 0;
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
  local_128 = *local_138;
  local_130 = (FMassEntityHandle *)(local_128 + 0x50);
  local_120 = local_128;
  local_118 = local_130;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_150.AllocatorInstance);
  if ((local_130 == (FMassEntityHandle *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x2d3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::CopyToEmpty<FMassEntityHandle,int>
            (&local_150,local_130,0x1e,0);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::RemoveAt(&local_150,10,No);
  local_110 = &local_40;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_110,&local_150);
  pTVar6 = &local_98;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_c0,(FMassArchetypeHandle *)&this->field_0x50,&local_98,NoDuplicates);
  FRandomStream::FRandomStream(&local_108,0);
  ShuffleDataWithRandomStream<FMassEntityHandle>(&local_108,&local_150);
  local_100 = local_30;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_100,&local_150);
  pTVar6 = &local_88;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_68,(FMassArchetypeHandle *)&this->field_0x50,&local_88,NoDuplicates);
  local_f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = FMassArchetypeEntityCollection::IsSame(&local_c0,&local_68);
  ::FString::FString(&local_e0,
                     "The resulting chunk collection should be the same regardless of the order of input entities"
                    );
  bVar2 = FAutomationTestBase::TestTrue(local_f8,&local_e0,bVar2);
  ::FString::~FString(&local_e0);
  if (bVar2) {
    FMassArchetypeEntityCollection::GetRanges(&local_c0,&local_78);
    local_f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_140 = local_78.ArrayNum;
    local_13c = local_78.ArrayNum;
    ::FString::FString(&local_d0,"The result should contain two chunks");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_d0,local_13c,2,local_f0);
    ::FString::~FString(&local_d0);
    if (bVar2) {
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_68);
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_c0);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_150);
      bVar2 = true;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_68);
      FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_c0);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_150);
      bVar2 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_68);
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_c0);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_150);
    bVar2 = false;
  }
  return bVar2;
}

