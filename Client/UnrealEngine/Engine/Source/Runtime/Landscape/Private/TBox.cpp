// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// operator+= @ 145f07920

TBox<double> * __thiscall
UE::Math::TBox<double>::operator+=(TBox<double> *this,TBox<double> *param_1)

{
  double dVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (this->IsValid == '\0') {
    if (param_1->IsValid != '\0') {
      dVar1 = (param_1->Min).field0_0x0._s_0.Y;
      (this->Min).field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
      (this->Min).field0_0x0._s_0.Y = dVar1;
      dVar1 = (param_1->Max).field0_0x0._s_0.X;
      (this->Min).field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
      (this->Max).field0_0x0._s_0.X = dVar1;
      dVar1 = (param_1->Max).field0_0x0._s_0.Z;
      (this->Max).field0_0x0._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
      (this->Max).field0_0x0._s_0.Z = dVar1;
      uVar3 = param_1->Pad[0];
      uVar4 = param_1->Pad[1];
      uVar5 = param_1->Pad[2];
      uVar6 = param_1->Pad[3];
      uVar7 = param_1->Pad[4];
      uVar8 = param_1->Pad[5];
      uVar9 = param_1->Pad[6];
      this->IsValid = param_1->IsValid;
      this->Pad[0] = uVar3;
      this->Pad[1] = uVar4;
      this->Pad[2] = uVar5;
      this->Pad[3] = uVar6;
      this->Pad[4] = uVar7;
      this->Pad[5] = uVar8;
      this->Pad[6] = uVar9;
    }
  }
  else if (param_1->IsValid != '\0') {
    dVar1 = *(double *)&(param_1->Min).field0_0x0;
    uVar10 = SUB84(dVar1,0);
    uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)&(this->Min).field0_0x0;
    if (dVar2 <= dVar1) {
      uVar10 = SUB84(dVar2,0);
      uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar11,uVar10);
    dVar1 = *(double *)((longlong)&(param_1->Min).field0_0x0 + 8);
    uVar10 = SUB84(dVar1,0);
    uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->Min).field0_0x0 + 8);
    if (dVar2 <= dVar1) {
      uVar10 = SUB84(dVar2,0);
      uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar11,uVar10);
    dVar1 = *(double *)((longlong)&(param_1->Min).field0_0x0 + 0x10);
    uVar10 = SUB84(dVar1,0);
    uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->Min).field0_0x0 + 0x10);
    if (dVar2 <= dVar1) {
      uVar10 = SUB84(dVar2,0);
      uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar11,uVar10);
    dVar1 = *(double *)&(param_1->Max).field0_0x0;
    uVar10 = SUB84(dVar1,0);
    uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)&(this->Max).field0_0x0;
    if (dVar1 <= dVar2) {
      uVar10 = SUB84(dVar2,0);
      uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar11,uVar10);
    dVar1 = *(double *)((longlong)&(param_1->Max).field0_0x0 + 8);
    uVar10 = SUB84(dVar1,0);
    uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->Max).field0_0x0 + 8);
    if (dVar1 <= dVar2) {
      uVar10 = SUB84(dVar2,0);
      uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar11,uVar10);
    dVar1 = *(double *)((longlong)&(param_1->Max).field0_0x0 + 0x10);
    uVar10 = SUB84(dVar1,0);
    uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->Max).field0_0x0 + 0x10);
    if (dVar1 <= dVar2) {
      uVar10 = SUB84(dVar2,0);
      uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar11,uVar10);
    return this;
  }
  return this;
}

