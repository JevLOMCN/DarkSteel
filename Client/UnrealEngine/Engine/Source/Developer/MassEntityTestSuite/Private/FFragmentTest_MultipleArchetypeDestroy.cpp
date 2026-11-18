// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// PerformOperation @ 1471949f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147194a36) */
/* WARNING: Removing unreachable block (ram,0x000147194b44) */
/* WARNING: Removing unreachable block (ram,0x000147194c58) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FFragmentTest_MultipleArchetypeDestroy::PerformOperation
          (FFragmentTest_MultipleArchetypeDestroy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<FMassEntityHandle> *piVar4;
  FMassEntityManager *pFVar5;
  longlong lVar6;
  initializer_list<FMassEntityHandle> *piVar7;
  char *pcVar8;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  longlong local_230;
  char local_228 [8];
  uint local_220;
  undefined4 local_21c;
  uint local_218;
  undefined4 local_214;
  uint local_210;
  undefined4 local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  undefined8 *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_1c0;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_1a8;
  FMassEntityHandle *local_190;
  FMassEntityHandle *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong local_178;
  longlong local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158;
  longlong local_150;
  undefined8 *local_148;
  FMassEntityHandle *local_140;
  FMassEntityHandle *local_138;
  longlong local_130;
  longlong local_128;
  FMassEntityHandle *local_120;
  FMassEntityHandle *local_118;
  FMassEntityHandle local_110;
  FMassCommandBuffer *local_108;
  FAutomationTestBase *local_100;
  FMassEntityHandle *local_f8;
  FMassEntityHandle *local_f0;
  longlong local_e8;
  longlong local_e0;
  FMassEntityHandle *local_d8;
  FMassEntityHandle *local_d0;
  FMassEntityHandle local_c8;
  FMassCommandBuffer *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  FMassEntityHandle *local_b0;
  FString local_a8;
  initializer_list<FMassEntityHandle> local_98;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_88;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_70;
  initializer_list<FMassEntityHandle> local_58;
  FMassEntityHandle local_48;
  undefined8 local_40;
  undefined8 local_38;
  FMassEntityHandle local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_1d8 = (undefined8 *)&this->field_0xc0;
  local_21c = 1;
  local_220 = (uint)(0 < *(int *)&this->field_0xc8);
  if (local_220 == 0) {
    local_b8 = 0;
    local_b4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_230 = (longlong)*(int *)(local_1d8 + 1);
    local_238 = 0;
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
  local_190 = (FMassEntityHandle *)*local_1d8;
  local_48 = *local_190;
  local_1d0 = (longlong *)&this->field_0xc0;
  local_214 = 1;
  local_218 = (uint)(2 < *(int *)&this->field_0xc8);
  local_188 = local_190;
  local_b0 = local_190;
  if (local_218 == 0) {
    local_180 = 0;
    local_17c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_230 = (longlong)(int)local_1d0[1];
    local_238 = 2;
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
  local_178 = *local_1d0;
  local_168 = (undefined8 *)(local_178 + 0x10);
  local_40 = *local_168;
  local_1c8 = (longlong *)&this->field_0xd0;
  local_20c = 1;
  local_210 = (uint)(1 < *(int *)&this->field_0xd8);
  local_170 = local_178;
  if (local_210 == 0) {
    local_160 = 0;
    local_15c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_230 = (longlong)(int)local_1c8[1];
    local_238 = 1;
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
  local_158 = *local_1c8;
  local_148 = (undefined8 *)(local_158 + 8);
  local_38 = *local_148;
  local_150 = local_158;
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
  local_1f8 = (longlong *)&this->field_0xe0;
  local_140 = (FMassEntityHandle *)*local_1f8;
  local_138 = local_140;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_1c0,(int *)&this->field_0xe8,local_140);
  local_130 = *local_1f8;
  local_1e8 = (int)local_1f8[1];
  local_128 = local_130;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_88,(int *)(local_1f8 + 1),
             (FMassEntityHandle *)(local_130 + (longlong)local_1e8 * 8));
  while( true ) {
    if (*local_1c0.CurrentNum != local_1c0.InitialNum) {
      pcVar8 = local_228;
      for (lVar6 = 1; lVar6 != 0; lVar6 = lVar6 + -1) {
        *pcVar8 = '\0';
        pcVar8 = pcVar8 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_228);
    }
    local_228[1] = local_1c0.Ptr != local_88.Ptr;
    local_208 = (uint)(byte)local_228[1];
    if (!(bool)local_228[1]) break;
    local_120 = local_1c0.Ptr;
    local_118 = local_1c0.Ptr;
    pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_108 = FMassEntityManager::Defer(pFVar5);
    local_110 = *local_118;
    FMassCommandBuffer::AddFragment<FTestFragment_Float>(local_108,local_110);
    local_1c0.Ptr = local_1c0.Ptr + 1;
  }
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar5);
  local_100 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_1e4 = *(int *)&this->field_0x98;
  local_1e0 = local_1e4;
  ::FString::FString(&local_a8,
                     L"Fragment addition is not being observed and is not expected to produce results yet"
                    );
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_a8,local_1e0,0,local_100);
  local_228[2] = !bVar2;
  local_204 = (uint)(byte)local_228[2];
  ::FString::~FString(&local_a8);
  if (local_228[2] == '\0') {
    local_1f0 = (longlong *)&this->field_0xe0;
    local_f8 = (FMassEntityHandle *)*local_1f0;
    local_f0 = local_f8;
    TCheckedPointerIterator<FMassEntityHandle,int,0>::
    TCheckedPointerIterator<FMassEntityHandle,int,0>(&local_1a8,(int *)&this->field_0xe8,local_f8);
    local_e8 = *local_1f0;
    local_1dc = (int)local_1f0[1];
    local_e0 = local_e8;
    TCheckedPointerIterator<FMassEntityHandle,int,0>::
    TCheckedPointerIterator<FMassEntityHandle,int,0>
              (&local_70,(int *)(local_1f0 + 1),
               (FMassEntityHandle *)(local_e8 + (longlong)local_1dc * 8));
    while( true ) {
      if (*local_1a8.CurrentNum != local_1a8.InitialNum) {
        pcVar8 = local_228 + 3;
        for (lVar6 = 1; lVar6 != 0; lVar6 = lVar6 + -1) {
          *pcVar8 = '\0';
          pcVar8 = pcVar8 + 1;
        }
        `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_228 + 3);
      }
      local_228[4] = local_1a8.Ptr != local_70.Ptr;
      local_200 = (uint)(byte)local_228[4];
      if (!(bool)local_228[4]) break;
      local_d8 = local_1a8.Ptr;
      local_d0 = local_1a8.Ptr;
      pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_c0 = FMassEntityManager::Defer(pFVar5);
      local_c8 = *local_d0;
      FMassCommandBuffer::DestroyEntity(local_c0,local_c8);
      local_1a8.Ptr = local_1a8.Ptr + 1;
    }
    bVar2 = true;
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    bVar2 = false;
  }
  return bVar2;
}

