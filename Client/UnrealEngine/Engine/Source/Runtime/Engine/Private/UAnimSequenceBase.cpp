// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 54

// AdvanceMarkerPhaseAsFollower @ 1473e17a0

void __thiscall
UAnimSequenceBase::AdvanceMarkerPhaseAsFollower
          (UAnimSequenceBase *this,FMarkerTickContext *param_1,float param_2,bool param_3,
          float *param_4,FMarkerPair *param_5,FMarkerPair *param_6,UMirrorDataTable *param_7)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequenceBase.h"
                     ,0xd6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AdvanceMarkerPhaseAsLeader @ 1473e17e0

void __thiscall
UAnimSequenceBase::AdvanceMarkerPhaseAsLeader
          (UAnimSequenceBase *this,bool param_1,float param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,float *param_4,FMarkerPair *param_5,
          FMarkerPair *param_6,TArray<FPassedMarker,TSizedDefaultAllocator<32>_> *param_7,
          UMirrorDataTable *param_8)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequenceBase.h"
                     ,0xd4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CanBeUsedInComposition @ 1473f1710

bool __thiscall UAnimSequenceBase::CanBeUsedInComposition(UAnimSequenceBase *this)

{
  return true;
}

// EnableRootMotionSettingFromMontage @ 1473f9bc0

void __thiscall
UAnimSequenceBase::EnableRootMotionSettingFromMontage
          (UAnimSequenceBase *this,bool param_1,Type param_2)

{
  return;
}

// EvaluateCurveData @ 1473f9ee0

float __thiscall
UAnimSequenceBase::EvaluateCurveData
          (UAnimSequenceBase *this,FName param_1,float param_2,bool param_3)

{
  float fVar1;
  double local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined1 local_27;
  
  local_50 = 0;
  local_60 = 0;
  local_54 = 0;
  local_68 = (double)param_2;
  local_5c = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_27 = 0;
  fVar1 = (float)(**(code **)(this->_padding_ + 0x2e0))(local_68,0,&local_68);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return fVar1;
}

// EvaluateCurveData @ 1473f9f90

void __thiscall
UAnimSequenceBase::EvaluateCurveData
          (UAnimSequenceBase *this,FBlendedCurve *param_1,float param_2,bool param_3)

{
  double local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined1 local_17;
  
  local_40 = 0;
  local_50 = 0;
  local_44 = 0;
  local_58 = (double)param_2;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_17 = 0;
  local_4c = 0;
  (**(code **)(this->_padding_ + 0x2f0))(local_58,0,&local_58);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// ExtractRootMotion @ 1473fa830

TTransform<double> * __thiscall
UAnimSequenceBase::ExtractRootMotion
          (UAnimSequenceBase *this,TTransform<double> *__return_storage_ptr__,
          FAnimExtractContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  return __return_storage_ptr__;
}

// ExtractRootMotion @ 1473fa890

TTransform<double> * __thiscall
UAnimSequenceBase::ExtractRootMotion
          (UAnimSequenceBase *this,TTransform<double> *__return_storage_ptr__,float param_1,
          float param_2,bool param_3)

{
  double local_58;
  undefined1 local_50;
  float local_4c;
  undefined4 local_48;
  undefined1 local_44;
  bool local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined1 local_17;
  
  local_40 = param_3;
  local_58 = (double)param_1;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_17 = 0;
  local_50 = 1;
  local_48 = 0;
  local_44 = 0;
  local_4c = param_2;
  (**(code **)(this->_padding_ + 0x348))(local_58,__return_storage_ptr__,&local_58);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return __return_storage_ptr__;
}

// ExtractRootMotionFromRange @ 1473faa60

TTransform<double> * __thiscall
UAnimSequenceBase::ExtractRootMotionFromRange
          (UAnimSequenceBase *this,TTransform<double> *__return_storage_ptr__,float param_1,
          float param_2)

{
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined1 local_17;
  
  local_40 = 0;
  local_50 = 0;
  local_44 = 0;
  local_58 = 0;
  local_4c = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_17 = 0;
  (**(code **)(this->_padding_ + 0x358))
            (0,__return_storage_ptr__,(double)param_1,(double)param_2,&local_58);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return __return_storage_ptr__;
}

// ExtractRootMotionFromRange @ 1473fab10

TTransform<double> * __thiscall
UAnimSequenceBase::ExtractRootMotionFromRange
          (UAnimSequenceBase *this,TTransform<double> *__return_storage_ptr__,double param_1,
          double param_2,FAnimExtractContext *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  return __return_storage_ptr__;
}

// ExtractRootTrackTransform @ 1473fb210

TTransform<double> * __thiscall
UAnimSequenceBase::ExtractRootTrackTransform
          (UAnimSequenceBase *this,TTransform<double> *__return_storage_ptr__,
          FAnimExtractContext *param_1,FBoneContainer *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  return __return_storage_ptr__;
}

// ExtractRootTrackTransform @ 1473fb270

TTransform<double> * __thiscall
UAnimSequenceBase::ExtractRootTrackTransform
          (UAnimSequenceBase *this,TTransform<double> *__return_storage_ptr__,float param_1,
          FBoneContainer *param_2)

{
  double local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined1 local_17;
  
  local_40 = 0;
  local_50 = 0;
  local_44 = 0;
  local_58 = (double)param_1;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_17 = 0;
  local_4c = 0;
  (**(code **)(this->_padding_ + 0x368))(local_58,0,&local_58);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return __return_storage_ptr__;
}

// GetAdditiveAnimType @ 1473fece0

EAdditiveAnimationType __thiscall UAnimSequenceBase::GetAdditiveAnimType(UAnimSequenceBase *this)

{
  return AAT_None;
}

// GetAnimationPose @ 147400090

void __thiscall
UAnimSequenceBase::GetAnimationPose
          (UAnimSequenceBase *this,FAnimationPoseData *param_1,FAnimExtractContext *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequenceBase.h"
             ,0xba,L"Pure virtual not implemented (%s)");
  return;
}

// GetEnableRootMotionSettingFromMontage @ 147401d80

bool __thiscall UAnimSequenceBase::GetEnableRootMotionSettingFromMontage(UAnimSequenceBase *this)

{
  return false;
}

// GetFirstMatchingPosFromMarkerSyncPos @ 147401e20

float __thiscall
UAnimSequenceBase::GetFirstMatchingPosFromMarkerSyncPos
          (UAnimSequenceBase *this,FMarkerSyncAnimPosition *param_1)

{
  return 0.0;
}

// GetMarkerIndicesForPosition @ 147402980

void __thiscall
UAnimSequenceBase::GetMarkerIndicesForPosition
          (UAnimSequenceBase *this,FMarkerSyncAnimPosition *param_1,bool param_2,
          FMarkerPair *param_3,FMarkerPair *param_4,float *param_5,UMirrorDataTable *param_6)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequenceBase.h"
                     ,0xdc,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetMarkerIndicesForTime @ 1474029c0

void __thiscall
UAnimSequenceBase::GetMarkerIndicesForTime
          (UAnimSequenceBase *this,float param_1,bool param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,FMarkerPair *param_4,
          FMarkerPair *param_5)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequenceBase.h"
                     ,0xd8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetMarkerSyncPositionFromMarkerIndicies @ 147402a00

FMarkerSyncAnimPosition * __thiscall
UAnimSequenceBase::GetMarkerSyncPositionFromMarkerIndicies
          (UAnimSequenceBase *this,FMarkerSyncAnimPosition *__return_storage_ptr__,int param_1,
          int param_2,float param_3,UMirrorDataTable *param_4)

{
  code *pcVar1;
  bool bVar2;
  FMarkerSyncAnimPosition *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequenceBase.h"
                     ,0xda,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMarkerSyncAnimPosition *)(*pcVar1)();
    return pFVar3;
  }
  (__return_storage_ptr__->PreviousMarkerName).ComparisonIndex = 0;
  (__return_storage_ptr__->PreviousMarkerName).Number = 0;
  (__return_storage_ptr__->NextMarkerName).ComparisonIndex = 0;
  (__return_storage_ptr__->NextMarkerName).Number = 0;
  __return_storage_ptr__->PositionBetweenMarkers = 0.0;
  return __return_storage_ptr__;
}

// GetNextMatchingPosFromMarkerSyncPos @ 147402f20

float __thiscall
UAnimSequenceBase::GetNextMatchingPosFromMarkerSyncPos
          (UAnimSequenceBase *this,FMarkerSyncAnimPosition *param_1,float *param_2)

{
  return 0.0;
}

// GetPrevMatchingPosFromMarkerSyncPos @ 147403360

float __thiscall
UAnimSequenceBase::GetPrevMatchingPosFromMarkerSyncPos
          (UAnimSequenceBase *this,FMarkerSyncAnimPosition *param_1,float *param_2)

{
  return 0.0;
}

// HasRootMotion @ 147406170

bool __thiscall UAnimSequenceBase::HasRootMotion(UAnimSequenceBase *this)

{
  return false;
}

// StaticClass @ 147419ae0

UClass * __cdecl UAnimSequenceBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequenceBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSequenceBase",
               &Z_Registration_Info_UClass_UAnimSequenceBase.InnerSingleton,
               StaticRegisterNativesUAnimSequenceBase,0xb0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimSequenceBase>,
               InternalVTableHelperCtorCaller<UAnimSequenceBase>,aFStackX_8,
               UAnimationAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequenceBase.InnerSingleton;
}

// UAnimSequenceBase @ 147531e90

UAnimSequenceBase * __thiscall
UAnimSequenceBase::UAnimSequenceBase(UAnimSequenceBase *this,FVTableHelper *param_1)

{
  UAnimationAsset::UAnimationAsset((UAnimationAsset *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->Notifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Notifies).ArrayNum = 0;
  (this->Notifies).ArrayMax = 0;
  (this->RawCurveData).FloatCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawCurveData).FloatCurves.ArrayNum = 0;
  (this->RawCurveData).FloatCurves.ArrayMax = 0;
  return this;
}

// UAnimSequenceBase @ 147531ef0

UAnimSequenceBase * __thiscall
UAnimSequenceBase::UAnimSequenceBase(UAnimSequenceBase *this,FObjectInitializer *param_1)

{
  UAnimationAsset::UAnimationAsset((UAnimationAsset *)this,param_1);
  this->RateScale = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  (this->Notifies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Notifies).ArrayNum = 0;
  (this->Notifies).ArrayMax = 0;
  (this->RawCurveData).FloatCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawCurveData).FloatCurves.ArrayNum = 0;
  (this->RawCurveData).FloatCurves.ArrayMax = 0;
  this->bLoop = false;
  return this;
}

// ~UAnimSequenceBase @ 1475339b0

void __thiscall UAnimSequenceBase::~UAnimSequenceBase(UAnimSequenceBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  DestructItems<FFloatCurve,int>
            ((FFloatCurve *)(this->RawCurveData).FloatCurves.AllocatorInstance.Data,
             (this->RawCurveData).FloatCurves.ArrayNum);
  pFVar1 = (this->RawCurveData).FloatCurves.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAnimNotifyEvent,int>
            ((FAnimNotifyEvent *)(this->Notifies).AllocatorInstance.Data,(this->Notifies).ArrayNum);
  pFVar1 = (this->Notifies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAnimationAsset::~UAnimationAsset((UAnimationAsset *)this);
  return;
}

// EvaluateCurveData @ 147550eb0

float __thiscall
UAnimSequenceBase::EvaluateCurveData
          (UAnimSequenceBase *this,FName param_1,FAnimExtractContext *param_2,bool param_3)

{
  FFloatCurve *this_00;
  float fVar1;
  
  this_00 = (FFloatCurve *)FRawCurveTracks::GetCurveData(&this->RawCurveData,param_1,RCT_Float);
  if (this_00 != (FFloatCurve *)0x0) {
    fVar1 = FFloatCurve::Evaluate(this_00,(float)param_2->CurrentTime);
    return fVar1;
  }
  return 0.0;
}

// EvaluateCurveData @ 147550f00

void __thiscall
UAnimSequenceBase::EvaluateCurveData
          (UAnimSequenceBase *this,FBlendedCurve *param_1,FAnimExtractContext *param_2,bool param_3)

{
  uint uVar1;
  
  if (!__CsvProfilerStat1034) {
    FCsvProfilerTrace::OutputInlineStat("EvaluateCurveData",_GCsvCategory_Animation.Index);
    __CsvProfilerStat1034 = true;
  }
  uVar1 = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat("EvaluateCurveData",_GCsvCategory_Animation.Index,"CSV_EvaluateCurveData")
  ;
  FRawCurveTracks::EvaluateCurveData(&this->RawCurveData,param_1,(float)param_2->CurrentTime);
  FCsvProfiler::EndStat("EvaluateCurveData",uVar1);
  return;
}

// GetAnimNotifies @ 147557520

void __thiscall
UAnimSequenceBase::GetAnimNotifies
          (UAnimSequenceBase *this,float *param_1,float *param_2,FAnimNotifyContext *param_3)

{
  char cVar1;
  ETypeAdvanceAnim EVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  char local_res8 [8];
  float local_78;
  float local_74;
  UAnimSequenceBase *local_70;
  char *local_68;
  float *local_60;
  float *local_58;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3d8))();
  if (cVar1 != '\0') {
    local_78 = *param_1;
    fVar8 = *param_2;
    local_res8[0] = fVar8 < 0.0;
    local_74 = local_78;
    fVar7 = (float)(**(code **)(this->_padding_ + 0x2c0))();
    uVar5 = 2;
    if ((0.0 < fVar7) && (fVar7 < (float)((uint)*param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff)))
    {
      uVar3 = 1000;
      if (((longlong)(fVar8 / fVar7) & 0xffffffffU) < 1000) {
        uVar3 = (longlong)(fVar8 / fVar7) & 0xffffffff;
      }
      uVar5 = 2;
      if (2 < uVar3) {
        uVar5 = (uint)uVar3;
      }
    }
    uVar4 = 0;
    if (uVar5 != 0) {
      do {
        EVar2 = FAnimationRuntime::AdvanceTime(false,fVar8,&local_78,fVar7);
        if (local_res8[0] == '\0') {
          bVar6 = local_78 < local_74;
        }
        else {
          bVar6 = local_74 < local_78;
        }
        if (bVar6) {
          local_68 = local_res8;
          local_60 = &local_74;
          local_58 = &local_78;
          local_70 = this;
          `UAnimSequenceBase::GetAnimNotifies'::__l10::<lambda_1>::operator()(&local_70);
        }
        (**(code **)(this->_padding_ + 0x2d8))(this,&local_74,&local_78,param_3);
        if (EVar2 != ETAA_Finished) {
          return;
        }
        if (param_3->TickRecord == (FAnimTickRecord *)0x0) {
          return;
        }
        if (param_3->TickRecord->bLooping == false) {
          return;
        }
        fVar8 = fVar8 - (local_78 - local_74);
        if (local_res8[0] == '\0') {
          local_78 = 0.0;
        }
        else {
          local_78 = (float)(**(code **)(this->_padding_ + 0x2c0))();
        }
        uVar4 = uVar4 + 1;
        local_74 = local_78;
      } while (uVar4 < uVar5);
    }
  }
  return;
}

// GetAnimNotifiesFromDeltaPositions @ 1475576e0

void __thiscall
UAnimSequenceBase::GetAnimNotifiesFromDeltaPositions
          (UAnimSequenceBase *this,float *param_1,float *param_2,FAnimNotifyContext *param_3)

{
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FAnimTickRecord *pFVar4;
  FScriptContainerElement *pFVar5;
  UMirrorDataTable *pUVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  FAnimNotifyContext *pFVar14;
  FAnimNotifyEvent *pFVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  bool local_res8 [8];
  float *local_res10;
  float *local_res18;
  FAnimNotifyContext *local_res20;
  bool local_88 [8];
  longlong local_80;
  
  iVar3 = (this->Notifies).ArrayNum;
  if (iVar3 != 0) {
    uVar16 = 0;
    uVar9 = 0;
    local_res10 = param_1;
    local_res18 = param_2;
    local_res20 = param_3;
    if (*param_1 < *param_2 || *param_1 == *param_2) {
      if (0 < iVar3) {
        local_80 = 0;
        do {
          lVar12 = local_80;
          uVar10 = uVar9;
          if ((int)uVar16 < (this->Notifies).ArrayNum) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar15 = (FAnimNotifyEvent *)((this->Notifies).AllocatorInstance.Data + lVar12);
          fVar18 = pFVar15->TriggerTimeOffset;
          fVar17 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)pFVar15,Absolute);
          fVar17 = fVar17 + fVar18;
          fVar18 = FAnimNotifyEvent::GetEndTriggerTime(pFVar15);
          pFVar14 = param_3;
          if ((fVar17 < *param_2 || fVar17 == *param_2) &&
             (*param_1 <= fVar18 && fVar18 != *param_1)) {
            pFVar4 = param_3->TickRecord;
            pTVar1 = &param_3->ActiveNotifies;
            iVar3 = (param_3->ActiveNotifies).ArrayMax;
            piVar2 = &(param_3->ActiveNotifies).ArrayMax;
            iVar11 = (param_3->ActiveNotifies).ArrayNum;
            if (pFVar4 == (FAnimTickRecord *)0x0) {
              if (iVar11 == iVar3) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,&pTVar1->AllocatorInstance,piVar2);
              }
              (param_3->ActiveNotifies).ArrayNum = iVar11 + 1;
              pFVar5 = (pTVar1->AllocatorInstance).Data;
              lVar12 = (longlong)iVar11;
              *(undefined8 *)(pFVar5 + lVar12 * 0x30) = 0;
              *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 8) = 0;
              *(FAnimNotifyEvent **)(pFVar5 + lVar12 * 0x30 + 0x10) = pFVar15;
              *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 0x18) = 0;
              *(UAnimSequenceBase **)(pFVar5 + lVar12 * 0x30 + 0x20) = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              *(undefined4 *)(pFVar5 + lVar12 * 0x30 + 0x28) = 0;
              pFVar5[lVar12 * 0x30 + 0x2c] = (FScriptContainerElement)0x0;
              pFVar14 = local_res20;
            }
            else {
              if (iVar11 == iVar3) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,&pTVar1->AllocatorInstance,piVar2);
              }
              pFVar5 = (pTVar1->AllocatorInstance).Data;
              (param_3->ActiveNotifies).ArrayNum = iVar11 + 1;
              lVar12 = (longlong)iVar11;
              pUVar6 = pFVar4->MirrorDataTable;
              *(undefined8 *)(pFVar5 + lVar12 * 0x30) = 0;
              *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 8) = 0;
              *(FAnimNotifyEvent **)(pFVar5 + lVar12 * 0x30 + 0x10) = pFVar15;
              *(UMirrorDataTable **)(pFVar5 + lVar12 * 0x30 + 0x18) = pUVar6;
              *(UAnimSequenceBase **)(pFVar5 + lVar12 * 0x30 + 0x20) = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              *(undefined4 *)(pFVar5 + lVar12 * 0x30 + 0x28) = 0;
              pFVar5[lVar12 * 0x30 + 0x2c] = (FScriptContainerElement)0x0;
              iVar3 = (param_3->ActiveNotifies).ArrayNum;
              uVar13 = iVar3 - 1;
              uVar10 = uVar9;
              if ((int)uVar13 < iVar3) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar14 = local_res20;
              FAnimNotifyEventReference::GatherTickRecordData
                        ((FAnimNotifyEventReference *)
                         ((pTVar1->AllocatorInstance).Data +
                         (longlong)((param_3->ActiveNotifies).ArrayNum + -1) * 0x30),
                         local_res20->TickRecord);
              param_3 = pFVar14;
            }
            param_2 = local_res18;
            param_1 = local_res10;
            if (fVar18 < *local_res18 || fVar18 == *local_res18) {
              iVar3 = (param_3->ActiveNotifies).ArrayNum;
              uVar13 = iVar3 - 1;
              uVar10 = uVar9;
              if ((int)uVar13 < iVar3) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_88[0] = true;
              FAnimNotifyEventReference::AddContextData<UE::Anim::FAnimNotifyEndDataContext,bool>
                        ((FAnimNotifyEventReference *)
                         ((param_3->ActiveNotifies).AllocatorInstance.Data +
                         (longlong)((param_3->ActiveNotifies).ArrayNum + -1) * 0x30),local_88);
              param_1 = local_res10;
            }
          }
          uVar16 = uVar16 + 1;
          local_80 = local_80 + 0xb8;
          param_3 = pFVar14;
        } while ((int)uVar16 < (this->Notifies).ArrayNum);
      }
    }
    else if (0 < iVar3) {
      local_80 = 0;
      do {
        lVar12 = local_80;
        uVar10 = 0;
        if ((int)uVar16 < (this->Notifies).ArrayNum) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar15 = (FAnimNotifyEvent *)((this->Notifies).AllocatorInstance.Data + lVar12);
        fVar18 = pFVar15->TriggerTimeOffset;
        fVar17 = FAnimLinkableElement::GetTime((FAnimLinkableElement *)pFVar15,Absolute);
        fVar17 = fVar17 + fVar18;
        fVar18 = FAnimNotifyEvent::GetEndTriggerTime(pFVar15);
        pFVar14 = param_3;
        if ((fVar17 < *param_1) && (*param_2 <= fVar18)) {
          pFVar4 = param_3->TickRecord;
          pTVar1 = &param_3->ActiveNotifies;
          iVar3 = (param_3->ActiveNotifies).ArrayMax;
          piVar2 = &(param_3->ActiveNotifies).ArrayMax;
          iVar11 = (param_3->ActiveNotifies).ArrayNum;
          if (pFVar4 == (FAnimTickRecord *)0x0) {
            if (iVar11 == iVar3) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&pTVar1->AllocatorInstance,piVar2);
            }
            (param_3->ActiveNotifies).ArrayNum = iVar11 + 1;
            pFVar5 = (pTVar1->AllocatorInstance).Data;
            lVar12 = (longlong)iVar11;
            *(undefined8 *)(pFVar5 + lVar12 * 0x30) = 0;
            *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 8) = 0;
            *(FAnimNotifyEvent **)(pFVar5 + lVar12 * 0x30 + 0x10) = pFVar15;
            *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 0x18) = 0;
            *(UAnimSequenceBase **)(pFVar5 + lVar12 * 0x30 + 0x20) = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            *(undefined4 *)(pFVar5 + lVar12 * 0x30 + 0x28) = 0;
            pFVar5[lVar12 * 0x30 + 0x2c] = (FScriptContainerElement)0x0;
            pFVar14 = local_res20;
          }
          else {
            if (iVar11 == iVar3) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&pTVar1->AllocatorInstance,piVar2);
            }
            pFVar5 = (pTVar1->AllocatorInstance).Data;
            (param_3->ActiveNotifies).ArrayNum = iVar11 + 1;
            lVar12 = (longlong)iVar11;
            pUVar6 = pFVar4->MirrorDataTable;
            *(undefined8 *)(pFVar5 + lVar12 * 0x30) = 0;
            *(undefined8 *)(pFVar5 + lVar12 * 0x30 + 8) = 0;
            *(FAnimNotifyEvent **)(pFVar5 + lVar12 * 0x30 + 0x10) = pFVar15;
            *(UMirrorDataTable **)(pFVar5 + lVar12 * 0x30 + 0x18) = pUVar6;
            *(UAnimSequenceBase **)(pFVar5 + lVar12 * 0x30 + 0x20) = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            *(undefined4 *)(pFVar5 + lVar12 * 0x30 + 0x28) = 0;
            pFVar5[lVar12 * 0x30 + 0x2c] = (FScriptContainerElement)0x0;
            iVar3 = (param_3->ActiveNotifies).ArrayNum;
            uVar13 = iVar3 - 1;
            uVar10 = uVar9;
            if ((int)uVar13 < iVar3) {
              uVar10 = ~uVar13 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar14 = local_res20;
            FAnimNotifyEventReference::GatherTickRecordData
                      ((FAnimNotifyEventReference *)
                       ((pTVar1->AllocatorInstance).Data +
                       (longlong)((param_3->ActiveNotifies).ArrayNum + -1) * 0x30),
                       local_res20->TickRecord);
            param_3 = pFVar14;
          }
          param_2 = local_res18;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          param_1 = local_res10;
          if (*local_res18 <= fVar17) {
            iVar3 = (param_3->ActiveNotifies).ArrayNum;
            uVar13 = iVar3 - 1;
            uVar10 = uVar9;
            if ((int)uVar13 < iVar3) {
              uVar10 = ~uVar13 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_res8[0] = true;
            FAnimNotifyEventReference::AddContextData<UE::Anim::FAnimNotifyEndDataContext,bool>
                      ((FAnimNotifyEventReference *)
                       ((param_3->ActiveNotifies).AllocatorInstance.Data +
                       (longlong)((param_3->ActiveNotifies).ArrayNum + -1) * 0x30),local_res8);
            param_1 = local_res10;
          }
        }
        uVar16 = uVar16 + 1;
        local_80 = local_80 + 0xb8;
        param_3 = pFVar14;
      } while ((int)uVar16 < (this->Notifies).ArrayNum);
    }
  }
  return;
}

// GetCurveData @ 14755b570

FRawCurveTracks * __thiscall UAnimSequenceBase::GetCurveData(UAnimSequenceBase *this)

{
  return &this->RawCurveData;
}

// GetNumberOfSampledKeys @ 14755dd00

int __thiscall UAnimSequenceBase::GetNumberOfSampledKeys(UAnimSequenceBase *this)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  undefined1 local_res8 [8];
  
  piVar1 = (int *)(**(code **)(this->_padding_ + 0x318))(this,local_res8);
  fVar3 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
  dVar6 = ((double)*piVar1 * (double)fVar3) / (double)piVar1[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar6;
  auVar5 = roundpd(in_XMM2,auVar5,1);
  dVar4 = auVar5._0_8_;
  dVar6 = dVar6 - dVar4;
  if (__real_41dfffffffc00000 <= dVar4) {
    dVar4 = __real_41dfffffffc00000;
  }
  if (dVar4 <= __real_c1e0000000000000) {
    dVar4 = __real_c1e0000000000000;
  }
  iVar2 = (int)dVar6;
  fVar7 = (float)dVar6 - (float)iVar2;
  fVar3 = fVar7;
  if ((0.0 < fVar7) && (fVar3 = ::FFrameTime::MaxSubframe, fVar7 <= ::FFrameTime::MaxSubframe)) {
    fVar3 = fVar7;
  }
  fVar7 = ::FFrameTime::MaxSubframe;
  if (fVar3 <= ::FFrameTime::MaxSubframe) {
    fVar7 = fVar3;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  iVar2 = (int)dVar4 + iVar2;
  if (__real_3f000000 <= fVar7) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

// GetPlayLength @ 14755e7b0

float __thiscall UAnimSequenceBase::GetPlayLength(UAnimSequenceBase *this)

{
  return this->SequenceLength;
}

// GetPrivateStaticClass @ 14755e910

UClass * __cdecl UAnimSequenceBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequenceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSequenceBase",
               &Z_Registration_Info_UClass_UAnimSequenceBase.InnerSingleton,
               StaticRegisterNativesUAnimSequenceBase,0xb0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimSequenceBase>,
               InternalVTableHelperCtorCaller<UAnimSequenceBase>,local_res8,
               UAnimationAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequenceBase.InnerSingleton;
}

// GetResourceSizeEx @ 147560050

void __thiscall
UAnimSequenceBase::GetResourceSizeEx(UAnimSequenceBase *this,FResourceSizeEx *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  UScriptStruct *pUVar4;
  int iVar5;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  lVar3 = (**(code **)(this->_padding_ + 0x300))(this);
  pUVar4 = FRawCurveTracks::StaticStruct();
  if (pUVar4 == (UScriptStruct *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4056023009599684510>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequenceBase.cpp"
                       ,0x62,"Struct");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar5 = (int)*(short *)((longlong)&pUVar4->_padding_ + 4);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)((int)pUVar4->_padding_ + -1 + iVar5 & -iVar5));
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)*(int *)(lVar3 + 0xc) * 0x90);
  }
  return;
}

// GetSamplingFrameRate @ 147562970

FFrameRate __thiscall UAnimSequenceBase::GetSamplingFrameRate(UAnimSequenceBase *this)

{
  UAnimationSettings *this_00;
  FFrameRate *pFVar1;
  FFrameRate in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this_00 = UAnimationSettings::Get();
      pFVar1 = UAnimationSettings::GetDefaultFrameRate(this_00);
      DefaultFrameRate = *pFVar1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FFrameRate *)in_RDX = DefaultFrameRate;
  return in_RDX;
}

// GetTimeAtFrame @ 147563150

float __thiscall UAnimSequenceBase::GetTimeAtFrame(UAnimSequenceBase *this,int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined1 local_res18 [16];
  
  fVar2 = (float)(**(code **)(this->_padding_ + 0x2c0))();
  piVar1 = (int *)(**(code **)(this->_padding_ + 0x318))(this,local_res18);
  fVar3 = ((float)piVar1[1] * 0.0 + (float)((longlong)piVar1[1] * (longlong)param_1)) /
          (float)*piVar1;
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return fVar3;
}

// HandleAssetPlayerTickedInternal @ 147563840

void __thiscall
UAnimSequenceBase::HandleAssetPlayerTickedInternal
          (UAnimSequenceBase *this,FAnimAssetTickContext *param_1,float param_2,float param_3,
          FAnimTickRecord *param_4,FAnimNotifyQueue *param_5)

{
  float local_res18 [2];
  float local_res20 [2];
  FAnimNotifyContext local_28;
  
  local_28.TickRecord = param_4;
  local_28.ActiveNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ActiveNotifies.ArrayNum = 0;
  local_28.ActiveNotifies.ArrayMax = 0;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  GetAnimNotifies(this,local_res18,local_res20,&local_28);
  FAnimNotifyQueue::AddAnimNotifies
            (param_5,param_1->bIsLeader,&local_28.ActiveNotifies,param_4->EffectiveBlendWeight);
  DestructItems<FAnimNotifyEventReference,int>
            ((FAnimNotifyEventReference *)local_28.ActiveNotifies.AllocatorInstance.Data,
             local_28.ActiveNotifies.ArrayNum);
  if ((FAnimNotifyEventReference *)local_28.ActiveNotifies.AllocatorInstance.Data !=
      (FAnimNotifyEventReference *)0x0) {
    FMemory::Free(local_28.ActiveNotifies.AllocatorInstance.Data);
  }
  return;
}

// HasCurveData @ 1475639d0

bool __thiscall UAnimSequenceBase::HasCurveData(UAnimSequenceBase *this,FName param_1,bool param_2)

{
  FAnimCurveBase *pFVar1;
  
  pFVar1 = FRawCurveTracks::GetCurveData(&this->RawCurveData,param_1,RCT_Float);
  return pFVar1 != (FAnimCurveBase *)0x0;
}

// IsNotifyAvailable @ 14756abf0

bool __thiscall UAnimSequenceBase::IsNotifyAvailable(UAnimSequenceBase *this)

{
  float fVar1;
  
  if ((this->Notifies).ArrayNum != 0) {
    fVar1 = (float)(**(code **)(this->_padding_ + 0x2c0))();
    if (0.0 < fVar1) {
      return true;
    }
  }
  return false;
}

// IsPostLoadThreadSafe @ 14756ac70

bool __thiscall UAnimSequenceBase::IsPostLoadThreadSafe(UAnimSequenceBase *this)

{
  return true;
}

// PostDuplicate @ 147571d80

void __thiscall UAnimSequenceBase::PostDuplicate(UAnimSequenceBase *this,Type param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147571d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xf8))(this,param_1 == PIE);
  return;
}

// PostLoad @ 147571da0

void __thiscall UAnimSequenceBase::PostLoad(UAnimSequenceBase *this)

{
  UAnimationAsset::PostLoad((UAnimationAsset *)this);
                    /* WARNING: Could not recover jumptable at 0x000147571db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))(this);
  return;
}

// RefreshCacheData @ 147572bf0

void __thiscall UAnimSequenceBase::RefreshCacheData(UAnimSequenceBase *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FAnimNotifyEvent,int,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_>
            ((FAnimNotifyEvent *)(this->Notifies).AllocatorInstance.Data,(this->Notifies).ArrayNum,
             local_res8[0],(TLess<void> *)local_res8);
  return;
}

// RemoveNotifies @ 147574bc0

void __thiscall UAnimSequenceBase::RemoveNotifies(UAnimSequenceBase *this)

{
  int *piVar1;
  int iVar2;
  FAnimNotifyEvent *pFVar3;
  
  iVar2 = (this->Notifies).ArrayNum;
  if (iVar2 != 0) {
    piVar1 = &(this->Notifies).ArrayMax;
    pFVar3 = (FAnimNotifyEvent *)(this->Notifies).AllocatorInstance.Data;
    if (*piVar1 < 0) {
      DestructItems<FAnimNotifyEvent,int>(pFVar3,iVar2);
      (this->Notifies).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb8,8,0,&(this->Notifies).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FAnimNotifyEvent,int>(pFVar3,iVar2);
      (this->Notifies).ArrayNum = 0;
    }
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    (**(code **)(this->_padding_ + 0x328))(this);
  }
  return;
}

// RemoveNotifies @ 147574c60

bool __thiscall
UAnimSequenceBase::RemoveNotifies
          (UAnimSequenceBase *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  
  bVar8 = false;
  uVar7 = (this->Notifies).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    this_00 = &this->Notifies;
    lVar9 = (longlong)(int)uVar7 * 0xb8;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Notifies).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar6 + (longlong)param_1->ArrayNum * 8;
      if (pFVar6 != pFVar1) {
        do {
          if (*(longlong *)pFVar6 == *(longlong *)((this_00->AllocatorInstance).Data + lVar9 + 0x3c)
             ) {
            if (bVar8 == false) {
              bVar8 = true;
            }
            uVar5 = 0;
            if ((int)uVar7 < (this->Notifies).ArrayNum) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar7);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xb8,8,&this_00->AllocatorInstance,(this->Notifies).ArrayNum,
                       &(this->Notifies).ArrayMax);
            break;
          }
          pFVar6 = pFVar6 + 8;
        } while (pFVar6 != pFVar1);
      }
      lVar9 = lVar9 + -0xb8;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
    if (bVar8 != false) {
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
      (**(code **)(this->_padding_ + 0x328))(this);
    }
  }
  return bVar8;
}

// Serialize @ 147578120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimSequenceBase::Serialize(UAnimSequenceBase *this,FArchive *param_1)

{
  int iVar1;
  FGuid local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  UAnimationAsset::Serialize((UAnimationAsset *)this,param_1);
  local_18 = FUE5MainStreamObjectVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (0x4b < iVar1) {
    local_18 = FUE5MainStreamObjectVersion::GUID;
    iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    if (iVar1 < 0x4e) {
      if (this == (UAnimSequenceBase *)0x0) {
        ::FString::FString((FString *)&local_18,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)this,(FString *)&local_18,(UObject *)0x0);
      }
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if ((void *)local_18._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_18._0_8_);
      }
    }
  }
  FRawCurveTracks::PostSerializeFixup(&this->RawCurveData,param_1);
  return;
}

// Serialize @ 147578230

void __thiscall
UAnimSequenceBase::Serialize(UAnimSequenceBase *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SortNotifies @ 14757a6d0

void __thiscall UAnimSequenceBase::SortNotifies(UAnimSequenceBase *this)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FAnimNotifyEvent,int,FIdentityFunctor,TDereferenceWrapper<FAnimNotifyEvent,TLess<void>_>_>
            ((FAnimNotifyEvent *)(this->Notifies).AllocatorInstance.Data,(this->Notifies).ArrayNum,
             local_res8[0],(TLess<void> *)local_res8);
  return;
}

// StaticRegisterNativesUAnimSequenceBase @ 14757abe0

void __cdecl UAnimSequenceBase::StaticRegisterNativesUAnimSequenceBase(void)

{
  return;
}

// TickAssetPlayer @ 14757b540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimSequenceBase::TickAssetPlayer
          (UAnimSequenceBase *this,FAnimTickRecord *param_1,FAnimNotifyQueue *param_2,
          FAnimAssetTickContext *param_3)

{
  FMarkerTickRecord *pFVar1;
  FDeltaTimeRecord *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res8 [2];
  float local_res10 [2];
  FName local_res20;
  FName local_c8;
  FName local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98 [7];
  
  local_res8[0] = *param_1->TimeAccumulator;
  if ((param_3->bResyncToSyncGroup != false) && (param_1->bIsEvaluator == false)) {
    fVar7 = param_3->AnimLengthRatio;
    local_res8[0] = (float)(**(code **)(this->_padding_ + 0x2c0))();
    local_res8[0] = local_res8[0] * fVar7;
  }
  fVar7 = local_res8[0];
  fVar8 = 0.0;
  fVar9 = this->RateScale * param_1->PlayRateMultiplier;
  local_res10[0] = local_res8[0];
  if (param_3->bIsLeader != false) {
    fVar8 = fVar9 * param_3->DeltaTime;
    param_3->LeaderDelta = fVar8;
    fVar9 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    param_3->PreviousAnimLengthRatio = fVar7 / fVar9;
    if (fVar8 == 0.0) {
      if ((param_1->bCanUseMarkerSync != false) && (param_3->bIsMarkerPositionValid != false)) {
        pFVar1 = param_1->MarkerTickRecord;
        iVar5 = (param_1->bLooping != false) - 2;
        if (((pFVar1->PreviousMarker).MarkerIndex <= iVar5) ||
           ((pFVar1->NextMarker).MarkerIndex <= iVar5)) {
          (**(code **)(this->_padding_ + 0x388))
                    (this,local_res8[0],param_1->bLooping,(param_3->MarkerTickContext).ValidMarkers,
                     pFVar1,&pFVar1->NextMarker);
        }
      }
    }
    else if ((param_1->bCanUseMarkerSync == false) || (param_3->bIsMarkerPositionValid == false)) {
      fVar9 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
      FAnimationRuntime::AdvanceTime(param_1->bLooping,fVar8,local_res8,fVar9);
      if (4 < (byte)LogAnimMarkerSync._0_1_) {
        local_res20 = (FName)this->_padding_;
        ::FName::ToString(&local_res20,&local_b8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      TickByMarkerAsLeader
                (this,param_1->MarkerTickRecord,&param_3->MarkerTickContext,local_res8,local_res10,
                 fVar8,param_1->bLooping,param_1->MirrorDataTable);
      fVar7 = local_res10[0];
    }
    fVar9 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    param_3->AnimLengthRatio = local_res8[0] / fVar9;
    goto LAB_14757b9d9;
  }
  if (param_1->bCanUseMarkerSync == false) {
    fVar6 = param_3->PreviousAnimLengthRatio;
    fVar7 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    fVar7 = fVar7 * fVar6;
    fVar6 = param_3->AnimLengthRatio;
    local_res10[0] = fVar7;
    local_res8[0] = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    local_res8[0] = local_res8[0] * fVar6;
    if (4 < (byte)LogAnimMarkerSync._0_1_) {
      local_c0 = (FName)this->_padding_;
      ::FName::ToString(&local_c0,local_98);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
      local_a8.Data.AllocatorInstance.Data = local_98[0].Data.AllocatorInstance.Data;
LAB_14757b97a:
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (((param_3->bIsMarkerPositionValid == false) ||
           ((param_3->MarkerTickContext).MarkerSyncStartPostion.PreviousMarkerName == (FName)0x0))
          || ((param_3->MarkerTickContext).MarkerSyncStartPostion.NextMarkerName == (FName)0x0)) {
    fVar8 = fVar9 * param_3->DeltaTime;
    fVar6 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    FAnimationRuntime::AdvanceTime(param_1->bLooping,fVar8,local_res8,fVar6);
    if (4 < (byte)LogAnimMarkerSync._0_1_) {
      local_c8 = (FName)this->_padding_;
      ::FName::ToString(&local_c8,&local_a8);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
      goto LAB_14757b97a;
    }
  }
  else {
    TickByMarkerAsFollower
              (this,param_1->MarkerTickRecord,&param_3->MarkerTickContext,local_res8,local_res10,
               param_3->LeaderDelta,param_1->bLooping,param_1->MirrorDataTable);
    fVar7 = local_res10[0];
  }
  if ((local_res8[0] != fVar7) && (fVar8 = local_res8[0] - fVar7, fVar8 * fVar9 < 0.0)) {
    fVar6 = __real_3f800000;
    if ((fVar9 <= 0.0) && (fVar6 = 0.0, fVar9 < 0.0)) {
      fVar6 = __real_bf800000;
    }
    fVar9 = (float)(**(code **)(this->_padding_ + 0x2c0))(this);
    fVar8 = fVar8 + fVar9 * fVar6;
  }
LAB_14757b9d9:
  *param_1->TimeAccumulator = local_res8[0];
  if ((param_1->DeltaTimeRecord == (FDeltaTimeRecord *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance.DeltaTimeRecord",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequenceBase.cpp"
                         ,0x24e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_1->DeltaTimeRecord;
  pFVar2->Previous = fVar7;
  pFVar2->Delta = fVar8;
  pFVar2->bPreviousIsValid = true;
  (**(code **)(this->_padding_ + 0x338))(this,param_3,fVar7,fVar8,param_1,param_2);
  return;
}

// TickByMarkerAsFollower @ 1475800f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimSequenceBase::TickByMarkerAsFollower
          (UAnimSequenceBase *this,FMarkerTickRecord *param_1,FMarkerTickContext *param_2,
          float *param_3,float *param_4,float param_5,bool param_6,UMirrorDataTable *param_7)

{
  FMarkerPair *pFVar1;
  UMirrorDataTable *pUVar2;
  FString local_58;
  FString local_48 [3];
  
  pUVar2 = param_7;
  pFVar1 = &param_1->NextMarker;
  if (((param_1->PreviousMarker).MarkerIndex <= (int)(param_6 - 2)) ||
     (pFVar1->MarkerIndex <= (int)(param_6 - 2))) {
    (**(code **)(this->_padding_ + 0x398))
              (this,&param_2->MarkerSyncStartPostion,param_6,param_1,pFVar1,param_3,param_7);
  }
  *param_4 = *param_3;
  (**(code **)(this->_padding_ + 0x380))(this,param_2,param_5,param_6,param_3,param_1,pFVar1,pUVar2)
  ;
  if (4 < (byte)LogAnimMarkerSync._0_1_) {
    FMarkerTickContext::ToString(param_2,local_48);
    param_4 = (float *)this->_padding_;
    ::FName::ToString((FName *)&param_4,&local_58);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// TickByMarkerAsLeader @ 1475802c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimSequenceBase::TickByMarkerAsLeader
          (UAnimSequenceBase *this,FMarkerTickRecord *param_1,FMarkerTickContext *param_2,
          float *param_3,float *param_4,float param_5,bool param_6,UMirrorDataTable *param_7)

{
  FMarkerPair *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FName FVar5;
  bool bVar6;
  UMirrorDataTable *pUVar7;
  uint *puVar8;
  FName *pFVar9;
  FString local_78;
  FString local_68 [4];
  
  bVar6 = param_6;
  pFVar1 = &param_1->NextMarker;
  if (((param_1->PreviousMarker).MarkerIndex <= (int)(param_6 - 2)) ||
     (pFVar1->MarkerIndex <= (int)(param_6 - 2))) {
    if (((param_2->MarkerSyncStartPostion).PreviousMarkerName == (FName)0x0) ||
       ((param_2->MarkerSyncStartPostion).NextMarkerName == (FName)0x0)) {
      (**(code **)(this->_padding_ + 0x388))
                (this,*param_3,param_6,param_2->ValidMarkers,param_1,pFVar1);
    }
    else {
      (**(code **)(this->_padding_ + 0x398))
                (this,&param_2->MarkerSyncStartPostion,param_6,param_1,pFVar1,param_3,param_7);
    }
  }
  puVar8 = (uint *)(**(code **)(this->_padding_ + 0x390))
                             (this,local_68,(param_1->PreviousMarker).MarkerIndex,
                              pFVar1->MarkerIndex,*param_3,param_7);
  pUVar7 = param_7;
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  (param_2->MarkerSyncStartPostion).PreviousMarkerName.ComparisonIndex.Value = *puVar8;
  (param_2->MarkerSyncStartPostion).PreviousMarkerName.Number = uVar2;
  (param_2->MarkerSyncStartPostion).NextMarkerName.ComparisonIndex.Value = uVar3;
  (param_2->MarkerSyncStartPostion).NextMarkerName.Number = uVar4;
  (param_2->MarkerSyncStartPostion).PositionBetweenMarkers = (float)puVar8[4];
  *param_4 = *param_3;
  (**(code **)(this->_padding_ + 0x378))
            (this,bVar6,param_5,param_2->ValidMarkers,param_3,param_1,pFVar1,param_2,param_7);
  pFVar9 = (FName *)(**(code **)(this->_padding_ + 0x390))
                              (this,local_68,(param_1->PreviousMarker).MarkerIndex,
                               pFVar1->MarkerIndex,*param_3,pUVar7);
  FVar5 = pFVar9[1];
  (param_2->MarkerSyncEndPostion).PreviousMarkerName = *pFVar9;
  (param_2->MarkerSyncEndPostion).NextMarkerName = FVar5;
  (param_2->MarkerSyncEndPostion).PositionBetweenMarkers = (float)pFVar9[2].ComparisonIndex.Value;
  if (4 < (byte)LogAnimMarkerSync._0_1_) {
    FMarkerTickContext::ToString(param_2,local_68);
    param_4 = (float *)this->_padding_;
    ::FName::ToString((FName *)&param_4,&local_78);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 15050ba10

bool __thiscall `UAnimSequenceBase::GetAnimNotifies'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_58;
  FString local_48 [3];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4056023009599684197>);
  if (bVar4) {
    if (*(longlong *)(*(longlong *)this + 0x38) == 0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)(*(longlong *)this + 0x38) + 0x18);
      ::FName::ToString(&local_res10,&local_58);
    }
    local_res18 = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(&local_res18,local_48);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4056023009599684197>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15050bb4d;
    }
  }
  bVar4 = false;
LAB_15050bb4d:
  if ((bVar2) && (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

