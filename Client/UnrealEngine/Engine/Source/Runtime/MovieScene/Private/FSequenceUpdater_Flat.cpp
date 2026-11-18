// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 14

// FSequenceUpdater_Flat @ 14611a270

FSequenceUpdater_Flat * __thiscall
UE::MovieScene::FSequenceUpdater_Flat::FSequenceUpdater_Flat
          (FSequenceUpdater_Flat *this,FMovieSceneCompiledDataID param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  uint local_res8;
  uint local_res18;
  
  (this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayMax = -1;
  this->_padding_ = (longlong)&___7FSequenceUpdater_Flat_MovieScene_UE__6B_;
  (this->CachedDeterminismFences).field0_0x0.TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayNum = 0;
  (this->CompiledDataID).Value = param_1.Value;
  (this->bDynamicWeighting).bIsSet = false;
  *(undefined8 *)&(this->CachedPerTickConditionalEntities).Elements = 0;
  *(undefined8 *)&(this->CachedPerTickConditionalEntities).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CachedPerTickConditionalEntities).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CachedPerTickConditionalEntities).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CachedPerTickConditionalEntities).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedPerTickConditionalEntities).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CachedPerTickConditionalEntities).Elements.field_0x30 = 0xffffffff;
  (this->CachedPerTickConditionalEntities).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CachedPerTickConditionalEntities).HashSize = 0;
  *(undefined8 *)&this->CachedConditionResults = 0;
  *(undefined8 *)&(this->CachedConditionResults).field_0x8 = 0;
  *(undefined8 *)&(this->CachedConditionResults).field_0x20 = 0;
  *(undefined4 *)&(this->CachedConditionResults).field_0x28 = 0;
  *(undefined4 *)&(this->CachedConditionResults).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedConditionResults).field_0x34 = 0;
  *(undefined4 *)&(this->CachedConditionResults).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedConditionResults).field_0x40 = 0;
  *(undefined4 *)&(this->CachedConditionResults).field_0x48 = 0;
  local_res8 = local_res8 & 0xffffff00;
  local_res18 = local_res18 & 0xffffff00;
  TVar1.Value.Value = 0;
  TVar1._0_4_ = local_res8;
  (this->CachedEntityRange).LowerBound = TVar1;
  TVar2.Value.Value = 0;
  TVar2._0_4_ = local_res18;
  (this->CachedEntityRange).UpperBound = TVar2;
  return this;
}

// ~FSequenceUpdater_Flat @ 14611e360

void __thiscall
UE::MovieScene::FSequenceUpdater_Flat::~FSequenceUpdater_Flat(FSequenceUpdater_Flat *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FSequenceUpdater_Flat_MovieScene_UE__6B_;
  *(undefined4 *)&(this->CachedConditionResults).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedConditionResults).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedConditionResults);
  (this->CachedPerTickConditionalEntities).HashSize = 0;
  FVar2 = (this->CachedPerTickConditionalEntities).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedPerTickConditionalEntities).Elements);
  if (((this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar3 = (this->CachedDeterminismFences).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar3 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7ISequenceUpdater_MovieScene_UE__6B_;
  return;
}

// CanFinishImmediately @ 146125a60

bool __thiscall
UE::MovieScene::FSequenceUpdater_Flat::CanFinishImmediately
          (FSequenceUpdater_Flat *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UObject *pUVar8;
  longlong lVar9;
  
  pUVar8 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  uVar1 = *(ushort *)&param_1->Object->RootInstanceHandle;
  if (*(longlong *)&pUVar8[0x23].field_0x8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar9 = (ulonglong)uVar1 * 0x140;
  lVar4 = *(longlong *)(*(longlong *)&pUVar8[0x23].field_0x8 + 8);
  iVar2 = *(int *)(lVar9 + 0x44 + lVar4);
  iVar3 = *(int *)(lVar9 + 0x18 + lVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return iVar3 == iVar2;
}

// Destroy @ 14612b1c0

void __thiscall
UE::MovieScene::FSequenceUpdater_Flat::Destroy
          (FSequenceUpdater_Flat *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// DissectContext @ 14612d000

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceUpdater_Flat::DissectContext
          (FSequenceUpdater_Flat *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneContext *param_2,
          TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  int iVar2;
  UMovieSceneCompiledDataManager *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMovieSceneCompiledDataEntry *pFVar6;
  TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> local_98;
  FMovieSceneDeterminismFence *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<FMovieSceneDeterminismFence_const_,int> local_78;
  TArrayView<FMovieSceneDeterminismFence_const_,int> local_68;
  TArrayView<FMovieSceneDeterminismFence_const_,int> local_58;
  TRange<FFrameTime> local_48;
  TRange<FFrameTime> local_30;
  
  if ((this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayMax == -1) {
    this_00 = (param_1->Object->CompiledDataManager).field0_0x0.DebugPtr;
    if ((GC::GIsIncrementalReachabilityPending) &&
       (this_00 != (UMovieSceneCompiledDataManager *)0x0)) {
      GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar6 = UMovieSceneCompiledDataManager::GetEntryRef
                       (this_00,(FMovieSceneCompiledDataID)(this->CompiledDataID).Value);
    uVar1 = (pFVar6->DeterminismFences).ArrayNum;
    pFVar3 = (pFVar6->DeterminismFences).AllocatorInstance.Data;
    if ((int)uVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (uVar1 == 0) {
      pFVar3 = (this->CachedDeterminismFences).field0_0x0.TypedValue.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (this->CachedDeterminismFences).field0_0x0.TypedValue.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(undefined8 *)((longlong)&(this->CachedDeterminismFences).field0_0x0 + 8) = 0;
      goto LAB_14612d151;
    }
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((pFVar3 == (FScriptContainerElement *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x2d3,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_98.ArrayNum = uVar1;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar1,0,&local_98.AllocatorInstance,uVar1,&local_98.ArrayMax);
    memcpy(local_98.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar1 << 3);
    TOptional<TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_>::operator=
              (&this->CachedDeterminismFences,&local_98);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
LAB_14612d151:
  if (((this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayMax == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayNum != 0) {
    local_48.LowerBound._0_8_ = param_2->_padding_;
    local_48._8_8_ = param_2->_padding_;
    local_48.UpperBound.Value = (FFrameTime)param_2->_padding_;
    if (((this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayMax == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_88 = (FMovieSceneDeterminismFence *)
               (this->CachedDeterminismFences).field0_0x0.TypedValue.AllocatorInstance.Data;
    iVar2 = (this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayNum;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_78._12_4_ = uStack_7c;
    local_78.ArrayNum = iVar2;
    local_78.DataPtr = local_88;
    iStack_80 = iVar2;
    GetFencesWithinRange(&local_68,&local_78,&local_48);
    local_30.LowerBound._0_8_ = param_2->_padding_;
    local_30._8_8_ = param_2->_padding_;
    local_30.UpperBound.Value = (FFrameTime)param_2->_padding_;
    local_58.DataPtr = local_68.DataPtr;
    local_58.ArrayNum = local_68.ArrayNum;
    local_58._12_4_ = local_68._12_4_;
    DissectRange(&local_58,&local_30,param_3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// EvaluateCondition @ 14612f940

bool __thiscall
UE::MovieScene::FSequenceUpdater_Flat::EvaluateCondition
          (FSequenceUpdater_Flat *this,FGuid *param_1,FMovieSceneSequenceID *param_2,
          UMovieSceneCondition *param_3,UObject *param_4,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_5)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  bool *pbVar5;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  FGuid local_18;
  
  if (param_3 == (UMovieSceneCondition *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
    bVar3 = true;
  }
  else {
    pcVar1 = *(code **)(param_3->_padding_ + 0x2c8);
    local_28.Object = param_5->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_5->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar2 = (*pcVar1)(param_3,&local_28);
    if (cVar2 != '\0') {
      pcVar1 = *(code **)(param_3->_padding_ + 0x2c0);
      local_28.Object = param_5->Object;
      local_28.SharedReferenceCount.ReferenceController =
           (param_5->SharedReferenceCount).ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.A = param_1->A;
      local_18.B = param_1->B;
      local_18.C = param_1->C;
      local_18.D = param_1->D;
      uVar4 = (*pcVar1)(param_3,&local_18,param_2->Value,&local_28,param_4);
      pbVar5 = TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
               ::Find((TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                       *)&this->CachedConditionResults,uVar4);
      if (pbVar5 != (bool *)0x0) {
        bVar3 = *pbVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_5->SharedReferenceCount).ReferenceController);
        return bVar3;
      }
    }
    local_28.Object = param_5->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_5->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.A = param_1->A;
    local_18.B = param_1->B;
    local_18.C = param_1->C;
    local_18.D = param_1->D;
    bVar3 = UMovieSceneCondition::EvaluateCondition
                      (param_3,&local_18,(FMovieSceneSequenceID)param_2->Value,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
  }
  return bVar3;
}

// FindSubInstance @ 1461320a0

FInstanceHandle __thiscall
UE::MovieScene::FSequenceUpdater_Flat::FindSubInstance
          (FSequenceUpdater_Flat *this,FMovieSceneSequenceID param_1)

{
  undefined4 in_register_00000014;
  
  *(undefined4 *)CONCAT44(in_register_00000014,param_1.Value) = 0xffff;
  return (FInstanceHandle)param_1.Value;
}

// Finish @ 146132880

void __thiscall
UE::MovieScene::FSequenceUpdater_Flat::Finish
          (FSequenceUpdater_Flat *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  code *pcVar1;
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pcVar1 = *(code **)(this->_padding_ + 0x38);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(this,&local_18,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// InvalidateCachedData @ 1461407e0

void __thiscall
UE::MovieScene::FSequenceUpdater_Flat::InvalidateCachedData
          (FSequenceUpdater_Flat *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          ESequenceInstanceInvalidationType param_2)

{
  FScriptContainerElement *pFVar1;
  TRangeBound<FFrameNumber> TVar2;
  TRangeBound<FFrameNumber> TVar3;
  uint local_res8;
  uint local_res10;
  
  local_res10 = local_res10 & 0xffffff00;
  local_res8 = local_res8 & 0xffffff00;
  TVar2.Value.Value = 0;
  TVar2._0_4_ = local_res8;
  (this->CachedEntityRange).LowerBound = TVar2;
  TVar3.Value.Value = 0;
  TVar3._0_4_ = local_res10;
  (this->CachedEntityRange).UpperBound = TVar3;
  if ((this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayMax != -1) {
    pFVar1 = (this->CachedDeterminismFences).field0_0x0.TypedValue.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->CachedDeterminismFences).field0_0x0.TypedValue.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayNum = 0;
    (this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayMax = -1;
  }
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  ::Reset(&this->CachedPerTickConditionalEntities);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&this->CachedConditionResults);
  if ((this->bDynamicWeighting).bIsSet != false) {
    (this->bDynamicWeighting).bIsSet = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// MigrateToHierarchical @ 146143ec0

TUniquePtr<UE::MovieScene::ISequenceUpdater,TDefaultDelete<UE::MovieScene::ISequenceUpdater>_>
__thiscall UE::MovieScene::FSequenceUpdater_Flat::MigrateToHierarchical(FSequenceUpdater_Flat *this)

{
  FSequenceUpdater_Hierarchical *this_00;
  ISequenceUpdater IVar1;
  ISequenceUpdater *in_RDX;
  
  this_00 = ::operator_new(0x198);
  if (this_00 != (FSequenceUpdater_Hierarchical *)0x0) {
    IVar1 = (ISequenceUpdater)
            FSequenceUpdater_Hierarchical::FSequenceUpdater_Hierarchical
                      (this_00,(FMovieSceneCompiledDataID)(this->CompiledDataID).Value);
    *in_RDX = IVar1;
    return (TUniquePtr<UE::MovieScene::ISequenceUpdater,TDefaultDelete<UE::MovieScene::ISequenceUpdater>_>
            )in_RDX;
  }
  *in_RDX = (ISequenceUpdater)0x0;
  return (TUniquePtr<UE::MovieScene::ISequenceUpdater,TDefaultDelete<UE::MovieScene::ISequenceUpdater>_>
          )in_RDX;
}

// OverrideRootSequence @ 146149010

void __thiscall
UE::MovieScene::FSequenceUpdater_Flat::OverrideRootSequence
          (FSequenceUpdater_Flat *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneSequenceID param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PopulateUpdateFlags @ 1461491a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceUpdater_Flat::PopulateUpdateFlags
          (FSequenceUpdater_Flat *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          ESequenceInstanceUpdateFlags *param_2)

{
  uint uVar1;
  UMovieSceneCompiledDataManager *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TOptional<UE::MovieScene::ETimeWarpChannelDomain> TVar6;
  FMovieSceneCompiledDataEntry *pFVar7;
  IMovieScenePlayer *pIVar8;
  FMovieSceneSequenceHierarchy *pFVar9;
  undefined6 extraout_var;
  TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> local_38;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  
  if ((this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayMax == -1) {
    pUVar2 = (param_1->Object->CompiledDataManager).field0_0x0.DebugPtr;
    if ((GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UMovieSceneCompiledDataManager *)0x0)
       ) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    pFVar7 = UMovieSceneCompiledDataManager::GetEntryRef
                       (pUVar2,(FMovieSceneCompiledDataID)(this->CompiledDataID).Value);
    uVar1 = (pFVar7->DeterminismFences).ArrayNum;
    pFVar3 = (pFVar7->DeterminismFences).AllocatorInstance.Data;
    if ((int)uVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (uVar1 == 0) {
      pFVar3 = (this->CachedDeterminismFences).field0_0x0.TypedValue.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (this->CachedDeterminismFences).field0_0x0.TypedValue.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(undefined8 *)((longlong)&(this->CachedDeterminismFences).field0_0x0 + 8) = 0;
      goto LAB_1461492e5;
    }
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((pFVar3 == (FScriptContainerElement *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x2d3,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_38.ArrayNum = uVar1;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar1,0,&local_38.AllocatorInstance,uVar1,&local_38.ArrayMax);
    memcpy(local_38.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar1 << 3);
    TOptional<TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_>::operator=
              (&this->CachedDeterminismFences,&local_38);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
LAB_1461492e5:
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar8 = FPlayerIndexPlaybackCapability::GetPlayer(&local_28);
  if (pIVar8 != (IMovieScenePlayer *)0x0) {
    (**(code **)(pIVar8->_padding_ + 0x78))(pIVar8,param_2);
  }
  if (((this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayMax != -1) &&
     (0 < (this->CachedDeterminismFences).field0_0x0.TypedValue.ArrayNum)) {
    *param_2 = *param_2 | NeedsDissection;
  }
  pUVar2 = (param_1->Object->CompiledDataManager).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMovieSceneCompiledDataManager *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  pFVar9 = UMovieSceneCompiledDataManager::FindHierarchy
                     (pUVar2,(FMovieSceneCompiledDataID)(this->CompiledDataID).Value);
  if (pFVar9 != (FMovieSceneSequenceHierarchy *)0x0) {
    TVar6 = FMovieSceneSequenceTransform::FindFirstWarpDomain(&pFVar9->RootTransform);
    if ((((char *)CONCAT62(extraout_var,TVar6))[1] == '\x01') &&
       (*(char *)CONCAT62(extraout_var,TVar6) == '\0')) {
      *param_2 = *param_2 | NeedsDissection;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Start @ 146155540

void __thiscall
UE::MovieScene::FSequenceUpdater_Flat::Start
          (FSequenceUpdater_Flat *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneContext *param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Update @ 14615c6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceUpdater_Flat::Update
          (FSequenceUpdater_Flat *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneContext *param_2)

{
  TOptional<bool> *pTVar1;
  uchar uVar2;
  int iVar3;
  UMovieSceneCompiledDataManager *this_00;
  code *pcVar4;
  TRangeBound<FFrameNumber> TVar5;
  TRangeBound<FFrameNumber> TVar6;
  ulonglong uVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  UMovieSceneEntitySystemLinker *pUVar11;
  FMovieSceneEntityComponentField *this_01;
  UObject *pUVar12;
  IMovieScenePlayer *pIVar13;
  TRange<FFrameNumber> *pTVar14;
  TRangeBound<FFrameNumber> *pTVar15;
  FEntityLedger *this_02;
  FInstanceHandle *pFVar16;
  undefined1 auStackY_198 [32];
  byte local_158;
  byte local_157 [7];
  FEntityLedger *local_150;
  FFrameNumber local_148;
  FEntityImportSequenceParams local_138;
  FEntityImportSequenceParams local_120;
  FEntityImportSequenceParams local_108;
  TRange<FFrameNumber> local_f0;
  uint local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  FInstanceHandle *local_d0;
  FMovieSceneContext *local_c8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_c0;
  TRange<FFrameNumber> local_b0;
  void *local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_c8 = param_2;
  pUVar11 = (UMovieSceneEntitySystemLinker *)
            FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  pFVar16 = (FInstanceHandle *)&param_1->Object->RootInstanceHandle;
  local_d0 = pFVar16;
  if (((pUVar11->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_150 = (FEntityLedger *)
              (*(longlong *)&((pUVar11->InstanceRegistry).Ptr)->Instances +
              (ulonglong)*(ushort *)&((FRootInstanceHandle *)pFVar16)->field_0x0 * 0x140);
  FMovieSceneContext::operator=((FMovieSceneContext *)(local_150 + 1),param_2);
  this_00 = (param_1->Object->CompiledDataManager).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMovieSceneCompiledDataManager *)0x0)) {
    GC::MarkAsReachable((UObject *)this_00);
  }
  this_01 = UMovieSceneCompiledDataManager::FindEntityComponentField
                      (this_00,(FMovieSceneCompiledDataID)(this->CompiledDataID).Value);
  pUVar12 = FWeakObjectPtr::Get(&(param_1->Object->WeakRootSequence).WeakPtr);
  if (pUVar12 == (UObject *)0x0) {
    FEntityLedger::UnlinkEverything(local_150,pUVar11,Normal);
    goto LAB_14615cb7f;
  }
  if ((this->bDynamicWeighting).bIsSet == false) {
    pTVar1 = &this->bDynamicWeighting;
    if ((TOptional<bool> *)&local_158 != pTVar1) {
      pTVar1->TypedValue = (bool)((byte)pUVar12[2].field_0x1b >> 2 & 1);
      (this->bDynamicWeighting).bIsSet = true;
    }
    local_c0.Object = param_1->Object;
    local_c0.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pIVar13 = FPlayerIndexPlaybackCapability::GetPlayer(&local_c0);
    if (pIVar13 != (IMovieScenePlayer *)0x0) {
      if ((this->bDynamicWeighting).bIsSet == false) {
        cVar9 = (**(code **)(pIVar13->_padding_ + 0xa0))(pIVar13);
        bVar8 = false;
        if (cVar9 != '\0') goto LAB_14615c817;
      }
      else {
LAB_14615c817:
        bVar8 = true;
      }
      if ((TOptional<bool> *)local_157 != pTVar1) {
        pTVar1->TypedValue = bVar8;
        (this->bDynamicWeighting).bIsSet = true;
      }
    }
  }
  local_88.MaxBits = 0x80;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  FMovieSceneEvaluationRange::GetEvaluationFieldTime((FMovieSceneEvaluationRange *)local_c8);
  this_02 = local_150;
  uVar2 = (this->CachedEntityRange).LowerBound.Type.Value;
  local_f0.LowerBound.Type.Value = '\x01';
  local_f0.LowerBound.Value.Value = local_148.Value;
  if (uVar2 == '\x02') {
LAB_14615c89a:
    uVar2 = (this->CachedEntityRange).UpperBound.Type.Value;
    pTVar15 = &(this->CachedEntityRange).UpperBound;
    local_f0.UpperBound.Type.Value = '\x01';
    local_f0.UpperBound.Value.Value = local_148.Value;
    if (uVar2 != '\x02') {
      iVar3 = (this->CachedEntityRange).UpperBound.Value.Value;
      if (iVar3 <= local_148.Value) {
        if (iVar3 < local_148.Value) {
          pTVar15 = &local_f0.UpperBound;
        }
        if (uVar2 != '\x01') goto LAB_14615c8d2;
      }
      if ((pTVar15->Value).Value != (this->CachedEntityRange).UpperBound.Value.Value)
      goto LAB_14615c8d2;
    }
    if (*(int *)&(this->CachedPerTickConditionalEntities).Elements.field_0x8 !=
        *(int *)&(this->CachedPerTickConditionalEntities).Elements.field_0x34) {
      local_120.InstanceHandle = *pFVar16;
      local_120.DefaultCompletionMode = pUVar12[2].field_0x18;
      local_120.SubSectionFlags = None;
      local_120.HierarchicalBias = 0;
      local_120.SequenceID.Value = 0;
      if ((this->bDynamicWeighting).bIsSet == false) {
        bVar10 = 0;
      }
      else {
        bVar10 = (this->bDynamicWeighting).TypedValue;
      }
      local_120.bDynamicWeighting = bVar10;
      local_120.bPostRoll = false;
      local_120.bPreRoll = false;
      local_120.RootInstanceHandle = (FRootInstanceHandle)local_120.InstanceHandle;
      FEntityLedger::UpdateConditionalEntities
                (local_150,pUVar11,&local_120,this_01,&this->CachedPerTickConditionalEntities);
    }
  }
  else {
    iVar3 = (this->CachedEntityRange).LowerBound.Value.Value;
    if (iVar3 < local_148.Value) {
LAB_14615c88e:
      pTVar14 = &this->CachedEntityRange;
LAB_14615c892:
      if ((pTVar14->LowerBound).Value.Value == (this->CachedEntityRange).LowerBound.Value.Value)
      goto LAB_14615c89a;
    }
    else if (local_148.Value < iVar3) {
      pTVar14 = &local_f0;
      if (uVar2 == '\x01') goto LAB_14615c892;
    }
    else if (uVar2 == '\x01') goto LAB_14615c88e;
LAB_14615c8d2:
    TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
    ::Reset(&this->CachedPerTickConditionalEntities);
    if (this_01 == (FMovieSceneEntityComponentField *)0x0) {
      local_e0 = CONCAT31(local_e0._1_3_,2);
      uStack_dc = 0;
      TVar5.Value.Value = 0;
      TVar5._0_4_ = local_e0;
      (this->CachedEntityRange).LowerBound = TVar5;
      uStack_d4 = 0;
      local_d8 = CONCAT31(local_d8._1_3_,2);
      TVar6.Value.Value = 0;
      TVar6._0_4_ = local_d8;
      (this->CachedEntityRange).UpperBound = TVar6;
    }
    else {
      FMovieSceneEntityComponentField::QueryPersistentEntities
                (this_01,local_148,&this->CachedEntityRange,
                 (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                  *)&local_98);
    }
    this_02 = local_150;
    local_138.SubSectionFlags = None;
    local_138.InstanceHandle = *local_d0;
    local_138.DefaultCompletionMode = pUVar12[2].field_0x18;
    local_138.HierarchicalBias = 0;
    local_138.SequenceID.Value = 0;
    if ((this->bDynamicWeighting).bIsSet == false) {
      bVar10 = 0;
    }
    else {
      bVar10 = (this->bDynamicWeighting).TypedValue;
    }
    local_138.bDynamicWeighting = bVar10;
    local_138.bPostRoll = false;
    local_138.bPreRoll = false;
    local_138.RootInstanceHandle = (FRootInstanceHandle)local_138.InstanceHandle;
    FEntityLedger::UpdateEntities
              (local_150,pUVar11,&local_138,this_01,
               (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                *)&local_98,&this->CachedPerTickConditionalEntities,&this->CachedConditionResults);
    pFVar16 = local_d0;
  }
  if ((this_01 != (FMovieSceneEntityComponentField *)0x0) &&
     (bVar8 = FMovieSceneEntityComponentField::HasAnyOneShotEntities(this_01), bVar8)) {
    if ((int)local_90 != local_64) {
      TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
      ::UnhashElements((TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                        *)&local_98);
      if ((longlong)local_90 < 0) {
        local_90 = (ulonglong)local_90._4_4_ << 0x20;
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,0,(ForAnyElementType *)&local_98,0,(int *)((longlong)&local_90 + 4));
      }
      else {
        local_90 = (ulonglong)local_90._4_4_ << 0x20;
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_88.NumBits = 0;
    }
    FMovieSceneEvaluationRange::TimeRangeToNumberRange(&local_b0,(TRange<FFrameTime> *)local_c8);
    FMovieSceneEntityComponentField::QueryOneShotEntities
              (this_01,&local_b0,
               (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                *)&local_98);
    if ((int)local_90 != local_64) {
      local_108.InstanceHandle = *pFVar16;
      local_108.DefaultCompletionMode = pUVar12[2].field_0x18;
      local_108.SubSectionFlags = None;
      local_108.HierarchicalBias = 0;
      local_108.SequenceID.Value = 0;
      if ((this->bDynamicWeighting).bIsSet == false) {
        bVar10 = 0;
      }
      else {
        bVar10 = (this->bDynamicWeighting).TypedValue;
      }
      local_108.bDynamicWeighting = bVar10;
      local_108.bPostRoll = false;
      local_108.bPreRoll = false;
      local_108.RootInstanceHandle = (FRootInstanceHandle)local_108.InstanceHandle;
      FEntityLedger::UpdateOneShotEntities
                (this_02,pUVar11,&local_108,this_01,
                 (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                  *)&local_98,&this->CachedConditionResults);
    }
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  uVar7 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar7 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
LAB_14615cb7f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

