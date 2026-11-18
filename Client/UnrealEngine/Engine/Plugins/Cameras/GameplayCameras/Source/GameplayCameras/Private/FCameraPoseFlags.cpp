// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 32

// FCameraPoseFlags @ 14d58cfc0

FCameraPoseFlags * __thiscall FCameraPoseFlags::FCameraPoseFlags(FCameraPoseFlags *this)

{
  undefined1 *puVar1;
  
  this->ProjectionMode = false;
  this->Location = false;
  this->NearClippingPlane = false;
  this->PhysicalCameraBlendWeight = false;
  this->DiaphragmBladeCount = false;
  this->Overscan = false;
  this->SqueezeFactor = false;
  this->ISO = false;
  this->SensorVerticalOffset = false;
  this->SensorHorizontalOffset = false;
  this->SensorHeight = false;
  this->SensorWidth = false;
  this->FocusDistance = false;
  this->ShutterSpeed = false;
  this->Aperture = false;
  this->TargetDistance = false;
  this->Rotation = false;
  puVar1 = &this->field_0x2;
  this->FarClippingPlane = false;
  this->AspectRatioAxisConstraint = false;
  this->OverrideAspectRatioAxisConstraint = false;
  this->ConstrainAspectRatio = false;
  this->EnablePhysicalCamera = false;
  this->FocalLength = false;
  this->FieldOfView = false;
  this->OrthographicWidth = false;
  return this;
}

// FCameraPoseFlags @ 14d58cfe0

FCameraPoseFlags * __thiscall
FCameraPoseFlags::FCameraPoseFlags(FCameraPoseFlags *this,bool param_1)

{
  byte bVar1;
  
  this->ProjectionMode = false;
  this->field_0x3 = this->field_0x3 | param_1;
  bVar1 = ((((((param_1 * '\x02' | param_1) * '\x02' | param_1) * '\x02' | param_1) * '\x02' |
            param_1) * '\x02' | param_1) * '\x02' | param_1) * '\x02' | param_1;
  *(byte *)this = bVar1;
  this->field_0x1 = bVar1;
  this->field_0x2 = bVar1;
  return this;
}

// AND @ 14d5962d0

FCameraPoseFlags * __thiscall
FCameraPoseFlags::AND(FCameraPoseFlags *this,FCameraPoseFlags *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  
  uVar3 = *(undefined1 *)this;
  if ((((undefined1 *)this)->Location) && (param_1->Location)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  *(byte *)this = uVar3 & 0xfe | bVar10;
  if ((this->Rotation) && (param_1->Rotation)) {
    bVar12 = 2;
  }
  else {
    bVar12 = 0;
  }
  *(byte *)this = uVar3 & 0xfc | bVar10 | bVar12;
  if ((this->TargetDistance) && (param_1->TargetDistance)) {
    bVar13 = 4;
  }
  else {
    bVar13 = 0;
  }
  *(byte *)this = uVar3 & 0xf8 | bVar10 | bVar12 | bVar13;
  if ((this->Aperture) && (param_1->Aperture)) {
    bVar14 = 8;
  }
  else {
    bVar14 = 0;
  }
  *(byte *)this = uVar3 & 0xf0 | bVar10 | bVar12 | bVar13 | bVar14;
  if ((this->ShutterSpeed) && (param_1->ShutterSpeed)) {
    bVar15 = 0x10;
  }
  else {
    bVar15 = 0;
  }
  *(byte *)this = uVar3 & 0xe0 | bVar10 | bVar12 | bVar13 | bVar14 | bVar15;
  if ((this->FocusDistance) && (param_1->FocusDistance)) {
    bVar16 = 0x20;
  }
  else {
    bVar16 = 0;
  }
  *(byte *)this = uVar3 & 0xc0 | bVar10 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16;
  if ((this->SensorWidth) && (param_1->SensorWidth)) {
    bVar17 = 0x40;
  }
  else {
    bVar17 = 0;
  }
  this->Location = bVar10;
  this->SensorHeight = ((undefined1 *)this)->SensorHeight;
  this->SensorWidth = bVar17 >> 6;
  this->FocusDistance = bVar16 >> 5;
  this->ShutterSpeed = bVar15 >> 4;
  this->Aperture = bVar14 >> 3;
  this->TargetDistance = bVar13 >> 2;
  this->Rotation = bVar12 >> 1;
  if (((char)(uVar3 & 0x80 | bVar10 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16 | bVar17) < '\0')
     && (param_1->SensorHeight)) {
    bVar11 = 0x80;
  }
  else {
    bVar11 = 0;
  }
  this->Location = bVar10;
  this->SensorHeight = bVar11 >> 7;
  this->SensorWidth = bVar17 >> 6;
  this->FocusDistance = bVar16 >> 5;
  this->ShutterSpeed = bVar15 >> 4;
  this->Aperture = bVar14 >> 3;
  this->TargetDistance = bVar13 >> 2;
  this->Rotation = bVar12 >> 1;
  puVar2 = &this->field_0x1;
  uVar3 = *puVar2;
  if ((this->SensorHorizontalOffset) && (param_1->SensorHorizontalOffset)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  this->field_0x1 = uVar3 & 0xfe | bVar10;
  if ((this->SensorVerticalOffset) && (param_1->SensorVerticalOffset)) {
    bVar12 = 2;
  }
  else {
    bVar12 = 0;
  }
  this->field_0x1 = uVar3 & 0xfc | bVar10 | bVar12;
  if ((this->ISO) && (param_1->ISO)) {
    bVar13 = 4;
  }
  else {
    bVar13 = 0;
  }
  this->field_0x1 = uVar3 & 0xf8 | bVar10 | bVar12 | bVar13;
  if ((this->SqueezeFactor) && (param_1->SqueezeFactor)) {
    bVar14 = 8;
  }
  else {
    bVar14 = 0;
  }
  this->field_0x1 = uVar3 & 0xf0 | bVar10 | bVar12 | bVar13 | bVar14;
  if ((this->Overscan) && (param_1->Overscan)) {
    bVar15 = 0x10;
  }
  else {
    bVar15 = 0;
  }
  this->field_0x1 = uVar3 & 0xe0 | bVar10 | bVar12 | bVar13 | bVar14 | bVar15;
  if ((this->DiaphragmBladeCount) && (param_1->DiaphragmBladeCount)) {
    bVar16 = 0x20;
  }
  else {
    bVar16 = 0;
  }
  this->field_0x1 = uVar3 & 0xc0 | bVar10 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16;
  if ((this->PhysicalCameraBlendWeight) && (param_1->PhysicalCameraBlendWeight)) {
    bVar17 = 0x40;
  }
  else {
    bVar17 = 0;
  }
  puVar1 = &this->field_0x1;
  this->SensorHorizontalOffset = bVar10;
  this->NearClippingPlane = this->NearClippingPlane;
  this->PhysicalCameraBlendWeight = bVar17 >> 6;
  this->DiaphragmBladeCount = bVar16 >> 5;
  this->Overscan = bVar15 >> 4;
  this->SqueezeFactor = bVar14 >> 3;
  this->ISO = bVar13 >> 2;
  this->SensorVerticalOffset = bVar12 >> 1;
  if (((char)(uVar3 & 0x80 | bVar10 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16 | bVar17) < '\0')
     && (param_1->NearClippingPlane)) {
    bVar11 = 0x80;
  }
  else {
    bVar11 = 0;
  }
  puVar2 = &this->field_0x1;
  this->SensorHorizontalOffset = bVar10;
  this->NearClippingPlane = bVar11 >> 7;
  this->PhysicalCameraBlendWeight = bVar17 >> 6;
  this->DiaphragmBladeCount = bVar16 >> 5;
  this->Overscan = bVar15 >> 4;
  this->SqueezeFactor = bVar14 >> 3;
  this->ISO = bVar13 >> 2;
  this->SensorVerticalOffset = bVar12 >> 1;
  puVar2 = &this->field_0x2;
  uVar3 = *puVar2;
  if ((this->FarClippingPlane) && (param_1->FarClippingPlane)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  this->field_0x2 = uVar3 & 0xfe | bVar10;
  if ((this->OrthographicWidth) && (param_1->OrthographicWidth)) {
    bVar12 = 2;
  }
  else {
    bVar12 = 0;
  }
  this->field_0x2 = uVar3 & 0xfc | bVar10 | bVar12;
  if ((this->FieldOfView) && (param_1->FieldOfView)) {
    bVar13 = 4;
  }
  else {
    bVar13 = 0;
  }
  this->field_0x2 = uVar3 & 0xf8 | bVar10 | bVar12 | bVar13;
  if ((this->FocalLength) && (param_1->FocalLength)) {
    bVar14 = 8;
  }
  else {
    bVar14 = 0;
  }
  this->field_0x2 = uVar3 & 0xf0 | bVar10 | bVar12 | bVar13 | bVar14;
  if ((this->EnablePhysicalCamera) && (param_1->EnablePhysicalCamera)) {
    bVar15 = 0x10;
  }
  else {
    bVar15 = 0;
  }
  this->field_0x2 = uVar3 & 0xe0 | bVar10 | bVar12 | bVar13 | bVar14 | bVar15;
  if ((this->ConstrainAspectRatio) && (param_1->ConstrainAspectRatio)) {
    bVar16 = 0x20;
  }
  else {
    bVar16 = 0;
  }
  this->field_0x2 = uVar3 & 0xc0 | bVar10 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16;
  if ((this->OverrideAspectRatioAxisConstraint) && (param_1->OverrideAspectRatioAxisConstraint)) {
    bVar17 = 0x40;
  }
  else {
    bVar17 = 0;
  }
  puVar1 = &this->field_0x2;
  this->FarClippingPlane = bVar10;
  this->AspectRatioAxisConstraint = this->AspectRatioAxisConstraint;
  this->OverrideAspectRatioAxisConstraint = bVar17 >> 6;
  this->ConstrainAspectRatio = bVar16 >> 5;
  this->EnablePhysicalCamera = bVar15 >> 4;
  this->FocalLength = bVar14 >> 3;
  this->FieldOfView = bVar13 >> 2;
  this->OrthographicWidth = bVar12 >> 1;
  if (((char)(uVar3 & 0x80 | bVar10 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16 | bVar17) < '\0')
     && (param_1->AspectRatioAxisConstraint)) {
    bVar11 = 0x80;
  }
  else {
    bVar11 = 0;
  }
  puVar1 = &this->field_0x2;
  this->FarClippingPlane = bVar10;
  this->AspectRatioAxisConstraint = bVar11 >> 7;
  this->OverrideAspectRatioAxisConstraint = bVar17 >> 6;
  this->ConstrainAspectRatio = bVar16 >> 5;
  this->EnablePhysicalCamera = bVar15 >> 4;
  this->FocalLength = bVar14 >> 3;
  this->FieldOfView = bVar13 >> 2;
  this->OrthographicWidth = bVar12 >> 1;
  uVar3 = this->field_0x3;
  if ((this->ProjectionMode) && (param_1->ProjectionMode)) {
    this->field_0x3 = uVar3 & 0xfe | 1;
    return this;
  }
  this->field_0x3 = uVar3 & 0xfe;
  return this;
}

// All @ 14d598ff0

FCameraPoseFlags * __cdecl FCameraPoseFlags::All(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Instance.ProjectionMode = true;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Instance;
}

// ExclusiveCombine @ 14d5a3080

FCameraPoseFlags * __thiscall
FCameraPoseFlags::ExclusiveCombine(FCameraPoseFlags *this,FCameraPoseFlags *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [8];
  
  if (param_1->Location) {
    if (this->Location) {
      `FCameraPoseFlags::ExclusiveCombine'::__l5::<lambda_1>::operator()(local_res8);
    }
    this->Location = true;
  }
  if (param_1->Rotation) {
    if (this->Rotation) {
      `FCameraPoseFlags::ExclusiveCombine'::__l8::<lambda_2>::operator()(local_res8);
    }
    this->Rotation = true;
  }
  if (param_1->TargetDistance) {
    if (this->TargetDistance) {
      `FCameraPoseFlags::ExclusiveCombine'::__l11::<lambda_3>::operator()(local_res8);
    }
    this->TargetDistance = true;
  }
  if (param_1->Aperture) {
    if (this->Aperture) {
      `FCameraPoseFlags::ExclusiveCombine'::__l14::<lambda_4>::operator()(local_res8);
    }
    this->Aperture = true;
  }
  if (param_1->ShutterSpeed) {
    if (this->ShutterSpeed) {
      `FCameraPoseFlags::ExclusiveCombine'::__l17::<lambda_5>::operator()(local_res8);
    }
    this->ShutterSpeed = true;
  }
  if (param_1->FocusDistance) {
    if (this->FocusDistance) {
      `FCameraPoseFlags::ExclusiveCombine'::__l20::<lambda_6>::operator()(local_res8);
    }
    this->FocusDistance = true;
  }
  if (param_1->SensorWidth) {
    if (this->SensorWidth) {
      `FCameraPoseFlags::ExclusiveCombine'::__l23::<lambda_7>::operator()(local_res8);
    }
    this->SensorWidth = true;
  }
  if (param_1->SensorHeight) {
    if (this->SensorHeight) {
      `FCameraPoseFlags::ExclusiveCombine'::__l26::<lambda_8>::operator()(local_res8);
    }
    this->SensorHeight = true;
  }
  puVar1 = &this->field_0x1;
  if (param_1->SensorHorizontalOffset) {
    if (this->SensorHorizontalOffset) {
      `FCameraPoseFlags::ExclusiveCombine'::__l29::<lambda_9>::operator()(local_res8);
    }
    this->SensorHorizontalOffset = true;
  }
  if (param_1->SensorVerticalOffset) {
    if (this->SensorVerticalOffset) {
      `FCameraPoseFlags::ExclusiveCombine'::__l32::<lambda_10>::operator()(local_res8);
    }
    this->SensorVerticalOffset = true;
  }
  puVar2 = &this->field_0x1;
  if (param_1->ISO) {
    if (this->ISO) {
      `FCameraPoseFlags::ExclusiveCombine'::__l35::<lambda_11>::operator()(local_res8);
    }
    this->ISO = true;
  }
  puVar1 = &this->field_0x1;
  if (param_1->SqueezeFactor) {
    if (this->SqueezeFactor) {
      `FCameraPoseFlags::ExclusiveCombine'::__l38::<lambda_12>::operator()(local_res8);
    }
    this->SqueezeFactor = true;
  }
  puVar2 = &this->field_0x1;
  if (param_1->Overscan) {
    if (this->Overscan) {
      `FCameraPoseFlags::ExclusiveCombine'::__l41::<lambda_13>::operator()(local_res8);
    }
    this->Overscan = true;
  }
  puVar1 = &this->field_0x1;
  if (param_1->DiaphragmBladeCount) {
    if (this->DiaphragmBladeCount) {
      `FCameraPoseFlags::ExclusiveCombine'::__l44::<lambda_14>::operator()(local_res8);
    }
    this->DiaphragmBladeCount = true;
  }
  puVar2 = &this->field_0x1;
  if (param_1->PhysicalCameraBlendWeight) {
    if (this->PhysicalCameraBlendWeight) {
      `FCameraPoseFlags::ExclusiveCombine'::__l47::<lambda_15>::operator()(local_res8);
    }
    this->PhysicalCameraBlendWeight = true;
  }
  if (param_1->NearClippingPlane) {
    if (this->NearClippingPlane) {
      `FCameraPoseFlags::ExclusiveCombine'::__l50::<lambda_16>::operator()(local_res8);
    }
    this->NearClippingPlane = true;
  }
  puVar1 = &this->field_0x2;
  if (param_1->FarClippingPlane) {
    if (this->FarClippingPlane) {
      `FCameraPoseFlags::ExclusiveCombine'::__l53::<lambda_17>::operator()(local_res8);
    }
    this->FarClippingPlane = true;
  }
  if (param_1->OrthographicWidth) {
    if (this->OrthographicWidth) {
      `FCameraPoseFlags::ExclusiveCombine'::__l56::<lambda_18>::operator()(local_res8);
    }
    this->OrthographicWidth = true;
  }
  puVar2 = &this->field_0x2;
  if (param_1->FieldOfView) {
    if (this->FieldOfView) {
      `FCameraPoseFlags::ExclusiveCombine'::__l59::<lambda_19>::operator()(local_res8);
    }
    this->FieldOfView = true;
  }
  puVar1 = &this->field_0x2;
  if (param_1->FocalLength) {
    if (this->FocalLength) {
      `FCameraPoseFlags::ExclusiveCombine'::__l62::<lambda_20>::operator()(local_res8);
    }
    this->FocalLength = true;
  }
  puVar2 = &this->field_0x2;
  if (param_1->EnablePhysicalCamera) {
    if (this->EnablePhysicalCamera) {
      `FCameraPoseFlags::ExclusiveCombine'::__l65::<lambda_21>::operator()(local_res8);
    }
    this->EnablePhysicalCamera = true;
  }
  puVar1 = &this->field_0x2;
  if (param_1->ConstrainAspectRatio) {
    if (this->ConstrainAspectRatio) {
      `FCameraPoseFlags::ExclusiveCombine'::__l68::<lambda_22>::operator()(local_res8);
    }
    this->ConstrainAspectRatio = true;
  }
  puVar2 = &this->field_0x2;
  if (param_1->OverrideAspectRatioAxisConstraint) {
    if (this->OverrideAspectRatioAxisConstraint) {
      `FCameraPoseFlags::ExclusiveCombine'::__l71::<lambda_23>::operator()(local_res8);
    }
    this->OverrideAspectRatioAxisConstraint = true;
  }
  if (param_1->AspectRatioAxisConstraint) {
    if (this->AspectRatioAxisConstraint) {
      `FCameraPoseFlags::ExclusiveCombine'::__l74::<lambda_24>::operator()(local_res8);
    }
    this->AspectRatioAxisConstraint = true;
  }
  if (param_1->ProjectionMode) {
    if (this->ProjectionMode) {
      `FCameraPoseFlags::ExclusiveCombine'::__l77::<lambda_25>::operator()(local_res8);
    }
    this->ProjectionMode = true;
  }
  return this;
}

// OR @ 14d5b6e60

FCameraPoseFlags * __thiscall FCameraPoseFlags::OR(FCameraPoseFlags *this,FCameraPoseFlags *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  
  uVar3 = *(undefined1 *)this;
  if ((((undefined1 *)this)->Location) || (param_1->Location)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  *(byte *)this = uVar3 & 0xfe | bVar10;
  if ((this->Rotation) || (param_1->Rotation)) {
    bVar11 = 2;
  }
  else {
    bVar11 = 0;
  }
  *(byte *)this = uVar3 & 0xfc | bVar10 | bVar11;
  if ((this->TargetDistance) || (param_1->TargetDistance)) {
    bVar12 = 4;
  }
  else {
    bVar12 = 0;
  }
  *(byte *)this = uVar3 & 0xf8 | bVar10 | bVar11 | bVar12;
  if ((this->Aperture) || (param_1->Aperture)) {
    bVar13 = 8;
  }
  else {
    bVar13 = 0;
  }
  *(byte *)this = uVar3 & 0xf0 | bVar10 | bVar11 | bVar12 | bVar13;
  if ((this->ShutterSpeed) || (param_1->ShutterSpeed)) {
    bVar14 = 0x10;
  }
  else {
    bVar14 = 0;
  }
  *(byte *)this = uVar3 & 0xe0 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14;
  if ((this->FocusDistance) || (param_1->FocusDistance)) {
    bVar15 = 0x20;
  }
  else {
    bVar15 = 0;
  }
  *(byte *)this = uVar3 & 0xc0 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14 | bVar15;
  if ((this->SensorWidth) || (param_1->SensorWidth)) {
    bVar16 = 0x40;
  }
  else {
    bVar16 = 0;
  }
  this->Location = bVar10;
  this->SensorHeight = ((undefined1 *)this)->SensorHeight;
  this->SensorWidth = bVar16 >> 6;
  this->FocusDistance = bVar15 >> 5;
  this->ShutterSpeed = bVar14 >> 4;
  this->Aperture = bVar13 >> 3;
  this->TargetDistance = bVar12 >> 2;
  this->Rotation = bVar11 >> 1;
  if (((char)(uVar3 & 0x80 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16) < '\0')
     || (param_1->SensorHeight)) {
    bVar17 = 0x80;
  }
  else {
    bVar17 = 0;
  }
  this->Location = bVar10;
  this->SensorHeight = bVar17 >> 7;
  this->SensorWidth = bVar16 >> 6;
  this->FocusDistance = bVar15 >> 5;
  this->ShutterSpeed = bVar14 >> 4;
  this->Aperture = bVar13 >> 3;
  this->TargetDistance = bVar12 >> 2;
  this->Rotation = bVar11 >> 1;
  puVar2 = &this->field_0x1;
  uVar3 = *puVar2;
  if ((this->SensorHorizontalOffset) || (param_1->SensorHorizontalOffset)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  this->field_0x1 = uVar3 & 0xfe | bVar10;
  if ((this->SensorVerticalOffset) || (param_1->SensorVerticalOffset)) {
    bVar11 = 2;
  }
  else {
    bVar11 = 0;
  }
  this->field_0x1 = uVar3 & 0xfc | bVar10 | bVar11;
  if ((this->ISO) || (param_1->ISO)) {
    bVar12 = 4;
  }
  else {
    bVar12 = 0;
  }
  this->field_0x1 = uVar3 & 0xf8 | bVar10 | bVar11 | bVar12;
  if ((this->SqueezeFactor) || (param_1->SqueezeFactor)) {
    bVar13 = 8;
  }
  else {
    bVar13 = 0;
  }
  this->field_0x1 = uVar3 & 0xf0 | bVar10 | bVar11 | bVar12 | bVar13;
  if ((this->Overscan) || (param_1->Overscan)) {
    bVar14 = 0x10;
  }
  else {
    bVar14 = 0;
  }
  this->field_0x1 = uVar3 & 0xe0 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14;
  if ((this->DiaphragmBladeCount) || (param_1->DiaphragmBladeCount)) {
    bVar15 = 0x20;
  }
  else {
    bVar15 = 0;
  }
  this->field_0x1 = uVar3 & 0xc0 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14 | bVar15;
  if ((this->PhysicalCameraBlendWeight) || (param_1->PhysicalCameraBlendWeight)) {
    bVar16 = 0x40;
  }
  else {
    bVar16 = 0;
  }
  puVar1 = &this->field_0x1;
  this->SensorHorizontalOffset = bVar10;
  this->NearClippingPlane = this->NearClippingPlane;
  this->PhysicalCameraBlendWeight = bVar16 >> 6;
  this->DiaphragmBladeCount = bVar15 >> 5;
  this->Overscan = bVar14 >> 4;
  this->SqueezeFactor = bVar13 >> 3;
  this->ISO = bVar12 >> 2;
  this->SensorVerticalOffset = bVar11 >> 1;
  if (((char)(uVar3 & 0x80 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16) < '\0')
     || (param_1->NearClippingPlane)) {
    bVar17 = 0x80;
  }
  else {
    bVar17 = 0;
  }
  puVar2 = &this->field_0x1;
  this->SensorHorizontalOffset = bVar10;
  this->NearClippingPlane = bVar17 >> 7;
  this->PhysicalCameraBlendWeight = bVar16 >> 6;
  this->DiaphragmBladeCount = bVar15 >> 5;
  this->Overscan = bVar14 >> 4;
  this->SqueezeFactor = bVar13 >> 3;
  this->ISO = bVar12 >> 2;
  this->SensorVerticalOffset = bVar11 >> 1;
  puVar2 = &this->field_0x2;
  uVar3 = *puVar2;
  if ((this->FarClippingPlane) || (param_1->FarClippingPlane)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  this->field_0x2 = uVar3 & 0xfe | bVar10;
  if ((this->OrthographicWidth) || (param_1->OrthographicWidth)) {
    bVar11 = 2;
  }
  else {
    bVar11 = 0;
  }
  this->field_0x2 = uVar3 & 0xfc | bVar10 | bVar11;
  if ((this->FieldOfView) || (param_1->FieldOfView)) {
    bVar12 = 4;
  }
  else {
    bVar12 = 0;
  }
  this->field_0x2 = uVar3 & 0xf8 | bVar10 | bVar11 | bVar12;
  if ((this->FocalLength) || (param_1->FocalLength)) {
    bVar13 = 8;
  }
  else {
    bVar13 = 0;
  }
  this->field_0x2 = uVar3 & 0xf0 | bVar10 | bVar11 | bVar12 | bVar13;
  if ((this->EnablePhysicalCamera) || (param_1->EnablePhysicalCamera)) {
    bVar14 = 0x10;
  }
  else {
    bVar14 = 0;
  }
  this->field_0x2 = uVar3 & 0xe0 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14;
  if ((this->ConstrainAspectRatio) || (param_1->ConstrainAspectRatio)) {
    bVar15 = 0x20;
  }
  else {
    bVar15 = 0;
  }
  this->field_0x2 = uVar3 & 0xc0 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14 | bVar15;
  if ((this->OverrideAspectRatioAxisConstraint) || (param_1->OverrideAspectRatioAxisConstraint)) {
    bVar16 = 0x40;
  }
  else {
    bVar16 = 0;
  }
  puVar1 = &this->field_0x2;
  this->FarClippingPlane = bVar10;
  this->AspectRatioAxisConstraint = this->AspectRatioAxisConstraint;
  this->OverrideAspectRatioAxisConstraint = bVar16 >> 6;
  this->ConstrainAspectRatio = bVar15 >> 5;
  this->EnablePhysicalCamera = bVar14 >> 4;
  this->FocalLength = bVar13 >> 3;
  this->FieldOfView = bVar12 >> 2;
  this->OrthographicWidth = bVar11 >> 1;
  if (((char)(uVar3 & 0x80 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16) < '\0')
     || (param_1->AspectRatioAxisConstraint)) {
    bVar17 = 0x80;
  }
  else {
    bVar17 = 0;
  }
  puVar1 = &this->field_0x2;
  this->FarClippingPlane = bVar10;
  this->AspectRatioAxisConstraint = bVar17 >> 7;
  this->OverrideAspectRatioAxisConstraint = bVar16 >> 6;
  this->ConstrainAspectRatio = bVar15 >> 5;
  this->EnablePhysicalCamera = bVar14 >> 4;
  this->FocalLength = bVar13 >> 3;
  this->FieldOfView = bVar12 >> 2;
  this->OrthographicWidth = bVar11 >> 1;
  uVar3 = this->field_0x3;
  if ((!this->ProjectionMode) && (!param_1->ProjectionMode)) {
    this->field_0x3 = uVar3 & 0xfe;
    return this;
  }
  this->field_0x3 = uVar3 & 0xfe | 1;
  return this;
}

// SetAllFlags @ 14d5ce1b0

FCameraPoseFlags * __thiscall FCameraPoseFlags::SetAllFlags(FCameraPoseFlags *this,bool param_1)

{
  byte bVar1;
  
  this->ProjectionMode = false;
  this->field_0x3 = this->field_0x3 | param_1;
  bVar1 = ((((param_1 << 3 | param_1) * '\x02' | param_1) * '\x02' | param_1) * '\x02' | param_1) *
          '\x02' | (param_1 | param_1 * '\x02') << 5 | param_1;
  *(byte *)this = bVar1;
  this->field_0x1 = bVar1;
  this->field_0x2 = bVar1;
  return this;
}

// operator() @ 150581170

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l32::<lambda_10>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505811b0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l35::<lambda_11>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505811f0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l38::<lambda_12>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150581230

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l41::<lambda_13>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150581270

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l44::<lambda_14>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505812b0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l47::<lambda_15>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505812f0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l50::<lambda_16>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150581330

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l53::<lambda_17>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150581370

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l56::<lambda_18>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505813b0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l59::<lambda_19>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505830b0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583630

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l62::<lambda_20>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583670

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l65::<lambda_21>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505836b0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l68::<lambda_22>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505836f0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l71::<lambda_23>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583730

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l74::<lambda_24>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583770

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l77::<lambda_25>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583830

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583ba0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l11::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583be0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l14::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583c20

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l17::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583c60

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l20::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583ca0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l23::<lambda_7>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583ce0

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l26::<lambda_8>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150583d20

bool __thiscall `FCameraPoseFlags::ExclusiveCombine'::__l29::<lambda_9>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<65707313092100151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<65707313092100151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

