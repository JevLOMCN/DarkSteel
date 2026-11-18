// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TBox<double> @ 141c89520

TBox<double> * __thiscall
UE::Math::TBox<double>::TBox<double>(TBox<double> *this,TVector<double> *param_1,int param_2)

{
  double dVar1;
  double *pdVar2;
  uchar uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar6 = 0;
  lVar5 = (longlong)param_2;
  (this->Min).field0_0x0._s_0.X = 0.0;
  (this->Min).field0_0x0._s_0.Y = 0.0;
  (this->Min).field0_0x0._s_0.Z = 0.0;
  (this->Max).field0_0x0._s_0.X = 0.0;
  (this->Max).field0_0x0._s_0.Y = 0.0;
  (this->Max).field0_0x0._s_0.Z = 0.0;
  this->IsValid = '\0';
  this->Pad[0] = '\0';
  this->Pad[1] = '\0';
  this->Pad[2] = '\0';
  this->Pad[3] = '\0';
  this->Pad[4] = '\0';
  this->Pad[5] = '\0';
  this->Pad[6] = '\0';
  if (lVar5 < 4) {
    if (param_2 < 1) {
      return this;
    }
  }
  else {
    uVar3 = this->IsValid;
    pdVar2 = &param_1[1].field0_0x0._s_0.Z;
    lVar4 = (lVar5 - 4U >> 2) + 1;
    lVar6 = lVar4 * 4;
    do {
      if (uVar3 == '\0') {
        dVar13 = pdVar2[-4];
        uVar3 = '\x01';
        (this->Max).field0_0x0._s_0.X = pdVar2[-5];
        (this->Max).field0_0x0._s_0.Y = dVar13;
        dVar13 = pdVar2[-3];
        (this->Max).field0_0x0._s_0.Z = dVar13;
        dVar15 = (this->Max).field0_0x0._s_0.X;
        dVar17 = (this->Max).field0_0x0._s_0.Y;
        this->IsValid = '\x01';
        (this->Min).field0_0x0._s_0.X = dVar15;
        (this->Min).field0_0x0._s_0.Y = dVar17;
        (this->Min).field0_0x0._s_0.Z = dVar13;
      }
      else {
        dVar13 = pdVar2[-5];
        uVar7 = SUB84(dVar13,0);
        uVar10 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar15 = *(double *)&(this->Min).field0_0x0;
        if (dVar15 <= dVar13) {
          uVar7 = SUB84(dVar15,0);
          uVar10 = (undefined4)((ulonglong)dVar15 >> 0x20);
        }
        dVar13 = (this->Min).field0_0x0._s_0.Y;
        (this->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar10,uVar7);
        if (pdVar2[-4] <= dVar13) {
          dVar13 = pdVar2[-4];
        }
        dVar15 = *(double *)((longlong)&(this->Min).field0_0x0 + 0x10);
        uVar7 = SUB84(dVar15,0);
        uVar10 = (undefined4)((ulonglong)dVar15 >> 0x20);
        (this->Min).field0_0x0._s_0.Y = dVar13;
        dVar13 = pdVar2[-3];
        if (dVar13 <= dVar15) {
          uVar7 = SUB84(dVar13,0);
          uVar10 = (undefined4)((ulonglong)dVar13 >> 0x20);
        }
        (this->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar10,uVar7);
        dVar13 = (this->Max).field0_0x0._s_0.X;
        dVar15 = pdVar2[-5];
        if (pdVar2[-5] <= dVar13) {
          dVar15 = dVar13;
        }
        dVar13 = *(double *)((longlong)&(this->Max).field0_0x0 + 8);
        uVar7 = SUB84(dVar13,0);
        uVar10 = (undefined4)((ulonglong)dVar13 >> 0x20);
        (this->Max).field0_0x0._s_0.X = dVar15;
        dVar15 = pdVar2[-4];
        if (dVar13 <= dVar15) {
          uVar7 = SUB84(dVar15,0);
          uVar10 = (undefined4)((ulonglong)dVar15 >> 0x20);
        }
        (this->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar10,uVar7);
        dVar13 = (this->Max).field0_0x0._s_0.Z;
        dVar15 = pdVar2[-3];
        if (pdVar2[-3] <= dVar13) {
          dVar15 = dVar13;
        }
        (this->Max).field0_0x0._s_0.Z = dVar15;
      }
      dVar13 = (this->Min).field0_0x0._s_0.X;
      dVar15 = ((TVector<double>_u_0_s_0 *)(pdVar2 + -2))->X;
      if (dVar13 <= ((TVector<double>_u_0_s_0 *)(pdVar2 + -2))->X) {
        dVar15 = dVar13;
      }
      dVar13 = (this->Max).field0_0x0._s_0.Z;
      dVar17 = *(double *)((longlong)&(this->Min).field0_0x0 + 0x10);
      uVar7 = SUB84(dVar17,0);
      uVar10 = (undefined4)((ulonglong)dVar17 >> 0x20);
      (this->Min).field0_0x0._s_0.X = dVar15;
      dVar14 = (this->Min).field0_0x0._s_0.Y;
      dVar16 = pdVar2[-1];
      if (dVar14 <= pdVar2[-1]) {
        dVar16 = dVar14;
      }
      (this->Min).field0_0x0._s_0.Y = dVar16;
      dVar14 = *pdVar2;
      if (dVar14 <= dVar17) {
        uVar7 = SUB84(dVar14,0);
        uVar10 = (undefined4)((ulonglong)dVar14 >> 0x20);
      }
      (this->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar10,uVar7);
      dVar17 = (this->Max).field0_0x0._s_0.X;
      dVar14 = ((TVector<double>_u_0_s_0 *)(pdVar2 + -2))->X;
      if (((TVector<double>_u_0_s_0 *)(pdVar2 + -2))->X <= dVar17) {
        dVar14 = dVar17;
      }
      (this->Max).field0_0x0._s_0.X = dVar14;
      dVar17 = pdVar2[-1];
      uVar8 = SUB84(dVar17,0);
      uVar11 = (undefined4)((ulonglong)dVar17 >> 0x20);
      dVar1 = *(double *)((longlong)&(this->Max).field0_0x0 + 8);
      if (dVar17 <= dVar1) {
        uVar8 = SUB84(dVar1,0);
        uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      (this->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar11,uVar8);
      if (dVar13 <= *pdVar2) {
        dVar13 = *pdVar2;
      }
      (this->Max).field0_0x0._s_0.Z = dVar13;
      dVar17 = pdVar2[1];
      if (dVar15 <= pdVar2[1]) {
        dVar17 = dVar15;
      }
      (this->Min).field0_0x0._s_0.X = dVar17;
      dVar15 = pdVar2[2];
      uVar8 = SUB84(dVar15,0);
      uVar11 = (undefined4)((ulonglong)dVar15 >> 0x20);
      if (dVar16 <= dVar15) {
        uVar8 = SUB84(dVar16,0);
        uVar11 = (undefined4)((ulonglong)dVar16 >> 0x20);
      }
      (this->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar11,uVar8);
      dVar15 = pdVar2[3];
      if (dVar15 <= (double)CONCAT44(uVar10,uVar7)) {
        uVar7 = SUB84(dVar15,0);
        uVar10 = (undefined4)((ulonglong)dVar15 >> 0x20);
      }
      (this->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar10,uVar7);
      dVar15 = pdVar2[1];
      if (pdVar2[1] <= dVar14) {
        dVar15 = dVar14;
      }
      (this->Max).field0_0x0._s_0.X = dVar15;
      dVar14 = pdVar2[2];
      uVar9 = SUB84(dVar14,0);
      uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
      dVar16 = *(double *)((longlong)&(this->Max).field0_0x0 + 8);
      if (dVar14 <= dVar16) {
        uVar9 = SUB84(dVar16,0);
        uVar12 = (undefined4)((ulonglong)dVar16 >> 0x20);
      }
      (this->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar12,uVar9);
      if (dVar13 <= pdVar2[3]) {
        dVar13 = pdVar2[3];
      }
      (this->Max).field0_0x0._s_0.Z = dVar13;
      dVar13 = pdVar2[4];
      uVar9 = SUB84(dVar13,0);
      uVar12 = (undefined4)((ulonglong)dVar13 >> 0x20);
      dVar14 = (this->Max).field0_0x0._s_0.Y;
      if (dVar17 <= dVar13) {
        uVar9 = SUB84(dVar17,0);
        uVar12 = (undefined4)((ulonglong)dVar17 >> 0x20);
      }
      (this->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar12,uVar9);
      dVar13 = pdVar2[5];
      if (dVar13 <= (double)CONCAT44(uVar11,uVar8)) {
        uVar8 = SUB84(dVar13,0);
        uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
      }
      (this->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar11,uVar8);
      dVar13 = pdVar2[6];
      if (dVar13 <= (double)CONCAT44(uVar10,uVar7)) {
        uVar7 = SUB84(dVar13,0);
        uVar10 = (undefined4)((ulonglong)dVar13 >> 0x20);
      }
      (this->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar10,uVar7);
      dVar13 = pdVar2[4];
      uVar7 = SUB84(dVar13,0);
      uVar10 = (undefined4)((ulonglong)dVar13 >> 0x20);
      if (dVar13 <= dVar15) {
        uVar7 = SUB84(dVar15,0);
        uVar10 = (undefined4)((ulonglong)dVar15 >> 0x20);
      }
      (this->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar10,uVar7);
      if (dVar14 <= pdVar2[5]) {
        dVar14 = pdVar2[5];
      }
      dVar13 = *(double *)((longlong)&(this->Max).field0_0x0 + 0x10);
      uVar7 = SUB84(dVar13,0);
      uVar10 = (undefined4)((ulonglong)dVar13 >> 0x20);
      (this->Max).field0_0x0._s_0.Y = dVar14;
      dVar15 = pdVar2[6];
      if (dVar13 <= dVar15) {
        uVar7 = SUB84(dVar15,0);
        uVar10 = (undefined4)((ulonglong)dVar15 >> 0x20);
      }
      pdVar2 = pdVar2 + 0xc;
      (this->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar10,uVar7);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (lVar5 <= lVar6) {
      return this;
    }
  }
  uVar3 = this->IsValid;
  lVar5 = lVar5 - lVar6;
  pdVar2 = &param_1[lVar6].field0_0x0._s_0.Z;
  do {
    if (uVar3 == '\0') {
      dVar13 = pdVar2[-1];
      uVar3 = '\x01';
      (this->Max).field0_0x0._s_0.X = ((TVector<double>_u_0_s_0 *)(pdVar2 + -2))->X;
      (this->Max).field0_0x0._s_0.Y = dVar13;
      dVar13 = *pdVar2;
      (this->Max).field0_0x0._s_0.Z = dVar13;
      dVar15 = (this->Max).field0_0x0._s_0.X;
      dVar17 = (this->Max).field0_0x0._s_0.Y;
      this->IsValid = '\x01';
      (this->Min).field0_0x0._s_0.X = dVar15;
      (this->Min).field0_0x0._s_0.Y = dVar17;
      (this->Min).field0_0x0._s_0.Z = dVar13;
    }
    else {
      dVar13 = *(double *)&(this->Min).field0_0x0;
      uVar7 = SUB84(dVar13,0);
      uVar10 = (undefined4)((ulonglong)dVar13 >> 0x20);
      dVar15 = ((TVector<double>_u_0_s_0 *)(pdVar2 + -2))->X;
      if (dVar15 <= dVar13) {
        uVar7 = SUB84(dVar15,0);
        uVar10 = (undefined4)((ulonglong)dVar15 >> 0x20);
      }
      (this->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar10,uVar7);
      dVar13 = (this->Min).field0_0x0._s_0.Y;
      dVar15 = pdVar2[-1];
      if (dVar13 <= pdVar2[-1]) {
        dVar15 = dVar13;
      }
      dVar13 = *(double *)((longlong)&(this->Min).field0_0x0 + 0x10);
      uVar7 = SUB84(dVar13,0);
      uVar10 = (undefined4)((ulonglong)dVar13 >> 0x20);
      (this->Min).field0_0x0._s_0.Y = dVar15;
      dVar15 = *pdVar2;
      if (dVar15 <= dVar13) {
        uVar7 = SUB84(dVar15,0);
        uVar10 = (undefined4)((ulonglong)dVar15 >> 0x20);
      }
      dVar13 = (this->Max).field0_0x0._s_0.X;
      (this->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar10,uVar7);
      if (dVar13 <= ((TVector<double>_u_0_s_0 *)(pdVar2 + -2))->X) {
        dVar13 = ((TVector<double>_u_0_s_0 *)(pdVar2 + -2))->X;
      }
      (this->Max).field0_0x0._s_0.X = dVar13;
      dVar13 = pdVar2[-1];
      uVar7 = SUB84(dVar13,0);
      uVar10 = (undefined4)((ulonglong)dVar13 >> 0x20);
      dVar15 = *(double *)((longlong)&(this->Max).field0_0x0 + 8);
      if (dVar13 <= dVar15) {
        uVar7 = SUB84(dVar15,0);
        uVar10 = (undefined4)((ulonglong)dVar15 >> 0x20);
      }
      (this->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar10,uVar7);
      dVar13 = (this->Max).field0_0x0._s_0.Z;
      dVar15 = *pdVar2;
      if (*pdVar2 <= dVar13) {
        dVar15 = dVar13;
      }
      (this->Max).field0_0x0._s_0.Z = dVar15;
    }
    pdVar2 = pdVar2 + 3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return this;
}

