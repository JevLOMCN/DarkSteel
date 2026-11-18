// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 37

// FAnimationBudgetAllocator @ 14a6920d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAnimationBudgetAllocator * __thiscall
FAnimationBudgetAllocator::FAnimationBudgetAllocator
          (FAnimationBudgetAllocator *this,UWorld *param_1)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  FDelegateHandle FVar6;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar7;
  
  this->_padding_ = (longlong)&___7IAnimationBudgetAllocator__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__IAnimationBudgetAllocator__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->Parameters).BudgetInMs = 1.0;
  (this->Parameters).MinQuality = 0.0;
  (this->Parameters).MaxTickRate = 10;
  (this->Parameters).WorkUnitSmoothingSpeed = 5.0;
  (this->Parameters).AlwaysTickFalloffAggression = 0.8;
  (this->Parameters).InterpolationFalloffAggression = 0.4;
  (this->Parameters).InterpolationMaxRate = 6;
  (this->Parameters).MaxInterpolatedComponents = 0x10;
  (this->Parameters).InterpolationTickMultiplier = 0.75;
  (this->Parameters).InitialEstimatedWorkUnitTimeMs = 0.08;
  (this->Parameters).MaxTickedOffsreenComponents = 4;
  (this->Parameters).StateChangeThrottleInFrames = 0x1e;
  (this->Parameters).BudgetFactorBeforeReducedWork = 1.5;
  (this->Parameters).BudgetFactorBeforeReducedWorkEpsilon = 0.25;
  (this->Parameters).BudgetPressureSmoothingSpeed = 3.0;
  (this->Parameters).ReducedWorkThrottleMinInFrames = 2;
  (this->Parameters).ReducedWorkThrottleMaxInFrames = 0x14;
  (this->Parameters).BudgetFactorBeforeAggressiveReducedWork = 2.0;
  (this->Parameters).ReducedWorkThrottleMaxPerFrame = 4;
  (this->Parameters).BudgetPressureBeforeEmergencyReducedWork = 2.5;
  (this->Parameters).AutoCalculatedSignificanceMaxDistance = 30000.0;
  (this->Parameters).AutoCalculatedSignificanceMaxDistanceSqr = 9e+08;
  (this->World).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->AllComponentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllComponentData).ArrayNum = 0;
  (this->AllComponentData).ArrayMax = 0;
  (this->AllSortedComponentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllSortedComponentData).ArrayNum = 0;
  (this->AllSortedComponentData).ArrayMax = 0;
  (this->ReducedWorkComponentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReducedWorkComponentData).ArrayNum = 0;
  (this->ReducedWorkComponentData).ArrayMax = 0;
  (this->DisallowedReducedWorkComponentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DisallowedReducedWorkComponentData).ArrayNum = 0;
  (this->DisallowedReducedWorkComponentData).ArrayMax = 0;
  (this->NonRenderedComponentData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonRenderedComponentData).ArrayNum = 0;
  (this->NonRenderedComponentData).ArrayMax = 0;
  (this->DeferredRegistrations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredRegistrations).ArrayNum = 0;
  (this->DeferredRegistrations).ArrayMax = 0;
  (this->DebugTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugTimes).ArrayNum = 0;
  (this->DebugTimes).ArrayMax = 0;
  (this->DebugTimesSmoothed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugTimesSmoothed).ArrayNum = 0;
  (this->DebugTimesSmoothed).ArrayMax = 0;
  this->AverageWorkUnitTimeMs = GBudgetParameters.InitialEstimatedWorkUnitTimeMs;
  this->NumComponentsToNotSkip = 0;
  this->TotalEstimatedTickTimeMs = 0.0;
  this->NumWorkUnitsForAverage = 0.0;
  this->SmoothedBudgetPressure = 0.0;
  this->DebugTotalTime = 0.0;
  this->CurrentDebugTimeDisplay = 0.0;
  this->DebugSmoothedTotalTime = 0.0;
  this->ReducedComponentWorkCounter = 0;
  (this->GarbageCollectStartedHandle).ID = 0;
  (this->PostGarbageCollectHandle).ID = 0;
  (this->OnWorldPreActorTickHandle).ID = 0;
  (this->OnCVarParametersChangedHandle).ID = 0;
  (this->OnHUDPostRenderHandle).ID = 0;
  (this->OnWorldBeginPlayHandle).ID = 0;
  this->CurrentFrameOffset = 0;
  this->bEnabled = false;
  this->bCurrentlyUpdating = false;
  bVar5 = UWorld::HasBegunPlay(param_1);
  this->bHasBegunPlay = bVar5;
  uVar2 = GBudgetParameters._8_8_;
  bCachedEnabled = GAnimationBudgetEnabled == 1;
  fVar1 = GBudgetParameters.MinQuality;
  (this->Parameters).BudgetInMs = GBudgetParameters.BudgetInMs;
  uVar4 = GBudgetParameters._8_8_;
  (this->Parameters).MinQuality = fVar1;
  GBudgetParameters.MaxTickRate = (int)uVar2;
  GBudgetParameters.WorkUnitSmoothingSpeed = SUB84(uVar2,4);
  fVar1 = GBudgetParameters.WorkUnitSmoothingSpeed;
  (this->Parameters).MaxTickRate = GBudgetParameters.MaxTickRate;
  GBudgetParameters._8_8_ = uVar4;
  uVar2 = GBudgetParameters._24_8_;
  (this->Parameters).WorkUnitSmoothingSpeed = fVar1;
  fVar1 = GBudgetParameters.InterpolationFalloffAggression;
  (this->Parameters).AlwaysTickFalloffAggression = GBudgetParameters.AlwaysTickFalloffAggression;
  uVar4 = GBudgetParameters._24_8_;
  (this->Parameters).InterpolationFalloffAggression = fVar1;
  GBudgetParameters.InterpolationMaxRate = (int)uVar2;
  GBudgetParameters.MaxInterpolatedComponents = SUB84(uVar2,4);
  iVar3 = GBudgetParameters.MaxInterpolatedComponents;
  (this->Parameters).InterpolationMaxRate = GBudgetParameters.InterpolationMaxRate;
  GBudgetParameters._24_8_ = uVar4;
  uVar2 = GBudgetParameters._40_8_;
  fVar1 = GBudgetParameters.InitialEstimatedWorkUnitTimeMs;
  (this->Parameters).MaxInterpolatedComponents = iVar3;
  (this->Parameters).InterpolationTickMultiplier = GBudgetParameters.InterpolationTickMultiplier;
  uVar4 = GBudgetParameters._40_8_;
  (this->Parameters).InitialEstimatedWorkUnitTimeMs = fVar1;
  GBudgetParameters.MaxTickedOffsreenComponents = (int)uVar2;
  GBudgetParameters.StateChangeThrottleInFrames = SUB84(uVar2,4);
  iVar3 = GBudgetParameters.StateChangeThrottleInFrames;
  (this->Parameters).MaxTickedOffsreenComponents = GBudgetParameters.MaxTickedOffsreenComponents;
  GBudgetParameters._40_8_ = uVar4;
  uVar2 = GBudgetParameters._56_8_;
  (this->Parameters).StateChangeThrottleInFrames = iVar3;
  fVar1 = GBudgetParameters.BudgetFactorBeforeReducedWorkEpsilon;
  (this->Parameters).BudgetFactorBeforeReducedWork = GBudgetParameters.BudgetFactorBeforeReducedWork
  ;
  uVar4 = GBudgetParameters._56_8_;
  (this->Parameters).BudgetFactorBeforeReducedWorkEpsilon = fVar1;
  GBudgetParameters.BudgetPressureSmoothingSpeed = (float)uVar2;
  GBudgetParameters.ReducedWorkThrottleMinInFrames = SUB84(uVar2,4);
  iVar3 = GBudgetParameters.ReducedWorkThrottleMinInFrames;
  (this->Parameters).BudgetPressureSmoothingSpeed = GBudgetParameters.BudgetPressureSmoothingSpeed;
  GBudgetParameters._56_8_ = uVar4;
  uVar2 = GBudgetParameters._72_8_;
  (this->Parameters).ReducedWorkThrottleMinInFrames = iVar3;
  fVar1 = GBudgetParameters.BudgetFactorBeforeAggressiveReducedWork;
  (this->Parameters).ReducedWorkThrottleMaxInFrames =
       GBudgetParameters.ReducedWorkThrottleMaxInFrames;
  uVar4 = GBudgetParameters._72_8_;
  (this->Parameters).BudgetFactorBeforeAggressiveReducedWork = fVar1;
  GBudgetParameters.ReducedWorkThrottleMaxPerFrame = (int)uVar2;
  GBudgetParameters.BudgetPressureBeforeEmergencyReducedWork = SUB84(uVar2,4);
  fVar1 = GBudgetParameters.BudgetPressureBeforeEmergencyReducedWork;
  (this->Parameters).ReducedWorkThrottleMaxPerFrame =
       GBudgetParameters.ReducedWorkThrottleMaxPerFrame;
  GBudgetParameters._72_8_ = uVar4;
  (this->Parameters).BudgetPressureBeforeEmergencyReducedWork = fVar1;
  fVar1 = GBudgetParameters.AutoCalculatedSignificanceMaxDistanceSqr;
  (this->Parameters).AutoCalculatedSignificanceMaxDistance =
       GBudgetParameters.AutoCalculatedSignificanceMaxDistance;
  (this->Parameters).AutoCalculatedSignificanceMaxDistanceSqr = fVar1;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FAnimationBudgetAllocator>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&param_1->OnWorldBeginPlay,(FAnimationBudgetAllocator *)&stack0x00000008,
                     (pmf_1b233514 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnWorldBeginPlayHandle).ID = *FVar6.ID;
  pTVar7 = FCoreUObjectDelegates::GetGarbageCollectStartedDelegate();
  FVar6 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FAnimationBudgetAllocator>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)pTVar7,(FAnimationBudgetAllocator *)&stack0x00000008,(pmf_1b233514 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->GarbageCollectStartedHandle).ID = *FVar6.ID;
  pTVar7 = FCoreUObjectDelegates::GetPostGarbageCollect();
  FVar6 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FAnimationBudgetAllocator>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)pTVar7,(FAnimationBudgetAllocator *)&stack0x00000008,(pmf_1b233514 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->PostGarbageCollectHandle).ID = *FVar6.ID;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddRaw<FAnimationBudgetAllocator>
                    (&FWorldDelegates::OnWorldPreActorTick,
                     (FAnimationBudgetAllocator *)&stack0x00000008,(pmf_e5570037 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnWorldPreActorTickHandle).ID = *FVar6.ID;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FAnimationBudgetAllocator>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&GOnCVarParametersChanged,(FAnimationBudgetAllocator *)&stack0x00000008,
                     (pmf_1b233514 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnCVarParametersChangedHandle).ID = *FVar6.ID;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*),FDefaultDelegateUserPolicy>
          ::AddRaw<FAnimationBudgetAllocator>
                    ((TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*),FDefaultDelegateUserPolicy>
                      *)&AHUD::OnHUDPostRender,(FAnimationBudgetAllocator *)&stack0x00000008,
                     (pmf_2b7595e9 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnHUDPostRenderHandle).ID = *FVar6.ID;
  return this;
}

// ~FAnimationBudgetAllocator @ 14a6927f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::~FAnimationBudgetAllocator(FAnimationBudgetAllocator *this)

{
  FDelegateHandle FVar1;
  UWorld *pUVar2;
  FScriptContainerElement *pFVar3;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar4;
  
  FVar1.ID = (this->OnHUDPostRenderHandle).ID;
  this->_padding_ = (longlong)&_vftable__for__IAnimationBudgetAllocator__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&AHUD::OnHUDPostRender,FVar1);
  }
  pUVar2 = (this->World).field0_0x0.DebugPtr;
  if (pUVar2 != (UWorld *)0x0) {
    FVar1.ID = (this->OnWorldBeginPlayHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnWorldBeginPlay,
                 FVar1);
    }
    (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  }
  pTVar4 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           FCoreUObjectDelegates::GetGarbageCollectStartedDelegate();
  FVar1.ID = (this->GarbageCollectStartedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(pTVar4,FVar1);
  }
  pTVar4 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           FCoreUObjectDelegates::GetPostGarbageCollect();
  FVar1.ID = (this->PostGarbageCollectHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(pTVar4,FVar1);
  }
  FVar1.ID = (this->OnWorldPreActorTickHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldPreActorTick,FVar1);
  }
  FVar1.ID = (this->OnCVarParametersChangedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&GOnCVarParametersChanged,FVar1
              );
  }
  pFVar3 = (this->DebugTimesSmoothed).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DebugTimes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DeferredRegistrations).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->NonRenderedComponentData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DisallowedReducedWorkComponentData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ReducedWorkComponentData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AllSortedComponentData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AllComponentData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  return;
}

// operator() @ 14a692a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FAnimationBudgetAllocator::CalculateWorkDistributionAndQueue'::__l2::<lambda_1>::operator()
          (void *this,FAnimBudgetAllocatorComponentData *param_1,int param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  USkeletalMeshComponentBudgeted *pUVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  byte bVar9;
  longlong *this_00;
  ulonglong uVar10;
  FAnimBudgetAllocatorComponentData *pFVar11;
  float fVar12;
  float fVar13;
  
  pUVar4 = (param_1->RootPrerequisite).field0_0x0.DebugPtr;
  pFVar11 = param_1;
  if (pUVar4 != (USkeletalMeshComponentBudgeted *)0x0) {
    uVar3 = pUVar4->AnimationBudgetHandle;
    if (uVar3 != 0xffffffff) {
      lVar5 = *(longlong *)((longlong)this + 8);
      uVar8 = 0;
      if ((int)uVar3 < *(int *)(lVar5 + 0x80)) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = (FAnimBudgetAllocatorComponentData *)
                ((longlong)(int)uVar3 * 0x30 + *(longlong *)(lVar5 + 0x78));
    }
  }
  fVar12 = __real_3f800000;
  uVar10 = (pFVar11->FrameOffset + GFrameCounter) % (ulonglong)pFVar11->TickRate;
  if (uVar10 == 0) {
    bVar9 = 0;
  }
  else {
    bVar9 = param_1->SkippedTicks + 1;
  }
  param_1->SkippedTicks = bVar9;
  fVar13 = fVar12;
  if (1 < param_1->TickRate) {
    fVar13 = fVar12 / (float)(int)((uint)param_1->TickRate - (uint)bVar9);
    if (fVar12 <= fVar13) {
      fVar13 = fVar12;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
  }
  *(float *)((longlong)&((param_1->Component).field0_0x0.DebugPtr)->_padding_ + 4) = fVar13;
  uVar2 = pFVar11->field_0x28;
  if (((pFVar11->bInterpolate == '\0') || (!(bool)pFVar11->bOnScreen)) && (uVar10 != 0)) {
    pbVar1 = (byte *)((longlong)&((param_1->Component).field0_0x0.DebugPtr)->_padding_ + 3);
    *pbVar1 = *pbVar1 & 0xfe;
    FTickFunction::SetTickFunctionEnable
              ((FTickFunction *)&((param_1->Component).field0_0x0.DebugPtr)->_padding_,false);
    return;
  }
  pUVar4 = (param_1->Component).field0_0x0.DebugPtr;
  param_1->GameThreadLastCompletionTimeMs = 0.0;
  bVar9 = (param_1->field_0x28 ^ uVar2) & 8 ^ param_1->field_0x28;
  param_1->field_0x28 = bVar9;
  if ((param_1->TickRate < 2) || ((bVar9 & 8) == 0)) {
    bVar9 = 0;
  }
  else {
    bVar9 = 0x80;
  }
  pbVar1 = (byte *)((longlong)&pUVar4->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0x7f;
  pbVar1 = (byte *)((longlong)&pUVar4->_padding_ + 2);
  *pbVar1 = *pbVar1 | bVar9;
  pUVar4 = (param_1->Component).field0_0x0.DebugPtr;
  *(byte *)((longlong)&pUVar4->_padding_ + 3) =
       *(byte *)((longlong)&pUVar4->_padding_ + 3) & 0xfe | uVar10 == 0;
  pUVar4 = (param_1->Component).field0_0x0.DebugPtr;
  bVar9 = 0;
  if (1 < param_1->TickRate) {
    bVar9 = 2;
  }
  *(byte *)((longlong)&pUVar4->_padding_ + 3) =
       bVar9 | *(byte *)((longlong)&pUVar4->_padding_ + 3) & 0xfd;
  pUVar4 = (param_1->Component).field0_0x0.DebugPtr;
  lVar5 = pUVar4->_padding_;
  if (lVar5 != 0) {
    fVar12 = *(float *)(lVar5 + 0x68);
  }
  *(float *)&pUVar4->_padding_ = fVar12 * param_1->AccumulatedDeltaTime;
  *(uchar *)((longlong)&((param_1->Component).field0_0x0.DebugPtr)->_padding_ + 5) =
       param_1->TickRate;
  this_00 = &((param_1->Component).field0_0x0.DebugPtr)->_padding_;
  if (uVar10 == 0) {
    param_1->AccumulatedDeltaTime = 0.0;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)this_00,true);
    if (param_1->StateChangeThrottle < '\0') {
      param_1->TickRate = param_1->DesiredTickRate;
      param_1->StateChangeThrottle = (schar)param_2;
      **(int **)this = **(int **)this + 1;
      return;
    }
  }
  else {
    FTickFunction::SetTickFunctionEnable((FTickFunction *)this_00,true);
  }
  **(int **)this = **(int **)this + 1;
  return;
}

// operator() @ 14a692c60

void __thiscall
`FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_1>::operator()
          (void *this,FAnimBudgetAllocatorComponentData *param_1,int param_2,bool param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  USkeletalMeshComponentBudgeted *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  char cVar10;
  ForAnyElementType *pFVar11;
  float fVar12;
  int local_res18 [4];
  int *in_stack_ffffffffffffff98;
  FScriptContainerElement *in_stack_ffffffffffffffa0;
  FScriptContainerElement *pFVar13;
  longlong in_stack_ffffffffffffffa8;
  FReadAccessScope local_38 [2];
  
  fVar12 = *(float *)this;
  param_1->bOnScreen = '\0';
  param_1->field_0x28 = param_1->field_0x28 | param_3 << 7;
  param_1->AccumulatedDeltaTime = fVar12 + param_1->AccumulatedDeltaTime;
  cVar10 = param_1->StateChangeThrottle;
  if (-1 < cVar10) {
    cVar10 = cVar10 + -1;
  }
  param_1->StateChangeThrottle = cVar10;
  if (param_1->bAlwaysTick == '\0') {
    if (param_1->bNeverThrottle != 0) {
      piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x100);
      *piVar1 = *piVar1 + 1;
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0xfc);
    *piVar1 = *piVar1 + 1;
  }
  *(float *)(*(longlong *)((longlong)this + 8) + 0x104) =
       param_1->GameThreadLastCompletionTimeMs + param_1->GameThreadLastTickTimeMs +
       *(float *)(*(longlong *)((longlong)this + 8) + 0x104);
  *(float *)(*(longlong *)((longlong)this + 8) + 0x108) =
       *(float *)(*(longlong *)((longlong)this + 8) + 0x108) + __real_3f800000;
  lVar3 = *(longlong *)((longlong)this + 8);
  pFVar11 = (ForAnyElementType *)(lVar3 + 0x88);
  pFVar13 = pFVar11->Data;
  local_res18[0] = param_2;
  if ((pFVar13 <= (FScriptContainerElement *)local_res18) &&
     (lVar8 = (longlong)*(int *)(lVar3 + 0x94),
     (FScriptContainerElement *)local_res18 < pFVar13 + lVar8 * 4)) {
    in_stack_ffffffffffffff98 = local_res18;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    in_stack_ffffffffffffffa0 = pFVar13;
    in_stack_ffffffffffffffa8 = lVar8;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = *(int *)(lVar3 + 0x90);
  if (iVar7 == *(int *)(lVar3 + 0x94)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar11,(int *)(lVar3 + 0x94));
  }
  *(int *)(lVar3 + 0x90) = iVar7 + 1;
  *(int *)(pFVar11->Data + (longlong)iVar7 * 4) = local_res18[0];
  if (param_1->bAutoCalculateSignificance != '\0') {
    pUVar4 = (param_1->Component).field0_0x0.DebugPtr;
    if (*(char *)((longlong)this + 0x10) == '\0') {
      fVar12 = pUVar4->AutoCalculatedSignificance;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate,local_38);
      plVar9 = (longlong *)0x0;
      if (USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._16_4_ != 0) {
        plVar9 = (longlong *)USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._8_8_;
      }
      fVar12 = (float)(**(code **)(*plVar9 + 0x60))(plVar9,pUVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
    }
    uVar2 = param_1->field_0x28;
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))
              (*(longlong **)((longlong)this + 8),(param_1->Component).field0_0x0.DebugPtr,fVar12,
               param_1->bAlwaysTick,
               CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff98 >> 8),(byte)uVar2 >> 2) &
               0xffffffffffffff01,
               CONCAT71((int7)((ulonglong)in_stack_ffffffffffffffa0 >> 8),(byte)uVar2 >> 5) &
               0xffffffffffffff01,
               CONCAT71((int7)((ulonglong)in_stack_ffffffffffffffa8 >> 8),param_1->field_0x29) &
               0xffffffffffffff01);
  }
  return;
}

// operator() @ 14a692e80

bool __thiscall
`FAnimationBudgetAllocator::OnHUDPostRender'::__l15::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)this;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar1 + 0x80)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar2 = *(longlong *)this;
  lVar1 = *(longlong *)(lVar1 + 0x78);
  uVar6 = 0;
  if (param_2 < *(int *)(lVar2 + 0x80)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(float *)((longlong)param_1 * 0x30 + lVar1 + 0x10) <
         *(float *)(*(longlong *)(lVar2 + 0x78) + 0x10 + (longlong)param_2 * 0x30);
}

// operator() @ 14a692f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
`FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l12::<lambda_3>::operator()
          (void *this,USkeletalMeshComponentBudgeted *param_1,
          FAnimBudgetAllocatorComponentData *param_2)

{
  bool bVar1;
  char cVar2;
  AActor *pAVar3;
  float fVar4;
  
  if ((param_1->_padding_ & 0x400) == 0) {
    fVar4 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)param_1);
  }
  else {
    fVar4 = UPrimitiveComponent::GetLastRenderTimeOnScreen((UPrimitiveComponent *)param_1);
  }
  if (fVar4 < *(float *)this || fVar4 == *(float *)this) {
    if ((param_1->bShouldUseActorRenderedFlag != '\0') &&
       (pAVar3 = USceneComponent::GetAttachmentRootActor((USceneComponent *)param_1),
       pAVar3 != (AActor *)0x0)) {
      pAVar3 = USceneComponent::GetAttachmentRootActor((USceneComponent *)param_1);
      bVar1 = AActor::WasRecentlyRendered(pAVar3,__real_3e4ccccd);
      if (bVar1) {
        return true;
      }
    }
    if ((((param_2->bTickEvenIfNotRendered == '\0') &&
         (cVar2 = (**(code **)(param_1->_padding_ + 0xbd8))(param_1), cVar2 == '\0')) &&
        (cVar2 = (**(code **)(param_1->_padding_ + 0xbd0))(param_1,0), cVar2 == '\0')) &&
       ((cVar2 = *(char *)((longlong)&param_1->_padding_ + 4), cVar2 != '\x01' && (cVar2 != '\0'))))
    {
      return false;
    }
  }
  return true;
}

// operator() @ 14a693060

bool __thiscall
`FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_4>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar6 + 0x80)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar1 = *(longlong *)this;
  lVar6 = (longlong)param_1 * 0x30 + *(longlong *)(lVar6 + 0x78);
  uVar5 = 0;
  if (param_2 < *(int *)(lVar1 + 0x80)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x78);
  bVar3 = (bool)(*(byte *)(lVar6 + 0x28) >> 1 & 1);
  if (bVar3 == (bool)(*(byte *)(lVar1 + 0x28 + (longlong)param_2 * 0x30) >> 1 & 1)) {
    bVar3 = *(float *)(lVar1 + 0x10 + (longlong)param_2 * 0x30) < *(float *)(lVar6 + 0x10);
  }
  return bVar3;
}

// AddReferencedObjects @ 14a6934d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::AddReferencedObjects
          (FAnimationBudgetAllocator *this,FReferenceCollector *param_1)

{
  int iVar1;
  longlong *plVar2;
  UWorld *pUVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(param_1->_padding_ + 0x88))
            (param_1,&(this->Parameters).AutoCalculatedSignificanceMaxDistance,0,0);
  iVar1 = *(int *)&(this->AllComponentData).AllocatorInstance.Data;
  pUVar3 = (this->World).field0_0x0.DebugPtr;
  plVar2 = &pUVar3->_padding_;
  while( true ) {
    if (*(int *)&(this->AllComponentData).AllocatorInstance.Data != iVar1) {
      `TCheckedPointerIterator<FAnimBudgetAllocatorComponentData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pUVar3 == (UWorld *)(plVar2 + (longlong)iVar1 * 6)) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pUVar3,0,0);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&pUVar3->_padding_);
    pUVar3 = (UWorld *)&pUVar3->PersistentLevel;
  }
  return;
}

// CalculateWorkDistributionAndQueue @ 14a6936a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FAnimationBudgetAllocator::CalculateWorkDistributionAndQueue
          (FAnimationBudgetAllocator *this,float param_1,float *param_2)

{
  float *pfVar1;
  byte *pbVar2;
  FNameEntryId FVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FAnimationBudgetAllocator *pFVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Demand> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_AverageWorkUnitTime> FVar17;
  FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Budget> FVar18;
  FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_AlwaysTick> FVar19;
  longlong lVar20;
  FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Interpolated> FVar21;
  FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Throttled> FVar22;
  FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_SmoothedBudgetPressure> FVar23;
  FScriptContainerElement FVar24;
  byte bVar25;
  longlong *plVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  FScriptContainerElement *pFVar34;
  uchar auVar35 [8];
  longlong lVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 auVar40 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar47 [16];
  uint local_res20;
  uint uStackX_24;
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296 [6];
  FName local_290;
  int local_288;
  int local_284;
  uint local_280;
  longlong local_278;
  int *local_270;
  FAnimationBudgetAllocator *local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  FStatMessage local_240;
  FStatMessage local_230;
  FStatMessage local_220;
  FStatMessage local_210;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FReadAccessScope local_1c8;
  FReadAccessScope local_1b0;
  FReadAccessScope local_198;
  FReadAccessScope local_180;
  FReadAccessScope local_168;
  FReadAccessScope local_150;
  FReadAccessScope local_138;
  FReadAccessScope local_120;
  FReadAccessScope local_108 [2];
  
  fVar44 = __real_3f800000;
  local_270 = &local_288;
  uVar30 = (this->AllSortedComponentData).ArrayNum;
  auVar35 = (uchar  [8])(longlong)(int)uVar30;
  local_288 = 0;
  local_268 = this;
  if (GAnimationBudgetDebugForce == 0) {
    local_280 = uVar30;
    if (FThreadStats::bPrimaryEnable) {
      FVar14 = StatPtr_STAT_AnimationBudgetAllocator_Demand;
      if (StatPtr_STAT_AnimationBudgetAllocator_Demand ==
          (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Demand>)0x0) {
        pFVar13 = ::FName::FName(&local_1f0,"STAT_AnimationBudgetAllocator_Demand");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Demand>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_AnimationBudgetAllocator_Demand,*pFVar13,L"Demand",
                            "STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
                            L"Animation Budget Allocator",true,true,ST_int64,false,false,MCR_Invalid
                           );
      }
      FVar4 = *(FName *)FVar14;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar15 == (FThreadStats *)0x0) {
          pFVar16 = FThreadStatsPool::Get();
          pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
        }
        local_240.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
        local_260 = FVar4;
        local_240.StatData.Pad = auVar35;
        local_240.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar15,&local_240);
        FStatsTrace::Set(&local_260,(long64)auVar35);
        if (pFVar15->ScopeCount == 0) {
          FThreadStats::Flush(pFVar15,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar15,false,false);
        }
      }
    }
    fVar44 = __real_3f800000;
    if (0 < (int)uVar30) {
      fVar41 = (this->Parameters).WorkUnitSmoothingSpeed;
      fVar42 = this->TotalEstimatedTickTimeMs / this->NumWorkUnitsForAverage;
      fVar38 = fVar42;
      if (0.0 < fVar41) {
        fVar45 = fVar42 - this->AverageWorkUnitTimeMs;
        if (__real_322bcc77 <= fVar45 * fVar45) {
          fVar41 = fVar41 * param_1;
          if (__real_3f800000 <= fVar41) {
            fVar41 = __real_3f800000;
          }
          if (fVar41 <= 0.0) {
            fVar41 = 0.0;
          }
          fVar38 = fVar41 * fVar45 + this->AverageWorkUnitTimeMs;
        }
      }
      this->AverageWorkUnitTimeMs = fVar38;
      if (FThreadStats::bPrimaryEnable != false) {
        FVar17 = StatPtr_STAT_AnimationBudgetAllocator_AverageWorkUnitTime;
        if (StatPtr_STAT_AnimationBudgetAllocator_AverageWorkUnitTime ==
            (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_AverageWorkUnitTime>)0x0) {
          pFVar13 = ::FName::FName(&local_1e8,"STAT_AnimationBudgetAllocator_AverageWorkUnitTime");
          FVar17 = (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_AverageWorkUnitTime>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_AnimationBudgetAllocator_AverageWorkUnitTime,*pFVar13,
                              L"Average Work Unit (ms)","STATGROUP_AnimationBudgetAllocator",
                              "STATCAT_Advanced",L"Animation Budget Allocator",true,true,NumBits,
                              false,false,MCR_Invalid);
        }
        FThreadStats::AddMessage<double>
                  (*(FName *)FVar17,Set,(double)this->AverageWorkUnitTimeMs,false);
      }
      if (__CsvProfilerStat480 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AverageWorkUnitTimeMs",_GCsvCategory_AnimationBudget.Index);
        __CsvProfilerStat480 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AverageWorkUnitTimeMs",_GCsvCategory_AnimationBudget.Index,fVar42,Set);
      fVar38 = (this->Parameters).BudgetInMs / this->AverageWorkUnitTimeMs;
      fVar42 = (float)(int)uVar30;
      fVar41 = fVar42 * (this->Parameters).MinQuality;
      if (fVar41 <= fVar38) {
        fVar41 = fVar38;
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar18 = StatPtr_STAT_AnimationBudgetAllocator_Budget;
        if (StatPtr_STAT_AnimationBudgetAllocator_Budget ==
            (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Budget>)0x0) {
          pFVar13 = ::FName::FName(&local_1e0,"STAT_AnimationBudgetAllocator_Budget");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Budget>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_AnimationBudgetAllocator_Budget,*pFVar13,L"Budget",
                              "STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
                              L"Animation Budget Allocator",true,true,NumBits,false,false,
                              MCR_Invalid);
        }
        FVar4 = *(FName *)FVar18;
        local_res20 = (uint)FVar4.ComparisonIndex.Value;
        uStackX_24 = FVar4.Number;
        FThreadStats::AddMessage<double>(FVar4,Set,(double)fVar41,false);
      }
      fVar38 = fVar42 - fVar41;
      if (fVar38 <= 0.0) {
        fVar38 = 0.0;
      }
      fVar45 = fVar41 - fVar38 * (this->Parameters).AlwaysTickFalloffAggression;
      if (fVar42 <= fVar45) {
        fVar45 = fVar42;
      }
      if (fVar45 <= (float)this->NumComponentsToNotSkip) {
        fVar45 = (float)this->NumComponentsToNotSkip;
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar19 = StatPtr_STAT_AnimationBudgetAllocator_AlwaysTick;
        if (StatPtr_STAT_AnimationBudgetAllocator_AlwaysTick ==
            (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_AlwaysTick>)0x0) {
          pFVar13 = ::FName::FName(&local_1d8,"STAT_AnimationBudgetAllocator_AlwaysTick");
          FVar19 = (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_AlwaysTick>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_AnimationBudgetAllocator_AlwaysTick,*pFVar13,
                              L"Always Tick","STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced"
                              ,L"Animation Budget Allocator",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar4 = *(FName *)FVar19;
        local_res20 = (uint)FVar4.ComparisonIndex.Value;
        uStackX_24 = FVar4.Number;
        FThreadStats::AddMessage<__int64>(FVar4,Set,(longlong)fVar45,false);
      }
      uVar30 = 0;
      fVar43 = 0.0;
      lVar20 = (longlong)(int)fVar45;
      local_278 = lVar20;
      if (0 < (int)fVar45) {
        lVar36 = 0;
        do {
          uVar37 = 0;
          if ((int)uVar30 < (this->AllSortedComponentData).ArrayNum) {
            uVar37 = ~uVar30 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          uVar37 = *(uint *)((this->AllSortedComponentData).AllocatorInstance.Data + lVar36 * 4);
          uVar31 = 0;
          if ((int)uVar37 < (this->AllComponentData).ArrayNum) {
            uVar31 = ~uVar37 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          pFVar5 = (this->AllComponentData).AllocatorInstance.Data;
          uVar30 = uVar30 + 1;
          lVar36 = lVar36 + 1;
          fVar43 = fVar43 + *(float *)(pFVar5 + (longlong)(int)uVar37 * 0x30 + 0x1c) +
                            *(float *)(pFVar5 + (longlong)(int)uVar37 * 0x30 + 0x18);
        } while (lVar36 < lVar20);
      }
      uVar30 = (uint)fVar45;
      fVar43 = fVar43 / this->AverageWorkUnitTimeMs;
      iVar10 = this->NumComponentsToNotThrottle;
      if ((this->Parameters).MaxInterpolatedComponents < this->NumComponentsToNotThrottle) {
        iVar10 = (this->Parameters).MaxInterpolatedComponents;
      }
      if (fVar45 <= fVar43) {
        fVar43 = fVar45;
      }
      fVar45 = fVar41 - fVar43;
      fVar43 = fVar42 - fVar43;
      if (fVar45 <= 0.0) {
        fVar45 = 0.0;
      }
      if (fVar43 <= 0.0) {
        fVar43 = 0.0;
      }
      fVar38 = fVar45 - fVar38 * (this->Parameters).InterpolationFalloffAggression;
      if (fVar38 <= (float)iVar10) {
        fVar38 = (float)iVar10;
      }
      if (fVar43 <= fVar38) {
        fVar38 = fVar43;
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar21 = StatPtr_STAT_AnimationBudgetAllocator_Interpolated;
        if (StatPtr_STAT_AnimationBudgetAllocator_Interpolated ==
            (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Interpolated>)0x0) {
          pFVar13 = ::FName::FName(&local_1d0,"STAT_AnimationBudgetAllocator_Interpolated");
          FVar21 = (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Interpolated>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_AnimationBudgetAllocator_Interpolated,*pFVar13,
                              L"Interpolated","STATGROUP_AnimationBudgetAllocator",
                              "STATCAT_Advanced",L"Animation Budget Allocator",true,true,ST_int64,
                              false,false,MCR_Invalid);
        }
        FVar4 = *(FName *)FVar21;
        local_290 = FVar4;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar15 == (FThreadStats *)0x0) {
            pFVar16 = FThreadStatsPool::Get();
            pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
          }
          local_230.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
          local_258 = FVar4;
          local_230.StatData.Pad = (uchar  [8])(longlong)fVar38;
          local_230.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar15,&local_230);
          FStatsTrace::Set(&local_258,(longlong)fVar38);
          if (pFVar15->ScopeCount == 0) {
            FThreadStats::Flush(pFVar15,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar15,false,false);
          }
        }
      }
      fVar39 = fVar38 * (this->Parameters).InterpolationTickMultiplier;
      iVar10 = (this->Parameters).InterpolationMaxRate;
      fVar45 = fVar45 - fVar39;
      fVar43 = fVar43 - fVar39;
      uVar37 = local_280;
      if ((int)((int)fVar38 + uVar30) < (int)local_280) {
        uVar37 = (int)fVar38 + uVar30;
      }
      if (fVar45 <= 0.0) {
        fVar45 = 0.0;
      }
      if (fVar43 <= 0.0) {
        fVar43 = 0.0;
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar22 = StatPtr_STAT_AnimationBudgetAllocator_Throttled;
        if (StatPtr_STAT_AnimationBudgetAllocator_Throttled ==
            (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Throttled>)0x0) {
          pFVar13 = ::FName::FName(&local_200,"STAT_AnimationBudgetAllocator_Throttled");
          FVar22 = (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Throttled>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_AnimationBudgetAllocator_Throttled,*pFVar13,L"Throttled"
                              ,"STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
                              L"Animation Budget Allocator",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar4 = *(FName *)FVar22;
        local_290 = FVar4;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar15 == (FThreadStats *)0x0) {
            pFVar16 = FThreadStatsPool::Get();
            pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
          }
          local_220.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
          local_250 = FVar4;
          local_220.StatData.Pad = (uchar  [8])(longlong)fVar43;
          local_220.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar15,&local_220);
          FStatsTrace::Set(&local_250,(longlong)fVar43);
          if (pFVar15->ScopeCount == 0) {
            FThreadStats::Flush(pFVar15,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar15,false,false);
          }
        }
      }
      lVar20 = local_278;
      if (fVar45 <= fVar44) {
        fVar45 = fVar44;
      }
      fVar39 = fVar43 / fVar45;
      if (fVar43 / fVar45 <= fVar44) {
        fVar39 = fVar44;
      }
      auVar47 = roundps(unaff_XMM13,ZEXT416((uint)(fVar39 + fVar39)),2);
      fVar45 = (float)(this->Parameters).MaxTickRate;
      auVar40 = ZEXT416((uint)fVar45);
      if (fVar45 <= auVar47._0_4_) {
        auVar47._0_4_ = fVar45;
      }
      if (fVar43 <= 0.0) {
        fVar43 = fVar44;
      }
      uVar31 = 0;
      if (0 < local_278) {
        lVar36 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar31 < (this->AllSortedComponentData).ArrayNum) {
            uVar11 = ~uVar31 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             auVar40 = extraout_XMM0, bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          uVar11 = *(uint *)((this->AllSortedComponentData).AllocatorInstance.Data + lVar36 * 4);
          uVar12 = 0;
          if ((int)uVar11 < (this->AllComponentData).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             auVar40 = extraout_XMM0_00, bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          pFVar33 = (this->AllComponentData).AllocatorInstance.Data;
          uVar31 = uVar31 + 1;
          lVar36 = lVar36 + 1;
          pFVar5 = pFVar33 + (longlong)(int)uVar11 * 0x30 + 0x28;
          *pFVar5 = (FScriptContainerElement)((byte)*pFVar5 & 0xf7);
          *(undefined2 *)(pFVar33 + (longlong)(int)uVar11 * 0x30 + 0x24) = 0x101;
        } while (lVar36 < lVar20);
      }
      fVar45 = __real_40000000;
      fVar44 = __real_40200000;
      lVar36 = (longlong)(int)uVar37;
      if (lVar20 < lVar36) {
        fVar46 = (float)iVar10 - __real_40000000;
        fVar39 = (float)(int)uVar30;
        fVar38 = __real_3f800000 / fVar38;
        do {
          uVar31 = 0;
          if ((int)uVar30 < (this->AllSortedComponentData).ArrayNum) {
            uVar31 = ~uVar30 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             auVar40 = extraout_XMM0_01, bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          uVar31 = *(uint *)((this->AllSortedComponentData).AllocatorInstance.Data + lVar20 * 4);
          uVar11 = 0;
          if ((int)uVar31 < (this->AllComponentData).ArrayNum) {
            uVar11 = ~uVar31 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             auVar40 = extraout_XMM0_02, bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          pFVar5 = (this->AllComponentData).AllocatorInstance.Data;
          auVar40 = roundps(auVar40,ZEXT416((uint)(((float)(int)uVar30 - fVar39) * fVar38 * fVar46 +
                                                  fVar44)),1);
          FVar24 = (FScriptContainerElement)0xff;
          if ((int)auVar40._0_4_ < 0xff) {
            FVar24 = SUB41((int)auVar40._0_4_,0);
          }
          pFVar33 = pFVar5 + (longlong)(int)uVar31 * 0x30 + 0x28;
          *pFVar33 = (FScriptContainerElement)((byte)*pFVar33 | 8);
          uVar30 = uVar30 + 1;
          pFVar5[(longlong)(int)uVar31 * 0x30 + 0x24] = FVar24;
          lVar20 = lVar20 + 1;
        } while (lVar20 < lVar36);
      }
      fVar38 = __real_3f800000;
      lVar20 = (longlong)(int)local_280;
      if (lVar36 < lVar20) {
        fVar39 = (float)(int)uVar37;
        fVar43 = __real_3f800000 / fVar43;
        do {
          uVar30 = 0;
          if ((int)uVar37 < (this->AllSortedComponentData).ArrayNum) {
            uVar30 = ~uVar37 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             auVar40 = extraout_XMM0_03, bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          uVar30 = *(uint *)((this->AllSortedComponentData).AllocatorInstance.Data + lVar36 * 4);
          uVar31 = 0;
          if ((int)uVar30 < (this->AllComponentData).ArrayNum) {
            uVar31 = ~uVar30 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             auVar40 = extraout_XMM0_04, bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          pFVar5 = (this->AllComponentData).AllocatorInstance.Data;
          auVar40 = roundps(auVar40,ZEXT416((uint)(((float)(int)uVar37 - fVar39) * fVar43 *
                                                   (auVar47._0_4_ - fVar45) + fVar44)),1);
          FVar24 = (FScriptContainerElement)0xff;
          if ((int)auVar40._0_4_ < 0xff) {
            FVar24 = SUB41((int)auVar40._0_4_,0);
          }
          pFVar33 = pFVar5 + (longlong)(int)uVar30 * 0x30 + 0x28;
          *pFVar33 = (FScriptContainerElement)((byte)*pFVar33 & 0xf7);
          uVar37 = uVar37 + 1;
          pFVar5[(longlong)(int)uVar30 * 0x30 + 0x24] = FVar24;
          lVar36 = lVar36 + 1;
        } while (lVar36 < lVar20);
      }
      fVar44 = (this->Parameters).BudgetPressureSmoothingSpeed;
      fVar42 = fVar42 / fVar41;
      if (0.0 < fVar44) {
        fVar41 = fVar42 - this->SmoothedBudgetPressure;
        if (__real_322bcc77 <= fVar41 * fVar41) {
          fVar44 = fVar44 * param_1;
          if (fVar38 <= fVar44) {
            fVar44 = fVar38;
          }
          if (fVar44 <= 0.0) {
            fVar44 = 0.0;
          }
          fVar42 = fVar44 * fVar41 + this->SmoothedBudgetPressure;
        }
      }
      iVar10 = (this->Parameters).StateChangeThrottleInFrames;
      this->SmoothedBudgetPressure = fVar42;
      fVar44 = (fVar42 - (this->Parameters).BudgetFactorBeforeAggressiveReducedWork) *
               __real_3f000000;
      if (fVar38 <= fVar44) {
        fVar44 = fVar38;
      }
      if (fVar44 <= 0.0) {
        fVar44 = 0.0;
      }
      local_284 = (int)(((float)iVar10 - __real_40800000) * fVar44 + __real_40800000);
      if (FThreadStats::bPrimaryEnable != false) {
        FVar23 = StatPtr_STAT_AnimationBudgetAllocator_SmoothedBudgetPressure;
        if (StatPtr_STAT_AnimationBudgetAllocator_SmoothedBudgetPressure ==
            (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_SmoothedBudgetPressure>)0x0)
        {
          pFVar13 = ::FName::FName(&local_1f8,"STAT_AnimationBudgetAllocator_SmoothedBudgetPressure"
                                  );
          FVar23 = (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_SmoothedBudgetPressure>
                    )FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_AnimationBudgetAllocator_SmoothedBudgetPressure,
                                *pFVar13,L"SmoothedBudgetPressure",
                                "STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
                                L"Animation Budget Allocator",true,true,NumBits,false,false,
                                MCR_Invalid);
        }
        FVar4 = *(FName *)FVar23;
        fVar41 = this->SmoothedBudgetPressure;
        local_290 = FVar4;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar15 == (FThreadStats *)0x0) {
            pFVar16 = FThreadStatsPool::Get();
            pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
          }
          local_210.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
          local_248 = FVar4;
          local_210.StatData.Pad = (uchar  [8])(double)fVar41;
          local_210.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar15,&local_210);
          FStatsTrace::Set(&local_248,(double)fVar41);
          if (pFVar15->ScopeCount == 0) {
            FThreadStats::Flush(pFVar15,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar15,false,false);
          }
        }
      }
      uVar30 = 0;
      if (0 < lVar20) {
        lVar36 = 0;
        do {
          uVar37 = 0;
          if ((int)uVar30 < (this->AllSortedComponentData).ArrayNum) {
            uVar37 = ~uVar30 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          uVar37 = *(uint *)((this->AllSortedComponentData).AllocatorInstance.Data + lVar36 * 4);
          lVar29 = (longlong)(int)uVar37;
          uVar31 = 0;
          if ((int)uVar37 < (this->AllComponentData).ArrayNum) {
            uVar31 = ~uVar37 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          pFVar5 = (this->AllComponentData).AllocatorInstance.Data;
          if (*(longlong *)(pFVar5 + lVar29 * 0x30 + 8) != 0) {
            uVar37 = *(uint *)(*(longlong *)(pFVar5 + lVar29 * 0x30 + 8) + 0x1080);
            lVar32 = (longlong)(int)uVar37;
            if (uVar37 != 0xffffffff) {
              uVar31 = 0;
              if ((int)uVar37 < (this->AllComponentData).ArrayNum) {
                uVar31 = ~uVar37 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                iVar10 = (*pcVar6)();
                return iVar10;
              }
              pFVar33 = (this->AllComponentData).AllocatorInstance.Data;
              FVar24 = pFVar33[lVar32 * 0x30 + 0x25];
              if ((byte)pFVar5[lVar29 * 0x30 + 0x25] < (byte)pFVar33[lVar32 * 0x30 + 0x25]) {
                FVar24 = pFVar5[lVar29 * 0x30 + 0x25];
              }
              pFVar5[lVar29 * 0x30 + 0x25] = FVar24;
              pFVar33[lVar32 * 0x30 + 0x25] = FVar24;
              FVar24 = pFVar33[lVar32 * 0x30 + 0x24];
              if ((byte)pFVar5[lVar29 * 0x30 + 0x24] < (byte)pFVar33[lVar32 * 0x30 + 0x24]) {
                FVar24 = pFVar5[lVar29 * 0x30 + 0x24];
              }
              pFVar5[lVar29 * 0x30 + 0x24] = FVar24;
              pFVar33[lVar32 * 0x30 + 0x24] = FVar24;
              FVar24 = pFVar33[lVar32 * 0x30 + 0x27];
              if ((char)pFVar5[lVar29 * 0x30 + 0x27] < (char)pFVar33[lVar32 * 0x30 + 0x27]) {
                FVar24 = pFVar5[lVar29 * 0x30 + 0x27];
              }
              pFVar5[lVar29 * 0x30 + 0x27] = FVar24;
              pFVar33[lVar32 * 0x30 + 0x27] = FVar24;
            }
          }
          iVar10 = local_284;
          uVar30 = uVar30 + 1;
          lVar36 = lVar36 + 1;
        } while (lVar36 < lVar20);
        uVar30 = 0;
        lVar36 = 0;
        do {
          uVar37 = 0;
          if ((int)uVar30 < (this->AllSortedComponentData).ArrayNum) {
            uVar37 = ~uVar30 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          uVar37 = *(uint *)((this->AllSortedComponentData).AllocatorInstance.Data + lVar36 * 4);
          uVar31 = 0;
          if ((int)uVar37 < (this->AllComponentData).ArrayNum) {
            uVar31 = ~uVar37 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          `FAnimationBudgetAllocator::CalculateWorkDistributionAndQueue'::__l2::<lambda_1>::
          operator()(&local_270,
                     (FAnimBudgetAllocatorComponentData *)
                     ((this->AllComponentData).AllocatorInstance.Data + (longlong)(int)uVar37 * 0x30
                     ),iVar10);
          uVar30 = uVar30 + 1;
          lVar36 = lVar36 + 1;
        } while (lVar36 < lVar20);
      }
      pFVar33 = (this->DisallowedReducedWorkComponentData).AllocatorInstance.Data;
      iVar10 = (this->DisallowedReducedWorkComponentData).ArrayNum;
      pFVar5 = pFVar33 + (longlong)iVar10 * 4;
      while( true ) {
        if ((this->DisallowedReducedWorkComponentData).ArrayNum != iVar10) {
          local_298 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_298)
          ;
        }
        if (pFVar33 == pFVar5) break;
        uVar30 = *(uint *)pFVar33;
        uVar37 = 0;
        if ((int)uVar30 < (this->AllComponentData).ArrayNum) {
          uVar37 = ~uVar30 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          iVar10 = (*pcVar6)();
          return iVar10;
        }
        pFVar28 = (this->AllComponentData).AllocatorInstance.Data;
        lVar20 = (longlong)(int)uVar30 * 0x30;
        if (((byte)pFVar28[lVar20 + 0x28] & 0x10) == 0) {
LAB_14a694cd3:
          pFVar33 = pFVar33 + 4;
        }
        else {
          lVar36 = *(longlong *)(pFVar28 + lVar20);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar36 + 0x1060),
                     &local_1b0);
          if (((*(int *)(lVar36 + 0x1070) == 0) ||
              (*(longlong **)(lVar36 + 0x1068) == (longlong *)0x0)) ||
             (cVar9 = (**(code **)(**(longlong **)(lVar36 + 0x1068) + 0x38))(), cVar9 == '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_1b0);
            goto LAB_14a694cd3;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_1b0);
          lVar36 = *(longlong *)(pFVar28 + lVar20);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar36 + 0x1060),
                     &local_138);
          if (*(int *)(lVar36 + 0x1070) == 0) {
            plVar26 = (longlong *)0x0;
          }
          else {
            plVar26 = *(longlong **)(lVar36 + 0x1068);
          }
          (**(code **)(*plVar26 + 0x60))(plVar26,lVar36);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_138);
          pFVar28[lVar20 + 0x28] = (FScriptContainerElement)((byte)pFVar28[lVar20 + 0x28] & 0xef);
          pFVar33 = pFVar33 + 4;
        }
      }
      this->ReducedComponentWorkCounter = this->ReducedComponentWorkCounter + -1;
      if (this->ReducedComponentWorkCounter < 1) {
        FVar3.Value = (this->ReducedWorkComponentData).ArrayNum;
        uVar27 = (ulonglong)(int)FVar3.Value;
        fVar41 = this->SmoothedBudgetPressure;
        fVar42 = (this->Parameters).BudgetPressureBeforeEmergencyReducedWork;
        local_290.ComparisonIndex.Value = FVar3.Value;
        iVar10 = 0;
        local_284 = (int)(((float)(this->Parameters).ReducedWorkThrottleMaxPerFrame - fVar38) *
                          fVar44 + fVar38);
        pfVar1 = &(this->Parameters).BudgetFactorBeforeReducedWork;
        if (((int)FVar3.Value < 1) ||
           (*pfVar1 - (this->Parameters).BudgetFactorBeforeReducedWorkEpsilon <= fVar41)) {
          if (*pfVar1 <= fVar41 && fVar41 != *pfVar1) {
            uVar30 = local_280 - 1;
            lVar20 = (longlong)(int)uVar30;
            if (local_278 <= lVar20) {
              do {
                uVar37 = 0;
                if ((int)uVar30 < (this->AllSortedComponentData).ArrayNum) {
                  uVar37 = ~uVar30 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  iVar10 = (*pcVar6)();
                  return iVar10;
                }
                uVar37 = *(uint *)((this->AllSortedComponentData).AllocatorInstance.Data +
                                  lVar20 * 4);
                uVar31 = 0;
                if ((int)uVar37 < (this->AllComponentData).ArrayNum) {
                  uVar31 = ~uVar37 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  iVar10 = (*pcVar6)();
                  return iVar10;
                }
                pFVar5 = (this->AllComponentData).AllocatorInstance.Data;
                lVar36 = (longlong)(int)uVar37 * 0x30;
                FVar24 = pFVar5[lVar36 + 0x28];
                if ((((((byte)FVar24 & 0x20) != 0) || (fVar42 <= fVar41)) &&
                    (((byte)FVar24 & 2) == 0)) && (((byte)FVar24 & 0x10) == 0)) {
                  lVar29 = *(longlong *)(pFVar5 + lVar36);
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                             (lVar29 + 0x1060),&local_180);
                  if (((*(int *)(lVar29 + 0x1070) == 0) ||
                      (*(longlong **)(lVar29 + 0x1068) == (longlong *)0x0)) ||
                     (cVar9 = (**(code **)(**(longlong **)(lVar29 + 0x1068) + 0x38))(),
                     cVar9 == '\0')) {
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                    ~FReadAccessScope(&local_180);
                  }
                  else {
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                    ~FReadAccessScope(&local_180);
                    FVar4 = *(FName *)(pFVar5 + lVar36);
                    local_290 = FVar4;
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                               ((longlong)FVar4 + 0x1060),local_108);
                    if (*(int *)((longlong)FVar4 + 0x1070) == 0) {
                      plVar26 = (longlong *)0x0;
                    }
                    else {
                      plVar26 = *(longlong **)((longlong)FVar4 + 0x1068);
                    }
                    (**(code **)(*plVar26 + 0x60))(plVar26,local_290,1);
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                    ~FReadAccessScope(local_108);
                    pFVar5[lVar36 + 0x28] =
                         (FScriptContainerElement)((byte)pFVar5[lVar36 + 0x28] | 0x10);
                    iVar10 = iVar10 + 1;
                    if (local_284 <= iVar10) break;
                  }
                }
                uVar30 = uVar30 - 1;
                lVar20 = lVar20 + -1;
              } while (local_278 <= lVar20);
            }
          }
        }
        else {
          pFVar33 = (this->ReducedWorkComponentData).AllocatorInstance.Data;
          pFVar5 = pFVar33 + uVar27 * 4;
          while( true ) {
            if ((this->ReducedWorkComponentData).ArrayNum != (int)uVar27) {
              local_297 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_297);
            }
            if (pFVar33 == pFVar5) break;
            uVar30 = *(uint *)pFVar33;
            uVar37 = 0;
            if ((int)uVar30 < (this->AllComponentData).ArrayNum) {
              uVar37 = ~uVar30 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              iVar10 = (*pcVar6)();
              return iVar10;
            }
            pFVar28 = (this->AllComponentData).AllocatorInstance.Data;
            lVar20 = (longlong)(int)uVar30 * 0x30;
            if (((byte)pFVar28[lVar20 + 0x28] & 0x10) == 0) {
LAB_14a694eaf:
              uVar27 = (ulonglong)local_290 & 0xffffffff;
              pFVar33 = pFVar33 + 4;
            }
            else {
              lVar36 = *(longlong *)(pFVar28 + lVar20);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar36 + 0x1060)
                         ,&local_198);
              if (((*(int *)(lVar36 + 0x1070) == 0) ||
                  (*(longlong **)(lVar36 + 0x1068) == (longlong *)0x0)) ||
                 (cVar9 = (**(code **)(**(longlong **)(lVar36 + 0x1068) + 0x38))(), cVar9 == '\0'))
              {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_198);
                goto LAB_14a694eaf;
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_198);
              lVar36 = *(longlong *)(pFVar28 + lVar20);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar36 + 0x1060)
                         ,&local_120);
              if (*(int *)(lVar36 + 0x1070) == 0) {
                plVar26 = (longlong *)0x0;
              }
              else {
                plVar26 = *(longlong **)(lVar36 + 0x1068);
              }
              (**(code **)(*plVar26 + 0x60))(plVar26,lVar36,0);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_120);
              pFVar28[lVar20 + 0x28] =
                   (FScriptContainerElement)((byte)pFVar28[lVar20 + 0x28] & 0xef);
              iVar10 = iVar10 + 1;
              if (local_284 <= iVar10) break;
              uVar27 = (ulonglong)local_290 & 0xffffffff;
              pFVar33 = pFVar33 + 4;
            }
          }
        }
        fVar41 = (float)(this->Parameters).ReducedWorkThrottleMaxInFrames;
        this->ReducedComponentWorkCounter =
             (int)(((float)(this->Parameters).ReducedWorkThrottleMinInFrames - fVar41) * fVar44 +
                  fVar41);
      }
    }
    iVar10 = (this->AllSortedComponentData).ArrayNum;
    if (0 < iVar10) {
      pFVar33 = (this->AllSortedComponentData).AllocatorInstance.Data;
      pFVar5 = pFVar33 + (longlong)iVar10 * 4;
      while( true ) {
        if ((this->AllSortedComponentData).ArrayNum != iVar10) {
          local_296[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_296);
        }
        if (pFVar33 == pFVar5) break;
        uVar30 = *(uint *)pFVar33;
        uVar37 = 0;
        if ((int)uVar30 < (this->AllComponentData).ArrayNum) {
          uVar37 = ~uVar30 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          iVar10 = (*pcVar6)();
          return iVar10;
        }
        pFVar33 = pFVar33 + 4;
        *param_2 = (float)(byte)(this->AllComponentData).AllocatorInstance.Data
                                [(longlong)(int)uVar30 * 0x30 + 0x25] + *param_2;
      }
      *param_2 = *param_2 / (float)(this->AllSortedComponentData).ArrayNum;
    }
  }
  else {
    pFVar33 = (this->AllSortedComponentData).AllocatorInstance.Data;
    pFVar5 = pFVar33 + (longlong)auVar35 * 4;
    while( true ) {
      if ((this->AllSortedComponentData).ArrayNum != uVar30) {
        local_res20 = local_res20 & 0xffffff00;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res20)
        ;
      }
      if (pFVar33 == pFVar5) break;
      uVar37 = *(uint *)pFVar33;
      uVar31 = 0;
      if ((int)uVar37 < (this->AllComponentData).ArrayNum) {
        uVar31 = ~uVar37 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        iVar10 = (*pcVar6)();
        return iVar10;
      }
      pFVar28 = (this->AllComponentData).AllocatorInstance.Data + (longlong)(int)uVar37 * 0x30;
      lVar20 = *(longlong *)pFVar28;
      pFVar28[0x24] = GAnimationBudgetDebugForceRate._0_1_;
      pFVar28[0x25] = GAnimationBudgetDebugForceRate._0_1_;
      pFVar28[0x28] =
           (FScriptContainerElement)
           (-(GAnimationBudgetDebugForceInterpolation != 0) & 8U | (byte)pFVar28[0x28] & 0xf7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar20 + 0x1060),
                 &local_1c8);
      if (((*(int *)(lVar20 + 0x1070) == 0) || (*(longlong **)(lVar20 + 0x1068) == (longlong *)0x0))
         || (cVar9 = (**(code **)(**(longlong **)(lVar20 + 0x1068) + 0x38))(), cVar9 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1c8);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1c8);
        if (((byte)pFVar28[0x28] & 0x10) == 0) {
          if (GAnimationBudgetDebugForceReducedWork != 0) {
            lVar20 = *(longlong *)pFVar28;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar20 + 0x1060),
                       &local_150);
            if (*(int *)(lVar20 + 0x1070) == 0) {
              plVar26 = (longlong *)0x0;
            }
            else {
              plVar26 = *(longlong **)(lVar20 + 0x1068);
            }
            (**(code **)(*plVar26 + 0x60))(plVar26,lVar20,1);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_150);
            pFVar28[0x28] = (FScriptContainerElement)((byte)pFVar28[0x28] | 0x10);
          }
        }
        else if (GAnimationBudgetDebugForceReducedWork == 0) {
          lVar20 = *(longlong *)pFVar28;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar20 + 0x1060),
                     &local_168);
          if (*(int *)(lVar20 + 0x1070) == 0) {
            plVar26 = (longlong *)0x0;
          }
          else {
            plVar26 = *(longlong **)(lVar20 + 0x1068);
          }
          (**(code **)(*plVar26 + 0x60))(plVar26,lVar20,0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_168);
          pFVar28[0x28] = (FScriptContainerElement)((byte)pFVar28[0x28] & 0xef);
        }
      }
      pFVar7 = local_268;
      pFVar28[0x27] = (FScriptContainerElement)0xff;
      pFVar34 = pFVar28;
      if (*(longlong *)(pFVar28 + 8) != 0) {
        uVar37 = *(uint *)(*(longlong *)(pFVar28 + 8) + 0x1080);
        if (uVar37 != 0xffffffff) {
          uVar31 = 0;
          if ((int)uVar37 < (local_268->AllComponentData).ArrayNum) {
            uVar31 = ~uVar37 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            iVar10 = (*pcVar6)();
            return iVar10;
          }
          pFVar34 = (pFVar7->AllComponentData).AllocatorInstance.Data + (longlong)(int)uVar37 * 0x30
          ;
        }
      }
      uVar27 = (*(uint *)(pFVar34 + 0x20) + GFrameCounter) % (ulonglong)(byte)pFVar34[0x25];
      if (uVar27 == 0) {
        FVar24 = (FScriptContainerElement)0x0;
      }
      else {
        FVar24 = (FScriptContainerElement)((char)pFVar28[0x26] + 1);
      }
      pFVar28[0x26] = FVar24;
      fVar41 = fVar44;
      if (1 < (byte)pFVar28[0x25]) {
        fVar41 = fVar44 / (float)(int)((uint)(byte)pFVar28[0x25] - (uint)(byte)FVar24);
        if (fVar44 <= fVar41) {
          fVar41 = fVar44;
        }
        if (fVar41 <= 0.0) {
          fVar41 = 0.0;
        }
      }
      *(float *)(*(longlong *)pFVar28 + 0x7c4) = fVar41;
      FVar24 = pFVar34[0x28];
      if (((((byte)FVar24 & 8) == 0) || (-1 < (char)FVar24)) && (uVar27 != 0)) {
        *(byte *)(*(longlong *)pFVar28 + 0x80b) = *(byte *)(*(longlong *)pFVar28 + 0x80b) & 0xfe;
        FTickFunction::SetTickFunctionEnable((FTickFunction *)(*(longlong *)pFVar28 + 0x38),false);
        pFVar33 = pFVar33 + 4;
      }
      else {
        lVar20 = *(longlong *)pFVar28;
        FVar24 = (FScriptContainerElement)
                 (((byte)FVar24 ^ (byte)pFVar28[0x28]) & 8 ^ (byte)pFVar28[0x28]);
        pFVar28[0x28] = FVar24;
        *(undefined4 *)(pFVar28 + 0x1c) = 0;
        if (((byte)pFVar28[0x25] < 2) || (((byte)FVar24 & 8) == 0)) {
          bVar25 = 0;
        }
        else {
          bVar25 = 0x80;
        }
        pbVar2 = (byte *)(lVar20 + 0x80a);
        *pbVar2 = *pbVar2 & 0x7f;
        pbVar2 = (byte *)(lVar20 + 0x80a);
        *pbVar2 = *pbVar2 | bVar25;
        *(byte *)(*(longlong *)pFVar28 + 0x80b) =
             *(byte *)(*(longlong *)pFVar28 + 0x80b) & 0xfe | uVar27 == 0;
        bVar25 = 0;
        if (1 < (byte)pFVar28[0x25]) {
          bVar25 = 2;
        }
        *(byte *)(*(longlong *)pFVar28 + 0x80b) =
             bVar25 | *(byte *)(*(longlong *)pFVar28 + 0x80b) & 0xfd;
        lVar20 = *(longlong *)(*(longlong *)pFVar28 + 0xa8);
        fVar41 = fVar44;
        if (lVar20 != 0) {
          fVar41 = *(float *)(lVar20 + 0x68);
        }
        *(float *)(*(longlong *)pFVar28 + 0x7c8) = fVar41 * *(float *)(pFVar28 + 0x14);
        *(FScriptContainerElement *)(*(longlong *)pFVar28 + 0x805) = pFVar28[0x25];
        if (uVar27 == 0) {
          *(undefined4 *)(pFVar28 + 0x14) = 0;
          FTickFunction::SetTickFunctionEnable((FTickFunction *)(*(longlong *)pFVar28 + 0x38),true);
          if (-1 < (char)pFVar28[0x27]) goto LAB_14a693a9b;
          pFVar28[0x25] = pFVar28[0x24];
          pFVar28[0x27] = (FScriptContainerElement)0xff;
          local_288 = local_288 + 1;
          pFVar33 = pFVar33 + 4;
        }
        else {
          FTickFunction::SetTickFunctionEnable((FTickFunction *)(*(longlong *)pFVar28 + 0x38),true);
LAB_14a693a9b:
          local_288 = local_288 + 1;
          pFVar33 = pFVar33 + 4;
        }
      }
    }
  }
  return local_288;
}

// CheckAndPropagateUpdateStatusChange @ 14a6951a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::CheckAndPropagateUpdateStatusChange(FAnimationBudgetAllocator *this)

{
  byte *pbVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  
  bCachedEnabled = GAnimationBudgetEnabled == 1;
  if ((bCachedEnabled) && (this->bEnabled != false)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (bVar8 == this->bCurrentlyUpdating) {
    this->bCurrentlyUpdating = bVar8;
    return;
  }
  iVar2 = (this->AllComponentData).ArrayNum;
  uVar10 = 0;
  if (bVar8 == false) {
    if (iVar2 < 1) goto LAB_14a695331;
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->AllComponentData).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->AllComponentData).AllocatorInstance.Data;
      if (*(longlong *)(pFVar3 + lVar9) != 0) {
        pbVar1 = (byte *)(*(longlong *)(pFVar3 + lVar9) + 0x809);
        *pbVar1 = *pbVar1 | 8;
        *(byte *)(*(longlong *)(pFVar3 + lVar9) + 0x80a) =
             *(byte *)(*(longlong *)(pFVar3 + lVar9) + 0x80a) & 0xbf;
        FTickFunction::SetTickFunctionEnable
                  ((FTickFunction *)(*(longlong *)(pFVar3 + lVar9) + 0x38),true);
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x30;
    } while ((int)uVar10 < (this->AllComponentData).ArrayNum);
  }
  else {
    if (iVar2 < 1) {
LAB_14a695331:
      this->bCurrentlyUpdating = bVar8;
      return;
    }
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->AllComponentData).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->AllComponentData).AllocatorInstance.Data;
      lVar4 = *(longlong *)(pFVar3 + lVar9);
      if (lVar4 != 0) {
        pbVar1 = (byte *)(lVar4 + 0x809);
        *pbVar1 = *pbVar1 & 0xf7;
        pbVar1 = (byte *)(*(longlong *)(pFVar3 + lVar9) + 0x80a);
        *pbVar1 = *pbVar1 | 0x40;
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x30;
    } while ((int)uVar10 < (this->AllComponentData).ArrayNum);
  }
  this->bCurrentlyUpdating = bVar8;
  return;
}

// ForceNextTickThisFrame @ 14a696620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::ForceNextTickThisFrame
          (FAnimationBudgetAllocator *this,USkeletalMeshComponentBudgeted *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = param_1->AnimationBudgetHandle;
  if (uVar1 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar1 < (this->AllComponentData).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->AllComponentData).AllocatorInstance.Data;
    *(uint *)(pFVar2 + (longlong)(int)uVar1 * 0x30 + 0x20) =
         ((uint)(byte)pFVar2[(longlong)(int)uVar1 * 0x30 + 0x25] -
         (int)((*(uint *)(pFVar2 + (longlong)(int)uVar1 * 0x30 + 0x20) + GFrameCounter) %
              (ulonglong)(byte)pFVar2[(longlong)(int)uVar1 * 0x30 + 0x25])) +
         *(uint *)(pFVar2 + (longlong)(int)uVar1 * 0x30 + 0x20);
  }
  return;
}

// GetEnabled @ 14a696790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FAnimationBudgetAllocator::GetEnabled(FAnimationBudgetAllocator *this)

{
  return this->bEnabled;
}

// GetReferencerName @ 14a696990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FAnimationBudgetAllocator::GetReferencerName
          (FAnimationBudgetAllocator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FAnimationBudgetAllocator");
  return __return_storage_ptr__;
}

// HandleGarbageCollectStarted @ 14a696a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::HandleGarbageCollectStarted(FAnimationBudgetAllocator *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->AllComponentData).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 0x30;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->AllComponentData).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->AllComponentData).AllocatorInstance.Data + lVar6);
      if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
        RemoveHelper(this,uVar5,(USkeletalMeshComponentBudgeted *)0x0);
      }
      lVar6 = lVar6 + -0x30;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// HandlePostGarbageCollect @ 14a696a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimationBudgetAllocator::HandlePostGarbageCollect(FAnimationBudgetAllocator *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->AllComponentData).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 0x30;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->AllComponentData).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->AllComponentData).AllocatorInstance.Data + lVar6);
      if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
        RemoveHelper(this,uVar5,(USkeletalMeshComponentBudgeted *)0x0);
      }
      lVar6 = lVar6 + -0x30;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// HandleWorldBeginPlay @ 14a696a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimationBudgetAllocator::HandleWorldBeginPlay(FAnimationBudgetAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  bCachedEnabled = GAnimationBudgetEnabled == 1;
  this->bHasBegunPlay = true;
  pFVar4 = (this->DeferredRegistrations).AllocatorInstance.Data;
  iVar3 = (this->DeferredRegistrations).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->DeferredRegistrations).ArrayNum != iVar3) {
      `TCheckedPointerIterator<USkeletalMeshComponentBudgeted_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    (**(code **)this->_padding_)(this,*(undefined8 *)pFVar4);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->DeferredRegistrations).ArrayMax;
  (this->DeferredRegistrations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DeferredRegistrations).AllocatorInstance,0,piVar1);
  }
  return;
}

// IsComponentTickEnabled @ 14a696d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FAnimationBudgetAllocator::IsComponentTickEnabled
          (FAnimationBudgetAllocator *this,USkeletalMeshComponentBudgeted *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((bCachedEnabled) && (this->bEnabled != false)) {
    uVar1 = param_1->AnimationBudgetHandle;
    if (uVar1 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar1 < (this->AllComponentData).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      return (bool)((byte)(this->AllComponentData).AllocatorInstance.Data
                          [(longlong)(int)uVar1 * 0x30 + 0x28] & 1);
    }
  }
  return (param_1->_padding_ & 0xc000000) != 0;
}

// OnHUDPostRender @ 14a696e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::OnHUDPostRender
          (FAnimationBudgetAllocator *this,AHUD *param_1,UCanvas *param_2)

{
  ulonglong uVar1;
  FScriptContainerElement FVar2;
  UWorld *pUVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  UWorld *pUVar15;
  UReporterGraph *pUVar16;
  FGraphLine *pFVar17;
  FGraphThreshold *pFVar18;
  UObject *pUVar19;
  FText *pFVar20;
  UFont *pUVar21;
  byte bVar22;
  uint uVar23;
  longlong lVar24;
  ForAnyElementType FVar25;
  ForElementType<FSetElementId> FVar26;
  ulonglong *puVar27;
  FIdentityFunctor FVar28;
  uint uVar29;
  uint *puVar30;
  uint *puVar31;
  longlong lVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  undefined1 auStackY_2b8 [32];
  FIdentityFunctor local_268 [8];
  FWeakObjectPtr local_260;
  undefined1 local_258 [4];
  uint local_254;
  uint local_250;
  FLinearColor_u_0 local_248;
  int local_238;
  int local_234;
  int local_230;
  ulonglong local_228;
  ulonglong *local_220;
  FAnimationBudgetAllocator *local_218;
  UCanvas *local_210;
  FString local_208;
  FString local_1f8;
  longlong *local_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  TBitArray<FDefaultBitArrayAllocator> *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  uint local_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  FText local_188;
  FFontRenderInfo local_178;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_104;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_c0 [8];
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if (((bCachedEnabled) && (this->bEnabled != false)) && (GAnimationBudgetDebugEnabled != 0)) {
    local_210 = param_2;
    pUVar15 = AActor::GetWorld((AActor *)param_1);
    pUVar3 = (this->World).field0_0x0.DebugPtr;
    if (pUVar3 == (UWorld *)0x0) {
      bVar33 = pUVar15 == (UWorld *)0x0;
    }
    else {
      bVar33 = pUVar3 == pUVar15;
    }
    if (bVar33) {
      UCanvas::GetReporterGraph(param_2);
      pUVar16 = (UReporterGraph *)FWeakObjectPtr::Get(&local_260);
      UReporterGraph::SetNumGraphLines(pUVar16,2);
      pUVar16 = (UReporterGraph *)FWeakObjectPtr::Get(&local_260);
      pFVar17 = UReporterGraph::GetGraphLine(pUVar16,0);
      fVar35 = __real_3e99999a;
      uVar10 = FLinearColor::Gray.field0_0x0._s_0.B;
      uVar9 = FLinearColor::Gray.field0_0x0._s_0.G;
      local_248._s_0.G = FLinearColor::Gray.field0_0x0._s_0.G;
      local_248._s_0.R = FLinearColor::Gray.field0_0x0._s_0.R;
      local_248._s_0.A = (float)0x3e99999a;
      local_248._s_0.B = FLinearColor::Gray.field0_0x0._s_0.B;
      (pFVar17->Color).field0_0x0._s_0.R = FLinearColor::Gray.field0_0x0._s_0.R;
      (pFVar17->Color).field0_0x0._s_0.G = (float)uVar9;
      (pFVar17->Color).field0_0x0._s_0.B = (float)uVar10;
      (pFVar17->Color).field0_0x0._s_0.A = 0.3;
      ::FString::operator=(&pFVar17->LineName,L"Raw");
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
                (&pFVar17->Data,&this->DebugTimes);
      pUVar16 = (UReporterGraph *)FWeakObjectPtr::Get(&local_260);
      uVar14 = 1;
      pFVar17 = UReporterGraph::GetGraphLine(pUVar16,1);
      (pFVar17->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
      ::FString::operator=(&pFVar17->LineName,L"Smoothed");
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::operator=
                (&pFVar17->Data,&this->DebugTimesSmoothed);
      pUVar16 = (UReporterGraph *)FWeakObjectPtr::Get(&local_260);
      UReporterGraph::SetNumThresholds(pUVar16,1);
      pUVar16 = (UReporterGraph *)FWeakObjectPtr::Get(&local_260);
      pFVar18 = UReporterGraph::GetThreshold(pUVar16,0);
      (pFVar18->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
      ::FString::operator=(&pFVar18->ThresholdName,L"Budget");
      pFVar18->Threshold = (this->Parameters).BudgetInMs;
      pUVar19 = FWeakObjectPtr::Get(&local_260);
      *(undefined4 *)(pUVar19 + 4) = 0x14;
      *(undefined4 *)&pUVar19[4].field_0x4 = 3;
      pUVar16 = (UReporterGraph *)FWeakObjectPtr::Get(&local_260);
      UReporterGraph::SetAxesMinMax
                (pUVar16,this->CurrentDebugTimeDisplay - __real_41200000,
                 this->CurrentDebugTimeDisplay,0.0,this->DebugSmoothedTotalTime * __real_3fc00000);
      pUVar16 = (UReporterGraph *)FWeakObjectPtr::Get(&local_260);
      UReporterGraph::SetGraphScreenSize
                (pUVar16,__real_3dcccccd,__real_3f666666,__real_3dcccccd,fVar35);
      pUVar19 = FWeakObjectPtr::Get(&local_260);
      *(uint *)&pUVar19[4].field_0x20 = *(uint *)&pUVar19[4].field_0x20 & 0xfffffffb;
      pUVar19 = FWeakObjectPtr::Get(&local_260);
      *(uint *)&pUVar19[4].field_0x20 = *(uint *)&pUVar19[4].field_0x20 | 2;
      pUVar19 = FWeakObjectPtr::Get(&local_260);
      *(float *)&pUVar19[4].field_0x1c = this->CurrentDebugTimeDisplay;
      pUVar19 = FWeakObjectPtr::Get(&local_260);
      *(undefined8 *)&pUVar19[4].field_0x8 = 2;
      pUVar16 = (UReporterGraph *)FWeakObjectPtr::Get(&local_260);
      UReporterGraph::SetLegendPosition(pUVar16,Outside);
      pUVar19 = FWeakObjectPtr::Get(&local_260);
      *(uint *)&pUVar19[4].field_0x20 = *(uint *)&pUVar19[4].field_0x20 & 0xfffffffe;
      pUVar19 = FWeakObjectPtr::Get(&local_260);
      *(uint *)&pUVar19[4].field_0x20 = *(uint *)&pUVar19[4].field_0x20 & 0xfffffff7;
      pUVar19 = FWeakObjectPtr::Get(&local_260);
      *(undefined1 *)(pUVar19 + 1) = 1;
      pUVar19 = FWeakObjectPtr::Get(&local_260);
      (**(code **)(*(longlong *)pUVar19 + 0x2b0))(pUVar19,param_2);
      local_f8._0_8_ = 0;
      local_f8._8_8_ = 0;
      local_d8 = (uint *)0x0;
      local_d0 = 0;
      local_cc = 0x80;
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_b8 = (ForElementType<FSetElementId>)0x0;
      local_b0 = 0;
      local_254 = 0;
      if (0 < (this->AllComponentData).ArrayNum) {
        do {
          uVar23 = local_254;
          uVar29 = 0;
          if ((int)local_254 < (this->AllComponentData).ArrayNum) {
            uVar29 = ~local_254 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_228 = *(ulonglong *)
                       (*(longlong *)
                         ((this->AllComponentData).AllocatorInstance.Data +
                         (longlong)(int)uVar23 * 0x30) + 0xa8);
          uVar23 = ((uint)(local_228 >> 0x14) & 0xffff ^ (uint)(local_228 >> 4)) * -0x7a143595;
          uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
          uVar23 = uVar23 >> 0x10 ^ uVar23;
          if (local_f8._8_4_ != local_c4) {
            FVar26 = (ForElementType<FSetElementId>)local_c0;
            if (local_b8 != (ForElementType<FSetElementId>)0x0) {
              FVar26 = local_b8;
            }
            iVar13 = *(int *)((longlong)FVar26 + (ulonglong)(local_b0 - 1U & uVar23) * 4);
            while (iVar13 != -1) {
              puVar27 = (ulonglong *)((longlong)iVar13 * 0x20 + local_f8._0_8_);
              if (*puVar27 == local_228) {
                if (puVar27 != (ulonglong *)0x0) goto LAB_14a697305;
                break;
              }
              iVar13 = (int)puVar27[3];
            }
          }
          local_220 = &local_228;
          TSet<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<AActor_*_&&>_>
                    ((TSet<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)local_f8,(uint)&local_238,(TKeyInitializer<AActor_*_&&> *)(ulonglong)uVar23,
                     (bool *)&local_220);
          puVar27 = (ulonglong *)((longlong)local_238 * 0x20 + local_f8._0_8_);
LAB_14a697305:
          if ((((uint *)puVar27[1] <= &local_254) &&
              (&local_254 < (uint *)puVar27[1] + *(int *)((longlong)puVar27 + 0x14))) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar33)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar13 = (int)puVar27[2];
          if (iVar13 == *(int *)((longlong)puVar27 + 0x14)) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)(puVar27 + 1),
                                (int *)((longlong)puVar27 + 0x14));
          }
          *(int *)(puVar27 + 2) = iVar13 + 1;
          *(uint *)(((ForAnyElementType *)(puVar27 + 1))->Data + (longlong)iVar13 * 4) = local_254;
          local_254 = local_254 + 1;
        } while ((int)local_254 < (this->AllComponentData).ArrayNum);
      }
      uVar23 = local_d0;
      fVar35 = 0.0;
      uStack_1e0 = 0;
      uStack_1cc = uStack_1e0;
      local_1c8 = uStack_1e0;
      if (local_d0 != 0) {
        puVar31 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar31 = local_d8;
        }
        uVar29 = *puVar31;
        local_1c8 = 0;
        uStack_1e0 = 0;
        while (uVar29 == 0) {
          lVar24 = (longlong)(int)uStack_1e0;
          local_1c8 = local_1c8 + 0x20;
          uStack_1e0 = uStack_1e0 + 1;
          uStack_1cc = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1e0)
          goto LAB_14a697440;
          uVar29 = puVar31[lVar24 + 1];
        }
        uVar14 = -uVar29 & uVar29;
        uVar1 = (ulonglong)uVar14 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_234 = (int)lVar24;
        uStack_1cc = (local_1c8 - 1) + local_234;
        if ((int)local_d0 < (int)uStack_1cc) {
          uStack_1cc = local_d0;
        }
      }
LAB_14a697440:
      local_1e8 = (longlong *)local_f8;
      uStack_1c4 = local_104;
      local_1d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
      uVar29 = local_d0 & 0xffffffe0;
      iStack_1c0 = local_f8._8_4_ - local_c4;
      uStack_1d0 = 0xffffffff;
      TStack_1b0._padding_ = CONCAT44(uVar14,uStack_1e0);
      iVar13 = (int)local_d0 >> 5;
      TStack_1b0._28_4_ = local_104;
      TStack_1b0.BaseBitIndex = local_1c8;
      uStack_190 = CONCAT44(uStack_1bc,iStack_1c0);
      bVar22 = (byte)local_d0;
      TStack_1b0.UnvisitedBitMask = 0xffffffff;
      local_250 = local_d0;
      uStack_1dc = uVar14;
      local_1b8 = local_1e8;
      TStack_1b0.CurrentBitIndex = uStack_1cc;
      TStack_1b0.Array = local_1d8;
      if ((int)local_d0 < 0) {
        bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L"");
        if (bVar33) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      fVar11 = __real_41700000;
      fVar8 = __real_42c80000;
      fVar7 = __real_3f800000;
      FVar28 = local_268[0];
      if (uVar23 != local_d0) {
        puVar31 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar31 = local_d8;
        }
        uVar14 = -1 << (bVar22 & 0x1f) & puVar31[iVar13];
        while (uVar14 == 0) {
          lVar24 = (longlong)iVar13;
          uVar29 = uVar29 + 0x20;
          iVar13 = iVar13 + 1;
          local_250 = local_d0;
          uVar23 = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14a697590;
          uVar14 = puVar31[lVar24 + 1];
        }
        uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar24 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_230 = (int)lVar24;
        local_250 = local_230 + -1 + uVar29;
        uVar23 = local_250;
        if ((int)local_d0 < (int)local_250) {
          local_250 = local_d0;
          uVar23 = local_d0;
        }
      }
LAB_14a697590:
      while( true ) {
        plVar12 = local_1b8;
        if ((int)local_1b8[1] - *(int *)((longlong)local_1b8 + 0x34) != (int)uStack_190) {
          local_258[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_258);
        }
        if (((TStack_1b0.CurrentBitIndex == uVar23) &&
            (TStack_1b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
           (plVar12 == (longlong *)local_f8)) break;
        lVar24 = *plVar12;
        lVar32 = (longlong)TStack_1b0.CurrentBitIndex * 0x20;
        local_218 = this;
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAnimationBudgetAllocator::OnHUDPostRender_::__l15::<lambda_1>_>_>
                  (*(int **)(lVar32 + 8 + lVar24),*(int *)(lVar32 + 0x10 + lVar24),FVar28,
                   (<lambda_1> *)&local_218);
        lVar4 = *(longlong *)(*(longlong *)(lVar32 + lVar24) + 0x1b8);
        if (lVar4 != 0) {
          local_138 = *(undefined4 *)(lVar4 + 0x210);
          uStack_134 = *(undefined4 *)(lVar4 + 0x214);
          uStack_130 = *(undefined4 *)(lVar4 + 0x218);
          uStack_12c = *(undefined4 *)(lVar4 + 0x21c);
          local_128 = *(undefined4 *)(lVar4 + 0x220);
          uStack_124 = *(undefined4 *)(lVar4 + 0x224);
        }
        puVar30 = *(uint **)(lVar32 + 8 + lVar24);
        iVar13 = *(int *)(lVar32 + 0x10 + lVar24);
        fVar34 = 0.0;
        local_248._0_8_ = (void *)0x0;
        local_248._8_8_ = 0;
        puVar31 = puVar30 + iVar13;
        while( true ) {
          if (*(int *)(lVar32 + 0x10 + lVar24) != iVar13) {
            local_268[0] = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_268);
          }
          if (puVar30 == puVar31) break;
          uVar14 = *puVar30;
          uVar23 = 0;
          if ((int)uVar14 < (this->AllComponentData).ArrayNum) {
            uVar23 = ~uVar14 >> 0x1f;
          }
          if (uVar23 == 0) {
            bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar33) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          FVar2 = (this->AllComponentData).AllocatorInstance.Data
                  [(longlong)(int)uVar14 * 0x30 + 0x28];
          if ((((byte)FVar2 & 1) != 0) && (-1 < (char)FVar2)) {
            if (GAnimationBudgetDebugShowAddresses == 0) {
              ::FString::PrintfImpl(&local_1f8,L"%.03f %d %s %s\n");
              iVar6 = local_1f8.Data.ArrayNum + -1;
              if (local_1f8.Data.ArrayNum == 0) {
                iVar6 = 0;
              }
              ::FString::AppendChars
                        ((FString *)&local_248._s_0,(wchar_t *)local_1f8.Data.AllocatorInstance.Data
                         ,iVar6);
              FVar25.Data = local_1f8.Data.AllocatorInstance.Data;
            }
            else {
              ::FString::PrintfImpl(&local_208,L"0x%llx %d %s %s\n");
              iVar6 = local_208.Data.ArrayNum + -1;
              if (local_208.Data.ArrayNum == 0) {
                iVar6 = 0;
              }
              ::FString::AppendChars
                        ((FString *)&local_248._s_0,(wchar_t *)local_208.Data.AllocatorInstance.Data
                         ,iVar6);
              FVar25.Data = local_208.Data.AllocatorInstance.Data;
            }
            if (FVar25.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar25.Data);
            }
            fVar34 = fVar34 + fVar11;
          }
          puVar30 = puVar30 + 1;
        }
        local_178.bEnableShadow = 0;
        local_178.bClipText = 0;
        local_178.GlowInfo.bEnableGlow = 0;
        local_178.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
        local_178.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
        local_178.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
        local_178.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
        local_178.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
        local_178.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
        pFVar20 = FText::FromString(&local_188,(FString *)&local_248._s_0);
        pUVar21 = UEngine::GetSmallFont();
        UCanvas::DrawText(local_210,pUVar21,pFVar20,fVar8,fVar35 + fVar8,fVar7,fVar7,&local_178);
        FVar28 = local_268[0];
        if (local_188.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
        }
        fVar35 = fVar35 + fVar34;
        if ((void *)local_248._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_248._0_8_);
        }
        TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
        uVar23 = local_250;
      }
      local_b0 = 0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8);
      }
      TSparseArray<TSparseSetElement<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_f8);
    }
  }
  return;
}

// OnWorldPreActorTick @ 14a697950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::OnWorldPreActorTick
          (FAnimationBudgetAllocator *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
  UWorld *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->World).field0_0x0.DebugPtr;
  if (pUVar1 == (UWorld *)0x0) {
    bVar2 = param_1 == (UWorld *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if ((bVar2) && (param_2 == LEVELTICK_All)) {
                    /* WARNING: Could not recover jumptable at 0x00014a697974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x50))(this,param_3);
    return;
  }
  return;
}

// QueueSortedComponentIndices @ 14a697980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::QueueSortedComponentIndices
          (FAnimationBudgetAllocator *this,float param_1)

{
  int *piVar1;
  USkeletalMeshComponentBudgeted *this_00;
  USkeletalMeshComponentBudgeted *pUVar2;
  longlong lVar3;
  code *pcVar4;
  FAnimationBudgetAllocator *pFVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement FVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar19;
  FAnimBudgetAllocatorComponentData *pFVar20;
  longlong lVar21;
  FAnimBudgetAllocatorComponentData *pFVar22;
  longlong lVar23;
  float fVar24;
  undefined4 uVar25;
  double dVar26;
  float fVar27;
  float local_res8 [2];
  FIdentityFunctor local_res10 [8];
  FAnimationBudgetAllocator *local_res18;
  longlong local_res20;
  int *in_stack_ffffffffffffff08;
  FScriptContainerElement *in_stack_ffffffffffffff10;
  ulonglong in_stack_ffffffffffffff18;
  int local_c8 [2];
  int local_c0 [2];
  float local_b8 [2];
  FAnimationBudgetAllocator *local_b0;
  char local_a8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88 [3];
  
  dVar26 = ((this->World).field0_0x0.DebugPtr)->TimeSeconds - __real_3ff0000000000000;
  this->NumComponentsToNotSkip = 0;
  this->NumComponentsToNotThrottle = 0;
  this->TotalEstimatedTickTimeMs = 0.0;
  this->NumWorkUnitsForAverage = 0.0;
  fVar27 = (float)dVar26;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate,&local_a0);
  if (((USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._16_4_ == 0) ||
      (USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._8_8_ == 0)) ||
     (cVar6 = (**(code **)(*(longlong *)
                            USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._8_8_ +
                          0x38))(), cVar6 == '\0')) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  iVar11 = (this->AllComponentData).ArrayNum;
  pFVar20 = (FAnimBudgetAllocatorComponentData *)(this->AllComponentData).AllocatorInstance.Data;
  pFVar22 = pFVar20 + iVar11;
  local_c8[0] = 0;
  local_b8[0] = param_1;
  local_b0 = this;
  local_a8 = cVar6;
  do {
    if ((this->AllComponentData).ArrayNum != iVar11) {
      local_res10[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FAnimBudgetAllocatorComponentData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar20 == pFVar22) {
      local_res18 = this;
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAnimationBudgetAllocator::QueueSortedComponentIndices_::__l2::<lambda_4>_>_>
                ((int *)(this->AllSortedComponentData).AllocatorInstance.Data,
                 (this->AllSortedComponentData).ArrayNum,local_res10[0],(<lambda_4> *)&local_res18);
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAnimationBudgetAllocator::QueueSortedComponentIndices_::__l2::<lambda_4>_>_>
                ((int *)(this->ReducedWorkComponentData).AllocatorInstance.Data,
                 (this->ReducedWorkComponentData).ArrayNum,local_res10[0],(<lambda_4> *)&local_res18
                );
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAnimationBudgetAllocator::QueueSortedComponentIndices_::__l2::<lambda_4>_>_>
                ((int *)(this->NonRenderedComponentData).AllocatorInstance.Data,
                 (this->NonRenderedComponentData).ArrayNum,local_res10[0],(<lambda_4> *)&local_res18
                );
      pFVar5 = local_b0;
      fVar27 = __real_3f800000;
      iVar11 = (this->Parameters).MaxTickedOffsreenComponents;
      iVar10 = (this->NonRenderedComponentData).ArrayNum;
      if (iVar10 < iVar11) {
        iVar11 = iVar10;
      }
      if (0 < iVar11) {
        local_res20 = (longlong)iVar11;
        uVar18 = 0;
        if (0 < iVar11) {
          lVar23 = 0;
          do {
            iVar11 = (this->NonRenderedComponentData).ArrayNum;
            pFVar15 = (FScriptContainerElement *)(longlong)iVar11;
            uVar9 = 0;
            if ((int)uVar18 < iVar11) {
              uVar9 = ~uVar18 >> 0x1f;
            }
            if (uVar9 == 0) {
              in_stack_ffffffffffffff08 = (int *)(longlong)(int)uVar18;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              in_stack_ffffffffffffff10 = pFVar15;
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar11 = (this->AllComponentData).ArrayNum;
            pFVar15 = (FScriptContainerElement *)(longlong)iVar11;
            uVar9 = *(uint *)((this->NonRenderedComponentData).AllocatorInstance.Data + lVar23 * 4);
            uVar12 = 0;
            if ((int)uVar9 < iVar11) {
              uVar12 = ~uVar9 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (in_stack_ffffffffffffff08 = (int *)(longlong)(int)uVar9,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               in_stack_ffffffffffffff10 = pFVar15, bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar11 = (this->NonRenderedComponentData).ArrayNum;
            pFVar17 = (FScriptContainerElement *)(longlong)iVar11;
            pFVar15 = (this->AllComponentData).AllocatorInstance.Data;
            lVar21 = (longlong)(int)uVar9 * 0x30;
            uVar9 = 0;
            if ((int)uVar18 < iVar11) {
              uVar9 = ~uVar18 >> 0x1f;
            }
            if (uVar9 == 0) {
              in_stack_ffffffffffffff08 = (int *)(longlong)(int)uVar18;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              in_stack_ffffffffffffff10 = pFVar17;
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            local_c0[0] = *(int *)((this->NonRenderedComponentData).AllocatorInstance.Data +
                                  lVar23 * 4);
            pFVar15[lVar21 + 0x28] = (FScriptContainerElement)((byte)pFVar15[lVar21 + 0x28] & 0x7f);
            FVar13 = pFVar15[lVar21 + 0x27];
            *(float *)(pFVar15 + lVar21 + 0x14) = local_b8[0] + *(float *)(pFVar15 + lVar21 + 0x14);
            if (-1 < (char)FVar13) {
              FVar13 = (FScriptContainerElement)((char)FVar13 + -1);
            }
            pFVar15[lVar21 + 0x27] = FVar13;
            if (((byte)pFVar15[lVar21 + 0x28] & 2) == 0) {
              if (((byte)pFVar15[lVar21 + 0x29] & 1) != 0) {
                pFVar5->NumComponentsToNotThrottle = pFVar5->NumComponentsToNotThrottle + 1;
              }
            }
            else {
              pFVar5->NumComponentsToNotSkip = pFVar5->NumComponentsToNotSkip + 1;
            }
            pTVar19 = &pFVar5->AllSortedComponentData;
            pFVar5->TotalEstimatedTickTimeMs =
                 *(float *)(pFVar15 + lVar21 + 0x1c) + *(float *)(pFVar15 + lVar21 + 0x18) +
                 pFVar5->TotalEstimatedTickTimeMs;
            pFVar5->NumWorkUnitsForAverage = pFVar5->NumWorkUnitsForAverage + fVar27;
            pFVar17 = (pTVar19->AllocatorInstance).Data;
            if ((pFVar17 <= (FScriptContainerElement *)local_c0) &&
               (uVar16 = (ulonglong)(pFVar5->AllSortedComponentData).ArrayMax,
               (FScriptContainerElement *)local_c0 < pFVar17 + uVar16 * 4)) {
              in_stack_ffffffffffffff08 = local_c0;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              in_stack_ffffffffffffff10 = pFVar17;
              in_stack_ffffffffffffff18 = uVar16;
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar11 = (pFVar5->AllSortedComponentData).ArrayNum;
            piVar1 = &(pFVar5->AllSortedComponentData).ArrayMax;
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar19->AllocatorInstance,piVar1);
            }
            (pFVar5->AllSortedComponentData).ArrayNum = iVar11 + 1;
            *(int *)((pTVar19->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_c0[0];
            if (((byte)pFVar15[lVar21 + 0x28] & 0x40) != 0) {
              lVar3 = *(longlong *)(pFVar15 + lVar21);
              if (local_a8 == '\0') {
                uVar25 = *(undefined4 *)(lVar3 + 0x1084);
              }
              else {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                           &USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate,local_88
                          );
                plVar14 = (longlong *)0x0;
                if (USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._16_4_ != 0) {
                  plVar14 = (longlong *)
                            USkeletalMeshComponentBudgeted::OnCalculateSignificanceDelegate._8_8_;
                }
                uVar25 = (**(code **)(*plVar14 + 0x60))(plVar14,lVar3);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(local_88);
              }
              FVar13 = pFVar15[lVar21 + 0x28];
              in_stack_ffffffffffffff18 =
                   CONCAT71((int7)(in_stack_ffffffffffffff18 >> 8),pFVar15[lVar21 + 0x29]) &
                   0xffffffffffffff01;
              in_stack_ffffffffffffff10 =
                   (FScriptContainerElement *)
                   (CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff10 >> 8),(byte)FVar13 >> 5) &
                   0xffffffffffffff01);
              in_stack_ffffffffffffff08 =
                   (int *)(CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff08 >> 8),
                                    (byte)FVar13 >> 2) & 0xffffffffffffff01);
              (**(code **)(pFVar5->_padding_ + 0x20))
                        (pFVar5,*(undefined8 *)(pFVar15 + lVar21),uVar25,(byte)FVar13 >> 1 & 1,
                         in_stack_ffffffffffffff08,in_stack_ffffffffffffff10,
                         in_stack_ffffffffffffff18);
            }
            if ((((byte)pFVar15[lVar21 + 0x28] & 0x30) == 0x20) &&
               (bVar7 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                                   (*(longlong *)(pFVar15 + lVar21) + 0x1060)), bVar7)) {
              TDelegate<void___cdecl(USkeletalMeshComponentBudgeted_*,bool),FDefaultDelegateUserPolicy>
              ::Execute(&(*(USkeletalMeshComponentBudgeted **)(pFVar15 + lVar21))->
                         OnReduceWorkDelegate,*(USkeletalMeshComponentBudgeted **)(pFVar15 + lVar21)
                        ,true);
              pFVar15[lVar21 + 0x28] =
                   (FScriptContainerElement)((byte)pFVar15[lVar21 + 0x28] | 0x10);
            }
            uVar18 = uVar18 + 1;
            pFVar15[lVar21 + 0x27] = (FScriptContainerElement)0xff;
            lVar23 = lVar23 + 1;
          } while (lVar23 < local_res20);
        }
        if ((int)uVar18 < (this->NonRenderedComponentData).ArrayNum) {
          lVar23 = (longlong)(int)uVar18 * 4;
          do {
            uVar9 = 0;
            if ((int)uVar18 < (this->NonRenderedComponentData).ArrayNum) {
              uVar9 = ~uVar18 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar9 = *(uint *)((this->NonRenderedComponentData).AllocatorInstance.Data + lVar23);
            uVar12 = 0;
            if ((int)uVar9 < (this->AllComponentData).ArrayNum) {
              uVar12 = ~uVar9 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar15 = (this->AllComponentData).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
            uVar9 = 0;
            if ((int)uVar18 < (this->NonRenderedComponentData).ArrayNum) {
              uVar9 = ~uVar18 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar9 = *(uint *)((this->NonRenderedComponentData).AllocatorInstance.Data + lVar23);
            lVar21 = (longlong)(int)uVar9;
            uVar12 = 0;
            if ((int)uVar9 < (this->AllComponentData).ArrayNum) {
              uVar12 = ~uVar9 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar17 = (this->AllComponentData).AllocatorInstance.Data;
            pFVar17[lVar21 * 0x30 + 0x26] = (FScriptContainerElement)0x0;
            *(undefined4 *)(pFVar17 + lVar21 * 0x30 + 0x14) = 0;
            uVar9 = this->CurrentFrameOffset;
            this->CurrentFrameOffset = uVar9 + 1;
            *(uint *)(pFVar17 + lVar21 * 0x30 + 0x20) = uVar9;
            FTickFunction::SetTickFunctionEnable
                      ((FTickFunction *)(*(longlong *)(pFVar17 + lVar21 * 0x30) + 0x38),false);
            if ((((byte)pFVar15[0x28] & 0x30) == 0x20) &&
               (bVar7 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                                   (*(longlong *)pFVar15 + 0x1060)), bVar7)) {
              TDelegate<void___cdecl(USkeletalMeshComponentBudgeted_*,bool),FDefaultDelegateUserPolicy>
              ::Execute(&(*(USkeletalMeshComponentBudgeted **)pFVar15)->OnReduceWorkDelegate,
                        *(USkeletalMeshComponentBudgeted **)pFVar15,true);
              pFVar15[0x28] = (FScriptContainerElement)((byte)pFVar15[0x28] | 0x10);
            }
            uVar18 = uVar18 + 1;
            pFVar15[0x27] = (FScriptContainerElement)0xff;
            lVar23 = lVar23 + 4;
          } while ((int)uVar18 < (this->NonRenderedComponentData).ArrayNum);
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAnimationBudgetAllocator::QueueSortedComponentIndices_::__l2::<lambda_4>_>_>
                  ((int *)(this->AllSortedComponentData).AllocatorInstance.Data,
                   (this->AllSortedComponentData).ArrayNum,local_res10[0],(<lambda_4> *)&local_res18
                  );
      }
      return;
    }
    if (((pFVar20->bTickEnabled != 0) &&
        (this_00 = (pFVar20->Component).field0_0x0.DebugPtr,
        this_00 != (USkeletalMeshComponentBudgeted *)0x0)) && ((this_00->_padding_ & 1) != 0)) {
      local_res8[0] = fVar27;
      bVar7 = `FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l12::<lambda_3>::
              operator()(local_res8,this_00,pFVar20);
      if (bVar7) {
        pUVar2 = (pFVar20->RootPrerequisite).field0_0x0.DebugPtr;
        if (pUVar2 != (USkeletalMeshComponentBudgeted *)0x0) {
          uVar18 = pUVar2->AnimationBudgetHandle;
          if (uVar18 != 0xffffffff) {
            iVar10 = (this->AllComponentData).ArrayNum;
            pFVar15 = (FScriptContainerElement *)(longlong)iVar10;
            uVar9 = 0;
            if ((int)uVar18 < iVar10) {
              uVar9 = ~uVar18 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (in_stack_ffffffffffffff08 = (int *)(longlong)(int)uVar18,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               in_stack_ffffffffffffff10 = pFVar15, bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            bVar8 = `FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l12::<lambda_3>::
                    operator()(local_res8,(pFVar20->RootPrerequisite).field0_0x0.DebugPtr,
                               (FAnimBudgetAllocatorComponentData *)
                               ((this->AllComponentData).AllocatorInstance.Data +
                               (longlong)(int)uVar18 * 0x30));
            if (!bVar7 || !bVar8) goto LAB_14a697c1b;
          }
        }
        if ((this_00->_padding_ & 0x400) == 0) {
          fVar24 = UPrimitiveComponent::GetLastRenderTime((UPrimitiveComponent *)this_00);
        }
        else {
          fVar24 = UPrimitiveComponent::GetLastRenderTimeOnScreen((UPrimitiveComponent *)this_00);
        }
        if (((fVar27 < fVar24) || (pFVar20->bTickEvenIfNotRendered == '\0')) ||
           (pFVar20->Significance <= 0.0)) {
          `FAnimationBudgetAllocator::QueueSortedComponentIndices'::__l2::<lambda_1>::operator()
                    (local_b8,pFVar20,local_c8[0],true);
        }
        else {
          pTVar19 = &this->NonRenderedComponentData;
          pFVar15 = (pTVar19->AllocatorInstance).Data;
          if ((pFVar15 <= (FScriptContainerElement *)local_c8) &&
             (uVar16 = (ulonglong)(this->NonRenderedComponentData).ArrayMax,
             (FScriptContainerElement *)local_c8 < pFVar15 + uVar16 * 4)) {
            in_stack_ffffffffffffff08 = local_c8;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            in_stack_ffffffffffffff10 = pFVar15;
            in_stack_ffffffffffffff18 = uVar16;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar10 = (this->NonRenderedComponentData).ArrayNum;
          piVar1 = &(this->NonRenderedComponentData).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar19->AllocatorInstance,piVar1);
          }
          (this->NonRenderedComponentData).ArrayNum = iVar10 + 1;
          *(int *)((pTVar19->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_c8[0];
        }
      }
      else {
LAB_14a697c1b:
        pFVar20->SkippedTicks = '\0';
        pFVar20->AccumulatedDeltaTime = 0.0;
        uVar18 = this->CurrentFrameOffset;
        this->CurrentFrameOffset = uVar18 + 1;
        pFVar20->FrameOffset = uVar18;
        FTickFunction::SetTickFunctionEnable
                  ((FTickFunction *)&((pFVar20->Component).field0_0x0.DebugPtr)->_padding_,false);
      }
    }
    if (pFVar20->bReducedWork != '\0') {
      pTVar19 = &this->DisallowedReducedWorkComponentData;
      if (pFVar20->bAllowReducedWork != '\0') {
        pTVar19 = &this->ReducedWorkComponentData;
      }
      pFVar15 = (pTVar19->AllocatorInstance).Data;
      if ((pFVar15 <= (FScriptContainerElement *)local_c8) &&
         (uVar16 = (ulonglong)pTVar19->ArrayMax,
         (FScriptContainerElement *)local_c8 < pFVar15 + uVar16 * 4)) {
        in_stack_ffffffffffffff08 = local_c8;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        in_stack_ffffffffffffff10 = pFVar15;
        in_stack_ffffffffffffff18 = uVar16;
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar10 = pTVar19->ArrayNum;
      if (iVar10 == pTVar19->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
      }
      pTVar19->ArrayNum = iVar10 + 1;
      *(int *)((pTVar19->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_c8[0];
    }
    local_c8[0] = local_c8[0] + 1;
    pFVar20 = pFVar20 + 1;
  } while( true );
}

// RegisterComponent @ 14a698320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::RegisterComponent
          (FAnimationBudgetAllocator *this,USkeletalMeshComponentBudgeted *param_1)

{
  byte *pbVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  USkeletalMeshComponentBudgeted *pUVar8;
  longlong lVar9;
  
  if ((bCachedEnabled) && (this->bEnabled != false)) {
    pbVar1 = (byte *)((longlong)&param_1->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xf7;
    pbVar1 = (byte *)((longlong)&param_1->_padding_ + 2);
    *pbVar1 = *pbVar1 | 0x40;
  }
  if (param_1->AnimationBudgetHandle == -1) {
    piVar2 = &(this->AllComponentData).ArrayMax;
    param_1->AnimationBudgetHandle = (this->AllComponentData).ArrayNum;
    iVar7 = (this->AllComponentData).ArrayNum;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->AllComponentData).AllocatorInstance,piVar2);
    }
    pFVar6 = (this->AllComponentData).AllocatorInstance.Data;
    (this->AllComponentData).ArrayNum = iVar7 + 1;
    iVar4 = (this->Parameters).StateChangeThrottleInFrames;
    fVar3 = (this->Parameters).InitialEstimatedWorkUnitTimeMs;
    lVar9 = (longlong)iVar7 * 0x30;
    *(USkeletalMeshComponentBudgeted **)(pFVar6 + lVar9) = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar6[lVar9 + 0x29] = (FScriptContainerElement)((byte)pFVar6[lVar9 + 0x29] | 1);
    *(undefined8 *)(pFVar6 + lVar9 + 8) = 0;
    *(undefined8 *)(pFVar6 + lVar9 + 0x1c) = 0;
    pFVar6[lVar9 + 0x26] = (FScriptContainerElement)0x0;
    *(float *)(pFVar6 + lVar9 + 0x18) = fVar3;
    *(undefined8 *)(pFVar6 + lVar9 + 0x10) = 0x3f800000;
    *(undefined2 *)(pFVar6 + lVar9 + 0x24) = 0x101;
    pFVar6[lVar9 + 0x27] = SUB41(iVar4,0);
    pFVar6[lVar9 + 0x28] = (FScriptContainerElement)0x21;
    pUVar8 = FindRootPrerequisite(param_1);
    if ((pUVar8 == (USkeletalMeshComponentBudgeted *)0x0) || (pUVar8 == param_1)) {
      pUVar8 = (USkeletalMeshComponentBudgeted *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (USkeletalMeshComponentBudgeted *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    *(USkeletalMeshComponentBudgeted **)(pFVar6 + lVar9 + 8) = pUVar8;
    uVar5 = this->CurrentFrameOffset;
    this->CurrentFrameOffset = uVar5 + 1;
    *(uint *)(pFVar6 + lVar9 + 0x20) = uVar5;
    pFVar6[lVar9 + 0x28] =
         (FScriptContainerElement)
         ((byte)pFVar6[lVar9 + 0x28] ^
         (param_1->field_0x1088 << 5 ^ (byte)pFVar6[lVar9 + 0x28]) & 0x40);
    param_1->AnimationBudgetAllocator = (IAnimationBudgetAllocator *)this;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a698496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))();
  return;
}

// RegisterComponentDeferred @ 14a6984a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::RegisterComponentDeferred
          (FAnimationBudgetAllocator *this,USkeletalMeshComponentBudgeted *param_1)

{
  int *piVar1;
  TArray<USkeletalMeshComponentBudgeted_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  USkeletalMeshComponentBudgeted *local_res10 [3];
  
  pTVar2 = &this->DeferredRegistrations;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3 + (longlong)(this->DeferredRegistrations).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->DeferredRegistrations).ArrayNum;
  piVar1 = &(this->DeferredRegistrations).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->DeferredRegistrations).ArrayNum = iVar6 + 1;
  *(USkeletalMeshComponentBudgeted **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_res10[0];
  return;
}

// RemoveDeadComponents @ 14a6988f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimationBudgetAllocator::RemoveDeadComponents(FAnimationBudgetAllocator *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->AllComponentData).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 0x30;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->AllComponentData).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->AllComponentData).AllocatorInstance.Data + lVar6);
      if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
        RemoveHelper(this,uVar5,(USkeletalMeshComponentBudgeted *)0x0);
      }
      lVar6 = lVar6 + -0x30;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// RemoveHelper @ 14a6989d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::RemoveHelper
          (FAnimationBudgetAllocator *this,int param_1,USkeletalMeshComponentBudgeted *param_2)

{
  int *piVar1;
  int iVar2;
  USkeletalMeshComponentBudgeted *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  
  if ((-1 < param_1) && (lVar9 = (longlong)param_1, param_1 < (this->AllComponentData).ArrayNum)) {
    uVar10 = (uint)~param_1 >> 0x1f;
    uVar7 = 0;
    if (param_1 < (this->AllComponentData).ArrayNum) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = *(USkeletalMeshComponentBudgeted **)
              ((this->AllComponentData).AllocatorInstance.Data + lVar9 * 0x30);
    if (pUVar3 == param_2) {
      if (pUVar3 != (USkeletalMeshComponentBudgeted *)0x0) {
        pUVar3->AnimationBudgetHandle = -1;
      }
      uVar7 = 0;
      if (param_1 < (this->AllComponentData).ArrayNum) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = (this->AllComponentData).ArrayNum;
      pFVar4 = (this->AllComponentData).AllocatorInstance.Data;
      iVar8 = iVar2 + ~param_1;
      if (1 < iVar8) {
        iVar8 = 1;
      }
      if (iVar8 != 0) {
        memmove(pFVar4 + lVar9 * 0x30,pFVar4 + (longlong)(iVar2 - iVar8) * 0x30,
                (longlong)iVar8 * 0x30);
      }
      piVar1 = &(this->AllComponentData).ArrayNum;
      *piVar1 = *piVar1 + -1;
      if ((param_1 < (this->AllComponentData).ArrayNum) &&
         (lVar9 = *(longlong *)((this->AllComponentData).AllocatorInstance.Data + lVar9 * 0x30),
         lVar9 != 0)) {
        *(int *)(lVar9 + 0x1080) = param_1;
      }
    }
  }
  return;
}

// SetComponentSignificance @ 14a698be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::SetComponentSignificance
          (FAnimationBudgetAllocator *this,USkeletalMeshComponentBudgeted *param_1,float param_2,
          bool param_3,bool param_4,bool param_5,bool param_6)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = param_1->AnimationBudgetHandle;
  if (uVar1 != 0xffffffff) {
    uVar6 = 0;
    if ((int)uVar1 < (this->AllComponentData).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->AllComponentData).AllocatorInstance.Data;
    lVar7 = (longlong)(int)uVar1 * 0x30;
    *(float *)(pFVar2 + lVar7 + 0x10) = param_2;
    if ((param_3) || (!param_5)) {
      bVar5 = 0;
    }
    else {
      bVar5 = 0x20;
    }
    pFVar2[lVar7 + 0x29] = (FScriptContainerElement)((byte)pFVar2[lVar7 + 0x29] & 0xfe);
    pFVar2[lVar7 + 0x29] = (FScriptContainerElement)((byte)pFVar2[lVar7 + 0x29] | param_6);
    pFVar2[lVar7 + 0x28] =
         (FScriptContainerElement)
         ((byte)pFVar2[lVar7 + 0x28] & 0xd9 | param_3 * '\x02' | param_4 << 2 | bVar5);
  }
  return;
}

// SetComponentTickEnabled @ 14a698da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::SetComponentTickEnabled
          (FAnimationBudgetAllocator *this,USkeletalMeshComponentBudgeted *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  if ((bCachedEnabled) && (this->bEnabled != false)) {
    uVar2 = param_1->AnimationBudgetHandle;
    if (uVar2 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar2 < (this->AllComponentData).ArrayNum) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->AllComponentData).AllocatorInstance.Data;
      pFVar1 = pFVar3 + (longlong)(int)uVar2 * 0x30 + 0x28;
      *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 & 0xfe);
      pFVar3 = pFVar3 + (longlong)(int)uVar2 * 0x30 + 0x28;
      *pFVar3 = (FScriptContainerElement)((byte)*pFVar3 | param_2);
    }
  }
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&param_1->_padding_,param_2);
  return;
}

// SetEnabled @ 14a698ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimationBudgetAllocator::SetEnabled(FAnimationBudgetAllocator *this,bool param_1)

{
  this->bEnabled = param_1;
  CheckAndPropagateUpdateStatusChange(this);
  return;
}

// SetGameThreadLastCompletionTimeMs @ 14a698ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::SetGameThreadLastCompletionTimeMs
          (FAnimationBudgetAllocator *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 != -1) {
    uVar3 = 0;
    if (param_1 < (this->AllComponentData).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(float *)((this->AllComponentData).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x1c) =
         param_2;
    this->DebugTotalTime = param_2 + this->DebugTotalTime;
  }
  return;
}

// SetGameThreadLastTickTimeMs @ 14a698f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::SetGameThreadLastTickTimeMs
          (FAnimationBudgetAllocator *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 != -1) {
    uVar3 = 0;
    if (param_1 < (this->AllComponentData).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(float *)((this->AllComponentData).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x18) =
         param_2;
    this->DebugTotalTime = param_2 + this->DebugTotalTime;
  }
  return;
}

// SetIsRunningReducedWork @ 14a699020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::SetIsRunningReducedWork
          (FAnimationBudgetAllocator *this,USkeletalMeshComponentBudgeted *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = param_1->AnimationBudgetHandle;
  if (uVar2 != 0xffffffff) {
    uVar6 = 0;
    if ((int)uVar2 < (this->AllComponentData).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->AllComponentData).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)(int)uVar2 * 0x30 + 0x28;
    *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 & 0xef);
    pFVar3 = pFVar3 + (longlong)(int)uVar2 * 0x30 + 0x28;
    *pFVar3 = (FScriptContainerElement)((byte)*pFVar3 | param_2 << 4);
  }
  return;
}

// SetParameters @ 14a6990c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::SetParameters
          (FAnimationBudgetAllocator *this,FAnimationBudgetAllocatorParameters *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  
  fVar1 = param_1->MinQuality;
  iVar2 = param_1->MaxTickRate;
  fVar3 = param_1->WorkUnitSmoothingSpeed;
  (this->Parameters).BudgetInMs = param_1->BudgetInMs;
  (this->Parameters).MinQuality = fVar1;
  (this->Parameters).MaxTickRate = iVar2;
  (this->Parameters).WorkUnitSmoothingSpeed = fVar3;
  fVar1 = param_1->InterpolationFalloffAggression;
  iVar2 = param_1->InterpolationMaxRate;
  iVar4 = param_1->MaxInterpolatedComponents;
  (this->Parameters).AlwaysTickFalloffAggression = param_1->AlwaysTickFalloffAggression;
  (this->Parameters).InterpolationFalloffAggression = fVar1;
  (this->Parameters).InterpolationMaxRate = iVar2;
  (this->Parameters).MaxInterpolatedComponents = iVar4;
  fVar1 = param_1->InitialEstimatedWorkUnitTimeMs;
  iVar2 = param_1->MaxTickedOffsreenComponents;
  iVar4 = param_1->StateChangeThrottleInFrames;
  (this->Parameters).InterpolationTickMultiplier = param_1->InterpolationTickMultiplier;
  (this->Parameters).InitialEstimatedWorkUnitTimeMs = fVar1;
  (this->Parameters).MaxTickedOffsreenComponents = iVar2;
  (this->Parameters).StateChangeThrottleInFrames = iVar4;
  fVar1 = param_1->BudgetFactorBeforeReducedWorkEpsilon;
  fVar3 = param_1->BudgetPressureSmoothingSpeed;
  iVar2 = param_1->ReducedWorkThrottleMinInFrames;
  (this->Parameters).BudgetFactorBeforeReducedWork = param_1->BudgetFactorBeforeReducedWork;
  (this->Parameters).BudgetFactorBeforeReducedWorkEpsilon = fVar1;
  (this->Parameters).BudgetPressureSmoothingSpeed = fVar3;
  (this->Parameters).ReducedWorkThrottleMinInFrames = iVar2;
  fVar1 = param_1->BudgetFactorBeforeAggressiveReducedWork;
  iVar2 = param_1->ReducedWorkThrottleMaxPerFrame;
  fVar3 = param_1->BudgetPressureBeforeEmergencyReducedWork;
  (this->Parameters).ReducedWorkThrottleMaxInFrames = param_1->ReducedWorkThrottleMaxInFrames;
  (this->Parameters).BudgetFactorBeforeAggressiveReducedWork = fVar1;
  (this->Parameters).ReducedWorkThrottleMaxPerFrame = iVar2;
  (this->Parameters).BudgetPressureBeforeEmergencyReducedWork = fVar3;
  fVar1 = param_1->AutoCalculatedSignificanceMaxDistanceSqr;
  (this->Parameters).AutoCalculatedSignificanceMaxDistance =
       param_1->AutoCalculatedSignificanceMaxDistance;
  (this->Parameters).AutoCalculatedSignificanceMaxDistanceSqr = fVar1;
  return;
}

// SetParametersFromCVars @ 14a699100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimationBudgetAllocator::SetParametersFromCVars(FAnimationBudgetAllocator *this)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = GBudgetParameters._8_8_;
  fVar1 = GBudgetParameters.MinQuality;
  (this->Parameters).BudgetInMs = GBudgetParameters.BudgetInMs;
  uVar4 = GBudgetParameters._8_8_;
  (this->Parameters).MinQuality = fVar1;
  GBudgetParameters.MaxTickRate = (int)uVar2;
  GBudgetParameters.WorkUnitSmoothingSpeed = SUB84(uVar2,4);
  fVar1 = GBudgetParameters.WorkUnitSmoothingSpeed;
  (this->Parameters).MaxTickRate = GBudgetParameters.MaxTickRate;
  GBudgetParameters._8_8_ = uVar4;
  uVar2 = GBudgetParameters._24_8_;
  (this->Parameters).WorkUnitSmoothingSpeed = fVar1;
  fVar1 = GBudgetParameters.InterpolationFalloffAggression;
  (this->Parameters).AlwaysTickFalloffAggression = GBudgetParameters.AlwaysTickFalloffAggression;
  uVar4 = GBudgetParameters._24_8_;
  (this->Parameters).InterpolationFalloffAggression = fVar1;
  GBudgetParameters.InterpolationMaxRate = (int)uVar2;
  GBudgetParameters.MaxInterpolatedComponents = SUB84(uVar2,4);
  iVar3 = GBudgetParameters.MaxInterpolatedComponents;
  (this->Parameters).InterpolationMaxRate = GBudgetParameters.InterpolationMaxRate;
  GBudgetParameters._24_8_ = uVar4;
  uVar2 = GBudgetParameters._40_8_;
  (this->Parameters).MaxInterpolatedComponents = iVar3;
  fVar1 = GBudgetParameters.InitialEstimatedWorkUnitTimeMs;
  (this->Parameters).InterpolationTickMultiplier = GBudgetParameters.InterpolationTickMultiplier;
  uVar4 = GBudgetParameters._40_8_;
  (this->Parameters).InitialEstimatedWorkUnitTimeMs = fVar1;
  GBudgetParameters.MaxTickedOffsreenComponents = (int)uVar2;
  GBudgetParameters.StateChangeThrottleInFrames = SUB84(uVar2,4);
  iVar3 = GBudgetParameters.StateChangeThrottleInFrames;
  (this->Parameters).MaxTickedOffsreenComponents = GBudgetParameters.MaxTickedOffsreenComponents;
  GBudgetParameters._40_8_ = uVar4;
  uVar2 = GBudgetParameters._56_8_;
  (this->Parameters).StateChangeThrottleInFrames = iVar3;
  fVar1 = GBudgetParameters.BudgetFactorBeforeReducedWorkEpsilon;
  (this->Parameters).BudgetFactorBeforeReducedWork = GBudgetParameters.BudgetFactorBeforeReducedWork
  ;
  uVar4 = GBudgetParameters._56_8_;
  (this->Parameters).BudgetFactorBeforeReducedWorkEpsilon = fVar1;
  GBudgetParameters.BudgetPressureSmoothingSpeed = (float)uVar2;
  GBudgetParameters.ReducedWorkThrottleMinInFrames = SUB84(uVar2,4);
  iVar3 = GBudgetParameters.ReducedWorkThrottleMinInFrames;
  (this->Parameters).BudgetPressureSmoothingSpeed = GBudgetParameters.BudgetPressureSmoothingSpeed;
  GBudgetParameters._56_8_ = uVar4;
  uVar2 = GBudgetParameters._72_8_;
  (this->Parameters).ReducedWorkThrottleMinInFrames = iVar3;
  fVar1 = GBudgetParameters.BudgetFactorBeforeAggressiveReducedWork;
  (this->Parameters).ReducedWorkThrottleMaxInFrames =
       GBudgetParameters.ReducedWorkThrottleMaxInFrames;
  uVar4 = GBudgetParameters._72_8_;
  (this->Parameters).BudgetFactorBeforeAggressiveReducedWork = fVar1;
  GBudgetParameters.ReducedWorkThrottleMaxPerFrame = (int)uVar2;
  GBudgetParameters.BudgetPressureBeforeEmergencyReducedWork = SUB84(uVar2,4);
  fVar1 = GBudgetParameters.BudgetPressureBeforeEmergencyReducedWork;
  (this->Parameters).ReducedWorkThrottleMaxPerFrame =
       GBudgetParameters.ReducedWorkThrottleMaxPerFrame;
  GBudgetParameters._72_8_ = uVar4;
  (this->Parameters).BudgetPressureBeforeEmergencyReducedWork = fVar1;
  fVar1 = GBudgetParameters.AutoCalculatedSignificanceMaxDistanceSqr;
  (this->Parameters).AutoCalculatedSignificanceMaxDistance =
       GBudgetParameters.AutoCalculatedSignificanceMaxDistance;
  (this->Parameters).AutoCalculatedSignificanceMaxDistanceSqr = fVar1;
  return;
}

// TickEnableHelper @ 14a6994f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::TickEnableHelper
          (FAnimationBudgetAllocator *this,USkeletalMeshComponent *param_1,bool param_2)

{
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&param_1->_padding_,param_2);
  return;
}

// UnregisterAllComponents @ 14a699790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimationBudgetAllocator::UnregisterAllComponents(FAnimationBudgetAllocator *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = (this->AllComponentData).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 0x30;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->AllComponentData).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->AllComponentData).AllocatorInstance.Data;
      lVar2 = *(longlong *)(pFVar1 + lVar7);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
        (**(code **)(this->_padding_ + 8))(this,*(undefined8 *)(pFVar1 + lVar7));
      }
      lVar7 = lVar7 + -0x30;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// UnregisterComponent @ 14a699870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::UnregisterComponent
          (FAnimationBudgetAllocator *this,USkeletalMeshComponentBudgeted *param_1)

{
  byte *pbVar1;
  
  if (param_1->AnimationBudgetHandle != -1) {
    RemoveHelper(this,param_1->AnimationBudgetHandle,param_1);
    pbVar1 = (byte *)((longlong)&param_1->_padding_ + 1);
    *pbVar1 = *pbVar1 | 8;
    pbVar1 = (byte *)((longlong)&param_1->_padding_ + 2);
    *pbVar1 = *pbVar1 & 0xbf;
    param_1->AnimationBudgetAllocator = (IAnimationBudgetAllocator *)0x0;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&param_1->_padding_,true);
    return;
  }
  return;
}

// Update @ 14a6998d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimationBudgetAllocator::Update(FAnimationBudgetAllocator *this,float param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  float fVar5;
  FScriptContainerElement FVar6;
  FName FVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  longlong *plVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Update> FVar19;
  FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_NumTickedComponents> FVar20;
  FThreadStats *pFVar21;
  FThreadStatsPool *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_NumRegisteredComponents> FVar23;
  byte bVar24;
  uint uVar25;
  ForAnyElementType FVar26;
  ForElementType<FSetElementId> FVar27;
  ulonglong *puVar28;
  longlong lVar29;
  uint uVar30;
  FAnimationBudgetAllocator *pFVar31;
  FScriptContainerElement *pFVar32;
  uint *puVar33;
  FName FVar34;
  int iVar35;
  uint *puVar36;
  FNameEntryId FVar37;
  longlong lVar38;
  uchar auVar39 [8];
  double dVar40;
  undefined1 in_XMM2 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  undefined1 auStackY_2c8 [32];
  undefined1 local_267;
  undefined1 local_266;
  undefined1 local_265;
  uint local_264;
  uint local_260;
  uint uStack_25c;
  FName local_258;
  FAnimationBudgetAllocator *local_250;
  FColor_u_0 local_248;
  float local_244;
  int local_240 [2];
  FString local_238;
  FName local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  FName local_200;
  ulonglong local_1f0;
  ulonglong *local_1e8;
  int local_1e0;
  int local_1dc;
  FName local_1d8;
  FName local_1d0;
  FStatMessage local_1c8;
  FStatMessage local_1b8;
  FString local_1a8;
  FString local_198;
  longlong *local_188;
  int iStack_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  uint local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  FName local_128;
  FName local_120;
  FName local_118 [4];
  undefined4 local_f4;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  FVar19 = StatPtr_STAT_AnimationBudgetAllocator_Update;
  local_250 = this;
  if (StatPtr_STAT_AnimationBudgetAllocator_Update ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Update>)0x0) {
    pFVar18 = ::FName::FName(&local_128,"STAT_AnimationBudgetAllocator_Update");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_Update>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationBudgetAllocator_Update,
                        *pFVar18,L"InitialTick","STATGROUP_AnimationBudgetAllocator",
                        "STATCAT_Advanced",L"Animation Budget Allocator",true,true,ST_int64,true,
                        false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar19;
  bVar10 = false;
  bVar11 = false;
  local_200.ComparisonIndex.Value = 0;
  local_200.Number = 0;
  bVar14 = false;
  bVar15 = false;
  if ((FVar34.ComparisonIndex.Value.Value != 0) || (FVar34.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_248.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_248._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_228.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AnimationBudgetAllocator\\Source\\AnimationBudgetAllocator\\Private\\AnimationBudgetAllocator.cpp"
                   ,0x2c4);
        bVar10 = true;
        bVar11 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_258 = FVar34;
      FThreadStats::AddMessage(FVar34,CycleScopeStart);
      bVar14 = true;
      goto LAB_14a699a53;
    }
  }
  bVar11 = bVar15;
  bVar10 = bVar14;
  bVar14 = false;
  local_258 = local_200;
  FVar34 = local_200;
LAB_14a699a53:
  if (__CsvProfilerStat709 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("AnimationBudgetAllocator");
    __CsvProfilerStat709 = true;
  }
  FCsvProfiler::BeginExclusiveStat("AnimationBudgetAllocator","CSV_AnimationBudgetAllocator");
  CheckAndPropagateUpdateStatusChange(this);
  if (this->bCurrentlyUpdating != false) {
    bVar15 = IsInGameThread();
    if ((!bVar15) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AnimationBudgetAllocator\\Source\\AnimationBudgetAllocator\\Private\\AnimationBudgetAllocator.cpp"
                            ,0x2cb,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (this->AllSortedComponentData).ArrayNum = 0;
    if ((this->AllSortedComponentData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->AllSortedComponentData).AllocatorInstance,0,
                 &(this->AllSortedComponentData).ArrayMax);
    }
    (this->ReducedWorkComponentData).ArrayNum = 0;
    if ((this->ReducedWorkComponentData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->ReducedWorkComponentData).AllocatorInstance,0,
                 &(this->ReducedWorkComponentData).ArrayMax);
    }
    (this->DisallowedReducedWorkComponentData).ArrayNum = 0;
    if ((this->DisallowedReducedWorkComponentData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->DisallowedReducedWorkComponentData).AllocatorInstance,0,
                 &(this->DisallowedReducedWorkComponentData).ArrayMax);
    }
    (this->NonRenderedComponentData).ArrayNum = 0;
    if ((this->NonRenderedComponentData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->NonRenderedComponentData).AllocatorInstance,0,
                 &(this->NonRenderedComponentData).ArrayMax);
    }
    QueueSortedComponentIndices(this,param_1);
    local_244 = 0.0;
    iVar16 = CalculateWorkDistributionAndQueue(this,param_1,&local_244);
    if (FThreadStats::bPrimaryEnable != false) {
      FVar20 = StatPtr_STAT_AnimationBudgetAllocator_NumTickedComponents;
      if (StatPtr_STAT_AnimationBudgetAllocator_NumTickedComponents ==
          (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_NumTickedComponents>)0x0) {
        pFVar18 = ::FName::FName(&local_120,"STAT_AnimationBudgetAllocator_NumTickedComponents");
        FVar20 = (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_NumTickedComponents>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_AnimationBudgetAllocator_NumTickedComponents,*pFVar18,
                            L"Num Ticked Components","STATGROUP_AnimationBudgetAllocator",
                            "STATCAT_Advanced",L"Animation Budget Allocator",true,true,ST_int64,
                            false,false,MCR_Invalid);
      }
      FVar7 = *(FName *)FVar20;
      FVar37 = FVar7.ComparisonIndex.Value;
      uVar25 = FVar7.Number;
      pFVar31 = this;
      local_260 = FVar37.Value;
      uStack_25c = uVar25;
      if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar21 == (FThreadStats *)0x0) {
          pFVar22 = FThreadStatsPool::Get();
          pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
        }
        local_1c8.NameAndInfo.Number = uVar25 & 0xffff8fff | 0x8000;
        local_1d8 = FVar7;
        local_1c8.StatData.Pad = (uchar  [8])(longlong)iVar16;
        local_1c8.NameAndInfo.Index.Value = FVar37.Value;
        FThreadStats::AddStatMessage(pFVar21,&local_1c8);
        FStatsTrace::Set(&local_1d8,(longlong)iVar16);
        if (pFVar21->ScopeCount == 0) {
          FThreadStats::Flush(pFVar21,false,false);
          pFVar31 = local_250;
        }
        else {
          pFVar31 = local_250;
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar21,false,false);
            pFVar31 = local_250;
          }
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar23 = StatPtr_STAT_AnimationBudgetAllocator_NumRegisteredComponents;
        if (StatPtr_STAT_AnimationBudgetAllocator_NumRegisteredComponents ==
            (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_NumRegisteredComponents>)0x0)
        {
          pFVar18 = ::FName::FName(local_118,"STAT_AnimationBudgetAllocator_NumRegisteredComponents"
                                  );
          FVar23 = (FThreadSafeStaticStat<FStat_STAT_AnimationBudgetAllocator_NumRegisteredComponents>
                    )FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_AnimationBudgetAllocator_NumRegisteredComponents,
                                *pFVar18,L"Num Registered Components",
                                "STATGROUP_AnimationBudgetAllocator","STATCAT_Advanced",
                                L"Animation Budget Allocator",true,true,ST_int64,false,false,
                                MCR_Invalid);
        }
        FVar7 = *(FName *)FVar23;
        auVar39 = (uchar  [8])(longlong)(pFVar31->AllComponentData).ArrayNum;
        uVar25 = FVar7.Number;
        FVar37 = FVar7.ComparisonIndex.Value;
        local_260 = FVar37.Value;
        uStack_25c = uVar25;
        if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar21 == (FThreadStats *)0x0) {
            pFVar22 = FThreadStatsPool::Get();
            pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
          }
          local_1b8.NameAndInfo.Number = uVar25 & 0xffff8fff | 0x8000;
          local_1d0 = FVar7;
          local_1b8.StatData.Pad = auVar39;
          local_1b8.NameAndInfo.Index.Value = FVar37.Value;
          FThreadStats::AddStatMessage(pFVar21,&local_1b8);
          FStatsTrace::Set(&local_1d0,(long64)auVar39);
          if (pFVar21->ScopeCount == 0) {
            FThreadStats::Flush(pFVar21,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar21,false,false);
          }
        }
      }
    }
    pFVar31 = local_250;
    if (GAnimationBudgetDebugEnabled != 0) {
      pFVar32 = (this->AllSortedComponentData).AllocatorInstance.Data;
      iVar35 = 0;
      iVar16 = (this->AllSortedComponentData).ArrayNum;
      pFVar3 = pFVar32 + (longlong)iVar16 * 4;
      local_e8._0_8_ = 0;
      local_e8._8_8_ = 0;
      local_c8 = (uint *)0x0;
      local_c0 = 0;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      while( true ) {
        if ((this->AllSortedComponentData).ArrayNum != iVar16) {
          local_267 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_267)
          ;
        }
        uVar25 = local_c0;
        local_168 = 0;
        if (pFVar32 == pFVar3) break;
        local_264 = *(uint *)pFVar32;
        lVar29 = (longlong)(int)local_264;
        if ((int)local_264 < (pFVar31->AllComponentData).ArrayNum) {
          local_168 = ~local_264 >> 0x1f;
        }
        if ((local_168 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_1f0 = *(ulonglong *)
                     (*(longlong *)
                       ((pFVar31->AllComponentData).AllocatorInstance.Data + lVar29 * 0x30) + 0xa8);
        uVar25 = ((uint)(local_1f0 >> 0x14) & 0xffff ^ (uint)(local_1f0 >> 4)) * -0x7a143595;
        uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
        uVar25 = uVar25 >> 0x10 ^ uVar25;
        if (local_e8._8_4_ != local_b4) {
          FVar27 = (ForElementType<FSetElementId>)local_b0;
          if (local_a8 != (ForElementType<FSetElementId>)0x0) {
            FVar27 = local_a8;
          }
          iVar17 = *(int *)((longlong)FVar27 + (ulonglong)(local_a0 - 1U & uVar25) * 4);
          while (iVar17 != -1) {
            puVar28 = (ulonglong *)((longlong)iVar17 * 0x20 + local_e8._0_8_);
            if (*puVar28 == local_1f0) {
              if (puVar28 != (ulonglong *)0x0) goto LAB_14a69a016;
              break;
            }
            iVar17 = (int)puVar28[3];
          }
        }
        local_1e8 = &local_1f0;
        TSet<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<AActor_*_&&>_>
                  ((TSet<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)local_e8,(uint)local_240,(TKeyInitializer<AActor_*_&&> *)(ulonglong)uVar25,
                   (bool *)&local_1e8);
        puVar28 = (ulonglong *)((longlong)local_240[0] * 0x20 + local_e8._0_8_);
LAB_14a69a016:
        if ((((uint *)puVar28[1] <= &local_264) &&
            (&local_264 < (uint *)puVar28[1] + *(int *)((longlong)puVar28 + 0x14))) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar17 = (int)puVar28[2];
        if (iVar17 == *(int *)((longlong)puVar28 + 0x14)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)(puVar28 + 1),
                              (int *)((longlong)puVar28 + 0x14));
        }
        *(int *)(puVar28 + 2) = iVar17 + 1;
        pFVar32 = pFVar32 + 4;
        *(uint *)(((ForAnyElementType *)(puVar28 + 1))->Data + (longlong)iVar17 * 4) = local_264;
      }
      uStack_17c = 1;
      uStack_16c = 0;
      if (local_c0 != 0) {
        puVar36 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar36 = local_c8;
        }
        uVar30 = *puVar36;
        local_168 = 0;
        while (uVar30 == 0) {
          lVar29 = (longlong)iVar35;
          local_168 = local_168 + 0x20;
          iVar35 = iVar35 + 1;
          uStack_16c = local_c0;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar35)
          goto LAB_14a69a141;
          uVar30 = puVar36[lVar29 + 1];
        }
        uStack_17c = -uVar30 & uVar30;
        uVar4 = (ulonglong)uStack_17c * 2 + 1;
        lVar29 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        local_1e0 = (int)lVar29;
        uStack_16c = (local_168 - 1) + local_1e0;
        if ((int)local_c0 < (int)uStack_16c) {
          uStack_16c = local_c0;
        }
      }
LAB_14a69a141:
      local_188 = (longlong *)local_e8;
      uVar30 = local_c0 & 0xffffffe0;
      uStack_164 = local_f4;
      local_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      iStack_160 = local_e8._8_4_ - local_b4;
      uStack_170 = 0xffffffff;
      TStack_150.CurrentBitIndex = uStack_16c;
      TStack_150.UnvisitedBitMask = 0xffffffff;
      TStack_150._padding_ = CONCAT44(uStack_17c,iVar35);
      iVar16 = (int)local_c0 >> 5;
      TStack_150._28_4_ = local_f4;
      TStack_150.BaseBitIndex = local_168;
      uStack_130 = CONCAT44(uStack_15c,iStack_160);
      bVar24 = (byte)local_c0;
      local_260 = local_c0;
      iStack_180 = iVar35;
      local_158 = local_188;
      TStack_150.Array = local_178;
      if (((int)local_c0 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar31 = local_250;
      fVar12 = __real_3c83126f;
      fVar5 = __real_3f800000;
      if (uVar25 != local_c0) {
        puVar36 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar36 = local_c8;
        }
        uVar25 = -1 << (bVar24 & 0x1f) & puVar36[iVar16];
        while (uVar25 == 0) {
          lVar29 = (longlong)iVar16;
          uVar30 = uVar30 + 0x20;
          iVar16 = iVar16 + 1;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) {
            local_260 = local_c0;
            uVar25 = local_c0;
            goto LAB_14a69a280;
          }
          uVar25 = puVar36[lVar29 + 1];
        }
        uVar4 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
        lVar29 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        local_1dc = (int)lVar29;
        uVar25 = (uVar30 - 1) + local_1dc;
        local_260 = uVar25;
        if ((int)local_c0 < (int)uVar25) {
          uVar25 = local_c0;
          local_260 = local_c0;
        }
      }
LAB_14a69a280:
      while( true ) {
        plVar13 = local_158;
        if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
          local_266 = 0;
          `TSparseArray<TSparseSetElement<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_266);
        }
        FVar34 = local_258;
        if (((TStack_150.CurrentBitIndex == uVar25) &&
            (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
           (plVar13 == (longlong *)local_e8)) break;
        lVar29 = *plVar13;
        lVar38 = (longlong)TStack_150.CurrentBitIndex * 0x20;
        local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.Data.ArrayNum = 0;
        local_238.Data.ArrayMax = 0;
        puVar33 = *(uint **)(lVar38 + 8 + lVar29);
        iVar16 = *(int *)(lVar38 + 0x10 + lVar29);
        puVar36 = puVar33 + iVar16;
        while( true ) {
          if (*(int *)(lVar38 + 0x10 + lVar29) != iVar16) {
            local_265 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_265);
          }
          if (puVar33 == puVar36) break;
          uVar25 = *puVar33;
          uVar30 = 0;
          if ((int)uVar25 < (pFVar31->AllComponentData).ArrayNum) {
            uVar30 = ~uVar25 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar3 = (pFVar31->AllComponentData).AllocatorInstance.Data;
          FVar6 = pFVar3[(longlong)(int)uVar25 * 0x30 + 0x28];
          if ((((byte)FVar6 & 1) != 0) && ((char)FVar6 < '\0')) {
            if (GAnimationBudgetDebugShowAddresses == 0) {
              in_XMM2._0_8_ = (double)*(float *)(pFVar3 + (longlong)(int)uVar25 * 0x30 + 0x10);
              in_XMM2._8_8_ = 0;
              ::FString::PrintfImpl(&local_198,L"%.03f %d %s %s\n");
              iVar35 = local_198.Data.ArrayNum + -1;
              if (local_198.Data.ArrayNum == 0) {
                iVar35 = 0;
              }
              ::FString::AppendChars
                        (&local_238,(wchar_t *)local_198.Data.AllocatorInstance.Data,iVar35);
              FVar26.Data = local_198.Data.AllocatorInstance.Data;
            }
            else {
              ::FString::PrintfImpl(&local_1a8,L"0x%llx %d %s %s\n");
              iVar35 = local_1a8.Data.ArrayNum + -1;
              if (local_1a8.Data.ArrayNum == 0) {
                iVar35 = 0;
              }
              ::FString::AppendChars
                        (&local_238,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,iVar35);
              FVar26.Data = local_1a8.Data.AllocatorInstance.Data;
            }
            if (FVar26.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar26.Data);
            }
          }
          puVar33 = puVar33 + 1;
        }
        DrawDebugString((pFVar31->World).field0_0x0.DebugPtr,&UE::Math::TVector<double>::ZeroVector,
                        &local_238,*(AActor **)(lVar38 + lVar29),&FColor::White,fVar12,false,fVar5);
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
        TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
        uVar25 = local_260;
      }
      pTVar2 = &pFVar31->DebugTimes;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      local_220 = (double)pFVar31->CurrentDebugTimeDisplay;
      dStack_218 = (double)pFVar31->DebugTotalTime;
      if (((pFVar3 <= (FScriptContainerElement *)&local_220) &&
          ((FScriptContainerElement *)&local_220 <
           pFVar3 + (longlong)(pFVar31->DebugTimes).ArrayMax * 0x10)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = (pFVar31->DebugTimes).ArrayNum;
      piVar1 = &(pFVar31->DebugTimes).ArrayMax;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar31->DebugTimes).ArrayNum = iVar16 + 1;
      fVar42 = 0.0;
      fVar43 = 0.0;
      iVar35 = 0;
      pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 0x10;
      *(double *)pFVar3 = local_220;
      *(double *)(pFVar3 + 8) = dStack_218;
      uVar25 = (pFVar31->DebugTimes).ArrayNum - 1;
      if (-1 < (int)uVar25) {
        lVar29 = (longlong)(int)uVar25 << 4;
        do {
          if (0x13 < iVar35) break;
          uVar30 = 0;
          if ((int)uVar25 < (pFVar31->DebugTimes).ArrayNum) {
            uVar30 = ~uVar25 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar43 = fVar43 + fVar5;
          iVar35 = iVar35 + 1;
          lVar38 = lVar29 + 8;
          lVar29 = lVar29 + -0x10;
          uVar25 = uVar25 - 1;
          fVar42 = (float)((double)fVar42 + *(double *)((pTVar2->AllocatorInstance).Data + lVar38));
        } while (-1 < (int)uVar25);
      }
      pTVar2 = &pFVar31->DebugTimesSmoothed;
      if (fVar43 <= 0.0) {
        fVar42 = 0.0;
      }
      else {
        fVar42 = fVar42 / fVar43;
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      local_210 = (double)pFVar31->CurrentDebugTimeDisplay;
      dStack_208 = (double)fVar42;
      if (((pFVar3 <= (FScriptContainerElement *)&local_210) &&
          ((FScriptContainerElement *)&local_210 <
           pFVar3 + (longlong)(pFVar31->DebugTimesSmoothed).ArrayMax * 0x10)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = (pFVar31->DebugTimesSmoothed).ArrayNum;
      piVar1 = &(pFVar31->DebugTimesSmoothed).ArrayMax;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar31->DebugTimesSmoothed).ArrayNum = iVar16 + 1;
      pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 0x10;
      *(double *)pFVar3 = local_210;
      *(double *)(pFVar3 + 8) = dStack_208;
      fVar5 = (pFVar31->Parameters).BudgetInMs;
      pFVar31->CurrentDebugTimeDisplay = pFVar31->CurrentDebugTimeDisplay + fVar12;
      iVar16 = (pFVar31->DebugTimesSmoothed).ArrayNum;
      uVar30 = iVar16 - 1;
      uVar25 = 0;
      if ((int)uVar30 < iVar16) {
        uVar25 = ~uVar30 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar9 = (double)fVar5;
      dVar40 = *(double *)
                ((pTVar2->AllocatorInstance).Data +
                (longlong)(pFVar31->DebugTimesSmoothed).ArrayNum * 0x10 + -8) *
               __real_3fe0000000000000;
      pFVar31->DebugTotalTime = 0.0;
      local_a0 = 0;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = dVar40;
      auVar41 = roundpd(in_XMM2,auVar41,2);
      dVar40 = auVar41._0_8_ + auVar41._0_8_;
      if (dVar40 <= dVar9) {
        dVar40 = dVar9;
      }
      pFVar31->DebugSmoothedTotalTime = (float)dVar40;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<AActor_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
    }
  }
  FCsvProfiler::EndExclusiveStat("AnimationBudgetAllocator");
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return;
}

// UpdateComponentTickPrerequsites @ 14a69a8c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimationBudgetAllocator::UpdateComponentTickPrerequsites
          (FAnimationBudgetAllocator *this,USkeletalMeshComponentBudgeted *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  USkeletalMeshComponentBudgeted *pUVar6;
  
  uVar1 = param_1->AnimationBudgetHandle;
  if (uVar1 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar1 < (this->AllComponentData).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->AllComponentData).AllocatorInstance.Data;
    pUVar6 = FindRootPrerequisite(param_1);
    if ((pUVar6 == (USkeletalMeshComponentBudgeted *)0x0) || (pUVar6 == param_1)) {
      pUVar6 = (USkeletalMeshComponentBudgeted *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (USkeletalMeshComponentBudgeted *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    *(USkeletalMeshComponentBudgeted **)(pFVar2 + (longlong)(int)uVar1 * 0x30 + 8) = pUVar6;
  }
  return;
}

