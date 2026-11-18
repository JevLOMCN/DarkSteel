// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147187630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147187a78) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FSharedFragment_BatchAddToEntity::InstantTest
          (FSharedFragment_BatchAddToEntity *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TArrayView<FMassEntityHandle,int> *pTVar5;
  TArrayView<FMassArchetypeEntityCollection,int> *pTVar6;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar7;
  longlong lVar8;
  TArrayView<FMassEntityHandle_const_,int> *pTVar9;
  undefined1 *puVar10;
  TArrayView<FMassEntityHandle_const_,int> *pTVar11;
  float fVar12;
  undefined1 auStackY_388 [32];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_320;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_310;
  FMassEntityHandle *local_300;
  FMassArchetypeHandle local_2f8;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2c8;
  int local_2c4;
  TArrayView<FMassEntityHandle_const_,int> *local_2c0;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  FMassArchetypeHandle local_2a8;
  FTestConstSharedFragment_Int *local_298;
  FConstSharedStruct local_290;
  FMassEntityHandle *local_280;
  FMassEntityHandle *local_278;
  FMassEntityHandle *local_270;
  FMassEntityHandle *local_268;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_260;
  FMassEntityManager *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  FMassEntityHandle *local_248;
  FMassEntityHandle *local_240;
  FMassEntityHandle *local_238;
  FMassEntityHandle local_230;
  FMassEntityManager *local_228;
  FMassArchetypeData *local_220;
  FMassArchetypeData *local_218;
  FAutomationTestBase *local_210;
  FMassEntityHandle *local_1f0;
  FMassEntityHandle *local_1e8;
  FMassEntityHandle *local_1e0;
  FMassEntityHandle local_1d8;
  FMassEntityManager *local_1d0;
  FAutomationTestBase *local_1c8;
  FAutomationTestBase *local_1c0;
  FMassArchetypeData *local_1b8;
  FMassArchetypeData *local_1b0;
  FMassEntityManager *local_1a8;
  FMassEntityHandle *local_1a0;
  FMassEntityHandle *local_198;
  FString local_190;
  TArrayView<FMassEntityHandle_const_,int> local_180;
  FString local_170;
  FString local_160;
  FMassArchetypeEntityCollection local_150;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_108;
  TArrayView<FMassEntityHandle_const_,int> local_f8;
  undefined1 local_e8 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_d8;
  TArrayView<FMassEntityHandle,int> local_c8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_b8;
  TArrayView<FMassArchetypeEntityCollection,int> local_a8;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_2d4 = 0x3ff;
  FMassArchetypeHandle::FMassArchetypeHandle(&local_2f8,(FMassArchetypeHandle *)&this->field_0x50);
  bVar2 = FMassArchetypeHandle::IsValid(&local_2f8);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_1b8 = local_2f8.DataPtr.Object;
  local_1b0 = local_2f8.DataPtr.Object;
  iVar4 = FMassArchetypeData::GetNumEntitiesPerChunk(local_2f8.DataPtr.Object);
  fVar12 = ((float)iVar4 * __real_400ccccd + (float)iVar4 * __real_400ccccd) - __real_3f000000;
  local_128 = ZEXT416((uint)fVar12);
  local_2e0 = (int)ROUND(fVar12) >> 1;
  fVar12 = ((float)iVar4 * __real_3f99999a + (float)iVar4 * __real_3f99999a) - __real_3f000000;
  local_118 = ZEXT416((uint)fVar12);
  iVar4 = (int)ROUND(fVar12) >> 1;
  local_2e8 = iVar4;
  local_2e4 = iVar4;
  local_2c4 = local_2e0;
  local_2b8 = local_2e0;
  local_2b4 = local_2e0;
  local_2b0 = iVar4;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_310.AllocatorInstance);
  local_310.ArrayNum = 0;
  local_310.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_310.AllocatorInstance);
  local_1a8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities(local_1a8,&local_108,&local_2f8,local_2e0,&local_310);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_108);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_320.AllocatorInstance);
  local_2dc = local_310.ArrayNum;
  local_2d8 = local_310.ArrayNum;
  local_1a0 = (FMassEntityHandle *)local_310.AllocatorInstance.Data;
  local_198 = (FMassEntityHandle *)local_310.AllocatorInstance.Data;
  local_280 = (FMassEntityHandle *)local_310.AllocatorInstance.Data;
  local_278 = (FMassEntityHandle *)local_310.AllocatorInstance.Data;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::CopyToEmpty<FMassEntityHandle,int>
            (&local_320,(FMassEntityHandle *)local_310.AllocatorInstance.Data,local_310.ArrayNum,0);
  Algo::RandomShuffle<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&>(&local_320);
  local_270 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_268 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  pTVar5 = MakeArrayView<FMassEntityHandle>
                     (&local_c8,(FMassEntityHandle *)local_320.AllocatorInstance.Data,iVar4);
  TArrayView<FMassEntityHandle_const_,int>::
  TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
            (&local_180,pTVar5);
  pTVar9 = &local_180;
  pTVar11 = &local_f8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar11->DataPtr = *(undefined1 *)&pTVar9->DataPtr;
    pTVar9 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar9->DataPtr + 1);
    pTVar11 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar11->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_150,&local_2f8,&local_f8,NoDuplicates);
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  FConstSharedStruct::Make<FTestConstSharedFragment_Int,int_const_&>(&local_290,&local_2d4);
  FMassArchetypeSharedFragmentValues::Add(&local_98,&local_290);
  local_258 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_260 = &local_b8;
  pTVar6 = MakeArrayView<FMassArchetypeEntityCollection>(&local_a8,&local_150,1);
  pTVar7 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
                     (local_260,pTVar6);
  puVar10 = local_e8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar7->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_e8;
  pTVar7 = &local_d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar7 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar7->DataPtr + 1);
  }
  FMassEntityManager::BatchAddSharedFragmentsForEntities(local_258,&local_d8,&local_98);
  local_228 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  if (local_320.ArrayNum < 1) {
    local_250 = 0;
    local_24c = 0;
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
  local_248 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_240 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_238 = (FMassEntityHandle *)local_320.AllocatorInstance.Data;
  local_230 = *(FMassEntityHandle *)local_320.AllocatorInstance.Data;
  FMassEntityManager::GetArchetypeForEntityUnsafe(local_228,&local_2a8,local_230);
  bVar2 = FMassArchetypeHandle::IsValid(&local_2a8);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_220 = local_2a8.DataPtr.Object;
  local_218 = local_2a8.DataPtr.Object;
  local_2d0 = FMassArchetypeData::GetNumEntities(local_2a8.DataPtr.Object);
  local_210 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_190,"Number of entities moves needs to match expectations");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_190,local_2d0,iVar4,local_210);
  ::FString::~FString(&local_190);
  if (bVar2) {
    local_2c0 = &local_180;
    local_1f0 = local_180.DataPtr + local_180.ArrayNum;
    local_1e8 = local_1f0;
    for (local_300 = local_180.DataPtr; local_300 != local_1e8; local_300 = local_300 + 1) {
      local_1e0 = local_300;
      local_1d0 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_1d8 = *local_1e0;
      local_298 = FMassEntityManager::GetConstSharedFragmentDataPtr<FTestConstSharedFragment_Int>
                            (local_1d0,local_1d8);
      local_1c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      ::FString::FString(&local_170,"Every entity moved needs to have a valid shared fragment");
      bVar2 = FAutomationTestBase::TestNotNull<FTestConstSharedFragment_Int>
                        (local_1c8,&local_170,local_298);
      ::FString::~FString(&local_170);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_2a8);
        FConstSharedStruct::~FConstSharedStruct(&local_290);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_150);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_320);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_310);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_2f8);
        return false;
      }
      local_1c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_2c8 = local_298->Value;
      ::FString::FString(&local_160,"The shared fragment\'s value needs to match expectations");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_160,local_2c8,0x3ff,local_1c0);
      ::FString::~FString(&local_160);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_2a8);
        FConstSharedStruct::~FConstSharedStruct(&local_290);
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_150);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_320);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_310);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_2f8);
        return false;
      }
    }
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_2a8);
    FConstSharedStruct::~FConstSharedStruct(&local_290);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_150);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_320);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_310);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_2f8);
    bVar2 = true;
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_2a8);
    FConstSharedStruct::~FConstSharedStruct(&local_290);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
    FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_150);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_320);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_310);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_2f8);
    bVar2 = false;
  }
  return bVar2;
}

