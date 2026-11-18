// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// PerformOperation @ 147198030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147198076) */
/* WARNING: Removing unreachable block (ram,0x000147198184) */
/* WARNING: Removing unreachable block (ram,0x000147198298) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FMultipleArchetypeRemove_Sync::PerformOperation
          (FMultipleArchetypeRemove_Sync *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<FMassEntityHandle> *piVar4;
  longlong lVar5;
  initializer_list<FMassEntityHandle> *piVar6;
  char *pcVar7;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  longlong local_250;
  char local_248 [8];
  uint local_240;
  undefined4 local_23c;
  uint local_238;
  undefined4 local_234;
  uint local_230;
  undefined4 local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  longlong *local_218;
  longlong *local_210;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  undefined8 *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_1e0;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_1c8;
  FMassEntityHandle *local_1b0;
  FMassEntityHandle *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong local_198;
  longlong local_190;
  undefined8 *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong local_178;
  longlong local_170;
  undefined8 *local_168;
  FMassEntityHandle *local_160;
  FMassEntityHandle *local_158;
  longlong local_150;
  longlong local_148;
  FMassEntityHandle *local_140;
  FMassEntityHandle *local_138;
  FMassEntityHandle local_130;
  UScriptStruct *local_128;
  FMassEntityHandle local_120;
  FMassEntityManager *local_118;
  FAutomationTestBase *local_110;
  FMassEntityHandle *local_108;
  FMassEntityHandle *local_100;
  longlong local_f8;
  longlong local_f0;
  FMassEntityHandle *local_e8;
  FMassEntityHandle *local_e0;
  FMassEntityHandle local_d8;
  UScriptStruct *local_d0;
  FMassEntityHandle local_c8;
  FMassEntityManager *local_c0;
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_1f8 = (undefined8 *)&this->field_0xb0;
  local_23c = 1;
  local_240 = (uint)(0 < *(int *)&this->field_0xb8);
  if (local_240 == 0) {
    local_b8 = 0;
    local_b4 = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_250 = (longlong)*(int *)(local_1f8 + 1);
    local_258 = 0;
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
  local_1b0 = (FMassEntityHandle *)*local_1f8;
  local_48 = *local_1b0;
  local_1f0 = (longlong *)&this->field_0xb0;
  local_234 = 1;
  local_238 = (uint)(2 < *(int *)&this->field_0xb8);
  local_1a8 = local_1b0;
  local_b0 = local_1b0;
  if (local_238 == 0) {
    local_1a0 = 0;
    local_19c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_250 = (longlong)(int)local_1f0[1];
    local_258 = 2;
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
  local_198 = *local_1f0;
  local_188 = (undefined8 *)(local_198 + 0x10);
  local_40 = *local_188;
  local_1e8 = (longlong *)&this->field_0xc0;
  local_22c = 1;
  local_230 = (uint)(1 < *(int *)&this->field_0xc8);
  local_190 = local_198;
  if (local_230 == 0) {
    local_180 = 0;
    local_17c = 0;
    Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_250 = (longlong)(int)local_1e8[1];
    local_258 = 1;
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
  local_178 = *local_1e8;
  local_168 = (undefined8 *)(local_178 + 8);
  local_38 = *local_168;
  local_170 = local_178;
  piVar4 = std::initializer_list<FMassEntityHandle>::initializer_list<FMassEntityHandle>
                     (&local_58,&local_48,&local_30);
  piVar6 = &local_98;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&piVar6->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<FMassEntityHandle> *)((longlong)&piVar4->_First + 1);
    piVar6 = (initializer_list<FMassEntityHandle> *)((longlong)&piVar6->_First + 1);
  }
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xd0,&local_98);
  local_218 = (longlong *)&this->field_0xd0;
  local_160 = (FMassEntityHandle *)*local_218;
  local_158 = local_160;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_1e0,(int *)&this->field_0xd8,local_160);
  local_150 = *local_218;
  local_208 = (int)local_218[1];
  local_148 = local_150;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_88,(int *)(local_218 + 1),
             (FMassEntityHandle *)(local_150 + (longlong)local_208 * 8));
  while( true ) {
    if (*local_1e0.CurrentNum != local_1e0.InitialNum) {
      pcVar7 = local_248;
      for (lVar5 = 1; lVar5 != 0; lVar5 = lVar5 + -1) {
        *pcVar7 = '\0';
        pcVar7 = pcVar7 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_248);
    }
    local_248[1] = local_1e0.Ptr != local_88.Ptr;
    local_228 = (uint)(byte)local_248[1];
    if (!(bool)local_248[1]) break;
    local_140 = local_1e0.Ptr;
    local_138 = local_1e0.Ptr;
    local_118 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_128 = FTestTag_A::StaticStruct();
    local_130 = *local_138;
    local_120 = local_130;
    FMassEntityManager::AddTagToEntity(local_118,local_130,local_128);
    local_1e0.Ptr = local_1e0.Ptr + 1;
  }
  local_110 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_204 = *(int *)&this->field_0x98;
  local_200 = local_204;
  ::FString::FString(&local_a8,
                     L"FTagStruct addition is not being observed and is not expected to produce results yet"
                    );
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_a8,local_200,0,local_110);
  local_248[2] = !bVar2;
  local_224 = (uint)(byte)local_248[2];
  ::FString::~FString(&local_a8);
  if (local_248[2] == '\0') {
    local_210 = (longlong *)&this->field_0xd0;
    local_108 = (FMassEntityHandle *)*local_210;
    local_100 = local_108;
    TCheckedPointerIterator<FMassEntityHandle,int,0>::
    TCheckedPointerIterator<FMassEntityHandle,int,0>(&local_1c8,(int *)&this->field_0xd8,local_108);
    local_f8 = *local_210;
    local_1fc = (int)local_210[1];
    local_f0 = local_f8;
    TCheckedPointerIterator<FMassEntityHandle,int,0>::
    TCheckedPointerIterator<FMassEntityHandle,int,0>
              (&local_70,(int *)(local_210 + 1),
               (FMassEntityHandle *)(local_f8 + (longlong)local_1fc * 8));
    while( true ) {
      if (*local_1c8.CurrentNum != local_1c8.InitialNum) {
        pcVar7 = local_248 + 3;
        for (lVar5 = 1; lVar5 != 0; lVar5 = lVar5 + -1) {
          *pcVar7 = '\0';
          pcVar7 = pcVar7 + 1;
        }
        `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_248 + 3);
      }
      local_248[4] = local_1c8.Ptr != local_70.Ptr;
      local_220 = (uint)(byte)local_248[4];
      if (!(bool)local_248[4]) break;
      local_e8 = local_1c8.Ptr;
      local_e0 = local_1c8.Ptr;
      local_c0 = TSharedPtr<FMassEntityManager,1>::operator->
                           ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_d0 = FTestTag_A::StaticStruct();
      local_d8 = *local_e0;
      local_c8 = local_d8;
      FMassEntityManager::RemoveTagFromEntity(local_c0,local_d8,local_d0);
      local_1c8.Ptr = local_1c8.Ptr + 1;
    }
    bVar2 = true;
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    bVar2 = false;
  }
  return bVar2;
}

