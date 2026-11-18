// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// PerformOperation @ 1471942f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147194333) */
/* WARNING: Removing unreachable block (ram,0x000147194435) */
/* WARNING: Removing unreachable block (ram,0x000147194540) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FFragmentTest_MultipleArchetypeAdd::PerformOperation
          (FFragmentTest_MultipleArchetypeAdd *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<FMassEntityHandle> *piVar4;
  FMassEntityManager *pFVar5;
  longlong lVar6;
  initializer_list<FMassEntityHandle> *piVar7;
  undefined1 *puVar8;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  longlong local_210;
  undefined1 local_208 [4];
  uint local_204;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  uint local_1f4;
  undefined4 local_1f0;
  uint local_1ec;
  uint local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  int local_1d0;
  int local_1cc;
  undefined8 *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_1b0;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_198;
  FMassEntityHandle *local_180;
  FMassEntityHandle *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  longlong local_160;
  undefined8 *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148;
  longlong local_140;
  undefined8 *local_138;
  FMassEntityHandle *local_130;
  FMassEntityHandle *local_128;
  longlong local_120;
  longlong local_118;
  FMassEntityHandle *local_110;
  FMassEntityHandle *local_108;
  FMassEntityHandle local_100;
  FMassCommandBuffer *local_f8;
  FMassEntityHandle *local_f0;
  FMassEntityHandle *local_e8;
  longlong local_e0;
  longlong local_d8;
  FMassEntityHandle *local_d0;
  FMassEntityHandle *local_c8;
  FMassEntityHandle local_c0;
  FMassCommandBuffer *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  FMassEntityHandle *local_a8;
  initializer_list<FMassEntityHandle> local_98;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_88;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_70;
  initializer_list<FMassEntityHandle> local_58;
  FMassEntityHandle local_48;
  undefined8 local_40;
  undefined8 local_38;
  FMassEntityHandle local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_1c8 = (undefined8 *)&this->field_0xc0;
  local_200 = 1;
  local_204 = (uint)(0 < *(int *)&this->field_0xc8);
  if (local_204 == 0) {
    local_b0 = 0;
    local_ac = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_210 = (longlong)*(int *)(local_1c8 + 1);
    local_218 = 0;
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
  local_180 = (FMassEntityHandle *)*local_1c8;
  local_48 = *local_180;
  local_1c0 = (longlong *)&this->field_0xc0;
  local_1f8 = 1;
  local_1fc = (uint)(2 < *(int *)&this->field_0xc8);
  local_178 = local_180;
  local_a8 = local_180;
  if (local_1fc == 0) {
    local_170 = 0;
    local_16c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_210 = (longlong)(int)local_1c0[1];
    local_218 = 2;
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
  local_168 = *local_1c0;
  local_158 = (undefined8 *)(local_168 + 0x10);
  local_40 = *local_158;
  local_1b8 = (longlong *)&this->field_0xc0;
  local_1f0 = 1;
  local_1f4 = (uint)(1 < *(int *)&this->field_0xc8);
  local_160 = local_168;
  if (local_1f4 == 0) {
    local_150 = 0;
    local_14c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_210 = (longlong)(int)local_1b8[1];
    local_218 = 1;
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
  local_148 = *local_1b8;
  local_138 = (undefined8 *)(local_148 + 8);
  local_38 = *local_138;
  local_140 = local_148;
  piVar4 = std::initializer_list<FMassEntityHandle>::initializer_list<FMassEntityHandle>
                     (&local_58,&local_48,&local_30);
  piVar7 = &local_98;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&piVar7->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<FMassEntityHandle> *)((longlong)&piVar4->_First + 1);
    piVar7 = (initializer_list<FMassEntityHandle> *)((longlong)&piVar7->_First + 1);
  }
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xe0,&local_98);
  local_1e0 = (longlong *)&this->field_0xe0;
  local_130 = (FMassEntityHandle *)*local_1e0;
  local_128 = local_130;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_1b0,(int *)&this->field_0xe8,local_130);
  local_120 = *local_1e0;
  local_1d0 = (int)local_1e0[1];
  local_118 = local_120;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_88,(int *)(local_1e0 + 1),
             (FMassEntityHandle *)(local_120 + (longlong)local_1d0 * 8));
  while( true ) {
    if (*local_1b0.CurrentNum != local_1b0.InitialNum) {
      puVar8 = local_208;
      for (lVar6 = 1; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_208);
    }
    local_208[1] = local_1b0.Ptr != local_88.Ptr;
    local_1ec = (uint)(byte)local_208[1];
    if (!(bool)local_208[1]) break;
    local_110 = local_1b0.Ptr;
    local_108 = local_1b0.Ptr;
    pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_f8 = FMassEntityManager::Defer(pFVar5);
    local_100 = *local_108;
    FMassCommandBuffer::AddFragment<FTestFragment_Float>(local_f8,local_100);
    local_1b0.Ptr = local_1b0.Ptr + 1;
  }
  local_1d8 = (longlong *)&this->field_0xd0;
  local_f0 = (FMassEntityHandle *)*local_1d8;
  local_e8 = local_f0;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_198,(int *)&this->field_0xd8,local_f0);
  local_e0 = *local_1d8;
  local_1cc = (int)local_1d8[1];
  local_d8 = local_e0;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_70,(int *)(local_1d8 + 1),
             (FMassEntityHandle *)(local_e0 + (longlong)local_1cc * 8));
  while( true ) {
    if (*local_198.CurrentNum != local_198.InitialNum) {
      puVar8 = local_208 + 2;
      for (lVar6 = 1; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_208 + 2);
    }
    local_208[3] = local_198.Ptr != local_70.Ptr;
    local_1e8 = (uint)(byte)local_208[3];
    if (!(bool)local_208[3]) break;
    local_d0 = local_198.Ptr;
    local_c8 = local_198.Ptr;
    pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_b8 = FMassEntityManager::Defer(pFVar5);
    local_c0 = *local_c8;
    FMassCommandBuffer::AddFragment<FTestFragment_Float>(local_b8,local_c0);
    local_198.Ptr = local_198.Ptr + 1;
  }
  return true;
}

