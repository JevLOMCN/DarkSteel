// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// TBox2<double> @ 145ed7c10

TBox2<double> * __thiscall
UE::Math::TBox2<double>::TBox2<double>(TBox2<double> *this,TVector2<double> *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  double *pdVar4;
  TVector2<double> *pTVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar7 = 0;
  lVar6 = (longlong)param_2;
  (this->Min).field0_0x0._s_0.X = 0.0;
  (this->Min).field0_0x0._s_0.Y = 0.0;
  (this->Max).field0_0x0._s_0.X = 0.0;
  (this->Max).field0_0x0._s_0.Y = 0.0;
  this->bIsValid = false;
  if (lVar6 < 4) {
    if (param_2 < 1) {
      return this;
    }
    bVar3 = false;
  }
  else {
    pdVar4 = &param_1[2].field0_0x0._s_0.Y;
    bVar3 = false;
    pdVar1 = &(this->Max).field0_0x0._s_0.Y;
    lVar8 = (lVar6 - 4U >> 2) + 1;
    lVar7 = lVar8 * 4;
    do {
      if (bVar3) {
        dVar13 = pdVar4[-5];
        uVar9 = SUB84(dVar13,0);
        uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar14 = *(double *)&(this->Min).field0_0x0;
        if (dVar14 <= dVar13) {
          uVar9 = SUB84(dVar14,0);
          uVar11 = (undefined4)((ulonglong)dVar14 >> 0x20);
        }
        dVar13 = (this->Min).field0_0x0._s_0.Y;
        (this->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar11,uVar9);
        if (pdVar4[-4] <= dVar13) {
          dVar13 = pdVar4[-4];
        }
        (this->Min).field0_0x0._s_0.Y = dVar13;
        dVar13 = pdVar4[-5];
        uVar9 = SUB84(dVar13,0);
        uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar14 = *pdVar1;
        dVar15 = *(double *)&(this->Max).field0_0x0;
        if (dVar13 <= dVar15) {
          uVar9 = SUB84(dVar15,0);
          uVar11 = (undefined4)((ulonglong)dVar15 >> 0x20);
        }
        (this->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar11,uVar9);
        if (dVar14 <= pdVar4[-4]) {
          dVar14 = pdVar4[-4];
        }
        *pdVar1 = dVar14;
      }
      else {
        dVar13 = pdVar4[-5];
        dVar14 = pdVar4[-4];
        this->bIsValid = true;
        bVar3 = true;
        (this->Max).field0_0x0._s_0.X = dVar13;
        (this->Max).field0_0x0._s_0.Y = dVar14;
        (this->Min).field0_0x0._s_0.X = dVar13;
        (this->Min).field0_0x0._s_0.Y = dVar14;
      }
      dVar13 = (this->Min).field0_0x0._s_0.X;
      dVar14 = pdVar4[-3];
      if (dVar13 <= pdVar4[-3]) {
        dVar14 = dVar13;
      }
      dVar13 = (this->Max).field0_0x0._s_0.X;
      (this->Min).field0_0x0._s_0.X = dVar14;
      dVar15 = pdVar4[-2];
      uVar9 = SUB84(dVar15,0);
      uVar11 = (undefined4)((ulonglong)dVar15 >> 0x20);
      dVar16 = *(double *)((longlong)&(this->Min).field0_0x0 + 8);
      if (dVar16 <= dVar15) {
        uVar9 = SUB84(dVar16,0);
        uVar11 = (undefined4)((ulonglong)dVar16 >> 0x20);
      }
      (this->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar11,uVar9);
      if (dVar13 <= pdVar4[-3]) {
        dVar13 = pdVar4[-3];
      }
      (this->Max).field0_0x0._s_0.X = dVar13;
      dVar15 = pdVar4[-2];
      if (pdVar4[-2] <= *pdVar1) {
        dVar15 = *pdVar1;
      }
      *pdVar1 = dVar15;
      dVar16 = ((TVector2<double>_u_0_s_0 *)(pdVar4 + -1))->X;
      if (dVar14 <= ((TVector2<double>_u_0_s_0 *)(pdVar4 + -1))->X) {
        dVar16 = dVar14;
      }
      (this->Min).field0_0x0._s_0.X = dVar16;
      dVar14 = *pdVar4;
      if ((double)CONCAT44(uVar11,uVar9) <= dVar14) {
        dVar14 = (double)CONCAT44(uVar11,uVar9);
      }
      (this->Min).field0_0x0._s_0.Y = dVar14;
      dVar2 = ((TVector2<double>_u_0_s_0 *)(pdVar4 + -1))->X;
      uVar9 = SUB84(dVar2,0);
      uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= dVar13) {
        uVar9 = SUB84(dVar13,0);
        uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
      }
      (this->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar11,uVar9);
      dVar13 = *pdVar4;
      if (*pdVar4 <= dVar15) {
        dVar13 = dVar15;
      }
      *pdVar1 = dVar13;
      if (pdVar4[1] <= dVar16) {
        dVar16 = pdVar4[1];
      }
      (this->Min).field0_0x0._s_0.X = dVar16;
      dVar15 = pdVar4[2];
      uVar10 = SUB84(dVar15,0);
      uVar12 = (undefined4)((ulonglong)dVar15 >> 0x20);
      if (dVar14 <= dVar15) {
        uVar10 = SUB84(dVar14,0);
        uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
      }
      (this->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar12,uVar10);
      dVar14 = pdVar4[1];
      if ((double)CONCAT44(uVar11,uVar9) <= dVar14) {
        uVar9 = SUB84(dVar14,0);
        uVar11 = (undefined4)((ulonglong)dVar14 >> 0x20);
      }
      (this->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar11,uVar9);
      dVar14 = pdVar4[2];
      uVar9 = SUB84(dVar14,0);
      uVar11 = (undefined4)((ulonglong)dVar14 >> 0x20);
      pdVar4 = pdVar4 + 8;
      if (dVar14 <= dVar13) {
        uVar9 = SUB84(dVar13,0);
        uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
      }
      *pdVar1 = (double)CONCAT44(uVar11,uVar9);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    if (lVar6 <= lVar7) {
      return this;
    }
  }
  pdVar4 = &(this->Max).field0_0x0._s_0.Y;
  pTVar5 = param_1 + lVar7;
  lVar6 = lVar6 - lVar7;
  do {
    if (bVar3) {
      dVar13 = *(double *)&pTVar5->field0_0x0;
      uVar9 = SUB84(dVar13,0);
      uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
      dVar14 = *(double *)&(this->Min).field0_0x0;
      if (dVar14 <= dVar13) {
        uVar9 = SUB84(dVar14,0);
        uVar11 = (undefined4)((ulonglong)dVar14 >> 0x20);
      }
      (this->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar11,uVar9);
      dVar13 = (pTVar5->field0_0x0)._s_0.Y;
      dVar14 = (this->Min).field0_0x0._s_0.Y;
      if (dVar14 <= dVar13) {
        dVar13 = dVar14;
      }
      (this->Min).field0_0x0._s_0.Y = dVar13;
      dVar13 = *(double *)&pTVar5->field0_0x0;
      uVar9 = SUB84(dVar13,0);
      uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
      dVar14 = *pdVar4;
      dVar15 = *(double *)&(this->Max).field0_0x0;
      if (dVar13 <= dVar15) {
        uVar9 = SUB84(dVar15,0);
        uVar11 = (undefined4)((ulonglong)dVar15 >> 0x20);
      }
      (this->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar11,uVar9);
      dVar13 = (pTVar5->field0_0x0)._s_0.Y;
      if (dVar14 <= dVar13) {
        dVar14 = dVar13;
      }
      *pdVar4 = dVar14;
    }
    else {
      dVar13 = (pTVar5->field0_0x0)._s_0.X;
      dVar14 = (pTVar5->field0_0x0)._s_0.Y;
      this->bIsValid = true;
      bVar3 = true;
      (this->Max).field0_0x0._s_0.X = dVar13;
      (this->Max).field0_0x0._s_0.Y = dVar14;
      (this->Min).field0_0x0._s_0.X = dVar13;
      (this->Min).field0_0x0._s_0.Y = dVar14;
    }
    pTVar5 = pTVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return this;
}

