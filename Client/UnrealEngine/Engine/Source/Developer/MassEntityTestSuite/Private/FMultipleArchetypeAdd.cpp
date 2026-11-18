// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// PerformOperation @ 1471965d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147196613) */
/* WARNING: Removing unreachable block (ram,0x000147196715) */
/* WARNING: Removing unreachable block (ram,0x00014719681d) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FMultipleArchetypeAdd::PerformOperation(FMultipleArchetypeAdd *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<FMassEntityHandle> *piVar4;
  FMassEntityManager *this_00;
  longlong lVar5;
  initializer_list<FMassEntityHandle> *piVar6;
  undefined1 *puVar7;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [4];
  uint local_174;
  undefined4 local_170;
  uint local_16c;
  undefined4 local_168;
  uint local_164;
  undefined4 local_160;
  uint local_15c;
  longlong *local_158;
  int local_150;
  undefined8 *local_148;
  longlong *local_140;
  longlong *local_138;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_130;
  FMassEntityHandle *local_118;
  FMassEntityHandle *local_110;
  FMassEntityHandle *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  FMassEntityHandle *local_c0;
  FMassEntityHandle *local_b8;
  longlong local_b0;
  longlong local_a8;
  FMassEntityHandle *local_a0;
  FMassEntityHandle *local_98;
  FMassEntityHandle local_90;
  FMassCommandBuffer *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  initializer_list<FMassEntityHandle> local_78;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_68;
  initializer_list<FMassEntityHandle> local_50;
  FMassEntityHandle local_40;
  undefined8 local_38;
  undefined8 local_30;
  FMassEntityHandle local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_148 = (undefined8 *)&this->field_0xb0;
  local_170 = 1;
  local_174 = (uint)(0 < *(int *)&this->field_0xb8);
  if (local_174 == 0) {
    local_80 = 0;
    local_7c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_180 = (longlong)*(int *)(local_148 + 1);
    local_188 = 0;
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
  local_118 = (FMassEntityHandle *)*local_148;
  local_40 = *local_118;
  local_140 = (longlong *)&this->field_0xb0;
  local_168 = 1;
  local_16c = (uint)(2 < *(int *)&this->field_0xb8);
  local_110 = local_118;
  local_108 = local_118;
  if (local_16c == 0) {
    local_100 = 0;
    local_fc = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_180 = (longlong)(int)local_140[1];
    local_188 = 2;
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
  local_f8 = *local_140;
  local_e8 = (undefined8 *)(local_f8 + 0x10);
  local_38 = *local_e8;
  local_138 = (longlong *)&this->field_0xc0;
  local_160 = 1;
  local_164 = (uint)(1 < *(int *)&this->field_0xc8);
  local_f0 = local_f8;
  if (local_164 == 0) {
    local_e0 = 0;
    local_dc = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_180 = (longlong)(int)local_138[1];
    local_188 = 1;
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
  local_d8 = *local_138;
  local_c8 = (undefined8 *)(local_d8 + 8);
  local_30 = *local_c8;
  local_d0 = local_d8;
  piVar4 = std::initializer_list<FMassEntityHandle>::initializer_list<FMassEntityHandle>
                     (&local_50,&local_40,&local_28);
  piVar6 = &local_78;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&piVar6->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<FMassEntityHandle> *)((longlong)&piVar4->_First + 1);
    piVar6 = (initializer_list<FMassEntityHandle> *)((longlong)&piVar6->_First + 1);
  }
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xd0,&local_78);
  local_158 = (longlong *)&this->field_0xd0;
  local_c0 = (FMassEntityHandle *)*local_158;
  local_b8 = local_c0;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_130,(int *)&this->field_0xd8,local_c0);
  local_b0 = *local_158;
  local_150 = (int)local_158[1];
  local_a8 = local_b0;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_68,(int *)(local_158 + 1),
             (FMassEntityHandle *)(local_b0 + (longlong)local_150 * 8));
  while( true ) {
    if (*local_130.CurrentNum != local_130.InitialNum) {
      puVar7 = local_178;
      for (lVar5 = 1; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_178);
    }
    local_178[1] = local_130.Ptr != local_68.Ptr;
    local_15c = (uint)(byte)local_178[1];
    if (!(bool)local_178[1]) break;
    local_a0 = local_130.Ptr;
    local_98 = local_130.Ptr;
    this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_88 = FMassEntityManager::Defer(this_00);
    local_90 = *local_98;
    FMassCommandBuffer::AddTag<FTestTag_A>(local_88,local_90);
    local_130.Ptr = local_130.Ptr + 1;
  }
  return true;
}

