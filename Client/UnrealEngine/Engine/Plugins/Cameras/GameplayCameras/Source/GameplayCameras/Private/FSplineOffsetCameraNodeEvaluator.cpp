// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// FSplineOffsetCameraNodeEvaluator @ 14d5fcfe0

FSplineOffsetCameraNodeEvaluator * __thiscall
UE::Cameras::FSplineOffsetCameraNodeEvaluator::FSplineOffsetCameraNodeEvaluator
          (FSplineOffsetCameraNodeEvaluator *this)

{
  (this->SplineInputReader).VariableID.Value = 0xffffffff;
  this->_padding_ = (longlong)&___7FSplineOffsetCameraNodeEvaluator_Cameras_UE__6B_;
  this->_padding_ = 0;
  (this->SplineInputReader).DefaultValuePtr = (float *)0x0;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined4 *)&this->_padding_ = 7;
  this->LocationOffsetSpline[0].CompressionFormat = '\0';
  this->LocationOffsetSpline[0].KeyTimeCompressionFormat = '\x01';
  this->LocationOffsetSpline[0].PreInfinityExtrap = '\x05';
  this->LocationOffsetSpline[0].PostInfinityExtrap = '\x05';
  this->LocationOffsetSpline[0].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->LocationOffsetSpline[0].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->LocationOffsetSpline[0].CompressedKeys.ArrayNum = 0;
  this->LocationOffsetSpline[0].CompressedKeys.ArrayMax = 0;
  this->LocationOffsetSpline[1].CompressionFormat = '\0';
  this->LocationOffsetSpline[1].KeyTimeCompressionFormat = '\x01';
  this->LocationOffsetSpline[1].PreInfinityExtrap = '\x05';
  this->LocationOffsetSpline[1].PostInfinityExtrap = '\x05';
  this->LocationOffsetSpline[1].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->LocationOffsetSpline[1].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->LocationOffsetSpline[1].CompressedKeys.ArrayNum = 0;
  this->LocationOffsetSpline[1].CompressedKeys.ArrayMax = 0;
  this->LocationOffsetSpline[2].CompressionFormat = '\0';
  this->LocationOffsetSpline[2].KeyTimeCompressionFormat = '\x01';
  this->LocationOffsetSpline[2].PreInfinityExtrap = '\x05';
  this->LocationOffsetSpline[2].PostInfinityExtrap = '\x05';
  this->LocationOffsetSpline[2].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->LocationOffsetSpline[2].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->LocationOffsetSpline[2].CompressedKeys.ArrayNum = 0;
  this->LocationOffsetSpline[2].CompressedKeys.ArrayMax = 0;
  this->RotationOffsetSpline[0].CompressionFormat = '\0';
  this->RotationOffsetSpline[0].KeyTimeCompressionFormat = '\x01';
  this->RotationOffsetSpline[0].PreInfinityExtrap = '\x05';
  this->RotationOffsetSpline[0].PostInfinityExtrap = '\x05';
  this->RotationOffsetSpline[0].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->RotationOffsetSpline[0].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->RotationOffsetSpline[0].CompressedKeys.ArrayNum = 0;
  this->RotationOffsetSpline[0].CompressedKeys.ArrayMax = 0;
  this->RotationOffsetSpline[1].CompressionFormat = '\0';
  this->RotationOffsetSpline[1].KeyTimeCompressionFormat = '\x01';
  this->RotationOffsetSpline[1].PreInfinityExtrap = '\x05';
  this->RotationOffsetSpline[1].PostInfinityExtrap = '\x05';
  this->RotationOffsetSpline[1].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->RotationOffsetSpline[1].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->RotationOffsetSpline[1].CompressedKeys.ArrayNum = 0;
  this->RotationOffsetSpline[1].CompressedKeys.ArrayMax = 0;
  this->RotationOffsetSpline[2].CompressionFormat = '\0';
  this->RotationOffsetSpline[2].KeyTimeCompressionFormat = '\x01';
  this->RotationOffsetSpline[2].PreInfinityExtrap = '\x05';
  this->RotationOffsetSpline[2].PostInfinityExtrap = '\x05';
  this->RotationOffsetSpline[2].ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  this->RotationOffsetSpline[2].CompressedKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->RotationOffsetSpline[2].CompressedKeys.ArrayNum = 0;
  this->RotationOffsetSpline[2].CompressedKeys.ArrayMax = 0;
  this->bHasAnyLocationOffset = false;
  this->bHasAnyRotationOffset = false;
  return this;
}

// ~FSplineOffsetCameraNodeEvaluator @ 14d600460

void __thiscall
UE::Cameras::FSplineOffsetCameraNodeEvaluator::~FSplineOffsetCameraNodeEvaluator
          (FSplineOffsetCameraNodeEvaluator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSplineOffsetCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1 = this->RotationOffsetSpline[2].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->RotationOffsetSpline[1].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->RotationOffsetSpline[0].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->LocationOffsetSpline[2].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->LocationOffsetSpline[1].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = this->LocationOffsetSpline[0].CompressedKeys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetTypeID @ 14d61e720

FCameraObjectTypeID * __thiscall
UE::Cameras::FSplineOffsetCameraNodeEvaluator::GetTypeID(FSplineOffsetCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621570

bool __thiscall
UE::Cameras::FSplineOffsetCameraNodeEvaluator::IsKindOf
          (FSplineOffsetCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FSplineOffsetCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d628cb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSplineOffsetCameraNodeEvaluator::OnInitialize
          (FSplineOffsetCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

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
    pUVar4 = USplineOffsetCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      lVar5 = this->_padding_;
    }
  }
  (this->SplineInputReader).DefaultValuePtr = (float *)(lVar5 + 0x38);
  (this->SplineInputReader).VariableID.Value = *(uint *)(lVar5 + 0x3c);
  if (this->_padding_ != 0) {
    pUVar4 = USplineOffsetCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      lVar6 = this->_padding_;
    }
  }
  bVar3 = FCameraVectorCurve::HasAnyData((FCameraVectorCurve *)(lVar6 + 0x48));
  this->bHasAnyLocationOffset = bVar3;
  bVar3 = FCameraRotatorCurve::HasAnyData((FCameraRotatorCurve *)(lVar6 + 0x1c8));
  fVar2 = __real_42f00000;
  fVar1 = __real_38d1b717;
  this->bHasAnyRotationOffset = bVar3;
  FRichCurve::CompressCurve((FRichCurve *)(lVar6 + 0x48),this->LocationOffsetSpline,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar6 + 200),this->LocationOffsetSpline + 1,fVar1,fVar2);
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar6 + 0x148),this->LocationOffsetSpline + 2,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar6 + 0x1c8),this->RotationOffsetSpline,fVar1,fVar2);
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar6 + 0x248),this->RotationOffsetSpline + 1,fVar1,fVar2);
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar6 + 0x2c8),this->RotationOffsetSpline + 2,fVar1,fVar2);
  return;
}

// OnRun @ 14d62c650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSplineOffsetCameraNodeEvaluator::OnRun
          (FSplineOffsetCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  ECameraNodeSpace EVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  float *pfVar8;
  UClass *pUVar9;
  TTransform<double> *pTVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStackY_208 [32];
  FCameraNodeSpaceParams local_1d8 [2];
  double local_1b8;
  TTransform<double> local_1a8;
  undefined1 local_148 [16];
  double local_138;
  TVector<double>_u_0 local_130;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (((this->SplineInputReader).DefaultValuePtr == (float *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->SplineInputReader).VariableID.Value == 0xffffffff) ||
     (pfVar8 = FCameraVariableTable::FindValue<float>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->SplineInputReader).VariableID.Value),
     pfVar8 == (float *)0x0)) {
    pfVar8 = (this->SplineInputReader).DefaultValuePtr;
  }
  fVar15 = *pfVar8;
  local_130._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (this->bHasAnyLocationOffset != false) {
    fVar12 = FCompressedRichCurve::Eval(this->LocationOffsetSpline + 2,fVar15,0.0);
    fVar13 = FCompressedRichCurve::Eval(this->LocationOffsetSpline + 1,fVar15,0.0);
    fVar14 = FCompressedRichCurve::Eval(this->LocationOffsetSpline,fVar15,0.0);
    local_130._s_0.Z = (double)fVar12;
    uVar3 = (double)fVar13;
    uVar4 = (double)fVar14;
    local_1b8 = (double)fVar12;
  }
  local_130._8_4_ = (int)uVar3;
  local_130._0_8_ = uVar4;
  local_130._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
  if (this->bHasAnyRotationOffset == false) {
    local_1b8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    dVar5 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    dVar6 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  }
  else {
    fVar12 = FCompressedRichCurve::Eval(this->RotationOffsetSpline + 2,fVar15,0.0);
    fVar13 = FCompressedRichCurve::Eval(this->RotationOffsetSpline + 1,fVar15,0.0);
    fVar15 = FCompressedRichCurve::Eval(this->RotationOffsetSpline,fVar15,0.0);
    dVar5 = (double)fVar13;
    dVar6 = (double)fVar15;
    local_1b8 = (double)fVar12;
  }
  local_148._8_4_ = SUB84(dVar5,0);
  local_148._0_8_ = dVar6;
  local_148._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_138 = local_1b8;
  if (this->_padding_ != 0) {
    pUVar9 = USplineOffsetCameraNode::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar9);
    if (bVar7) {
      lVar11 = this->_padding_;
      goto LAB_14d62c82d;
    }
  }
  lVar11 = 0;
LAB_14d62c82d:
  EVar1 = *(ECameraNodeSpace *)(lVar11 + 0x348);
  local_1a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pTVar10 = FCameraPose::GetTransform(&param_2->CameraPose,&local_b8);
  local_1d8[0].EvaluationParams = param_1;
  local_1d8[0].EvaluationResult = param_2;
  bVar7 = FCameraNodeSpaceMath::OffsetCameraNodeSpaceTransform
                    (local_1d8,pTVar10,(TVector<double> *)&local_130._s_0,
                     (TRotator<double> *)local_148,EVar1,&local_1a8);
  if (bVar7) {
    local_118.Rotation.XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
    local_118.Rotation.XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
    local_118.Rotation.ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
    local_118.Rotation.ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
    local_118.Translation.XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
    local_118.Translation.XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
    local_118.Translation.ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0];
    local_118.Translation.ZW.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[1];
    local_118.Scale3D.XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
    local_118.Scale3D.XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
    local_118.Scale3D.ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
    local_118.Scale3D.ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
    FCameraPose::SetTransform(&param_2->CameraPose,&local_118,false);
  }
  return;
}

// RebuildCurves @ 14d62eb70

void __thiscall
UE::Cameras::FSplineOffsetCameraNodeEvaluator::RebuildCurves(FSplineOffsetCameraNodeEvaluator *this)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  
  if (this->_padding_ != 0) {
    pUVar4 = USplineOffsetCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      lVar5 = this->_padding_;
      goto LAB_14d62ebbb;
    }
  }
  lVar5 = 0;
LAB_14d62ebbb:
  bVar3 = FCameraVectorCurve::HasAnyData((FCameraVectorCurve *)(lVar5 + 0x48));
  this->bHasAnyLocationOffset = bVar3;
  bVar3 = FCameraRotatorCurve::HasAnyData((FCameraRotatorCurve *)(lVar5 + 0x1c8));
  fVar2 = __real_42f00000;
  fVar1 = __real_38d1b717;
  this->bHasAnyRotationOffset = bVar3;
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x48),this->LocationOffsetSpline,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 200),this->LocationOffsetSpline + 1,fVar1,fVar2);
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar5 + 0x148),this->LocationOffsetSpline + 2,fVar1,fVar2);
  FRichCurve::CompressCurve((FRichCurve *)(lVar5 + 0x1c8),this->RotationOffsetSpline,fVar1,fVar2);
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar5 + 0x248),this->RotationOffsetSpline + 1,fVar1,fVar2);
  FRichCurve::CompressCurve
            ((FRichCurve *)(lVar5 + 0x2c8),this->RotationOffsetSpline + 2,fVar1,fVar2);
  return;
}

