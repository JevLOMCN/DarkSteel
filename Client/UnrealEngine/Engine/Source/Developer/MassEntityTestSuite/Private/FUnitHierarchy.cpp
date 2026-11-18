// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 1471902d0

/* WARNING: Removing unreachable block (ram,0x0001471903b3) */
/* WARNING: Removing unreachable block (ram,0x0001471904bc) */
/* WARNING: Removing unreachable block (ram,0x000147190646) */
/* WARNING: Removing unreachable block (ram,0x000147190769) */
/* WARNING: Removing unreachable block (ram,0x000147190c22) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::Relations::FUnitHierarchy::InstantTest(FUnitHierarchy *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FArchetypeGroupID FVar4;
  undefined4 extraout_var;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_318;
  uint local_308;
  undefined4 local_304;
  uint local_300;
  undefined4 local_2fc;
  uint local_2f8;
  undefined4 local_2f4;
  uint local_2f0;
  undefined4 local_2ec;
  uint local_2e8;
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  undefined4 local_2d8;
  uint local_2d4;
  FMassArchetypeHandle local_2d0;
  undefined4 local_2c0;
  undefined4 local_2bc;
  uint local_2b8;
  uint local_2b4;
  FArchetypeGroupID local_2b0;
  FMassArchetypeHandle local_2a8;
  FMassArchetypeHandle local_298;
  undefined4 local_288;
  undefined4 local_284;
  FMassEntityHandle *local_280;
  FMassEntityHandle *local_278;
  FMassEntityHandle *local_270;
  FMassEntityHandle local_268;
  FMassEntityHandle local_260;
  undefined4 local_258;
  undefined4 local_254;
  FMassEntityHandle *local_250;
  FMassEntityHandle *local_248;
  FMassEntityHandle *local_240;
  FMassEntityHandle local_238;
  FMassEntityHandle local_230;
  FMassEntityHandle local_228;
  FMassEntityHandle local_220;
  FMassEntityHandle local_218;
  FMassEntityHandle local_210;
  FMassEntityHandle local_208;
  FRelationManager *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  FMassEntityHandle *local_1f0;
  FMassEntityHandle *local_1e8;
  FMassEntityHandle *local_1e0;
  FMassEntityHandle local_1d8;
  FMassEntityManager *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  FMassEntityHandle *local_1c0;
  FMassEntityHandle *local_1b8;
  FMassEntityHandle *local_1b0;
  FMassEntityHandle local_1a8;
  FMassEntityManager *local_1a0;
  FMassArchetypeHandle *local_198;
  FMassArchetypeHandle *local_190;
  FAutomationTestBase *local_188;
  FMassArchetypeHandle *local_180;
  FMassArchetypeHandle *local_178;
  FMassArchetypeHandle *local_170;
  FMassArchetypeHandle *local_168;
  FAutomationTestBase *local_160;
  FMassArchetypeHandle *local_158;
  FMassArchetypeHandle *local_150;
  FMassArchetypeHandle *local_148;
  FMassArchetypeHandle *local_140;
  FAutomationTestBase *local_138;
  FMassArchetypeHandle *local_130;
  FMassArchetypeHandle *local_128;
  undefined4 local_120;
  FMassEntityHandle *local_118;
  FMassEntityHandle *local_110;
  FMassEntityHandle *local_108;
  FMassEntityHandle local_100;
  FMassEntityHandle local_f8;
  FMassEntityManager *local_f0;
  FArchetypeGroupHandle local_e8;
  FAutomationTestBase *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  FMassEntityManager *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  undefined1 local_80 [8];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_78;
  FMassArchetypeHandle local_68;
  FMassArchetypeHandle local_58;
  FMassArchetypeHandle local_48;
  FMassArchetypeHandle local_38;
  FMassArchetypeHandle local_28;
  FMassArchetypeHandle local_18;
  
  FMassArchetypeHandle::FMassArchetypeHandle(&local_2d0,(FMassArchetypeHandle *)&this->field_0x60);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_318.AllocatorInstance);
  local_318.ArrayNum = 0;
  local_318.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_318.AllocatorInstance);
  local_c8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities(local_c8,&local_78,&local_2d0,2,&local_318);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_78);
  local_120 = 1;
  local_d8 = 0;
  local_200 = *(FRelationManager **)&this->field_0xa8;
  local_304 = 1;
  local_308 = (uint)(1 < local_318.ArrayNum);
  if (local_308 == 0) {
    local_288 = 0;
    local_284 = 0;
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
  local_280 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
  local_278 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
  local_270 = (FMassEntityHandle *)(local_318.AllocatorInstance.Data + 8);
  local_268 = *local_270;
  local_2fc = 1;
  local_300 = (uint)(0 < local_318.ArrayNum);
  local_260 = local_268;
  local_218 = local_268;
  if (local_300 == 0) {
    local_258 = 0;
    local_254 = 0;
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
  local_250 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
  local_248 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
  local_240 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
  local_238 = *(FMassEntityHandle *)local_318.AllocatorInstance.Data;
  local_228.Index = *(int *)&this->field_0xa0;
  local_228.SerialNumber = *(int *)&this->field_0xa4;
  local_230 = local_238;
  local_220 = local_228;
  local_210 = local_238;
  local_208 = local_228;
  FRelationManager::CreateRelationInstance(local_200,(FTypeHandle)local_80,local_228,local_238);
  local_1d0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_2f4 = 1;
  local_2f8 = (uint)(1 < local_318.ArrayNum);
  if (local_2f8 == 0) {
    local_1f8 = 0;
    local_1f4 = 0;
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
  local_1f0 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
  local_1e8 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
  local_1e0 = (FMassEntityHandle *)(local_318.AllocatorInstance.Data + 8);
  local_1d8 = *local_1e0;
  FMassEntityManager::GetArchetypeForEntity(local_1d0,&local_298,local_1d8);
  local_1a0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_2ec = 1;
  local_2f0 = (uint)(0 < local_318.ArrayNum);
  if (local_2f0 == 0) {
    local_1c8 = 0;
    local_1c4 = 0;
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
  local_1c0 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
  local_1b8 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
  local_1b0 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
  local_1a8 = *(FMassEntityHandle *)local_318.AllocatorInstance.Data;
  FMassEntityManager::GetArchetypeForEntity(local_1a0,&local_2a8,local_1a8);
  local_188 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_198 = &local_68;
  local_180 = FMassArchetypeHandle::FMassArchetypeHandle(local_198,&local_2a8);
  local_190 = &local_58;
  local_178 = FMassArchetypeHandle::FMassArchetypeHandle(local_190,&local_298);
  ::FString::FString(&local_c0,"Child and Parent archetypes");
  bVar2 = FTestHelpers::TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                    (&local_c0,local_178,local_180,local_188);
  local_2e8 = (uint)!bVar2;
  ::FString::~FString(&local_c0);
  if (!bVar2) {
    AITestSuite::ConditionallyBreakOnTestFail();
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_2a8);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_298);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_318);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_2d0);
    bVar2 = false;
  }
  else {
    local_160 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_170 = &local_48;
    local_158 = FMassArchetypeHandle::FMassArchetypeHandle(local_170,&local_2d0);
    local_168 = &local_38;
    local_150 = FMassArchetypeHandle::FMassArchetypeHandle(local_168,&local_2a8);
    ::FString::FString(&local_b0,"Child and the original archetype");
    bVar2 = FTestHelpers::TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                      (&local_b0,local_150,local_158,local_160);
    local_2e4 = (uint)!bVar2;
    ::FString::~FString(&local_b0);
    if (!bVar2) {
      AITestSuite::ConditionallyBreakOnTestFail();
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_2a8);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_298);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_318);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_2d0);
      bVar2 = false;
    }
    else {
      local_138 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_148 = &local_28;
      local_130 = FMassArchetypeHandle::FMassArchetypeHandle(local_148,&local_2d0);
      local_140 = &local_18;
      local_128 = FMassArchetypeHandle::FMassArchetypeHandle(local_140,&local_298);
      ::FString::FString(&local_a0,"Parent and the original archetype");
      bVar2 = FTestHelpers::TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                        (&local_a0,local_128,local_130,local_138);
      local_2e0 = (uint)!bVar2;
      ::FString::~FString(&local_a0);
      if (!bVar2) {
        AITestSuite::ConditionallyBreakOnTestFail();
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_2a8);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_298);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_318);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_2d0);
        bVar2 = false;
      }
      else {
        local_f0 = TSharedPtr<FMassEntityManager,1>::operator->
                             ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_2c0 = *(undefined4 *)(*(longlong *)&this->field_0x98 + 0x44);
        local_2d8 = 1;
        local_2dc = (uint)(0 < local_318.ArrayNum);
        local_2bc = local_2c0;
        if (local_2dc == 0) {
          local_d0 = 0;
          local_cc = 0;
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
        local_118 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
        local_110 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
        local_108 = (FMassEntityHandle *)local_318.AllocatorInstance.Data;
        local_100 = *(FMassEntityHandle *)local_318.AllocatorInstance.Data;
        local_f8 = local_100;
        FMassEntityManager::GetGroupForEntity
                  (local_f0,(FMassEntityHandle)&local_e8,(FArchetypeGroupType)local_100.Index);
        local_e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        FVar4 = FArchetypeGroupHandle::GetGroupID(&local_e8);
        local_2b8 = *(uint *)CONCAT44(extraout_var,FVar4.ID);
        local_2b4 = local_2b8;
        local_2b0.ID = local_2b8;
        ::FString::FString(&local_90,"Leaf entity\'s is at expected group level");
        bVar2 = FTestHelpers::TestEqual<UE::Mass::FArchetypeGroupID,int>
                          (&local_90,local_2b0,1,local_e0);
        local_2d4 = (uint)!bVar2;
        ::FString::~FString(&local_90);
        if (!bVar2) {
          AITestSuite::ConditionallyBreakOnTestFail();
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_2a8);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_298);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_318);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_2d0);
          bVar2 = false;
        }
        else {
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_2a8);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_298);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_318);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_2d0);
          bVar2 = true;
        }
      }
    }
  }
  return bVar2;
}

