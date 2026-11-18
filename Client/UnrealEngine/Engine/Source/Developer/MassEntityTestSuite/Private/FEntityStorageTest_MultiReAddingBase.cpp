// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147159140

/* WARNING: Removing unreachable block (ram,0x00014715916f) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityStorageTest::FEntityStorageTest_MultiReAddingBase::InstantTest
          (FEntityStorageTest_MultiReAddingBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  longlong lVar5;
  TArrayView<FMassEntityHandle_const_,int> *pTVar6;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_f0;
  uint local_e0;
  undefined4 local_dc;
  uint local_d8;
  uint local_d4;
  TSharedPtr<FMassEntityManager,1> local_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  TSharedPtr<FMassEntityManager,1> *local_b0;
  TSharedPtr<FMassEntityManager,1> *local_a8;
  TSharedPtr<FMassEntityManager,1> *local_a0;
  TArrayView<FMassEntityHandle_const_,int> *local_98;
  FAutomationTestBase *local_90;
  TArrayView<FMassEntityHandle_const_,int> *local_88;
  FAutomationTestBase *local_80;
  FString local_78;
  FString local_68;
  TArrayView<FMassEntityHandle_const_,int> local_58;
  TArrayView<FMassEntityHandle_const_,int> local_48;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  local_c0 = (undefined8 *)&this->field_0x28;
  local_dc = 1;
  local_e0 = (uint)(0 < *(int *)&this->field_0x30);
  if (local_e0 == 0) {
    local_b8 = 0;
    local_b4 = 0;
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
  local_b0 = (TSharedPtr<FMassEntityManager,1> *)*local_c0;
  local_a8 = local_b0;
  local_a0 = local_b0;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>(&local_d0,local_b0);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_f0.AllocatorInstance)
  ;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_f0.AllocatorInstance);
  FEntityStorageTestBase::PerformOperation
            ((FEntityStorageTestBase *)this,Operation_BatchReserve,&local_d0,&local_f0);
  FEntityStorageTestBase::PerformOperation
            ((FEntityStorageTestBase *)this,Operation_BatchDestroy,&local_d0,&local_f0);
  FEntityStorageTestBase::PerformOperation
            ((FEntityStorageTestBase *)this,Operation_BatchReserve,&local_d0,&local_f0);
  local_90 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_98 = &local_38;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_98,&local_f0);
  pTVar6 = &local_58;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  bVar2 = FEntityStorageTestBase::ValidateUniqueAndValidEntities
                    ((FEntityStorageTestBase *)this,&local_d0,&local_58);
  ::FString::FString(&local_78,"Testing for duplicates after first readding");
  bVar2 = FAutomationTestBase::TestTrue(local_90,&local_78,bVar2);
  local_d8 = (uint)!bVar2;
  ::FString::~FString(&local_78);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_f0);
    TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(&local_d0);
    bVar2 = false;
  }
  else {
    FEntityStorageTestBase::PerformOperation
              ((FEntityStorageTestBase *)this,Operation_BatchReserve,&local_d0,&local_f0);
    local_80 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_88 = &local_28;
    pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
             TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                       (local_88,&local_f0);
    pTVar6 = &local_48;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)&pTVar6->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
      pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
      pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    }
    bVar2 = FEntityStorageTestBase::ValidateUniqueAndValidEntities
                      ((FEntityStorageTestBase *)this,&local_d0,&local_48);
    ::FString::FString(&local_68,"Testing for duplicates after n+1 readding");
    bVar2 = FAutomationTestBase::TestTrue(local_80,&local_68,bVar2);
    local_d4 = (uint)!bVar2;
    ::FString::~FString(&local_68);
    if (!bVar2) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_f0);
      TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(&local_d0);
      bVar2 = false;
    }
    else {
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_f0);
      TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(&local_d0);
      bVar2 = true;
    }
  }
  return bVar2;
}

