// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// BuildHierarchy @ 1471139a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfCommands_StringHierarchy::BuildHierarchy
          (FChildOfCommands_StringHierarchy *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMassEntityManager *pFVar4;
  FTestFragment_Int *pFVar5;
  FMassCommandBuffer *this_00;
  longlong lVar6;
  FMassArchetypeSharedFragmentValues *pFVar7;
  undefined1 auStackY_1a8 [32];
  int local_178;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_98;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar3 = *(int *)&this->field_0xa8;
  pFVar7 = &local_88;
  for (lVar6 = 0x68; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pFVar7->HashCache = 0;
    pFVar7 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar7->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::BatchCreateEntities
            (pFVar4,&local_98,(FMassArchetypeHandle *)&this->field_0x60,&local_88,iVar3,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x98);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_98);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_178 = 0;
  do {
    if (*(int *)&this->field_0xa0 <= local_178) {
      pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      FMassEntityManager::FlushCommands(pFVar4);
      return;
    }
    pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    if (local_178 < 0 || *(int *)&this->field_0xa0 <= local_178) {
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Int>
                       (pFVar4,*(FMassEntityHandle *)
                                (*(longlong *)&this->field_0x98 + (longlong)local_178 * 8));
    pFVar5->Value = local_178;
    if (0 < local_178) {
      pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      this_00 = FMassEntityManager::Defer(pFVar4);
      iVar3 = local_178 + -1;
      if (iVar3 < 0 || *(int *)&this->field_0xa0 <= iVar3) {
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      lVar6 = *(longlong *)&this->field_0x98;
      if (local_178 < 0 || *(int *)&this->field_0xa0 <= local_178) {
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FMassCommandBuffer::
      PushCommand<FMassCommandMakeRelation<FMassChildOfRelation>,FMassEntityHandle_&,FMassEntityHandle_&>
                (this_00,(FMassEntityHandle *)
                         (*(longlong *)&this->field_0x98 + (longlong)local_178 * 8),
                 (FMassEntityHandle *)(lVar6 + (longlong)iVar3 * 8));
    }
    local_178 = local_178 + 1;
  } while( true );
}

// DeleteEntity @ 14711c110

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfCommands_StringHierarchy::DeleteEntity
          (FChildOfCommands_StringHierarchy *this,int param_1)

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

// ReparentEntity @ 14719abb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::ChildOfRelation::FChildOfCommands_StringHierarchy::ReparentEntity
          (FChildOfCommands_StringHierarchy *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMassEntityManager *this_00;
  FMassCommandBuffer *this_01;
  
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  this_01 = FMassEntityManager::Defer(this_00);
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
            (this_01,(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + (longlong)param_1 * 8),
             (FMassEntityHandle *)(lVar1 + (longlong)param_2 * 8));
  return true;
}

