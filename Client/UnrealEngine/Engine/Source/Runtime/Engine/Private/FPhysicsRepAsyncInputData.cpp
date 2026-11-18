// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FPhysicsRepAsyncInputData @ 1482d9040

FPhysicsRepAsyncInputData * __thiscall
FPhysicsRepAsyncInputData::FPhysicsRepAsyncInputData
          (FPhysicsRepAsyncInputData *this,FPhysicsRepAsyncInputData *param_1)

{
  bool bVar1;
  int iVar2;
  FPhysicsObject *pFVar3;
  undefined8 uVar4;
  double dVar5;
  undefined7 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar4 = *(undefined8 *)&(param_1->TargetState).Position.field_0x8;
  *(undefined8 *)&(this->TargetState).Position = *(undefined8 *)&(param_1->TargetState).Position;
  *(undefined8 *)&(this->TargetState).Position.field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->TargetState).field_0x18;
  *(undefined8 *)&(this->TargetState).Position.field_0x10 =
       *(undefined8 *)&(param_1->TargetState).Position.field_0x10;
  *(undefined8 *)&(this->TargetState).field_0x18 = uVar4;
  dVar5 = (param_1->TargetState).Quaternion.Y;
  (this->TargetState).Quaternion.X = (param_1->TargetState).Quaternion.X;
  (this->TargetState).Quaternion.Y = dVar5;
  dVar5 = (param_1->TargetState).Quaternion.W;
  (this->TargetState).Quaternion.Z = (param_1->TargetState).Quaternion.Z;
  (this->TargetState).Quaternion.W = dVar5;
  uVar4 = *(undefined8 *)&(param_1->TargetState).LinVel.field_0x8;
  *(undefined8 *)&(this->TargetState).LinVel = *(undefined8 *)&(param_1->TargetState).LinVel;
  *(undefined8 *)&(this->TargetState).LinVel.field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(param_1->TargetState).AngVel;
  *(undefined8 *)&(this->TargetState).LinVel.field_0x10 =
       *(undefined8 *)&(param_1->TargetState).LinVel.field_0x10;
  *(undefined8 *)&(this->TargetState).AngVel = uVar4;
  uVar4 = *(undefined8 *)&(param_1->TargetState).AngVel.field_0x10;
  *(undefined8 *)&(this->TargetState).AngVel.field_0x8 =
       *(undefined8 *)&(param_1->TargetState).AngVel.field_0x8;
  *(undefined8 *)&(this->TargetState).AngVel.field_0x10 = uVar4;
  uVar6 = *(undefined7 *)&(param_1->TargetState).field_0x71;
  uVar4 = *(undefined8 *)&(param_1->TargetState).field_0x78;
  (this->TargetState).Flags = (param_1->TargetState).Flags;
  *(undefined7 *)&(this->TargetState).field_0x71 = uVar6;
  *(undefined8 *)&(this->TargetState).field_0x78 = uVar4;
  this->Proxy = param_1->Proxy;
  pFVar3 = param_1->PhysicsObject;
  (this->ErrorCorrection).bIsSet = false;
  this->PhysicsObject = pFVar3;
  bVar1 = (param_1->ErrorCorrection).bIsSet;
  (this->ErrorCorrection).bIsSet = bVar1;
  if (bVar1 != false) {
    fVar7 = (param_1->ErrorCorrection).TypedValue.AngularVelocityCoefficient;
    fVar8 = (param_1->ErrorCorrection).TypedValue.PositionLerp;
    fVar9 = (param_1->ErrorCorrection).TypedValue.AngleLerp;
    (this->ErrorCorrection).TypedValue.LinearVelocityCoefficient =
         (param_1->ErrorCorrection).TypedValue.LinearVelocityCoefficient;
    (this->ErrorCorrection).TypedValue.AngularVelocityCoefficient = fVar7;
    (this->ErrorCorrection).TypedValue.PositionLerp = fVar8;
    (this->ErrorCorrection).TypedValue.AngleLerp = fVar9;
  }
  this->RepMode = param_1->RepMode;
  iVar2 = param_1->ServerFrame;
  (this->FrameOffset).bIsSet = false;
  this->ServerFrame = iVar2;
  bVar1 = (param_1->FrameOffset).bIsSet;
  (this->FrameOffset).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->FrameOffset).TypedValue = (param_1->FrameOffset).TypedValue;
  }
  this->LatencyOneWay = param_1->LatencyOneWay;
  return this;
}

