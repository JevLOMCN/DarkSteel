// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FQueuedDrawDebugItem @ 147433de0

FQueuedDrawDebugItem * __thiscall
FQueuedDrawDebugItem::FQueuedDrawDebugItem(FQueuedDrawDebugItem *this,FQueuedDrawDebugItem *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->ItemType).Value = (param_1->ItemType).Value;
  uVar1 = *(undefined8 *)((longlong)&param_1->field1_0x8 + 8);
  *(undefined8 *)&this->field1_0x8 = *(undefined8 *)&param_1->field1_0x8;
  *(undefined8 *)((longlong)&this->field1_0x8 + 8) = uVar1;
  *(undefined8 *)((longlong)&this->field1_0x8 + 0x10) =
       *(undefined8 *)((longlong)&param_1->field1_0x8 + 0x10);
  (this->field1_0x8)._s_1.Length = (param_1->field1_0x8)._s_1.Length;
  (this->field1_0x8)._s_1.AngleWidth = (param_1->field1_0x8)._s_1.AngleWidth;
  (this->field1_0x8)._s_1.AngleHeight = (param_1->field1_0x8)._s_1.AngleHeight;
  uVar1 = *(undefined8 *)((longlong)&param_1->field2_0x20 + 8);
  *(undefined8 *)&this->field2_0x20 = *(undefined8 *)&param_1->field2_0x20;
  *(undefined8 *)((longlong)&this->field2_0x20 + 8) = uVar1;
  *(undefined8 *)((longlong)&this->field2_0x20 + 0x10) =
       *(undefined8 *)((longlong)&param_1->field2_0x20 + 0x10);
  uVar1 = *(undefined8 *)((longlong)&param_1->field2_0x20 + 8);
  *(undefined8 *)&this->field2_0x20 = *(undefined8 *)&param_1->field2_0x20;
  *(undefined8 *)((longlong)&this->field2_0x20 + 8) = uVar1;
  *(undefined8 *)((longlong)&this->field2_0x20 + 0x10) =
       *(undefined8 *)((longlong)&param_1->field2_0x20 + 0x10);
  dVar2 = (param_1->Center).field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = (param_1->Center).field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar2;
  (this->Center).field0_0x0._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
  dVar2 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
  this->Radius = param_1->Radius;
  this->Size = param_1->Size;
  this->Segments = param_1->Segments;
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  this->bPersistentLines = param_1->bPersistentLines;
  this->LifeTime = param_1->LifeTime;
  this->Thickness = param_1->Thickness;
  ::FString::FString(&this->Message,&param_1->Message);
  dVar2 = (param_1->TextScale).field0_0x0._s_0.Y;
  (this->TextScale).field0_0x0._s_0.X = (param_1->TextScale).field0_0x0._s_0.X;
  (this->TextScale).field0_0x0._s_0.Y = dVar2;
  (this->DepthPriority).Value = (param_1->DepthPriority).Value;
  return this;
}

