// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// TSphere<float> @ 14179e4a0

TSphere<float> * __thiscall
UE::Math::TSphere<float>::TSphere<float>(TSphere<float> *this,TSphere<float> *param_1,int param_2)

{
  TSphere<float> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TSphere<float> *pTVar5;
  int iVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_68;
  int local_64;
  int local_60;
  int local_58 [16];
  
  uVar10 = (ulonglong)(uint)param_2;
  if ((param_2 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sphere.cpp"
                         ,0x53,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSphere<float> *)(*pcVar2)();
    return pTVar5;
  }
  local_60 = 0;
  local_68 = 0.0;
  local_64 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  iVar6 = 0;
  iVar13 = 0;
  if (0 < param_2) {
    pfVar7 = &param_1->W;
    lVar9 = (longlong)param_1 - (longlong)&local_68;
    uVar8 = 0;
    do {
      fVar15 = *pfVar7;
      lVar14 = 3;
      uVar12 = 0;
      do {
        piVar11 = (int *)((longlong)&local_68 + uVar12);
        iVar6 = *piVar11;
        fVar16 = *(float *)((longlong)piVar11 + lVar9);
        iVar13 = (int)uVar8;
        if (fVar16 - fVar15 <
            *(float *)((longlong)&param_1[iVar6].Center.field0_0x0 + uVar12) - param_1[iVar6].W) {
          iVar6 = iVar13;
        }
        *piVar11 = iVar6;
        iVar6 = *(int *)((longlong)local_58 + uVar12);
        if (param_1[iVar6].W + *(float *)((longlong)&param_1[iVar6].Center.field0_0x0 + uVar12) <
            fVar15 + fVar16) {
          iVar6 = iVar13;
        }
        *(int *)((longlong)local_58 + uVar12) = iVar6;
        uVar12 = uVar12 + 4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uVar8 = (ulonglong)(iVar13 + 1U);
      pfVar7 = pfVar7 + 4;
      lVar9 = lVar9 + 0x10;
    } while ((int)(iVar13 + 1U) < param_2);
    iVar6 = local_58[1];
    iVar13 = local_58[2];
  }
  pTVar5 = param_1 + (int)local_68;
  pTVar1 = param_1 + local_58[0];
  fVar17 = (pTVar1->Center).field0_0x0._s_0.X - (pTVar5->Center).field0_0x0._s_0.X;
  fVar16 = (pTVar1->Center).field0_0x0._s_0.Y - (pTVar5->Center).field0_0x0._s_0.Y;
  fVar15 = (pTVar1->Center).field0_0x0._s_0.Z - (pTVar5->Center).field0_0x0._s_0.Z;
  fVar16 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15) + pTVar5->W + pTVar1->W;
  fVar15 = 0.0;
  if (0.0 < fVar16) {
    fVar15 = fVar16;
  }
  pTVar5 = param_1 + local_64;
  pTVar1 = param_1 + iVar6;
  fVar18 = (pTVar1->Center).field0_0x0._s_0.X - (pTVar5->Center).field0_0x0._s_0.X;
  fVar17 = (pTVar1->Center).field0_0x0._s_0.Y - (pTVar5->Center).field0_0x0._s_0.Y;
  fVar16 = (pTVar1->Center).field0_0x0._s_0.Z - (pTVar5->Center).field0_0x0._s_0.Z;
  fVar17 = SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar16 * fVar16) + pTVar5->W + pTVar1->W;
  fVar16 = fVar15;
  if (fVar15 < fVar17) {
    fVar16 = fVar17;
  }
  pTVar5 = param_1 + local_60;
  pTVar1 = param_1 + iVar13;
  uVar8 = (ulonglong)(fVar15 < fVar17);
  fVar18 = (pTVar1->Center).field0_0x0._s_0.X - (pTVar5->Center).field0_0x0._s_0.X;
  fVar17 = (pTVar1->Center).field0_0x0._s_0.Y - (pTVar5->Center).field0_0x0._s_0.Y;
  fVar15 = (pTVar1->Center).field0_0x0._s_0.Z - (pTVar5->Center).field0_0x0._s_0.Z;
  if (fVar16 < SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar15 * fVar15) + pTVar5->W + pTVar1->W) {
    uVar8 = 2;
  }
  iVar6 = local_58[uVar8];
  uVar3 = *(undefined8 *)((longlong)&param_1[(int)(&local_68)[uVar8]].Center.field0_0x0 + 8);
  *(undefined8 *)&(this->Center).field0_0x0 =
       *(undefined8 *)&param_1[(int)(&local_68)[uVar8]].Center.field0_0x0;
  *(undefined8 *)((longlong)&(this->Center).field0_0x0 + 8) = uVar3;
  operator+=(this,param_1 + iVar6);
  if (0 < param_2) {
    do {
      operator+=(this,param_1);
      param_1 = param_1 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return this;
}

// TSphere<float> @ 14179e800

TSphere<float> * __thiscall
UE::Math::TSphere<float>::TSphere<float>(TSphere<float> *this,TVector<float> *param_1,int param_2)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  TSphere<float> *pTVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint local_f8 [4];
  int local_e8 [4];
  int local_d8;
  ulonglong uVar17;
  
  local_d8 = param_2;
  if ((param_2 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sphere.cpp"
                         ,0x10,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSphere<float> *)(*pcVar2)();
    return pTVar5;
  }
  fVar3 = __real_3f000000;
  uVar14 = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  uVar13 = 0;
  local_f8[0] = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_e8[0] = 0;
  uVar16 = uVar13;
  iVar9 = local_e8[0];
  uVar18 = uVar13;
  iVar20 = local_e8[0];
  if (0 < param_2) {
    uVar11 = uVar14;
    uVar10 = uVar14;
    uVar12 = uVar14;
    uVar15 = uVar14;
    uVar17 = uVar14;
    pfVar7 = &(param_1->field0_0x0)._s_0.Z;
    uVar19 = uVar14;
    uVar21 = uVar14;
    do {
      fVar22 = ((TVector<float>_u_0_s_0 *)(pfVar7 + -2))->X;
      uVar13 = (uint)uVar17;
      if (param_1[(int)(uint)uVar11].field0_0x0._s_0.X <= fVar22) {
        uVar13 = (uint)uVar11;
      }
      uVar11 = (ulonglong)uVar13;
      fVar24 = pfVar7[-1];
      if (param_1[(int)uVar12].field0_0x0._s_0.X <= fVar22 &&
          fVar22 != param_1[(int)uVar12].field0_0x0._s_0.X) {
        uVar12 = uVar17;
      }
      local_e8[0] = (int)uVar12;
      if (fVar24 < param_1[(int)uVar15].field0_0x0._s_0.Y) {
        uVar15 = uVar17;
      }
      pfVar1 = &param_1[(int)uVar10].field0_0x0._s_0.Y;
      fVar22 = *pfVar7;
      if (*pfVar1 <= fVar24 && fVar24 != *pfVar1) {
        uVar10 = uVar17;
      }
      if (fVar22 < param_1[(int)uVar19].field0_0x0._s_0.Z) {
        uVar19 = uVar17;
      }
      pfVar1 = &param_1[(int)uVar21].field0_0x0._s_0.Z;
      if (*pfVar1 <= fVar22 && fVar22 != *pfVar1) {
        uVar21 = uVar17;
      }
      uVar16 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      pfVar7 = pfVar7 + 3;
    } while ((int)uVar16 < local_d8);
    local_e8[1] = (int)uVar10;
    local_f8[2] = (uint)uVar19;
    local_f8[1] = (uint)uVar15;
    local_e8[2] = (int)uVar21;
    local_f8[0] = uVar13;
    param_2 = local_d8;
    uVar16 = (uint)uVar15;
    iVar9 = (int)uVar10;
    uVar18 = (uint)uVar19;
    iVar20 = (int)uVar21;
  }
  fVar24 = (float)*(undefined8 *)&param_1[local_e8[0]].field0_0x0 -
           (float)*(undefined8 *)&param_1[(int)uVar13].field0_0x0;
  fVar28 = (float)((ulonglong)*(undefined8 *)&param_1[local_e8[0]].field0_0x0 >> 0x20) -
           (float)((ulonglong)*(undefined8 *)&param_1[(int)uVar13].field0_0x0 >> 0x20);
  fVar22 = param_1[local_e8[0]].field0_0x0._s_0.Z - param_1[(int)uVar13].field0_0x0._s_0.Z;
  fVar24 = fVar28 * fVar28 + fVar24 * fVar24 + fVar22 * fVar22;
  fVar22 = 0.0;
  if (0.0 < fVar24) {
    fVar22 = fVar24;
  }
  fVar28 = (float)*(undefined8 *)&param_1[iVar9].field0_0x0 -
           (float)*(undefined8 *)&param_1[(int)uVar16].field0_0x0;
  fVar29 = (float)((ulonglong)*(undefined8 *)&param_1[iVar9].field0_0x0 >> 0x20) -
           (float)((ulonglong)*(undefined8 *)&param_1[(int)uVar16].field0_0x0 >> 0x20);
  fVar24 = param_1[iVar9].field0_0x0._s_0.Z - param_1[(int)uVar16].field0_0x0._s_0.Z;
  fVar28 = fVar29 * fVar29 + fVar28 * fVar28 + fVar24 * fVar24;
  fVar24 = fVar22;
  if (fVar22 < fVar28) {
    fVar24 = fVar28;
  }
  pfVar7 = &(param_1->field0_0x0)._s_0.Z;
  uVar11 = (ulonglong)(fVar22 < fVar28);
  fVar28 = (float)*(undefined8 *)&param_1[iVar20].field0_0x0 -
           (float)*(undefined8 *)&param_1[(int)uVar18].field0_0x0;
  fVar29 = (float)((ulonglong)*(undefined8 *)&param_1[iVar20].field0_0x0 >> 0x20) -
           (float)((ulonglong)*(undefined8 *)&param_1[(int)uVar18].field0_0x0 >> 0x20);
  fVar22 = param_1[iVar20].field0_0x0._s_0.Z - pfVar7[(longlong)(int)uVar18 * 3];
  fVar22 = fVar29 * fVar29 + fVar28 * fVar28 + fVar22 * fVar22;
  if (fVar24 < fVar22) {
    uVar11 = 2;
    fVar24 = fVar22;
  }
  fVar28 = param_1[(int)local_f8[uVar11]].field0_0x0._s_0.Z;
  lVar8 = (longlong)param_2;
  fVar31 = ((float)*(undefined8 *)&param_1[(int)local_f8[uVar11]].field0_0x0 +
           (float)*(undefined8 *)&param_1[local_e8[uVar11]].field0_0x0) * __real_3f000000;
  fVar32 = ((float)((ulonglong)*(undefined8 *)&param_1[(int)local_f8[uVar11]].field0_0x0 >> 0x20) +
           (float)((ulonglong)*(undefined8 *)&param_1[local_e8[uVar11]].field0_0x0 >> 0x20)) *
           __real_3f000000;
  fVar29 = SQRT(fVar24) * __real_3f000000;
  fVar22 = param_1[local_e8[uVar11]].field0_0x0._s_0.Z;
  (this->Center).field0_0x0._s_0.X = fVar31;
  (this->Center).field0_0x0._s_0.Y = fVar32;
  fVar28 = (fVar28 + fVar22) * fVar3;
  (this->Center).field0_0x0._s_0.Z = fVar28;
  fVar22 = __real_3f800000;
  fVar24 = fVar24 * __real_3e800000;
  this->W = fVar29;
  if (3 < lVar8) {
    lVar6 = (lVar8 - 4U >> 2) + 1;
    uVar14 = lVar6 * 4;
    do {
      fVar25 = ((TVector<float>_u_0_s_0 *)(pfVar7 + -2))->X - fVar31;
      fVar23 = pfVar7[-1] - fVar32;
      fVar29 = *pfVar7 - fVar28;
      fVar29 = fVar25 * fVar25 + fVar23 * fVar23 + fVar29 * fVar29;
      if (fVar24 < fVar29) {
        fVar23 = this->W;
        fVar29 = SQRT(fVar29);
        fVar26 = (fVar23 / fVar29 + fVar22) * fVar3;
        fVar25 = fVar22 - fVar26;
        fVar28 = *pfVar7 * fVar25 + fVar28 * fVar26;
        fVar32 = fVar25 * pfVar7[-1] + fVar32 * fVar26;
        fVar31 = fVar25 * ((TVector<float>_u_0_s_0 *)(pfVar7 + -2))->X + fVar31 * fVar26;
        (this->Center).field0_0x0._s_0.X = fVar31;
        (this->Center).field0_0x0._s_0.Y = fVar32;
        (this->Center).field0_0x0._s_0.Z = fVar28;
        this->W = (fVar23 + fVar29) * fVar3;
      }
      fVar29 = pfVar7[2];
      fVar23 = pfVar7[3];
      fVar27 = pfVar7[1] - fVar31;
      fVar26 = fVar29 - fVar32;
      fVar25 = fVar23 - fVar28;
      fVar25 = fVar27 * fVar27 + fVar26 * fVar26 + fVar25 * fVar25;
      if (fVar24 < fVar25) {
        fVar25 = SQRT(fVar25);
        fVar26 = this->W;
        fVar27 = (fVar26 / fVar25 + fVar22) * fVar3;
        fVar30 = fVar22 - fVar27;
        fVar31 = fVar30 * pfVar7[1] + fVar31 * fVar27;
        (this->Center).field0_0x0._s_0.X = fVar31;
        fVar32 = fVar30 * fVar29 + fVar32 * fVar27;
        fVar28 = fVar30 * fVar23 + fVar28 * fVar27;
        (this->Center).field0_0x0._s_0.Y = fVar32;
        (this->Center).field0_0x0._s_0.Z = fVar28;
        this->W = (fVar26 + fVar25) * fVar3;
      }
      fVar25 = pfVar7[4] - fVar31;
      fVar23 = pfVar7[5] - fVar32;
      fVar29 = pfVar7[6] - fVar28;
      fVar29 = fVar25 * fVar25 + fVar23 * fVar23 + fVar29 * fVar29;
      if (fVar24 < fVar29) {
        fVar29 = SQRT(fVar29);
        fVar23 = this->W;
        fVar25 = (fVar23 / fVar29 + fVar22) * fVar3;
        fVar26 = fVar22 - fVar25;
        fVar31 = fVar26 * pfVar7[4] + fVar31 * fVar25;
        fVar32 = fVar26 * pfVar7[5] + fVar32 * fVar25;
        fVar28 = fVar26 * pfVar7[6] + fVar28 * fVar25;
        (this->Center).field0_0x0._s_0.X = fVar31;
        (this->Center).field0_0x0._s_0.Y = fVar32;
        (this->Center).field0_0x0._s_0.Z = fVar28;
        this->W = (fVar23 + fVar29) * fVar3;
      }
      fVar25 = pfVar7[7] - fVar31;
      fVar23 = pfVar7[8] - fVar32;
      fVar29 = pfVar7[9] - fVar28;
      fVar29 = fVar25 * fVar25 + fVar23 * fVar23 + fVar29 * fVar29;
      if (fVar24 < fVar29) {
        fVar23 = this->W;
        fVar29 = SQRT(fVar29);
        fVar25 = (fVar23 / fVar29 + fVar22) * fVar3;
        fVar26 = fVar22 - fVar25;
        fVar31 = fVar26 * pfVar7[7] + fVar31 * fVar25;
        fVar32 = fVar26 * pfVar7[8] + fVar25 * fVar32;
        fVar28 = fVar26 * pfVar7[9] + fVar25 * fVar28;
        (this->Center).field0_0x0._s_0.X = fVar31;
        (this->Center).field0_0x0._s_0.Y = fVar32;
        (this->Center).field0_0x0._s_0.Z = fVar28;
        this->W = (fVar23 + fVar29) * fVar3;
      }
      pfVar7 = pfVar7 + 0xc;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((longlong)uVar14 < lVar8) {
    lVar8 = lVar8 - uVar14;
    pfVar7 = &param_1[uVar14].field0_0x0._s_0.Z;
    do {
      fVar29 = pfVar7[-1];
      fVar23 = *pfVar7;
      fVar27 = ((TVector<float>_u_0_s_0 *)(pfVar7 + -2))->X - fVar31;
      fVar26 = fVar29 - fVar32;
      fVar25 = fVar23 - fVar28;
      fVar25 = fVar27 * fVar27 + fVar26 * fVar26 + fVar25 * fVar25;
      if (fVar24 < fVar25) {
        fVar26 = this->W;
        fVar25 = SQRT(fVar25);
        fVar30 = (fVar26 / fVar25 + fVar22) * fVar3;
        fVar27 = fVar22 - fVar30;
        fVar31 = fVar30 * fVar31 + fVar27 * ((TVector<float>_u_0_s_0 *)(pfVar7 + -2))->X;
        (this->Center).field0_0x0._s_0.X = fVar31;
        fVar32 = fVar30 * fVar32 + fVar27 * fVar29;
        fVar28 = fVar30 * fVar28 + fVar27 * fVar23;
        (this->Center).field0_0x0._s_0.Y = fVar32;
        (this->Center).field0_0x0._s_0.Z = fVar28;
        this->W = (fVar26 + fVar25) * fVar3;
      }
      pfVar7 = pfVar7 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return this;
}

// TSphere<double> @ 14179f050

TSphere<double> * __thiscall
UE::Math::TSphere<double>::TSphere<double>
          (TSphere<double> *this,TSphere<double> *param_1,int param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  bool bVar6;
  TSphere<double> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  int local_58 [4];
  int local_48 [12];
  
  uVar12 = (ulonglong)(uint)param_2;
  if ((param_2 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sphere.cpp"
                         ,0x53,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar7 = (TSphere<double> *)(*pcVar5)();
    return pTVar7;
  }
  uVar9 = 0;
  local_58[2] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  uVar10 = uVar9;
  pTVar7 = param_1;
  iVar8 = 0;
  iVar15 = 0;
  if (0 < param_2) {
    do {
      dVar3 = pTVar7->W;
      lVar11 = 3;
      uVar13 = uVar9;
      uVar14 = uVar9;
      do {
        iVar8 = *(int *)((longlong)local_58 + uVar13);
        dVar4 = *(double *)((longlong)&(pTVar7->Center).field0_0x0 + uVar14);
        iVar15 = (int)uVar10;
        if (*(double *)((longlong)&(pTVar7->Center).field0_0x0 + uVar14) - dVar3 <
            *(double *)((longlong)&param_1[iVar8].Center.field0_0x0 + uVar14) - param_1[iVar8].W) {
          iVar8 = iVar15;
        }
        *(int *)((longlong)local_58 + uVar13) = iVar8;
        iVar8 = *(int *)((longlong)local_48 + uVar13);
        if (param_1[iVar8].W + *(double *)((longlong)&param_1[iVar8].Center.field0_0x0 + uVar14) <
            dVar3 + dVar4) {
          iVar8 = iVar15;
        }
        uVar14 = uVar14 + 8;
        *(int *)((longlong)local_48 + uVar13) = iVar8;
        uVar13 = uVar13 + 4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      uVar10 = (ulonglong)(iVar15 + 1U);
      pTVar7 = pTVar7 + 1;
    } while ((int)(iVar15 + 1U) < param_2);
    iVar8 = local_48[1];
    iVar15 = local_48[2];
  }
  pdVar1 = &param_1[local_58[0]].Center.field0_0x0._s_0.Z;
  pdVar2 = &param_1[local_48[0]].Center.field0_0x0._s_0.Z;
  dVar4 = param_1[local_48[0]].Center.field0_0x0._s_0.X -
          param_1[local_58[0]].Center.field0_0x0._s_0.X;
  dVar16 = param_1[local_48[0]].Center.field0_0x0._s_0.Y -
           param_1[local_58[0]].Center.field0_0x0._s_0.Y;
  dVar3 = *pdVar2 - *pdVar1;
  dVar3 = SQRT(dVar16 * dVar16 + dVar4 * dVar4 + dVar3 * dVar3) + pdVar1[1] + pdVar2[1];
  dVar4 = 0.0;
  if (0.0 < dVar3) {
    dVar4 = dVar3;
  }
  pdVar1 = &param_1[local_58[1]].Center.field0_0x0._s_0.Z;
  pdVar2 = &param_1[iVar8].Center.field0_0x0._s_0.Z;
  dVar16 = param_1[iVar8].Center.field0_0x0._s_0.X - param_1[local_58[1]].Center.field0_0x0._s_0.X;
  dVar17 = param_1[iVar8].Center.field0_0x0._s_0.Y - param_1[local_58[1]].Center.field0_0x0._s_0.Y;
  dVar3 = *pdVar2 - *pdVar1;
  dVar3 = SQRT(dVar17 * dVar17 + dVar16 * dVar16 + dVar3 * dVar3) + pdVar1[1] + pdVar2[1];
  dVar16 = dVar4;
  if (dVar4 < dVar3) {
    dVar16 = dVar3;
  }
  pdVar1 = &param_1[local_58[2]].Center.field0_0x0._s_0.Z;
  pdVar2 = &param_1[iVar15].Center.field0_0x0._s_0.Z;
  uVar10 = (ulonglong)(dVar4 < dVar3);
  dVar4 = param_1[iVar15].Center.field0_0x0._s_0.X - param_1[local_58[2]].Center.field0_0x0._s_0.X;
  dVar17 = param_1[iVar15].Center.field0_0x0._s_0.Y - param_1[local_58[2]].Center.field0_0x0._s_0.Y;
  dVar3 = *pdVar2 - *pdVar1;
  if (dVar16 < SQRT(dVar17 * dVar17 + dVar4 * dVar4 + dVar3 * dVar3) + pdVar1[1] + pdVar2[1]) {
    uVar10 = 2;
  }
  iVar8 = local_58[uVar10];
  iVar15 = local_48[uVar10];
  dVar3 = param_1[iVar8].Center.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = param_1[iVar8].Center.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar3;
  pdVar1 = &param_1[iVar8].Center.field0_0x0._s_0.Z;
  dVar3 = pdVar1[1];
  (this->Center).field0_0x0._s_0.Z = *pdVar1;
  this->W = dVar3;
  operator+=(this,param_1 + iVar15);
  if (0 < param_2) {
    do {
      operator+=(this,param_1);
      param_1 = param_1 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return this;
}

// TSphere<double> @ 14179f380

TSphere<double> * __thiscall
UE::Math::TSphere<double>::TSphere<double>
          (TSphere<double> *this,TVector<double> *param_1,int param_2)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TSphere<double> *pTVar5;
  longlong lVar6;
  double *pdVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  uint local_118 [4];
  uint local_108 [4];
  int local_f8;
  TSphere<double> *local_d8;
  ulonglong uVar20;
  
  local_f8 = param_2;
  local_d8 = this;
  if ((param_2 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sphere.cpp"
                         ,0x10,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSphere<double> *)(*pcVar2)();
    return pTVar5;
  }
  dVar3 = __real_3fe0000000000000;
  uVar12 = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[0] = 0;
  local_108[0] = 0;
  local_118[2] = 0;
  local_108[1] = 0;
  local_108[2] = 0;
  local_108[1] = 0;
  uVar19 = local_118[0];
  uVar13 = local_118[0];
  iVar10 = local_108[1];
  iVar17 = local_108[1];
  if (0 < param_2) {
    uVar9 = uVar12;
    uVar11 = uVar12;
    uVar14 = uVar12;
    uVar15 = uVar12;
    uVar16 = uVar12;
    pdVar7 = &(param_1->field0_0x0)._s_0.Z;
    uVar18 = uVar12;
    uVar20 = uVar12;
    do {
      dVar22 = ((TVector<double>_u_0_s_0 *)(pdVar7 + -2))->X;
      local_118[0] = (uint)uVar20;
      if (param_1[(int)(uint)uVar16].field0_0x0._s_0.X <= dVar22) {
        local_118[0] = (uint)uVar16;
      }
      uVar16 = (ulonglong)local_118[0];
      dVar32 = pdVar7[-1];
      if (param_1[(int)uVar9].field0_0x0._s_0.X <= dVar22 &&
          dVar22 != param_1[(int)uVar9].field0_0x0._s_0.X) {
        uVar9 = uVar20;
      }
      if (dVar32 < param_1[(int)uVar14].field0_0x0._s_0.Y) {
        uVar14 = uVar20;
      }
      pdVar1 = &param_1[(int)uVar15].field0_0x0._s_0.Y;
      dVar22 = *pdVar7;
      if (*pdVar1 <= dVar32 && dVar32 != *pdVar1) {
        uVar15 = uVar20;
      }
      local_108[1] = (uint)uVar15;
      if (dVar22 < param_1[(int)uVar11].field0_0x0._s_0.Z) {
        uVar11 = uVar20;
      }
      pdVar1 = &param_1[(int)uVar18].field0_0x0._s_0.Z;
      if (*pdVar1 <= dVar22 && dVar22 != *pdVar1) {
        uVar18 = uVar20;
      }
      uVar19 = (uint)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      pdVar7 = pdVar7 + 3;
    } while ((int)uVar19 < local_f8);
    local_108[0] = (uint)uVar9;
    local_118[2] = (int)uVar11;
    local_108[2] = (int)uVar18;
    local_118[1] = (uint)uVar14;
    this = local_d8;
    param_2 = local_f8;
    uVar19 = (uint)uVar9;
    uVar13 = (uint)uVar14;
    iVar10 = (int)uVar11;
    iVar17 = (int)uVar18;
  }
  dVar32 = param_1[(int)uVar19].field0_0x0._s_0.Z - param_1[(int)local_118[0]].field0_0x0._s_0.Z;
  dVar22 = param_1[(int)uVar19].field0_0x0._s_0.X - param_1[(int)local_118[0]].field0_0x0._s_0.X;
  dVar34 = param_1[(int)uVar19].field0_0x0._s_0.Y - param_1[(int)local_118[0]].field0_0x0._s_0.Y;
  dVar32 = dVar34 * dVar34 + dVar22 * dVar22 + dVar32 * dVar32;
  dVar22 = 0.0;
  if (0.0 < dVar32) {
    dVar22 = dVar32;
  }
  dVar34 = param_1[(int)local_108[1]].field0_0x0._s_0.Z - param_1[(int)uVar13].field0_0x0._s_0.Z;
  dVar32 = param_1[(int)local_108[1]].field0_0x0._s_0.X - param_1[(int)uVar13].field0_0x0._s_0.X;
  dVar35 = param_1[(int)local_108[1]].field0_0x0._s_0.Y - param_1[(int)uVar13].field0_0x0._s_0.Y;
  dVar34 = dVar35 * dVar35 + dVar32 * dVar32 + dVar34 * dVar34;
  dVar32 = dVar22;
  if (dVar22 < dVar34) {
    dVar32 = dVar34;
  }
  pdVar7 = &(param_1->field0_0x0)._s_0.Z;
  uVar19 = (uint)(dVar22 < dVar34);
  dVar22 = param_1[iVar17].field0_0x0._s_0.Y;
  dVar35 = param_1[iVar17].field0_0x0._s_0.Z - pdVar7[(longlong)iVar10 * 3];
  dVar34 = param_1[iVar17].field0_0x0._s_0.X - param_1[iVar10].field0_0x0._s_0.X;
  dVar36 = dVar22 - param_1[iVar10].field0_0x0._s_0.Y;
  auVar33._0_8_ = dVar35 * dVar35;
  auVar33._8_8_ = 0;
  auVar27._0_8_ = dVar36 * dVar36 + dVar34 * dVar34 + auVar33._0_8_;
  auVar27._8_8_ = dVar22;
  if (dVar32 < auVar27._0_8_) {
    uVar19 = 2;
    dVar32 = auVar27._0_8_;
  }
  auVar29 = *(undefined1 (*) [16])&param_1[(int)local_118[uVar19]].field0_0x0;
  uVar37 = auVar29._8_4_;
  uVar38 = auVar29._12_4_;
  lVar8 = (longlong)param_2;
  dVar39 = (param_1[(int)local_118[uVar19]].field0_0x0._s_0.Z +
           param_1[(int)local_108[uVar19]].field0_0x0._s_0.Z) * __real_3fe0000000000000;
  dVar22 = (auVar29._0_8_ + param_1[(int)local_108[uVar19]].field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar34 = (auVar29._8_8_ + param_1[(int)local_108[uVar19]].field0_0x0._s_0.Y) *
           __real_3fe0000000000000;
  dVar36 = SQRT(dVar32) * __real_3fe0000000000000;
  (this->Center).field0_0x0._s_0.X = dVar22;
  (this->Center).field0_0x0._s_0.Y = dVar34;
  (this->Center).field0_0x0._s_0.Z = dVar39;
  dVar35 = __real_3ff0000000000000;
  dVar32 = dVar32 * __real_3fd0000000000000;
  this->W = dVar36;
  if (3 < lVar8) {
    lVar6 = (lVar8 - 4U >> 2) + 1;
    uVar12 = lVar6 * 4;
    do {
      dVar36 = pdVar7[-1];
      dVar24 = *pdVar7;
      dVar25 = ((TVector<double>_u_0_s_0 *)(pdVar7 + -2))->X - dVar22;
      dVar23 = dVar36 - dVar34;
      dVar21 = dVar24 - dVar39;
      auVar29._0_8_ = dVar25 * dVar25 + dVar23 * dVar23 + dVar21 * dVar21;
      auVar29._8_8_ = 0;
      if (dVar32 < auVar29._0_8_) {
        dVar21 = this->W;
        auVar33 = sqrtpd(auVar33,auVar29);
        dVar25 = (dVar21 / auVar33._0_8_ + dVar35) * dVar3;
        dVar23 = dVar35 - dVar25;
        dVar22 = ((TVector<double>_u_0_s_0 *)(pdVar7 + -2))->X * dVar23 + dVar25 * dVar22;
        (this->Center).field0_0x0._s_0.X = dVar22;
        dVar34 = dVar34 * dVar25 + dVar23 * dVar36;
        dVar39 = dVar39 * dVar25 + dVar23 * dVar24;
        (this->Center).field0_0x0._s_0.Y = dVar34;
        (this->Center).field0_0x0._s_0.Z = dVar39;
        this->W = (dVar21 + auVar33._0_8_) * dVar3;
      }
      dVar21 = pdVar7[1] - dVar22;
      dVar24 = pdVar7[2] - dVar34;
      dVar36 = pdVar7[3] - dVar39;
      auVar26._0_8_ = dVar21 * dVar21 + dVar24 * dVar24 + dVar36 * dVar36;
      auVar26._8_8_ = 0;
      if (auVar26._0_8_ <= dVar32) {
        auVar27._8_4_ = uVar37;
        auVar27._0_8_ = dVar34;
        auVar27._12_4_ = uVar38;
      }
      else {
        auVar27 = sqrtpd(auVar26,auVar26);
        auVar33._0_8_ = (this->W + auVar27._0_8_) * dVar3;
        auVar33._8_8_ = 0;
        dVar36 = (this->W / auVar27._0_8_ + dVar35) * dVar3;
        dVar24 = dVar35 - dVar36;
        dVar22 = dVar24 * pdVar7[1] + dVar36 * dVar22;
        auVar27._0_8_ = dVar24 * pdVar7[2] + dVar34 * dVar36;
        auVar27._8_8_ = 0;
        dVar39 = dVar24 * pdVar7[3] + dVar39 * dVar36;
        (this->Center).field0_0x0._s_0.X = dVar22;
        (this->Center).field0_0x0._s_0.Y = auVar27._0_8_;
        (this->Center).field0_0x0._s_0.Z = dVar39;
        this->W = auVar33._0_8_;
      }
      dVar21 = pdVar7[4] - dVar22;
      dVar34 = auVar27._0_8_;
      dVar24 = pdVar7[5] - dVar34;
      dVar36 = pdVar7[6] - dVar39;
      auVar28._0_8_ = dVar21 * dVar21 + dVar24 * dVar24 + dVar36 * dVar36;
      auVar28._8_8_ = 0;
      if (auVar28._0_8_ <= dVar32) {
        uVar37 = auVar27._8_4_;
        uVar38 = auVar27._12_4_;
      }
      else {
        auVar29 = sqrtpd(auVar28,auVar28);
        auVar33._0_8_ = (this->W + auVar29._0_8_) * dVar3;
        auVar33._8_8_ = 0;
        dVar36 = (this->W / auVar29._0_8_ + dVar35) * dVar3;
        dVar24 = dVar35 - dVar36;
        auVar27._0_8_ = dVar34 * dVar36;
        uVar37 = 0;
        uVar38 = 0;
        dVar22 = dVar24 * pdVar7[4] + dVar36 * dVar22;
        dVar34 = dVar24 * pdVar7[5] + auVar27._0_8_;
        dVar39 = dVar24 * pdVar7[6] + dVar39 * dVar36;
        (this->Center).field0_0x0._s_0.X = dVar22;
        (this->Center).field0_0x0._s_0.Y = dVar34;
        (this->Center).field0_0x0._s_0.Z = dVar39;
        this->W = auVar33._0_8_;
      }
      dVar36 = pdVar7[8];
      dVar24 = pdVar7[9];
      dVar25 = pdVar7[7] - dVar22;
      dVar23 = dVar36 - dVar34;
      dVar21 = dVar24 - dVar39;
      auVar30._0_8_ = dVar25 * dVar25 + dVar23 * dVar23 + dVar21 * dVar21;
      auVar30._8_8_ = 0;
      if (dVar32 < auVar30._0_8_) {
        auVar33 = sqrtpd(auVar33,auVar30);
        auVar27._0_8_ = (this->W + auVar33._0_8_) * dVar3;
        auVar27._8_8_ = 0;
        dVar21 = (this->W / auVar33._0_8_ + dVar35) * dVar3;
        dVar23 = dVar35 - dVar21;
        uVar37 = 0;
        uVar38 = 0;
        dVar22 = dVar23 * pdVar7[7] + dVar21 * dVar22;
        (this->Center).field0_0x0._s_0.X = dVar22;
        dVar34 = dVar23 * dVar36 + dVar21 * dVar34;
        dVar39 = dVar23 * dVar24 + dVar21 * dVar39;
        (this->Center).field0_0x0._s_0.Y = dVar34;
        (this->Center).field0_0x0._s_0.Z = dVar39;
        this->W = auVar27._0_8_;
      }
      pdVar7 = pdVar7 + 0xc;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((longlong)uVar12 < lVar8) {
    lVar8 = lVar8 - uVar12;
    pdVar7 = &param_1[uVar12].field0_0x0._s_0.Z;
    do {
      dVar21 = ((TVector<double>_u_0_s_0 *)(pdVar7 + -2))->X - dVar22;
      dVar24 = pdVar7[-1] - dVar34;
      dVar36 = *pdVar7 - dVar39;
      auVar31._0_8_ = dVar21 * dVar21 + dVar24 * dVar24 + dVar36 * dVar36;
      auVar31._8_8_ = 0;
      if (dVar32 < auVar31._0_8_) {
        auVar33 = sqrtpd(auVar27,auVar31);
        dVar24 = (this->W / auVar33._0_8_ + dVar35) * dVar3;
        dVar36 = dVar35 - dVar24;
        dVar34 = dVar34 * dVar24 + pdVar7[-1] * dVar36;
        dVar22 = dVar24 * dVar22 + dVar36 * ((TVector<double>_u_0_s_0 *)(pdVar7 + -2))->X;
        dVar39 = dVar39 * dVar24 + *pdVar7 * dVar36;
        (this->Center).field0_0x0._s_0.X = dVar22;
        (this->Center).field0_0x0._s_0.Y = dVar34;
        (this->Center).field0_0x0._s_0.Z = dVar39;
        auVar27._8_8_ = auVar33._8_8_;
        auVar27._0_8_ = (auVar33._0_8_ + this->W) * dVar3;
        this->W = auVar27._0_8_;
      }
      pdVar7 = pdVar7 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return this;
}

// operator+= @ 1417afc50

TSphere<float> * __thiscall
UE::Math::TSphere<float>::operator+=(TSphere<float> *this,TSphere<float> *param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_38;
  float fStack_30;
  
  fVar1 = this->W;
  if (fVar1 == 0.0) {
    uVar2 = *(undefined8 *)((longlong)&(param_1->Center).field0_0x0 + 8);
    *(undefined8 *)&(this->Center).field0_0x0 = *(undefined8 *)&(param_1->Center).field0_0x0;
    *(undefined8 *)((longlong)&(this->Center).field0_0x0 + 8) = uVar2;
    return this;
  }
  fVar5 = (param_1->Center).field0_0x0._s_0.X - (this->Center).field0_0x0._s_0.X;
  fVar6 = (param_1->Center).field0_0x0._s_0.Y - (this->Center).field0_0x0._s_0.Y;
  fVar7 = (param_1->Center).field0_0x0._s_0.Z - (this->Center).field0_0x0._s_0.Z;
  fVar3 = fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7;
  fVar4 = param_1->W;
  if ((fVar1 - fVar4) * (fVar1 - fVar4) + __real_38d1b717 < fVar3) {
    local_38 = *(undefined8 *)&(this->Center).field0_0x0;
    fStack_30 = (this->Center).field0_0x0._s_0.Z;
    fVar3 = SQRT(fVar3);
    fVar4 = (fVar3 + fVar4 + fVar1) * __real_3f000000;
    if (__real_322bcc77 < fVar3) {
      fVar3 = (fVar4 - fVar1) / fVar3;
      local_38._4_4_ = (float)((ulonglong)local_38 >> 0x20);
      fStack_30 = fStack_30 + fVar3 * fVar7;
      local_38 = CONCAT44(local_38._4_4_ + fVar3 * fVar6,(float)local_38 + fVar3 * fVar5);
    }
  }
  else {
    if (fVar4 <= fVar1) {
      return this;
    }
    local_38._0_4_ = (param_1->Center).field0_0x0._s_0.X;
    local_38._4_4_ = (param_1->Center).field0_0x0._s_0.Y;
    fStack_30 = (param_1->Center).field0_0x0._s_0.Z;
    fVar4 = param_1->W;
  }
  (this->Center).field0_0x0._s_0.X = (float)local_38;
  (this->Center).field0_0x0._s_0.Y = local_38._4_4_;
  (this->Center).field0_0x0._s_0.Z = fStack_30;
  this->W = fVar4;
  return this;
}

// operator+= @ 1417afd80

TSphere<double> * __thiscall
UE::Math::TSphere<double>::operator+=(TSphere<double> *this,TSphere<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double local_38;
  
  dVar1 = this->W;
  if (dVar1 == 0.0) {
    dVar1 = (param_1->Center).field0_0x0._s_0.Y;
    (this->Center).field0_0x0._s_0.X = (param_1->Center).field0_0x0._s_0.X;
    (this->Center).field0_0x0._s_0.Y = dVar1;
    dVar1 = param_1->W;
    (this->Center).field0_0x0._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
    this->W = dVar1;
    return this;
  }
  dVar10 = (param_1->Center).field0_0x0._s_0.X - (this->Center).field0_0x0._s_0.X;
  dVar3 = (param_1->Center).field0_0x0._s_0.Y - (this->Center).field0_0x0._s_0.Y;
  dVar4 = (param_1->Center).field0_0x0._s_0.Z - (this->Center).field0_0x0._s_0.Z;
  auVar7._0_8_ = dVar3 * dVar3 + dVar10 * dVar10 + dVar4 * dVar4;
  auVar7._8_8_ = 0;
  dVar8 = param_1->W;
  if ((dVar1 - dVar8) * (dVar1 - dVar8) + __real_3f1a36e2e0000000 < auVar7._0_8_) {
    local_38 = (this->Center).field0_0x0._s_0.Z;
    auVar7 = sqrtpd(auVar7,auVar7);
    dVar9 = auVar7._0_8_;
    dVar6 = (this->Center).field0_0x0._s_0.X;
    dVar5 = *(double *)((longlong)&(this->Center).field0_0x0 + 8);
    dVar8 = (dVar9 + dVar8 + dVar1) * __real_3fe0000000000000;
    if (__real_3e45798ee0000000 < dVar9) {
      dVar9 = (dVar8 - dVar1) / dVar9;
      dVar6 = dVar6 + dVar9 * dVar10;
      dVar5 = dVar5 + dVar9 * dVar3;
      local_38 = local_38 + dVar9 * dVar4;
    }
    auVar2._8_4_ = SUB84(dVar5,0);
    auVar2._0_8_ = dVar6;
    auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])&(this->Center).field0_0x0 = auVar2;
    (this->Center).field0_0x0._s_0.Z = local_38;
    this->W = dVar8;
  }
  else if (dVar1 < dVar8) {
    dVar1 = (param_1->Center).field0_0x0._s_0.Y;
    (this->Center).field0_0x0._s_0.X = (param_1->Center).field0_0x0._s_0.X;
    (this->Center).field0_0x0._s_0.Y = dVar1;
    dVar1 = param_1->W;
    (this->Center).field0_0x0._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
    this->W = dVar1;
    return this;
  }
  return this;
}

