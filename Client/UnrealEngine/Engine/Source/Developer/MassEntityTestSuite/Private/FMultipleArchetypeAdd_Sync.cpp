// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// PerformOperation @ 147196b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147196b53) */
/* WARNING: Removing unreachable block (ram,0x000147196c55) */
/* WARNING: Removing unreachable block (ram,0x000147196d5d) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FMultipleArchetypeAdd_Sync::PerformOperation
          (FMultipleArchetypeAdd_Sync *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<FMassEntityHandle> *piVar4;
  longlong lVar5;
  initializer_list<FMassEntityHandle> *piVar6;
  undefined1 *puVar7;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong local_190;
  undefined1 local_188 [4];
  uint local_184;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  uint local_174;
  undefined4 local_170;
  uint local_16c;
  longlong *local_168;
  int local_160;
  undefined8 *local_158;
  longlong *local_150;
  longlong *local_148;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_140;
  FMassEntityHandle *local_128;
  FMassEntityHandle *local_120;
  FMassEntityHandle *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  longlong local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  FMassEntityHandle *local_d0;
  FMassEntityHandle *local_c8;
  longlong local_c0;
  longlong local_b8;
  FMassEntityHandle *local_b0;
  FMassEntityHandle *local_a8;
  FMassEntityHandle local_a0;
  UScriptStruct *local_98;
  FMassEntityHandle local_90;
  FMassEntityManager *local_88;
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
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_158 = (undefined8 *)&this->field_0xb0;
  local_180 = 1;
  local_184 = (uint)(0 < *(int *)&this->field_0xb8);
  if (local_184 == 0) {
    local_80 = 0;
    local_7c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_190 = (longlong)*(int *)(local_158 + 1);
    local_198 = 0;
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
  local_128 = (FMassEntityHandle *)*local_158;
  local_40 = *local_128;
  local_150 = (longlong *)&this->field_0xb0;
  local_178 = 1;
  local_17c = (uint)(2 < *(int *)&this->field_0xb8);
  local_120 = local_128;
  local_118 = local_128;
  if (local_17c == 0) {
    local_110 = 0;
    local_10c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_190 = (longlong)(int)local_150[1];
    local_198 = 2;
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
  local_108 = *local_150;
  local_f8 = (undefined8 *)(local_108 + 0x10);
  local_38 = *local_f8;
  local_148 = (longlong *)&this->field_0xc0;
  local_170 = 1;
  local_174 = (uint)(1 < *(int *)&this->field_0xc8);
  local_100 = local_108;
  if (local_174 == 0) {
    local_f0 = 0;
    local_ec = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_190 = (longlong)(int)local_148[1];
    local_198 = 1;
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
  local_e8 = *local_148;
  local_d8 = (undefined8 *)(local_e8 + 8);
  local_30 = *local_d8;
  local_e0 = local_e8;
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
  local_168 = (longlong *)&this->field_0xd0;
  local_d0 = (FMassEntityHandle *)*local_168;
  local_c8 = local_d0;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_140,(int *)&this->field_0xd8,local_d0);
  local_c0 = *local_168;
  local_160 = (int)local_168[1];
  local_b8 = local_c0;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_68,(int *)(local_168 + 1),
             (FMassEntityHandle *)(local_c0 + (longlong)local_160 * 8));
  while( true ) {
    if (*local_140.CurrentNum != local_140.InitialNum) {
      puVar7 = local_188;
      for (lVar5 = 1; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_188);
    }
    local_188[1] = local_140.Ptr != local_68.Ptr;
    local_16c = (uint)(byte)local_188[1];
    if (!(bool)local_188[1]) break;
    local_b0 = local_140.Ptr;
    local_a8 = local_140.Ptr;
    local_88 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_98 = FTestTag_A::StaticStruct();
    local_a0 = *local_a8;
    local_90 = local_a0;
    FMassEntityManager::AddTagToEntity(local_88,local_a0,local_98);
    local_140.Ptr = local_140.Ptr + 1;
  }
  return true;
}

