// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// FCameraSystemEvaluationResult @ 14d58e1e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraSystemEvaluationResult * __thiscall
UE::Cameras::FCameraSystemEvaluationResult::FCameraSystemEvaluationResult
          (FCameraSystemEvaluationResult *this)

{
  undefined1 *puVar1;
  
  (this->CameraPose).ChangedFlags.ProjectionMode = false;
  (this->CameraPose).SensorVerticalOffset = 0.0;
  (this->CameraPose).PhysicalCameraBlendWeight = 0.0;
  (this->CameraPose).EnablePhysicalCamera = false;
  (this->CameraPose).ConstrainAspectRatio = false;
  (this->CameraPose).OverrideAspectRatioAxisConstraint = false;
  (this->CameraPose).AspectRatioAxisConstraint = '\0';
  *(undefined4 *)&(this->CameraPose).ProjectionMode = 0;
  (this->VariableTable).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariableTable).Entries.ArrayNum = 0;
  (this->VariableTable).Entries.ArrayMax = 0;
  *(undefined8 *)&(this->VariableTable).EntryLookup = 0;
  *(undefined8 *)&(this->VariableTable).EntryLookup.field_0x8 = 0;
  *(undefined8 *)&(this->VariableTable).EntryLookup.field_0x20 = 0;
  (this->CameraPose).Location.field0_0x0._s_0.X = 0.0;
  (this->CameraPose).Location.field0_0x0._s_0.Y = 0.0;
  (this->CameraPose).Location.field0_0x0._s_0.Z = 0.0;
  (this->CameraPose).Rotation.Pitch = 0.0;
  (this->CameraPose).Rotation.Yaw = 0.0;
  (this->CameraPose).Rotation.Roll = 0.0;
  (this->CameraPose).TargetDistance = 1000.0;
  (this->CameraPose).FieldOfView = -1.0;
  (this->CameraPose).FocalLength = 35.0;
  (this->CameraPose).OrthographicWidth = 1536.0;
  (this->CameraPose).Aperture = 2.8;
  (this->CameraPose).ShutterSpeed = 60.0;
  (this->CameraPose).FocusDistance = -1.0;
  (this->CameraPose).SensorWidth = 24.89;
  (this->CameraPose).SensorHeight = 18.67;
  (this->CameraPose).SensorHorizontalOffset = 0.0;
  (this->CameraPose).ISO = 100.0;
  (this->CameraPose).SqueezeFactor = 1.0;
  (this->CameraPose).Overscan = 0.0;
  (this->CameraPose).DiaphragmBladeCount = 8;
  (this->CameraPose).NearClippingPlane = 10.0;
  (this->CameraPose).FarClippingPlane = -1.0;
  *(undefined4 *)&(this->VariableTable).EntryLookup.field_0x28 = 0;
  *(undefined4 *)&(this->VariableTable).EntryLookup.field_0x2c = 0x80;
  *(undefined4 *)&(this->VariableTable).EntryLookup.field_0x34 = 0;
  *(undefined4 *)&(this->VariableTable).EntryLookup.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VariableTable).EntryLookup.field_0x40 = 0;
  *(undefined4 *)&(this->VariableTable).EntryLookup.field_0x48 = 0;
  (this->VariableTable).Memory = (uchar *)0x0;
  (this->VariableTable).Capacity = 0;
  (this->VariableTable).Used = 0;
  FCameraContextDataTable::FCameraContextDataTable(&this->ContextDataTable);
  FPostProcessSettings::FPostProcessSettings(&(this->PostProcessSettings).PostProcessSettings);
  this->bIsCameraCut = false;
  this->bIsValid = false;
  return this;
}

// Reset @ 14d5cbef0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluationResult::Reset
          (FCameraSystemEvaluationResult *this,FCameraNodeEvaluationResult *param_1)

{
  undefined1 *puVar1;
  FCameraPoseFlags *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar12;
  FCameraPoseFlags FVar13;
  undefined3 uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  
  (this->CameraPose).ChangedFlags.ProjectionMode = false;
  pFVar2 = &(this->CameraPose).ChangedFlags;
  pFVar2->Location = false;
  pFVar2.NearClippingPlane = false;
  pFVar2.PhysicalCameraBlendWeight = false;
  pFVar2.DiaphragmBladeCount = false;
  pFVar2.Overscan = false;
  pFVar2.SqueezeFactor = false;
  pFVar2.ISO = false;
  pFVar2.SensorVerticalOffset = false;
  pFVar2.SensorHorizontalOffset = false;
  pFVar2->SensorHeight = false;
  pFVar2->SensorWidth = false;
  pFVar2->FocusDistance = false;
  pFVar2->ShutterSpeed = false;
  pFVar2->Aperture = false;
  pFVar2->TargetDistance = false;
  pFVar2->Rotation = false;
  puVar1 = &(this->CameraPose).ChangedFlags.field_0x2;
  (this->CameraPose).ChangedFlags.FarClippingPlane = false;
  (this->CameraPose).ChangedFlags.AspectRatioAxisConstraint = false;
  (this->CameraPose).ChangedFlags.OverrideAspectRatioAxisConstraint = false;
  (this->CameraPose).ChangedFlags.ConstrainAspectRatio = false;
  (this->CameraPose).ChangedFlags.EnablePhysicalCamera = false;
  (this->CameraPose).ChangedFlags.FocalLength = false;
  (this->CameraPose).ChangedFlags.FieldOfView = false;
  (this->CameraPose).ChangedFlags.OrthographicWidth = false;
  pFVar15 = (this->VariableTable).Entries.AllocatorInstance.Data;
  iVar4 = (this->VariableTable).Entries.ArrayNum;
  pFVar3 = pFVar15 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->VariableTable).Entries.ArrayNum != iVar4) {
      `TCheckedPointerIterator<UE::Cameras::FCameraVariableTable::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar3) break;
    pFVar15[0x14] = (FScriptContainerElement)((byte)pFVar15[0x14] & 0xef);
    pFVar15 = pFVar15 + 0x18;
  }
  FCameraContextDataTable::ClearAllWrittenThisFrameFlags(&this->ContextDataTable);
  this->bIsCameraCut = false;
  this->bIsValid = false;
  dVar5 = (param_1->CameraPose).Location.field0_0x0._s_0.Y;
  (this->CameraPose).Location.field0_0x0._s_0.X = (param_1->CameraPose).Location.field0_0x0._s_0.X;
  (this->CameraPose).Location.field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->CameraPose).Rotation.Pitch;
  (this->CameraPose).Location.field0_0x0._s_0.Z = (param_1->CameraPose).Location.field0_0x0._s_0.Z;
  (this->CameraPose).Rotation.Pitch = dVar5;
  dVar5 = (param_1->CameraPose).Rotation.Roll;
  (this->CameraPose).Rotation.Yaw = (param_1->CameraPose).Rotation.Yaw;
  (this->CameraPose).Rotation.Roll = dVar5;
  fVar6 = (param_1->CameraPose).FieldOfView;
  fVar7 = (param_1->CameraPose).FocalLength;
  (this->CameraPose).TargetDistance = (param_1->CameraPose).TargetDistance;
  (this->CameraPose).FieldOfView = fVar6;
  (this->CameraPose).FocalLength = fVar7;
  fVar6 = (param_1->CameraPose).Aperture;
  fVar7 = (param_1->CameraPose).ShutterSpeed;
  fVar8 = (param_1->CameraPose).FocusDistance;
  (this->CameraPose).OrthographicWidth = (param_1->CameraPose).OrthographicWidth;
  (this->CameraPose).Aperture = fVar6;
  (this->CameraPose).ShutterSpeed = fVar7;
  (this->CameraPose).FocusDistance = fVar8;
  fVar6 = (param_1->CameraPose).SensorHeight;
  fVar7 = (param_1->CameraPose).SensorHorizontalOffset;
  fVar8 = (param_1->CameraPose).SensorVerticalOffset;
  (this->CameraPose).SensorWidth = (param_1->CameraPose).SensorWidth;
  (this->CameraPose).SensorHeight = fVar6;
  (this->CameraPose).SensorHorizontalOffset = fVar7;
  (this->CameraPose).SensorVerticalOffset = fVar8;
  fVar6 = (param_1->CameraPose).SqueezeFactor;
  fVar7 = (param_1->CameraPose).Overscan;
  iVar4 = (param_1->CameraPose).DiaphragmBladeCount;
  (this->CameraPose).ISO = (param_1->CameraPose).ISO;
  (this->CameraPose).SqueezeFactor = fVar6;
  (this->CameraPose).Overscan = fVar7;
  (this->CameraPose).DiaphragmBladeCount = iVar4;
  fVar6 = (param_1->CameraPose).FarClippingPlane;
  fVar7 = (param_1->CameraPose).PhysicalCameraBlendWeight;
  bVar9 = (param_1->CameraPose).EnablePhysicalCamera;
  bVar10 = (param_1->CameraPose).ConstrainAspectRatio;
  bVar11 = (param_1->CameraPose).OverrideAspectRatioAxisConstraint;
  TVar12.Value = (param_1->CameraPose).AspectRatioAxisConstraint.Value;
  (this->CameraPose).NearClippingPlane = (param_1->CameraPose).NearClippingPlane;
  (this->CameraPose).FarClippingPlane = fVar6;
  (this->CameraPose).PhysicalCameraBlendWeight = fVar7;
  (this->CameraPose).EnablePhysicalCamera = bVar9;
  (this->CameraPose).ConstrainAspectRatio = bVar10;
  (this->CameraPose).OverrideAspectRatioAxisConstraint = bVar11;
  (this->CameraPose).AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar12.Value;
  FVar13 = (param_1->CameraPose).ChangedFlags;
  uVar14 = *(undefined3 *)&(param_1->CameraPose).field_0x85;
  (this->CameraPose).ProjectionMode =
       (TEnumAsByte<ECameraProjectionMode::Type>)(param_1->CameraPose).ProjectionMode.Value;
  (this->CameraPose).ChangedFlags = FVar13;
  *(undefined3 *)&(this->CameraPose).field_0x85 = uVar14;
  FCameraVariableTable::InternalOverride
            (&this->VariableTable,&param_1->VariableTable,PublicOnly,
             (FCameraVariableTableFlags *)0x0,false,(FCameraVariableTableFlags *)0x0);
  FCameraContextDataTable::OverrideAll(&this->ContextDataTable,&param_1->ContextDataTable);
  FPostProcessSettings::operator=
            (&(this->PostProcessSettings).PostProcessSettings,
             &(param_1->PostProcessSettings).PostProcessSettings);
  this->bIsCameraCut = param_1->bIsCameraCut;
  this->bIsValid = true;
  return;
}

// Reset @ 14d5cc060

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraSystemEvaluationResult::Reset(FCameraSystemEvaluationResult *this)

{
  undefined1 *puVar1;
  FCameraPoseFlags *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  (this->CameraPose).ChangedFlags.ProjectionMode = false;
  pFVar2 = &(this->CameraPose).ChangedFlags;
  pFVar2->Location = false;
  pFVar2.NearClippingPlane = false;
  pFVar2.PhysicalCameraBlendWeight = false;
  pFVar2.DiaphragmBladeCount = false;
  pFVar2.Overscan = false;
  pFVar2.SqueezeFactor = false;
  pFVar2.ISO = false;
  pFVar2.SensorVerticalOffset = false;
  pFVar2.SensorHorizontalOffset = false;
  pFVar2->SensorHeight = false;
  pFVar2->SensorWidth = false;
  pFVar2->FocusDistance = false;
  pFVar2->ShutterSpeed = false;
  pFVar2->Aperture = false;
  pFVar2->TargetDistance = false;
  pFVar2->Rotation = false;
  puVar1 = &(this->CameraPose).ChangedFlags.field_0x2;
  (this->CameraPose).ChangedFlags.FarClippingPlane = false;
  (this->CameraPose).ChangedFlags.AspectRatioAxisConstraint = false;
  (this->CameraPose).ChangedFlags.OverrideAspectRatioAxisConstraint = false;
  (this->CameraPose).ChangedFlags.ConstrainAspectRatio = false;
  (this->CameraPose).ChangedFlags.EnablePhysicalCamera = false;
  (this->CameraPose).ChangedFlags.FocalLength = false;
  (this->CameraPose).ChangedFlags.FieldOfView = false;
  (this->CameraPose).ChangedFlags.OrthographicWidth = false;
  pFVar5 = (this->VariableTable).Entries.AllocatorInstance.Data;
  iVar4 = (this->VariableTable).Entries.ArrayNum;
  pFVar3 = pFVar5 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->VariableTable).Entries.ArrayNum != iVar4) {
      `TCheckedPointerIterator<UE::Cameras::FCameraVariableTable::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar3) break;
    pFVar5[0x14] = (FScriptContainerElement)((byte)pFVar5[0x14] & 0xef);
    pFVar5 = pFVar5 + 0x18;
  }
  FCameraContextDataTable::ClearAllWrittenThisFrameFlags(&this->ContextDataTable);
  this->bIsCameraCut = false;
  this->bIsValid = false;
  return;
}

