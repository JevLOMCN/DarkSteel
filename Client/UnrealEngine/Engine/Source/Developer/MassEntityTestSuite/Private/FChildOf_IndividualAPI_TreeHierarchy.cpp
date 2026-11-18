// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// BuildHierarchy @ 147117030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471172e0) */
/* WARNING: Removing unreachable block (ram,0x00014711740e) */
/* WARNING: Removing unreachable block (ram,0x0001471175c2) */
/* WARNING: Removing unreachable block (ram,0x0001471176f0) */
/* WARNING: Removing unreachable block (ram,0x0001471178a5) */
/* WARNING: Removing unreachable block (ram,0x0001471179d9) */
/* WARNING: Removing unreachable block (ram,0x000147117b8e) */
/* WARNING: Removing unreachable block (ram,0x000147117cc2) */
/* WARNING: Removing unreachable block (ram,0x000147117e7a) */
/* WARNING: Removing unreachable block (ram,0x000147117fb7) */
/* WARNING: Removing unreachable block (ram,0x00014711817e) */
/* WARNING: Removing unreachable block (ram,0x0001471182c4) */
/* WARNING: Removing unreachable block (ram,0x00014711848b) */
/* WARNING: Removing unreachable block (ram,0x0001471185d1) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::ChildOfRelation::FChildOf_IndividualAPI_TreeHierarchy::BuildHierarchy
          (FChildOf_IndividualAPI_TreeHierarchy *this)

{
  int iVar1;
  FRelationManager *pFVar2;
  FMassEntityHandle FVar3;
  FMassEntityHandle FVar4;
  FMassEntityHandle FVar5;
  FMassEntityHandle FVar6;
  FMassEntityHandle FVar7;
  FMassEntityHandle FVar8;
  FMassEntityHandle FVar9;
  code *pcVar10;
  bool bVar11;
  FMassEntityManager *pFVar12;
  FTestFragment_Int *pFVar13;
  longlong lVar14;
  FMassArchetypeSharedFragmentValues *pFVar15;
  undefined1 auStackY_638 [32];
  int local_608;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_a0;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_638;
  pFVar12 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar1 = *(int *)&this->field_0xa8;
  pFVar15 = &local_88;
  for (lVar14 = 0x68; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)&pFVar15->HashCache = 0;
    pFVar15 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar15->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::BatchCreateEntities
            (pFVar12,&local_a0,(FMassArchetypeHandle *)&this->field_0x60,&local_88,iVar1,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0x98);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_a0);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  for (local_608 = 0; local_608 < *(int *)&this->field_0xa0; local_608 = local_608 + 1) {
    pFVar12 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    if (local_608 < 0 || *(int *)&this->field_0xa0 <= local_608) {
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar13 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Int>
                        (pFVar12,*(FMassEntityHandle *)
                                  (*(longlong *)&this->field_0x98 + (longlong)local_608 * 8));
    pFVar13->Value = local_608;
  }
  pFVar2 = *(FRelationManager **)&this->field_0xc8;
  if (*(int *)&this->field_0xa0 < 1) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (*(int *)&this->field_0xa0 < 2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FVar3.Index = *(int *)&this->field_0xbc;
  FVar3.SerialNumber = *(int *)&this->field_0xc0;
  FRelationManager::CreateRelationInstance
            (pFVar2,(FTypeHandle)local_d8,FVar3,
             *(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 8));
  pFVar2 = *(FRelationManager **)&this->field_0xc8;
  if (*(int *)&this->field_0xa0 < 1) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (*(int *)&this->field_0xa0 < 3) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FVar4.Index = *(int *)&this->field_0xbc;
  FVar4.SerialNumber = *(int *)&this->field_0xc0;
  FRelationManager::CreateRelationInstance
            (pFVar2,(FTypeHandle)local_d0,FVar4,
             *(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x10));
  pFVar2 = *(FRelationManager **)&this->field_0xc8;
  if (*(int *)&this->field_0xa0 < 2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (*(int *)&this->field_0xa0 < 4) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FVar5.Index = *(int *)&this->field_0xbc;
  FVar5.SerialNumber = *(int *)&this->field_0xc0;
  FRelationManager::CreateRelationInstance
            (pFVar2,(FTypeHandle)local_c8,FVar5,
             *(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x18));
  pFVar2 = *(FRelationManager **)&this->field_0xc8;
  if (*(int *)&this->field_0xa0 < 2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (*(int *)&this->field_0xa0 < 5) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FVar6.Index = *(int *)&this->field_0xbc;
  FVar6.SerialNumber = *(int *)&this->field_0xc0;
  FRelationManager::CreateRelationInstance
            (pFVar2,(FTypeHandle)local_c0,FVar6,
             *(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x20));
  pFVar2 = *(FRelationManager **)&this->field_0xc8;
  if (*(int *)&this->field_0xa0 < 2) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (*(int *)&this->field_0xa0 < 6) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FVar7.Index = *(int *)&this->field_0xbc;
  FVar7.SerialNumber = *(int *)&this->field_0xc0;
  FRelationManager::CreateRelationInstance
            (pFVar2,(FTypeHandle)local_b8,FVar7,
             *(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x28));
  pFVar2 = *(FRelationManager **)&this->field_0xc8;
  if (*(int *)&this->field_0xa0 < 3) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (*(int *)&this->field_0xa0 < 7) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FVar8.Index = *(int *)&this->field_0xbc;
  FVar8.SerialNumber = *(int *)&this->field_0xc0;
  FRelationManager::CreateRelationInstance
            (pFVar2,(FTypeHandle)local_b0,FVar8,
             *(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x30));
  pFVar2 = *(FRelationManager **)&this->field_0xc8;
  if (*(int *)&this->field_0xa0 < 3) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  if (*(int *)&this->field_0xa0 < 8) {
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FVar9.Index = *(int *)&this->field_0xbc;
  FVar9.SerialNumber = *(int *)&this->field_0xc0;
  FRelationManager::CreateRelationInstance
            (pFVar2,(FTypeHandle)local_a8,FVar9,
             *(FMassEntityHandle *)(*(longlong *)&this->field_0x98 + 0x38));
  return;
}

// ReparentEntity @ 14719b3b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::ChildOfRelation::FChildOf_IndividualAPI_TreeHierarchy::ReparentEntity
          (FChildOf_IndividualAPI_TreeHierarchy *this,int param_1,int param_2)

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

