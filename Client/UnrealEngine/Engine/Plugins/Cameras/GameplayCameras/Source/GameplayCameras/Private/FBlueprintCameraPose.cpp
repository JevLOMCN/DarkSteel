// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// StaticStruct @ 14d579300

UScriptStruct * __cdecl FBlueprintCameraPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraPose.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FBlueprintCameraPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCameraPose,(UObject *)pUVar1,
                         L"BlueprintCameraPose");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintCameraPose.OuterSingleton;
}

// ApplyTo @ 14d59a430

void __thiscall FBlueprintCameraPose::ApplyTo(FBlueprintCameraPose *this,FCameraPose *param_1)

{
  FCameraPoseFlags *pFVar1;
  float fVar2;
  double dVar3;
  byte bVar4;
  bool bVar5;
  uchar uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  if ((((this->Location).field0_0x0._s_0.X != (param_1->Location).field0_0x0._s_0.X) ||
      ((this->Location).field0_0x0._s_0.Y != (param_1->Location).field0_0x0._s_0.Y)) ||
     ((this->Location).field0_0x0._s_0.Z != (param_1->Location).field0_0x0._s_0.Z)) {
    (param_1->ChangedFlags).Location = true;
    dVar3 = (this->Location).field0_0x0._s_0.Y;
    (param_1->Location).field0_0x0._s_0.X = (this->Location).field0_0x0._s_0.X;
    (param_1->Location).field0_0x0._s_0.Y = dVar3;
    (param_1->Location).field0_0x0._s_0.Z = (this->Location).field0_0x0._s_0.Z;
  }
  if ((((this->Rotation).Pitch != (param_1->Rotation).Pitch) ||
      ((this->Rotation).Yaw != (param_1->Rotation).Yaw)) ||
     ((this->Rotation).Roll != (param_1->Rotation).Roll)) {
    (param_1->ChangedFlags).Rotation = true;
    dVar3 = (this->Rotation).Yaw;
    (param_1->Rotation).Pitch = (this->Rotation).Pitch;
    (param_1->Rotation).Yaw = dVar3;
    (param_1->Rotation).Roll = (this->Rotation).Roll;
  }
  dVar3 = this->TargetDistance;
  if (dVar3 != param_1->TargetDistance) {
    (param_1->ChangedFlags).TargetDistance = true;
    param_1->TargetDistance = dVar3;
  }
  fVar2 = this->Aperture;
  if (fVar2 != param_1->Aperture) {
    (param_1->ChangedFlags).Aperture = true;
    param_1->Aperture = fVar2;
  }
  fVar2 = this->ShutterSpeed;
  if (fVar2 != param_1->ShutterSpeed) {
    pFVar1->ShutterSpeed = true;
    param_1->ShutterSpeed = fVar2;
  }
  fVar2 = this->FocusDistance;
  if (fVar2 != param_1->FocusDistance) {
    pFVar1->FocusDistance = true;
    param_1->FocusDistance = fVar2;
  }
  fVar2 = this->SensorWidth;
  if (fVar2 != param_1->SensorWidth) {
    pFVar1->SensorWidth = true;
    param_1->SensorWidth = fVar2;
  }
  if (this->SensorHeight != param_1->SensorHeight) {
    param_1->SensorHeight = this->SensorHeight;
    (param_1->ChangedFlags).SensorHeight = true;
  }
  fVar2 = this->SensorHorizontalOffset;
  if (fVar2 != param_1->SensorHorizontalOffset) {
    (param_1->ChangedFlags).SensorHorizontalOffset = true;
    param_1->SensorHorizontalOffset = fVar2;
  }
  fVar2 = this->SensorVerticalOffset;
  if (fVar2 != param_1->SensorVerticalOffset) {
    (param_1->ChangedFlags).SensorVerticalOffset = true;
    param_1->SensorVerticalOffset = fVar2;
  }
  fVar2 = this->ISO;
  if (fVar2 != param_1->ISO) {
    (param_1->ChangedFlags).ISO = true;
    param_1->ISO = fVar2;
  }
  if (this->SqueezeFactor != param_1->SqueezeFactor) {
    param_1->SqueezeFactor = this->SqueezeFactor;
    (param_1->ChangedFlags).SqueezeFactor = true;
  }
  fVar2 = this->Overscan;
  if (fVar2 != param_1->Overscan) {
    (param_1->ChangedFlags).Overscan = true;
    param_1->Overscan = fVar2;
  }
  if (param_1->DiaphragmBladeCount != this->DiaphragmBladeCount) {
    param_1->DiaphragmBladeCount = this->DiaphragmBladeCount;
    (param_1->ChangedFlags).DiaphragmBladeCount = true;
  }
  fVar2 = this->PhysicalCameraBlendWeight;
  if (fVar2 != param_1->PhysicalCameraBlendWeight) {
    (param_1->ChangedFlags).PhysicalCameraBlendWeight = true;
    param_1->PhysicalCameraBlendWeight = fVar2;
  }
  if (this->NearClippingPlane != param_1->NearClippingPlane) {
    param_1->NearClippingPlane = this->NearClippingPlane;
    (param_1->ChangedFlags).NearClippingPlane = true;
  }
  fVar2 = this->FarClippingPlane;
  if (fVar2 != param_1->FarClippingPlane) {
    (param_1->ChangedFlags).FarClippingPlane = true;
    param_1->FarClippingPlane = fVar2;
  }
  fVar2 = this->OrthographicWidth;
  if (fVar2 != param_1->OrthographicWidth) {
    (param_1->ChangedFlags).OrthographicWidth = true;
    param_1->OrthographicWidth = fVar2;
  }
  fVar2 = this->FieldOfView;
  if (fVar2 != param_1->FieldOfView) {
    (param_1->ChangedFlags).FieldOfView = true;
    param_1->FieldOfView = fVar2;
  }
  if (this->FocalLength != param_1->FocalLength) {
    param_1->FocalLength = this->FocalLength;
    (param_1->ChangedFlags).FocalLength = true;
  }
  bVar5 = this->EnablePhysicalCamera;
  if (param_1->EnablePhysicalCamera != bVar5) {
    (param_1->ChangedFlags).EnablePhysicalCamera = true;
    param_1->EnablePhysicalCamera = bVar5;
  }
  if (param_1->ConstrainAspectRatio != this->ConstrainAspectRatio) {
    param_1->ConstrainAspectRatio = this->ConstrainAspectRatio;
    (param_1->ChangedFlags).ConstrainAspectRatio = true;
  }
  bVar5 = this->OverrideAspectRatioAxisConstraint;
  if (param_1->OverrideAspectRatioAxisConstraint != bVar5) {
    (param_1->ChangedFlags).OverrideAspectRatioAxisConstraint = true;
    param_1->OverrideAspectRatioAxisConstraint = bVar5;
  }
  uVar6 = (this->AspectRatioAxisConstraint).Value;
  if ((param_1->AspectRatioAxisConstraint).Value != uVar6) {
    (param_1->AspectRatioAxisConstraint).Value = uVar6;
    (param_1->ChangedFlags).AspectRatioAxisConstraint = true;
  }
  uVar6 = (this->ProjectionMode).Value;
  if ((param_1->ProjectionMode).Value != uVar6) {
    (param_1->ChangedFlags).ProjectionMode = true;
    (param_1->ProjectionMode).Value = uVar6;
  }
  return;
}

// FromCameraPose @ 14d5a5bf0

FBlueprintCameraPose * __cdecl
FBlueprintCameraPose::FromCameraPose
          (FBlueprintCameraPose *__return_storage_ptr__,FCameraPose *param_1)

{
  double dVar1;
  double dVar2;
  
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).Pitch = 0.0;
  (__return_storage_ptr__->Rotation).Yaw = 0.0;
  (__return_storage_ptr__->Rotation).Roll = 0.0;
  __return_storage_ptr__->PhysicalCameraBlendWeight = 0.0;
  __return_storage_ptr__->EnablePhysicalCamera = false;
  __return_storage_ptr__->ConstrainAspectRatio = false;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint = false;
  __return_storage_ptr__->AspectRatioAxisConstraint = '\0';
  __return_storage_ptr__->TargetDistance = 1000.0;
  __return_storage_ptr__->SensorHeight = 18.67;
  __return_storage_ptr__->SensorHorizontalOffset = 0.0;
  __return_storage_ptr__->SqueezeFactor = 1.0;
  __return_storage_ptr__->Overscan = 0.0;
  __return_storage_ptr__->FieldOfView = -1.0;
  __return_storage_ptr__->FocalLength = 35.0;
  __return_storage_ptr__->OrthographicWidth = 1536.0;
  __return_storage_ptr__->Aperture = 2.8;
  __return_storage_ptr__->ShutterSpeed = 60.0;
  __return_storage_ptr__->FocusDistance = -1.0;
  __return_storage_ptr__->SensorWidth = 24.89;
  __return_storage_ptr__->SensorVerticalOffset = 0.0;
  __return_storage_ptr__->ISO = 100.0;
  __return_storage_ptr__->DiaphragmBladeCount = 8;
  __return_storage_ptr__->NearClippingPlane = 10.0;
  __return_storage_ptr__->FarClippingPlane = -1.0;
  (__return_storage_ptr__->ProjectionMode).Value = '\0';
  dVar2 = (param_1->Location).field0_0x0._s_0.Y;
  dVar1 = (param_1->Location).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_1->Rotation).Yaw;
  (__return_storage_ptr__->Rotation).Pitch = (param_1->Rotation).Pitch;
  (__return_storage_ptr__->Rotation).Yaw = dVar1;
  (__return_storage_ptr__->Rotation).Roll = (param_1->Rotation).Roll;
  __return_storage_ptr__->TargetDistance = param_1->TargetDistance;
  __return_storage_ptr__->Aperture = param_1->Aperture;
  __return_storage_ptr__->ShutterSpeed = param_1->ShutterSpeed;
  __return_storage_ptr__->FocusDistance = param_1->FocusDistance;
  __return_storage_ptr__->SensorWidth = param_1->SensorWidth;
  __return_storage_ptr__->SensorHeight = param_1->SensorHeight;
  __return_storage_ptr__->SensorHorizontalOffset = param_1->SensorHorizontalOffset;
  __return_storage_ptr__->SensorVerticalOffset = param_1->SensorVerticalOffset;
  __return_storage_ptr__->ISO = param_1->ISO;
  __return_storage_ptr__->SqueezeFactor = param_1->SqueezeFactor;
  __return_storage_ptr__->Overscan = param_1->Overscan;
  __return_storage_ptr__->DiaphragmBladeCount = param_1->DiaphragmBladeCount;
  __return_storage_ptr__->PhysicalCameraBlendWeight = param_1->PhysicalCameraBlendWeight;
  __return_storage_ptr__->NearClippingPlane = param_1->NearClippingPlane;
  __return_storage_ptr__->FarClippingPlane = param_1->FarClippingPlane;
  __return_storage_ptr__->OrthographicWidth = param_1->OrthographicWidth;
  __return_storage_ptr__->FieldOfView = param_1->FieldOfView;
  __return_storage_ptr__->FocalLength = param_1->FocalLength;
  __return_storage_ptr__->EnablePhysicalCamera = param_1->EnablePhysicalCamera;
  __return_storage_ptr__->ConstrainAspectRatio = param_1->ConstrainAspectRatio;
  __return_storage_ptr__->OverrideAspectRatioAxisConstraint =
       param_1->OverrideAspectRatioAxisConstraint;
  (__return_storage_ptr__->AspectRatioAxisConstraint).Value =
       (param_1->AspectRatioAxisConstraint).Value;
  (__return_storage_ptr__->ProjectionMode).Value = (param_1->ProjectionMode).Value;
  return __return_storage_ptr__;
}

