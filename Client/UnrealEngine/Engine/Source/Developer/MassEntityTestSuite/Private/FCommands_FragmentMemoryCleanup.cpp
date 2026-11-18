// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 1471433f0

/* WARNING: Removing unreachable block (ram,0x000147144ac2) */
/* WARNING: Removing unreachable block (ram,0x000147144380) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassCommandsTest::FCommands_FragmentMemoryCleanup::InstantTest
          (FCommands_FragmentMemoryCleanup *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<UScriptStruct_const_*,int> *pTVar4;
  TArrayView<UScriptStruct_const_*_const,int> *pTVar5;
  FMassEntityManager *pFVar6;
  longlong lVar7;
  undefined1 *puVar8;
  FMassArchetypeCreationParams *pFVar9;
  undefined1 *puVar10;
  char *pcVar11;
  float fVar12;
  int local_648;
  char local_644;
  undefined1 local_643;
  char local_642 [5];
  undefined1 local_63d;
  char local_63c [5];
  undefined1 local_637;
  undefined1 local_636;
  int local_634;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_630;
  TArray<int,TSizedDefaultAllocator<32>_> local_620;
  int local_610;
  int local_60c;
  int local_608;
  int local_600;
  TArray<int,TSizedDefaultAllocator<32>_> local_5f8;
  int local_5e8;
  uint local_5e4;
  uint local_5e0;
  uint local_5dc;
  int local_5d8;
  uint local_5d4;
  uint local_5d0;
  uint local_5cc;
  uint local_5c8;
  uint local_5c4;
  undefined4 local_5c0;
  uint local_5bc;
  uint local_5b8;
  uint local_5b4;
  uint local_5b0;
  uint local_5ac;
  uint local_5a8;
  uint local_5a4;
  uint local_5a0;
  undefined4 local_59c;
  uint local_598;
  TArray<int,TSizedDefaultAllocator<32>_> *local_590;
  TArray<int,TSizedDefaultAllocator<32>_> *local_588;
  uint local_580;
  int local_57c;
  uint local_578;
  FMassArchetypeHandle local_570;
  int local_560;
  int local_55c;
  int local_558;
  int local_554;
  int local_550;
  int local_54c;
  int local_548;
  FTestFragment_Array *local_540;
  FTestFragment_Array *local_538;
  int local_530;
  int local_52c;
  FScriptContainerElement *local_528;
  FScriptContainerElement *local_520;
  int local_518;
  int local_514;
  int local_510;
  FMassArchetypeHandle local_508;
  TCheckedPointerIterator<int,int,0> local_4f8;
  TCheckedPointerIterator<int,int,0> local_4e0;
  FMassEntityManager *local_4c8;
  FMassEntityManager *local_4c0;
  FMassEntityManager *local_4b8;
  FMassEntityManager *local_4b0;
  FAutomationTestBase *local_4a8;
  FScriptContainerElement *local_4a0;
  FScriptContainerElement *local_498;
  FScriptContainerElement *local_490;
  FScriptContainerElement *local_488;
  FScriptContainerElement *local_480;
  FScriptContainerElement *local_478;
  undefined4 local_470;
  undefined4 local_46c;
  FScriptContainerElement *local_468;
  FScriptContainerElement *local_460;
  FScriptContainerElement *local_458;
  longlong local_450;
  longlong local_448;
  FScriptContainerElement *local_440;
  FScriptContainerElement *local_438;
  FScriptContainerElement *local_430;
  int *local_428;
  undefined4 local_420;
  undefined4 local_41c;
  FScriptContainerElement *local_418;
  FScriptContainerElement *local_410;
  FMassEntityHandle *local_408;
  FMassEntityHandle local_400;
  FMassCommandBuffer *local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  FScriptContainerElement *local_3e8;
  FScriptContainerElement *local_3e0;
  FMassEntityHandle *local_3d8;
  FMassEntityHandle local_3d0;
  FMassCommandBuffer *local_3c8;
  FScriptContainerElement *local_3c0;
  FScriptContainerElement *local_3b8;
  FScriptContainerElement *local_3b0;
  FScriptContainerElement *local_3a8;
  FScriptContainerElement *local_3a0;
  FScriptContainerElement *local_398;
  undefined4 local_390;
  undefined4 local_38c;
  FScriptContainerElement *local_388;
  FScriptContainerElement *local_380;
  FScriptContainerElement *local_378;
  longlong local_370;
  longlong local_368;
  FScriptContainerElement *local_360;
  FScriptContainerElement *local_358;
  FScriptContainerElement *local_350;
  int *local_348;
  FScriptContainerElement *local_330;
  FScriptContainerElement *local_328;
  int *local_320;
  undefined4 local_318;
  undefined4 local_314;
  FScriptContainerElement *local_310;
  FScriptContainerElement *local_308;
  FMassEntityHandle *local_300;
  FTestFragment_Array *local_2f8;
  FAutomationTestBase *local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  FScriptContainerElement *local_2e0;
  FScriptContainerElement *local_2d8;
  FScriptContainerElement *local_2d0;
  FAutomationTestBase *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  FMassEntityHandle *local_2a8;
  FMassEntityHandle local_2a0;
  FMassCommandBuffer *local_298;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  int *local_270;
  undefined4 local_268;
  undefined4 local_264;
  FScriptContainerElement *local_260;
  FScriptContainerElement *local_258;
  FMassEntityHandle *local_250;
  FMassEntityHandle local_248;
  FMassEntityManager *local_240;
  FTestFragment_Array *local_238;
  FAutomationTestBase *local_230;
  undefined4 local_228;
  undefined4 local_224;
  FScriptContainerElement *local_220;
  FScriptContainerElement *local_218;
  FScriptContainerElement *local_210;
  FAutomationTestBase *local_208;
  int local_200;
  int local_1fc;
  TArrayView<UScriptStruct_const_*_const,int> *local_1f8;
  FMassArchetypeCreationParams *local_1f0;
  FMassEntityManager *local_1e8;
  UScriptStruct *local_1e0;
  UScriptStruct *local_1d8;
  TArrayView<UScriptStruct_const_*_const,int> *local_1d0;
  FMassArchetypeCreationParams *local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FMassArchetypeCreationParams local_170;
  undefined1 local_160 [16];
  undefined1 local_150 [24];
  TArrayView<UScriptStruct_const_*_const,int> local_138;
  FMassArchetypeCreationParams local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  TArrayView<UScriptStruct_const_*_const,int> local_f8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_e8;
  TCheckedPointerIterator<int,int,0> local_d8;
  TCheckedPointerIterator<int,int,0> local_c0;
  FMassEntityView local_a8;
  FMassEntityView local_80;
  TArrayView<UScriptStruct_const_*_const,int> local_58;
  TArrayView<UScriptStruct_const_*,int> local_48;
  TArrayView<UScriptStruct_const_*_const,int> local_38;
  TArrayView<UScriptStruct_const_*,int> local_28;
  
  local_1e0 = FTestFragment_Array::StaticStruct();
  local_1d8 = FTestFragment_Int::StaticStruct();
  local_1e8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar9 = &local_170;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pFVar9->ChunkMemorySize = 0;
    pFVar9 = (FMassArchetypeCreationParams *)((longlong)&pFVar9->ChunkMemorySize + 1);
  }
  local_1f0 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_170);
  local_1f8 = &local_58;
  pTVar4 = MakeArrayView<UScriptStruct_const_*>(&local_48,&local_1e0,1);
  pTVar5 = TArrayView<UScriptStruct_const_*_const,int>::
           TArrayView<UScriptStruct_const_*_const,int><TArrayView<UScriptStruct_const_*,int>,TArrayView<UScriptStruct_const_*,int>_>
                     (local_1f8,pTVar4);
  puVar8 = local_160;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_160;
  puVar10 = local_150;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar8 = local_150;
  pTVar5 = &local_138;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar8;
    puVar8 = puVar8 + 1;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  FMassEntityManager::CreateArchetype(local_1e8,&local_570,&local_138,local_1f0);
  local_4c8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar9 = &local_128;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pFVar9->ChunkMemorySize = 0;
    pFVar9 = (FMassArchetypeCreationParams *)((longlong)&pFVar9->ChunkMemorySize + 1);
  }
  local_1c8 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_128);
  local_1d0 = &local_38;
  pTVar4 = MakeArrayView<UScriptStruct_const_*>(&local_28,&local_1e0,2);
  pTVar5 = TArrayView<UScriptStruct_const_*_const,int>::
           TArrayView<UScriptStruct_const_*_const,int><TArrayView<UScriptStruct_const_*,int>,TArrayView<UScriptStruct_const_*,int>_>
                     (local_1d0,pTVar4);
  puVar8 = local_118;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_118;
  puVar10 = local_108;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar8 = local_108;
  pTVar5 = &local_f8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar8;
    puVar8 = puVar8 + 1;
    pTVar5 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  FMassEntityManager::CreateArchetype(local_4c8,&local_508,&local_f8,local_1c8);
  local_4c0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_530 = FMassEntityManager::DebugGetArchetypeEntitiesCountPerChunk(local_4c0,&local_570);
  local_5e8 = (int)((float)local_530 * __real_40200000);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_630.AllocatorInstance);
  local_630.ArrayNum = 0;
  local_630.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_630.AllocatorInstance);
  local_4b8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities(local_4b8,&local_e8,&local_570,local_5e8,&local_630);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_e8);
  local_4a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_52c = local_630.ArrayNum;
  local_518 = local_630.ArrayNum;
  local_4b0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_514 = FMassEntityManager::DebugGetArchetypeEntitiesCount(local_4b0,&local_570);
  ::FString::FString(&local_190,L"All entities created should be in ArrayArchetype");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_190,local_514,local_518,local_4a8);
  local_644 = !bVar2;
  local_580 = (uint)(byte)local_644;
  ::FString::~FString(&local_190);
  if (local_644 == '\0') {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_620.AllocatorInstance);
    local_620.ArrayNum = 0;
    local_620.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_620.AllocatorInstance);
    for (local_648 = 0; local_648 < local_5e8; local_648 = local_648 + 1) {
      fVar12 = FGenericPlatformMath::FRand();
      if ((double)fVar12 < __real_3fc999999999999a) {
        FTestFragment_Array::FTestFragment_Array((FTestFragment_Array *)&local_5f8,'\0');
        local_528 = (FScriptContainerElement *)&local_648;
        local_4a0 = local_5f8.AllocatorInstance.Data;
        local_498 = local_5f8.AllocatorInstance.Data;
        local_490 = local_5f8.AllocatorInstance.Data;
        if (local_5f8.AllocatorInstance.Data <= local_528) {
          local_488 = local_5f8.AllocatorInstance.Data;
          local_480 = local_5f8.AllocatorInstance.Data;
          local_478 = local_5f8.AllocatorInstance.Data;
          if (local_528 < local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayMax * 4) {
            local_470 = 0;
            local_46c = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_450 = (longlong)local_5f8.ArrayNum;
            local_448 = (longlong)local_5f8.ArrayMax;
            local_468 = local_5f8.AllocatorInstance.Data;
            local_460 = local_5f8.AllocatorInstance.Data;
            local_458 = local_5f8.AllocatorInstance.Data;
            local_440 = local_5f8.AllocatorInstance.Data;
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
        if (local_5f8.ArrayNum == local_5f8.ArrayMax) {
          local_5f8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_5f8.AllocatorInstance,&local_5f8.ArrayMax);
        }
        local_57c = local_5f8.ArrayNum;
        local_438 = local_5f8.AllocatorInstance.Data;
        local_430 = local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayNum * 4;
        local_5f8.ArrayNum = local_5f8.ArrayNum + 1;
        local_428 = ::operator_new(4,local_430);
        *local_428 = local_648;
        local_200 = local_57c;
        pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                           ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_3f8 = FMassEntityManager::Defer(pFVar6);
        local_608 = local_648;
        local_5e4 = (uint)(-1 < local_648);
        local_578 = (uint)(local_648 < local_630.ArrayNum);
        if (-1 >= local_648 || local_648 >= local_630.ArrayNum) {
          local_420 = 0;
          local_41c = 0;
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
        local_418 = local_630.AllocatorInstance.Data;
        local_410 = local_630.AllocatorInstance.Data;
        local_408 = (FMassEntityHandle *)
                    (local_630.AllocatorInstance.Data + (longlong)local_608 * 8);
        local_400 = *local_408;
        FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Array_&>
                  (local_3f8,local_400,(FTestFragment_Array *)&local_5f8);
        pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                           ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_3c8 = FMassEntityManager::Defer(pFVar6);
        local_600 = local_648;
        local_5dc = (uint)(-1 < local_648);
        local_5e0 = (uint)(local_648 < local_630.ArrayNum);
        if (-1 >= local_648 || local_648 >= local_630.ArrayNum) {
          local_3f0 = 0;
          local_3ec = 0;
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
        local_3e8 = local_630.AllocatorInstance.Data;
        local_3e0 = local_630.AllocatorInstance.Data;
        local_3d8 = (FMassEntityHandle *)
                    (local_630.AllocatorInstance.Data + (longlong)local_600 * 8);
        local_3d0 = *local_3d8;
        FMassCommandBuffer::AddFragment<FTestFragment_Int>(local_3c8,local_3d0);
        local_520 = (FScriptContainerElement *)&local_648;
        local_3c0 = local_620.AllocatorInstance.Data;
        local_3b8 = local_620.AllocatorInstance.Data;
        local_3b0 = local_620.AllocatorInstance.Data;
        if (local_620.AllocatorInstance.Data <= local_520) {
          local_3a8 = local_620.AllocatorInstance.Data;
          local_3a0 = local_620.AllocatorInstance.Data;
          local_398 = local_620.AllocatorInstance.Data;
          if (local_520 < local_620.AllocatorInstance.Data + (longlong)local_620.ArrayMax * 4) {
            local_390 = 0;
            local_38c = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_370 = (longlong)local_620.ArrayNum;
            local_368 = (longlong)local_620.ArrayMax;
            local_388 = local_620.AllocatorInstance.Data;
            local_380 = local_620.AllocatorInstance.Data;
            local_378 = local_620.AllocatorInstance.Data;
            local_360 = local_620.AllocatorInstance.Data;
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
        if (local_620.ArrayNum == local_620.ArrayMax) {
          local_620.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_620.AllocatorInstance,&local_620.ArrayMax);
        }
        local_5d8 = local_620.ArrayNum;
        local_358 = local_620.AllocatorInstance.Data;
        local_350 = local_620.AllocatorInstance.Data + (longlong)local_620.ArrayNum * 4;
        local_620.ArrayNum = local_620.ArrayNum + 1;
        local_348 = ::operator_new(4,local_350);
        *local_348 = local_648;
        local_1fc = local_5d8;
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_5f8);
      }
    }
    pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassEntityManager::FlushCommands(pFVar6);
    local_590 = &local_620;
    TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
              (&local_4f8,&local_620.ArrayNum,(int *)local_620.AllocatorInstance.Data);
    local_330 = (local_590->AllocatorInstance).Data;
    local_510 = local_590->ArrayNum;
    local_328 = local_330;
    TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
              (&local_d8,&local_590->ArrayNum,(int *)(local_330 + (longlong)local_510 * 4));
    while( true ) {
      if (*local_4f8.CurrentNum != local_4f8.InitialNum) {
        pcVar11 = local_642;
        for (lVar7 = 1; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pcVar11 = '\0';
          pcVar11 = pcVar11 + 1;
        }
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_642);
      }
      local_642[1] = local_4f8.Ptr != local_d8.Ptr;
      local_5d4 = (uint)(byte)local_642[1];
      if (!(bool)local_642[1]) break;
      local_320 = local_4f8.Ptr;
      local_610 = *local_4f8.Ptr;
      local_5cc = (uint)(-1 < local_610);
      local_5d0 = (uint)(local_610 < local_630.ArrayNum);
      if (-1 >= local_610 || local_610 >= local_630.ArrayNum) {
        local_318 = 0;
        local_314 = 0;
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
      local_310 = local_630.AllocatorInstance.Data;
      local_308 = local_630.AllocatorInstance.Data;
      local_300 = (FMassEntityHandle *)(local_630.AllocatorInstance.Data + (longlong)local_610 * 8);
      FMassEntityView::FMassEntityView(&local_a8,&local_508,*local_300);
      local_2f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_2f8 = FMassEntityView::GetFragmentData<FTestFragment_Array>(&local_a8);
      local_560 = (local_2f8->Value).ArrayNum;
      local_55c = local_560;
      ::FString::FString(&local_180,L"Should have predicted values");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_180,local_55c,1,local_2f0);
      local_642[2] = !bVar2;
      local_5c8 = (uint)(byte)local_642[2];
      ::FString::~FString(&local_180);
      if (local_642[2] != '\0') {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_642[3] = 0;
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_620);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_630);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_508);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_570);
        return (bool)local_642[3];
      }
      local_2c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_540 = FMassEntityView::GetFragmentData<FTestFragment_Array>(&local_a8);
      local_5c0 = 1;
      local_5c4 = (uint)(0 < (local_540->Value).ArrayNum);
      if (local_5c4 == 0) {
        local_5c0 = 1;
        local_2e8 = 0;
        local_2e4 = 0;
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
      local_2e0 = (local_540->Value).AllocatorInstance.Data;
      local_558 = *(int *)local_2e0;
      local_2d8 = local_2e0;
      local_2d0 = local_2e0;
      ::FString::FString(&local_1c0,L"Should have predicted values");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_1c0,local_558,local_610,local_2c8);
      local_642[4] = !bVar2;
      local_5bc = (uint)(byte)local_642[4];
      ::FString::~FString(&local_1c0);
      if (local_642[4] != '\0') {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_63d = 0;
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_620);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_630);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_508);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_570);
        return (bool)local_63d;
      }
      local_4f8.Ptr = local_4f8.Ptr + 1;
    }
    for (local_634 = 0; local_634 < local_5e8; local_634 = local_634 + 1) {
      fVar12 = FGenericPlatformMath::FRand();
      if ((double)fVar12 < __real_3fe0000000000000) {
        pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                           ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_298 = FMassEntityManager::Defer(pFVar6);
        local_5b4 = (uint)(-1 < local_634);
        local_5b8 = (uint)(local_634 < local_630.ArrayNum);
        if (-1 >= local_634 || local_634 >= local_630.ArrayNum) {
          local_2c0 = 0;
          local_2bc = 0;
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
        local_2b8 = local_630.AllocatorInstance.Data;
        local_2b0 = local_630.AllocatorInstance.Data;
        local_2a8 = (FMassEntityHandle *)
                    (local_630.AllocatorInstance.Data + (longlong)local_634 * 8);
        local_2a0 = *local_2a8;
        FMassCommandBuffer::AddFragment<FTestFragment_Float>(local_298,local_2a0);
      }
    }
    pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassEntityManager::FlushCommands(pFVar6);
    local_588 = &local_620;
    TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
              (&local_4e0,&local_620.ArrayNum,(int *)local_620.AllocatorInstance.Data);
    local_280 = (local_588->AllocatorInstance).Data;
    local_554 = local_588->ArrayNum;
    local_278 = local_280;
    TCheckedPointerIterator<int,int,0>::TCheckedPointerIterator<int,int,0>
              (&local_c0,&local_588->ArrayNum,(int *)(local_280 + (longlong)local_554 * 4));
    while( true ) {
      if (*local_4e0.CurrentNum != local_4e0.InitialNum) {
        pcVar11 = local_63c;
        for (lVar7 = 1; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pcVar11 = '\0';
          pcVar11 = pcVar11 + 1;
        }
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_63c);
      }
      local_63c[1] = local_4e0.Ptr != local_c0.Ptr;
      local_5b0 = (uint)(byte)local_63c[1];
      if (!(bool)local_63c[1]) break;
      local_270 = local_4e0.Ptr;
      local_60c = *local_4e0.Ptr;
      local_5a8 = (uint)(-1 < local_60c);
      local_5ac = (uint)(local_60c < local_630.ArrayNum);
      if (-1 >= local_60c || local_60c >= local_630.ArrayNum) {
        local_268 = 0;
        local_264 = 0;
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
      local_260 = local_630.AllocatorInstance.Data;
      local_258 = local_630.AllocatorInstance.Data;
      local_250 = (FMassEntityHandle *)(local_630.AllocatorInstance.Data + (longlong)local_60c * 8);
      local_248 = *local_250;
      local_240 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      FMassEntityView::FMassEntityView(&local_80,local_240,local_248);
      local_230 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_238 = FMassEntityView::GetFragmentData<FTestFragment_Array>(&local_80);
      local_550 = (local_238->Value).ArrayNum;
      local_54c = local_550;
      ::FString::FString(&local_1b0,L"Potentially moved array fragment should have predicted values"
                        );
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_1b0,local_54c,1,local_230);
      local_63c[2] = !bVar2;
      local_5a4 = (uint)(byte)local_63c[2];
      ::FString::~FString(&local_1b0);
      if (local_63c[2] != '\0') {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_63c[3] = 0;
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_620);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_630);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_508);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_570);
        return (bool)local_63c[3];
      }
      local_208 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_538 = FMassEntityView::GetFragmentData<FTestFragment_Array>(&local_80);
      local_59c = 1;
      local_5a0 = (uint)(0 < (local_538->Value).ArrayNum);
      if (local_5a0 == 0) {
        local_228 = 0;
        local_224 = 0;
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
      local_220 = (local_538->Value).AllocatorInstance.Data;
      local_548 = *(int *)local_220;
      local_218 = local_220;
      local_210 = local_220;
      ::FString::FString(&local_1a0,L"Potentially moved array fragment should have predicted values"
                        );
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_1a0,local_548,local_60c,local_208);
      local_63c[4] = !bVar2;
      local_598 = (uint)(byte)local_63c[4];
      ::FString::~FString(&local_1a0);
      if (local_63c[4] != '\0') {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_637 = 0;
        TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>
                  (&local_620);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_630);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_508);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_570);
        return (bool)local_637;
      }
      local_4e0.Ptr = local_4e0.Ptr + 1;
    }
    local_636 = 1;
    TArray<int,TSizedDefaultAllocator<32>_>::~TArray<int,TSizedDefaultAllocator<32>_>(&local_620);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_630);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_508);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_570);
    local_643 = local_636;
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_643 = 0;
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_630);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_508);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_570);
  }
  return (bool)local_643;
}

