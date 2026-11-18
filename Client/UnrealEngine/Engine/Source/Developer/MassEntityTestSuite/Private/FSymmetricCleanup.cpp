// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// InstantTest @ 14718d3b0

/* WARNING: Removing unreachable block (ram,0x00014718d493) */
/* WARNING: Removing unreachable block (ram,0x00014718d5a5) */
/* WARNING: Removing unreachable block (ram,0x00014718d72a) */
/* WARNING: Removing unreachable block (ram,0x00014718d95d) */
/* WARNING: Removing unreachable block (ram,0x00014718da46) */
/* WARNING: Removing unreachable block (ram,0x00014718dbfc) */
/* WARNING: Removing unreachable block (ram,0x00014718de48) */
/* WARNING: Removing unreachable block (ram,0x00014718df44) */
/* WARNING: Removing unreachable block (ram,0x00014718e12b) */
/* WARNING: Removing unreachable block (ram,0x00014718e253) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::Relations::FSymmetricCleanup::InstantTest(FSymmetricCleanup *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_3c8;
  char local_3b8;
  undefined1 local_3b7;
  bool local_3b6;
  char local_3b5;
  undefined1 local_3b4;
  char local_3b3;
  undefined1 local_3b2;
  bool local_3b1;
  char local_3b0;
  undefined1 local_3af;
  char local_3ae;
  undefined1 local_3ad;
  undefined1 local_3ac;
  undefined4 local_3a8;
  uint local_3a4;
  undefined4 local_3a0;
  uint local_39c;
  undefined4 local_398;
  uint local_394;
  uint local_390;
  undefined4 local_38c;
  uint local_388;
  undefined4 local_384;
  uint local_380;
  uint local_37c;
  undefined4 local_378;
  uint local_374;
  uint local_370;
  undefined4 local_36c;
  uint local_368;
  undefined4 local_364;
  uint local_360;
  uint local_35c;
  undefined4 local_358;
  uint local_354;
  undefined4 local_350;
  uint local_34c;
  uint local_348;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_340;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_330;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  FMassArchetypeHandle local_308;
  FMassEntityHandle *local_2f8;
  FMassEntityHandle *local_2f0;
  FMassEntityHandle *local_2e8;
  FMassEntityHandle local_2e0;
  FMassEntityHandle local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  FMassEntityHandle *local_2c8;
  FMassEntityHandle *local_2c0;
  FMassEntityHandle *local_2b8;
  FMassEntityHandle local_2b0;
  FMassEntityHandle local_2a8;
  FMassEntityHandle local_2a0;
  FMassEntityHandle local_298;
  FMassEntityHandle local_290;
  FMassEntityHandle local_288;
  FMassEntityHandle local_280;
  FRelationManager *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  FMassEntityHandle *local_268;
  FMassEntityHandle *local_260;
  FMassEntityHandle *local_258;
  FMassEntityHandle local_250;
  FObjectKey local_248;
  FMassEntityHandle local_240;
  FObjectKey local_238;
  FRelationManager *local_230;
  FAutomationTestBase *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  FMassEntityHandle *local_218;
  FMassEntityHandle *local_210;
  FMassEntityHandle *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  FMassEntityHandle *local_1f8;
  FMassEntityHandle *local_1f0;
  FMassEntityHandle *local_1e8;
  FMassEntityHandle local_1e0;
  FMassEntityHandle *local_1d8;
  FAutomationTestBase *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  FMassEntityHandle *local_1c0;
  FMassEntityHandle *local_1b8;
  FMassEntityHandle *local_1b0;
  FMassEntityHandle local_1a8;
  FObjectKey local_1a0;
  FMassEntityHandle local_198;
  FObjectKey local_190;
  FRelationManager *local_188;
  FAutomationTestBase *local_180;
  undefined4 local_178;
  undefined4 local_174;
  FMassEntityHandle *local_170;
  FMassEntityHandle *local_168;
  FMassEntityHandle *local_160;
  undefined4 local_158;
  undefined4 local_154;
  FMassEntityHandle *local_150;
  FMassEntityHandle *local_148;
  FMassEntityHandle *local_140;
  FMassEntityHandle local_138;
  FMassEntityHandle *local_130;
  FAutomationTestBase *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  FMassEntityHandle *local_118;
  FMassEntityHandle *local_110;
  FMassEntityHandle *local_108;
  FMassEntityHandle local_100;
  FMassEntityManager *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  FMassEntityHandle *local_e8;
  FMassEntityHandle *local_e0;
  FMassEntityHandle *local_d8;
  FMassEntityHandle local_d0;
  FObjectKey local_c8;
  FMassEntityHandle local_c0;
  FObjectKey local_b8;
  FRelationManager *local_b0;
  FAutomationTestBase *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  FMassEntityManager *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  undefined1 local_38 [8];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_30;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_20 [2];
  
  FMassArchetypeHandle::FMassArchetypeHandle(&local_308,(FMassArchetypeHandle *)&this->field_0x60);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_3c8.AllocatorInstance);
  local_3c8.ArrayNum = 0;
  local_3c8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_3c8.AllocatorInstance);
  local_98 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities(local_98,&local_30,&local_308,2,&local_3c8);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_30);
  local_a0 = 1;
  local_9c = 0;
  local_278 = *(FRelationManager **)&this->field_0xa8;
  local_3a8 = 1;
  local_348 = (uint)(1 < local_3c8.ArrayNum);
  if (local_348 == 0) {
    local_90 = 0;
    local_8c = 0;
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
  local_2f8 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
  local_2f0 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
  local_2e8 = (FMassEntityHandle *)(local_3c8.AllocatorInstance.Data + 8);
  local_2e0 = *local_2e8;
  local_3a0 = 1;
  local_3a4 = (uint)(0 < local_3c8.ArrayNum);
  local_2d8 = local_2e0;
  local_290 = local_2e0;
  if (local_3a4 == 0) {
    local_2d0 = 0;
    local_2cc = 0;
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
  local_2c8 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
  local_2c0 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
  local_2b8 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
  local_2b0 = *(FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
  local_2a0.Index = *(int *)&this->field_0xa0;
  local_2a0.SerialNumber = *(int *)&this->field_0xa4;
  local_2a8 = local_2b0;
  local_298 = local_2a0;
  local_288 = local_2b0;
  local_280 = local_2a0;
  FRelationManager::CreateRelationInstance(local_278,(FTypeHandle)local_38,local_2a0,local_2b0);
  local_230 = *(FRelationManager **)&this->field_0xa8;
  local_398 = 1;
  local_39c = (uint)(1 < local_3c8.ArrayNum);
  if (local_39c == 0) {
    local_270 = 0;
    local_26c = 0;
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
  local_268 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
  local_260 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
  local_258 = (FMassEntityHandle *)(local_3c8.AllocatorInstance.Data + 8);
  local_250 = *local_258;
  local_248.ObjectIndex = *(int *)&this->field_0xa0;
  local_248.ObjectSerialNumber = *(int *)&this->field_0xa4;
  local_240 = local_250;
  local_238 = local_248;
  FRelationManager::GetRelationSubjects(local_230,&local_330,(FTypeHandle)local_248,local_250);
  local_228 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_30c = local_330.ArrayNum;
  local_320 = local_330.ArrayNum;
  ::FString::FString(&local_88,"Expected number of object\'s subjects");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_88,local_320,1,local_228);
  local_3b8 = !bVar2;
  local_394 = (uint)(byte)local_3b8;
  ::FString::~FString(&local_88);
  if (local_3b8 == '\0') {
    local_1d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_38c = 1;
    local_390 = (uint)(0 < local_330.ArrayNum);
    if (local_390 == 0) {
      local_220 = 0;
      local_21c = 0;
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
    local_218 = (FMassEntityHandle *)local_330.AllocatorInstance.Data;
    local_210 = (FMassEntityHandle *)local_330.AllocatorInstance.Data;
    local_208 = (FMassEntityHandle *)local_330.AllocatorInstance.Data;
    local_1d8 = (FMassEntityHandle *)local_330.AllocatorInstance.Data;
    local_384 = 1;
    local_388 = (uint)(0 < local_3c8.ArrayNum);
    if (local_388 == 0) {
      local_200 = 0;
      local_1fc = 0;
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
    local_1f8 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
    local_1f0 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
    local_1e8 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
    local_1e0 = *(FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
    local_3b6 = FMassEntityHandle::operator==(local_1d8,local_1e0);
    ::FString::FString(&local_78,"Object\'s subject meets expectations");
    bVar2 = FAutomationTestBase::TestTrue(local_1d0,&local_78,local_3b6);
    local_3b5 = !bVar2;
    local_380 = (uint)(byte)local_3b5;
    ::FString::~FString(&local_78);
    if (local_3b5 == '\0') {
      local_188 = *(FRelationManager **)&this->field_0xa8;
      local_378 = 1;
      local_37c = (uint)(0 < local_3c8.ArrayNum);
      if (local_37c == 0) {
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
      local_1c0 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
      local_1b8 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
      local_1b0 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
      local_1a8 = *(FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
      local_1a0.ObjectIndex = *(int *)&this->field_0xa0;
      local_1a0.ObjectSerialNumber = *(int *)&this->field_0xa4;
      local_198 = local_1a8;
      local_190 = local_1a0;
      FRelationManager::GetRelationObjects(local_188,&local_340,(FTypeHandle)local_1a0,local_1a8);
      local_180 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_31c = local_340.ArrayNum;
      local_318 = local_340.ArrayNum;
      ::FString::FString(&local_68,"Expected number of subject\'s objects");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_68,local_318,1,local_180);
      local_3b3 = !bVar2;
      local_374 = (uint)(byte)local_3b3;
      ::FString::~FString(&local_68);
      if (local_3b3 == '\0') {
        local_128 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_36c = 1;
        local_370 = (uint)(0 < local_340.ArrayNum);
        if (local_370 == 0) {
          local_178 = 0;
          local_174 = 0;
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
        local_170 = (FMassEntityHandle *)local_340.AllocatorInstance.Data;
        local_168 = (FMassEntityHandle *)local_340.AllocatorInstance.Data;
        local_160 = (FMassEntityHandle *)local_340.AllocatorInstance.Data;
        local_130 = (FMassEntityHandle *)local_340.AllocatorInstance.Data;
        local_364 = 1;
        local_368 = (uint)(1 < local_3c8.ArrayNum);
        if (local_368 == 0) {
          local_158 = 0;
          local_154 = 0;
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
        local_150 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
        local_148 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
        local_140 = (FMassEntityHandle *)(local_3c8.AllocatorInstance.Data + 8);
        local_138 = *local_140;
        local_3b1 = FMassEntityHandle::operator==(local_130,local_138);
        ::FString::FString(&local_58,"Subject\'s object meets expectations");
        bVar2 = FAutomationTestBase::TestTrue(local_128,&local_58,local_3b1);
        local_3b0 = !bVar2;
        local_360 = (uint)(byte)local_3b0;
        ::FString::~FString(&local_58);
        if (local_3b0 == '\0') {
          local_f8 = TSharedPtr<FMassEntityManager,1>::operator->
                               ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_358 = 1;
          local_35c = (uint)(1 < local_3c8.ArrayNum);
          if (local_35c == 0) {
            local_120 = 0;
            local_11c = 0;
            Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          local_118 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
          local_110 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
          local_108 = (FMassEntityHandle *)(local_3c8.AllocatorInstance.Data + 8);
          local_100 = *local_108;
          FMassEntityManager::DestroyEntity(local_f8,local_100);
          local_b0 = *(FRelationManager **)&this->field_0xa8;
          local_350 = 1;
          local_354 = (uint)(0 < local_3c8.ArrayNum);
          if (local_354 == 0) {
            local_f0 = 0;
            local_ec = 0;
            Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          local_e8 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
          local_e0 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
          local_d8 = (FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
          local_d0 = *(FMassEntityHandle *)local_3c8.AllocatorInstance.Data;
          local_c8.ObjectIndex = *(int *)&this->field_0xa0;
          local_c8.ObjectSerialNumber = *(int *)&this->field_0xa4;
          local_c0 = local_d0;
          local_b8 = local_c8;
          pTVar4 = FRelationManager::GetRelationObjects
                             (local_b0,local_20,(FTypeHandle)local_c8,local_d0);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=(&local_340,pTVar4);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(local_20);
          local_a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_314 = local_340.ArrayNum;
          local_310 = local_340.ArrayNum;
          ::FString::FString(&local_48,
                             "After object\'s destruction: Expected number of subject\'s objects");
          bVar2 = FTestHelpers::TestEqual<int,int>(&local_48,local_310,0,local_a8);
          local_3ae = !bVar2;
          local_34c = (uint)(byte)local_3ae;
          ::FString::~FString(&local_48);
          if (local_3ae == '\0') {
            local_3ac = 1;
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_340);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_330);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3c8);
            FMassArchetypeHandle::~FMassArchetypeHandle(&local_308);
            local_3b7 = local_3ac;
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_3ad = 0;
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_340);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_330);
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3c8);
            FMassArchetypeHandle::~FMassArchetypeHandle(&local_308);
            local_3b7 = local_3ad;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_3af = 0;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_340);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_330);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3c8);
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_308);
          local_3b7 = local_3af;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_3b2 = 0;
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_340);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_330);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3c8);
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_308);
        local_3b7 = local_3b2;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_3b4 = 0;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_330);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3c8);
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_308);
      local_3b7 = local_3b4;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_3b7 = 0;
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_330);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_3c8);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_308);
  }
  return (bool)local_3b7;
}

// TweakRelation @ 1471b0aa0

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

void __thiscall
UE::Mass::Test::Relations::FSymmetricCleanup::TweakRelation
          (FSymmetricCleanup *this,FRelationTypeTraits *param_1)

{
  FRoleTraits *pFVar1;
  
  pFVar1 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                     (&param_1->RoleTraits,0);
  pFVar1->DestructionPolicy = CleanUp;
  pFVar1 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                     (&param_1->RoleTraits,1);
  pFVar1->DestructionPolicy = CleanUp;
  return;
}

