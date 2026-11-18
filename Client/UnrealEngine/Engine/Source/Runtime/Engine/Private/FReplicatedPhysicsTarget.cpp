// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FReplicatedPhysicsTarget @ 1482d9a40

FReplicatedPhysicsTarget * __thiscall
FReplicatedPhysicsTarget::FReplicatedPhysicsTarget
          (FReplicatedPhysicsTarget *this,FReplicatedPhysicsTarget *param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined7 uVar3;
  
  uVar1 = *(undefined8 *)&(param_1->TargetState).Position.field_0x8;
  *(undefined8 *)&(this->TargetState).Position = *(undefined8 *)&(param_1->TargetState).Position;
  *(undefined8 *)&(this->TargetState).Position.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->TargetState).field_0x18;
  *(undefined8 *)&(this->TargetState).Position.field_0x10 =
       *(undefined8 *)&(param_1->TargetState).Position.field_0x10;
  *(undefined8 *)&(this->TargetState).field_0x18 = uVar1;
  dVar2 = (param_1->TargetState).Quaternion.Y;
  (this->TargetState).Quaternion.X = (param_1->TargetState).Quaternion.X;
  (this->TargetState).Quaternion.Y = dVar2;
  dVar2 = (param_1->TargetState).Quaternion.W;
  (this->TargetState).Quaternion.Z = (param_1->TargetState).Quaternion.Z;
  (this->TargetState).Quaternion.W = dVar2;
  uVar1 = *(undefined8 *)&(param_1->TargetState).LinVel.field_0x8;
  *(undefined8 *)&(this->TargetState).LinVel = *(undefined8 *)&(param_1->TargetState).LinVel;
  *(undefined8 *)&(this->TargetState).LinVel.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_1->TargetState).AngVel;
  *(undefined8 *)&(this->TargetState).LinVel.field_0x10 =
       *(undefined8 *)&(param_1->TargetState).LinVel.field_0x10;
  *(undefined8 *)&(this->TargetState).AngVel = uVar1;
  uVar1 = *(undefined8 *)&(param_1->TargetState).AngVel.field_0x10;
  *(undefined8 *)&(this->TargetState).AngVel.field_0x8 =
       *(undefined8 *)&(param_1->TargetState).AngVel.field_0x8;
  *(undefined8 *)&(this->TargetState).AngVel.field_0x10 = uVar1;
  uVar3 = *(undefined7 *)&(param_1->TargetState).field_0x71;
  uVar1 = *(undefined8 *)&(param_1->TargetState).field_0x78;
  (this->TargetState).Flags = (param_1->TargetState).Flags;
  *(undefined7 *)&(this->TargetState).field_0x71 = uVar3;
  *(undefined8 *)&(this->TargetState).field_0x78 = uVar1;
  this->BoneName = param_1->BoneName;
  this->ArrivedTimeSeconds = param_1->ArrivedTimeSeconds;
  this->AccumulatedErrorSeconds = param_1->AccumulatedErrorSeconds;
  dVar2 = (param_1->PrevPosTarget).field0_0x0._s_0.Y;
  (this->PrevPosTarget).field0_0x0._s_0.X = (param_1->PrevPosTarget).field0_0x0._s_0.X;
  (this->PrevPosTarget).field0_0x0._s_0.Y = dVar2;
  (this->PrevPosTarget).field0_0x0._s_0.Z = (param_1->PrevPosTarget).field0_0x0._s_0.Z;
  dVar2 = (param_1->PrevPos).field0_0x0._s_0.Y;
  (this->PrevPos).field0_0x0._s_0.X = (param_1->PrevPos).field0_0x0._s_0.X;
  (this->PrevPos).field0_0x0._s_0.Y = dVar2;
  (this->PrevPos).field0_0x0._s_0.Z = (param_1->PrevPos).field0_0x0._s_0.Z;
  this->ServerFrame = param_1->ServerFrame;
  this->PhysicsObject = param_1->PhysicsObject;
  this->ReplicationMode = param_1->ReplicationMode;
  (this->ErrorHistory).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorHistory).Samples.AllocatorInstance.Data =
       (param_1->ErrorHistory).Samples.AllocatorInstance.Data;
  (param_1->ErrorHistory).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorHistory).Samples.ArrayNum = (param_1->ErrorHistory).Samples.ArrayNum;
  (this->ErrorHistory).Samples.ArrayMax = (param_1->ErrorHistory).Samples.ArrayMax;
  (param_1->ErrorHistory).Samples.ArrayNum = 0;
  (param_1->ErrorHistory).Samples.ArrayMax = 0;
  (this->ErrorHistory).MaxSamples = (param_1->ErrorHistory).MaxSamples;
  (this->ErrorHistory).MinValue = (param_1->ErrorHistory).MinValue;
  (this->ErrorHistory).MaxValue = (param_1->ErrorHistory).MaxValue;
  (this->ErrorHistory).bAutoAdjustMinMax = (param_1->ErrorHistory).bAutoAdjustMinMax;
  return this;
}

// FReplicatedPhysicsTarget @ 1482d9b80

FReplicatedPhysicsTarget * __thiscall
FReplicatedPhysicsTarget::FReplicatedPhysicsTarget
          (FReplicatedPhysicsTarget *this,FReplicatedPhysicsTarget *param_1)

{
  int *piVar1;
  FDebugFloatHistory *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  double dVar5;
  undefined7 uVar6;
  
  uVar4 = *(undefined8 *)&(param_1->TargetState).Position.field_0x8;
  pFVar2 = &this->ErrorHistory;
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
  this->BoneName = param_1->BoneName;
  this->ArrivedTimeSeconds = param_1->ArrivedTimeSeconds;
  this->AccumulatedErrorSeconds = param_1->AccumulatedErrorSeconds;
  dVar5 = (param_1->PrevPosTarget).field0_0x0._s_0.Y;
  (this->PrevPosTarget).field0_0x0._s_0.X = (param_1->PrevPosTarget).field0_0x0._s_0.X;
  (this->PrevPosTarget).field0_0x0._s_0.Y = dVar5;
  (this->PrevPosTarget).field0_0x0._s_0.Z = (param_1->PrevPosTarget).field0_0x0._s_0.Z;
  dVar5 = (param_1->PrevPos).field0_0x0._s_0.Y;
  (this->PrevPos).field0_0x0._s_0.X = (param_1->PrevPos).field0_0x0._s_0.X;
  (this->PrevPos).field0_0x0._s_0.Y = dVar5;
  (this->PrevPos).field0_0x0._s_0.Z = (param_1->PrevPos).field0_0x0._s_0.Z;
  this->ServerFrame = param_1->ServerFrame;
  this->PhysicsObject = param_1->PhysicsObject;
  this->ReplicationMode = param_1->ReplicationMode;
  (pFVar2->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ErrorHistory).Samples.ArrayMax;
  iVar3 = (param_1->ErrorHistory).Samples.ArrayNum;
  _Src = (param_1->ErrorHistory).Samples.AllocatorInstance.Data;
  (this->ErrorHistory).Samples.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
    memcpy((pFVar2->Samples).AllocatorInstance.Data,_Src,(longlong)iVar3 << 2);
  }
  (this->ErrorHistory).MaxSamples = (param_1->ErrorHistory).MaxSamples;
  (this->ErrorHistory).MinValue = (param_1->ErrorHistory).MinValue;
  (this->ErrorHistory).MaxValue = (param_1->ErrorHistory).MaxValue;
  (this->ErrorHistory).bAutoAdjustMinMax = (param_1->ErrorHistory).bAutoAdjustMinMax;
  return this;
}

