// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14714db20

/* WARNING: Removing unreachable block (ram,0x00014714db64) */
/* WARNING: Removing unreachable block (ram,0x00014714e17a) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityCollection::FCreateWithHandle::InstantTest(FCreateWithHandle *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar5;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar6;
  int local_428;
  int local_404;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_400;
  FEntityCollection local_3f0;
  uint local_3c8;
  undefined4 local_3c4;
  uint local_3c0;
  uint local_3bc;
  uint local_3b8;
  uint local_3b4;
  uint local_3b0;
  uint local_3ac;
  undefined4 local_3a8;
  uint local_3a4;
  uint local_3a0;
  uint local_39c;
  uint local_398;
  uint local_394;
  uint local_390;
  uint local_38c;
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  int local_374;
  int local_370;
  int local_36c;
  int local_368;
  int local_364;
  int local_360;
  int local_35c;
  int local_358;
  int local_354;
  int local_350;
  int local_34c;
  int local_348;
  int local_344;
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  int local_330;
  FMassEntityHandle *local_328;
  FMassEntityHandle *local_320;
  FAutomationTestBase *local_318;
  FAutomationTestBase *local_310;
  TArrayView<FMassEntityHandle_const_,int> *local_308;
  FAutomationTestBase *local_300;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_2f8;
  FAutomationTestBase *local_2f0;
  FMassEntityManager *local_2e8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_2e0;
  FAutomationTestBase *local_2d8;
  FAutomationTestBase *local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  FMassEntityHandle *local_2c0;
  FMassEntityHandle *local_2b8;
  FMassEntityHandle *local_2b0;
  FAutomationTestBase *local_2a8;
  TArrayView<FMassEntityHandle_const_,int> *local_2a0;
  FAutomationTestBase *local_298;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_290;
  FAutomationTestBase *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  FMassEntityHandle *local_278;
  FMassEntityHandle *local_270;
  FMassEntityHandle *local_268;
  TArrayView<FMassEntityHandle_const_,int> *local_260;
  FAutomationTestBase *local_258;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_250;
  FAutomationTestBase *local_248;
  FMassEntityManager *local_240;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_238;
  FAutomationTestBase *local_230;
  FAutomationTestBase *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  FMassEntityHandle *local_218;
  FMassEntityHandle *local_210;
  FMassEntityHandle *local_208;
  FMassEntityManager *local_200;
  FMassEntityManager *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  FMassEntityHandle *local_1e8;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_110;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_100;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_e8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_d8;
  FEntityCollection local_c8;
  TArrayView<FMassEntityHandle_const_,int> local_a0;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_90;
  TArrayView<FMassEntityHandle_const_,int> local_80;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_70;
  TArrayView<FMassEntityHandle_const_,int> local_60;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_50;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_40;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_30 [2];
  
  FEntityCollection::FEntityCollection(&local_3f0);
  FEntityCollectionTestBase::CreateEntitySubset((FEntityCollectionTestBase *)this,&local_400,0x32);
  local_3c4 = 1;
  local_3c8 = (uint)(0 < local_400.ArrayNum);
  if (local_3c8 == 0) {
    local_1f0 = 0;
    local_1ec = 0;
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
  local_1e8 = (FMassEntityHandle *)local_400.AllocatorInstance.Data;
  local_328 = (FMassEntityHandle *)local_400.AllocatorInstance.Data;
  local_320 = (FMassEntityHandle *)local_400.AllocatorInstance.Data;
  FEntityCollection::AddHandle(&local_3f0,*(FMassEntityHandle *)local_400.AllocatorInstance.Data);
  local_318 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = FEntityCollection::IsEmpty(&local_3f0);
  ::FString::FString(&local_120,"(NOT) Single-handle collection is empty");
  bVar2 = FAutomationTestBase::TestFalse(local_318,&local_120,bVar2);
  local_3c0 = (uint)!bVar2;
  ::FString::~FString(&local_120);
  if (!bVar2) {
    AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
    FEntityCollection::~FEntityCollection(&local_3f0);
    bVar2 = false;
  }
  else {
    local_310 = FAITestBase::GetTestRunner((FAITestBase *)this);
    bVar2 = FEntityCollection::IsUpToDate(&local_3f0);
    ::FString::FString(&local_1e0,"(NOT) Single-handle collection is up-to-date");
    bVar2 = FAutomationTestBase::TestFalse(local_310,&local_1e0,bVar2);
    local_3bc = (uint)!bVar2;
    ::FString::~FString(&local_1e0);
    if (!bVar2) {
      AITestSuite::ConditionallyBreakOnTestFail();
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
      FEntityCollection::~FEntityCollection(&local_3f0);
      bVar2 = false;
    }
    else {
      local_300 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_308 = FEntityCollection::GetEntityHandlesView(&local_3f0,&local_a0);
      local_334 = local_308->ArrayNum;
      local_330 = local_334;
      ::FString::FString(&local_1d0,"Single-handle collection\'s number of entity handles");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_1d0,local_330,1,local_300);
      local_3b8 = (uint)!bVar2;
      ::FString::~FString(&local_1d0);
      if (!bVar2) {
        AITestSuite::ConditionallyBreakOnTestFail();
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
        FEntityCollection::~FEntityCollection(&local_3f0);
        bVar2 = false;
      }
      else {
        local_2f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_2f8 = FEntityCollection::GetCachedPerArchetypeCollections(&local_3f0,local_30);
        local_374 = local_2f8->ArrayNum;
        local_370 = local_374;
        ::FString::FString(&local_1c0,
                           "Single-handle collection\'s number of cached archetype collections");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_1c0,local_370,0,local_2f0);
        local_3b4 = (uint)!bVar2;
        ::FString::~FString(&local_1c0);
        if (!bVar2) {
          AITestSuite::ConditionallyBreakOnTestFail();
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
          FEntityCollection::~FEntityCollection(&local_3f0);
          bVar2 = false;
        }
        else {
          local_2d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_2e8 = *(FMassEntityManager **)&this->field_0x28;
          local_2e0 = FEntityCollection::GetUpToDatePerArchetypeCollections
                                (&local_3f0,&local_90,local_2e8);
          local_36c = local_2e0->ArrayNum;
          local_368 = local_36c;
          ::FString::FString(&local_1b0,
                             "Single-handle collection\'s number of updated archetype collections");
          bVar2 = FTestHelpers::TestEqual<int,int>(&local_1b0,local_368,1,local_2d8);
          local_3b0 = (uint)!bVar2;
          ::FString::~FString(&local_1b0);
          if (!bVar2) {
            AITestSuite::ConditionallyBreakOnTestFail();
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
            FEntityCollection::~FEntityCollection(&local_3f0);
            bVar2 = false;
          }
          else {
            local_2d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
            bVar2 = FEntityCollection::IsUpToDate(&local_3f0);
            ::FString::FString(&local_1a0,
                               "Single-handle collection is up-to-date after updating archetype collections"
                              );
            bVar2 = FAutomationTestBase::TestTrue(local_2d0,&local_1a0,bVar2);
            local_3ac = (uint)!bVar2;
            ::FString::~FString(&local_1a0);
            if (!bVar2) {
              AITestSuite::ConditionallyBreakOnTestFail();
              TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
              ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
              FEntityCollection::~FEntityCollection(&local_3f0);
              bVar2 = false;
            }
            else {
              local_3a8 = 1;
              local_390 = (uint)(1 < local_400.ArrayNum);
              if (local_390 == 0) {
                local_2c8 = 0;
                local_2c4 = 0;
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
              local_2c0 = (FMassEntityHandle *)local_400.AllocatorInstance.Data;
              local_2b8 = (FMassEntityHandle *)local_400.AllocatorInstance.Data;
              local_2b0 = (FMassEntityHandle *)(local_400.AllocatorInstance.Data + 8);
              FEntityCollection::AddHandle(&local_3f0,*local_2b0);
              local_2a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
              bVar2 = FEntityCollection::IsUpToDate(&local_3f0);
              ::FString::FString(&local_190,"(NOT) Two-handles collection is up-to-date");
              bVar2 = FAutomationTestBase::TestFalse(local_2a8,&local_190,bVar2);
              local_3a4 = (uint)!bVar2;
              ::FString::~FString(&local_190);
              if (!bVar2) {
                AITestSuite::ConditionallyBreakOnTestFail();
                TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
                FEntityCollection::~FEntityCollection(&local_3f0);
                bVar2 = false;
              }
              else {
                local_298 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_2a0 = FEntityCollection::GetEntityHandlesView(&local_3f0,&local_80);
                local_364 = local_2a0->ArrayNum;
                local_360 = local_364;
                ::FString::FString(&local_180,"Two-handles collection\'s number of entity handles");
                bVar2 = FTestHelpers::TestEqual<int,int>(&local_180,local_360,2,local_298);
                local_3a0 = (uint)!bVar2;
                ::FString::~FString(&local_180);
                if (!bVar2) {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
                  FEntityCollection::~FEntityCollection(&local_3f0);
                  bVar2 = false;
                }
                else {
                  local_288 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_290 = FEntityCollection::GetCachedPerArchetypeCollections
                                        (&local_3f0,&local_70);
                  local_35c = local_290->ArrayNum;
                  local_358 = local_35c;
                  ::FString::FString(&local_170,
                                     "Two-handles collection\'s number of cached archetype collections"
                                    );
                  bVar2 = FTestHelpers::TestEqual<int,int>(&local_170,local_358,0,local_288);
                  local_39c = (uint)!bVar2;
                  ::FString::~FString(&local_170);
                  if (!bVar2) {
                    AITestSuite::ConditionallyBreakOnTestFail();
                    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
                    FEntityCollection::~FEntityCollection(&local_3f0);
                    bVar2 = false;
                  }
                  else {
                    for (local_428 = 2; local_354 = local_400.ArrayNum,
                        local_428 < local_400.ArrayNum; local_428 = local_428 + 1) {
                      local_394 = (uint)(-1 < local_428);
                      local_398 = (uint)(local_428 < local_400.ArrayNum);
                      if (-1 >= local_428 || local_428 >= local_400.ArrayNum) {
                        local_280 = 0;
                        local_27c = 0;
                        Core::Private::FormatStringSan::
                        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar2) {
                          pcVar1 = (code *)swi(3);
                          uVar3 = (*pcVar1)();
                          return (bool)uVar3;
                        }
                      }
                      local_278 = (FMassEntityHandle *)local_400.AllocatorInstance.Data;
                      local_270 = (FMassEntityHandle *)local_400.AllocatorInstance.Data;
                      local_268 = (FMassEntityHandle *)
                                  (local_400.AllocatorInstance.Data + (longlong)local_428 * 8);
                      FEntityCollection::AddHandle(&local_3f0,*local_268);
                      local_258 = FAITestBase::GetTestRunner((FAITestBase *)this);
                      local_260 = FEntityCollection::GetEntityHandlesView(&local_3f0,&local_60);
                      local_350 = local_260->ArrayNum;
                      local_34c = local_350;
                      ::FString::FString(&local_160,"Collection\'s number of entity handles");
                      bVar2 = FTestHelpers::TestEqual<int,int>
                                        (&local_160,local_34c,local_428 + 1,local_258);
                      local_378 = (uint)!bVar2;
                      ::FString::~FString(&local_160);
                      if (!bVar2) {
                        AITestSuite::ConditionallyBreakOnTestFail();
                        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
                        FEntityCollection::~FEntityCollection(&local_3f0);
                        return false;
                      }
                    }
                    local_248 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    local_250 = FEntityCollection::GetCachedPerArchetypeCollections
                                          (&local_3f0,&local_50);
                    local_348 = local_250->ArrayNum;
                    local_344 = local_348;
                    ::FString::FString(&local_150,
                                       "Collection\'s number of cached archetype collections");
                    bVar2 = FTestHelpers::TestEqual<int,int>(&local_150,local_344,0,local_248);
                    local_38c = (uint)!bVar2;
                    ::FString::~FString(&local_150);
                    if (!bVar2) {
                      AITestSuite::ConditionallyBreakOnTestFail();
                      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
                      FEntityCollection::~FEntityCollection(&local_3f0);
                      bVar2 = false;
                    }
                    else {
                      local_230 = FAITestBase::GetTestRunner((FAITestBase *)this);
                      local_240 = *(FMassEntityManager **)&this->field_0x28;
                      local_238 = FEntityCollection::GetUpToDatePerArchetypeCollections
                                            (&local_3f0,&local_40,local_240);
                      local_340 = local_238->ArrayNum;
                      local_33c = local_340;
                      ::FString::FString(&local_140,
                                         "Collection\'s number of updated archetype collections");
                      bVar2 = FTestHelpers::TestEqual<int,int>(&local_140,local_33c,3,local_230);
                      local_388 = (uint)!bVar2;
                      ::FString::~FString(&local_140);
                      if (!bVar2) {
                        AITestSuite::ConditionallyBreakOnTestFail();
                        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
                        FEntityCollection::~FEntityCollection(&local_3f0);
                        bVar2 = false;
                      }
                      else {
                        local_228 = FAITestBase::GetTestRunner((FAITestBase *)this);
                        bVar2 = FEntityCollection::IsUpToDate(&local_3f0);
                        ::FString::FString(&local_130,
                                           "Collection is up-to-date after updating archetype collections"
                                          );
                        bVar2 = FAutomationTestBase::TestTrue(local_228,&local_130,bVar2);
                        local_384 = (uint)!bVar2;
                        ::FString::~FString(&local_130);
                        if (!bVar2) {
                          AITestSuite::ConditionallyBreakOnTestFail();
                          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
                          FEntityCollection::~FEntityCollection(&local_3f0);
                          bVar2 = false;
                        }
                        else {
                          FEntityCollection::FEntityCollection(&local_c8);
                          local_338 = local_400.ArrayNum;
                          local_404 = local_400.ArrayNum;
                          while (local_404 = local_404 + -1, -1 < local_404) {
                            local_37c = (uint)(-1 < local_404);
                            local_380 = (uint)(local_404 < local_400.ArrayNum);
                            if (-1 >= local_404 || local_404 >= local_400.ArrayNum) {
                              local_220 = 0;
                              local_21c = 0;
                              Core::Private::FormatStringSan::
                              AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>
                                        ();
                              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                );
                              if (bVar2) {
                                pcVar1 = (code *)swi(3);
                                uVar3 = (*pcVar1)();
                                return (bool)uVar3;
                              }
                            }
                            local_218 = (FMassEntityHandle *)local_400.AllocatorInstance.Data;
                            local_210 = (FMassEntityHandle *)local_400.AllocatorInstance.Data;
                            local_208 = (FMassEntityHandle *)
                                        (local_400.AllocatorInstance.Data + (longlong)local_404 * 8)
                            ;
                            FEntityCollection::AddHandle(&local_c8,*local_208);
                          }
                          local_200 = *(FMassEntityManager **)&this->field_0x28;
                          FEntityCollection::GetUpToDatePerArchetypeCollections
                                    (&local_3f0,&local_100,local_200);
                          local_1f8 = *(FMassEntityManager **)&this->field_0x28;
                          FEntityCollection::GetUpToDatePerArchetypeCollections
                                    (&local_c8,&local_110,local_1f8);
                          pTVar5 = &local_110;
                          pTVar6 = &local_e8;
                          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
                            *(undefined1 *)&pTVar6->DataPtr = *(undefined1 *)&pTVar5->DataPtr;
                            pTVar5 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                                     ((longlong)&pTVar5->DataPtr + 1);
                            pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                                     ((longlong)&pTVar6->DataPtr + 1);
                          }
                          pTVar5 = &local_100;
                          pTVar6 = &local_d8;
                          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
                            *(undefined1 *)&pTVar6->DataPtr = *(undefined1 *)&pTVar5->DataPtr;
                            pTVar5 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                                     ((longlong)&pTVar5->DataPtr + 1);
                            pTVar6 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
                                     ((longlong)&pTVar6->DataPtr + 1);
                          }
                          bVar2 = FEntityCollectionTestBase::CompareCollectionArrays
                                            ((FEntityCollectionTestBase *)this,&local_d8,&local_e8);
                          FEntityCollection::~FEntityCollection(&local_c8);
                          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
                          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_400);
                          FEntityCollection::~FEntityCollection(&local_3f0);
                        }
                      }
                    }
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

