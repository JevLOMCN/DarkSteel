// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715adb0

/* WARNING: Removing unreachable block (ram,0x00014715b0ed) */
/* WARNING: Removing unreachable block (ram,0x00014715b387) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_ArchetypeCreation::InstantTest(FEntityTest_ArchetypeCreation *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  bool local_1e8;
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> local_1d0;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  undefined4 local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  FAutomationTestBase *local_170;
  FAutomationTestBase *local_168;
  FMassEntityManager *local_160;
  FAutomationTestBase *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  FAutomationTestBase *local_130;
  UScriptStruct *local_128;
  UScriptStruct *local_120;
  FMassEntityManager *local_118;
  FAutomationTestBase *local_110;
  undefined4 local_108;
  undefined4 local_104;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FAutomationTestBase *local_f0;
  FAutomationTestBase *local_e8;
  UScriptStruct *local_e0;
  UScriptStruct *local_d8;
  FMassEntityManager *local_d0;
  FAutomationTestBase *local_c8;
  UScriptStruct *local_c0;
  UScriptStruct *local_b8;
  FAutomationTestBase *local_b0;
  FScriptContainerElement *local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20 [2];
  
  local_f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = FMassArchetypeHandle::IsValid((FMassArchetypeHandle *)&this->field_0x50);
  ::FString::FString(&local_a0,"Floats archetype should have been created");
  bVar2 = FAutomationTestBase::TestTrue(local_f0,&local_a0,bVar2);
  local_1c0 = (uint)!bVar2;
  ::FString::~FString(&local_a0);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    return false;
  }
  local_170 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = FMassArchetypeHandle::IsValid((FMassArchetypeHandle *)&this->field_0x50);
  ::FString::FString(&local_90,"Floats archetype should have been created");
  bVar2 = FAutomationTestBase::TestTrue(local_170,&local_90,bVar2);
  local_1bc = (uint)!bVar2;
  ::FString::~FString(&local_90);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    return false;
  }
  local_168 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = FMassArchetypeHandle::IsValid((FMassArchetypeHandle *)&this->field_0x60);
  ::FString::FString(&local_80,"Ints archetype should have been created");
  bVar2 = FAutomationTestBase::TestTrue(local_168,&local_80,bVar2);
  local_1b8 = (uint)!bVar2;
  ::FString::~FString(&local_80);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    return false;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1d0.AllocatorInstance);
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1d0.AllocatorInstance);
  local_160 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::DebugGetArchetypeFragmentTypes
            (local_160,(FMassArchetypeHandle *)&this->field_0x50,&local_1d0);
  local_158 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_178 = local_1d0.ArrayNum;
  local_18c = local_1d0.ArrayNum;
  ::FString::FString(&local_70,"Floats archetype should contain just a single fragment");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_70,local_18c,1,local_158);
  local_1b4 = (uint)!bVar2;
  ::FString::~FString(&local_70);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_1d0);
    return false;
  }
  local_130 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_128 = FTestFragment_Float::StaticStruct();
  local_1ac = 1;
  local_1b0 = (uint)(0 < local_1d0.ArrayNum);
  if (local_1b0 == 0) {
    local_150 = 0;
    local_14c = 0;
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
  local_148 = local_1d0.AllocatorInstance.Data;
  local_140 = local_1d0.AllocatorInstance.Data;
  local_138 = local_1d0.AllocatorInstance.Data;
  local_120 = *(UScriptStruct **)local_1d0.AllocatorInstance.Data;
  ::FString::FString(&local_60,"Floats archetype\'s lone fragment should be of Float fragment type")
  ;
  bVar2 = FTestHelpers::TestEqual<UScriptStruct_const_,UScriptStruct>
                    (&local_60,local_120,local_128,local_130);
  local_1a8 = (uint)!bVar2;
  ::FString::~FString(&local_60);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_1d0);
    return false;
  }
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::Reset(&local_1d0,0);
  local_118 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::DebugGetArchetypeFragmentTypes
            (local_118,(FMassArchetypeHandle *)&this->field_0x60,&local_1d0);
  local_110 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_188 = local_1d0.ArrayNum;
  local_184 = local_1d0.ArrayNum;
  ::FString::FString(&local_50,"Ints archetype should contain just a single fragment");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_50,local_184,1,local_110);
  local_1a4 = (uint)!bVar2;
  ::FString::~FString(&local_50);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_1d0);
    return false;
  }
  local_e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_e0 = FTestFragment_Int::StaticStruct();
  local_19c = 1;
  local_1a0 = (uint)(0 < local_1d0.ArrayNum);
  if (local_1a0 == 0) {
    local_108 = 0;
    local_104 = 0;
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
  local_100 = local_1d0.AllocatorInstance.Data;
  local_f8 = local_1d0.AllocatorInstance.Data;
  local_a8 = local_1d0.AllocatorInstance.Data;
  local_d8 = *(UScriptStruct **)local_1d0.AllocatorInstance.Data;
  ::FString::FString(&local_40,"Ints archetype\'s lone fragment should be of Ints fragment type");
  bVar2 = FTestHelpers::TestEqual<UScriptStruct_const_,UScriptStruct>
                    (&local_40,local_d8,local_e0,local_e8);
  local_198 = (uint)!bVar2;
  ::FString::~FString(&local_40);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_1d0);
    return false;
  }
  TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::Reset(&local_1d0,0);
  local_d0 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::DebugGetArchetypeFragmentTypes
            (local_d0,(FMassArchetypeHandle *)&this->field_0x70,&local_1d0);
  local_c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_180 = local_1d0.ArrayNum;
  local_17c = local_1d0.ArrayNum;
  ::FString::FString(&local_30,"FloatsInts archetype should contain exactly two fragments");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_30,local_17c,2,local_c8);
  local_194 = (uint)!bVar2;
  ::FString::~FString(&local_30);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_1d0);
    return false;
  }
  local_b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_c0 = FTestFragment_Int::StaticStruct();
  iVar4 = TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::Find(&local_1d0,&local_c0);
  if (iVar4 != -1) {
    local_b8 = FTestFragment_Float::StaticStruct();
    iVar4 = TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::Find(&local_1d0,&local_b8);
    if (iVar4 != -1) {
      local_1e8 = true;
      goto LAB_14715b66a;
    }
  }
  local_1e8 = false;
LAB_14715b66a:
  ::FString::FString(local_20,"FloatsInts archetype\'s should contain both expected fragment types")
  ;
  bVar2 = FAutomationTestBase::TestTrue(local_b0,local_20,local_1e8);
  local_190 = (uint)!bVar2;
  ::FString::~FString(local_20);
  bVar2 = bVar2;
  if (bVar2) {
    TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_1d0);
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>::
    ~TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_>(&local_1d0);
  }
  return bVar2;
}

