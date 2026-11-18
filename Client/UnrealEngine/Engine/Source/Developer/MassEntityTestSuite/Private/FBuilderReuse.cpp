// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fbc30

/* WARNING: Removing unreachable block (ram,0x0001470fbd30) */
/* WARNING: Removing unreachable block (ram,0x0001470fbe39) */
/* WARNING: Removing unreachable block (ram,0x0001470fc031) */
/* WARNING: Removing unreachable block (ram,0x0001470fc16e) */
/* WARNING: Removing unreachable block (ram,0x0001470fc35a) */
/* WARNING: Removing unreachable block (ram,0x0001470fc583) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
`UE::Mass::Test::EntityBuilder::FBuilderReuse::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassArchetypeHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<FMassEntityHandle_const_> *piVar4;
  longlong lVar5;
  initializer_list<FMassEntityHandle_const_> *piVar6;
  TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_> local_308;
  uint local_2f8;
  undefined4 local_2f4;
  uint local_2f0;
  undefined4 local_2ec;
  uint local_2e8;
  uint local_2e4;
  undefined4 local_2e0;
  uint local_2dc;
  undefined4 local_2d8;
  uint local_2d4;
  uint local_2d0;
  undefined4 local_2cc;
  uint local_2c8;
  uint local_2c4;
  undefined4 local_2c0;
  uint local_2bc;
  FMassArchetypeHandle local_2b8;
  FEntityBuilder *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  FMassEntityHandle *local_298;
  FMassEntityHandle *local_290;
  FMassEntityHandle *local_288;
  FMassEntityHandle local_280;
  FMassEntityHandle local_278;
  undefined4 local_270;
  undefined4 local_26c;
  FMassEntityHandle *local_268;
  FMassEntityHandle *local_260;
  FMassEntityHandle *local_258;
  FMassEntityHandle local_250;
  FMassEntityHandle local_248;
  FMassEntityHandle local_240;
  FAutomationTestBase *local_238;
  FMassEntityHandle local_230;
  FMassEntityHandle local_228;
  undefined4 local_220;
  undefined4 local_21c;
  FMassEntityHandle *local_218;
  FMassEntityHandle *local_210;
  FMassEntityHandle *local_208;
  FMassEntityHandle local_200;
  FMassArchetypeHandle *local_1f8;
  FMassEntityManager *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  FMassEntityHandle *local_1e0;
  FMassEntityHandle *local_1d8;
  FMassEntityHandle *local_1d0;
  FMassEntityHandle local_1c8;
  FMassArchetypeHandle *local_1c0;
  FMassEntityManager *local_1b8;
  FAutomationTestBase *local_1b0;
  FMassArchetypeHandle *local_1a8;
  FMassArchetypeHandle *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  FMassEntityHandle *local_190;
  FMassEntityHandle *local_188;
  FMassEntityHandle *local_180;
  FMassEntityHandle local_178;
  FMassArchetypeHandle *local_170;
  FMassEntityManager *local_168;
  FMassArchetypeHandle *local_160;
  FEntityBuilder *local_158;
  FEntityBuilder *local_150;
  FMassArchetypeHandle *local_148;
  FMassArchetypeHandle *local_140;
  undefined4 local_138;
  undefined4 local_134;
  FMassEntityHandle *local_130;
  FMassEntityHandle *local_128;
  FMassEntityHandle *local_120;
  FMassEntityHandle local_118;
  FMassEntityManager *local_110;
  FMassArchetypeHandle *local_108;
  FAutomationTestBase *local_100;
  FEntityBuilder *local_f8;
  FAutomationTestBase *local_f0;
  FMassEntityHandle local_e8 [2];
  FMassEntityHandle local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  initializer_list<FMassEntityHandle_const_> local_88;
  FMassArchetypeHandle local_78;
  initializer_list<FMassEntityHandle_const_> local_68;
  FMassArchetypeHandle local_58;
  FMassArchetypeHandle local_48;
  FMassArchetypeHandle local_38;
  FMassArchetypeHandle local_28;
  
  local_150 = *(FEntityBuilder **)((longlong)this + 8);
  UE::Mass::FEntityBuilder::CommitAndReprepare(local_150);
  local_f8 = *(FEntityBuilder **)((longlong)this + 8);
  UE::Mass::FEntityBuilder::CommitAndReprepare(local_f8);
  piVar4 = std::initializer_list<FMassEntityHandle_const_>::
           initializer_list<FMassEntityHandle_const_>(&local_68,local_e8,&local_d8);
  piVar6 = &local_88;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&piVar6->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<FMassEntityHandle_const_> *)((longlong)&piVar4->_First + 1);
    piVar6 = (initializer_list<FMassEntityHandle_const_> *)((longlong)&piVar6->_First + 1);
  }
  TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>::
  TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>(&local_308,&local_88);
  local_2a8 = *(FEntityBuilder **)((longlong)this + 8);
  UE::Mass::FEntityBuilder::GetArchetypeHandle(local_2a8,&local_2b8);
  local_238 = FAITestBase::GetTestRunner(*(FAITestBase **)this);
  local_2f4 = 1;
  local_2f8 = (uint)(1 < local_308.ArrayNum);
  if (local_2f8 == 0) {
    local_2a0 = 0;
    local_29c = 0;
    UE::Core::Private::FormatStringSan::
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
  local_298 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
  local_290 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
  local_288 = (FMassEntityHandle *)(local_308.AllocatorInstance.Data + 8);
  local_280 = *local_288;
  local_2ec = 1;
  local_2f0 = (uint)(0 < local_308.ArrayNum);
  local_278 = local_280;
  local_230 = local_280;
  if (local_2f0 == 0) {
    local_270 = 0;
    local_26c = 0;
    UE::Core::Private::FormatStringSan::
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
  local_268 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
  local_260 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
  local_258 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
  local_250 = *(FMassEntityHandle *)local_308.AllocatorInstance.Data;
  local_248 = local_250;
  local_240 = local_250;
  local_228 = local_250;
  ::FString::FString(&local_d0,"Two entities created sequentially");
  bVar2 = FTestHelpers::TestNotEqual<FMassEntityHandle,FMassEntityHandle>
                    (&local_d0,local_228,local_230,local_238);
  local_2e8 = (uint)!bVar2;
  ::FString::~FString(&local_d0);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_2b8);
    TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>(&local_308);
    bVar2 = false;
  }
  else {
    local_1b0 = FAITestBase::GetTestRunner(*(FAITestBase **)this);
    local_1f8 = &local_58;
    local_1f0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)(*(longlong *)this + 0x28));
    local_2e0 = 1;
    local_2e4 = (uint)(1 < local_308.ArrayNum);
    if (local_2e4 == 0) {
      local_220 = 0;
      local_21c = 0;
      UE::Core::Private::FormatStringSan::
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
    local_218 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
    local_210 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
    local_208 = (FMassEntityHandle *)(local_308.AllocatorInstance.Data + 8);
    local_200 = *local_208;
    local_1a8 = FMassEntityManager::GetArchetypeForEntity(local_1f0,local_1f8,local_200);
    local_1c0 = &local_48;
    local_1b8 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)(*(longlong *)this + 0x28));
    local_2d8 = 1;
    local_2dc = (uint)(0 < local_308.ArrayNum);
    if (local_2dc == 0) {
      local_1e8 = 0;
      local_1e4 = 0;
      UE::Core::Private::FormatStringSan::
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
    local_1e0 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
    local_1d8 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
    local_1d0 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
    local_1c8 = *(FMassEntityHandle *)local_308.AllocatorInstance.Data;
    local_1a0 = FMassEntityManager::GetArchetypeForEntity(local_1b8,local_1c0,local_1c8);
    ::FString::FString(&local_c0,"Entities\' archetype");
    bVar2 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                      (&local_c0,local_1a0,local_1a8,local_1b0);
    local_2d4 = (uint)!bVar2;
    ::FString::~FString(&local_c0);
    if (!bVar2) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_2b8);
      TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>(&local_308);
      bVar2 = false;
    }
    else {
      local_f0 = FAITestBase::GetTestRunner(*(FAITestBase **)this);
      local_170 = &local_38;
      local_168 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)(*(longlong *)this + 0x28));
      local_2cc = 1;
      local_2d0 = (uint)(0 < local_308.ArrayNum);
      if (local_2d0 == 0) {
        local_198 = 0;
        local_194 = 0;
        UE::Core::Private::FormatStringSan::
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
      local_190 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
      local_188 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
      local_180 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
      local_178 = *(FMassEntityHandle *)local_308.AllocatorInstance.Data;
      local_148 = FMassEntityManager::GetArchetypeForEntity(local_168,local_170,local_178);
      local_160 = &local_28;
      local_158 = *(FEntityBuilder **)((longlong)this + 8);
      local_140 = UE::Mass::FEntityBuilder::GetArchetypeHandle(local_158,local_160);
      ::FString::FString(&local_b0,"Builders archetype and entities\' archetype");
      bVar2 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                        (&local_b0,local_140,local_148,local_f0);
      local_2c8 = (uint)!bVar2;
      ::FString::~FString(&local_b0);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_2b8);
        TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>(&local_308);
        bVar2 = false;
      }
      else {
        local_100 = FAITestBase::GetTestRunner(*(FAITestBase **)this);
        local_110 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)(*(longlong *)this + 0x28));
        local_2c0 = 1;
        local_2c4 = (uint)(0 < local_308.ArrayNum);
        if (local_2c4 == 0) {
          local_138 = 0;
          local_134 = 0;
          UE::Core::Private::FormatStringSan::
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
        local_130 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
        local_128 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
        local_120 = (FMassEntityHandle *)local_308.AllocatorInstance.Data;
        local_118 = *(FMassEntityHandle *)local_308.AllocatorInstance.Data;
        local_108 = FMassEntityManager::GetArchetypeForEntity(local_110,&local_78,local_118);
        bVar2 = FMassArchetypeHandle::operator==(local_108,param_1);
        ::FString::FString(&local_a0,"Archetype matches expectations");
        bVar2 = FAutomationTestBase::TestTrue(local_100,&local_a0,bVar2);
        local_2bc = (uint)!bVar2;
        ::FString::~FString(&local_a0);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_78);
        if (!bVar2) {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_2b8);
          TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>(&local_308);
          bVar2 = false;
        }
        else {
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_2b8);
          TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle_const_,TSizedDefaultAllocator<32>_>(&local_308);
          bVar2 = true;
        }
      }
    }
  }
  return bVar2;
}

// InstantTest @ 14713b060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::EntityBuilder::FBuilderReuse::InstantTest(FBuilderReuse *this)

{
  bool bVar1;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7;
  FMassEntityManager *local_1b0;
  FBuilderReuse *local_1a8;
  FEntityBuilder *local_1a0;
  FEntityBuilder local_198;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_1b0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::MakeEntityBuilder(local_1b0,&local_198);
  FEntityBuilder::Add<FTestFragment_Int>(&local_198);
  local_1a0 = &local_198;
  local_1a8 = this;
  bVar1 = `UE::Mass::Test::EntityBuilder::FBuilderReuse::InstantTest'::__l2::<lambda_1>::operator()
                    (&local_1a8,(FMassArchetypeHandle *)&this->field_0x60);
  if (bVar1) {
    FEntityBuilder::Add<FTestFragment_Float>(&local_198);
    local_1b8 = `UE::Mass::Test::EntityBuilder::FBuilderReuse::InstantTest'::__l2::<lambda_1>::
                operator()(&local_1a8,(FMassArchetypeHandle *)&this->field_0x70);
    FEntityBuilder::~FEntityBuilder(&local_198);
  }
  else {
    local_1b7 = 0;
    FEntityBuilder::~FEntityBuilder(&local_198);
    local_1b8 = local_1b7;
  }
  return (bool)local_1b8;
}

