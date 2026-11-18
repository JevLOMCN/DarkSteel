// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147134740

/* WARNING: Removing unreachable block (ram,0x0001471348e2) */
/* WARNING: Removing unreachable block (ram,0x000147134ae6) */
/* WARNING: Removing unreachable block (ram,0x000147134cf0) */
/* WARNING: Removing unreachable block (ram,0x000147134f03) */
/* WARNING: Removing unreachable block (ram,0x000147135036) */
/* WARNING: Removing unreachable block (ram,0x000147135157) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_Equivalence::InstantTest(FArchetypeGroup_Equivalence *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  TArrayView<FMassEntityHandle,int> *pTVar5;
  TArrayView<FMassEntityHandle_const_,int> *pTVar6;
  FArchetypeGroupID *pFVar7;
  FArchetypeGroupHandle *pFVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_3e0;
  uint local_3d0;
  uint local_3cc;
  undefined4 local_3c8;
  uint local_3c4;
  undefined4 local_3c0;
  FArchetypeGroupType local_3bc;
  uint local_3b8;
  undefined4 local_3b4;
  FArchetypeGroupType local_3b0;
  uint local_3ac;
  undefined4 local_3a8;
  uint local_3a4;
  undefined4 local_3a0;
  uint local_39c;
  undefined4 local_398;
  uint local_394;
  uint local_390;
  uint local_38c;
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  FArchetypeGroupType local_374;
  FArchetypeGroupID local_370;
  FArchetypeGroupID local_36c;
  FName *local_368;
  FName local_360;
  FMassEntityManager *local_358;
  FName *local_350;
  FName local_348;
  FMassEntityManager *local_340;
  FMassEntityManager *local_338;
  undefined4 local_330;
  undefined4 local_32c;
  FMassEntityHandle *local_328;
  FMassEntityHandle *local_320;
  FMassEntityHandle *local_318;
  TArrayView<FMassEntityHandle_const_,int> *local_310;
  FArchetypeGroupID *local_308;
  FArchetypeGroupHandle local_300;
  FArchetypeGroupHandle local_2f8;
  FMassEntityManager *local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  FMassEntityHandle *local_2e0;
  FMassEntityHandle *local_2d8;
  FMassEntityHandle *local_2d0;
  TArrayView<FMassEntityHandle_const_,int> *local_2c8;
  FArchetypeGroupID *local_2c0;
  FArchetypeGroupHandle local_2b8;
  FArchetypeGroupHandle local_2b0;
  FMassEntityManager *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  FMassEntityHandle *local_298;
  FMassEntityHandle *local_290;
  FMassEntityHandle *local_288;
  TArrayView<FMassEntityHandle_const_,int> *local_280;
  FArchetypeGroupID *local_278;
  FArchetypeGroupHandle local_270;
  FArchetypeGroupHandle local_268;
  FMassEntityManager *local_260;
  undefined4 local_258;
  undefined4 local_254;
  FMassEntityHandle *local_250;
  FMassEntityHandle *local_248;
  FMassEntityHandle *local_240;
  FMassEntityHandle local_238;
  FMassEntityHandle local_230;
  FMassEntityManager *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  FMassEntityHandle *local_218;
  FMassEntityHandle *local_210;
  FMassEntityHandle *local_208;
  FMassEntityHandle local_200;
  FMassEntityManager *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  FMassEntityHandle *local_1e8;
  FMassEntityHandle *local_1e0;
  FMassEntityHandle *local_1d8;
  FMassEntityHandle local_1d0;
  FMassEntityManager *local_1c8;
  FMassArchetypeHandle *local_1c0;
  FMassArchetypeHandle *local_1b8;
  FAutomationTestBase *local_1b0;
  FMassArchetypeHandle *local_1a8;
  FMassArchetypeHandle *local_1a0;
  FArchetypeGroupID local_198 [2];
  FMassArchetypeHandle local_190;
  FMassArchetypeHandle local_180;
  FString local_170;
  FArchetypeGroupHandle local_160;
  FArchetypeGroupHandle local_158;
  FName local_150;
  FName local_148;
  FArchetypeGroupHandle local_140;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  TArrayView<FMassEntityHandle_const_,int> local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  TArrayView<FMassEntityHandle_const_,int> local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  TArrayView<FMassEntityHandle_const_,int> local_a8;
  TArrayView<FMassEntityHandle_const_,int> local_98;
  TArrayView<FMassEntityHandle,int> local_88;
  TArrayView<FMassEntityHandle_const_,int> local_78;
  TArrayView<FMassEntityHandle,int> local_68;
  TArrayView<FMassEntityHandle_const_,int> local_58;
  TArrayView<FMassEntityHandle,int> local_48;
  FMassArchetypeHandle local_38;
  FMassArchetypeHandle local_28;
  
  local_3d0 = 0x68d;
  local_358 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_368 = &local_150;
  pFVar4 = ::FName::FName(local_368,L"TestGroup1");
  local_360 = *pFVar4;
  FMassEntityManager::FindOrAddArchetypeGroupType(local_358,(FName)&local_3bc);
  local_340 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_350 = &local_148;
  pFVar4 = ::FName::FName(local_350,L"TestGroup2");
  local_348 = *pFVar4;
  FMassEntityManager::FindOrAddArchetypeGroupType(local_340,(FName)&local_3b0);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_3e0.AllocatorInstance);
  local_3e0.ArrayNum = 0;
  local_3e0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_3e0.AllocatorInstance);
  local_338 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_338,&local_138,(FMassArchetypeHandle *)&this->field_0x60,2,&local_3e0);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_138);
  local_2f0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_310 = &local_98;
  local_3c8 = 1;
  local_3cc = (uint)(0 < local_3e0.ArrayNum);
  if (local_3cc == 0) {
    local_330 = 0;
    local_32c = 0;
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
  local_328 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_320 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_318 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  pTVar5 = MakeArrayView<FMassEntityHandle>
                     (&local_88,(FMassEntityHandle *)local_3e0.AllocatorInstance.Data,1);
  pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                     (local_310,pTVar5);
  puVar10 = local_128;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_128;
  puVar11 = local_118;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_308 = local_198;
  pFVar7 = FArchetypeGroupID::FArchetypeGroupID(local_308,local_3d0);
  local_390 = pFVar7->ID;
  local_38c = local_3bc.Identifier;
  pFVar8 = FArchetypeGroupHandle::FArchetypeGroupHandle
                     (&local_140,local_3bc,(FArchetypeGroupID)local_390);
  local_300 = *pFVar8;
  puVar10 = local_118;
  pTVar6 = &local_108;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  local_2f8 = local_300;
  FMassEntityManager::BatchGroupEntities(local_2f0,local_300,&local_108);
  local_2a8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_2c8 = &local_78;
  local_3c0 = 1;
  local_3c4 = (uint)(1 < local_3e0.ArrayNum);
  if (local_3c4 == 0) {
    local_2e8 = 0;
    local_2e4 = 0;
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
  local_2e0 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_2d8 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_2d0 = (FMassEntityHandle *)(local_3e0.AllocatorInstance.Data + 8);
  pTVar5 = MakeArrayView<FMassEntityHandle>(&local_68,local_2d0,1);
  pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                     (local_2c8,pTVar5);
  puVar10 = local_f8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_f8;
  puVar11 = local_e8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_2c0 = &local_370;
  pFVar7 = FArchetypeGroupID::FArchetypeGroupID(local_2c0,local_3d0);
  local_388 = pFVar7->ID;
  local_384 = local_3bc.Identifier;
  pFVar8 = FArchetypeGroupHandle::FArchetypeGroupHandle
                     (&local_160,local_3bc,(FArchetypeGroupID)local_388);
  local_2b8 = *pFVar8;
  puVar10 = local_e8;
  pTVar6 = &local_d8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  local_2b0 = local_2b8;
  FMassEntityManager::BatchGroupEntities(local_2a8,local_2b8,&local_d8);
  local_260 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_280 = &local_58;
  local_3b4 = 1;
  local_3b8 = (uint)(1 < local_3e0.ArrayNum);
  if (local_3b8 == 0) {
    local_2a0 = 0;
    local_29c = 0;
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
  local_298 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_290 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_288 = (FMassEntityHandle *)(local_3e0.AllocatorInstance.Data + 8);
  pTVar5 = MakeArrayView<FMassEntityHandle>(&local_48,local_288,1);
  pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                     (local_280,pTVar5);
  puVar10 = local_c8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_c8;
  puVar11 = local_b8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_278 = &local_36c;
  pFVar7 = FArchetypeGroupID::FArchetypeGroupID(local_278,local_3d0);
  local_380 = pFVar7->ID;
  local_37c = local_3b0.Identifier;
  pFVar8 = FArchetypeGroupHandle::FArchetypeGroupHandle
                     (&local_158,local_3b0,(FArchetypeGroupID)local_380);
  local_270 = *pFVar8;
  puVar10 = local_b8;
  pTVar6 = &local_a8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  local_268 = local_270;
  FMassEntityManager::BatchGroupEntities(local_260,local_270,&local_a8);
  local_228 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_378 = local_3b0.Identifier;
  local_374.Identifier = local_3b0.Identifier;
  local_3a8 = 1;
  local_3ac = (uint)(1 < local_3e0.ArrayNum);
  if (local_3ac == 0) {
    local_258 = 0;
    local_254 = 0;
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
  local_250 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_248 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_240 = (FMassEntityHandle *)(local_3e0.AllocatorInstance.Data + 8);
  local_238 = *local_240;
  local_230 = local_238;
  FMassEntityManager::RemoveEntityFromGroupType(local_228,local_238,local_374);
  local_1f8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_3a0 = 1;
  local_3a4 = (uint)(0 < local_3e0.ArrayNum);
  if (local_3a4 == 0) {
    local_220 = 0;
    local_21c = 0;
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
  local_218 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_210 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_208 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_200 = *(FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  FMassEntityManager::GetArchetypeForEntity(local_1f8,&local_180,local_200);
  local_1c8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_398 = 1;
  local_39c = (uint)(1 < local_3e0.ArrayNum);
  if (local_39c == 0) {
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
  local_1e8 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_1e0 = (FMassEntityHandle *)local_3e0.AllocatorInstance.Data;
  local_1d8 = (FMassEntityHandle *)(local_3e0.AllocatorInstance.Data + 8);
  local_1d0 = *local_1d8;
  FMassEntityManager::GetArchetypeForEntity(local_1c8,&local_190,local_1d0);
  local_1b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_1c0 = &local_38;
  local_1a8 = FMassArchetypeHandle::FMassArchetypeHandle(local_1c0,&local_190);
  local_1b8 = &local_28;
  local_1a0 = FMassArchetypeHandle::FMassArchetypeHandle(local_1b8,&local_180);
  ::FString::FString(&local_170,
                     "The archetypes with groups created directly and with groups modifications");
  bVar2 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                    (&local_170,local_1a0,local_1a8,local_1b0);
  local_394 = (uint)!bVar2;
  ::FString::~FString(&local_170);
  bVar2 = bVar2;
  if (bVar2) {
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_190);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_180);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3e0);
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_190);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_180);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3e0);
  }
  return bVar2;
}

