// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 5

// FMoviePipelineFrameOutputState @ 14dcae6c0

FMoviePipelineFrameOutputState * __thiscall
FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState(FMoviePipelineFrameOutputState *this)

{
  undefined1 *puVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FMoviePipelineFrameOutputState *pFVar6;
  uint uStack_54;
  uint uStack_3c;
  uint uStack_24;
  
  this->TemporalSampleIndex = -1;
  this->TemporalSampleCount = 0;
  this_00 = &this->FileMetadata;
  this->OutputFrameNumber = -1;
  puVar1 = &(this->FileMetadata).field_0xc;
  *(undefined4 *)puVar1 = 0;
  (this->CameraName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraName).Data.ArrayNum = 0;
  (this->CameraName).Data.ArrayMax = 0;
  (this->CameraNameOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraNameOverride).Data.ArrayNum = 0;
  (this->CameraNameOverride).Data.ArrayMax = 0;
  (this->ShotName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShotName).Data.ArrayNum = 0;
  (this->ShotName).Data.ArrayMax = 0;
  (this->SourceTimeCode).Hours = 0;
  (this->SourceTimeCode).Minutes = 0;
  (this->SourceTimeCode).Seconds = 0;
  (this->SourceTimeCode).Frames = 0;
  (this->SourceTimeCode).Subframe = 0.0;
  (this->SourceTimeCode).bDropFrameFormat = false;
  (this->EffectiveTimeCode).Hours = 0;
  (this->EffectiveTimeCode).Minutes = 0;
  (this->EffectiveTimeCode).Seconds = 0;
  (this->EffectiveTimeCode).Frames = 0;
  (this->EffectiveTimeCode).Subframe = 0.0;
  (this->EffectiveTimeCode).bDropFrameFormat = false;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x20 = 0;
  this->ShotCount = 0;
  (this->TimeData).MotionBlurFraction = 0.0;
  (this->TimeData).FrameDeltaTime = 0.0;
  (this->TimeData).WorldSeconds = 0.0;
  (this->TimeData).TimeDilation = 1.0;
  *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  iVar2 = this->OutputFrameNumber;
  (this->CurrentShotSourceTimeCode).Hours = 0;
  (this->CurrentShotSourceTimeCode).Minutes = 0;
  (this->CurrentShotSourceTimeCode).Seconds = 0;
  (this->CurrentShotSourceTimeCode).Frames = 0;
  (this->CurrentShotSourceTimeCode).Subframe = 0.0;
  (this->CurrentShotSourceTimeCode).bDropFrameFormat = false;
  if (iVar2 != -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputFrameNumber == -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
                       ,0x29a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMoviePipelineFrameOutputState *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (this->TemporalSampleIndex != -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TemporalSampleIndex == -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MovieRenderPipelineDataTypes.h"
                       ,0x29d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMoviePipelineFrameOutputState *)(*pcVar3)();
      return pFVar6;
    }
  }
  (this->TimeData).MotionBlurFraction = 0.0;
  (this->TimeData).FrameDeltaTime = 0.0;
  (this->TimeData).TimeDilation = 1.0;
  (this->SourceTimeCode).Hours = 0;
  (this->SourceTimeCode).Minutes = 0;
  (this->SourceTimeCode).Seconds = 0;
  (this->SourceTimeCode).Frames = 0;
  this->bSkipRendering = false;
  this->bCaptureRendering = false;
  (this->EffectiveTimeCode).Hours = 0;
  (this->EffectiveTimeCode).Minutes = 0;
  (this->EffectiveTimeCode).Seconds = 0;
  (this->EffectiveTimeCode).Frames = 0;
  this->bDiscardRenderResult = false;
  (this->CurrentShotSourceTimeCode).Hours = 0;
  (this->CurrentShotSourceTimeCode).Minutes = 0;
  (this->CurrentShotSourceTimeCode).Seconds = 0;
  (this->CurrentShotSourceTimeCode).Frames = 0;
  this->SourceFrameNumber = 0;
  this->EffectiveFrameNumber = 0;
  this->CurrentShotSourceFrameNumber = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  lVar4 = (ulonglong)uStack_54 << 0x20;
  (this->SourceTimeCode).Subframe = (float)(int)lVar4;
  (this->SourceTimeCode).bDropFrameFormat = (bool)(char)((ulonglong)lVar4 >> 0x20);
  *(int3 *)&(this->SourceTimeCode).field_0x15 = (int3)((ulonglong)lVar4 >> 0x28);
  uStack_3c = uStack_3c & 0xffffff00;
  lVar4 = (ulonglong)uStack_3c << 0x20;
  (this->EffectiveTimeCode).Subframe = (float)(int)lVar4;
  (this->EffectiveTimeCode).bDropFrameFormat = (bool)(char)((ulonglong)lVar4 >> 0x20);
  *(int3 *)&(this->EffectiveTimeCode).field_0x15 = (int3)((ulonglong)lVar4 >> 0x28);
  uStack_24 = uStack_24 & 0xffffff00;
  lVar4 = (ulonglong)uStack_24 << 0x20;
  (this->CurrentShotSourceTimeCode).Subframe = (float)(int)lVar4;
  (this->CurrentShotSourceTimeCode).bDropFrameFormat = (bool)(char)((ulonglong)lVar4 >> 0x20);
  *(int3 *)&(this->CurrentShotSourceTimeCode).field_0x15 = (int3)((ulonglong)lVar4 >> 0x28);
  if (*(int *)&(this->FileMetadata).field_0x8 != *(int *)&(this->FileMetadata).field_0x34) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)this_00);
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->FileMetadata).field_0x8);
    *(undefined4 *)&(this->FileMetadata).field_0x8 = 0;
    if (*(int *)puVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
    *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  }
  this->ShotOutputFrameNumber = -1;
  this->ShotSamplesRendered = 0;
  this->ShotIndex = 0;
  this->TemporalSampleCount = 0;
  ::FString::Reset(&this->CameraName,0);
  ::FString::Reset(&this->ShotName,0);
  return this;
}

// ~FMoviePipelineFrameOutputState @ 14dcb2520

void __thiscall
FMoviePipelineFrameOutputState::~FMoviePipelineFrameOutputState
          (FMoviePipelineFrameOutputState *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileMetadata).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileMetadata);
  pFVar2 = (this->ShotName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CameraNameOverride).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CameraName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// FMoviePipelineFrameOutputState @ 14dd6a520

FMoviePipelineFrameOutputState * __thiscall
FMoviePipelineFrameOutputState::FMoviePipelineFrameOutputState
          (FMoviePipelineFrameOutputState *this,FMoviePipelineFrameOutputState *param_1)

{
  double dVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined3 uVar8;
  
  this->OutputFrameNumber = param_1->OutputFrameNumber;
  this->ShotIndex = param_1->ShotIndex;
  this->ShotCount = param_1->ShotCount;
  this->TemporalSampleIndex = param_1->TemporalSampleIndex;
  this->TemporalSampleCount = param_1->TemporalSampleCount;
  this->ShotOutputFrameNumber = param_1->ShotOutputFrameNumber;
  this->ShotSamplesRendered = param_1->ShotSamplesRendered;
  uVar2 = *(undefined4 *)&(param_1->TimeData).field_0x4;
  dVar1 = (param_1->TimeData).FrameDeltaTime;
  (this->TimeData).MotionBlurFraction = (param_1->TimeData).MotionBlurFraction;
  *(undefined4 *)&(this->TimeData).field_0x4 = uVar2;
  (this->TimeData).FrameDeltaTime = dVar1;
  fVar3 = (param_1->TimeData).TimeDilation;
  uVar2 = *(undefined4 *)&(param_1->TimeData).field_0x1c;
  (this->TimeData).WorldSeconds = (param_1->TimeData).WorldSeconds;
  (this->TimeData).TimeDilation = fVar3;
  *(undefined4 *)&(this->TimeData).field_0x1c = uVar2;
  ::FString::FString(&this->CameraName,&param_1->CameraName);
  ::FString::FString(&this->CameraNameOverride,&param_1->CameraNameOverride);
  ::FString::FString(&this->ShotName,&param_1->ShotName);
  this->bSkipRendering = param_1->bSkipRendering;
  this->bCaptureRendering = param_1->bCaptureRendering;
  this->bDiscardRenderResult = param_1->bDiscardRenderResult;
  this->SourceFrameNumber = param_1->SourceFrameNumber;
  iVar4 = (param_1->SourceTimeCode).Minutes;
  iVar5 = (param_1->SourceTimeCode).Seconds;
  iVar6 = (param_1->SourceTimeCode).Frames;
  (this->SourceTimeCode).Hours = (param_1->SourceTimeCode).Hours;
  (this->SourceTimeCode).Minutes = iVar4;
  (this->SourceTimeCode).Seconds = iVar5;
  (this->SourceTimeCode).Frames = iVar6;
  bVar7 = (param_1->SourceTimeCode).bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->SourceTimeCode).field_0x15;
  (this->SourceTimeCode).Subframe = (param_1->SourceTimeCode).Subframe;
  (this->SourceTimeCode).bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->SourceTimeCode).field_0x15 = uVar8;
  this->EffectiveFrameNumber = param_1->EffectiveFrameNumber;
  iVar4 = (param_1->EffectiveTimeCode).Minutes;
  iVar5 = (param_1->EffectiveTimeCode).Seconds;
  iVar6 = (param_1->EffectiveTimeCode).Frames;
  (this->EffectiveTimeCode).Hours = (param_1->EffectiveTimeCode).Hours;
  (this->EffectiveTimeCode).Minutes = iVar4;
  (this->EffectiveTimeCode).Seconds = iVar5;
  (this->EffectiveTimeCode).Frames = iVar6;
  bVar7 = (param_1->EffectiveTimeCode).bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->EffectiveTimeCode).field_0x15;
  (this->EffectiveTimeCode).Subframe = (param_1->EffectiveTimeCode).Subframe;
  (this->EffectiveTimeCode).bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->EffectiveTimeCode).field_0x15 = uVar8;
  *(undefined8 *)&(this->FileMetadata).field_0x0 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->FileMetadata,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->FileMetadata);
  this->CurrentShotSourceFrameNumber = param_1->CurrentShotSourceFrameNumber;
  iVar4 = (param_1->CurrentShotSourceTimeCode).Minutes;
  iVar5 = (param_1->CurrentShotSourceTimeCode).Seconds;
  iVar6 = (param_1->CurrentShotSourceTimeCode).Frames;
  (this->CurrentShotSourceTimeCode).Hours = (param_1->CurrentShotSourceTimeCode).Hours;
  (this->CurrentShotSourceTimeCode).Minutes = iVar4;
  (this->CurrentShotSourceTimeCode).Seconds = iVar5;
  (this->CurrentShotSourceTimeCode).Frames = iVar6;
  bVar7 = (param_1->CurrentShotSourceTimeCode).bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->CurrentShotSourceTimeCode).field_0x15;
  (this->CurrentShotSourceTimeCode).Subframe = (param_1->CurrentShotSourceTimeCode).Subframe;
  (this->CurrentShotSourceTimeCode).bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->CurrentShotSourceTimeCode).field_0x15 = uVar8;
  this->CameraIndex = param_1->CameraIndex;
  return this;
}

// operator= @ 14dd6c650

FMoviePipelineFrameOutputState * __thiscall
FMoviePipelineFrameOutputState::operator=
          (FMoviePipelineFrameOutputState *this,FMoviePipelineFrameOutputState *param_1)

{
  double dVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined3 uVar8;
  
  this->OutputFrameNumber = param_1->OutputFrameNumber;
  this->ShotIndex = param_1->ShotIndex;
  this->ShotCount = param_1->ShotCount;
  this->TemporalSampleIndex = param_1->TemporalSampleIndex;
  this->TemporalSampleCount = param_1->TemporalSampleCount;
  this->ShotOutputFrameNumber = param_1->ShotOutputFrameNumber;
  this->ShotSamplesRendered = param_1->ShotSamplesRendered;
  uVar2 = *(undefined4 *)&(param_1->TimeData).field_0x4;
  dVar1 = (param_1->TimeData).FrameDeltaTime;
  (this->TimeData).MotionBlurFraction = (param_1->TimeData).MotionBlurFraction;
  *(undefined4 *)&(this->TimeData).field_0x4 = uVar2;
  (this->TimeData).FrameDeltaTime = dVar1;
  fVar3 = (param_1->TimeData).TimeDilation;
  uVar2 = *(undefined4 *)&(param_1->TimeData).field_0x1c;
  (this->TimeData).WorldSeconds = (param_1->TimeData).WorldSeconds;
  (this->TimeData).TimeDilation = fVar3;
  *(undefined4 *)&(this->TimeData).field_0x1c = uVar2;
  ::FString::operator=(&this->CameraName,&param_1->CameraName);
  ::FString::operator=(&this->CameraNameOverride,&param_1->CameraNameOverride);
  ::FString::operator=(&this->ShotName,&param_1->ShotName);
  this->bSkipRendering = param_1->bSkipRendering;
  this->bCaptureRendering = param_1->bCaptureRendering;
  this->bDiscardRenderResult = param_1->bDiscardRenderResult;
  this->SourceFrameNumber = param_1->SourceFrameNumber;
  iVar4 = (param_1->SourceTimeCode).Minutes;
  iVar5 = (param_1->SourceTimeCode).Seconds;
  iVar6 = (param_1->SourceTimeCode).Frames;
  (this->SourceTimeCode).Hours = (param_1->SourceTimeCode).Hours;
  (this->SourceTimeCode).Minutes = iVar4;
  (this->SourceTimeCode).Seconds = iVar5;
  (this->SourceTimeCode).Frames = iVar6;
  bVar7 = (param_1->SourceTimeCode).bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->SourceTimeCode).field_0x15;
  (this->SourceTimeCode).Subframe = (param_1->SourceTimeCode).Subframe;
  (this->SourceTimeCode).bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->SourceTimeCode).field_0x15 = uVar8;
  this->EffectiveFrameNumber = param_1->EffectiveFrameNumber;
  iVar4 = (param_1->EffectiveTimeCode).Minutes;
  iVar5 = (param_1->EffectiveTimeCode).Seconds;
  iVar6 = (param_1->EffectiveTimeCode).Frames;
  (this->EffectiveTimeCode).Hours = (param_1->EffectiveTimeCode).Hours;
  (this->EffectiveTimeCode).Minutes = iVar4;
  (this->EffectiveTimeCode).Seconds = iVar5;
  (this->EffectiveTimeCode).Frames = iVar6;
  bVar7 = (param_1->EffectiveTimeCode).bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->EffectiveTimeCode).field_0x15;
  (this->EffectiveTimeCode).Subframe = (param_1->EffectiveTimeCode).Subframe;
  (this->EffectiveTimeCode).bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->EffectiveTimeCode).field_0x15 = uVar8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->FileMetadata,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->FileMetadata);
  this->CurrentShotSourceFrameNumber = param_1->CurrentShotSourceFrameNumber;
  iVar4 = (param_1->CurrentShotSourceTimeCode).Minutes;
  iVar5 = (param_1->CurrentShotSourceTimeCode).Seconds;
  iVar6 = (param_1->CurrentShotSourceTimeCode).Frames;
  (this->CurrentShotSourceTimeCode).Hours = (param_1->CurrentShotSourceTimeCode).Hours;
  (this->CurrentShotSourceTimeCode).Minutes = iVar4;
  (this->CurrentShotSourceTimeCode).Seconds = iVar5;
  (this->CurrentShotSourceTimeCode).Frames = iVar6;
  bVar7 = (param_1->CurrentShotSourceTimeCode).bDropFrameFormat;
  uVar8 = *(undefined3 *)&(param_1->CurrentShotSourceTimeCode).field_0x15;
  (this->CurrentShotSourceTimeCode).Subframe = (param_1->CurrentShotSourceTimeCode).Subframe;
  (this->CurrentShotSourceTimeCode).bDropFrameFormat = bVar7;
  *(undefined3 *)&(this->CurrentShotSourceTimeCode).field_0x15 = uVar8;
  this->CameraIndex = param_1->CameraIndex;
  return this;
}

// ResetPerFrameData @ 14dd9b850

void __thiscall
FMoviePipelineFrameOutputState::ResetPerFrameData(FMoviePipelineFrameOutputState *this)

{
  longlong lVar1;
  uint uVar2;
  uint uStack_14;
  
  (this->TimeData).TimeDilation = 1.0;
  (this->TimeData).MotionBlurFraction = 0.0;
  (this->TimeData).FrameDeltaTime = 0.0;
  uVar2 = uStack_14 >> 8;
  uStack_14 = uVar2 << 8;
  lVar1 = (ulonglong)uStack_14 << 0x20;
  uStack_14 = uVar2 << 8;
  (this->SourceTimeCode).Hours = 0;
  (this->SourceTimeCode).Minutes = 0;
  (this->SourceTimeCode).Seconds = 0;
  (this->SourceTimeCode).Frames = 0;
  this->bSkipRendering = false;
  this->bCaptureRendering = false;
  (this->SourceTimeCode).Subframe = (float)(int)lVar1;
  (this->SourceTimeCode).bDropFrameFormat = (bool)(char)((ulonglong)lVar1 >> 0x20);
  *(int3 *)&(this->SourceTimeCode).field_0x15 = (int3)((ulonglong)lVar1 >> 0x28);
  lVar1 = (ulonglong)uStack_14 << 0x20;
  (this->EffectiveTimeCode).Hours = 0;
  (this->EffectiveTimeCode).Minutes = 0;
  (this->EffectiveTimeCode).Seconds = 0;
  (this->EffectiveTimeCode).Frames = 0;
  (this->EffectiveTimeCode).Subframe = (float)(int)lVar1;
  (this->EffectiveTimeCode).bDropFrameFormat = (bool)(char)((ulonglong)lVar1 >> 0x20);
  *(int3 *)&(this->EffectiveTimeCode).field_0x15 = (int3)((ulonglong)lVar1 >> 0x28);
  (this->CurrentShotSourceTimeCode).Hours = 0;
  (this->CurrentShotSourceTimeCode).Minutes = 0;
  (this->CurrentShotSourceTimeCode).Seconds = 0;
  (this->CurrentShotSourceTimeCode).Frames = 0;
  uStack_14 = uVar2 << 8;
  lVar1 = (ulonglong)uStack_14 << 0x20;
  (this->CurrentShotSourceTimeCode).Subframe = (float)(int)lVar1;
  (this->CurrentShotSourceTimeCode).bDropFrameFormat = (bool)(char)((ulonglong)lVar1 >> 0x20);
  *(int3 *)&(this->CurrentShotSourceTimeCode).field_0x15 = (int3)((ulonglong)lVar1 >> 0x28);
  this->bDiscardRenderResult = false;
  this->SourceFrameNumber = 0;
  this->EffectiveFrameNumber = 0;
  this->CurrentShotSourceFrameNumber = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)&this->FileMetadata);
  return;
}

