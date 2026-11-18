// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d61e6c0

FCameraObjectTypeID * __thiscall
UE::Cameras::FSetRotationCameraNodeEvaluator::GetTypeID(FSetRotationCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621470

bool __thiscall
UE::Cameras::FSetRotationCameraNodeEvaluator::IsKindOf
          (FSetRotationCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FSetRotationCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d628ad0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSetRotationCameraNodeEvaluator::OnInitialize
          (FSetRotationCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar2 = USetRotationCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d628b08;
    }
  }
  lVar3 = 0;
LAB_14d628b08:
  (this->RotationReader).DefaultValuePtr = (TRotator<double> *)(lVar3 + 0x38);
  (this->RotationReader).VariableID.Value = *(uint *)(lVar3 + 0x50);
  return;
}

// OnRun @ 14d62bfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FSetRotationCameraNodeEvaluator::OnRun
          (FSetRotationCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  char cVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  __m128d _Var12;
  __m128d _Var13;
  __m128d _Var14;
  bool bVar15;
  TRotator<double> *pTVar16;
  UClass *pUVar17;
  longlong lVar18;
  TQuat<double> *pTVar19;
  FCameraEvaluationContext *pFVar20;
  TTransform<double> *pTVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_4c8 [32];
  TRotator<double> local_4a8;
  undefined1 local_488 [32];
  undefined1 local_468 [32];
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TQuat<double> local_328;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  if (((this->RotationReader).DefaultValuePtr == (TRotator<double> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("DefaultValuePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                          ,0x31,L"Parameter reader has no value pointer!"), bVar15)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->RotationReader).VariableID.Value == 0xffffffff) ||
     (pTVar16 = FCameraVariableTable::FindValue<UE::Math::TRotator<double>_>
                          (&param_2->VariableTable,
                           (FCameraVariableID)(this->RotationReader).VariableID.Value),
     pTVar16 == (TRotator<double> *)0x0)) {
    pTVar16 = (this->RotationReader).DefaultValuePtr;
  }
  local_4a8.Pitch = pTVar16->Pitch;
  local_4a8.Yaw = pTVar16->Yaw;
  local_4a8.Roll = pTVar16->Roll;
  if (this->_padding_ == 0) {
LAB_14d62c075:
    lVar18 = 0;
  }
  else {
    pUVar17 = USetRotationCameraNode::StaticClass();
    bVar15 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar17);
    if (!bVar15) goto LAB_14d62c075;
    lVar18 = this->_padding_;
  }
  cVar1 = *(char *)(lVar18 + 0x60);
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      if ((param_1->EvaluationContext).Object != (FCameraEvaluationContext *)0x0) {
        pFVar20 = TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->
                            (&param_1->EvaluationContext);
        FCameraPose::GetTransform(&(pFVar20->InitialResult).CameraPose,&local_128);
        pTVar19 = UE::Math::TRotator<double>::Quaternion(&local_4a8,(TQuat<double> *)local_488);
        _Var14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW;
        _Var13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW;
        _Var12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW;
        dVar8 = pTVar19->Z;
        dVar9 = pTVar19->W;
        dVar10 = pTVar19->X;
        dVar11 = pTVar19->Y;
        dVar6 = local_128.Rotation.XY.m128d_f64[0];
        local_488._8_4_ = local_128.Rotation.XY.m128d_f64[0]._0_4_;
        local_488._0_8_ = dVar6;
        local_488._12_4_ = local_128.Rotation.XY.m128d_f64[0]._4_4_;
        dVar3 = local_128.Rotation.ZW.m128d_f64[1];
        dVar5 = local_128.Rotation.ZW.m128d_f64[0];
        dVar7 = local_128.Rotation.XY.m128d_f64[1];
        local_468._8_4_ = local_128.Rotation.ZW.m128d_f64[0]._0_4_;
        local_468._0_8_ = dVar5;
        local_468._12_4_ = local_128.Rotation.ZW.m128d_f64[0]._4_4_;
        dVar4 = dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar3 * dVar10 +
                dVar7 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar5 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar5 = dVar6 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                dVar3 * dVar11 +
                dVar7 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                dVar5 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar22 = SUB84(dVar5,0);
        uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
        FCameraPose::GetTransform(&param_2->CameraPose,&local_1e8);
        local_1e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar22;
        local_1e8.Rotation.XY.m128d_f64[0] = dVar4;
        local_1e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar23;
        local_3e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar22;
        local_3e8.Rotation.XY.m128d_f64[0] = dVar4;
        local_3e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar23;
        dVar5 = (double)local_488._0_8_ * dVar11 * _Var12.m128d_f64[0] + dVar3 * dVar8 +
                dVar7 * dVar10 * _Var13.m128d_f64[0] +
                (double)local_468._0_8_ * dVar9 * _Var14.m128d_f64[0];
        dVar3 = (double)local_488._8_8_ * dVar10 * _Var12.m128d_f64[1] + dVar3 * dVar9 +
                dVar7 * dVar11 * _Var13.m128d_f64[1] +
                (double)local_468._8_8_ * dVar8 * _Var14.m128d_f64[1];
        uVar22 = SUB84(dVar3,0);
        uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
        local_1e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar22;
        local_1e8.Rotation.ZW.m128d_f64[0] = dVar5;
        local_1e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar23;
        local_3e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar22;
        local_3e8.Rotation.ZW.m128d_f64[0] = dVar5;
        local_3e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar23;
        local_3e8.Translation.XY.m128d_f64[0] = local_1e8.Translation.XY.m128d_f64[0];
        local_3e8.Translation.XY.m128d_f64[1] = local_1e8.Translation.XY.m128d_f64[1];
        local_3e8.Translation.ZW.m128d_f64[0] = local_1e8.Translation.ZW.m128d_f64[0];
        local_3e8.Translation.ZW.m128d_f64[1] = local_1e8.Translation.ZW.m128d_f64[1];
        local_3e8.Scale3D.XY.m128d_f64[0] = local_1e8.Scale3D.XY.m128d_f64[0];
        local_3e8.Scale3D.XY.m128d_f64[1] = local_1e8.Scale3D.XY.m128d_f64[1];
        local_3e8.Scale3D.ZW.m128d_f64[0] = local_1e8.Scale3D.ZW.m128d_f64[0];
        local_3e8.Scale3D.ZW.m128d_f64[1] = local_1e8.Scale3D.ZW.m128d_f64[1];
        FCameraPose::SetTransform(&param_2->CameraPose,&local_3e8,false);
        return;
      }
      if ((byte)LogCameraSystem._0_1_ < 2) {
        return;
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      return;
    }
    if (cVar1 == '\x05') {
      FCameraPose::GetTransform(&param_2->CameraPose,&local_248);
      pTVar19 = UE::Math::TRotator<double>::Quaternion(&local_4a8,(TQuat<double> *)local_468);
      pTVar21 = &local_448;
      local_448.Rotation.ZW.m128d_f64[0] = pTVar19->Z;
      local_448.Rotation.ZW.m128d_f64[1] = pTVar19->W;
      local_448.Rotation.XY.m128d_f64[0] = pTVar19->X;
      local_448.Rotation.XY.m128d_f64[1] = pTVar19->Y;
      local_448.Translation.XY.m128d_f64[0] = local_248.Translation.XY.m128d_f64[0];
      local_448.Translation.XY.m128d_f64[1] = local_248.Translation.XY.m128d_f64[1];
      local_448.Translation.ZW.m128d_f64[0] = local_248.Translation.ZW.m128d_f64[0];
      local_448.Translation.ZW.m128d_f64[1] = local_248.Translation.ZW.m128d_f64[1];
      local_448.Scale3D.XY.m128d_f64[0] = local_248.Scale3D.XY.m128d_f64[0];
      local_448.Scale3D.XY.m128d_f64[1] = local_248.Scale3D.XY.m128d_f64[1];
      local_448.Scale3D.ZW.m128d_f64[0] = local_248.Scale3D.ZW.m128d_f64[0];
      local_448.Scale3D.ZW.m128d_f64[1] = local_248.Scale3D.ZW.m128d_f64[1];
      local_248.Rotation.XY.m128d_f64[0] = local_448.Rotation.XY.m128d_f64[0];
      local_248.Rotation.XY.m128d_f64[1] = local_448.Rotation.XY.m128d_f64[1];
      local_248.Rotation.ZW.m128d_f64[0] = local_448.Rotation.ZW.m128d_f64[0];
      local_248.Rotation.ZW.m128d_f64[1] = local_448.Rotation.ZW.m128d_f64[1];
      goto LAB_14d62c49d;
    }
  }
  FCameraPose::GetTransform(&param_2->CameraPose,&local_2a8);
  pTVar19 = UE::Math::TRotator<double>::Quaternion(&local_4a8,&local_328);
  uVar28 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_188.Rotation.ZW.m128d_f64[0] = pTVar19->Z;
  local_188.Rotation.ZW.m128d_f64[1] = pTVar19->W;
  local_188.Rotation.XY.m128d_f64[0] = pTVar19->X;
  local_188.Rotation.XY.m128d_f64[1] = pTVar19->Y;
  uVar24 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar25 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uVar26 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar27 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  uVar22 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar23 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_308.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_308.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_308.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_188.Translation.XY.m128d_f64[1]._0_4_ = uVar28;
  local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_188.Translation.XY.m128d_f64[1]._4_4_ = uVar29;
  local_308.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_308.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_308.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_188.Translation.ZW.m128d_f64[1]._0_4_ = uVar26;
  local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_188.Translation.ZW.m128d_f64[1]._4_4_ = uVar27;
  local_188.Scale3D.XY.m128d_f64[1]._0_4_ = uVar24;
  local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_188.Scale3D.XY.m128d_f64[1]._4_4_ = uVar25;
  local_188.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar22;
  local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_188.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar23;
  local_308.Translation.XY.m128d_f64[1]._0_4_ = uVar28;
  local_308.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_308.Translation.XY.m128d_f64[1]._4_4_ = uVar29;
  local_308.Translation.ZW.m128d_f64[1]._0_4_ = uVar26;
  local_308.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_308.Translation.ZW.m128d_f64[1]._4_4_ = uVar27;
  local_308.Scale3D.XY.m128d_f64[1]._0_4_ = uVar24;
  local_308.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_308.Scale3D.XY.m128d_f64[1]._4_4_ = uVar25;
  local_308.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar22;
  local_308.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_308.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar23;
  UE::Math::TTransform<double>::Multiply(&local_308,&local_188,&local_2a8);
  pTVar21 = &local_388;
  local_2a8.Rotation.XY.m128d_f64[0] = local_308.Rotation.XY.m128d_f64[0];
  local_2a8.Rotation.XY.m128d_f64[1] = local_308.Rotation.XY.m128d_f64[1];
  local_2a8.Rotation.ZW.m128d_f64[0] = local_308.Rotation.ZW.m128d_f64[0];
  local_2a8.Rotation.ZW.m128d_f64[1] = local_308.Rotation.ZW.m128d_f64[1];
  local_2a8.Translation.XY.m128d_f64[0] = local_308.Translation.XY.m128d_f64[0];
  local_2a8.Translation.XY.m128d_f64[1] = local_308.Translation.XY.m128d_f64[1];
  local_2a8.Translation.ZW.m128d_f64[0] = local_308.Translation.ZW.m128d_f64[0];
  local_2a8.Translation.ZW.m128d_f64[1] = local_308.Translation.ZW.m128d_f64[1];
  local_2a8.Scale3D.XY.m128d_f64[0] = local_308.Scale3D.XY.m128d_f64[0];
  local_2a8.Scale3D.XY.m128d_f64[1] = local_308.Scale3D.XY.m128d_f64[1];
  local_2a8.Scale3D.ZW.m128d_f64[0] = local_308.Scale3D.ZW.m128d_f64[0];
  local_2a8.Scale3D.ZW.m128d_f64[1] = local_308.Scale3D.ZW.m128d_f64[1];
  local_388.Rotation.XY.m128d_f64[0] = local_308.Rotation.XY.m128d_f64[0];
  local_388.Rotation.XY.m128d_f64[1] = local_308.Rotation.XY.m128d_f64[1];
  local_388.Rotation.ZW.m128d_f64[0] = local_308.Rotation.ZW.m128d_f64[0];
  local_388.Rotation.ZW.m128d_f64[1] = local_308.Rotation.ZW.m128d_f64[1];
  local_388.Translation.XY.m128d_f64[0] = local_308.Translation.XY.m128d_f64[0];
  local_388.Translation.XY.m128d_f64[1] = local_308.Translation.XY.m128d_f64[1];
  local_388.Translation.ZW.m128d_f64[0] = local_308.Translation.ZW.m128d_f64[0];
  local_388.Translation.ZW.m128d_f64[1] = local_308.Translation.ZW.m128d_f64[1];
  local_388.Scale3D.XY.m128d_f64[0] = local_308.Scale3D.XY.m128d_f64[0];
  local_388.Scale3D.XY.m128d_f64[1] = local_308.Scale3D.XY.m128d_f64[1];
  local_388.Scale3D.ZW.m128d_f64[0] = local_308.Scale3D.ZW.m128d_f64[0];
  local_388.Scale3D.ZW.m128d_f64[1] = local_308.Scale3D.ZW.m128d_f64[1];
LAB_14d62c49d:
  FCameraPose::SetTransform(&param_2->CameraPose,pTVar21,false);
  return;
}

