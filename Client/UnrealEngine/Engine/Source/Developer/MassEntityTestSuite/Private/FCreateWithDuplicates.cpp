// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14714d290

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityCollection::FCreateWithDuplicates::InstantTest(FCreateWithDuplicates *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FMassEntityManager *pFVar5;
  FMassArchetypeEntityCollection *this_00;
  int local_208;
  FEntityCollection local_1a0;
  undefined4 local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined4 local_164;
  longlong local_160;
  longlong local_158;
  FMassEntityHandle *local_150;
  FMassEntityHandle local_148;
  TArrayView<FMassEntityHandle_const_,int> *local_140;
  FAutomationTestBase *local_138;
  FAutomationTestBase *local_130;
  FAutomationTestBase *local_128;
  FAutomationTestBase *local_120;
  TArrayView<FMassEntityHandle_const_,int> *local_118;
  FAutomationTestBase *local_110;
  TArrayView<FMassEntityHandle_const_,int> *local_108;
  FAutomationTestBase *local_100;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_f8;
  FAutomationTestBase *local_f0;
  FAutomationTestBase *local_e8;
  FString local_e0;
  FString local_d0;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  TArrayView<FMassEntityHandle_const_,int> local_50;
  TArrayView<FMassEntityHandle_const_,int> local_40;
  TArrayView<FMassEntityHandle_const_,int> local_30;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_20 [2];
  
  local_178 = 5;
  FEntityCollection::FEntityCollection(&local_1a0);
  local_170 = &this->field_0xc4;
  iVar4 = FRandomStream::RandRange((FRandomStream *)local_170,0,*(int *)&this->field_0x98 + -1);
  if (iVar4 < 0 || *(int *)&this->field_0x98 <= iVar4) {
    local_168 = 0;
    local_164 = 0;
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
  local_160 = *(longlong *)&this->field_0x90;
  local_150 = (FMassEntityHandle *)(local_160 + (longlong)iVar4 * 8);
  local_148 = *local_150;
  local_158 = local_160;
  for (local_208 = 0; local_208 < 5; local_208 = local_208 + 1) {
    FEntityCollection::AddHandle(&local_1a0,local_148);
  }
  local_138 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_140 = FEntityCollection::GetEntityHandlesView(&local_1a0,&local_50);
  iVar4 = local_140->ArrayNum;
  ::FString::FString(&local_b0,"Collection\'s number of stored entity handles");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_b0,iVar4,5,local_138);
  ::FString::~FString(&local_b0);
  if (bVar2) {
    local_130 = FAITestBase::GetTestRunner((FAITestBase *)this);
    bVar2 = FEntityCollection::IsUpToDate(&local_1a0);
    ::FString::FString(&local_e0,"(NOT) Collection is up-to-date");
    bVar2 = FAutomationTestBase::TestFalse(local_130,&local_e0,bVar2);
    ::FString::~FString(&local_e0);
    if (bVar2) {
      pFVar5 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      FEntityCollection::GetUpToDatePerArchetypeCollections(&local_1a0,&local_c0,pFVar5);
      local_128 = FAITestBase::GetTestRunner((FAITestBase *)this);
      ::FString::FString(&local_d0,"Number of up-to-date archetype collections");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_d0,local_c0.ArrayNum,1,local_128);
      ::FString::~FString(&local_d0);
      if (bVar2) {
        local_120 = FAITestBase::GetTestRunner((FAITestBase *)this);
        this_00 = TArrayView<FMassArchetypeEntityCollection_const_,int>::operator[](&local_c0,0);
        iVar4 = FMassArchetypeEntityCollection::DebugCountEntities(this_00);
        ::FString::FString(&local_60,"Number of entities in archetype collections");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_60,iVar4,1,local_120);
        ::FString::~FString(&local_60);
        if (bVar2) {
          local_110 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_118 = FEntityCollection::GetEntityHandlesView(&local_1a0,&local_40);
          iVar4 = local_118->ArrayNum;
          ::FString::FString(&local_a0,
                             "Collection\'s number of stored entity handles after getting updated collections"
                            );
          bVar2 = FTestHelpers::TestEqual<int,int>(&local_a0,iVar4,5,local_110);
          ::FString::~FString(&local_a0);
          if (bVar2) {
            local_e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
            pFVar5 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                               ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            bVar2 = FEntityCollection::UpdateAndRemoveDuplicates(&local_1a0,pFVar5,false);
            ::FString::FString(&local_90,"Duplicates identified and removed");
            bVar2 = FAutomationTestBase::TestTrue(local_e8,&local_90,bVar2);
            ::FString::~FString(&local_90);
            if (bVar2) {
              local_100 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_108 = FEntityCollection::GetEntityHandlesView(&local_1a0,&local_30);
              iVar4 = local_108->ArrayNum;
              ::FString::FString(&local_80,"Number of entities after removing duplicates");
              bVar2 = FTestHelpers::TestEqual<int,int>(&local_80,iVar4,1,local_100);
              ::FString::~FString(&local_80);
              if (bVar2) {
                local_f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_f8 = FEntityCollection::GetCachedPerArchetypeCollections(&local_1a0,local_20);
                iVar4 = local_f8->ArrayNum;
                ::FString::FString(&local_70,"Number of cached archetype collections");
                bVar2 = FTestHelpers::TestEqual<int,int>(&local_70,iVar4,1,local_f0);
                ::FString::~FString(&local_70);
                if (bVar2) {
                  FEntityCollection::~FEntityCollection(&local_1a0);
                  bVar2 = true;
                }
                else {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  FEntityCollection::~FEntityCollection(&local_1a0);
                  bVar2 = false;
                }
              }
              else {
                AITestSuite::ConditionallyBreakOnTestFail();
                FEntityCollection::~FEntityCollection(&local_1a0);
                bVar2 = false;
              }
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              FEntityCollection::~FEntityCollection(&local_1a0);
              bVar2 = false;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            FEntityCollection::~FEntityCollection(&local_1a0);
            bVar2 = false;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          FEntityCollection::~FEntityCollection(&local_1a0);
          bVar2 = false;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        FEntityCollection::~FEntityCollection(&local_1a0);
        bVar2 = false;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      FEntityCollection::~FEntityCollection(&local_1a0);
      bVar2 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    FEntityCollection::~FEntityCollection(&local_1a0);
    bVar2 = false;
  }
  return bVar2;
}

