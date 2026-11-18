// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 15

// StaticStruct @ 14940ce90

UScriptStruct * __cdecl FNiagaraStructConversionStep::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStructConversionStep.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStructConversionStep.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStructConversionStep,(UObject *)pUVar1,
                         L"NiagaraStructConversionStep");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStructConversionStep.OuterSingleton;
}

// CopyInternal<float,double> @ 14941a310

void __thiscall
FNiagaraStructConversionStep::CopyInternal<float,double>
          (FNiagaraStructConversionStep *this,uchar *param_1,int param_2,int param_3,uchar *param_4,
          int param_5,int param_6,int param_7)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  float *pfVar4;
  double *pdVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  iVar6 = 0;
  if (3 < param_7) {
    lVar7 = (longlong)(param_2 * 2);
    lVar9 = (longlong)(param_5 * 2);
    pfVar4 = (float *)(param_1 + lVar7 + param_3);
    pdVar5 = (double *)(param_4 + lVar9 + param_6);
    uVar3 = (param_7 - 4U >> 2) + 1;
    uVar8 = (ulonglong)uVar3;
    iVar6 = uVar3 * 4;
    do {
      *(float *)((longlong)pfVar4 - lVar7) = (float)*(double *)((longlong)pdVar5 - lVar9);
      *(float *)((longlong)pfVar4 + (param_2 - lVar7)) =
           (float)*(double *)((longlong)pdVar5 + (param_5 - lVar9));
      *pfVar4 = (float)*pdVar5;
      pdVar1 = (double *)((longlong)pdVar5 + (param_5 * 3 - lVar9));
      pdVar5 = (double *)((longlong)pdVar5 + (longlong)(param_5 * 4));
      *(float *)((longlong)pfVar4 + (param_2 * 3 - lVar7)) = (float)*pdVar1;
      pfVar4 = (float *)((longlong)pfVar4 + (longlong)(param_2 * 4));
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (iVar6 < param_7) {
    pfVar4 = (float *)(param_1 + (longlong)param_3 + (longlong)(iVar6 * param_2));
    pdVar5 = (double *)(param_4 + (longlong)param_6 + (longlong)(iVar6 * param_5));
    uVar8 = (ulonglong)(uint)(param_7 - iVar6);
    do {
      dVar2 = *pdVar5;
      pdVar5 = (double *)((longlong)pdVar5 + (longlong)param_5);
      *pfVar4 = (float)dVar2;
      pfVar4 = (float *)((longlong)pfVar4 + (longlong)param_2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// CopyInternal<double,float> @ 14941a4b0

void __thiscall
FNiagaraStructConversionStep::CopyInternal<double,float>
          (FNiagaraStructConversionStep *this,uchar *param_1,int param_2,int param_3,uchar *param_4,
          int param_5,int param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  double *pdVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  iVar6 = 0;
  if (3 < param_7) {
    lVar7 = (longlong)(param_2 * 2);
    lVar9 = (longlong)(param_5 * 2);
    pdVar4 = (double *)(param_1 + lVar7 + param_3);
    pfVar5 = (float *)(param_4 + lVar9 + param_6);
    uVar3 = (param_7 - 4U >> 2) + 1;
    uVar8 = (ulonglong)uVar3;
    iVar6 = uVar3 * 4;
    do {
      *(double *)((longlong)pdVar4 - lVar7) = (double)*(float *)((longlong)pfVar5 - lVar9);
      *(double *)((longlong)pdVar4 + (param_2 - lVar7)) =
           (double)*(float *)((longlong)pfVar5 + (param_5 - lVar9));
      *pdVar4 = (double)*pfVar5;
      pfVar1 = (float *)((longlong)pfVar5 + (param_5 * 3 - lVar9));
      pfVar5 = (float *)((longlong)pfVar5 + (longlong)(param_5 * 4));
      *(double *)((longlong)pdVar4 + (param_2 * 3 - lVar7)) = (double)*pfVar1;
      pdVar4 = (double *)((longlong)pdVar4 + (longlong)(param_2 * 4));
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (iVar6 < param_7) {
    pdVar4 = (double *)(param_1 + (longlong)param_3 + (longlong)(iVar6 * param_2));
    pfVar5 = (float *)(param_4 + (longlong)param_6 + (longlong)(iVar6 * param_5));
    uVar8 = (ulonglong)(uint)(param_7 - iVar6);
    do {
      fVar2 = *pfVar5;
      pfVar5 = (float *)((longlong)pfVar5 + (longlong)param_5);
      *pdVar4 = (double)fVar2;
      pdVar4 = (double *)((longlong)pdVar4 + (longlong)param_2);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// CopyInternal<UE::Math::TQuat<float>,UE::Math::TQuat<double>_> @ 14941a650

void __thiscall
FNiagaraStructConversionStep::CopyInternal<UE::Math::TQuat<float>,UE::Math::TQuat<double>_>
          (FNiagaraStructConversionStep *this,uchar *param_1,int param_2,int param_3,uchar *param_4,
          int param_5,int param_6,int param_7)

{
  float *pfVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  double *pdVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  iVar9 = 0;
  lVar12 = (longlong)param_5;
  if (3 < param_7) {
    lVar10 = (longlong)(param_2 * 2);
    pfVar11 = (float *)(param_1 + param_3 + lVar10);
    pdVar8 = (double *)(param_4 + lVar12 + param_6 + 0x10);
    lVar7 = param_5 * 2 - lVar12;
    lVar14 = param_5 * 3 - lVar12;
    uVar6 = (param_7 - 4U >> 2) + 1;
    uVar13 = (ulonglong)uVar6;
    iVar9 = uVar6 * 4;
    do {
      dVar3 = *(double *)((longlong)pdVar8 + (-8 - lVar12));
      dVar4 = *(double *)((8 - lVar12) + (longlong)pdVar8);
      dVar5 = *(double *)((longlong)pdVar8 - lVar12);
      pfVar1 = (float *)((longlong)pfVar11 - lVar10);
      *pfVar1 = (float)*(double *)((longlong)pdVar8 + (-0x10 - lVar12));
      pfVar1[1] = (float)dVar3;
      pfVar1[2] = (float)dVar5;
      pfVar1[3] = (float)dVar4;
      dVar3 = pdVar8[-1];
      dVar4 = *pdVar8;
      dVar5 = pdVar8[1];
      pfVar1 = (float *)((param_2 - lVar10) + (longlong)pfVar11);
      *pfVar1 = (float)pdVar8[-2];
      pfVar1[1] = (float)dVar3;
      pfVar1[2] = (float)dVar4;
      pfVar1[3] = (float)dVar5;
      dVar3 = *(double *)((longlong)pdVar8 + lVar7 + -8);
      dVar4 = *(double *)((longlong)pdVar8 + lVar7);
      dVar5 = *(double *)((longlong)pdVar8 + lVar7 + 8);
      *pfVar11 = (float)*(double *)((longlong)pdVar8 + lVar7 + -0x10);
      pfVar11[1] = (float)dVar3;
      pfVar11[2] = (float)dVar4;
      pfVar11[3] = (float)dVar5;
      pdVar2 = (double *)(lVar14 + -0x10 + (longlong)pdVar8);
      dVar3 = *(double *)(lVar14 + -8 + (longlong)pdVar8);
      dVar4 = *(double *)(lVar14 + (longlong)pdVar8);
      dVar5 = *(double *)(lVar14 + 8 + (longlong)pdVar8);
      pdVar8 = (double *)((longlong)pdVar8 + (longlong)(param_5 * 4));
      pfVar1 = (float *)((param_2 * 3 - lVar10) + (longlong)pfVar11);
      *pfVar1 = (float)*pdVar2;
      pfVar1[1] = (float)dVar3;
      pfVar1[2] = (float)dVar4;
      pfVar1[3] = (float)dVar5;
      pfVar11 = (float *)((longlong)pfVar11 + (longlong)(param_2 * 4));
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (iVar9 < param_7) {
    pfVar11 = (float *)(param_1 + (longlong)param_3 + (longlong)(iVar9 * param_2));
    pdVar8 = (double *)(param_4 + (longlong)param_6 + (longlong)(iVar9 * param_5) + 0x10);
    uVar13 = (ulonglong)(uint)(param_7 - iVar9);
    do {
      pdVar2 = pdVar8 + -2;
      dVar3 = pdVar8[-1];
      dVar4 = *pdVar8;
      dVar5 = pdVar8[1];
      pdVar8 = (double *)((longlong)pdVar8 + (longlong)param_5);
      *pfVar11 = (float)*pdVar2;
      pfVar11[1] = (float)dVar3;
      pfVar11[2] = (float)dVar4;
      pfVar11[3] = (float)dVar5;
      pfVar11 = (float *)((longlong)pfVar11 + (longlong)param_2);
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}

// CopyInternal<UE::Math::TQuat<double>,UE::Math::TQuat<float>_> @ 14941a9a0

void __thiscall
FNiagaraStructConversionStep::CopyInternal<UE::Math::TQuat<double>,UE::Math::TQuat<float>_>
          (FNiagaraStructConversionStep *this,uchar *param_1,int param_2,int param_3,uchar *param_4,
          int param_5,int param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  iVar11 = 0;
  lVar13 = (longlong)param_5;
  lVar14 = (longlong)param_2;
  if (3 < param_7) {
    pfVar15 = (float *)(param_4 + lVar13 + param_6 + 8);
    pdVar10 = (double *)(param_1 + (longlong)param_3 + 0x10 + lVar14);
    lVar9 = param_5 * 2 - lVar13;
    lVar16 = param_5 * 3 - lVar13;
    lVar12 = param_2 * 2 - lVar14;
    lVar17 = param_2 * 3 - lVar14;
    uVar8 = (param_7 - 4U >> 2) + 1;
    uVar18 = (ulonglong)uVar8;
    iVar11 = uVar8 * 4;
    do {
      fVar2 = *(float *)((longlong)pfVar15 + (-4 - lVar13));
      fVar3 = *(float *)((4 - lVar13) + (longlong)pfVar15);
      fVar4 = *(float *)((longlong)pfVar15 - lVar13);
      *(double *)((-0x10 - lVar14) + (longlong)pdVar10) =
           (double)*(float *)((longlong)pfVar15 + (-8 - lVar13));
      *(double *)((longlong)pdVar10 + (-8 - lVar14)) = (double)fVar2;
      *(double *)((longlong)pdVar10 - lVar14) = (double)fVar4;
      *(double *)((8 - lVar14) + (longlong)pdVar10) = (double)fVar3;
      fVar2 = *pfVar15;
      dVar7 = (double)(float)((ulonglong)*(undefined8 *)(pfVar15 + -2) >> 0x20);
      fVar3 = pfVar15[1];
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = (double)(float)*(undefined8 *)(pfVar15 + -2);
      auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pdVar10 + -2) = auVar5;
      *pdVar10 = (double)fVar2;
      pdVar10[1] = (double)fVar3;
      fVar2 = *(float *)(lVar9 + -4 + (longlong)pfVar15);
      fVar3 = *(float *)(lVar9 + (longlong)pfVar15);
      fVar4 = *(float *)(lVar9 + 4 + (longlong)pfVar15);
      *(double *)((longlong)pdVar10 + lVar12 + -0x10) =
           (double)*(float *)(lVar9 + -8 + (longlong)pfVar15);
      *(double *)((longlong)pdVar10 + lVar12 + -8) = (double)fVar2;
      *(double *)((longlong)pdVar10 + lVar12) = (double)fVar3;
      *(double *)((longlong)pdVar10 + lVar12 + 8) = (double)fVar4;
      pfVar1 = (float *)(lVar16 + -8 + (longlong)pfVar15);
      fVar2 = *(float *)(lVar16 + -4 + (longlong)pfVar15);
      fVar3 = *(float *)(lVar16 + (longlong)pfVar15);
      fVar4 = *(float *)(lVar16 + 4 + (longlong)pfVar15);
      pfVar15 = (float *)((longlong)pfVar15 + (longlong)(param_5 * 4));
      *(double *)(lVar17 + -0x10 + (longlong)pdVar10) = (double)*pfVar1;
      *(double *)(lVar17 + -8 + (longlong)pdVar10) = (double)fVar2;
      *(double *)(lVar17 + (longlong)pdVar10) = (double)fVar3;
      *(double *)(lVar17 + 8 + (longlong)pdVar10) = (double)fVar4;
      pdVar10 = (double *)((longlong)pdVar10 + (longlong)(param_2 * 4));
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  if (iVar11 < param_7) {
    pdVar10 = (double *)(param_1 + (longlong)param_3 + 0x10 + (longlong)(iVar11 * param_2));
    pfVar15 = (float *)(param_4 + (longlong)param_6 + (longlong)(iVar11 * param_5) + 8);
    uVar18 = (ulonglong)(uint)(param_7 - iVar11);
    do {
      fVar2 = *pfVar15;
      fVar3 = pfVar15[1];
      pfVar1 = pfVar15 + -2;
      dVar7 = (double)(float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
      pfVar15 = (float *)((longlong)pfVar15 + (longlong)param_5);
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = (double)(float)*(undefined8 *)pfVar1;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pdVar10 + -2) = auVar6;
      *pdVar10 = (double)fVar2;
      pdVar10[1] = (double)fVar3;
      pdVar10 = (double *)((longlong)pdVar10 + lVar14);
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  return;
}

// CopyInternal<UE::Math::TVector2<float>,UE::Math::TVector2<double>_> @ 14941aca0

void __thiscall
FNiagaraStructConversionStep::CopyInternal<UE::Math::TVector2<float>,UE::Math::TVector2<double>_>
          (FNiagaraStructConversionStep *this,uchar *param_1,int param_2,int param_3,uchar *param_4,
          int param_5,int param_6,int param_7)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  ulonglong uVar5;
  double *pdVar6;
  int iVar7;
  longlong lVar8;
  uchar *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_58;
  
  iVar7 = 0;
  if (3 < param_7) {
    lVar11 = (longlong)(param_2 * 2);
    lVar10 = (longlong)(param_5 * 2);
    puVar9 = param_1 + lVar11 + param_3;
    pdVar6 = (double *)(param_4 + lVar10 + param_6 + 8);
    lVar8 = param_5 * 3 - lVar10;
    uVar4 = (param_7 - 4U >> 2) + 1;
    uVar5 = (ulonglong)uVar4;
    iVar7 = uVar4 * 4;
    do {
      local_58 = CONCAT44((float)*(double *)((longlong)pdVar6 - lVar10),
                          (float)*(double *)((longlong)pdVar6 + (-8 - lVar10)));
      *(undefined8 *)(puVar9 + -lVar11) = local_58;
      local_58 = CONCAT44((float)*(double *)((param_5 - lVar10) + (longlong)pdVar6),
                          (float)*(double *)((param_5 - lVar10) + -8 + (longlong)pdVar6));
      *(undefined8 *)(puVar9 + (param_2 - lVar11)) = local_58;
      local_58 = CONCAT44((float)*pdVar6,(float)pdVar6[-1]);
      *(undefined8 *)puVar9 = local_58;
      pdVar2 = (double *)(lVar8 + -8 + (longlong)pdVar6);
      pdVar1 = (double *)(lVar8 + (longlong)pdVar6);
      pdVar6 = (double *)((longlong)pdVar6 + (longlong)(param_5 * 4));
      local_58 = CONCAT44((float)*pdVar1,(float)*pdVar2);
      *(undefined8 *)(puVar9 + (param_2 * 3 - lVar11)) = local_58;
      puVar9 = puVar9 + param_2 * 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar7 < param_7) {
    puVar9 = param_1 + (longlong)param_3 + (longlong)(iVar7 * param_2);
    pdVar6 = (double *)(param_4 + (longlong)param_6 + (longlong)(iVar7 * param_5));
    uVar5 = (ulonglong)(uint)(param_7 - iVar7);
    do {
      dVar3 = *pdVar6;
      pdVar1 = pdVar6 + 1;
      pdVar6 = (double *)((longlong)pdVar6 + (longlong)param_5);
      local_58 = CONCAT44((float)*pdVar1,(float)dVar3);
      *(undefined8 *)puVar9 = local_58;
      puVar9 = puVar9 + param_2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// CopyInternal<UE::Math::TVector2<double>,UE::Math::TVector2<float>_> @ 14941aee0

void __thiscall
FNiagaraStructConversionStep::CopyInternal<UE::Math::TVector2<double>,UE::Math::TVector2<float>_>
          (FNiagaraStructConversionStep *this,uchar *param_1,int param_2,int param_3,uchar *param_4,
          int param_5,int param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  double *pdVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar7 = 0;
  if (3 < param_7) {
    lVar11 = (longlong)(param_2 * 2);
    lVar12 = (longlong)(param_5 * 2);
    pdVar6 = (double *)(param_1 + lVar11 + param_3 + 8);
    pfVar10 = (float *)(param_4 + param_6 + lVar12 + 4);
    lVar9 = param_5 * 3 - lVar12;
    lVar8 = param_2 * 3 - lVar11;
    uVar4 = (param_7 - 4U >> 2) + 1;
    uVar5 = (ulonglong)uVar4;
    iVar7 = uVar4 * 4;
    do {
      fVar2 = *(float *)((longlong)pfVar10 - lVar12);
      *(double *)((longlong)pdVar6 + (-8 - lVar11)) =
           (double)*(float *)((longlong)pfVar10 + (-4 - lVar12));
      *(double *)((longlong)pdVar6 - lVar11) = (double)fVar2;
      fVar2 = *(float *)((longlong)pfVar10 + (param_5 - lVar12));
      *(double *)((longlong)pdVar6 + (param_2 - lVar11) + -8) =
           (double)*(float *)((longlong)pfVar10 + (param_5 - lVar12) + -4);
      *(double *)((longlong)pdVar6 + (param_2 - lVar11)) = (double)fVar2;
      fVar2 = *pfVar10;
      pdVar6[-1] = (double)pfVar10[-1];
      *pdVar6 = (double)fVar2;
      pfVar1 = (float *)((longlong)pfVar10 + lVar9 + -4);
      fVar2 = *(float *)((longlong)pfVar10 + lVar9);
      pfVar10 = (float *)((longlong)pfVar10 + (longlong)(param_5 * 4));
      *(double *)((longlong)pdVar6 + lVar8 + -8) = (double)*pfVar1;
      *(double *)((longlong)pdVar6 + lVar8) = (double)fVar2;
      pdVar6 = (double *)((longlong)pdVar6 + (longlong)(param_2 * 4));
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar7 < param_7) {
    pdVar6 = (double *)(param_1 + (longlong)param_3 + (longlong)(iVar7 * param_2));
    pfVar10 = (float *)(param_4 + (longlong)param_6 + (longlong)(iVar7 * param_5));
    uVar5 = (ulonglong)(uint)(param_7 - iVar7);
    do {
      fVar2 = *pfVar10;
      fVar3 = pfVar10[1];
      pfVar10 = (float *)((longlong)pfVar10 + (longlong)param_5);
      *pdVar6 = (double)fVar2;
      pdVar6[1] = (double)fVar3;
      pdVar6 = (double *)((longlong)pdVar6 + (longlong)param_2);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// CopyInternal<UE::Math::TVector4<float>,UE::Math::TVector4<double>_> @ 14941b120

void __thiscall
FNiagaraStructConversionStep::CopyInternal<UE::Math::TVector4<float>,UE::Math::TVector4<double>_>
          (FNiagaraStructConversionStep *this,uchar *param_1,int param_2,int param_3,uchar *param_4,
          int param_5,int param_6,int param_7)

{
  float *pfVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  double *pdVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *pfVar13;
  longlong lVar14;
  
  iVar9 = 0;
  lVar11 = (longlong)param_5;
  if (3 < param_7) {
    lVar10 = (longlong)(param_2 * 2);
    pfVar13 = (float *)(param_1 + param_3 + lVar10);
    pdVar8 = (double *)(param_4 + lVar11 + param_6 + 0x10);
    lVar7 = param_5 * 2 - lVar11;
    lVar14 = param_5 * 3 - lVar11;
    uVar6 = (param_7 - 4U >> 2) + 1;
    uVar12 = (ulonglong)uVar6;
    iVar9 = uVar6 * 4;
    do {
      dVar3 = *(double *)((longlong)pdVar8 + (-8 - lVar11));
      dVar4 = *(double *)((8 - lVar11) + (longlong)pdVar8);
      dVar5 = *(double *)((longlong)pdVar8 - lVar11);
      pfVar1 = (float *)((longlong)pfVar13 - lVar10);
      *pfVar1 = (float)*(double *)((longlong)pdVar8 + (-0x10 - lVar11));
      pfVar1[1] = (float)dVar3;
      pfVar1[2] = (float)dVar5;
      pfVar1[3] = (float)dVar4;
      dVar3 = pdVar8[-1];
      dVar4 = *pdVar8;
      dVar5 = pdVar8[1];
      pfVar1 = (float *)((param_2 - lVar10) + (longlong)pfVar13);
      *pfVar1 = (float)pdVar8[-2];
      pfVar1[1] = (float)dVar3;
      pfVar1[2] = (float)dVar4;
      pfVar1[3] = (float)dVar5;
      dVar3 = *(double *)((longlong)pdVar8 + lVar7 + -8);
      dVar4 = *(double *)((longlong)pdVar8 + lVar7);
      dVar5 = *(double *)((longlong)pdVar8 + lVar7 + 8);
      *pfVar13 = (float)*(double *)((longlong)pdVar8 + lVar7 + -0x10);
      pfVar13[1] = (float)dVar3;
      pfVar13[2] = (float)dVar4;
      pfVar13[3] = (float)dVar5;
      pdVar2 = (double *)(lVar14 + -0x10 + (longlong)pdVar8);
      dVar3 = *(double *)(lVar14 + -8 + (longlong)pdVar8);
      dVar4 = *(double *)(lVar14 + (longlong)pdVar8);
      dVar5 = *(double *)(lVar14 + 8 + (longlong)pdVar8);
      pdVar8 = (double *)((longlong)pdVar8 + (longlong)(param_5 * 4));
      pfVar1 = (float *)((param_2 * 3 - lVar10) + (longlong)pfVar13);
      *pfVar1 = (float)*pdVar2;
      pfVar1[1] = (float)dVar3;
      pfVar1[2] = (float)dVar4;
      pfVar1[3] = (float)dVar5;
      pfVar13 = (float *)((longlong)pfVar13 + (longlong)(param_2 * 4));
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (iVar9 < param_7) {
    pfVar13 = (float *)(param_1 + (longlong)param_3 + (longlong)(iVar9 * param_2));
    pdVar8 = (double *)(param_4 + (longlong)param_6 + (longlong)(iVar9 * param_5) + 0x10);
    uVar12 = (ulonglong)(uint)(param_7 - iVar9);
    do {
      pdVar2 = pdVar8 + -2;
      dVar3 = pdVar8[-1];
      dVar4 = *pdVar8;
      dVar5 = pdVar8[1];
      pdVar8 = (double *)((longlong)pdVar8 + (longlong)param_5);
      *pfVar13 = (float)*pdVar2;
      pfVar13[1] = (float)dVar3;
      pfVar13[2] = (float)dVar4;
      pfVar13[3] = (float)dVar5;
      pfVar13 = (float *)((longlong)pfVar13 + (longlong)param_2);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

// CopyInternal<UE::Math::TVector4<double>,UE::Math::TVector4<float>_> @ 14941b470

void __thiscall
FNiagaraStructConversionStep::CopyInternal<UE::Math::TVector4<double>,UE::Math::TVector4<float>_>
          (FNiagaraStructConversionStep *this,uchar *param_1,int param_2,int param_3,uchar *param_4,
          int param_5,int param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  iVar11 = 0;
  lVar13 = (longlong)param_5;
  lVar14 = (longlong)param_2;
  if (3 < param_7) {
    pfVar15 = (float *)(param_4 + lVar13 + param_6 + 8);
    pdVar10 = (double *)(param_1 + (longlong)param_3 + 0x10 + lVar14);
    lVar9 = param_5 * 2 - lVar13;
    lVar16 = param_5 * 3 - lVar13;
    lVar12 = param_2 * 2 - lVar14;
    lVar17 = param_2 * 3 - lVar14;
    uVar8 = (param_7 - 4U >> 2) + 1;
    uVar18 = (ulonglong)uVar8;
    iVar11 = uVar8 * 4;
    do {
      fVar2 = *(float *)((longlong)pfVar15 + (-4 - lVar13));
      fVar3 = *(float *)((4 - lVar13) + (longlong)pfVar15);
      fVar4 = *(float *)((longlong)pfVar15 - lVar13);
      *(double *)((-0x10 - lVar14) + (longlong)pdVar10) =
           (double)*(float *)((longlong)pfVar15 + (-8 - lVar13));
      *(double *)((longlong)pdVar10 + (-8 - lVar14)) = (double)fVar2;
      *(double *)((longlong)pdVar10 - lVar14) = (double)fVar4;
      *(double *)((8 - lVar14) + (longlong)pdVar10) = (double)fVar3;
      fVar2 = *pfVar15;
      dVar7 = (double)(float)((ulonglong)*(undefined8 *)(pfVar15 + -2) >> 0x20);
      fVar3 = pfVar15[1];
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = (double)(float)*(undefined8 *)(pfVar15 + -2);
      auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pdVar10 + -2) = auVar5;
      *pdVar10 = (double)fVar2;
      pdVar10[1] = (double)fVar3;
      fVar2 = *(float *)(lVar9 + -4 + (longlong)pfVar15);
      fVar3 = *(float *)(lVar9 + (longlong)pfVar15);
      fVar4 = *(float *)(lVar9 + 4 + (longlong)pfVar15);
      *(double *)((longlong)pdVar10 + lVar12 + -0x10) =
           (double)*(float *)(lVar9 + -8 + (longlong)pfVar15);
      *(double *)((longlong)pdVar10 + lVar12 + -8) = (double)fVar2;
      *(double *)((longlong)pdVar10 + lVar12) = (double)fVar3;
      *(double *)((longlong)pdVar10 + lVar12 + 8) = (double)fVar4;
      pfVar1 = (float *)(lVar16 + -8 + (longlong)pfVar15);
      fVar2 = *(float *)(lVar16 + -4 + (longlong)pfVar15);
      fVar3 = *(float *)(lVar16 + (longlong)pfVar15);
      fVar4 = *(float *)(lVar16 + 4 + (longlong)pfVar15);
      pfVar15 = (float *)((longlong)pfVar15 + (longlong)(param_5 * 4));
      *(double *)(lVar17 + -0x10 + (longlong)pdVar10) = (double)*pfVar1;
      *(double *)(lVar17 + -8 + (longlong)pdVar10) = (double)fVar2;
      *(double *)(lVar17 + (longlong)pdVar10) = (double)fVar3;
      *(double *)(lVar17 + 8 + (longlong)pdVar10) = (double)fVar4;
      pdVar10 = (double *)((longlong)pdVar10 + (longlong)(param_2 * 4));
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  if (iVar11 < param_7) {
    pdVar10 = (double *)(param_1 + (longlong)param_3 + 0x10 + (longlong)(iVar11 * param_2));
    pfVar15 = (float *)(param_4 + (longlong)param_6 + (longlong)(iVar11 * param_5) + 8);
    uVar18 = (ulonglong)(uint)(param_7 - iVar11);
    do {
      fVar2 = *pfVar15;
      fVar3 = pfVar15[1];
      pfVar1 = pfVar15 + -2;
      dVar7 = (double)(float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
      pfVar15 = (float *)((longlong)pfVar15 + (longlong)param_5);
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = (double)(float)*(undefined8 *)pfVar1;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pdVar10 + -2) = auVar6;
      *pdVar10 = (double)fVar2;
      pdVar10[1] = (double)fVar3;
      pdVar10 = (double *)((longlong)pdVar10 + lVar14);
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  return;
}

// CopyInternal<UE::Math::TVector<float>,UE::Math::TVector<double>_> @ 14941b770

void __thiscall
FNiagaraStructConversionStep::CopyInternal<UE::Math::TVector<float>,UE::Math::TVector<double>_>
          (FNiagaraStructConversionStep *this,uchar *param_1,int param_2,int param_3,uchar *param_4,
          int param_5,int param_6,int param_7)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar7 = 0;
  lVar14 = (longlong)param_5;
  lVar13 = (longlong)param_2;
  if (3 < param_7) {
    pfVar6 = (float *)(param_1 + lVar13 + param_3 + 8);
    pdVar11 = (double *)(param_4 + lVar14 + param_6 + 0x10);
    lVar5 = param_5 * 2 - lVar14;
    lVar12 = param_5 * 3 - lVar14;
    lVar10 = param_2 * 2 - lVar13;
    lVar9 = param_2 * 3 - lVar13;
    uVar4 = (param_7 - 4U >> 2) + 1;
    uVar8 = (ulonglong)uVar4;
    iVar7 = uVar4 * 4;
    do {
      dVar2 = *(double *)((longlong)pdVar11 + (-8 - lVar14));
      dVar3 = *(double *)((longlong)pdVar11 - lVar14);
      *(float *)((-8 - lVar13) + (longlong)pfVar6) =
           (float)*(double *)((-0x10 - lVar14) + (longlong)pdVar11);
      *(float *)((-4 - lVar13) + (longlong)pfVar6) = (float)dVar2;
      *(float *)((longlong)pfVar6 - lVar13) = (float)dVar3;
      dVar2 = pdVar11[-1];
      dVar3 = *pdVar11;
      pfVar6[-2] = (float)pdVar11[-2];
      pfVar6[-1] = (float)dVar2;
      *pfVar6 = (float)dVar3;
      dVar2 = *(double *)(lVar5 + -8 + (longlong)pdVar11);
      dVar3 = *(double *)(lVar5 + (longlong)pdVar11);
      *(float *)(lVar10 + -8 + (longlong)pfVar6) =
           (float)*(double *)(lVar5 + -0x10 + (longlong)pdVar11);
      *(float *)(lVar10 + -4 + (longlong)pfVar6) = (float)dVar2;
      *(float *)(lVar10 + (longlong)pfVar6) = (float)dVar3;
      pdVar1 = (double *)(lVar12 + -0x10 + (longlong)pdVar11);
      dVar2 = *(double *)(lVar12 + -8 + (longlong)pdVar11);
      dVar3 = *(double *)(lVar12 + (longlong)pdVar11);
      pdVar11 = (double *)((longlong)pdVar11 + (longlong)(param_5 * 4));
      *(float *)(lVar9 + -8 + (longlong)pfVar6) = (float)*pdVar1;
      *(float *)(lVar9 + -4 + (longlong)pfVar6) = (float)dVar2;
      *(float *)(lVar9 + (longlong)pfVar6) = (float)dVar3;
      pfVar6 = (float *)((longlong)pfVar6 + (longlong)(param_2 * 4));
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (iVar7 < param_7) {
    pfVar6 = (float *)(param_1 + (longlong)param_3 + 8 + (longlong)(iVar7 * param_2));
    pdVar11 = (double *)(param_4 + (longlong)param_6 + (longlong)(iVar7 * param_5) + 0x10);
    uVar8 = (ulonglong)(uint)(param_7 - iVar7);
    do {
      pdVar1 = pdVar11 + -2;
      dVar2 = pdVar11[-1];
      dVar3 = *pdVar11;
      pdVar11 = (double *)((longlong)pdVar11 + (longlong)param_5);
      pfVar6[-2] = (float)*pdVar1;
      pfVar6[-1] = (float)dVar2;
      *pfVar6 = (float)dVar3;
      pfVar6 = (float *)((longlong)pfVar6 + lVar13);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// CopyInternal<UE::Math::TVector<double>,UE::Math::TVector<float>_> @ 14941ba40

void __thiscall
FNiagaraStructConversionStep::CopyInternal<UE::Math::TVector<double>,UE::Math::TVector<float>_>
          (FNiagaraStructConversionStep *this,uchar *param_1,int param_2,int param_3,uchar *param_4,
          int param_5,int param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  uint uVar7;
  longlong lVar8;
  double *pdVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  iVar10 = 0;
  lVar12 = (longlong)param_5;
  lVar13 = (longlong)param_2;
  if (3 < param_7) {
    pdVar9 = (double *)(param_1 + lVar13 + param_3 + 0x10);
    pfVar14 = (float *)(param_4 + lVar12 + param_6 + 8);
    lVar8 = param_5 * 2 - lVar12;
    lVar15 = param_5 * 3 - lVar12;
    lVar11 = param_2 * 2 - lVar13;
    lVar16 = param_2 * 3 - lVar13;
    uVar7 = (param_7 - 4U >> 2) + 1;
    uVar17 = (ulonglong)uVar7;
    iVar10 = uVar7 * 4;
    do {
      fVar2 = *(float *)((-4 - lVar12) + (longlong)pfVar14);
      fVar3 = *(float *)((longlong)pfVar14 - lVar12);
      *(double *)((-0x10 - lVar13) + (longlong)pdVar9) =
           (double)*(float *)((-8 - lVar12) + (longlong)pfVar14);
      *(double *)((longlong)pdVar9 + (-8 - lVar13)) = (double)fVar2;
      *(double *)((longlong)pdVar9 - lVar13) = (double)fVar3;
      fVar2 = *pfVar14;
      dVar6 = (double)(float)((ulonglong)*(undefined8 *)(pfVar14 + -2) >> 0x20);
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = (double)(float)*(undefined8 *)(pfVar14 + -2);
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(pdVar9 + -2) = auVar4;
      *pdVar9 = (double)fVar2;
      fVar2 = *(float *)(lVar8 + -4 + (longlong)pfVar14);
      fVar3 = *(float *)(lVar8 + (longlong)pfVar14);
      *(double *)((longlong)pdVar9 + lVar11 + -0x10) =
           (double)*(float *)(lVar8 + -8 + (longlong)pfVar14);
      *(double *)((longlong)pdVar9 + lVar11 + -8) = (double)fVar2;
      *(double *)((longlong)pdVar9 + lVar11) = (double)fVar3;
      pfVar1 = (float *)(lVar15 + -8 + (longlong)pfVar14);
      fVar2 = *(float *)(lVar15 + -4 + (longlong)pfVar14);
      fVar3 = *(float *)(lVar15 + (longlong)pfVar14);
      pfVar14 = (float *)((longlong)pfVar14 + (longlong)(param_5 * 4));
      *(double *)(lVar16 + -0x10 + (longlong)pdVar9) = (double)*pfVar1;
      *(double *)(lVar16 + -8 + (longlong)pdVar9) = (double)fVar2;
      *(double *)(lVar16 + (longlong)pdVar9) = (double)fVar3;
      pdVar9 = (double *)((longlong)pdVar9 + (longlong)(param_2 * 4));
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (iVar10 < param_7) {
    pdVar9 = (double *)(param_1 + (longlong)param_3 + 0x10 + (longlong)(iVar10 * param_2));
    pfVar14 = (float *)(param_4 + (longlong)param_6 + (longlong)(iVar10 * param_5) + 8);
    uVar17 = (ulonglong)(uint)(param_7 - iVar10);
    do {
      fVar2 = *pfVar14;
      pfVar1 = pfVar14 + -2;
      dVar6 = (double)(float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
      pfVar14 = (float *)((longlong)pfVar14 + (longlong)param_5);
      auVar5._8_4_ = SUB84(dVar6,0);
      auVar5._0_8_ = (double)(float)*(undefined8 *)pfVar1;
      auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(pdVar9 + -2) = auVar5;
      *pdVar9 = (double)fVar2;
      pdVar9 = (double *)((longlong)pdVar9 + lVar13);
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}

// FNiagaraStructConversionStep @ 149427940

FNiagaraStructConversionStep * __thiscall
FNiagaraStructConversionStep::FNiagaraStructConversionStep
          (FNiagaraStructConversionStep *this,int param_1,int param_2,int param_3,int param_4,
          ENiagaraStructConversionType param_5)

{
  this->SimulationOffset = param_4;
  this->ConversionType = param_5;
  this->LWCBytes = param_1;
  this->LWCOffset = param_2;
  this->SimulationBytes = param_3;
  return this;
}

// FNiagaraStructConversionStep @ 149427970

FNiagaraStructConversionStep * __thiscall
FNiagaraStructConversionStep::FNiagaraStructConversionStep(FNiagaraStructConversionStep *this)

{
  this->LWCBytes = 0;
  this->LWCOffset = 0;
  this->SimulationBytes = 0;
  this->SimulationOffset = 0;
  this->ConversionType = CopyOnly;
  return this;
}

// CopyFromSim @ 14943ed50

void __thiscall
FNiagaraStructConversionStep::CopyFromSim
          (FNiagaraStructConversionStep *this,uchar *param_1,uchar *param_2,int param_3,int param_4,
          int param_5)

{
  ENiagaraStructConversionType EVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  EVar1 = this->ConversionType;
  uVar5 = (ulonglong)(uint)param_3;
  if (EVar1 == DoubleToFloat) {
    if (((this->LWCBytes != 8) || (this->SimulationBytes != 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LWCBytes == 8 && SimulationBytes == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                           ,0x107,
                           L"Wrong bytesizes for float->double conversion: Source %i, Simulation %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    CopyInternal<double,float>
              (this,param_1,param_4,this->LWCOffset,param_2,param_5,this->SimulationOffset,param_3);
    return;
  }
  if (EVar1 == Vector2) {
    if (((this->LWCBytes != 0x10) || (this->SimulationBytes != 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LWCBytes == 16 && SimulationBytes == 8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                           ,0x10c,
                           L"Wrong bytesizes for Vector2 f->d conversion: Source %i, Simulation %i")
       , bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    CopyInternal<UE::Math::TVector2<double>,UE::Math::TVector2<float>_>
              (this,param_1,param_4,this->LWCOffset,param_2,param_5,this->SimulationOffset,param_3);
    return;
  }
  if (EVar1 == Vector3) {
    if (((this->LWCBytes != 0x18) || (this->SimulationBytes != 0xc)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LWCBytes == 24 && SimulationBytes == 12",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                           ,0x111,
                           L"Wrong bytesizes for Vector3 f->d conversion: Source %i, Simulation %i")
       , bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    CopyInternal<UE::Math::TVector<double>,UE::Math::TVector<float>_>
              (this,param_1,param_4,this->LWCOffset,param_2,param_5,this->SimulationOffset,param_3);
    return;
  }
  if (EVar1 == Vector4) {
    if (((this->LWCBytes != 0x20) || (this->SimulationBytes != 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LWCBytes == 32 && SimulationBytes == 16",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                           ,0x116,
                           L"Wrong bytesizes for Vector4 f->d conversion: Source %i, Simulation %i")
       , bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    CopyInternal<UE::Math::TVector4<double>,UE::Math::TVector4<float>_>
              (this,param_1,param_4,this->LWCOffset,param_2,param_5,this->SimulationOffset,param_3);
    return;
  }
  if (EVar1 != Quat) {
    if ((this->LWCBytes != this->SimulationBytes) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LWCBytes == SimulationBytes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                           ,0x120,L"LWCBytes != TargetBytes: %i != %i"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (0 < param_3) {
      lVar4 = 0;
      lVar6 = lVar4;
      do {
        memcpy(param_1 + this->LWCOffset + lVar6,param_2 + this->SimulationOffset + lVar4,
               (longlong)this->LWCBytes);
        lVar4 = lVar4 + param_5;
        lVar6 = lVar6 + param_4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    return;
  }
  if (((this->LWCBytes != 0x20) || (this->SimulationBytes != 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LWCBytes == 32 && SimulationBytes == 16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                         ,0x11b,
                         L"Wrong bytesizes for Quat f->d conversion: Source %i, Simulation %i"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  CopyInternal<UE::Math::TQuat<double>,UE::Math::TQuat<float>_>
            (this,param_1,param_4,this->LWCOffset,param_2,param_5,this->SimulationOffset,param_3);
  return;
}

// CopyToSim @ 14943f0a0

void __thiscall
FNiagaraStructConversionStep::CopyToSim
          (FNiagaraStructConversionStep *this,uchar *param_1,uchar *param_2,int param_3,int param_4,
          int param_5)

{
  ENiagaraStructConversionType EVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  EVar1 = this->ConversionType;
  uVar5 = (ulonglong)(uint)param_3;
  if (EVar1 == DoubleToFloat) {
    if (((this->LWCBytes != 8) || (this->SimulationBytes != 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LWCBytes == 8 && SimulationBytes == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                           ,0xe0,
                           L"Wrong bytesizes for double->float conversion: Source %i, Simulation %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    CopyInternal<float,double>
              (this,param_2,param_5,this->SimulationOffset,param_1,param_4,this->LWCOffset,param_3);
    return;
  }
  if (EVar1 == Vector2) {
    if (((this->LWCBytes != 0x10) || (this->SimulationBytes != 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LWCBytes == 16 && SimulationBytes == 8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                           ,0xe5,
                           L"Wrong bytesizes for Vector2 d->f conversion: Source %i, Simulation %i")
       , bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    CopyInternal<UE::Math::TVector2<float>,UE::Math::TVector2<double>_>
              (this,param_2,param_5,this->SimulationOffset,param_1,param_4,this->LWCOffset,param_3);
    return;
  }
  if (EVar1 == Vector3) {
    if (((this->LWCBytes != 0x18) || (this->SimulationBytes != 0xc)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LWCBytes == 24 && SimulationBytes == 12",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                           ,0xea,
                           L"Wrong bytesizes for Vector3 d->f conversion: Source %i, Simulation %i")
       , bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    CopyInternal<UE::Math::TVector<float>,UE::Math::TVector<double>_>
              (this,param_2,param_5,this->SimulationOffset,param_1,param_4,this->LWCOffset,param_3);
    return;
  }
  if (EVar1 == Vector4) {
    if (((this->LWCBytes != 0x20) || (this->SimulationBytes != 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LWCBytes == 32 && SimulationBytes == 16",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                           ,0xef,
                           L"Wrong bytesizes for Vector4 d->f conversion: Source %i, Simulation %i")
       , bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    CopyInternal<UE::Math::TVector4<float>,UE::Math::TVector4<double>_>
              (this,param_2,param_5,this->SimulationOffset,param_1,param_4,this->LWCOffset,param_3);
    return;
  }
  if (EVar1 != Quat) {
    if ((this->LWCBytes != this->SimulationBytes) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LWCBytes == SimulationBytes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                           ,0xf9,L"LWCBytes != TargetBytes: %i != %i"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (0 < param_3) {
      lVar4 = 0;
      lVar6 = lVar4;
      do {
        memcpy(param_2 + this->SimulationOffset + lVar6,param_1 + this->LWCOffset + lVar4,
               (longlong)this->LWCBytes);
        lVar4 = lVar4 + param_4;
        lVar6 = lVar6 + param_5;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    return;
  }
  if (((this->LWCBytes != 0x20) || (this->SimulationBytes != 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LWCBytes == 32 && SimulationBytes == 16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                         ,0xf4,L"Wrong bytesizes for Quat d->f conversion: Source %i, Simulation %i"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  CopyInternal<UE::Math::TQuat<float>,UE::Math::TQuat<double>_>
            (this,param_2,param_5,this->SimulationOffset,param_1,param_4,this->LWCOffset,param_3);
  return;
}

