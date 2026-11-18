// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14714acd0

/* WARNING: Removing unreachable block (ram,0x00014714ae10) */
/* WARNING: Removing unreachable block (ram,0x00014714b17f) */
/* WARNING: Removing unreachable block (ram,0x00014714b449) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityCollection::FCreateWithCollections::InstantTest(FCreateWithCollections *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  longlong lVar5;
  undefined1 *puVar6;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_2d0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_2c0;
  uint local_2b0;
  undefined4 local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  undefined4 local_298;
  uint local_294;
  uint local_290;
  uint local_28c;
  undefined4 local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  FEntityCollection local_270;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_248;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  FMassArchetypeEntityCollection *local_208;
  FMassArchetypeEntityCollection *local_200;
  FMassArchetypeEntityCollection *local_1f8;
  FAutomationTestBase *local_1f0;
  FAutomationTestBase *local_1e8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_1e0;
  FAutomationTestBase *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  FMassArchetypeEntityCollection *local_1c8;
  FMassArchetypeEntityCollection *local_1c0;
  FMassArchetypeEntityCollection *local_1b8;
  FAutomationTestBase *local_1b0;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_1a8;
  FAutomationTestBase *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  FMassArchetypeEntityCollection *local_190;
  FMassArchetypeEntityCollection *local_188;
  FMassArchetypeEntityCollection *local_180;
  FAutomationTestBase *local_178;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_170;
  TArrayView<FMassEntityHandle_const_,int> *local_168;
  TArrayView<FMassEntityHandle_const_,int> *local_160;
  FAutomationTestBase *local_158;
  FAutomationTestBase *local_150;
  FMassEntityManager *local_148;
  FMassEntityManager *local_140;
  undefined4 local_138;
  undefined4 local_134;
  FAutomationTestBase *local_130;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [16];
  TArrayView<FMassEntityHandle_const_,int> local_88;
  TArrayView<FMassEntityHandle_const_,int> local_78;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_68;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_58;
  TArrayView<FMassEntityHandle_const_,int> local_48;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_28;
  
  FEntityCollectionTestBase::CreateEntitySubset((FEntityCollectionTestBase *)this,&local_2c0,0x32);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_2d0.AllocatorInstance);
  local_2d0.ArrayNum = 0;
  local_2d0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_2d0.AllocatorInstance);
  local_168 = &local_78;
  pTVar4 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                     (local_168,&local_2c0);
  puVar6 = local_98;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    puVar6 = puVar6 + 1;
  }
  local_148 = *(FMassEntityManager **)&this->field_0x28;
  puVar6 = local_98;
  pTVar4 = &local_88;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar4->DataPtr = *puVar6;
    puVar6 = puVar6 + 1;
    pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
  }
  local_140 = local_148;
  Utils::CreateEntityCollections(local_148,&local_88,NoDuplicates,&local_2d0);
  local_21c = local_2d0.ArrayNum;
  if ((local_2d0.ArrayNum != 3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeCollections.Num() == NumArchetypesUsed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassEntityCollectionTest.cpp"
                         ,0xcf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FEntityCollection::FEntityCollection(&local_270);
  local_2ac = 1;
  local_2b0 = (uint)(0 < local_2d0.ArrayNum);
  if (local_2b0 == 0) {
    local_138 = 0;
    local_134 = 0;
    Core::Private::FormatStringSan::
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
  local_208 = (FMassArchetypeEntityCollection *)local_2d0.AllocatorInstance.Data;
  local_200 = (FMassArchetypeEntityCollection *)local_2d0.AllocatorInstance.Data;
  local_1f8 = (FMassArchetypeEntityCollection *)local_2d0.AllocatorInstance.Data;
  FEntityCollection::AppendCollection<FMassArchetypeEntityCollection_&>
            (&local_270,(FMassArchetypeEntityCollection *)local_2d0.AllocatorInstance.Data);
  local_1f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = FEntityCollection::IsEmpty(&local_270);
  ::FString::FString(&local_e8,"(NOT) Collection is empty");
  bVar2 = FAutomationTestBase::TestFalse(local_1f0,&local_e8,bVar2);
  local_2a8 = (uint)!bVar2;
  ::FString::~FString(&local_e8);
  if (!bVar2) {
    AITestSuite::ConditionallyBreakOnTestFail();
    FEntityCollection::~FEntityCollection(&local_270);
    TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_2d0);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c0);
    bVar2 = false;
  }
  else {
    local_1e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    bVar2 = FEntityCollection::IsUpToDate(&local_270);
    ::FString::FString(&local_128,"Collection is up-to-date");
    bVar2 = FAutomationTestBase::TestTrue(local_1e8,&local_128,bVar2);
    local_2a4 = (uint)!bVar2;
    ::FString::~FString(&local_128);
    if (!bVar2) {
      AITestSuite::ConditionallyBreakOnTestFail();
      FEntityCollection::~FEntityCollection(&local_270);
      TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_2d0);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c0);
      bVar2 = false;
    }
    else {
      local_1d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_1e0 = FEntityCollection::GetCachedPerArchetypeCollections(&local_270,&local_28);
      local_218 = local_1e0->ArrayNum;
      local_214 = local_218;
      ::FString::FString(&local_118,"Collection\'s number of cached archetype collections");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_118,local_214,1,local_1d8);
      local_2a0 = (uint)!bVar2;
      ::FString::~FString(&local_118);
      if (!bVar2) {
        AITestSuite::ConditionallyBreakOnTestFail();
        FEntityCollection::~FEntityCollection(&local_270);
        TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_2d0);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c0);
        bVar2 = false;
      }
      else {
        local_298 = 1;
        local_29c = (uint)(1 < local_2d0.ArrayNum);
        if (local_29c == 0) {
          local_1d0 = 0;
          local_1cc = 0;
          Core::Private::FormatStringSan::
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
        local_1c8 = (FMassArchetypeEntityCollection *)local_2d0.AllocatorInstance.Data;
        local_1c0 = (FMassArchetypeEntityCollection *)local_2d0.AllocatorInstance.Data;
        local_1b8 = (FMassArchetypeEntityCollection *)(local_2d0.AllocatorInstance.Data + 0x28);
        FEntityCollection::AppendCollection<FMassArchetypeEntityCollection>(&local_270,local_1b8);
        local_1b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        bVar2 = FEntityCollection::IsUpToDate(&local_270);
        ::FString::FString(&local_108,"Collection is up-to-date");
        bVar2 = FAutomationTestBase::TestTrue(local_1b0,&local_108,bVar2);
        local_294 = (uint)!bVar2;
        ::FString::~FString(&local_108);
        if (!bVar2) {
          AITestSuite::ConditionallyBreakOnTestFail();
          FEntityCollection::~FEntityCollection(&local_270);
          TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_2d0);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c0);
          bVar2 = false;
        }
        else {
          local_1a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_1a8 = FEntityCollection::GetCachedPerArchetypeCollections(&local_270,&local_68);
          local_238 = local_1a8->ArrayNum;
          local_210 = local_238;
          ::FString::FString(&local_f8,"Collection\'s number of cached archetype collections");
          bVar2 = FTestHelpers::TestEqual<int,int>(&local_f8,local_238,2,local_1a0);
          local_290 = (uint)!bVar2;
          ::FString::~FString(&local_f8);
          if (!bVar2) {
            AITestSuite::ConditionallyBreakOnTestFail();
            FEntityCollection::~FEntityCollection(&local_270);
            TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_2d0);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c0);
            bVar2 = false;
          }
          else {
            local_288 = 1;
            local_28c = (uint)(2 < local_2d0.ArrayNum);
            if (local_28c == 0) {
              local_198 = 0;
              local_194 = 0;
              Core::Private::FormatStringSan::
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
            local_190 = (FMassArchetypeEntityCollection *)local_2d0.AllocatorInstance.Data;
            local_188 = (FMassArchetypeEntityCollection *)local_2d0.AllocatorInstance.Data;
            local_180 = (FMassArchetypeEntityCollection *)(local_2d0.AllocatorInstance.Data + 0x50);
            FEntityCollection::AppendCollection<FMassArchetypeEntityCollection_&>
                      (&local_270,local_180);
            local_178 = FAITestBase::GetTestRunner((FAITestBase *)this);
            bVar2 = FEntityCollection::IsUpToDate(&local_270);
            ::FString::FString(&local_a8,"Collection is up-to-date");
            bVar2 = FAutomationTestBase::TestTrue(local_178,&local_a8,bVar2);
            local_284 = (uint)!bVar2;
            ::FString::~FString(&local_a8);
            if (!bVar2) {
              AITestSuite::ConditionallyBreakOnTestFail();
              FEntityCollection::~FEntityCollection(&local_270);
              TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_2d0);
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c0);
              bVar2 = false;
            }
            else {
              local_130 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_170 = FEntityCollection::GetCachedPerArchetypeCollections(&local_270,&local_58);
              local_234 = local_170->ArrayNum;
              local_230 = local_234;
              ::FString::FString(&local_d8,"Collection\'s number of cached archetype collections");
              bVar2 = FTestHelpers::TestEqual<int,int>(&local_d8,local_230,3,local_130);
              local_280 = (uint)!bVar2;
              ::FString::~FString(&local_d8);
              if (!bVar2) {
                AITestSuite::ConditionallyBreakOnTestFail();
                FEntityCollection::~FEntityCollection(&local_270);
                TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_2d0);
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c0);
                bVar2 = false;
              }
              else {
                local_158 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_22c = local_2c0.ArrayNum;
                local_224 = local_2c0.ArrayNum;
                local_160 = FEntityCollection::GetEntityHandlesView(&local_270,&local_48);
                local_228 = local_160->ArrayNum;
                local_220 = local_228;
                ::FString::FString(&local_c8,"Collection\'s number of entities");
                bVar2 = FTestHelpers::TestEqual<int,int>(&local_c8,local_220,local_224,local_158);
                local_27c = (uint)!bVar2;
                ::FString::~FString(&local_c8);
                if (!bVar2) {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  FEntityCollection::~FEntityCollection(&local_270);
                  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_2d0);
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c0);
                  bVar2 = false;
                }
                else {
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                            (&local_248.AllocatorInstance);
                  local_248.ArrayNum = 0;
                  local_248.ArrayMax =
                       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                                 (&local_248.AllocatorInstance);
                  pTVar4 = FEntityCollection::GetEntityHandlesView(&local_270,&local_38);
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  Append<TArrayView<FMassEntityHandle_const_,int>_>(&local_248,pTVar4);
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Sort(&local_248);
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Sort(&local_2c0);
                  local_150 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  bVar2 = Algo::
                          Compare<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                                    (&local_248,&local_2c0);
                  ::FString::FString(&local_b8,"Collection\'s entity handles match expectation");
                  bVar2 = FAutomationTestBase::TestTrue(local_150,&local_b8,bVar2);
                  local_278 = (uint)!bVar2;
                  ::FString::~FString(&local_b8);
                  if (!bVar2) {
                    AITestSuite::ConditionallyBreakOnTestFail();
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_248);
                    FEntityCollection::~FEntityCollection(&local_270);
                    TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_2d0);
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c0);
                    bVar2 = false;
                  }
                  else {
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_248);
                    FEntityCollection::~FEntityCollection(&local_270);
                    TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_>(&local_2d0);
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2c0);
                    bVar2 = true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return bVar2;
}

