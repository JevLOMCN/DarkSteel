// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 1

// FSendBrickDataArgs @ 146c65fa0

FSendBrickDataArgs * __thiscall
IMRMesh::FSendBrickDataArgs::FSendBrickDataArgs
          (FSendBrickDataArgs *this,FSendBrickDataArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  
  (this->BrickDataReceipt).Object = (param_1->BrickDataReceipt).Object;
  pTVar1 = (param_1->BrickDataReceipt).SharedReferenceCount.ReferenceController;
  (this->BrickDataReceipt).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->BrickId = param_1->BrickId;
  this->PositionData = param_1->PositionData;
  this->UVData = param_1->UVData;
  this->TangentXZData = param_1->TangentXZData;
  this->ColorData = param_1->ColorData;
  this->Indices = param_1->Indices;
  dVar2 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (param_1->Bounds).Pad[0];
  uVar4 = (param_1->Bounds).Pad[1];
  uVar5 = (param_1->Bounds).Pad[2];
  uVar6 = (param_1->Bounds).Pad[3];
  uVar7 = (param_1->Bounds).Pad[4];
  uVar8 = (param_1->Bounds).Pad[5];
  uVar9 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar3;
  (this->Bounds).Pad[1] = uVar4;
  (this->Bounds).Pad[2] = uVar5;
  (this->Bounds).Pad[3] = uVar6;
  (this->Bounds).Pad[4] = uVar7;
  (this->Bounds).Pad[5] = uVar8;
  (this->Bounds).Pad[6] = uVar9;
  return this;
}

