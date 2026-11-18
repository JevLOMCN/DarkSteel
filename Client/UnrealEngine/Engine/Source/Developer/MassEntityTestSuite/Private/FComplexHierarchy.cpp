// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FComplexHierarchy @ 1470f2ee0

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FComplexHierarchy * __thiscall
UE::Mass::Test::Relations::FComplexHierarchy::FComplexHierarchy(FComplexHierarchy *this)

{
  int iVar1;
  
  FRelationTestBase::FRelationTestBase((FRelationTestBase *)this);
  this->_padding_ = (longlong)&___7FComplexHierarchy_Relations_Test_Mass_UE__6B_;
  this->NoRelation = -1;
  this->SingleChildParent = -1;
  this->SingleChildChild = -1;
  this->Result[0][0] = false;
  this->Result[0][1] = false;
  this->Result[0][2] = false;
  this->Result[0][3] = false;
  this->Result[0][4] = false;
  this->Result[0][5] = false;
  this->Result[0][6] = false;
  this->Result[0][7] = false;
  this->Result[0][8] = false;
  this->Result[1][0] = false;
  this->Result[1][1] = false;
  this->Result[1][2] = false;
  this->Result[1][3] = false;
  this->Result[1][4] = false;
  this->Result[1][5] = false;
  this->Result[1][6] = false;
  this->Result[1][7] = false;
  this->Result[1][8] = false;
  this->Result[2][0] = false;
  this->Result[2][1] = false;
  this->Result[2][2] = false;
  this->Result[2][3] = false;
  this->Result[2][4] = false;
  this->Result[2][5] = false;
  this->Result[2][6] = false;
  this->Result[2][7] = false;
  this->Result[2][8] = false;
  this->Result[3][0] = false;
  this->Result[3][1] = false;
  this->Result[3][2] = false;
  this->Result[3][3] = false;
  this->Result[3][4] = false;
  this->Result[3][5] = false;
  this->Result[3][6] = false;
  this->Result[3][7] = false;
  this->Result[3][8] = false;
  this->Result[4][0] = false;
  this->Result[4][1] = false;
  this->Result[4][2] = false;
  this->Result[4][3] = false;
  this->Result[4][4] = false;
  this->Result[4][5] = false;
  this->Result[4][6] = false;
  this->Result[4][7] = false;
  this->Result[4][8] = false;
  this->Result[5][0] = false;
  this->Result[5][1] = false;
  this->Result[5][2] = false;
  this->Result[5][3] = false;
  this->Result[5][4] = false;
  this->Result[5][5] = false;
  this->Result[5][6] = false;
  this->Result[5][7] = false;
  this->Result[5][8] = false;
  this->Result[6][0] = false;
  this->Result[6][1] = false;
  this->Result[6][2] = false;
  this->Result[6][3] = false;
  this->Result[6][4] = false;
  this->Result[6][5] = false;
  this->Result[6][6] = false;
  this->Result[6][7] = false;
  this->Result[6][8] = false;
  this->Result[7][0] = false;
  this->Result[7][1] = false;
  this->Result[7][2] = false;
  this->Result[7][3] = false;
  this->Result[7][4] = false;
  this->Result[7][5] = false;
  this->Result[7][6] = false;
  this->Result[7][7] = false;
  this->Result[7][8] = false;
  this->Result[8][0] = false;
  this->Result[8][1] = false;
  this->Result[8][2] = false;
  this->Result[8][3] = false;
  this->Result[8][4] = false;
  this->Result[8][5] = false;
  this->Result[8][6] = false;
  this->Result[8][7] = false;
  this->Result[8][8] = false;
  FMassArchetypeHandle::FMassArchetypeHandle(&this->OriginalArchetype);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->Entities).AllocatorInstance);
  (this->Entities).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->Entities).AllocatorInstance);
  (this->Entities).ArrayMax = iVar1;
  return this;
}

// SetUp @ 1471a1ad0

/* WARNING: Removing unreachable block (ram,0x0001471a1bc3) */
/* WARNING: Removing unreachable block (ram,0x0001471a1cf1) */
/* WARNING: Removing unreachable block (ram,0x0001471a1ecc) */
/* WARNING: Removing unreachable block (ram,0x0001471a2000) */
/* WARNING: Removing unreachable block (ram,0x0001471a2201) */
/* WARNING: Removing unreachable block (ram,0x0001471a2335) */
/* WARNING: Removing unreachable block (ram,0x0001471a2536) */
/* WARNING: Removing unreachable block (ram,0x0001471a266a) */
/* WARNING: Removing unreachable block (ram,0x0001471a2890) */
/* WARNING: Removing unreachable block (ram,0x0001471a29be) */
/* WARNING: Removing unreachable block (ram,0x0001471a2b9c) */
/* WARNING: Removing unreachable block (ram,0x0001471a2ce2) */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::Relations::FComplexHierarchy::SetUp(FComplexHierarchy *this)

{
  FRelationManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMassEntityManager *this_00;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_18;
  
  FRelationTestBase::SetUp((FRelationTestBase *)this);
  TSharedPtr<FMassArchetypeData,1>::operator=
            (&(this->OriginalArchetype).DataPtr,(TSharedPtr<FMassArchetypeData,1> *)&this->_padding_
            );
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  FMassEntityManager::BatchCreateEntities
            (this_00,&local_18,&this->OriginalArchetype,9,&this->Entities);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_18);
  pFVar1 = (FRelationManager *)this->_padding_;
  if ((this->Entities).ArrayNum < 1) {
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
  if ((this->Entities).ArrayNum < 4) {
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
  FRelationManager::CreateRelationInstance
            (pFVar1,(FTypeHandle)local_48,(FMassEntityHandle)this->_padding_,
             *(FMassEntityHandle *)((this->Entities).AllocatorInstance.Data + 0x18));
  this->Result[3][0] = true;
  pFVar1 = (FRelationManager *)this->_padding_;
  if ((this->Entities).ArrayNum < 4) {
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
  if ((this->Entities).ArrayNum < 6) {
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
  FRelationManager::CreateRelationInstance
            (pFVar1,(FTypeHandle)local_40,(FMassEntityHandle)this->_padding_,
             *(FMassEntityHandle *)((this->Entities).AllocatorInstance.Data + 0x28));
  this->Result[5][3] = true;
  this->Result[5][0] = true;
  pFVar1 = (FRelationManager *)this->_padding_;
  if ((this->Entities).ArrayNum < 4) {
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
  if ((this->Entities).ArrayNum < 8) {
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
  FRelationManager::CreateRelationInstance
            (pFVar1,(FTypeHandle)local_38,(FMassEntityHandle)this->_padding_,
             *(FMassEntityHandle *)((this->Entities).AllocatorInstance.Data + 0x38));
  this->Result[7][3] = true;
  this->Result[7][0] = true;
  pFVar1 = (FRelationManager *)this->_padding_;
  if ((this->Entities).ArrayNum < 6) {
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
  if ((this->Entities).ArrayNum < 7) {
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
  FRelationManager::CreateRelationInstance
            (pFVar1,(FTypeHandle)local_30,(FMassEntityHandle)this->_padding_,
             *(FMassEntityHandle *)((this->Entities).AllocatorInstance.Data + 0x30));
  this->Result[6][5] = true;
  this->Result[6][3] = true;
  this->Result[6][0] = true;
  pFVar1 = (FRelationManager *)this->_padding_;
  if ((this->Entities).ArrayNum < 1) {
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
  if ((this->Entities).ArrayNum < 9) {
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
  FRelationManager::CreateRelationInstance
            (pFVar1,(FTypeHandle)local_28,(FMassEntityHandle)this->_padding_,
             *(FMassEntityHandle *)((this->Entities).AllocatorInstance.Data + 0x40));
  this->Result[8][0] = true;
  pFVar1 = (FRelationManager *)this->_padding_;
  if ((this->Entities).ArrayNum < 2) {
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
  if ((this->Entities).ArrayNum < 5) {
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
  FRelationManager::CreateRelationInstance
            (pFVar1,(FTypeHandle)local_20,(FMassEntityHandle)this->_padding_,
             *(FMassEntityHandle *)((this->Entities).AllocatorInstance.Data + 0x20));
  this->Result[4][1] = true;
  this->NoRelation = 2;
  this->SingleChildParent = 1;
  this->SingleChildChild = 4;
  return true;
}

