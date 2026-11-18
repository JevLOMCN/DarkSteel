// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147158bb0

/* WARNING: Removing unreachable block (ram,0x000147158be2) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityStorageTest::FEntityStorageTest_MixedOperationsBase::InstantTest
          (FEntityStorageTest_MixedOperationsBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  longlong lVar5;
  TArrayView<FMassEntityHandle_const_,int> *pTVar6;
  TArray<int,TSizedDefaultAllocator<32>_> local_170;
  EEntityOperation local_160;
  uint local_15c;
  undefined4 local_158;
  uint local_154;
  EEntityOperation local_150;
  int local_14c;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_148;
  int local_138;
  int local_134;
  FScriptContainerElement *local_130;
  undefined8 *local_128;
  TSharedPtr<FMassEntityManager,1> local_120;
  TSharedPtr<FMassEntityManager,1> *local_110;
  TSharedPtr<FMassEntityManager,1> *local_108;
  TArrayView<FMassEntityHandle_const_,int> *local_100;
  FAutomationTestBase *local_f8;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  EEntityOperation *local_78;
  undefined1 *local_70;
  FScriptContainerElement *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  TSharedPtr<FMassEntityManager,1> *local_58;
  FString local_50;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  local_128 = (undefined8 *)&this->field_0x28;
  local_158 = 1;
  local_15c = (uint)(0 < *(int *)&this->field_0x30);
  if (local_15c == 0) {
    local_60 = 0;
    local_5c = 0;
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
  local_110 = (TSharedPtr<FMassEntityManager,1> *)*local_128;
  local_108 = local_110;
  local_58 = local_110;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>(&local_120,local_110);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_170.AllocatorInstance);
  local_170.ArrayNum = 0;
  local_170.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_170.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_148.AllocatorInstance);
  local_148.ArrayNum = 0;
  local_148.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_148.AllocatorInstance);
  local_160 = Operation_BatchReserve;
  while( true ) {
    local_138 = local_148.ArrayNum;
    if ((*(int *)&this->field_0x4c <= local_148.ArrayNum) ||
       (local_134 = local_170.ArrayNum, *(int *)&this->field_0x50 <= local_170.ArrayNum)) {
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_148);
      TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_170);
      TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(&local_120);
      return true;
    }
    FEntityStorageTestBase::PerformOperation
              ((FEntityStorageTestBase *)this,local_160,&local_120,&local_148);
    local_100 = &local_28;
    pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
             TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                       (local_100,&local_148);
    pTVar6 = &local_38;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)&pTVar6->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
      pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
      pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    }
    bVar2 = FEntityStorageTestBase::ValidateUniqueAndValidEntities
                      ((FEntityStorageTestBase *)this,&local_120,&local_38);
    local_f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_50,"Testing for duplicates");
    bVar2 = FAutomationTestBase::TestTrue(local_f8,&local_50,bVar2);
    local_154 = (uint)!bVar2;
    ::FString::~FString(&local_50);
    if (!bVar2) break;
    local_150 = local_160;
    local_130 = (FScriptContainerElement *)&local_150;
    local_f0 = local_170.AllocatorInstance.Data;
    local_e8 = local_170.AllocatorInstance.Data;
    local_e0 = local_170.AllocatorInstance.Data;
    if (local_170.AllocatorInstance.Data <= local_130) {
      local_d8 = local_170.AllocatorInstance.Data;
      local_d0 = local_170.AllocatorInstance.Data;
      local_c8 = local_170.AllocatorInstance.Data;
      if (local_130 < local_170.AllocatorInstance.Data + (longlong)local_170.ArrayMax * 4) {
        local_c0 = 0;
        local_bc = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_a0 = (longlong)local_170.ArrayNum;
        local_98 = (longlong)local_170.ArrayMax;
        local_b8 = local_170.AllocatorInstance.Data;
        local_b0 = local_170.AllocatorInstance.Data;
        local_a8 = local_170.AllocatorInstance.Data;
        local_68 = local_170.AllocatorInstance.Data;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
    }
    if (local_170.ArrayNum == local_170.ArrayMax) {
      local_170.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_170.AllocatorInstance,&local_170.ArrayMax);
    }
    local_14c = local_170.ArrayNum;
    local_88 = local_170.AllocatorInstance.Data;
    local_80 = local_170.AllocatorInstance.Data + (longlong)local_170.ArrayNum * 4;
    local_170.ArrayNum = local_170.ArrayNum + 1;
    local_78 = ::operator_new(4,local_80);
    *local_78 = local_150;
    local_90 = local_14c;
    local_70 = &this->field_0x5c;
    local_160 = FRandomStream::RandRange((FRandomStream *)local_70,0,3);
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_148);
  TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_170);
  TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(&local_120);
  return false;
}

