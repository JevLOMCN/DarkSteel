// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// BuildHierarchy @ 147113ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147114145) */
/* WARNING: Removing unreachable block (ram,0x000147114266) */
/* WARNING: Removing unreachable block (ram,0x0001471143cf) */
/* WARNING: Removing unreachable block (ram,0x0001471144f6) */
/* WARNING: Removing unreachable block (ram,0x00014711465f) */
/* WARNING: Removing unreachable block (ram,0x000147114786) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfCommands_TreeHierarchy::BuildHierarchy
          (FChildOfCommands_TreeHierarchy *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FMassEntityManager *pFVar4;
  FTestFragment_Int *pFVar5;
  FMassCommandBuffer *pFVar6;
  TArrayView<FMassEntityHandle,int> *pTVar7;
  TArrayView<FMassEntityHandle,int> *pTVar8;
  longlong lVar9;
  FMassArchetypeSharedFragmentValues *pFVar10;
  undefined1 auStackY_2f8 [32];
  int local_2c8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_100;
  TArrayView<FMassEntityHandle,int> local_f0;
  TArrayView<FMassEntityHandle,int> local_e0;
  TArrayView<FMassEntityHandle,int> local_d0;
  TArrayView<FMassEntityHandle,int> local_c0;
  TArrayView<FMassEntityHandle,int> local_b0;
  TArrayView<FMassEntityHandle,int> local_a0;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar1 = *(int *)&this->field_0xa8;
  pFVar10 = &local_88;
  for (lVar9 = 0x68; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pFVar10->HashCache = 0;
    pFVar10 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar10->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::BatchCreateEntities
            (pFVar4,&local_100,(FMassArchetypeHandle *)&this->field_0x60,&local_88,iVar1,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x98);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_100);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  for (local_2c8 = 0; local_2c8 < *(int *)&this->field_0xa0; local_2c8 = local_2c8 + 1) {
    pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    if (local_2c8 < 0 || *(int *)&this->field_0xa0 <= local_2c8) {
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Int>
                       (pFVar4,*(FMassEntityHandle *)
                                (*(longlong *)&this->field_0x98 + (longlong)local_2c8 * 8));
    pFVar5->Value = local_2c8;
  }
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar6 = FMassEntityManager::Defer(pFVar4);
  if (*(int *)&this->field_0xa0 < 1) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>(&local_f0,*(FMassEntityHandle **)&this->field_0x98,1);
  if (*(int *)&this->field_0xa0 < 2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar8 = MakeArrayView<FMassEntityHandle>
                     (&local_e0,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 8),2);
  FMassCommandBuffer::
  PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
            (pFVar6,pTVar8,pTVar7);
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar6 = FMassEntityManager::Defer(pFVar4);
  if (*(int *)&this->field_0xa0 < 2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_d0,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 8),1);
  if (*(int *)&this->field_0xa0 < 4) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar8 = MakeArrayView<FMassEntityHandle>
                     (&local_c0,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x18),3);
  FMassCommandBuffer::
  PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
            (pFVar6,pTVar8,pTVar7);
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar6 = FMassEntityManager::Defer(pFVar4);
  if (*(int *)&this->field_0xa0 < 3) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar7 = MakeArrayView<FMassEntityHandle>
                     (&local_b0,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x10),1);
  if (*(int *)&this->field_0xa0 < 7) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar8 = MakeArrayView<FMassEntityHandle>
                     (&local_a0,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x30),2);
  FMassCommandBuffer::
  PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
            (pFVar6,pTVar8,pTVar7);
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar4);
  return;
}

// DeleteEntity @ 14711c260

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfCommands_TreeHierarchy::DeleteEntity
          (FChildOfCommands_TreeHierarchy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityManager *this_00;
  FMassCommandBuffer *this_01;
  
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  this_01 = FMassEntityManager::Defer(this_00);
  if (param_1 < 0 || *(int *)&this->field_0xa0 <= param_1) {
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
  FMassCommandBuffer::DestroyEntity
            (this_01,*(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + (longlong)param_1 * 8))
  ;
  return true;
}

// ReparentEntity @ 14719ae20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfCommands_TreeHierarchy::ReparentEntity
          (FChildOfCommands_TreeHierarchy *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMassEntityManager *pFVar5;
  FMassCommandBuffer *this_00;
  
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  this_00 = FMassEntityManager::Defer(pFVar5);
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
  lVar1 = *(longlong *)&this->field_0x98;
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
  FMassCommandBuffer::
  PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle_&,FMassEntityHandle_&>
            (this_00,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + (longlong)param_1 * 8),
             (FMassEntityHandle *)(lVar1 + (longlong)param_2 * 8));
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar5);
  return true;
}

