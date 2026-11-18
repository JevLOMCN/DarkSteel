// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147140aa0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassCommandsTest::FCommands_BuildEntitiesInHoles::InstantTest(FCommands_BuildEntitiesInHoles *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassEntityHandle,int> *pTVar4;
  TArrayView<FMassEntityHandle_const_,int> *pTVar5;
  FMassEntityManager *pFVar6;
  FTestFragment_Int *pFVar7;
  FTestFragment_Float *pFVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int local_2f8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_2f0;
  undefined1 local_2e0;
  char local_2df;
  undefined1 local_2de;
  char local_2dd;
  undefined1 local_2dc;
  char local_2db;
  undefined1 local_2da;
  undefined1 local_2d9;
  char local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  FMassEntityHandle local_298;
  int local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  float local_270;
  FTestFragment_Float local_26c;
  FTestFragment_Int local_268 [2];
  FMassEntityManager *local_260;
  FMassEntityManager *local_258;
  FMassEntityHandle local_250;
  FMassEntityHandle local_248;
  FMassEntityHandle local_240;
  TArrayView<FMassEntityHandle_const_,int> *local_238;
  FMassEntityManager *local_230;
  FMassEntityManager *local_228;
  FMassEntityHandle local_220;
  FMassEntityHandle local_218;
  FMassEntityHandle local_210;
  FMassEntityHandle local_208;
  FMassEntityHandle local_200;
  FMassEntityHandle local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  FMassEntityHandle local_1e8;
  FMassEntityHandle local_1e0;
  FMassEntityHandle local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  FMassEntityHandle local_1c0;
  FMassEntityHandle local_1b8;
  void *local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  FMassEntityHandle local_198;
  FMassEntityHandle local_190;
  longlong local_188;
  FMassEntityHandle local_180;
  FMassEntityHandle *local_178;
  FMassEntityHandle local_170;
  FMassEntityHandle local_168;
  FTestFragment_Float *local_160;
  FTestFragment_Int *local_158;
  FMassEntityHandle local_150;
  FMassCommandBuffer *local_148;
  FMassEntityManager *local_140;
  FAutomationTestBase *local_138;
  FMassEntityManager *local_130;
  FAutomationTestBase *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  FMassEntityHandle local_118;
  FMassEntityHandle local_110;
  FMassEntityHandle *local_108;
  FAutomationTestBase *local_100;
  FAutomationTestBase *local_f8;
  int local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_a0;
  undefined1 local_90 [24];
  TArrayView<FMassEntityHandle_const_,int> local_78;
  FMassEntityView local_68;
  TArrayView<FMassEntityHandle_const_,int> local_40;
  TArrayView<FMassEntityHandle,int> local_30 [2];
  
  local_260 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_2c4 = FMassEntityManager::DebugGetArchetypeEntitiesCountPerChunk
                        (local_260,(FMassArchetypeHandle *)&this->field_0x70);
  local_2c8 = (int)((float)local_2c4 * __real_3fa00000) << 1;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_2f0.AllocatorInstance);
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_2f0.AllocatorInstance);
  local_258 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_258,&local_a0,(FMassArchetypeHandle *)&this->field_0x70,local_2c8,&local_2f0);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_a0);
  FGenericPlatformMath::SRandInit(0);
  Algo::RandomShuffle<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&>(&local_2f0);
  local_230 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_238 = &local_40;
  local_290 = local_2f0.ArrayNum;
  local_28c = local_2f0.ArrayNum / 2;
  local_250 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
  local_248 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
  local_240 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
  pTVar4 = MakeArrayView<FMassEntityHandle>
                     (local_30,(FMassEntityHandle *)local_2f0.AllocatorInstance.Data,local_28c);
  pTVar5 = TArrayView<FMassEntityHandle_const_,int>::
           TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                     (local_238,pTVar4);
  puVar10 = local_90;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_90;
  pTVar5 = &local_78;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar10;
    puVar10 = puVar10 + 1;
    pTVar5 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  FMassEntityManager::BatchDestroyEntities(local_230,&local_78);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Reset(&local_2f0,0);
  for (local_2d4 = 0; local_2d4 < local_2c4; local_2d4 = local_2d4 + 1) {
    local_228 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_298 = FMassEntityManager::ReserveEntity(local_228);
    local_220 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
    local_218 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
    local_210 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
    if (local_2f0.AllocatorInstance.Data <= (ulonglong)local_298) {
      local_208 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
      local_200 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
      local_1f8 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
      if ((ulonglong)local_298 <
          (ulonglong)((longlong)local_2f0.AllocatorInstance.Data + (longlong)local_2f0.ArrayMax * 8)
         ) {
        local_1f0 = 0;
        local_1ec = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_1d0 = (longlong)local_2f0.ArrayNum;
        local_1c8 = (longlong)local_2f0.ArrayMax;
        local_1e8 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
        local_1e0 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
        local_1d8 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
        local_1c0 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
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
    if (local_2f0.ArrayNum == local_2f0.ArrayMax) {
      local_2f0.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_2f0.AllocatorInstance,&local_2f0.ArrayMax);
    }
    local_2c0 = local_2f0.ArrayNum;
    local_1b8 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
    local_1b0 = (void *)((longlong)local_2f0.AllocatorInstance.Data +
                        (longlong)local_2f0.ArrayNum * 8);
    local_2f0.ArrayNum = local_2f0.ArrayNum + 1;
    local_1a8 = ::operator_new(8,local_1b0);
    *local_1a8 = *(undefined8 *)local_298;
    local_f0 = local_2c0;
    pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_148 = FMassEntityManager::Defer(pFVar6);
    local_160 = FTestFragment_Float::FTestFragment_Float(&local_26c,(float)local_2d4);
    local_158 = FTestFragment_Int::FTestFragment_Int(local_268,local_2d4);
    local_2d0 = local_2f0.ArrayNum + -1;
    local_2b8 = (uint)(-1 < local_2d0);
    local_2bc = (uint)(local_2d0 < local_2f0.ArrayNum);
    if (-1 >= local_2d0 || local_2d0 >= local_2f0.ArrayNum) {
      local_1a0 = 0;
      local_19c = 0;
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
    local_198 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
    local_190 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
    local_180 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
    local_188 = (longlong)(local_2f0.ArrayNum + -1) * 8;
    local_178 = (FMassEntityHandle *)((longlong)local_2f0.AllocatorInstance.Data + local_188);
    local_170 = *local_178;
    local_168 = local_170;
    local_150 = local_170;
    FMassCommandBuffer::
    PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Int,FTestFragment_Float>
              (local_148,local_170,local_158,local_160);
  }
  local_138 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_140 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_288 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                        (local_140,(FMassArchetypeHandle *)&this->field_0x70);
  ::FString::FString(&local_e8,L"All entities created should be in ArrayArchetype");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_e8,local_288,local_2c8 / 2,local_138);
  local_2d8 = !bVar2;
  local_2a0 = (uint)(byte)local_2d8;
  ::FString::~FString(&local_e8);
  if (local_2d8 == '\0') {
    pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassEntityManager::FlushCommands(pFVar6);
    local_128 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_284 = local_2f0.ArrayNum;
    local_280 = local_2c8 / 2 + local_2f0.ArrayNum;
    local_130 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_27c = FMassEntityManager::DebugGetArchetypeEntitiesCount
                          (local_130,(FMassArchetypeHandle *)&this->field_0x70);
    ::FString::FString(&local_d8,L"All entities created should be in ArrayArchetype");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_d8,local_27c,local_280,local_128);
    local_2df = !bVar2;
    local_2b4 = (uint)(byte)local_2df;
    ::FString::~FString(&local_d8);
    if (local_2df == '\0') {
      for (local_2f8 = 0; local_278 = local_2f0.ArrayNum, local_2f8 < local_2f0.ArrayNum;
          local_2f8 = local_2f8 + 1) {
        local_2ac = (uint)(-1 < local_2f8);
        local_2b0 = (uint)(local_2f8 < local_2f0.ArrayNum);
        if (-1 >= local_2f8 || local_2f8 >= local_2f0.ArrayNum) {
          local_120 = 0;
          local_11c = 0;
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
        local_118 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
        local_110 = (FMassEntityHandle)local_2f0.AllocatorInstance.Data;
        local_108 = (FMassEntityHandle *)
                    ((longlong)local_2f0.AllocatorInstance.Data + (longlong)local_2f8 * 8);
        FMassEntityView::FMassEntityView
                  (&local_68,(FMassArchetypeHandle *)&this->field_0x70,*local_108);
        local_100 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar7 = FMassEntityView::GetFragmentData<FTestFragment_Int>(&local_68);
        local_274 = pFVar7->Value;
        ::FString::FString(&local_c8,L"Should have predicted values");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_c8,local_274,local_2f8,local_100);
        local_2dd = !bVar2;
        local_2a8 = (uint)(byte)local_2dd;
        ::FString::~FString(&local_c8);
        if (local_2dd != '\0') {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_2dc = 0;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2f0);
          return (bool)local_2dc;
        }
        local_f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar8 = FMassEntityView::GetFragmentData<FTestFragment_Float>(&local_68);
        local_270 = pFVar8->Value;
        ::FString::FString(&local_b8,L"Should have predicted values");
        bVar2 = FTestHelpers::TestEqual<float,float>(&local_b8,local_270,(float)local_2f8,local_f8);
        local_2db = !bVar2;
        local_2a4 = (uint)(byte)local_2db;
        ::FString::~FString(&local_b8);
        if (local_2db != '\0') {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_2da = 0;
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2f0);
          return (bool)local_2da;
        }
      }
      local_2d9 = 1;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2f0);
      local_2e0 = local_2d9;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_2de = 0;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2f0);
      local_2e0 = local_2de;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_2e0 = 0;
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_2f0);
  }
  return (bool)local_2e0;
}

