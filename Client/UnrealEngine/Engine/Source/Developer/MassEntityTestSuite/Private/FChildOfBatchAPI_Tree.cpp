// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// BuildHierarchy @ 147111dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147112076) */
/* WARNING: Removing unreachable block (ram,0x0001471121de) */
/* WARNING: Removing unreachable block (ram,0x0001471123fe) */
/* WARNING: Removing unreachable block (ram,0x000147112566) */
/* WARNING: Removing unreachable block (ram,0x000147112787) */
/* WARNING: Removing unreachable block (ram,0x0001471128f5) */
/* WARNING: Removing unreachable block (ram,0x000147112b16) */
/* WARNING: Removing unreachable block (ram,0x000147112c84) */
/* WARNING: Removing unreachable block (ram,0x000147112ea8) */
/* WARNING: Removing unreachable block (ram,0x00014711301f) */
/* WARNING: Removing unreachable block (ram,0x000147113252) */
/* WARNING: Removing unreachable block (ram,0x0001471133d2) */
/* WARNING: Removing unreachable block (ram,0x000147113605) */
/* WARNING: Removing unreachable block (ram,0x000147113785) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfBatchAPI_Tree::BuildHierarchy(FChildOfBatchAPI_Tree *this)

{
  int iVar1;
  FTypeHandle FVar2;
  code *pcVar3;
  bool bVar4;
  FMassEntityManager *pFVar5;
  FTestFragment_Int *pFVar6;
  TArrayView<FMassEntityHandle,int> *pTVar7;
  longlong lVar8;
  undefined1 *puVar9;
  FMassArchetypeSharedFragmentValues *pFVar10;
  undefined1 *puVar11;
  undefined1 auStackY_918 [32];
  int local_8e8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_508;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  TArrayView<FMassEntityHandle,int> local_498;
  TArrayView<FMassEntityHandle,int> local_488;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  TArrayView<FMassEntityHandle,int> local_418;
  TArrayView<FMassEntityHandle,int> local_408;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  TArrayView<FMassEntityHandle,int> local_398;
  TArrayView<FMassEntityHandle,int> local_388;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  TArrayView<FMassEntityHandle,int> local_318;
  TArrayView<FMassEntityHandle,int> local_308;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  TArrayView<FMassEntityHandle,int> local_298;
  TArrayView<FMassEntityHandle,int> local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  TArrayView<FMassEntityHandle,int> local_218;
  TArrayView<FMassEntityHandle,int> local_208;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  TArrayView<FMassEntityHandle,int> local_198;
  TArrayView<FMassEntityHandle,int> local_188;
  TArrayView<FMassEntityHandle,int> local_178;
  TArrayView<FMassEntityHandle,int> local_168;
  TArrayView<FMassEntityHandle,int> local_158;
  TArrayView<FMassEntityHandle,int> local_148;
  TArrayView<FMassEntityHandle,int> local_138;
  TArrayView<FMassEntityHandle,int> local_128;
  TArrayView<FMassEntityHandle,int> local_118;
  TArrayView<FMassEntityHandle,int> local_108;
  TArrayView<FMassEntityHandle,int> local_f8;
  TArrayView<FMassEntityHandle,int> local_e8;
  TArrayView<FMassEntityHandle,int> local_d8;
  TArrayView<FMassEntityHandle,int> local_c8;
  TArrayView<FMassEntityHandle,int> local_b8;
  TArrayView<FMassEntityHandle,int> local_a8;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar1 = *(int *)&this->field_0xa8;
  pFVar10 = &local_98;
  for (lVar8 = 0x68; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar10->HashCache = 0;
    pFVar10 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar10->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  FMassEntityManager::BatchCreateEntities
            (pFVar5,&local_508,(FMassArchetypeHandle *)&this->field_0x60,&local_98,iVar1,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x98);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_508);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
  for (local_8e8 = 0; local_8e8 < *(int *)&this->field_0xa0; local_8e8 = local_8e8 + 1) {
    pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    if (local_8e8 < 0 || *(int *)&this->field_0xa0 <= local_8e8) {
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar6 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Int>
                       (pFVar5,*(FMassEntityHandle *)
                                (*(longlong *)&this->field_0x98 + (longlong)local_8e8 * 8));
    pFVar6->Value = local_8e8;
  }
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  if (*(int *)&this->field_0xa0 < 1) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>(&local_178,*(FMassEntityHandle **)&this->field_0x98,1);
  puVar9 = local_4f8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_4f8;
  puVar11 = local_4e8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_4e8;
  puVar11 = local_4b8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(int *)&this->field_0xa0 < 2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_168,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 8),1);
  puVar9 = local_4d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_4d8;
  puVar11 = local_4c8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_4c8;
  puVar11 = local_4a8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  FVar2.TypeKey.ObjectKey = *(TObjectKey<UStruct_const_> *)&this->field_0xbc;
  puVar9 = local_4b8;
  pTVar7 = &local_498;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  puVar9 = local_4a8;
  pTVar7 = &local_488;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassEntityManager::BatchCreateRelations(pFVar5,FVar2,&local_488,&local_498);
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  if (*(int *)&this->field_0xa0 < 1) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>(&local_158,*(FMassEntityHandle **)&this->field_0x98,1);
  puVar9 = local_478;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_478;
  puVar11 = local_468;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_468;
  puVar11 = local_438;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(int *)&this->field_0xa0 < 3) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_148,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x10),1);
  puVar9 = local_458;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_458;
  puVar11 = local_448;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_448;
  puVar11 = local_428;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  FVar2.TypeKey.ObjectKey = *(TObjectKey<UStruct_const_> *)&this->field_0xbc;
  puVar9 = local_438;
  pTVar7 = &local_418;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  puVar9 = local_428;
  pTVar7 = &local_408;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassEntityManager::BatchCreateRelations(pFVar5,FVar2,&local_408,&local_418);
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  if (*(int *)&this->field_0xa0 < 2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_138,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 8),1);
  puVar9 = local_3f8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_3f8;
  puVar11 = local_3e8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_3e8;
  puVar11 = local_3b8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(int *)&this->field_0xa0 < 4) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_128,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x18),1);
  puVar9 = local_3d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_3d8;
  puVar11 = local_3c8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_3c8;
  puVar11 = local_3a8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  FVar2.TypeKey.ObjectKey = *(TObjectKey<UStruct_const_> *)&this->field_0xbc;
  puVar9 = local_3b8;
  pTVar7 = &local_398;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  puVar9 = local_3a8;
  pTVar7 = &local_388;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassEntityManager::BatchCreateRelations(pFVar5,FVar2,&local_388,&local_398);
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  if (*(int *)&this->field_0xa0 < 2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_118,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 8),1);
  puVar9 = local_378;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_378;
  puVar11 = local_368;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_368;
  puVar11 = local_338;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(int *)&this->field_0xa0 < 5) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_108,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x20),1);
  puVar9 = local_358;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_358;
  puVar11 = local_348;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_348;
  puVar11 = local_328;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  FVar2.TypeKey.ObjectKey = *(TObjectKey<UStruct_const_> *)&this->field_0xbc;
  puVar9 = local_338;
  pTVar7 = &local_318;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  puVar9 = local_328;
  pTVar7 = &local_308;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassEntityManager::BatchCreateRelations(pFVar5,FVar2,&local_308,&local_318);
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  if (*(int *)&this->field_0xa0 < 2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_f8,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 8),1);
  puVar9 = local_2f8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_2f8;
  puVar11 = local_2e8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_2e8;
  puVar11 = local_2b8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(int *)&this->field_0xa0 < 6) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_e8,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x28),1);
  puVar9 = local_2d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_2d8;
  puVar11 = local_2c8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_2c8;
  puVar11 = local_2a8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  FVar2.TypeKey.ObjectKey = *(TObjectKey<UStruct_const_> *)&this->field_0xbc;
  puVar9 = local_2b8;
  pTVar7 = &local_298;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  puVar9 = local_2a8;
  pTVar7 = &local_288;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassEntityManager::BatchCreateRelations(pFVar5,FVar2,&local_288,&local_298);
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  if (*(int *)&this->field_0xa0 < 3) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_d8,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x10),1);
  puVar9 = local_278;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_278;
  puVar11 = local_268;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_268;
  puVar11 = local_238;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(int *)&this->field_0xa0 < 7) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_c8,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x30),1);
  puVar9 = local_258;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_258;
  puVar11 = local_248;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_248;
  puVar11 = local_228;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  FVar2.TypeKey.ObjectKey = *(TObjectKey<UStruct_const_> *)&this->field_0xbc;
  puVar9 = local_238;
  pTVar7 = &local_218;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  puVar9 = local_228;
  pTVar7 = &local_208;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassEntityManager::BatchCreateRelations(pFVar5,FVar2,&local_208,&local_218);
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  if (*(int *)&this->field_0xa0 < 3) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_b8,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x10),1);
  puVar9 = local_1f8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_1f8;
  puVar11 = local_1e8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_1e8;
  puVar11 = local_1b8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(int *)&this->field_0xa0 < 8) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_a8,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x38),1);
  puVar9 = local_1d8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *(undefined1 *)&pTVar7->DataPtr;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_1d8;
  puVar11 = local_1c8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_1c8;
  puVar11 = local_1a8;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  FVar2.TypeKey.ObjectKey = *(TObjectKey<UStruct_const_> *)&this->field_0xbc;
  puVar9 = local_1b8;
  pTVar7 = &local_198;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  puVar9 = local_1a8;
  pTVar7 = &local_188;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar7 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassEntityManager::BatchCreateRelations(pFVar5,FVar2,&local_188,&local_198);
  return;
}

// ReparentEntity @ 14719a810

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfBatchAPI_Tree::ReparentEntity
          (FChildOfBatchAPI_Tree *this,int param_1,int param_2)

{
  FTypeHandle FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMassEntityManager *this_00;
  TArrayView<FMassEntityHandle,int> *pTVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  TArrayView<FMassEntityHandle,int> local_58;
  TArrayView<FMassEntityHandle,int> local_48;
  TArrayView<FMassEntityHandle,int> local_38;
  TArrayView<FMassEntityHandle,int> local_28;
  
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  if (param_2 < 0 || *(int *)&this->field_0xa0 <= param_2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar5 = MakeArrayView<FMassEntityHandle>
                     (&local_38,
                      (FMassEntityHandle *)(*(longlong *)&this->field_0x98 + (longlong)param_2 * 8),
                      1);
  puVar7 = local_b8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_b8;
  puVar8 = local_a8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = local_a8;
  puVar8 = local_78;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  if (param_1 < 0 || *(int *)&this->field_0xa0 <= param_1) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar5 = MakeArrayView<FMassEntityHandle>
                     (&local_28,
                      (FMassEntityHandle *)(*(longlong *)&this->field_0x98 + (longlong)param_1 * 8),
                      1);
  puVar7 = local_98;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_98;
  puVar8 = local_88;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = local_88;
  puVar8 = local_68;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FVar1.TypeKey.ObjectKey = *(TObjectKey<UStruct_const_> *)&this->field_0xbc;
  puVar7 = local_78;
  pTVar5 = &local_58;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar5 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  puVar7 = local_68;
  pTVar5 = &local_48;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar5 = (TArrayView<FMassEntityHandle,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  bVar3 = FMassEntityManager::BatchCreateRelations(this_00,FVar1,&local_48,&local_58);
  return bVar3;
}

