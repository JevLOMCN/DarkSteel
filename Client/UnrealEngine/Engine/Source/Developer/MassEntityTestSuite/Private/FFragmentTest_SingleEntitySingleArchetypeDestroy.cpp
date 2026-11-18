// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// PerformOperation @ 147195c50

/* WARNING: Removing unreachable block (ram,0x000147195c82) */
/* WARNING: Removing unreachable block (ram,0x000147195df9) */
/* WARNING: Removing unreachable block (ram,0x000147195ffb) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FFragmentTest_SingleEntitySingleArchetypeDestroy::PerformOperation
          (FFragmentTest_SingleEntitySingleArchetypeDestroy *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  initializer_list<FMassEntityHandle> *piVar5;
  FMassEntityManager *pFVar6;
  longlong lVar7;
  initializer_list<FMassEntityHandle> *piVar8;
  FMassEntityHandle local_e8;
  FMassEntityHandle local_e0;
  longlong local_d8;
  longlong local_d0;
  FMassEntityHandle *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  longlong local_b0;
  FMassEntityHandle *local_a8;
  FMassEntityHandle local_a0;
  FMassCommandBuffer *local_98;
  FAutomationTestBase *local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  FMassEntityHandle *local_70;
  FMassEntityHandle local_68;
  FMassCommandBuffer *local_60;
  undefined4 local_58;
  undefined4 local_54;
  FString local_50;
  initializer_list<FMassEntityHandle> local_38;
  initializer_list<FMassEntityHandle> local_28;
  
  if (*(int *)&this->field_0xc8 < 2) {
    local_58 = 0;
    local_54 = 0;
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
  local_d8 = *(longlong *)&this->field_0xc0;
  local_c8 = (FMassEntityHandle *)(local_d8 + 8);
  local_e8 = *local_c8;
  local_d0 = local_d8;
  piVar5 = std::initializer_list<FMassEntityHandle>::initializer_list<FMassEntityHandle>
                     (&local_28,&local_e8,&local_e0);
  piVar8 = &local_38;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar5->_First;
    piVar5 = (initializer_list<FMassEntityHandle> *)((longlong)&piVar5->_First + 1);
    piVar8 = (initializer_list<FMassEntityHandle> *)((longlong)&piVar8->_First + 1);
  }
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xe0,&local_38);
  pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_98 = FMassEntityManager::Defer(pFVar6);
  if (*(int *)&this->field_0xc8 < 2) {
    local_c0 = 0;
    local_bc = 0;
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
  local_b8 = *(longlong *)&this->field_0xc0;
  local_a8 = (FMassEntityHandle *)(local_b8 + 8);
  local_a0 = *local_a8;
  local_b0 = local_b8;
  FMassCommandBuffer::AddFragment<FTestFragment_Float>(local_98,local_a0);
  pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar6);
  local_90 = FAITestBase::GetTestRunner((FAITestBase *)this);
  iVar1 = *(int *)&this->field_0x98;
  ::FString::FString(&local_50,
                     L"Fragment addition is not being observed and is not expected to produce results yet"
                    );
  bVar3 = FTestHelpers::TestEqual<int,int>(&local_50,iVar1,0,local_90);
  ::FString::~FString(&local_50);
  if (bVar3) {
    pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_60 = FMassEntityManager::Defer(pFVar6);
    if (*(int *)&this->field_0xc8 < 2) {
      local_88 = 0;
      local_84 = 0;
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
    local_80 = *(longlong *)&this->field_0xc0;
    local_70 = (FMassEntityHandle *)(local_80 + 8);
    local_68 = *local_70;
    local_78 = local_80;
    FMassCommandBuffer::DestroyEntity(local_60,local_68);
    bVar3 = true;
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    bVar3 = false;
  }
  return bVar3;
}

