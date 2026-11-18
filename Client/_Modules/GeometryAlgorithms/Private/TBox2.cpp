// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 1

// TBox2<float> @ 1494febf0

TBox2<float> * __thiscall
UE::Math::TBox2<float>::TBox2<float>(TBox2<float> *this,TVector2<float> *param_1,int param_2)

{
  float *pfVar1;
  TVector2<float>_u_0 TVar2;
  bool bVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar7 = 0;
  lVar8 = (longlong)param_2;
  (this->Min).field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->Max).field0_0x0 = (TVector2<float>_u_0)0x0;
  this->bIsValid = false;
  if (lVar8 < 4) {
    if (0 < param_2) {
      bVar3 = false;
      goto LAB_1494fed39;
    }
  }
  else {
    pfVar6 = &(this->Max).field0_0x0._s_0.Y;
    bVar3 = false;
    pfVar4 = &param_1[2].field0_0x0._s_0.Y;
    lVar5 = (lVar8 - 4U >> 2) + 1;
    lVar7 = lVar5 * 4;
    do {
      if (bVar3) {
        fVar10 = (this->Min).field0_0x0._s_0.X;
        fVar9 = pfVar4[-5];
        if (fVar10 <= pfVar4[-5]) {
          fVar9 = fVar10;
        }
        fVar10 = (this->Min).field0_0x0._s_0.Y;
        (this->Min).field0_0x0._s_0.X = fVar9;
        if (pfVar4[-4] <= fVar10) {
          fVar10 = pfVar4[-4];
        }
        fVar9 = (this->Max).field0_0x0._s_0.X;
        (this->Min).field0_0x0._s_0.Y = fVar10;
        if (fVar9 <= pfVar4[-5]) {
          fVar9 = pfVar4[-5];
        }
        fVar10 = *pfVar6;
        (this->Max).field0_0x0._s_0.X = fVar9;
        if (fVar10 <= pfVar4[-4]) {
          fVar10 = pfVar4[-4];
        }
        *pfVar6 = fVar10;
      }
      else {
        TVar2 = *(TVector2<float>_u_0 *)(pfVar4 + -5);
        (this->Max).field0_0x0 = TVar2;
        (this->Min).field0_0x0 = TVar2;
        bVar3 = true;
        this->bIsValid = true;
      }
      fVar10 = (this->Min).field0_0x0._s_0.X;
      fVar9 = pfVar4[-3];
      if (fVar10 <= pfVar4[-3]) {
        fVar9 = fVar10;
      }
      fVar10 = (this->Max).field0_0x0._s_0.X;
      (this->Min).field0_0x0._s_0.X = fVar9;
      fVar13 = (this->Min).field0_0x0._s_0.Y;
      fVar12 = pfVar4[-2];
      if (fVar13 <= pfVar4[-2]) {
        fVar12 = fVar13;
      }
      (this->Min).field0_0x0._s_0.Y = fVar12;
      if (fVar10 <= pfVar4[-3]) {
        fVar10 = pfVar4[-3];
      }
      (this->Max).field0_0x0._s_0.X = fVar10;
      fVar13 = pfVar4[-2];
      if (pfVar4[-2] <= *pfVar6) {
        fVar13 = *pfVar6;
      }
      *pfVar6 = fVar13;
      fVar11 = ((TVector2<float>_u_0_s_0 *)(pfVar4 + -1))->X;
      if (fVar9 <= ((TVector2<float>_u_0_s_0 *)(pfVar4 + -1))->X) {
        fVar11 = fVar9;
      }
      (this->Min).field0_0x0._s_0.X = fVar11;
      if (*pfVar4 <= fVar12) {
        fVar12 = *pfVar4;
      }
      (this->Min).field0_0x0._s_0.Y = fVar12;
      if (fVar10 <= ((TVector2<float>_u_0_s_0 *)(pfVar4 + -1))->X) {
        fVar10 = ((TVector2<float>_u_0_s_0 *)(pfVar4 + -1))->X;
      }
      (this->Max).field0_0x0._s_0.X = fVar10;
      if (fVar13 <= *pfVar4) {
        fVar13 = *pfVar4;
      }
      *pfVar6 = fVar13;
      fVar9 = pfVar4[1];
      if (fVar11 <= pfVar4[1]) {
        fVar9 = fVar11;
      }
      (this->Min).field0_0x0._s_0.X = fVar9;
      fVar9 = pfVar4[2];
      if (fVar12 <= pfVar4[2]) {
        fVar9 = fVar12;
      }
      (this->Min).field0_0x0._s_0.Y = fVar9;
      if (fVar10 <= pfVar4[1]) {
        fVar10 = pfVar4[1];
      }
      (this->Max).field0_0x0._s_0.X = fVar10;
      pfVar1 = pfVar4 + 2;
      pfVar4 = pfVar4 + 8;
      fVar10 = *pfVar1;
      if (*pfVar1 <= fVar13) {
        fVar10 = fVar13;
      }
      *pfVar6 = fVar10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    for (; lVar7 < lVar8; lVar7 = lVar7 + 1) {
LAB_1494fed39:
      pfVar6 = &(this->Max).field0_0x0._s_0.Y;
      if (bVar3) {
        fVar10 = (this->Min).field0_0x0._s_0.X;
        fVar9 = param_1[lVar7].field0_0x0._s_0.X;
        if (fVar9 <= fVar10) {
          fVar10 = fVar9;
        }
        (this->Min).field0_0x0._s_0.X = fVar10;
        fVar10 = param_1[lVar7].field0_0x0._s_0.Y;
        fVar9 = (this->Min).field0_0x0._s_0.Y;
        if (fVar9 <= fVar10) {
          fVar10 = fVar9;
        }
        fVar9 = (this->Max).field0_0x0._s_0.X;
        (this->Min).field0_0x0._s_0.Y = fVar10;
        fVar10 = param_1[lVar7].field0_0x0._s_0.X;
        if (fVar9 <= fVar10) {
          fVar9 = fVar10;
        }
        (this->Max).field0_0x0._s_0.X = fVar9;
        fVar10 = param_1[lVar7].field0_0x0._s_0.Y;
        fVar9 = *pfVar6;
        if (fVar10 <= fVar9) {
          fVar10 = fVar9;
        }
        *pfVar6 = fVar10;
      }
      else {
        TVar2 = param_1[lVar7].field0_0x0;
        (this->Max).field0_0x0 = TVar2;
        (this->Min).field0_0x0 = TVar2;
        bVar3 = true;
        this->bIsValid = true;
      }
    }
  }
  return this;
}

