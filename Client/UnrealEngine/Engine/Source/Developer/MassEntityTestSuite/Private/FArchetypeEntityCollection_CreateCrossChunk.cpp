// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 1471277b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_CreateCrossChunk::InstantTest
          (FArchetypeEntityCollection_CreateCrossChunk *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  FArchetypeEntityRange *pFVar5;
  longlong lVar6;
  TArrayView<FMassEntityHandle_const_,int> *pTVar7;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_378;
  char local_368;
  undefined1 local_367;
  char local_366;
  undefined1 local_365;
  char local_364;
  undefined1 local_363;
  undefined1 local_362;
  int local_360;
  int local_35c;
  int local_358;
  int local_350;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_348;
  uint local_338;
  uint local_334;
  int local_330;
  uint local_32c;
  uint local_328;
  uint local_324;
  int local_320;
  uint local_31c;
  uint local_318;
  uint local_314;
  uint local_310;
  int local_30c;
  FScriptContainerElement *local_308;
  FScriptContainerElement *local_300;
  FScriptContainerElement *local_2f8;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  FMassEntityManager *local_2d0;
  FMassEntityManager *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  FScriptContainerElement *local_2a8;
  FScriptContainerElement *local_2a0;
  FScriptContainerElement *local_298;
  FScriptContainerElement *local_290;
  FScriptContainerElement *local_288;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  FScriptContainerElement *local_268;
  FScriptContainerElement *local_260;
  FScriptContainerElement *local_258;
  longlong local_250;
  longlong local_248;
  FScriptContainerElement *local_240;
  FScriptContainerElement *local_238;
  FScriptContainerElement *local_230;
  undefined8 *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  FScriptContainerElement *local_218;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  FScriptContainerElement *local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  FScriptContainerElement *local_1c8;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  FScriptContainerElement *local_1a0;
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  undefined8 *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  longlong local_110;
  longlong local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  undefined8 *local_e8;
  TArrayView<FMassEntityHandle_const_,int> *local_e0;
  FAutomationTestBase *local_d8;
  FAutomationTestBase *local_d0;
  FAutomationTestBase *local_c8;
  undefined4 local_c0;
  int local_bc;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FMassArchetypeEntityCollection local_78;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_50;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_348.AllocatorInstance);
  local_348.ArrayNum = 0;
  local_348.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_348.AllocatorInstance);
  local_2d0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_360 = FMassEntityManager::DebugGetArchetypeEntitiesCountPerChunk
                        (local_2d0,(FMassArchetypeHandle *)&this->field_0x50);
  local_c0 = 10;
  local_2f0 = local_360 + 10;
  local_2c8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_2c8,&local_50,(FMassArchetypeHandle *)&this->field_0x50,local_2f0,&local_348);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_50);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_378.AllocatorInstance);
  local_378.ArrayNum = 0;
  local_378.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_378.AllocatorInstance);
  local_334 = (uint)(-1 < local_360);
  local_338 = (uint)(local_360 < local_348.ArrayNum);
  if (-1 >= local_360 || local_360 >= local_348.ArrayNum) {
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
  local_2b8 = local_348.AllocatorInstance.Data;
  local_2b0 = local_348.AllocatorInstance.Data;
  local_300 = local_348.AllocatorInstance.Data + (longlong)local_360 * 8;
  local_2a0 = local_378.AllocatorInstance.Data;
  local_298 = local_378.AllocatorInstance.Data;
  local_290 = local_378.AllocatorInstance.Data;
  local_2a8 = local_300;
  if (local_378.AllocatorInstance.Data <= local_300) {
    local_288 = local_378.AllocatorInstance.Data;
    local_280 = local_378.AllocatorInstance.Data;
    local_278 = local_378.AllocatorInstance.Data;
    if (local_300 < local_378.AllocatorInstance.Data + (longlong)local_378.ArrayMax * 8) {
      local_270 = 0;
      local_26c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_250 = (longlong)local_378.ArrayNum;
      local_248 = (longlong)local_378.ArrayMax;
      local_268 = local_378.AllocatorInstance.Data;
      local_260 = local_378.AllocatorInstance.Data;
      local_258 = local_378.AllocatorInstance.Data;
      local_240 = local_378.AllocatorInstance.Data;
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
  if (local_378.ArrayNum == local_378.ArrayMax) {
    local_378.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_378.AllocatorInstance,&local_378.ArrayMax);
  }
  local_330 = local_378.ArrayNum;
  local_238 = local_378.AllocatorInstance.Data;
  local_230 = local_378.AllocatorInstance.Data + (longlong)local_378.ArrayNum * 8;
  local_378.ArrayNum = local_378.ArrayNum + 1;
  local_228 = ::operator_new(8,local_230);
  *local_228 = *(undefined8 *)local_300;
  local_bc = local_330;
  local_35c = 1;
  do {
    if (9 < local_35c) {
      local_e0 = &local_28;
      pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
               TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                         (local_e0,&local_378);
      pTVar7 = &local_38;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined1 *)&pTVar7->DataPtr = *(undefined1 *)&pTVar4->DataPtr;
        pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
        pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
      }
      FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
                (&local_78,(FMassArchetypeHandle *)&this->field_0x50,&local_38,NoDuplicates);
      FMassArchetypeEntityCollection::GetRanges(&local_78,&local_b8);
      local_d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_2ec = local_b8.ArrayNum;
      local_2e8 = local_b8.ArrayNum;
      ::FString::FString(&local_a8,"The given continuous range should get split in two");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_a8,local_2e8,2,local_d8);
      local_368 = !bVar2;
      local_31c = (uint)(byte)local_368;
      ::FString::~FString(&local_a8);
      if (local_368 == '\0') {
        local_d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                 operator[](&local_b8,0);
        local_2e4 = pFVar5->Length;
        ::FString::FString(&local_98,
                           "The part in first archetype\'s chunk should contain 9 elements");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_98,local_2e4,9,local_d0);
        local_366 = !bVar2;
        local_318 = (uint)(byte)local_366;
        ::FString::~FString(&local_98);
        if (local_366 == '\0') {
          local_c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          pFVar5 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                   operator[](&local_b8,1);
          local_2e0 = pFVar5->Length;
          ::FString::FString(&local_88,
                             "The part in second archetype\'s chunk should contain 10 elements");
          bVar2 = FTestHelpers::TestEqual<int,int>(&local_88,local_2e0,10,local_c8);
          local_364 = !bVar2;
          local_314 = (uint)(byte)local_364;
          ::FString::~FString(&local_88);
          if (local_364 == '\0') {
            local_362 = 1;
            FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_78);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_378);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_348);
            local_367 = local_362;
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            local_363 = 0;
            FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_78);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_378);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_348);
            local_367 = local_363;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_365 = 0;
          FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_78);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_378);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_348);
          local_367 = local_365;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_367 = 0;
        FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_78);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_378);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_348);
      }
      return (bool)local_367;
    }
    local_358 = local_360 + local_35c;
    local_310 = (uint)(-1 < local_358);
    local_32c = (uint)(local_358 < local_348.ArrayNum);
    if (-1 >= local_358 || local_358 >= local_348.ArrayNum) {
      local_220 = 0;
      local_21c = 0;
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
    local_218 = local_348.AllocatorInstance.Data;
    local_210 = local_348.AllocatorInstance.Data;
    local_2f8 = local_348.AllocatorInstance.Data + (longlong)local_358 * 8;
    local_200 = local_378.AllocatorInstance.Data;
    local_1f8 = local_378.AllocatorInstance.Data;
    local_1f0 = local_378.AllocatorInstance.Data;
    local_208 = local_2f8;
    if (local_378.AllocatorInstance.Data <= local_2f8) {
      local_1e8 = local_378.AllocatorInstance.Data;
      local_1e0 = local_378.AllocatorInstance.Data;
      local_1d8 = local_378.AllocatorInstance.Data;
      if (local_2f8 < local_378.AllocatorInstance.Data + (longlong)local_378.ArrayMax * 8) {
        local_1d0 = 0;
        local_1cc = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_1b0 = (longlong)local_378.ArrayNum;
        local_1a8 = (longlong)local_378.ArrayMax;
        local_1c8 = local_378.AllocatorInstance.Data;
        local_1c0 = local_378.AllocatorInstance.Data;
        local_1b8 = local_378.AllocatorInstance.Data;
        local_1a0 = local_378.AllocatorInstance.Data;
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
    if (local_378.ArrayNum == local_378.ArrayMax) {
      local_378.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_378.AllocatorInstance,&local_378.ArrayMax);
    }
    local_30c = local_378.ArrayNum;
    local_198 = local_378.AllocatorInstance.Data;
    local_190 = local_378.AllocatorInstance.Data + (longlong)local_378.ArrayNum * 8;
    local_378.ArrayNum = local_378.ArrayNum + 1;
    local_188 = ::operator_new(8,local_190);
    *local_188 = *(undefined8 *)local_2f8;
    local_2dc = local_30c;
    local_350 = local_360 - local_35c;
    local_324 = (uint)(-1 < local_350);
    local_328 = (uint)(local_350 < local_348.ArrayNum);
    if (-1 >= local_350 || local_350 >= local_348.ArrayNum) {
      local_180 = 0;
      local_17c = 0;
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
    local_178 = local_348.AllocatorInstance.Data;
    local_170 = local_348.AllocatorInstance.Data;
    local_308 = local_348.AllocatorInstance.Data + (longlong)local_350 * 8;
    local_160 = local_378.AllocatorInstance.Data;
    local_158 = local_378.AllocatorInstance.Data;
    local_150 = local_378.AllocatorInstance.Data;
    local_168 = local_308;
    if (local_378.AllocatorInstance.Data <= local_308) {
      local_148 = local_378.AllocatorInstance.Data;
      local_140 = local_378.AllocatorInstance.Data;
      local_138 = local_378.AllocatorInstance.Data;
      if (local_308 < local_378.AllocatorInstance.Data + (longlong)local_378.ArrayMax * 8) {
        local_130 = 0;
        local_12c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_110 = (longlong)local_378.ArrayNum;
        local_108 = (longlong)local_378.ArrayMax;
        local_128 = local_378.AllocatorInstance.Data;
        local_120 = local_378.AllocatorInstance.Data;
        local_118 = local_378.AllocatorInstance.Data;
        local_100 = local_378.AllocatorInstance.Data;
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
    if (local_378.ArrayNum == local_378.ArrayMax) {
      local_378.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_378.AllocatorInstance,&local_378.ArrayMax);
    }
    local_320 = local_378.ArrayNum;
    local_f8 = local_378.AllocatorInstance.Data;
    local_f0 = local_378.AllocatorInstance.Data + (longlong)local_378.ArrayNum * 8;
    local_378.ArrayNum = local_378.ArrayNum + 1;
    local_e8 = ::operator_new(8,local_f0);
    *local_e8 = *(undefined8 *)local_308;
    local_2d8 = local_320;
    local_35c = local_35c + 1;
  } while( true );
}

