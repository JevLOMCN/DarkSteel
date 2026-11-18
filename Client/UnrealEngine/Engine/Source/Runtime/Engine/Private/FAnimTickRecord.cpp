// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticStruct @ 1473c9d50

UScriptStruct * __cdecl FAnimTickRecord::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimTickRecord.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimTickRecord.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimTickRecord,(UObject *)pUVar1,
                         L"AnimTickRecord");
  }
  return Z_Registration_Info_UScriptStruct_FAnimTickRecord.OuterSingleton;
}

// FAnimTickRecord @ 1473d50d0

FAnimTickRecord * __thiscall
FAnimTickRecord::FAnimTickRecord
          (FAnimTickRecord *this,UAnimMontage *param_1,float param_2,float param_3,
          TArray<FPassedMarker,TSizedDefaultAllocator<32>_> *param_4,FMarkerTickRecord *param_5)

{
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  this->PlayRateMultiplier = 1.0;
  this->EffectiveBlendWeight = 0.0;
  (this->ContextData).Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  (this->ContextData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->MarkerTickRecord = (FMarkerTickRecord *)0x0;
  this->TimeAccumulator = (float *)0x0;
  this->RootMotionWeightModifier = 1.0;
  this->bLooping = false;
  this->bIsEvaluator = false;
  this->bRequestedInertialization = false;
  this->bOverridePositionWhenJoiningSyncGroupAsLeader = false;
  this->bIsExclusiveLeader = false;
  this->bActiveContext = true;
  this->MirrorDataTable = (UMirrorDataTable *)0x0;
  this->DeltaTimeRecord = (FDeltaTimeRecord *)0x0;
  this->bCanUseMarkerSync = false;
  this->LeaderScore = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)param_1;
  (this->field13_0x40).Montage.MarkersPassedThisTick = param_4;
  this->MarkerTickRecord = param_5;
  (this->field13_0x40).Montage.CurrentPosition = param_2;
  this->EffectiveBlendWeight = param_3;
  this->PlayRateMultiplier = 1.0;
  this->bLooping = false;
  return this;
}

// FAnimTickRecord @ 1473d5190

FAnimTickRecord * __thiscall
FAnimTickRecord::FAnimTickRecord
          (FAnimTickRecord *this,UAnimMontage *param_1,float param_2,float param_3,float param_4,
          float param_5,TArray<FPassedMarker,TSizedDefaultAllocator<32>_> *param_6,
          FMarkerTickRecord *param_7)

{
  this->RootMotionWeightModifier = 1.0;
  this->bLooping = false;
  this->bIsEvaluator = false;
  this->bRequestedInertialization = false;
  this->bOverridePositionWhenJoiningSyncGroupAsLeader = false;
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  this->PlayRateMultiplier = 1.0;
  this->EffectiveBlendWeight = 0.0;
  (this->ContextData).Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  (this->ContextData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->MarkerTickRecord = (FMarkerTickRecord *)0x0;
  this->TimeAccumulator = (float *)0x0;
  this->bIsExclusiveLeader = false;
  this->bActiveContext = true;
  this->MirrorDataTable = (UMirrorDataTable *)0x0;
  this->DeltaTimeRecord = (FDeltaTimeRecord *)0x0;
  this->bCanUseMarkerSync = false;
  this->LeaderScore = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)param_1;
  (this->field13_0x40).Montage.MarkersPassedThisTick = param_6;
  this->MarkerTickRecord = param_7;
  (this->field13_0x40).Montage.CurrentPosition = param_2;
  this->EffectiveBlendWeight = param_5;
  this->PlayRateMultiplier = 1.0;
  this->bLooping = false;
  return this;
}

// FAnimTickRecord @ 1473d5240

FAnimTickRecord * __thiscall
FAnimTickRecord::FAnimTickRecord
          (FAnimTickRecord *this,UAnimSequenceBase *param_1,bool param_2,float param_3,bool param_4,
          float param_5,float *param_6,FMarkerTickRecord *param_7)

{
  this->RootMotionWeightModifier = 1.0;
  this->bLooping = false;
  this->bIsEvaluator = false;
  this->bRequestedInertialization = false;
  this->bOverridePositionWhenJoiningSyncGroupAsLeader = false;
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  this->TimeAccumulator = (float *)0x0;
  this->PlayRateMultiplier = 1.0;
  this->EffectiveBlendWeight = 0.0;
  (this->ContextData).Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  (this->ContextData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->MarkerTickRecord = (FMarkerTickRecord *)0x0;
  this->bIsExclusiveLeader = false;
  this->bActiveContext = true;
  this->MirrorDataTable = (UMirrorDataTable *)0x0;
  this->DeltaTimeRecord = (FDeltaTimeRecord *)0x0;
  this->bCanUseMarkerSync = false;
  this->LeaderScore = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAnimSequenceBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)param_1;
  this->TimeAccumulator = param_6;
  this->MarkerTickRecord = param_7;
  this->bIsEvaluator = param_4;
  this->PlayRateMultiplier = param_3;
  this->bLooping = param_2;
  this->EffectiveBlendWeight = param_5;
  return this;
}

// FAnimTickRecord @ 1473d5300

FAnimTickRecord * __thiscall
FAnimTickRecord::FAnimTickRecord
          (FAnimTickRecord *this,UAnimSequenceBase *param_1,bool param_2,float param_3,float param_4
          ,float *param_5,FMarkerTickRecord *param_6)

{
  this->RootMotionWeightModifier = 1.0;
  this->bLooping = false;
  this->bIsEvaluator = false;
  this->bRequestedInertialization = false;
  this->bOverridePositionWhenJoiningSyncGroupAsLeader = false;
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  this->TimeAccumulator = (float *)0x0;
  this->PlayRateMultiplier = 1.0;
  this->EffectiveBlendWeight = 0.0;
  (this->ContextData).Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  (this->ContextData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->MarkerTickRecord = (FMarkerTickRecord *)0x0;
  this->bIsExclusiveLeader = false;
  this->bActiveContext = true;
  this->MirrorDataTable = (UMirrorDataTable *)0x0;
  this->DeltaTimeRecord = (FDeltaTimeRecord *)0x0;
  this->bCanUseMarkerSync = false;
  this->LeaderScore = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAnimSequenceBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)param_1;
  this->TimeAccumulator = param_5;
  this->MarkerTickRecord = param_6;
  this->PlayRateMultiplier = param_3;
  this->bLooping = param_2;
  this->EffectiveBlendWeight = param_4;
  this->bIsEvaluator = false;
  return this;
}

// FAnimTickRecord @ 1473d53c0

FAnimTickRecord * __thiscall
FAnimTickRecord::FAnimTickRecord
          (FAnimTickRecord *this,UBlendSpace *param_1,TVector<double> *param_2,
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_3,FBlendFilter *param_4,
          bool param_5,float param_6,bool param_7,bool param_8,float param_9,float *param_10,
          FMarkerTickRecord *param_11)

{
  double dVar1;
  
  this->RootMotionWeightModifier = 1.0;
  this->bLooping = false;
  this->bIsEvaluator = false;
  this->bRequestedInertialization = false;
  this->bOverridePositionWhenJoiningSyncGroupAsLeader = false;
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  this->TimeAccumulator = (float *)0x0;
  this->PlayRateMultiplier = 1.0;
  this->EffectiveBlendWeight = 0.0;
  (this->ContextData).Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  (this->ContextData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->MarkerTickRecord = (FMarkerTickRecord *)0x0;
  this->bIsExclusiveLeader = false;
  this->bActiveContext = true;
  this->MirrorDataTable = (UMirrorDataTable *)0x0;
  this->DeltaTimeRecord = (FDeltaTimeRecord *)0x0;
  this->bCanUseMarkerSync = false;
  this->LeaderScore = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBlendSpace *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  dVar1 = (param_2->field0_0x0)._s_0.X;
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)param_1;
  (this->field13_0x40).BlendSpace.BlendSpacePositionX = (float)dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->field13_0x40).BlendSpace.BlendFilter = param_4;
  (this->field13_0x40).BlendSpace.bTeleportToTime = param_7;
  this->TimeAccumulator = param_10;
  this->MarkerTickRecord = param_11;
  this->bLooping = param_5;
  this->bIsEvaluator = param_8;
  (this->field13_0x40).BlendSpace.BlendSampleDataCache = param_3;
  this->PlayRateMultiplier = param_6;
  (this->field13_0x40).BlendSpace.BlendSpacePositionY = (float)dVar1;
  this->EffectiveBlendWeight = param_9;
  return this;
}

// FAnimTickRecord @ 1473d54c0

FAnimTickRecord * __thiscall
FAnimTickRecord::FAnimTickRecord(FAnimTickRecord *this,UPoseAsset *param_1,float param_2)

{
  this->PlayRateMultiplier = 1.0;
  this->EffectiveBlendWeight = 0.0;
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  this->TimeAccumulator = (float *)0x0;
  this->MirrorDataTable = (UMirrorDataTable *)0x0;
  (this->ContextData).Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  (this->ContextData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->DeltaTimeRecord = (FDeltaTimeRecord *)0x0;
  this->MarkerTickRecord = (FMarkerTickRecord *)0x0;
  this->bCanUseMarkerSync = false;
  this->LeaderScore = 0.0;
  this->RootMotionWeightModifier = 1.0;
  this->bLooping = false;
  this->bIsEvaluator = false;
  this->bRequestedInertialization = false;
  this->bOverridePositionWhenJoiningSyncGroupAsLeader = false;
  this->bIsExclusiveLeader = false;
  this->bActiveContext = true;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPoseAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)param_1;
  this->EffectiveBlendWeight = param_2;
  return this;
}

// AllocateContextDataContainer @ 1473e1990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAnimTickRecord::AllocateContextDataContainer(FAnimTickRecord *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_18 = ___xmm_00000000000000000000000000000010;
    pTVar4 = (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
              *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4 = (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
              *)(pTVar3 + 1);
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_V__TUniquePtr___CBVIAnimNotifyEventContextDataInterface_Anim_UE__U__TDefaultDelete___CBVIAnimNotifyEventContextDataInterface_Anim_UE______V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar4 == (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar3;
    local_18 = pTVar4;
  }
  if (&this->ContextData !=
      (TSharedPtr<TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>,1>
       *)&local_18) {
    (this->ContextData).Object = pTVar4;
    local_18 = (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ContextData).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GatherContextData @ 1473fde10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimTickRecord::GatherContextData(FAnimTickRecord *this,FAnimationUpdateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TSharedPtr<TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>,1>
  *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  local_28;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *local_18;
  FSharedReferencer<1> FStack_10;
  
  this->bActiveContext = SUB81(param_1->_padding_,0);
  if (param_1->_padding_ != 0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    UE::Anim::FMessageStack::MakeEventContextData
              ((FMessageStack *)(param_1->_padding_ + 0x148),&local_28);
    if (local_28.ArrayNum != 0) {
      pTVar5 = &this->ContextData;
      if (pTVar5->Object ==
          (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
           *)0x0) {
        FStack_10.ReferenceController = ::operator_new(0x20);
        if (FStack_10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
          local_18 = ___xmm_00000000000000000000000000000010;
          pTVar4 = (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                    *)&DAT_00000010;
          FStack_10.ReferenceController = _UNK_150651568;
        }
        else {
          (FStack_10.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
          pTVar4 = (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                    *)(FStack_10.ReferenceController + 1);
          (FStack_10.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
          (FStack_10.ReferenceController)->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_V__TArray_V__TUniquePtr___CBVIAnimNotifyEventContextDataInterface_Anim_UE__U__TDefaultDelete___CBVIAnimNotifyEventContextDataInterface_Anim_UE______V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
          ;
          FStack_10.ReferenceController[1]._padding_ = 0;
          FStack_10.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
          FStack_10.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
          if ((pTVar4 == (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                          *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          LOCK();
          (FStack_10.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_10.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
          pTVar6 = FStack_10.ReferenceController;
          local_18 = pTVar4;
        }
        if (pTVar5 != (TSharedPtr<TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>,1>
                       *)&local_18) {
          pTVar5->Object = pTVar4;
          local_18 = (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                      *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->ContextData).SharedReferenceCount,&FStack_10);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_10.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        if ((pTVar5->Object ==
             (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
              *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pTVar4 = pTVar5->Object;
      if ((pTVar4 == &local_28) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar7 = (longlong)local_28.ArrayNum;
      if (local_28.ArrayNum != 0) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,local_28.ArrayNum,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,
                           &pTVar4->ArrayMax);
        memmove((pTVar4->AllocatorInstance).Data + (longlong)iVar3 * 8,
                local_28.AllocatorInstance.Data,lVar7 << 3);
        local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
      }
    }
    DestructItems<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,int>
              ((TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
                *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// FAnimTickRecord @ 14752f460

FAnimTickRecord * __thiscall
FAnimTickRecord::FAnimTickRecord(FAnimTickRecord *this,FAnimTickRecord *param_1)

{
  UAnimationAsset *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 uVar4;
  
  pUVar1 = (param_1->SourceAsset).field0_0x0.DebugPtr;
  (this->SourceAsset).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAnimationAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->TimeAccumulator = param_1->TimeAccumulator;
  this->PlayRateMultiplier = param_1->PlayRateMultiplier;
  this->EffectiveBlendWeight = param_1->EffectiveBlendWeight;
  this->RootMotionWeightModifier = param_1->RootMotionWeightModifier;
  this->bLooping = param_1->bLooping;
  this->bIsEvaluator = param_1->bIsEvaluator;
  this->bRequestedInertialization = param_1->bRequestedInertialization;
  this->bOverridePositionWhenJoiningSyncGroupAsLeader =
       param_1->bOverridePositionWhenJoiningSyncGroupAsLeader;
  this->bIsExclusiveLeader = param_1->bIsExclusiveLeader;
  this->bActiveContext = param_1->bActiveContext;
  this->MirrorDataTable = param_1->MirrorDataTable;
  (this->ContextData).Object = (param_1->ContextData).Object;
  pTVar2 = (param_1->ContextData).SharedReferenceCount.ReferenceController;
  (this->ContextData).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->field13_0x40).BlendSpace.BlendSampleDataCache;
  (this->field13_0x40).BlendSpace.BlendFilter = (param_1->field13_0x40).BlendSpace.BlendFilter;
  (this->field13_0x40).BlendSpace.BlendSampleDataCache = pTVar3;
  uVar4 = *(undefined8 *)((longlong)&param_1->field13_0x40 + 0x18);
  *(undefined8 *)((longlong)&this->field13_0x40 + 0x10) =
       *(undefined8 *)((longlong)&param_1->field13_0x40 + 0x10);
  *(undefined8 *)((longlong)&this->field13_0x40 + 0x18) = uVar4;
  pTVar3 = (param_1->field13_0x40).BlendSpace.BlendSampleDataCache;
  (this->field13_0x40).BlendSpace.BlendFilter = (param_1->field13_0x40).BlendSpace.BlendFilter;
  (this->field13_0x40).BlendSpace.BlendSampleDataCache = pTVar3;
  this->DeltaTimeRecord = param_1->DeltaTimeRecord;
  this->MarkerTickRecord = param_1->MarkerTickRecord;
  this->bCanUseMarkerSync = param_1->bCanUseMarkerSync;
  this->LeaderScore = param_1->LeaderScore;
  return this;
}

