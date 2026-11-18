// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FNodeDebugData @ 146dd6960

FNodeDebugData * __thiscall
FNavTestSceneProxy::FNodeDebugData::FNodeDebugData(FNodeDebugData *this,FNodeDebugData *param_1)

{
  undefined4 uVar1;
  double dVar2;
  uint uVar3;
  
  this->PolyRef = param_1->PolyRef;
  dVar2 = (param_1->Position).field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar2;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  ::FString::FString(&this->Desc,&param_1->Desc);
  (this->ParentId).Index = (param_1->ParentId).Index;
  uVar3 = (this->bClosedSet ^ param_1->bClosedSet) & 1 ^ *(uint *)&this->field_0x34;
  *(uint *)&this->field_0x34 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x34) & 2 ^ uVar3;
  *(uint *)&this->field_0x34 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&param_1->field_0x34) & 4 ^ uVar3;
  *(uint *)&this->field_0x34 = uVar3;
  *(uint *)&this->field_0x34 = (uVar3 ^ *(uint *)&param_1->field_0x34) & 8 ^ uVar3;
  return this;
}

