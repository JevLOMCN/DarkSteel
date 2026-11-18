// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// operator+= @ 146ddc1d0

TBox<double> * __thiscall
UE::Math::TBox<double>::operator+=(TBox<double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  if (this->IsValid != '\0') {
    dVar5 = *(double *)&param_1->field0_0x0;
    uVar3 = SUB84(dVar5,0);
    uVar4 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar1 = *(double *)&(this->Min).field0_0x0;
    if (dVar1 <= dVar5) {
      uVar3 = SUB84(dVar1,0);
      uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    dVar5 = (this->Max).field0_0x0._s_0.X;
    (this->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar4,uVar3);
    dVar1 = *(double *)((longlong)&(this->Min).field0_0x0 + 8);
    uVar3 = SUB84(dVar1,0);
    uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    if (dVar2 <= dVar1) {
      uVar3 = SUB84(dVar2,0);
      uVar4 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar4,uVar3);
    dVar1 = *(double *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar3 = SUB84(dVar1,0);
    uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->Min).field0_0x0 + 0x10);
    if (dVar2 <= dVar1) {
      uVar3 = SUB84(dVar2,0);
      uVar4 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar4,uVar3);
    dVar1 = (param_1->field0_0x0)._s_0.X;
    if (dVar5 <= dVar1) {
      dVar5 = dVar1;
    }
    dVar1 = *(double *)((longlong)&(this->Max).field0_0x0 + 8);
    uVar3 = SUB84(dVar1,0);
    uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    (this->Max).field0_0x0._s_0.X = dVar5;
    dVar5 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    if (dVar1 <= dVar5) {
      uVar3 = SUB84(dVar5,0);
      uVar4 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
    dVar5 = (this->Max).field0_0x0._s_0.Z;
    (this->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar4,uVar3);
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    if (dVar5 <= dVar1) {
      dVar5 = dVar1;
    }
    (this->Max).field0_0x0._s_0.Z = dVar5;
    return this;
  }
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  (this->Max).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Max).field0_0x0._s_0.Y = dVar5;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  (this->Max).field0_0x0._s_0.Z = dVar5;
  dVar1 = (this->Max).field0_0x0._s_0.X;
  dVar2 = (this->Max).field0_0x0._s_0.Y;
  this->IsValid = '\x01';
  (this->Min).field0_0x0._s_0.X = dVar1;
  (this->Min).field0_0x0._s_0.Y = dVar2;
  (this->Min).field0_0x0._s_0.Z = dVar5;
  return this;
}

// ContainsNaN @ 146e46070

bool __thiscall UE::Math::TBox<double>::ContainsNaN(TBox<double> *this)

{
  int iVar1;
  
  iVar1 = _finite((this->Min).field0_0x0._s_0.X);
  if (iVar1 != 0) {
    iVar1 = _finite((this->Min).field0_0x0._s_0.Y);
    if (iVar1 != 0) {
      iVar1 = _finite((this->Min).field0_0x0._s_0.Z);
      if (iVar1 != 0) {
        iVar1 = _finite((this->Max).field0_0x0._s_0.X);
        if (iVar1 != 0) {
          iVar1 = _finite((this->Max).field0_0x0._s_0.Y);
          if (iVar1 != 0) {
            iVar1 = _finite((this->Max).field0_0x0._s_0.Z);
            if (iVar1 != 0) {
              return false;
            }
          }
        }
      }
    }
  }
  return true;
}

