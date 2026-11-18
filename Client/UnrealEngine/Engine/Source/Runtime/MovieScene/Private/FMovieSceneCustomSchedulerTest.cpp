// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// GetTestFlags @ 146263e10

EAutomationTestFlags __thiscall
FMovieSceneCustomSchedulerTest::GetTestFlags(FMovieSceneCustomSchedulerTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 146263e20

bool __thiscall FMovieSceneCustomSchedulerTest::IsStressTest(FMovieSceneCustomSchedulerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 146263e30

uint __thiscall
FMovieSceneCustomSchedulerTest::GetRequiredDeviceNum(FMovieSceneCustomSchedulerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 146263e40

FString * __thiscall
FMovieSceneCustomSchedulerTest::GetTestSourceFileName
          (FMovieSceneCustomSchedulerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tests\\MovieSceneCustomSchedulerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 146263e70

int __thiscall
FMovieSceneCustomSchedulerTest::GetTestSourceFileLine(FMovieSceneCustomSchedulerTest *this)

{
  return 0x12;
}

// GetTests @ 146263e80

/* WARNING: Removing unreachable block (ram,0x000146263f6d) */
/* WARNING: Removing unreachable block (ram,0x000146264038) */

void __thiscall
FMovieSceneCustomSchedulerTest::GetTests
          (FMovieSceneCustomSchedulerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Sequencer.EntitySystem.Scheduler");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 146264060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneCustomSchedulerTest::RunTest(FMovieSceneCustomSchedulerTest *this,FString *param_1)

{
  FMovieSceneEntityID FVar1;
  FMovieSceneEntityID FVar2;
  undefined1 uVar3;
  int iVar4;
  EMutuallyInclusiveComponentType EVar5;
  undefined1 auStackY_8c8 [32];
  bool local_880 [4];
  FMovieSceneEntityID local_87c [2];
  undefined1 local_878 [16];
  FEntityRange local_868;
  undefined1 local_858 [16];
  ulonglong local_848;
  undefined1 local_840 [2];
  undefined1 auStack_83e [6];
  FEntityManager *local_838;
  TStatIdData *pTStack_830;
  ForElementType<unsigned_int> local_828;
  undefined1 *puStack_820;
  TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
  *local_818;
  undefined1 *local_810;
  FEntityAllocationWriteContext local_808;
  TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
  local_800;
  undefined1 local_7f0 [20];
  undefined1 local_7dc [8];
  undefined1 local_7d4;
  double local_7d0;
  void *local_7c8;
  undefined8 local_7c0;
  void *local_7b8;
  undefined8 local_7b0;
  bool local_7a8;
  TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
  local_7a0;
  TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
  local_790;
  FMutualComponentInitializers local_780;
  undefined4 uStack_760;
  TTypeCompatibleBytes<unsigned_int> TStack_75c;
  FEntitySystemScheduler local_740;
  FEntityManager local_580;
  undefined1 local_2d0 [80];
  void *local_280;
  undefined4 local_278;
  FMutualInclusivityGraph local_270;
  TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator> local_1b8;
  TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator> local_180 [5];
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  UE::MovieScene::FComponentRegistry::FComponentRegistry((FComponentRegistry *)local_2d0);
  UE::MovieScene::FEntityManager::FEntityManager(&local_580);
  UE::MovieScene::FEntitySystemScheduler::FEntitySystemScheduler(&local_740,&local_580);
  local_580.ComponentRegistry = (FComponentRegistry *)local_2d0;
  local_868.Allocation = (FEntityAllocation *)0x0;
  local_868.ComponentStartOffset = local_868.ComponentStartOffset & 0xffffff00;
  UE::MovieScene::FComponentRegistry::NewComponentType<int>
            ((FComponentRegistry *)local_2d0,(wchar_t *)local_87c,
             (FNewComponentTypeParams *)L"Integer");
  local_868.Allocation = (FEntityAllocation *)0x0;
  local_868.ComponentStartOffset = local_868.ComponentStartOffset & 0xffffff00;
  UE::MovieScene::FComponentRegistry::NewComponentType<float>
            ((FComponentRegistry *)local_2d0,(wchar_t *)(local_878 + 8),
             (FNewComponentTypeParams *)L"Float");
  local_868.Allocation = (FEntityAllocation *)0x0;
  local_868.ComponentStartOffset = local_868.ComponentStartOffset & 0xffffff00;
  UE::MovieScene::FComponentRegistry::NewComponentType<double>
            ((FComponentRegistry *)local_2d0,(wchar_t *)(local_878 + 0xc),
             (FNewComponentTypeParams *)L"Double");
  local_868.Allocation = (FEntityAllocation *)0x0;
  local_868.ComponentStartOffset = local_868.ComponentStartOffset & 0xffffff00;
  UE::MovieScene::FComponentRegistry::NewComponentType<FString>
            ((FComponentRegistry *)local_2d0,(wchar_t *)(local_878 + 4),
             (FNewComponentTypeParams *)L"String");
  FVar1.Value = local_87c[0].Value;
  local_800.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_800.Pairs.ArrayNum = 0;
  local_800.Pairs.ArrayMax = 0;
  local_790.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_790.Pairs.ArrayNum = 0;
  local_790.Pairs.ArrayMax = 0;
  local_7a0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7a0.Pairs.ArrayNum = 0;
  local_7a0.Pairs.ArrayMax = 0;
  local_878._0_4_ = 0;
  do {
    local_7dc._0_2_ = local_878._8_2_;
    local_7dc._4_4_ = (undefined4)(int)local_878._0_4_;
    local_7d0 = (double)CONCAT62(local_7d0._2_6_,local_878._4_2_);
    local_7f0._0_8_ =
         &
         ___7__TEntityBuilder_U__TAdd_H_MovieScene_UE__U__TAdd_M_23_U__TAdd_VFString___23__MovieScene_UE__6B_
    ;
    local_7f0._8_2_ = FVar1.Value;
    local_7f0[0x10] = 1;
    local_7f0._12_4_ = 0;
    local_7d4 = 1;
    local_7c8 = (void *)0x0;
    local_7c0 = 0;
    local_7b8 = (void *)((ulonglong)local_7b8 & 0xffffffffffffff00);
    local_810 = (undefined1 *)0x18000000000;
    local_880[0] = false;
    UE::MovieScene::
    TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
    ::GenerateType((TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<float>,UE::MovieScene::TAdd<FString>_>
                    *)local_7f0,&local_580,(FComponentMask *)local_840,local_880);
    local_780.Initializers.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
    local_780.Initializers.ArrayNum = 0;
    local_780.Initializers.ArrayMax = 2;
    UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
              (&local_808,&local_580);
    EVar5 = Mandatory;
    if (local_880[0] != false) {
      EVar5 = All;
    }
    UE::MovieScene::FEntityFactories::ComputeMutuallyInclusiveComponents
              (&(local_580.ComponentRegistry)->Factories,EVar5,(FComponentMask *)local_840,
               &local_780);
    UE::MovieScene::FEntityManager::AllocateEntity
              (&local_580,(FEntityInfo *)local_858,(FComponentMask *)local_840);
    (**(code **)(local_7f0._0_8_ + 0x18))(local_7f0,&local_580,local_858);
    local_868.Allocation = (FEntityAllocation *)local_858._0_8_;
    local_868.ComponentStartOffset = local_858._8_4_;
    local_868.Num = 1;
    UE::MovieScene::FMutualComponentInitializers::Execute(&local_780,&local_868,&local_808);
    local_87c[0].Value = local_848._0_2_;
    if (local_780.Initializers.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
      FMemory::Free((void *)local_780.Initializers.AllocatorInstance.SecondaryData);
    }
    if ((local_7c0._4_4_ != -1) && (local_7c8 != (void *)0x0)) {
      FMemory::Free(local_7c8);
    }
    TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
    ::Emplace<UE::MovieScene::FMovieSceneEntityID_const_&,int_const_&>
              (&local_800,local_87c,(int *)local_878);
    TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
    ::Emplace<UE::MovieScene::FMovieSceneEntityID_const_&,int_const_&>
              (&local_790,local_87c,(int *)local_878);
    local_878._0_4_ = local_878._0_4_ + 1;
  } while ((int)local_878._0_4_ < 0x100);
  local_878._0_4_ = 0;
  do {
    local_7dc._4_2_ = local_878._12_2_;
    local_7d0 = (double)(int)local_878._0_4_;
    local_7c0._0_2_ = local_878._4_2_;
    local_7f0._8_2_ = FVar1.Value;
    local_7f0[0x10] = 1;
    local_7f0._12_4_ = 0;
    local_7c8 = (void *)CONCAT71(local_7c8._1_7_,1);
    local_7b8 = (void *)0x0;
    local_7b0 = 0;
    local_7a8 = false;
    local_7f0._0_8_ =
         &
         ___7__TEntityBuilder_U__TAdd_H_MovieScene_UE__U__TAdd_N_23_U__TAdd_VFString___23__MovieScene_UE__6B_
    ;
    local_810 = (undefined1 *)0x18000000000;
    local_880[0] = false;
    UE::MovieScene::
    TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
    ::GenerateType((TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<int>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<FString>_>
                    *)local_7f0,&local_580,(FComponentMask *)local_840,local_880);
    local_780.Initializers.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
    local_780.Initializers.ArrayNum = 0;
    local_780.Initializers.ArrayMax = 2;
    UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
              (&local_808,&local_580);
    EVar5 = Mandatory;
    if (local_880[0] != false) {
      EVar5 = All;
    }
    UE::MovieScene::FEntityFactories::ComputeMutuallyInclusiveComponents
              (&(local_580.ComponentRegistry)->Factories,EVar5,(FComponentMask *)local_840,
               &local_780);
    UE::MovieScene::FEntityManager::AllocateEntity
              (&local_580,(FEntityInfo *)local_858,(FComponentMask *)local_840);
    (**(code **)(local_7f0._0_8_ + 0x18))(local_7f0,&local_580,local_858);
    local_868.Allocation = (FEntityAllocation *)local_858._0_8_;
    local_868.ComponentStartOffset = local_858._8_4_;
    local_868.Num = 1;
    UE::MovieScene::FMutualComponentInitializers::Execute(&local_780,&local_868,&local_808);
    local_87c[0].Value = local_848._0_2_;
    if (local_780.Initializers.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
      FMemory::Free((void *)local_780.Initializers.AllocatorInstance.SecondaryData);
    }
    if ((local_7b0._4_4_ != -1) && (local_7b8 != (void *)0x0)) {
      FMemory::Free(local_7b8);
    }
    TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
    ::Emplace<UE::MovieScene::FMovieSceneEntityID_const_&,int_const_&>
              (&local_800,local_87c,(int *)local_878);
    TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
    ::Emplace<UE::MovieScene::FMovieSceneEntityID_const_&,int_const_&>
              (&local_7a0,local_87c,(int *)local_878);
    local_878._0_4_ = local_878._0_4_ + 1;
  } while ((int)local_878._0_4_ < 0x100);
  UE::MovieScene::FEntitySystemScheduler::BeginConstruction(&local_740);
  UE::MovieScene::FEntitySystemScheduler::BeginSystem(&local_740,0);
  iVar4 = local_780.Initializers.ArrayNum;
  FVar2.Value = local_87c[0].Value;
  uVar3 = (undefined1)local_780.Initializers.ArrayNum;
  local_808.SystemSerial = (ulong64)&local_800;
  local_780.Initializers.ArrayNum = local_780.Initializers.ArrayNum & 0xffffffe0;
  uStack_760 = 0x6ff;
  TStack_75c.Pad = TStack_75c.Pad & 0xffffff00;
  local_828 = (ForElementType<unsigned_int>)
              (CONCAT44(local_780.Initializers.ArrayMax,iVar4) & 0xffffffffffffffe0);
  puStack_820._4_1_ = TStack_75c.Pad[0];
  puStack_820._5_1_ = TStack_75c.Pad[1];
  puStack_820._6_1_ = TStack_75c.Pad[2];
  puStack_820._7_1_ = TStack_75c.Pad[3];
  puStack_820._0_1_ = 0xff;
  puStack_820._1_1_ = '\x06';
  puStack_820._2_1_ = '\0';
  puStack_820._3_1_ = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[8] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[9] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[10] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xb] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xc] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xd] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xe] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xf] = '\0';
  local_780.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)&TStatId::TStatId_NAME_None;
  local_87c[0].Value._0_1_ = (undefined1)FVar1.Value;
  local_87c[0].Value._1_1_ = SUB21(FVar1.Value,1);
  auStack_83e[0] = (undefined1)local_87c[0].Value;
  auStack_83e[1] = local_87c[0].Value._1_1_;
  local_848._1_7_ = local_828._1_7_;
  local_848 = CONCAT71(local_848._1_7_,uVar3) & 0xffffffffffffffe0;
  local_858._8_8_ = &TStatId::TStatId_NAME_None;
  local_858._0_8_ = L"struct FMovieSceneCustomSchedulerTest::RunTest::FIntTask";
  local_868.Allocation =
       (FEntityAllocation *)
       UE::MovieScene::
       TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FIntTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<int>_>
       ::ScheduledRun_PerEntity;
  local_838 = (FEntityManager *)0x0;
  pTStack_830 = &TStatId::TStatId_NAME_None;
  local_868.ComponentStartOffset._0_1_ = 3;
  local_87c[0].Value = FVar2.Value;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<int>_>::
  ScheduleImpl<_FMovieSceneCustomSchedulerTest::RunTest_::__l2::FIntTask,TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>_*>
            ((TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<int>_>
              *)local_840,(FEntityManager *)local_878,(IEntitySystemScheduler *)&local_580,
             (FTaskParams *)&local_740,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_858,
             (TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>
              **)&local_868);
  UE::MovieScene::FEntitySystemScheduler::PropagatePrerequisite(&local_740,1);
  UE::MovieScene::FEntitySystemScheduler::PropagatePrerequisite(&local_740,2);
  UE::MovieScene::FEntitySystemScheduler::EndSystem(&local_740,0);
  UE::MovieScene::FEntitySystemScheduler::BeginSystem(&local_740,1);
  iVar4 = local_780.Initializers.ArrayNum;
  uVar3 = (undefined1)local_780.Initializers.ArrayNum;
  auStack_83e._0_2_ = local_878._8_2_;
  local_780.Initializers.AllocatorInstance.InlineData[8] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[9] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[10] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xb] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xc] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xd] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xe] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xf] = '\0';
  local_780.Initializers.ArrayNum = local_780.Initializers.ArrayNum & 0xffffffe0;
  local_780.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)&TStatId::TStatId_NAME_None;
  uStack_760 = 0x6ff;
  TStack_75c.Pad = TStack_75c.Pad & 0xffffff00;
  local_828 = (ForElementType<unsigned_int>)
              (CONCAT44(local_780.Initializers.ArrayMax,iVar4) & 0xffffffffffffffe0);
  puStack_820._4_1_ = TStack_75c.Pad[0];
  puStack_820._5_1_ = TStack_75c.Pad[1];
  puStack_820._6_1_ = TStack_75c.Pad[2];
  puStack_820._7_1_ = TStack_75c.Pad[3];
  puStack_820._0_1_ = 0xff;
  puStack_820._1_1_ = '\x06';
  puStack_820._2_1_ = '\0';
  puStack_820._3_1_ = '\0';
  local_840 = (undefined1  [2])FVar1.Value;
  local_858._8_8_ = &TStatId::TStatId_NAME_None;
  local_858._0_8_ = L"struct FMovieSceneCustomSchedulerTest::RunTest::FFloatTask";
  local_868.Allocation =
       (FEntityAllocation *)
       UE::MovieScene::
       TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatTask,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<float>_>
       ::ScheduledRun_PerEntity;
  local_848._1_7_ = local_828._1_7_;
  local_848 = CONCAT71(local_848._1_7_,uVar3) & 0xffffffffffffffe0;
  local_838 = (FEntityManager *)0x0;
  pTStack_830 = &TStatId::TStatId_NAME_None;
  local_868.ComponentStartOffset._0_1_ = 3;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<float>_>::
  ScheduleImpl<_FMovieSceneCustomSchedulerTest::RunTest_::__l2::FFloatTask>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<float>_>
              *)local_840,(FEntityManager *)local_878,(IEntitySystemScheduler *)&local_580,
             (FTaskParams *)&local_740,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_858);
  UE::MovieScene::FEntitySystemScheduler::PropagatePrerequisite(&local_740,3);
  UE::MovieScene::FEntitySystemScheduler::EndSystem(&local_740,1);
  UE::MovieScene::FEntitySystemScheduler::BeginSystem(&local_740,2);
  iVar4 = local_780.Initializers.ArrayNum;
  uVar3 = (undefined1)local_780.Initializers.ArrayNum;
  local_780.Initializers.AllocatorInstance.InlineData[8] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[9] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[10] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xb] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xc] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xd] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xe] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xf] = '\0';
  local_780.Initializers.ArrayNum = local_780.Initializers.ArrayNum & 0xffffffe0;
  local_780.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)&TStatId::TStatId_NAME_None;
  uStack_760 = 0x6ff;
  TStack_75c.Pad = TStack_75c.Pad & 0xffffff00;
  local_828 = (ForElementType<unsigned_int>)
              (CONCAT44(local_780.Initializers.ArrayMax,iVar4) & 0xffffffffffffffe0);
  puStack_820._4_1_ = TStack_75c.Pad[0];
  puStack_820._5_1_ = TStack_75c.Pad[1];
  puStack_820._6_1_ = TStack_75c.Pad[2];
  puStack_820._7_1_ = TStack_75c.Pad[3];
  puStack_820._0_1_ = 0xff;
  puStack_820._1_1_ = '\x06';
  puStack_820._2_1_ = '\0';
  puStack_820._3_1_ = '\0';
  local_858._8_8_ = &TStatId::TStatId_NAME_None;
  local_858._0_8_ = L"struct FMovieSceneCustomSchedulerTest::RunTest::FDoubleTask";
  local_868.Allocation =
       (FEntityAllocation *)
       UE::MovieScene::
       TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleTask,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<double>_>
       ::ScheduledRun_PerEntity;
  local_848._1_7_ = local_828._1_7_;
  local_848 = CONCAT71(local_848._1_7_,uVar3) & 0xffffffffffffffe0;
  local_838 = (FEntityManager *)0x0;
  pTStack_830 = &TStatId::TStatId_NAME_None;
  local_868.ComponentStartOffset._0_1_ = 3;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<double>_>::
  ScheduleImpl<_FMovieSceneCustomSchedulerTest::RunTest_::__l2::FDoubleTask>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<double>_>
              *)local_840,(FEntityManager *)local_878,(IEntitySystemScheduler *)&local_580,
             (FTaskParams *)&local_740,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_858);
  UE::MovieScene::FEntitySystemScheduler::PropagatePrerequisite(&local_740,4);
  UE::MovieScene::FEntitySystemScheduler::EndSystem(&local_740,2);
  UE::MovieScene::FEntitySystemScheduler::BeginSystem(&local_740,3);
  iVar4 = local_780.Initializers.ArrayNum;
  uVar3 = (undefined1)local_780.Initializers.ArrayNum;
  local_780.Initializers.ArrayNum = local_780.Initializers.ArrayNum & 0xffffffe0;
  local_780.Initializers.AllocatorInstance.InlineData[8] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[9] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[10] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xb] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xc] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xd] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xe] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xf] = '\0';
  local_780.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)&TStatId::TStatId_NAME_None;
  uStack_760 = 0x6ff;
  TStack_75c.Pad = TStack_75c.Pad & 0xffffff00;
  local_828 = (ForElementType<unsigned_int>)
              (CONCAT44(local_780.Initializers.ArrayMax,iVar4) & 0xffffffffffffffe0);
  puStack_820._4_1_ = TStack_75c.Pad[0];
  puStack_820._5_1_ = TStack_75c.Pad[1];
  puStack_820._6_1_ = TStack_75c.Pad[2];
  puStack_820._7_1_ = TStack_75c.Pad[3];
  puStack_820._0_1_ = 0xff;
  puStack_820._1_1_ = '\x06';
  puStack_820._2_1_ = '\0';
  puStack_820._3_1_ = '\0';
  local_868.ComponentStartOffset._0_1_ = 3;
  local_858._8_8_ = &TStatId::TStatId_NAME_None;
  local_858._0_8_ = L"struct FMovieSceneCustomSchedulerTest::RunTest::FFloatStringTask";
  local_868.Allocation =
       (FEntityAllocation *)
       UE::MovieScene::
       TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatStringTask,UE::MovieScene::TReadAccess<float>,UE::MovieScene::TWriteAccess<FString>_>
       ::ScheduledRun_PerEntity;
  local_848._1_7_ = local_828._1_7_;
  local_848 = CONCAT71(local_848._1_7_,uVar3) & 0xffffffffffffffe0;
  local_838 = (FEntityManager *)0x0;
  pTStack_830 = &TStatId::TStatId_NAME_None;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<float>,UE::MovieScene::TWriteAccess<FString>_>::
  ScheduleImpl<_FMovieSceneCustomSchedulerTest::RunTest_::__l2::FFloatStringTask>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<float>,UE::MovieScene::TWriteAccess<FString>_>
              *)local_840,(FEntityManager *)local_878,(IEntitySystemScheduler *)&local_580,
             (FTaskParams *)&local_740,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_858);
  UE::MovieScene::FEntitySystemScheduler::EndSystem(&local_740,3);
  UE::MovieScene::FEntitySystemScheduler::BeginSystem(&local_740,4);
  iVar4 = local_780.Initializers.ArrayNum;
  uVar3 = (undefined1)local_780.Initializers.ArrayNum;
  auStack_83e._0_2_ = local_878._4_2_;
  local_840 = (undefined1  [2])local_878._12_2_;
  local_780.Initializers.ArrayNum = local_780.Initializers.ArrayNum & 0xffffffe0;
  local_780.Initializers.AllocatorInstance.InlineData[8] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[9] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[10] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xb] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xc] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xd] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xe] = '\0';
  local_780.Initializers.AllocatorInstance.InlineData[0xf] = '\0';
  local_780.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)&TStatId::TStatId_NAME_None;
  uStack_760 = 0x6ff;
  TStack_75c.Pad = TStack_75c.Pad & 0xffffff00;
  local_828 = (ForElementType<unsigned_int>)
              (CONCAT44(local_780.Initializers.ArrayMax,iVar4) & 0xffffffffffffffe0);
  puStack_820._4_1_ = TStack_75c.Pad[0];
  puStack_820._5_1_ = TStack_75c.Pad[1];
  puStack_820._6_1_ = TStack_75c.Pad[2];
  puStack_820._7_1_ = TStack_75c.Pad[3];
  puStack_820._0_1_ = 0xff;
  puStack_820._1_1_ = '\x06';
  puStack_820._2_1_ = '\0';
  puStack_820._3_1_ = '\0';
  local_868.ComponentStartOffset = CONCAT31(local_868.ComponentStartOffset._1_3_,3);
  local_858._8_8_ = &TStatId::TStatId_NAME_None;
  local_858._0_8_ = L"struct FMovieSceneCustomSchedulerTest::RunTest::FDoubleStringTask";
  local_868.Allocation =
       (FEntityAllocation *)
       UE::MovieScene::
       TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleStringTask,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TWriteAccess<FString>_>
       ::ScheduledRun_PerEntity;
  local_848._1_7_ = local_828._1_7_;
  local_848 = CONCAT71(local_848._1_7_,uVar3) & 0xffffffffffffffe0;
  local_838 = (FEntityManager *)0x0;
  pTStack_830 = &TStatId::TStatId_NAME_None;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TWriteAccess<FString>_>
  ::ScheduleImpl<_FMovieSceneCustomSchedulerTest::RunTest_::__l2::FDoubleStringTask>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TWriteAccess<FString>_>
              *)local_840,(FEntityManager *)local_878,(IEntitySystemScheduler *)&local_580,
             (FTaskParams *)&local_740,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_858);
  UE::MovieScene::FEntitySystemScheduler::EndSystem(&local_740,4);
  UE::MovieScene::FEntitySystemScheduler::EndConstruction(&local_740);
  _local_840 = &local_790;
  local_838 = &local_580;
  Factor = 1.0;
  pTStack_830 = (TStatIdData *)(local_878 + 8);
  puStack_820 = local_878 + 4;
  local_818 = &local_7a0;
  local_810 = local_878 + 0xc;
  local_828 = (ForElementType<unsigned_int>)this;
  UE::MovieScene::FEntitySystemScheduler::ShuffleTasks(&local_740);
  UE::MovieScene::FEntitySystemScheduler::ExecuteTasks(&local_740);
  `FMovieSceneCustomSchedulerTest::RunTest'::__l2::<lambda_1>::operator()(local_840);
  Factor = 10.0;
  UE::MovieScene::FEntitySystemScheduler::ShuffleTasks(&local_740);
  UE::MovieScene::FEntitySystemScheduler::ExecuteTasks(&local_740);
  `FMovieSceneCustomSchedulerTest::RunTest'::__l2::<lambda_1>::operator()(local_840);
  Factor = 20.0;
  UE::MovieScene::FEntitySystemScheduler::ShuffleTasks(&local_740);
  UE::MovieScene::FEntitySystemScheduler::ExecuteTasks(&local_740);
  `FMovieSceneCustomSchedulerTest::RunTest'::__l2::<lambda_1>::operator()(local_840);
  if (local_7a0.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a0.Pairs.AllocatorInstance.Data);
  }
  if (local_790.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_790.Pairs.AllocatorInstance.Data);
  }
  if (local_800.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_800.Pairs.AllocatorInstance.Data);
  }
  UE::MovieScene::FEntitySystemScheduler::~FEntitySystemScheduler(&local_740);
  UE::MovieScene::FEntityManager::~FEntityManager(&local_580);
  TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UScriptStruct_*,FDefaultSparseArrayAllocator>(local_180);
  TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FComponentTypeInfo,FDefaultSparseArrayAllocator>(&local_1b8);
  UE::MovieScene::FMutualInclusivityGraph::~FMutualInclusivityGraph(&local_270);
  local_278 = 0;
  if (local_280 != (void *)0x0) {
    FMemory::Free(local_280);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_2d0 + 0x10));
  DestructItems<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,int>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_2d0._0_8_,
             local_2d0._8_4_);
  if ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_2d0._0_8_ !=
      (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)0x0) {
    FMemory::Free((void *)local_2d0._0_8_);
  }
  return true;
}

// GetBeautifiedTestName @ 146264b00

FString * __thiscall
FMovieSceneCustomSchedulerTest::GetBeautifiedTestName
          (FMovieSceneCustomSchedulerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Sequencer.EntitySystem.Scheduler");
  return __return_storage_ptr__;
}

// operator() @ 14629e540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FMovieSceneCustomSchedulerTest::RunTest'::__l2::<lambda_1>::operator()(void *this)

{
  float fVar1;
  double dVar2;
  longlong *plVar3;
  undefined8 uVar4;
  FAutomationTestBase *pFVar5;
  void *pvVar6;
  code *pcVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  bool bVar13;
  FMovieSceneEntityID FVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  undefined8 *puVar17;
  ForAnyElementType FVar18;
  double dVar19;
  float fVar20;
  undefined1 auStackY_378 [32];
  undefined1 local_338;
  undefined1 local_337 [7];
  ForAnyElementType local_330;
  int local_328;
  int local_324;
  ForAnyElementType local_320;
  int local_318;
  int local_314;
  undefined8 *local_310;
  FString local_308;
  FString local_2f8;
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [24];
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [256];
  ulonglong local_68 [8];
  
  fVar9 = __real_38d1b717;
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_378;
  plVar3 = *(longlong **)this;
  local_288.Base = local_268;
  local_288.CurPos = local_268;
  local_288.End = (wchar_t *)local_68;
  local_288.bIsDynamic = false;
  local_288.bIsExternal = false;
  puVar17 = (undefined8 *)*plVar3;
  lVar8 = plVar3[1];
  local_310 = puVar17 + (int)lVar8;
  while( true ) {
    puVar11 = local_310;
    if ((int)plVar3[1] != (int)lVar8) {
      local_338 = 0;
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FMovieSceneEntityID,int>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_338);
    }
    dVar10 = __real_3f1a36e2e0000000;
    if (puVar17 == puVar11) break;
    uVar4 = *puVar17;
    FVar14.Value = (ushort)uVar4;
    local_288.CurPos = local_288.Base;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_288,L"Test Factor %i, entity ID %i");
    fVar20 = (float)(int)((ulonglong)uVar4 >> 0x20) * Factor;
    UE::MovieScene::FEntityManager::ReadComponent<float>
              (*(FEntityManager **)((longlong)this + 8),
               (TComponentLock<UE::MovieScene::TReadOptional<float>_> *)local_2e8,FVar14,
               **(TComponentTypeID<float> **)((longlong)this + 0x10));
    uVar4 = local_2e8._16_8_;
    if ((float *)local_2e8._16_8_ == (float *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Value",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                          ,0x1d4,L"");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    fVar1 = *(float *)uVar4;
    if (local_2e8._0_8_ != 0) {
      LOCK();
      *(int *)(local_2e8._0_8_ + 0x30) = *(int *)(local_2e8._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_2e8._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_2e8._0_8_ + 0x20));
      }
    }
    pFVar5 = *(FAutomationTestBase **)((longlong)this + 0x18);
    if (local_288.End < local_288.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_288,1);
    }
    *local_288.CurPos = L'\0';
    FAutomationTestBase::TestEqual(pFVar5,local_288.Base,fVar1,fVar20,fVar9);
    UE::MovieScene::FEntityManager::ReadComponent<FString>
              (*(FEntityManager **)((longlong)this + 8),
               (TComponentLock<UE::MovieScene::TReadOptional<FString>_> *)local_2d0,FVar14,
               **(TComponentTypeID<FString> **)((longlong)this + 0x20));
    uVar4 = local_2d0._16_8_;
    if ((undefined8 *)local_2d0._16_8_ == (undefined8 *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Value",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                          ,0x1d4,L"");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_330.Data = (FScriptContainerElement *)0x0;
    local_328 = *(int *)(uVar4 + 8);
    lVar15 = (longlong)local_328;
    pvVar6 = *(void **)uVar4;
    if (local_328 == 0) {
      local_324 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_328,0,&local_330,local_328,&local_324);
      memcpy(local_330.Data,pvVar6,lVar15 * 2);
    }
    if (local_2d0._0_8_ != 0) {
      LOCK();
      *(int *)(local_2d0._0_8_ + 0x30) = *(int *)(local_2d0._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_2d0._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_2d0._0_8_ + 0x20));
      }
    }
    pFVar5 = *(FAutomationTestBase **)((longlong)this + 0x18);
    ::FString::PrintfImpl(&local_308,L"%f");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_308.Data.ArrayNum != 0) {
      FVar16.Data = local_308.Data.AllocatorInstance.Data;
    }
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_328 != 0) {
      FVar18.Data = local_330.Data;
    }
    if (local_288.End < local_288.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_288,1);
    }
    *local_288.CurPos = L'\0';
    FAutomationTestBase::TestEqual
              (pFVar5,local_288.Base,(wchar_t *)FVar18.Data,(wchar_t *)FVar16.Data);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    if (local_330.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data);
    }
    puVar17 = puVar17 + 1;
  }
  plVar3 = *(longlong **)((longlong)this + 0x28);
  puVar17 = (undefined8 *)*plVar3;
  lVar8 = plVar3[1];
  local_310 = puVar17 + (int)lVar8;
  while( true ) {
    puVar11 = local_310;
    if ((int)plVar3[1] != (int)lVar8) {
      local_337[0] = 0;
      `TCheckedPointerIterator<TTuple<UE::MovieScene::FMovieSceneEntityID,int>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_337);
    }
    if (puVar17 == puVar11) break;
    uVar4 = *puVar17;
    FVar14.Value = (ushort)uVar4;
    local_288.CurPos = local_288.Base;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_288,L"Test Factor %i, entity ID %i");
    dVar19 = (double)Factor;
    UE::MovieScene::FEntityManager::ReadComponent<double>
              (*(FEntityManager **)((longlong)this + 8),
               (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)local_2b8,FVar14,
               **(TComponentTypeID<double> **)((longlong)this + 0x30));
    uVar12 = local_2b8._16_8_;
    if ((double *)local_2b8._16_8_ == (double *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Value",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                          ,0x1d4,L"");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    dVar2 = *(double *)uVar12;
    if (local_2b8._0_8_ != 0) {
      LOCK();
      *(int *)(local_2b8._0_8_ + 0x30) = *(int *)(local_2b8._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_2b8._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_2b8._0_8_ + 0x20));
      }
    }
    pFVar5 = *(FAutomationTestBase **)((longlong)this + 0x18);
    if (local_288.End < local_288.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_288,1);
    }
    *local_288.CurPos = L'\0';
    FAutomationTestBase::TestEqual
              (pFVar5,local_288.Base,dVar2,(double)(int)((ulonglong)uVar4 >> 0x20) * dVar19,dVar10);
    UE::MovieScene::FEntityManager::ReadComponent<FString>
              (*(FEntityManager **)((longlong)this + 8),
               (TComponentLock<UE::MovieScene::TReadOptional<FString>_> *)local_2a0,FVar14,
               **(TComponentTypeID<FString> **)((longlong)this + 0x20));
    uVar4 = local_2a0._16_8_;
    if ((undefined8 *)local_2a0._16_8_ == (undefined8 *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Value",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                          ,0x1d4,L"");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_320.Data = (FScriptContainerElement *)0x0;
    local_318 = *(int *)(uVar4 + 8);
    lVar15 = (longlong)local_318;
    pvVar6 = *(void **)uVar4;
    if (local_318 == 0) {
      local_314 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_318,0,&local_320,local_318,&local_314);
      memcpy(local_320.Data,pvVar6,lVar15 * 2);
    }
    if (local_2a0._0_8_ != 0) {
      LOCK();
      *(int *)(local_2a0._0_8_ + 0x30) = *(int *)(local_2a0._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_2a0._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_2a0._0_8_ + 0x20));
      }
    }
    pFVar5 = *(FAutomationTestBase **)((longlong)this + 0x18);
    ::FString::PrintfImpl(&local_2f8,L"%f");
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_2f8.Data.ArrayNum != 0) {
      FVar16.Data = local_2f8.Data.AllocatorInstance.Data;
    }
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_318 != 0) {
      FVar18.Data = local_320.Data;
    }
    if (local_288.End < local_288.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_288,1);
    }
    *local_288.CurPos = L'\0';
    FAutomationTestBase::TestEqual
              (pFVar5,local_288.Base,(wchar_t *)FVar18.Data,(wchar_t *)FVar16.Data);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (local_320.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_320.Data);
    }
    puVar17 = puVar17 + 1;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
  return;
}

