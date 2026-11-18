// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 4

// FLiveLinkAnimationFrameInterpolationProcessorWorker @ 14d010ae0

FLiveLinkAnimationFrameInterpolationProcessorWorker * __thiscall
ULiveLinkAnimationFrameInterpolationProcessor::FLiveLinkAnimationFrameInterpolationProcessorWorker::
FLiveLinkAnimationFrameInterpolationProcessorWorker
          (FLiveLinkAnimationFrameInterpolationProcessorWorker *this,bool param_1)

{
  this->field_0x8 = param_1;
  *(undefined ***)this =
       &
       ___7FLiveLinkAnimationFrameInterpolationProcessorWorker_ULiveLinkAnimationFrameInterpolationProcessor__6B_
  ;
  return this;
}

// GetRole @ 14d053540

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkAnimationFrameInterpolationProcessor::FLiveLinkAnimationFrameInterpolationProcessorWorker::
GetRole(FLiveLinkAnimationFrameInterpolationProcessorWorker *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// Interpolate @ 14d05dbb0

void __thiscall
ULiveLinkAnimationFrameInterpolationProcessor::FLiveLinkAnimationFrameInterpolationProcessorWorker::
Interpolate(FLiveLinkAnimationFrameInterpolationProcessorWorker *this,FQualifiedFrameTime *param_1,
           FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_2,
           TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
           *param_3,FLiveLinkSubjectFrameData *param_4,FLiveLinkInterpolationInfo *param_5)

{
  FQualifiedFrameTime local_18;
  
  local_18.Time = param_1->Time;
  local_18.Rate = param_1->Rate;
  LiveLinkAnimationBlendingUtil::Interpolate<FQualifiedFrameTime>
            (&local_18,param_2,param_3,param_4,(bool)this->field_0x8,param_5);
  return;
}

// Interpolate @ 14d05dc00

void __thiscall
ULiveLinkAnimationFrameInterpolationProcessor::FLiveLinkAnimationFrameInterpolationProcessorWorker::
Interpolate(FLiveLinkAnimationFrameInterpolationProcessorWorker *this,double param_1,
           FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_2,
           TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>
           *param_3,FLiveLinkSubjectFrameData *param_4,FLiveLinkInterpolationInfo *param_5)

{
  LiveLinkAnimationBlendingUtil::Interpolate<double>
            (param_1,param_2,param_3,param_4,(bool)this->field_0x8,param_5);
  return;
}

