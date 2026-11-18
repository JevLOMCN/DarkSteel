// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d61e640

FCameraObjectTypeID * __thiscall
UE::Cameras::FOffsetCameraNodeEvaluator::GetTypeID(FOffsetCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621340

bool __thiscall
UE::Cameras::FOffsetCameraNodeEvaluator::IsKindOf
          (FOffsetCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FOffsetCameraNodeEvaluator>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
         FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d628990

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOffsetCameraNodeEvaluator::OnInitialize
          (FOffsetCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar2 = UOffsetCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d6289c8;
    }
  }
  lVar3 = 0;
LAB_14d6289c8:
  (this->TranslationReader).DefaultValuePtr = (TVector<double> *)(lVar3 + 0x38);
  (this->TranslationReader).VariableID.Value = *(uint *)(lVar3 + 0x50);
  (this->RotationReader).DefaultValuePtr = (TRotator<double> *)(lVar3 + 0x60);
  (this->RotationReader).VariableID.Value = *(uint *)(lVar3 + 0x78);
  return;
}

// OnRun @ 14d62b770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOffsetCameraNodeEvaluator::OnRun
          (FOffsetCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  ECameraNodeSpace EVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  TRotator<double> *pTVar5;
  UClass *pUVar6;
  TTransform<double> *pTVar7;
  longlong lVar8;
  undefined1 auStackY_1b8 [32];
  FCameraNodeSpaceParams local_188;
  TTransform<double> local_178;
  TRotator<double> local_118;
  TVector<double>_u_0 local_100;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((this->TranslationReader).DefaultValuePtr == (TVector<double> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->TranslationReader).VariableID.Value == 0xffffffff) {
LAB_14d62b7f1:
    pTVar4 = (this->TranslationReader).DefaultValuePtr;
  }
  else {
    pTVar4 = FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->TranslationReader).VariableID.Value);
    if (pTVar4 == (TVector<double> *)0x0) goto LAB_14d62b7f1;
  }
  local_100._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  local_100._s_0.Y = (pTVar4->field0_0x0)._s_0.Y;
  local_100._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  if ((this->RotationReader).DefaultValuePtr == (TRotator<double> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultValuePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                       ,0x31,L"Parameter reader has no value pointer!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->RotationReader).VariableID.Value == 0xffffffff) {
LAB_14d62b855:
    pTVar5 = (this->RotationReader).DefaultValuePtr;
  }
  else {
    pTVar5 = FCameraVariableTable::FindValue<UE::Math::TRotator<double>_>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->RotationReader).VariableID.Value);
    if (pTVar5 == (TRotator<double> *)0x0) goto LAB_14d62b855;
  }
  local_118.Pitch = pTVar5->Pitch;
  local_118.Yaw = pTVar5->Yaw;
  local_118.Roll = pTVar5->Roll;
  if (this->_padding_ != 0) {
    pUVar6 = UOffsetCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar6);
    if (bVar3) {
      lVar8 = this->_padding_;
      goto LAB_14d62b88e;
    }
  }
  lVar8 = 0;
LAB_14d62b88e:
  EVar1 = *(ECameraNodeSpace *)(lVar8 + 0x88);
  local_178.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_178.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_178.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_178.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_178.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_178.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_178.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_178.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pTVar7 = FCameraPose::GetTransform(&param_2->CameraPose,&local_88);
  local_188.EvaluationParams = param_1;
  local_188.EvaluationResult = param_2;
  bVar3 = FCameraNodeSpaceMath::OffsetCameraNodeSpaceTransform
                    (&local_188,pTVar7,(TVector<double> *)&local_100._s_0,&local_118,EVar1,
                     &local_178);
  if (bVar3) {
    local_e8.Rotation.XY.m128d_f64[0] = local_178.Rotation.XY.m128d_f64[0];
    local_e8.Rotation.XY.m128d_f64[1] = local_178.Rotation.XY.m128d_f64[1];
    local_e8.Rotation.ZW.m128d_f64[0] = local_178.Rotation.ZW.m128d_f64[0];
    local_e8.Rotation.ZW.m128d_f64[1] = local_178.Rotation.ZW.m128d_f64[1];
    local_e8.Translation.XY.m128d_f64[0] = local_178.Translation.XY.m128d_f64[0];
    local_e8.Translation.XY.m128d_f64[1] = local_178.Translation.XY.m128d_f64[1];
    local_e8.Translation.ZW.m128d_f64[0] = local_178.Translation.ZW.m128d_f64[0];
    local_e8.Translation.ZW.m128d_f64[1] = local_178.Translation.ZW.m128d_f64[1];
    local_e8.Scale3D.XY.m128d_f64[0] = local_178.Scale3D.XY.m128d_f64[0];
    local_e8.Scale3D.XY.m128d_f64[1] = local_178.Scale3D.XY.m128d_f64[1];
    local_e8.Scale3D.ZW.m128d_f64[0] = local_178.Scale3D.ZW.m128d_f64[0];
    local_e8.Scale3D.ZW.m128d_f64[1] = local_178.Scale3D.ZW.m128d_f64[1];
    FCameraPose::SetTransform(&param_2->CameraPose,&local_e8,false);
  }
  return;
}

