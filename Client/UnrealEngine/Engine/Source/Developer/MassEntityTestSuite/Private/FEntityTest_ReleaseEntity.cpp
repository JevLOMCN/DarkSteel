// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715f3d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_ReleaseEntity::InstantTest(FEntityTest_ReleaseEntity *this)

{
  bool bVar1;
  int iVar2;
  FMassEntityManager *pFVar3;
  FAutomationTestBase *pFVar4;
  FMassArchetypeHandle *pFVar5;
  FMassArchetypeHandle *pFVar6;
  longlong lVar7;
  FMassEntityHandle local_118;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FMassArchetypeHandle local_28;
  FMassArchetypeHandle local_18;
  
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::ReserveEntity(pFVar3);
  pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  bVar1 = FMassEntityManager::IsEntityValid(pFVar3,local_118);
  ::FString::FString(&local_78,"The reserved entity should be a valid entity");
  bVar1 = FAutomationTestBase::TestTrue(pFVar4,&local_78,bVar1);
  ::FString::~FString(&local_78);
  if (bVar1) {
    pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    bVar1 = FMassEntityManager::IsEntityBuilt(pFVar3,local_118);
    ::FString::FString(&local_68,"The reserved entity should not be a valid entity");
    bVar1 = FAutomationTestBase::TestFalse(pFVar4,&local_68,bVar1);
    ::FString::~FString(&local_68);
    if (bVar1) {
      pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
      pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      iVar2 = FMassEntityManager::DebugGetEntityCount(pFVar3);
      ::FString::FString(&local_58,"There should only be one entity across the whole system");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_58,iVar2,1,pFVar4);
      ::FString::~FString(&local_58);
      if (bVar1) {
        pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar5 = &local_28;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(undefined1 *)&(pFVar5->DataPtr).Object = 0;
          pFVar5 = (FMassArchetypeHandle *)((longlong)&(pFVar5->DataPtr).Object + 1);
        }
        pFVar5 = FMassArchetypeHandle::FMassArchetypeHandle(&local_28);
        pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                           ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        pFVar6 = FMassEntityManager::GetArchetypeForEntity(pFVar3,&local_18,local_118);
        ::FString::FString(&local_48,"The entity should not get associated to any archetype");
        bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                          (&local_48,pFVar6,pFVar5,pFVar4);
        ::FString::~FString(&local_48);
        if (bVar1) {
          pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                             ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          FMassEntityManager::ReleaseReservedEntity(pFVar3,local_118);
          pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
          pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                             ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          iVar2 = FMassEntityManager::DebugGetEntityCount(pFVar3);
          ::FString::FString(&local_38,"There should not be any entity across the whole system");
          bVar1 = FTestHelpers::TestEqual<int,int>(&local_38,iVar2,0,pFVar4);
          ::FString::~FString(&local_38);
          if (bVar1) {
            bVar1 = true;
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            bVar1 = false;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          bVar1 = false;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        bVar1 = false;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      bVar1 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar1 = false;
  }
  return bVar1;
}

