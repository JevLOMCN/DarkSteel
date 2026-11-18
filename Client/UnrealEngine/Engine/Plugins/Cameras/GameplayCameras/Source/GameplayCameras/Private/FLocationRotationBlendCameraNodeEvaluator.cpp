// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// GetTypeID @ 14d61e620

FCameraObjectTypeID * __thiscall
UE::Cameras::FLocationRotationBlendCameraNodeEvaluator::GetTypeID
          (FLocationRotationBlendCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6212f0

bool __thiscall
UE::Cameras::FLocationRotationBlendCameraNodeEvaluator::IsKindOf
          (FLocationRotationBlendCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != FBlendCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
               FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBlendParameters @ 14d622cc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FLocationRotationBlendCameraNodeEvaluator::OnBlendParameters
          (FLocationRotationBlendCameraNodeEvaluator *this,FCameraNodePreBlendParams *param_1,
          FCameraNodePreBlendResult *param_2)

{
  if (this->OtherBlendEvaluator != (FSimpleBlendCameraNodeEvaluator *)0x0) {
    FBlendCameraNodeEvaluator::BlendParameters
              ((FBlendCameraNodeEvaluator *)this->OtherBlendEvaluator,param_1,param_2);
    return;
  }
  FCameraVariableTable::Override
            (param_2->VariableTable,param_1->ChildVariableTable,param_1->VariableTableFilter);
  param_2->bIsBlendFull = true;
  param_2->bIsBlendFinished = true;
  return;
}

// OnBlendResults @ 14d622ed0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FLocationRotationBlendCameraNodeEvaluator::OnBlendResults
          (FLocationRotationBlendCameraNodeEvaluator *this,FCameraNodeBlendParams *param_1,
          FCameraNodeBlendResult *param_2)

{
  float *pfVar1;
  FCameraPoseFlags *pFVar2;
  FCameraNodeEvaluationResult *pFVar3;
  FCameraNodeEvaluationResult *pFVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  
  pFVar3 = param_2->BlendedResult;
  cVar9 = '\x01';
  dVar31 = (pFVar3->CameraPose).Location.field0_0x0._s_0.Z;
  cVar12 = '\x01';
  pFVar4 = param_1->ChildResult;
  dVar23 = (pFVar3->CameraPose).Rotation.Roll;
  dVar34 = (pFVar3->CameraPose).Location.field0_0x0._s_0.X;
  dVar27 = (pFVar3->CameraPose).Location.field0_0x0._s_0.Y;
  dVar36 = (pFVar3->CameraPose).Rotation.Pitch;
  dVar32 = (pFVar3->CameraPose).Rotation.Yaw;
  if (this->OtherBlendEvaluator == (FSimpleBlendCameraNodeEvaluator *)0x0) {
    FPopBlendCameraNodeHelper::PopResults(param_1,param_2);
  }
  else {
    FBlendCameraNodeEvaluator::BlendResults
              ((FBlendCameraNodeEvaluator *)this->OtherBlendEvaluator,param_1,param_2);
    cVar9 = param_2->bIsBlendFull;
    cVar12 = param_2->bIsBlendFinished;
  }
  fVar5 = __real_3f800000;
  cVar10 = cVar9;
  cVar11 = cVar12;
  if (this->LocationBlendEvaluator != (FSimpleBlendCameraNodeEvaluator *)0x0) {
    dVar22 = (double)this->LocationBlendEvaluator->BlendFactor;
    dVar31 = ((pFVar4->CameraPose).Location.field0_0x0._s_0.Z - dVar31) * dVar22 + dVar31;
    dVar34 = ((pFVar4->CameraPose).Location.field0_0x0._s_0.X - dVar34) * dVar22 + dVar34;
    dVar27 = ((pFVar4->CameraPose).Location.field0_0x0._s_0.Y - dVar27) * dVar22 + dVar27;
    if (((dVar34 != (pFVar3->CameraPose).Location.field0_0x0._s_0.X) ||
        (dVar27 != (pFVar3->CameraPose).Location.field0_0x0._s_0.Y)) ||
       (dVar31 != (pFVar3->CameraPose).Location.field0_0x0._s_0.Z)) {
      pFVar2->Location = true;
      (pFVar3->CameraPose).Location.field0_0x0._s_0.X = dVar34;
      (pFVar3->CameraPose).Location.field0_0x0._s_0.Y = dVar27;
      (pFVar3->CameraPose).Location.field0_0x0._s_0.Z = dVar31;
    }
    pfVar1 = &this->LocationBlendEvaluator->BlendFactor;
    cVar11 = this->LocationBlendEvaluator->bIsBlendFinished;
    cVar10 = fVar5 < *pfVar1 || fVar5 == *pfVar1;
  }
  cVar8 = cVar9;
  cVar7 = cVar12;
  if (this->RotationBlendEvaluator != (FSimpleBlendCameraNodeEvaluator *)0x0) {
    auVar24._0_8_ = (pFVar4->CameraPose).Rotation.Roll - dVar23;
    auVar24._8_8_ = 0;
    dVar35 = (pFVar4->CameraPose).Rotation.Pitch - dVar36;
    dVar28 = (pFVar4->CameraPose).Rotation.Yaw - dVar32;
    auVar17._8_4_ = SUB84(dVar28,0);
    auVar17._0_8_ = dVar35;
    auVar17._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    auVar17 = divpd(auVar17,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar17 = roundpd(auVar24,auVar17,3);
    dVar31 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar25._0_8_ = auVar17._0_8_ * dVar31;
    dVar34 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar25._8_8_ = auVar17._8_8_ * dVar34;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = auVar24._0_8_;
    dVar35 = dVar35 - auVar25._0_8_;
    dVar28 = dVar28 - auVar25._8_8_;
    auVar17 = divpd(auVar18,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    auVar17 = roundpd(auVar25,auVar17,3);
    dVar27 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar19._8_4_ = SUB84(dVar28,0);
    auVar19._0_8_ = dVar35;
    auVar19._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    dVar38 = auVar24._0_8_ - auVar17._0_8_ * dVar27;
    dVar39 = 0.0 - auVar17._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    dVar22 = auVar19._8_8_ + dVar34;
    uVar13 = -(ulonglong)(0.0 <= dVar35);
    uVar15 = -(ulonglong)(0.0 <= dVar28);
    auVar26._0_8_ = uVar13 & (ulonglong)dVar35;
    auVar26._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar28);
    auVar26._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar28) >> 0x20);
    auVar33._0_4_ = ~(uint)uVar13 & SUB84(dVar35 + dVar31,0);
    auVar33._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar35 + dVar31) >> 0x20);
    auVar33._8_4_ = ~(uint)uVar15 & SUB84(dVar22,0);
    auVar33._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
    auVar20._8_4_ = SUB84(dVar39,0);
    auVar20._0_8_ = dVar38;
    auVar20._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    auVar33 = auVar33 | auVar26;
    dVar22 = auVar20._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar13 = -(ulonglong)(0.0 <= dVar38);
    uVar15 = -(ulonglong)(0.0 <= dVar39);
    auVar29._0_8_ = uVar13 & (ulonglong)dVar38;
    auVar29._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar39);
    auVar29._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar39) >> 0x20);
    auVar37._0_4_ = ~(uint)uVar13 & SUB84(dVar38 + dVar27,0);
    auVar37._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar38 + dVar27) >> 0x20);
    auVar37._8_4_ = ~(uint)uVar15 & SUB84(dVar22,0);
    auVar37._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
    auVar37 = auVar37 | auVar29;
    uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar33._0_8_);
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar33._8_8_);
    uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar37._0_8_);
    auVar30._0_8_ = uVar15 & (ulonglong)(auVar33._0_8_ - dVar31);
    uVar13 = uVar16 & (ulonglong)(auVar33._8_8_ - dVar34);
    auVar30._8_4_ = (undefined4)uVar13;
    auVar30._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar21._0_4_ = ~(uint)uVar15 & auVar33._0_4_;
    auVar21._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar33._4_4_;
    auVar21._8_4_ = ~(uint)uVar16 & auVar33._8_4_;
    auVar21._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar33._12_4_;
    dVar31 = (double)this->RotationBlendEvaluator->BlendFactor;
    dVar36 = dVar31 * SUB168(auVar30 | auVar21,0) + dVar36;
    dVar32 = dVar31 * SUB168(auVar30 | auVar21,8) + dVar32;
    dVar23 = dVar31 * (double)((ulonglong)(auVar37._0_8_ - dVar27) & uVar14 |
                              CONCAT44(~(uint)(uVar14 >> 0x20) & auVar37._4_4_,
                                       ~(uint)uVar14 & auVar37._0_4_)) + dVar23;
    if (((dVar36 != (pFVar3->CameraPose).Rotation.Pitch) ||
        (dVar32 != (pFVar3->CameraPose).Rotation.Yaw)) ||
       (dVar23 != (pFVar3->CameraPose).Rotation.Roll)) {
      pFVar2->Rotation = true;
      (pFVar3->CameraPose).Rotation.Pitch = dVar36;
      (pFVar3->CameraPose).Rotation.Yaw = dVar32;
      (pFVar3->CameraPose).Rotation.Roll = dVar23;
    }
    pfVar1 = &this->RotationBlendEvaluator->BlendFactor;
    cVar7 = this->RotationBlendEvaluator->bIsBlendFinished;
    cVar8 = fVar5 < *pfVar1 || fVar5 == *pfVar1;
  }
  if (((cVar9 == '\0') || (cVar10 == '\0')) || (cVar8 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  param_2->bIsBlendFull = bVar6;
  if (((cVar12 != '\0') && (cVar11 != '\0')) && (cVar7 != '\0')) {
    param_2->bIsBlendFinished = true;
    return;
  }
  param_2->bIsBlendFinished = false;
  return;
}

// OnBuild @ 14d623f60

void __thiscall
UE::Cameras::FLocationRotationBlendCameraNodeEvaluator::OnBuild
          (FLocationRotationBlendCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FSimpleBlendCameraNodeEvaluator *pFVar3;
  longlong lVar4;
  
  if (this->_padding_ != 0) {
    pUVar2 = ULocationRotationBlendCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar4 = this->_padding_;
      goto LAB_14d623f99;
    }
  }
  lVar4 = 0;
LAB_14d623f99:
  if (*(UCameraNode **)(lVar4 + 0x38) != (UCameraNode *)0x0) {
    pFVar3 = FCameraNodeEvaluatorBuildParams::
             BuildEvaluatorAs<UE::Cameras::FSimpleBlendCameraNodeEvaluator>
                       (param_1,*(UCameraNode **)(lVar4 + 0x38));
    this->LocationBlendEvaluator = pFVar3;
  }
  if (*(UCameraNode **)(lVar4 + 0x40) != (UCameraNode *)0x0) {
    pFVar3 = FCameraNodeEvaluatorBuildParams::
             BuildEvaluatorAs<UE::Cameras::FSimpleBlendCameraNodeEvaluator>
                       (param_1,*(UCameraNode **)(lVar4 + 0x40));
    this->RotationBlendEvaluator = pFVar3;
  }
  if (*(UCameraNode **)(lVar4 + 0x48) != (UCameraNode *)0x0) {
    pFVar3 = FCameraNodeEvaluatorBuildParams::
             BuildEvaluatorAs<UE::Cameras::FSimpleBlendCameraNodeEvaluator>
                       (param_1,*(UCameraNode **)(lVar4 + 0x48));
    this->OtherBlendEvaluator = pFVar3;
  }
  return;
}

// OnBuildDebugBlocks @ 14d624900

void __thiscall
UE::Cameras::FLocationRotationBlendCameraNodeEvaluator::OnBuildDebugBlocks
          (FLocationRotationBlendCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FCameraDebugBlock *pFVar1;
  float fVar2;
  float fVar3;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x38,8);
  pFVar1[1]._padding_ = 0;
  pFVar1[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).ArrayNum = 0;
  (pFVar1->Attachments).ArrayMax = 0;
  (pFVar1->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Children).ArrayNum = 0;
  (pFVar1->Children).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FLocationRotationBlendCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar1);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar1);
  fVar2 = __real_bf800000;
  fVar3 = __real_bf800000;
  if (this->LocationBlendEvaluator != (FSimpleBlendCameraNodeEvaluator *)0x0) {
    fVar3 = this->LocationBlendEvaluator->BlendFactor;
  }
  *(float *)&pFVar1[1]._padding_ = fVar3;
  fVar3 = fVar2;
  if (this->RotationBlendEvaluator != (FSimpleBlendCameraNodeEvaluator *)0x0) {
    fVar3 = this->RotationBlendEvaluator->BlendFactor;
  }
  *(float *)((longlong)&pFVar1[1]._padding_ + 4) = fVar3;
  if (this->OtherBlendEvaluator != (FSimpleBlendCameraNodeEvaluator *)0x0) {
    fVar2 = this->OtherBlendEvaluator->BlendFactor;
  }
  *(float *)&pFVar1[1].Attachments.AllocatorInstance.Data = fVar2;
  return;
}

// OnGetChildren @ 14d6276e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FLocationRotationBlendCameraNodeEvaluator::OnGetChildren
          (FLocationRotationBlendCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  undefined1 auStack_58 [32];
  initializer_list<UE::Cameras::FCameraNodeEvaluator_*> local_38;
  FSimpleBlendCameraNodeEvaluator *local_28;
  FSimpleBlendCameraNodeEvaluator *local_20;
  FSimpleBlendCameraNodeEvaluator *local_18;
  FCameraNodeEvaluator *local_10;
  
  local_10 = (FCameraNodeEvaluator *)(__security_cookie.value ^ (ulonglong)auStack_58);
  local_38._First = (FCameraNodeEvaluator **)&local_28;
  local_28 = this->LocationBlendEvaluator;
  local_20 = this->RotationBlendEvaluator;
  local_18 = this->OtherBlendEvaluator;
  local_38._Last = &local_10;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>(__return_storage_ptr__,&local_38);
  return __return_storage_ptr__;
}

// OnRun @ 14d62b650

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FLocationRotationBlendCameraNodeEvaluator::OnRun
          (FLocationRotationBlendCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  if (this->LocationBlendEvaluator != (FSimpleBlendCameraNodeEvaluator *)0x0) {
    FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->LocationBlendEvaluator,param_1,param_2);
  }
  if (this->RotationBlendEvaluator != (FSimpleBlendCameraNodeEvaluator *)0x0) {
    FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->RotationBlendEvaluator,param_1,param_2);
  }
  if (this->OtherBlendEvaluator != (FSimpleBlendCameraNodeEvaluator *)0x0) {
    FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->OtherBlendEvaluator,param_1,param_2);
  }
  return;
}

