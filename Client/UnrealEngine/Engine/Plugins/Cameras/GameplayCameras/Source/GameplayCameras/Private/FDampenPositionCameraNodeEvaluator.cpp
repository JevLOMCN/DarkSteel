// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// ComputeAxisDampers @ 14d60f010

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FDampenPositionCameraNodeEvaluator::ComputeAxisDampers
          (FDampenPositionCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2,
          TTuple<UE::Math::TVector<double>,UE::Cameras::FCriticalDamper_*>_0_ *param_3)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  FCameraEvaluationContext *pFVar6;
  TVector<double> *pTVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  TRotator<double> local_58;
  TVector<double> local_40;
  FCriticalDamper *pFStack_28;
  
  local_58.Roll = 0.0;
  local_58.Pitch = 0.0;
  local_58.Yaw = 0.0;
  if (this->_padding_ == 0) {
LAB_14d60f065:
    lVar5 = 0;
  }
  else {
    pUVar4 = UDampenPositionCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (!bVar3) goto LAB_14d60f065;
    lVar5 = this->_padding_;
  }
  if (*(char *)(lVar5 + 0x68) == '\0') {
    uVar10 = *(undefined4 *)&(param_2->CameraPose).Rotation.Pitch;
    uVar11 = *(undefined4 *)((longlong)&(param_2->CameraPose).Rotation.Pitch + 4);
    uVar12 = *(undefined4 *)&(param_2->CameraPose).Rotation.Yaw;
    uVar13 = *(undefined4 *)((longlong)&(param_2->CameraPose).Rotation.Yaw + 4);
    dVar2 = (param_2->CameraPose).Rotation.Roll;
    uVar8 = SUB84(dVar2,0);
    uVar9 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  else {
    if (*(char *)(lVar5 + 0x68) != '\x02') goto LAB_14d60f0d2;
    if ((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) {
      if (1 < (byte)LogCameraSystem._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      }
      goto LAB_14d60f0d2;
    }
    pFVar6 = TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->
                       (&param_1->EvaluationContext);
    uVar10 = *(undefined4 *)&(pFVar6->InitialResult).CameraPose.Rotation.Pitch;
    uVar11 = *(undefined4 *)((longlong)&(pFVar6->InitialResult).CameraPose.Rotation.Pitch + 4);
    uVar12 = *(undefined4 *)&(pFVar6->InitialResult).CameraPose.Rotation.Yaw;
    uVar13 = *(undefined4 *)((longlong)&(pFVar6->InitialResult).CameraPose.Rotation.Yaw + 4);
    dVar2 = (pFVar6->InitialResult).CameraPose.Rotation.Roll;
    uVar8 = SUB84(dVar2,0);
    uVar9 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  local_58.Roll = (double)CONCAT44(uVar9,uVar8);
  local_40.field0_0x0._s_0.Z = (double)CONCAT44(uVar9,uVar8);
  local_58.Pitch = (double)CONCAT44(uVar11,uVar10);
  local_58.Yaw = (double)CONCAT44(uVar13,uVar12);
LAB_14d60f0d2:
  (this->DebugLastDampingRotation).Pitch = local_58.Pitch;
  (this->DebugLastDampingRotation).Yaw = local_58.Yaw;
  (this->DebugLastDampingRotation).Roll = local_58.Roll;
  pTVar7 = UE::Math::TRotator<double>::RotateVector
                     (&local_58,&local_40,&UE::Math::TVector<double>::ForwardVector);
  dVar2 = (pTVar7->field0_0x0)._s_0.Y;
  pdVar1 = &(pTVar7->field0_0x0)._s_0.Z;
  uVar10 = *(undefined4 *)pdVar1;
  uVar11 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0x14);
  local_40.field0_0x0._s_0.Z = *pdVar1;
  pFStack_28 = &this->ForwardDamper;
  *(double *)param_3 = (pTVar7->field0_0x0)._s_0.X;
  *(double *)(param_3 + 8) = dVar2;
  *(undefined4 *)(param_3 + 0x10) = uVar10;
  *(undefined4 *)(param_3 + 0x14) = uVar11;
  *(FCriticalDamper **)(param_3 + 0x18) = pFStack_28;
  pTVar7 = UE::Math::TRotator<double>::RotateVector
                     (&local_58,&local_40,&UE::Math::TVector<double>::RightVector);
  dVar2 = (pTVar7->field0_0x0)._s_0.Y;
  pdVar1 = &(pTVar7->field0_0x0)._s_0.Z;
  uVar10 = *(undefined4 *)pdVar1;
  uVar11 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0x14);
  local_40.field0_0x0._s_0.Z = *pdVar1;
  pFStack_28 = &this->LateralDamper;
  *(double *)(param_3 + 0x20) = (pTVar7->field0_0x0)._s_0.X;
  *(double *)(param_3 + 0x28) = dVar2;
  *(undefined4 *)(param_3 + 0x30) = uVar10;
  *(undefined4 *)(param_3 + 0x34) = uVar11;
  *(FCriticalDamper **)(param_3 + 0x38) = pFStack_28;
  pTVar7 = UE::Math::TRotator<double>::RotateVector
                     (&local_58,&local_40,&UE::Math::TVector<double>::UpVector);
  dVar2 = (pTVar7->field0_0x0)._s_0.Y;
  uVar10 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0x10);
  uVar11 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0x14);
  *(double *)(param_3 + 0x40) = (pTVar7->field0_0x0)._s_0.X;
  *(double *)(param_3 + 0x48) = dVar2;
  *(undefined4 *)(param_3 + 0x50) = uVar10;
  *(undefined4 *)(param_3 + 0x54) = uVar11;
  *(FCriticalDamper **)(param_3 + 0x58) = &this->VerticalDamper;
  return;
}

// GetTypeID @ 14d61e580

FCameraObjectTypeID * __thiscall
UE::Cameras::FDampenPositionCameraNodeEvaluator::GetTypeID(FDampenPositionCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621180

bool __thiscall
UE::Cameras::FDampenPositionCameraNodeEvaluator::IsKindOf
          (FDampenPositionCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FDampenPositionCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuildDebugBlocks @ 14d624700

void __thiscall
UE::Cameras::FDampenPositionCameraNodeEvaluator::OnBuildDebugBlocks
          (FDampenPositionCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  double dVar1;
  FCameraDebugBlock *pFVar2;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar2 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x88,8);
  pFVar2[1]._padding_ = 0;
  pFVar2[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[1].Attachments.ArrayNum = 0;
  pFVar2[1].Attachments.ArrayMax = 0;
  pFVar2[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[1].Children.ArrayNum = 0;
  pFVar2[1].Children.ArrayMax = 0;
  pFVar2[2]._padding_ = 0;
  pFVar2[2].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[2].Attachments.ArrayNum = 0;
  pFVar2[2].Attachments.ArrayMax = 0;
  pFVar2[2].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[2].Children.ArrayNum = 0;
  pFVar2[2].Children.ArrayMax = 0;
  pFVar2[3]._padding_ = 0;
  pFVar2[3].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->Attachments).ArrayNum = 0;
  (pFVar2->Attachments).ArrayMax = 0;
  (pFVar2->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->Children).ArrayNum = 0;
  (pFVar2->Children).ArrayMax = 0;
  pFVar2->_padding_ = (longlong)&___7FDampenPositionCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar2);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar2);
  *(float *)&pFVar2[1]._padding_ = (this->ForwardDamper).X0;
  *(float *)((longlong)&pFVar2[1]._padding_ + 4) = (this->LateralDamper).X0;
  *(float *)&pFVar2[1].Attachments.AllocatorInstance.Data = (this->VerticalDamper).X0;
  *(float *)((longlong)&pFVar2[1].Attachments.AllocatorInstance.Data + 4) = (this->ForwardDamper).W0
  ;
  pFVar2[1].Attachments.ArrayNum = (int)(this->LateralDamper).W0;
  pFVar2[1].Attachments.ArrayMax = (int)(this->VerticalDamper).W0;
  dVar1 = (this->DebugLastUndampedPosition).field0_0x0._s_0.Y;
  pFVar2[1].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugLastUndampedPosition).field0_0x0._s_0.X;
  *(double *)&pFVar2[1].Children.ArrayNum = dVar1;
  pFVar2[2]._padding_ = (longlong)(this->DebugLastUndampedPosition).field0_0x0._s_0.Z;
  dVar1 = (this->DebugLastDampedPosition).field0_0x0._s_0.Y;
  pFVar2[2].Attachments.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugLastDampedPosition).field0_0x0._s_0.X;
  *(double *)&pFVar2[2].Attachments.ArrayNum = dVar1;
  pFVar2[2].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugLastDampedPosition).field0_0x0._s_0.Z;
  dVar1 = (this->DebugLastDampingRotation).Yaw;
  *(double *)&pFVar2[2].Children.ArrayNum = (this->DebugLastDampingRotation).Pitch;
  pFVar2[3]._padding_ = (longlong)dVar1;
  pFVar2[3].Attachments.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugLastDampingRotation).Roll;
  return;
}

// OnInitialize @ 14d628330

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDampenPositionCameraNodeEvaluator::OnInitialize
          (FDampenPositionCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraEvaluationContext *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  UClass *pUVar5;
  float *pfVar6;
  longlong lVar7;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,NeedsSerialize);
  lVar7 = 0;
  if (this->_padding_ != 0) {
    pUVar5 = UDampenPositionCameraNode::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar5);
    if (bVar4) {
      lVar7 = this->_padding_;
    }
  }
  (this->ForwardDampingFactorReader).DefaultValuePtr = (float *)(lVar7 + 0x38);
  (this->ForwardDampingFactorReader).VariableID.Value = *(uint *)(lVar7 + 0x3c);
  (this->LateralDampingFactorReader).DefaultValuePtr = (float *)(lVar7 + 0x48);
  (this->LateralDampingFactorReader).VariableID.Value = *(uint *)(lVar7 + 0x4c);
  (this->VerticalDampingFactorReader).DefaultValuePtr = (float *)(lVar7 + 0x58);
  (this->VerticalDampingFactorReader).VariableID.Value = *(uint *)(lVar7 + 0x5c);
  if (((this->ForwardDampingFactorReader).DefaultValuePtr == (float *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->ForwardDampingFactorReader).VariableID.Value == 0xffffffff) ||
     (pfVar6 = FCameraVariableTable::FindValue<float>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->ForwardDampingFactorReader).VariableID.Value),
     pfVar6 == (float *)0x0)) {
    pfVar6 = (this->ForwardDampingFactorReader).DefaultValuePtr;
  }
  (this->ForwardDamper).W0 = *pfVar6;
  (this->ForwardDamper).X0 = 0.0;
  (this->ForwardDamper).X0Derivative = 0.0;
  if (((this->LateralDampingFactorReader).DefaultValuePtr == (float *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->LateralDampingFactorReader).VariableID.Value == 0xffffffff) ||
     (pfVar6 = FCameraVariableTable::FindValue<float>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->LateralDampingFactorReader).VariableID.Value),
     pfVar6 == (float *)0x0)) {
    pfVar6 = (this->LateralDampingFactorReader).DefaultValuePtr;
  }
  (this->LateralDamper).W0 = *pfVar6;
  (this->LateralDamper).X0 = 0.0;
  (this->LateralDamper).X0Derivative = 0.0;
  if (((this->VerticalDampingFactorReader).DefaultValuePtr == (float *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->VerticalDampingFactorReader).VariableID.Value == 0xffffffff) ||
     (pfVar6 = FCameraVariableTable::FindValue<float>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->VerticalDampingFactorReader).VariableID.Value),
     pfVar6 == (float *)0x0)) {
    pfVar6 = (this->VerticalDampingFactorReader).DefaultValuePtr;
  }
  (this->VerticalDamper).W0 = *pfVar6;
  (this->VerticalDamper).X0 = 0.0;
  (this->VerticalDamper).X0Derivative = 0.0;
  if (((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (param_1->EvaluationContext).Object;
  dVar3 = (pFVar1->InitialResult).CameraPose.Location.field0_0x0._s_0.Y;
  (this->PreviousLocation).field0_0x0._s_0.X =
       (pFVar1->InitialResult).CameraPose.Location.field0_0x0._s_0.X;
  (this->PreviousLocation).field0_0x0._s_0.Y = dVar3;
  (this->PreviousLocation).field0_0x0._s_0.Z =
       (pFVar1->InitialResult).CameraPose.Location.field0_0x0._s_0.Z;
  return;
}

// OnRun @ 14d62a7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FDampenPositionCameraNodeEvaluator::OnRun
          (FDampenPositionCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  FCriticalDamper *this_00;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  float *pfVar19;
  UClass *pUVar20;
  longlong lVar21;
  FCameraEvaluationContext *pFVar22;
  TVector<double> *pTVar23;
  double *pdVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_228 [32];
  undefined1 local_208 [12];
  undefined4 uStack_1fc;
  double local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1c8;
  double local_1b8;
  TVector<double> local_1b0;
  double local_198;
  double dStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  double local_168;
  undefined1 local_160 [16];
  double local_148 [3];
  FCriticalDamper *local_130;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  FCriticalDamper *local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  FCriticalDamper *local_f0;
  double local_e8 [22];
  
  local_e8[0] = (double)(__security_cookie.value ^ (ulonglong)auStack_228);
  uVar8 = (this->LateralDampingFactorReader).VariableID.Value;
  uVar9 = (this->VerticalDampingFactorReader).VariableID.Value;
  if ((this->ForwardDampingFactorReader).VariableID.Value != 0xffffffff) {
    pfVar19 = TCameraParameterReader<float>::Get
                        (&this->ForwardDampingFactorReader,&param_2->VariableTable);
    (this->ForwardDamper).W0 = *pfVar19;
  }
  if (uVar8 != 0xffffffff) {
    pfVar19 = TCameraParameterReader<float>::Get
                        (&this->LateralDampingFactorReader,&param_2->VariableTable);
    (this->LateralDamper).W0 = *pfVar19;
  }
  if (uVar9 != 0xffffffff) {
    pfVar19 = TCameraParameterReader<float>::Get
                        (&this->VerticalDampingFactorReader,&param_2->VariableTable);
    (this->VerticalDamper).W0 = *pfVar19;
  }
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar2 = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
  auVar7 = *(undefined1 (*) [16])&(param_2->CameraPose).Location.field0_0x0;
  uVar30 = auVar7._0_4_;
  uVar31 = auVar7._4_4_;
  dVar15 = auVar7._0_8_;
  uVar28 = auVar7._8_4_;
  uVar29 = auVar7._12_4_;
  local_118 = 0;
  local_f8 = 0.0;
  (this->DebugLastDampingRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DebugLastDampingRotation).Yaw = dVar3;
  (this->DebugLastDampingRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_1f8 = 0.0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  _local_208 = ZEXT816(0);
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_1d8 = dVar2;
  local_1b8 = dVar2;
  local_168 = dVar2;
  local_160 = auVar7;
  if (this->_padding_ == 0) {
LAB_14d62a8f9:
    lVar21 = 0;
  }
  else {
    pUVar20 = UDampenPositionCameraNode::StaticClass();
    bVar18 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar20);
    if (!bVar18) goto LAB_14d62a8f9;
    lVar21 = this->_padding_;
  }
  if (*(char *)(lVar21 + 0x68) == '\0') {
    local_208._0_4_ = *(undefined4 *)&(param_2->CameraPose).Rotation.Pitch;
    local_208._4_4_ = *(undefined4 *)((longlong)&(param_2->CameraPose).Rotation.Pitch + 4);
    local_208._8_4_ = *(undefined4 *)&(param_2->CameraPose).Rotation.Yaw;
    uStack_1fc = *(undefined4 *)((longlong)&(param_2->CameraPose).Rotation.Yaw + 4);
    dVar3 = (param_2->CameraPose).Rotation.Roll;
    uVar25 = SUB84(dVar3,0);
    uVar26 = (undefined4)((ulonglong)dVar3 >> 0x20);
LAB_14d62a94a:
    local_1f8 = (double)CONCAT44(uVar26,uVar25);
    local_1b0.field0_0x0._s_0.Z = (double)CONCAT44(uVar26,uVar25);
  }
  else if (*(char *)(lVar21 + 0x68) == '\x02') {
    if ((param_1->EvaluationContext).Object != (FCameraEvaluationContext *)0x0) {
      pFVar22 = TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->
                          (&param_1->EvaluationContext);
      local_208._0_4_ = *(undefined4 *)&(pFVar22->InitialResult).CameraPose.Rotation.Pitch;
      local_208._4_4_ =
           *(undefined4 *)((longlong)&(pFVar22->InitialResult).CameraPose.Rotation.Pitch + 4);
      local_208._8_4_ = *(undefined4 *)&(pFVar22->InitialResult).CameraPose.Rotation.Yaw;
      uStack_1fc = *(undefined4 *)((longlong)&(pFVar22->InitialResult).CameraPose.Rotation.Yaw + 4);
      dVar3 = (pFVar22->InitialResult).CameraPose.Rotation.Roll;
      uVar25 = SUB84(dVar3,0);
      uVar26 = (undefined4)((ulonglong)dVar3 >> 0x20);
      goto LAB_14d62a94a;
    }
    if (1 < (byte)LogCameraSystem._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    }
  }
  (this->DebugLastDampingRotation).Pitch = (double)local_208._0_8_;
  (this->DebugLastDampingRotation).Yaw = stack0xfffffffffffffe00;
  (this->DebugLastDampingRotation).Roll = local_1f8;
  pTVar23 = UE::Math::TRotator<double>::RotateVector
                      ((TRotator<double> *)local_208,&local_1b0,
                       &UE::Math::TVector<double>::ForwardVector);
  local_148[0] = (pTVar23->field0_0x0)._s_0.X;
  local_148[1] = (pTVar23->field0_0x0)._s_0.Y;
  local_148[2] = (pTVar23->field0_0x0)._s_0.Z;
  local_130 = &this->ForwardDamper;
  pTVar23 = UE::Math::TRotator<double>::RotateVector
                      ((TRotator<double> *)local_208,&local_1b0,
                       &UE::Math::TVector<double>::RightVector);
  local_198 = (pTVar23->field0_0x0)._s_0.X;
  dStack_190 = (pTVar23->field0_0x0)._s_0.Y;
  local_118 = *(undefined8 *)((longlong)&pTVar23->field0_0x0 + 0x10);
  uStack_188 = (undefined4)local_118;
  uStack_184 = (undefined4)((ulonglong)local_118 >> 0x20);
  local_110 = &this->LateralDamper;
  local_128 = local_198;
  dStack_120 = dStack_190;
  pTVar23 = UE::Math::TRotator<double>::RotateVector
                      ((TRotator<double> *)local_208,&local_1b0,&UE::Math::TVector<double>::UpVector
                      );
  local_198 = (pTVar23->field0_0x0)._s_0.X;
  dStack_190 = (pTVar23->field0_0x0)._s_0.Y;
  local_f0 = &this->VerticalDamper;
  local_108 = local_198;
  dStack_100 = dStack_190;
  local_f8 = (pTVar23->field0_0x0)._s_0.Z;
  uVar25 = uVar28;
  uVar26 = uVar29;
  dVar3 = dVar15;
  if (param_1->bIsFirstFrame == false) {
    dVar27 = auVar7._8_8_;
    if (param_2->bIsCameraCut != false) {
      dVar2 = local_1d8 - (this->PreviousLagVector).field0_0x0._s_0.Z;
      dVar3 = dVar15 - (this->PreviousLagVector).field0_0x0._s_0.X;
      dVar27 = dVar27 - (this->PreviousLagVector).field0_0x0._s_0.Y;
      local_168 = dVar2;
      goto LAB_14d62ac5d;
    }
    dVar3 = (this->PreviousLocation).field0_0x0._s_0.X;
    dVar10 = (this->PreviousLocation).field0_0x0._s_0.Y;
    pdVar24 = local_148;
    dVar2 = (this->PreviousLocation).field0_0x0._s_0.Z;
    dVar4 = (this->PreviousLocation).field0_0x0._s_0.X;
    dVar5 = (this->PreviousLocation).field0_0x0._s_0.Y;
    dVar14 = local_1d8 - (this->PreviousLocation).field0_0x0._s_0.Z;
    local_1c8 = local_1d8;
    local_208._8_4_ = uVar28;
    local_208._0_8_ = dVar27;
    uStack_1fc = uVar29;
    local_1e8 = dVar3;
    dStack_1e0 = dVar10;
    do {
      dVar16 = *pdVar24;
      dVar17 = pdVar24[1];
      this_00 = (FCriticalDamper *)pdVar24[3];
      dVar6 = pdVar24[2];
      dVar13 = dVar16 * (dVar15 - dVar4) + dVar17 * (dVar27 - dVar5) + dVar6 * dVar14;
      local_1d8 = dVar2;
      FCriticalDamper::Update(this_00,(float)(dVar13 * __real_3f847ae147ae147b),param_1->DeltaTime);
      pdVar24 = pdVar24 + 4;
      dVar13 = dVar13 - (double)this_00->X0 * __real_4059000000000000;
      dVar3 = dVar13 * dVar16 + dVar3;
      dVar10 = dVar13 * dVar17 + dVar10;
      dVar2 = dVar2 + dVar13 * dVar6;
    } while (pdVar24 != local_e8);
    uVar30 = local_160._0_4_;
    uVar31 = local_160._4_4_;
    uVar25 = local_160._8_4_;
    uVar26 = local_160._12_4_;
    uVar28 = SUB84(dVar10,0);
    uVar29 = (undefined4)((ulonglong)dVar10 >> 0x20);
    (this->PreviousLagVector).field0_0x0._s_0.X = local_160._0_8_ - dVar3;
    (this->PreviousLagVector).field0_0x0._s_0.Y = (double)local_208._0_8_ - dVar10;
    (this->PreviousLagVector).field0_0x0._s_0.Z = local_1c8 - dVar2;
    local_168 = dVar2;
  }
  dVar27 = (double)CONCAT44(uVar29,uVar28);
  uVar28 = uVar25;
  uVar29 = uVar26;
LAB_14d62ac5d:
  uVar26 = (undefined4)((ulonglong)dVar27 >> 0x20);
  uVar25 = SUB84(dVar27,0);
  *(undefined4 *)&(this->DebugLastUndampedPosition).field0_0x0 = uVar30;
  *(undefined4 *)((longlong)&(this->DebugLastUndampedPosition).field0_0x0 + 4) = uVar31;
  *(undefined4 *)((longlong)&(this->DebugLastUndampedPosition).field0_0x0 + 8) = uVar28;
  *(undefined4 *)((longlong)&(this->DebugLastUndampedPosition).field0_0x0 + 0xc) = uVar29;
  auVar7._8_4_ = uVar25;
  auVar7._0_8_ = dVar3;
  auVar7._12_4_ = uVar26;
  *(undefined1 (*) [16])&(this->DebugLastDampedPosition).field0_0x0 = auVar7;
  auVar11._8_4_ = uVar25;
  auVar11._0_8_ = dVar3;
  auVar11._12_4_ = uVar26;
  *(undefined1 (*) [16])&(this->PreviousLocation).field0_0x0 = auVar11;
  (this->DebugLastUndampedPosition).field0_0x0._s_0.Z = local_1b8;
  (this->DebugLastDampedPosition).field0_0x0._s_0.Z = dVar2;
  (this->PreviousLocation).field0_0x0._s_0.Z = dVar2;
  if (((dVar3 != (param_2->CameraPose).Location.field0_0x0._s_0.X) ||
      (dVar27 != (param_2->CameraPose).Location.field0_0x0._s_0.Y)) ||
     (local_168 != (param_2->CameraPose).Location.field0_0x0._s_0.Z)) {
    pFVar1->Location = true;
    auVar12._8_4_ = uVar25;
    auVar12._0_8_ = dVar3;
    auVar12._12_4_ = uVar26;
    *(undefined1 (*) [16])&(param_2->CameraPose).Location.field0_0x0 = auVar12;
    (param_2->CameraPose).Location.field0_0x0._s_0.Z = dVar2;
  }
  return;
}

// OnSerialize @ 14d62da50

void __thiscall
UE::Cameras::FDampenPositionCameraNodeEvaluator::OnSerialize
          (FDampenPositionCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  Cameras::operator<<(param_2,&this->ForwardDamper);
  Cameras::operator<<(param_2,&this->LateralDamper);
  Cameras::operator<<(param_2,&this->VerticalDamper);
  UE::Math::operator<<(param_2,&this->PreviousLocation);
  UE::Math::operator<<(param_2,&this->DebugLastUndampedPosition);
  UE::Math::operator<<(param_2,&this->DebugLastDampedPosition);
  UE::Math::operator<<(param_2,&this->DebugLastDampingRotation);
  return;
}

