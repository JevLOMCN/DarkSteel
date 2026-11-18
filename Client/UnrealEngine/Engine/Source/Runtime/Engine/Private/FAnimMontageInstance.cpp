// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 45

// StaticStruct @ 1474905f0

UScriptStruct * __cdecl FAnimMontageInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimMontageInstance.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimMontageInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimMontageInstance,(UObject *)pUVar1,
                         L"AnimMontageInstance");
  }
  return Z_Registration_Info_UScriptStruct_FAnimMontageInstance.OuterSingleton;
}

// FAnimMontageInstance @ 1474b0650

FAnimMontageInstance * __thiscall
FAnimMontageInstance::FAnimMontageInstance(FAnimMontageInstance *this,UAnimInstance *param_1)

{
  float fVar1;
  UAnimInstance *local_res8;
  
  this->DefaultBlendTimeMultiplier = 1.0;
  (this->DeltaTimeRecord).Delta = 0.0;
  (this->Montage).field0_0x0.DebugPtr = (UAnimMontage *)0x0;
  *(undefined8 *)&this->OnMontageEnded = 0;
  *(undefined8 *)&(this->OnMontageEnded).field_0x8 = 0;
  *(undefined4 *)&(this->OnMontageEnded).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageBlendingOutStarted = 0;
  *(undefined8 *)&(this->OnMontageBlendingOutStarted).field_0x8 = 0;
  *(undefined4 *)&(this->OnMontageBlendingOutStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageBlendedInEnded = 0;
  *(undefined8 *)&(this->OnMontageBlendedInEnded).field_0x8 = 0;
  *(undefined4 *)&(this->OnMontageBlendedInEnded).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageSectionChanged = 0;
  *(undefined8 *)&(this->OnMontageSectionChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnMontageSectionChanged).field_0x10 = 0;
  this->bPlaying = false;
  (this->DeltaTimeRecord).Previous = 0.0;
  (this->DeltaTimeRecord).bPreviousIsValid = false;
  (this->MarkersPassedThisTick).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkersPassedThisTick).ArrayNum = 0;
  (this->MarkersPassedThisTick).ArrayMax = 0;
  (this->MontageSubStepper).MontageInstance = (FAnimMontageInstance *)0x0;
  (this->MontageSubStepper).Montage = (UAnimMontage *)0x0;
  (this->MontageSubStepper).TimeRemaining = 0.0;
  (this->MontageSubStepper).Cached_CombinedPlayRate = 0.0;
  (this->MontageSubStepper).PlayRate = 0.0;
  (this->MontageSubStepper).DeltaMove = 0.0;
  (this->MontageSubStepper).CurrentSectionStartTime = 0.0;
  (this->MontageSubStepper).CurrentSectionLength = 0.0;
  (this->MontageSubStepper).bReachedEndOfSection = false;
  (this->MontageSubStepper).bHasValidTimeStretchCurveData = false;
  (this->MontageSubStepper).SectionStartPositions_Target.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MontageSubStepper).SectionStartPositions_Target.ArrayNum = 0;
  (this->MontageSubStepper).SectionStartPositions_Target.ArrayMax = 0;
  (this->MontageSubStepper).SectionEndPositions_Target.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MontageSubStepper).SectionEndPositions_Target.ArrayNum = 0;
  (this->MontageSubStepper).SectionEndPositions_Target.ArrayMax = 0;
  (this->MontageSubStepper).TimeStretchCurveInstance.bHasValidData = false;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Original.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Original.ArrayNum = 0;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Original.ArrayMax = 0;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Target.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Target.ArrayNum = 0;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Target.ArrayMax = 0;
  (this->NextSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextSections).ArrayNum = 0;
  (this->NextSections).ArrayMax = 0;
  (this->PrevSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevSections).ArrayNum = 0;
  (this->PrevSections).ArrayMax = 0;
  (this->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
  (this->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  this->bDidUseMarkerSyncThisTick = false;
  this->bEnableAutoBlendOut = true;
  (this->MontageSubStepper).bPlayingForward = true;
  (this->MontageSubStepper).CurrentSectionIndex = -1;
  (this->MontageSubStepper).TimeStretchMarkerIndex = -1;
  (this->MontageSubStepper).Cached_P_Target = 3.4028235e+38;
  (this->MontageSubStepper).Cached_P_Original = 3.4028235e+38;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->AnimInstance).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->AnimInstance).WeakPtr,(FObjectPtr)&local_res8);
  fVar1 = __real_3e4ccccd;
  this->InstanceID = -1;
  (this->ActiveStateBranchingPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveStateBranchingPoints).ArrayNum = 0;
  (this->ActiveStateBranchingPoints).ArrayMax = 0;
  this->Position = 0.0;
  this->PlayRate = 1.0;
  FAlphaBlend::FAlphaBlend(&this->Blend,fVar1);
  this->bInterrupted = false;
  this->PreviousWeight = 0.0;
  this->NotifyWeight = 0.0;
  this->BlendStartAlpha = 0.0;
  (this->SyncGroupName).ComparisonIndex = 0;
  (this->SyncGroupName).Number = 0;
  this->ActiveBlendProfile = (UBlendProfile *)0x0;
  this->ActiveBlendProfileMode = TimeFactor;
  (this->ForcedNextFromPosition).bIsSet = false;
  (this->ForcedNextToPosition).bIsSet = false;
  this->DisableRootMotionCount = 0;
  (this->MontageSyncFollowers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MontageSyncFollowers).ArrayNum = 0;
  (this->MontageSyncFollowers).ArrayMax = 0;
  this->MontageSyncLeader = (FAnimMontageInstance *)0x0;
  this->MontageSyncUpdateFrameCounter = 0xffffffff;
  return this;
}

// FAnimMontageInstance @ 1474b0890

FAnimMontageInstance * __thiscall
FAnimMontageInstance::FAnimMontageInstance(FAnimMontageInstance *this)

{
  float fVar1;
  undefined8 local_res8;
  
  this->DefaultBlendTimeMultiplier = 1.0;
  (this->DeltaTimeRecord).Delta = 0.0;
  (this->Montage).field0_0x0.DebugPtr = (UAnimMontage *)0x0;
  *(undefined8 *)&this->OnMontageEnded = 0;
  *(undefined8 *)&(this->OnMontageEnded).field_0x8 = 0;
  *(undefined4 *)&(this->OnMontageEnded).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageBlendingOutStarted = 0;
  *(undefined8 *)&(this->OnMontageBlendingOutStarted).field_0x8 = 0;
  *(undefined4 *)&(this->OnMontageBlendingOutStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageBlendedInEnded = 0;
  *(undefined8 *)&(this->OnMontageBlendedInEnded).field_0x8 = 0;
  *(undefined4 *)&(this->OnMontageBlendedInEnded).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageSectionChanged = 0;
  *(undefined8 *)&(this->OnMontageSectionChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnMontageSectionChanged).field_0x10 = 0;
  this->bPlaying = false;
  (this->DeltaTimeRecord).Previous = 0.0;
  (this->DeltaTimeRecord).bPreviousIsValid = false;
  (this->MarkersPassedThisTick).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkersPassedThisTick).ArrayNum = 0;
  (this->MarkersPassedThisTick).ArrayMax = 0;
  this->bDidUseMarkerSyncThisTick = false;
  (this->MontageSubStepper).MontageInstance = (FAnimMontageInstance *)0x0;
  (this->MontageSubStepper).Montage = (UAnimMontage *)0x0;
  (this->MontageSubStepper).TimeRemaining = 0.0;
  (this->MontageSubStepper).Cached_CombinedPlayRate = 0.0;
  (this->MontageSubStepper).PlayRate = 0.0;
  (this->MontageSubStepper).DeltaMove = 0.0;
  (this->MontageSubStepper).CurrentSectionStartTime = 0.0;
  (this->MontageSubStepper).CurrentSectionLength = 0.0;
  (this->MontageSubStepper).bReachedEndOfSection = false;
  (this->MontageSubStepper).bHasValidTimeStretchCurveData = false;
  (this->MontageSubStepper).SectionStartPositions_Target.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MontageSubStepper).SectionStartPositions_Target.ArrayNum = 0;
  (this->MontageSubStepper).SectionStartPositions_Target.ArrayMax = 0;
  (this->MontageSubStepper).SectionEndPositions_Target.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MontageSubStepper).SectionEndPositions_Target.ArrayNum = 0;
  (this->MontageSubStepper).SectionEndPositions_Target.ArrayMax = 0;
  (this->MontageSubStepper).TimeStretchCurveInstance.bHasValidData = false;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Original.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Original.ArrayNum = 0;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Original.ArrayMax = 0;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Target.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Target.ArrayNum = 0;
  (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Target.ArrayMax = 0;
  (this->NextSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextSections).ArrayNum = 0;
  (this->NextSections).ArrayMax = 0;
  (this->PrevSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrevSections).ArrayNum = 0;
  (this->PrevSections).ArrayMax = 0;
  (this->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
  (this->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  (this->MontageSubStepper).bPlayingForward = true;
  (this->MontageSubStepper).CurrentSectionIndex = -1;
  (this->MontageSubStepper).TimeStretchMarkerIndex = -1;
  (this->MontageSubStepper).Cached_P_Target = 3.4028235e+38;
  (this->MontageSubStepper).Cached_P_Original = 3.4028235e+38;
  local_res8 = 0;
  (this->AnimInstance).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AnimInstance).WeakPtr,(FObjectPtr)&local_res8);
  fVar1 = __real_3e4ccccd;
  this->InstanceID = -1;
  (this->ActiveStateBranchingPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveStateBranchingPoints).ArrayNum = 0;
  (this->ActiveStateBranchingPoints).ArrayMax = 0;
  this->Position = 0.0;
  this->PlayRate = 1.0;
  FAlphaBlend::FAlphaBlend(&this->Blend,fVar1);
  this->bInterrupted = false;
  this->PreviousWeight = 0.0;
  this->NotifyWeight = 0.0;
  this->BlendStartAlpha = 0.0;
  (this->SyncGroupName).ComparisonIndex = 0;
  (this->SyncGroupName).Number = 0;
  this->ActiveBlendProfile = (UBlendProfile *)0x0;
  this->ActiveBlendProfileMode = TimeFactor;
  (this->ForcedNextFromPosition).bIsSet = false;
  (this->ForcedNextToPosition).bIsSet = false;
  this->DisableRootMotionCount = 0;
  (this->MontageSyncFollowers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MontageSyncFollowers).ArrayNum = 0;
  (this->MontageSyncFollowers).ArrayMax = 0;
  this->MontageSyncLeader = (FAnimMontageInstance *)0x0;
  this->MontageSyncUpdateFrameCounter = 0xffffffff;
  return this;
}

// ~FAnimMontageInstance @ 1474b49f0

void __thiscall FAnimMontageInstance::~FAnimMontageInstance(FAnimMontageInstance *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MontageSyncFollowers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAnimNotifyEvent,int>
            ((FAnimNotifyEvent *)(this->ActiveStateBranchingPoints).AllocatorInstance.Data,
             (this->ActiveStateBranchingPoints).ArrayNum);
  pFVar1 = (this->ActiveStateBranchingPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrevSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Target.AllocatorInstance.Data
  ;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Original.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MontageSubStepper).SectionEndPositions_Target.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MontageSubStepper).SectionStartPositions_Target.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkersPassedThisTick).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMontageSectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMontageBlendedInEnded);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMontageBlendingOutStarted);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMontageEnded);
  return;
}

// operator= @ 1474b5e80

FAnimMontageInstance * __thiscall
FAnimMontageInstance::operator=(FAnimMontageInstance *this,FAnimMontageInstance *param_1)

{
  int *piVar1;
  TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FAnimMontageInstance_*,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UAnimMontage *pUVar5;
  FAnimNotifyEvent *pFVar6;
  FScriptContainerElement *_Src;
  FMarkerPair FVar7;
  float fVar8;
  undefined3 uVar9;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar5 = (param_1->Montage).field0_0x0.DebugPtr, pUVar5 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Montage).field0_0x0 = (param_1->Montage).field0_0x0;
  TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnMontageEnded,&param_1->OnMontageEnded);
  TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnMontageBlendingOutStarted,&param_1->OnMontageBlendingOutStarted);
  TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnMontageBlendedInEnded,&param_1->OnMontageBlendedInEnded);
  TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnMontageSectionChanged,&param_1->OnMontageSectionChanged);
  this->bPlaying = param_1->bPlaying;
  this->DefaultBlendTimeMultiplier = param_1->DefaultBlendTimeMultiplier;
  fVar8 = (param_1->DeltaTimeRecord).Previous;
  (this->DeltaTimeRecord).Delta = (param_1->DeltaTimeRecord).Delta;
  (this->DeltaTimeRecord).Previous = fVar8;
  uVar9 = *(undefined3 *)&(param_1->DeltaTimeRecord).field_0x9;
  (this->DeltaTimeRecord).bPreviousIsValid = (param_1->DeltaTimeRecord).bPreviousIsValid;
  *(undefined3 *)&(this->DeltaTimeRecord).field_0x9 = uVar9;
  FVar7 = (param_1->MarkerTickRecord).NextMarker;
  (this->MarkerTickRecord).PreviousMarker = (param_1->MarkerTickRecord).PreviousMarker;
  (this->MarkerTickRecord).NextMarker = FVar7;
  TArray<FPassedMarker,TSizedDefaultAllocator<32>_>::operator=
            (&this->MarkersPassedThisTick,&param_1->MarkersPassedThisTick);
  this->bDidUseMarkerSyncThisTick = param_1->bDidUseMarkerSyncThisTick;
  this->bEnableAutoBlendOut = param_1->bEnableAutoBlendOut;
  (this->MontageSubStepper).MontageInstance = (param_1->MontageSubStepper).MontageInstance;
  (this->MontageSubStepper).Montage = (param_1->MontageSubStepper).Montage;
  (this->MontageSubStepper).TimeRemaining = (param_1->MontageSubStepper).TimeRemaining;
  (this->MontageSubStepper).Cached_CombinedPlayRate =
       (param_1->MontageSubStepper).Cached_CombinedPlayRate;
  (this->MontageSubStepper).PlayRate = (param_1->MontageSubStepper).PlayRate;
  (this->MontageSubStepper).DeltaMove = (param_1->MontageSubStepper).DeltaMove;
  (this->MontageSubStepper).bPlayingForward = (param_1->MontageSubStepper).bPlayingForward;
  (this->MontageSubStepper).CurrentSectionIndex = (param_1->MontageSubStepper).CurrentSectionIndex;
  (this->MontageSubStepper).CurrentSectionStartTime =
       (param_1->MontageSubStepper).CurrentSectionStartTime;
  (this->MontageSubStepper).CurrentSectionLength = (param_1->MontageSubStepper).CurrentSectionLength
  ;
  (this->MontageSubStepper).bReachedEndOfSection = (param_1->MontageSubStepper).bReachedEndOfSection
  ;
  (this->MontageSubStepper).bHasValidTimeStretchCurveData =
       (param_1->MontageSubStepper).bHasValidTimeStretchCurveData;
  (this->MontageSubStepper).TimeStretchMarkerIndex =
       (param_1->MontageSubStepper).TimeStretchMarkerIndex;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MontageSubStepper).SectionStartPositions_Target,
             &(param_1->MontageSubStepper).SectionStartPositions_Target);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MontageSubStepper).SectionEndPositions_Target,
             &(param_1->MontageSubStepper).SectionEndPositions_Target);
  (this->MontageSubStepper).Cached_P_Target = (param_1->MontageSubStepper).Cached_P_Target;
  (this->MontageSubStepper).Cached_P_Original = (param_1->MontageSubStepper).Cached_P_Original;
  (this->MontageSubStepper).TimeStretchCurveInstance.bHasValidData =
       (param_1->MontageSubStepper).TimeStretchCurveInstance.bHasValidData;
  (this->MontageSubStepper).TimeStretchCurveInstance.T_Original =
       (param_1->MontageSubStepper).TimeStretchCurveInstance.T_Original;
  (this->MontageSubStepper).TimeStretchCurveInstance.T_Target =
       (param_1->MontageSubStepper).TimeStretchCurveInstance.T_Target;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Original,
             &(param_1->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Original);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Target,
             &(param_1->MontageSubStepper).TimeStretchCurveInstance.P_Marker_Target);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->NextSections,&param_1->NextSections);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->PrevSections,&param_1->PrevSections);
  pTVar2 = &this->ActiveStateBranchingPoints;
  (this->AnimInstance).WeakPtr = (param_1->AnimInstance).WeakPtr;
  this->InstanceID = param_1->InstanceID;
  if (pTVar2 != &param_1->ActiveStateBranchingPoints) {
    DestructItems<FAnimNotifyEvent,int>
              ((FAnimNotifyEvent *)(pTVar2->AllocatorInstance).Data,
               (this->ActiveStateBranchingPoints).ArrayNum);
    iVar4 = (param_1->ActiveStateBranchingPoints).ArrayNum;
    piVar1 = &(this->ActiveStateBranchingPoints).ArrayMax;
    pFVar6 = (FAnimNotifyEvent *)(param_1->ActiveStateBranchingPoints).AllocatorInstance.Data;
    (this->ActiveStateBranchingPoints).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FAnimNotifyEvent,FAnimNotifyEvent,int>
                ((pTVar2->AllocatorInstance).Data,pFVar6,iVar4);
    }
  }
  this->Position = param_1->Position;
  this->PlayRate = param_1->PlayRate;
  FAlphaBlend::operator=(&this->Blend,&param_1->Blend);
  this->bInterrupted = param_1->bInterrupted;
  this->PreviousWeight = param_1->PreviousWeight;
  this->NotifyWeight = param_1->NotifyWeight;
  this->BlendStartAlpha = param_1->BlendStartAlpha;
  this->SyncGroupName = param_1->SyncGroupName;
  this->ActiveBlendProfile = param_1->ActiveBlendProfile;
  this->ActiveBlendProfileMode = param_1->ActiveBlendProfileMode;
  if (&param_1->ForcedNextFromPosition != &this->ForcedNextFromPosition) {
    if ((param_1->ForcedNextFromPosition).bIsSet == false) {
      if ((this->ForcedNextFromPosition).bIsSet != false) {
        (this->ForcedNextFromPosition).bIsSet = false;
      }
    }
    else {
      (this->ForcedNextFromPosition).TypedValue = (param_1->ForcedNextFromPosition).TypedValue;
      (this->ForcedNextFromPosition).bIsSet = true;
    }
  }
  if (&param_1->ForcedNextToPosition != &this->ForcedNextToPosition) {
    if ((param_1->ForcedNextToPosition).bIsSet == false) {
      if ((this->ForcedNextToPosition).bIsSet != false) {
        (this->ForcedNextToPosition).bIsSet = false;
      }
    }
    else {
      (this->ForcedNextToPosition).TypedValue = (param_1->ForcedNextToPosition).TypedValue;
      (this->ForcedNextToPosition).bIsSet = true;
    }
  }
  pTVar3 = &this->MontageSyncFollowers;
  this->DisableRootMotionCount = param_1->DisableRootMotionCount;
  if (pTVar3 != &param_1->MontageSyncFollowers) {
    iVar4 = (param_1->MontageSyncFollowers).ArrayNum;
    piVar1 = &(this->MontageSyncFollowers).ArrayMax;
    _Src = (param_1->MontageSyncFollowers).AllocatorInstance.Data;
    (this->MontageSyncFollowers).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  this->MontageSyncLeader = param_1->MontageSyncLeader;
  this->MontageSyncUpdateFrameCounter = param_1->MontageSyncUpdateFrameCounter;
  return this;
}

// AddReferencedObjects @ 1474b9620

void __thiscall
FAnimMontageInstance::AddReferencedObjects(FAnimMontageInstance *this,FReferenceCollector *param_1)

{
  if ((this->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001474b9638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x88))(param_1,this,0,0);
    return;
  }
  return;
}

// Advance @ 1474b9af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimMontageInstance::Advance
          (FAnimMontageInstance *this,float param_1,FRootMotionMovementParams *param_2,bool param_3)

{
  int *piVar1;
  FPassedMarker *pFVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  UAnimMontage *pUVar7;
  undefined8 uVar8;
  TObjectPtr<UAnimMontage>_u_0 TVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  char cVar19;
  bool bVar20;
  EMontageSubStepResult EVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Advance> FVar28;
  FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Advance_Iteration> FVar29;
  FAlphaBlend *pFVar30;
  UAnimInstance *pUVar31;
  UObject *pUVar32;
  FThreadStats *pFVar33;
  FThreadStatsPool *pFVar34;
  FName FVar35;
  FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_TickBranchPoints> FVar36;
  FStatMessage *pFVar37;
  FNameEntryId FVar38;
  FBranchingPointMarker *pFVar39;
  FPassedMarker *pFVar40;
  FName FVar41;
  FName FVar42;
  uint uVar43;
  FScriptContainerElement *pFVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStackY_478 [32];
  undefined1 local_413 [3];
  FName local_410;
  int local_408;
  FName local_400;
  FColor_u_0 local_3f8;
  FColor_u_0 local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  FColor_u_0 local_3e0 [2];
  FBranchingPointMarker *local_3d8;
  FName local_3d0;
  byte local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  FName local_3b0;
  FName local_3a8;
  uint local_3a0;
  uint uStack_39c;
  FName local_398;
  undefined8 local_390;
  FWeakObjectPtr local_388;
  TObjectPtr<UAnimMontage>_u_0 local_380;
  int local_378;
  undefined8 local_374;
  undefined1 local_36c;
  undefined1 local_368 [8];
  ForAnyElementType FStack_360;
  int local_358;
  FName local_350;
  FName local_340;
  FName local_330;
  LARGE_INTEGER local_320;
  LARGE_INTEGER local_318;
  undefined8 *local_310;
  LARGE_INTEGER local_308;
  LARGE_INTEGER local_300;
  FStatMessage local_2f8;
  FStatMessage local_2e8;
  FStatMessage local_2d8;
  FStatMessage local_2c8;
  TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> local_2b8;
  FAnimExtractContext local_2a0;
  FName *local_258;
  undefined8 *local_250;
  USkeletalMeshComponent *local_248;
  TObjectPtr<UAnimMontage>_u_0 local_240;
  FScriptContainerElement *local_238;
  int local_230;
  undefined1 local_22c;
  FDestructionSentinel local_228;
  FName local_210;
  FName local_208;
  undefined1 local_200 [8];
  FName local_1f8;
  FString local_1f0;
  FString local_1e0;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  FAlphaBlend local_1a0;
  FAlphaBlend local_170;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_478;
  FVar28 = StatPtr_STAT_AnimMontageInstance_Advance;
  local_410 = (FName)param_2;
  if (StatPtr_STAT_AnimMontageInstance_Advance ==
      (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Advance>)0x0) {
    pFVar27 = ::FName::FName(&local_210,"STAT_AnimMontageInstance_Advance");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Advance>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimMontageInstance_Advance,
                        *pFVar27,L"AnimMontageInstance_Advance","STATGROUP_Anim","STATCAT_Advanced",
                        L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar42 = *(FName *)FVar28;
  bVar11 = false;
  bVar15 = false;
  local_350.ComparisonIndex.Value = 0;
  local_350.Number = 0;
  bVar18 = false;
  bVar23 = false;
  if ((FVar42.ComparisonIndex.Value.Value == 0) && (FVar42.Number == 0)) {
LAB_1474b9c8b:
    bVar15 = bVar23;
    bVar11 = bVar18;
    bVar18 = false;
    FVar42 = local_350;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3f8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3f8._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar11 = false;
      bVar15 = true;
      bVar18 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3b0.ComparisonIndex.Value = FVar42.ComparisonIndex.Value.Value;
        local_3b0.Number = FVar42.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3b0,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                   ,0x9c2);
        bVar11 = true;
        bVar15 = true;
        bVar18 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1474b9c8b;
    local_400 = FVar42;
    FThreadStats::AddMessage(FVar42,CycleScopeStart);
    bVar18 = true;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_3d0,
             (UObjectBaseUtility *)(this->Montage).field0_0x0.DebugPtr);
  pUVar7 = (this->Montage).field0_0x0.DebugPtr;
  if ((pUVar7 != (UAnimMontage *)0x0) && (this->bPlaying != false)) {
    if (param_2 == (FRootMotionMovementParams *)0x0) {
LAB_1474b9d01:
      bVar23 = false;
    }
    else {
      cVar19 = (**(code **)(pUVar7->_padding_ + 0x340))();
      bVar23 = true;
      if (cVar19 == '\0') goto LAB_1474b9d01;
    }
    (this->DeltaTimeRecord).Previous = this->Position;
    (this->DeltaTimeRecord).Delta = 0.0;
    (this->DeltaTimeRecord).bPreviousIsValid = true;
    if (((this->SyncGroupName == (FName)0x0) || ((this->Blend).DesiredValue != 0.0)) ||
       (bVar20 = FAlphaBlend::IsComplete(&this->Blend), bVar20)) {
      this->bDidUseMarkerSyncThisTick = false;
    }
    else {
      this->bDidUseMarkerSyncThisTick = true;
      (this->MarkersPassedThisTick).ArrayNum = 0;
      if ((this->MarkersPassedThisTick).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&(this->MarkersPassedThisTick).AllocatorInstance,0,
                   &(this->MarkersPassedThisTick).ArrayMax);
      }
    }
    fVar3 = (this->MontageSubStepper).TimeRemaining;
    local_408 = 0;
    if (fVar3 < __real_41200000) {
      (this->MontageSubStepper).TimeRemaining = fVar3 + param_1;
    }
    if (param_1 == 0.0) {
      fVar3 = this->Position;
      HandleEvents(this,fVar3,fVar3,(FBranchingPointMarker *)0x0);
    }
    fVar17 = __real_3851b717;
    fVar16 = __real_38d1b717;
    fVar3 = __real_322bcc77;
    cVar19 = this->bPlaying;
    FVar29 = StatPtr_STAT_AnimMontageInstance_Advance_Iteration;
joined_r0x0001474b9dd8:
    StatPtr_STAT_AnimMontageInstance_Advance_Iteration = FVar29;
    if (((cVar19 == '\0') || ((this->MontageSubStepper).TimeRemaining <= fVar3)) ||
       (local_408 = local_408 + 1, 9 < local_408)) goto LAB_1474baa5a;
    if (FVar29 == (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Advance_Iteration>)0x0) {
      pFVar27 = ::FName::FName(&local_208,"STAT_AnimMontageInstance_Advance_Iteration");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Advance_Iteration>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AnimMontageInstance_Advance_Iteration,*pFVar27,
                          L"AnimMontageInstance_Advance_Iteration","STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar41 = *(FName *)FVar29;
    bVar20 = false;
    bVar24 = false;
    local_340.ComparisonIndex.Value = 0;
    local_340.Number = 0;
    bVar12 = false;
    bVar14 = false;
    FVar38 = FVar41.ComparisonIndex.Value;
    uVar43 = FVar41.Number;
    if ((FVar38.Value == 0) && (uVar43 == 0)) {
LAB_1474b9f4b:
      bVar13 = false;
      FVar41 = local_340;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_3f4.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_3f4._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
        bVar20 = false;
        bVar24 = true;
        bVar12 = false;
        bVar14 = true;
        if (-1 < CpuChannel->Enabled) {
          local_3a8.ComparisonIndex.Value = FVar38.Value;
          local_3a8.Number = uVar43;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_3a8,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                     ,0x9ee);
          bVar20 = true;
          bVar24 = true;
          bVar12 = true;
          bVar14 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1474b9f4b;
      local_3a0 = FVar38.Value;
      uStack_39c = uVar43;
      local_340 = FVar41;
      FThreadStats::AddMessage(FVar41,CycleScopeStart);
      bVar13 = true;
      bVar12 = bVar20;
      bVar14 = bVar24;
    }
    fVar46 = this->Position;
    local_3d8 = (FBranchingPointMarker *)0x0;
    EVar21 = FMontageSubStepper::Advance(&this->MontageSubStepper,&this->Position,&local_3d8);
    FVar38 = FVar41.ComparisonIndex.Value;
    uVar43 = FVar41.Number;
    if ((byte)(EVar21 - InvalidSection) < 2) {
      pUVar7 = (this->Montage).field0_0x0.DebugPtr;
      pFVar30 = FAlphaBlend::FAlphaBlend
                          (&local_170,&pUVar7->BlendOut,
                           this->DefaultBlendTimeMultiplier * (pUVar7->BlendOut).BlendTime);
      Stop(this,pFVar30,false);
      if (bVar24) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar13) && (FVar41 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar33 == (FThreadStats *)0x0) {
          pFVar34 = FThreadStatsPool::Get();
          pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
        }
        if (pFVar33->bWaitForExplicitFlush < pFVar33->ScopeCount) {
          local_2c8.NameAndInfo.Number = uVar43 & 0xffff6fff | 0x6000;
          local_2c8.NameAndInfo.Index.Value = FVar38.Value;
          QueryPerformanceCounter(&local_308);
          local_2c8.StatData.Pad[4] = '\0';
          local_2c8.StatData.Pad[5] = '\0';
          local_2c8.StatData.Pad[6] = '\0';
          local_2c8.StatData.Pad[7] = '\0';
          local_2c8.StatData.Pad[0] = local_308.s.LowPart._0_1_;
          local_2c8.StatData.Pad[1] = local_308.s.LowPart._1_1_;
          local_2c8.StatData.Pad[2] = local_308.s.LowPart._2_1_;
          local_2c8.StatData.Pad[3] = local_308.s.LowPart._3_1_;
          pFVar37 = &local_2c8;
LAB_1474baa20:
          FThreadStats::AddStatMessage(pFVar33,pFVar37);
          piVar1 = &pFVar33->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar33,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar33,false,false);
          }
        }
      }
      goto LAB_1474baa5a;
    }
    fVar49 = (this->Blend).DesiredValue;
    bVar5 = (this->MontageSubStepper).bPlayingForward;
    fVar4 = (this->MontageSubStepper).DeltaMove;
    (this->DeltaTimeRecord).Delta = fVar4 + (this->DeltaTimeRecord).Delta;
    if ((fVar49 != 0.0) && (this->bEnableAutoBlendOut != false)) {
      uVar26 = (this->MontageSubStepper).CurrentSectionIndex;
      if ((((int)uVar26 < 0) || ((this->NextSections).ArrayNum <= (int)uVar26)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("NextSections.IsValidIndex(CurrentSectionIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                              ,0xa06,L""), bVar22)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (bVar5 == false) {
        uVar25 = 0;
        if ((int)uVar26 < (this->PrevSections).ArrayNum) {
          uVar25 = ~uVar26 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar44 = (this->PrevSections).AllocatorInstance.Data;
      }
      else {
        uVar25 = 0;
        if ((int)uVar26 < (this->NextSections).ArrayNum) {
          uVar25 = ~uVar26 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar44 = (this->NextSections).AllocatorInstance.Data;
      }
      if (*(int *)(pFVar44 + (longlong)(int)uVar26 * 4) == -1) {
        fVar45 = FMontageSubStepper::GetRemainingPlayTimeToSectionEnd
                           (&this->MontageSubStepper,this->Position);
        pUVar7 = (this->Montage).field0_0x0.DebugPtr;
        fVar49 = pUVar7->BlendOutTriggerTime;
        fVar48 = this->DefaultBlendTimeMultiplier * (pUVar7->BlendOut).BlendTime;
        fVar47 = fVar49;
        if (fVar49 < 0.0) {
          fVar47 = fVar48;
        }
        if (fVar47 <= fVar16) {
          fVar47 = fVar16;
        }
        if (fVar45 <= fVar47) {
          if (fVar49 < 0.0) {
            fVar48 = fVar45;
          }
          pFVar30 = FAlphaBlend::FAlphaBlend(&local_1a0,&pUVar7->BlendOut,fVar48);
          Stop(this,pFVar30,false);
        }
      }
    }
    if (EVar21 == Moved) {
      if (this->bDidUseMarkerSyncThisTick != false) {
        FMarkerSyncData::CollectMarkersInRange
                  (&((this->Montage).field0_0x0.DebugPtr)->MarkerData,fVar46,this->Position,
                   &this->MarkersPassedThisTick,fVar4);
      }
      if (((!bVar23) || (bVar22 = FWeakObjectPtr::IsValid(&(this->AnimInstance).WeakPtr), !bVar22))
         || (0 < this->DisableRootMotionCount)) goto LAB_1474ba39a;
      local_3b8 = 0;
      local_2a0.bExtractRootMotion = false;
      local_2a0.DeltaTimeRecord.bPreviousIsValid = false;
      local_2a0.DeltaTimeRecord._9_3_ = 0;
      local_2a0.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.PoseCurves.ArrayNum = 0;
      local_2a0.PoseCurves.ArrayMax = 0;
      local_2a0.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.BonesRequired.ArrayNum = 0;
      local_2a0.BonesRequired.ArrayMax = 0;
      local_2a0.InterpolationOverride.bIsSet = false;
      local_2a0.CurrentTime = 0.0;
      local_3c0 = 0;
      local_2a0.DeltaTimeRecord.Delta = 0.0;
      local_2a0.DeltaTimeRecord.Previous = 0.0;
      local_2a0.bLooping = false;
      UAnimMontage::ExtractRootMotionFromTrackRange
                ((this->Montage).field0_0x0.DebugPtr,&local_138,fVar46,this->Position,&local_2a0);
      if (local_2a0.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.BonesRequired.AllocatorInstance.Data);
      }
      if (local_2a0.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.PoseCurves.AllocatorInstance.Data);
      }
      FVar35 = local_410;
      if (param_3) {
        fVar49 = (this->Blend).BlendedValue;
        pUVar31 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
        pUVar7 = (this->Montage).field0_0x0.DebugPtr;
        if (((pUVar7->SlotAnimTracks).ArrayNum < 1) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        UAnimInstance::QueueRootMotionBlend
                  (pUVar31,&local_138,(FName *)(pUVar7->SlotAnimTracks).AllocatorInstance.Data,
                   fVar49);
        FVar35 = local_410;
      }
      else {
        FRootMotionMovementParams::Accumulate((FRootMotionMovementParams *)local_410,&local_138);
      }
      if ((byte)LogRootMotion._0_1_ < 5) goto LAB_1474ba39a;
      local_1d0._s_0.X = *(double *)((longlong)FVar35 + 0x30);
      local_1d0._s_0.Y = *(double *)((longlong)FVar35 + 0x38);
      local_1d0._s_0.Z = *(double *)((longlong)FVar35 + 0x40);
      UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_1d0._s_0,&local_1e0);
      local_1b8._s_0.X = local_138.Translation.XY.m128d_f64[0];
      local_1b8._s_0.Y = local_138.Translation.XY.m128d_f64[1];
      local_1b8._s_0.Z = local_138.Translation.ZW.m128d_f64[0];
      UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_1b8._s_0,&local_1f0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if (local_1e0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_1474ba39a;
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      fVar49 = this->Position;
LAB_1474ba3ac:
      pFVar39 = local_3d8;
      if (this->bInterrupted == false) {
        local_388 = (this->AnimInstance).WeakPtr;
        HandleEvents(this,fVar46,fVar49,local_3d8);
        bVar22 = FWeakObjectPtr::IsValid(&local_388);
        if ((bVar22) &&
           (pUVar32 = FWeakObjectPtr::Get(&local_388), *(int *)&pUVar32[5].field_0x8 == 0)) {
          if (bVar24) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar20) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((bVar13) && (FVar41 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar33 == (FThreadStats *)0x0) {
              pFVar34 = FThreadStatsPool::Get();
              pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
            }
            if (pFVar33->bWaitForExplicitFlush < pFVar33->ScopeCount) {
              local_2e8.NameAndInfo.Number = uVar43 & 0xffff6fff | 0x6000;
              local_2e8.NameAndInfo.Index.Value = FVar38.Value;
              QueryPerformanceCounter(&local_318);
              local_2e8.StatData.Pad[4] = '\0';
              local_2e8.StatData.Pad[5] = '\0';
              local_2e8.StatData.Pad[6] = '\0';
              local_2e8.StatData.Pad[7] = '\0';
              local_2e8.StatData.Pad[0] = local_318.s.LowPart._0_1_;
              local_2e8.StatData.Pad[1] = local_318.s.LowPart._1_1_;
              local_2e8.StatData.Pad[2] = local_318.s.LowPart._2_1_;
              local_2e8.StatData.Pad[3] = local_318.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(pFVar33,&local_2e8);
              piVar1 = &pFVar33->ScopeCount;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FThreadStats::Flush(pFVar33,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar33,false,false);
              }
            }
          }
          goto LAB_1474badde;
        }
      }
    }
    else {
LAB_1474ba39a:
      fVar49 = this->Position;
      pFVar39 = local_3d8;
      if (EVar21 == Moved) goto LAB_1474ba3ac;
    }
    if (((MontageCVars::bEndSectionRequiresTimeRemaining != false) &&
        ((this->MontageSubStepper).TimeRemaining <= fVar3)) ||
       (((this->MontageSubStepper).bReachedEndOfSection == false ||
        ((pFVar39 != (FBranchingPointMarker *)0x0 || (fVar49 != this->Position)))))) {
      if (EVar21 == NotMoved) {
        if (bVar24) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar13) {
          FThreadStats::AddMessage(FVar41,CycleScopeEnd);
        }
        goto LAB_1474baa5a;
      }
LAB_1474ba727:
      if (bVar14) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar13) && (FVar41 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar33 == (FThreadStats *)0x0) {
          pFVar34 = FThreadStatsPool::Get();
          pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
        }
        if (pFVar33->bWaitForExplicitFlush < pFVar33->ScopeCount) {
          local_2f8.NameAndInfo.Number = uVar43 & 0xffff6fff | 0x6000;
          local_2f8.NameAndInfo.Index.Value = FVar38.Value;
          QueryPerformanceCounter(&local_320);
          local_2f8.StatData.Pad[4] = '\0';
          local_2f8.StatData.Pad[5] = '\0';
          local_2f8.StatData.Pad[6] = '\0';
          local_2f8.StatData.Pad[7] = '\0';
          local_2f8.StatData.Pad[0] = local_320.s.LowPart._0_1_;
          local_2f8.StatData.Pad[1] = local_320.s.LowPart._1_1_;
          local_2f8.StatData.Pad[2] = local_320.s.LowPart._2_1_;
          local_2f8.StatData.Pad[3] = local_320.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar33,&local_2f8);
          piVar1 = &pFVar33->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar33,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar33,false,false);
          }
        }
      }
      cVar19 = this->bPlaying;
      FVar29 = StatPtr_STAT_AnimMontageInstance_Advance_Iteration;
      goto joined_r0x0001474b9dd8;
    }
    uVar26 = (this->MontageSubStepper).CurrentSectionIndex;
    if (bVar5 == false) {
      uVar25 = 0;
      if ((int)uVar26 < (this->PrevSections).ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar44 = (this->PrevSections).AllocatorInstance.Data;
    }
    else {
      uVar25 = 0;
      if ((int)uVar26 < (this->NextSections).ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar44 = (this->NextSections).AllocatorInstance.Data;
    }
    uVar25 = *(uint *)(pFVar44 + (longlong)(int)uVar26 * 4);
    pUVar7 = (this->Montage).field0_0x0.DebugPtr;
    if (uVar25 != 0xffffffff) {
      UAnimMontage::GetSectionStartAndEndTime(pUVar7,uVar25,&local_3f0,&local_3ec);
      fVar46 = local_3f0;
      if (bVar5 == false) {
        fVar46 = local_3ec - fVar17;
      }
      this->Position = fVar46;
      pUVar31 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
      local_2b8._0_8_ = 0;
      local_2b8._8_8_ = 0;
      local_2b8._16_4_ = 0;
      TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&local_2b8,&this->OnMontageSectionChanged);
      FVar35 = UAnimMontage::GetSectionName((this->Montage).field0_0x0.DebugPtr,(int)local_200);
      local_380.ObjectPtr.field0_0x0 = (FObjectPtr)(this->Montage).field0_0x0.DebugPtr;
      iVar6 = this->InstanceID;
      uVar8 = *(undefined8 *)FVar35;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_380.DebugPtr != (UAnimMontage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_380.DebugPtr);
      }
      local_358 = 0;
      local_368 = (undefined1  [8])0x0;
      FStack_360.Data = (FScriptContainerElement *)0x0;
      local_378 = iVar6;
      local_374 = uVar8;
      local_36c = uVar26 == uVar25;
      TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> *)
                 local_368,&local_2b8);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2b8);
      UAnimInstance::QueueMontageSectionChangedEvent
                (pUVar31,(FQueuedMontageSectionChangedEvent *)&local_380.ObjectPtr);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_368,
                 (FWriteAccessScope *)&local_228);
      if ((local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_360.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10);
        local_358 = 0;
      }
      if (local_228.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
      }
      if (FStack_360.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_360.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_368);
      goto LAB_1474ba727;
    }
    this->bPlaying = false;
    UAnimMontage::GetSectionStartAndEndTime(pUVar7,uVar26,&local_3e4,&local_3e8);
    if (bVar5 != false) {
      local_3e4 = local_3e8 - fVar17;
    }
    this->Position = local_3e4;
    if (bVar24) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar13) && (FVar41 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar33 == (FThreadStats *)0x0) {
        pFVar34 = FThreadStatsPool::Get();
        pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
      }
      if (pFVar33->bWaitForExplicitFlush < pFVar33->ScopeCount) {
        local_2d8.NameAndInfo.Number = uVar43 & 0xffff6fff | 0x6000;
        local_2d8.NameAndInfo.Index.Value = FVar38.Value;
        QueryPerformanceCounter(&local_300);
        local_2d8.StatData.Pad[4] = '\0';
        local_2d8.StatData.Pad[5] = '\0';
        local_2d8.StatData.Pad[6] = '\0';
        local_2d8.StatData.Pad[7] = '\0';
        local_2d8.StatData.Pad[0] = local_300.s.LowPart._0_1_;
        local_2d8.StatData.Pad[1] = local_300.s.LowPart._1_1_;
        local_2d8.StatData.Pad[2] = local_300.s.LowPart._2_1_;
        local_2d8.StatData.Pad[3] = local_300.s.LowPart._3_1_;
        pFVar37 = &local_2d8;
        goto LAB_1474baa20;
      }
    }
LAB_1474baa5a:
    if ((this->ForcedNextToPosition).bIsSet != false) {
      (this->ForcedNextToPosition).bIsSet = false;
    }
    if ((this->ForcedNextFromPosition).bIsSet != false) {
      (this->ForcedNextFromPosition).bIsSet = false;
    }
  }
  iVar6 = (this->MarkersPassedThisTick).ArrayNum;
  pFVar40 = (FPassedMarker *)(this->MarkersPassedThisTick).AllocatorInstance.Data;
  pFVar2 = pFVar40 + iVar6;
  while( true ) {
    if ((this->MarkersPassedThisTick).ArrayNum != iVar6) {
      local_413[0] = 0;
      `TCheckedPointerIterator<FPassedMarker,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_413);
    }
    if (pFVar40 == pFVar2) break;
    pUVar31 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
    FAnimTrace::OutputAnimSyncMarker(pUVar31,pFVar40);
    pFVar40 = pFVar40 + 1;
  }
  if (((this->Blend).DesiredValue == 0.0) &&
     (bVar23 = FAlphaBlend::IsComplete(&this->Blend), bVar23)) {
    Terminate(this);
    goto LAB_1474badde;
  }
  if ((this->bInterrupted != false) ||
     (bVar23 = FWeakObjectPtr::IsValid(&(this->AnimInstance).WeakPtr), !bVar23)) goto LAB_1474badde;
  FVar36 = StatPtr_STAT_AnimMontageInstance_TickBranchPoints;
  if (StatPtr_STAT_AnimMontageInstance_TickBranchPoints ==
      (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_TickBranchPoints>)0x0) {
    pFVar27 = ::FName::FName(&local_1f8,"STAT_AnimMontageInstance_TickBranchPoints");
    FVar36 = (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_TickBranchPoints>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_AnimMontageInstance_TickBranchPoints,*pFVar27,
                        L"AnimMontageInstance_TickBranchPoints","STATGROUP_Anim","STATCAT_Advanced",
                        L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar36;
  bVar23 = false;
  bVar12 = false;
  local_330.ComparisonIndex.Value = 0;
  local_330.Number = 0;
  bVar20 = false;
  bVar24 = false;
  if ((FVar41.ComparisonIndex.Value.Value == 0) && (FVar41.Number == 0)) {
LAB_1474bac42:
    bVar12 = bVar24;
    bVar23 = bVar20;
    bVar20 = false;
    FVar41 = local_330;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3e0[0]._s_0,(char *)*(FName *)((longlong)FVar36 + 0x10));
      bVar23 = false;
      bVar12 = true;
      bVar20 = false;
      bVar24 = true;
      if (-1 < CpuChannel->Enabled) {
        local_398.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_398.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_398,(wchar_t *)*(FName *)((longlong)FVar36 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                   ,0xa9c);
        bVar23 = true;
        bVar12 = true;
        bVar20 = true;
        bVar24 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1474bac42;
    local_410 = FVar41;
    FThreadStats::AddMessage(FVar41,CycleScopeStart);
    bVar20 = true;
  }
  local_400 = *(FName *)&(this->AnimInstance).WeakPtr;
  uVar43 = 0;
  if (0 < (this->ActiveStateBranchingPoints).ArrayNum) {
    local_410.ComparisonIndex.Value = 0;
    local_410.Number = 0;
    do {
      FVar35 = local_410;
      uVar26 = 0;
      if ((int)uVar43 < (this->ActiveStateBranchingPoints).ArrayNum) {
        uVar26 = ~uVar43 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar44 = (this->ActiveStateBranchingPoints).AllocatorInstance.Data + (longlong)FVar35;
      if (*(longlong *)(pFVar44 + 0x50) != 0) {
        iVar6 = this->InstanceID;
        TVar9 = (this->Montage).field0_0x0;
        pUVar31 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
        local_248 = UAnimInstance::GetSkelMeshComponentChecked(pUVar31);
        local_22c = 0;
        local_240 = TVar9;
        local_238 = pFVar44;
        local_230 = iVar6;
        (**(code **)(**(longlong **)(pFVar44 + 0x50) + 0x2f8))
                  (*(longlong **)(pFVar44 + 0x50),&local_248,param_1);
        local_390 = *(undefined8 *)(pFVar44 + 0x50);
        bVar24 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_400);
        if (!bVar24) {
          local_310 = &local_390;
          `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l5::<lambda_1>::operator()
                    (&local_310);
          break;
        }
        pUVar32 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_400);
        FVar35 = local_410;
        if (*(int *)&pUVar32[5].field_0x8 == 0) {
          local_258 = &local_400;
          local_250 = &local_390;
          `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l8::<lambda_2>::operator()
                    (&local_258);
          break;
        }
      }
      local_410 = (FName)((longlong)FVar35 + 0xb8);
      uVar43 = uVar43 + 1;
    } while ((int)uVar43 < (this->ActiveStateBranchingPoints).ArrayNum);
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar20) {
    FThreadStats::AddMessage(FVar41,CycleScopeEnd);
  }
LAB_1474badde:
  if ((local_3c8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_3c8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_3c8 & 4) != 0) {
    FThreadStats::AddMessage(local_3d0,CycleScopeEnd);
  }
  local_3c8 = 0;
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar42,CycleScopeEnd);
  }
  return;
}

// BranchingPointEventHandler @ 1474c0ff0

void __thiscall
FAnimMontageInstance::BranchingPointEventHandler
          (FAnimMontageInstance *this,FBranchingPointMarker *param_1)

{
  int *piVar1;
  TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> *this_00;
  longlong lVar2;
  UAnimMontage *pUVar3;
  TObjectPtr<UAnimMontage>_u_0 TVar4;
  UAnimNotifyState *pUVar5;
  FAnimNotifyEvent *pFVar6;
  FScriptContainerElement *pFVar7;
  UAnimNotify *pUVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  UObject *pUVar13;
  UFunction *pUVar14;
  UAnimInstance *pUVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> *pTVar19;
  FAnimNotifyEvent *pFVar20;
  FWeakObjectPtr local_res8 [2];
  TObjectPtr<UAnimNotifyState>_u_0 local_res18;
  TObjectPtr<UAnimNotifyState>_u_0 local_res20;
  FName local_f8;
  TObjectPtr<UAnimNotifyState>_u_0 *local_f0;
  TObjectPtr<UAnimNotifyState>_u_0 *local_e8;
  FString local_e0;
  FWeakObjectPtr *local_d0;
  TObjectPtr<UAnimNotifyState>_u_0 *local_c8;
  FWeakObjectPtr *local_c0;
  TObjectPtr<UAnimNotifyState>_u_0 *local_b8;
  USkeletalMeshComponent *local_b0;
  TObjectPtr<UAnimMontage>_u_0 local_a8;
  FAnimNotifyEvent *local_a0;
  int local_98;
  undefined1 local_94;
  USkeletalMeshComponent *local_90;
  TObjectPtr<UAnimMontage>_u_0 local_88;
  FAnimNotifyEvent *local_80;
  int local_78;
  undefined1 local_74;
  USkeletalMeshComponent *local_70;
  TObjectPtr<UAnimMontage>_u_0 local_68;
  FAnimNotifyEvent *local_60;
  int local_58;
  undefined1 local_54;
  FString local_50;
  
  this_00 = &this->AnimInstance;
  bVar10 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (((bVar10) && (pUVar3 = (this->Montage).field0_0x0.DebugPtr, pUVar3 != (UAnimMontage *)0x0)) &&
     (param_1 != (FBranchingPointMarker *)0x0)) {
    local_res8[0] = this_00->WeakPtr;
    iVar11 = param_1->NotifyIndex;
    if (iVar11 < (int)pUVar3->_padding_) {
      if ((iVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar20 = (FAnimNotifyEvent *)((longlong)iVar11 * 0xb8 + pUVar3->_padding_);
      if (pFVar20 != (FAnimNotifyEvent *)0x0) {
        if ((pFVar20->bConvertedFromBranchingPoint == false) || (pFVar20->NotifyName == (FName)0x0))
        {
          if ((pFVar20->NotifyStateClass).field0_0x0.DebugPtr == (UAnimNotifyState *)0x0) {
            if ((pFVar20->Notify).field0_0x0.DebugPtr == (UAnimNotify *)0x0) {
              pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              UAnimInstance::TriggerSingleAnimNotify(pUVar15,pFVar20);
            }
            else {
              iVar11 = this->InstanceID;
              TVar4 = (this->Montage).field0_0x0;
              pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              local_70 = UAnimInstance::GetSkelMeshComponentChecked(pUVar15);
              local_54 = 0;
              local_68 = TVar4;
              local_60 = pFVar20;
              local_58 = iVar11;
              pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              FAnimTrace::OutputAnimNotify(pUVar15,pFVar20,Event);
              pUVar8 = (pFVar20->Notify).field0_0x0.DebugPtr;
              (**(code **)(pUVar8->_padding_ + 0x2d0))(pUVar8,&local_70);
            }
          }
          else {
            iVar11 = this->InstanceID;
            TVar4 = (this->Montage).field0_0x0;
            if ((param_1->NotifyEventType).Value == '\0') {
              pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              local_b0 = UAnimInstance::GetSkelMeshComponentChecked(pUVar15);
              local_94 = 0;
              local_a8 = TVar4;
              local_a0 = pFVar20;
              local_98 = iVar11;
              pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              FAnimTrace::OutputAnimNotify(pUVar15,pFVar20,Begin);
              pUVar5 = (pFVar20->NotifyStateClass).field0_0x0.DebugPtr;
              (**(code **)(pUVar5->_padding_ + 0x2f0))(pUVar5,&local_b0);
              local_res18 = (pFVar20->NotifyStateClass).field0_0x0;
              bVar10 = FWeakObjectPtr::IsValid(local_res8);
              if (bVar10) {
                pUVar13 = FWeakObjectPtr::Get(local_res8);
                if (*(int *)&pUVar13[5].field_0x8 == 0) {
                  local_d0 = local_res8;
                  local_c8 = &local_res18;
                  `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l8::<lambda_2>::
                  operator()(&local_d0);
                }
                else {
                  pTVar19 = &this->ActiveStateBranchingPoints;
                  pFVar6 = (FAnimNotifyEvent *)(pTVar19->AllocatorInstance).Data;
                  if (((pFVar6 <= pFVar20) &&
                      (pFVar20 < pFVar6 + (this->ActiveStateBranchingPoints).ArrayMax)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  iVar11 = (this->ActiveStateBranchingPoints).ArrayNum;
                  piVar1 = &(this->ActiveStateBranchingPoints).ArrayMax;
                  if (iVar11 == *piVar1) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x8b8,&pTVar19->AllocatorInstance,piVar1);
                  }
                  (this->ActiveStateBranchingPoints).ArrayNum = iVar11 + 1;
                  FAnimNotifyEvent::FAnimNotifyEvent
                            ((FAnimNotifyEvent *)
                             ((pTVar19->AllocatorInstance).Data + (longlong)iVar11 * 0xb8),pFVar20);
                }
              }
              else {
                local_f0 = &local_res18;
                `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l5::<lambda_1>::
                operator()(&local_f0);
              }
            }
            else {
              pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              local_90 = UAnimInstance::GetSkelMeshComponentChecked(pUVar15);
              local_74 = 1;
              local_88 = TVar4;
              local_80 = pFVar20;
              local_78 = iVar11;
              pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              FAnimTrace::OutputAnimNotify(pUVar15,pFVar20,End);
              pUVar5 = (pFVar20->NotifyStateClass).field0_0x0.DebugPtr;
              (**(code **)(pUVar5->_padding_ + 0x300))(pUVar5,&local_90);
              local_res20 = (pFVar20->NotifyStateClass).field0_0x0;
              bVar10 = FWeakObjectPtr::IsValid(local_res8);
              if (bVar10) {
                pUVar13 = FWeakObjectPtr::Get(local_res8);
                if (*(int *)&pUVar13[5].field_0x8 == 0) {
                  local_c0 = local_res8;
                  local_b8 = &local_res20;
                  `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l8::<lambda_2>::
                  operator()(&local_c0);
                }
                else {
                  pTVar19 = &this->ActiveStateBranchingPoints;
                  pFVar7 = (pTVar19->AllocatorInstance).Data;
                  iVar11 = (this->ActiveStateBranchingPoints).ArrayNum;
                  for (pFVar16 = pFVar7; pFVar16 != pFVar7 + (longlong)iVar11 * 0xb8;
                      pFVar16 = pFVar16 + 0xb8) {
                    pUVar8 = *(UAnimNotify **)(pFVar16 + 0x48);
                    if ((((pUVar8 != (UAnimNotify *)0x0) &&
                         (pUVar8 == (pFVar20->Notify).field0_0x0.DebugPtr)) ||
                        ((pUVar5 = *(UAnimNotifyState **)(pFVar16 + 0x50),
                         pUVar5 != (UAnimNotifyState *)0x0 &&
                         (pUVar5 == (pFVar20->NotifyStateClass).field0_0x0.DebugPtr)))) ||
                       (((pUVar8 == (UAnimNotify *)0x0 && (pUVar5 == (UAnimNotifyState *)0x0)) &&
                        (*(FName *)(pFVar16 + 0x3c) == pFVar20->NotifyName)))) {
                      lVar2 = ((longlong)pFVar16 - (longlong)pFVar7) +
                              SUB168(SEXT816(-0x4de9bd37a6f4de9b) *
                                     SEXT816((longlong)pFVar16 - (longlong)pFVar7),8);
                      uVar17 = (int)(lVar2 >> 7) - (int)(lVar2 >> 0x3f);
                      if (uVar17 == 0xffffffff) {
                        return;
                      }
                      uVar12 = 0;
                      if ((int)(uVar17 + 1) <= iVar11) {
                        uVar12 = ~uVar17 >> 0x1f;
                      }
                      if ((uVar12 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x458,
                                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                                (pTVar19,uVar17,1);
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xb8,8,&pTVar19->AllocatorInstance,
                                 (this->ActiveStateBranchingPoints).ArrayNum,
                                 &(this->ActiveStateBranchingPoints).ArrayMax);
                      return;
                    }
                  }
                }
              }
              else {
                local_e8 = &local_res20;
                `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l5::<lambda_1>::
                operator()(&local_e8);
              }
            }
          }
        }
        else {
          ::FName::ToString(&pFVar20->NotifyName,&local_50);
          ::FString::PrintfImpl(&local_e0,L"MontageBranchingPoint_%s");
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_e0.Data.ArrayNum != 0) {
            FVar18.Data = local_e0.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_f8,(wchar_t *)FVar18.Data);
          pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pUVar14 = UObject::FindFunction(pUVar13,local_f8);
          if (pUVar14 == (UFunction *)0x0) {
            pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(&this_00->WeakPtr);
            UAnimInstance::TriggerSingleAnimNotify(pUVar15,pFVar20);
          }
          else {
            pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
            (**(code **)(*(longlong *)pUVar13 + 0x260))(pUVar13,pUVar14,0);
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// CanUseMarkerSync @ 1474c42f0

bool __thiscall FAnimMontageInstance::CanUseMarkerSync(FAnimMontageInstance *this)

{
  bool bVar1;
  
  if ((this->SyncGroupName != (FName)0x0) && ((this->Blend).DesiredValue == 0.0)) {
    bVar1 = FAlphaBlend::IsComplete(&this->Blend);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// GetCurrentSection @ 1474d8ce0

FName __thiscall FAnimMontageInstance::GetCurrentSection(FAnimMontageInstance *this)

{
  UAnimMontage *pUVar1;
  int iVar2;
  FCompositeSection *pFVar3;
  FName in_RDX;
  float local_res8 [2];
  
  pUVar1 = (this->Montage).field0_0x0.DebugPtr;
  if (pUVar1 != (UAnimMontage *)0x0) {
    iVar2 = UAnimMontage::GetAnimCompositeSectionIndexFromPos(pUVar1,this->Position,local_res8);
    if ((-1 < iVar2) &&
       (pUVar1 = (this->Montage).field0_0x0.DebugPtr, iVar2 < (pUVar1->CompositeSections).ArrayNum))
    {
      pFVar3 = UAnimMontage::GetAnimCompositeSection(pUVar1,iVar2);
      *(FName *)in_RDX = pFVar3->SectionName;
      return in_RDX;
    }
  }
  *(FName *)in_RDX = (FName)0x0;
  return in_RDX;
}

// GetNextSection @ 1474dbdf0

FName __thiscall FAnimMontageInstance::GetNextSection(FAnimMontageInstance *this)

{
  int iVar1;
  UAnimMontage *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FName FVar7;
  FCompositeSection *pFVar8;
  FName in_RDX;
  float local_res8 [2];
  
  pUVar2 = (this->Montage).field0_0x0.DebugPtr;
  if (pUVar2 != (UAnimMontage *)0x0) {
    uVar5 = UAnimMontage::GetAnimCompositeSectionIndexFromPos(pUVar2,this->Position,local_res8);
    if (((-1 < (int)uVar5) &&
        ((int)uVar5 < (((this->Montage).field0_0x0.DebugPtr)->CompositeSections).ArrayNum)) &&
       ((int)uVar5 < (this->NextSections).ArrayNum)) {
      uVar6 = 0;
      if ((int)uVar5 < (this->NextSections).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        FVar7 = (FName)(*pcVar3)();
        return FVar7;
      }
      iVar1 = *(int *)((this->NextSections).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
      if (((-1 < iVar1) &&
          (pUVar2 = (this->Montage).field0_0x0.DebugPtr,
          iVar1 < (pUVar2->CompositeSections).ArrayNum)) && (pUVar2 != (UAnimMontage *)0x0)) {
        pFVar8 = UAnimMontage::GetAnimCompositeSection(pUVar2,iVar1);
        *(FName *)in_RDX = pFVar8->SectionName;
        return in_RDX;
      }
    }
  }
  *(FName *)in_RDX = (FName)0x0;
  return in_RDX;
}

// GetNextSectionID @ 1474dbee0

int __thiscall FAnimMontageInstance::GetNextSectionID(FAnimMontageInstance *this,int *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *param_1;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->NextSections).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->NextSections).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    return *(int *)((this->NextSections).AllocatorInstance.Data + (longlong)(int)uVar1 * 4);
  }
  return -1;
}

// GetSectionNameFromID @ 1474df000

FName __thiscall FAnimMontageInstance::GetSectionNameFromID(FAnimMontageInstance *this,int *param_1)

{
  int iVar1;
  UAnimMontage *this_00;
  uint uVar2;
  FCompositeSection *pFVar3;
  int *in_R8;
  
  this_00 = (this->Montage).field0_0x0.DebugPtr;
  if (((this_00 != (UAnimMontage *)0x0) && (iVar1 = *in_R8, -1 < iVar1)) &&
     (iVar1 < (this_00->CompositeSections).ArrayNum)) {
    pFVar3 = UAnimMontage::GetAnimCompositeSection(this_00,iVar1);
    uVar2 = (pFVar3->SectionName).Number;
    param_1[0] = (pFVar3->SectionName).ComparisonIndex.Value;
    param_1[1] = uVar2;
    return (FName)param_1;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  return (FName)param_1;
}

// HandleEvents @ 1474e0740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimMontageInstance::HandleEvents
          (FAnimMontageInstance *this,float param_1,float param_2,FBranchingPointMarker *param_3)

{
  int *piVar1;
  UAnimMontage *pUVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  ForAnyElementType *pFVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_HandleEvents> FVar16;
  FAnimNotifyMontageInstanceContext *this_00;
  FAnimNotifyMontageInstanceContext *pFVar17;
  UObject *pUVar18;
  ForElementType<FSetElementId> FVar19;
  FNameEntryId FVar20;
  FName FVar21;
  FAnimNotifyEventReference *pFVar22;
  uint uVar23;
  longlong *plVar24;
  longlong lVar25;
  FWeakObjectPtr *this_01;
  undefined1 auStackY_218 [32];
  FAnimNotifyContext local_1b0;
  float local_198 [2];
  float local_190 [2];
  FAnimNotifyMontageInstanceContext *local_188;
  uint local_180;
  uint uStack_17c;
  FColor_u_0 local_178 [2];
  FName local_170;
  FWeakObjectPtr *local_168;
  FAnimMontageInstance *local_160;
  FName local_158;
  FScriptContainerElement *local_148;
  FBranchingPointMarker *local_140;
  TObjectPtr<UAnimationAsset>_u_0 local_138;
  float *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined2 local_118;
  undefined8 local_110;
  ForAnyElementType *local_108;
  TReferenceControllerBase<1> *local_100;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  FName local_b8 [2];
  TSet<TTuple<FName,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pFVar17 = (FAnimNotifyMontageInstanceContext *)0x0;
  FVar16 = StatPtr_STAT_AnimMontageInstance_HandleEvents;
  local_198[0] = param_2;
  local_190[0] = param_1;
  local_160 = this;
  local_140 = param_3;
  if (StatPtr_STAT_AnimMontageInstance_HandleEvents ==
      (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_HandleEvents>)0x0) {
    pFVar15 = ::FName::FName(local_b8,"STAT_AnimMontageInstance_HandleEvents");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_HandleEvents>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimMontageInstance_HandleEvents,
                        *pFVar15,L"AnimMontageInstance_HandleEvents","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar16;
  bVar7 = false;
  bVar8 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar10 = false;
  bVar11 = false;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar23 = FVar21.Number;
  if ((FVar20.Value != 0) || (uVar23 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar20.Value;
        local_170.Number = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                   ,0xab6);
        bVar7 = true;
        bVar8 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_180 = FVar20.Value;
      uStack_17c = uVar23;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar10 = true;
      goto LAB_1474e08bf;
    }
  }
  bVar8 = bVar11;
  bVar7 = bVar10;
  bVar10 = false;
  FVar21 = local_158;
LAB_1474e08bf:
  if (this->bInterrupted == false) {
    this_01 = &(this->AnimInstance).WeakPtr;
    local_168 = this_01;
    bVar11 = FWeakObjectPtr::IsValid(this_01);
    if (bVar11) {
      local_138.DebugPtr = (UAnimationAsset *)0x0;
      local_130 = local_198;
      local_d8 = 0;
      uStack_d0 = 0;
      local_128 = 0x3f800000;
      local_120 = 0x3f800000;
      local_118 = 0x100;
      local_110 = 0;
      local_108 = (ForAnyElementType *)0x0;
      local_100 = (TReferenceControllerBase<1> *)0x0;
      local_c8 = 0;
      local_c4 = 0;
      FAnimTickRecord::AllocateContextDataContainer((FAnimTickRecord *)&local_138.ObjectPtr);
      if ((local_108 == (ForAnyElementType *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = local_108;
      this_00 = ::operator_new(0x10);
      if (this_00 != (FAnimNotifyMontageInstanceContext *)0x0) {
        pFVar17 = UE::Anim::FAnimNotifyMontageInstanceContext::FAnimNotifyMontageInstanceContext
                            (this_00,this->InstanceID);
      }
      local_188 = pFVar17;
      if (((pFVar9->Data <= (FScriptContainerElement *)&local_188) &&
          ((FScriptContainerElement *)&local_188 <
           pFVar9->Data + (longlong)*(int *)((longlong)&pFVar9[1].Data + 4) * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = *(int *)&pFVar9[1].Data;
      piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar9,piVar1);
      }
      *(int *)&pFVar9[1].Data = iVar12 + 1;
      *(FAnimNotifyMontageInstanceContext **)(pFVar9->Data + (longlong)iVar12 * 8) = local_188;
      local_1b0.TickRecord = (FAnimTickRecord *)&local_138;
      pUVar2 = (this->Montage).field0_0x0.DebugPtr;
      local_1b0.ActiveNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.ActiveNotifies.ArrayNum = 0;
      local_1b0.ActiveNotifies.ArrayMax = 0;
      local_188 = (FAnimNotifyMontageInstanceContext *)0x0;
      (**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2,local_190,local_198,&local_1b0);
      uVar23 = local_1b0.ActiveNotifies.ArrayNum - 1;
      if (-1 < (int)uVar23) {
        lVar25 = (longlong)(int)uVar23 * 0x30;
        iVar12 = local_1b0.ActiveNotifies.ArrayNum;
        do {
          uVar14 = 0;
          if ((int)uVar23 < local_1b0.ActiveNotifies.ArrayNum) {
            uVar14 = ~uVar23 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((*(longlong *)(local_1b0.ActiveNotifies.AllocatorInstance.Data + lVar25 + 0x20) != 0)
              && (*(FAnimNotifyEvent **)
                   (local_1b0.ActiveNotifies.AllocatorInstance.Data + lVar25 + 0x10) !=
                  (FAnimNotifyEvent *)0x0)) &&
             (bVar11 = FAnimNotifyEvent::IsBranchingPoint
                                 (*(FAnimNotifyEvent **)
                                   (local_1b0.ActiveNotifies.AllocatorInstance.Data + lVar25 + 0x10)
                                 ), bVar11)) {
            uVar14 = 0;
            if (iVar12 <= local_1b0.ActiveNotifies.ArrayNum) {
              uVar14 = ~uVar23 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar22 = (FAnimNotifyEventReference *)
                      (local_1b0.ActiveNotifies.AllocatorInstance.Data + lVar25);
            DestructItems<FAnimNotifyEventReference,int>(pFVar22,1);
            iVar13 = (local_1b0.ActiveNotifies.ArrayNum - uVar23) + -1;
            if (iVar13 != 0) {
              memmove(pFVar22,pFVar22 + 1,(longlong)iVar13 * 0x30);
            }
            iVar13 = local_1b0.ActiveNotifies.ArrayNum + -1;
            local_1b0.ActiveNotifies.ArrayNum = iVar13;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,&local_1b0.ActiveNotifies.AllocatorInstance,iVar13,
                       &local_1b0.ActiveNotifies.ArrayMax);
          }
          iVar12 = iVar12 + -1;
          lVar25 = lVar25 + -0x30;
          uVar23 = uVar23 - 1;
          this = local_160;
          this_01 = local_168;
        } while (-1 < (int)uVar23);
      }
      pUVar18 = FWeakObjectPtr::Get(this_01);
      FAnimNotifyQueue::AddAnimNotifiesToDest
                ((FAnimNotifyQueue *)&pUVar18[0xd].field_0x8,true,&local_1b0.ActiveNotifies,
                 (TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *)
                 &pUVar18[0xd].field_0x18,this->NotifyWeight);
      local_a8.Elements._0_8_ = 0;
      local_a8.Elements._8_8_ = 0;
      local_a8.Elements._32_8_ = 0;
      local_a8.Elements._40_4_ = 0;
      local_a8.Elements._52_4_ = 0;
      local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_a8.HashSize = 0;
      pUVar2 = (this->Montage).field0_0x0.DebugPtr;
      local_a8.Elements._44_4_ = 0x80;
      local_a8.Elements._48_4_ = 0xffffffff;
      for (uVar23 = 0; (-1 < (int)uVar23 && ((int)uVar23 < (pUVar2->SlotAnimTracks).ArrayNum));
          uVar23 = uVar23 + 1) {
        if (((int)uVar23 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (pUVar2->SlotAnimTracks).AllocatorInstance.Data;
        lVar25 = (longlong)(int)uVar23;
        uVar4 = *(undefined8 *)(pFVar3 + lVar25 * 0x18);
        pFVar3 = pFVar3 + lVar25 * 0x18;
        uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar14 = uVar14 + (int)((ulonglong)uVar4 >> 0x20);
        if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
          FVar19 = (ForElementType<FSetElementId>)&local_a8.Hash;
          if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar19 = local_a8.Hash.SecondaryData;
          }
          iVar12 = *(int *)((longlong)FVar19 + (ulonglong)(local_a8.HashSize - 1U & uVar14) * 4);
          if (iVar12 != -1) {
            do {
              plVar24 = (longlong *)((longlong)iVar12 * 0x20 + local_a8.Elements._0_8_);
              if (*plVar24 == *(longlong *)pFVar3) {
                if (plVar24 != (longlong *)0x0) goto LAB_1474e0d20;
                break;
              }
              iVar12 = (int)plVar24[3];
            } while (iVar12 != -1);
          }
        }
        local_148 = pFVar3;
        TSet<TTuple<FName,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                  (&local_a8,(uint)&local_180,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar14,
                   (bool *)&local_148);
        plVar24 = (longlong *)((longlong)(int)local_180 * 0x20 + local_a8.Elements._0_8_);
LAB_1474e0d20:
        if ((longlong)local_1b0.ActiveNotifies._8_8_ < 0) {
          DestructItems<FAnimNotifyEventReference,int>
                    ((FAnimNotifyEventReference *)local_1b0.ActiveNotifies.AllocatorInstance.Data,
                     local_1b0.ActiveNotifies.ArrayNum);
          bVar11 = local_1b0.ActiveNotifies.ArrayMax != 0;
          local_1b0.ActiveNotifies._8_8_ =
               (ulonglong)(uint)local_1b0.ActiveNotifies.ArrayMax << 0x20;
          if (bVar11) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,0,&local_1b0.ActiveNotifies.AllocatorInstance,0,
                       &local_1b0.ActiveNotifies.ArrayMax);
          }
        }
        else {
          DestructItems<FAnimNotifyEventReference,int>
                    ((FAnimNotifyEventReference *)local_1b0.ActiveNotifies.AllocatorInstance.Data,
                     local_1b0.ActiveNotifies.ArrayNum);
          local_1b0.ActiveNotifies._8_8_ = local_1b0.ActiveNotifies._8_8_ & 0xffffffff00000000;
        }
        uVar14 = 0;
        if ((int)uVar23 < (pUVar2->SlotAnimTracks).ArrayNum) {
          uVar14 = ~uVar23 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FAnimTrack::GetAnimNotifiesFromTrackPositions
                  ((FAnimTrack *)
                   ((pUVar2->SlotAnimTracks).AllocatorInstance.Data + (lVar25 * 3 + 1) * 8),
                   local_190,local_198,&local_1b0);
        pFVar22 = (FAnimNotifyEventReference *)plVar24[1];
        uVar6 = plVar24[2];
        plVar24[1] = (longlong)local_1b0.ActiveNotifies.AllocatorInstance.Data;
        plVar24[2] = local_1b0.ActiveNotifies._8_8_;
        local_1b0.ActiveNotifies.AllocatorInstance.Data = (FScriptContainerElement *)pFVar22;
        local_1b0.ActiveNotifies._8_8_ = uVar6;
      }
      pUVar18 = FWeakObjectPtr::Get(local_168);
      this = local_160;
      FAnimNotifyQueue::AddAnimNotifies
                ((FAnimNotifyQueue *)&pUVar18[0xd].field_0x8,true,
                 (TMap<FName,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>,0>_>
                  *)&local_a8,local_160->NotifyWeight);
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      DestructItems<FAnimNotifyEventReference,int>
                ((FAnimNotifyEventReference *)local_1b0.ActiveNotifies.AllocatorInstance.Data,
                 local_1b0.ActiveNotifies.ArrayNum);
      if ((FAnimNotifyEventReference *)local_1b0.ActiveNotifies.AllocatorInstance.Data !=
          (FAnimNotifyEventReference *)0x0) {
        FMemory::Free(local_1b0.ActiveNotifies.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
      param_3 = local_140;
    }
    bVar11 = UpdateActiveStateBranchingPoints(this,local_198[0]);
    if ((bVar11) && (param_3 != (FBranchingPointMarker *)0x0)) {
      BranchingPointEventHandler(this,param_3);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// Initialize @ 1474e7ed0

void __thiscall FAnimMontageInstance::Initialize(FAnimMontageInstance *this,UAnimMontage *param_1)

{
  UAnimMontage *pUVar1;
  float fVar2;
  bool bVar3;
  
  this->InstanceID = IncrementInstanceID;
  IncrementInstanceID = IncrementInstanceID + 1;
  if (param_1 != (UAnimMontage *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    fVar2 = __real_3f800000;
    (this->Montage).field0_0x0.DebugPtr = param_1;
    this->Position = 0.0;
    this->BlendStartAlpha = 0.0;
    (this->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
    (this->MarkerTickRecord).NextMarker.MarkerIndex = -2;
    FAlphaBlend::SetValueRange(&this->Blend,0.0,fVar2);
    RefreshNextPrevSections(this);
    bVar3 = FWeakObjectPtr::IsValid(&(this->AnimInstance).WeakPtr);
    if ((bVar3) &&
       (pUVar1 = (this->Montage).field0_0x0.DebugPtr,
       0 < (pUVar1->MarkerData).AuthoredSyncMarkers.ArrayNum)) {
      this->SyncGroupName = pUVar1->SyncGroup;
    }
    (this->MontageSubStepper).MontageInstance = this;
    (this->MontageSubStepper).Montage = (UAnimMontage *)(this->Montage).field0_0x0;
  }
  return;
}

// InitializeBlend @ 1474e82a0

void __thiscall
FAnimMontageInstance::InitializeBlend(FAnimMontageInstance *this,FAlphaBlend *param_1)

{
  FAlphaBlend *this_00;
  
  this_00 = &this->Blend;
  FAlphaBlend::SetBlendOption(this_00,param_1->BlendOption);
  FAlphaBlend::SetCustomCurve(this_00,(param_1->CustomCurve).field0_0x0.DebugPtr);
  FAlphaBlend::SetBlendTime(this_00,param_1->BlendTime);
  return;
}

// JumpToSectionName @ 1474eb120

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAnimMontageInstance::JumpToSectionName(FAnimMontageInstance *this,FName *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  UAnimMontage *pUVar3;
  int iVar4;
  FCompositeSection *pFVar5;
  UAnimInstance *this_00;
  bool bVar6;
  float fVar7;
  float fVar8;
  FName local_res8;
  FDestructionSentinel local_88;
  undefined1 local_70 [8];
  ForAnyElementType local_68;
  int local_60;
  TObjectPtr<UAnimMontage>_u_0 local_58;
  int local_50;
  FName local_4c;
  undefined1 local_44;
  undefined1 local_40 [8];
  ForAnyElementType FStack_38;
  int local_30;
  
  iVar4 = UAnimMontage::GetSectionIndex((this->Montage).field0_0x0.DebugPtr,*param_1);
  if ((iVar4 < 0) ||
     (pUVar3 = (this->Montage).field0_0x0.DebugPtr, (pUVar3->CompositeSections).ArrayNum <= iVar4))
  {
    if (2 < (byte)LogAnimMontage._0_1_) {
      pUVar3 = (this->Montage).field0_0x0.DebugPtr;
      if (pUVar3 == (UAnimMontage *)0x0) {
        ::FString::FString((FString *)&local_88,L"None");
      }
      else {
        local_res8 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_res8,(FString *)&local_88);
      }
      ::FName::ToString(param_1,(FString *)local_70);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
      if ((atomic<unsigned___int64>)local_70 != (atomic<unsigned___int64>)0x0) {
        FMemory::Free((void *)local_70);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
    }
    return false;
  }
  pFVar5 = UAnimMontage::GetAnimCompositeSection(pUVar3,iVar4);
  if (param_2) {
    fVar7 = UAnimMontage::GetSectionLength((this->Montage).field0_0x0.DebugPtr,iVar4);
    fVar7 = fVar7 - __real_38d1b717;
  }
  else {
    fVar7 = 0.0;
  }
  cVar1 = *(char *)((longlong)&pFVar5->_padding_ + 1);
  if (cVar1 != '\0') {
    fVar8 = __real_bf800000;
    if (cVar1 == '\0') goto LAB_1474eb1e1;
    if (cVar1 == '\x01') {
      fVar8 = *(float *)((longlong)&pFVar5->_padding_ + 4) +
              *(float *)((longlong)&pFVar5->_padding_ + 4);
      goto LAB_1474eb1e1;
    }
    if (cVar1 == '\x02') {
      fVar8 = *(float *)((longlong)&pFVar5->_padding_ + 4) * *(float *)&pFVar5->_padding_ +
              *(float *)((longlong)&pFVar5->_padding_ + 4);
      goto LAB_1474eb1e1;
    }
  }
  fVar8 = *(float *)((longlong)&pFVar5->_padding_ + 4);
LAB_1474eb1e1:
  (this->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
  (this->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  this->Position = fVar7 + fVar8;
  OnMontagePositionChanged(this,param_1);
  iVar2 = (this->MontageSubStepper).CurrentSectionIndex;
  if ((iVar2 < 0) || ((((this->Montage).field0_0x0.DebugPtr)->CompositeSections).ArrayNum <= iVar2))
  {
    bVar6 = false;
  }
  else {
    bVar6 = iVar2 == iVar4;
  }
  this_00 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
  local_70 = (undefined1  [8])0x0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> *)
             local_70,&this->OnMontageSectionChanged);
  local_58.ObjectPtr.field0_0x0 = (FObjectPtr)(this->Montage).field0_0x0.DebugPtr;
  local_4c = *param_1;
  local_50 = this->InstanceID;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_58.DebugPtr != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
  }
  local_40 = (undefined1  [8])0x0;
  FStack_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_44 = bVar6;
  TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> *)
             local_40,(TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy>
                       *)local_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_88);
  if ((local_60 != 0) && (local_68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_88.Accessor._4_4_,(int)local_88.Accessor),&local_88);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_70);
  UAnimInstance::QueueMontageSectionChangedEvent
            (this_00,(FQueuedMontageSectionChangedEvent *)&local_58.ObjectPtr);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_88);
  if ((local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_88.Accessor._4_4_,(int)local_88.Accessor),&local_88);
  }
  if (FStack_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  return true;
}

// MontageSync_Follow @ 1474ed1c0

void __thiscall
FAnimMontageInstance::MontageSync_Follow(FAnimMontageInstance *this,FAnimMontageInstance *param_1)

{
  int *piVar1;
  int iVar2;
  FAnimMontageInstance *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  TArray<FAnimMontageInstance_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FAnimMontageInstance *local_res8;
  
  pFVar3 = this->MontageSyncLeader;
  if (pFVar3 != (FAnimMontageInstance *)0x0) {
    pTVar11 = &pFVar3->MontageSyncFollowers;
    pFVar4 = (pTVar11->AllocatorInstance).Data;
    iVar7 = (pFVar3->MontageSyncFollowers).ArrayNum;
    for (pFVar10 = pFVar4; pFVar10 != pFVar4 + (longlong)iVar7 * 8; pFVar10 = pFVar10 + 8) {
      if (*(FAnimMontageInstance **)pFVar10 == this) {
        uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar4 >> 3);
        if (uVar9 != 0xffffffff) {
          uVar8 = 0;
          if ((int)(uVar9 + 1) <= iVar7) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (pFVar3->MontageSyncFollowers).ArrayNum;
          pFVar4 = (pTVar11->AllocatorInstance).Data;
          iVar7 = iVar2 + ~uVar9;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(pFVar4 + (longlong)(int)uVar9 * 8,pFVar4 + (longlong)(iVar2 - iVar7) * 8,
                    (longlong)iVar7 << 3);
          }
          piVar1 = &(pFVar3->MontageSyncFollowers).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar11->AllocatorInstance,(pFVar3->MontageSyncFollowers).ArrayNum,
                     &(pFVar3->MontageSyncFollowers).ArrayMax);
        }
        break;
      }
    }
    this->MontageSyncLeader = (FAnimMontageInstance *)0x0;
  }
  if ((param_1 != (FAnimMontageInstance *)0x0) && (param_1 != this)) {
    local_res8 = this;
    TArray<FAnimMontageInstance_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FAnimMontageInstance_*>(&param_1->MontageSyncFollowers,&local_res8);
    this->MontageSyncLeader = param_1;
  }
  return;
}

// MontageSync_GetFrameCounter @ 1474ed330

uint __thiscall FAnimMontageInstance::MontageSync_GetFrameCounter(FAnimMontageInstance *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = GFrameCounter;
  return SUB164(auVar1 / ZEXT816(0xffffffff),0) + (int)GFrameCounter;
}

// MontageSync_HasBeenUpdatedThisFrame @ 1474ed350

bool __thiscall
FAnimMontageInstance::MontageSync_HasBeenUpdatedThisFrame(FAnimMontageInstance *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = GFrameCounter;
  return this->MontageSyncUpdateFrameCounter ==
         SUB164(auVar1 / ZEXT816(0xffffffff),0) + (int)GFrameCounter;
}

// MontageSync_PerformSyncToLeader @ 1474ed380

void __thiscall FAnimMontageInstance::MontageSync_PerformSyncToLeader(FAnimMontageInstance *this)

{
  FAnimMontageInstance *pFVar1;
  UAnimMontage *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FCompositeSection *pFVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  int local_res8 [2];
  int local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  
  pFVar1 = this->MontageSyncLeader;
  if (pFVar1 == (FAnimMontageInstance *)0x0) {
    return;
  }
  if (__real_38d1b717 <
      (float)((uint)(this->Position - pFVar1->Position) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->Position = pFVar1->Position;
    (this->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
    (this->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  }
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  this->PlayRate = pFVar1->PlayRate;
  pUVar2 = (pFVar1->Montage).field0_0x0.DebugPtr;
  if (((pUVar2 == (UAnimMontage *)0x0) ||
      (iVar5 = UAnimMontage::GetAnimCompositeSectionIndexFromPos
                         (pUVar2,pFVar1->Position,local_res18), iVar5 < 0)) ||
     (pUVar2 = (pFVar1->Montage).field0_0x0.DebugPtr, (pUVar2->CompositeSections).ArrayNum <= iVar5)
     ) {
    local_40 = 0;
    FVar10 = FVar11;
  }
  else {
    pFVar8 = UAnimMontage::GetAnimCompositeSection(pUVar2,iVar5);
    FVar10 = pFVar8->SectionName;
  }
  if (FVar10 == (FName)0x0) {
    return;
  }
  pUVar2 = (this->Montage).field0_0x0.DebugPtr;
  FVar9 = FVar11;
  if (((pUVar2 != (UAnimMontage *)0x0) &&
      (iVar5 = UAnimMontage::GetAnimCompositeSectionIndexFromPos(pUVar2,this->Position,local_res20),
      -1 < iVar5)) &&
     (pUVar2 = (this->Montage).field0_0x0.DebugPtr, iVar5 < (pUVar2->CompositeSections).ArrayNum)) {
    pFVar8 = UAnimMontage::GetAnimCompositeSection(pUVar2,iVar5);
    FVar9 = pFVar8->SectionName;
  }
  if (FVar9 != FVar10) {
    return;
  }
  pFVar1 = this->MontageSyncLeader;
  pUVar2 = (pFVar1->Montage).field0_0x0.DebugPtr;
  if (pUVar2 != (UAnimMontage *)0x0) {
    uVar6 = UAnimMontage::GetAnimCompositeSectionIndexFromPos(pUVar2,pFVar1->Position,local_48);
    if (((-1 < (int)uVar6) &&
        ((int)uVar6 < (((pFVar1->Montage).field0_0x0.DebugPtr)->CompositeSections).ArrayNum)) &&
       ((int)uVar6 < (pFVar1->NextSections).ArrayNum)) {
      uVar7 = 0;
      if ((int)uVar6 < (pFVar1->NextSections).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)((pFVar1->NextSections).AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
      if (((-1 < iVar5) &&
          (pUVar2 = (pFVar1->Montage).field0_0x0.DebugPtr,
          iVar5 < (pUVar2->CompositeSections).ArrayNum)) && (pUVar2 != (UAnimMontage *)0x0)) {
        pFVar8 = UAnimMontage::GetAnimCompositeSection(pUVar2,iVar5);
        FVar11 = pFVar8->SectionName;
        goto LAB_1474ed549;
      }
    }
  }
  local_38 = 0;
LAB_1474ed549:
  local_res10[0] = UAnimMontage::GetSectionIndex((this->Montage).field0_0x0.DebugPtr,FVar10);
  local_res8[0] = UAnimMontage::GetSectionIndex((this->Montage).field0_0x0.DebugPtr,FVar11);
  SetNextSectionID(this,local_res10,local_res8);
  return;
}

// MontageSync_PostUpdate @ 1474ed5b0

void __thiscall FAnimMontageInstance::MontageSync_PostUpdate(FAnimMontageInstance *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = GFrameCounter;
  this->MontageSyncUpdateFrameCounter = SUB164(auVar1 / ZEXT816(0xffffffff),0) + (int)GFrameCounter;
  if ((this->MontageSyncLeader != (FAnimMontageInstance *)0x0) &&
     (auVar2._8_8_ = 0, auVar2._0_8_ = GFrameCounter,
     this->MontageSyncLeader->MontageSyncUpdateFrameCounter ==
     SUB164(auVar2 / ZEXT816(0xffffffff),0) + (int)GFrameCounter)) {
    MontageSync_PerformSyncToLeader(this);
    return;
  }
  return;
}

// MontageSync_PreUpdate @ 1474ed610

void __thiscall FAnimMontageInstance::MontageSync_PreUpdate(FAnimMontageInstance *this)

{
  FAnimMontageInstance *pFVar1;
  UAnimMontage *pUVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FCompositeSection *pFVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  int aiStackX_8 [2];
  int aiStackX_10 [2];
  float afStackX_18 [2];
  float afStackX_20 [2];
  float afStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((this->MontageSyncLeader == (FAnimMontageInstance *)0x0) ||
     (auVar3._8_8_ = 0, auVar3._0_8_ = GFrameCounter,
     this->MontageSyncLeader->MontageSyncUpdateFrameCounter ==
     SUB164(auVar3 / ZEXT816(0xffffffff),0) + (int)GFrameCounter)) {
    return;
  }
  pFVar1 = this->MontageSyncLeader;
  if (pFVar1 == (FAnimMontageInstance *)0x0) {
    return;
  }
  if (__real_38d1b717 <
      (float)((uint)(this->Position - pFVar1->Position) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->Position = pFVar1->Position;
    (this->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
    (this->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  }
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  this->PlayRate = pFVar1->PlayRate;
  pUVar2 = (pFVar1->Montage).field0_0x0.DebugPtr;
  if (((pUVar2 == (UAnimMontage *)0x0) ||
      (iVar6 = UAnimMontage::GetAnimCompositeSectionIndexFromPos
                         (pUVar2,pFVar1->Position,afStackX_18), iVar6 < 0)) ||
     (pUVar2 = (pFVar1->Montage).field0_0x0.DebugPtr, (pUVar2->CompositeSections).ArrayNum <= iVar6)
     ) {
    uStack_40 = 0;
    FVar11 = FVar12;
  }
  else {
    pFVar9 = UAnimMontage::GetAnimCompositeSection(pUVar2,iVar6);
    FVar11 = pFVar9->SectionName;
  }
  if (FVar11 == (FName)0x0) {
    return;
  }
  pUVar2 = (this->Montage).field0_0x0.DebugPtr;
  FVar10 = FVar12;
  if (((pUVar2 != (UAnimMontage *)0x0) &&
      (iVar6 = UAnimMontage::GetAnimCompositeSectionIndexFromPos(pUVar2,this->Position,afStackX_20),
      -1 < iVar6)) &&
     (pUVar2 = (this->Montage).field0_0x0.DebugPtr, iVar6 < (pUVar2->CompositeSections).ArrayNum)) {
    pFVar9 = UAnimMontage::GetAnimCompositeSection(pUVar2,iVar6);
    FVar10 = pFVar9->SectionName;
  }
  if (FVar10 != FVar11) {
    return;
  }
  pFVar1 = this->MontageSyncLeader;
  pUVar2 = (pFVar1->Montage).field0_0x0.DebugPtr;
  if (pUVar2 != (UAnimMontage *)0x0) {
    uVar7 = UAnimMontage::GetAnimCompositeSectionIndexFromPos(pUVar2,pFVar1->Position,afStack_48);
    if (((-1 < (int)uVar7) &&
        ((int)uVar7 < (((pFVar1->Montage).field0_0x0.DebugPtr)->CompositeSections).ArrayNum)) &&
       ((int)uVar7 < (pFVar1->NextSections).ArrayNum)) {
      uVar8 = 0;
      if ((int)uVar7 < (pFVar1->NextSections).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = *(int *)((pFVar1->NextSections).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
      if (((-1 < iVar6) &&
          (pUVar2 = (pFVar1->Montage).field0_0x0.DebugPtr,
          iVar6 < (pUVar2->CompositeSections).ArrayNum)) && (pUVar2 != (UAnimMontage *)0x0)) {
        pFVar9 = UAnimMontage::GetAnimCompositeSection(pUVar2,iVar6);
        FVar12 = pFVar9->SectionName;
        goto LAB_1474ed549;
      }
    }
  }
  uStack_38 = 0;
LAB_1474ed549:
  aiStackX_10[0] = UAnimMontage::GetSectionIndex((this->Montage).field0_0x0.DebugPtr,FVar11);
  aiStackX_8[0] = UAnimMontage::GetSectionIndex((this->Montage).field0_0x0.DebugPtr,FVar12);
  SetNextSectionID(this,aiStackX_10,aiStackX_8);
  return;
}

// MontageSync_StopFollowing @ 1474ed650

void __thiscall FAnimMontageInstance::MontageSync_StopFollowing(FAnimMontageInstance *this)

{
  int *piVar1;
  int iVar2;
  FAnimMontageInstance *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  TArray<FAnimMontageInstance_*,TSizedDefaultAllocator<32>_> *pTVar11;
  
  pFVar3 = this->MontageSyncLeader;
  if (pFVar3 != (FAnimMontageInstance *)0x0) {
    pTVar11 = &pFVar3->MontageSyncFollowers;
    pFVar4 = (pTVar11->AllocatorInstance).Data;
    iVar7 = (pFVar3->MontageSyncFollowers).ArrayNum;
    for (pFVar10 = pFVar4; pFVar10 != pFVar4 + (longlong)iVar7 * 8; pFVar10 = pFVar10 + 8) {
      if (*(FAnimMontageInstance **)pFVar10 == this) {
        uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar4 >> 3);
        if (uVar9 != 0xffffffff) {
          uVar8 = 0;
          if ((int)(uVar9 + 1) <= iVar7) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (pFVar3->MontageSyncFollowers).ArrayNum;
          pFVar4 = (pTVar11->AllocatorInstance).Data;
          iVar7 = iVar2 + ~uVar9;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(pFVar4 + (longlong)(int)uVar9 * 8,pFVar4 + (longlong)(iVar2 - iVar7) * 8,
                    (longlong)iVar7 << 3);
          }
          piVar1 = &(pFVar3->MontageSyncFollowers).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar11->AllocatorInstance,(pFVar3->MontageSyncFollowers).ArrayNum,
                     &(pFVar3->MontageSyncFollowers).ArrayMax);
        }
        break;
      }
    }
    this->MontageSyncLeader = (FAnimMontageInstance *)0x0;
  }
  return;
}

// MontageSync_StopLeading @ 1474ed790

void __thiscall FAnimMontageInstance::MontageSync_StopLeading(FAnimMontageInstance *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->MontageSyncFollowers).AllocatorInstance.Data;
  iVar3 = (this->MontageSyncFollowers).ArrayNum;
  pFVar2 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->MontageSyncFollowers).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAnimMontageInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar2) break;
    lVar4 = *(longlong *)pFVar7;
    if (lVar4 != 0) {
      if (*(FAnimMontageInstance **)(lVar4 + 0x1f8) != this) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3541163122091882607>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                           ,0x791,"MontageSyncFollower->MontageSyncLeader == this");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(undefined8 *)(lVar4 + 0x1f8) = 0;
    }
    pFVar7 = pFVar7 + 8;
  }
  piVar1 = &(this->MontageSyncFollowers).ArrayMax;
  (this->MontageSyncFollowers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->MontageSyncFollowers).AllocatorInstance,0,piVar1);
  }
  return;
}

// OnMontagePositionChanged @ 1474ef2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimMontageInstance::OnMontagePositionChanged(FAnimMontageInstance *this,FName *param_1)

{
  float fVar1;
  UAnimMontage *pUVar2;
  UBlendProfile *pUVar3;
  FName local_res8;
  TObjectPtr<UCurveFloat>_u_0 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  TObjectPtr<UBlendProfile>_u_0 local_38;
  TObjectPtr<UBlendProfile>_u_0 local_30;
  undefined4 local_28;
  undefined1 local_24;
  EMontageBlendMode local_20;
  
  if ((this->bPlaying != false) && ((this->Blend).DesiredValue == 0.0)) {
    if (2 < (byte)LogAnimMontage._0_1_) {
      ::FName::ToString(param_1,(FString *)&local_38.ObjectPtr);
      pUVar2 = (this->Montage).field0_0x0.DebugPtr;
      if (pUVar2 == (UAnimMontage *)0x0) {
        ::FString::FString((FString *)&local_48.ObjectPtr,L"None");
      }
      else {
        local_res8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_res8,(FString *)&local_48.ObjectPtr);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
      if (local_48.DebugPtr != (UCurveFloat *)0x0) {
        FMemory::Free(local_48.DebugPtr);
      }
      if (local_38.DebugPtr != (UBlendProfile *)0x0) {
        FMemory::Free(local_38.DebugPtr);
      }
    }
    fVar1 = this->PlayRate;
    local_38.DebugPtr = (UBlendProfile *)0x0;
    FAlphaBlendArgs::FAlphaBlendArgs((FAlphaBlendArgs *)&local_30.ObjectPtr);
    pUVar2 = (this->Montage).field0_0x0.DebugPtr;
    local_20 = Standard;
    if (pUVar2 != (UAnimMontage *)0x0) {
      FAlphaBlendArgs::FAlphaBlendArgs((FAlphaBlendArgs *)&local_48.ObjectPtr,&pUVar2->BlendIn);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_48.DebugPtr != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
      }
      pUVar2 = (this->Montage).field0_0x0.DebugPtr;
      local_28 = local_40;
      local_24 = local_3c;
      local_20 = pUVar2->BlendModeIn;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (pUVar2->BlendProfileIn).field0_0x0.DebugPtr, pUVar3 != (UBlendProfile *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      local_38 = (pUVar2->BlendProfileIn).field0_0x0;
    }
    Play(this,fVar1,(FMontageBlendSettings *)&local_38.ObjectPtr);
  }
  return;
}

// Pause @ 1474ef660

void __thiscall FAnimMontageInstance::Pause(FAnimMontageInstance *this)

{
  this->bPlaying = false;
  return;
}

// Play @ 1474f04b0

void __thiscall FAnimMontageInstance::Play(FAnimMontageInstance *this,float param_1)

{
  UAnimMontage *pUVar1;
  UBlendProfile *pUVar2;
  TObjectPtr<UCurveFloat>_u_0 local_48;
  float local_40;
  EAlphaBlendOption local_3c;
  TObjectPtr<UBlendProfile>_u_0 local_38;
  FAlphaBlendArgs local_30;
  EMontageBlendMode local_20;
  
  local_38.DebugPtr = (UBlendProfile *)0x0;
  FAlphaBlendArgs::FAlphaBlendArgs(&local_30);
  pUVar1 = (this->Montage).field0_0x0.DebugPtr;
  local_20 = Standard;
  if (pUVar1 != (UAnimMontage *)0x0) {
    FAlphaBlendArgs::FAlphaBlendArgs((FAlphaBlendArgs *)&local_48.ObjectPtr,&pUVar1->BlendIn);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
    }
    pUVar1 = (this->Montage).field0_0x0.DebugPtr;
    local_30.BlendTime = local_40;
    local_30.BlendOption = local_3c;
    local_20 = pUVar1->BlendModeIn;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (pUVar1->BlendProfileIn).field0_0x0.DebugPtr, pUVar2 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_38 = (pUVar1->BlendProfileIn).field0_0x0;
  }
  Play(this,param_1,(FMontageBlendSettings *)&local_38.ObjectPtr);
  return;
}

// Play @ 1474f05a0

void __thiscall
FAnimMontageInstance::Play(FAnimMontageInstance *this,float param_1,FMontageBlendSettings *param_2)

{
  FAlphaBlend *this_00;
  float fVar1;
  UAnimMontage *pUVar2;
  UBlendProfile *pUVar3;
  code *pcVar4;
  bool bVar5;
  UAnimInstance *this_01;
  FAlphaBlend *pFVar6;
  TObjectPtr<UCurveFloat>_u_0 local_b8;
  float local_b0;
  EAlphaBlendOption local_ac;
  FInertializationRequest local_a8;
  FAlphaBlend local_48;
  
  pUVar2 = (this->Montage).field0_0x0.DebugPtr;
  this->PlayRate = param_1;
  this->bPlaying = true;
  if (pUVar2 == (UAnimMontage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Montage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                       ,0x5dd,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_b8 = (TObjectPtr<UCurveFloat>_u_0)(param_2->Blend).CustomCurve.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_b8.DebugPtr != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b8.DebugPtr);
  }
  local_b0 = (param_2->Blend).BlendTime;
  local_ac = (param_2->Blend).BlendOption;
  bVar5 = FWeakObjectPtr::IsValid(&(this->AnimInstance).WeakPtr);
  if ((bVar5) && (param_2->BlendMode == Inertialization)) {
    local_a8.Duration = -1.0;
    local_a8.BlendProfile.field0_0x0.DebugPtr = (TObjectPtr<UBlendProfile_const_>_u_0)0x0;
    local_a8.bUseBlendMode = false;
    local_a8.BlendMode = Linear;
    local_a8.CustomBlendCurve.field0_0x0.DebugPtr = (TObjectPtr<UCurveFloat>_u_0)0x0;
    local_a8.Tag.ComparisonIndex.Value = 0;
    local_a8.Tag.Number = 0;
    FText::FText(&local_a8.Description_DEPRECATED);
    local_a8.BlendMode = local_ac;
    local_a8.Duration = local_b0;
    local_a8.DescriptionString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.DescriptionString.Data.ArrayNum = 0;
    local_a8.DescriptionString.Data.ArrayMax = 0;
    local_a8.NodeId = -1;
    local_a8.AnimInstance.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_b8.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b8.DebugPtr);
    }
    local_a8.CustomBlendCurve.field0_0x0 = local_b8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (param_2->BlendProfile).field0_0x0.DebugPtr, pUVar3 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_a8.BlendProfile.field0_0x0.ObjectPtr.field0_0x0 =
         *(TObjectPtr<UBlendProfile_const_>_u_0 *)&(param_2->BlendProfile).field0_0x0;
    if ((local_ac != Linear) ||
       (local_a8._16_2_ = local_a8._16_2_ & 0xff00, local_b8.DebugPtr != (UCurveFloat *)0x0)) {
      local_a8.bUseBlendMode = true;
    }
    this_01 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
    UAnimInstance::RequestMontageInertialization
              (this_01,(this->Montage).field0_0x0.DebugPtr,&local_a8);
    local_b0 = 0.0;
    if (local_a8.DescriptionString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.DescriptionString.Data.AllocatorInstance.Data);
    }
    if (local_a8.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.Description_DEPRECATED.TextData.Reference + 0x10))();
    }
  }
  this_00 = &this->Blend;
  fVar1 = (this->Blend).BlendedValue;
  pFVar6 = FAlphaBlend::FAlphaBlend(&local_48,(FAlphaBlendArgs *)&local_b8.ObjectPtr);
  FAlphaBlend::SetBlendOption(this_00,pFVar6->BlendOption);
  FAlphaBlend::SetCustomCurve(this_00,(pFVar6->CustomCurve).field0_0x0.DebugPtr);
  FAlphaBlend::SetBlendTime(this_00,pFVar6->BlendTime);
  this->BlendStartAlpha = (this->Blend).AlphaLerp;
  FAlphaBlend::SetBlendTime(this_00,local_b0 * this->DefaultBlendTimeMultiplier);
  FAlphaBlend::SetValueRange(this_00,fVar1,__real_3f800000);
  this->bEnableAutoBlendOut = ((this->Montage).field0_0x0.DebugPtr)->bEnableAutoBlendOut;
  this->ActiveBlendProfile = (UBlendProfile *)(param_2->BlendProfile).field0_0x0;
  return;
}

// PreviewSequencerMontagePosition @ 1474f1c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAnimMontage * __cdecl
FAnimMontageInstance::PreviewSequencerMontagePosition
          (FName param_1,USkeletalMeshComponent *param_2,int *param_3,UAnimSequenceBase *param_4,
          float param_5,float param_6,float param_7,bool param_8,bool param_9,bool param_10)

{
  int *piVar1;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FAnimNotifyEventReference *pFVar4;
  UAnimInstance *this;
  UAnimMontage *pUVar5;
  FAnimMontageInstance *this_00;
  UWorld *local_res10;
  
  if (param_2 == (USkeletalMeshComponent *)0x0) {
    return (UAnimMontage *)0x0;
  }
  this = USkeletalMeshComponent::GetAnimInstance(param_2);
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::GetMontageInstanceForID(this,*param_3);
    pUVar5 = SetSequencerMontagePosition
                       (param_1,this,param_3,param_4,param_5,param_6,param_7,param_8,param_10);
    if (pUVar5 != (UAnimMontage *)0x0) {
      this_00 = UAnimInstance::GetMontageInstanceForID(this,*param_3);
      HandleEvents(this_00,param_5,param_6,(FBranchingPointMarker *)0x0);
      if (param_9) {
        return pUVar5;
      }
      pTVar2 = &(this->NotifyQueue).AnimNotifies;
      piVar1 = &(this->NotifyQueue).AnimNotifies.ArrayMax;
      pFVar4 = (FAnimNotifyEventReference *)(pTVar2->AllocatorInstance).Data;
      iVar3 = (this->NotifyQueue).AnimNotifies.ArrayNum;
      if ((this->NotifyQueue).AnimNotifies.ArrayMax < 0) {
        DestructItems<FAnimNotifyEventReference,int>(pFVar4,iVar3);
        iVar3 = *piVar1;
        (this->NotifyQueue).AnimNotifies.ArrayNum = 0;
        if (iVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FAnimNotifyEventReference,int>(pFVar4,iVar3);
        (this->NotifyQueue).AnimNotifies.ArrayNum = 0;
      }
      TSet<TTuple<FName,FAnimNotifyArray>,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,FAnimNotifyArray>,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>,FDefaultSetAllocator>
               *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies);
      (this->NotifyQueue).PredictedLODLevel = *(int *)((longlong)&param_2->_padding_ + 4);
      local_res10 = (UWorld *)param_2->_padding_;
      if (local_res10 == (UWorld *)0x0) {
        local_res10 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      FWeakObjectPtr::operator=(&(this->NotifyQueue).World.WeakPtr,(FObjectPtr)&local_res10);
      return pUVar5;
    }
  }
  return (UAnimMontage *)0x0;
}

// PreviewSequencerMontagePosition @ 1474f1df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAnimMontage * __cdecl
FAnimMontageInstance::PreviewSequencerMontagePosition
          (FName param_1,USkeletalMeshComponent *param_2,UAnimInstance *param_3,int *param_4,
          UAnimSequenceBase *param_5,float param_6,float param_7,float param_8,bool param_9,
          bool param_10,bool param_11)

{
  int *piVar1;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FAnimNotifyEventReference *pFVar4;
  UAnimMontage *pUVar5;
  FAnimMontageInstance *this;
  FWeakObjectPtr local_res18;
  undefined8 local_48 [6];
  
  if (param_3 != (UAnimInstance *)0x0) {
    UAnimInstance::GetMontageInstanceForID(param_3,*param_4);
    pUVar5 = SetSequencerMontagePosition
                       (param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11);
    if (pUVar5 != (UAnimMontage *)0x0) {
      this = UAnimInstance::GetMontageInstanceForID(param_3,*param_4);
      HandleEvents(this,param_6,param_7,(FBranchingPointMarker *)0x0);
      if (param_10) {
        return pUVar5;
      }
      pTVar2 = &(param_3->NotifyQueue).AnimNotifies;
      piVar1 = &(param_3->NotifyQueue).AnimNotifies.ArrayMax;
      pFVar4 = (FAnimNotifyEventReference *)(pTVar2->AllocatorInstance).Data;
      iVar3 = (param_3->NotifyQueue).AnimNotifies.ArrayNum;
      if ((param_3->NotifyQueue).AnimNotifies.ArrayMax < 0) {
        DestructItems<FAnimNotifyEventReference,int>(pFVar4,iVar3);
        (param_3->NotifyQueue).AnimNotifies.ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FAnimNotifyEventReference,int>(pFVar4,iVar3);
        (param_3->NotifyQueue).AnimNotifies.ArrayNum = 0;
      }
      TSet<TTuple<FName,FAnimNotifyArray>,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,FAnimNotifyArray>,TDefaultMapHashableKeyFuncs<FName,FAnimNotifyArray,0>,FDefaultSetAllocator>
               *)&(param_3->NotifyQueue).UnfilteredMontageAnimNotifies);
      if (param_2 == (USkeletalMeshComponent *)0x0) {
        (param_3->NotifyQueue).PredictedLODLevel = -1;
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_48[0] = 0;
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_48);
        (param_3->NotifyQueue).World.WeakPtr = local_res18;
        return pUVar5;
      }
      (param_3->NotifyQueue).PredictedLODLevel = *(int *)((longlong)&param_2->_padding_ + 4);
      local_res18 = (FWeakObjectPtr)param_2->_padding_;
      if (local_res18 == (FWeakObjectPtr)0x0) {
        local_res18 = (FWeakObjectPtr)UActorComponent::GetWorld_Uncached((UActorComponent *)param_2)
        ;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res18 != (FWeakObjectPtr)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res18);
      }
      FWeakObjectPtr::operator=(&(param_3->NotifyQueue).World.WeakPtr,(FObjectPtr)&local_res18);
      return pUVar5;
    }
  }
  return (UAnimMontage *)0x0;
}

// RefreshNextPrevSections @ 1474f3120

void __thiscall FAnimMontageInstance::RefreshNextPrevSections(FAnimMontageInstance *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  UAnimMontage *pUVar12;
  longlong lVar13;
  
  iVar5 = (((this->Montage).field0_0x0.DebugPtr)->CompositeSections).ArrayNum;
  if (0 < iVar5) {
    lVar11 = 0;
    pTVar2 = &this->NextSections;
    piVar1 = &(this->NextSections).ArrayMax;
    (this->NextSections).ArrayNum = 0;
    if (*piVar1 != iVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar5,&pTVar2->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(((this->Montage).field0_0x0.DebugPtr)->CompositeSections).ArrayNum,
               &pTVar2->AllocatorInstance,&(this->NextSections).ArrayNum,piVar1);
    pTVar3 = &this->PrevSections;
    uVar10 = (((this->Montage).field0_0x0.DebugPtr)->CompositeSections).ArrayNum;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar1 = &(this->PrevSections).ArrayMax;
    piVar4 = &(this->PrevSections).ArrayNum;
    *piVar4 = 0;
    if (*piVar1 != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar10,&pTVar3->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(((this->Montage).field0_0x0.DebugPtr)->CompositeSections).ArrayNum,
               &pTVar3->AllocatorInstance,piVar4,piVar1);
    pUVar12 = (this->Montage).field0_0x0.DebugPtr;
    uVar10 = 0;
    if (0 < (pUVar12->CompositeSections).ArrayNum) {
      do {
        uVar8 = 0;
        if ((int)uVar10 < *piVar4) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((pTVar3->AllocatorInstance).Data + lVar11) = 0xffffffff;
        lVar11 = lVar11 + 4;
        pUVar12 = (this->Montage).field0_0x0.DebugPtr;
      } while ((int)uVar10 < (pUVar12->CompositeSections).ArrayNum);
    }
    uVar10 = 0;
    if (0 < (pUVar12->CompositeSections).ArrayNum) {
      lVar13 = 0;
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < (pUVar12->CompositeSections).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = UAnimMontage::GetSectionIndex
                          ((this->Montage).field0_0x0.DebugPtr,
                           *(FName *)((pUVar12->CompositeSections).AllocatorInstance.Data +
                                     lVar11 + 0x38));
        uVar8 = 0;
        if ((int)uVar10 < (this->NextSections).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(uint *)((pTVar2->AllocatorInstance).Data + lVar13) = uVar9;
        if ((-1 < (int)uVar9) && ((int)uVar9 < (this->NextSections).ArrayNum)) {
          uVar8 = 0;
          if ((int)uVar9 < (this->PrevSections).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar9 * 4) = uVar10;
        }
        pUVar12 = (this->Montage).field0_0x0.DebugPtr;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x50;
        lVar13 = lVar13 + 4;
      } while ((int)uVar10 < (pUVar12->CompositeSections).ArrayNum);
    }
  }
  return;
}

// SetNextSectionID @ 1474f8700

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAnimMontageInstance::SetNextSectionID(FAnimMontageInstance *this,int *param_1,int *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  int iVar3;
  UAnimMontage *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FCompositeSection *pFVar11;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  
  uVar2 = *param_1;
  uVar10 = 0;
  if (((int)uVar2 < 0) || ((this->NextSections).ArrayNum <= (int)uVar2)) {
    bVar8 = false;
  }
  else {
    pTVar1 = &this->NextSections;
    bVar8 = true;
    uVar9 = 0;
    if ((int)uVar2 < (this->NextSections).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if (*(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar2 * 4) != -1) {
      uVar2 = *param_1;
      uVar9 = uVar10;
      if ((int)uVar2 < (this->NextSections).ArrayNum) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar3 = *(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar2 * 4);
      if ((-1 < iVar3) && (iVar3 < (this->PrevSections).ArrayNum)) {
        uVar2 = *param_1;
        uVar9 = uVar10;
        if ((int)uVar2 < (this->NextSections).ArrayNum) {
          uVar9 = ~uVar2 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar2 = *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar2 * 4);
        uVar9 = 0;
        if ((int)uVar2 < (this->PrevSections).ArrayNum) {
          uVar9 = ~uVar2 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        *(undefined4 *)((this->PrevSections).AllocatorInstance.Data + (longlong)(int)uVar2 * 4) =
             0xffffffff;
      }
    }
  }
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) && ((int)uVar2 < (this->PrevSections).ArrayNum)) {
    iVar3 = *param_1;
    uVar9 = 0;
    if ((int)uVar2 < (this->PrevSections).ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    *(int *)((this->PrevSections).AllocatorInstance.Data + (longlong)(int)uVar2 * 4) = iVar3;
  }
  if (bVar8) {
    uVar2 = *param_1;
    iVar3 = *param_2;
    if ((int)uVar2 < (this->NextSections).ArrayNum) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    *(int *)((this->NextSections).AllocatorInstance.Data + (longlong)(int)uVar2 * 4) = iVar3;
    pUVar4 = (this->Montage).field0_0x0.DebugPtr;
    if (((pUVar4 == (UAnimMontage *)0x0) || (iVar3 = *param_2, iVar3 < 0)) ||
       ((pUVar4->CompositeSections).ArrayNum <= iVar3)) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      OnMontagePositionChanged(this,&local_res8);
      bVar8 = true;
    }
    else {
      pFVar11 = UAnimMontage::GetAnimCompositeSection(pUVar4,iVar3);
      local_res8 = pFVar11->SectionName;
      OnMontagePositionChanged(this,&local_res8);
      bVar8 = true;
    }
  }
  else {
    if (2 < (byte)LogAnimMontage._0_1_) {
      pUVar4 = (this->Montage).field0_0x0.DebugPtr;
      if (pUVar4 == (UAnimMontage *)0x0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        local_res20 = (FName)pUVar4->_padding_;
        ::FName::ToString(&local_res20,&local_78);
      }
      pUVar4 = (this->Montage).field0_0x0.DebugPtr;
      if (((pUVar4 == (UAnimMontage *)0x0) || (iVar3 = *param_2, iVar3 < 0)) ||
         ((pUVar4->CompositeSections).ArrayNum <= iVar3)) {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
      }
      else {
        pFVar11 = UAnimMontage::GetAnimCompositeSection(pUVar4,iVar3);
        local_res10 = pFVar11->SectionName;
      }
      ::FName::ToString(&local_res10,&local_58);
      pUVar4 = (this->Montage).field0_0x0.DebugPtr;
      if (((pUVar4 == (UAnimMontage *)0x0) || (iVar3 = *param_1, iVar3 < 0)) ||
         ((pUVar4->CompositeSections).ArrayNum <= iVar3)) {
        local_res18.ComparisonIndex.Value = 0;
        local_res18.Number = 0;
      }
      else {
        pFVar11 = UAnimMontage::GetAnimCompositeSection(pUVar4,iVar3);
        local_res18 = pFVar11->SectionName;
      }
      ::FName::ToString(&local_res18,&local_68);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    bVar8 = false;
  }
  return bVar8;
}

// SetNextSectionName @ 1474f8b40

bool __thiscall
FAnimMontageInstance::SetNextSectionName(FAnimMontageInstance *this,FName *param_1,FName *param_2)

{
  bool bVar1;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = UAnimMontage::GetSectionIndex((this->Montage).field0_0x0.DebugPtr,*param_1);
  local_res8[0] = UAnimMontage::GetSectionIndex((this->Montage).field0_0x0.DebugPtr,*param_2);
  bVar1 = SetNextSectionID(this,local_res10,local_res8);
  return bVar1;
}

// SetSequencerMontagePosition @ 1474f8ce0

/* WARNING: Enum "Type": Some values do not have unique names */

UAnimMontage * __cdecl
FAnimMontageInstance::SetSequencerMontagePosition
          (FName param_1,UAnimInstance *param_2,int *param_3,UAnimSequenceBase *param_4,
          float param_5,float param_6,float param_7,bool param_8,bool param_9)

{
  FAnimMontageInstance *pFVar1;
  UAnimMontage *pUVar2;
  FName local_res10;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  FString local_38 [2];
  
  if (param_2 == (UAnimInstance *)0x0) {
    if (2 < (byte)LogSkeletalMesh._0_1_) {
      local_res10 = (FName)param_4->_padding_;
      ::FName::ToString(&local_res10,local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar1 = UAnimInstance::GetMontageInstanceForID(param_2,*param_3);
    if (pFVar1 != (FAnimMontageInstance *)0x0) {
LAB_1474f8da4:
      pUVar2 = (pFVar1->Montage).field0_0x0.DebugPtr;
      *param_3 = pFVar1->InstanceID;
      FAlphaBlend::SetDesiredValue(&pFVar1->Blend,param_7);
      FAlphaBlend::SetAlpha(&pFVar1->Blend,param_7);
      pFVar1->BlendStartAlpha = (pFVar1->Blend).AlphaLerp;
      if (param_9) {
        if ((TOptional<float> *)local_48 != &pFVar1->ForcedNextFromPosition) {
          (pFVar1->ForcedNextFromPosition).TypedValue = param_5;
          (pFVar1->ForcedNextFromPosition).bIsSet = true;
        }
        if ((TOptional<float> *)local_40 != &pFVar1->ForcedNextToPosition) {
          (pFVar1->ForcedNextToPosition).TypedValue = param_6;
          (pFVar1->ForcedNextToPosition).bIsSet = true;
          pFVar1->bPlaying = param_9;
          return pUVar2;
        }
      }
      else {
        pFVar1->Position = param_6;
        (pFVar1->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
        (pFVar1->MarkerTickRecord).NextMarker.MarkerIndex = -2;
      }
      pFVar1->bPlaying = param_9;
      return pUVar2;
    }
    pUVar2 = UAnimMontage::CreateSlotAnimationAsDynamicMontage
                       (param_4,param_1,0.0,0.0,0.0,1,__real_bf800000,0.0);
    if (pUVar2 != (UAnimMontage *)0x0) {
      UAnimInstance::Montage_Play(param_2,pUVar2,__real_3f800000,MontageLength,0.0,false);
      pFVar1 = UAnimInstance::GetActiveInstanceForMontage(param_2,pUVar2);
      if (pFVar1 != (FAnimMontageInstance *)0x0) {
        pFVar1->bEnableAutoBlendOut = false;
        goto LAB_1474f8da4;
      }
    }
  }
  return (UAnimMontage *)0x0;
}

// SetSequencerMontagePosition @ 1474f8ef0

UAnimMontage * __cdecl
FAnimMontageInstance::SetSequencerMontagePosition
          (FName param_1,USkeletalMeshComponent *param_2,int *param_3,UAnimSequenceBase *param_4,
          float param_5,float param_6,float param_7,bool param_8,bool param_9)

{
  UAnimInstance *pUVar1;
  UAnimMontage *pUVar2;
  
  if (param_2 != (USkeletalMeshComponent *)0x0) {
    pUVar1 = USkeletalMeshComponent::GetAnimInstance(param_2);
    pUVar2 = SetSequencerMontagePosition
                       (param_1,pUVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return pUVar2;
  }
  return (UAnimMontage *)0x0;
}

// SimulateAdvance @ 1474f9fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAnimMontageInstance::SimulateAdvance
          (FAnimMontageInstance *this,float param_1,float *param_2,
          FRootMotionMovementParams *param_3)

{
  UAnimMontage *pUVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  bool bVar10;
  char cVar11;
  EMontageSubStepResult EVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  TTransform<double> *pTVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  float fVar19;
  undefined1 auStackY_288 [32];
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  undefined8 local_248;
  undefined4 local_240;
  FMontageSubStepper local_238;
  FAnimExtractContext local_1a8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pUVar1 = (this->Montage).field0_0x0.DebugPtr;
  if (pUVar1 == (UAnimMontage *)0x0) {
    bVar10 = false;
  }
  else {
    cVar11 = (**(code **)(pUVar1->_padding_ + 0x340))();
    fVar5 = __real_38d1b717;
    fVar4 = __real_322bcc77;
    if ((cVar11 == '\0') || (0 < this->DisableRootMotionCount)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    local_238.SectionStartPositions_Target.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.SectionStartPositions_Target.ArrayNum = 0;
    local_238.SectionStartPositions_Target.ArrayMax = 0;
    local_238.SectionEndPositions_Target.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.SectionEndPositions_Target.ArrayNum = 0;
    local_238.SectionEndPositions_Target.ArrayMax = 0;
    local_238.TimeStretchCurveInstance.bHasValidData = false;
    local_238.TimeStretchCurveInstance.P_Marker_Original.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_238.TimeStretchCurveInstance.P_Marker_Original.ArrayNum = 0;
    local_238.TimeStretchCurveInstance.P_Marker_Original.ArrayMax = 0;
    local_238.TimeStretchCurveInstance.P_Marker_Target.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_238.TimeStretchCurveInstance.P_Marker_Target.ArrayNum = 0;
    local_238.TimeStretchCurveInstance.P_Marker_Target.ArrayMax = 0;
    local_238.Cached_CombinedPlayRate = 0.0;
    local_238.PlayRate = 0.0;
    local_238.DeltaMove = 0.0;
    local_238.bPlayingForward = true;
    local_238.CurrentSectionIndex = 0xffffffff;
    local_238.CurrentSectionStartTime = 0.0;
    local_238.CurrentSectionLength = 0.0;
    local_238.bReachedEndOfSection = false;
    local_238.bHasValidTimeStretchCurveData = false;
    local_238.TimeStretchMarkerIndex = -1;
    local_238.Cached_P_Target = 3.4028235e+38;
    local_238.Cached_P_Original = 3.4028235e+38;
    local_238.Montage = *(UAnimMontage **)&(this->Montage).field0_0x0;
    local_238.MontageInstance = this;
    local_238.TimeRemaining = param_1;
    while (fVar4 < local_238.TimeRemaining) {
      fVar19 = *param_2;
      EVar12 = FMontageSubStepper::Advance(&local_238,param_2,(FBranchingPointMarker **)0x0);
      if (EVar12 != Moved) break;
      if (bVar10) {
        local_240 = 0;
        local_1a8.bExtractRootMotion = false;
        local_1a8.DeltaTimeRecord.bPreviousIsValid = false;
        local_1a8.DeltaTimeRecord._9_3_ = 0;
        local_1a8.CurrentTime = 0.0;
        local_248 = 0;
        local_1a8.DeltaTimeRecord.Delta = 0.0;
        local_1a8.DeltaTimeRecord.Previous = 0.0;
        local_1a8.bLooping = false;
        local_1a8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.PoseCurves.ArrayNum = 0;
        local_1a8.PoseCurves.ArrayMax = 0;
        local_1a8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.BonesRequired.ArrayNum = 0;
        local_1a8.BonesRequired.ArrayMax = 0;
        local_1a8.InterpolationOverride.bIsSet = false;
        pTVar16 = UAnimMontage::ExtractRootMotionFromTrackRange
                            ((this->Montage).field0_0x0.DebugPtr,&local_f8,fVar19,*param_2,
                             &local_1a8);
        if (param_3->bHasRootMotion == false) {
          param_3->bHasRootMotion = true;
          dVar3 = (pTVar16->Rotation).XY.m128d_f64[1];
          (param_3->RootMotionTransform).Rotation.XY.m128d_f64[0] =
               (pTVar16->Rotation).XY.m128d_f64[0];
          (param_3->RootMotionTransform).Rotation.XY.m128d_f64[1] = dVar3;
          dVar3 = (pTVar16->Rotation).ZW.m128d_f64[1];
          (param_3->RootMotionTransform).Rotation.ZW.m128d_f64[0] =
               (pTVar16->Rotation).ZW.m128d_f64[0];
          (param_3->RootMotionTransform).Rotation.ZW.m128d_f64[1] = dVar3;
          dVar3 = (pTVar16->Translation).XY.m128d_f64[1];
          (param_3->RootMotionTransform).Translation.XY.m128d_f64[0] =
               (pTVar16->Translation).XY.m128d_f64[0];
          (param_3->RootMotionTransform).Translation.XY.m128d_f64[1] = dVar3;
          dVar3 = (pTVar16->Translation).ZW.m128d_f64[1];
          (param_3->RootMotionTransform).Translation.ZW.m128d_f64[0] =
               (pTVar16->Translation).ZW.m128d_f64[0];
          (param_3->RootMotionTransform).Translation.ZW.m128d_f64[1] = dVar3;
          dVar3 = (pTVar16->Scale3D).XY.m128d_f64[1];
          (param_3->RootMotionTransform).Scale3D.XY.m128d_f64[0] =
               (pTVar16->Scale3D).XY.m128d_f64[0];
          (param_3->RootMotionTransform).Scale3D.XY.m128d_f64[1] = dVar3;
          dVar3 = (pTVar16->Scale3D).ZW.m128d_f64[1];
          (param_3->RootMotionTransform).Scale3D.ZW.m128d_f64[0] =
               (pTVar16->Scale3D).ZW.m128d_f64[0];
          (param_3->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
          uVar7 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
          uVar6 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
          (param_3->RootMotionTransform).Scale3D.XY.m128d_f64[0] =
               FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
          (param_3->RootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)uVar6;
          (param_3->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)uVar7;
          (param_3->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
          param_3->BlendWeight = 1.0;
        }
        else {
          local_158.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_158.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_158.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_158.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_158.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_158.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_158.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_158.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_158.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_158.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_158,pTVar16,&param_3->RootMotionTransform);
          (param_3->RootMotionTransform).Rotation.XY.m128d_f64[0] =
               local_158.Rotation.XY.m128d_f64[0];
          (param_3->RootMotionTransform).Rotation.XY.m128d_f64[1] =
               local_158.Rotation.XY.m128d_f64[1];
          (param_3->RootMotionTransform).Rotation.ZW.m128d_f64[0] =
               local_158.Rotation.ZW.m128d_f64[0];
          (param_3->RootMotionTransform).Rotation.ZW.m128d_f64[1] =
               local_158.Rotation.ZW.m128d_f64[1];
          (param_3->RootMotionTransform).Translation.XY.m128d_f64[0] =
               local_158.Translation.XY.m128d_f64[0];
          (param_3->RootMotionTransform).Translation.XY.m128d_f64[1] =
               local_158.Translation.XY.m128d_f64[1];
          (param_3->RootMotionTransform).Translation.ZW.m128d_f64[0] =
               local_158.Translation.ZW.m128d_f64[0];
          (param_3->RootMotionTransform).Translation.ZW.m128d_f64[1] =
               local_158.Translation.ZW.m128d_f64[1];
          (param_3->RootMotionTransform).Scale3D.XY.m128d_f64[0] = local_158.Scale3D.XY.m128d_f64[0]
          ;
          (param_3->RootMotionTransform).Scale3D.XY.m128d_f64[1] = local_158.Scale3D.XY.m128d_f64[1]
          ;
          (param_3->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = local_158.Scale3D.ZW.m128d_f64[0]
          ;
          (param_3->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = local_158.Scale3D.ZW.m128d_f64[1]
          ;
          uVar7 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
          uVar6 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
          (param_3->RootMotionTransform).Scale3D.XY.m128d_f64[0] =
               FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
          (param_3->RootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)uVar6;
          (param_3->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)uVar7;
          (param_3->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
        }
        if (local_1a8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.BonesRequired.AllocatorInstance.Data);
        }
        if (local_1a8.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.PoseCurves.AllocatorInstance.Data);
        }
      }
      iVar9 = local_238.CurrentSectionIndex;
      bVar8 = local_238.bPlayingForward;
      if (local_238.bReachedEndOfSection != false) {
        lVar18 = (longlong)local_238.CurrentSectionIndex;
        if (local_238.bPlayingForward == false) {
          uVar15 = 0;
          if (local_238.CurrentSectionIndex < (this->PrevSections).ArrayNum) {
            uVar15 = (uint)~local_238.CurrentSectionIndex >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar2 = (code *)swi(3);
            uVar14 = (*pcVar2)();
            return (bool)uVar14;
          }
          pFVar17 = (this->PrevSections).AllocatorInstance.Data;
        }
        else {
          uVar15 = 0;
          if (local_238.CurrentSectionIndex < (this->NextSections).ArrayNum) {
            uVar15 = (uint)~local_238.CurrentSectionIndex >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar2 = (code *)swi(3);
            uVar14 = (*pcVar2)();
            return (bool)uVar14;
          }
          pFVar17 = (this->NextSections).AllocatorInstance.Data;
        }
        pUVar1 = (this->Montage).field0_0x0.DebugPtr;
        if (*(int *)(pFVar17 + lVar18 * 4) == -1) {
          UAnimMontage::GetSectionStartAndEndTime(pUVar1,iVar9,&local_24c,&local_250);
          if (bVar8 != false) {
            local_24c = local_250 - fVar5;
          }
          *param_2 = local_24c;
          break;
        }
        UAnimMontage::GetSectionStartAndEndTime
                  (pUVar1,*(int *)(pFVar17 + lVar18 * 4),&local_258,&local_254);
        fVar19 = local_258;
        if (bVar8 == false) {
          fVar19 = local_254 - fVar5;
        }
        *param_2 = fVar19;
      }
    }
    if (local_238.TimeStretchCurveInstance.P_Marker_Target.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.TimeStretchCurveInstance.P_Marker_Target.AllocatorInstance.Data);
    }
    if (local_238.TimeStretchCurveInstance.P_Marker_Original.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.TimeStretchCurveInstance.P_Marker_Original.AllocatorInstance.Data);
    }
    if (local_238.SectionEndPositions_Target.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.SectionEndPositions_Target.AllocatorInstance.Data);
    }
    if (local_238.SectionStartPositions_Target.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.SectionStartPositions_Target.AllocatorInstance.Data);
    }
    bVar10 = true;
  }
  return bVar10;
}

// Stop @ 1474faf00

void __thiscall
FAnimMontageInstance::Stop(FAnimMontageInstance *this,FAlphaBlend *param_1,bool param_2)

{
  UAnimMontage *pUVar1;
  UBlendProfile *pUVar2;
  TObjectPtr<UCurveFloat>_u_0 local_38;
  float local_30;
  EAlphaBlendOption local_2c;
  TObjectPtr<UBlendProfile>_u_0 local_28;
  FAlphaBlendArgs local_20;
  EMontageBlendMode local_10;
  
  local_28.DebugPtr = (UBlendProfile *)0x0;
  FAlphaBlendArgs::FAlphaBlendArgs(&local_20);
  local_10 = Standard;
  FAlphaBlendArgs::FAlphaBlendArgs((FAlphaBlendArgs *)&local_38.ObjectPtr,param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_38.DebugPtr != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
  }
  pUVar1 = (this->Montage).field0_0x0.DebugPtr;
  local_20.BlendOption = local_2c;
  local_20.BlendTime = local_30;
  if (pUVar1 != (UAnimMontage *)0x0) {
    local_10 = pUVar1->BlendModeOut;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (pUVar1->BlendProfileOut).field0_0x0.DebugPtr, pUVar2 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_28 = (pUVar1->BlendProfileOut).field0_0x0;
  }
  Stop(this,(FMontageBlendSettings *)&local_28.ObjectPtr,param_2);
  return;
}

// Stop @ 1474fafe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimMontageInstance::Stop(FAnimMontageInstance *this,FMontageBlendSettings *param_1,bool param_2)

{
  FAlphaBlend *this_00;
  float fVar1;
  EMontageBlendMode EVar2;
  UAnimMontage *pUVar3;
  FScriptContainerElement *pFVar4;
  UCurveFloat *pUVar5;
  UBlendProfile *pUVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FAlphaBlend *pFVar10;
  UAnimInstance *this_01;
  FScriptContainerElement *pFVar11;
  FAlphaBlendArgs *pFVar12;
  FName local_res8;
  TObjectPtr<UCurveFloat>_u_0 local_e8;
  float local_e0;
  EAlphaBlendOption local_dc;
  TObjectPtr<UAnimMontage>_u_0 local_d8;
  TObjectPtr<UBlendProfile>_u_0 local_d0;
  undefined1 local_c8 [8];
  TObjectPtr<UCurveFloat>_u_0 TStack_c0;
  undefined8 local_b8;
  FText local_b0;
  void *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> local_78;
  FDestructionSentinel local_60 [2];
  
  pUVar3 = (this->Montage).field0_0x0.DebugPtr;
  if ((pUVar3 != (UAnimMontage *)0x0) && (5 < (byte)LogAnimMontage._0_1_)) {
    local_res8 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res8,(FString *)&local_e8.ObjectPtr);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
    if (local_e8.DebugPtr != (UCurveFloat *)0x0) {
      FMemory::Free(local_e8.DebugPtr);
    }
  }
  if ((this->bInterrupted == false) && (param_2)) {
    this->bInterrupted = true;
  }
  this_00 = &this->Blend;
  if ((this->Blend).DesiredValue == 0.0) {
    fVar1 = (param_1->Blend).BlendTime;
    if (fVar1 < (this->Blend).BlendTime) {
      FAlphaBlend::SetBlendTime(this_00,fVar1);
      this->BlendStartAlpha = (this->Blend).AlphaLerp;
      FAlphaBlend::SetDesiredValue(this_00,0.0);
    }
  }
  else {
    local_e8 = (TObjectPtr<UCurveFloat>_u_0)(param_1->Blend).CustomCurve.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_e8.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e8.DebugPtr);
    }
    EVar2 = param_1->BlendMode;
    local_e0 = (param_1->Blend).BlendTime;
    local_dc = (param_1->Blend).BlendOption;
    if (EVar2 == Inertialization) {
      local_e0 = 0.0;
    }
    pFVar10 = FAlphaBlend::FAlphaBlend
                        ((FAlphaBlend *)&local_d8.ObjectPtr,(FAlphaBlendArgs *)&local_e8.ObjectPtr);
    FAlphaBlend::SetBlendOption(this_00,pFVar10->BlendOption);
    FAlphaBlend::SetCustomCurve(this_00,(pFVar10->CustomCurve).field0_0x0.DebugPtr);
    FAlphaBlend::SetBlendTime(this_00,pFVar10->BlendTime);
    this->BlendStartAlpha = (this->Blend).AlphaLerp;
    FAlphaBlend::SetDesiredValue(this_00,0.0);
    FAlphaBlend::Update(this_00,0.0);
    pUVar3 = (this->Montage).field0_0x0.DebugPtr;
    this->ActiveBlendProfile = (UBlendProfile *)(param_1->BlendProfile).field0_0x0;
    if ((pUVar3 != (UAnimMontage *)0x0) &&
       (this_01 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr),
       this_01 != (UAnimInstance *)0x0)) {
      uVar8 = UAnimInstance::GetLastMontageFlushFrame(this_01);
      (**(code **)(*(longlong *)this_01 + 0x2d0))(this_01,this);
      local_78._0_8_ = 0;
      local_78._8_8_ = 0;
      local_78._16_4_ = 0;
      TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&local_78,&this->OnMontageBlendingOutStarted);
      local_d8 = (TObjectPtr<UAnimMontage>_u_0)(this->Montage).field0_0x0.DebugPtr;
      bVar7 = this->bInterrupted;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_d8.DebugPtr != (UAnimMontage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_d8.DebugPtr);
      }
      local_d0._0_1_ = bVar7;
      local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
      local_c8 = (undefined1  [8])0x0;
      TStack_c0.DebugPtr = (UCurveFloat *)0x0;
      TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)local_c8
                 ,&local_78);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_78);
      UAnimInstance::QueueMontageBlendingOutEvent
                (this_01,(FQueuedMontageBlendingOutEvent *)&local_d8.ObjectPtr);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)local_60);
      if (((int)local_b8 != 0) && (TStack_c0.DebugPtr != (UCurveFloat *)0x0)) {
        (**(code **)(TStack_c0.DebugPtr)->_padding_)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&TStack_c0.ObjectPtr,0,0,0x10);
        local_b8 = local_b8 & 0xffffffff00000000;
      }
      if (local_60[0].bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60[0].Accessor,local_60);
      }
      if (TStack_c0.DebugPtr != (UCurveFloat *)0x0) {
        FMemory::Free(TStack_c0.DebugPtr);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
      bVar7 = UAnimInstance::IsInitialized(this_01);
      if ((!bVar7) && (MontageCVars::bEarlyOutMontageWhenUninitialized != false)) {
        return;
      }
      uVar9 = UAnimInstance::GetLastMontageFlushFrame(this_01);
      if (uVar8 != uVar9) {
        pFVar4 = (this_01->MontageInstances).AllocatorInstance.Data;
        for (pFVar11 = pFVar4;
            pFVar11 != pFVar4 + (longlong)(this_01->MontageInstances).ArrayNum * 8;
            pFVar11 = pFVar11 + 8) {
          if (*(FAnimMontageInstance **)pFVar11 == this) {
            if ((int)((longlong)pFVar11 - (longlong)pFVar4 >> 3) != -1) goto LAB_1474fb32b;
            break;
          }
        }
        if (MontageCVars::bEarlyOutMontageWhenUninitialized != false) {
          return;
        }
      }
LAB_1474fb32b:
      pFVar12 = &param_1->Blend;
      if (EVar2 == Inertialization) {
        local_d8._0_4_ = 0xbf800000;
        local_d0 = (TObjectPtr<UBlendProfile>_u_0)0x0;
        local_c8 = (undefined1  [8])((ulonglong)local_c8 & 0xffffffffffff0000);
        TStack_c0.DebugPtr = (UCurveFloat *)0x0;
        local_b8 = 0;
        FText::FText(&local_b0);
        local_d8._0_4_ = (param_1->Blend).BlendTime;
        local_a0 = (void *)0x0;
        local_98 = 0;
        local_90 = 0xffffffff;
        local_88 = 0;
        local_c8[1] = (param_1->Blend).BlendOption;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 = (pFVar12->CustomCurve).field0_0x0.DebugPtr, pUVar5 != (UCurveFloat *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        TStack_c0 = (pFVar12->CustomCurve).field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 = (param_1->BlendProfile).field0_0x0.DebugPtr, pUVar6 != (UBlendProfile *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        local_d0 = (param_1->BlendProfile).field0_0x0;
        if (((param_1->Blend).BlendOption != Linear) ||
           (local_c8 = (undefined1  [8])((ulonglong)local_c8 & 0xffffffffffffff00),
           (pFVar12->CustomCurve).field0_0x0.DebugPtr != (UCurveFloat *)0x0)) {
          local_c8[0] = 1;
        }
        UAnimInstance::RequestMontageInertialization
                  (this_01,(this->Montage).field0_0x0.DebugPtr,
                   (FInertializationRequest *)&local_d8.ObjectPtr);
        if (local_a0 != (void *)0x0) {
          FMemory::Free(local_a0);
        }
        if (local_b0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
        }
      }
    }
  }
  if ((this->Blend).BlendTime <= 0.0) {
    this->bPlaying = false;
  }
  pUVar3 = (this->Montage).field0_0x0.DebugPtr;
  if ((pUVar3 != (UAnimMontage *)0x0) && (5 < (byte)LogAnimMontage._0_1_)) {
    local_res8 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res8,(FString *)&local_e8.ObjectPtr);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
    if (local_e8.DebugPtr != (UCurveFloat *)0x0) {
      FMemory::Free(local_e8.DebugPtr);
    }
  }
  return;
}

// Terminate @ 1474fb660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnimMontageInstance::Terminate(FAnimMontageInstance *this)

{
  int *piVar1;
  int iVar2;
  TObjectPtr<UAnimMontage>_u_0 TVar3;
  UAnimNotifyState *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Terminate> FVar13;
  UAnimInstance *pUVar14;
  UObject *pUVar15;
  UAnimInstance *pUVar16;
  FScriptContainerElement *pFVar17;
  FName FVar18;
  TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> *this_00;
  longlong lVar19;
  FAnimNotifyEvent *pFVar20;
  uint uVar21;
  UAnimMontage *pUVar22;
  FColor_u_0 local_res10 [2];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TObjectPtr<UAnimNotifyState>_u_0 local_108;
  UAnimMontage *local_100;
  FName local_f8;
  TObjectPtr<UAnimNotifyState>_u_0 *local_e8;
  FName local_e0;
  FString local_d8;
  TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> local_c8;
  TObjectPtr<UAnimMontage>_u_0 local_b0;
  FColor_u_0 local_a8;
  undefined1 local_a4;
  TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> local_a0;
  FWeakObjectPtr *local_88;
  TObjectPtr<UAnimNotifyState>_u_0 *local_80;
  USkeletalMeshComponent *local_78;
  TObjectPtr<UAnimMontage>_u_0 local_70;
  FAnimNotifyEvent *local_68;
  int local_60;
  undefined1 local_5c;
  FName local_58 [3];
  
  FVar13 = StatPtr_STAT_AnimMontageInstance_Terminate;
  if (StatPtr_STAT_AnimMontageInstance_Terminate ==
      (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Terminate>)0x0) {
    pFVar12 = ::FName::FName(local_58,"STAT_AnimMontageInstance_Terminate");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Terminate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimMontageInstance_Terminate,
                        *pFVar12,L"AnimMontageInstance_Terminate","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar8 = false;
  bVar7 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_1474fb7b8:
    bVar8 = bVar10;
    bVar7 = bVar9;
    bVar9 = false;
    FVar18 = local_f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_res20.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimMontage.cpp"
                   ,0x6bf);
        bVar8 = true;
        bVar7 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1474fb7b8;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar9 = true;
  }
  pUVar22 = (this->Montage).field0_0x0.DebugPtr;
  local_100 = pUVar22;
  if (pUVar22 != (UAnimMontage *)0x0) {
    bVar10 = FWeakObjectPtr::IsValid(&(this->AnimInstance).WeakPtr);
    if (bVar10) {
      uVar21 = (this->ActiveStateBranchingPoints).ArrayNum - 1;
      local_res18 = (this->AnimInstance).WeakPtr;
      if (-1 < (int)uVar21) {
        lVar19 = (longlong)(int)uVar21 * 0xb8;
        do {
          uVar11 = 0;
          if ((int)uVar21 < (this->ActiveStateBranchingPoints).ArrayNum) {
            uVar11 = ~uVar21 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar20 = (FAnimNotifyEvent *)
                    ((this->ActiveStateBranchingPoints).AllocatorInstance.Data + lVar19);
          if ((pFVar20->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
            iVar2 = this->InstanceID;
            TVar3 = (this->Montage).field0_0x0;
            pUVar14 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
            local_78 = UAnimInstance::GetSkelMeshComponentChecked(pUVar14);
            local_5c = 0;
            local_70 = TVar3;
            local_68 = pFVar20;
            local_60 = iVar2;
            pUVar14 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
            FAnimTrace::OutputAnimNotify(pUVar14,pFVar20,End);
            pUVar4 = (pFVar20->NotifyStateClass).field0_0x0.DebugPtr;
            (**(code **)(pUVar4->_padding_ + 0x300))(pUVar4,&local_78);
            local_108 = (pFVar20->NotifyStateClass).field0_0x0;
            bVar10 = FWeakObjectPtr::IsValid(&local_res18);
            if (!bVar10) {
              local_e8 = &local_108;
              `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l5::<lambda_1>::operator()
                        (&local_e8);
              goto LAB_1474fbb67;
            }
            pUVar15 = FWeakObjectPtr::Get(&local_res18);
            if (*(int *)&pUVar15[5].field_0x8 == 0) {
              local_88 = &local_res18;
              local_80 = &local_108;
              `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l8::<lambda_2>::operator()
                        (&local_88);
              goto LAB_1474fbb67;
            }
          }
          lVar19 = lVar19 + -0xb8;
          uVar21 = uVar21 - 1;
        } while (-1 < (int)uVar21);
      }
      this_00 = &this->AnimInstance;
      DestructItems<FAnimNotifyEvent,int>
                ((FAnimNotifyEvent *)(this->ActiveStateBranchingPoints).AllocatorInstance.Data,
                 (this->ActiveStateBranchingPoints).ArrayNum);
      piVar1 = &(this->ActiveStateBranchingPoints).ArrayMax;
      (this->ActiveStateBranchingPoints).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb8,8,0,&(this->ActiveStateBranchingPoints).AllocatorInstance,0,piVar1);
      }
      pUVar14 = (UAnimInstance *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar21 = UAnimInstance::GetLastMontageFlushFrame(pUVar14);
      pUVar16 = (UAnimInstance *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_c8._0_8_ = 0;
      local_c8._8_8_ = 0;
      local_c8._16_4_ = 0;
      TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&local_c8,&this->OnMontageEnded);
      local_res10[0] = (FColor_u_0)this->InstanceID;
      local_a4 = this->bInterrupted;
      local_b0.DebugPtr = local_100;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_100);
      }
      local_a0._16_4_ = 0;
      local_a0._0_8_ = 0;
      local_a0._8_8_ = 0;
      local_a8 = local_res10[0];
      TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&local_a0,&local_c8);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c8);
      UAnimInstance::QueueMontageEndedEvent(pUVar16,(FQueuedMontageEndedEvent *)&local_b0.ObjectPtr)
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
      pUVar16 = (UAnimInstance *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar10 = UAnimInstance::IsInitialized(pUVar16);
      if ((!bVar10) && (MontageCVars::bEarlyOutMontageWhenUninitialized != false))
      goto LAB_1474fbb67;
      uVar11 = UAnimInstance::GetLastMontageFlushFrame(pUVar14);
      if (uVar21 != uVar11) {
        pFVar5 = (pUVar14->MontageInstances).AllocatorInstance.Data;
        for (pFVar17 = pFVar5;
            pFVar17 != pFVar5 + (longlong)(pUVar14->MontageInstances).ArrayNum * 8;
            pFVar17 = pFVar17 + 8) {
          if (*(FAnimMontageInstance **)pFVar17 == this) {
            if ((int)((longlong)pFVar17 - (longlong)pFVar5 >> 3) != -1) goto LAB_1474fbace;
            break;
          }
        }
        if (MontageCVars::bEarlyOutMontageWhenUninitialized != false) goto LAB_1474fbb67;
      }
LAB_1474fbace:
      pUVar14 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
      UAnimInstance::ClearMontageInstanceReferences(pUVar14,this);
      pUVar22 = local_100;
    }
    FAlphaBlend::SetCustomCurve(&this->Blend,(UCurveFloat *)0x0);
    FAlphaBlend::SetBlendOption(&this->Blend,Linear);
    this->ActiveBlendProfile = (UBlendProfile *)0x0;
    (this->Montage).field0_0x0.DebugPtr = (UAnimMontage *)0x0;
    if (5 < (byte)LogAnimMontage._0_1_) {
      local_e0 = (FName)pUVar22->_padding_;
      ::FName::ToString(&local_e0,&local_d8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_1474fbb67:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// UpdateActiveStateBranchingPoints @ 1474feec0

bool __thiscall
FAnimMontageInstance::UpdateActiveStateBranchingPoints(FAnimMontageInstance *this,float param_1)

{
  int *piVar1;
  TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> *this_00;
  int iVar2;
  int iVar3;
  TObjectPtr<UAnimMontage>_u_0 TVar4;
  UAnimNotifyState *pUVar5;
  UAnimMontage *pUVar6;
  UAnimMontage *pUVar7;
  UAnimNotify *pUVar8;
  FAnimNotifyEvent *pFVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  UAnimInstance *pUVar15;
  UObject *pUVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  FAnimNotifyEvent *pFVar22;
  TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> *pTVar23;
  float fVar24;
  float fVar25;
  FWeakObjectPtr local_f8;
  longlong local_f0;
  TObjectPtr<UAnimNotifyState>_u_0 local_e8;
  TObjectPtr<UAnimNotifyState>_u_0 local_e0;
  FWeakObjectPtr *local_d8;
  TObjectPtr<UAnimNotifyState>_u_0 *local_d0;
  TObjectPtr<UAnimNotifyState>_u_0 *local_c8;
  FWeakObjectPtr *local_c0;
  TObjectPtr<UAnimNotifyState>_u_0 *local_b8;
  FWeakObjectPtr *local_b0;
  TObjectPtr<UAnimNotifyState>_u_0 *local_a8;
  USkeletalMeshComponent *local_a0;
  TObjectPtr<UAnimMontage>_u_0 local_98;
  FAnimNotifyEvent *local_90;
  int local_88;
  undefined1 local_84;
  USkeletalMeshComponent *local_80;
  TObjectPtr<UAnimMontage>_u_0 local_78;
  FAnimNotifyEvent *local_70;
  int local_68;
  undefined1 local_64;
  
  this_00 = &this->AnimInstance;
  iVar2 = (((this->Montage).field0_0x0.DebugPtr)->BranchingPointStateNotifyIndices).ArrayNum;
  local_d8 = &this_00->WeakPtr;
  bVar11 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if ((bVar11) && (0 < iVar2)) {
    iVar21 = (this->ActiveStateBranchingPoints).ArrayNum;
    local_f8 = this_00->WeakPtr;
    uVar19 = iVar21 - 1;
    if (-1 < (int)uVar19) {
      pTVar23 = &this->ActiveStateBranchingPoints;
      lVar18 = (longlong)(int)uVar19 * 0xb8;
      do {
        uVar13 = 0;
        if ((int)uVar19 < (this->ActiveStateBranchingPoints).ArrayNum) {
          uVar13 = ~uVar19 >> 0x1f;
        }
        local_f0 = lVar18;
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        pFVar22 = (FAnimNotifyEvent *)((pTVar23->AllocatorInstance).Data + lVar18);
        if ((pFVar22->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
          fVar24 = FAnimNotifyEvent::GetTriggerTime(pFVar22);
          fVar25 = FAnimNotifyEvent::GetEndTriggerTime(pFVar22);
          if ((param_1 <= fVar24) || (fVar25 < param_1)) {
            iVar3 = this->InstanceID;
            TVar4 = (this->Montage).field0_0x0;
            pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
            local_a0 = UAnimInstance::GetSkelMeshComponentChecked(pUVar15);
            local_84 = 1;
            local_98 = TVar4;
            local_90 = pFVar22;
            local_88 = iVar3;
            pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(local_d8);
            FAnimTrace::OutputAnimNotify(pUVar15,pFVar22,End);
            pUVar5 = (pFVar22->NotifyStateClass).field0_0x0.DebugPtr;
            (**(code **)(pUVar5->_padding_ + 0x300))(pUVar5,&local_a0);
            local_e8 = (pFVar22->NotifyStateClass).field0_0x0;
            bVar11 = FWeakObjectPtr::IsValid(&local_f8);
            if (!bVar11) {
              local_d0 = &local_e8;
              `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l5::<lambda_1>::operator()
                        (&local_d0);
              return false;
            }
            pUVar16 = FWeakObjectPtr::Get(&local_f8);
            if (*(int *)&pUVar16[5].field_0x8 == 0) {
              local_c0 = &local_f8;
              local_b8 = &local_e8;
              `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l8::<lambda_2>::operator()
                        (&local_c0);
              return false;
            }
            uVar13 = 0;
            if (iVar21 <= (this->ActiveStateBranchingPoints).ArrayNum) {
              uVar13 = ~uVar19 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar11)) {
              pcVar10 = (code *)swi(3);
              uVar12 = (*pcVar10)();
              return (bool)uVar12;
            }
            TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_>::RemoveAtImpl(pTVar23,uVar19,1);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xb8,8,&pTVar23->AllocatorInstance,
                       (this->ActiveStateBranchingPoints).ArrayNum,
                       &(this->ActiveStateBranchingPoints).ArrayMax);
            lVar18 = local_f0;
          }
        }
        lVar18 = lVar18 + -0xb8;
        iVar21 = iVar21 + -1;
        uVar19 = uVar19 - 1;
        local_f0 = lVar18;
      } while (-1 < (int)uVar19);
    }
    uVar19 = 0;
    lVar18 = 0;
    do {
      pUVar6 = (this->Montage).field0_0x0.DebugPtr;
      uVar13 = 0;
      if ((int)uVar19 < (pUVar6->BranchingPointStateNotifyIndices).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      pUVar7 = (this->Montage).field0_0x0.DebugPtr;
      uVar13 = *(uint *)((pUVar6->BranchingPointStateNotifyIndices).AllocatorInstance.Data +
                        lVar18 * 4);
      uVar14 = 0;
      if ((int)uVar13 < (int)pUVar7->_padding_) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      pFVar22 = (FAnimNotifyEvent *)((longlong)(int)uVar13 * 0xb8 + pUVar7->_padding_);
      if ((pFVar22->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
        fVar24 = FAnimNotifyEvent::GetTriggerTime(pFVar22);
        fVar25 = FAnimNotifyEvent::GetEndTriggerTime(pFVar22);
        if ((fVar24 < param_1) && (param_1 <= fVar25)) {
          pFVar17 = (this->ActiveStateBranchingPoints).AllocatorInstance.Data;
          pFVar20 = pFVar17 + (longlong)(this->ActiveStateBranchingPoints).ArrayNum * 0xb8;
          for (; pFVar17 != pFVar20; pFVar17 = pFVar17 + 0xb8) {
            pUVar8 = *(UAnimNotify **)(pFVar17 + 0x48);
            if ((((pUVar8 != (UAnimNotify *)0x0) &&
                 (pUVar8 == (pFVar22->Notify).field0_0x0.DebugPtr)) ||
                ((pUVar5 = *(UAnimNotifyState **)(pFVar17 + 0x50), pUVar5 != (UAnimNotifyState *)0x0
                 && (pUVar5 == (pFVar22->NotifyStateClass).field0_0x0.DebugPtr)))) ||
               (((pUVar8 == (UAnimNotify *)0x0 && (pUVar5 == (UAnimNotifyState *)0x0)) &&
                (*(FName *)(pFVar17 + 0x3c) == pFVar22->NotifyName)))) goto LAB_1474ff3b0;
          }
          pTVar23 = &this->ActiveStateBranchingPoints;
          iVar21 = this->InstanceID;
          TVar4 = (this->Montage).field0_0x0;
          pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
          local_80 = UAnimInstance::GetSkelMeshComponentChecked(pUVar15);
          local_64 = 0;
          local_78 = TVar4;
          local_70 = pFVar22;
          local_68 = iVar21;
          pUVar15 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr);
          FAnimTrace::OutputAnimNotify(pUVar15,pFVar22,Begin);
          pUVar5 = (pFVar22->NotifyStateClass).field0_0x0.DebugPtr;
          (**(code **)(pUVar5->_padding_ + 0x2f0))(pUVar5,&local_80);
          local_e0 = (pFVar22->NotifyStateClass).field0_0x0;
          bVar11 = FWeakObjectPtr::IsValid(&local_f8);
          if (!bVar11) {
            local_c8 = &local_e0;
            `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l5::<lambda_1>::operator()
                      (&local_c8);
            return false;
          }
          pUVar16 = FWeakObjectPtr::Get(&local_f8);
          if (*(int *)&pUVar16[5].field_0x8 == 0) {
            local_b0 = &local_f8;
            local_a8 = &local_e0;
            `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l8::<lambda_2>::operator()
                      (&local_b0);
            return false;
          }
          pFVar9 = (FAnimNotifyEvent *)(pTVar23->AllocatorInstance).Data;
          if (((pFVar9 <= pFVar22) &&
              (pFVar22 < pFVar9 + (this->ActiveStateBranchingPoints).ArrayMax)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          iVar21 = (this->ActiveStateBranchingPoints).ArrayNum;
          piVar1 = &(this->ActiveStateBranchingPoints).ArrayMax;
          if (iVar21 == *piVar1) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x8b8,&pTVar23->AllocatorInstance,piVar1);
            (this->ActiveStateBranchingPoints).ArrayNum = iVar21;
          }
          (this->ActiveStateBranchingPoints).ArrayNum = iVar21 + 1;
          FAnimNotifyEvent::FAnimNotifyEvent
                    ((FAnimNotifyEvent *)
                     ((pTVar23->AllocatorInstance).Data + (longlong)iVar21 * 0xb8),pFVar22);
        }
      }
LAB_1474ff3b0:
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 1;
    } while (lVar18 < iVar2);
  }
  return true;
}

// UpdateWeight @ 147501480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnimMontageInstance::UpdateWeight(FAnimMontageInstance *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  UAnimInstance *this_00;
  float fVar4;
  FName local_res8;
  void *local_98;
  undefined8 local_90;
  undefined4 local_88;
  FDestructionSentinel local_80;
  TObjectPtr<UAnimMontage>_u_0 local_68;
  undefined1 local_60 [8];
  ForAnyElementType FStack_58;
  int local_50;
  
  if ((this->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0) {
    this->PreviousWeight = (this->Blend).BlendedValue;
    bVar3 = FAlphaBlend::IsComplete(&this->Blend);
    FAlphaBlend::Update(&this->Blend,param_1);
    pfVar1 = &(this->Blend).BlendTimeRemaining;
    if (*pfVar1 <= __real_38d1b717 && __real_38d1b717 != *pfVar1) {
      this->ActiveBlendProfile = (UBlendProfile *)0x0;
    }
    if (((((this->Blend).DesiredValue != 0.0) && (!bVar3)) &&
        (bVar3 = FAlphaBlend::IsComplete(&this->Blend), bVar3)) &&
       (this_00 = (UAnimInstance *)FWeakObjectPtr::Get(&(this->AnimInstance).WeakPtr),
       this_00 != (UAnimInstance *)0x0)) {
      local_98 = (FScriptContainerElement *)0x0;
      local_90 = 0;
      local_88 = 0;
      TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy> *)&local_98,
                 &this->OnMontageBlendedInEnded);
      local_68.ObjectPtr.field0_0x0 = (FObjectPtr)(this->Montage).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_68.DebugPtr != (UAnimMontage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_68.DebugPtr);
      }
      local_50 = 0;
      local_60 = (undefined1  [8])0x0;
      FStack_58.Data = (FScriptContainerElement *)0x0;
      TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy> *)local_60,
                 (TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy> *)&local_98);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_98);
      UAnimInstance::QueueMontageBlendedInEvent
                (this_00,(FQueuedMontageBlendedInEvent *)&local_68.ObjectPtr);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                 (FWriteAccessScope *)&local_80);
      if ((local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_58.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
        local_50 = 0;
      }
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
      }
      if (FStack_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_60);
    }
    fVar2 = (this->Blend).BlendedValue;
    fVar4 = this->PreviousWeight;
    if (this->PreviousWeight <= fVar2) {
      fVar4 = fVar2;
    }
    this->NotifyWeight = fVar4;
    if (5 < (byte)LogAnimMontage._0_1_) {
      local_res8 = (FName)((this->Montage).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_res8,(FString *)&local_98);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
      if (local_98 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98);
      }
    }
    if (5 < (byte)LogAnimMontage._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
    }
  }
  return;
}

// ValidateInstanceAfterNotifyState @ 147502510

bool __cdecl
FAnimMontageInstance::ValidateInstanceAfterNotifyState
          (TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> *param_1,UAnimNotifyState *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UAnimNotifyState **local_res8;
  UAnimNotifyState *local_res10 [3];
  TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> *local_18;
  UAnimNotifyState **local_10;
  
  local_res10[0] = param_2;
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if (!bVar1) {
    local_res8 = local_res10;
    `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l5::<lambda_1>::operator()
              (&local_res8);
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  if (*(int *)&pUVar2[5].field_0x8 == 0) {
    local_10 = local_res10;
    local_18 = param_1;
    `FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l8::<lambda_2>::operator()
              (&local_18);
    return false;
  }
  return true;
}

// operator() @ 15050a2f0

bool __thiscall
`FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3541163122091883652>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3541163122091883652>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050a380;
    }
  }
  bVar2 = false;
LAB_15050a380:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15050abe0

bool __thiscall
`FAnimMontageInstance::ValidateInstanceAfterNotifyState'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3541163122091883645>);
  if (bVar4) {
    if (**(longlong **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    pUVar6 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)this);
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res18[0].Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(local_res18,&local_38);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3541163122091883645>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050acd8;
    }
  }
  bVar4 = false;
LAB_15050acd8:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

