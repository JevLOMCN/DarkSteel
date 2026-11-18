// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147160c30

/* WARNING: Removing unreachable block (ram,0x000147161707) */
/* WARNING: Removing unreachable block (ram,0x000147161013) */
/* WARNING: Removing unreachable block (ram,0x00014716185d) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_SharedPtrFragment::InstantTest(FEntityTest_SharedPtrFragment *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedRef<int,1> *pTVar4;
  TArrayView<FInstancedStruct_const_,int> *pTVar5;
  int *piVar6;
  TArrayView<FMassEntityHandle_const_,int> *pTVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int local_4b4;
  int local_4b0;
  int local_4a0;
  TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_> local_498;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_488;
  int local_478 [2];
  int local_470;
  undefined4 local_468;
  uint local_464;
  uint local_460;
  uint local_45c;
  uint local_458;
  uint local_454;
  uint local_450;
  uint local_44c;
  uint local_448;
  undefined4 local_444;
  uint local_440;
  undefined4 local_43c;
  uint local_438;
  uint local_434;
  uint local_430;
  uint local_42c;
  uint local_428;
  uint local_424;
  uint local_420;
  uint local_41c;
  int local_418;
  uint local_414;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> local_410;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  int local_3f0;
  TWeakPtr<int,1> *local_3e8;
  int local_3e0;
  int local_3dc;
  int local_3d8;
  TWeakPtr<int,1> *local_3d0;
  TWeakPtr<int,1> *local_3c8;
  TWeakPtr<int,1> *local_3c0;
  TWeakPtr<int,1> *local_3b8;
  TWeakPtr<int,1> *local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  TWeakPtr<int,1> *local_3a0;
  TWeakPtr<int,1> *local_398;
  TWeakPtr<int,1> *local_390;
  longlong local_388;
  longlong local_380;
  TWeakPtr<int,1> *local_378;
  TWeakPtr<int,1> *local_370;
  FScriptContainerElement *local_368;
  TWeakPtr<int,1> *local_360;
  undefined4 local_358;
  undefined4 local_354;
  FInstancedStruct *local_350;
  FInstancedStruct *local_348;
  FInstancedStruct *local_340;
  FInstancedStruct *local_338;
  undefined4 local_330;
  undefined4 local_32c;
  FMassEntityHandle *local_328;
  FMassEntityHandle *local_320;
  FMassEntityHandle *local_318;
  TArrayView<FInstancedStruct_const_,int> *local_310;
  FMassEntityHandle *local_308;
  FMassEntityHandle local_300;
  FMassEntityHandle local_2f8;
  FMassEntityManager *local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  TWeakPtr<int,1> *local_2e0;
  TWeakPtr<int,1> *local_2d8;
  TWeakPtr<int,1> *local_2d0;
  TWeakPtr<int,1> *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  FMassEntityHandle *local_2b8;
  FMassEntityHandle *local_2b0;
  FMassEntityHandle *local_2a8;
  FMassEntityHandle *local_2a0;
  FMassEntityHandle local_298;
  FMassEntityManager *local_290;
  TSharedPtr<int,1> *local_288;
  FAutomationTestBase *local_280;
  undefined4 local_278;
  undefined4 local_274;
  FMassEntityHandle *local_270;
  FMassEntityHandle *local_268;
  FMassEntityHandle *local_260;
  FMassEntityHandle local_258;
  UScriptStruct *local_250;
  FMassEntityHandle local_248;
  FMassEntityManager *local_240;
  undefined4 local_238;
  undefined4 local_234;
  FMassEntityHandle *local_230;
  FMassEntityHandle *local_228;
  FMassEntityHandle *local_220;
  FMassEntityHandle local_218;
  UScriptStruct *local_210;
  FMassEntityHandle local_208;
  FMassEntityManager *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  TWeakPtr<int,1> *local_1f0;
  TWeakPtr<int,1> *local_1e8;
  TWeakPtr<int,1> *local_1e0;
  TWeakPtr<int,1> *local_1d8;
  int local_1d0;
  FMassEntityHandle *local_1c8;
  FMassEntityHandle *local_1c0;
  FMassEntityHandle *local_1b8;
  FMassEntityHandle *local_1b0;
  FMassEntityHandle local_1a8;
  FMassEntityManager *local_1a0;
  TSharedPtr<int,1> *local_198;
  FAutomationTestBase *local_190;
  TArrayView<FMassEntityHandle_const_,int> *local_188;
  FMassEntityManager *local_180;
  undefined4 local_178;
  undefined4 local_174;
  TWeakPtr<int,1> *local_170;
  TWeakPtr<int,1> *local_168;
  TWeakPtr<int,1> *local_160;
  TWeakPtr<int,1> *local_158;
  FAutomationTestBase *local_150;
  FMassEntityManager *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  TWeakPtr<int,1> *local_138;
  TWeakPtr<int,1> local_130;
  TSharedPtr<int,1> local_120;
  TSharedPtr<int,1> local_110;
  TSharedPtr<int,1> local_100;
  TSharedPtr<int,1> local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_b0;
  TSharedRef<int,1> local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  TArrayView<FInstancedStruct_const_,int> local_68;
  undefined1 local_58 [16];
  TArrayView<FMassEntityHandle_const_,int> local_48;
  TArrayView<FInstancedStruct_const_,int> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_488.AllocatorInstance);
  local_488.ArrayNum = 0;
  local_488.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_488.AllocatorInstance);
  local_148 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_148,&local_b0,(FMassArchetypeHandle *)&this->field_0x60,3,&local_488);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_b0);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_498.AllocatorInstance);
  local_498.ArrayNum = 0;
  local_498.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_498.AllocatorInstance);
  for (local_478[0] = 0; local_3e0 = local_488.ArrayNum, local_478[0] < local_488.ArrayNum;
      local_478[0] = local_478[0] + 1) {
    pTVar4 = MakeShared<int,1,int_&>(&local_a0,local_478);
    TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_120,pTVar4);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_a0.SharedReferenceCount);
    TWeakPtr<int,1>::TWeakPtr<int,1><int>(&local_130,&local_120);
    local_3e8 = &local_130;
    local_138 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
    local_3d0 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
    local_3c8 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
    if (local_498.AllocatorInstance.Data <= local_3e8) {
      local_3c0 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
      local_3b8 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
      local_3b0 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
      if (local_3e8 <
          (TWeakPtr<int,1> *)
          (local_498.AllocatorInstance.Data + (longlong)local_498.ArrayMax * 0x10)) {
        local_3a8 = 0;
        local_3a4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_388 = (longlong)local_498.ArrayNum;
        local_380 = (longlong)local_498.ArrayMax;
        local_3a0 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
        local_398 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
        local_390 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
        local_378 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
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
    if (local_498.ArrayNum == local_498.ArrayMax) {
      local_498.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_498.AllocatorInstance,&local_498.ArrayMax);
    }
    local_418 = local_498.ArrayNum;
    local_370 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
    local_368 = local_498.AllocatorInstance.Data + (longlong)local_498.ArrayNum * 0x10;
    local_498.ArrayNum = local_498.ArrayNum + 1;
    local_360 = ::operator_new(0x10,local_368);
    TWeakPtr<int,1>::TWeakPtr<int,1>(local_360,&local_130);
    local_1d0 = local_418;
    SharedPointerInternals::FWeakReferencer<1>::~FWeakReferencer<1>(&local_130.WeakReferenceCount);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_410.AllocatorInstance);
    local_410.ArrayNum = 0;
    local_410.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_410.AllocatorInstance);
    TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::AddZeroed(&local_410);
    local_468 = 1;
    local_414 = (uint)(0 < local_410.ArrayNum);
    if (local_414 == 0) {
      local_468 = 1;
      local_358 = 0;
      local_354 = 0;
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
    local_350 = (FInstancedStruct *)local_410.AllocatorInstance.Data;
    local_348 = (FInstancedStruct *)local_410.AllocatorInstance.Data;
    local_340 = (FInstancedStruct *)local_410.AllocatorInstance.Data;
    local_338 = (FInstancedStruct *)local_410.AllocatorInstance.Data;
    FInstancedStruct::InitializeAs<FFragmentWithSharedPtr,TSharedPtr<int,1>_&>
              ((FInstancedStruct *)local_410.AllocatorInstance.Data,&local_120);
    local_470 = local_478[0];
    local_460 = (uint)(-1 < local_478[0]);
    local_464 = (uint)(local_478[0] < local_488.ArrayNum);
    if (-1 >= local_478[0] || local_478[0] >= local_488.ArrayNum) {
      local_330 = 0;
      local_32c = 0;
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
    local_328 = (FMassEntityHandle *)local_488.AllocatorInstance.Data;
    local_320 = (FMassEntityHandle *)local_488.AllocatorInstance.Data;
    local_318 = (FMassEntityHandle *)(local_488.AllocatorInstance.Data + (longlong)local_470 * 8);
    local_308 = local_318;
    local_2f0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_310 = &local_38;
    pTVar5 = TArrayView<FInstancedStruct_const_,int>::
             TArrayView<FInstancedStruct_const_,int><TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_&,TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>
                       (local_310,&local_410);
    puVar9 = local_90;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = *(undefined1 *)&pTVar5->DataPtr;
      pTVar5 = (TArrayView<FInstancedStruct_const_,int> *)((longlong)&pTVar5->DataPtr + 1);
      puVar9 = puVar9 + 1;
    }
    puVar9 = local_90;
    puVar10 = local_80;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    local_300 = *local_308;
    puVar9 = local_80;
    pTVar5 = &local_68;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined1 *)&pTVar5->DataPtr = *puVar9;
      puVar9 = puVar9 + 1;
      pTVar5 = (TArrayView<FInstancedStruct_const_,int> *)((longlong)&pTVar5->DataPtr + 1);
    }
    local_2f8 = local_300;
    FMassEntityManager::AddFragmentInstanceListToEntity(local_2f0,local_300,&local_68);
    TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::
    ~TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>(&local_410);
    TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_120);
  }
  local_4b4 = 0;
  while( true ) {
    local_3dc = local_488.ArrayNum;
    if (local_488.ArrayNum <= local_4b4) {
      local_240 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_250 = FTestTag_A::StaticStruct();
      local_444 = 1;
      local_448 = (uint)(0 < local_488.ArrayNum);
      if (local_448 == 0) {
        local_278 = 0;
        local_274 = 0;
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
      local_270 = (FMassEntityHandle *)local_488.AllocatorInstance.Data;
      local_268 = (FMassEntityHandle *)local_488.AllocatorInstance.Data;
      local_260 = (FMassEntityHandle *)local_488.AllocatorInstance.Data;
      local_258 = *(FMassEntityHandle *)local_488.AllocatorInstance.Data;
      local_248 = local_258;
      FMassEntityManager::AddTagToEntity(local_240,local_258,local_250);
      local_200 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_210 = FTestFragment_Float::StaticStruct();
      local_43c = 1;
      local_440 = (uint)(1 < local_488.ArrayNum);
      if (local_440 == 0) {
        local_238 = 0;
        local_234 = 0;
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
      local_230 = (FMassEntityHandle *)local_488.AllocatorInstance.Data;
      local_228 = (FMassEntityHandle *)local_488.AllocatorInstance.Data;
      local_220 = (FMassEntityHandle *)(local_488.AllocatorInstance.Data + 8);
      local_218 = *local_220;
      local_208 = local_218;
      FMassEntityManager::AddFragmentToEntity(local_200,local_218,local_210);
      local_4b0 = 0;
      while( true ) {
        local_3f8 = local_488.ArrayNum;
        if (local_488.ArrayNum <= local_4b0) {
          local_180 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_188 = &local_28;
          pTVar7 = TArrayView<FMassEntityHandle_const_,int>::
                   TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                             (local_188,&local_488);
          puVar9 = local_58;
          for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
            pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
            puVar9 = puVar9 + 1;
          }
          puVar9 = local_58;
          pTVar7 = &local_48;
          for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
            *(undefined1 *)&pTVar7->DataPtr = *puVar9;
            puVar9 = puVar9 + 1;
            pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
          }
          FMassEntityManager::BatchDestroyEntities(local_180,&local_48);
          local_4a0 = 0;
          while( true ) {
            local_3f0 = local_488.ArrayNum;
            if (local_488.ArrayNum <= local_4a0) {
              TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_>::
              ~TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_>(&local_498);
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_488);
              return true;
            }
            local_420 = (uint)(-1 < local_4a0);
            local_424 = (uint)(local_4a0 < local_498.ArrayNum);
            if (-1 >= local_4a0 || local_4a0 >= local_498.ArrayNum) {
              local_178 = 0;
              local_174 = 0;
              UE::Core::Private::FormatStringSan::
              AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
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
            local_170 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
            local_168 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
            local_160 = (TWeakPtr<int,1> *)
                        (local_498.AllocatorInstance.Data + (longlong)local_4a0 * 0x10);
            local_158 = local_160;
            TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_f0,local_160);
            local_150 = FAITestBase::GetTestRunner((FAITestBase *)this);
            bVar2 = local_f0.Object != (int *)0x0;
            ::FString::FString(&local_c0,"After deletion we expect shared data to be released");
            bVar2 = FAutomationTestBase::TestFalse(local_150,&local_c0,bVar2);
            local_41c = (uint)!bVar2;
            ::FString::~FString(&local_c0);
            if (!bVar2) break;
            TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_f0);
            local_4a0 = local_4a0 + 1;
          }
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_f0);
          TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_>(&local_498);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_488);
          return false;
        }
        local_434 = (uint)(-1 < local_4b0);
        local_438 = (uint)(local_4b0 < local_498.ArrayNum);
        if (-1 >= local_4b0 || local_4b0 >= local_498.ArrayNum) {
          local_1f8 = 0;
          local_1f4 = 0;
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
        local_1f0 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
        local_1e8 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
        local_1e0 = (TWeakPtr<int,1> *)
                    (local_498.AllocatorInstance.Data + (longlong)local_4b0 * 0x10);
        local_1d8 = local_1e0;
        TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_100,local_1e0);
        local_42c = (uint)(-1 < local_4b0);
        local_430 = (uint)(local_4b0 < local_488.ArrayNum);
        if (-1 >= local_4b0 || local_4b0 >= local_488.ArrayNum) {
          local_140 = 0;
          local_13c = 0;
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
        local_1c8 = (FMassEntityHandle *)local_488.AllocatorInstance.Data;
        local_1c0 = (FMassEntityHandle *)local_488.AllocatorInstance.Data;
        local_1b8 = (FMassEntityHandle *)
                    (local_488.AllocatorInstance.Data + (longlong)local_4b0 * 8);
        local_1b0 = local_1b8;
        local_1a0 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_1a8 = *local_1b0;
        local_198 = &FMassEntityManager::GetFragmentDataChecked<FFragmentWithSharedPtr>
                               (local_1a0,local_1a8)->Data;
        local_190 = FAITestBase::GetTestRunner((FAITestBase *)this);
        piVar6 = TSharedPtr<int,1>::operator*<int>(&local_100);
        local_3d8 = *piVar6;
        piVar6 = TSharedPtr<int,1>::operator*<int>(local_198);
        local_3f4 = *piVar6;
        ::FString::FString(&local_d0,
                           "After move operations: Data stored in fragments is the same as the data provided initially"
                          );
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_d0,local_3f4,local_3d8,local_190);
        local_428 = (uint)!bVar2;
        ::FString::~FString(&local_d0);
        if (!bVar2) break;
        TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_100);
        local_4b0 = local_4b0 + 1;
      }
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_100);
      TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_>(&local_498);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_488);
      return false;
    }
    local_458 = (uint)(-1 < local_4b4);
    local_45c = (uint)(local_4b4 < local_498.ArrayNum);
    if (-1 >= local_4b4 || local_4b4 >= local_498.ArrayNum) {
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
    local_2e0 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
    local_2d8 = (TWeakPtr<int,1> *)local_498.AllocatorInstance.Data;
    local_2d0 = (TWeakPtr<int,1> *)(local_498.AllocatorInstance.Data + (longlong)local_4b4 * 0x10);
    local_2c8 = local_2d0;
    TSharedPtr<int,1>::TSharedPtr<int,1><int>(&local_110,local_2d0);
    local_450 = (uint)(-1 < local_4b4);
    local_454 = (uint)(local_4b4 < local_488.ArrayNum);
    if (-1 >= local_4b4 || local_4b4 >= local_488.ArrayNum) {
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
    local_2b8 = (FMassEntityHandle *)local_488.AllocatorInstance.Data;
    local_2b0 = (FMassEntityHandle *)local_488.AllocatorInstance.Data;
    local_2a8 = (FMassEntityHandle *)(local_488.AllocatorInstance.Data + (longlong)local_4b4 * 8);
    local_2a0 = local_2a8;
    local_290 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_298 = *local_2a0;
    local_288 = &FMassEntityManager::GetFragmentDataChecked<FFragmentWithSharedPtr>
                           (local_290,local_298)->Data;
    local_280 = FAITestBase::GetTestRunner((FAITestBase *)this);
    piVar6 = TSharedPtr<int,1>::operator*<int>(&local_110);
    local_400 = *piVar6;
    piVar6 = TSharedPtr<int,1>::operator*<int>(local_288);
    local_3fc = *piVar6;
    ::FString::FString(&local_e0,
                       "Data stored in fragments is the same as the data provided initially");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_e0,local_3fc,local_400,local_280);
    local_44c = (uint)!bVar2;
    ::FString::~FString(&local_e0);
    if (!bVar2) break;
    TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_110);
    local_4b4 = local_4b4 + 1;
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  TSharedPtr<int,1>::~TSharedPtr<int,1>(&local_110);
  TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TWeakPtr<int,1>,TSizedDefaultAllocator<32>_>(&local_498);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_488);
  return false;
}

