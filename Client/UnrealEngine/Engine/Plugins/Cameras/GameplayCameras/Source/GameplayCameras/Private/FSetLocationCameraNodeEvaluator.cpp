// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// GetTypeID @ 14d61e6b0

FCameraObjectTypeID * __thiscall
UE::Cameras::FSetLocationCameraNodeEvaluator::GetTypeID(FSetLocationCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621450

bool __thiscall
UE::Cameras::FSetLocationCameraNodeEvaluator::IsKindOf
          (FSetLocationCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FSetLocationCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d628a70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSetLocationCameraNodeEvaluator::OnInitialize
          (FSetLocationCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (this->_padding_ != 0) {
    pUVar2 = USetLocationCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d628aa8;
    }
  }
  lVar3 = 0;
LAB_14d628aa8:
  (this->LocationReader).DefaultValuePtr = (TVector<double> *)(lVar3 + 0x38);
  (this->LocationReader).VariableID.Value = *(uint *)(lVar3 + 0x50);
  return;
}

// OnRun @ 14d62bb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FSetLocationCameraNodeEvaluator::OnRun
          (FSetLocationCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  char cVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  TVector<double> *pTVar9;
  UClass *pUVar10;
  longlong lVar11;
  FCameraEvaluationContext *pFVar12;
  TTransform<double> *pTVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_428 [48];
  double local_3f8;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  pTVar13 = &local_328;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_428;
  if (((this->LocationReader).DefaultValuePtr == (TVector<double> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->LocationReader).VariableID.Value == 0xffffffff) ||
     (pTVar9 = FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->LocationReader).VariableID.Value),
     pTVar9 == (TVector<double> *)0x0)) {
    pTVar9 = (this->LocationReader).DefaultValuePtr;
  }
  dVar26 = (pTVar9->field0_0x0)._s_0.Z;
  dVar5 = (pTVar9->field0_0x0)._s_0.X;
  dVar7 = (pTVar9->field0_0x0)._s_0.Y;
  local_3f8 = dVar26;
  if (this->_padding_ == 0) {
LAB_14d62bbe7:
    lVar11 = 0;
  }
  else {
    pUVar10 = USetLocationCameraNode::StaticClass();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar10);
    if (!bVar8) goto LAB_14d62bbe7;
    lVar11 = this->_padding_;
  }
  cVar1 = *(char *)(lVar11 + 0x60);
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      if ((param_1->EvaluationContext).Object != (FCameraEvaluationContext *)0x0) {
        pFVar12 = TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->
                            (&param_1->EvaluationContext);
        FCameraPose::GetTransform(&(pFVar12->InitialResult).CameraPose,&local_e8);
        dVar26 = dVar26 * local_e8.Scale3D.ZW.m128d_f64[0];
        local_e8.Scale3D.ZW.m128d_f64[1] = local_e8.Scale3D.ZW.m128d_f64[1] * 0.0;
        local_e8.Scale3D.XY.m128d_f64[0] = local_e8.Scale3D.XY.m128d_f64[0] * dVar5;
        local_e8.Scale3D.XY.m128d_f64[1] = local_e8.Scale3D.XY.m128d_f64[1] * dVar7;
        uVar21 = (undefined4)((ulonglong)local_e8.Scale3D.XY.m128d_f64[1] >> 0x20);
        dVar7 = local_e8.Rotation.ZW.m128d_f64[0];
        dVar5 = local_e8.Rotation.XY.m128d_f64[1];
        auVar27._8_4_ = SUB84(local_e8.Scale3D.XY.m128d_f64[1],0);
        auVar27._0_8_ = local_e8.Scale3D.XY.m128d_f64[0];
        auVar27._12_4_ = uVar21;
        auVar25 = blendpd((undefined1  [16])local_e8.Rotation.XY.m128d_f64,
                          (undefined1  [16])local_e8.Rotation.ZW.m128d_f64,2);
        auVar28._0_8_ =
             auVar27._8_8_ * local_e8.Rotation.XY.m128d_f64[0] -
             dVar5 * local_e8.Scale3D.XY.m128d_f64[0];
        auVar28._8_8_ = dVar26 * dVar5 - dVar7 * local_e8.Scale3D.XY.m128d_f64[1];
        auVar14._8_4_ = SUB84(local_e8.Scale3D.XY.m128d_f64[1],0);
        auVar14._0_8_ = local_e8.Scale3D.XY.m128d_f64[0];
        auVar14._12_4_ = uVar21;
        auVar15._8_4_ = SUB84(local_e8.Scale3D.ZW.m128d_f64[1],0);
        auVar15._0_8_ = dVar26;
        auVar15._12_4_ = (int)((ulonglong)local_e8.Scale3D.ZW.m128d_f64[1] >> 0x20);
        auVar15 = blendpd(auVar14,auVar15,2);
        dVar3 = local_e8.Rotation.ZW.m128d_f64[1];
        auVar16._0_8_ = auVar15._0_8_ * dVar7 - auVar25._0_8_ * dVar26;
        auVar16._8_8_ = auVar15._8_8_ * dVar3 - auVar25._8_8_ * local_e8.Scale3D.ZW.m128d_f64[1];
        auVar15 = blendpd(auVar28,auVar16,2);
        dVar4 = auVar28._8_8_ + auVar28._8_8_;
        dVar6 = auVar16._0_8_ + auVar16._0_8_;
        uVar21 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar29._0_8_ = auVar15._0_8_ + auVar15._0_8_;
        auVar29._8_8_ = auVar15._8_8_ + auVar15._8_8_;
        auVar19._8_4_ = SUB84(dVar6,0);
        auVar19._0_8_ = dVar4;
        auVar19._12_4_ = uVar21;
        auVar17._8_4_ = SUB84(dVar6,0);
        auVar17._0_8_ = dVar4;
        auVar17._12_4_ = uVar21;
        auVar15 = blendpd(auVar17,auVar29,2);
        auVar20._0_8_ = auVar19._8_8_ * local_e8.Rotation.XY.m128d_f64[0] - dVar4 * dVar5;
        auVar20._8_8_ = auVar29._0_8_ * dVar5 - dVar6 * dVar7;
        auVar18._0_8_ = auVar15._0_8_ * dVar7 - auVar29._0_8_ * auVar25._0_8_;
        auVar18._8_8_ = auVar15._8_8_ * dVar3 - auVar29._8_8_ * auVar25._8_8_;
        auVar15 = blendpd(auVar20,auVar18,2);
        dVar5 = dVar4 * dVar3 + local_e8.Scale3D.XY.m128d_f64[0] + auVar20._8_8_;
        dVar7 = dVar6 * dVar3 + local_e8.Scale3D.XY.m128d_f64[1] + auVar18._0_8_;
        uVar21 = SUB84(dVar7,0);
        uVar22 = (undefined4)((ulonglong)dVar7 >> 0x20);
        dVar26 = auVar29._0_8_ * dVar3 + dVar26 + auVar15._0_8_;
        FCameraPose::GetTransform(&param_2->CameraPose,&local_1a8);
        local_388.Rotation.XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
        local_388.Rotation.XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
        local_388.Rotation.ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
        local_388.Rotation.ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
        local_388.Scale3D.XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
        local_388.Scale3D.XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
        local_388.Scale3D.ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
        local_388.Scale3D.ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
        local_1a8.Translation.XY.m128d_f64[1]._0_4_ = uVar21;
        local_1a8.Translation.XY.m128d_f64[0] = dVar5;
        local_1a8.Translation.XY.m128d_f64[1]._4_4_ = uVar22;
        local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
        local_388.Translation.XY.m128d_f64[1]._0_4_ = uVar21;
        local_388.Translation.XY.m128d_f64[0] = dVar5;
        local_388.Translation.XY.m128d_f64[1]._4_4_ = uVar22;
        local_388.Translation.ZW.m128d_f64[1] = 0.0;
        local_388.Translation.ZW.m128d_f64[0] = dVar26;
        local_1a8.Translation.ZW.m128d_f64[0] = dVar26;
        FCameraPose::SetTransform(&param_2->CameraPose,&local_388,false);
        return;
      }
      if ((byte)LogCameraSystem._0_1_ < 2) {
        return;
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      return;
    }
    if (cVar1 == '\x05') {
      FCameraPose::GetTransform(&param_2->CameraPose,&local_208);
      pTVar13 = &local_3e8;
      local_3e8.Rotation.ZW.m128d_f64[0] = local_208.Rotation.ZW.m128d_f64[0];
      local_3e8.Rotation.ZW.m128d_f64[1] = local_208.Rotation.ZW.m128d_f64[1];
      local_208.Translation.ZW.m128d_f64[1] = 0.0;
      local_3e8.Rotation.XY.m128d_f64[0] = local_208.Rotation.XY.m128d_f64[0];
      local_3e8.Rotation.XY.m128d_f64[1] = local_208.Rotation.XY.m128d_f64[1];
      local_3e8.Scale3D.XY.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
      local_3e8.Scale3D.XY.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[1];
      local_3e8.Translation.ZW.m128d_f64[1] = 0.0;
      local_3e8.Scale3D.ZW.m128d_f64[0] = local_208.Scale3D.ZW.m128d_f64[0];
      local_3e8.Scale3D.ZW.m128d_f64[1] = local_208.Scale3D.ZW.m128d_f64[1];
      local_3e8.Translation.XY.m128d_f64[0] = dVar5;
      local_3e8.Translation.XY.m128d_f64[1] = dVar7;
      local_3e8.Translation.ZW.m128d_f64[0] = dVar26;
      local_208.Translation.XY.m128d_f64[0] = dVar5;
      local_208.Translation.XY.m128d_f64[1] = dVar7;
      local_208.Translation.ZW.m128d_f64[0] = dVar26;
      goto LAB_14d62bf84;
    }
  }
  FCameraPose::GetTransform(&param_2->CameraPose,&local_268);
  local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  uVar23 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_148.Rotation.ZW.m128d_f64[1]._0_4_ = uVar23;
  local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_148.Rotation.ZW.m128d_f64[1]._4_4_ = uVar24;
  uVar21 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar22 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_148.Translation.ZW.m128d_f64[0] = local_3f8;
  local_148.Translation.ZW.m128d_f64[1] = 0.0;
  local_2c8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_2c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2c8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_148.Scale3D.XY.m128d_f64[1]._0_4_ = uVar21;
  local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148.Scale3D.XY.m128d_f64[1]._4_4_ = uVar22;
  local_2c8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_2c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2c8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_2c8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar23;
  local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2c8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar24;
  local_2c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar21;
  local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar22;
  local_148.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
  local_148.Translation.XY.m128d_f64[0] = dVar5;
  local_148.Translation.XY.m128d_f64[1] = dVar7;
  local_148.Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
  local_148.Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
  UE::Math::TTransform<double>::Multiply(&local_2c8,&local_148,&local_268);
  local_268.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
  local_268.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
  local_268.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
  local_268.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
  local_268.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
  local_268.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
  local_268.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
  local_268.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
  local_268.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
  local_268.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
  local_268.Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
  local_268.Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
  local_328.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
  local_328.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
  local_328.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
  local_328.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
  local_328.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
  local_328.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
  local_328.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
  local_328.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
  local_328.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
  local_328.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
  local_328.Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
  local_328.Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
LAB_14d62bf84:
  FCameraPose::SetTransform(&param_2->CameraPose,pTVar13,false);
  return;
}

