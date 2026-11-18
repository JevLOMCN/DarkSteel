// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147162280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147162459) */
/* WARNING: Removing unreachable block (ram,0x00014716256c) */
/* WARNING: Removing unreachable block (ram,0x0001471626ed) */
/* WARNING: Removing unreachable block (ram,0x0001471627f7) */
/* WARNING: Removing unreachable block (ram,0x00014716298c) */
/* WARNING: Removing unreachable block (ram,0x000147162bed) */
/* WARNING: Removing unreachable block (ram,0x000147162e64) */
/* WARNING: Removing unreachable block (ram,0x000147162fb9) */
/* WARNING: Removing unreachable block (ram,0x0001471630c0) */
/* WARNING: Removing unreachable block (ram,0x0001471632cc) */
/* WARNING: Removing unreachable block (ram,0x000147163542) */
/* WARNING: Removing unreachable block (ram,0x000147163697) */
/* WARNING: Removing unreachable block (ram,0x00014716379e) */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::Relations::FExclusivity::InstantTest(FExclusivity *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TNotNull<UScriptStruct_*> this_00;
  TNotNull<UScriptStruct_*> *pTVar4;
  FRoleTraits *pFVar5;
  FMassEntityManager *this_01;
  undefined1 auStackY_658 [32];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_620;
  char local_610;
  undefined1 local_60f;
  char local_60e;
  undefined1 local_60d;
  bool local_60c;
  char local_60b;
  undefined1 local_60a;
  char local_609;
  undefined1 local_608;
  bool local_607;
  char local_606;
  undefined1 local_605;
  undefined1 local_604;
  undefined1 local_600 [184];
  undefined4 local_548;
  undefined4 local_544;
  FName *local_540;
  UScriptStruct *local_538;
  TNotNull<UScriptStruct_*> *local_530;
  FTypeManager *local_528;
  FMassEntityManager *local_520;
  undefined4 local_518;
  undefined4 local_514;
  FMassEntityHandle *local_510;
  FMassEntityHandle *local_508;
  FMassEntityHandle *local_500;
  FMassEntityHandle local_4f8;
  FMassEntityHandle local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  FMassEntityHandle *local_4e0;
  FMassEntityHandle *local_4d8;
  FMassEntityHandle *local_4d0;
  FMassEntityHandle local_4c8;
  FMassEntityHandle local_4c0;
  FName local_4b8;
  FName local_4b0;
  FMassEntityHandle local_4a8;
  FMassEntityHandle local_4a0;
  FName local_498;
  FRelationManager *local_490;
  undefined4 local_488;
  undefined4 local_484;
  FMassEntityHandle *local_480;
  FMassEntityHandle *local_478;
  FMassEntityHandle *local_470;
  FMassEntityHandle local_468;
  FMassEntityHandle local_460;
  undefined4 local_458;
  undefined4 local_454;
  FMassEntityHandle *local_450;
  FMassEntityHandle *local_448;
  FMassEntityHandle *local_440;
  FMassEntityHandle local_438;
  FMassEntityHandle local_430;
  FName local_428;
  FName local_420;
  FMassEntityHandle local_418;
  FMassEntityHandle local_410;
  FName local_408;
  FRelationManager *local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  FMassEntityHandle *local_3f0;
  FMassEntityHandle *local_3e8;
  FMassEntityHandle *local_3e0;
  FMassEntityHandle local_3d8;
  FName local_3d0;
  FMassEntityHandle local_3c8;
  FName local_3c0;
  FRelationManager *local_3b8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_3b0;
  FAutomationTestBase *local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  FMassEntityHandle *local_398;
  FMassEntityHandle *local_390;
  FMassEntityHandle *local_388;
  FMassEntityHandle local_380;
  FName local_378;
  FMassEntityHandle local_370;
  FName local_368;
  FRelationManager *local_360;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_358;
  FAutomationTestBase *local_350;
  undefined4 local_348;
  undefined4 local_344;
  FMassEntityHandle *local_340;
  FMassEntityHandle *local_338;
  FMassEntityHandle *local_330;
  FMassEntityHandle local_328;
  FName local_320;
  FMassEntityHandle local_318;
  FName local_310;
  FRelationManager *local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  FMassEntityHandle *local_2f8;
  FMassEntityHandle *local_2f0;
  FMassEntityHandle *local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  FMassEntityHandle *local_2d8;
  FMassEntityHandle *local_2d0;
  FMassEntityHandle *local_2c8;
  FMassEntityHandle local_2c0;
  FMassEntityHandle *local_2b8;
  FAutomationTestBase *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  FMassEntityHandle *local_2a0;
  FMassEntityHandle *local_298;
  FMassEntityHandle *local_290;
  FMassEntityHandle local_288;
  FName local_280;
  FMassEntityHandle local_278;
  FName local_270;
  FRelationManager *local_268;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_260;
  FAutomationTestBase *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  FMassEntityHandle *local_248;
  FMassEntityHandle *local_240;
  FMassEntityHandle *local_238;
  FMassEntityHandle local_230;
  FName local_228;
  FMassEntityHandle local_220;
  FName local_218;
  FRelationManager *local_210;
  undefined4 local_208;
  undefined4 local_204;
  FMassEntityHandle *local_200;
  FMassEntityHandle *local_1f8;
  FMassEntityHandle *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  FMassEntityHandle *local_1e0;
  FMassEntityHandle *local_1d8;
  FMassEntityHandle *local_1d0;
  FMassEntityHandle local_1c8;
  FMassEntityHandle *local_1c0;
  FAutomationTestBase *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TNotNull<UScriptStruct_*> local_158;
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  FName local_140;
  undefined1 local_138 [8];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_130;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_120;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_110;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_100;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_f0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_e0;
  FRelationTypeTraits local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_658;
  local_1b0 = 3;
  local_1ac = 0;
  local_548 = 1;
  local_544 = 2;
  FMassArchetypeHandle::FMassArchetypeHandle
            ((FMassArchetypeHandle *)(local_600 + 0xa8),(FMassArchetypeHandle *)&this->field_0x60);
  local_540 = &local_140;
  ::FName::FName(local_540,"DestroyChildOnParentDestruction");
  this_00 = FRelationTestBase::MakeRelationType((FName)local_138);
  local_538 = Core::Private::TNotNullBase<UScriptStruct_*>::operator_UScriptStruct__(this_00.Val);
  local_530 = &local_158;
  pTVar4 = TNotNull<UScriptStruct_*>::TNotNull<UScriptStruct_*><UScriptStruct_*_&>
                     (local_530,&local_538);
  FRelationTestBase::CreateRelationTypeDescription(&local_c8,pTVar4->Val);
  pFVar5 = TStaticArray<UE::Mass::Relations::FRoleTraits,2,4294967295>::operator[]
                     (&local_c8.RoleTraits,0);
  pFVar5->DestructionPolicy = Destroy;
  this_01 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_528 = FMassEntityManager::GetTypeManager(this_01);
  FTypeManager::RegisterType(local_528,(FRelationTypeTraits *)local_600);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_620.AllocatorInstance);
  local_620.ArrayNum = 0;
  local_620.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_620.AllocatorInstance);
  local_520 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_520,&local_130,(FMassArchetypeHandle *)(local_600 + 0xa8),3,&local_620);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_130);
  local_490 = *(FRelationManager **)&this->field_0xa8;
  local_600._128_4_ = 1;
  local_600._125_3_ = 0;
  local_600[0x7c] = 0 < local_620.ArrayNum;
  if (local_600._124_4_ == 0) {
    local_518 = 0;
    local_514 = 0;
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
  local_510 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_508 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_500 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_4f8 = *(FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_600._12_4_ = 1;
  local_600._9_3_ = 0;
  local_600[8] = 1 < local_620.ArrayNum;
  local_4f0 = local_4f8;
  local_4a8 = local_4f8;
  if (local_600._8_4_ == 0) {
    local_4e8 = 0;
    local_4e4 = 0;
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
  local_4e0 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_4d8 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_4d0 = (FMassEntityHandle *)(local_620.AllocatorInstance.Data + 8);
  local_4c8 = *local_4d0;
  local_4b8.ComparisonIndex.Value = local_600._0_4_;
  local_4b8.Number = local_600._4_4_;
  local_4b0.ComparisonIndex.Value = local_600._0_4_;
  local_4b0.Number = local_600._4_4_;
  local_498.ComparisonIndex.Value = local_600._0_4_;
  local_498.Number = local_600._4_4_;
  local_4c0 = local_4c8;
  local_4a0 = local_4c8;
  FRelationManager::CreateRelationInstance
            (local_490,(FTypeHandle)local_150,(FMassEntityHandle)local_600._0_8_,local_4c8);
  local_400 = *(FRelationManager **)&this->field_0xa8;
  local_600._20_4_ = 1;
  local_600._17_3_ = 0;
  local_600[0x10] = 2 < local_620.ArrayNum;
  if (local_600._16_4_ == 0) {
    local_488 = 0;
    local_484 = 0;
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
  local_480 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_478 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_470 = (FMassEntityHandle *)(local_620.AllocatorInstance.Data + 0x10);
  local_468 = *local_470;
  local_600._28_4_ = 1;
  local_600._25_3_ = 0;
  local_600[0x18] = 1 < local_620.ArrayNum;
  local_460 = local_468;
  local_418 = local_468;
  if (local_600._24_4_ == 0) {
    local_458 = 0;
    local_454 = 0;
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
  local_450 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_448 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_440 = (FMassEntityHandle *)(local_620.AllocatorInstance.Data + 8);
  local_438 = *local_440;
  local_428.ComparisonIndex.Value = local_600._0_4_;
  local_428.Number = local_600._4_4_;
  local_420.ComparisonIndex.Value = local_600._0_4_;
  local_420.Number = local_600._4_4_;
  local_408.ComparisonIndex.Value = local_600._0_4_;
  local_408.Number = local_600._4_4_;
  local_430 = local_438;
  local_410 = local_438;
  FRelationManager::CreateRelationInstance
            (local_400,(FTypeHandle)local_148,(FMassEntityHandle)local_600._0_8_,local_438);
  local_3a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_3b8 = *(FRelationManager **)&this->field_0xa8;
  local_600._36_4_ = 1;
  local_600._33_3_ = 0;
  local_600[0x20] = 0 < local_620.ArrayNum;
  if (local_600._32_4_ == 0) {
    local_3f8 = 0;
    local_3f4 = 0;
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
  local_3f0 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_3e8 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_3e0 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_3d8 = *(FMassEntityHandle *)local_620.AllocatorInstance.Data;
  local_3d0.ComparisonIndex.Value = local_600._0_4_;
  local_3d0.Number = local_600._4_4_;
  local_3c0.ComparisonIndex.Value = local_600._0_4_;
  local_3c0.Number = local_600._4_4_;
  local_3c8 = local_3d8;
  local_3b0 = FRelationManager::GetRelationSubjects
                        (local_3b8,&local_120,(FTypeHandle)local_600._0_8_,local_3d8);
  local_600._144_4_ = local_3b0->ArrayNum;
  bVar2 = local_600._144_4_ == 0;
  ::FString::FString(&local_1a8,"Original parent has no children");
  bVar2 = FAutomationTestBase::TestTrue(local_3a8,&local_1a8,bVar2);
  local_610 = !bVar2;
  local_600._41_3_ = 0;
  local_600[0x28] = local_610;
  ::FString::~FString(&local_1a8);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_120);
  if (local_610 == '\0') {
    local_350 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_360 = *(FRelationManager **)&this->field_0xa8;
    local_600._48_4_ = 1;
    local_600._45_3_ = 0;
    local_600[0x2c] = 2 < local_620.ArrayNum;
    if (local_600._44_4_ == 0) {
      local_3a0 = 0;
      local_39c = 0;
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
    local_398 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
    local_390 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
    local_388 = (FMassEntityHandle *)(local_620.AllocatorInstance.Data + 0x10);
    local_380 = *local_388;
    local_378.ComparisonIndex.Value = local_600._0_4_;
    local_378.Number = local_600._4_4_;
    local_368.ComparisonIndex.Value = local_600._0_4_;
    local_368.Number = local_600._4_4_;
    local_370 = local_380;
    local_358 = FRelationManager::GetRelationSubjects
                          (local_360,&local_110,(FTypeHandle)local_600._0_8_,local_380);
    local_600._160_4_ = local_358->ArrayNum;
    bVar2 = local_600._160_4_ == 1;
    ::FString::FString(&local_198,"New parent has exactly one child");
    bVar2 = FAutomationTestBase::TestTrue(local_350,&local_198,bVar2);
    local_60e = !bVar2;
    local_600._53_3_ = 0;
    local_600[0x34] = local_60e;
    ::FString::~FString(&local_198);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_110);
    if (local_60e == '\0') {
      local_2b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_308 = *(FRelationManager **)&this->field_0xa8;
      local_600._60_4_ = 1;
      local_600._57_3_ = 0;
      local_600[0x38] = 2 < local_620.ArrayNum;
      if (local_600._56_4_ == 0) {
        local_348 = 0;
        local_344 = 0;
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
      local_340 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
      local_338 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
      local_330 = (FMassEntityHandle *)(local_620.AllocatorInstance.Data + 0x10);
      local_328 = *local_330;
      local_320.ComparisonIndex.Value = local_600._0_4_;
      local_320.Number = local_600._4_4_;
      local_310.ComparisonIndex.Value = local_600._0_4_;
      local_310.Number = local_600._4_4_;
      local_318 = local_328;
      local_600._152_8_ =
           FRelationManager::GetRelationSubjects
                     (local_308,&local_100,(FTypeHandle)local_600._0_8_,local_328);
      local_600._68_4_ = 1;
      local_600._65_3_ = 0;
      local_600[0x40] = 0 < *(int *)(local_600._152_8_ + 8);
      if (local_600._64_4_ == 0) {
        local_300 = 0;
        local_2fc = 0;
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
      local_2f8 = *(FMassEntityHandle **)local_600._152_8_;
      local_600._76_4_ = 1;
      local_600._73_3_ = 0;
      local_600[0x48] = 1 < local_620.ArrayNum;
      local_2f0 = local_2f8;
      local_2e8 = local_2f8;
      local_2b8 = local_2f8;
      if (local_600._72_4_ == 0) {
        local_2e0 = 0;
        local_2dc = 0;
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
      local_2d8 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
      local_2d0 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
      local_2c8 = (FMassEntityHandle *)(local_620.AllocatorInstance.Data + 8);
      local_2c0 = *local_2c8;
      local_60c = FMassEntityHandle::operator==(local_2b8,local_2c0);
      ::FString::FString(&local_188,"New parent\'s child matches expectations");
      bVar2 = FAutomationTestBase::TestTrue(local_2b0,&local_188,local_60c);
      local_60b = !bVar2;
      local_600._81_3_ = 0;
      local_600[0x50] = local_60b;
      ::FString::~FString(&local_188);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_100);
      if (local_60b == '\0') {
        local_258 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_268 = *(FRelationManager **)&this->field_0xa8;
        local_600._88_4_ = 1;
        local_600._85_3_ = 0;
        local_600[0x54] = 1 < local_620.ArrayNum;
        if (local_600._84_4_ == 0) {
          local_2a8 = 0;
          local_2a4 = 0;
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
        local_2a0 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
        local_298 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
        local_290 = (FMassEntityHandle *)(local_620.AllocatorInstance.Data + 8);
        local_288 = *local_290;
        local_280.ComparisonIndex.Value = local_600._0_4_;
        local_280.Number = local_600._4_4_;
        local_270.ComparisonIndex.Value = local_600._0_4_;
        local_270.Number = local_600._4_4_;
        local_278 = local_288;
        local_260 = FRelationManager::GetRelationObjects
                              (local_268,&local_f0,(FTypeHandle)local_600._0_8_,local_288);
        local_600._132_4_ = local_260->ArrayNum;
        bVar2 = 0 < (int)local_600._132_4_;
        ::FString::FString(&local_178,"The Child has parents");
        bVar2 = FAutomationTestBase::TestTrue(local_258,&local_178,bVar2);
        local_609 = !bVar2;
        local_600._93_3_ = 0;
        local_600[0x5c] = local_609;
        ::FString::~FString(&local_178);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_f0);
        if (local_609 == '\0') {
          local_1b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_210 = *(FRelationManager **)&this->field_0xa8;
          local_600._100_4_ = 1;
          local_600._97_3_ = 0;
          local_600[0x60] = 1 < local_620.ArrayNum;
          if (local_600._96_4_ == 0) {
            local_250 = 0;
            local_24c = 0;
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
          local_248 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
          local_240 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
          local_238 = (FMassEntityHandle *)(local_620.AllocatorInstance.Data + 8);
          local_230 = *local_238;
          local_228.ComparisonIndex.Value = local_600._0_4_;
          local_228.Number = local_600._4_4_;
          local_218.ComparisonIndex.Value = local_600._0_4_;
          local_218.Number = local_600._4_4_;
          local_220 = local_230;
          local_600._136_8_ =
               FRelationManager::GetRelationObjects
                         (local_210,&local_e0,(FTypeHandle)local_600._0_8_,local_230);
          local_600._108_4_ = 1;
          local_600._105_3_ = 0;
          local_600[0x68] = 0 < *(int *)(local_600._136_8_ + 8);
          if (local_600._104_4_ == 0) {
            local_208 = 0;
            local_204 = 0;
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
          local_200 = *(FMassEntityHandle **)local_600._136_8_;
          local_600._116_4_ = 1;
          local_600._113_3_ = 0;
          local_600[0x70] = 2 < local_620.ArrayNum;
          local_1f8 = local_200;
          local_1f0 = local_200;
          local_1c0 = local_200;
          if (local_600._112_4_ == 0) {
            local_1e8 = 0;
            local_1e4 = 0;
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
          local_1e0 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
          local_1d8 = (FMassEntityHandle *)local_620.AllocatorInstance.Data;
          local_1d0 = (FMassEntityHandle *)(local_620.AllocatorInstance.Data + 0x10);
          local_1c8 = *local_1d0;
          local_607 = FMassEntityHandle::operator==(local_1c0,local_1c8);
          ::FString::FString(&local_168,"The Child knows about the new parent");
          bVar2 = FAutomationTestBase::TestTrue(local_1b8,&local_168,local_607);
          local_606 = !bVar2;
          local_600._121_3_ = 0;
          local_600[0x78] = local_606;
          ::FString::~FString(&local_168);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_e0);
          if (local_606 == '\0') {
            local_604 = 1;
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_620);
            ::FString::~FString(&local_c8.DebugInFix);
            Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
            ::
            ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                      ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                        *)&local_c8.RegisterObserversDelegate);
            FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)(local_600 + 0xa8));
            local_60f = local_604;
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_605 = 0;
            TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
            ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_620);
            ::FString::~FString(&local_c8.DebugInFix);
            Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
            ::
            ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                      ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                        *)&local_c8.RegisterObserversDelegate);
            FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)(local_600 + 0xa8));
            local_60f = local_605;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_608 = 0;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_620);
          ::FString::~FString(&local_c8.DebugInFix);
          Core::Private::Function::
          TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
          ::
          ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                    ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                      *)&local_c8.RegisterObserversDelegate);
          FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)(local_600 + 0xa8));
          local_60f = local_608;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_60a = 0;
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_620);
        ::FString::~FString(&local_c8.DebugInFix);
        Core::Private::Function::
        TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
        ::
        ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                  ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                    *)&local_c8.RegisterObserversDelegate);
        FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)(local_600 + 0xa8));
        local_60f = local_60a;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_60d = 0;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_620);
      ::FString::~FString(&local_c8.DebugInFix);
      Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
      ::
      ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                  *)&local_c8.RegisterObserversDelegate);
      FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)(local_600 + 0xa8));
      local_60f = local_60d;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_60f = 0;
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_620);
    ::FString::~FString(&local_c8.DebugInFix);
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
              ((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassEntityManager_&)>
                *)&local_c8.RegisterObserversDelegate);
    FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)(local_600 + 0xa8));
  }
  return (bool)local_60f;
}

