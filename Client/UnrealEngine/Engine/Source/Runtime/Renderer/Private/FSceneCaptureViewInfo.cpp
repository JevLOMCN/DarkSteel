// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FSceneCaptureViewInfo @ 1450b07d0

FSceneCaptureViewInfo * __thiscall
FSceneCaptureViewInfo::FSceneCaptureViewInfo
          (FSceneCaptureViewInfo *this,FSceneCaptureViewInfo *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = uVar1;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x38;
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&param_1->field_0x30;
  *(undefined8 *)&this->field_0x38 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x48;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&this->field_0x48 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x58;
  *(undefined8 *)&this->field_0x50 = *(undefined8 *)&param_1->field_0x50;
  *(undefined8 *)&this->field_0x58 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x68;
  *(undefined8 *)&this->field_0x60 = *(undefined8 *)&param_1->field_0x60;
  *(undefined8 *)&this->field_0x68 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x78;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_1->field_0x70;
  *(undefined8 *)&this->field_0x78 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x88;
  *(undefined8 *)&this->field_0x80 = *(undefined8 *)&param_1->field_0x80;
  *(undefined8 *)&this->field_0x88 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x98;
  *(undefined8 *)&this->field_0x90 = *(undefined8 *)&param_1->field_0x90;
  *(undefined8 *)&this->field_0x98 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xa8;
  *(undefined8 *)&this->field_0xa0 = *(undefined8 *)&param_1->field_0xa0;
  *(undefined8 *)&this->field_0xa8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xb8;
  *(undefined8 *)&this->field_0xb0 = *(undefined8 *)&param_1->field_0xb0;
  *(undefined8 *)&this->field_0xb8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xc8;
  *(undefined8 *)&this->field_0xc0 = *(undefined8 *)&param_1->field_0xc0;
  *(undefined8 *)&this->field_0xc8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xd8;
  *(undefined8 *)&this->field_0xd0 = *(undefined8 *)&param_1->field_0xd0;
  *(undefined8 *)&this->field_0xd8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xe8;
  *(undefined8 *)&this->field_0xe0 = *(undefined8 *)&param_1->field_0xe0;
  *(undefined8 *)&this->field_0xe8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0xf8;
  *(undefined8 *)&this->field_0xf0 = *(undefined8 *)&param_1->field_0xf0;
  *(undefined8 *)&this->field_0xf8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x108;
  *(undefined8 *)&this->field_0x100 = *(undefined8 *)&param_1->field_0x100;
  *(undefined8 *)&this->field_0x108 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x118;
  *(undefined8 *)&this->field_0x110 = *(undefined8 *)&param_1->field_0x110;
  *(undefined8 *)&this->field_0x118 = uVar1;
  *(undefined8 *)&this->field_0x120 = *(undefined8 *)&param_1->field_0x120;
  *(undefined8 *)&this->field_0x128 = *(undefined8 *)&param_1->field_0x128;
  uVar1 = *(undefined8 *)&param_1->field_0x138;
  *(undefined8 *)&this->field_0x130 = *(undefined8 *)&param_1->field_0x130;
  *(undefined8 *)&this->field_0x138 = uVar1;
  *(undefined8 *)&this->field_0x140 = *(undefined8 *)&param_1->field_0x140;
  *(undefined8 *)&this->field_0x148 = *(undefined8 *)&param_1->field_0x148;
  *(undefined8 *)&this->field_0x150 = *(undefined8 *)&param_1->field_0x150;
  dVar2 = (param_1->ViewLocation).field0_0x0._s_0.Y;
  (this->ViewLocation).field0_0x0._s_0.X = (param_1->ViewLocation).field0_0x0._s_0.X;
  (this->ViewLocation).field0_0x0._s_0.Y = dVar2;
  (this->ViewLocation).field0_0x0._s_0.Z = (param_1->ViewLocation).field0_0x0._s_0.Z;
  dVar2 = (param_1->ViewRotation).Yaw;
  (this->ViewRotation).Pitch = (param_1->ViewRotation).Pitch;
  (this->ViewRotation).Yaw = dVar2;
  (this->ViewRotation).Roll = (param_1->ViewRotation).Roll;
  this->StereoPass = param_1->StereoPass;
  this->StereoViewIndex = param_1->StereoViewIndex;
  this->FOV = param_1->FOV;
  return this;
}

// FSceneCaptureViewInfo @ 145477c70

FSceneCaptureViewInfo * __thiscall
FSceneCaptureViewInfo::FSceneCaptureViewInfo(FSceneCaptureViewInfo *this)

{
  FSceneViewProjectionData::FSceneViewProjectionData((FSceneViewProjectionData *)this);
  return this;
}

