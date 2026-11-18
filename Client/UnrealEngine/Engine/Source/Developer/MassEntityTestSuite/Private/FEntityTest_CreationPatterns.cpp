// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715bd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_CreationPatterns::InstantTest(FEntityTest_CreationPatterns *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<FInstancedStruct> *piVar4;
  TArrayView<FInstancedStruct_const_,int> *pTVar5;
  initializer_list<UScriptStruct_const_*> *piVar6;
  TArrayView<UScriptStruct_const_*_const,int> *pTVar7;
  longlong lVar8;
  undefined1 *puVar9;
  initializer_list<FInstancedStruct> *piVar10;
  FMassArchetypeCreationParams *pFVar11;
  undefined1 *puVar12;
  FMassArchetypeSharedFragmentValues *pFVar13;
  bool *pbVar14;
  undefined1 auStack_888 [32];
  FMassEntityHandle local_868;
  FMassEntityHandle local_860;
  longlong local_858;
  longlong local_850;
  undefined8 local_848;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_838;
  bool local_828 [3];
  char local_825;
  undefined1 local_824;
  undefined1 local_823;
  int local_820;
  int local_818;
  int local_814;
  int local_810;
  uint local_80c;
  uint local_808;
  int local_804;
  uint local_800;
  uint local_7fc;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_7f8;
  FMassEntityHandle local_7f0;
  FMassEntityHandle local_7e8;
  FMassEntityHandle local_7e0;
  FMassEntityHandle local_7d8;
  int local_7d0;
  float local_7cc;
  int local_7c8;
  undefined1 local_7c0 [16];
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_7b0;
  int local_798;
  TArrayView<FInstancedStruct_const_,int> *local_790;
  FMassEntityHandle local_788;
  FMassEntityManager *local_780;
  FMassEntityHandle local_778;
  FMassEntityHandle local_770;
  FMassEntityHandle local_768;
  FMassEntityHandle local_760;
  FMassEntityHandle local_758;
  FMassEntityHandle local_750;
  undefined4 local_748;
  undefined4 local_744;
  FMassEntityHandle local_740;
  FMassEntityHandle local_738;
  FMassEntityHandle local_730;
  longlong local_728;
  longlong local_720;
  FMassEntityHandle local_718;
  FMassEntityHandle local_710;
  void *local_708;
  undefined8 *local_700;
  TArrayView<UScriptStruct_const_*_const,int> *local_6f8;
  FMassArchetypeCreationParams *local_6f0;
  FMassEntityManager *local_6e8;
  FMassEntityManager *local_6e0;
  FMassEntityHandle local_6d8;
  FMassEntityHandle local_6d0;
  FMassEntityHandle local_6c8;
  FMassEntityHandle local_6c0;
  FMassEntityHandle local_6b8;
  FMassEntityHandle local_6b0;
  undefined4 local_6a8;
  undefined4 local_6a4;
  FMassEntityHandle local_6a0;
  FMassEntityHandle local_698;
  FMassEntityHandle local_690;
  longlong local_688;
  longlong local_680;
  FMassEntityHandle local_678;
  FMassEntityHandle local_670;
  void *local_668;
  undefined8 *local_660;
  FMassEntityManager *local_658;
  FMassEntityHandle local_650;
  FMassEntityHandle local_648;
  FMassEntityHandle local_640;
  FMassEntityHandle local_638;
  FMassEntityHandle local_630;
  FMassEntityHandle local_628;
  undefined4 local_620;
  undefined4 local_61c;
  FMassEntityHandle local_618;
  FMassEntityHandle local_610;
  FMassEntityHandle local_608;
  longlong local_600;
  longlong local_5f8;
  FMassEntityHandle local_5f0;
  FMassEntityHandle local_5e8;
  void *local_5e0;
  undefined8 *local_5d8;
  undefined4 local_5d0;
  undefined4 local_5cc;
  FMassEntityHandle local_5c8;
  FMassEntityHandle local_5c0;
  longlong local_5b8;
  FMassEntityHandle local_5b0;
  FMassEntityHandle *local_5a8;
  FMassEntityHandle local_5a0;
  FMassEntityManager *local_598;
  FMassEntityManager *local_590;
  FEntityBuilder *local_588;
  FEntityBuilder *local_580;
  FEntityBuilder *local_578;
  FMassEntityHandle local_570;
  FMassEntityHandle local_568;
  FMassEntityHandle local_560;
  FMassEntityHandle local_558;
  FMassEntityHandle local_550;
  FMassEntityHandle local_548;
  undefined4 local_540;
  undefined4 local_53c;
  FMassEntityHandle local_538;
  FMassEntityHandle local_530;
  FMassEntityHandle local_528;
  longlong local_520;
  longlong local_518;
  FMassEntityHandle local_510;
  FMassEntityHandle local_508;
  void *local_500;
  undefined8 *local_4f8;
  FScriptContainerElement *local_4e0;
  FScriptContainerElement *local_4d8;
  TReferenceControllerBase<1> *local_4d0;
  FMassEntityHandle local_4c8;
  FMassEntityHandle local_4c0;
  FMassEntityManager *local_4b8;
  FAutomationTestBase *local_4b0;
  int local_4a8;
  int local_4a4;
  FMassArchetypeHandle local_4a0;
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> local_490;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> local_480;
  int local_470;
  UScriptStruct *local_468;
  UScriptStruct *local_460;
  UScriptStruct *local_458;
  FString local_450;
  FInstancedStruct local_440;
  FInstancedStruct local_430;
  FInstancedStruct local_420;
  TArrayView<FInstancedStruct_const_,int> local_408;
  initializer_list<FInstancedStruct> local_3f8;
  FMassArchetypeCreationParams local_3e8;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [32];
  FMassArchetypeCreationParams local_398;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  TArrayView<UScriptStruct_const_*_const,int> local_368;
  undefined1 local_358 [32];
  initializer_list<FInstancedStruct> local_338;
  TArrayView<FInstancedStruct_const_,int> local_328;
  initializer_list<UScriptStruct_const_*> local_318;
  TArrayView<UScriptStruct_const_*_const,int> local_308;
  FMassArchetypeSharedFragmentValues local_2f8;
  FMassArchetypeSharedFragmentValues local_288;
  FMassArchetypeSharedFragmentValues local_218;
  FEntityBuilder local_1a8;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_888;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_838.AllocatorInstance);
  local_838.ArrayNum = 0;
  local_838.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_838.AllocatorInstance);
  FInstancedStruct::Make<FTestFragment_Int>(&local_440);
  FInstancedStruct::Make<FTestFragment_Float>(&local_430);
  piVar4 = std::initializer_list<FInstancedStruct>::initializer_list<FInstancedStruct>
                     (&local_338,&local_440,&local_420);
  piVar10 = &local_3f8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&piVar10->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<FInstancedStruct> *)((longlong)&piVar4->_First + 1);
    piVar10 = (initializer_list<FInstancedStruct> *)((longlong)&piVar10->_First + 1);
  }
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>(&local_480,&local_3f8);
  _vector_destructor_iterator_(&local_440,0x10,2,FInstancedStruct::~FInstancedStruct);
  local_780 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar11 = &local_3e8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar11->ChunkMemorySize = 0;
    pFVar11 = (FMassArchetypeCreationParams *)((longlong)&pFVar11->ChunkMemorySize + 1);
  }
  local_788 = (FMassEntityHandle)
              FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_3e8);
  pFVar13 = &local_2f8;
  for (lVar8 = 0x68; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar13->HashCache = 0;
    pFVar13 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar13->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_2f8);
  local_790 = &local_328;
  pTVar5 = TArrayView<FInstancedStruct_const_,int>::
           TArrayView<FInstancedStruct_const_,int><TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_&,TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>
                     (local_790,&local_480);
  puVar9 = local_3d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<FInstancedStruct_const_,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_3d8;
  puVar12 = local_3c8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar9 = local_3c8;
  puVar12 = local_3b8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  local_868 = local_788;
  local_7f0 = FMassEntityManager::CreateEntity
                        (local_780,&local_408,(FMassArchetypeSharedFragmentValues *)local_3b8,
                         (FMassArchetypeCreationParams *)&local_2f8);
  local_778 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_770 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_768 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  if (local_838.AllocatorInstance.Data <= (ulonglong)local_7f0) {
    local_760 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    local_758 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    local_750 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    if ((ulonglong)local_7f0 <
        (ulonglong)((longlong)local_838.AllocatorInstance.Data + (longlong)local_838.ArrayMax * 8))
    {
      local_748 = 0;
      local_744 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_850 = (longlong)local_838.ArrayNum;
      local_858 = (longlong)local_838.ArrayMax;
      local_740 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_738 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_730 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_718 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_848 = 8;
      local_860 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_868 = local_7f0;
      local_728 = local_850;
      local_720 = local_858;
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
  if (local_838.ArrayNum == local_838.ArrayMax) {
    local_838.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_838.AllocatorInstance,&local_838.ArrayMax);
  }
  local_818 = local_838.ArrayNum;
  local_710 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_708 = (void *)((longlong)local_838.AllocatorInstance.Data + (longlong)local_838.ArrayNum * 8
                      );
  local_838.ArrayNum = local_838.ArrayNum + 1;
  local_700 = ::operator_new(8,local_708);
  *local_700 = *(undefined8 *)local_7f0;
  local_4a8 = local_818;
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_2f8);
  local_468 = FTestFragment_Int::StaticStruct();
  local_460 = FTestFragment_Float::StaticStruct();
  piVar6 = std::initializer_list<UScriptStruct_const_*>::initializer_list<UScriptStruct_const_*>
                     (&local_318,&local_468,&local_458);
  puVar9 = local_3b8 + 0x10;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&piVar6->_First;
    piVar6 = (initializer_list<UScriptStruct_const_*> *)((longlong)&piVar6->_First + 1);
    puVar9 = puVar9 + 1;
  }
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>
            (&local_490,(initializer_list<UScriptStruct_const_*> *)(local_3b8 + 0x10));
  local_6e8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar11 = &local_398;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar11->ChunkMemorySize = 0;
    pFVar11 = (FMassArchetypeCreationParams *)((longlong)&pFVar11->ChunkMemorySize + 1);
  }
  local_6f0 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_398);
  local_6f8 = &local_308;
  pTVar7 = TArrayView<UScriptStruct_const_*_const,int>::
           TArrayView<UScriptStruct_const_*_const,int><TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_&,TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>_>
                     (local_6f8,&local_490);
  puVar9 = local_388;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_388;
  puVar12 = local_378;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar9 = local_378;
  pTVar7 = &local_368;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassEntityManager::CreateArchetype
            (local_6e8,(FMassArchetypeHandle *)local_7c0,&local_368,local_6f0);
  local_6e0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar13 = &local_288;
  for (lVar8 = 0x68; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar13->HashCache = 0;
    pFVar13 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar13->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_288);
  local_7e8 = FMassEntityManager::CreateEntity
                        (local_6e0,(FMassArchetypeHandle *)local_358,
                         (FMassArchetypeSharedFragmentValues *)local_7c0);
  local_6d8 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_6d0 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_6c8 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  if (local_838.AllocatorInstance.Data <= (ulonglong)local_7e8) {
    local_6c0 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    local_6b8 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    local_6b0 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    if ((ulonglong)local_7e8 <
        (ulonglong)((longlong)local_838.AllocatorInstance.Data + (longlong)local_838.ArrayMax * 8))
    {
      local_6a8 = 0;
      local_6a4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_850 = (longlong)local_838.ArrayNum;
      local_858 = (longlong)local_838.ArrayMax;
      local_6a0 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_698 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_690 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_678 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_848 = 8;
      local_860 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_868 = local_7e8;
      local_688 = local_850;
      local_680 = local_858;
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
  if (local_838.ArrayNum == local_838.ArrayMax) {
    local_838.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_838.AllocatorInstance,&local_838.ArrayMax);
  }
  local_814 = local_838.ArrayNum;
  local_670 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_668 = (void *)((longlong)local_838.AllocatorInstance.Data + (longlong)local_838.ArrayNum * 8
                      );
  local_838.ArrayNum = local_838.ArrayNum + 1;
  local_660 = ::operator_new(8,local_668);
  *local_660 = *(undefined8 *)local_7e8;
  local_4a4 = local_814;
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_288);
  local_658 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_7e0 = FMassEntityManager::ReserveEntity(local_658);
  local_650 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_648 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_640 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  if (local_838.AllocatorInstance.Data <= (ulonglong)local_7e0) {
    local_638 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    local_630 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    local_628 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    if ((ulonglong)local_7e0 <
        (ulonglong)((longlong)local_838.AllocatorInstance.Data + (longlong)local_838.ArrayMax * 8))
    {
      local_620 = 0;
      local_61c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_850 = (longlong)local_838.ArrayNum;
      local_858 = (longlong)local_838.ArrayMax;
      local_618 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_610 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_608 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_5f0 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_848 = 8;
      local_860 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_868 = local_7e0;
      local_600 = local_850;
      local_5f8 = local_858;
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
  if (local_838.ArrayNum == local_838.ArrayMax) {
    local_838.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_838.AllocatorInstance,&local_838.ArrayMax);
  }
  local_810 = local_838.ArrayNum;
  local_5e8 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_5e0 = (void *)((longlong)local_838.AllocatorInstance.Data + (longlong)local_838.ArrayNum * 8
                      );
  local_838.ArrayNum = local_838.ArrayNum + 1;
  local_5d8 = ::operator_new(8,local_5e0);
  *local_5d8 = *(undefined8 *)local_7e0;
  local_470 = local_810;
  local_598 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar13 = &local_218;
  for (lVar8 = 0x68; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar13->HashCache = 0;
    pFVar13 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar13->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_218);
  local_820 = local_838.ArrayNum + -1;
  local_808 = (uint)(-1 < local_820);
  local_80c = (uint)(local_820 < local_838.ArrayNum);
  if (-1 >= local_820 || local_820 >= local_838.ArrayNum) {
    local_5d0 = 0;
    local_5cc = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_860 = (FMassEntityHandle)(longlong)local_838.ArrayNum;
    local_868 = (FMassEntityHandle)(longlong)local_820;
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
  local_5c8 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_5c0 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_5b0 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_5b8 = (longlong)(local_838.ArrayNum + -1) * 8;
  local_5a8 = (FMassEntityHandle *)((longlong)local_838.AllocatorInstance.Data + local_5b8);
  local_5a0 = *local_5a8;
  FMassEntityManager::BuildEntity(local_598,local_5a0,(FMassArchetypeHandle *)local_7c0,&local_218);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_218);
  local_590 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_588 = FMassEntityManager::MakeEntityBuilder(local_590,&local_1a8);
  local_7d0 = 0x400;
  local_580 = UE::Mass::FEntityBuilder::Add<FTestFragment_Int,int>(local_588,&local_7d0);
  local_7cc = __real_4048f5c3;
  local_578 = UE::Mass::FEntityBuilder::Add<FTestFragment_Float,float>(local_580,&local_7cc);
  local_7d8 = UE::Mass::FEntityBuilder::Commit(local_578);
  local_570 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_568 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_560 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  if (local_838.AllocatorInstance.Data <= (ulonglong)local_7d8) {
    local_558 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    local_550 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    local_548 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
    if ((ulonglong)local_7d8 <
        (ulonglong)((longlong)local_838.AllocatorInstance.Data + (longlong)local_838.ArrayMax * 8))
    {
      local_540 = 0;
      local_53c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_850 = (longlong)local_838.ArrayNum;
      local_858 = (longlong)local_838.ArrayMax;
      local_538 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_530 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_528 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_510 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_848 = 8;
      local_860 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
      local_868 = local_7d8;
      local_520 = local_850;
      local_518 = local_858;
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
  if (local_838.ArrayNum == local_838.ArrayMax) {
    local_838.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_838.AllocatorInstance,&local_838.ArrayMax);
  }
  local_804 = local_838.ArrayNum;
  local_508 = (FMassEntityHandle)local_838.AllocatorInstance.Data;
  local_500 = (void *)((longlong)local_838.AllocatorInstance.Data + (longlong)local_838.ArrayNum * 8
                      );
  local_838.ArrayNum = local_838.ArrayNum + 1;
  local_4f8 = ::operator_new(8,local_500);
  *local_4f8 = *(undefined8 *)local_7d8;
  local_798 = local_804;
  UE::Mass::FEntityBuilder::~FEntityBuilder(&local_1a8);
  local_7f8 = &local_838;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_7b0,&local_838.ArrayNum,(FMassEntityHandle *)local_838.AllocatorInstance.Data);
  local_4e0 = (local_7f8->AllocatorInstance).Data;
  local_7c8 = local_7f8->ArrayNum;
  local_4d8 = local_4e0;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            ((TCheckedPointerIterator<FMassEntityHandle,int,0> *)(local_358 + 8),
             &local_7f8->ArrayNum,(FMassEntityHandle *)(local_4e0 + (longlong)local_7c8 * 8));
  while( true ) {
    if (*local_7b0.CurrentNum != local_7b0.InitialNum) {
      pbVar14 = local_828;
      for (lVar8 = 1; lVar8 != 0; lVar8 = lVar8 + -1) {
        *pbVar14 = false;
        pbVar14 = pbVar14 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_828);
    }
    local_828[1] = local_7b0.Ptr != (FMassEntityHandle *)local_358._8_8_;
    local_800 = (uint)local_828[1];
    if (!local_828[1]) break;
    local_4d0 = (TReferenceControllerBase<1> *)local_7b0.Ptr;
    local_4c8 = *(FMassEntityHandle *)&(local_7b0.Ptr)->Index;
    local_4b8 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_4c0 = local_4c8;
    FMassEntityManager::GetArchetypeForEntity(local_4b8,&local_4a0,local_4c8);
    local_4b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_828[2] = FMassArchetypeHandle::operator==
                             (&local_4a0,(FMassArchetypeHandle *)&this->field_0x70);
    ::FString::FString(&local_450,"Each method creates an entity in the same archetype");
    bVar2 = FAutomationTestBase::TestTrue(local_4b0,&local_450,local_828[2]);
    local_825 = !bVar2;
    local_7fc = (uint)(byte)local_825;
    ::FString::~FString(&local_450);
    if (local_825 != '\0') {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_824 = 0;
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_4a0);
      FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_7c0);
      TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
      ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_490);
      TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::
      ~TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>(&local_480);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_838);
      return (bool)local_824;
    }
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_4a0);
    local_7b0.Ptr = (FMassEntityHandle *)((longlong)local_7b0.Ptr + 8);
  }
  local_823 = 1;
  FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_7c0);
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
  ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_490);
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::
  ~TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>(&local_480);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_838);
  return (bool)local_823;
}

