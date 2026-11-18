// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 22

// StaticClass @ 14dc6a160

UClass * __cdecl UMovieGraphCoreTimeStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCoreTimeStep",
               &Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.InnerSingleton,
               StaticRegisterNativesUMovieGraphCoreTimeStep,400,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphCoreTimeStep>,
               InternalVTableHelperCtorCaller<UMovieGraphCoreTimeStep>,local_res8,
               UMovieGraphTimeStepBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.InnerSingleton;
}

// UMovieGraphCoreTimeStep @ 14dc72c20

UMovieGraphCoreTimeStep * __thiscall
UMovieGraphCoreTimeStep::UMovieGraphCoreTimeStep
          (UMovieGraphCoreTimeStep *this,FVTableHelper *param_1)

{
  UMovieGraphTimeStepBase::UMovieGraphTimeStepBase((UMovieGraphTimeStepBase *)this,param_1);
  this->bPrevWorldAllowTimeDilation = true;
  this->_padding_ = (longlong)&___7UMovieGraphCoreTimeStep__6B_;
  (this->CurrentTimeStepData).OutputFrameNumber = 0;
  (this->CurrentTimeStepData).ShotOutputFrameNumber = 0;
  (this->CurrentTimeStepData).RenderedFrameNumber = 0;
  (this->CurrentTimeStepData).FrameDeltaTime = 0.0;
  (this->CurrentTimeStepData).WorldTimeDilation = 0.0;
  (this->CurrentTimeStepData).bHasRelativeTimeBeenUsed = false;
  (this->CurrentTimeStepData).WorldSeconds = 0.0;
  (this->CurrentTimeStepData).MotionBlurFraction = 0.0;
  (this->CurrentTimeStepData).FrameRate.Numerator = 0;
  (this->CurrentTimeStepData).FrameRate.Denominator = 0;
  (this->CurrentTimeStepData).TemporalSampleIndex = 0;
  (this->CurrentTimeStepData).TemporalSampleCount = 0;
  (this->CurrentTimeStepData).SpatialSampleIndex = 0;
  (this->CurrentTimeStepData).SpatialSampleCount = 0;
  (this->CurrentTimeStepData).bIsFirstTemporalSampleForFrame = false;
  (this->CurrentTimeStepData).bIsLastTemporalSampleForFrame = false;
  (this->CurrentTimeStepData).bDiscardOutput = false;
  (this->CurrentTimeStepData).bRequiresAccumulator = false;
  (this->CurrentTimeStepData).EvaluatedConfig.field0_0x0.DebugPtr =
       (UMovieGraphEvaluatedConfig *)0x0;
  (this->CurrentTimeStepData).RootTimeCode.Hours = 0;
  (this->CurrentTimeStepData).RootTimeCode.Minutes = 0;
  (this->CurrentTimeStepData).RootTimeCode.Seconds = 0;
  (this->CurrentTimeStepData).RootTimeCode.Frames = 0;
  (this->CurrentTimeStepData).RootTimeCode.Subframe = 0.0;
  (this->CurrentTimeStepData).RootTimeCode.bDropFrameFormat = false;
  (this->CurrentTimeStepData).RootFrameNumber = 0;
  (this->CurrentTimeStepData).ShotTimeCode.Hours = 0;
  (this->CurrentTimeStepData).ShotTimeCode.Minutes = 0;
  (this->CurrentTimeStepData).ShotTimeCode.Seconds = 0;
  (this->CurrentTimeStepData).ShotTimeCode.Frames = 0;
  (this->CurrentTimeStepData).ShotTimeCode.Subframe = 0.0;
  (this->CurrentTimeStepData).ShotTimeCode.bDropFrameFormat = false;
  (this->CurrentTimeStepData).ShotFrameNumber.Value = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).FrameTimePerOutputFrame.SubFrame = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).FrameTimeWhileShutterOpen.SubFrame = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).FrameTimePerTemporalSample.SubFrame = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).FrameTimeWhileShutterClosed.SubFrame = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).ShutterOffsetFrameTime.SubFrame = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).MotionBlurCenteringOffsetTime.SubFrame = 0;
  (this->CurrentFrameData).TemporalSampleCount = 0;
  (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).RangeShutterOpen.LowerBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).RangeShutterOpen.LowerBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).RangeShutterOpen.UpperBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).RangeShutterOpen.UpperBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).RangeShutterClosed.LowerBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).RangeShutterClosed.LowerBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).RangeShutterClosed.UpperBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).RangeShutterClosed.UpperBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).LastSampleRange.LowerBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).LastSampleRange.LowerBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).LastSampleRange.UpperBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).LastSampleRange.UpperBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).TemporalRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentFrameData).TemporalRanges.ArrayNum = 0;
  (this->CurrentFrameData).TemporalRanges.ArrayMax = 0;
  (this->CurrentFrameData).EvaluatedConfig.Object = (UObject *)0x0;
  (this->CurrentFrameMetrics).FrameRate.Numerator = 60000;
  (this->CurrentFrameMetrics).FrameRate.Denominator = 1;
  (this->CurrentFrameMetrics).TickResolution.Numerator = 60000;
  *(undefined8 *)&(this->CurrentFrameMetrics).TickResolution.Denominator = 1;
  (this->CurrentFrameMetrics).TimeDilation = 1.0;
  (this->CurrentFrameMetrics).FrameTimeWhileShutterOpen.FrameNumber = 0;
  (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Type.Value = '\x02';
  (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Type.Value = '\x02';
  (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Type.Value = '\x02';
  (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Type.Value = '\x02';
  (this->CurrentFrameData).RangeShutterOpen.LowerBound.Type.Value = '\x02';
  (this->CurrentFrameData).RangeShutterOpen.UpperBound.Type.Value = '\x02';
  (this->CurrentFrameData).RangeShutterClosed.LowerBound.Type.Value = '\x02';
  (this->CurrentFrameData).RangeShutterClosed.UpperBound.Type.Value = '\x02';
  (this->CurrentFrameData).LastSampleRange.LowerBound.Type.Value = '\x02';
  (this->CurrentFrameData).LastSampleRange.UpperBound.Type.Value = '\x02';
  return this;
}

// UMovieGraphCoreTimeStep @ 14dc72db0

UMovieGraphCoreTimeStep * __thiscall
UMovieGraphCoreTimeStep::UMovieGraphCoreTimeStep(UMovieGraphCoreTimeStep *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UMovieGraphTimeStepBase::UMovieGraphTimeStepBase((UMovieGraphTimeStepBase *)this,pFVar1);
  this->bPrevWorldAllowTimeDilation = true;
  this->_padding_ = (longlong)&___7UMovieGraphCoreTimeStep__6B_;
  (this->CurrentTimeStepData).OutputFrameNumber = 0;
  (this->CurrentTimeStepData).ShotOutputFrameNumber = 0;
  (this->CurrentTimeStepData).RenderedFrameNumber = 0;
  (this->CurrentTimeStepData).FrameDeltaTime = 0.0;
  (this->CurrentTimeStepData).WorldTimeDilation = 0.0;
  (this->CurrentTimeStepData).bHasRelativeTimeBeenUsed = false;
  (this->CurrentTimeStepData).WorldSeconds = 0.0;
  (this->CurrentTimeStepData).MotionBlurFraction = 0.0;
  (this->CurrentTimeStepData).FrameRate.Numerator = 0;
  (this->CurrentTimeStepData).FrameRate.Denominator = 0;
  (this->CurrentTimeStepData).TemporalSampleIndex = 0;
  (this->CurrentTimeStepData).TemporalSampleCount = 0;
  (this->CurrentTimeStepData).SpatialSampleIndex = 0;
  (this->CurrentTimeStepData).SpatialSampleCount = 0;
  (this->CurrentTimeStepData).bIsFirstTemporalSampleForFrame = false;
  (this->CurrentTimeStepData).bIsLastTemporalSampleForFrame = false;
  (this->CurrentTimeStepData).bDiscardOutput = false;
  (this->CurrentTimeStepData).bRequiresAccumulator = false;
  (this->CurrentTimeStepData).EvaluatedConfig.field0_0x0.DebugPtr =
       (UMovieGraphEvaluatedConfig *)0x0;
  (this->CurrentTimeStepData).RootTimeCode.Hours = 0;
  (this->CurrentTimeStepData).RootTimeCode.Minutes = 0;
  (this->CurrentTimeStepData).RootTimeCode.Seconds = 0;
  (this->CurrentTimeStepData).RootTimeCode.Frames = 0;
  (this->CurrentTimeStepData).RootTimeCode.Subframe = 0.0;
  (this->CurrentTimeStepData).RootTimeCode.bDropFrameFormat = false;
  (this->CurrentTimeStepData).RootFrameNumber = 0;
  (this->CurrentTimeStepData).ShotTimeCode.Hours = 0;
  (this->CurrentTimeStepData).ShotTimeCode.Minutes = 0;
  (this->CurrentTimeStepData).ShotTimeCode.Seconds = 0;
  (this->CurrentTimeStepData).ShotTimeCode.Frames = 0;
  (this->CurrentTimeStepData).ShotTimeCode.Subframe = 0.0;
  (this->CurrentTimeStepData).ShotTimeCode.bDropFrameFormat = false;
  (this->CurrentTimeStepData).ShotFrameNumber.Value = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).FrameTimePerOutputFrame.SubFrame = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).FrameTimeWhileShutterOpen.SubFrame = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).FrameTimePerTemporalSample.SubFrame = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).FrameTimeWhileShutterClosed.SubFrame = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).ShutterOffsetFrameTime.SubFrame = 0;
  *(undefined8 *)&(this->CurrentFrameMetrics).MotionBlurCenteringOffsetTime.SubFrame = 0;
  (this->CurrentFrameData).TemporalSampleCount = 0;
  (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).RangeShutterOpen.LowerBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).RangeShutterOpen.LowerBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).RangeShutterOpen.UpperBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).RangeShutterOpen.UpperBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).RangeShutterClosed.LowerBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).RangeShutterClosed.LowerBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).RangeShutterClosed.UpperBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).RangeShutterClosed.UpperBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).LastSampleRange.LowerBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).LastSampleRange.LowerBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).LastSampleRange.UpperBound.Value.FrameNumber = 0;
  (this->CurrentFrameData).LastSampleRange.UpperBound.Value.SubFrame = 0.0;
  (this->CurrentFrameData).TemporalRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentFrameData).TemporalRanges.ArrayNum = 0;
  (this->CurrentFrameData).TemporalRanges.ArrayMax = 0;
  (this->CurrentFrameData).EvaluatedConfig.Object = (UObject *)0x0;
  (this->CurrentFrameMetrics).FrameRate.Numerator = 60000;
  (this->CurrentFrameMetrics).FrameRate.Denominator = 1;
  (this->CurrentFrameMetrics).TickResolution.Numerator = 60000;
  *(undefined8 *)&(this->CurrentFrameMetrics).TickResolution.Denominator = 1;
  (this->CurrentFrameMetrics).TimeDilation = 1.0;
  (this->CurrentFrameMetrics).FrameTimeWhileShutterOpen.FrameNumber = 0;
  (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Type.Value = '\x02';
  (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Type.Value = '\x02';
  (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Type.Value = '\x02';
  (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Type.Value = '\x02';
  (this->CurrentFrameData).RangeShutterOpen.LowerBound.Type.Value = '\x02';
  (this->CurrentFrameData).RangeShutterOpen.UpperBound.Type.Value = '\x02';
  (this->CurrentFrameData).RangeShutterClosed.LowerBound.Type.Value = '\x02';
  (this->CurrentFrameData).RangeShutterClosed.UpperBound.Type.Value = '\x02';
  (this->CurrentFrameData).LastSampleRange.LowerBound.Type.Value = '\x02';
  (this->CurrentFrameData).LastSampleRange.UpperBound.Type.Value = '\x02';
  return this;
}

// ~UMovieGraphCoreTimeStep @ 14dc74470

void __thiscall UMovieGraphCoreTimeStep::~UMovieGraphCoreTimeStep(UMovieGraphCoreTimeStep *this)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphCoreTimeStep__6B_;
  pUVar1 = (this->CurrentFrameData).EvaluatedConfig.Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->CurrentFrameData).EvaluatedConfig.Object = (UObject *)0x0;
  }
  pFVar2 = (this->CurrentFrameData).TemporalRanges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMovieGraphTimeStepBase::~UMovieGraphTimeStepBase((UMovieGraphTimeStepBase *)this);
  return;
}

// GetBlendedMotionBlurAmount @ 14dc7ee10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall UMovieGraphCoreTimeStep::GetBlendedMotionBlurAmount(UMovieGraphCoreTimeStep *this)

{
  undefined8 *puVar1;
  int iVar2;
  APlayerCameraManager *this_00;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  uint uVar10;
  UWorld *this_01;
  APlayerController *pAVar11;
  longlong lVar12;
  AActor *pAVar13;
  UClass *pUVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_res8 [8];
  float local_res10 [2];
  TArray<float,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *local_res20;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong local_a8;
  float local_9c;
  float local_98;
  char local_94;
  char local_93;
  
  fVar21 = __real_3f000000;
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  pAVar11 = UWorld::GetFirstPlayerController(this_01);
  this_00 = (pAVar11->PlayerCameraManager).field0_0x0.DebugPtr;
  if (this_00 != (APlayerCameraManager *)0x0) {
    (**(code **)(this_00->_padding_ + 0x848))(this_00,&local_e8);
    lVar12 = (**(code **)(this->_padding_ + 0x180))(this);
    fVar6 = __real_3f800000;
    puVar16 = *(undefined8 **)(lVar12 + 0x8c0);
    iVar2 = *(int *)(lVar12 + 0x8c8);
    puVar1 = puVar16 + iVar2;
    while( true ) {
      if (*(int *)(lVar12 + 0x8c8) != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<IInterface_PostProcessVolume_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar16 == puVar1) break;
      plVar3 = (longlong *)*puVar16;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_a8);
      if ((local_94 != '\0') && ((*(byte *)(local_a8 + 0x1d) & 0x40) != 0)) {
        fVar20 = local_98;
        if (fVar6 <= local_98) {
          fVar20 = fVar6;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        if (local_93 == '\0') {
          local_c8 = local_e8;
          uStack_c4 = uStack_e4;
          uStack_c0 = uStack_e0;
          uStack_bc = uStack_dc;
          local_res10[0] = 0.0;
          local_b8 = local_d8;
          (**(code **)(*plVar3 + 0x10))(plVar3,&local_c8,0,local_res10);
          if ((local_res10[0] < 0.0) || (local_9c <= local_res10[0])) goto LAB_14dc7efa8;
          fVar19 = fVar6 - local_res10[0] / local_9c;
          if (fVar6 <= fVar19) {
            fVar19 = fVar6;
          }
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          fVar20 = fVar20 * fVar19;
        }
        if (0.0 < fVar20) {
          fVar21 = fVar21 + (*(float *)(local_a8 + 0x6d8) - fVar21) * fVar20;
        }
      }
LAB_14dc7efa8:
      puVar16 = puVar16 + 1;
    }
    pAVar13 = APlayerCameraManager::GetViewTarget(this_00);
    if (pAVar13 != (AActor *)0x0) {
      pUVar14 = Z_Construct_UClass_ACameraActor_NoRegister();
      iVar2 = (int)pUVar14->_padding_;
      if ((((iVar2 <= *(int *)(pAVar13->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar13->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar14->_padding_)) && (lVar12 = pAVar13[1]._padding_, lVar12 != 0)) &&
         ((*(byte *)(lVar12 + 0x34d) & 0x40) != 0)) {
        fVar21 = fVar21 + (*(float *)(lVar12 + 0xa08) - fVar21) * *(float *)(lVar12 + 0x300);
      }
    }
    APlayerCameraManager::GetCachedPostProcessBlends(this_00,&local_res20,&local_res18);
    uVar15 = 0;
    if (0 < local_res18->ArrayNum) {
      lVar12 = 0;
      lVar18 = 0;
      do {
        pTVar8 = local_res20;
        uVar17 = ~uVar15 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar15 < local_res20->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          fVar21 = (float)(*pcVar5)();
          return fVar21;
        }
        pTVar7 = local_res18;
        if (((byte)(pTVar8->AllocatorInstance).Data[lVar12 + 0x1d] & 0x40) != 0) {
          uVar10 = 0;
          if ((int)uVar15 < local_res18->ArrayNum) {
            uVar10 = uVar17;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            fVar21 = (float)(*pcVar5)();
            return fVar21;
          }
          pTVar8 = local_res20;
          pFVar4 = (pTVar7->AllocatorInstance).Data;
          uVar10 = 0;
          if ((int)uVar15 < local_res20->ArrayNum) {
            uVar10 = uVar17;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            fVar21 = (float)(*pcVar5)();
            return fVar21;
          }
          fVar21 = fVar21 + (*(float *)((pTVar8->AllocatorInstance).Data + lVar12 + 0x6d8) - fVar21)
                            * *(float *)(pFVar4 + lVar18);
        }
        uVar15 = uVar15 + 1;
        lVar18 = lVar18 + 4;
        lVar12 = lVar12 + 0x770;
      } while ((int)uVar15 < local_res18->ArrayNum);
    }
  }
  return fVar21;
}

// GetCalculatedTimeData @ 14dc7f390

FMovieGraphTimeStepData * __thiscall
UMovieGraphCoreTimeStep::GetCalculatedTimeData
          (UMovieGraphCoreTimeStep *this,FMovieGraphTimeStepData *__return_storage_ptr__)

{
  FMovieGraphTimeStepData::FMovieGraphTimeStepData
            (__return_storage_ptr__,&this->CurrentTimeStepData);
  return __return_storage_ptr__;
}

// GetNextTemporalRangeIndex @ 14dc80870

int __thiscall UMovieGraphCoreTimeStep::GetNextTemporalRangeIndex(UMovieGraphCoreTimeStep *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\MovieGraphCoreTimeStep.h"
             ,0x32,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetPrivateStaticClass @ 14dc81a70

UClass * __cdecl UMovieGraphCoreTimeStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphCoreTimeStep",
               &Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.InnerSingleton,
               StaticRegisterNativesUMovieGraphCoreTimeStep,400,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphCoreTimeStep>,
               InternalVTableHelperCtorCaller<UMovieGraphCoreTimeStep>,local_res8,
               UMovieGraphTimeStepBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphCoreTimeStep.InnerSingleton;
}

// GetTemporalSampleCount @ 14dc82f60

int __thiscall UMovieGraphCoreTimeStep::GetTemporalSampleCount(UMovieGraphCoreTimeStep *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\Graph\\MovieGraphCoreTimeStep.h"
             ,0x38,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetTemporalSampleCountFromConfig @ 14dc82f90

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMovieGraphCoreTimeStep::GetTemporalSampleCountFromConfig
          (UMovieGraphCoreTimeStep *this,UMovieGraphEvaluatedConfig *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  longlong lVar6;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  FVar2 = UMovieGraphNode::GlobalsPinName;
  if (param_1 == (UMovieGraphEvaluatedConfig *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3003204213271430014>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphCoreTimeStep.cpp"
                       ,0x37e,"InConfig");
    if (!bVar3) {
      return 1;
    }
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  pUVar5 = Z_Construct_UClass_UMovieGraphSamplingMethodNode_NoRegister();
  UMovieGraphEvaluatedConfig::GetSettingsForBranch(param_1,&local_18,pUVar5,FVar2,true,false);
  if (local_18.ArrayNum < 1) {
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    lVar6 = *(longlong *)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
    if (lVar6 != 0) {
      pUVar5 = Z_Construct_UClass_UMovieGraphSamplingMethodNode_NoRegister();
      iVar4 = (int)pUVar5->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8)
          == &pUVar5->_padding_)) goto LAB_14dc8304e;
    }
  }
  lVar6 = 0;
LAB_14dc8304e:
  if ((*(int *)(lVar6 + 0xd8) < 1) && (1 < (byte)LogMovieRenderPipeline._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  iVar4 = 1;
  if (1 < *(int *)(lVar6 + 0xd8)) {
    iVar4 = *(int *)(lVar6 + 0xd8);
  }
  return iVar4;
}

// Initialize @ 14dc83f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphCoreTimeStep::Initialize(UMovieGraphCoreTimeStep *this)

{
  UWorld *this_00;
  AWorldSettings *pAVar1;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 != (UWorld *)0x0) {
    pAVar1 = UWorld::GetWorldSettings(this_00,false,true);
    this->bPrevWorldAllowTimeDilation = pAVar1->bAllowTimeDilation;
  }
  return;
}

// IsExpansionForTSRequired @ 14dc84340

bool __thiscall
UMovieGraphCoreTimeStep::IsExpansionForTSRequired
          (UMovieGraphCoreTimeStep *this,TObjectPtr<UMovieGraphEvaluatedConfig> *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 800))(this,(param_1->field0_0x0).DebugPtr);
  return 1 < iVar1;
}

// IsFirstTemporalSample @ 14dc84370

bool __thiscall UMovieGraphCoreTimeStep::IsFirstTemporalSample(UMovieGraphCoreTimeStep *this)

{
  return (this->CurrentFrameData).TemporalSampleIndex == 0;
}

// IsLastTemporalSample @ 14dc843e0

bool __thiscall UMovieGraphCoreTimeStep::IsLastTemporalSample(UMovieGraphCoreTimeStep *this)

{
  return (this->CurrentFrameData).TemporalSampleIndex ==
         (this->CurrentFrameData).TemporalSampleCount + -1;
}

// ResetForEndOfOutputFrame @ 14dc869a0

void __thiscall UMovieGraphCoreTimeStep::ResetForEndOfOutputFrame(UMovieGraphCoreTimeStep *this)

{
  (this->CurrentFrameData).TemporalSampleIndex = 0;
  return;
}

// Shutdown @ 14dc89700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphCoreTimeStep::Shutdown(UMovieGraphCoreTimeStep *this)

{
  UObject *pUVar1;
  code *UNRECOVERED_JUMPTABLE;
  UWorld *this_00;
  AWorldSettings *pAVar2;
  
  pUVar1 = (this->CurrentFrameData).EvaluatedConfig.Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->CurrentFrameData).EvaluatedConfig.Object = (UObject *)0x0;
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_00 != (UWorld *)0x0) {
    pAVar2 = UWorld::GetWorldSettings(this_00,false,true);
    UNRECOVERED_JUMPTABLE = *(code **)(pAVar2->_padding_ + 0x7a8);
                    /* WARNING: Could not recover jumptable at 0x00014dc8975c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pAVar2,this->bPrevWorldAllowTimeDilation,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// StaticRegisterNativesUMovieGraphCoreTimeStep @ 14dc89b70

void __cdecl UMovieGraphCoreTimeStep::StaticRegisterNativesUMovieGraphCoreTimeStep(void)

{
  return;
}

// TickProducingFrames @ 14dc89e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieGraphCoreTimeStep::TickProducingFrames(UMovieGraphCoreTimeStep *this)

{
  bool *pbVar1;
  TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar2;
  int *piVar3;
  TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> *pTVar4;
  FFrameNumber *pFVar5;
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 *pTVar6;
  EMovieRenderShotState EVar7;
  int iVar8;
  UMovieGraphDataSourceBase *pUVar9;
  UMoviePipelineExecutorShot *pUVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  UMovieGraphEngineTimeStep *pUVar13;
  FFrameTime FVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined3 uVar30;
  double dVar31;
  float fVar32;
  TObjectPtr<UMovieGraphConfig> TVar33;
  bool bVar34;
  char cVar35;
  bool bVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  FFrameNumber FVar41;
  UMovieGraphPipeline *pUVar42;
  UMovieGraphEvaluatedConfig *pUVar43;
  FFrameTime *pFVar44;
  FFrameTime FVar45;
  UWorld *pUVar46;
  UMovieGraphGlobalOutputSettingNode *pUVar47;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FTimecode *pFVar48;
  int iVar49;
  uint uVar50;
  UMovieGraphEvaluatedConfig *pUVar51;
  undefined8 uVar52;
  longlong lVar53;
  undefined8 uVar54;
  longlong lVar55;
  FFrameRate FVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined1 in_XMM2 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  undefined1 in_XMM4 [16];
  undefined1 auStackY_15a8 [32];
  bool local_1557;
  bool local_1555;
  float fStack_154c;
  float fStack_1544;
  FFrameTime local_1540;
  undefined1 local_1538 [8];
  undefined4 local_1530;
  int iStack_152c;
  float local_1528;
  undefined1 local_1520 [8];
  FFrameRate local_1518;
  int local_1510;
  float fStack_150c;
  int local_1508;
  float fStack_1504;
  int local_1500;
  float fStack_14fc;
  FFrameNumber local_14f8;
  float fStack_14f4;
  int local_14f0;
  float fStack_14ec;
  int local_14e8;
  float fStack_14e4;
  int local_14e0;
  float fStack_14dc;
  int local_14d8;
  float fStack_14d4;
  int local_14d0;
  float fStack_14cc;
  FFrameRate local_14c8;
  FString local_14c0;
  undefined4 local_14b0;
  int iStack_14ac;
  float fStack_14a8;
  uint uStack_14a4;
  FFrameTime local_14a0;
  TRangeBound<FFrameTime> local_1498;
  FString local_1488;
  undefined8 local_1478;
  FFrameTime local_1470;
  FFrameTime local_1468;
  FFrameTime local_1460;
  undefined8 local_1458;
  undefined8 local_1450;
  FFrameTime local_1448;
  FFrameRate local_1440;
  FFrameRate local_1438;
  undefined8 local_1430;
  longlong local_1428;
  FScriptContainerElement *local_1420;
  undefined1 local_1418 [8];
  FFrameTime local_1410;
  FFrameTime local_1408;
  FString local_1400;
  FString local_13f0;
  FString local_13e0;
  FString local_13d0;
  FTimeStepCache local_13c0;
  undefined4 local_13b8;
  undefined8 uStack_13b4;
  uint uStack_13ac;
  FFrameTime local_13a8;
  undefined4 local_13a0;
  undefined8 uStack_139c;
  uint uStack_1394;
  FFrameTime local_1390;
  undefined4 local_1388;
  FFrameNumber FStack_1384;
  float fStack_1380;
  uint uStack_137c;
  FFrameTime local_1378;
  undefined4 local_1370;
  undefined8 uStack_136c;
  uint uStack_1364;
  FFrameTime local_1360;
  undefined4 local_1358;
  int iStack_1354;
  float fStack_1350;
  uint uStack_134c;
  FFrameTime local_1348;
  undefined4 local_1340;
  int iStack_133c;
  float fStack_1338;
  uint uStack_1334;
  FFrameTime local_1330;
  undefined4 local_1328;
  int iStack_1324;
  float fStack_1320;
  uint uStack_131c;
  FFrameTime local_1318;
  undefined4 local_1310;
  int iStack_130c;
  float fStack_1308;
  uint uStack_1304;
  FFrameTime local_1300;
  FMoviePipelineLightweightTickInfo local_12f8;
  undefined8 local_12e0 [2];
  undefined1 local_12d0 [8];
  undefined1 local_12c8 [8];
  undefined8 local_12c0;
  undefined1 local_12b8 [8];
  undefined1 local_12b0 [8];
  FMovieGraphTraversalContext local_12a8;
  FTimecode local_11b8;
  FTimecode local_11a0;
  FMovieGraphTraversalContext local_1188;
  uchar local_1098 [3];
  int local_1095;
  int local_1091;
  ulonglong local_98;
  undefined8 uStack_30;
  
  uStack_30 = 0x14dc89e90;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_15a8;
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  uVar38 = pUVar42->CurrentShotIndex;
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  uVar40 = 0;
  uVar50 = uVar40;
  if ((int)uVar38 < (pUVar42->ActiveShotList).ArrayNum) {
    uVar50 = ~uVar38 >> 0x1f;
  }
  if ((uVar50 == 0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar34)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  dVar31 = __real_c1e0000000000000;
  dVar57 = __real_41dfffffffc00000;
  pTVar6 = (TObjectPtr<UMoviePipelineExecutorShot>_u_0 *)
           ((pUVar42->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar38 * 8);
  bVar34 = false;
  if (*(char *)((longlong)pTVar6->DebugPtr + 0xcc) == '\0') {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
    UMovieGraphPipeline::GetCurrentTraversalContext(pUVar42,&local_1188,true);
    TVar33.field0_0x0 = (TObjectPtr<UMovieGraphConfig>_u_0)local_1188.RootGraph;
    pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
    UMovieGraphConfig::UpdateGlobalVariableValues((UMovieGraphConfig *)TVar33.field0_0x0,pUVar42);
    local_1488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1488.Data.ArrayNum = 0;
    local_1488.Data.ArrayMax = 0;
    pUVar43 = UMovieGraphConfig::CreateFlattenedGraph
                        ((UMovieGraphConfig *)local_1188.RootGraph.field0_0x0,&local_1188,
                         &local_1488);
    pUVar51 = (UMovieGraphEvaluatedConfig *)0x0;
    if (pUVar43 != (UMovieGraphEvaluatedConfig *)0x0) {
      UObjectBase::AddRef((UObjectBase *)pUVar43);
      pUVar51 = pUVar43;
    }
    pTVar2 = &(this->CurrentFrameData).EvaluatedConfig;
    if (pTVar2 == (TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                   *)&local_12c0) {
      if (pUVar51 != (UMovieGraphEvaluatedConfig *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar51);
      }
    }
    else {
      if (pTVar2->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar2->Object);
      }
      pTVar2->Object = (UObject *)pUVar51;
    }
    iVar37 = (**(code **)(this->_padding_ + 0x2f8))(this);
    (this->CurrentFrameData).TemporalSampleCount = iVar37;
    (**(code **)(this->_padding_ + 0x300))(this);
    pUVar51 = (UMovieGraphEvaluatedConfig *)pTVar2->Object;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar51 != (UMovieGraphEvaluatedConfig *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar51);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar51 != (UMovieGraphEvaluatedConfig *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar51);
      }
    }
    (this->CurrentTimeStepData).EvaluatedConfig.field0_0x0.DebugPtr = pUVar51;
    (this->CurrentTimeStepData).ShotOutputFrameNumber = -1;
    local_1410 = (pTVar6->DebugPtr->ShotInfo).CurrentTimeInRoot;
    pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
    pUVar9 = (pUVar42->GraphDataSourceInstance).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar9 + 0x300))(pUVar9,pTVar6,&local_1410);
    pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
    UMovieGraphPipeline::SetupShot
              (pUVar42,(TObjectPtr<UMoviePipelineExecutorShot> *)&pTVar6->ObjectPtr);
    pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
    UMovieGraphPipeline::CreateLayersInRenderLayerSubsystem
              (pUVar42,(this->CurrentTimeStepData).EvaluatedConfig.field0_0x0.DebugPtr);
    pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
    UMovieGraphPipeline::UpdateLayerContentsInRenderLayerSubsystem
              (pUVar42,(this->CurrentTimeStepData).EvaluatedConfig.field0_0x0.DebugPtr);
    (**(code **)(this->_padding_ + 0x300))(this);
    (pTVar6->DebugPtr->ShotInfo).WorkMetrics.TotalEngineWarmUpFrameCount =
         (pTVar6->DebugPtr->ShotInfo).NumEngineWarmUpFramesRemaining;
    pUVar10 = pTVar6->DebugPtr;
    iVar37 = (pUVar10->ShotInfo).NumEngineWarmUpFramesRemaining;
    if ((iVar37 == 0) && ((pUVar10->ShotInfo).bEmulateFirstFrameMotionBlur == false)) {
      (pUVar10->ShotInfo).State = Rendering;
      FVar45 = (this->CurrentFrameMetrics).FrameTimePerOutputFrame;
      local_13b8 = CONCAT31(local_13b8._1_3_,1);
      local_13a8 = (pTVar6->DebugPtr->ShotInfo).CurrentTimeInRoot;
      local_1540.SubFrame = local_13a8.SubFrame;
      fStack_1544 = FVar45.SubFrame;
      uStack_13ac = uStack_13ac & 0xffffff00;
      auVar68 = roundps(in_XMM2,ZEXT416((uint)(local_1540.SubFrame - fStack_1544)),1);
      uStack_13b4._4_4_ = (local_1540.SubFrame - fStack_1544) - auVar68._0_4_;
      if (::FFrameTime::MaxSubframe <= uStack_13b4._4_4_) {
        uStack_13b4._4_4_ = ::FFrameTime::MaxSubframe;
      }
      uStack_13b4._0_4_ =
           (int)auVar68._0_4_ + (local_13a8.FrameNumber.Value.Value - FVar45.FrameNumber.Value);
      if (uStack_13b4._4_4_ <= 0.0) {
        uStack_13b4._4_4_ = 0.0;
      }
      uVar22 = (int)uStack_13b4;
      uVar23 = uStack_13b4._4_4_;
      in_XMM2._8_4_ = uVar23;
      in_XMM2._4_4_ = uVar22;
      uVar21 = local_13b8;
      in_XMM2._0_4_ = uVar21;
      in_XMM2._12_4_ = uStack_13ac;
      (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Type =
           (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar21;
      *(int3 *)&(this->CurrentFrameData).LastOutputFrameRange.LowerBound.field_0x1 = SUB43(uVar21,1)
      ;
      (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.FrameNumber =
           (FFrameNumber)uVar22;
      (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.SubFrame = (float)uVar23;
      (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Type =
           (TEnumAsByte<ERangeBoundTypes::Type>)(char)uStack_13ac;
      *(int3 *)&(this->CurrentFrameData).LastOutputFrameRange.UpperBound.field_0x1 =
           (int3)(uStack_13ac >> 8);
      (this->CurrentFrameData).LastSampleRange.LowerBound.Type =
           (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar21;
      *(int3 *)&(this->CurrentFrameData).LastSampleRange.LowerBound.field_0x1 = SUB43(uVar21,1);
      (this->CurrentFrameData).LastSampleRange.LowerBound.Value.FrameNumber = (FFrameNumber)uVar22;
      (this->CurrentFrameData).LastSampleRange.LowerBound.Value.SubFrame = (float)uVar23;
      (this->CurrentFrameData).LastSampleRange.UpperBound.Type =
           (TEnumAsByte<ERangeBoundTypes::Type>)(char)uStack_13ac;
      *(int3 *)&(this->CurrentFrameData).LastSampleRange.UpperBound.field_0x1 =
           (int3)(uStack_13ac >> 8);
      (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value = local_13a8;
      (this->CurrentFrameData).LastSampleRange.UpperBound.Value = local_13a8;
LAB_14dc8a229:
      pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
      (**(code **)(*(longlong *)(pUVar42->GraphDataSourceInstance).field0_0x0.DebugPtr + 0x2c8))();
    }
    else {
      bVar36 = (pUVar10->ShotInfo).bEmulateFirstFrameMotionBlur;
      if (iVar37 < 1) {
        (pUVar10->ShotInfo).State = MotionBlur;
        FVar45 = (this->CurrentFrameMetrics).FrameTimePerOutputFrame;
        local_1370 = CONCAT31(local_1370._1_3_,1);
        local_1360 = *(FFrameTime *)((longlong)*(UMoviePipelineExecutorShot **)pTVar6 + 0xd4);
        fStack_154c = local_1360.SubFrame;
        FVar41 = local_1360.FrameNumber.Value;
        fStack_1544 = FVar45.SubFrame;
        uStack_1364 = uStack_1364 & 0xffffff00;
        auVar68 = roundps(in_XMM2,ZEXT416((uint)(fStack_154c - fStack_1544)),1);
        fStack_14fc = (fStack_154c - fStack_1544) - auVar68._0_4_;
        if (::FFrameTime::MaxSubframe <= fStack_14fc) {
          fStack_14fc = ::FFrameTime::MaxSubframe;
        }
        local_1500 = (int)auVar68._0_4_ + (FVar41.Value - FVar45.FrameNumber.Value);
        if (fStack_14fc <= 0.0) {
          fStack_14fc = 0.0;
        }
        uStack_136c = CONCAT44(fStack_14fc,local_1500);
        uVar27 = uStack_136c;
        uVar26 = local_1370;
        in_XMM2._4_8_ = uVar27;
        in_XMM2._0_4_ = uVar26;
        in_XMM2._12_4_ = uStack_1364;
        (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Type =
             (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar26;
        *(int3 *)&(this->CurrentFrameData).LastOutputFrameRange.LowerBound.field_0x1 =
             SUB43(uVar26,1);
        (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.FrameNumber =
             (FFrameNumber)(int)uVar27;
        (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.SubFrame =
             (float)SUB84(uVar27,4);
        (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Type =
             (TEnumAsByte<ERangeBoundTypes::Type>)(char)uStack_1364;
        *(int3 *)&(this->CurrentFrameData).LastOutputFrameRange.UpperBound.field_0x1 =
             (int3)(uStack_1364 >> 8);
        (this->CurrentFrameData).LastSampleRange.LowerBound.Type =
             (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar26;
        *(int3 *)&(this->CurrentFrameData).LastSampleRange.LowerBound.field_0x1 = SUB43(uVar26,1);
        (this->CurrentFrameData).LastSampleRange.LowerBound.Value.FrameNumber =
             (FFrameNumber)(int)uVar27;
        (this->CurrentFrameData).LastSampleRange.LowerBound.Value.SubFrame = (float)SUB84(uVar27,4);
        (this->CurrentFrameData).LastSampleRange.UpperBound.Type =
             (TEnumAsByte<ERangeBoundTypes::Type>)(char)uStack_1364;
        *(int3 *)&(this->CurrentFrameData).LastSampleRange.UpperBound.field_0x1 =
             (int3)(uStack_1364 >> 8);
        (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value = local_1360;
        (this->CurrentFrameData).LastSampleRange.UpperBound.Value = local_1360;
        local_1348 = ::operator+((FFrameTime)local_12b0,local_1360);
        uVar38 = uStack_134c;
        local_1358 = CONCAT31(local_1358._1_3_,1);
        uStack_134c = uStack_134c & 0xffffff00;
        local_1348 = *(FFrameTime *)local_1348;
        (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Type = '\x01';
        *(undefined3 *)&(this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.field_0x1 =
             local_1358._1_3_;
        (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.FrameNumber =
             (FFrameNumber)FVar41.Value;
        *(ulonglong *)&(this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.SubFrame =
             CONCAT44(uVar38,fStack_154c) & 0xffffff00ffffffff;
        (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Value = local_1348;
        iStack_1354 = FVar41.Value;
        fStack_1350 = fStack_154c;
        pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
        (**(code **)(*(longlong *)(pUVar42->GraphDataSourceInstance).field0_0x0.DebugPtr + 0x2d0))()
        ;
      }
      else {
        (pUVar10->ShotInfo).State = WarmingUp;
        if (bVar36 == false) {
          uVar40 = (pTVar6->DebugPtr->ShotInfo).NumEngineWarmUpFramesRemaining;
        }
        local_1408 = (this->CurrentFrameMetrics).FrameTimePerOutputFrame;
        local_13a0 = CONCAT31(local_13a0._1_3_,1);
        fStack_1544 = (float)((ulonglong)
                              *(undefined8 *)
                               ((longlong)*(UMoviePipelineExecutorShot **)pTVar6 + 0xd4) >> 0x20);
        uStack_1394 = uStack_1394 & 0xffffff00;
        dVar67 = ((double)local_1408.FrameNumber.Value.Value + (double)local_1408.SubFrame) *
                 (double)(int)uVar40;
        auVar68._8_8_ = 0;
        auVar68._0_8_ = dVar67;
        auVar68 = roundpd(in_XMM4,auVar68,1);
        dVar71 = auVar68._0_8_;
        auVar69._0_8_ = dVar67 - dVar71;
        auVar69._8_8_ = 0;
        if (dVar57 <= dVar71) {
          dVar71 = dVar57;
        }
        if (dVar71 <= dVar31) {
          dVar71 = dVar31;
        }
        fVar19 = (float)auVar69._0_8_;
        if (::FFrameTime::MaxSubframe <= (float)auVar69._0_8_) {
          fVar19 = ::FFrameTime::MaxSubframe;
        }
        auVar58 = ZEXT416((uint)fVar19);
        if (fVar19 <= 0.0) {
          auVar58 = ZEXT816(0) << 0x20;
        }
        if (::FFrameTime::MaxSubframe <= auVar58._0_4_) {
          auVar58._0_4_ = ::FFrameTime::MaxSubframe;
        }
        if (auVar58._0_4_ <= 0.0) {
          auVar16._12_4_ = 0;
          auVar16._0_12_ = auVar58._4_12_;
          auVar58 = auVar16 << 0x20;
        }
        fStack_1544 = fStack_1544 - auVar58._0_4_;
        auVar68 = roundps(auVar69,ZEXT416((uint)fStack_1544),1);
        local_1540.SubFrame = fStack_1544 - auVar68._0_4_;
        if (::FFrameTime::MaxSubframe <= local_1540.SubFrame) {
          local_1540.SubFrame = ::FFrameTime::MaxSubframe;
        }
        local_1540.FrameNumber.Value =
             ((int)*(undefined8 *)((longlong)*(UMoviePipelineExecutorShot **)pTVar6 + 0xd4) -
             (int)dVar71) + (int)auVar68._0_4_;
        if (local_1540.SubFrame <= 0.0) {
          local_1540.SubFrame = 0.0;
        }
        local_1390 = local_1540;
        auVar68 = roundps(auVar68,ZEXT416((uint)(local_1540.SubFrame - local_1408.SubFrame)),1);
        fStack_1504 = (local_1540.SubFrame - local_1408.SubFrame) - auVar68._0_4_;
        if (::FFrameTime::MaxSubframe <= fStack_1504) {
          fStack_1504 = ::FFrameTime::MaxSubframe;
        }
        local_1508 = (int)auVar68._0_4_ +
                     (local_1540.FrameNumber.Value - local_1408.FrameNumber.Value);
        if (fStack_1504 <= 0.0) {
          fStack_1504 = 0.0;
        }
        uStack_139c = CONCAT44(fStack_1504,local_1508);
        uVar25 = uStack_139c;
        uVar24 = local_13a0;
        in_XMM2._4_8_ = uVar25;
        in_XMM2._0_4_ = uVar24;
        in_XMM2._12_4_ = uStack_1394;
        (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Type =
             (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar24;
        *(int3 *)&(this->CurrentFrameData).LastOutputFrameRange.LowerBound.field_0x1 =
             SUB43(uVar24,1);
        (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.FrameNumber =
             (FFrameNumber)(int)uVar25;
        (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.SubFrame =
             (float)SUB84(uVar25,4);
        (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Type =
             (TEnumAsByte<ERangeBoundTypes::Type>)(char)uStack_1394;
        *(int3 *)&(this->CurrentFrameData).LastOutputFrameRange.UpperBound.field_0x1 =
             (int3)(uStack_1394 >> 8);
        (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value = local_1540;
        (this->CurrentFrameData).LastSampleRange.LowerBound.Type =
             (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar24;
        *(int3 *)&(this->CurrentFrameData).LastSampleRange.LowerBound.field_0x1 = SUB43(uVar24,1);
        (this->CurrentFrameData).LastSampleRange.LowerBound.Value.FrameNumber =
             (FFrameNumber)(int)uVar25;
        (this->CurrentFrameData).LastSampleRange.LowerBound.Value.SubFrame = (float)SUB84(uVar25,4);
        (this->CurrentFrameData).LastSampleRange.UpperBound.Type =
             (TEnumAsByte<ERangeBoundTypes::Type>)(char)uStack_1394;
        *(int3 *)&(this->CurrentFrameData).LastSampleRange.UpperBound.field_0x1 =
             (int3)(uStack_1394 >> 8);
        (this->CurrentFrameData).LastSampleRange.UpperBound.Value = local_1540;
        if (bVar36 == false) goto LAB_14dc8a229;
        pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
        (**(code **)(*(longlong *)(pUVar42->GraphDataSourceInstance).field0_0x0.DebugPtr + 0x2d0))()
        ;
        local_1498.Type.Value = (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Type.Value;
        local_1498._1_3_ =
             *(undefined3 *)&(this->CurrentFrameData).LastOutputFrameRange.UpperBound.field_0x1;
        local_1498.Value.FrameNumber.Value =
             (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value.FrameNumber.Value;
        local_1498.Value.SubFrame =
             (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value.SubFrame;
        pFVar44 = TRangeBound<FFrameTime>::GetValue(&local_1498);
        FVar45 = ::operator+((FFrameTime)local_12b8,*pFVar44);
        pFVar44 = TRangeBound<FFrameTime>::GetValue(&local_1498);
        uVar38 = uStack_137c;
        local_1388 = CONCAT31(local_1388._1_3_,1);
        uStack_137c = uStack_137c & 0xffffff00;
        bVar34 = true;
        local_1378 = *(FFrameTime *)FVar45;
        FStack_1384 = (*pFVar44).FrameNumber;
        fStack_1380 = (*pFVar44).SubFrame;
        (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Type = '\x01';
        *(undefined3 *)&(this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.field_0x1 =
             local_1388._1_3_;
        (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.FrameNumber =
             (FFrameNumber)FStack_1384.Value;
        *(ulonglong *)&(this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.SubFrame =
             CONCAT44(uVar38,fStack_1380) & 0xffffff00ffffffff;
        (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Value = local_1378;
      }
    }
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    if (local_1488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1488.Data.AllocatorInstance.Data);
    }
    if (local_1188.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1188.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_1188.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1188.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
    }
    if (local_1188.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1188.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
    }
    if (local_1188.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1188.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
    }
  }
  EVar7 = (pTVar6->DebugPtr->ShotInfo).State;
  if ((EVar7 == Rendering) || (EVar7 == CoolingDown)) {
    bVar36 = true;
  }
  else {
    bVar36 = false;
  }
  if ((EVar7 != WarmingUp) ||
     (bVar29 = true, (pTVar6->DebugPtr->ShotInfo).bEmulateFirstFrameMotionBlur != false)) {
    bVar29 = false;
  }
  if ((bVar36) || (bVar29)) {
    bVar36 = true;
  }
  else {
    bVar36 = false;
  }
  bVar29 = false;
  cVar35 = (**(code **)(this->_padding_ + 0x308))(this);
  fVar19 = __real_3f000000;
  if (cVar35 == '\0') {
    local_1557 = false;
  }
  else {
    pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
    UMovieGraphPipeline::GetCurrentTraversalContext(pUVar42,&local_12a8,true);
    TVar33.field0_0x0 = (TObjectPtr<UMovieGraphConfig>_u_0)local_12a8.RootGraph;
    local_14c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_14c0.Data.ArrayNum = 0;
    local_14c0.Data.ArrayMax = 0;
    pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
    UMovieGraphConfig::UpdateGlobalVariableValues((UMovieGraphConfig *)TVar33.field0_0x0,pUVar42);
    pUVar43 = UMovieGraphConfig::CreateFlattenedGraph
                        ((UMovieGraphConfig *)local_12a8.RootGraph.field0_0x0,&local_12a8,
                         &local_14c0);
    pUVar51 = (UMovieGraphEvaluatedConfig *)0x0;
    if (pUVar43 != (UMovieGraphEvaluatedConfig *)0x0) {
      UObjectBase::AddRef((UObjectBase *)pUVar43);
      pUVar51 = pUVar43;
    }
    pTVar2 = &(this->CurrentFrameData).EvaluatedConfig;
    if (pTVar2 == (TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                   *)local_12e0) {
      if (pUVar51 != (UMovieGraphEvaluatedConfig *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar51);
      }
    }
    else {
      if (pTVar2->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar2->Object);
      }
      pTVar2->Object = (UObject *)pUVar51;
    }
    iVar37 = (**(code **)(this->_padding_ + 0x2f8))(this);
    (this->CurrentFrameData).TemporalSampleCount = iVar37;
    (**(code **)(this->_padding_ + 0x300))(this);
    uVar52._0_1_ = (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Type;
    uVar52._1_3_ = *(undefined3 *)
                    &(this->CurrentFrameData).LastOutputFrameRange.UpperBound.field_0x1;
    uVar52._4_4_ = (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value.FrameNumber;
    local_1528 = (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value.SubFrame;
    local_1530 = (undefined4)uVar52;
    iStack_152c = uVar52._4_4_;
    if (bVar36) {
      FVar45 = (this->CurrentFrameMetrics).FrameTimePerOutputFrame;
      if (((undefined1)uVar52 == '\x02') &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar36)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      fVar62 = local_1528;
      iVar37 = iStack_152c;
      uVar54 = CONCAT44(local_1528,iStack_152c);
      fStack_154c = FVar45.SubFrame;
      fStack_154c = fStack_154c + local_1528;
      local_14f8.Value =
           ((int)ROUND((fStack_154c + fStack_154c) - fVar19) >> 1) + FVar45.FrameNumber.Value.Value
           + iStack_152c;
      iVar49 = (int)fStack_154c;
      fVar61 = fStack_154c;
      if ((iVar49 != -0x80000000) && ((float)iVar49 != fStack_154c)) {
        auVar63._4_4_ = fStack_154c;
        auVar63._0_4_ = fStack_154c;
        auVar63._8_8_ = 0;
        uVar38 = movmskps(local_14f8.Value,auVar63);
        fVar61 = (float)(int)(iVar49 - (uVar38 & 1));
      }
      fVar17 = fStack_154c - fVar61;
      if (::FFrameTime::MaxSubframe <= fStack_154c - fVar61) {
        fVar17 = ::FFrameTime::MaxSubframe;
      }
      in_XMM2 = ZEXT416((uint)fVar17);
      if (fVar17 <= 0.0) {
        in_XMM2 = ZEXT816(0) << 0x20;
      }
      fStack_14f4 = in_XMM2._0_4_;
      if (((undefined1)uVar52 == '\x02') &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar36)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar38 = uStack_1334;
      local_1330.SubFrame = fStack_14f4;
      local_1330.FrameNumber.Value = local_14f8.Value;
      local_1340 = CONCAT31(local_1340._1_3_,1);
      iStack_133c = iVar37;
      fStack_1338 = fVar62;
      uStack_1334 = uStack_1334 & 0xffffff00;
      (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Type = '\x01';
      *(undefined3 *)&(this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.field_0x1 =
           local_1340._1_3_;
      (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.FrameNumber =
           (FFrameNumber)iVar37;
      *(ulonglong *)&(this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.SubFrame =
           CONCAT44(uVar38,fVar62) & 0xffffff00ffffffff;
      (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Value = local_1330;
    }
    else {
      uVar54 = CONCAT44(local_1528,uVar52._4_4_);
    }
    iVar37 = (int)uVar54;
    (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(this->_padding_ + 0x2e0))(this);
    if ((pTVar6->DebugPtr->ShotInfo).State == WarmingUp) {
      (this->CurrentTimeStepData).bDiscardOutput = true;
      if ((pTVar6->DebugPtr->ShotInfo).bEmulateFirstFrameMotionBlur != false) {
        iVar49 = (this->CurrentFrameData).TemporalRanges.ArrayNum;
        uVar38 = 1;
        if (1 < iVar49) {
          lVar53 = 0x18;
          do {
            if ((iVar49 < 1) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pFVar11 = (this->CurrentFrameData).TemporalRanges.AllocatorInstance.Data;
            uVar54 = *(undefined8 *)pFVar11;
            uVar20 = *(undefined8 *)(pFVar11 + 8);
            uVar52 = *(undefined8 *)(pFVar11 + 0x10);
            uVar40 = 0;
            if ((int)uVar38 < (this->CurrentFrameData).TemporalRanges.ArrayNum) {
              uVar40 = ~uVar38 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pFVar12 = (this->CurrentFrameData).TemporalRanges.AllocatorInstance.Data;
            uVar38 = uVar38 + 1;
            pFVar11 = pFVar12 + lVar53;
            *(undefined8 *)pFVar11 = uVar54;
            *(undefined8 *)(pFVar11 + 8) = uVar20;
            *(undefined8 *)(pFVar12 + lVar53 + 0x10) = uVar52;
            lVar53 = lVar53 + 0x18;
            iVar49 = (this->CurrentFrameData).TemporalRanges.ArrayNum;
          } while ((int)uVar38 < iVar49);
          uVar54 = CONCAT44(local_1528,iStack_152c);
          iVar37 = iStack_152c;
        }
      }
      if ((pTVar6->DebugPtr->ShotInfo).NumEngineWarmUpFramesRemaining == 0) {
        pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
        (**(code **)(*(longlong *)(pUVar42->GraphDataSourceInstance).field0_0x0.DebugPtr + 0x2c8))()
        ;
        (pTVar6->DebugPtr->ShotInfo).State =
             ((pTVar6->DebugPtr->ShotInfo).bEmulateFirstFrameMotionBlur == false) + MotionBlur;
      }
      piVar3 = &(pTVar6->DebugPtr->ShotInfo).WorkMetrics.EngineWarmUpFrameIndex;
      *piVar3 = *piVar3 + 1;
      piVar3 = &(pTVar6->DebugPtr->ShotInfo).NumEngineWarmUpFramesRemaining;
      *piVar3 = *piVar3 + -1;
    }
    if ((pTVar6->DebugPtr->ShotInfo).State == MotionBlur) {
      (this->CurrentTimeStepData).bDiscardOutput = true;
      if ((pTVar6->DebugPtr->ShotInfo).bHasEvaluatedMotionBlurFrame != false) {
        (**(code **)(this->_padding_ + 0x2e0))(this);
        (pTVar6->DebugPtr->ShotInfo).State = Rendering;
        pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
        (**(code **)(*(longlong *)(pUVar42->GraphDataSourceInstance).field0_0x0.DebugPtr + 0x2c8))()
        ;
        goto LAB_14dc8ac9f;
      }
      if (((this->CurrentFrameData).TemporalRanges.ArrayNum < 1) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar11 = (this->CurrentFrameData).TemporalRanges.AllocatorInstance.Data;
      if ((pFVar11[0xc] == (FScriptContainerElement)0x2) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar36)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar52 = *(undefined8 *)(pFVar11 + 0x10);
      fStack_154c = (float)((ulonglong)uVar52 >> 0x20);
      in_XMM2 = roundps(in_XMM2,ZEXT416((uint)fStack_154c),1);
      fStack_154c = fStack_154c - in_XMM2._0_4_;
      if (::FFrameTime::MaxSubframe <= fStack_154c) {
        fStack_154c = ::FFrameTime::MaxSubframe;
      }
      iVar49 = (int)uVar52 + -1 + (int)in_XMM2._0_4_;
      if (fStack_154c <= 0.0) {
        fStack_154c = 0.0;
      }
      if (((this->CurrentFrameData).TemporalRanges.ArrayNum < 1) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar44 = TRange<FFrameTime>::GetUpperBoundValue
                          ((TRange<FFrameTime> *)
                           (this->CurrentFrameData).TemporalRanges.AllocatorInstance.Data);
      piVar3 = &(this->CurrentFrameData).TemporalRanges.ArrayMax;
      local_14b0 = CONCAT31(local_14b0._1_3_,1);
      uStack_14a4 = uStack_14a4 & 0xffffff00;
      local_14a0 = *pFVar44;
      iVar8 = *piVar3;
      (this->CurrentFrameData).TemporalRanges.ArrayNum = 0;
      iVar39 = 0;
      iStack_14ac = iVar49;
      fStack_14a8 = fStack_154c;
      if (iVar8 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,&(this->CurrentFrameData).TemporalRanges.AllocatorInstance,0,piVar3);
        iVar39 = *piVar3;
      }
      pTVar4 = &(this->CurrentFrameData).TemporalRanges;
      pFVar11 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)&local_14b0) &&
          ((FScriptContainerElement *)&local_14b0 < pFVar11 + (longlong)iVar39 * 0x18)) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar36)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar49 = (this->CurrentFrameData).TemporalRanges.ArrayNum;
      if (iVar49 == *piVar3) {
        iVar49 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&pTVar4->AllocatorInstance,
                            &(this->CurrentFrameData).TemporalRanges.ArrayMax);
      }
      local_1557 = true;
      (this->CurrentFrameData).TemporalRanges.ArrayNum = iVar49 + 1;
      pFVar12 = (pTVar4->AllocatorInstance).Data;
      pFVar11 = pFVar12 + (longlong)iVar49 * 0x18;
      *(ulonglong *)pFVar11 = CONCAT44(iStack_14ac,local_14b0);
      *(ulonglong *)(pFVar11 + 8) = CONCAT44(uStack_14a4,fStack_14a8);
      *(FFrameTime *)(pFVar12 + (longlong)iVar49 * 0x18 + 0x10) = local_14a0;
      pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
      (**(code **)(*(longlong *)(pUVar42->GraphDataSourceInstance).field0_0x0.DebugPtr + 0x2c8))();
      bVar29 = true;
      (pTVar6->DebugPtr->ShotInfo).bHasEvaluatedMotionBlurFrame = true;
    }
    else {
LAB_14dc8ac9f:
      local_1557 = false;
    }
    if ((pTVar6->DebugPtr->ShotInfo).State == Rendering) {
      (this->CurrentTimeStepData).bDiscardOutput = false;
      piVar3 = &(pTVar6->DebugPtr->ShotInfo).WorkMetrics.OutputFrameIndex;
      *piVar3 = *piVar3 + 1;
      pUVar10 = pTVar6->DebugPtr;
      if (((pUVar10->ShotInfo).TotalOutputRangeRoot.UpperBound.Type.Value == '\x02') &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar36)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar49 = (pUVar10->ShotInfo).TotalOutputRangeRoot.UpperBound.Value.Value;
      fStack_14ec = 0.0;
      local_14f0 = iVar49;
      if (((this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Type.Value == '\x02') &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar36)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      FVar45 = (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Value;
      FVar41 = FVar45.FrameNumber.Value;
      if ((iVar49 < FVar41.Value) ||
         ((FVar41.Value == iVar49 && (fStack_154c = FVar45.SubFrame, fStack_14ec < fStack_154c)))) {
        (pTVar6->DebugPtr->ShotInfo).State = CoolingDown;
      }
    }
    if ((pTVar6->DebugPtr->ShotInfo).State == CoolingDown) {
      if ((pTVar6->DebugPtr->ShotInfo).NumEngineCoolDownFramesRemaining < 1) {
        (**(code **)(this->_padding_ + 0x310))(this);
        pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
        pUVar13 = (pUVar42->CustomEngineTimeStep).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 != (UMovieGraphEngineTimeStep *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        local_13c0.UndilatedDeltaTime =
             (double)(this->CurrentFrameMetrics).FrameRate.Denominator /
             (double)(this->CurrentFrameMetrics).FrameRate.Numerator;
        UMovieGraphEngineTimeStep::SetCachedFrameTiming(pUVar13,&local_13c0);
        (pTVar6->DebugPtr->ShotInfo).State = Finished;
        pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
        UMovieGraphPipeline::TeardownShot
                  (pUVar42,(TObjectPtr<UMoviePipelineExecutorShot> *)&pTVar6->ObjectPtr);
        if (local_14c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_14c0.Data.AllocatorInstance.Data);
        }
        if (local_12a8.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_12a8.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
        }
        if (local_12a8.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_12a8.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data)
          ;
        }
        if (local_12a8.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_12a8.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
        }
        if (local_12a8.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_12a8.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
        return;
      }
      FVar45 = (this->CurrentFrameMetrics).FrameTimePerOutputFrame;
      if (((char)local_1530 == '\x02') &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar34)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar40 = uStack_1304;
      uVar38 = uStack_131c;
      FVar14 = (this->CurrentFrameMetrics).FrameTimePerOutputFrame;
      fStack_154c = (float)((ulonglong)uVar54 >> 0x20);
      fStack_1544 = FVar45.SubFrame;
      local_1328 = CONCAT31(local_1328._1_3_,1);
      uStack_131c = uStack_131c & 0xffffff00;
      auVar68 = roundps(in_XMM2,ZEXT416((uint)(fStack_154c - fStack_1544)),1);
      fStack_1308 = (fStack_154c - fStack_1544) - auVar68._0_4_;
      if (::FFrameTime::MaxSubframe <= fStack_1308) {
        fStack_1308 = ::FFrameTime::MaxSubframe;
      }
      iStack_130c = (int)auVar68._0_4_ + (iVar37 - FVar45.FrameNumber.Value);
      FVar41 = FVar14.FrameNumber.Value;
      if (fStack_1308 <= 0.0) {
        fStack_1308 = 0.0;
      }
      local_1540.SubFrame = fStack_1308;
      local_1540.FrameNumber.Value = iStack_130c;
      fStack_1544 = FVar14.SubFrame;
      local_1318 = local_1540;
      auVar68 = roundps(auVar68,ZEXT416((uint)(fStack_1308 - fStack_1544)),1);
      fStack_14e4 = (fStack_1308 - fStack_1544) - auVar68._0_4_;
      if (::FFrameTime::MaxSubframe <= fStack_14e4) {
        fStack_14e4 = ::FFrameTime::MaxSubframe;
      }
      local_14e8 = (int)auVar68._0_4_ + (iStack_130c - FVar41.Value);
      if (fStack_14e4 <= 0.0) {
        fStack_14e4 = 0.0;
      }
      uVar28 = CONCAT44(uVar38,fStack_14e4) & 0xffffff00ffffffff;
      (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Type = '\x01';
      *(undefined3 *)&(this->CurrentFrameData).LastOutputFrameRange.LowerBound.field_0x1 =
           local_1328._1_3_;
      (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.FrameNumber =
           (FFrameNumber)local_14e8;
      *(ulonglong *)&(this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.SubFrame =
           uVar28;
      (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value = local_1540;
      (this->CurrentFrameData).LastSampleRange.LowerBound.Type = '\x01';
      *(undefined3 *)&(this->CurrentFrameData).LastSampleRange.LowerBound.field_0x1 =
           local_1328._1_3_;
      (this->CurrentFrameData).LastSampleRange.LowerBound.Value.FrameNumber =
           (FFrameNumber)local_14e8;
      *(ulonglong *)&(this->CurrentFrameData).LastSampleRange.LowerBound.Value.SubFrame = uVar28;
      fStack_1544 = fStack_1544 + fStack_1308;
      (this->CurrentFrameData).LastSampleRange.UpperBound.Value = local_1540;
      local_14e0 = ((int)ROUND((fStack_1544 + fStack_1544) - fVar19) >> 1) + FVar41.Value +
                   iStack_130c;
      iVar37 = (int)fStack_1544;
      fVar62 = fStack_1544;
      if ((iVar37 != -0x80000000) && ((float)iVar37 != fStack_1544)) {
        auVar64._4_4_ = fStack_1544;
        auVar64._0_4_ = fStack_1544;
        auVar64._8_8_ = 0;
        uVar38 = movmskps(iStack_130c,auVar64);
        fVar62 = (float)(int)(iVar37 - (uVar38 & 1));
      }
      local_1310 = CONCAT31(local_1310._1_3_,1);
      uStack_1304 = uStack_1304 & 0xffffff00;
      fVar61 = fStack_1544 - fVar62;
      if (::FFrameTime::MaxSubframe <= fStack_1544 - fVar62) {
        fVar61 = ::FFrameTime::MaxSubframe;
      }
      in_XMM2 = ZEXT416((uint)fVar61);
      (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Type = '\x01';
      *(undefined3 *)&(this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.field_0x1 =
           local_1310._1_3_;
      (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.FrameNumber =
           (FFrameNumber)iStack_130c;
      *(ulonglong *)&(this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.SubFrame =
           CONCAT44(uVar40,fStack_1308) & 0xffffff00ffffffff;
      if (fVar61 <= 0.0) {
        in_XMM2 = ZEXT816(0) << 0x20;
      }
      fStack_14dc = in_XMM2._0_4_;
      local_1300.SubFrame = fStack_14dc;
      local_1300.FrameNumber.Value = local_14e0;
      lVar53 = this->_padding_;
      (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Value = local_1300;
      iStack_1324 = local_14e8;
      fStack_1320 = fStack_14e4;
      (**(code **)(lVar53 + 0x2d8))(this);
      (**(code **)(this->_padding_ + 0x2e0))(this);
      (this->CurrentTimeStepData).bDiscardOutput = false;
      bVar34 = true;
      piVar3 = &(pTVar6->DebugPtr->ShotInfo).NumEngineCoolDownFramesRemaining;
      *piVar3 = *piVar3 + -1;
    }
    if (local_14c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14c0.Data.AllocatorInstance.Data);
    }
    if (local_12a8.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12a8.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_12a8.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12a8.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
    }
    if (local_12a8.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12a8.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
    }
    if (local_12a8.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_12a8.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
    }
  }
  uVar40 = (**(code **)(this->_padding_ + 0x2e8))(this);
  lVar53 = (longlong)(int)uVar40;
  uVar38 = 0;
  if ((int)uVar40 < (this->CurrentFrameData).TemporalRanges.ArrayNum) {
    uVar38 = ~uVar40 >> 0x1f;
  }
  if ((uVar38 == 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  local_1428 = lVar53 * 3;
  pFVar11 = (this->CurrentFrameData).TemporalRanges.AllocatorInstance.Data;
  local_1420 = pFVar11;
  if (((this->CurrentFrameData).LastSampleRange.LowerBound.Type.Value == '\x02') &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar36)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  FVar45 = (this->CurrentFrameData).LastSampleRange.LowerBound.Value;
  if ((pFVar11[lVar53 * 0x18] == (FScriptContainerElement)0x2) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar36)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  FVar41 = FVar45.FrameNumber.Value;
  iVar37 = (int)*(undefined8 *)(pFVar11 + lVar53 * 0x18 + 4);
  if (FVar41.Value < iVar37) {
LAB_14dc8b29f:
    if (((this->CurrentFrameData).LastSampleRange.LowerBound.Type.Value == '\x02') &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar36)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    FVar45 = (this->CurrentFrameData).LastSampleRange.LowerBound.Value;
    if ((pFVar11[lVar53 * 0x18] == (FScriptContainerElement)0x2) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar36)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    fStack_154c = (float)((ulonglong)*(undefined8 *)(pFVar11 + lVar53 * 0x18 + 4) >> 0x20);
    fStack_1544 = FVar45.SubFrame;
    auVar68 = roundps(in_XMM2,ZEXT416((uint)(fStack_154c - fStack_1544)),1);
    fStack_14cc = (fStack_154c - fStack_1544) - auVar68._0_4_;
    if (::FFrameTime::MaxSubframe <= fStack_14cc) {
      fStack_14cc = ::FFrameTime::MaxSubframe;
    }
    local_14d0 = (int)auVar68._0_4_ +
                 ((int)*(undefined8 *)(pFVar11 + lVar53 * 0x18 + 4) - FVar45.FrameNumber.Value);
    if (fStack_14cc <= 0.0) {
      fStack_14cc = 0.0;
    }
    uVar52 = CONCAT44(fStack_14cc,local_14d0);
  }
  else {
    if (iVar37 == FVar41.Value) {
      fStack_154c = (float)((ulonglong)*(undefined8 *)(pFVar11 + lVar53 * 0x18 + 4) >> 0x20);
      fStack_1544 = FVar45.SubFrame;
      if (fStack_1544 < fStack_154c) goto LAB_14dc8b29f;
    }
    if ((pFVar11[lVar53 * 0x18] == (FScriptContainerElement)0x2) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar36)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    uVar52 = *(undefined8 *)(pFVar11 + lVar53 * 0x18 + 4);
    if (((this->CurrentFrameData).LastSampleRange.LowerBound.Type.Value == '\x02') &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar36)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    FVar45 = (this->CurrentFrameData).LastSampleRange.LowerBound.Value;
    fStack_154c = FVar45.SubFrame;
    fStack_1544 = (float)((ulonglong)uVar52 >> 0x20);
    auVar68 = roundps(in_XMM2,ZEXT416((uint)(fStack_154c - fStack_1544)),1);
    fStack_14d4 = (fStack_154c - fStack_1544) - auVar68._0_4_;
    if (::FFrameTime::MaxSubframe <= fStack_14d4) {
      fStack_14d4 = ::FFrameTime::MaxSubframe;
    }
    local_14d8 = (int)auVar68._0_4_ + (FVar45.FrameNumber.Value.Value - (int)uVar52);
    if (fStack_14d4 <= 0.0) {
      fStack_14d4 = 0.0;
    }
    uVar52 = CONCAT44(fStack_14d4,local_14d8);
  }
  iVar37 = (int)uVar52;
  local_1478 = uVar52;
  if ((iVar37 == 0) &&
     (local_1478._4_4_ = (float)((ulonglong)uVar52 >> 0x20), bVar36 = local_1478._4_4_ == 0.0,
     bVar36)) {
    if (((this->CurrentFrameData).TemporalRanges.ArrayNum < 1) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar36)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    FVar45 = TRange<FFrameTime>::Size<FFrameTime>
                       ((TRange<FFrameTime> *)
                        (this->CurrentFrameData).TemporalRanges.AllocatorInstance.Data);
    uVar52 = *(undefined8 *)FVar45;
    iVar37 = (int)uVar52;
  }
  lVar55 = (longlong)
           ROUND(((double)iVar37 + (double)iVar37) /
                 (double)(this->CurrentFrameMetrics).FrameTimePerTemporalSample.FrameNumber.Value -
                 __real_3fe0000000000000) >> 1;
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  pUVar46 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  iVar37 = 1;
  if (1 < lVar55) {
    iVar37 = (int)lVar55;
  }
  UE::MoviePipeline::SetSkeletalMeshClothSubSteps(iVar37,pUVar46,&pUVar42->ClothSimCache);
  if ((pFVar11[lVar53 * 0x18] == (FScriptContainerElement)0x2) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar36)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  (pTVar6->DebugPtr->ShotInfo).CurrentTimeInRoot = *(FFrameTime *)(pFVar11 + lVar53 * 0x18 + 4);
  FVar45 = (this->CurrentFrameMetrics).MotionBlurCenteringOffsetTime;
  FVar14 = (this->CurrentFrameMetrics).ShutterOffsetFrameTime;
  fStack_154c = FVar45.SubFrame;
  uVar54 = *(undefined8 *)((longlong)*(UMoviePipelineExecutorShot **)pTVar6 + 0xd4);
  fStack_1544 = (float)((ulonglong)uVar54 >> 0x20);
  fStack_1544 = fStack_154c + fStack_1544;
  iVar37 = (int)fStack_1544;
  fVar62 = fStack_1544;
  if ((iVar37 != -0x80000000) && ((float)iVar37 != fStack_1544)) {
    auVar65._4_4_ = fStack_1544;
    auVar65._0_4_ = fStack_1544;
    auVar65._8_8_ = 0;
    uVar38 = movmskps(SUB84(*(UMoviePipelineExecutorShot **)pTVar6,0),auVar65);
    fVar62 = (float)(int)(iVar37 - (uVar38 & 1));
  }
  auVar68 = ZEXT416((uint)::FFrameTime::MaxSubframe);
  fVar61 = fStack_1544 - fVar62;
  if (::FFrameTime::MaxSubframe <= fStack_1544 - fVar62) {
    fVar61 = ::FFrameTime::MaxSubframe;
  }
  if (fVar61 <= 0.0) {
    fVar61 = 0.0;
  }
  fStack_154c = FVar14.SubFrame;
  fVar61 = fVar61 + fStack_154c;
  iVar37 = ((int)ROUND((fStack_1544 + fStack_1544) - fVar19) >> 1) + FVar14.FrameNumber.Value.Value;
  local_1510 = ((int)ROUND((fVar61 + fVar61) - fVar19) >> 1) + iVar37 +
               FVar45.FrameNumber.Value.Value + (int)uVar54;
  iVar49 = (int)fVar61;
  fVar62 = fVar61;
  if ((iVar49 != -0x80000000) && ((float)iVar49 != fVar61)) {
    auVar66._4_4_ = fVar61;
    auVar66._0_4_ = fVar61;
    auVar66._8_8_ = 0;
    uVar38 = movmskps(iVar37,auVar66);
    fVar62 = (float)(int)(iVar49 - (uVar38 & 1));
  }
  fStack_150c = fVar61 - fVar62;
  if (::FFrameTime::MaxSubframe <= fVar61 - fVar62) {
    fStack_150c = ::FFrameTime::MaxSubframe;
  }
  if (fStack_150c <= 0.0) {
    fStack_150c = 0.0;
  }
  if (6 < (byte)LogMovieRenderPipeline._0_1_) {
    local_1470 = FVar45;
    ::FString::PrintfImpl(&local_13d0,L"Frame: %d Subframe: %f");
    local_1468 = (this->CurrentFrameMetrics).ShutterOffsetFrameTime;
    ::FString::PrintfImpl(&local_13e0,L"Frame: %d Subframe: %f");
    local_1460 = (pTVar6->DebugPtr->ShotInfo).CurrentTimeInRoot;
    ::FString::PrintfImpl(&local_13f0,L"Frame: %d Subframe: %f");
    local_1458 = CONCAT44(fStack_150c,local_1510);
    ::FString::PrintfImpl(&local_1400,L"Frame: %d Subframe: %f");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_1400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1400.Data.AllocatorInstance.Data);
    }
    if (local_13f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13f0.Data.AllocatorInstance.Data);
    }
    if (local_13e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13e0.Data.AllocatorInstance.Data);
    }
    if (local_13d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_13d0.Data.AllocatorInstance.Data);
    }
  }
  iVar37 = (this->CurrentFrameMetrics).TickResolution.Denominator;
  local_1450._4_4_ = (float)((ulonglong)uVar52 >> 0x20);
  fVar32 = local_1450._4_4_;
  iVar49 = (this->CurrentFrameMetrics).TickResolution.Numerator;
  (this->CurrentTimeStepData).FrameRate = (this->CurrentFrameMetrics).FrameRate;
  fVar61 = ((float)((longlong)(int)uVar52 * (longlong)iVar37) + local_1450._4_4_ * (float)iVar37) /
           (float)iVar49;
  (this->CurrentTimeStepData).FrameDeltaTime = fVar61;
  fVar62 = (this->CurrentFrameMetrics).TimeDilation;
  (this->CurrentTimeStepData).WorldTimeDilation = fVar62;
  fVar17 = __real_322bcc77;
  fVar62 = (float)((uint)(fVar62 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  (this->CurrentTimeStepData).WorldSeconds = (this->CurrentTimeStepData).WorldSeconds + fVar61;
  local_1450 = uVar52;
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  pUVar13 = (pUVar42->CustomEngineTimeStep).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UMovieGraphEngineTimeStep *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  pbVar1 = &(pUVar13->SharedTimeStepData).bHasTimeDilationBeenUsed;
  *pbVar1 = (bool)(*pbVar1 | fVar17 < fVar62);
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  pUVar13 = (pUVar42->CustomEngineTimeStep).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UMovieGraphEngineTimeStep *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  iVar37 = (this->CurrentFrameData).TemporalSampleCount;
  fVar62 = (this->CurrentFrameMetrics).MotionBlurAmount;
  (this->CurrentTimeStepData).bHasRelativeTimeBeenUsed =
       (pUVar13->SharedTimeStepData).bHasTimeDilationBeenUsed;
  lVar53 = this->_padding_;
  (this->CurrentTimeStepData).MotionBlurFraction = fVar62 / (float)iVar37;
  bVar36 = (bool)(**(code **)(lVar53 + 0x308))(this);
  if (bVar29) {
    lVar53 = this->_padding_;
    (this->CurrentTimeStepData).bIsFirstTemporalSampleForFrame = local_1557;
    (**(code **)(lVar53 + 0x2f0))();
    cVar35 = local_1557;
  }
  else {
    (this->CurrentTimeStepData).bIsFirstTemporalSampleForFrame = bVar36;
    cVar35 = (**(code **)(this->_padding_ + 0x2f0))(this);
  }
  iVar37 = (this->CurrentFrameData).TemporalSampleCount;
  (this->CurrentTimeStepData).bIsLastTemporalSampleForFrame = (bool)cVar35;
  if ((iVar37 < 2) || ((this->CurrentTimeStepData).bDiscardOutput != false)) {
    bVar36 = false;
  }
  else {
    bVar36 = true;
  }
  (this->CurrentTimeStepData).bRequiresAccumulator = bVar36;
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  pUVar13 = (pUVar42->CustomEngineTimeStep).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UMovieGraphEngineTimeStep *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->CurrentTimeStepData).OutputFrameNumber = (pUVar13->SharedTimeStepData).OutputFrameNumber;
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  pUVar13 = (pUVar42->CustomEngineTimeStep).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UMovieGraphEngineTimeStep *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  pUVar51 = (UMovieGraphEvaluatedConfig *)(this->CurrentFrameData).EvaluatedConfig.Object;
  (this->CurrentTimeStepData).RenderedFrameNumber =
       (pUVar13->SharedTimeStepData).RenderedFrameNumber;
  (this->CurrentTimeStepData).TemporalSampleCount = (this->CurrentFrameData).TemporalSampleCount;
  (this->CurrentTimeStepData).TemporalSampleIndex = (this->CurrentFrameData).TemporalSampleIndex;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar51 != (UMovieGraphEvaluatedConfig *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar51);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar51 != (UMovieGraphEvaluatedConfig *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar51);
    }
  }
  (this->CurrentTimeStepData).EvaluatedConfig.field0_0x0.DebugPtr = pUVar51;
  if (((this->CurrentFrameData).EvaluatedConfig.Object == (UObject *)0x0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar36)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pUVar47 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                      ((UMovieGraphEvaluatedConfig *)(this->CurrentFrameData).EvaluatedConfig.Object
                       ,UMovieGraphNode::GlobalsPinName,true,false);
  local_1448 = (this->CurrentFrameMetrics).FrameTimePerTemporalSample;
  fStack_154c = (float)((ulonglong)
                        *(undefined8 *)((longlong)*(UMoviePipelineExecutorShot **)pTVar6 + 0xd4) >>
                       0x20);
  dVar67 = ((double)local_1448.SubFrame + (double)local_1448.FrameNumber.Value.Value) *
           (double)(this->CurrentFrameData).TemporalSampleIndex;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = dVar67;
  auVar68 = roundpd(auVar68,auVar59,1);
  dVar71 = auVar68._0_8_;
  auVar70._0_8_ = dVar67 - dVar71;
  auVar70._8_8_ = 0;
  if (dVar57 <= dVar71) {
    dVar71 = dVar57;
  }
  if (dVar71 <= dVar31) {
    dVar71 = dVar31;
  }
  fVar62 = (float)auVar70._0_8_;
  if (::FFrameTime::MaxSubframe <= (float)auVar70._0_8_) {
    fVar62 = ::FFrameTime::MaxSubframe;
  }
  auVar60 = ZEXT416((uint)fVar62);
  if (fVar62 <= 0.0) {
    auVar60 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar60._0_4_) {
    auVar60._0_4_ = ::FFrameTime::MaxSubframe;
  }
  if (auVar60._0_4_ <= 0.0) {
    auVar18._12_4_ = 0;
    auVar18._0_12_ = auVar60._4_12_;
    auVar60 = auVar18 << 0x20;
  }
  fStack_154c = fStack_154c - auVar60._0_4_;
  auVar68 = roundps(auVar70,ZEXT416((uint)fStack_154c),1);
  local_1540.SubFrame = fStack_154c - auVar68._0_4_;
  if (::FFrameTime::MaxSubframe <= local_1540.SubFrame) {
    local_1540.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_1540.SubFrame <= 0.0) {
    local_1540.SubFrame = 0.0;
  }
  local_1540.FrameNumber.Value =
       (int)auVar68._0_4_ +
       ((int)*(undefined8 *)((longlong)*(UMoviePipelineExecutorShot **)pTVar6 + 0xd4) - (int)dVar71)
  ;
  ::operator*((FFrameTime)&local_1438,(FMovieSceneSequenceTransform *)local_1540);
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  pUVar9 = (pUVar42->GraphDataSourceInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar9 + 0x2b8))(pUVar9,&local_1440);
  FVar56 = local_1440;
  if ((pUVar47 != (UMovieGraphGlobalOutputSettingNode *)0x0) &&
     (pUVar47->bOverride_OutputFrameRate != '\0')) {
    FVar56 = pUVar47->OutputFrameRate;
  }
  local_1518 = FVar56;
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  pUVar9 = (pUVar42->GraphDataSourceInstance).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar9 + 0x2b0))(pUVar9,&local_14c8);
  if ((pUVar47->bDropFrameTimecode != false) && (FVar56.Numerator == 30000)) {
    local_1555 = true;
    if (local_1518.Denominator == 0x3e9) goto LAB_14dc8ba57;
  }
  local_1555 = false;
LAB_14dc8ba57:
  if (pUVar47->bOverride_CustomTimecodeStart == '\0') {
    FVar45 = FFrameRate::TransformTime((FFrameTime)local_12d0,(FFrameRate)local_1540,local_14c8);
    iVar37 = *(int *)FVar45;
    if (fVar19 < *(float *)((longlong)FVar45 + 4) || fVar19 == *(float *)((longlong)FVar45 + 4)) {
      iVar37 = iVar37 + 1;
    }
  }
  else {
    FVar41 = FTimecode::ToFrameNumber(&pUVar47->CustomTimecodeStart,(FFrameRate *)local_1418);
    iVar37 = (this->CurrentTimeStepData).OutputFrameNumber +
             *(int *)CONCAT44(extraout_var,FVar41.Value);
  }
  if (pUVar47->bOverride_CustomTimecodeStart == '\0') {
    FVar45 = FFrameRate::TransformTime((FFrameTime)local_12c8,local_1438,local_14c8);
    iVar49 = *(int *)FVar45;
    if (fVar19 < *(float *)((longlong)FVar45 + 4) || fVar19 == *(float *)((longlong)FVar45 + 4)) {
      iVar49 = iVar49 + 1;
    }
  }
  else {
    FVar41 = FTimecode::ToFrameNumber(&pUVar47->CustomTimecodeStart,(FFrameRate *)(local_1418 + 4));
    iVar49 = (this->CurrentTimeStepData).OutputFrameNumber +
             *(int *)CONCAT44(extraout_var_00,FVar41.Value);
  }
  pFVar5 = &(this->CurrentTimeStepData).RootFrameNumber;
  pFVar5->Value = iVar37;
  pFVar48 = FTimecode::FromFrameNumber(&local_11b8,pFVar5,&local_1518,local_1555);
  pFVar5 = &(this->CurrentTimeStepData).ShotFrameNumber;
  iVar37 = pFVar48->Minutes;
  iVar8 = pFVar48->Seconds;
  iVar39 = pFVar48->Frames;
  (this->CurrentTimeStepData).RootTimeCode.Hours = pFVar48->Hours;
  (this->CurrentTimeStepData).RootTimeCode.Minutes = iVar37;
  (this->CurrentTimeStepData).RootTimeCode.Seconds = iVar8;
  (this->CurrentTimeStepData).RootTimeCode.Frames = iVar39;
  bVar36 = pFVar48->bDropFrameFormat;
  uVar30 = *(undefined3 *)&pFVar48->field_0x15;
  (this->CurrentTimeStepData).RootTimeCode.Subframe = pFVar48->Subframe;
  (this->CurrentTimeStepData).RootTimeCode.bDropFrameFormat = bVar36;
  *(undefined3 *)&(this->CurrentTimeStepData).RootTimeCode.field_0x15 = uVar30;
  pFVar5->Value = iVar49;
  pFVar48 = FTimecode::FromFrameNumber(&local_11a0,pFVar5,&local_1518,local_1555);
  local_12f8.bIsActive = true;
  iVar37 = pFVar48->Minutes;
  iVar49 = pFVar48->Seconds;
  iVar8 = pFVar48->Frames;
  (this->CurrentTimeStepData).ShotTimeCode.Hours = pFVar48->Hours;
  (this->CurrentTimeStepData).ShotTimeCode.Minutes = iVar37;
  (this->CurrentTimeStepData).ShotTimeCode.Seconds = iVar49;
  (this->CurrentTimeStepData).ShotTimeCode.Frames = iVar8;
  bVar36 = pFVar48->bDropFrameFormat;
  uVar30 = *(undefined3 *)&pFVar48->field_0x15;
  local_12f8.TemporalSampleCount = (this->CurrentTimeStepData).TemporalSampleCount;
  (this->CurrentTimeStepData).ShotTimeCode.Subframe = pFVar48->Subframe;
  (this->CurrentTimeStepData).ShotTimeCode.bDropFrameFormat = bVar36;
  *(undefined3 *)&(this->CurrentTimeStepData).ShotTimeCode.field_0x15 = uVar30;
  local_12f8.TemporalSampleIndex = (this->CurrentTimeStepData).TemporalSampleIndex;
  local_12f8.SequenceFPS = (double)FVar56.Numerator / (double)local_1518.Denominator;
  FMovieRenderPipelineCoreModule::SetTickInfo(&local_12f8);
  iVar37 = (this->CurrentFrameMetrics).TickResolution.Denominator;
  dVar57 = ((double)((longlong)(int)uVar52 * (longlong)iVar37) + (double)fVar32 * (double)iVar37) /
           (double)(this->CurrentFrameMetrics).TickResolution.Numerator;
  local_1430 = uVar52;
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  pUVar13 = (pUVar42->CustomEngineTimeStep).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UMovieGraphEngineTimeStep *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  dVar31 = __real_3e45798ee2308c3a;
  uVar38 = SUB84(dVar57,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar40 = (uint)((ulonglong)dVar57 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar40,uVar38) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar40,uVar38) == __real_3e45798ee2308c3a) {
    local_1538[0] = 0;
    bVar36 = `UMovieGraphEngineTimeStep::SetCachedFrameTiming'::__l3::<lambda_1>::operator()
                       (local_1538);
    if ((!bVar36) && (dVar57 = __real_3fa5555555555555, 1 < (byte)LogMovieRenderPipeline._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      dVar57 = __real_3fa5555555555555;
    }
  }
  (pUVar13->TimeCache).UndilatedDeltaTime = dVar57;
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  (**(code **)(*(longlong *)(pUVar42->GraphDataSourceInstance).field0_0x0.DebugPtr + 0x2c0))();
  if (bVar34) {
    pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
    (**(code **)(*(longlong *)(pUVar42->GraphDataSourceInstance).field0_0x0.DebugPtr + 0x2e0))();
  }
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint539 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint539,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphCoreTimeStep.cpp"
                 ,0x21b,L"MRQ Frame %d [TS: %d]");
      __BookmarkPoint539 = true;
    }
    iVar37 = (this->CurrentFrameData).TemporalSampleIndex;
    iVar49 = (this->CurrentTimeStepData).OutputFrameNumber;
    uVar38 = CallstackTrace_GetCurrentId();
    local_1098[0] = '\x02';
    local_1098[1] = 'D';
    local_1098[2] = 0x44;
    local_1095 = iVar49;
    local_1091 = iVar37;
    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint539,uVar38,0xb,local_1098);
  }
  uVar52 = *(undefined8 *)(local_1420 + local_1428 * 8);
  uVar54 = *(undefined8 *)(local_1420 + local_1428 * 8 + 8);
  (this->CurrentFrameData).LastSampleRange.LowerBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar52;
  *(int3 *)&(this->CurrentFrameData).LastSampleRange.LowerBound.field_0x1 =
       (int3)((ulonglong)uVar52 >> 8);
  (this->CurrentFrameData).LastSampleRange.LowerBound.Value.FrameNumber =
       (FFrameNumber)(int)((ulonglong)uVar52 >> 0x20);
  *(undefined8 *)&(this->CurrentFrameData).LastSampleRange.LowerBound.Value.SubFrame = uVar54;
  lVar53 = this->_padding_;
  (this->CurrentFrameData).LastSampleRange.UpperBound.Value =
       *(FFrameTime *)(local_1420 + local_1428 * 8 + 0x10);
  cVar35 = (**(code **)(lVar53 + 0x2f0))(this);
  if (bVar29) {
    cVar35 = local_1557;
  }
  if (cVar35 == '\0') {
    if ((pTVar6->DebugPtr->ShotInfo).State != MotionBlur) {
      (this->CurrentFrameData).TemporalSampleIndex =
           (this->CurrentFrameData).TemporalSampleIndex + 1;
      piVar3 = &(pTVar6->DebugPtr->ShotInfo).WorkMetrics.OutputSubSampleIndex;
      *piVar3 = *piVar3 + 1;
    }
  }
  else {
    pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
    pUVar13 = (pUVar42->CustomEngineTimeStep).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (UMovieGraphEngineTimeStep *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    piVar3 = &(pUVar13->SharedTimeStepData).RenderedFrameNumber;
    *piVar3 = *piVar3 + 1;
    uVar30 = *(undefined3 *)&(this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.field_0x1;
    FVar41.Value = (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.FrameNumber.
                   Value;
    uVar52 = *(undefined8 *)
              &(this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value.SubFrame;
    FVar45 = (this->CurrentFrameData).CurrentOutputFrameRange.UpperBound.Value;
    (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)
         (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Type.Value;
    *(undefined3 *)&(this->CurrentFrameData).LastOutputFrameRange.LowerBound.field_0x1 = uVar30;
    (this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.FrameNumber =
         (FFrameNumber)FVar41.Value;
    *(undefined8 *)&(this->CurrentFrameData).LastOutputFrameRange.LowerBound.Value.SubFrame = uVar52
    ;
    (this->CurrentFrameData).LastOutputFrameRange.UpperBound.Value = FVar45;
    if ((pTVar6->DebugPtr->ShotInfo).State == Rendering) {
      pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
      pUVar13 = (pUVar42->CustomEngineTimeStep).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar13 != (UMovieGraphEngineTimeStep *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      (pUVar13->SharedTimeStepData).OutputFrameNumber =
           (pUVar13->SharedTimeStepData).OutputFrameNumber + 1;
      piVar3 = &(this->CurrentTimeStepData).ShotOutputFrameNumber;
      *piVar3 = *piVar3 + 1;
    }
    (this->CurrentFrameData).TemporalSampleIndex = 0;
    (pTVar6->DebugPtr->ShotInfo).WorkMetrics.OutputSubSampleIndex = 0;
  }
  pUVar10 = pTVar6->DebugPtr;
  if (((pUVar10->ShotInfo).TotalOutputRangeRoot.UpperBound.Type.Value == '\x02') &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar34)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((pUVar10->ShotInfo).TotalOutputRangeRoot.UpperBound.Value.Value <=
      (pTVar6->DebugPtr->ShotInfo).CurrentTickInRoot.Value) {
    bVar34 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3003204213271429701>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphCoreTimeStep.cpp"
                        ,0x245,
                        "CurrentCameraCut->ShotInfo.CurrentTickInRoot < CurrentCameraCut->ShotInfo.TotalOutputRangeRoot.GetUpperBoundValue()"
                       );
    if (bVar34) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  pUVar42 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  pUVar13 = (pUVar42->CustomEngineTimeStep).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UMovieGraphEngineTimeStep *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  dVar57 = (pUVar13->TimeCache).UndilatedDeltaTime;
  if ((((double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar57,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar31)
      && (bVar34 = `UMovieGraphCoreTimeStep::TickProducingFrames'::__l165::<lambda_1>::operator()
                             (local_1520), !bVar34)) && (1 < (byte)LogMovieRenderPipeline._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  return;
}

// UpdateFrameMetrics @ 14dc8c090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphCoreTimeStep::UpdateFrameMetrics(UMovieGraphCoreTimeStep *this)

{
  UMovieGraphDataSourceBase *pUVar1;
  FFrameRate FVar2;
  UMovieGraphEvaluatedConfig *pUVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  FFrameTime FVar11;
  FFrameTime FVar12;
  FFrameTime FVar13;
  FFrameNumber FVar14;
  UMovieGraphPipeline *pUVar15;
  FFrameRate *pFVar16;
  UMovieGraphGlobalOutputSettingNode *pUVar17;
  FFrameTime FVar18;
  UWorld *pUVar19;
  AWorldSettings *pAVar20;
  UMovieGraphCameraSettingNode *pUVar21;
  uint uVar22;
  EMoviePipelineShutterTiming EVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  FFrameTime local_res8;
  FFrameTime local_res10;
  FFrameRate local_c8;
  FFrameNumber local_b8;
  FFrameTime FStack_90;
  
  FStack_90.FrameNumber.Value = 0;
  FStack_90.SubFrame = 0.0;
  pUVar15 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  pUVar1 = (pUVar15->GraphDataSourceInstance).field0_0x0.DebugPtr;
  pFVar16 = (FFrameRate *)(**(code **)(*(longlong *)pUVar1 + 0x2b0))(pUVar1,&local_res8);
  FVar2 = *pFVar16;
  pUVar15 = UMovieGraphTimeStepBase::GetOwningGraph((UMovieGraphTimeStepBase *)this);
  pUVar1 = (pUVar15->GraphDataSourceInstance).field0_0x0.DebugPtr;
  pFVar16 = (FFrameRate *)(**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1,&local_res8);
  pUVar3 = (UMovieGraphEvaluatedConfig *)(this->CurrentFrameData).EvaluatedConfig.Object;
  local_c8 = *pFVar16;
  if (((pUVar3 != (UMovieGraphEvaluatedConfig *)0x0) &&
      (pUVar17 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                           (pUVar3,UMovieGraphNode::GlobalsPinName,true,false),
      pUVar17 != (UMovieGraphGlobalOutputSettingNode *)0x0)) &&
     (pUVar17->bOverride_OutputFrameRate != '\0')) {
    local_c8 = pUVar17->OutputFrameRate;
  }
  local_res8.FrameNumber.Value = 1;
  local_res8.SubFrame = 0.0;
  FVar18 = FFrameRate::TransformTime((FFrameTime)&local_res8,(FFrameRate)0x1,local_c8);
  FVar18 = *(FFrameTime *)FVar18;
  pUVar19 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pAVar20 = UWorld::GetWorldSettings(pUVar19,false,true);
  (**(code **)(pAVar20->_padding_ + 0x7a8))(pAVar20);
  pUVar19 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pAVar20 = UWorld::GetWorldSettings(pUVar19,false,true);
  fVar24 = (float)(**(code **)(pAVar20->_padding_ + 0x790))(pAVar20);
  pUVar19 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pAVar20 = UWorld::GetWorldSettings(pUVar19,false,true);
  (**(code **)(pAVar20->_padding_ + 0x7a8))(pAVar20,0);
  dVar10 = __real_c1e0000000000000;
  dVar9 = __real_41dfffffffc00000;
  fVar28 = __real_3f800000;
  if (__real_322bcc77 <
      (float)((uint)(fVar24 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    local_res8.SubFrame = FVar18.SubFrame;
    dVar43 = ((double)local_res8.SubFrame + (double)FVar18.FrameNumber.Value.Value) * (double)fVar24
    ;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = dVar43;
    auVar41 = roundpd(in_XMM2,auVar41,1);
    dVar29 = auVar41._0_8_;
    dVar39 = dVar29;
    if (__real_41dfffffffc00000 <= dVar29) {
      dVar39 = __real_41dfffffffc00000;
    }
    fVar38 = (float)(dVar43 - dVar29);
    if (dVar39 <= __real_c1e0000000000000) {
      dVar39 = __real_c1e0000000000000;
    }
    if (::FFrameTime::MaxSubframe <= fVar38) {
      fVar38 = ::FFrameTime::MaxSubframe;
    }
    auVar40 = ZEXT416((uint)fVar38);
    if (fVar38 <= 0.0) {
      auVar40 = ZEXT416(0) << 0x20;
    }
    if (::FFrameTime::MaxSubframe <= auVar40._0_4_) {
      auVar40._0_4_ = ::FFrameTime::MaxSubframe;
    }
    if (auVar40._0_4_ <= 0.0) {
      auVar4._12_4_ = 0;
      auVar4._0_12_ = auVar40._4_12_;
      auVar40 = auVar4 << 0x20;
    }
    local_res8.SubFrame = auVar40._0_4_;
    local_res8.FrameNumber.Value = (int)dVar39;
    FVar18 = local_res8;
  }
  fVar25 = (float)(**(code **)(this->_padding_ + 0x318))(this);
  local_b8 = FVar18.FrameNumber.Value;
  dVar39 = (double)fVar25;
  local_res8.SubFrame = FVar18.SubFrame;
  fVar38 = local_res8.SubFrame;
  auVar42._0_8_ = (double)local_b8.Value;
  auVar42._8_8_ = 0;
  if (dVar39 < __real_3f66c16c16c16c17) {
    dVar39 = __real_3f66c16c16c16c17;
  }
  dVar39 = ((double)local_res8.SubFrame + auVar42._0_8_) * dVar39;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = dVar39;
  auVar41 = roundpd(auVar42,auVar30,1);
  dVar43 = auVar41._0_8_;
  dVar29 = dVar43;
  if (dVar9 <= dVar43) {
    dVar29 = dVar9;
  }
  if (dVar29 <= dVar10) {
    dVar29 = dVar10;
  }
  FVar14.Value = (int)dVar29;
  fVar26 = (float)(dVar39 - dVar43);
  if (::FFrameTime::MaxSubframe <= fVar26) {
    fVar26 = ::FFrameTime::MaxSubframe;
  }
  auVar31 = ZEXT416((uint)fVar26);
  if (fVar26 <= 0.0) {
    auVar31 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar31._0_4_) {
    auVar31._0_4_ = ::FFrameTime::MaxSubframe;
  }
  if (auVar31._0_4_ <= 0.0) {
    auVar5._12_4_ = 0;
    auVar5._0_12_ = auVar31._4_12_;
    auVar31 = auVar5 << 0x20;
  }
  fVar26 = auVar31._0_4_;
  local_res8.SubFrame = fVar26;
  local_res8.FrameNumber.Value = FVar14.Value;
  FVar11 = local_res8;
  local_res10 = local_res8;
  dVar43 = ((double)fVar26 + (double)FVar14.Value) /
           (double)(this->CurrentFrameData).TemporalSampleCount;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = dVar43;
  auVar41 = roundpd(auVar41,auVar32,1);
  dVar29 = auVar41._0_8_;
  dVar39 = dVar29;
  if (dVar9 <= dVar29) {
    dVar39 = dVar9;
  }
  if (dVar39 <= dVar10) {
    dVar39 = dVar10;
  }
  fVar27 = (float)(dVar43 - dVar29);
  if (::FFrameTime::MaxSubframe <= fVar27) {
    fVar27 = ::FFrameTime::MaxSubframe;
  }
  auVar33 = ZEXT416((uint)fVar27);
  if (fVar27 <= 0.0) {
    auVar33 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar33._0_4_) {
    auVar33._0_4_ = ::FFrameTime::MaxSubframe;
  }
  if (auVar33._0_4_ <= 0.0) {
    auVar6._12_4_ = 0;
    auVar6._0_12_ = auVar33._4_12_;
    auVar33 = auVar6 << 0x20;
  }
  local_res8.SubFrame = auVar33._0_4_;
  local_res8.FrameNumber.Value = (int)dVar39;
  FVar12 = local_res8;
  EVar23 = FrameCenter;
  auVar41 = roundps(auVar41,ZEXT416((uint)(fVar38 - fVar26)),1);
  local_res8.SubFrame = (fVar38 - fVar26) - auVar41._0_4_;
  if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
    local_res8.SubFrame = ::FFrameTime::MaxSubframe;
  }
  pUVar3 = (UMovieGraphEvaluatedConfig *)(this->CurrentFrameData).EvaluatedConfig.Object;
  if (local_res8.SubFrame <= 0.0) {
    local_res8.SubFrame = 0.0;
  }
  local_res8.FrameNumber.Value = (int)auVar41._0_4_ + (local_b8.Value - FVar14.Value);
  FVar13 = local_res8;
  if ((pUVar3 != (UMovieGraphEvaluatedConfig *)0x0) &&
     (pUVar21 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
                          (pUVar3,UMovieGraphNode::GlobalsPinName,true,false),
     pUVar21 != (UMovieGraphCameraSettingNode *)0x0)) {
    EVar23 = pUVar21->ShutterTiming;
  }
  if (EVar23 == FrameOpen) {
    local_res8.FrameNumber.Value = 0;
    local_res8.SubFrame = 0.0;
  }
  else if (EVar23 == FrameCenter) {
    if (fVar26 == 0.0) {
      uVar22 = -FVar14.Value;
      fVar28 = 0.0;
    }
    else {
      fVar28 = fVar28 - fVar26;
      uVar22 = ~FVar14.Value;
      if (::FFrameTime::MaxSubframe <= fVar28) {
        fVar28 = ::FFrameTime::MaxSubframe;
      }
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
    }
    dVar44 = ((double)(int)uVar22 + (double)fVar28) * __real_3fe0000000000000;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = dVar44;
    auVar41 = roundpd(auVar41,auVar34,1);
    dVar43 = auVar41._0_8_;
    dVar29 = dVar43;
    if (dVar9 <= dVar43) {
      dVar29 = dVar9;
    }
    if (dVar29 <= dVar10) {
      dVar29 = dVar10;
    }
    fVar28 = (float)(dVar44 - dVar43);
    if (::FFrameTime::MaxSubframe <= fVar28) {
      fVar28 = ::FFrameTime::MaxSubframe;
    }
    auVar35 = ZEXT416((uint)fVar28);
    if (fVar28 <= 0.0) {
      auVar35 = ZEXT816(0) << 0x20;
    }
    if (::FFrameTime::MaxSubframe <= auVar35._0_4_) {
      auVar35._0_4_ = ::FFrameTime::MaxSubframe;
    }
    if (auVar35._0_4_ <= 0.0) {
      auVar7._12_4_ = 0;
      auVar7._0_12_ = auVar35._4_12_;
      auVar35 = auVar7 << 0x20;
    }
    local_res8.SubFrame = auVar35._0_4_;
    local_res8.FrameNumber.Value = (int)dVar29;
  }
  else {
    if (EVar23 != FrameClose) goto LAB_14dc8c4f5;
    if (fVar26 == 0.0) {
      local_res8.SubFrame = 0.0;
      local_res8.FrameNumber.Value = -FVar14.Value;
    }
    else {
      local_res8.SubFrame = fVar28 - fVar26;
      if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
        local_res8.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_res8.SubFrame <= 0.0) {
        local_res8.SubFrame = 0.0;
      }
      local_res8.FrameNumber.Value = ~FVar14.Value;
    }
  }
  FStack_90 = local_res8;
LAB_14dc8c4f5:
  dVar43 = ((double)auVar33._0_4_ + (double)(int)dVar39) * __real_3fe0000000000000;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = dVar43;
  auVar41 = roundpd(auVar41,auVar36,1);
  dVar29 = auVar41._0_8_;
  dVar39 = dVar29;
  if (dVar9 <= dVar29) {
    dVar39 = dVar9;
  }
  if (dVar39 <= dVar10) {
    dVar39 = dVar10;
  }
  fVar28 = (float)(dVar43 - dVar29);
  if (::FFrameTime::MaxSubframe <= fVar28) {
    fVar28 = ::FFrameTime::MaxSubframe;
  }
  auVar37 = ZEXT416((uint)fVar28);
  if (fVar28 <= 0.0) {
    auVar37 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar37._0_4_) {
    auVar37._0_4_ = ::FFrameTime::MaxSubframe;
  }
  if (auVar37._0_4_ <= 0.0) {
    auVar8._12_4_ = 0;
    auVar8._0_12_ = auVar37._4_12_;
    auVar37 = auVar8 << 0x20;
  }
  local_res8.SubFrame = auVar37._0_4_;
  local_res8.FrameNumber.Value = (int)dVar39;
  (this->CurrentFrameMetrics).FrameRate = local_c8;
  (this->CurrentFrameMetrics).TickResolution = FVar2;
  (this->CurrentFrameMetrics).FrameTimePerOutputFrame = FVar18;
  (this->CurrentFrameMetrics).MotionBlurAmount = fVar25;
  (this->CurrentFrameMetrics).TimeDilation = fVar24;
  (this->CurrentFrameMetrics).FrameTimeWhileShutterOpen = FVar11;
  (this->CurrentFrameMetrics).FrameTimePerTemporalSample = FVar12;
  (this->CurrentFrameMetrics).FrameTimeWhileShutterClosed = FVar13;
  (this->CurrentFrameMetrics).ShutterOffsetFrameTime = FStack_90;
  (this->CurrentFrameMetrics).MotionBlurCenteringOffsetTime = local_res8;
  return;
}

// UpdateShutterRanges @ 14dc8c6b0

/* WARNING: Removing unreachable block (ram,0x00014dc8c7e6) */
/* WARNING: Removing unreachable block (ram,0x00014dc8c81c) */

void __thiscall UMovieGraphCoreTimeStep::UpdateShutterRanges(UMovieGraphCoreTimeStep *this)

{
  FFrameTime FVar1;
  FFrameTime FVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  FFrameTime local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  FFrameTime local_res20;
  float fStack_64;
  uint local_60;
  uint local_48;
  TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> local_38;
  
  FVar1 = (this->CurrentFrameMetrics).FrameTimeWhileShutterOpen;
  if (((this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Type.Value == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar2 = (this->CurrentFrameData).CurrentOutputFrameRange.LowerBound.Value;
  local_res20.SubFrame = FVar1.SubFrame;
  fStack_64 = FVar2.SubFrame;
  local_res20.SubFrame = local_res20.SubFrame + fStack_64;
  local_res8.FrameNumber.Value =
       ((int)ROUND((local_res20.SubFrame + local_res20.SubFrame) - __real_3f000000) >> 1) +
       FVar1.FrameNumber.Value.Value + FVar2.FrameNumber.Value.Value;
  iVar9 = (int)local_res20.SubFrame;
  fVar10 = local_res20.SubFrame;
  if ((iVar9 != -0x80000000) && ((float)iVar9 != local_res20.SubFrame)) {
    auVar11._4_4_ = local_res20.SubFrame;
    auVar11._0_4_ = local_res20.SubFrame;
    auVar11._8_8_ = 0;
    uVar8 = movmskps(local_res8.FrameNumber.Value,auVar11);
    fVar10 = (float)(int)(iVar9 - (uVar8 & 1));
  }
  local_res8.SubFrame = local_res20.SubFrame - fVar10;
  if (::FFrameTime::MaxSubframe <= local_res20.SubFrame - fVar10) {
    local_res8.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_res8.SubFrame <= 0.0) {
    local_res8.SubFrame = 0.0;
  }
  local_res20 = FVar1;
  TRange<FFrameTime>::Split(&(this->CurrentFrameData).CurrentOutputFrameRange,&local_38,&local_res8)
  ;
  if (local_38.ArrayNum < 1) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3003204213271429718>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphCoreTimeStep.cpp"
                       ,0x256,"SplitRange.Num() > 0");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (local_38.ArrayNum == 2) {
    uVar4 = *(undefined8 *)local_38.AllocatorInstance.Data;
    uVar5 = *(undefined8 *)(local_38.AllocatorInstance.Data + 8);
    (this->CurrentFrameData).RangeShutterOpen.LowerBound.Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar4;
    *(int3 *)&(this->CurrentFrameData).RangeShutterOpen.LowerBound.field_0x1 =
         (int3)((ulonglong)uVar4 >> 8);
    (this->CurrentFrameData).RangeShutterOpen.LowerBound.Value.FrameNumber =
         (FFrameNumber)(int)((ulonglong)uVar4 >> 0x20);
    *(undefined8 *)&(this->CurrentFrameData).RangeShutterOpen.LowerBound.Value.SubFrame = uVar5;
    (this->CurrentFrameData).RangeShutterOpen.UpperBound.Value =
         *(FFrameTime *)(local_38.AllocatorInstance.Data + 0x10);
    uVar4 = *(undefined8 *)(local_38.AllocatorInstance.Data + 0x18);
    uVar5 = *(undefined8 *)(local_38.AllocatorInstance.Data + 0x20);
    (this->CurrentFrameData).RangeShutterClosed.LowerBound.Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar4;
    *(int3 *)&(this->CurrentFrameData).RangeShutterClosed.LowerBound.field_0x1 =
         (int3)((ulonglong)uVar4 >> 8);
    (this->CurrentFrameData).RangeShutterClosed.LowerBound.Value.FrameNumber =
         (FFrameNumber)(int)((ulonglong)uVar4 >> 0x20);
    *(undefined8 *)&(this->CurrentFrameData).RangeShutterClosed.LowerBound.Value.SubFrame = uVar5;
    (this->CurrentFrameData).RangeShutterClosed.UpperBound.Value =
         *(FFrameTime *)(local_38.AllocatorInstance.Data + 0x28);
  }
  else if (local_38.ArrayNum == 1) {
    local_60 = local_60 & 0xffffff00;
    uVar4 = *(undefined8 *)local_38.AllocatorInstance.Data;
    uVar5 = *(undefined8 *)(local_38.AllocatorInstance.Data + 8);
    local_48 = local_48 & 0xffffff00;
    local_res10 = 0;
    (this->CurrentFrameData).RangeShutterOpen.LowerBound.Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar4;
    *(int3 *)&(this->CurrentFrameData).RangeShutterOpen.LowerBound.field_0x1 =
         (int3)((ulonglong)uVar4 >> 8);
    (this->CurrentFrameData).RangeShutterOpen.LowerBound.Value.FrameNumber =
         (FFrameNumber)(int)((ulonglong)uVar4 >> 0x20);
    *(undefined8 *)&(this->CurrentFrameData).RangeShutterOpen.LowerBound.Value.SubFrame = uVar5;
    local_res18 = 0;
    (this->CurrentFrameData).RangeShutterOpen.UpperBound.Value =
         *(FFrameTime *)(local_38.AllocatorInstance.Data + 0x10);
    uVar6 = (ulonglong)local_60;
    (this->CurrentFrameData).RangeShutterClosed.LowerBound.Type =
         (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar6;
    *(int3 *)&(this->CurrentFrameData).RangeShutterClosed.LowerBound.field_0x1 = (int3)(uVar6 >> 8);
    (this->CurrentFrameData).RangeShutterClosed.LowerBound.Value.FrameNumber =
         (FFrameNumber)(int)(uVar6 >> 0x20);
    *(ulonglong *)&(this->CurrentFrameData).RangeShutterClosed.LowerBound.Value.SubFrame =
         (ulonglong)local_48 << 0x20;
    (this->CurrentFrameData).RangeShutterClosed.UpperBound.Value.FrameNumber = 0;
    (this->CurrentFrameData).RangeShutterClosed.UpperBound.Value.SubFrame = 0.0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// UpdateTemporalRanges @ 14dc8c900

void __thiscall UMovieGraphCoreTimeStep::UpdateTemporalRanges(UMovieGraphCoreTimeStep *this)

{
  int *piVar1;
  TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FFrameTime FVar4;
  undefined8 uVar5;
  TRange<FFrameTime> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  ForAnyElementType FVar11;
  FFrameNumber FVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  FFrameTime local_res8;
  FFrameTime local_res10;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TRange<FFrameTime> local_b8;
  TRange<FFrameTime> local_a0;
  TRange<FFrameTime> local_88;
  uint local_70;
  FFrameNumber FStack_6c;
  float fStack_68;
  undefined4 local_64;
  int iStack_60;
  float fStack_5c;
  
  pTVar2 = &(this->CurrentFrameData).TemporalRanges;
  iVar18 = 0;
  iVar14 = (this->CurrentFrameData).TemporalRanges.ArrayMax;
  piVar1 = &(this->CurrentFrameData).TemporalRanges.ArrayMax;
  (this->CurrentFrameData).TemporalRanges.ArrayNum = 0;
  if (iVar14 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar15 = (this->CurrentFrameData).TemporalSampleCount;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (*piVar1 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar15,&pTVar2->AllocatorInstance,
               (this->CurrentFrameData).TemporalRanges.ArrayNum,piVar1);
  }
  if (((this->CurrentFrameData).RangeShutterOpen.LowerBound.Type.Value == '\x02') &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar10 = __real_40000000;
  fVar9 = __real_3f000000;
  local_res8 = (this->CurrentFrameData).RangeShutterOpen.LowerBound.Value;
  local_b8.LowerBound.Type.Value = (this->CurrentFrameData).RangeShutterOpen.LowerBound.Type.Value;
  local_b8.LowerBound._1_3_ =
       *(undefined3 *)&(this->CurrentFrameData).RangeShutterOpen.LowerBound.field_0x1;
  local_b8.LowerBound.Value.FrameNumber.Value =
       (this->CurrentFrameData).RangeShutterOpen.LowerBound.Value.FrameNumber.Value;
  uVar5 = *(undefined8 *)&(this->CurrentFrameData).RangeShutterOpen.LowerBound.Value.SubFrame;
  FVar4 = (this->CurrentFrameData).RangeShutterOpen.UpperBound.Value;
  local_b8.UpperBound.Value.FrameNumber = FVar4.FrameNumber.Value;
  local_b8.UpperBound.Value.SubFrame = FVar4.SubFrame;
  local_b8.LowerBound.Value.SubFrame = (float)uVar5;
  local_b8.UpperBound._0_4_ = SUB84((ulonglong)uVar5 >> 0x20,0);
  if (0 < (this->CurrentFrameData).TemporalSampleCount + -1) {
    do {
      local_res10 = (this->CurrentFrameMetrics).FrameTimePerTemporalSample;
      fVar21 = local_res8.SubFrame + local_res10.SubFrame;
      iVar14 = ((int)ROUND(fVar21 * fVar10 - fVar9) >> 1) + local_res10.FrameNumber.Value.Value;
      iVar17 = (int)fVar21;
      fVar19 = fVar21;
      if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar21)) {
        auVar20._4_4_ = fVar21;
        auVar20._0_4_ = fVar21;
        auVar20._8_8_ = 0;
        uVar15 = movmskps(iVar14,auVar20);
        fVar19 = (float)(int)(iVar17 - (uVar15 & 1));
      }
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = 0;
      local_res8.SubFrame = fVar21 - fVar19;
      local_res8.FrameNumber.Value = local_res8.FrameNumber.Value + iVar14;
      bVar13 = TRange<FFrameTime>::Contains(&local_b8,&local_res8);
      if (bVar13) {
        FStack_6c = local_res8.FrameNumber.Value;
        FVar12.Value = FStack_6c.Value;
        fStack_68 = local_res8.SubFrame;
        fVar19 = fStack_68;
        local_a0.LowerBound.Value.SubFrame = local_b8.LowerBound.Value.SubFrame;
        local_a0.UpperBound.Value.SubFrame = fStack_68;
        local_70 = local_70 & 0xffffff00;
        local_a0.LowerBound.Type.Value = local_b8.LowerBound.Type.Value;
        local_a0.LowerBound._1_3_ = local_b8.LowerBound._1_3_;
        local_a0.LowerBound.Value.FrameNumber.Value = local_b8.LowerBound.Value.FrameNumber.Value;
        local_a0.UpperBound._0_4_ = local_70;
        local_a0.UpperBound.Value.FrameNumber.Value = FStack_6c.Value;
        if (((local_c8.Data <= &local_a0) &&
            (&local_a0 < (TRange<FFrameTime> *)(local_c8.Data + (longlong)local_c0._4_4_ * 0x18)))
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar14 = (int)local_c0;
        if ((int)local_c0 == local_c0._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&local_c8,(int *)((longlong)&local_c0 + 4));
        }
        iVar17 = iVar14 + 1;
        local_64 = CONCAT31(local_64._1_3_,1);
        *(undefined8 *)(local_c8.Data + (longlong)iVar14 * 0x18) = local_a0.LowerBound._0_8_;
        *(ulonglong *)(local_c8.Data + (longlong)iVar14 * 0x18 + 8) =
             CONCAT44(local_a0.UpperBound._0_4_,local_a0.LowerBound.Value.SubFrame);
        local_88.LowerBound.Value.SubFrame = fVar19;
        local_88.LowerBound.Value.FrameNumber.Value = FVar12.Value;
        local_88.LowerBound._0_4_ = local_64;
        *(ulonglong *)(local_c8.Data + (longlong)iVar14 * 0x18 + 0x10) =
             CONCAT44(local_a0.UpperBound.Value.SubFrame,local_a0.UpperBound.Value.FrameNumber.Value
                     );
        local_88.UpperBound.Value.SubFrame = local_b8.UpperBound.Value.SubFrame;
        local_88.UpperBound.Type.Value = local_b8.UpperBound.Type.Value;
        local_88.UpperBound._1_3_ = local_b8.UpperBound._1_3_;
        local_88.UpperBound.Value.FrameNumber.Value = local_b8.UpperBound.Value.FrameNumber.Value;
        iStack_60 = FVar12.Value;
        fStack_5c = fVar19;
        local_c0._0_4_ = iVar17;
        if (((local_c8.Data <= &local_88) &&
            (&local_88 < (TRange<FFrameTime> *)(local_c8.Data + (longlong)local_c0._4_4_ * 0x18)))
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((int)local_c0 == local_c0._4_4_) {
          local_c0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&local_c8,(int *)((longlong)&local_c0 + 4));
        }
        lVar16 = (longlong)(int)local_c0;
        local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0 + 1);
        *(undefined8 *)(local_c8.Data + lVar16 * 0x18) = local_88.LowerBound._0_8_;
        *(ulonglong *)(local_c8.Data + lVar16 * 0x18 + 8) =
             CONCAT44(local_88.UpperBound._0_4_,local_88.LowerBound.Value.SubFrame);
        uVar5 = CONCAT44(local_88.UpperBound.Value.SubFrame,
                         local_88.UpperBound.Value.FrameNumber.Value);
      }
      else {
        if (((local_c8.Data <= &local_b8) &&
            (&local_b8 < (TRange<FFrameTime> *)(local_c8.Data + (longlong)local_c0._4_4_ * 0x18)))
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar14 = (int)local_c0;
        if ((int)local_c0 == local_c0._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&local_c8,(int *)((longlong)&local_c0 + 4));
        }
        lVar16 = (longlong)iVar14;
        local_c0 = CONCAT44(local_c0._4_4_,iVar14 + 1);
        *(undefined8 *)(local_c8.Data + lVar16 * 0x18) = local_b8.LowerBound._0_8_;
        *(ulonglong *)(local_c8.Data + lVar16 * 0x18 + 8) =
             CONCAT44(local_b8.UpperBound._0_4_,local_b8.LowerBound.Value.SubFrame);
        uVar5 = CONCAT44(local_b8.UpperBound.Value.SubFrame,
                         local_b8.UpperBound.Value.FrameNumber.Value);
      }
      FVar11.Data = local_c8.Data;
      *(undefined8 *)(local_c8.Data + lVar16 * 0x18 + 0x10) = uVar5;
      if ((int)local_c0 == 2) {
        pTVar6 = (TRange<FFrameTime> *)(pTVar2->AllocatorInstance).Data;
        if (((pTVar6 <= local_c8.Data) && (local_c8.Data < pTVar6 + *piVar1)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar14 = (this->CurrentFrameData).TemporalRanges.ArrayNum;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->CurrentFrameData).TemporalRanges.ArrayNum = iVar14 + 1;
        uVar5 = *(undefined8 *)(FVar11.Data + 8);
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        pFVar3 = pFVar7 + (longlong)iVar14 * 0x18;
        *(undefined8 *)pFVar3 = *(undefined8 *)FVar11.Data;
        *(undefined8 *)(pFVar3 + 8) = uVar5;
        *(undefined8 *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10) =
             *(undefined8 *)(FVar11.Data + 0x10);
        if (((int)local_c0 < 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_b8.LowerBound.Type.Value = *(uchar *)(local_c8.Data + 0x18);
        local_b8.LowerBound._1_3_ = *(undefined3 *)(local_c8.Data + 0x19);
        local_b8.LowerBound.Value.FrameNumber.Value = *(int *)(local_c8.Data + 0x1c);
        local_b8.LowerBound.Value.SubFrame = (float)*(undefined8 *)(local_c8.Data + 0x20);
        local_b8.UpperBound._0_4_ =
             SUB84((ulonglong)*(undefined8 *)(local_c8.Data + 0x20) >> 0x20,0);
        local_b8.UpperBound.Value.FrameNumber.Value = (int)*(undefined8 *)(local_c8.Data + 0x28);
        local_b8.UpperBound.Value.SubFrame =
             (float)((ulonglong)*(undefined8 *)(local_c8.Data + 0x28) >> 0x20);
      }
      else {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3003204213271429745>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphCoreTimeStep.cpp"
                            ,0x271,"NewRanges.Num() == 2");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if ((TRange<FFrameTime> *)local_c8.Data != (TRange<FFrameTime> *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < (this->CurrentFrameData).TemporalSampleCount + -1);
  }
  pTVar6 = (TRange<FFrameTime> *)(pTVar2->AllocatorInstance).Data;
  if (((pTVar6 <= &local_b8) && (&local_b8 < pTVar6 + *piVar1)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar14 = (this->CurrentFrameData).TemporalRanges.ArrayNum;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->CurrentFrameData).TemporalRanges.ArrayNum = iVar14 + 1;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar7 + (longlong)iVar14 * 0x18;
  *(undefined8 *)pFVar3 = local_b8.LowerBound._0_8_;
  *(ulonglong *)(pFVar3 + 8) =
       CONCAT44(local_b8.UpperBound._0_4_,local_b8.LowerBound.Value.SubFrame);
  *(ulonglong *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10) =
       CONCAT44(local_b8.UpperBound.Value.SubFrame,local_b8.UpperBound.Value.FrameNumber.Value);
  return;
}

// operator() @ 15058b740

bool __thiscall
`UMovieGraphCoreTimeStep::TickProducingFrames'::__l165::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3003204213271429706>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3003204213271429706>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

