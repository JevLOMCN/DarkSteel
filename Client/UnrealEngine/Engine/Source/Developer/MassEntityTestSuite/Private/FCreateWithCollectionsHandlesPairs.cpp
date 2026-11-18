// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14714b9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014714bbb3) */
/* WARNING: Removing unreachable block (ram,0x00014714bcfd) */
/* WARNING: Removing unreachable block (ram,0x00014714be41) */
/* WARNING: Removing unreachable block (ram,0x00014714bff8) */
/* WARNING: Removing unreachable block (ram,0x00014714c100) */
/* WARNING: Removing unreachable block (ram,0x00014714c5e6) */
/* WARNING: Removing unreachable block (ram,0x00014714c6f5) */
/* WARNING: Removing unreachable block (ram,0x00014714cb19) */
/* WARNING: Removing unreachable block (ram,0x00014714cc28) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityCollection::FCreateWithCollectionsHandlesPairs::InstantTest
          (FCreateWithCollectionsHandlesPairs *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> *piVar5;
  initializer_list<FMassArchetypeEntityCollection> *piVar6;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar7;
  longlong lVar8;
  undefined1 *puVar9;
  initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> *piVar10;
  TArrayView<FMassEntityHandle_const_,int> *pTVar11;
  initializer_list<FMassArchetypeEntityCollection> *piVar12;
  undefined1 auStack_778 [32];
  undefined8 local_758;
  longlong local_750;
  bool local_748;
  char local_747;
  undefined1 local_746;
  bool local_745;
  char local_744;
  undefined1 local_743;
  char local_742;
  undefined1 local_741;
  char local_740;
  undefined1 local_73f;
  bool local_73e;
  char local_73d;
  undefined1 local_73c;
  char local_73b;
  undefined1 local_73a;
  char local_739;
  undefined1 local_738;
  bool local_737;
  char local_736;
  undefined1 local_735;
  char local_734;
  undefined1 local_733;
  char local_732;
  undefined1 local_731;
  bool local_730;
  char local_72f;
  undefined1 local_72e;
  undefined1 local_72d;
  TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_728;
  int local_718;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_710;
  uint local_700;
  undefined4 local_6fc;
  uint local_6f8;
  undefined4 local_6f4;
  uint local_6f0;
  undefined4 local_6ec;
  uint local_6e8;
  undefined4 local_6e4;
  uint local_6e0;
  uint local_6dc;
  uint local_6d8;
  uint local_6d4;
  uint local_6d0;
  undefined4 local_6cc;
  uint local_6c8;
  undefined4 local_6c4;
  uint local_6c0;
  uint local_6bc;
  uint local_6b8;
  uint local_6b4;
  undefined4 local_6b0;
  uint local_6ac;
  undefined4 local_6a8;
  uint local_6a4;
  uint local_6a0;
  uint local_69c;
  uint local_698;
  uint local_694;
  undefined4 local_690;
  FEntityCollection local_688;
  int local_660;
  int local_65c;
  int local_658;
  int local_654;
  int local_650;
  int local_64c;
  int local_648;
  int local_644;
  int local_640;
  int local_63c;
  int local_638;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_630;
  int local_620;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_618;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_610;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_608;
  TArrayView<FMassEntityHandle_const_,int> *local_600;
  undefined4 local_5f8;
  undefined4 local_5f4;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_5f0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_5e8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_5e0;
  TArrayView<FMassEntityHandle_const_,int> *local_5d8;
  undefined4 local_5d0;
  undefined4 local_5cc;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_5c8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_5c0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_5b8;
  TArrayView<FMassEntityHandle_const_,int> *local_5b0;
  undefined4 local_5a8;
  undefined4 local_5a4;
  FMassArchetypeEntityCollection *local_5a0;
  FMassArchetypeEntityCollection *local_598;
  FMassArchetypeEntityCollection *local_590;
  undefined4 local_588;
  undefined4 local_584;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_580;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_578;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_570;
  TArrayView<FMassEntityHandle_const_,int> *local_568;
  FMassArchetypeEntityCollection *local_560;
  FAutomationTestBase *local_558;
  FAutomationTestBase *local_550;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_548;
  FAutomationTestBase *local_540;
  TArrayView<FMassEntityHandle_const_,int> *local_538;
  FAutomationTestBase *local_530;
  undefined4 local_528;
  undefined4 local_524;
  FMassArchetypeEntityCollection *local_520;
  FMassArchetypeEntityCollection *local_518;
  FMassArchetypeEntityCollection *local_510;
  undefined4 local_508;
  undefined4 local_504;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_500;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_4f8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_4f0;
  TArrayView<FMassEntityHandle_const_,int> *local_4e8;
  FMassArchetypeEntityCollection *local_4e0;
  FAutomationTestBase *local_4d8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_4d0;
  FAutomationTestBase *local_4c8;
  TArrayView<FMassEntityHandle_const_,int> *local_4c0;
  FAutomationTestBase *local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  FMassArchetypeEntityCollection *local_4a8;
  FMassArchetypeEntityCollection *local_4a0;
  FMassArchetypeEntityCollection *local_498;
  undefined4 local_490;
  undefined4 local_48c;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_488;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_480;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_478;
  TArrayView<FMassEntityHandle_const_,int> *local_470;
  FMassArchetypeEntityCollection *local_468;
  FAutomationTestBase *local_460;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_458;
  FAutomationTestBase *local_450;
  TArrayView<FMassEntityHandle_const_,int> *local_448;
  FAutomationTestBase *local_440;
  FMassEntityManager *local_438;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_430;
  FAutomationTestBase *local_428;
  TArrayView<FMassEntityHandle_const_,int> *local_420;
  TArrayView<FMassEntityHandle_const_,int> *local_418;
  TArrayView<FMassEntityHandle_const_,int> *local_410;
  undefined4 local_408;
  undefined4 local_404;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  TArrayView<FMassEntityHandle_const_,int> local_348;
  TArrayView<FMassEntityHandle_const_,int> local_338;
  initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> local_328;
  TArrayView<FMassEntityHandle_const_,int> local_318;
  TArrayView<FMassEntityHandle_const_,int> local_308;
  TArrayView<FMassEntityHandle_const_,int> local_2f8;
  initializer_list<FMassArchetypeEntityCollection> local_2e8;
  undefined1 local_2d8 [16];
  TArrayView<FMassEntityHandle_const_,int> local_2c8;
  undefined1 local_2b8 [16];
  TArrayView<FMassEntityHandle_const_,int> local_2a8;
  undefined1 local_298 [16];
  TArrayView<FMassEntityHandle_const_,int> local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_258;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_248;
  TArrayView<FMassEntityHandle_const_,int> local_238;
  TArrayView<FMassEntityHandle_const_,int> local_228;
  TArrayView<FMassEntityHandle_const_,int> local_218;
  initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> local_208;
  TArrayView<FMassEntityHandle_const_,int> local_1f8;
  TArrayView<FMassEntityHandle_const_,int> local_1e8;
  TArrayView<FMassEntityHandle_const_,int> local_1d8;
  initializer_list<FMassArchetypeEntityCollection> local_1c8;
  TArrayView<FMassEntityHandle_const_,int> local_1b8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_1a8;
  TArrayView<FMassEntityHandle_const_,int> local_198;
  TArrayView<FMassEntityHandle_const_,int> local_188;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_178;
  TArrayView<FMassEntityHandle_const_,int> local_168;
  TArrayView<FMassEntityHandle_const_,int> local_158;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_148;
  TArrayView<FMassEntityHandle_const_,int> local_138;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_128;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_118;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_108;
  TArrayView<FMassEntityHandle_const_,int> local_f8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_b8;
  FMassArchetypeEntityCollection local_a8;
  FMassArchetypeEntityCollection local_80;
  FMassArchetypeEntityCollection local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_778;
  local_718 = *(int *)&this->field_0xc0 / 3;
  local_420 = &local_f8;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_420,
                      (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x90);
  pTVar11 = &local_238;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar11->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar11 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar11->DataPtr + 1);
  }
  FEntityCollectionTestBase::GetArraySubset
            ((FEntityCollectionTestBase *)this,&local_e8,&local_238,local_718);
  local_418 = &local_228;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_418,
                      (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xa0);
  pTVar11 = &local_348;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar11->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar11 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar11->DataPtr + 1);
  }
  FEntityCollectionTestBase::GetArraySubset
            ((FEntityCollectionTestBase *)this,&local_d8,&local_348,local_718);
  local_410 = &local_218;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_410,
                      (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xb0);
  pTVar11 = &local_338;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar11->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar11 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar11->DataPtr + 1);
  }
  FEntityCollectionTestBase::GetArraySubset
            ((FEntityCollectionTestBase *)this,&local_c8,&local_338,local_718);
  piVar5 = std::initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (&local_208,&local_e8,&local_b8);
  piVar10 = &local_328;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&piVar10->_First = *(undefined1 *)&piVar5->_First;
    piVar5 = (initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
    piVar10 = (initializer_list<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_> *)
              ((longlong)&piVar10->_First + 1);
  }
  TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (&local_728,&local_328);
  _vector_destructor_iterator_
            (&local_e8,0x10,3,
             TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
             ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>);
  local_600 = &local_1f8;
  local_690 = 1;
  local_694 = (uint)(0 < local_728.ArrayNum);
  if (local_694 == 0) {
    local_408 = 0;
    local_404 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_750 = (longlong)local_728.ArrayNum;
    local_758 = 0;
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
  local_618 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_728.AllocatorInstance.Data;
  local_610 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_728.AllocatorInstance.Data;
  local_608 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_728.AllocatorInstance.Data;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_600,
                      (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                      local_728.AllocatorInstance.Data);
  pTVar11 = &local_318;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar11->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar11 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar11->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_a8,(FMassArchetypeHandle *)&this->field_0x50,&local_318,NoDuplicates);
  local_5d8 = &local_1e8;
  local_6fc = 1;
  local_700 = (uint)(1 < local_728.ArrayNum);
  if (local_700 == 0) {
    local_5f8 = 0;
    local_5f4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_750 = (longlong)local_728.ArrayNum;
    local_758 = 1;
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
  local_5f0 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_728.AllocatorInstance.Data;
  local_5e8 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_728.AllocatorInstance.Data;
  local_5e0 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              (local_728.AllocatorInstance.Data + 0x10);
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_5d8,local_5e0);
  pTVar11 = &local_308;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar11->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar11 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar11->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_80,(FMassArchetypeHandle *)&this->field_0x60,&local_308,NoDuplicates);
  local_5b0 = &local_1d8;
  local_6f4 = 1;
  local_6f8 = (uint)(2 < local_728.ArrayNum);
  if (local_6f8 == 0) {
    local_5d0 = 0;
    local_5cc = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_750 = (longlong)local_728.ArrayNum;
    local_758 = 2;
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
  local_5c8 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_728.AllocatorInstance.Data;
  local_5c0 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_728.AllocatorInstance.Data;
  local_5b8 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              (local_728.AllocatorInstance.Data + 0x20);
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_5b0,local_5b8);
  pTVar11 = &local_2f8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar11->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    pTVar11 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar11->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_58,(FMassArchetypeHandle *)&this->field_0x70,&local_2f8,NoDuplicates);
  piVar6 = std::initializer_list<FMassArchetypeEntityCollection>::
           initializer_list<FMassArchetypeEntityCollection>
                     (&local_1c8,&local_a8,
                      (FMassArchetypeEntityCollection *)&stack0xffffffffffffffd0);
  piVar12 = &local_2e8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&piVar12->_First = *(undefined1 *)&piVar6->_First;
    piVar6 = (initializer_list<FMassArchetypeEntityCollection> *)((longlong)&piVar6->_First + 1);
    piVar12 = (initializer_list<FMassArchetypeEntityCollection> *)((longlong)&piVar12->_First + 1);
  }
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_710,&local_2e8);
  _vector_destructor_iterator_
            (&local_a8,0x28,3,FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection);
  FEntityCollection::FEntityCollection(&local_688);
  local_6ec = 1;
  local_6f0 = (uint)(0 < local_710.ArrayNum);
  if (local_6f0 == 0) {
    local_5a8 = 0;
    local_5a4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_750 = (longlong)local_710.ArrayNum;
    local_758 = 0;
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
  local_5a0 = (FMassArchetypeEntityCollection *)local_710.AllocatorInstance.Data;
  local_598 = (FMassArchetypeEntityCollection *)local_710.AllocatorInstance.Data;
  local_590 = (FMassArchetypeEntityCollection *)local_710.AllocatorInstance.Data;
  local_560 = (FMassArchetypeEntityCollection *)local_710.AllocatorInstance.Data;
  local_568 = &local_1b8;
  local_6e4 = 1;
  local_6e8 = (uint)(0 < local_728.ArrayNum);
  if (local_6e8 == 0) {
    local_588 = 0;
    local_584 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_750 = (longlong)local_728.ArrayNum;
    local_758 = 0;
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
  local_580 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_728.AllocatorInstance.Data;
  local_578 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_728.AllocatorInstance.Data;
  local_570 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
              local_728.AllocatorInstance.Data;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_568,
                      (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                      local_728.AllocatorInstance.Data);
  puVar9 = local_2d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_2d8;
  pTVar4 = &local_2c8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar4->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
  }
  FEntityCollection::AppendHandles(&local_688,&local_2c8,local_560);
  local_558 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_748 = FEntityCollection::IsEmpty(&local_688);
  ::FString::FString(&local_360,"(NOT) Collection is empty");
  bVar2 = FAutomationTestBase::TestFalse(local_558,&local_360,local_748);
  local_747 = !bVar2;
  local_6e0 = (uint)(byte)local_747;
  ::FString::~FString(&local_360);
  if (local_747 == '\0') {
    local_550 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_745 = FEntityCollection::IsUpToDate(&local_688);
    ::FString::FString(&local_400,"Collection is up-to-date");
    bVar2 = FAutomationTestBase::TestTrue(local_550,&local_400,local_745);
    local_744 = !bVar2;
    local_6dc = (uint)(byte)local_744;
    ::FString::~FString(&local_400);
    if (local_744 == '\0') {
      local_540 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_548 = FEntityCollection::GetCachedPerArchetypeCollections(&local_688,&local_1a8);
      local_63c = local_548->ArrayNum;
      local_638 = local_63c;
      ::FString::FString(&local_3f0,"Collection\'s number of cached archetype collections");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_3f0,local_638,1,local_540);
      local_742 = !bVar2;
      local_6d8 = (uint)(byte)local_742;
      ::FString::~FString(&local_3f0);
      if (local_742 == '\0') {
        local_530 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_538 = FEntityCollection::GetEntityHandlesView(&local_688,&local_198);
        local_660 = local_538->ArrayNum;
        local_65c = local_660;
        ::FString::FString(&local_3e0,"Collection\'s number of stored handles");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_3e0,local_65c,local_718,local_530);
        local_740 = !bVar2;
        local_6d4 = (uint)(byte)local_740;
        ::FString::~FString(&local_3e0);
        if (local_740 == '\0') {
          local_6cc = 1;
          local_6d0 = (uint)(1 < local_710.ArrayNum);
          if (local_6d0 == 0) {
            local_528 = 0;
            local_524 = 0;
            Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_750 = (longlong)local_710.ArrayNum;
            local_758 = 1;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          local_520 = (FMassArchetypeEntityCollection *)local_710.AllocatorInstance.Data;
          local_518 = (FMassArchetypeEntityCollection *)local_710.AllocatorInstance.Data;
          local_510 = (FMassArchetypeEntityCollection *)(local_710.AllocatorInstance.Data + 0x28);
          local_4e8 = &local_188;
          local_6c4 = 1;
          local_6c8 = (uint)(1 < local_728.ArrayNum);
          local_4e0 = local_510;
          if (local_6c8 == 0) {
            local_508 = 0;
            local_504 = 0;
            Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_750 = (longlong)local_728.ArrayNum;
            local_758 = 1;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          local_500 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                      local_728.AllocatorInstance.Data;
          local_4f8 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                      local_728.AllocatorInstance.Data;
          local_4f0 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                      (local_728.AllocatorInstance.Data + 0x10);
          pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
                   TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                             (local_4e8,local_4f0);
          puVar9 = local_2b8;
          for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar9 = *(undefined1 *)&pTVar4->DataPtr;
            pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
            puVar9 = puVar9 + 1;
          }
          puVar9 = local_2b8;
          pTVar4 = &local_2a8;
          for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
            *(undefined1 *)&pTVar4->DataPtr = *puVar9;
            puVar9 = puVar9 + 1;
            pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
          }
          FEntityCollection::AppendHandles(&local_688,&local_2a8,local_4e0);
          local_4d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_73e = FEntityCollection::IsUpToDate(&local_688);
          ::FString::FString(&local_3d0,"Collection is up-to-date");
          bVar2 = FAutomationTestBase::TestTrue(local_4d8,&local_3d0,local_73e);
          local_73d = !bVar2;
          local_6c0 = (uint)(byte)local_73d;
          ::FString::~FString(&local_3d0);
          if (local_73d == '\0') {
            local_4c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_4d0 = FEntityCollection::GetCachedPerArchetypeCollections(&local_688,&local_178);
            local_658 = local_4d0->ArrayNum;
            local_654 = local_658;
            ::FString::FString(&local_3c0,"Collection\'s number of cached archetype collections");
            bVar2 = FTestHelpers::TestEqual<int,int>(&local_3c0,local_654,2,local_4c8);
            local_73b = !bVar2;
            local_6bc = (uint)(byte)local_73b;
            ::FString::~FString(&local_3c0);
            if (local_73b == '\0') {
              local_4b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_4c0 = FEntityCollection::GetEntityHandlesView(&local_688,&local_168);
              local_650 = local_4c0->ArrayNum;
              local_620 = local_650;
              ::FString::FString(&local_3b0,
                                 "Collection\'s number of stored entities after second operation");
              bVar2 = FTestHelpers::TestEqual<int,int>
                                (&local_3b0,local_650,local_718 << 1,local_4b8);
              local_739 = !bVar2;
              local_6b8 = (uint)(byte)local_739;
              ::FString::~FString(&local_3b0);
              if (local_739 == '\0') {
                local_6b0 = 1;
                local_6b4 = (uint)(2 < local_710.ArrayNum);
                if (local_6b4 == 0) {
                  local_4b0 = 0;
                  local_4ac = 0;
                  Core::Private::FormatStringSan::
                  AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                  local_750 = (longlong)local_710.ArrayNum;
                  local_758 = 2;
                  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar2) {
                    pcVar1 = (code *)swi(3);
                    uVar3 = (*pcVar1)();
                    return (bool)uVar3;
                  }
                }
                local_4a8 = (FMassArchetypeEntityCollection *)local_710.AllocatorInstance.Data;
                local_4a0 = (FMassArchetypeEntityCollection *)local_710.AllocatorInstance.Data;
                local_498 = (FMassArchetypeEntityCollection *)
                            (local_710.AllocatorInstance.Data + 0x50);
                local_470 = &local_158;
                local_6a8 = 1;
                local_6ac = (uint)(2 < local_728.ArrayNum);
                local_468 = local_498;
                if (local_6ac == 0) {
                  local_490 = 0;
                  local_48c = 0;
                  Core::Private::FormatStringSan::
                  AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                  local_750 = (longlong)local_728.ArrayNum;
                  local_758 = 2;
                  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar2) {
                    pcVar1 = (code *)swi(3);
                    uVar3 = (*pcVar1)();
                    return (bool)uVar3;
                  }
                }
                local_488 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                            local_728.AllocatorInstance.Data;
                local_480 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                            local_728.AllocatorInstance.Data;
                local_478 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
                            (local_728.AllocatorInstance.Data + 0x20);
                pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
                         TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                                   (local_470,local_478);
                puVar9 = local_298;
                for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *puVar9 = *(undefined1 *)&pTVar4->DataPtr;
                  pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)
                           ((longlong)&pTVar4->DataPtr + 1);
                  puVar9 = puVar9 + 1;
                }
                puVar9 = local_298;
                pTVar4 = &local_288;
                for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *(undefined1 *)&pTVar4->DataPtr = *puVar9;
                  puVar9 = puVar9 + 1;
                  pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)
                           ((longlong)&pTVar4->DataPtr + 1);
                }
                FEntityCollection::AppendHandles(&local_688,&local_288,local_468);
                local_460 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_737 = FEntityCollection::IsUpToDate(&local_688);
                ::FString::FString(&local_3a0,"Collection is up-to-date");
                bVar2 = FAutomationTestBase::TestTrue(local_460,&local_3a0,local_737);
                local_736 = !bVar2;
                local_6a4 = (uint)(byte)local_736;
                ::FString::~FString(&local_3a0);
                if (local_736 == '\0') {
                  local_450 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_458 = FEntityCollection::GetCachedPerArchetypeCollections
                                        (&local_688,&local_148);
                  local_64c = local_458->ArrayNum;
                  local_648 = local_64c;
                  ::FString::FString(&local_390,
                                     "Collection\'s number of cached archetype collections");
                  bVar2 = FTestHelpers::TestEqual<int,int>(&local_390,local_648,3,local_450);
                  local_734 = !bVar2;
                  local_6a0 = (uint)(byte)local_734;
                  ::FString::~FString(&local_390);
                  if (local_734 == '\0') {
                    local_440 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    local_448 = FEntityCollection::GetEntityHandlesView(&local_688,&local_138);
                    local_644 = local_448->ArrayNum;
                    local_640 = local_644;
                    ::FString::FString(&local_380,
                                       "Collection\'s number of stored entities after last operation"
                                      );
                    bVar2 = FTestHelpers::TestEqual<int,int>
                                      (&local_380,local_640,local_718 * 3,local_440);
                    local_732 = !bVar2;
                    local_69c = (uint)(byte)local_732;
                    ::FString::~FString(&local_380);
                    if (local_732 == '\0') {
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                                (&local_630.AllocatorInstance);
                      local_630.ArrayNum = 0;
                      local_630.ArrayMax =
                           TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                                     (&local_630.AllocatorInstance);
                      pTVar7 = FEntityCollection::GetCachedPerArchetypeCollections
                                         (&local_688,&local_128);
                      TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                      Append<TArrayView<FMassArchetypeEntityCollection_const_,int>_>
                                (&local_630,pTVar7);
                      local_428 = FAITestBase::GetTestRunner((FAITestBase *)this);
                      local_438 = *(FMassEntityManager **)&this->field_0x28;
                      pTVar7 = FEntityCollection::GetUpToDatePerArchetypeCollections
                                         (&local_688,&local_118,local_438);
                      puVar9 = local_278;
                      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
                        *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
                        pTVar7 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                                 ((longlong)&pTVar7->DataPtr + 1);
                        puVar9 = puVar9 + 1;
                      }
                      local_430 = &local_108;
                      pTVar7 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
                               TArrayView<FMassArchetypeEntityCollection_const_,int><TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_&,TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>_>
                                         (local_430,&local_630);
                      puVar9 = local_268;
                      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
                        *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
                        pTVar7 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                                 ((longlong)&pTVar7->DataPtr + 1);
                        puVar9 = puVar9 + 1;
                      }
                      puVar9 = local_278;
                      pTVar7 = &local_258;
                      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
                        *(undefined1 *)&pTVar7->DataPtr = *puVar9;
                        puVar9 = puVar9 + 1;
                        pTVar7 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                                 ((longlong)&pTVar7->DataPtr + 1);
                      }
                      puVar9 = local_268;
                      pTVar7 = &local_248;
                      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
                        *(undefined1 *)&pTVar7->DataPtr = *puVar9;
                        puVar9 = puVar9 + 1;
                        pTVar7 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                                 ((longlong)&pTVar7->DataPtr + 1);
                      }
                      local_730 = FEntityCollectionTestBase::CompareCollectionArrays
                                            ((FEntityCollectionTestBase *)this,&local_248,&local_258
                                            );
                      ::FString::FString(&local_370,"Cached collections are the same as updated");
                      bVar2 = FAutomationTestBase::TestTrue(local_428,&local_370,local_730);
                      local_72f = !bVar2;
                      local_698 = (uint)(byte)local_72f;
                      ::FString::~FString(&local_370);
                      if (local_72f == '\0') {
                        local_72d = 1;
                        TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>
                                  (&local_630);
                        FEntityCollection::~FEntityCollection(&local_688);
                        TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>
                                  (&local_710);
                        TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        ::
                        ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                  (&local_728);
                        local_746 = local_72d;
                      }
                      else {
                        AITestSuite::ConditionallyBreakOnTestFail();
                        local_72e = 0;
                        TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>
                                  (&local_630);
                        FEntityCollection::~FEntityCollection(&local_688);
                        TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>
                                  (&local_710);
                        TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        ::
                        ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                  (&local_728);
                        local_746 = local_72e;
                      }
                    }
                    else {
                      AITestSuite::ConditionallyBreakOnTestFail();
                      local_731 = 0;
                      FEntityCollection::~FEntityCollection(&local_688);
                      TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                      ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>
                                (&local_710);
                      TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      ::
                      ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                (&local_728);
                      local_746 = local_731;
                    }
                  }
                  else {
                    AITestSuite::ConditionallyBreakOnTestFail();
                    local_733 = 0;
                    FEntityCollection::~FEntityCollection(&local_688);
                    TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_710);
                    TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    ::
                    ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                              (&local_728);
                    local_746 = local_733;
                  }
                }
                else {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  local_735 = 0;
                  FEntityCollection::~FEntityCollection(&local_688);
                  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_710);
                  TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  ::
                  ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                            (&local_728);
                  local_746 = local_735;
                }
              }
              else {
                AITestSuite::ConditionallyBreakOnTestFail();
                local_738 = 0;
                FEntityCollection::~FEntityCollection(&local_688);
                TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_710);
                TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                ::
                ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                          (&local_728);
                local_746 = local_738;
              }
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_73a = 0;
              FEntityCollection::~FEntityCollection(&local_688);
              TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_710);
              TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              ::
              ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                        (&local_728);
              local_746 = local_73a;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_73c = 0;
            FEntityCollection::~FEntityCollection(&local_688);
            TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_710);
            TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ::
            ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      (&local_728);
            local_746 = local_73c;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_73f = 0;
          FEntityCollection::~FEntityCollection(&local_688);
          TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_710);
          TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          ::
          ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    (&local_728);
          local_746 = local_73f;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_741 = 0;
        FEntityCollection::~FEntityCollection(&local_688);
        TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_710);
        TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  (&local_728);
        local_746 = local_741;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_743 = 0;
      FEntityCollection::~FEntityCollection(&local_688);
      TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_710);
      TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
      ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                (&local_728);
      local_746 = local_743;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_746 = 0;
    FEntityCollection::~FEntityCollection(&local_688);
    TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_710);
    TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
    ~TArray<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              (&local_728);
  }
  return (bool)local_746;
}

