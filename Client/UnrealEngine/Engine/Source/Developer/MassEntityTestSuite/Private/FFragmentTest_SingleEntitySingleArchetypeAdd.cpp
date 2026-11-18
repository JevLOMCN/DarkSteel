// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// PerformOperation @ 1471959b0

/* WARNING: Removing unreachable block (ram,0x0001471959e2) */
/* WARNING: Removing unreachable block (ram,0x000147195b41) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FFragmentTest_SingleEntitySingleArchetypeAdd::PerformOperation
          (FFragmentTest_SingleEntitySingleArchetypeAdd *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<FMassEntityHandle> *piVar4;
  FMassEntityManager *this_00;
  longlong lVar5;
  initializer_list<FMassEntityHandle> *piVar6;
  FMassEntityHandle local_98;
  FMassEntityHandle local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  FMassEntityHandle *local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  longlong local_58;
  FMassEntityHandle *local_50;
  FMassEntityHandle local_48;
  FMassCommandBuffer *local_40;
  initializer_list<FMassEntityHandle> local_38;
  initializer_list<FMassEntityHandle> local_28;
  
  if (*(int *)&this->field_0xc8 < 2) {
    local_88 = 0;
    local_84 = 0;
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
  local_80 = *(longlong *)&this->field_0xc0;
  local_70 = (FMassEntityHandle *)(local_80 + 8);
  local_98 = *local_70;
  local_78 = local_80;
  piVar4 = std::initializer_list<FMassEntityHandle>::initializer_list<FMassEntityHandle>
                     (&local_28,&local_98,&local_90);
  piVar6 = &local_38;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&piVar6->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<FMassEntityHandle> *)((longlong)&piVar4->_First + 1);
    piVar6 = (initializer_list<FMassEntityHandle> *)((longlong)&piVar6->_First + 1);
  }
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xe0,&local_38);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_40 = FMassEntityManager::Defer(this_00);
  if (*(int *)&this->field_0xc8 < 2) {
    local_68 = 0;
    local_64 = 0;
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
  local_60 = *(longlong *)&this->field_0xc0;
  local_50 = (FMassEntityHandle *)(local_60 + 8);
  local_48 = *local_50;
  local_58 = local_60;
  FMassCommandBuffer::AddFragment<FTestFragment_Float>(local_40,local_48);
  return true;
}

