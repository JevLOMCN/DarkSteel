// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// Run @ 1460f2540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FBoundObjectTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*_(__cdecl*)(UObject_*)>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FBoundObjectTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*_(__cdecl*)(UObject_*)>_>
      *this,FBoundObjectTask *param_1)

{
  FScriptContainerElement *pFVar1;
  FComponentTypeID FVar2;
  undefined4 uVar3;
  EEntityThreadingModel EVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  FBuiltInComponentTypes *pFVar7;
  FEntityManager *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FEntityComponentFilter *local_res8;
  undefined4 local_res10;
  FEntityAllocationProxy local_88;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationIterator local_58;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar8 = this->EntityManager;
    local_88.Manager = (FEntityManager *)0x0;
    local_88.AllocationIndex = 0;
    local_88._12_4_ = 0;
    ::FString::AppendChars((FString *)&local_88,L"\n\tRead: Entity IDs",0x12);
    FComponentRegistry::GetComponentTypeChecked
              (pFVar8->ComponentRegistry,
               (FComponentTypeID)*(ushort *)&(this->ComponentFilter).Components.field_0x2);
    ::FString::PrintfImpl((FString *)&local_78,L"\n\tRead: %s %s");
    iVar10 = (int)local_78.Filter + -1;
    if ((int)local_78.Filter == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars((FString *)&local_88,(wchar_t *)local_78.Manager,iVar10);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
    FComponentRegistry::GetComponentTypeChecked
              (pFVar8->ComponentRegistry,
               (FComponentTypeID)*(ushort *)&(this->ComponentFilter).Components.field_0x4);
    ::FString::PrintfImpl((FString *)&local_78,L"\n\tRead: %s %s");
    iVar10 = (int)local_78.Filter + -1;
    if ((int)local_78.Filter == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars((FString *)&local_88,(wchar_t *)local_78.Manager,iVar10);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
    FVar2.Value = *(ushort *)&(this->ComponentFilter).Components.field_0x6;
    if (FVar2.Value != 0xffff) {
      FComponentRegistry::GetComponentTypeChecked(pFVar8->ComponentRegistry,FVar2);
      ::FString::PrintfImpl((FString *)&local_78,L"\n\tRead (Optional): %s %s");
      iVar10 = (int)local_78.Filter + -1;
      if ((int)local_78.Filter == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars((FString *)&local_88,(wchar_t *)local_78.Manager,iVar10);
      if (local_78.Manager != (FEntityManager *)0x0) {
        FMemory::Free(local_78.Manager);
      }
    }
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FBoundObjectTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<class_UObject*___ptr64_(__cdecl*)(UObject*___ptr64)>_>::Run(UE::MovieScene::FBoundObjectTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_88.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_88.Manager);
    }
  }
  EVar4 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
  pFVar8 = local_78.Manager;
  local_res8 = local_78.Filter;
  local_58.Filter = local_78.Filter;
  local_58.Manager = local_78.Manager;
  FEntityManager::EnterIteration(local_78.Manager);
  iVar5 = FEntityAllocationIterator::FindMatchingAllocationStartingAt(&local_58,0);
  iVar10 = *(int *)&((local_78.Manager)->EntityAllocationMasks).field_0x8;
  for (; local_58.AllocationIndex = iVar5, iVar5 != iVar10;
      iVar5 = FEntityAllocationIterator::FindMatchingAllocationStartingAt(&local_58,iVar5 + 1)) {
    local_88.Manager = pFVar8;
    local_88.AllocationIndex = iVar5;
    pFVar6 = FEntityAllocationProxy::GetAllocation(&local_88);
    if (EVar4 == NoThreading) {
      pFVar6->LockMode = LockFree;
    }
    else {
      pFVar6 = (FEntityAllocation *)0x0;
    }
    local_68.Manager = local_88.Manager;
    local_68.AllocationIndex = local_88.AllocationIndex;
    local_68._12_4_ = local_88._12_4_;
    TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
    ForEachAllocationImpl<UE::MovieScene::FBoundObjectTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*_(__cdecl*)(UObject_*)>_>
              (param_1,&local_68,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
               (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*_(__cdecl*)(UObject_*)>_>
                *)this);
    if (pFVar6 != (FEntityAllocation *)0x0) {
      pFVar6->LockMode = Mutex;
    }
  }
  if (local_res8 != (FEntityComponentFilter *)0x0) {
    FEntityManager::ExitIteration(pFVar8);
  }
  FBoundObjectTask::Apply(param_1);
  pFVar7 = FBuiltInComponentTypes::Get();
  pFVar9 = (param_1->EntitiesToDiscard).AllocatorInstance.Data;
  iVar10 = (param_1->EntitiesToDiscard).ArrayNum;
  FVar2.Value = (pFVar7->Tags).NeedsUnlink.Value;
  pFVar1 = pFVar9 + (longlong)iVar10 * 2;
  while( true ) {
    if ((param_1->EntitiesToDiscard).ArrayNum != iVar10) {
      `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar9 == pFVar1) break;
    FEntityManager::AddComponent
              (&param_1->Linker->EntityManager,(FMovieSceneEntityID)*(ushort *)pFVar9,FVar2,Full);
    pFVar9 = pFVar9 + 2;
  }
  iVar10 = (param_1->EntityMutations).ArrayNum;
  pFVar9 = (param_1->EntityMutations).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar10 * 6;
  while( true ) {
    if ((param_1->EntityMutations).ArrayNum != iVar10) {
      `TCheckedPointerIterator<UE::MovieScene::FBoundObjectTask::FEntityMutationData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar9 == pFVar1) break;
    uVar3 = *(undefined4 *)pFVar9;
    pFVar8 = &param_1->Linker->EntityManager;
    local_res10._2_2_ = (ushort)((uint)uVar3 >> 0x10);
    FVar2.Value = local_res10._2_2_;
    local_res10 = uVar3;
    if (pFVar9[4] == (FScriptContainerElement)0x0) {
      FEntityManager::RemoveComponent(pFVar8,(FMovieSceneEntityID)(ushort)uVar3,FVar2);
      pFVar9 = pFVar9 + 6;
    }
    else {
      FEntityManager::AddComponent(pFVar8,(FMovieSceneEntityID)(ushort)uVar3,FVar2);
      pFVar9 = pFVar9 + 6;
    }
  }
  return;
}

// TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_> @ 146117ae0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&param_2->field_0x20;
  (this->ComponentFilter).Filter.AllMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.NoneMask.Bits.NumBits = 0;
  (this->ComponentFilter).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).Filter.ComplexMasks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayNum = 0;
  (this->ComponentFilter).Filter.ComplexMasks.ArrayMax = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)this,&(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x2,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x4,
                      &(this->ComponentFilter).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->ComponentFilter).Components.field_0x6,
                      &(this->ComponentFilter).Filter);
  this->EntityManager = param_1;
  (this->WriteContext).SystemSerial = param_1->SystemSerialNumber;
  return this;
}

// Run @ 1461523e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
      *this,FEvaluationHookUpdater *param_1)

{
  FEntityComponentFilter *pFVar1;
  EEntityThreadingModel EVar2;
  FEntityManager *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  FString local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar3 = this->EntityManager;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar3,&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar3,&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x4,pFVar3,&local_78);
    AccessorToString((FWriteAccess *)&(this->ComponentFilter).Components.field_0x6,pFVar3,&local_78)
    ;
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>::Run(UE::MovieScene::FEvaluationHookUpdater&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = this->EntityManager;
  pFVar1 = &(this->ComponentFilter).Filter;
  EVar2 = pFVar3->ThreadingModel;
  if ((pFVar1 == (FEntityComponentFilter *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFilter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x405,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,pFVar3,pFVar1);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,pFVar3);
  bVar6 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar6) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      lVar4 = *(longlong *)
               (*(longlong *)&(local_68.Manager)->EntityAllocations +
               (longlong)local_68.AllocationIndex * 8);
      lVar7 = 0;
      if (EVar2 == NoThreading) {
        *(undefined4 *)(lVar4 + 0x14) = 0;
        lVar7 = lVar4;
      }
      local_58.Manager = local_68.Manager;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachAllocationImpl<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
                  *)this);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x14) = 1;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar6 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar6);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  UMovieSceneEvaluationHookSystem::SortEvents(param_1->HookSystem);
  return;
}

// Run @ 1461525b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FUpdateGroupsTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FUpdateGroupsTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>
      *this,FUpdateGroupsTask *param_1)

{
  FEntityComponentFilter *pFVar1;
  EEntityThreadingModel EVar2;
  FEntityManager *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  FString local_a8;
  FEntityAllocationProxy local_98;
  FEntityAllocationIterator local_88;
  FEntityAllocationIterator local_70;
  undefined1 local_58 [32];
  FEntityAllocationProxy local_38 [2];
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar3 = this->EntityManager;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    AccessorToString((FEntityIDAccess *)this,pFVar3,&local_a8);
    AccessorToString((FWriteAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar3,&local_a8)
    ;
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FUpdateGroupsTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<UE::MovieScene::FEntityGroupID>_>::Run(UE::MovieScene::FUpdateGroupsTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = this->EntityManager;
  pFVar1 = &(this->ComponentFilter).Filter;
  EVar2 = pFVar3->ThreadingModel;
  if ((pFVar1 == (FEntityComponentFilter *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFilter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x405,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FEntityAllocationIterator::FEntityAllocationIterator(&local_88,pFVar3,pFVar1);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_70,pFVar3);
  bVar5 = FEntityAllocationIterator::operator!=(&local_88,&local_70);
  if (bVar5) {
    do {
      FEntityAllocationIterator::operator*(&local_88,&local_98);
      pFVar3 = local_98.Manager;
      lVar6 = *(longlong *)
               (*(longlong *)&(local_98.Manager)->EntityAllocations +
               (longlong)local_98.AllocationIndex * 8);
      lVar8 = 0;
      if (EVar2 == NoThreading) {
        *(undefined4 *)(lVar6 + 0x14) = 0;
        lVar8 = lVar6;
      }
      lVar6 = (longlong)local_98.AllocationIndex;
      FEntityAllocation::WriteComponents<UE::MovieScene::FEntityGroupID>
                (*(FEntityAllocation **)
                  (*(longlong *)&(local_98.Manager)->EntityAllocations + lVar6 * 8),
                 (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEntityGroupID>_> *)local_58
                 ,*(TComponentTypeID<UE::MovieScene::FEntityGroupID> *)
                   &(this->ComponentFilter).Components.field_0x2,
                 (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
      local_38[0].Manager = pFVar3;
      FUpdateGroupsTask::ForEachAllocation
                (param_1,local_38,
                 *(TRead<UE::MovieScene::FMovieSceneEntityID> *)
                  (*(longlong *)(*(longlong *)&pFVar3->EntityAllocations + lVar6 * 8) + 0x18),
                 (TWrite<UE::MovieScene::FEntityGroupID>)local_58._24_8_);
      if (local_58._0_8_ != 0) {
        uVar7 = local_58._8_8_;
        if ((ulonglong)local_58._8_8_ < *(ulonglong *)(local_58._0_8_ + 0x28)) {
          uVar7 = *(ulonglong *)(local_58._0_8_ + 0x28);
        }
        *(ulonglong *)(local_58._0_8_ + 0x28) = uVar7;
        LOCK();
        *(int *)(local_58._0_8_ + 0x30) = *(int *)(local_58._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_58._16_4_ == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(local_58._0_8_ + 0x20));
        }
      }
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x14) = 1;
      }
      FEntityAllocationIterator::operator++(&local_88);
      bVar5 = FEntityAllocationIterator::operator!=(&local_88,&local_70);
    } while (bVar5);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_70);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_88);
  if (param_1->bFreeGroupIDs != false) {
    UMovieSceneEntityGroupingSystem::FreeEmptyGroups(param_1->System);
  }
  return;
}

