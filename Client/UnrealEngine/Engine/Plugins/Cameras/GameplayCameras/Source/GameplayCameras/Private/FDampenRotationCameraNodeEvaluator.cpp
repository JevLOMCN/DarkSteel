// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// GetTypeID @ 14d61e5a0

FCameraObjectTypeID * __thiscall
UE::Cameras::FDampenRotationCameraNodeEvaluator::GetTypeID(FDampenRotationCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6211c0

bool __thiscall
UE::Cameras::FDampenRotationCameraNodeEvaluator::IsKindOf
          (FDampenRotationCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FDampenRotationCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuildDebugBlocks @ 14d624810

void __thiscall
UE::Cameras::FDampenRotationCameraNodeEvaluator::OnBuildDebugBlocks
          (FDampenRotationCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  double dVar1;
  FCameraDebugBlock *pFVar2;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar2 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x70,8);
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
  (pFVar2->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->Attachments).ArrayNum = 0;
  (pFVar2->Attachments).ArrayMax = 0;
  (pFVar2->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->Children).ArrayNum = 0;
  (pFVar2->Children).ArrayMax = 0;
  pFVar2->_padding_ = (longlong)&___7FDampenRotationCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar2);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar2);
  *(float *)&pFVar2[1]._padding_ = (this->YawDamper).X0;
  *(float *)((longlong)&pFVar2[1]._padding_ + 4) = (this->PitchDamper).X0;
  *(float *)&pFVar2[1].Attachments.AllocatorInstance.Data = (this->RollDamper).X0;
  *(float *)((longlong)&pFVar2[1].Attachments.AllocatorInstance.Data + 4) = (this->YawDamper).W0;
  pFVar2[1].Attachments.ArrayNum = (int)(this->PitchDamper).W0;
  pFVar2[1].Attachments.ArrayMax = (int)(this->RollDamper).W0;
  dVar1 = (this->DebugLastUndampedRotation).Yaw;
  pFVar2[1].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugLastUndampedRotation).Pitch;
  *(double *)&pFVar2[1].Children.ArrayNum = dVar1;
  pFVar2[2]._padding_ = (longlong)(this->DebugLastUndampedRotation).Roll;
  dVar1 = (this->DebugLastDampedRotation).Yaw;
  pFVar2[2].Attachments.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugLastDampedRotation).Pitch;
  *(double *)&pFVar2[2].Attachments.ArrayNum = dVar1;
  pFVar2[2].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugLastDampedRotation).Roll;
  return;
}

// OnInitialize @ 14d628520

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDampenRotationCameraNodeEvaluator::OnInitialize
          (FDampenRotationCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
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
    pUVar5 = UDampenRotationCameraNode::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar5);
    if (bVar4) {
      lVar7 = this->_padding_;
    }
  }
  (this->YawDampingFactorReader).DefaultValuePtr = (float *)(lVar7 + 0x38);
  (this->YawDampingFactorReader).VariableID.Value = *(uint *)(lVar7 + 0x3c);
  (this->PitchDampingFactorReader).DefaultValuePtr = (float *)(lVar7 + 0x48);
  (this->PitchDampingFactorReader).VariableID.Value = *(uint *)(lVar7 + 0x4c);
  (this->RollDampingFactorReader).DefaultValuePtr = (float *)(lVar7 + 0x58);
  (this->RollDampingFactorReader).VariableID.Value = *(uint *)(lVar7 + 0x5c);
  if (((this->YawDampingFactorReader).DefaultValuePtr == (float *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->YawDampingFactorReader).VariableID.Value == 0xffffffff) ||
     (pfVar6 = FCameraVariableTable::FindValue<float>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->YawDampingFactorReader).VariableID.Value),
     pfVar6 == (float *)0x0)) {
    pfVar6 = (this->YawDampingFactorReader).DefaultValuePtr;
  }
  (this->YawDamper).W0 = *pfVar6;
  (this->YawDamper).X0 = 0.0;
  (this->YawDamper).X0Derivative = 0.0;
  if (((this->PitchDampingFactorReader).DefaultValuePtr == (float *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->PitchDampingFactorReader).VariableID.Value == 0xffffffff) ||
     (pfVar6 = FCameraVariableTable::FindValue<float>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->PitchDampingFactorReader).VariableID.Value),
     pfVar6 == (float *)0x0)) {
    pfVar6 = (this->PitchDampingFactorReader).DefaultValuePtr;
  }
  (this->PitchDamper).W0 = *pfVar6;
  (this->PitchDamper).X0 = 0.0;
  (this->PitchDamper).X0Derivative = 0.0;
  if (((this->RollDampingFactorReader).DefaultValuePtr == (float *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->RollDampingFactorReader).VariableID.Value == 0xffffffff) ||
     (pfVar6 = FCameraVariableTable::FindValue<float>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->RollDampingFactorReader).VariableID.Value),
     pfVar6 == (float *)0x0)) {
    pfVar6 = (this->RollDampingFactorReader).DefaultValuePtr;
  }
  (this->RollDamper).W0 = *pfVar6;
  (this->RollDamper).X0 = 0.0;
  (this->RollDamper).X0Derivative = 0.0;
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
  dVar3 = (pFVar1->InitialResult).CameraPose.Rotation.Yaw;
  (this->PreviousRotation).Pitch = (pFVar1->InitialResult).CameraPose.Rotation.Pitch;
  (this->PreviousRotation).Yaw = dVar3;
  (this->PreviousRotation).Roll = (pFVar1->InitialResult).CameraPose.Rotation.Roll;
  return;
}

// OnRun @ 14d62ad50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDampenRotationCameraNodeEvaluator::OnRun
          (FDampenRotationCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  undefined1 auVar6 [12];
  double dVar7;
  double dVar8;
  float *pfVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  
  uVar3 = (this->PitchDampingFactorReader).VariableID.Value;
  uVar4 = (this->RollDampingFactorReader).VariableID.Value;
  if ((this->YawDampingFactorReader).VariableID.Value != 0xffffffff) {
    pfVar9 = TCameraParameterReader<float>::Get
                       (&this->YawDampingFactorReader,&param_2->VariableTable);
    (this->YawDamper).W0 = *pfVar9;
  }
  if (uVar3 != 0xffffffff) {
    pfVar9 = TCameraParameterReader<float>::Get
                       (&this->PitchDampingFactorReader,&param_2->VariableTable);
    (this->PitchDamper).W0 = *pfVar9;
  }
  if (uVar4 != 0xffffffff) {
    pfVar9 = TCameraParameterReader<float>::Get
                       (&this->RollDampingFactorReader,&param_2->VariableTable);
    (this->RollDamper).W0 = *pfVar9;
  }
  dVar7 = (param_2->CameraPose).Rotation.Pitch;
  dVar8 = (param_2->CameraPose).Rotation.Yaw;
  dVar2 = (param_2->CameraPose).Rotation.Roll;
  dVar25 = dVar2;
  dVar20 = dVar8;
  dVar5 = dVar7;
  if (param_1->bIsFirstFrame == false) {
    if (param_2->bIsCameraCut == false) {
      auVar15._0_8_ = (this->PreviousRotation).Roll - dVar2;
      dVar25 = (this->PreviousRotation).Pitch - dVar7;
      auVar21._0_8_ = (this->PreviousRotation).Yaw - dVar8;
      auVar21._8_8_ = 0;
      dVar30 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar13._8_4_ = SUB84(auVar21._0_8_,0);
      auVar13._0_8_ = dVar25;
      auVar13._12_4_ = (int)((ulonglong)auVar21._0_8_ >> 0x20);
      auVar14 = divpd(auVar13,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar14 = roundpd(auVar21,auVar14,3);
      auVar22._0_8_ = auVar14._0_8_ * dVar30;
      dVar31 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar22._8_8_ = auVar14._8_8_ * dVar31;
      auVar15._8_8_ = 0;
      dVar25 = dVar25 - auVar22._0_8_;
      dVar27 = auVar21._0_8_ - auVar22._8_8_;
      auVar14 = divpd(auVar15,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar14 = roundpd(auVar22,auVar14,3);
      dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar16._8_4_ = SUB84(dVar27,0);
      auVar16._0_8_ = dVar25;
      auVar16._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      dVar20 = auVar16._8_8_ + dVar31;
      dVar28 = auVar15._0_8_ - auVar14._0_8_ * dVar5;
      dVar29 = 0.0 - auVar14._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      uVar10 = -(ulonglong)(0.0 <= dVar25);
      uVar11 = -(ulonglong)(0.0 <= dVar27);
      auVar23._0_8_ = uVar10 & (ulonglong)dVar25;
      auVar23._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar27);
      auVar23._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar27) >> 0x20);
      auVar24._0_4_ = ~(uint)uVar10 & SUB84(dVar25 + dVar30,0);
      auVar24._4_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)(dVar25 + dVar30) >> 0x20);
      auVar24._8_4_ = ~(uint)uVar11 & SUB84(dVar20,0);
      auVar24._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar20 >> 0x20);
      auVar17._8_4_ = SUB84(dVar29,0);
      auVar17._0_8_ = dVar28;
      auVar17._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      auVar24 = auVar24 | auVar23;
      dVar20 = auVar17._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      uVar10 = -(ulonglong)(0.0 <= dVar28);
      uVar11 = -(ulonglong)(0.0 <= dVar29);
      auVar26._0_4_ = ~(uint)uVar10 & SUB84(dVar28 + dVar5,0);
      auVar26._4_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)(dVar28 + dVar5) >> 0x20);
      auVar26._8_4_ = ~(uint)uVar11 & SUB84(dVar20,0);
      auVar26._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar20 >> 0x20);
      auVar14._8_4_ = (int)((ulonglong)dVar29 & uVar11);
      auVar14._0_8_ = (ulonglong)dVar28 & uVar10;
      auVar14._12_4_ = (int)(((ulonglong)dVar29 & uVar11) >> 0x20);
      auVar26 = auVar26 | auVar14;
      uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar24._0_8_);
      uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar24._8_8_);
      auVar32._0_8_ = uVar11 & (ulonglong)(auVar24._0_8_ - dVar30);
      uVar10 = uVar12 & (ulonglong)(auVar24._8_8_ - dVar31);
      auVar32._8_4_ = (undefined4)uVar10;
      auVar32._12_4_ = (undefined4)(uVar10 >> 0x20);
      uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar26._0_8_);
      auVar18._0_4_ = ~(uint)uVar11 & auVar24._0_4_;
      auVar18._4_4_ = ~(uint)(uVar11 >> 0x20) & auVar24._4_4_;
      auVar18._8_4_ = ~(uint)uVar12 & auVar24._8_4_;
      auVar18._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar24._12_4_;
      auVar32 = auVar32 | auVar18;
      auVar6._4_8_ = auVar18._8_8_;
      auVar6._0_4_ = auVar32._4_4_;
      auVar19._0_8_ = auVar6._0_8_ << 0x20;
      auVar19._8_4_ = auVar32._8_4_;
      auVar19._12_4_ = auVar32._12_4_;
      FCriticalDamper::Update(&this->YawDamper,(float)auVar19._8_8_,param_1->DeltaTime);
      FCriticalDamper::Update(&this->PitchDamper,(float)auVar32._0_8_,param_1->DeltaTime);
      FCriticalDamper::Update
                (&this->RollDamper,
                 (float)(double)(uVar10 & (ulonglong)(auVar26._0_8_ - dVar5) |
                                CONCAT44(~(uint)(uVar10 >> 0x20) & auVar26._4_4_,
                                         ~(uint)uVar10 & auVar26._0_4_)),param_1->DeltaTime);
    }
    dVar25 = (double)(this->RollDamper).X0 + dVar2;
    dVar20 = dVar8 + (double)(this->YawDamper).X0;
    dVar5 = (double)(this->PitchDamper).X0 + dVar7;
  }
  (this->DebugLastUndampedRotation).Pitch = dVar7;
  (this->DebugLastUndampedRotation).Yaw = dVar8;
  (this->DebugLastUndampedRotation).Roll = dVar2;
  (this->DebugLastDampedRotation).Pitch = dVar5;
  (this->DebugLastDampedRotation).Yaw = dVar20;
  (this->PreviousRotation).Pitch = dVar5;
  (this->PreviousRotation).Yaw = dVar20;
  (this->DebugLastDampedRotation).Roll = dVar25;
  (this->PreviousRotation).Roll = dVar25;
  if (((dVar5 != (param_2->CameraPose).Rotation.Pitch) ||
      (dVar20 != (param_2->CameraPose).Rotation.Yaw)) ||
     (dVar25 != (param_2->CameraPose).Rotation.Roll)) {
    pFVar1->Rotation = true;
    (param_2->CameraPose).Rotation.Pitch = dVar5;
    (param_2->CameraPose).Rotation.Yaw = dVar20;
    (param_2->CameraPose).Rotation.Roll = dVar25;
  }
  return;
}

// OnSerialize @ 14d62db50

void __thiscall
UE::Cameras::FDampenRotationCameraNodeEvaluator::OnSerialize
          (FDampenRotationCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  Cameras::operator<<(param_2,&this->YawDamper);
  Cameras::operator<<(param_2,&this->PitchDamper);
  Cameras::operator<<(param_2,&this->RollDamper);
  UE::Math::operator<<(param_2,&this->PreviousRotation);
  UE::Math::operator<<(param_2,&this->DebugLastUndampedRotation);
  UE::Math::operator<<(param_2,&this->DebugLastDampedRotation);
  return;
}

