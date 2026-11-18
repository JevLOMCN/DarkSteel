// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// BuildHierarchy @ 147116a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::ChildOfRelation::FChildOf_IndividualAPI_StringHierarchy::BuildHierarchy
          (FChildOf_IndividualAPI_StringHierarchy *this)

{
  int iVar1;
  FRelationManager *this_00;
  FMassEntityHandle FVar2;
  code *pcVar3;
  bool bVar4;
  FMassEntityManager *pFVar5;
  FTestFragment_Int *pFVar6;
  longlong lVar7;
  FMassArchetypeSharedFragmentValues *pFVar8;
  undefined1 auStackY_1f8 [32];
  int local_1c8;
  int local_1c4;
  undefined1 local_a8 [8];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_a0;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar1 = *(int *)&this->field_0xa8;
  pFVar8 = &local_88;
  for (lVar7 = 0x68; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pFVar8->HashCache = 0;
    pFVar8 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar8->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::BatchCreateEntities
            (pFVar5,&local_a0,(FMassArchetypeHandle *)&this->field_0x60,&local_88,iVar1,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x98);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_a0);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_1c8 = 0;
  do {
    if (*(int *)&this->field_0xa0 <= local_1c8) {
      local_1c4 = 1;
      do {
        if (*(int *)&this->field_0xa0 <= local_1c4) {
          return;
        }
        this_00 = *(FRelationManager **)&this->field_0xc8;
        if (local_1c4 + -1 < 0 || *(int *)&this->field_0xa0 <= local_1c4 + -1) {
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
        if (local_1c4 < 0 || *(int *)&this->field_0xa0 <= local_1c4) {
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
        FVar2.Index = *(int *)&this->field_0xbc;
        FVar2.SerialNumber = *(int *)&this->field_0xc0;
        FRelationManager::CreateRelationInstance
                  (this_00,(FTypeHandle)local_a8,FVar2,
                   *(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + (longlong)local_1c4 * 8))
        ;
        local_1c4 = local_1c4 + 1;
      } while( true );
    }
    pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    if (local_1c8 < 0 || *(int *)&this->field_0xa0 <= local_1c8) {
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
                                (*(longlong *)&this->field_0x98 + (longlong)local_1c8 * 8));
    pFVar6->Value = local_1c8;
    local_1c8 = local_1c8 + 1;
  } while( true );
}

// ReparentEntity @ 14719b0b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::ChildOfRelation::FChildOf_IndividualAPI_StringHierarchy::ReparentEntity
          (FChildOf_IndividualAPI_StringHierarchy *this,int param_1,int param_2)

{
  FRelationManager *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityHandle FVar4;
  undefined1 local_18 [24];
  
  this_00 = *(FRelationManager **)&this->field_0xc8;
  if (param_2 < 0 || *(int *)&this->field_0xa0 <= param_2) {
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
  FVar4.Index = *(int *)&this->field_0xbc;
  FVar4.SerialNumber = *(int *)&this->field_0xc0;
  FVar4 = FRelationManager::CreateRelationInstance
                    (this_00,(FTypeHandle)local_18,FVar4,
                     *(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + (longlong)param_1 * 8))
  ;
  bVar2 = FMassEntityHandle::IsValid((FMassEntityHandle *)FVar4);
  return bVar2;
}

