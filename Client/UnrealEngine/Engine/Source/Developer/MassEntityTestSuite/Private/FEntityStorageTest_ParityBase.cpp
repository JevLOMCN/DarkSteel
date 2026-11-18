// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147159500

/* WARNING: Removing unreachable block (ram,0x0001471599d3) */
/* WARNING: Removing unreachable block (ram,0x000147159591) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityStorageTest::FEntityStorageTest_ParityBase::InstantTest
          (FEntityStorageTest_ParityBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int local_218;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_208;
  uint local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  int local_1ec;
  uint local_1e8;
  uint local_1e4;
  undefined4 local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_1c0;
  FMassEntityHandle local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  longlong *local_198;
  undefined8 *local_190;
  int local_188;
  int local_184;
  TSharedPtr<FMassEntityManager,1> *local_180;
  TSharedPtr<FMassEntityManager,1> *local_178;
  TSharedPtr<FMassEntityManager,1> *local_170;
  FMassEntityManager *local_168;
  FMassEntityHandle local_160;
  FMassEntityHandle local_158;
  FMassEntityHandle local_150;
  FMassEntityHandle local_148;
  FMassEntityHandle local_140;
  FMassEntityHandle local_138;
  undefined4 local_130;
  undefined4 local_12c;
  FMassEntityHandle local_128;
  FMassEntityHandle local_120;
  FMassEntityHandle local_118;
  longlong local_110;
  longlong local_108;
  FMassEntityHandle local_100;
  FMassEntityHandle local_f8;
  void *local_f0;
  undefined8 *local_e8;
  FAutomationTestBase *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  longlong local_c8;
  TSharedPtr<FMassEntityManager,1> *local_c0;
  FMassEntityManager *local_b8;
  FAutomationTestBase *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  undefined4 local_88;
  undefined4 local_84;
  FMassEntityHandle local_80;
  FMassEntityHandle local_78;
  int *local_70;
  FAutomationTestBase *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 local_54;
  FString local_50;
  FString local_40;
  FString local_30;
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  local_1f8 = (uint)(*(int *)&this->field_0x48 * 3) / 2;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_208.AllocatorInstance);
  local_208.ArrayNum = 0;
  local_208.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_208.AllocatorInstance);
  for (local_1f4 = 0; local_1f4 < (int)local_1f8; local_1f4 = local_1f4 + 1) {
    local_190 = (undefined8 *)&this->field_0x28;
    local_1f0 = 1;
    local_1c4 = (uint)(0 < *(int *)&this->field_0x30);
    if (local_1c4 == 0) {
      local_58 = 0;
      local_54 = 0;
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
    local_180 = (TSharedPtr<FMassEntityManager,1> *)*local_190;
    local_178 = local_180;
    local_170 = local_180;
    local_168 = TSharedPtr<FMassEntityManager,1>::operator->(local_180);
    local_1b0 = FMassEntityManager::ReserveEntity(local_168);
    local_160 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
    local_158 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
    local_150 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
    if (local_208.AllocatorInstance.Data <= (ulonglong)local_1b0) {
      local_148 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
      local_140 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
      local_138 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
      if ((ulonglong)local_1b0 <
          (ulonglong)((longlong)local_208.AllocatorInstance.Data + (longlong)local_208.ArrayMax * 8)
         ) {
        local_130 = 0;
        local_12c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_110 = (longlong)local_208.ArrayNum;
        local_108 = (longlong)local_208.ArrayMax;
        local_128 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
        local_120 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
        local_118 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
        local_100 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
    }
    if (local_208.ArrayNum == local_208.ArrayMax) {
      local_208.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_208.AllocatorInstance,&local_208.ArrayMax);
    }
    local_1ec = local_208.ArrayNum;
    local_f8 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
    local_f0 = (void *)((longlong)local_208.AllocatorInstance.Data +
                       (longlong)local_208.ArrayNum * 8);
    local_208.ArrayNum = local_208.ArrayNum + 1;
    local_e8 = ::operator_new(8,local_f0);
    *local_e8 = *(undefined8 *)local_1b0;
    local_60 = local_1ec;
  }
  local_e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_188 = local_208.ArrayNum;
  local_184 = local_208.ArrayNum;
  ::FString::FString(&local_50,
                     "The number of individually reserved entities should match the requested count"
                    );
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_50,local_184,local_1f8,local_e0);
  local_1e8 = (uint)!bVar2;
  ::FString::~FString(&local_50);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_208);
    bVar2 = false;
  }
  else {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_1c0.AllocatorInstance);
    local_1c0.ArrayNum = 0;
    local_1c0.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_1c0.AllocatorInstance);
    local_198 = (longlong *)&this->field_0x28;
    local_1e0 = 1;
    local_1e4 = (uint)(1 < *(int *)&this->field_0x30);
    if (local_1e4 == 0) {
      local_d8 = 0;
      local_d4 = 0;
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
    local_d0 = *local_198;
    local_c0 = (TSharedPtr<FMassEntityManager,1> *)(local_d0 + 0x10);
    local_c8 = local_d0;
    local_b8 = TSharedPtr<FMassEntityManager,1>::operator->(local_c0);
    FMassEntityManager::BatchReserveEntities(local_b8,&local_18,local_1f8,&local_1c0);
    local_b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_1a8 = local_1c0.ArrayNum;
    local_1a4 = local_1c0.ArrayNum;
    ::FString::FString(&local_40,
                       "The number of batch-reserved entities should match the requested count");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_40,local_1a4,local_1f8,local_b0);
    local_1dc = (uint)!bVar2;
    ::FString::~FString(&local_40);
    if (!bVar2) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1c0);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_208);
      bVar2 = false;
    }
    else {
      for (local_218 = 0; local_218 < (int)local_1f8; local_218 = local_218 + 1) {
        local_68 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_1d4 = (uint)(-1 < local_218);
        local_1d8 = (uint)(local_218 < local_1c0.ArrayNum);
        if (-1 >= local_218 || local_218 >= local_1c0.ArrayNum) {
          local_a8 = 0;
          local_a4 = 0;
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
        local_a0 = local_1c0.AllocatorInstance.Data;
        local_98 = local_1c0.AllocatorInstance.Data;
        local_90 = local_1c0.AllocatorInstance.Data + (longlong)local_218 * 8;
        local_1a0 = *(int *)local_90;
        local_1cc = (uint)(-1 < local_218);
        local_1d0 = (uint)(local_218 < local_208.ArrayNum);
        if (-1 >= local_218 || local_218 >= local_208.ArrayNum) {
          local_88 = 0;
          local_84 = 0;
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
        local_80 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
        local_78 = (FMassEntityHandle)local_208.AllocatorInstance.Data;
        local_70 = (int *)((longlong)local_208.AllocatorInstance.Data + (longlong)local_218 * 8);
        local_19c = *local_70;
        ::FString::FString(&local_30,
                           "The reserved entities are expected to be the same, regardless of the storage type"
                          );
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_30,local_19c,local_1a0,local_68);
        local_1c8 = (uint)!bVar2;
        ::FString::~FString(&local_30);
        if (!bVar2) {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1c0);
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_208);
          return false;
        }
      }
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_1c0);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_208);
      bVar2 = true;
    }
  }
  return bVar2;
}

