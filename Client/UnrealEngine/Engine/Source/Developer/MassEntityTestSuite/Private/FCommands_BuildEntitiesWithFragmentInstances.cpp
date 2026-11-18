// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147141600

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassCommandsTest::FCommands_BuildEntitiesWithFragmentInstances::InstantTest
          (FCommands_BuildEntitiesWithFragmentInstances *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityManager *pFVar4;
  FTestFragment_Int *pFVar5;
  FTestFragment_Float *pFVar6;
  int local_258;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_250;
  char local_240;
  undefined1 local_23f;
  char local_23e;
  undefined1 local_23d;
  char local_23c;
  undefined1 local_23b;
  char local_23a;
  undefined1 local_239;
  undefined1 local_238;
  int local_234;
  int local_230;
  int local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  FMassEntityHandle local_200;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  float local_1d8;
  FTestFragment_Float local_1d4;
  FTestFragment_Int local_1d0 [2];
  FMassEntityManager *local_1c8;
  FMassEntityManager *local_1c0;
  FMassEntityHandle local_1b8;
  FMassEntityHandle local_1b0;
  FMassEntityHandle local_1a8;
  FMassEntityHandle local_1a0;
  FMassEntityHandle local_198;
  FMassEntityHandle local_190;
  undefined4 local_188;
  undefined4 local_184;
  FMassEntityHandle local_180;
  FMassEntityHandle local_178;
  FMassEntityHandle local_170;
  longlong local_168;
  longlong local_160;
  FMassEntityHandle local_158;
  FMassEntityHandle local_150;
  void *local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  FMassEntityHandle local_130;
  FMassEntityHandle local_128;
  longlong local_120;
  FMassEntityHandle local_118;
  FMassEntityHandle *local_110;
  FMassEntityHandle local_108;
  FMassEntityHandle local_100;
  FTestFragment_Float *local_f8;
  FTestFragment_Int *local_f0;
  FMassEntityHandle local_e8;
  FMassCommandBuffer *local_e0;
  FMassEntityManager *local_d8;
  FAutomationTestBase *local_d0;
  FMassEntityManager *local_c8;
  FAutomationTestBase *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  FMassEntityHandle local_b0;
  FMassEntityHandle local_a8;
  FMassEntityHandle *local_a0;
  FAutomationTestBase *local_98;
  FAutomationTestBase *local_90;
  int local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FMassEntityView local_38;
  
  local_1c8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1f8 = FMassEntityManager::DebugGetArchetypeEntitiesCountPerChunk
                        (local_1c8,(FMassArchetypeHandle *)&this->field_0x70);
  local_1f4 = (int)((float)local_1f8 * __real_40200000);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_250.AllocatorInstance);
  local_250.ArrayNum = 0;
  local_250.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_250.AllocatorInstance);
  for (local_234 = 0; local_234 < local_1f4; local_234 = local_234 + 1) {
    local_1c0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_200 = FMassEntityManager::ReserveEntity(local_1c0);
    local_1b8 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
    local_1b0 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
    local_1a8 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
    if (local_250.AllocatorInstance.Data <= (ulonglong)local_200) {
      local_1a0 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
      local_198 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
      local_190 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
      if ((ulonglong)local_200 <
          (ulonglong)((longlong)local_250.AllocatorInstance.Data + (longlong)local_250.ArrayMax * 8)
         ) {
        local_188 = 0;
        local_184 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_168 = (longlong)local_250.ArrayNum;
        local_160 = (longlong)local_250.ArrayMax;
        local_180 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
        local_178 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
        local_170 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
        local_158 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
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
    if (local_250.ArrayNum == local_250.ArrayMax) {
      local_250.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_250.AllocatorInstance,&local_250.ArrayMax);
    }
    local_228 = local_250.ArrayNum;
    local_150 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
    local_148 = (void *)((longlong)local_250.AllocatorInstance.Data +
                        (longlong)local_250.ArrayNum * 8);
    local_250.ArrayNum = local_250.ArrayNum + 1;
    local_140 = ::operator_new(8,local_148);
    *local_140 = *(undefined8 *)local_200;
    local_88 = local_228;
    pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_e0 = FMassEntityManager::Defer(pFVar4);
    local_f8 = FTestFragment_Float::FTestFragment_Float(&local_1d4,(float)local_234);
    local_f0 = FTestFragment_Int::FTestFragment_Int(local_1d0,local_234);
    local_230 = local_250.ArrayNum + -1;
    local_220 = (uint)(-1 < local_230);
    local_224 = (uint)(local_230 < local_250.ArrayNum);
    if (-1 >= local_230 || local_230 >= local_250.ArrayNum) {
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
    local_130 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
    local_128 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
    local_118 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
    local_120 = (longlong)(local_250.ArrayNum + -1) * 8;
    local_110 = (FMassEntityHandle *)((longlong)local_250.AllocatorInstance.Data + local_120);
    local_108 = *local_110;
    local_100 = local_108;
    local_e8 = local_108;
    FMassCommandBuffer::PushCommand<FMassCommandBuildEntity,FTestFragment_Int,FTestFragment_Float>
              (local_e0,local_108,local_f0,local_f8);
  }
  local_d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_d8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_1f0 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                        (local_d8,(FMassArchetypeHandle *)&this->field_0x70);
  ::FString::FString(&local_80,L"All entities created should be in ArrayArchetype");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_80,local_1f0,0,local_d0);
  local_240 = !bVar2;
  local_21c = (uint)(byte)local_240;
  ::FString::~FString(&local_80);
  if (local_240 == '\0') {
    pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassEntityManager::FlushCommands(pFVar4);
    local_c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_1ec = local_250.ArrayNum;
    local_1e8 = local_250.ArrayNum;
    local_c8 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_1e4 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                          (local_c8,(FMassArchetypeHandle *)&this->field_0x70);
    ::FString::FString(&local_70,L"All entities created should be in ArrayArchetype");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_70,local_1e4,local_1e8,local_c0);
    local_23e = !bVar2;
    local_218 = (uint)(byte)local_23e;
    ::FString::~FString(&local_70);
    if (local_23e == '\0') {
      for (local_258 = 0; local_1e0 = local_250.ArrayNum, local_258 < local_250.ArrayNum;
          local_258 = local_258 + 1) {
        local_210 = (uint)(-1 < local_258);
        local_214 = (uint)(local_258 < local_250.ArrayNum);
        if (-1 >= local_258 || local_258 >= local_250.ArrayNum) {
          local_b8 = 0;
          local_b4 = 0;
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
        local_b0 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
        local_a8 = (FMassEntityHandle)local_250.AllocatorInstance.Data;
        local_a0 = (FMassEntityHandle *)
                   ((longlong)local_250.AllocatorInstance.Data + (longlong)local_258 * 8);
        FMassEntityView::FMassEntityView
                  (&local_38,(FMassArchetypeHandle *)&this->field_0x70,*local_a0);
        local_98 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar5 = FMassEntityView::GetFragmentData<FTestFragment_Int>(&local_38);
        local_1dc = pFVar5->Value;
        ::FString::FString(&local_60,L"Should have predicted values");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_60,local_1dc,local_258,local_98);
        local_23c = !bVar2;
        local_20c = (uint)(byte)local_23c;
        ::FString::~FString(&local_60);
        if (local_23c != '\0') {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_23b = 0;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_250);
          return (bool)local_23b;
        }
        local_90 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar6 = FMassEntityView::GetFragmentData<FTestFragment_Float>(&local_38);
        local_1d8 = pFVar6->Value;
        ::FString::FString(&local_50,L"Should have predicted values");
        bVar2 = FTestHelpers::TestEqual<float,float>(&local_50,local_1d8,(float)local_258,local_90);
        local_23a = !bVar2;
        local_208 = (uint)(byte)local_23a;
        ::FString::~FString(&local_50);
        if (local_23a != '\0') {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_239 = 0;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_250);
          return (bool)local_239;
        }
      }
      local_238 = 1;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_250);
      local_23f = local_238;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_23d = 0;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_250);
      local_23f = local_23d;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_23f = 0;
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_250);
  }
  return (bool)local_23f;
}

