// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147165b90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FFragmentTest_EntityCreation_Individuals::InstantTest
          (FFragmentTest_EntityCreation_Individuals *this)

{
  EMassObservedOperationFlags EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FMassEntityManager *this_00;
  TNotNull<UMassProcessor_*> *pTVar7;
  TNotNull<UScriptStruct_const_*> *pTVar8;
  int local_124;
  UScriptStruct *local_d8;
  TNotNull<UScriptStruct_const_*> *local_d0;
  UScriptStruct *local_c8;
  TNotNull<UMassProcessor_*> local_c0;
  UScriptStruct *local_b8;
  FMassObserverManager *local_b0;
  FMassEntityManager *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong local_90;
  FMassEntityHandle *local_88;
  FMassEntityHandle local_80;
  UScriptStruct *local_78;
  FMassEntityHandle local_70;
  FMassEntityManager *local_68;
  FAutomationTestBase *local_60;
  FAutomationTestBase *local_58;
  FString local_50;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_40;
  FString local_30;
  TNotNull<UMassProcessor_*> local_20;
  TNotNull<UScriptStruct_const_*> local_18 [3];
  
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_b0 = FMassEntityManager::GetObserverManager(this_00);
  pTVar7 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&>
                     (&local_20,(UMassTestProcessorBase **)&this->field_0xa0);
  local_c0.Val = pTVar7->Val;
  EVar1 = this->field_0xa8;
  local_d0 = local_18;
  local_d8 = FTestFragment_Float::StaticStruct();
  pTVar8 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (local_d0,&local_d8);
  local_c8 = pTVar8->Val;
  local_b8 = local_c8;
  FMassObserverManager::AddObserverInstance
            (local_b0,(TNotNull<UScriptStruct_const_*>)local_c8,EVar1,local_c0);
  local_a8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_a8,&local_40,(FMassArchetypeHandle *)&this->field_0x60,6,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xc0);
  iVar6 = *(int *)&this->field_0xc8 / 2;
  local_124 = 0;
  do {
    if (iVar6 <= local_124) {
      local_60 = FAITestBase::GetTestRunner((FAITestBase *)this);
      iVar2 = *(int *)&this->field_0x98;
      ::FString::FString(&local_50,L"The fragment observer is not expected to run yet");
      bVar4 = FTestHelpers::TestEqual<int,int>(&local_50,iVar2,0,local_60);
      ::FString::~FString(&local_50);
      if (bVar4) {
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_40);
        local_58 = FAITestBase::GetTestRunner((FAITestBase *)this);
        iVar2 = *(int *)&this->field_0x98;
        ::FString::FString(&local_30,
                           L"The fragment observer is expected to run just after FEntityCreationContext\'s destruction"
                          );
        bVar4 = FTestHelpers::TestEqual<int,int>(&local_30,iVar2,iVar6,local_58);
        ::FString::~FString(&local_30);
        if (bVar4) {
          bVar4 = true;
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          bVar4 = false;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_40);
        bVar4 = false;
      }
      return bVar4;
    }
    local_68 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_78 = FTestFragment_Float::StaticStruct();
    if (local_124 < 0 || *(int *)&this->field_0xc8 <= local_124) {
      local_a0 = 0;
      local_9c = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_98 = *(longlong *)&this->field_0xc0;
    local_88 = (FMassEntityHandle *)(local_98 + (longlong)local_124 * 8);
    local_80 = *local_88;
    local_90 = local_98;
    local_70 = local_80;
    FMassEntityManager::AddFragmentToEntity(local_68,local_80,local_78);
    local_124 = local_124 + 1;
  } while( true );
}

