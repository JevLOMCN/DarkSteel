// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// ~FSplineFieldOfViewCameraNodeEvaluator @ 14d600440

void __thiscall
UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator::~FSplineFieldOfViewCameraNodeEvaluator
          (FSplineFieldOfViewCameraNodeEvaluator *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FSplineFieldOfViewCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1 = (this->FieldOfViewSpline).CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// GetTypeID @ 14d61e710

FCameraObjectTypeID * __thiscall
UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator::GetTypeID
          (FSplineFieldOfViewCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621550

bool __thiscall
UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator::IsKindOf
          (FSplineFieldOfViewCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d628c00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator::OnInitialize
          (FSplineFieldOfViewCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1
          ,FCameraNodeEvaluationResult *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  longlong lVar6;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  lVar6 = 0;
  lVar5 = lVar6;
  if (this->_padding_ != 0) {
    pUVar4 = USplineFieldOfViewCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      lVar5 = this->_padding_;
    }
  }
  (this->SplineInputReader).DefaultValuePtr = (float *)(lVar5 + 0x38);
  (this->SplineInputReader).VariableID.Value = *(uint *)(lVar5 + 0x3c);
  if (this->_padding_ != 0) {
    pUVar4 = USplineFieldOfViewCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      lVar6 = this->_padding_;
    }
  }
  bVar3 = FCameraSingleCurve::HasAnyData((FCameraSingleCurve *)(lVar6 + 0x48));
  fVar2 = __real_42f00000;
  fVar1 = __real_38d1b717;
  this->bHasAnyValues = bVar3;
  FRichCurve::CompressCurve((FRichCurve *)(lVar6 + 0x48),&this->FieldOfViewSpline,fVar1,fVar2);
  return;
}

// OnRun @ 14d62c5d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator::OnRun
          (FSplineFieldOfViewCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  undefined1 *puVar1;
  float *pfVar2;
  float fVar3;
  
  if (this->bHasAnyValues != false) {
    pfVar2 = TCameraParameterReader<float>::Get(&this->SplineInputReader,&param_2->VariableTable);
    fVar3 = FCompressedRichCurve::Eval(&this->FieldOfViewSpline,*pfVar2,0.0);
    if (fVar3 != (param_2->CameraPose).FieldOfView) {
      (param_2->CameraPose).ChangedFlags.FieldOfView = true;
      (param_2->CameraPose).FieldOfView = fVar3;
    }
    if (__real_bf800000 != (param_2->CameraPose).FocalLength) {
      (param_2->CameraPose).ChangedFlags.FocalLength = true;
      (param_2->CameraPose).FocalLength = -1.0;
    }
  }
  return;
}

// RebuildCurve @ 14d62eb00

void __thiscall
UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator::RebuildCurve
          (FSplineFieldOfViewCameraNodeEvaluator *this)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  
  if (this->_padding_ != 0) {
    pUVar4 = USplineFieldOfViewCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      lVar5 = this->_padding_;
      goto LAB_14d62eb31;
    }
  }
  lVar5 = 0;
LAB_14d62eb31:
  bVar3 = FCameraSingleCurve::HasAnyData((FCameraSingleCurve *)(lVar5 + 0x48));
  fVar2 = __real_42f00000;
  fVar1 = __real_38d1b717;
  this->bHasAnyValues = bVar3;
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x48),&this->FieldOfViewSpline,fVar1,fVar2);
  return;
}

