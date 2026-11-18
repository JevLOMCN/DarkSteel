// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 96

// operator() @ 14ab1e860

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<280>::ProcessPixelImpl'::__l20::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  float in_register_00000084;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  longlong in_stack_00000028;
  
  uVar9 = (uint)param_3 & 0xffff;
  uVar12 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar17 = uVar12 - 1;
  fVar20 = (float)uVar12;
  fVar25 = (float)uVar9 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar23 = (float)uVar9 - __real_3f800000;
  fVar24 = fVar20 * in_register_00000084 - __real_3f000000;
  fVar20 = fVar20 - __real_3f800000;
  if (fVar23 <= fVar25) {
    fVar25 = fVar23;
  }
  if (fVar20 <= fVar24) {
    fVar24 = fVar20;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  iVar15 = (int)fVar25;
  iVar18 = iVar15 + 1;
  if ((int)(uVar9 - 1) < iVar15 + 1) {
    iVar18 = uVar9 - 1;
  }
  iVar10 = uVar9 * (int)fVar24;
  iVar19 = (int)fVar24 + 1;
  if (iVar17 < iVar19) {
    iVar19 = iVar17;
  }
  lVar14 = (longlong)((iVar10 + iVar15) * 3);
  lVar13 = (longlong)((iVar18 + iVar10) * 3);
  bVar1 = *(byte *)(lVar14 + 1 + in_stack_00000028);
  bVar2 = *(byte *)(lVar14 + 2 + in_stack_00000028);
  bVar3 = *(byte *)(in_stack_00000028 + 1 + lVar13);
  lVar11 = (longlong)(int)((iVar19 * uVar9 + iVar15) * 3);
  bVar4 = *(byte *)(in_stack_00000028 + 2 + lVar13);
  lVar16 = (longlong)(int)((iVar18 + iVar19 * uVar9) * 3);
  bVar5 = *(byte *)(lVar11 + 1 + in_stack_00000028);
  bVar6 = *(byte *)(lVar11 + 2 + in_stack_00000028);
  bVar7 = *(byte *)(lVar16 + 1 + in_stack_00000028);
  iVar17 = (int)fVar24;
  bVar8 = *(byte *)(lVar16 + 2 + in_stack_00000028);
  fVar20 = fVar24;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar24)) {
    auVar21._4_4_ = fVar24;
    auVar21._0_4_ = fVar24;
    auVar21._8_8_ = 0;
    uVar9 = movmskps((uint)bVar8,auVar21);
    fVar20 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar17 = (int)fVar25;
  uVar9 = (uint)((fVar24 - fVar20) * __real_437f0000);
  uVar12 = uVar9 & 0xffff;
  fVar24 = fVar25;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar25)) {
    auVar22._4_4_ = fVar25;
    auVar22._0_4_ = fVar25;
    auVar22._8_8_ = 0;
    uVar9 = movmskps(uVar9,auVar22);
    fVar24 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar18 = 0xff - uVar12;
  uVar9 = (int)((fVar25 - fVar24) * __real_437f0000) & 0xffff;
  iVar15 = 0xff - uVar9;
  iVar17 = ((int)(*(byte *)(lVar16 + in_stack_00000028) * uVar9 +
                 (uint)*(byte *)(lVar11 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * uVar12 +
           ((int)(*(byte *)(in_stack_00000028 + lVar13) * uVar9 +
                 (uint)*(byte *)(lVar14 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * iVar18;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar3 * uVar9 + (uint)bVar1 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar7 * uVar9 + (uint)bVar5 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 2) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar4 * uVar9 + (uint)bVar2 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar8 * uVar9 + (uint)bVar6 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 4) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab1eb90

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<296>::ProcessPixelImpl'::__l20::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  float in_register_00000084;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  longlong in_stack_00000028;
  
  uVar9 = (uint)param_3 & 0xffff;
  uVar12 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar17 = uVar12 - 1;
  fVar20 = (float)uVar12;
  fVar25 = (float)uVar9 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar23 = (float)uVar9 - __real_3f800000;
  fVar24 = fVar20 * in_register_00000084 - __real_3f000000;
  fVar20 = fVar20 - __real_3f800000;
  if (fVar23 <= fVar25) {
    fVar25 = fVar23;
  }
  if (fVar20 <= fVar24) {
    fVar24 = fVar20;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  iVar15 = (int)fVar25;
  iVar18 = iVar15 + 1;
  if ((int)(uVar9 - 1) < iVar15 + 1) {
    iVar18 = uVar9 - 1;
  }
  iVar10 = uVar9 * (int)fVar24;
  iVar19 = (int)fVar24 + 1;
  if (iVar17 < iVar19) {
    iVar19 = iVar17;
  }
  lVar14 = (longlong)((iVar10 + iVar15) * 3);
  lVar13 = (longlong)((iVar18 + iVar10) * 3);
  bVar1 = *(byte *)(lVar14 + 1 + in_stack_00000028);
  bVar2 = *(byte *)(lVar14 + 2 + in_stack_00000028);
  bVar3 = *(byte *)(in_stack_00000028 + 1 + lVar13);
  lVar11 = (longlong)(int)((iVar19 * uVar9 + iVar15) * 3);
  bVar4 = *(byte *)(in_stack_00000028 + 2 + lVar13);
  lVar16 = (longlong)(int)((iVar18 + iVar19 * uVar9) * 3);
  bVar5 = *(byte *)(lVar11 + 1 + in_stack_00000028);
  bVar6 = *(byte *)(lVar11 + 2 + in_stack_00000028);
  bVar7 = *(byte *)(lVar16 + 1 + in_stack_00000028);
  iVar17 = (int)fVar24;
  bVar8 = *(byte *)(lVar16 + 2 + in_stack_00000028);
  fVar20 = fVar24;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar24)) {
    auVar21._4_4_ = fVar24;
    auVar21._0_4_ = fVar24;
    auVar21._8_8_ = 0;
    uVar9 = movmskps((uint)bVar8,auVar21);
    fVar20 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar17 = (int)fVar25;
  uVar9 = (uint)((fVar24 - fVar20) * __real_437f0000);
  uVar12 = uVar9 & 0xffff;
  fVar24 = fVar25;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar25)) {
    auVar22._4_4_ = fVar25;
    auVar22._0_4_ = fVar25;
    auVar22._8_8_ = 0;
    uVar9 = movmskps(uVar9,auVar22);
    fVar24 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar18 = 0xff - uVar12;
  uVar9 = (int)((fVar25 - fVar24) * __real_437f0000) & 0xffff;
  iVar15 = 0xff - uVar9;
  iVar17 = ((int)(*(byte *)(lVar16 + in_stack_00000028) * uVar9 +
                 (uint)*(byte *)(lVar11 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * uVar12 +
           ((int)(*(byte *)(in_stack_00000028 + lVar13) * uVar9 +
                 (uint)*(byte *)(lVar14 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * iVar18;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar3 * uVar9 + (uint)bVar1 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar7 * uVar9 + (uint)bVar5 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 2) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar4 * uVar9 + (uint)bVar2 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar8 * uVar9 + (uint)bVar6 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 4) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab1eec0

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<328>::ProcessPixelImpl'::__l20::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  float in_register_00000084;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  longlong in_stack_00000028;
  
  uVar9 = (uint)param_3 & 0xffff;
  uVar12 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar17 = uVar12 - 1;
  fVar20 = (float)uVar12;
  fVar25 = (float)uVar9 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar23 = (float)uVar9 - __real_3f800000;
  fVar24 = fVar20 * in_register_00000084 - __real_3f000000;
  fVar20 = fVar20 - __real_3f800000;
  if (fVar23 <= fVar25) {
    fVar25 = fVar23;
  }
  if (fVar20 <= fVar24) {
    fVar24 = fVar20;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  iVar15 = (int)fVar25;
  iVar18 = iVar15 + 1;
  if ((int)(uVar9 - 1) < iVar15 + 1) {
    iVar18 = uVar9 - 1;
  }
  iVar10 = uVar9 * (int)fVar24;
  iVar19 = (int)fVar24 + 1;
  if (iVar17 < iVar19) {
    iVar19 = iVar17;
  }
  lVar14 = (longlong)((iVar10 + iVar15) * 3);
  lVar13 = (longlong)((iVar18 + iVar10) * 3);
  bVar1 = *(byte *)(lVar14 + 1 + in_stack_00000028);
  bVar2 = *(byte *)(lVar14 + 2 + in_stack_00000028);
  bVar3 = *(byte *)(in_stack_00000028 + 1 + lVar13);
  lVar11 = (longlong)(int)((iVar19 * uVar9 + iVar15) * 3);
  bVar4 = *(byte *)(in_stack_00000028 + 2 + lVar13);
  lVar16 = (longlong)(int)((iVar18 + iVar19 * uVar9) * 3);
  bVar5 = *(byte *)(lVar11 + 1 + in_stack_00000028);
  bVar6 = *(byte *)(lVar11 + 2 + in_stack_00000028);
  bVar7 = *(byte *)(lVar16 + 1 + in_stack_00000028);
  iVar17 = (int)fVar24;
  bVar8 = *(byte *)(lVar16 + 2 + in_stack_00000028);
  fVar20 = fVar24;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar24)) {
    auVar21._4_4_ = fVar24;
    auVar21._0_4_ = fVar24;
    auVar21._8_8_ = 0;
    uVar9 = movmskps((uint)bVar8,auVar21);
    fVar20 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar17 = (int)fVar25;
  uVar9 = (uint)((fVar24 - fVar20) * __real_437f0000);
  uVar12 = uVar9 & 0xffff;
  fVar24 = fVar25;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar25)) {
    auVar22._4_4_ = fVar25;
    auVar22._0_4_ = fVar25;
    auVar22._8_8_ = 0;
    uVar9 = movmskps(uVar9,auVar22);
    fVar24 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar18 = 0xff - uVar12;
  uVar9 = (int)((fVar25 - fVar24) * __real_437f0000) & 0xffff;
  iVar15 = 0xff - uVar9;
  iVar17 = ((int)(*(byte *)(lVar16 + in_stack_00000028) * uVar9 +
                 (uint)*(byte *)(lVar11 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * uVar12 +
           ((int)(*(byte *)(in_stack_00000028 + lVar13) * uVar9 +
                 (uint)*(byte *)(lVar14 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * iVar18;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar3 * uVar9 + (uint)bVar1 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar7 * uVar9 + (uint)bVar5 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 2) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar4 * uVar9 + (uint)bVar2 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar8 * uVar9 + (uint)bVar6 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 4) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab1f1f0

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<536>::ProcessPixelImpl'::__l20::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float in_register_00000084;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  longlong in_stack_00000028;
  
  uVar3 = (uint)param_3 & 0xffff;
  uVar2 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar1 = uVar3 - 1;
  iVar7 = uVar2 - 1;
  fVar10 = (float)uVar2;
  fVar15 = (float)uVar3 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar13 = (float)uVar3 - __real_3f800000;
  fVar14 = fVar10 * in_register_00000084 - __real_3f000000;
  fVar10 = fVar10 - __real_3f800000;
  if (fVar13 <= fVar15) {
    fVar15 = fVar13;
  }
  if (fVar10 <= fVar14) {
    fVar14 = fVar10;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  iVar9 = (int)fVar15;
  iVar5 = iVar9 + 1;
  if (iVar1 < iVar9 + 1) {
    iVar5 = iVar1;
  }
  iVar6 = (int)fVar14 + 1;
  iVar4 = (int)fVar14 * uVar3;
  if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  iVar7 = (int)fVar14;
  fVar10 = fVar14;
  if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar14)) {
    auVar11._4_4_ = fVar14;
    auVar11._0_4_ = fVar14;
    auVar11._8_8_ = 0;
    uVar2 = movmskps(iVar1,auVar11);
    fVar10 = (float)(int)(iVar7 - (uVar2 & 1));
  }
  iVar1 = (int)fVar15;
  uVar2 = (uint)((fVar14 - fVar10) * __real_437f0000);
  uVar8 = uVar2 & 0xffff;
  fVar14 = fVar15;
  if ((iVar1 != -0x80000000) && ((float)iVar1 != fVar15)) {
    auVar12._4_4_ = fVar15;
    auVar12._0_4_ = fVar15;
    auVar12._8_8_ = 0;
    uVar2 = movmskps(uVar2,auVar12);
    fVar14 = (float)(int)(iVar1 - (uVar2 & 1));
  }
  uVar2 = (int)((fVar15 - fVar14) * __real_437f0000) & 0xffff;
  iVar1 = ((int)(*(byte *)((iVar4 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((iVar4 + iVar9) + in_stack_00000028) * (0xff - uVar2)) / 0xff &
          0xffffU) * (0xff - uVar8) +
          ((int)(*(byte *)((int)(iVar6 * uVar3 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((int)(iVar6 * uVar3 + iVar9) + in_stack_00000028) * (0xff - uVar2))
           / 0xff & 0xffffU) * uVar8;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar1 / 0xff) + (short)(iVar1 >> 0x1f)) -
       (short)((longlong)iVar1 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab1f3f0

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<552>::ProcessPixelImpl'::__l20::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float in_register_00000084;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  longlong in_stack_00000028;
  
  uVar3 = (uint)param_3 & 0xffff;
  uVar2 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar1 = uVar3 - 1;
  iVar7 = uVar2 - 1;
  fVar10 = (float)uVar2;
  fVar15 = (float)uVar3 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar13 = (float)uVar3 - __real_3f800000;
  fVar14 = fVar10 * in_register_00000084 - __real_3f000000;
  fVar10 = fVar10 - __real_3f800000;
  if (fVar13 <= fVar15) {
    fVar15 = fVar13;
  }
  if (fVar10 <= fVar14) {
    fVar14 = fVar10;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  iVar9 = (int)fVar15;
  iVar5 = iVar9 + 1;
  if (iVar1 < iVar9 + 1) {
    iVar5 = iVar1;
  }
  iVar6 = (int)fVar14 + 1;
  iVar4 = (int)fVar14 * uVar3;
  if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  iVar7 = (int)fVar14;
  fVar10 = fVar14;
  if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar14)) {
    auVar11._4_4_ = fVar14;
    auVar11._0_4_ = fVar14;
    auVar11._8_8_ = 0;
    uVar2 = movmskps(iVar1,auVar11);
    fVar10 = (float)(int)(iVar7 - (uVar2 & 1));
  }
  iVar1 = (int)fVar15;
  uVar2 = (uint)((fVar14 - fVar10) * __real_437f0000);
  uVar8 = uVar2 & 0xffff;
  fVar14 = fVar15;
  if ((iVar1 != -0x80000000) && ((float)iVar1 != fVar15)) {
    auVar12._4_4_ = fVar15;
    auVar12._0_4_ = fVar15;
    auVar12._8_8_ = 0;
    uVar2 = movmskps(uVar2,auVar12);
    fVar14 = (float)(int)(iVar1 - (uVar2 & 1));
  }
  uVar2 = (int)((fVar15 - fVar14) * __real_437f0000) & 0xffff;
  iVar1 = ((int)(*(byte *)((iVar4 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((iVar4 + iVar9) + in_stack_00000028) * (0xff - uVar2)) / 0xff &
          0xffffU) * (0xff - uVar8) +
          ((int)(*(byte *)((int)(iVar6 * uVar3 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((int)(iVar6 * uVar3 + iVar9) + in_stack_00000028) * (0xff - uVar2))
           / 0xff & 0xffffU) * uVar8;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar1 / 0xff) + (short)(iVar1 >> 0x1f)) -
       (short)((longlong)iVar1 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab1f5f0

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<584>::ProcessPixelImpl'::__l20::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float in_register_00000084;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  longlong in_stack_00000028;
  
  uVar3 = (uint)param_3 & 0xffff;
  uVar2 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar1 = uVar3 - 1;
  iVar7 = uVar2 - 1;
  fVar10 = (float)uVar2;
  fVar15 = (float)uVar3 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar13 = (float)uVar3 - __real_3f800000;
  fVar14 = fVar10 * in_register_00000084 - __real_3f000000;
  fVar10 = fVar10 - __real_3f800000;
  if (fVar13 <= fVar15) {
    fVar15 = fVar13;
  }
  if (fVar10 <= fVar14) {
    fVar14 = fVar10;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  iVar9 = (int)fVar15;
  iVar5 = iVar9 + 1;
  if (iVar1 < iVar9 + 1) {
    iVar5 = iVar1;
  }
  iVar6 = (int)fVar14 + 1;
  iVar4 = (int)fVar14 * uVar3;
  if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  iVar7 = (int)fVar14;
  fVar10 = fVar14;
  if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar14)) {
    auVar11._4_4_ = fVar14;
    auVar11._0_4_ = fVar14;
    auVar11._8_8_ = 0;
    uVar2 = movmskps(iVar1,auVar11);
    fVar10 = (float)(int)(iVar7 - (uVar2 & 1));
  }
  iVar1 = (int)fVar15;
  uVar2 = (uint)((fVar14 - fVar10) * __real_437f0000);
  uVar8 = uVar2 & 0xffff;
  fVar14 = fVar15;
  if ((iVar1 != -0x80000000) && ((float)iVar1 != fVar15)) {
    auVar12._4_4_ = fVar15;
    auVar12._0_4_ = fVar15;
    auVar12._8_8_ = 0;
    uVar2 = movmskps(uVar2,auVar12);
    fVar14 = (float)(int)(iVar1 - (uVar2 & 1));
  }
  uVar2 = (int)((fVar15 - fVar14) * __real_437f0000) & 0xffff;
  iVar1 = ((int)(*(byte *)((iVar4 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((iVar4 + iVar9) + in_stack_00000028) * (0xff - uVar2)) / 0xff &
          0xffffU) * (0xff - uVar8) +
          ((int)(*(byte *)((int)(iVar6 * uVar3 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((int)(iVar6 * uVar3 + iVar9) + in_stack_00000028) * (0xff - uVar2))
           / 0xff & 0xffffU) * uVar8;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar1 / 0xff) + (short)(iVar1 >> 0x1f)) -
       (short)((longlong)iVar1 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab1f7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<152>::ProcessPixelImpl'::__l20::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float in_register_00000084;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  int iVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  int iVar49;
  undefined1 auVar47 [16];
  int iVar50;
  undefined1 auVar51 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar52 [16];
  ulonglong local_res8;
  ushort local_res10 [4];
  ulonglong local_res18;
  ushort in_stack_00000028;
  ushort in_stack_0000002a;
  ushort in_stack_0000002c;
  ushort in_stack_0000002e;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  int iVar41;
  undefined1 auVar48 [16];
  
  uVar18 = (uint)param_3 & 0xffff;
  uVar17 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  fVar44 = (float)uVar18 - __real_3f800000;
  fVar20 = (float)uVar17;
  fVar46 = (float)uVar18 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar21 = fVar20 - __real_3f800000;
  if (fVar44 <= fVar46) {
    fVar46 = fVar44;
  }
  fVar20 = fVar20 * in_register_00000084 - __real_3f000000;
  if (fVar46 <= 0.0) {
    fVar46 = 0.0;
  }
  if (fVar21 <= fVar20) {
    fVar20 = fVar21;
  }
  iVar11 = (int)fVar46;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar21 = fVar46;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar46)) {
    auVar29._4_4_ = fVar46;
    auVar29._0_4_ = fVar46;
    auVar29._8_8_ = 0;
    uVar9 = movmskps((int)&stack0x00000000,auVar29);
    fVar21 = (float)(int)(iVar11 - (uVar9 & 1));
  }
  iVar11 = (int)fVar20;
  uVar9 = (uint)((fVar46 - fVar21) * __real_437f0000);
  sVar19 = (short)uVar9;
  uVar36 = CONCAT22(sVar19,sVar19);
  auVar37._0_8_ = CONCAT44(uVar36,uVar36);
  auVar37._8_4_ = uVar36;
  auVar37._12_4_ = uVar36;
  fVar21 = fVar20;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar20)) {
    auVar45._4_4_ = fVar20;
    auVar45._0_4_ = fVar20;
    auVar45._8_8_ = 0;
    uVar10 = movmskps((int)sVar19,auVar45);
    fVar21 = (float)(int)(iVar11 - (uVar10 & 1));
  }
  lVar14 = CONCAT26(in_stack_0000002e,
                    CONCAT24(in_stack_0000002c,CONCAT22(in_stack_0000002a,in_stack_00000028)));
  iVar13 = uVar17 - 1;
  iVar15 = (int)fVar46;
  uVar17 = (uint)((fVar20 - fVar21) * __real_437f0000);
  iVar11 = (int)fVar20 + 1;
  uVar16 = (undefined2)uVar17;
  auVar22._0_4_ = CONCAT22(uVar16,uVar16);
  auVar22._4_4_ = auVar22._0_4_;
  iVar42 = iVar15 + 1;
  if ((int)(uVar18 - 1) < iVar15 + 1) {
    iVar42 = uVar18 - 1;
  }
  iVar12 = uVar18 * (int)fVar20;
  uVar36 = *(undefined4 *)((iVar12 + iVar15) * 4 + lVar14);
  local_res10[0] = (ushort)uVar36 & 0xff;
  uVar5 = (ushort)((uint)uVar36 >> 8);
  local_res10[1] = uVar5 & 0xff;
  uVar6 = (ushort)((uint)uVar36 >> 0x10);
  local_res10[2] = uVar6 & 0xff;
  bVar3 = (byte)((uint)uVar36 >> 0x18);
  local_res10[3] = (ushort)bVar3;
  uVar1 = *(undefined4 *)((iVar42 + iVar12) * 4 + lVar14);
  in_stack_00000028 = (ushort)uVar1 & 0xff;
  uVar7 = (ushort)((uint)uVar1 >> 8);
  in_stack_0000002a = uVar7 & 0xff;
  uVar8 = (ushort)((uint)uVar1 >> 0x10);
  in_stack_0000002c = uVar8 & 0xff;
  bVar4 = (byte)((uint)uVar1 >> 0x18);
  in_stack_0000002e = (ushort)bVar4;
  if (iVar13 < iVar11) {
    iVar11 = iVar13;
  }
  uVar2 = *(undefined4 *)((int)((iVar11 * uVar18 + iVar15) * 4) + lVar14);
  local_res8 = (ulonglong)
               (CONCAT16((char)((uint)uVar2 >> 0x18),
                         CONCAT24((short)((uint)uVar2 >> 0x10),
                                  CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
               0xff00ff00ff00ff);
  uVar2 = *(undefined4 *)((int)((iVar42 + iVar11 * uVar18) * 4) + lVar14);
  local_res18 = (ulonglong)
                (CONCAT16((char)((uint)uVar2 >> 0x18),
                          CONCAT24((short)((uint)uVar2 >> 0x10),
                                   CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
                0xff00ff00ff00ff);
  if (__isa_available < 2) {
    uVar17 = uVar17 & 0xffff;
    uVar9 = uVar9 & 0xffff;
    lVar14 = 0;
    do {
      iVar11 = ((int)(*(ushort *)((longlong)&local_res18 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14 + -8) * (0xff - uVar9)) / 0xff
               & 0xffffU) * uVar17 +
               ((int)(*(ushort *)((longlong)&stack0x00000028 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14) * (0xff - uVar9)) / 0xff &
               0xffffU) * (0xff - uVar17);
      *(short *)((longlong)param_1.field0_0x0 + lVar14) =
           ((short)(iVar11 / 0xff) + (short)(iVar11 >> 0x1f)) -
           (short)((longlong)iVar11 * 0x80808081 >> 0x3f);
      lVar14 = lVar14 + 2;
    } while (lVar14 < 8);
  }
  else {
    auVar22._8_8_ = 0;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = auVar37._0_8_;
    auVar37 = pmovzxwd(auVar37,local_res8);
    auVar52 = pmovzxwd(unaff_XMM7,auVar22);
    auVar45 = pmovzxwd(ZEXT416((uint)fVar44),auVar28);
    auVar29 = pmovzxwd(auVar28,local_res18);
    auVar29 = pmulld(auVar29,auVar45);
    auVar43._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar45._0_4_;
    auVar43._4_4_ = _UNK_150631f64 - auVar45._4_4_;
    auVar43._8_4_ = _UNK_150631f68 - auVar45._8_4_;
    auVar43._12_4_ = _UNK_150631f6c - auVar45._12_4_;
    auVar37 = pmulld(auVar37,auVar43);
    iVar12 = auVar37._0_4_ + auVar29._0_4_;
    iVar41 = auVar37._4_4_ + auVar29._4_4_;
    auVar38._0_8_ = CONCAT44(iVar41,iVar12);
    auVar38._8_4_ = auVar37._8_4_ + auVar29._8_4_;
    auVar38._12_4_ = auVar37._12_4_ + auVar29._12_4_;
    auVar51._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar52._0_4_;
    auVar51._4_4_ = _UNK_150631f64 - auVar52._4_4_;
    auVar51._8_4_ = _UNK_150631f68 - auVar52._8_4_;
    auVar51._12_4_ = _UNK_150631f6c - auVar52._12_4_;
    auVar29 = pmovzxwd(auVar29,(ulonglong)
                               CONCAT16(bVar4,CONCAT24(uVar8,CONCAT22(uVar7,(ushort)uVar1))) &
                               0xffff00ff00ff00ff);
    auVar37 = pmulld(auVar29,auVar45);
    auVar23._4_4_ = auVar38._8_4_;
    auVar23._0_4_ = auVar38._8_4_;
    auVar23._8_4_ = auVar38._12_4_;
    auVar23._12_4_ = auVar38._12_4_;
    auVar29 = pmuldq(auVar23,___xmm_80808081808080818080808180808081);
    auVar48._8_4_ = iVar41;
    auVar48._0_8_ = auVar38._0_8_;
    auVar48._12_4_ = iVar41;
    auVar47._8_8_ = auVar48._8_8_;
    auVar47._4_4_ = iVar12;
    auVar47._0_4_ = iVar12;
    auVar22 = pmuldq(auVar47,___xmm_80808081808080818080808180808081);
    iVar12 = auVar22._4_4_ + iVar12;
    iVar41 = auVar22._12_4_ + iVar41;
    iVar49 = auVar29._4_4_ + auVar38._8_4_;
    iVar50 = auVar29._12_4_ + auVar38._12_4_;
    auVar29 = pmovzxwd(auVar38,(ulonglong)
                               CONCAT16(bVar3,CONCAT24(uVar6,CONCAT22(uVar5,(ushort)uVar36))) &
                               0xffff00ff00ff00ff);
    auVar29 = pmulld(auVar29,auVar43);
    iVar11 = auVar29._0_4_ + auVar37._0_4_;
    iVar42 = auVar29._4_4_ + auVar37._4_4_;
    auVar31._4_4_ = iVar42;
    auVar31._0_4_ = iVar11;
    iVar13 = auVar29._8_4_ + auVar37._8_4_;
    iVar15 = auVar29._12_4_ + auVar37._12_4_;
    auVar24._4_4_ = iVar13;
    auVar24._0_4_ = iVar13;
    auVar24._8_4_ = iVar15;
    auVar24._12_4_ = iVar15;
    auVar29 = pmuldq(auVar24,___xmm_80808081808080818080808180808081);
    auVar31._8_4_ = iVar42;
    auVar31._12_4_ = iVar42;
    auVar30._8_8_ = auVar31._8_8_;
    auVar30._4_4_ = iVar11;
    auVar30._0_4_ = iVar11;
    auVar37 = pmuldq(auVar30,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar32._0_4_ = iVar11 >> 7;
    auVar32._4_4_ = iVar42 >> 7;
    auVar32._8_4_ = iVar13 >> 7;
    auVar32._12_4_ = iVar15 >> 7;
    auVar25._0_4_ = auVar32._0_4_ - (iVar11 >> 0x1f);
    auVar25._4_4_ = auVar32._4_4_ - (iVar42 >> 0x1f);
    auVar25._8_4_ = auVar32._8_4_ - (iVar13 >> 0x1f);
    auVar25._12_4_ = auVar32._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar25,auVar25,0xd8);
    auVar37 = pshuflw(auVar32,auVar29,0xd8);
    auVar39._4_4_ = auVar37._8_4_;
    auVar39._0_4_ = auVar37._0_4_;
    auVar39._8_4_ = auVar37._4_4_;
    auVar39._12_4_ = auVar37._12_4_;
    auVar26._0_4_ = (iVar12 >> 7) - (iVar12 >> 0x1f);
    auVar26._4_4_ = (iVar41 >> 7) - (iVar41 >> 0x1f);
    auVar26._8_4_ = (iVar49 >> 7) - (iVar49 >> 0x1f);
    auVar26._12_4_ = (iVar50 >> 7) - (iVar50 >> 0x1f);
    auVar29 = pshufhw(auVar26,auVar26,0xd8);
    auVar29 = pshuflw(auVar37,auVar29,0xd8);
    auVar37 = pmovzxwd(auVar45,auVar39);
    auVar40._4_4_ = auVar29._8_4_;
    auVar40._0_4_ = auVar29._0_4_;
    auVar40._8_4_ = auVar29._4_4_;
    auVar40._12_4_ = auVar29._12_4_;
    auVar29 = pmovzxwd(auVar43,auVar40);
    auVar29 = pmulld(auVar29,auVar52);
    auVar37 = pmulld(auVar37,auVar51);
    iVar11 = auVar37._0_4_ + auVar29._0_4_;
    iVar42 = auVar37._4_4_ + auVar29._4_4_;
    auVar34._4_4_ = iVar42;
    auVar34._0_4_ = iVar11;
    iVar13 = auVar37._8_4_ + auVar29._8_4_;
    iVar15 = auVar37._12_4_ + auVar29._12_4_;
    auVar34._8_4_ = iVar42;
    auVar34._12_4_ = iVar42;
    auVar33._8_8_ = auVar34._8_8_;
    auVar33._4_4_ = iVar11;
    auVar33._0_4_ = iVar11;
    auVar52._4_4_ = iVar13;
    auVar52._0_4_ = iVar13;
    auVar52._8_4_ = iVar15;
    auVar52._12_4_ = iVar15;
    auVar29 = pmuldq(auVar52,___xmm_80808081808080818080808180808081);
    auVar37 = pmuldq(auVar33,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar35._0_4_ = iVar11 >> 7;
    auVar35._4_4_ = iVar42 >> 7;
    auVar35._8_4_ = iVar13 >> 7;
    auVar35._12_4_ = iVar15 >> 7;
    auVar27._0_4_ = auVar35._0_4_ - (iVar11 >> 0x1f);
    auVar27._4_4_ = auVar35._4_4_ - (iVar42 >> 0x1f);
    auVar27._8_4_ = auVar35._8_4_ - (iVar13 >> 0x1f);
    auVar27._12_4_ = auVar35._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar27,auVar27,0xd8);
    auVar29 = pshuflw(auVar35,auVar29,0xd8);
    *(ulonglong *)param_1.field0_0x0 = CONCAT44(auVar29._8_4_,auVar29._0_4_);
  }
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab1fc70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<168>::ProcessPixelImpl'::__l20::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float in_register_00000084;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  int iVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  int iVar49;
  undefined1 auVar47 [16];
  int iVar50;
  undefined1 auVar51 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar52 [16];
  ulonglong local_res8;
  ushort local_res10 [4];
  ulonglong local_res18;
  ushort in_stack_00000028;
  ushort in_stack_0000002a;
  ushort in_stack_0000002c;
  ushort in_stack_0000002e;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  int iVar41;
  undefined1 auVar48 [16];
  
  uVar18 = (uint)param_3 & 0xffff;
  uVar17 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  fVar44 = (float)uVar18 - __real_3f800000;
  fVar20 = (float)uVar17;
  fVar46 = (float)uVar18 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar21 = fVar20 - __real_3f800000;
  if (fVar44 <= fVar46) {
    fVar46 = fVar44;
  }
  fVar20 = fVar20 * in_register_00000084 - __real_3f000000;
  if (fVar46 <= 0.0) {
    fVar46 = 0.0;
  }
  if (fVar21 <= fVar20) {
    fVar20 = fVar21;
  }
  iVar11 = (int)fVar46;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar21 = fVar46;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar46)) {
    auVar29._4_4_ = fVar46;
    auVar29._0_4_ = fVar46;
    auVar29._8_8_ = 0;
    uVar9 = movmskps((int)&stack0x00000000,auVar29);
    fVar21 = (float)(int)(iVar11 - (uVar9 & 1));
  }
  iVar11 = (int)fVar20;
  uVar9 = (uint)((fVar46 - fVar21) * __real_437f0000);
  sVar19 = (short)uVar9;
  uVar36 = CONCAT22(sVar19,sVar19);
  auVar37._0_8_ = CONCAT44(uVar36,uVar36);
  auVar37._8_4_ = uVar36;
  auVar37._12_4_ = uVar36;
  fVar21 = fVar20;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar20)) {
    auVar45._4_4_ = fVar20;
    auVar45._0_4_ = fVar20;
    auVar45._8_8_ = 0;
    uVar10 = movmskps((int)sVar19,auVar45);
    fVar21 = (float)(int)(iVar11 - (uVar10 & 1));
  }
  lVar14 = CONCAT26(in_stack_0000002e,
                    CONCAT24(in_stack_0000002c,CONCAT22(in_stack_0000002a,in_stack_00000028)));
  iVar13 = uVar17 - 1;
  iVar15 = (int)fVar46;
  uVar17 = (uint)((fVar20 - fVar21) * __real_437f0000);
  iVar11 = (int)fVar20 + 1;
  uVar16 = (undefined2)uVar17;
  auVar22._0_4_ = CONCAT22(uVar16,uVar16);
  auVar22._4_4_ = auVar22._0_4_;
  iVar42 = iVar15 + 1;
  if ((int)(uVar18 - 1) < iVar15 + 1) {
    iVar42 = uVar18 - 1;
  }
  iVar12 = uVar18 * (int)fVar20;
  uVar36 = *(undefined4 *)((iVar12 + iVar15) * 4 + lVar14);
  local_res10[0] = (ushort)uVar36 & 0xff;
  uVar5 = (ushort)((uint)uVar36 >> 8);
  local_res10[1] = uVar5 & 0xff;
  uVar6 = (ushort)((uint)uVar36 >> 0x10);
  local_res10[2] = uVar6 & 0xff;
  bVar3 = (byte)((uint)uVar36 >> 0x18);
  local_res10[3] = (ushort)bVar3;
  uVar1 = *(undefined4 *)((iVar42 + iVar12) * 4 + lVar14);
  in_stack_00000028 = (ushort)uVar1 & 0xff;
  uVar7 = (ushort)((uint)uVar1 >> 8);
  in_stack_0000002a = uVar7 & 0xff;
  uVar8 = (ushort)((uint)uVar1 >> 0x10);
  in_stack_0000002c = uVar8 & 0xff;
  bVar4 = (byte)((uint)uVar1 >> 0x18);
  in_stack_0000002e = (ushort)bVar4;
  if (iVar13 < iVar11) {
    iVar11 = iVar13;
  }
  uVar2 = *(undefined4 *)((int)((iVar11 * uVar18 + iVar15) * 4) + lVar14);
  local_res8 = (ulonglong)
               (CONCAT16((char)((uint)uVar2 >> 0x18),
                         CONCAT24((short)((uint)uVar2 >> 0x10),
                                  CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
               0xff00ff00ff00ff);
  uVar2 = *(undefined4 *)((int)((iVar42 + iVar11 * uVar18) * 4) + lVar14);
  local_res18 = (ulonglong)
                (CONCAT16((char)((uint)uVar2 >> 0x18),
                          CONCAT24((short)((uint)uVar2 >> 0x10),
                                   CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
                0xff00ff00ff00ff);
  if (__isa_available < 2) {
    uVar17 = uVar17 & 0xffff;
    uVar9 = uVar9 & 0xffff;
    lVar14 = 0;
    do {
      iVar11 = ((int)(*(ushort *)((longlong)&local_res18 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14 + -8) * (0xff - uVar9)) / 0xff
               & 0xffffU) * uVar17 +
               ((int)(*(ushort *)((longlong)&stack0x00000028 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14) * (0xff - uVar9)) / 0xff &
               0xffffU) * (0xff - uVar17);
      *(short *)((longlong)param_1.field0_0x0 + lVar14) =
           ((short)(iVar11 / 0xff) + (short)(iVar11 >> 0x1f)) -
           (short)((longlong)iVar11 * 0x80808081 >> 0x3f);
      lVar14 = lVar14 + 2;
    } while (lVar14 < 8);
  }
  else {
    auVar22._8_8_ = 0;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = auVar37._0_8_;
    auVar37 = pmovzxwd(auVar37,local_res8);
    auVar52 = pmovzxwd(unaff_XMM7,auVar22);
    auVar45 = pmovzxwd(ZEXT416((uint)fVar44),auVar28);
    auVar29 = pmovzxwd(auVar28,local_res18);
    auVar29 = pmulld(auVar29,auVar45);
    auVar43._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar45._0_4_;
    auVar43._4_4_ = _UNK_150631f64 - auVar45._4_4_;
    auVar43._8_4_ = _UNK_150631f68 - auVar45._8_4_;
    auVar43._12_4_ = _UNK_150631f6c - auVar45._12_4_;
    auVar37 = pmulld(auVar37,auVar43);
    iVar12 = auVar37._0_4_ + auVar29._0_4_;
    iVar41 = auVar37._4_4_ + auVar29._4_4_;
    auVar38._0_8_ = CONCAT44(iVar41,iVar12);
    auVar38._8_4_ = auVar37._8_4_ + auVar29._8_4_;
    auVar38._12_4_ = auVar37._12_4_ + auVar29._12_4_;
    auVar51._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar52._0_4_;
    auVar51._4_4_ = _UNK_150631f64 - auVar52._4_4_;
    auVar51._8_4_ = _UNK_150631f68 - auVar52._8_4_;
    auVar51._12_4_ = _UNK_150631f6c - auVar52._12_4_;
    auVar29 = pmovzxwd(auVar29,(ulonglong)
                               CONCAT16(bVar4,CONCAT24(uVar8,CONCAT22(uVar7,(ushort)uVar1))) &
                               0xffff00ff00ff00ff);
    auVar37 = pmulld(auVar29,auVar45);
    auVar23._4_4_ = auVar38._8_4_;
    auVar23._0_4_ = auVar38._8_4_;
    auVar23._8_4_ = auVar38._12_4_;
    auVar23._12_4_ = auVar38._12_4_;
    auVar29 = pmuldq(auVar23,___xmm_80808081808080818080808180808081);
    auVar48._8_4_ = iVar41;
    auVar48._0_8_ = auVar38._0_8_;
    auVar48._12_4_ = iVar41;
    auVar47._8_8_ = auVar48._8_8_;
    auVar47._4_4_ = iVar12;
    auVar47._0_4_ = iVar12;
    auVar22 = pmuldq(auVar47,___xmm_80808081808080818080808180808081);
    iVar12 = auVar22._4_4_ + iVar12;
    iVar41 = auVar22._12_4_ + iVar41;
    iVar49 = auVar29._4_4_ + auVar38._8_4_;
    iVar50 = auVar29._12_4_ + auVar38._12_4_;
    auVar29 = pmovzxwd(auVar38,(ulonglong)
                               CONCAT16(bVar3,CONCAT24(uVar6,CONCAT22(uVar5,(ushort)uVar36))) &
                               0xffff00ff00ff00ff);
    auVar29 = pmulld(auVar29,auVar43);
    iVar11 = auVar29._0_4_ + auVar37._0_4_;
    iVar42 = auVar29._4_4_ + auVar37._4_4_;
    auVar31._4_4_ = iVar42;
    auVar31._0_4_ = iVar11;
    iVar13 = auVar29._8_4_ + auVar37._8_4_;
    iVar15 = auVar29._12_4_ + auVar37._12_4_;
    auVar24._4_4_ = iVar13;
    auVar24._0_4_ = iVar13;
    auVar24._8_4_ = iVar15;
    auVar24._12_4_ = iVar15;
    auVar29 = pmuldq(auVar24,___xmm_80808081808080818080808180808081);
    auVar31._8_4_ = iVar42;
    auVar31._12_4_ = iVar42;
    auVar30._8_8_ = auVar31._8_8_;
    auVar30._4_4_ = iVar11;
    auVar30._0_4_ = iVar11;
    auVar37 = pmuldq(auVar30,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar32._0_4_ = iVar11 >> 7;
    auVar32._4_4_ = iVar42 >> 7;
    auVar32._8_4_ = iVar13 >> 7;
    auVar32._12_4_ = iVar15 >> 7;
    auVar25._0_4_ = auVar32._0_4_ - (iVar11 >> 0x1f);
    auVar25._4_4_ = auVar32._4_4_ - (iVar42 >> 0x1f);
    auVar25._8_4_ = auVar32._8_4_ - (iVar13 >> 0x1f);
    auVar25._12_4_ = auVar32._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar25,auVar25,0xd8);
    auVar37 = pshuflw(auVar32,auVar29,0xd8);
    auVar39._4_4_ = auVar37._8_4_;
    auVar39._0_4_ = auVar37._0_4_;
    auVar39._8_4_ = auVar37._4_4_;
    auVar39._12_4_ = auVar37._12_4_;
    auVar26._0_4_ = (iVar12 >> 7) - (iVar12 >> 0x1f);
    auVar26._4_4_ = (iVar41 >> 7) - (iVar41 >> 0x1f);
    auVar26._8_4_ = (iVar49 >> 7) - (iVar49 >> 0x1f);
    auVar26._12_4_ = (iVar50 >> 7) - (iVar50 >> 0x1f);
    auVar29 = pshufhw(auVar26,auVar26,0xd8);
    auVar29 = pshuflw(auVar37,auVar29,0xd8);
    auVar37 = pmovzxwd(auVar45,auVar39);
    auVar40._4_4_ = auVar29._8_4_;
    auVar40._0_4_ = auVar29._0_4_;
    auVar40._8_4_ = auVar29._4_4_;
    auVar40._12_4_ = auVar29._12_4_;
    auVar29 = pmovzxwd(auVar43,auVar40);
    auVar29 = pmulld(auVar29,auVar52);
    auVar37 = pmulld(auVar37,auVar51);
    iVar11 = auVar37._0_4_ + auVar29._0_4_;
    iVar42 = auVar37._4_4_ + auVar29._4_4_;
    auVar34._4_4_ = iVar42;
    auVar34._0_4_ = iVar11;
    iVar13 = auVar37._8_4_ + auVar29._8_4_;
    iVar15 = auVar37._12_4_ + auVar29._12_4_;
    auVar34._8_4_ = iVar42;
    auVar34._12_4_ = iVar42;
    auVar33._8_8_ = auVar34._8_8_;
    auVar33._4_4_ = iVar11;
    auVar33._0_4_ = iVar11;
    auVar52._4_4_ = iVar13;
    auVar52._0_4_ = iVar13;
    auVar52._8_4_ = iVar15;
    auVar52._12_4_ = iVar15;
    auVar29 = pmuldq(auVar52,___xmm_80808081808080818080808180808081);
    auVar37 = pmuldq(auVar33,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar35._0_4_ = iVar11 >> 7;
    auVar35._4_4_ = iVar42 >> 7;
    auVar35._8_4_ = iVar13 >> 7;
    auVar35._12_4_ = iVar15 >> 7;
    auVar27._0_4_ = auVar35._0_4_ - (iVar11 >> 0x1f);
    auVar27._4_4_ = auVar35._4_4_ - (iVar42 >> 0x1f);
    auVar27._8_4_ = auVar35._8_4_ - (iVar13 >> 0x1f);
    auVar27._12_4_ = auVar35._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar27,auVar27,0xd8);
    auVar29 = pshuflw(auVar35,auVar29,0xd8);
    *(ulonglong *)param_1.field0_0x0 = CONCAT44(auVar29._8_4_,auVar29._0_4_);
  }
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab200f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<200>::ProcessPixelImpl'::__l20::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float in_register_00000084;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  int iVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  int iVar49;
  undefined1 auVar47 [16];
  int iVar50;
  undefined1 auVar51 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar52 [16];
  ulonglong local_res8;
  ushort local_res10 [4];
  ulonglong local_res18;
  ushort in_stack_00000028;
  ushort in_stack_0000002a;
  ushort in_stack_0000002c;
  ushort in_stack_0000002e;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  int iVar41;
  undefined1 auVar48 [16];
  
  uVar18 = (uint)param_3 & 0xffff;
  uVar17 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  fVar44 = (float)uVar18 - __real_3f800000;
  fVar20 = (float)uVar17;
  fVar46 = (float)uVar18 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar21 = fVar20 - __real_3f800000;
  if (fVar44 <= fVar46) {
    fVar46 = fVar44;
  }
  fVar20 = fVar20 * in_register_00000084 - __real_3f000000;
  if (fVar46 <= 0.0) {
    fVar46 = 0.0;
  }
  if (fVar21 <= fVar20) {
    fVar20 = fVar21;
  }
  iVar11 = (int)fVar46;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar21 = fVar46;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar46)) {
    auVar29._4_4_ = fVar46;
    auVar29._0_4_ = fVar46;
    auVar29._8_8_ = 0;
    uVar9 = movmskps((int)&stack0x00000000,auVar29);
    fVar21 = (float)(int)(iVar11 - (uVar9 & 1));
  }
  iVar11 = (int)fVar20;
  uVar9 = (uint)((fVar46 - fVar21) * __real_437f0000);
  sVar19 = (short)uVar9;
  uVar36 = CONCAT22(sVar19,sVar19);
  auVar37._0_8_ = CONCAT44(uVar36,uVar36);
  auVar37._8_4_ = uVar36;
  auVar37._12_4_ = uVar36;
  fVar21 = fVar20;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar20)) {
    auVar45._4_4_ = fVar20;
    auVar45._0_4_ = fVar20;
    auVar45._8_8_ = 0;
    uVar10 = movmskps((int)sVar19,auVar45);
    fVar21 = (float)(int)(iVar11 - (uVar10 & 1));
  }
  lVar14 = CONCAT26(in_stack_0000002e,
                    CONCAT24(in_stack_0000002c,CONCAT22(in_stack_0000002a,in_stack_00000028)));
  iVar13 = uVar17 - 1;
  iVar15 = (int)fVar46;
  uVar17 = (uint)((fVar20 - fVar21) * __real_437f0000);
  iVar11 = (int)fVar20 + 1;
  uVar16 = (undefined2)uVar17;
  auVar22._0_4_ = CONCAT22(uVar16,uVar16);
  auVar22._4_4_ = auVar22._0_4_;
  iVar42 = iVar15 + 1;
  if ((int)(uVar18 - 1) < iVar15 + 1) {
    iVar42 = uVar18 - 1;
  }
  iVar12 = uVar18 * (int)fVar20;
  uVar36 = *(undefined4 *)((iVar12 + iVar15) * 4 + lVar14);
  local_res10[0] = (ushort)uVar36 & 0xff;
  uVar5 = (ushort)((uint)uVar36 >> 8);
  local_res10[1] = uVar5 & 0xff;
  uVar6 = (ushort)((uint)uVar36 >> 0x10);
  local_res10[2] = uVar6 & 0xff;
  bVar3 = (byte)((uint)uVar36 >> 0x18);
  local_res10[3] = (ushort)bVar3;
  uVar1 = *(undefined4 *)((iVar42 + iVar12) * 4 + lVar14);
  in_stack_00000028 = (ushort)uVar1 & 0xff;
  uVar7 = (ushort)((uint)uVar1 >> 8);
  in_stack_0000002a = uVar7 & 0xff;
  uVar8 = (ushort)((uint)uVar1 >> 0x10);
  in_stack_0000002c = uVar8 & 0xff;
  bVar4 = (byte)((uint)uVar1 >> 0x18);
  in_stack_0000002e = (ushort)bVar4;
  if (iVar13 < iVar11) {
    iVar11 = iVar13;
  }
  uVar2 = *(undefined4 *)((int)((iVar11 * uVar18 + iVar15) * 4) + lVar14);
  local_res8 = (ulonglong)
               (CONCAT16((char)((uint)uVar2 >> 0x18),
                         CONCAT24((short)((uint)uVar2 >> 0x10),
                                  CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
               0xff00ff00ff00ff);
  uVar2 = *(undefined4 *)((int)((iVar42 + iVar11 * uVar18) * 4) + lVar14);
  local_res18 = (ulonglong)
                (CONCAT16((char)((uint)uVar2 >> 0x18),
                          CONCAT24((short)((uint)uVar2 >> 0x10),
                                   CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
                0xff00ff00ff00ff);
  if (__isa_available < 2) {
    uVar17 = uVar17 & 0xffff;
    uVar9 = uVar9 & 0xffff;
    lVar14 = 0;
    do {
      iVar11 = ((int)(*(ushort *)((longlong)&local_res18 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14 + -8) * (0xff - uVar9)) / 0xff
               & 0xffffU) * uVar17 +
               ((int)(*(ushort *)((longlong)&stack0x00000028 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14) * (0xff - uVar9)) / 0xff &
               0xffffU) * (0xff - uVar17);
      *(short *)((longlong)param_1.field0_0x0 + lVar14) =
           ((short)(iVar11 / 0xff) + (short)(iVar11 >> 0x1f)) -
           (short)((longlong)iVar11 * 0x80808081 >> 0x3f);
      lVar14 = lVar14 + 2;
    } while (lVar14 < 8);
  }
  else {
    auVar22._8_8_ = 0;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = auVar37._0_8_;
    auVar37 = pmovzxwd(auVar37,local_res8);
    auVar52 = pmovzxwd(unaff_XMM7,auVar22);
    auVar45 = pmovzxwd(ZEXT416((uint)fVar44),auVar28);
    auVar29 = pmovzxwd(auVar28,local_res18);
    auVar29 = pmulld(auVar29,auVar45);
    auVar43._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar45._0_4_;
    auVar43._4_4_ = _UNK_150631f64 - auVar45._4_4_;
    auVar43._8_4_ = _UNK_150631f68 - auVar45._8_4_;
    auVar43._12_4_ = _UNK_150631f6c - auVar45._12_4_;
    auVar37 = pmulld(auVar37,auVar43);
    iVar12 = auVar37._0_4_ + auVar29._0_4_;
    iVar41 = auVar37._4_4_ + auVar29._4_4_;
    auVar38._0_8_ = CONCAT44(iVar41,iVar12);
    auVar38._8_4_ = auVar37._8_4_ + auVar29._8_4_;
    auVar38._12_4_ = auVar37._12_4_ + auVar29._12_4_;
    auVar51._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar52._0_4_;
    auVar51._4_4_ = _UNK_150631f64 - auVar52._4_4_;
    auVar51._8_4_ = _UNK_150631f68 - auVar52._8_4_;
    auVar51._12_4_ = _UNK_150631f6c - auVar52._12_4_;
    auVar29 = pmovzxwd(auVar29,(ulonglong)
                               CONCAT16(bVar4,CONCAT24(uVar8,CONCAT22(uVar7,(ushort)uVar1))) &
                               0xffff00ff00ff00ff);
    auVar37 = pmulld(auVar29,auVar45);
    auVar23._4_4_ = auVar38._8_4_;
    auVar23._0_4_ = auVar38._8_4_;
    auVar23._8_4_ = auVar38._12_4_;
    auVar23._12_4_ = auVar38._12_4_;
    auVar29 = pmuldq(auVar23,___xmm_80808081808080818080808180808081);
    auVar48._8_4_ = iVar41;
    auVar48._0_8_ = auVar38._0_8_;
    auVar48._12_4_ = iVar41;
    auVar47._8_8_ = auVar48._8_8_;
    auVar47._4_4_ = iVar12;
    auVar47._0_4_ = iVar12;
    auVar22 = pmuldq(auVar47,___xmm_80808081808080818080808180808081);
    iVar12 = auVar22._4_4_ + iVar12;
    iVar41 = auVar22._12_4_ + iVar41;
    iVar49 = auVar29._4_4_ + auVar38._8_4_;
    iVar50 = auVar29._12_4_ + auVar38._12_4_;
    auVar29 = pmovzxwd(auVar38,(ulonglong)
                               CONCAT16(bVar3,CONCAT24(uVar6,CONCAT22(uVar5,(ushort)uVar36))) &
                               0xffff00ff00ff00ff);
    auVar29 = pmulld(auVar29,auVar43);
    iVar11 = auVar29._0_4_ + auVar37._0_4_;
    iVar42 = auVar29._4_4_ + auVar37._4_4_;
    auVar31._4_4_ = iVar42;
    auVar31._0_4_ = iVar11;
    iVar13 = auVar29._8_4_ + auVar37._8_4_;
    iVar15 = auVar29._12_4_ + auVar37._12_4_;
    auVar24._4_4_ = iVar13;
    auVar24._0_4_ = iVar13;
    auVar24._8_4_ = iVar15;
    auVar24._12_4_ = iVar15;
    auVar29 = pmuldq(auVar24,___xmm_80808081808080818080808180808081);
    auVar31._8_4_ = iVar42;
    auVar31._12_4_ = iVar42;
    auVar30._8_8_ = auVar31._8_8_;
    auVar30._4_4_ = iVar11;
    auVar30._0_4_ = iVar11;
    auVar37 = pmuldq(auVar30,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar32._0_4_ = iVar11 >> 7;
    auVar32._4_4_ = iVar42 >> 7;
    auVar32._8_4_ = iVar13 >> 7;
    auVar32._12_4_ = iVar15 >> 7;
    auVar25._0_4_ = auVar32._0_4_ - (iVar11 >> 0x1f);
    auVar25._4_4_ = auVar32._4_4_ - (iVar42 >> 0x1f);
    auVar25._8_4_ = auVar32._8_4_ - (iVar13 >> 0x1f);
    auVar25._12_4_ = auVar32._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar25,auVar25,0xd8);
    auVar37 = pshuflw(auVar32,auVar29,0xd8);
    auVar39._4_4_ = auVar37._8_4_;
    auVar39._0_4_ = auVar37._0_4_;
    auVar39._8_4_ = auVar37._4_4_;
    auVar39._12_4_ = auVar37._12_4_;
    auVar26._0_4_ = (iVar12 >> 7) - (iVar12 >> 0x1f);
    auVar26._4_4_ = (iVar41 >> 7) - (iVar41 >> 0x1f);
    auVar26._8_4_ = (iVar49 >> 7) - (iVar49 >> 0x1f);
    auVar26._12_4_ = (iVar50 >> 7) - (iVar50 >> 0x1f);
    auVar29 = pshufhw(auVar26,auVar26,0xd8);
    auVar29 = pshuflw(auVar37,auVar29,0xd8);
    auVar37 = pmovzxwd(auVar45,auVar39);
    auVar40._4_4_ = auVar29._8_4_;
    auVar40._0_4_ = auVar29._0_4_;
    auVar40._8_4_ = auVar29._4_4_;
    auVar40._12_4_ = auVar29._12_4_;
    auVar29 = pmovzxwd(auVar43,auVar40);
    auVar29 = pmulld(auVar29,auVar52);
    auVar37 = pmulld(auVar37,auVar51);
    iVar11 = auVar37._0_4_ + auVar29._0_4_;
    iVar42 = auVar37._4_4_ + auVar29._4_4_;
    auVar34._4_4_ = iVar42;
    auVar34._0_4_ = iVar11;
    iVar13 = auVar37._8_4_ + auVar29._8_4_;
    iVar15 = auVar37._12_4_ + auVar29._12_4_;
    auVar34._8_4_ = iVar42;
    auVar34._12_4_ = iVar42;
    auVar33._8_8_ = auVar34._8_8_;
    auVar33._4_4_ = iVar11;
    auVar33._0_4_ = iVar11;
    auVar52._4_4_ = iVar13;
    auVar52._0_4_ = iVar13;
    auVar52._8_4_ = iVar15;
    auVar52._12_4_ = iVar15;
    auVar29 = pmuldq(auVar52,___xmm_80808081808080818080808180808081);
    auVar37 = pmuldq(auVar33,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar35._0_4_ = iVar11 >> 7;
    auVar35._4_4_ = iVar42 >> 7;
    auVar35._8_4_ = iVar13 >> 7;
    auVar35._12_4_ = iVar15 >> 7;
    auVar27._0_4_ = auVar35._0_4_ - (iVar11 >> 0x1f);
    auVar27._4_4_ = auVar35._4_4_ - (iVar42 >> 0x1f);
    auVar27._8_4_ = auVar35._8_4_ - (iVar13 >> 0x1f);
    auVar27._12_4_ = auVar35._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar27,auVar27,0xd8);
    auVar29 = pshuflw(auVar35,auVar29,0xd8);
    *(ulonglong *)param_1.field0_0x0 = CONCAT44(auVar29._8_4_,auVar29._0_4_);
  }
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab20570

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<282>::ProcessPixelImpl'::__l23::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  float in_register_00000084;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  longlong in_stack_00000028;
  
  uVar9 = (uint)param_3 & 0xffff;
  uVar12 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar17 = uVar12 - 1;
  fVar20 = (float)uVar12;
  fVar25 = (float)uVar9 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar23 = (float)uVar9 - __real_3f800000;
  fVar24 = fVar20 * in_register_00000084 - __real_3f000000;
  fVar20 = fVar20 - __real_3f800000;
  if (fVar23 <= fVar25) {
    fVar25 = fVar23;
  }
  if (fVar20 <= fVar24) {
    fVar24 = fVar20;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  iVar15 = (int)fVar25;
  iVar18 = iVar15 + 1;
  if ((int)(uVar9 - 1) < iVar15 + 1) {
    iVar18 = uVar9 - 1;
  }
  iVar10 = uVar9 * (int)fVar24;
  iVar19 = (int)fVar24 + 1;
  if (iVar17 < iVar19) {
    iVar19 = iVar17;
  }
  lVar14 = (longlong)((iVar10 + iVar15) * 3);
  lVar13 = (longlong)((iVar18 + iVar10) * 3);
  bVar1 = *(byte *)(lVar14 + 1 + in_stack_00000028);
  bVar2 = *(byte *)(lVar14 + 2 + in_stack_00000028);
  bVar3 = *(byte *)(in_stack_00000028 + 1 + lVar13);
  lVar11 = (longlong)(int)((iVar19 * uVar9 + iVar15) * 3);
  bVar4 = *(byte *)(in_stack_00000028 + 2 + lVar13);
  lVar16 = (longlong)(int)((iVar18 + iVar19 * uVar9) * 3);
  bVar5 = *(byte *)(lVar11 + 1 + in_stack_00000028);
  bVar6 = *(byte *)(lVar11 + 2 + in_stack_00000028);
  bVar7 = *(byte *)(lVar16 + 1 + in_stack_00000028);
  iVar17 = (int)fVar24;
  bVar8 = *(byte *)(lVar16 + 2 + in_stack_00000028);
  fVar20 = fVar24;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar24)) {
    auVar21._4_4_ = fVar24;
    auVar21._0_4_ = fVar24;
    auVar21._8_8_ = 0;
    uVar9 = movmskps((uint)bVar8,auVar21);
    fVar20 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar17 = (int)fVar25;
  uVar9 = (uint)((fVar24 - fVar20) * __real_437f0000);
  uVar12 = uVar9 & 0xffff;
  fVar24 = fVar25;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar25)) {
    auVar22._4_4_ = fVar25;
    auVar22._0_4_ = fVar25;
    auVar22._8_8_ = 0;
    uVar9 = movmskps(uVar9,auVar22);
    fVar24 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar18 = 0xff - uVar12;
  uVar9 = (int)((fVar25 - fVar24) * __real_437f0000) & 0xffff;
  iVar15 = 0xff - uVar9;
  iVar17 = ((int)(*(byte *)(lVar16 + in_stack_00000028) * uVar9 +
                 (uint)*(byte *)(lVar11 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * uVar12 +
           ((int)(*(byte *)(in_stack_00000028 + lVar13) * uVar9 +
                 (uint)*(byte *)(lVar14 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * iVar18;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar3 * uVar9 + (uint)bVar1 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar7 * uVar9 + (uint)bVar5 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 2) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar4 * uVar9 + (uint)bVar2 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar8 * uVar9 + (uint)bVar6 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 4) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab208a0

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<298>::ProcessPixelImpl'::__l23::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  float in_register_00000084;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  longlong in_stack_00000028;
  
  uVar9 = (uint)param_3 & 0xffff;
  uVar12 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar17 = uVar12 - 1;
  fVar20 = (float)uVar12;
  fVar25 = (float)uVar9 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar23 = (float)uVar9 - __real_3f800000;
  fVar24 = fVar20 * in_register_00000084 - __real_3f000000;
  fVar20 = fVar20 - __real_3f800000;
  if (fVar23 <= fVar25) {
    fVar25 = fVar23;
  }
  if (fVar20 <= fVar24) {
    fVar24 = fVar20;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  iVar15 = (int)fVar25;
  iVar18 = iVar15 + 1;
  if ((int)(uVar9 - 1) < iVar15 + 1) {
    iVar18 = uVar9 - 1;
  }
  iVar10 = uVar9 * (int)fVar24;
  iVar19 = (int)fVar24 + 1;
  if (iVar17 < iVar19) {
    iVar19 = iVar17;
  }
  lVar14 = (longlong)((iVar10 + iVar15) * 3);
  lVar13 = (longlong)((iVar18 + iVar10) * 3);
  bVar1 = *(byte *)(lVar14 + 1 + in_stack_00000028);
  bVar2 = *(byte *)(lVar14 + 2 + in_stack_00000028);
  bVar3 = *(byte *)(in_stack_00000028 + 1 + lVar13);
  lVar11 = (longlong)(int)((iVar19 * uVar9 + iVar15) * 3);
  bVar4 = *(byte *)(in_stack_00000028 + 2 + lVar13);
  lVar16 = (longlong)(int)((iVar18 + iVar19 * uVar9) * 3);
  bVar5 = *(byte *)(lVar11 + 1 + in_stack_00000028);
  bVar6 = *(byte *)(lVar11 + 2 + in_stack_00000028);
  bVar7 = *(byte *)(lVar16 + 1 + in_stack_00000028);
  iVar17 = (int)fVar24;
  bVar8 = *(byte *)(lVar16 + 2 + in_stack_00000028);
  fVar20 = fVar24;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar24)) {
    auVar21._4_4_ = fVar24;
    auVar21._0_4_ = fVar24;
    auVar21._8_8_ = 0;
    uVar9 = movmskps((uint)bVar8,auVar21);
    fVar20 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar17 = (int)fVar25;
  uVar9 = (uint)((fVar24 - fVar20) * __real_437f0000);
  uVar12 = uVar9 & 0xffff;
  fVar24 = fVar25;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar25)) {
    auVar22._4_4_ = fVar25;
    auVar22._0_4_ = fVar25;
    auVar22._8_8_ = 0;
    uVar9 = movmskps(uVar9,auVar22);
    fVar24 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar18 = 0xff - uVar12;
  uVar9 = (int)((fVar25 - fVar24) * __real_437f0000) & 0xffff;
  iVar15 = 0xff - uVar9;
  iVar17 = ((int)(*(byte *)(lVar16 + in_stack_00000028) * uVar9 +
                 (uint)*(byte *)(lVar11 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * uVar12 +
           ((int)(*(byte *)(in_stack_00000028 + lVar13) * uVar9 +
                 (uint)*(byte *)(lVar14 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * iVar18;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar3 * uVar9 + (uint)bVar1 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar7 * uVar9 + (uint)bVar5 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 2) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar4 * uVar9 + (uint)bVar2 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar8 * uVar9 + (uint)bVar6 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 4) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab20bd0

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<330>::ProcessPixelImpl'::__l23::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  float in_register_00000084;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  longlong in_stack_00000028;
  
  uVar9 = (uint)param_3 & 0xffff;
  uVar12 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar17 = uVar12 - 1;
  fVar20 = (float)uVar12;
  fVar25 = (float)uVar9 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar23 = (float)uVar9 - __real_3f800000;
  fVar24 = fVar20 * in_register_00000084 - __real_3f000000;
  fVar20 = fVar20 - __real_3f800000;
  if (fVar23 <= fVar25) {
    fVar25 = fVar23;
  }
  if (fVar20 <= fVar24) {
    fVar24 = fVar20;
  }
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  iVar15 = (int)fVar25;
  iVar18 = iVar15 + 1;
  if ((int)(uVar9 - 1) < iVar15 + 1) {
    iVar18 = uVar9 - 1;
  }
  iVar10 = uVar9 * (int)fVar24;
  iVar19 = (int)fVar24 + 1;
  if (iVar17 < iVar19) {
    iVar19 = iVar17;
  }
  lVar14 = (longlong)((iVar10 + iVar15) * 3);
  lVar13 = (longlong)((iVar18 + iVar10) * 3);
  bVar1 = *(byte *)(lVar14 + 1 + in_stack_00000028);
  bVar2 = *(byte *)(lVar14 + 2 + in_stack_00000028);
  bVar3 = *(byte *)(in_stack_00000028 + 1 + lVar13);
  lVar11 = (longlong)(int)((iVar19 * uVar9 + iVar15) * 3);
  bVar4 = *(byte *)(in_stack_00000028 + 2 + lVar13);
  lVar16 = (longlong)(int)((iVar18 + iVar19 * uVar9) * 3);
  bVar5 = *(byte *)(lVar11 + 1 + in_stack_00000028);
  bVar6 = *(byte *)(lVar11 + 2 + in_stack_00000028);
  bVar7 = *(byte *)(lVar16 + 1 + in_stack_00000028);
  iVar17 = (int)fVar24;
  bVar8 = *(byte *)(lVar16 + 2 + in_stack_00000028);
  fVar20 = fVar24;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar24)) {
    auVar21._4_4_ = fVar24;
    auVar21._0_4_ = fVar24;
    auVar21._8_8_ = 0;
    uVar9 = movmskps((uint)bVar8,auVar21);
    fVar20 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar17 = (int)fVar25;
  uVar9 = (uint)((fVar24 - fVar20) * __real_437f0000);
  uVar12 = uVar9 & 0xffff;
  fVar24 = fVar25;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar25)) {
    auVar22._4_4_ = fVar25;
    auVar22._0_4_ = fVar25;
    auVar22._8_8_ = 0;
    uVar9 = movmskps(uVar9,auVar22);
    fVar24 = (float)(int)(iVar17 - (uVar9 & 1));
  }
  iVar18 = 0xff - uVar12;
  uVar9 = (int)((fVar25 - fVar24) * __real_437f0000) & 0xffff;
  iVar15 = 0xff - uVar9;
  iVar17 = ((int)(*(byte *)(lVar16 + in_stack_00000028) * uVar9 +
                 (uint)*(byte *)(lVar11 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * uVar12 +
           ((int)(*(byte *)(in_stack_00000028 + lVar13) * uVar9 +
                 (uint)*(byte *)(lVar14 + in_stack_00000028) * iVar15) / 0xff & 0xffffU) * iVar18;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar3 * uVar9 + (uint)bVar1 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar7 * uVar9 + (uint)bVar5 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 2) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  iVar17 = ((int)(bVar4 * uVar9 + (uint)bVar2 * iVar15) / 0xff & 0xffffU) * iVar18 +
           ((int)(bVar8 * uVar9 + (uint)bVar6 * iVar15) / 0xff & 0xffffU) * uVar12;
  *(short *)((longlong)param_1.field0_0x0 + 4) =
       ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
       (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab20f00

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<538>::ProcessPixelImpl'::__l23::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float in_register_00000084;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  longlong in_stack_00000028;
  
  uVar3 = (uint)param_3 & 0xffff;
  uVar2 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar1 = uVar3 - 1;
  iVar7 = uVar2 - 1;
  fVar10 = (float)uVar2;
  fVar15 = (float)uVar3 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar13 = (float)uVar3 - __real_3f800000;
  fVar14 = fVar10 * in_register_00000084 - __real_3f000000;
  fVar10 = fVar10 - __real_3f800000;
  if (fVar13 <= fVar15) {
    fVar15 = fVar13;
  }
  if (fVar10 <= fVar14) {
    fVar14 = fVar10;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  iVar9 = (int)fVar15;
  iVar5 = iVar9 + 1;
  if (iVar1 < iVar9 + 1) {
    iVar5 = iVar1;
  }
  iVar6 = (int)fVar14 + 1;
  iVar4 = (int)fVar14 * uVar3;
  if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  iVar7 = (int)fVar14;
  fVar10 = fVar14;
  if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar14)) {
    auVar11._4_4_ = fVar14;
    auVar11._0_4_ = fVar14;
    auVar11._8_8_ = 0;
    uVar2 = movmskps(iVar1,auVar11);
    fVar10 = (float)(int)(iVar7 - (uVar2 & 1));
  }
  iVar1 = (int)fVar15;
  uVar2 = (uint)((fVar14 - fVar10) * __real_437f0000);
  uVar8 = uVar2 & 0xffff;
  fVar14 = fVar15;
  if ((iVar1 != -0x80000000) && ((float)iVar1 != fVar15)) {
    auVar12._4_4_ = fVar15;
    auVar12._0_4_ = fVar15;
    auVar12._8_8_ = 0;
    uVar2 = movmskps(uVar2,auVar12);
    fVar14 = (float)(int)(iVar1 - (uVar2 & 1));
  }
  uVar2 = (int)((fVar15 - fVar14) * __real_437f0000) & 0xffff;
  iVar1 = ((int)(*(byte *)((iVar4 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((iVar4 + iVar9) + in_stack_00000028) * (0xff - uVar2)) / 0xff &
          0xffffU) * (0xff - uVar8) +
          ((int)(*(byte *)((int)(iVar6 * uVar3 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((int)(iVar6 * uVar3 + iVar9) + in_stack_00000028) * (0xff - uVar2))
           / 0xff & 0xffffU) * uVar8;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar1 / 0xff) + (short)(iVar1 >> 0x1f)) -
       (short)((longlong)iVar1 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab21100

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<554>::ProcessPixelImpl'::__l23::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float in_register_00000084;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  longlong in_stack_00000028;
  
  uVar3 = (uint)param_3 & 0xffff;
  uVar2 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar1 = uVar3 - 1;
  iVar7 = uVar2 - 1;
  fVar10 = (float)uVar2;
  fVar15 = (float)uVar3 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar13 = (float)uVar3 - __real_3f800000;
  fVar14 = fVar10 * in_register_00000084 - __real_3f000000;
  fVar10 = fVar10 - __real_3f800000;
  if (fVar13 <= fVar15) {
    fVar15 = fVar13;
  }
  if (fVar10 <= fVar14) {
    fVar14 = fVar10;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  iVar9 = (int)fVar15;
  iVar5 = iVar9 + 1;
  if (iVar1 < iVar9 + 1) {
    iVar5 = iVar1;
  }
  iVar6 = (int)fVar14 + 1;
  iVar4 = (int)fVar14 * uVar3;
  if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  iVar7 = (int)fVar14;
  fVar10 = fVar14;
  if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar14)) {
    auVar11._4_4_ = fVar14;
    auVar11._0_4_ = fVar14;
    auVar11._8_8_ = 0;
    uVar2 = movmskps(iVar1,auVar11);
    fVar10 = (float)(int)(iVar7 - (uVar2 & 1));
  }
  iVar1 = (int)fVar15;
  uVar2 = (uint)((fVar14 - fVar10) * __real_437f0000);
  uVar8 = uVar2 & 0xffff;
  fVar14 = fVar15;
  if ((iVar1 != -0x80000000) && ((float)iVar1 != fVar15)) {
    auVar12._4_4_ = fVar15;
    auVar12._0_4_ = fVar15;
    auVar12._8_8_ = 0;
    uVar2 = movmskps(uVar2,auVar12);
    fVar14 = (float)(int)(iVar1 - (uVar2 & 1));
  }
  uVar2 = (int)((fVar15 - fVar14) * __real_437f0000) & 0xffff;
  iVar1 = ((int)(*(byte *)((iVar4 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((iVar4 + iVar9) + in_stack_00000028) * (0xff - uVar2)) / 0xff &
          0xffffU) * (0xff - uVar8) +
          ((int)(*(byte *)((int)(iVar6 * uVar3 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((int)(iVar6 * uVar3 + iVar9) + in_stack_00000028) * (0xff - uVar2))
           / 0xff & 0xffffU) * uVar8;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar1 / 0xff) + (short)(iVar1 >> 0x1f)) -
       (short)((longlong)iVar1 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab21300

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<586>::ProcessPixelImpl'::__l23::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float in_register_00000084;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  longlong in_stack_00000028;
  
  uVar3 = (uint)param_3 & 0xffff;
  uVar2 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  iVar1 = uVar3 - 1;
  iVar7 = uVar2 - 1;
  fVar10 = (float)uVar2;
  fVar15 = (float)uVar3 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar13 = (float)uVar3 - __real_3f800000;
  fVar14 = fVar10 * in_register_00000084 - __real_3f000000;
  fVar10 = fVar10 - __real_3f800000;
  if (fVar13 <= fVar15) {
    fVar15 = fVar13;
  }
  if (fVar10 <= fVar14) {
    fVar14 = fVar10;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  iVar9 = (int)fVar15;
  iVar5 = iVar9 + 1;
  if (iVar1 < iVar9 + 1) {
    iVar5 = iVar1;
  }
  iVar6 = (int)fVar14 + 1;
  iVar4 = (int)fVar14 * uVar3;
  if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  iVar7 = (int)fVar14;
  fVar10 = fVar14;
  if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar14)) {
    auVar11._4_4_ = fVar14;
    auVar11._0_4_ = fVar14;
    auVar11._8_8_ = 0;
    uVar2 = movmskps(iVar1,auVar11);
    fVar10 = (float)(int)(iVar7 - (uVar2 & 1));
  }
  iVar1 = (int)fVar15;
  uVar2 = (uint)((fVar14 - fVar10) * __real_437f0000);
  uVar8 = uVar2 & 0xffff;
  fVar14 = fVar15;
  if ((iVar1 != -0x80000000) && ((float)iVar1 != fVar15)) {
    auVar12._4_4_ = fVar15;
    auVar12._0_4_ = fVar15;
    auVar12._8_8_ = 0;
    uVar2 = movmskps(uVar2,auVar12);
    fVar14 = (float)(int)(iVar1 - (uVar2 & 1));
  }
  uVar2 = (int)((fVar15 - fVar14) * __real_437f0000) & 0xffff;
  iVar1 = ((int)(*(byte *)((iVar4 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((iVar4 + iVar9) + in_stack_00000028) * (0xff - uVar2)) / 0xff &
          0xffffU) * (0xff - uVar8) +
          ((int)(*(byte *)((int)(iVar6 * uVar3 + iVar5) + in_stack_00000028) * uVar2 +
                (uint)*(byte *)((int)(iVar6 * uVar3 + iVar9) + in_stack_00000028) * (0xff - uVar2))
           / 0xff & 0xffffU) * uVar8;
  *(short *)param_1.field0_0x0 =
       ((short)(iVar1 / 0xff) + (short)(iVar1 >> 0x1f)) -
       (short)((longlong)iVar1 * 0x80808081 >> 0x3f);
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab21500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<154>::ProcessPixelImpl'::__l23::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float in_register_00000084;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  int iVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  int iVar49;
  undefined1 auVar47 [16];
  int iVar50;
  undefined1 auVar51 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar52 [16];
  ulonglong local_res8;
  ushort local_res10 [4];
  ulonglong local_res18;
  ushort in_stack_00000028;
  ushort in_stack_0000002a;
  ushort in_stack_0000002c;
  ushort in_stack_0000002e;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  int iVar41;
  undefined1 auVar48 [16];
  
  uVar18 = (uint)param_3 & 0xffff;
  uVar17 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  fVar44 = (float)uVar18 - __real_3f800000;
  fVar20 = (float)uVar17;
  fVar46 = (float)uVar18 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar21 = fVar20 - __real_3f800000;
  if (fVar44 <= fVar46) {
    fVar46 = fVar44;
  }
  fVar20 = fVar20 * in_register_00000084 - __real_3f000000;
  if (fVar46 <= 0.0) {
    fVar46 = 0.0;
  }
  if (fVar21 <= fVar20) {
    fVar20 = fVar21;
  }
  iVar11 = (int)fVar46;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar21 = fVar46;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar46)) {
    auVar29._4_4_ = fVar46;
    auVar29._0_4_ = fVar46;
    auVar29._8_8_ = 0;
    uVar9 = movmskps((int)&stack0x00000000,auVar29);
    fVar21 = (float)(int)(iVar11 - (uVar9 & 1));
  }
  iVar11 = (int)fVar20;
  uVar9 = (uint)((fVar46 - fVar21) * __real_437f0000);
  sVar19 = (short)uVar9;
  uVar36 = CONCAT22(sVar19,sVar19);
  auVar37._0_8_ = CONCAT44(uVar36,uVar36);
  auVar37._8_4_ = uVar36;
  auVar37._12_4_ = uVar36;
  fVar21 = fVar20;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar20)) {
    auVar45._4_4_ = fVar20;
    auVar45._0_4_ = fVar20;
    auVar45._8_8_ = 0;
    uVar10 = movmskps((int)sVar19,auVar45);
    fVar21 = (float)(int)(iVar11 - (uVar10 & 1));
  }
  lVar14 = CONCAT26(in_stack_0000002e,
                    CONCAT24(in_stack_0000002c,CONCAT22(in_stack_0000002a,in_stack_00000028)));
  iVar13 = uVar17 - 1;
  iVar15 = (int)fVar46;
  uVar17 = (uint)((fVar20 - fVar21) * __real_437f0000);
  iVar11 = (int)fVar20 + 1;
  uVar16 = (undefined2)uVar17;
  auVar22._0_4_ = CONCAT22(uVar16,uVar16);
  auVar22._4_4_ = auVar22._0_4_;
  iVar42 = iVar15 + 1;
  if ((int)(uVar18 - 1) < iVar15 + 1) {
    iVar42 = uVar18 - 1;
  }
  iVar12 = uVar18 * (int)fVar20;
  uVar36 = *(undefined4 *)((iVar12 + iVar15) * 4 + lVar14);
  local_res10[0] = (ushort)uVar36 & 0xff;
  uVar5 = (ushort)((uint)uVar36 >> 8);
  local_res10[1] = uVar5 & 0xff;
  uVar6 = (ushort)((uint)uVar36 >> 0x10);
  local_res10[2] = uVar6 & 0xff;
  bVar3 = (byte)((uint)uVar36 >> 0x18);
  local_res10[3] = (ushort)bVar3;
  uVar1 = *(undefined4 *)((iVar42 + iVar12) * 4 + lVar14);
  in_stack_00000028 = (ushort)uVar1 & 0xff;
  uVar7 = (ushort)((uint)uVar1 >> 8);
  in_stack_0000002a = uVar7 & 0xff;
  uVar8 = (ushort)((uint)uVar1 >> 0x10);
  in_stack_0000002c = uVar8 & 0xff;
  bVar4 = (byte)((uint)uVar1 >> 0x18);
  in_stack_0000002e = (ushort)bVar4;
  if (iVar13 < iVar11) {
    iVar11 = iVar13;
  }
  uVar2 = *(undefined4 *)((int)((iVar11 * uVar18 + iVar15) * 4) + lVar14);
  local_res8 = (ulonglong)
               (CONCAT16((char)((uint)uVar2 >> 0x18),
                         CONCAT24((short)((uint)uVar2 >> 0x10),
                                  CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
               0xff00ff00ff00ff);
  uVar2 = *(undefined4 *)((int)((iVar42 + iVar11 * uVar18) * 4) + lVar14);
  local_res18 = (ulonglong)
                (CONCAT16((char)((uint)uVar2 >> 0x18),
                          CONCAT24((short)((uint)uVar2 >> 0x10),
                                   CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
                0xff00ff00ff00ff);
  if (__isa_available < 2) {
    uVar17 = uVar17 & 0xffff;
    uVar9 = uVar9 & 0xffff;
    lVar14 = 0;
    do {
      iVar11 = ((int)(*(ushort *)((longlong)&local_res18 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14 + -8) * (0xff - uVar9)) / 0xff
               & 0xffffU) * uVar17 +
               ((int)(*(ushort *)((longlong)&stack0x00000028 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14) * (0xff - uVar9)) / 0xff &
               0xffffU) * (0xff - uVar17);
      *(short *)((longlong)param_1.field0_0x0 + lVar14) =
           ((short)(iVar11 / 0xff) + (short)(iVar11 >> 0x1f)) -
           (short)((longlong)iVar11 * 0x80808081 >> 0x3f);
      lVar14 = lVar14 + 2;
    } while (lVar14 < 8);
  }
  else {
    auVar22._8_8_ = 0;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = auVar37._0_8_;
    auVar37 = pmovzxwd(auVar37,local_res8);
    auVar52 = pmovzxwd(unaff_XMM7,auVar22);
    auVar45 = pmovzxwd(ZEXT416((uint)fVar44),auVar28);
    auVar29 = pmovzxwd(auVar28,local_res18);
    auVar29 = pmulld(auVar29,auVar45);
    auVar43._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar45._0_4_;
    auVar43._4_4_ = _UNK_150631f64 - auVar45._4_4_;
    auVar43._8_4_ = _UNK_150631f68 - auVar45._8_4_;
    auVar43._12_4_ = _UNK_150631f6c - auVar45._12_4_;
    auVar37 = pmulld(auVar37,auVar43);
    iVar12 = auVar37._0_4_ + auVar29._0_4_;
    iVar41 = auVar37._4_4_ + auVar29._4_4_;
    auVar38._0_8_ = CONCAT44(iVar41,iVar12);
    auVar38._8_4_ = auVar37._8_4_ + auVar29._8_4_;
    auVar38._12_4_ = auVar37._12_4_ + auVar29._12_4_;
    auVar51._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar52._0_4_;
    auVar51._4_4_ = _UNK_150631f64 - auVar52._4_4_;
    auVar51._8_4_ = _UNK_150631f68 - auVar52._8_4_;
    auVar51._12_4_ = _UNK_150631f6c - auVar52._12_4_;
    auVar29 = pmovzxwd(auVar29,(ulonglong)
                               CONCAT16(bVar4,CONCAT24(uVar8,CONCAT22(uVar7,(ushort)uVar1))) &
                               0xffff00ff00ff00ff);
    auVar37 = pmulld(auVar29,auVar45);
    auVar23._4_4_ = auVar38._8_4_;
    auVar23._0_4_ = auVar38._8_4_;
    auVar23._8_4_ = auVar38._12_4_;
    auVar23._12_4_ = auVar38._12_4_;
    auVar29 = pmuldq(auVar23,___xmm_80808081808080818080808180808081);
    auVar48._8_4_ = iVar41;
    auVar48._0_8_ = auVar38._0_8_;
    auVar48._12_4_ = iVar41;
    auVar47._8_8_ = auVar48._8_8_;
    auVar47._4_4_ = iVar12;
    auVar47._0_4_ = iVar12;
    auVar22 = pmuldq(auVar47,___xmm_80808081808080818080808180808081);
    iVar12 = auVar22._4_4_ + iVar12;
    iVar41 = auVar22._12_4_ + iVar41;
    iVar49 = auVar29._4_4_ + auVar38._8_4_;
    iVar50 = auVar29._12_4_ + auVar38._12_4_;
    auVar29 = pmovzxwd(auVar38,(ulonglong)
                               CONCAT16(bVar3,CONCAT24(uVar6,CONCAT22(uVar5,(ushort)uVar36))) &
                               0xffff00ff00ff00ff);
    auVar29 = pmulld(auVar29,auVar43);
    iVar11 = auVar29._0_4_ + auVar37._0_4_;
    iVar42 = auVar29._4_4_ + auVar37._4_4_;
    auVar31._4_4_ = iVar42;
    auVar31._0_4_ = iVar11;
    iVar13 = auVar29._8_4_ + auVar37._8_4_;
    iVar15 = auVar29._12_4_ + auVar37._12_4_;
    auVar24._4_4_ = iVar13;
    auVar24._0_4_ = iVar13;
    auVar24._8_4_ = iVar15;
    auVar24._12_4_ = iVar15;
    auVar29 = pmuldq(auVar24,___xmm_80808081808080818080808180808081);
    auVar31._8_4_ = iVar42;
    auVar31._12_4_ = iVar42;
    auVar30._8_8_ = auVar31._8_8_;
    auVar30._4_4_ = iVar11;
    auVar30._0_4_ = iVar11;
    auVar37 = pmuldq(auVar30,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar32._0_4_ = iVar11 >> 7;
    auVar32._4_4_ = iVar42 >> 7;
    auVar32._8_4_ = iVar13 >> 7;
    auVar32._12_4_ = iVar15 >> 7;
    auVar25._0_4_ = auVar32._0_4_ - (iVar11 >> 0x1f);
    auVar25._4_4_ = auVar32._4_4_ - (iVar42 >> 0x1f);
    auVar25._8_4_ = auVar32._8_4_ - (iVar13 >> 0x1f);
    auVar25._12_4_ = auVar32._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar25,auVar25,0xd8);
    auVar37 = pshuflw(auVar32,auVar29,0xd8);
    auVar39._4_4_ = auVar37._8_4_;
    auVar39._0_4_ = auVar37._0_4_;
    auVar39._8_4_ = auVar37._4_4_;
    auVar39._12_4_ = auVar37._12_4_;
    auVar26._0_4_ = (iVar12 >> 7) - (iVar12 >> 0x1f);
    auVar26._4_4_ = (iVar41 >> 7) - (iVar41 >> 0x1f);
    auVar26._8_4_ = (iVar49 >> 7) - (iVar49 >> 0x1f);
    auVar26._12_4_ = (iVar50 >> 7) - (iVar50 >> 0x1f);
    auVar29 = pshufhw(auVar26,auVar26,0xd8);
    auVar29 = pshuflw(auVar37,auVar29,0xd8);
    auVar37 = pmovzxwd(auVar45,auVar39);
    auVar40._4_4_ = auVar29._8_4_;
    auVar40._0_4_ = auVar29._0_4_;
    auVar40._8_4_ = auVar29._4_4_;
    auVar40._12_4_ = auVar29._12_4_;
    auVar29 = pmovzxwd(auVar43,auVar40);
    auVar29 = pmulld(auVar29,auVar52);
    auVar37 = pmulld(auVar37,auVar51);
    iVar11 = auVar37._0_4_ + auVar29._0_4_;
    iVar42 = auVar37._4_4_ + auVar29._4_4_;
    auVar34._4_4_ = iVar42;
    auVar34._0_4_ = iVar11;
    iVar13 = auVar37._8_4_ + auVar29._8_4_;
    iVar15 = auVar37._12_4_ + auVar29._12_4_;
    auVar34._8_4_ = iVar42;
    auVar34._12_4_ = iVar42;
    auVar33._8_8_ = auVar34._8_8_;
    auVar33._4_4_ = iVar11;
    auVar33._0_4_ = iVar11;
    auVar52._4_4_ = iVar13;
    auVar52._0_4_ = iVar13;
    auVar52._8_4_ = iVar15;
    auVar52._12_4_ = iVar15;
    auVar29 = pmuldq(auVar52,___xmm_80808081808080818080808180808081);
    auVar37 = pmuldq(auVar33,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar35._0_4_ = iVar11 >> 7;
    auVar35._4_4_ = iVar42 >> 7;
    auVar35._8_4_ = iVar13 >> 7;
    auVar35._12_4_ = iVar15 >> 7;
    auVar27._0_4_ = auVar35._0_4_ - (iVar11 >> 0x1f);
    auVar27._4_4_ = auVar35._4_4_ - (iVar42 >> 0x1f);
    auVar27._8_4_ = auVar35._8_4_ - (iVar13 >> 0x1f);
    auVar27._12_4_ = auVar35._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar27,auVar27,0xd8);
    auVar29 = pshuflw(auVar35,auVar29,0xd8);
    *(ulonglong *)param_1.field0_0x0 = CONCAT44(auVar29._8_4_,auVar29._0_4_);
  }
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab21980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<170>::ProcessPixelImpl'::__l23::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float in_register_00000084;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  int iVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  int iVar49;
  undefined1 auVar47 [16];
  int iVar50;
  undefined1 auVar51 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar52 [16];
  ulonglong local_res8;
  ushort local_res10 [4];
  ulonglong local_res18;
  ushort in_stack_00000028;
  ushort in_stack_0000002a;
  ushort in_stack_0000002c;
  ushort in_stack_0000002e;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  int iVar41;
  undefined1 auVar48 [16];
  
  uVar18 = (uint)param_3 & 0xffff;
  uVar17 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  fVar44 = (float)uVar18 - __real_3f800000;
  fVar20 = (float)uVar17;
  fVar46 = (float)uVar18 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar21 = fVar20 - __real_3f800000;
  if (fVar44 <= fVar46) {
    fVar46 = fVar44;
  }
  fVar20 = fVar20 * in_register_00000084 - __real_3f000000;
  if (fVar46 <= 0.0) {
    fVar46 = 0.0;
  }
  if (fVar21 <= fVar20) {
    fVar20 = fVar21;
  }
  iVar11 = (int)fVar46;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar21 = fVar46;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar46)) {
    auVar29._4_4_ = fVar46;
    auVar29._0_4_ = fVar46;
    auVar29._8_8_ = 0;
    uVar9 = movmskps((int)&stack0x00000000,auVar29);
    fVar21 = (float)(int)(iVar11 - (uVar9 & 1));
  }
  iVar11 = (int)fVar20;
  uVar9 = (uint)((fVar46 - fVar21) * __real_437f0000);
  sVar19 = (short)uVar9;
  uVar36 = CONCAT22(sVar19,sVar19);
  auVar37._0_8_ = CONCAT44(uVar36,uVar36);
  auVar37._8_4_ = uVar36;
  auVar37._12_4_ = uVar36;
  fVar21 = fVar20;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar20)) {
    auVar45._4_4_ = fVar20;
    auVar45._0_4_ = fVar20;
    auVar45._8_8_ = 0;
    uVar10 = movmskps((int)sVar19,auVar45);
    fVar21 = (float)(int)(iVar11 - (uVar10 & 1));
  }
  lVar14 = CONCAT26(in_stack_0000002e,
                    CONCAT24(in_stack_0000002c,CONCAT22(in_stack_0000002a,in_stack_00000028)));
  iVar13 = uVar17 - 1;
  iVar15 = (int)fVar46;
  uVar17 = (uint)((fVar20 - fVar21) * __real_437f0000);
  iVar11 = (int)fVar20 + 1;
  uVar16 = (undefined2)uVar17;
  auVar22._0_4_ = CONCAT22(uVar16,uVar16);
  auVar22._4_4_ = auVar22._0_4_;
  iVar42 = iVar15 + 1;
  if ((int)(uVar18 - 1) < iVar15 + 1) {
    iVar42 = uVar18 - 1;
  }
  iVar12 = uVar18 * (int)fVar20;
  uVar36 = *(undefined4 *)((iVar12 + iVar15) * 4 + lVar14);
  local_res10[0] = (ushort)uVar36 & 0xff;
  uVar5 = (ushort)((uint)uVar36 >> 8);
  local_res10[1] = uVar5 & 0xff;
  uVar6 = (ushort)((uint)uVar36 >> 0x10);
  local_res10[2] = uVar6 & 0xff;
  bVar3 = (byte)((uint)uVar36 >> 0x18);
  local_res10[3] = (ushort)bVar3;
  uVar1 = *(undefined4 *)((iVar42 + iVar12) * 4 + lVar14);
  in_stack_00000028 = (ushort)uVar1 & 0xff;
  uVar7 = (ushort)((uint)uVar1 >> 8);
  in_stack_0000002a = uVar7 & 0xff;
  uVar8 = (ushort)((uint)uVar1 >> 0x10);
  in_stack_0000002c = uVar8 & 0xff;
  bVar4 = (byte)((uint)uVar1 >> 0x18);
  in_stack_0000002e = (ushort)bVar4;
  if (iVar13 < iVar11) {
    iVar11 = iVar13;
  }
  uVar2 = *(undefined4 *)((int)((iVar11 * uVar18 + iVar15) * 4) + lVar14);
  local_res8 = (ulonglong)
               (CONCAT16((char)((uint)uVar2 >> 0x18),
                         CONCAT24((short)((uint)uVar2 >> 0x10),
                                  CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
               0xff00ff00ff00ff);
  uVar2 = *(undefined4 *)((int)((iVar42 + iVar11 * uVar18) * 4) + lVar14);
  local_res18 = (ulonglong)
                (CONCAT16((char)((uint)uVar2 >> 0x18),
                          CONCAT24((short)((uint)uVar2 >> 0x10),
                                   CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
                0xff00ff00ff00ff);
  if (__isa_available < 2) {
    uVar17 = uVar17 & 0xffff;
    uVar9 = uVar9 & 0xffff;
    lVar14 = 0;
    do {
      iVar11 = ((int)(*(ushort *)((longlong)&local_res18 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14 + -8) * (0xff - uVar9)) / 0xff
               & 0xffffU) * uVar17 +
               ((int)(*(ushort *)((longlong)&stack0x00000028 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14) * (0xff - uVar9)) / 0xff &
               0xffffU) * (0xff - uVar17);
      *(short *)((longlong)param_1.field0_0x0 + lVar14) =
           ((short)(iVar11 / 0xff) + (short)(iVar11 >> 0x1f)) -
           (short)((longlong)iVar11 * 0x80808081 >> 0x3f);
      lVar14 = lVar14 + 2;
    } while (lVar14 < 8);
  }
  else {
    auVar22._8_8_ = 0;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = auVar37._0_8_;
    auVar37 = pmovzxwd(auVar37,local_res8);
    auVar52 = pmovzxwd(unaff_XMM7,auVar22);
    auVar45 = pmovzxwd(ZEXT416((uint)fVar44),auVar28);
    auVar29 = pmovzxwd(auVar28,local_res18);
    auVar29 = pmulld(auVar29,auVar45);
    auVar43._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar45._0_4_;
    auVar43._4_4_ = _UNK_150631f64 - auVar45._4_4_;
    auVar43._8_4_ = _UNK_150631f68 - auVar45._8_4_;
    auVar43._12_4_ = _UNK_150631f6c - auVar45._12_4_;
    auVar37 = pmulld(auVar37,auVar43);
    iVar12 = auVar37._0_4_ + auVar29._0_4_;
    iVar41 = auVar37._4_4_ + auVar29._4_4_;
    auVar38._0_8_ = CONCAT44(iVar41,iVar12);
    auVar38._8_4_ = auVar37._8_4_ + auVar29._8_4_;
    auVar38._12_4_ = auVar37._12_4_ + auVar29._12_4_;
    auVar51._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar52._0_4_;
    auVar51._4_4_ = _UNK_150631f64 - auVar52._4_4_;
    auVar51._8_4_ = _UNK_150631f68 - auVar52._8_4_;
    auVar51._12_4_ = _UNK_150631f6c - auVar52._12_4_;
    auVar29 = pmovzxwd(auVar29,(ulonglong)
                               CONCAT16(bVar4,CONCAT24(uVar8,CONCAT22(uVar7,(ushort)uVar1))) &
                               0xffff00ff00ff00ff);
    auVar37 = pmulld(auVar29,auVar45);
    auVar23._4_4_ = auVar38._8_4_;
    auVar23._0_4_ = auVar38._8_4_;
    auVar23._8_4_ = auVar38._12_4_;
    auVar23._12_4_ = auVar38._12_4_;
    auVar29 = pmuldq(auVar23,___xmm_80808081808080818080808180808081);
    auVar48._8_4_ = iVar41;
    auVar48._0_8_ = auVar38._0_8_;
    auVar48._12_4_ = iVar41;
    auVar47._8_8_ = auVar48._8_8_;
    auVar47._4_4_ = iVar12;
    auVar47._0_4_ = iVar12;
    auVar22 = pmuldq(auVar47,___xmm_80808081808080818080808180808081);
    iVar12 = auVar22._4_4_ + iVar12;
    iVar41 = auVar22._12_4_ + iVar41;
    iVar49 = auVar29._4_4_ + auVar38._8_4_;
    iVar50 = auVar29._12_4_ + auVar38._12_4_;
    auVar29 = pmovzxwd(auVar38,(ulonglong)
                               CONCAT16(bVar3,CONCAT24(uVar6,CONCAT22(uVar5,(ushort)uVar36))) &
                               0xffff00ff00ff00ff);
    auVar29 = pmulld(auVar29,auVar43);
    iVar11 = auVar29._0_4_ + auVar37._0_4_;
    iVar42 = auVar29._4_4_ + auVar37._4_4_;
    auVar31._4_4_ = iVar42;
    auVar31._0_4_ = iVar11;
    iVar13 = auVar29._8_4_ + auVar37._8_4_;
    iVar15 = auVar29._12_4_ + auVar37._12_4_;
    auVar24._4_4_ = iVar13;
    auVar24._0_4_ = iVar13;
    auVar24._8_4_ = iVar15;
    auVar24._12_4_ = iVar15;
    auVar29 = pmuldq(auVar24,___xmm_80808081808080818080808180808081);
    auVar31._8_4_ = iVar42;
    auVar31._12_4_ = iVar42;
    auVar30._8_8_ = auVar31._8_8_;
    auVar30._4_4_ = iVar11;
    auVar30._0_4_ = iVar11;
    auVar37 = pmuldq(auVar30,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar32._0_4_ = iVar11 >> 7;
    auVar32._4_4_ = iVar42 >> 7;
    auVar32._8_4_ = iVar13 >> 7;
    auVar32._12_4_ = iVar15 >> 7;
    auVar25._0_4_ = auVar32._0_4_ - (iVar11 >> 0x1f);
    auVar25._4_4_ = auVar32._4_4_ - (iVar42 >> 0x1f);
    auVar25._8_4_ = auVar32._8_4_ - (iVar13 >> 0x1f);
    auVar25._12_4_ = auVar32._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar25,auVar25,0xd8);
    auVar37 = pshuflw(auVar32,auVar29,0xd8);
    auVar39._4_4_ = auVar37._8_4_;
    auVar39._0_4_ = auVar37._0_4_;
    auVar39._8_4_ = auVar37._4_4_;
    auVar39._12_4_ = auVar37._12_4_;
    auVar26._0_4_ = (iVar12 >> 7) - (iVar12 >> 0x1f);
    auVar26._4_4_ = (iVar41 >> 7) - (iVar41 >> 0x1f);
    auVar26._8_4_ = (iVar49 >> 7) - (iVar49 >> 0x1f);
    auVar26._12_4_ = (iVar50 >> 7) - (iVar50 >> 0x1f);
    auVar29 = pshufhw(auVar26,auVar26,0xd8);
    auVar29 = pshuflw(auVar37,auVar29,0xd8);
    auVar37 = pmovzxwd(auVar45,auVar39);
    auVar40._4_4_ = auVar29._8_4_;
    auVar40._0_4_ = auVar29._0_4_;
    auVar40._8_4_ = auVar29._4_4_;
    auVar40._12_4_ = auVar29._12_4_;
    auVar29 = pmovzxwd(auVar43,auVar40);
    auVar29 = pmulld(auVar29,auVar52);
    auVar37 = pmulld(auVar37,auVar51);
    iVar11 = auVar37._0_4_ + auVar29._0_4_;
    iVar42 = auVar37._4_4_ + auVar29._4_4_;
    auVar34._4_4_ = iVar42;
    auVar34._0_4_ = iVar11;
    iVar13 = auVar37._8_4_ + auVar29._8_4_;
    iVar15 = auVar37._12_4_ + auVar29._12_4_;
    auVar34._8_4_ = iVar42;
    auVar34._12_4_ = iVar42;
    auVar33._8_8_ = auVar34._8_8_;
    auVar33._4_4_ = iVar11;
    auVar33._0_4_ = iVar11;
    auVar52._4_4_ = iVar13;
    auVar52._0_4_ = iVar13;
    auVar52._8_4_ = iVar15;
    auVar52._12_4_ = iVar15;
    auVar29 = pmuldq(auVar52,___xmm_80808081808080818080808180808081);
    auVar37 = pmuldq(auVar33,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar35._0_4_ = iVar11 >> 7;
    auVar35._4_4_ = iVar42 >> 7;
    auVar35._8_4_ = iVar13 >> 7;
    auVar35._12_4_ = iVar15 >> 7;
    auVar27._0_4_ = auVar35._0_4_ - (iVar11 >> 0x1f);
    auVar27._4_4_ = auVar35._4_4_ - (iVar42 >> 0x1f);
    auVar27._8_4_ = auVar35._8_4_ - (iVar13 >> 0x1f);
    auVar27._12_4_ = auVar35._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar27,auVar27,0xd8);
    auVar29 = pshuflw(auVar35,auVar29,0xd8);
    *(ulonglong *)param_1.field0_0x0 = CONCAT44(auVar29._8_4_,auVar29._0_4_);
  }
  return (FPixelData)param_1.field0_0x0;
}

// operator() @ 14ab21e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPixelData __thiscall
`UE::Mutable::Private::Private::TProjectedPixelProcessor<202>::ProcessPixelImpl'::__l23::<lambda_4>
::operator()(void *this,TVector2<float> param_1,TIntVector2<unsigned_short> param_2,uchar *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float in_register_00000084;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  int iVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  int iVar49;
  undefined1 auVar47 [16];
  int iVar50;
  undefined1 auVar51 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar52 [16];
  ulonglong local_res8;
  ushort local_res10 [4];
  ulonglong local_res18;
  ushort in_stack_00000028;
  ushort in_stack_0000002a;
  ushort in_stack_0000002c;
  ushort in_stack_0000002e;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  int iVar41;
  undefined1 auVar48 [16];
  
  uVar18 = (uint)param_3 & 0xffff;
  uVar17 = (uint)((ulonglong)param_3 >> 0x10) & 0xffff;
  fVar44 = (float)uVar18 - __real_3f800000;
  fVar20 = (float)uVar17;
  fVar46 = (float)uVar18 * (float)param_2.field0_0x0 - __real_3f000000;
  fVar21 = fVar20 - __real_3f800000;
  if (fVar44 <= fVar46) {
    fVar46 = fVar44;
  }
  fVar20 = fVar20 * in_register_00000084 - __real_3f000000;
  if (fVar46 <= 0.0) {
    fVar46 = 0.0;
  }
  if (fVar21 <= fVar20) {
    fVar20 = fVar21;
  }
  iVar11 = (int)fVar46;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar21 = fVar46;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar46)) {
    auVar29._4_4_ = fVar46;
    auVar29._0_4_ = fVar46;
    auVar29._8_8_ = 0;
    uVar9 = movmskps((int)&stack0x00000000,auVar29);
    fVar21 = (float)(int)(iVar11 - (uVar9 & 1));
  }
  iVar11 = (int)fVar20;
  uVar9 = (uint)((fVar46 - fVar21) * __real_437f0000);
  sVar19 = (short)uVar9;
  uVar36 = CONCAT22(sVar19,sVar19);
  auVar37._0_8_ = CONCAT44(uVar36,uVar36);
  auVar37._8_4_ = uVar36;
  auVar37._12_4_ = uVar36;
  fVar21 = fVar20;
  if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar20)) {
    auVar45._4_4_ = fVar20;
    auVar45._0_4_ = fVar20;
    auVar45._8_8_ = 0;
    uVar10 = movmskps((int)sVar19,auVar45);
    fVar21 = (float)(int)(iVar11 - (uVar10 & 1));
  }
  lVar14 = CONCAT26(in_stack_0000002e,
                    CONCAT24(in_stack_0000002c,CONCAT22(in_stack_0000002a,in_stack_00000028)));
  iVar13 = uVar17 - 1;
  iVar15 = (int)fVar46;
  uVar17 = (uint)((fVar20 - fVar21) * __real_437f0000);
  iVar11 = (int)fVar20 + 1;
  uVar16 = (undefined2)uVar17;
  auVar22._0_4_ = CONCAT22(uVar16,uVar16);
  auVar22._4_4_ = auVar22._0_4_;
  iVar42 = iVar15 + 1;
  if ((int)(uVar18 - 1) < iVar15 + 1) {
    iVar42 = uVar18 - 1;
  }
  iVar12 = uVar18 * (int)fVar20;
  uVar36 = *(undefined4 *)((iVar12 + iVar15) * 4 + lVar14);
  local_res10[0] = (ushort)uVar36 & 0xff;
  uVar5 = (ushort)((uint)uVar36 >> 8);
  local_res10[1] = uVar5 & 0xff;
  uVar6 = (ushort)((uint)uVar36 >> 0x10);
  local_res10[2] = uVar6 & 0xff;
  bVar3 = (byte)((uint)uVar36 >> 0x18);
  local_res10[3] = (ushort)bVar3;
  uVar1 = *(undefined4 *)((iVar42 + iVar12) * 4 + lVar14);
  in_stack_00000028 = (ushort)uVar1 & 0xff;
  uVar7 = (ushort)((uint)uVar1 >> 8);
  in_stack_0000002a = uVar7 & 0xff;
  uVar8 = (ushort)((uint)uVar1 >> 0x10);
  in_stack_0000002c = uVar8 & 0xff;
  bVar4 = (byte)((uint)uVar1 >> 0x18);
  in_stack_0000002e = (ushort)bVar4;
  if (iVar13 < iVar11) {
    iVar11 = iVar13;
  }
  uVar2 = *(undefined4 *)((int)((iVar11 * uVar18 + iVar15) * 4) + lVar14);
  local_res8 = (ulonglong)
               (CONCAT16((char)((uint)uVar2 >> 0x18),
                         CONCAT24((short)((uint)uVar2 >> 0x10),
                                  CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
               0xff00ff00ff00ff);
  uVar2 = *(undefined4 *)((int)((iVar42 + iVar11 * uVar18) * 4) + lVar14);
  local_res18 = (ulonglong)
                (CONCAT16((char)((uint)uVar2 >> 0x18),
                          CONCAT24((short)((uint)uVar2 >> 0x10),
                                   CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
                0xff00ff00ff00ff);
  if (__isa_available < 2) {
    uVar17 = uVar17 & 0xffff;
    uVar9 = uVar9 & 0xffff;
    lVar14 = 0;
    do {
      iVar11 = ((int)(*(ushort *)((longlong)&local_res18 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14 + -8) * (0xff - uVar9)) / 0xff
               & 0xffffU) * uVar17 +
               ((int)(*(ushort *)((longlong)&stack0x00000028 + lVar14) * uVar9 +
                     (uint)*(ushort *)((longlong)local_res10 + lVar14) * (0xff - uVar9)) / 0xff &
               0xffffU) * (0xff - uVar17);
      *(short *)((longlong)param_1.field0_0x0 + lVar14) =
           ((short)(iVar11 / 0xff) + (short)(iVar11 >> 0x1f)) -
           (short)((longlong)iVar11 * 0x80808081 >> 0x3f);
      lVar14 = lVar14 + 2;
    } while (lVar14 < 8);
  }
  else {
    auVar22._8_8_ = 0;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = auVar37._0_8_;
    auVar37 = pmovzxwd(auVar37,local_res8);
    auVar52 = pmovzxwd(unaff_XMM7,auVar22);
    auVar45 = pmovzxwd(ZEXT416((uint)fVar44),auVar28);
    auVar29 = pmovzxwd(auVar28,local_res18);
    auVar29 = pmulld(auVar29,auVar45);
    auVar43._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar45._0_4_;
    auVar43._4_4_ = _UNK_150631f64 - auVar45._4_4_;
    auVar43._8_4_ = _UNK_150631f68 - auVar45._8_4_;
    auVar43._12_4_ = _UNK_150631f6c - auVar45._12_4_;
    auVar37 = pmulld(auVar37,auVar43);
    iVar12 = auVar37._0_4_ + auVar29._0_4_;
    iVar41 = auVar37._4_4_ + auVar29._4_4_;
    auVar38._0_8_ = CONCAT44(iVar41,iVar12);
    auVar38._8_4_ = auVar37._8_4_ + auVar29._8_4_;
    auVar38._12_4_ = auVar37._12_4_ + auVar29._12_4_;
    auVar51._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar52._0_4_;
    auVar51._4_4_ = _UNK_150631f64 - auVar52._4_4_;
    auVar51._8_4_ = _UNK_150631f68 - auVar52._8_4_;
    auVar51._12_4_ = _UNK_150631f6c - auVar52._12_4_;
    auVar29 = pmovzxwd(auVar29,(ulonglong)
                               CONCAT16(bVar4,CONCAT24(uVar8,CONCAT22(uVar7,(ushort)uVar1))) &
                               0xffff00ff00ff00ff);
    auVar37 = pmulld(auVar29,auVar45);
    auVar23._4_4_ = auVar38._8_4_;
    auVar23._0_4_ = auVar38._8_4_;
    auVar23._8_4_ = auVar38._12_4_;
    auVar23._12_4_ = auVar38._12_4_;
    auVar29 = pmuldq(auVar23,___xmm_80808081808080818080808180808081);
    auVar48._8_4_ = iVar41;
    auVar48._0_8_ = auVar38._0_8_;
    auVar48._12_4_ = iVar41;
    auVar47._8_8_ = auVar48._8_8_;
    auVar47._4_4_ = iVar12;
    auVar47._0_4_ = iVar12;
    auVar22 = pmuldq(auVar47,___xmm_80808081808080818080808180808081);
    iVar12 = auVar22._4_4_ + iVar12;
    iVar41 = auVar22._12_4_ + iVar41;
    iVar49 = auVar29._4_4_ + auVar38._8_4_;
    iVar50 = auVar29._12_4_ + auVar38._12_4_;
    auVar29 = pmovzxwd(auVar38,(ulonglong)
                               CONCAT16(bVar3,CONCAT24(uVar6,CONCAT22(uVar5,(ushort)uVar36))) &
                               0xffff00ff00ff00ff);
    auVar29 = pmulld(auVar29,auVar43);
    iVar11 = auVar29._0_4_ + auVar37._0_4_;
    iVar42 = auVar29._4_4_ + auVar37._4_4_;
    auVar31._4_4_ = iVar42;
    auVar31._0_4_ = iVar11;
    iVar13 = auVar29._8_4_ + auVar37._8_4_;
    iVar15 = auVar29._12_4_ + auVar37._12_4_;
    auVar24._4_4_ = iVar13;
    auVar24._0_4_ = iVar13;
    auVar24._8_4_ = iVar15;
    auVar24._12_4_ = iVar15;
    auVar29 = pmuldq(auVar24,___xmm_80808081808080818080808180808081);
    auVar31._8_4_ = iVar42;
    auVar31._12_4_ = iVar42;
    auVar30._8_8_ = auVar31._8_8_;
    auVar30._4_4_ = iVar11;
    auVar30._0_4_ = iVar11;
    auVar37 = pmuldq(auVar30,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar32._0_4_ = iVar11 >> 7;
    auVar32._4_4_ = iVar42 >> 7;
    auVar32._8_4_ = iVar13 >> 7;
    auVar32._12_4_ = iVar15 >> 7;
    auVar25._0_4_ = auVar32._0_4_ - (iVar11 >> 0x1f);
    auVar25._4_4_ = auVar32._4_4_ - (iVar42 >> 0x1f);
    auVar25._8_4_ = auVar32._8_4_ - (iVar13 >> 0x1f);
    auVar25._12_4_ = auVar32._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar25,auVar25,0xd8);
    auVar37 = pshuflw(auVar32,auVar29,0xd8);
    auVar39._4_4_ = auVar37._8_4_;
    auVar39._0_4_ = auVar37._0_4_;
    auVar39._8_4_ = auVar37._4_4_;
    auVar39._12_4_ = auVar37._12_4_;
    auVar26._0_4_ = (iVar12 >> 7) - (iVar12 >> 0x1f);
    auVar26._4_4_ = (iVar41 >> 7) - (iVar41 >> 0x1f);
    auVar26._8_4_ = (iVar49 >> 7) - (iVar49 >> 0x1f);
    auVar26._12_4_ = (iVar50 >> 7) - (iVar50 >> 0x1f);
    auVar29 = pshufhw(auVar26,auVar26,0xd8);
    auVar29 = pshuflw(auVar37,auVar29,0xd8);
    auVar37 = pmovzxwd(auVar45,auVar39);
    auVar40._4_4_ = auVar29._8_4_;
    auVar40._0_4_ = auVar29._0_4_;
    auVar40._8_4_ = auVar29._4_4_;
    auVar40._12_4_ = auVar29._12_4_;
    auVar29 = pmovzxwd(auVar43,auVar40);
    auVar29 = pmulld(auVar29,auVar52);
    auVar37 = pmulld(auVar37,auVar51);
    iVar11 = auVar37._0_4_ + auVar29._0_4_;
    iVar42 = auVar37._4_4_ + auVar29._4_4_;
    auVar34._4_4_ = iVar42;
    auVar34._0_4_ = iVar11;
    iVar13 = auVar37._8_4_ + auVar29._8_4_;
    iVar15 = auVar37._12_4_ + auVar29._12_4_;
    auVar34._8_4_ = iVar42;
    auVar34._12_4_ = iVar42;
    auVar33._8_8_ = auVar34._8_8_;
    auVar33._4_4_ = iVar11;
    auVar33._0_4_ = iVar11;
    auVar52._4_4_ = iVar13;
    auVar52._0_4_ = iVar13;
    auVar52._8_4_ = iVar15;
    auVar52._12_4_ = iVar15;
    auVar29 = pmuldq(auVar52,___xmm_80808081808080818080808180808081);
    auVar37 = pmuldq(auVar33,___xmm_80808081808080818080808180808081);
    iVar11 = auVar37._4_4_ + iVar11;
    iVar42 = auVar37._12_4_ + iVar42;
    iVar13 = auVar29._4_4_ + iVar13;
    iVar15 = auVar29._12_4_ + iVar15;
    auVar35._0_4_ = iVar11 >> 7;
    auVar35._4_4_ = iVar42 >> 7;
    auVar35._8_4_ = iVar13 >> 7;
    auVar35._12_4_ = iVar15 >> 7;
    auVar27._0_4_ = auVar35._0_4_ - (iVar11 >> 0x1f);
    auVar27._4_4_ = auVar35._4_4_ - (iVar42 >> 0x1f);
    auVar27._8_4_ = auVar35._8_4_ - (iVar13 >> 0x1f);
    auVar27._12_4_ = auVar35._12_4_ - (iVar15 >> 0x1f);
    auVar29 = pshufhw(auVar27,auVar27,0xd8);
    auVar29 = pshuflw(auVar35,auVar29,0xd8);
    *(ulonglong *)param_1.field0_0x0 = CONCAT44(auVar29._8_4_,auVar29._0_4_);
  }
  return (FPixelData)param_1.field0_0x0;
}

// MakeContext @ 14ab32f90

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<276>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  uint uVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->Source0Data = puVar6;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < (float)((uint)param_8 & uVar2)) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar3);
  if ((pFVar7->BytesPerBlock != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab33130

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<278>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  uint uVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->Source0Data = puVar6;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < (float)((uint)param_8 & uVar2)) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar3);
  if ((pFVar7->BytesPerBlock != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab332d0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<280>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar4 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar4;
  uVar4 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar4;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar4 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar6;
  iVar5 = FImage::GetLODCount(param_1);
  if (iVar5 < 2) {
    puVar6 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar6 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar6;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar4 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar5) {
    uVar4 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar4;
  uVar4 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar5) {
    uVar4 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar4;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  fVar9 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < fVar9) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar2 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar2);
  if ((pFVar7->BytesPerBlock != 3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab334e0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<282>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar4 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar4;
  uVar4 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar4;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar4 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar6;
  iVar5 = FImage::GetLODCount(param_1);
  if (iVar5 < 2) {
    puVar6 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar6 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar6;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar4 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar5) {
    uVar4 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar4;
  uVar4 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar5) {
    uVar4 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar4;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  fVar9 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < fVar9) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar2 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar2);
  if ((pFVar7->BytesPerBlock != 3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab336f0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<296>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab338b0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<298>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab33a70

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<328>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab33c30

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<330>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab33df0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<532>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  uint uVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->Source0Data = puVar6;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < (float)((uint)param_8 & uVar2)) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar3);
  if ((pFVar7->BytesPerBlock != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab33f90

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<534>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  uint uVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->Source0Data = puVar6;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < (float)((uint)param_8 & uVar2)) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar3);
  if ((pFVar7->BytesPerBlock != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab34130

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<536>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar4 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar4;
  uVar4 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar4;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar4 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar6;
  iVar5 = FImage::GetLODCount(param_1);
  if (iVar5 < 2) {
    puVar6 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar6 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar6;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar4 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar5) {
    uVar4 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar4;
  uVar4 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar5) {
    uVar4 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar4;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  fVar9 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < fVar9) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar2 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar2);
  if ((pFVar7->BytesPerBlock != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab34340

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<538>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar4 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar4;
  uVar4 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar4;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar4 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar6;
  iVar5 = FImage::GetLODCount(param_1);
  if (iVar5 < 2) {
    puVar6 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar6 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar6;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar4 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar5) {
    uVar4 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar4;
  uVar4 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar5) {
    uVar4 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar4;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  fVar9 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < fVar9) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar2 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar2);
  if ((pFVar7->BytesPerBlock != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab34550

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<552>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab34710

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<554>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab348d0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<584>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab34a90

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<586>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab34c50

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1176>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar4 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar4;
  uVar4 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar4;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar4 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar6;
  iVar5 = FImage::GetLODCount(param_1);
  if (iVar5 < 2) {
    puVar6 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar6 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar6;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar4 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar5) {
    uVar4 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar4;
  uVar4 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar5) {
    uVar4 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar4;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  fVar9 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < fVar9) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar2 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar2);
  if ((pFVar7->BytesPerBlock != 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab34e60

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1178>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar4 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar4;
  uVar4 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar4;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar4 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar6;
  iVar5 = FImage::GetLODCount(param_1);
  if (iVar5 < 2) {
    puVar6 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar6 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar6;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar4 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar5) {
    uVar4 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar4;
  uVar4 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar5) {
    uVar4 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar4;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  fVar9 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < fVar9) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar2 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar2);
  if ((pFVar7->BytesPerBlock != 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab35070

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1192>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab35230

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1194>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab353f0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1224>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab355b0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1226>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab35770

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1304>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar4 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar4;
  uVar4 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar4;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar4 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar6;
  iVar5 = FImage::GetLODCount(param_1);
  if (iVar5 < 2) {
    puVar6 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar6 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar6;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar4 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar5) {
    uVar4 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar4;
  uVar4 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar5) {
    uVar4 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar4;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  fVar9 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < fVar9) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar2 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar2);
  if ((pFVar7->BytesPerBlock != 3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab35980

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1320>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab35b40

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1352>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab35d00

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1560>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar4 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar4;
  uVar4 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar4;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar4 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar6;
  iVar5 = FImage::GetLODCount(param_1);
  if (iVar5 < 2) {
    puVar6 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar6 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar6;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar4 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar5) {
    uVar4 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar4;
  uVar4 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar5) {
    uVar4 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar4;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  fVar9 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < fVar9) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar2 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar2);
  if ((pFVar7->BytesPerBlock != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab35f10

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1562>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar4 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar4;
  uVar4 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar4;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar4 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar6;
  iVar5 = FImage::GetLODCount(param_1);
  if (iVar5 < 2) {
    puVar6 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar6 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar6;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar4 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar5) {
    uVar4 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar4;
  uVar4 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar5) {
    uVar4 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar4;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  fVar9 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < fVar9) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar2 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar2);
  if ((pFVar7->BytesPerBlock != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab36120

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1576>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab362e0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1578>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab364a0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1608>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab36660

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1610>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab36820

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<148>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  uint uVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->Source0Data = puVar6;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < (float)((uint)param_8 & uVar2)) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar3);
  if ((pFVar7->BytesPerBlock != 4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab369c0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<152>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar4 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar4;
  uVar4 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar4;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar4 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar6;
  iVar5 = FImage::GetLODCount(param_1);
  if (iVar5 < 2) {
    puVar6 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar6 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar6;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar4 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar5) {
    uVar4 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar4;
  uVar4 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar5) {
    uVar4 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar4;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  fVar9 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < fVar9) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar2 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar2);
  if ((pFVar7->BytesPerBlock != 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab36bd0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<154>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  EImageFormat EVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uchar *puVar6;
  FImageFormatData *pFVar7;
  FProjectedPixelProcessorContext *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar6 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar4 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar4;
  uVar4 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar4;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar4 != 0)) {
    puVar6 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar6;
  iVar5 = FImage::GetLODCount(param_1);
  if (iVar5 < 2) {
    puVar6 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar6 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar6;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar4 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar5) {
    uVar4 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar4;
  uVar4 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar5) {
    uVar4 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar4;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  fVar9 = cosf(param_7);
  __return_storage_ptr__->FadeEndCos = fVar9;
  fVar10 = cosf(param_6);
  fVar11 = __real_38d1b717;
  if (__real_38d1b717 < (float)((uint)(fVar10 - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = fVar10 - fVar9;
  }
  fVar9 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->OneOverFadeRangeTimes255 = __real_437f0000 / fVar11;
  fVar11 = __real_461c4000;
  if (__real_322bcc77 < fVar9) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar2 = FImage::GetFormat(param_1);
  pFVar7 = GetImageFormatData(EVar2);
  if ((pFVar7->BytesPerBlock != 4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar8;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab36de0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<168>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab36fa0

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<170>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab37160

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<200>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// MakeContext @ 14ab37320

FProjectedPixelProcessorContext * __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<202>::MakeContext
          (FProjectedPixelProcessorContext *__return_storage_ptr__,FImage *param_1,uchar *param_2,
          uchar *param_3,bool param_4,bool param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  code *pcVar1;
  float fVar2;
  EImageFormat EVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uchar *puVar7;
  FImageFormatData *pFVar8;
  FProjectedPixelProcessorContext *pFVar9;
  float fVar10;
  float fVar11;
  ushort local_res8 [2];
  ushort local_resc;
  
  puVar7 = (uchar *)0x0;
  __return_storage_ptr__->TargetData = (uchar *)0x0;
  __return_storage_ptr__->Source0Data = (uchar *)0x0;
  __return_storage_ptr__->Source0SizeX = 0;
  __return_storage_ptr__->Source0SizeY = 0;
  __return_storage_ptr__->Source1SizeX = 0;
  __return_storage_ptr__->Source1SizeY = 0;
  __return_storage_ptr__->Source1Data = (uchar *)0x0;
  __return_storage_ptr__->MaskData = (uchar *)0x0;
  __return_storage_ptr__->FadeEndCos = 0.0;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 0.0;
  __return_storage_ptr__->OneOverProjectionAngle = 0.0;
  __return_storage_ptr__->MipInterpolationFactor = 0.0;
  __return_storage_ptr__->RGBFadingEnabledMask = 0;
  __return_storage_ptr__->AlphaFadingEnabledMask = 0;
  uVar5 = FImage::GetSizeX(param_1);
  __return_storage_ptr__->Source0SizeX = uVar5;
  uVar5 = FImage::GetSizeY(param_1);
  __return_storage_ptr__->Source0SizeY = uVar5;
  if ((__return_storage_ptr__->Source0SizeX != 0) && (uVar5 != 0)) {
    puVar7 = FImage::GetLODData(param_1,0);
  }
  __return_storage_ptr__->Source0Data = puVar7;
  iVar6 = FImage::GetLODCount(param_1);
  if (iVar6 < 2) {
    puVar7 = __return_storage_ptr__->Source0Data;
  }
  else {
    puVar7 = FImage::GetMipData(param_1,1);
  }
  __return_storage_ptr__->Source1Data = puVar7;
  FImage::CalculateMipSize(param_1,(int)local_res8);
  uVar5 = __return_storage_ptr__->Source0SizeX;
  if (1 < iVar6) {
    uVar5 = local_res8[0];
  }
  __return_storage_ptr__->Source1SizeX = uVar5;
  uVar5 = __return_storage_ptr__->Source0SizeY;
  if (1 < iVar6) {
    uVar5 = local_resc;
  }
  __return_storage_ptr__->Source1SizeY = uVar5;
  if ((__return_storage_ptr__->Source0Data == (uchar *)0x0) ||
     (__return_storage_ptr__->Source1Data == (uchar *)0x0)) {
    __return_storage_ptr__->Source0Data = (uchar *)0x0;
    __return_storage_ptr__->Source1Data = (uchar *)0x0;
  }
  __return_storage_ptr__->MipInterpolationFactor = param_9;
  __return_storage_ptr__->RGBFadingEnabledMask = (param_4 ^ 1) - 1;
  fVar10 = (float)((uint)param_8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  __return_storage_ptr__->FadeEndCos = 0.0;
  fVar2 = __real_322bcc77;
  __return_storage_ptr__->AlphaFadingEnabledMask = (param_5 ^ 1) - 1;
  __return_storage_ptr__->OneOverFadeRangeTimes255 = 255.0;
  fVar11 = __real_461c4000;
  if (fVar2 < fVar10) {
    fVar11 = __real_3f800000 / param_8;
  }
  __return_storage_ptr__->OneOverProjectionAngle = fVar11;
  __return_storage_ptr__->TargetData = param_2;
  __return_storage_ptr__->MaskData = param_3;
  EVar3 = FImage::GetFormat(param_1);
  pFVar8 = GetImageFormatData(EVar3);
  if ((pFVar8->BytesPerBlock != 4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetImageFormatData(Source->GetFormat()).BytesPerBlock == PIXEL_SIZE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\OpImageProject.cpp"
                         ,0xee,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FProjectedPixelProcessorContext *)(*pcVar1)();
    return pFVar9;
  }
  return __return_storage_ptr__;
}

// ProcessPixelImpl @ 14ab49ce0

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<276>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  uchar *puVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  ushort uVar10;
  int iVar11;
  float fVar12;
  
  puVar5 = param_1->Source0Data;
  if (puVar5 != (uchar *)0x0) {
    fVar1 = param_3[3];
    fVar12 = (fVar1 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    uVar7 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (__real_437f0000 <= fVar12) {
      fVar12 = __real_437f0000;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    uVar10 = (ushort)(int)fVar12;
    if (uVar7 < (ushort)(int)fVar12) {
      uVar10 = uVar7;
    }
    if (uVar10 != 0) {
      fVar12 = param_3[1];
      fVar2 = *param_3;
      if (fVar2 < __real_3f800000 && (0.0 <= fVar2 && (0.0 <= fVar12 && fVar12 < __real_3f800000)))
      {
        lVar9 = (longlong)
                (int)((((int)ROUND((fVar12 + fVar12) * (float)param_1->Source0SizeY -
                                   __real_3f000000) >> 1) * (uint)param_1->Source0SizeX +
                      ((int)ROUND((fVar2 + fVar2) * (float)param_1->Source0SizeX - __real_3f000000)
                      >> 1)) * 3);
        bVar3 = puVar5[lVar9 + 1];
        bVar4 = puVar5[lVar9 + 2];
        uVar8 = (uint)(short)param_1->RGBFadingEnabledMask;
        uVar6 = 0;
        if (param_1->FadeEndCos <= fVar1 && fVar1 != param_1->FadeEndCos) {
          uVar6 = 0xff;
        }
        iVar11 = (uVar10 & uVar8) + (uVar6 & ~uVar8);
        *param_2 = (uchar)(((uint)puVar5[lVar9] * iVar11) / 0xff);
        param_2[1] = (uchar)(((CONCAT12(bVar4,(ushort)bVar3) & 0xffff) * iVar11) / 0xff);
        param_2[2] = (uchar)(((uint)bVar4 * iVar11) / 0xff);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab49ec0

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<278>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  uchar *puVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  ushort uVar10;
  int iVar11;
  float fVar12;
  
  puVar4 = param_1->Source0Data;
  if (puVar4 != (uchar *)0x0) {
    uVar6 = 0;
    fVar1 = param_3[3];
    fVar12 = (fVar1 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    uVar7 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (__real_437f0000 <= fVar12) {
      fVar12 = __real_437f0000;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    uVar10 = (ushort)(int)fVar12;
    if (uVar7 < (ushort)(int)fVar12) {
      uVar10 = uVar7;
    }
    if (param_1->FadeEndCos <= fVar1 && fVar1 != param_1->FadeEndCos) {
      uVar6 = 0xff;
    }
    if (uVar10 != 0) {
      if ((uVar6 != 0) && (param_1->MaskData != (uchar *)0x0)) {
        uVar6 = (ushort)param_1->MaskData[((longlong)param_2 - (longlong)param_1->TargetData) / 3];
      }
      uVar5 = ((uint)uVar10 * (uint)uVar6) / 0xff;
      if ((short)uVar5 != 0) {
        fVar1 = param_3[1];
        fVar12 = *param_3;
        if (fVar12 < __real_3f800000 && (0.0 <= fVar12 && (0.0 <= fVar1 && fVar1 < __real_3f800000))
           ) {
          lVar9 = (longlong)
                  (int)((((int)ROUND((fVar1 + fVar1) * (float)param_1->Source0SizeY -
                                     __real_3f000000) >> 1) * (uint)param_1->Source0SizeX +
                        ((int)ROUND((fVar12 + fVar12) * (float)param_1->Source0SizeX -
                                    __real_3f000000) >> 1)) * 3);
          bVar2 = puVar4[lVar9 + 1];
          bVar3 = puVar4[lVar9 + 2];
          uVar8 = (uint)(short)param_1->RGBFadingEnabledMask;
          iVar11 = (uVar5 & 0xffff & uVar8) + (~uVar8 & (uint)uVar6);
          *param_2 = (uchar)(((uint)puVar4[lVar9] * iVar11) / 0xff);
          param_2[1] = (uchar)(((CONCAT12(bVar3,(ushort)bVar2) & 0xffff) * iVar11) / 0xff);
          param_2[2] = (uchar)(((uint)bVar3 * iVar11) / 0xff);
        }
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4a100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<280>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  TIntVector2<unsigned_short> TVar5;
  uint uVar8;
  FPixelData FVar6;
  ushort uVar7;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  float fVar15;
  undefined1 auStack_a8 [32];
  uchar *local_88;
  undefined1 local_78 [8];
  ushort local_70;
  ushort uStack_6e;
  ushort uStack_6c;
  undefined2 uStack_6a;
  undefined1 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = param_1->Source0Data;
  if (local_88 != (uchar *)0x0) {
    fVar1 = param_3[3];
    fVar2 = param_1->FadeEndCos;
    fVar15 = (fVar1 - fVar2) * param_1->OneOverFadeRangeTimes255;
    uVar7 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (__real_437f0000 <= fVar15) {
      fVar15 = __real_437f0000;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    uVar14 = (ushort)(int)fVar15;
    if (uVar7 < (ushort)(int)fVar15) {
      uVar14 = uVar7;
    }
    if (uVar14 != 0) {
      fVar15 = param_3[1];
      fVar3 = *param_3;
      local_70 = SUB42(fVar3,0);
      uStack_6e = (ushort)((uint)fVar3 >> 0x10);
      uStack_6c = SUB42(fVar15,0);
      uStack_6a = (undefined2)((uint)fVar15 >> 0x10);
      if (fVar3 < __real_3f800000 && (0.0 <= fVar3 && (0.0 <= fVar15 && fVar15 < __real_3f800000)))
      {
        local_68 = local_78;
        uVar10._0_2_ = param_1->Source0SizeX;
        uVar10._2_2_ = param_1->Source0SizeY;
        FVar6 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<280>::ProcessPixelImpl'::
                __l20::<lambda_4>::operator()
                          (&local_68,(TVector2<float>)&local_60,
                           (TIntVector2<unsigned_short>)SUB64(*(undefined6 *)param_3,0),
                           (uchar *)(ulonglong)uVar10);
        TVar5.field0_0x0._s_0.Y = uStack_6e;
        TVar5.field0_0x0._s_0.X = local_70;
        uVar4 = *(undefined8 *)FVar6;
        uVar8._0_2_ = param_1->Source1SizeX;
        uVar8._2_2_ = param_1->Source1SizeY;
        local_88 = param_1->Source1Data;
        local_60 = uVar4;
        `UE::Mutable::Private::Private::TProjectedPixelProcessor<280>::ProcessPixelImpl'::__l20::
        <lambda_4>::operator()(&local_68,(TVector2<float>)&local_70,TVar5,(uchar *)(ulonglong)uVar8)
        ;
        uVar8 = (uint)(short)param_1->RGBFadingEnabledMask;
        uVar11 = (int)(param_1->MipInterpolationFactor * __real_437f0000) & 0xffff;
        iVar12 = 0xff - uVar11;
        uVar10 = 0;
        if (fVar2 < fVar1) {
          uVar10 = 0xff;
        }
        iVar13 = (~uVar8 & uVar10) + (uVar14 & uVar8);
        iVar9 = ((int)(local_70 * uVar11 + ((uint)uVar4 & 0xffff) * iVar12) / 0xff & 0xffffU) *
                iVar13;
        *param_2 = ((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                   (char)((longlong)iVar9 * 0x80808081 >> 0x3f);
        iVar9 = ((int)(uStack_6e * uVar11 + (uint)local_60._2_2_ * iVar12) / 0xff & 0xffffU) *
                iVar13;
        param_2[1] = ((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                     (char)((longlong)iVar9 * 0x80808081 >> 0x3f);
        iVar13 = ((int)(uStack_6c * uVar11 + (uint)local_60._4_2_ * iVar12) / 0xff & 0xffffU) *
                 iVar13;
        param_2[2] = ((char)(iVar13 / 0xff) + (char)(iVar13 >> 0x1f)) -
                     (char)((longlong)iVar13 * 0x80808081 >> 0x3f);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4a3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<282>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  TIntVector2<unsigned_short> TVar3;
  uint uVar4;
  uint uVar8;
  ushort uVar5;
  FPixelData FVar6;
  ushort uVar7;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_88 [32];
  uchar *local_68;
  undefined1 local_58 [8];
  ushort local_50;
  ushort uStack_4e;
  ushort uStack_4c;
  undefined2 uStack_4a;
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = param_1->Source0Data;
  if (local_68 != (uchar *)0x0) {
    uVar5 = 0;
    fVar1 = param_3[3];
    fVar14 = (fVar1 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    uVar7 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (__real_437f0000 <= fVar14) {
      fVar14 = __real_437f0000;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    uVar10 = (ushort)(int)fVar14;
    if (uVar7 < (ushort)(int)fVar14) {
      uVar10 = uVar7;
    }
    if (param_1->FadeEndCos <= fVar1 && fVar1 != param_1->FadeEndCos) {
      uVar5 = 0xff;
    }
    if (uVar10 != 0) {
      if ((uVar5 != 0) && (param_1->MaskData != (uchar *)0x0)) {
        uVar5 = (ushort)param_1->MaskData[((longlong)param_2 - (longlong)param_1->TargetData) / 3];
      }
      uVar11 = ((uint)uVar10 * (uint)uVar5) / 0xff;
      if ((short)uVar11 != 0) {
        fVar1 = param_3[1];
        fVar14 = *param_3;
        local_50 = SUB42(fVar14,0);
        uStack_4e = (ushort)((uint)fVar14 >> 0x10);
        uStack_4c = SUB42(fVar1,0);
        uStack_4a = (undefined2)((uint)fVar1 >> 0x10);
        if (fVar14 < __real_3f800000 && (0.0 <= fVar14 && (0.0 <= fVar1 && fVar1 < __real_3f800000))
           ) {
          local_48 = local_58;
          uVar4._0_2_ = param_1->Source0SizeX;
          uVar4._2_2_ = param_1->Source0SizeY;
          FVar6 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<282>::ProcessPixelImpl'::
                  __l23::<lambda_4>::operator()
                            (&local_48,(TVector2<float>)&local_40,
                             (TIntVector2<unsigned_short>)SUB64(*(undefined6 *)param_3,0),
                             (uchar *)(ulonglong)uVar4);
          TVar3.field0_0x0._s_0.Y = uStack_4e;
          TVar3.field0_0x0._s_0.X = local_50;
          uVar2 = *(undefined8 *)FVar6;
          uVar8._0_2_ = param_1->Source1SizeX;
          uVar8._2_2_ = param_1->Source1SizeY;
          local_68 = param_1->Source1Data;
          local_40 = uVar2;
          `UE::Mutable::Private::Private::TProjectedPixelProcessor<282>::ProcessPixelImpl'::__l23::
          <lambda_4>::operator()
                    (&local_48,(TVector2<float>)&local_50,TVar3,(uchar *)(ulonglong)uVar8);
          uVar8 = (uint)(short)param_1->RGBFadingEnabledMask;
          iVar12 = (uVar11 & 0xffff & uVar8) + (~uVar8 & (uint)uVar5);
          uVar11 = (int)(param_1->MipInterpolationFactor * __real_437f0000) & 0xffff;
          iVar13 = 0xff - uVar11;
          iVar9 = ((int)(((uint)uVar2 & 0xffff) * iVar13 + local_50 * uVar11) / 0xff & 0xffffU) *
                  iVar12;
          *param_2 = ((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                     (char)((longlong)iVar9 * 0x80808081 >> 0x3f);
          iVar9 = ((int)(uStack_4e * uVar11 + (uint)local_40._2_2_ * iVar13) / 0xff & 0xffffU) *
                  iVar12;
          param_2[1] = ((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                       (char)((longlong)iVar9 * 0x80808081 >> 0x3f);
          iVar12 = ((int)(uStack_4c * uVar11 + (uint)local_40._4_2_ * iVar13) / 0xff & 0xffffU) *
                   iVar12;
          param_2[2] = ((char)(iVar12 / 0xff) + (char)(iVar12 >> 0x1f)) -
                       (char)((longlong)iVar12 * 0x80808081 >> 0x3f);
        }
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4a6c0

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<292>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  uchar *puVar4;
  uint uVar5;
  longlong lVar6;
  ushort uVar7;
  int iVar8;
  float fVar9;
  
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar1 = param_3[1];
    fVar9 = param_3[2];
    uVar7 = 0xff;
    if (__real_3f800000 < fVar9 * fVar9 + fVar1 * fVar1) {
      uVar7 = 0;
    }
    if (uVar7 != 0) {
      fVar9 = FGenericPlatformMath::Atan2
                        (fVar9,(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000));
      fVar1 = *param_3;
      fVar9 = fVar9 * param_1->OneOverProjectionAngle + __real_3f000000;
      if (fVar9 < __real_3f800000 && (0.0 <= fVar9 && (0.0 <= fVar1 && fVar1 < __real_3f800000))) {
        puVar4 = param_1->Source0Data;
        lVar6 = (longlong)
                (int)((((int)ROUND((fVar1 + fVar1) * (float)param_1->Source0SizeY - __real_3f000000)
                       >> 1) * (uint)param_1->Source0SizeX +
                      ((int)ROUND((fVar9 + fVar9) * (float)param_1->Source0SizeX - __real_3f000000)
                      >> 1)) * 3);
        bVar2 = puVar4[lVar6 + 1];
        bVar3 = puVar4[lVar6 + 2];
        uVar5 = (uint)(short)param_1->RGBFadingEnabledMask;
        iVar8 = (uVar7 & uVar5) + (~uVar5 & 0xff);
        *param_2 = (uchar)((ulonglong)((uint)puVar4[lVar6] * iVar8) / 0xff);
        param_2[1] = (uchar)((ulonglong)((CONCAT12(bVar3,(ushort)bVar2) & 0xffff) * iVar8) / 0xff);
        param_2[2] = (uchar)((ulonglong)((uint)bVar3 * iVar8) / 0xff);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4a860

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<294>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  uchar *puVar4;
  uint uVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar1 = param_3[1];
    fVar10 = param_3[2];
    uVar8 = 0xff;
    uVar7 = 0xff;
    if (__real_3f800000 < fVar10 * fVar10 + fVar1 * fVar1) {
      uVar7 = 0;
    }
    if (uVar7 != 0) {
      if (param_1->MaskData != (uchar *)0x0) {
        uVar8 = (uint)param_1->MaskData[((longlong)param_2 - (longlong)param_1->TargetData) / 3];
      }
      uVar7 = (ushort)((ulonglong)(uVar8 * uVar7) / 0xff);
      if (uVar7 != 0) {
        fVar10 = FGenericPlatformMath::Atan2
                           (fVar10,(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000));
        fVar1 = *param_3;
        fVar10 = fVar10 * param_1->OneOverProjectionAngle + __real_3f000000;
        if (fVar10 < __real_3f800000 && (0.0 <= fVar10 && (0.0 <= fVar1 && fVar1 < __real_3f800000))
           ) {
          puVar4 = param_1->Source0Data;
          lVar6 = (longlong)
                  (int)((((int)ROUND((fVar1 + fVar1) * (float)param_1->Source0SizeY -
                                     __real_3f000000) >> 1) * (uint)param_1->Source0SizeX +
                        ((int)ROUND((fVar10 + fVar10) * (float)param_1->Source0SizeX -
                                    __real_3f000000) >> 1)) * 3);
          bVar2 = puVar4[lVar6 + 1];
          bVar3 = puVar4[lVar6 + 2];
          uVar5 = (uint)(short)param_1->RGBFadingEnabledMask;
          iVar9 = (~uVar5 & uVar8) + (uVar7 & uVar5);
          *param_2 = (uchar)(((uint)puVar4[lVar6] * iVar9) / 0xff);
          param_2[1] = (uchar)(((CONCAT12(bVar3,(ushort)bVar2) & 0xffff) * iVar9) / 0xff);
          param_2[2] = (uchar)(((uint)bVar3 * iVar9) / 0xff);
        }
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4aa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<296>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  FPixelData FVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined1 auStack_88 [32];
  uchar *local_68;
  undefined1 local_58 [8];
  TIntVector2<unsigned_short>_u_0 local_50;
  ushort uStack_4c;
  undefined2 uStack_4a;
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar1 = param_3[1];
    fVar9 = param_3[2];
    uVar5 = 0xff;
    if (__real_3f800000 < fVar9 * fVar9 + fVar1 * fVar1) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      fVar9 = FGenericPlatformMath::Atan2
                        (fVar9,(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000));
      fVar9 = fVar9 * param_1->OneOverProjectionAngle;
      fVar1 = *param_3;
      uStack_4c = SUB42(fVar1,0);
      uStack_4a = (undefined2)((uint)fVar1 >> 0x10);
      local_50 = (TIntVector2<unsigned_short>_u_0)(fVar9 + __real_3f000000);
      if (fVar9 < __real_3f000000 &&
          (__real_bf000000 <= fVar9 && (0.0 <= fVar1 && fVar1 < __real_3f800000))) {
        local_48 = local_58;
        uVar6._0_2_ = param_1->Source0SizeX;
        uVar6._2_2_ = param_1->Source0SizeY;
        local_68 = param_1->Source0Data;
        FVar4 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<296>::ProcessPixelImpl'::
                __l20::<lambda_4>::operator()
                          (&local_48,(TVector2<float>)&local_40,
                           (TIntVector2<unsigned_short>)local_50._s_0,(uchar *)(ulonglong)uVar6);
        uVar2 = *(undefined8 *)FVar4;
        uVar3._0_2_ = param_1->Source1SizeX;
        uVar3._2_2_ = param_1->Source1SizeY;
        local_68 = param_1->Source1Data;
        local_40 = uVar2;
        `UE::Mutable::Private::Private::TProjectedPixelProcessor<296>::ProcessPixelImpl'::__l20::
        <lambda_4>::operator()
                  (&local_48,(TVector2<float>)&local_50,(TIntVector2<unsigned_short>)local_50._s_0,
                   (uchar *)(ulonglong)uVar3);
        uVar6 = (int)(param_1->MipInterpolationFactor * __real_437f0000) & 0xffff;
        uVar3 = (uint)(short)param_1->RGBFadingEnabledMask;
        iVar8 = 0xff - uVar6;
        iVar7 = (uVar5 & uVar3) + (~uVar3 & 0xff);
        *param_2 = (uchar)((ulonglong)
                           (((int)(((uint)local_50 & 0xffff) * uVar6 +
                                  ((uint)uVar2 & 0xffff) * iVar8) / 0xff & 0xffffU) * iVar7) / 0xff)
        ;
        param_2[1] = (uchar)((ulonglong)
                             (((int)(((uint)local_50 >> 0x10) * uVar6 + (uint)local_40._2_2_ * iVar8
                                    ) / 0xff & 0xffffU) * iVar7) / 0xff);
        param_2[2] = (uchar)((ulonglong)
                             (((int)(uStack_4c * uVar6 + (uint)local_40._4_2_ * iVar8) / 0xff &
                              0xffffU) * iVar7) / 0xff);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4acf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<298>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar4;
  FPixelData FVar3;
  uint uVar6;
  ushort uVar5;
  int iVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  uchar *local_68;
  undefined1 local_58 [8];
  TIntVector2<unsigned_short>_u_0 local_50;
  ushort uStack_4c;
  undefined2 uStack_4a;
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar1 = param_3[1];
    fVar10 = param_3[2];
    uVar5 = 0xff;
    if (__real_3f800000 < fVar10 * fVar10 + fVar1 * fVar1) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      if (param_1->MaskData == (uchar *)0x0) {
        uVar9 = 0xff;
      }
      else {
        uVar9 = (uint)param_1->MaskData[((longlong)param_2 - (longlong)param_1->TargetData) / 3];
      }
      uVar5 = (ushort)((ulonglong)(uVar9 * uVar5) / 0xff);
      if (uVar5 != 0) {
        fVar10 = FGenericPlatformMath::Atan2
                           (fVar10,(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000));
        fVar10 = fVar10 * param_1->OneOverProjectionAngle;
        fVar1 = *param_3;
        uStack_4c = SUB42(fVar1,0);
        uStack_4a = (undefined2)((uint)fVar1 >> 0x10);
        local_50 = (TIntVector2<unsigned_short>_u_0)(fVar10 + __real_3f000000);
        if (fVar10 < __real_3f000000 &&
            (__real_bf000000 <= fVar10 && (0.0 <= fVar1 && fVar1 < __real_3f800000))) {
          local_48 = local_58;
          uVar6._0_2_ = param_1->Source0SizeX;
          uVar6._2_2_ = param_1->Source0SizeY;
          local_68 = param_1->Source0Data;
          FVar3 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<298>::ProcessPixelImpl'::
                  __l23::<lambda_4>::operator()
                            (&local_48,(TVector2<float>)&local_40,
                             (TIntVector2<unsigned_short>)local_50._s_0,(uchar *)(ulonglong)uVar6);
          uVar2 = *(undefined8 *)FVar3;
          uVar4._0_2_ = param_1->Source1SizeX;
          uVar4._2_2_ = param_1->Source1SizeY;
          local_68 = param_1->Source1Data;
          local_40 = uVar2;
          `UE::Mutable::Private::Private::TProjectedPixelProcessor<298>::ProcessPixelImpl'::__l23::
          <lambda_4>::operator()
                    (&local_48,(TVector2<float>)&local_50,(TIntVector2<unsigned_short>)local_50._s_0
                     ,(uchar *)(ulonglong)uVar4);
          uVar4 = (uint)(short)param_1->RGBFadingEnabledMask;
          uVar6 = (int)(param_1->MipInterpolationFactor * __real_437f0000) & 0xffff;
          iVar8 = 0xff - uVar6;
          iVar7 = (~uVar4 & uVar9) + (uVar5 & uVar4);
          *param_2 = (uchar)((((int)(((uint)local_50 & 0xffff) * uVar6 +
                                    ((uint)uVar2 & 0xffff) * iVar8) / 0xff & 0xffffU) * iVar7) /
                            0xff);
          param_2[1] = (uchar)((((int)(((uint)local_50 >> 0x10) * uVar6 +
                                      (uint)local_40._2_2_ * iVar8) / 0xff & 0xffffU) * iVar7) /
                              0xff);
          param_2[2] = (uchar)((((int)(uStack_4c * uVar6 + (uint)local_40._4_2_ * iVar8) / 0xff &
                                0xffffU) * iVar7) / 0xff);
        }
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4afd0

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<326>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  uchar *puVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  int iVar11;
  
  puVar5 = param_1->Source0Data;
  if (puVar5 != (uchar *)0x0) {
    uVar8 = 0xff;
    uVar10 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (uVar10 != 0) {
      if (param_1->MaskData != (uchar *)0x0) {
        uVar8 = (uint)param_1->MaskData[((longlong)param_2 - (longlong)param_1->TargetData) / 3];
      }
      uVar9 = (uVar10 * uVar8) / 0xff;
      if ((short)uVar9 != 0) {
        fVar1 = param_3[1];
        fVar2 = *param_3;
        if (fVar2 < __real_3f800000 && (0.0 <= fVar2 && (0.0 <= fVar1 && fVar1 < __real_3f800000)))
        {
          lVar7 = (longlong)
                  (int)((((int)ROUND((fVar1 + fVar1) * (float)param_1->Source0SizeY -
                                     __real_3f000000) >> 1) * (uint)param_1->Source0SizeX +
                        ((int)ROUND((fVar2 + fVar2) * (float)param_1->Source0SizeX - __real_3f000000
                                   ) >> 1)) * 3);
          bVar3 = puVar5[lVar7 + 1];
          bVar4 = puVar5[lVar7 + 2];
          uVar6 = (uint)(short)param_1->RGBFadingEnabledMask;
          iVar11 = (~uVar6 & uVar8) + (uVar9 & uVar6);
          *param_2 = (uchar)(((uint)puVar5[lVar7] * iVar11) / 0xff);
          param_2[1] = (uchar)(((CONCAT12(bVar4,(ushort)bVar3) & 0xffff) * iVar11) / 0xff);
          param_2[2] = (uchar)(((uint)bVar4 * iVar11) / 0xff);
        }
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4b1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<328>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  TIntVector2<unsigned_short> TVar4;
  uint uVar5;
  FPixelData FVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  uchar *local_58;
  undefined1 local_48 [8];
  ushort local_40;
  ushort uStack_3e;
  ushort uStack_3c;
  undefined2 uStack_3a;
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = param_1->Source0Data;
  if ((local_58 != (uchar *)0x0) &&
     (uVar7 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff, uVar7 != 0)) {
    fVar1 = param_3[1];
    fVar2 = *param_3;
    local_40 = SUB42(fVar2,0);
    uStack_3e = (ushort)((uint)fVar2 >> 0x10);
    uStack_3c = SUB42(fVar1,0);
    uStack_3a = (undefined2)((uint)fVar1 >> 0x10);
    if (fVar2 < __real_3f800000 && (0.0 <= fVar2 && (0.0 <= fVar1 && fVar1 < __real_3f800000))) {
      local_38 = local_48;
      uVar8._0_2_ = param_1->Source0SizeX;
      uVar8._2_2_ = param_1->Source0SizeY;
      FVar6 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<328>::ProcessPixelImpl'::
              __l20::<lambda_4>::operator()
                        (&local_38,(TVector2<float>)&local_30,
                         (TIntVector2<unsigned_short>)SUB64(*(undefined6 *)param_3,0),
                         (uchar *)(ulonglong)uVar8);
      TVar4.field0_0x0._s_0.Y = uStack_3e;
      TVar4.field0_0x0._s_0.X = local_40;
      uVar3 = *(undefined8 *)FVar6;
      uVar5._0_2_ = param_1->Source1SizeX;
      uVar5._2_2_ = param_1->Source1SizeY;
      local_58 = param_1->Source1Data;
      local_30 = uVar3;
      `UE::Mutable::Private::Private::TProjectedPixelProcessor<328>::ProcessPixelImpl'::__l20::
      <lambda_4>::operator()(&local_38,(TVector2<float>)&local_40,TVar4,(uchar *)(ulonglong)uVar5);
      uVar8 = (int)(param_1->MipInterpolationFactor * __real_437f0000) & 0xffff;
      uVar5 = (uint)(short)param_1->RGBFadingEnabledMask;
      iVar10 = 0xff - uVar8;
      iVar9 = (uVar7 & uVar5) + (~uVar5 & 0xff);
      *param_2 = (uchar)((ulonglong)
                         (((int)(local_40 * uVar8 + ((uint)uVar3 & 0xffff) * iVar10) / 0xff &
                          0xffffU) * iVar9) / 0xff);
      param_2[1] = (uchar)((ulonglong)
                           (((int)(uStack_3e * uVar8 + (uint)local_30._2_2_ * iVar10) / 0xff &
                            0xffffU) * iVar9) / 0xff);
      param_2[2] = (uchar)((ulonglong)
                           (((int)(uStack_3c * uVar8 + (uint)local_30._4_2_ * iVar10) / 0xff &
                            0xffffU) * iVar9) / 0xff);
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4b420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<330>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  TIntVector2<unsigned_short> TVar4;
  uint uVar5;
  uint uVar7;
  FPixelData FVar6;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  uchar *local_68;
  undefined1 local_58 [8];
  ushort local_50;
  ushort uStack_4e;
  ushort uStack_4c;
  undefined2 uStack_4a;
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = param_1->Source0Data;
  if ((local_68 != (uchar *)0x0) &&
     (uVar11 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff, uVar11 != 0)) {
    if (param_1->MaskData == (uchar *)0x0) {
      uVar9 = 0xff;
    }
    else {
      uVar9 = (uint)param_1->MaskData[((longlong)param_2 - (longlong)param_1->TargetData) / 3];
    }
    uVar8 = (uVar11 * uVar9) / 0xff;
    if ((short)uVar8 != 0) {
      fVar1 = param_3[1];
      fVar2 = *param_3;
      local_50 = SUB42(fVar2,0);
      uStack_4e = (ushort)((uint)fVar2 >> 0x10);
      uStack_4c = SUB42(fVar1,0);
      uStack_4a = (undefined2)((uint)fVar1 >> 0x10);
      if (fVar2 < __real_3f800000 && (0.0 <= fVar2 && (0.0 <= fVar1 && fVar1 < __real_3f800000))) {
        local_48 = local_58;
        uVar5._0_2_ = param_1->Source0SizeX;
        uVar5._2_2_ = param_1->Source0SizeY;
        FVar6 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<330>::ProcessPixelImpl'::
                __l23::<lambda_4>::operator()
                          (&local_48,(TVector2<float>)&local_40,
                           (TIntVector2<unsigned_short>)SUB64(*(undefined6 *)param_3,0),
                           (uchar *)(ulonglong)uVar5);
        TVar4.field0_0x0._s_0.Y = uStack_4e;
        TVar4.field0_0x0._s_0.X = local_50;
        uVar3 = *(undefined8 *)FVar6;
        uVar7._0_2_ = param_1->Source1SizeX;
        uVar7._2_2_ = param_1->Source1SizeY;
        local_68 = param_1->Source1Data;
        local_40 = uVar3;
        `UE::Mutable::Private::Private::TProjectedPixelProcessor<330>::ProcessPixelImpl'::__l23::
        <lambda_4>::operator()(&local_48,(TVector2<float>)&local_50,TVar4,(uchar *)(ulonglong)uVar7)
        ;
        uVar7 = (uint)(short)param_1->RGBFadingEnabledMask;
        iVar10 = (uVar8 & uVar7) + (~uVar7 & uVar9);
        uVar9 = (int)(param_1->MipInterpolationFactor * __real_437f0000) & 0xffff;
        iVar12 = 0xff - uVar9;
        *param_2 = (uchar)((((int)(local_50 * uVar9 + ((uint)uVar3 & 0xffff) * iVar12) / 0xff &
                            0xffffU) * iVar10) / 0xff);
        param_2[1] = (uchar)((((int)(uStack_4e * uVar9 + (uint)local_40._2_2_ * iVar12) / 0xff &
                              0xffffU) * iVar10) / 0xff);
        param_2[2] = (uchar)((((int)(uStack_4c * uVar9 + (uint)local_40._4_2_ * iVar12) / 0xff &
                              0xffffU) * iVar10) / 0xff);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4b6e0

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<534>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  float fVar7;
  
  if (param_1->Source0Data != (uchar *)0x0) {
    uVar4 = 0;
    fVar1 = param_3[3];
    fVar7 = (fVar1 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    uVar3 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (__real_437f0000 <= fVar7) {
      fVar7 = __real_437f0000;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    uVar5 = (ushort)(int)fVar7;
    if (uVar3 < (ushort)(int)fVar7) {
      uVar5 = uVar3;
    }
    if (param_1->FadeEndCos <= fVar1 && fVar1 != param_1->FadeEndCos) {
      uVar4 = 0xff;
    }
    if (uVar5 != 0) {
      if ((uVar4 != 0) && (param_1->MaskData != (uchar *)0x0)) {
        uVar4 = (ushort)param_2[(longlong)param_1->MaskData - (longlong)param_1->TargetData];
      }
      uVar2 = ((uint)uVar5 * (uint)uVar4) / 0xff;
      if ((short)uVar2 != 0) {
        fVar1 = param_3[1];
        fVar7 = *param_3;
        if (fVar7 < __real_3f800000 && (0.0 <= fVar7 && (0.0 <= fVar1 && fVar1 < __real_3f800000)))
        {
          uVar6 = (uint)(short)param_1->RGBFadingEnabledMask;
          *param_2 = (uchar)((ulonglong)
                             ((uint)param_1->Source0Data
                                    [(int)(((int)ROUND((fVar7 + fVar7) *
                                                       (float)param_1->Source0SizeX -
                                                       __real_3f000000) >> 1) +
                                          ((int)ROUND((fVar1 + fVar1) * (float)param_1->Source0SizeY
                                                      - __real_3f000000) >> 1) *
                                          (uint)param_1->Source0SizeX)] *
                             ((uVar2 & 0xffff & uVar6) + (~uVar6 & (uint)uVar4))) / 0xff);
        }
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4b880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<536>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  TIntVector2<unsigned_short> TVar3;
  uint uVar6;
  FPixelData FVar4;
  ushort uVar5;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  uchar *local_88;
  undefined1 local_78 [8];
  ushort local_70;
  undefined2 uStack_6e;
  float fStack_6c;
  undefined1 *local_68;
  undefined1 local_60 [8];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = param_1->Source0Data;
  if (local_88 != (uchar *)0x0) {
    fVar1 = param_3[3];
    fVar2 = param_1->FadeEndCos;
    fVar11 = (fVar1 - fVar2) * param_1->OneOverFadeRangeTimes255;
    uVar5 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (__real_437f0000 <= fVar11) {
      fVar11 = __real_437f0000;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    uVar10 = (ushort)(int)fVar11;
    if (uVar5 < (ushort)(int)fVar11) {
      uVar10 = uVar5;
    }
    if (uVar10 != 0) {
      fStack_6c = param_3[1];
      TVar3.field0_0x0 = (TIntVector2<unsigned_short>_u_0)*param_3;
      local_70 = TVar3.field0_0x0._0_2_;
      uStack_6e = TVar3.field0_0x0._2_2_;
      if ((float)TVar3.field0_0x0 < __real_3f800000 &&
          (0.0 <= (float)TVar3.field0_0x0 && (0.0 <= fStack_6c && fStack_6c < __real_3f800000))) {
        local_68 = local_78;
        uVar7._0_2_ = param_1->Source0SizeX;
        uVar7._2_2_ = param_1->Source0SizeY;
        FVar4 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<536>::ProcessPixelImpl'::
                __l20::<lambda_4>::operator()
                          (&local_68,(TVector2<float>)local_60,TVar3,(uchar *)(ulonglong)uVar7);
        TVar3.field0_0x0._s_0.Y = uStack_6e;
        TVar3.field0_0x0._s_0.X = local_70;
        uVar5 = *(ushort *)FVar4;
        uVar6._0_2_ = param_1->Source1SizeX;
        uVar6._2_2_ = param_1->Source1SizeY;
        local_88 = param_1->Source1Data;
        `UE::Mutable::Private::Private::TProjectedPixelProcessor<536>::ProcessPixelImpl'::__l20::
        <lambda_4>::operator()(&local_68,(TVector2<float>)&local_70,TVar3,(uchar *)(ulonglong)uVar6)
        ;
        uVar9 = (uint)(short)param_1->RGBFadingEnabledMask;
        uVar6 = (int)(param_1->MipInterpolationFactor * __real_437f0000) & 0xffff;
        uVar7 = 0;
        if (fVar2 < fVar1) {
          uVar7 = 0xff;
        }
        iVar8 = ((int)((0xff - uVar6) * (uint)uVar5 + local_70 * uVar6) / 0xff & 0xffffU) *
                ((uVar7 & ~uVar9) + (uVar10 & uVar9));
        *param_2 = ((char)(iVar8 / 0xff) + (char)(iVar8 >> 0x1f)) -
                   (char)((longlong)iVar8 * 0x80808081 >> 0x3f);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4bab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<538>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  TIntVector2<unsigned_short> TVar2;
  uint uVar3;
  ushort uVar6;
  uint uVar7;
  FPixelData FVar4;
  ushort uVar5;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  undefined1 auStack_88 [32];
  uchar *local_68;
  undefined1 local_58 [8];
  ushort local_50;
  undefined2 uStack_4e;
  float fStack_4c;
  undefined1 *local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = param_1->Source0Data;
  if (local_68 != (uchar *)0x0) {
    uVar6 = 0;
    fVar1 = param_3[3];
    fVar11 = (fVar1 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    uVar5 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (__real_437f0000 <= fVar11) {
      fVar11 = __real_437f0000;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    uVar8 = (ushort)(int)fVar11;
    if (uVar5 < (ushort)(int)fVar11) {
      uVar8 = uVar5;
    }
    if (param_1->FadeEndCos <= fVar1 && fVar1 != param_1->FadeEndCos) {
      uVar6 = 0xff;
    }
    if (uVar8 != 0) {
      if ((uVar6 != 0) && (param_1->MaskData != (uchar *)0x0)) {
        uVar6 = (ushort)param_2[(longlong)param_1->MaskData - (longlong)param_1->TargetData];
      }
      uVar3 = ((uint)uVar8 * (uint)uVar6) / 0xff;
      if ((short)uVar3 != 0) {
        fStack_4c = param_3[1];
        TVar2.field0_0x0 = (TIntVector2<unsigned_short>_u_0)*param_3;
        local_50 = TVar2.field0_0x0._0_2_;
        uStack_4e = TVar2.field0_0x0._2_2_;
        if ((float)TVar2.field0_0x0 < __real_3f800000 &&
            (0.0 <= (float)TVar2.field0_0x0 && (0.0 <= fStack_4c && fStack_4c < __real_3f800000))) {
          local_48 = local_58;
          uVar10._0_2_ = param_1->Source0SizeX;
          uVar10._2_2_ = param_1->Source0SizeY;
          FVar4 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<538>::ProcessPixelImpl'::
                  __l23::<lambda_4>::operator()
                            (&local_48,(TVector2<float>)local_40,TVar2,(uchar *)(ulonglong)uVar10);
          TVar2.field0_0x0._s_0.Y = uStack_4e;
          TVar2.field0_0x0._s_0.X = local_50;
          uVar5 = *(ushort *)FVar4;
          uVar7._0_2_ = param_1->Source1SizeX;
          uVar7._2_2_ = param_1->Source1SizeY;
          local_68 = param_1->Source1Data;
          `UE::Mutable::Private::Private::TProjectedPixelProcessor<538>::ProcessPixelImpl'::__l23::
          <lambda_4>::operator()
                    (&local_48,(TVector2<float>)&local_50,TVar2,(uchar *)(ulonglong)uVar7);
          uVar10 = (uint)(short)param_1->RGBFadingEnabledMask;
          uVar7 = (int)(param_1->MipInterpolationFactor * __real_437f0000) & 0xffff;
          iVar9 = ((int)((0xff - uVar7) * (uint)uVar5 + local_50 * uVar7) / 0xff & 0xffffU) *
                  ((~uVar10 & (uint)uVar6) + (uVar3 & 0xffff & uVar10));
          *param_2 = ((char)(iVar9 / 0xff) + (char)(iVar9 >> 0x1f)) -
                     (char)((longlong)iVar9 * 0x80808081 >> 0x3f);
        }
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4bd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<554>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  ushort uVar2;
  uint uVar4;
  FPixelData FVar3;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  TIntVector2<unsigned_short>_u_0 TVar9;
  undefined1 auStack_78 [32];
  uchar *local_58;
  undefined1 local_48 [8];
  TIntVector2<unsigned_short>_u_0 local_40;
  float fStack_3c;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar8 = param_3[1];
    fVar1 = param_3[2];
    uVar5 = 0xff;
    if (__real_3f800000 < fVar1 * fVar1 + fVar8 * fVar8) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      if (param_1->MaskData == (uchar *)0x0) {
        uVar7 = 0xff;
      }
      else {
        uVar7 = (uint)param_2[(longlong)param_1->MaskData - (longlong)param_1->TargetData];
      }
      uVar5 = (ushort)((ulonglong)(uVar7 * uVar5) / 0xff);
      if (uVar5 != 0) {
        fVar8 = FGenericPlatformMath::Atan2
                          (fVar1,(float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000));
        fVar8 = fVar8 * param_1->OneOverProjectionAngle;
        fStack_3c = *param_3;
        TVar9 = (TIntVector2<unsigned_short>_u_0)(fVar8 + __real_3f000000);
        if (fVar8 < __real_3f000000 &&
            (__real_bf000000 <= fVar8 && (0.0 <= fStack_3c && fStack_3c < __real_3f800000))) {
          local_38 = local_48;
          uVar6._0_2_ = param_1->Source0SizeX;
          uVar6._2_2_ = param_1->Source0SizeY;
          local_58 = param_1->Source0Data;
          local_40 = TVar9;
          FVar3 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<554>::ProcessPixelImpl'::
                  __l23::<lambda_4>::operator()
                            (&local_38,(TVector2<float>)&local_40,
                             (TIntVector2<unsigned_short>)TVar9._s_0,(uchar *)(ulonglong)uVar6);
          uVar2 = *(ushort *)FVar3;
          uVar4._0_2_ = param_1->Source1SizeX;
          uVar4._2_2_ = param_1->Source1SizeY;
          local_58 = param_1->Source1Data;
          `UE::Mutable::Private::Private::TProjectedPixelProcessor<554>::ProcessPixelImpl'::__l23::
          <lambda_4>::operator()
                    (&local_38,(TVector2<float>)&local_40,(TIntVector2<unsigned_short>)TVar9,
                     (uchar *)(ulonglong)uVar4);
          uVar6 = (uint)(short)param_1->RGBFadingEnabledMask;
          uVar4 = (int)(param_1->MipInterpolationFactor * __real_437f0000) & 0xffff;
          *param_2 = (uchar)((((int)((0xff - uVar4) * (uint)uVar2 +
                                    ((uint)local_40 & 0xffff) * uVar4) / 0xff & 0xffffU) *
                             ((~uVar6 & uVar7) + (uVar5 & uVar6))) / 0xff);
        }
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4bf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<586>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  TIntVector2<unsigned_short> TVar1;
  uint uVar4;
  FPixelData FVar2;
  ushort uVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  uchar *local_68;
  undefined1 local_58 [8];
  ushort local_50;
  undefined2 uStack_4e;
  float fStack_4c;
  undefined1 *local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = param_1->Source0Data;
  if ((local_68 != (uchar *)0x0) &&
     (uVar3 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff, uVar3 != 0)) {
    if (param_1->MaskData == (uchar *)0x0) {
      uVar7 = 0xff;
    }
    else {
      uVar7 = (uint)param_2[(longlong)param_1->MaskData - (longlong)param_1->TargetData];
    }
    uVar5 = (uVar3 * uVar7) / 0xff;
    if ((short)uVar5 != 0) {
      fStack_4c = param_3[1];
      TVar1.field0_0x0 = (TIntVector2<unsigned_short>_u_0)*param_3;
      local_50 = TVar1.field0_0x0._0_2_;
      uStack_4e = TVar1.field0_0x0._2_2_;
      if ((float)TVar1.field0_0x0 < __real_3f800000 &&
          (0.0 <= (float)TVar1.field0_0x0 && (0.0 <= fStack_4c && fStack_4c < __real_3f800000))) {
        local_48 = local_58;
        uVar6._0_2_ = param_1->Source0SizeX;
        uVar6._2_2_ = param_1->Source0SizeY;
        FVar2 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<586>::ProcessPixelImpl'::
                __l23::<lambda_4>::operator()
                          (&local_48,(TVector2<float>)local_40,TVar1,(uchar *)(ulonglong)uVar6);
        TVar1.field0_0x0._s_0.Y = uStack_4e;
        TVar1.field0_0x0._s_0.X = local_50;
        uVar3 = *(ushort *)FVar2;
        uVar4._0_2_ = param_1->Source1SizeX;
        uVar4._2_2_ = param_1->Source1SizeY;
        local_68 = param_1->Source1Data;
        `UE::Mutable::Private::Private::TProjectedPixelProcessor<586>::ProcessPixelImpl'::__l23::
        <lambda_4>::operator()(&local_48,(TVector2<float>)&local_50,TVar1,(uchar *)(ulonglong)uVar4)
        ;
        uVar6 = (uint)(short)param_1->RGBFadingEnabledMask;
        uVar4 = (int)(param_1->MipInterpolationFactor * __real_437f0000) & 0xffff;
        *param_2 = (uchar)((((int)((0xff - uVar4) * (uint)uVar3 + local_50 * uVar4) / 0xff & 0xffffU
                            ) * ((uVar5 & uVar6) + (~uVar6 & uVar7))) / 0xff);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4c140

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<148>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar1 = param_3[3];
    fVar10 = (fVar1 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    uVar5 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (__real_437f0000 <= fVar10) {
      fVar10 = __real_437f0000;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    uVar7 = (ushort)(int)fVar10;
    if (uVar5 < (ushort)(int)fVar10) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) {
      fVar10 = param_3[1];
      fVar2 = *param_3;
      if (fVar2 < __real_3f800000 && (0.0 <= fVar2 && (0.0 <= fVar10 && fVar10 < __real_3f800000)))
      {
        uVar9 = (uint)(short)param_1->AlphaFadingEnabledMask;
        uVar6 = (uint)(short)param_1->RGBFadingEnabledMask;
        uVar3 = *(uint *)(param_1->Source0Data +
                         (int)((((int)ROUND((fVar2 + fVar2) * (float)param_1->Source0SizeX -
                                            __real_3f000000) >> 1) +
                               ((int)ROUND((fVar10 + fVar10) * (float)param_1->Source0SizeY -
                                           __real_3f000000) >> 1) * (uint)param_1->Source0SizeX) * 4
                              ));
        uVar4 = 0;
        if (param_1->FadeEndCos <= fVar1 && fVar1 != param_1->FadeEndCos) {
          uVar4 = 0xff;
        }
        iVar8 = (~uVar6 & uVar4) + (uVar7 & uVar6);
        *param_2 = (uchar)((ulonglong)((uVar3 & 0xff) * iVar8) / 0xff);
        param_2[1] = (uchar)((ulonglong)((uVar3 >> 8 & 0xff) * iVar8) / 0xff);
        param_2[2] = (uchar)((ulonglong)((uVar3 >> 0x10 & 0xff) * iVar8) / 0xff);
        param_2[3] = (uchar)((ulonglong)(((~uVar9 & uVar4) + (uVar7 & uVar9)) * (uVar3 >> 0x18)) /
                            0xff);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4c310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<152>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar6;
  FPixelData FVar3;
  ushort uVar4;
  undefined2 uVar5;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  int iVar20;
  int iVar21;
  undefined1 auVar19 [16];
  int iVar22;
  undefined1 auStack_98 [32];
  uchar *local_78;
  undefined1 local_68 [8];
  undefined1 *local_60;
  undefined8 local_58;
  TIntVector2<unsigned_short>_u_0 local_50;
  float fStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = param_1->Source0Data;
  if (local_78 != (uchar *)0x0) {
    auVar14 = ZEXT816(0);
    auVar17 = ZEXT416((uint)__real_3f800000);
    uVar8 = 0;
    fVar1 = param_3[3];
    fVar2 = param_1->FadeEndCos;
    fVar11 = (fVar1 - fVar2) * param_1->OneOverFadeRangeTimes255;
    uVar4 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (__real_437f0000 <= fVar11) {
      fVar11 = __real_437f0000;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    uVar7 = (ushort)(int)fVar11;
    if (uVar4 < (ushort)(int)fVar11) {
      uVar7 = uVar4;
    }
    if (uVar7 != 0) {
      fStack_4c = param_3[1];
      local_50 = (TIntVector2<unsigned_short>_u_0)*param_3;
      uVar6 = uVar8;
      if (0.0 <= (float)local_50) {
        uVar6 = (uint)(0.0 <= fStack_4c && fStack_4c < __real_3f800000);
      }
      if (((float)local_50 < __real_3f800000 & uVar6) != 0) {
        local_60 = local_68;
        uVar10._0_2_ = param_1->Source0SizeX;
        uVar10._2_2_ = param_1->Source0SizeY;
        FVar3 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<152>::ProcessPixelImpl'::
                __l20::<lambda_4>::operator()
                          (&local_60,(TVector2<float>)&local_58,
                           (TIntVector2<unsigned_short>)local_50._s_0,(uchar *)(ulonglong)uVar10);
        local_58 = *(undefined8 *)FVar3.Data;
        uVar6._0_2_ = param_1->Source1SizeX;
        uVar6._2_2_ = param_1->Source1SizeY;
        local_78 = param_1->Source1Data;
        `UE::Mutable::Private::Private::TProjectedPixelProcessor<152>::ProcessPixelImpl'::__l20::
        <lambda_4>::operator()
                  (&local_60,(TVector2<float>)&local_50,(TIntVector2<unsigned_short>)local_50._s_0,
                   (uchar *)(ulonglong)uVar6);
        uVar6 = (uint)(param_1->MipInterpolationFactor * __real_437f0000);
        uVar5 = (undefined2)uVar6;
        auVar12._0_4_ = CONCAT22(uVar5,uVar5);
        auVar12._4_4_ = auVar12._0_4_;
        if (__isa_available < 2) {
          uVar6 = uVar6 & 0xffff;
          lVar9 = 0;
          do {
            iVar18 = *(ushort *)((longlong)&local_50 + lVar9) * uVar6 +
                     (uint)*(ushort *)((longlong)&local_58 + lVar9) * (0xff - uVar6);
            *(short *)((longlong)&local_58 + lVar9) =
                 ((short)(iVar18 / 0xff) + (short)(iVar18 >> 0x1f)) -
                 (short)((longlong)iVar18 * 0x80808081 >> 0x3f);
            lVar9 = lVar9 + 2;
          } while (lVar9 < 8);
        }
        else {
          auVar19 = pmovzxwd(auVar17,local_58);
          auVar12._8_8_ = 0;
          auVar17 = pmovzxwd(auVar14,auVar12);
          auVar13._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar17._0_4_;
          auVar13._4_4_ = _UNK_150631f64 - auVar17._4_4_;
          auVar13._8_4_ = _UNK_150631f68 - auVar17._8_4_;
          auVar13._12_4_ = _UNK_150631f6c - auVar17._12_4_;
          auVar12 = pmulld(auVar19,auVar13);
          auVar14 = pmovzxwd(auVar13,CONCAT44(fStack_4c,local_50));
          auVar14 = pmulld(auVar14,auVar17);
          iVar18 = auVar12._0_4_ + auVar14._0_4_;
          iVar20 = auVar12._4_4_ + auVar14._4_4_;
          auVar15._4_4_ = iVar20;
          auVar15._0_4_ = iVar18;
          iVar21 = auVar12._8_4_ + auVar14._8_4_;
          iVar22 = auVar12._12_4_ + auVar14._12_4_;
          auVar15._8_4_ = iVar20;
          auVar15._12_4_ = iVar20;
          auVar19._8_8_ = auVar15._8_8_;
          auVar19._4_4_ = iVar18;
          auVar19._0_4_ = iVar18;
          auVar17 = pmuldq(auVar19,___xmm_80808081808080818080808180808081);
          auVar14._4_4_ = iVar21;
          auVar14._0_4_ = iVar21;
          auVar14._8_4_ = iVar22;
          auVar14._12_4_ = iVar22;
          auVar14 = pmuldq(auVar14,___xmm_80808081808080818080808180808081);
          iVar18 = auVar17._4_4_ + iVar18;
          iVar20 = auVar17._12_4_ + iVar20;
          iVar21 = auVar14._4_4_ + iVar21;
          iVar22 = auVar14._12_4_ + iVar22;
          auVar16._0_4_ = iVar18 >> 7;
          auVar16._4_4_ = iVar20 >> 7;
          auVar16._8_4_ = iVar21 >> 7;
          auVar16._12_4_ = iVar22 >> 7;
          auVar17._0_4_ = auVar16._0_4_ - (iVar18 >> 0x1f);
          auVar17._4_4_ = auVar16._4_4_ - (iVar20 >> 0x1f);
          auVar17._8_4_ = auVar16._8_4_ - (iVar21 >> 0x1f);
          auVar17._12_4_ = auVar16._12_4_ - (iVar22 >> 0x1f);
          auVar14 = pshufhw(auVar17,auVar17,0xd8);
          auVar14 = pshuflw(auVar16,auVar14,0xd8);
          local_58 = CONCAT44(auVar14._8_4_,auVar14._0_4_);
        }
        uVar6 = (uint)(short)param_1->RGBFadingEnabledMask;
        uVar10 = (uint)(short)param_1->AlphaFadingEnabledMask;
        if (fVar2 < fVar1) {
          uVar8 = 0xff;
        }
        iVar21 = (~uVar6 & uVar8) + (uVar7 & uVar6);
        iVar18 = (uint)(ushort)local_58 * iVar21;
        iVar20 = (uint)local_58._2_2_ * iVar21;
        *param_2 = ((char)(iVar18 / 0xff) + (char)(iVar18 >> 0x1f)) -
                   (char)((longlong)iVar18 * 0x80808081 >> 0x3f);
        iVar21 = (uint)local_58._4_2_ * iVar21;
        param_2[1] = ((char)(iVar20 / 0xff) + (char)(iVar20 >> 0x1f)) -
                     (char)((longlong)iVar20 * 0x80808081 >> 0x3f);
        iVar18 = ((~uVar10 & uVar8) + (uVar7 & uVar10)) * (uint)local_58._6_2_;
        param_2[2] = ((char)(iVar21 / 0xff) + (char)(iVar21 >> 0x1f)) -
                     (char)((longlong)iVar21 * 0x80808081 >> 0x3f);
        param_2[3] = ((char)(iVar18 / 0xff) + (char)(iVar18 >> 0x1f)) -
                     (char)((longlong)iVar18 * 0x80808081 >> 0x3f);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4c670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<154>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  uint uVar7;
  ushort uVar2;
  longlong lVar3;
  FPixelData FVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  int iVar20;
  int iVar21;
  undefined1 auVar19 [16];
  int iVar22;
  undefined1 auStack_88 [32];
  uchar *local_68;
  undefined1 local_58 [8];
  undefined1 *local_50;
  undefined8 local_48;
  TIntVector2<unsigned_short>_u_0 local_40;
  float fStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = param_1->Source0Data;
  if (local_68 != (uchar *)0x0) {
    auVar17 = ZEXT816(0);
    fVar1 = param_3[3];
    auVar14 = ZEXT416((uint)fVar1);
    uVar2 = 0;
    fVar11 = (fVar1 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    uVar5 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (__real_437f0000 <= fVar11) {
      fVar11 = __real_437f0000;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    uVar9 = (ushort)(int)fVar11;
    if (uVar5 < (ushort)(int)fVar11) {
      uVar9 = uVar5;
    }
    if (param_1->FadeEndCos <= fVar1 && fVar1 != param_1->FadeEndCos) {
      uVar2 = 0xff;
    }
    if (uVar9 != 0) {
      if ((uVar2 != 0) && (param_1->MaskData != (uchar *)0x0)) {
        lVar3 = (longlong)param_2 - (longlong)param_1->TargetData;
        uVar2 = (ushort)param_1->MaskData
                        [(longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 3)) >> 2];
      }
      uVar8 = ((uint)uVar9 * (uint)uVar2) / 0xff;
      if ((short)uVar8 != 0) {
        fStack_3c = param_3[1];
        local_40 = (TIntVector2<unsigned_short>_u_0)*param_3;
        if ((float)local_40 < __real_3f800000 &&
            (0.0 <= (float)local_40 && (0.0 <= fStack_3c && fStack_3c < __real_3f800000))) {
          local_50 = local_58;
          uVar10._0_2_ = param_1->Source0SizeX;
          uVar10._2_2_ = param_1->Source0SizeY;
          FVar4 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<154>::ProcessPixelImpl'::
                  __l23::<lambda_4>::operator()
                            (&local_50,(TVector2<float>)&local_48,
                             (TIntVector2<unsigned_short>)local_40._s_0,(uchar *)(ulonglong)uVar10);
          local_48 = *(undefined8 *)FVar4.Data;
          uVar7._0_2_ = param_1->Source1SizeX;
          uVar7._2_2_ = param_1->Source1SizeY;
          local_68 = param_1->Source1Data;
          `UE::Mutable::Private::Private::TProjectedPixelProcessor<154>::ProcessPixelImpl'::__l23::
          <lambda_4>::operator()
                    (&local_50,(TVector2<float>)&local_40,(TIntVector2<unsigned_short>)local_40._s_0
                     ,(uchar *)(ulonglong)uVar7);
          uVar7 = (uint)(param_1->MipInterpolationFactor * __real_437f0000);
          uVar6 = (undefined2)uVar7;
          auVar12._0_4_ = CONCAT22(uVar6,uVar6);
          auVar12._4_4_ = auVar12._0_4_;
          if (__isa_available < 2) {
            uVar7 = uVar7 & 0xffff;
            lVar3 = 0;
            do {
              iVar18 = *(ushort *)((longlong)&local_40 + lVar3) * uVar7 +
                       (uint)*(ushort *)((longlong)&local_48 + lVar3) * (0xff - uVar7);
              *(short *)((longlong)&local_48 + lVar3) =
                   ((short)(iVar18 / 0xff) + (short)(iVar18 >> 0x1f)) -
                   (short)((longlong)iVar18 * 0x80808081 >> 0x3f);
              lVar3 = lVar3 + 2;
            } while (lVar3 < 8);
          }
          else {
            auVar19 = pmovzxwd(auVar17,local_48);
            auVar12._8_8_ = 0;
            auVar17 = pmovzxwd(auVar14,auVar12);
            auVar13._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar17._0_4_;
            auVar13._4_4_ = _UNK_150631f64 - auVar17._4_4_;
            auVar13._8_4_ = _UNK_150631f68 - auVar17._8_4_;
            auVar13._12_4_ = _UNK_150631f6c - auVar17._12_4_;
            auVar12 = pmulld(auVar19,auVar13);
            auVar14 = pmovzxwd(auVar13,CONCAT44(fStack_3c,local_40));
            auVar14 = pmulld(auVar14,auVar17);
            iVar18 = auVar12._0_4_ + auVar14._0_4_;
            iVar20 = auVar12._4_4_ + auVar14._4_4_;
            auVar15._4_4_ = iVar20;
            auVar15._0_4_ = iVar18;
            iVar21 = auVar12._8_4_ + auVar14._8_4_;
            iVar22 = auVar12._12_4_ + auVar14._12_4_;
            auVar15._8_4_ = iVar20;
            auVar15._12_4_ = iVar20;
            auVar19._8_8_ = auVar15._8_8_;
            auVar19._4_4_ = iVar18;
            auVar19._0_4_ = iVar18;
            auVar17 = pmuldq(auVar19,___xmm_80808081808080818080808180808081);
            auVar14._4_4_ = iVar21;
            auVar14._0_4_ = iVar21;
            auVar14._8_4_ = iVar22;
            auVar14._12_4_ = iVar22;
            auVar14 = pmuldq(auVar14,___xmm_80808081808080818080808180808081);
            iVar18 = auVar17._4_4_ + iVar18;
            iVar20 = auVar17._12_4_ + iVar20;
            iVar21 = auVar14._4_4_ + iVar21;
            iVar22 = auVar14._12_4_ + iVar22;
            auVar16._0_4_ = iVar18 >> 7;
            auVar16._4_4_ = iVar20 >> 7;
            auVar16._8_4_ = iVar21 >> 7;
            auVar16._12_4_ = iVar22 >> 7;
            auVar17._0_4_ = auVar16._0_4_ - (iVar18 >> 0x1f);
            auVar17._4_4_ = auVar16._4_4_ - (iVar20 >> 0x1f);
            auVar17._8_4_ = auVar16._8_4_ - (iVar21 >> 0x1f);
            auVar17._12_4_ = auVar16._12_4_ - (iVar22 >> 0x1f);
            auVar14 = pshufhw(auVar17,auVar17,0xd8);
            auVar14 = pshuflw(auVar16,auVar14,0xd8);
            local_48 = CONCAT44(auVar14._8_4_,auVar14._0_4_);
          }
          uVar7 = (uint)(short)param_1->RGBFadingEnabledMask;
          uVar10 = (uint)(short)param_1->AlphaFadingEnabledMask;
          uVar8 = uVar8 & 0xffff;
          iVar21 = (~uVar7 & (uint)uVar2) + (uVar8 & uVar7);
          iVar18 = (uint)(ushort)local_48 * iVar21;
          iVar20 = (uint)local_48._2_2_ * iVar21;
          *param_2 = ((char)(iVar18 / 0xff) + (char)(iVar18 >> 0x1f)) -
                     (char)((longlong)iVar18 * 0x80808081 >> 0x3f);
          iVar21 = (uint)local_48._4_2_ * iVar21;
          param_2[1] = ((char)(iVar20 / 0xff) + (char)(iVar20 >> 0x1f)) -
                       (char)((longlong)iVar20 * 0x80808081 >> 0x3f);
          iVar18 = ((~uVar10 & (uint)uVar2) + (uVar8 & uVar10)) * (uint)local_48._6_2_;
          param_2[2] = ((char)(iVar21 / 0xff) + (char)(iVar21 >> 0x1f)) -
                       (char)((longlong)iVar21 * 0x80808081 >> 0x3f);
          param_2[3] = ((char)(iVar18 / 0xff) + (char)(iVar18 >> 0x1f)) -
                       (char)((longlong)iVar18 * 0x80808081 >> 0x3f);
        }
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4ca00

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<164>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar1 = param_3[1];
    fVar7 = param_3[2];
    uVar4 = 0xff;
    if (__real_3f800000 < fVar7 * fVar7 + fVar1 * fVar1) {
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      fVar7 = FGenericPlatformMath::Atan2
                        (fVar7,(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000));
      fVar1 = *param_3;
      fVar7 = fVar7 * param_1->OneOverProjectionAngle + __real_3f000000;
      if (fVar7 < __real_3f800000 && (0.0 <= fVar7 && (0.0 <= fVar1 && fVar1 < __real_3f800000))) {
        uVar6 = (uint)(short)param_1->AlphaFadingEnabledMask;
        uVar3 = (uint)(short)param_1->RGBFadingEnabledMask;
        uVar2 = *(uint *)(param_1->Source0Data +
                         (int)((((int)ROUND((fVar1 + fVar1) * (float)param_1->Source0SizeY -
                                            __real_3f000000) >> 1) * (uint)param_1->Source0SizeX +
                               ((int)ROUND((fVar7 + fVar7) * (float)param_1->Source0SizeX -
                                           __real_3f000000) >> 1)) * 4));
        iVar5 = (~uVar3 & 0xff) + (uVar4 & uVar3);
        *param_2 = (uchar)((ulonglong)((uVar2 & 0xff) * iVar5) / 0xff);
        param_2[1] = (uchar)((ulonglong)((uVar2 >> 8 & 0xff) * iVar5) / 0xff);
        param_2[2] = (uchar)((ulonglong)((uVar2 >> 0x10 & 0xff) * iVar5) / 0xff);
        param_2[3] = (uchar)((ulonglong)(((uVar4 & uVar6) + (~uVar6 & 0xff)) * (uVar2 >> 0x18)) /
                            0xff);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4cbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<168>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  uint uVar4;
  FPixelData FVar2;
  undefined2 uVar3;
  ushort uVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  TIntVector2<unsigned_short> TVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  int iVar18;
  int iVar19;
  undefined1 auVar17 [16];
  int iVar20;
  undefined1 auStack_88 [32];
  uchar *local_68;
  undefined1 local_58 [8];
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined1 auVar12 [16];
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar1 = param_3[1];
    fVar8 = param_3[2];
    auVar17 = ZEXT416((uint)fVar8);
    uVar5 = 0xff;
    if (__real_3f800000 < fVar8 * fVar8 + fVar1 * fVar1) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      fVar8 = FGenericPlatformMath::Atan2
                        (fVar8,(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000));
      fVar8 = fVar8 * param_1->OneOverProjectionAngle;
      fVar1 = *param_3;
      auVar15 = ZEXT416((uint)fVar1);
      TVar10.field0_0x0 = (TIntVector2<unsigned_short>_u_0)(fVar8 + __real_3f000000);
      local_48 = CONCAT44(fVar1,TVar10.field0_0x0);
      if (fVar8 < __real_3f000000 &&
          (__real_bf000000 <= fVar8 && (0.0 <= fVar1 && fVar1 < __real_3f800000))) {
        local_50 = local_58;
        uVar7._0_2_ = param_1->Source0SizeX;
        uVar7._2_2_ = param_1->Source0SizeY;
        local_68 = param_1->Source0Data;
        FVar2 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<168>::ProcessPixelImpl'::
                __l20::<lambda_4>::operator()
                          (&local_50,(TVector2<float>)&local_40,TVar10,(uchar *)(ulonglong)uVar7);
        local_48 = *(undefined8 *)FVar2.Data;
        uVar4._0_2_ = param_1->Source1SizeX;
        uVar4._2_2_ = param_1->Source1SizeY;
        local_68 = param_1->Source1Data;
        `UE::Mutable::Private::Private::TProjectedPixelProcessor<168>::ProcessPixelImpl'::__l20::
        <lambda_4>::operator()
                  (&local_50,(TVector2<float>)&local_40,TVar10,(uchar *)(ulonglong)uVar4);
        uVar4 = (uint)(param_1->MipInterpolationFactor * __real_437f0000);
        uVar3 = (undefined2)uVar4;
        auVar9._0_4_ = CONCAT22(uVar3,uVar3);
        auVar9._4_4_ = auVar9._0_4_;
        if (__isa_available < 2) {
          uVar4 = uVar4 & 0xffff;
          lVar6 = 0;
          do {
            iVar16 = *(ushort *)((longlong)&local_40 + lVar6) * uVar4 +
                     (uint)*(ushort *)((longlong)&local_48 + lVar6) * (0xff - uVar4);
            *(short *)((longlong)&local_48 + lVar6) =
                 ((short)(iVar16 / 0xff) + (short)(iVar16 >> 0x1f)) -
                 (short)((longlong)iVar16 * 0x80808081 >> 0x3f);
            lVar6 = lVar6 + 2;
          } while (lVar6 < 8);
        }
        else {
          auVar17 = pmovzxwd(auVar17,local_48);
          auVar9._8_8_ = 0;
          auVar15 = pmovzxwd(auVar15,auVar9);
          auVar11._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar15._0_4_;
          auVar11._4_4_ = _UNK_150631f64 - auVar15._4_4_;
          auVar11._8_4_ = _UNK_150631f68 - auVar15._8_4_;
          auVar11._12_4_ = _UNK_150631f6c - auVar15._12_4_;
          auVar9 = pmulld(auVar17,auVar11);
          auVar17 = pmovzxwd(auVar11,local_40);
          auVar17 = pmulld(auVar17,auVar15);
          iVar16 = auVar9._0_4_ + auVar17._0_4_;
          iVar18 = auVar9._4_4_ + auVar17._4_4_;
          auVar13._4_4_ = iVar18;
          auVar13._0_4_ = iVar16;
          iVar19 = auVar9._8_4_ + auVar17._8_4_;
          iVar20 = auVar9._12_4_ + auVar17._12_4_;
          auVar13._8_4_ = iVar18;
          auVar13._12_4_ = iVar18;
          auVar12._8_8_ = auVar13._8_8_;
          auVar12._4_4_ = iVar16;
          auVar12._0_4_ = iVar16;
          auVar15 = pmuldq(auVar12,___xmm_80808081808080818080808180808081);
          auVar17._4_4_ = iVar19;
          auVar17._0_4_ = iVar19;
          auVar17._8_4_ = iVar20;
          auVar17._12_4_ = iVar20;
          auVar17 = pmuldq(auVar17,___xmm_80808081808080818080808180808081);
          iVar16 = auVar15._4_4_ + iVar16;
          iVar18 = auVar15._12_4_ + iVar18;
          iVar19 = auVar17._4_4_ + iVar19;
          iVar20 = auVar17._12_4_ + iVar20;
          auVar14._0_4_ = iVar16 >> 7;
          auVar14._4_4_ = iVar18 >> 7;
          auVar14._8_4_ = iVar19 >> 7;
          auVar14._12_4_ = iVar20 >> 7;
          auVar15._0_4_ = auVar14._0_4_ - (iVar16 >> 0x1f);
          auVar15._4_4_ = auVar14._4_4_ - (iVar18 >> 0x1f);
          auVar15._8_4_ = auVar14._8_4_ - (iVar19 >> 0x1f);
          auVar15._12_4_ = auVar14._12_4_ - (iVar20 >> 0x1f);
          auVar17 = pshufhw(auVar15,auVar15,0xd8);
          auVar17 = pshuflw(auVar14,auVar17,0xd8);
          local_48 = CONCAT44(auVar17._8_4_,auVar17._0_4_);
        }
        uVar4 = (uint)(short)param_1->RGBFadingEnabledMask;
        uVar7 = (uint)(short)param_1->AlphaFadingEnabledMask;
        iVar16 = (uVar5 & uVar4) + (~uVar4 & 0xff);
        *param_2 = (uchar)((ulonglong)((uint)(ushort)local_48 * iVar16) / 0xff);
        param_2[1] = (uchar)((ulonglong)((uint)local_48._2_2_ * iVar16) / 0xff);
        param_2[2] = (uchar)((ulonglong)((uint)local_48._4_2_ * iVar16) / 0xff);
        param_2[3] = (uchar)((ulonglong)(((uVar5 & uVar7) + (~uVar7 & 0xff)) * (uint)local_48._6_2_)
                            / 0xff);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4ceb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<170>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  uint uVar5;
  longlong lVar2;
  FPixelData FVar3;
  undefined2 uVar4;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  TIntVector2<unsigned_short> TVar11;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar19;
  int iVar20;
  undefined1 auVar18 [16];
  int iVar21;
  undefined1 auStack_88 [32];
  uchar *local_68;
  undefined1 local_58 [8];
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined1 auVar13 [16];
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar1 = param_3[1];
    fVar9 = param_3[2];
    auVar18 = ZEXT416((uint)fVar9);
    uVar6 = 0xff;
    if (__real_3f800000 < fVar9 * fVar9 + fVar1 * fVar1) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      if (param_1->MaskData == (uchar *)0x0) {
        uVar8 = 0xff;
      }
      else {
        lVar2 = (longlong)param_2 - (longlong)param_1->TargetData;
        uVar8 = (uint)param_1->MaskData
                      [(longlong)(lVar2 + (ulonglong)((uint)(lVar2 >> 0x3f) & 3)) >> 2];
      }
      uVar6 = (ushort)((ulonglong)(uVar8 * uVar6) / 0xff);
      if (uVar6 != 0) {
        fVar9 = FGenericPlatformMath::Atan2
                          (fVar9,(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000));
        fVar9 = fVar9 * param_1->OneOverProjectionAngle;
        fVar1 = *param_3;
        auVar16 = ZEXT416((uint)fVar1);
        TVar11.field0_0x0 = (TIntVector2<unsigned_short>_u_0)(fVar9 + __real_3f000000);
        local_48 = CONCAT44(fVar1,TVar11.field0_0x0);
        if (fVar9 < __real_3f000000 &&
            (__real_bf000000 <= fVar9 && (0.0 <= fVar1 && fVar1 < __real_3f800000))) {
          local_50 = local_58;
          uVar7._0_2_ = param_1->Source0SizeX;
          uVar7._2_2_ = param_1->Source0SizeY;
          local_68 = param_1->Source0Data;
          FVar3 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<170>::ProcessPixelImpl'::
                  __l23::<lambda_4>::operator()
                            (&local_50,(TVector2<float>)&local_40,TVar11,(uchar *)(ulonglong)uVar7);
          local_48 = *(undefined8 *)FVar3.Data;
          uVar5._0_2_ = param_1->Source1SizeX;
          uVar5._2_2_ = param_1->Source1SizeY;
          local_68 = param_1->Source1Data;
          `UE::Mutable::Private::Private::TProjectedPixelProcessor<170>::ProcessPixelImpl'::__l23::
          <lambda_4>::operator()
                    (&local_50,(TVector2<float>)&local_40,TVar11,(uchar *)(ulonglong)uVar5);
          uVar5 = (uint)(param_1->MipInterpolationFactor * __real_437f0000);
          uVar4 = (undefined2)uVar5;
          auVar10._0_4_ = CONCAT22(uVar4,uVar4);
          auVar10._4_4_ = auVar10._0_4_;
          if (__isa_available < 2) {
            uVar5 = uVar5 & 0xffff;
            lVar2 = 0;
            do {
              iVar17 = *(ushort *)((longlong)&local_40 + lVar2) * uVar5 +
                       (uint)*(ushort *)((longlong)&local_48 + lVar2) * (0xff - uVar5);
              *(short *)((longlong)&local_48 + lVar2) =
                   ((short)(iVar17 / 0xff) + (short)(iVar17 >> 0x1f)) -
                   (short)((longlong)iVar17 * 0x80808081 >> 0x3f);
              lVar2 = lVar2 + 2;
            } while (lVar2 < 8);
          }
          else {
            auVar18 = pmovzxwd(auVar18,local_48);
            auVar10._8_8_ = 0;
            auVar16 = pmovzxwd(auVar16,auVar10);
            auVar12._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar16._0_4_;
            auVar12._4_4_ = _UNK_150631f64 - auVar16._4_4_;
            auVar12._8_4_ = _UNK_150631f68 - auVar16._8_4_;
            auVar12._12_4_ = _UNK_150631f6c - auVar16._12_4_;
            auVar10 = pmulld(auVar18,auVar12);
            auVar18 = pmovzxwd(auVar12,local_40);
            auVar18 = pmulld(auVar18,auVar16);
            iVar17 = auVar10._0_4_ + auVar18._0_4_;
            iVar19 = auVar10._4_4_ + auVar18._4_4_;
            auVar14._4_4_ = iVar19;
            auVar14._0_4_ = iVar17;
            iVar20 = auVar10._8_4_ + auVar18._8_4_;
            iVar21 = auVar10._12_4_ + auVar18._12_4_;
            auVar14._8_4_ = iVar19;
            auVar14._12_4_ = iVar19;
            auVar13._8_8_ = auVar14._8_8_;
            auVar13._4_4_ = iVar17;
            auVar13._0_4_ = iVar17;
            auVar16 = pmuldq(auVar13,___xmm_80808081808080818080808180808081);
            auVar18._4_4_ = iVar20;
            auVar18._0_4_ = iVar20;
            auVar18._8_4_ = iVar21;
            auVar18._12_4_ = iVar21;
            auVar18 = pmuldq(auVar18,___xmm_80808081808080818080808180808081);
            iVar17 = auVar16._4_4_ + iVar17;
            iVar19 = auVar16._12_4_ + iVar19;
            iVar20 = auVar18._4_4_ + iVar20;
            iVar21 = auVar18._12_4_ + iVar21;
            auVar15._0_4_ = iVar17 >> 7;
            auVar15._4_4_ = iVar19 >> 7;
            auVar15._8_4_ = iVar20 >> 7;
            auVar15._12_4_ = iVar21 >> 7;
            auVar16._0_4_ = auVar15._0_4_ - (iVar17 >> 0x1f);
            auVar16._4_4_ = auVar15._4_4_ - (iVar19 >> 0x1f);
            auVar16._8_4_ = auVar15._8_4_ - (iVar20 >> 0x1f);
            auVar16._12_4_ = auVar15._12_4_ - (iVar21 >> 0x1f);
            auVar18 = pshufhw(auVar16,auVar16,0xd8);
            auVar18 = pshuflw(auVar15,auVar18,0xd8);
            local_48 = CONCAT44(auVar18._8_4_,auVar18._0_4_);
          }
          uVar5 = (uint)(short)param_1->RGBFadingEnabledMask;
          uVar7 = (uint)(short)param_1->AlphaFadingEnabledMask;
          iVar17 = (~uVar5 & uVar8) + (uVar6 & uVar5);
          *param_2 = (uchar)(((uint)(ushort)local_48 * iVar17) / 0xff);
          param_2[1] = (uchar)(((uint)local_48._2_2_ * iVar17) / 0xff);
          param_2[2] = (uchar)(((uint)local_48._4_2_ * iVar17) / 0xff);
          param_2[3] = (uchar)((((~uVar7 & uVar8) + (uVar6 & uVar7)) * (uint)local_48._6_2_) / 0xff)
          ;
        }
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4d230

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<196>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  
  if ((param_1->Source0Data != (uchar *)0x0) &&
     (uVar5 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff, uVar5 != 0)) {
    fVar1 = param_3[1];
    fVar2 = *param_3;
    if (fVar2 < __real_3f800000 && (0.0 <= fVar2 && (0.0 <= fVar1 && fVar1 < __real_3f800000))) {
      uVar7 = (uint)(short)param_1->AlphaFadingEnabledMask;
      uVar4 = (uint)(short)param_1->RGBFadingEnabledMask;
      uVar3 = *(uint *)(param_1->Source0Data +
                       (int)((((int)ROUND((fVar2 + fVar2) * (float)param_1->Source0SizeX -
                                          __real_3f000000) >> 1) +
                             ((int)ROUND((fVar1 + fVar1) * (float)param_1->Source0SizeY -
                                         __real_3f000000) >> 1) * (uint)param_1->Source0SizeX) * 4))
      ;
      iVar6 = (~uVar4 & 0xff) + (uVar5 & uVar4);
      *param_2 = (uchar)((ulonglong)((uVar3 & 0xff) * iVar6) / 0xff);
      param_2[1] = (uchar)((ulonglong)((uVar3 >> 8 & 0xff) * iVar6) / 0xff);
      param_2[2] = (uchar)((ulonglong)((uVar3 >> 0x10 & 0xff) * iVar6) / 0xff);
      param_2[3] = (uchar)((ulonglong)(((uVar7 & uVar5) + (~uVar7 & 0xff)) * (uVar3 >> 0x18)) / 0xff
                          );
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4d3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<200>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  uint uVar3;
  FPixelData FVar1;
  undefined2 uVar2;
  ushort uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  int iVar15;
  int iVar16;
  undefined1 auVar14 [16];
  int iVar17;
  undefined1 auStack_78 [32];
  uchar *local_58;
  undefined1 local_48 [8];
  undefined1 *local_40;
  undefined8 local_38;
  TIntVector2<unsigned_short>_u_0 local_30;
  float fStack_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = param_1->Source0Data;
  if (local_58 != (uchar *)0x0) {
    auVar12 = ZEXT816(0);
    auVar9 = ZEXT416((uint)__real_3f800000);
    uVar4 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (uVar4 != 0) {
      fStack_2c = param_3[1];
      local_30 = (TIntVector2<unsigned_short>_u_0)*param_3;
      if ((float)local_30 < __real_3f800000 &&
          (0.0 <= (float)local_30 && (0.0 <= fStack_2c && fStack_2c < __real_3f800000))) {
        local_40 = local_48;
        uVar6._0_2_ = param_1->Source0SizeX;
        uVar6._2_2_ = param_1->Source0SizeY;
        FVar1 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<200>::ProcessPixelImpl'::
                __l20::<lambda_4>::operator()
                          (&local_40,(TVector2<float>)&local_38,
                           (TIntVector2<unsigned_short>)local_30._s_0,(uchar *)(ulonglong)uVar6);
        local_38 = *(undefined8 *)FVar1.Data;
        uVar3._0_2_ = param_1->Source1SizeX;
        uVar3._2_2_ = param_1->Source1SizeY;
        local_58 = param_1->Source1Data;
        `UE::Mutable::Private::Private::TProjectedPixelProcessor<200>::ProcessPixelImpl'::__l20::
        <lambda_4>::operator()
                  (&local_40,(TVector2<float>)&local_30,(TIntVector2<unsigned_short>)local_30._s_0,
                   (uchar *)(ulonglong)uVar3);
        uVar3 = (uint)(param_1->MipInterpolationFactor * __real_437f0000);
        uVar2 = (undefined2)uVar3;
        auVar7._0_4_ = CONCAT22(uVar2,uVar2);
        auVar7._4_4_ = auVar7._0_4_;
        if (__isa_available < 2) {
          uVar3 = uVar3 & 0xffff;
          lVar5 = 0;
          do {
            iVar13 = *(ushort *)((longlong)&local_30 + lVar5) * uVar3 +
                     (uint)*(ushort *)((longlong)&local_38 + lVar5) * (0xff - uVar3);
            *(short *)((longlong)&local_38 + lVar5) =
                 ((short)(iVar13 / 0xff) + (short)(iVar13 >> 0x1f)) -
                 (short)((longlong)iVar13 * 0x80808081 >> 0x3f);
            lVar5 = lVar5 + 2;
          } while (lVar5 < 8);
        }
        else {
          auVar14 = pmovzxwd(auVar12,local_38);
          auVar7._8_8_ = 0;
          auVar12 = pmovzxwd(auVar9,auVar7);
          auVar8._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar12._0_4_;
          auVar8._4_4_ = _UNK_150631f64 - auVar12._4_4_;
          auVar8._8_4_ = _UNK_150631f68 - auVar12._8_4_;
          auVar8._12_4_ = _UNK_150631f6c - auVar12._12_4_;
          auVar7 = pmulld(auVar14,auVar8);
          auVar9 = pmovzxwd(auVar8,CONCAT44(fStack_2c,local_30));
          auVar9 = pmulld(auVar9,auVar12);
          iVar13 = auVar7._0_4_ + auVar9._0_4_;
          iVar15 = auVar7._4_4_ + auVar9._4_4_;
          auVar10._4_4_ = iVar15;
          auVar10._0_4_ = iVar13;
          iVar16 = auVar7._8_4_ + auVar9._8_4_;
          iVar17 = auVar7._12_4_ + auVar9._12_4_;
          auVar10._8_4_ = iVar15;
          auVar10._12_4_ = iVar15;
          auVar14._8_8_ = auVar10._8_8_;
          auVar14._4_4_ = iVar13;
          auVar14._0_4_ = iVar13;
          auVar12 = pmuldq(auVar14,___xmm_80808081808080818080808180808081);
          auVar9._4_4_ = iVar16;
          auVar9._0_4_ = iVar16;
          auVar9._8_4_ = iVar17;
          auVar9._12_4_ = iVar17;
          auVar9 = pmuldq(auVar9,___xmm_80808081808080818080808180808081);
          iVar13 = auVar12._4_4_ + iVar13;
          iVar15 = auVar12._12_4_ + iVar15;
          iVar16 = auVar9._4_4_ + iVar16;
          iVar17 = auVar9._12_4_ + iVar17;
          auVar11._0_4_ = iVar13 >> 7;
          auVar11._4_4_ = iVar15 >> 7;
          auVar11._8_4_ = iVar16 >> 7;
          auVar11._12_4_ = iVar17 >> 7;
          auVar12._0_4_ = auVar11._0_4_ - (iVar13 >> 0x1f);
          auVar12._4_4_ = auVar11._4_4_ - (iVar15 >> 0x1f);
          auVar12._8_4_ = auVar11._8_4_ - (iVar16 >> 0x1f);
          auVar12._12_4_ = auVar11._12_4_ - (iVar17 >> 0x1f);
          auVar9 = pshufhw(auVar12,auVar12,0xd8);
          auVar9 = pshuflw(auVar11,auVar9,0xd8);
          local_38 = CONCAT44(auVar9._8_4_,auVar9._0_4_);
        }
        uVar3 = (uint)(short)param_1->RGBFadingEnabledMask;
        uVar6 = (uint)(short)param_1->AlphaFadingEnabledMask;
        iVar13 = (~uVar3 & 0xff) + (uVar4 & uVar3);
        *param_2 = (uchar)((ulonglong)((uint)(ushort)local_38 * iVar13) / 0xff);
        param_2[1] = (uchar)((ulonglong)((uint)local_38._2_2_ * iVar13) / 0xff);
        param_2[2] = (uchar)((ulonglong)((uint)local_38._4_2_ * iVar13) / 0xff);
        param_2[3] = (uchar)((ulonglong)(((uVar4 & uVar6) + (~uVar6 & 0xff)) * (uint)local_38._6_2_)
                            / 0xff);
      }
    }
  }
  return;
}

// ProcessPixelImpl @ 14ab4d6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<202>::ProcessPixelImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  uint uVar5;
  longlong lVar1;
  FPixelData FVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar17;
  int iVar18;
  undefined1 auVar16 [16];
  int iVar19;
  undefined1 auStack_88 [32];
  uchar *local_68;
  undefined1 local_58 [8];
  undefined1 *local_50;
  undefined8 local_48;
  TIntVector2<unsigned_short>_u_0 local_40;
  float fStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = param_1->Source0Data;
  if (local_68 != (uchar *)0x0) {
    auVar14 = ZEXT816(0);
    auVar11 = ZEXT416((uint)__real_3f800000);
    uVar3 = ((__real_3f800000 < param_3[2] || param_3[2] < 0.0) ^ 1) * 0xff;
    if (uVar3 != 0) {
      if (param_1->MaskData == (uchar *)0x0) {
        uVar8 = 0xff;
      }
      else {
        lVar1 = (longlong)param_2 - (longlong)param_1->TargetData;
        uVar8 = (uint)param_1->MaskData
                      [(longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 3)) >> 2];
      }
      uVar6 = (uVar3 * uVar8) / 0xff;
      if ((short)uVar6 != 0) {
        fStack_3c = param_3[1];
        local_40 = (TIntVector2<unsigned_short>_u_0)*param_3;
        if ((float)local_40 < __real_3f800000 &&
            (0.0 <= (float)local_40 && (0.0 <= fStack_3c && fStack_3c < __real_3f800000))) {
          local_50 = local_58;
          uVar7._0_2_ = param_1->Source0SizeX;
          uVar7._2_2_ = param_1->Source0SizeY;
          FVar2 = `UE::Mutable::Private::Private::TProjectedPixelProcessor<202>::ProcessPixelImpl'::
                  __l23::<lambda_4>::operator()
                            (&local_50,(TVector2<float>)&local_48,
                             (TIntVector2<unsigned_short>)local_40._s_0,(uchar *)(ulonglong)uVar7);
          local_48 = *(undefined8 *)FVar2.Data;
          uVar5._0_2_ = param_1->Source1SizeX;
          uVar5._2_2_ = param_1->Source1SizeY;
          local_68 = param_1->Source1Data;
          `UE::Mutable::Private::Private::TProjectedPixelProcessor<202>::ProcessPixelImpl'::__l23::
          <lambda_4>::operator()
                    (&local_50,(TVector2<float>)&local_40,(TIntVector2<unsigned_short>)local_40._s_0
                     ,(uchar *)(ulonglong)uVar5);
          uVar5 = (uint)(param_1->MipInterpolationFactor * __real_437f0000);
          uVar4 = (undefined2)uVar5;
          auVar9._0_4_ = CONCAT22(uVar4,uVar4);
          auVar9._4_4_ = auVar9._0_4_;
          if (__isa_available < 2) {
            uVar5 = uVar5 & 0xffff;
            lVar1 = 0;
            do {
              iVar15 = *(ushort *)((longlong)&local_40 + lVar1) * uVar5 +
                       (uint)*(ushort *)((longlong)&local_48 + lVar1) * (0xff - uVar5);
              *(short *)((longlong)&local_48 + lVar1) =
                   ((short)(iVar15 / 0xff) + (short)(iVar15 >> 0x1f)) -
                   (short)((longlong)iVar15 * 0x80808081 >> 0x3f);
              lVar1 = lVar1 + 2;
            } while (lVar1 < 8);
          }
          else {
            auVar16 = pmovzxwd(auVar14,local_48);
            auVar9._8_8_ = 0;
            auVar14 = pmovzxwd(auVar11,auVar9);
            auVar10._0_4_ = ___xmm_000000ff000000ff000000ff000000ff - auVar14._0_4_;
            auVar10._4_4_ = _UNK_150631f64 - auVar14._4_4_;
            auVar10._8_4_ = _UNK_150631f68 - auVar14._8_4_;
            auVar10._12_4_ = _UNK_150631f6c - auVar14._12_4_;
            auVar9 = pmulld(auVar16,auVar10);
            auVar11 = pmovzxwd(auVar10,CONCAT44(fStack_3c,local_40));
            auVar11 = pmulld(auVar11,auVar14);
            iVar15 = auVar9._0_4_ + auVar11._0_4_;
            iVar17 = auVar9._4_4_ + auVar11._4_4_;
            auVar12._4_4_ = iVar17;
            auVar12._0_4_ = iVar15;
            iVar18 = auVar9._8_4_ + auVar11._8_4_;
            iVar19 = auVar9._12_4_ + auVar11._12_4_;
            auVar12._8_4_ = iVar17;
            auVar12._12_4_ = iVar17;
            auVar16._8_8_ = auVar12._8_8_;
            auVar16._4_4_ = iVar15;
            auVar16._0_4_ = iVar15;
            auVar14 = pmuldq(auVar16,___xmm_80808081808080818080808180808081);
            auVar11._4_4_ = iVar18;
            auVar11._0_4_ = iVar18;
            auVar11._8_4_ = iVar19;
            auVar11._12_4_ = iVar19;
            auVar11 = pmuldq(auVar11,___xmm_80808081808080818080808180808081);
            iVar15 = auVar14._4_4_ + iVar15;
            iVar17 = auVar14._12_4_ + iVar17;
            iVar18 = auVar11._4_4_ + iVar18;
            iVar19 = auVar11._12_4_ + iVar19;
            auVar13._0_4_ = iVar15 >> 7;
            auVar13._4_4_ = iVar17 >> 7;
            auVar13._8_4_ = iVar18 >> 7;
            auVar13._12_4_ = iVar19 >> 7;
            auVar14._0_4_ = auVar13._0_4_ - (iVar15 >> 0x1f);
            auVar14._4_4_ = auVar13._4_4_ - (iVar17 >> 0x1f);
            auVar14._8_4_ = auVar13._8_4_ - (iVar18 >> 0x1f);
            auVar14._12_4_ = auVar13._12_4_ - (iVar19 >> 0x1f);
            auVar11 = pshufhw(auVar14,auVar14,0xd8);
            auVar11 = pshuflw(auVar13,auVar11,0xd8);
            local_48 = CONCAT44(auVar11._8_4_,auVar11._0_4_);
          }
          uVar5 = (uint)(short)param_1->RGBFadingEnabledMask;
          uVar7 = (uint)(short)param_1->AlphaFadingEnabledMask;
          iVar15 = (~uVar5 & uVar8) + (uVar5 & uVar6);
          *param_2 = (uchar)(((uint)(ushort)local_48 * iVar15) / 0xff);
          param_2[1] = (uchar)(((uint)local_48._2_2_ * iVar15) / 0xff);
          param_2[2] = (uchar)(((uint)local_48._4_2_ * iVar15) / 0xff);
          param_2[3] = (uchar)((((~uVar7 & uVar8) + (uVar6 & uVar7)) * (uint)local_48._6_2_) / 0xff)
          ;
        }
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab4da00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1176>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uint uVar2;
  uchar *puVar3;
  uchar *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  puVar3 = param_1->Source0Data;
  if (puVar3 != (uchar *)0x0) {
    fVar30 = param_3[3];
    fVar49 = (fVar30 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    if (__real_437f0000 <= fVar49) {
      fVar49 = __real_437f0000;
    }
    if (fVar49 <= 0.0) {
      fVar49 = 0.0;
    }
    fVar11 = (float)(param_3[2] <= __real_3f800000 && 0.0 <= param_3[2]) * __real_437f0000;
    if (fVar11 <= fVar49) {
      fVar49 = fVar11;
    }
    fVar11 = __real_437f0000;
    if (fVar30 < param_1->FadeEndCos || fVar30 == param_1->FadeEndCos) {
      fVar11 = 0.0;
    }
    if (__real_322bcc77 < fVar49) {
      fVar30 = param_3[1];
      fVar34 = *param_3;
      if (fVar34 < __real_3f800000 && (0.0 <= fVar34 && (0.0 <= fVar30 && fVar30 < __real_3f800000))
         ) {
        uVar1 = param_1->Source0SizeY;
        uVar9 = (uint)param_1->Source1SizeX;
        uVar10 = (uint)param_1->Source0SizeX;
        fVar12 = (float)param_1->Source1SizeY;
        iVar16 = uVar10 - GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar17 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar18 = uVar9 - GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar19 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
        auVar15._0_4_ = (float)uVar10 - GlobalVectorConstants::FloatOne.m128_f32[0];
        auVar15._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
        auVar15._8_4_ = (float)uVar9 - GlobalVectorConstants::FloatOne.m128_f32[2];
        auVar15._12_4_ = fVar12 - GlobalVectorConstants::FloatOne.m128_f32[3];
        auVar13._0_4_ =
             fVar34 * (float)uVar10 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
        auVar13._4_4_ = fVar30 * (float)uVar1 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1]
        ;
        auVar13._8_4_ = fVar34 * (float)uVar9 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2]
        ;
        auVar13._12_4_ = fVar30 * fVar12 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
        auVar14 = maxps(auVar13,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar15 = minps(auVar14,auVar15);
        iVar20 = (int)auVar15._0_4_;
        iVar21 = (int)auVar15._4_4_;
        iVar22 = (int)auVar15._8_4_;
        iVar23 = (int)auVar15._12_4_;
        auVar14 = roundps(ZEXT216(uVar1),auVar15,1);
        fVar45 = auVar15._0_4_ - auVar14._0_4_;
        fVar46 = auVar15._4_4_ - auVar14._4_4_;
        fVar47 = auVar15._8_4_ - auVar14._8_4_;
        fVar48 = auVar15._12_4_ - auVar14._12_4_;
        iVar24 = iVar20 + GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar26 = iVar21 + GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar27 = iVar22 + GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar29 = iVar23 + GlobalVectorConstants::IntOne.m128i_i32[3];
        uVar25 = (uint)(iVar16 < iVar24) * iVar16 | (uint)(iVar16 >= iVar24) * iVar24;
        uVar28 = (uint)(iVar18 < iVar27) * iVar18 | (uint)(iVar18 >= iVar27) * iVar27;
        iVar21 = iVar21 * uVar10;
        uVar10 = *(uint *)(puVar3 + (iVar21 + iVar20) * 4);
        uVar2 = *(uint *)(puVar3 + (int)((iVar21 + uVar25) * 4));
        fVar34 = (float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar12 = (float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar35 = (float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar36 = (float)(uVar10 >> 0x18) * _UNK_1508be4cc;
        iVar21 = ((uint)(iVar17 < iVar26) * iVar17 | (uint)(iVar17 >= iVar26) * iVar26) *
                 (uint)param_1->Source0SizeX;
        uVar10 = *(uint *)(puVar3 + (iVar21 + iVar20) * 4);
        puVar4 = param_1->Source1Data;
        uVar25 = *(uint *)(puVar3 + (int)((iVar21 + uVar25) * 4));
        iVar23 = iVar23 * uVar9;
        fVar30 = (float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar31 = (float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar32 = (float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar33 = (float)(uVar10 >> 0x18) * _UNK_1508be4cc;
        uVar10 = *(uint *)(puVar4 + (iVar23 + iVar22) * 4);
        fVar41 = (float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar42 = (float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar43 = (float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar44 = (float)(uVar10 >> 0x18) * _UNK_1508be4cc;
        iVar21 = ((uint)(iVar19 < iVar29) * iVar19 | (uint)(iVar19 >= iVar29) * iVar29) *
                 (uint)param_1->Source1SizeX;
        uVar10 = *(uint *)(puVar4 + (int)((iVar23 + uVar28) * 4));
        uVar9 = *(uint *)(puVar4 + (iVar21 + iVar22) * 4);
        uVar28 = *(uint *)(puVar4 + (int)((iVar21 + uVar28) * 4));
        fVar37 = (float)(uVar9 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar38 = (float)(uVar9 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar39 = (float)(uVar9 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar40 = (float)(uVar9 >> 0x18) * _UNK_1508be4cc;
        fVar34 = ((float)(uVar2 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar34) * fVar45
                 + fVar34;
        fVar12 = ((float)(uVar2 >> 8 & 0xff) * _UNK_1508be4c4 - fVar12) * fVar45 + fVar12;
        fVar35 = ((float)(uVar2 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar35) * fVar45 + fVar35;
        fVar36 = ((float)(uVar2 >> 0x18) * _UNK_1508be4cc - fVar36) * fVar45 + fVar36;
        fVar34 = ((((float)(uVar25 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar30) *
                   fVar45 + fVar30) - fVar34) * fVar46 + fVar34;
        fVar12 = ((((float)(uVar25 >> 8 & 0xff) * _UNK_1508be4c4 - fVar31) * fVar45 + fVar31) -
                 fVar12) * fVar46 + fVar12;
        fVar35 = ((((float)(uVar25 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar32) * fVar45 + fVar32) -
                 fVar35) * fVar46 + fVar35;
        fVar36 = ((((float)(uVar25 >> 0x18) * _UNK_1508be4cc - fVar33) * fVar45 + fVar33) - fVar36)
                 * fVar46 + fVar36;
        uVar2 = param_1->RGBFadingEnabledMask;
        fVar41 = ((float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar41) *
                 fVar47 + fVar41;
        fVar42 = ((float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4 - fVar42) * fVar47 + fVar42;
        fVar43 = ((float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar43) * fVar47 + fVar43;
        fVar44 = ((float)(uVar10 >> 0x18) * _UNK_1508be4cc - fVar44) * fVar47 + fVar44;
        fVar30 = param_1->MipInterpolationFactor;
        auVar14._0_4_ =
             (int)((((((((float)(uVar28 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar37)
                        * fVar47 + fVar37) - fVar41) * fVar48 + fVar41) - fVar34) * fVar30 + fVar34)
                  * (float)(~uVar2 & (uint)fVar11 | (uint)fVar49 & uVar2));
        auVar14._4_4_ =
             (int)((((((((float)(uVar28 >> 8 & 0xff) * _UNK_1508be4c4 - fVar38) * fVar47 + fVar38) -
                      fVar42) * fVar48 + fVar42) - fVar12) * fVar30 + fVar12) *
                  (float)(~uVar2 & (uint)fVar11 | (uint)fVar49 & uVar2));
        auVar14._8_4_ =
             (int)((((((((float)(uVar28 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar39) * fVar47 + fVar39
                       ) - fVar43) * fVar48 + fVar43) - fVar35) * fVar30 + fVar35) *
                  (float)(~uVar2 & (uint)fVar11 | (uint)fVar49 & uVar2));
        auVar14._12_4_ =
             (int)((((((((float)(uVar28 >> 0x18) * _UNK_1508be4cc - fVar40) * fVar47 + fVar40) -
                      fVar44) * fVar48 + fVar44) - fVar36) * fVar30 + fVar36) *
                  (float)(~param_1->AlphaFadingEnabledMask & (uint)fVar11 |
                         (uint)fVar49 & param_1->AlphaFadingEnabledMask));
        auVar14 = packssdw(auVar14,auVar14);
        sVar5 = auVar14._0_2_;
        sVar6 = auVar14._2_2_;
        sVar7 = auVar14._4_2_;
        sVar8 = auVar14._6_2_;
        *(uint *)param_2 =
             CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar14[6] - (0xff < sVar8),
                      CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar14[4] - (0xff < sVar7),
                               CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar14[2] - (0xff < sVar6),
                                        (0 < sVar5) * (sVar5 < 0x100) * auVar14[0] - (0xff < sVar5))
                              ));
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab4dfc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1178>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uint uVar2;
  uchar *puVar3;
  uchar *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  
  puVar3 = param_1->Source0Data;
  if (puVar3 != (uchar *)0x0) {
    fVar50 = param_3[3];
    fVar49 = (fVar50 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    if (__real_437f0000 <= fVar49) {
      fVar49 = __real_437f0000;
    }
    if (fVar49 <= 0.0) {
      fVar49 = 0.0;
    }
    fVar12 = (float)(param_3[2] <= __real_3f800000 && 0.0 <= param_3[2]) * __real_437f0000;
    if (fVar12 <= fVar49) {
      fVar49 = fVar12;
    }
    fVar12 = __real_437f0000;
    if (fVar50 < param_1->FadeEndCos || fVar50 == param_1->FadeEndCos) {
      fVar12 = 0.0;
    }
    if (__real_322bcc77 < fVar49) {
      if ((0.0 < fVar12) && (param_1->MaskData != (uchar *)0x0)) {
        lVar9 = (longlong)param_2 - (longlong)param_1->TargetData;
        fVar12 = (float)param_1->MaskData
                        [(longlong)(lVar9 + (ulonglong)((uint)(lVar9 >> 0x3f) & 3)) >> 2];
      }
      fVar50 = fVar49 * fVar12 * __real_3b808081;
      if (__real_322bcc77 < fVar50) {
        fVar49 = param_3[1];
        fVar34 = *param_3;
        if (fVar34 < __real_3f800000 &&
            (0.0 <= fVar34 && (0.0 <= fVar49 && fVar49 < __real_3f800000))) {
          uVar1 = param_1->Source0SizeY;
          uVar10 = (uint)param_1->Source1SizeX;
          uVar11 = (uint)param_1->Source0SizeX;
          fVar13 = (float)param_1->Source1SizeY;
          iVar17 = uVar11 - GlobalVectorConstants::IntOne.m128i_i32[0];
          iVar18 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
          iVar19 = uVar10 - GlobalVectorConstants::IntOne.m128i_i32[2];
          iVar20 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
          auVar16._0_4_ = (float)uVar11 - GlobalVectorConstants::FloatOne.m128_f32[0];
          auVar16._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
          auVar16._8_4_ = (float)uVar10 - GlobalVectorConstants::FloatOne.m128_f32[2];
          auVar16._12_4_ = fVar13 - GlobalVectorConstants::FloatOne.m128_f32[3];
          auVar14._0_4_ =
               fVar34 * (float)uVar11 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
          auVar14._4_4_ =
               fVar49 * (float)uVar1 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1];
          auVar14._8_4_ =
               fVar34 * (float)uVar10 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
          auVar14._12_4_ = fVar49 * fVar13 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
          auVar15 = maxps(auVar14,(undefined1  [16])GlobalVectorConstants::FloatZero);
          auVar16 = minps(auVar15,auVar16);
          iVar21 = (int)auVar16._0_4_;
          iVar22 = (int)auVar16._4_4_;
          iVar23 = (int)auVar16._8_4_;
          iVar24 = (int)auVar16._12_4_;
          auVar15 = roundps(ZEXT216(uVar1),auVar16,1);
          fVar45 = auVar16._0_4_ - auVar15._0_4_;
          fVar46 = auVar16._4_4_ - auVar15._4_4_;
          fVar47 = auVar16._8_4_ - auVar15._8_4_;
          fVar48 = auVar16._12_4_ - auVar15._12_4_;
          iVar25 = iVar21 + GlobalVectorConstants::IntOne.m128i_i32[0];
          iVar27 = iVar22 + GlobalVectorConstants::IntOne.m128i_i32[1];
          iVar28 = iVar23 + GlobalVectorConstants::IntOne.m128i_i32[2];
          iVar30 = iVar24 + GlobalVectorConstants::IntOne.m128i_i32[3];
          uVar26 = (uint)(iVar17 < iVar25) * iVar17 | (uint)(iVar17 >= iVar25) * iVar25;
          uVar29 = (uint)(iVar19 < iVar28) * iVar19 | (uint)(iVar19 >= iVar28) * iVar28;
          iVar22 = iVar22 * uVar11;
          uVar11 = *(uint *)(puVar3 + (iVar22 + iVar21) * 4);
          uVar2 = *(uint *)(puVar3 + (int)((iVar22 + uVar26) * 4));
          fVar34 = (float)(uVar11 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
          fVar13 = (float)(uVar11 >> 8 & 0xff) * _UNK_1508be4c4;
          fVar35 = (float)(uVar11 >> 0x10 & 0xff) * _UNK_1508be4c8;
          fVar36 = (float)(uVar11 >> 0x18) * _UNK_1508be4cc;
          iVar22 = ((uint)(iVar18 < iVar27) * iVar18 | (uint)(iVar18 >= iVar27) * iVar27) *
                   (uint)param_1->Source0SizeX;
          uVar11 = *(uint *)(puVar3 + (iVar22 + iVar21) * 4);
          puVar4 = param_1->Source1Data;
          uVar26 = *(uint *)(puVar3 + (int)((iVar22 + uVar26) * 4));
          iVar24 = iVar24 * uVar10;
          fVar49 = (float)(uVar11 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
          fVar31 = (float)(uVar11 >> 8 & 0xff) * _UNK_1508be4c4;
          fVar32 = (float)(uVar11 >> 0x10 & 0xff) * _UNK_1508be4c8;
          fVar33 = (float)(uVar11 >> 0x18) * _UNK_1508be4cc;
          uVar11 = *(uint *)(puVar4 + (iVar24 + iVar23) * 4);
          fVar41 = (float)(uVar11 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
          fVar42 = (float)(uVar11 >> 8 & 0xff) * _UNK_1508be4c4;
          fVar43 = (float)(uVar11 >> 0x10 & 0xff) * _UNK_1508be4c8;
          fVar44 = (float)(uVar11 >> 0x18) * _UNK_1508be4cc;
          iVar22 = ((uint)(iVar20 < iVar30) * iVar20 | (uint)(iVar20 >= iVar30) * iVar30) *
                   (uint)param_1->Source1SizeX;
          uVar11 = *(uint *)(puVar4 + (int)((iVar24 + uVar29) * 4));
          uVar10 = *(uint *)(puVar4 + (iVar22 + iVar23) * 4);
          uVar29 = *(uint *)(puVar4 + (int)((iVar22 + uVar29) * 4));
          fVar37 = (float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
          fVar38 = (float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4;
          fVar39 = (float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8;
          fVar40 = (float)(uVar10 >> 0x18) * _UNK_1508be4cc;
          fVar34 = ((float)(uVar2 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar34) *
                   fVar45 + fVar34;
          fVar13 = ((float)(uVar2 >> 8 & 0xff) * _UNK_1508be4c4 - fVar13) * fVar45 + fVar13;
          fVar35 = ((float)(uVar2 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar35) * fVar45 + fVar35;
          fVar36 = ((float)(uVar2 >> 0x18) * _UNK_1508be4cc - fVar36) * fVar45 + fVar36;
          fVar34 = ((((float)(uVar26 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar49) *
                     fVar45 + fVar49) - fVar34) * fVar46 + fVar34;
          fVar13 = ((((float)(uVar26 >> 8 & 0xff) * _UNK_1508be4c4 - fVar31) * fVar45 + fVar31) -
                   fVar13) * fVar46 + fVar13;
          fVar35 = ((((float)(uVar26 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar32) * fVar45 + fVar32) -
                   fVar35) * fVar46 + fVar35;
          fVar36 = ((((float)(uVar26 >> 0x18) * _UNK_1508be4cc - fVar33) * fVar45 + fVar33) - fVar36
                   ) * fVar46 + fVar36;
          uVar2 = param_1->RGBFadingEnabledMask;
          fVar41 = ((float)(uVar11 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar41) *
                   fVar47 + fVar41;
          fVar42 = ((float)(uVar11 >> 8 & 0xff) * _UNK_1508be4c4 - fVar42) * fVar47 + fVar42;
          fVar43 = ((float)(uVar11 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar43) * fVar47 + fVar43;
          fVar44 = ((float)(uVar11 >> 0x18) * _UNK_1508be4cc - fVar44) * fVar47 + fVar44;
          fVar49 = param_1->MipInterpolationFactor;
          auVar15._0_4_ =
               (int)((((((((float)(uVar29 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar37
                          ) * fVar47 + fVar37) - fVar41) * fVar48 + fVar41) - fVar34) * fVar49 +
                     fVar34) * (float)(~uVar2 & (uint)fVar12 | (uint)fVar50 & uVar2));
          auVar15._4_4_ =
               (int)((((((((float)(uVar29 >> 8 & 0xff) * _UNK_1508be4c4 - fVar38) * fVar47 + fVar38)
                        - fVar42) * fVar48 + fVar42) - fVar13) * fVar49 + fVar13) *
                    (float)(~uVar2 & (uint)fVar12 | (uint)fVar50 & uVar2));
          auVar15._8_4_ =
               (int)((((((((float)(uVar29 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar39) * fVar47 +
                         fVar39) - fVar43) * fVar48 + fVar43) - fVar35) * fVar49 + fVar35) *
                    (float)(~uVar2 & (uint)fVar12 | (uint)fVar50 & uVar2));
          auVar15._12_4_ =
               (int)((((((((float)(uVar29 >> 0x18) * _UNK_1508be4cc - fVar40) * fVar47 + fVar40) -
                        fVar44) * fVar48 + fVar44) - fVar36) * fVar49 + fVar36) *
                    (float)(~param_1->AlphaFadingEnabledMask & (uint)fVar12 |
                           (uint)fVar50 & param_1->AlphaFadingEnabledMask));
          auVar15 = packssdw(auVar15,auVar15);
          sVar5 = auVar15._0_2_;
          sVar6 = auVar15._2_2_;
          sVar7 = auVar15._4_2_;
          sVar8 = auVar15._6_2_;
          *(uint *)param_2 =
               CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar15[6] - (0xff < sVar8),
                        CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar15[4] - (0xff < sVar7),
                                 CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar15[2] -
                                          (0xff < sVar6),
                                          (0 < sVar5) * (sVar5 < 0x100) * auVar15[0] -
                                          (0xff < sVar5))));
        }
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab4e5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1192>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uint uVar2;
  uchar *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  
  fVar11 = __real_3f800000;
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar32 = param_3[1];
    fVar10 = param_3[2];
    fVar47 = (float)(fVar10 * fVar10 + fVar32 * fVar32 <= __real_3f800000) * __real_437f0000;
    if (__real_322bcc77 < fVar47) {
      fVar10 = FGenericPlatformMath::Atan2
                         (fVar10,(float)((uint)fVar32 ^ __xmm_80000000800000008000000080000000));
      fVar32 = *param_3;
      fVar10 = fVar10 * param_1->OneOverProjectionAngle + __real_3f000000;
      if (fVar32 < fVar11 && (0.0 <= fVar32 && (0.0 <= fVar10 && fVar10 < fVar11))) {
        uVar1 = param_1->Source0SizeY;
        puVar3 = param_1->Source0Data;
        uVar8 = (uint)param_1->Source1SizeX;
        uVar9 = (uint)param_1->Source0SizeX;
        fVar11 = (float)param_1->Source1SizeY;
        iVar15 = uVar9 - GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar16 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar17 = uVar8 - GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar18 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
        auVar14._0_4_ = (float)uVar9 - GlobalVectorConstants::FloatOne.m128_f32[0];
        auVar14._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
        auVar14._8_4_ = (float)uVar8 - GlobalVectorConstants::FloatOne.m128_f32[2];
        auVar14._12_4_ = fVar11 - GlobalVectorConstants::FloatOne.m128_f32[3];
        auVar12._0_4_ = fVar10 * (float)uVar9 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0]
        ;
        auVar12._4_4_ = fVar32 * (float)uVar1 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1]
        ;
        auVar12._8_4_ = fVar10 * (float)uVar8 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2]
        ;
        auVar12._12_4_ = fVar32 * fVar11 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
        auVar13 = maxps(auVar12,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar14 = minps(auVar13,auVar14);
        iVar19 = (int)auVar14._0_4_;
        iVar20 = (int)auVar14._4_4_;
        iVar21 = (int)auVar14._8_4_;
        iVar22 = (int)auVar14._12_4_;
        auVar13 = roundps(ZEXT216(uVar1),auVar14,1);
        fVar43 = auVar14._0_4_ - auVar13._0_4_;
        fVar44 = auVar14._4_4_ - auVar13._4_4_;
        fVar45 = auVar14._8_4_ - auVar13._8_4_;
        fVar46 = auVar14._12_4_ - auVar13._12_4_;
        iVar23 = iVar19 + GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar25 = iVar20 + GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar26 = iVar21 + GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar28 = iVar22 + GlobalVectorConstants::IntOne.m128i_i32[3];
        uVar24 = (uint)(iVar15 < iVar23) * iVar15 | (uint)(iVar15 >= iVar23) * iVar23;
        uVar27 = (uint)(iVar17 < iVar26) * iVar17 | (uint)(iVar17 >= iVar26) * iVar26;
        iVar20 = iVar20 * uVar9;
        uVar9 = *(uint *)(puVar3 + (iVar20 + iVar19) * 4);
        uVar2 = *(uint *)(puVar3 + (int)((iVar20 + uVar24) * 4));
        fVar32 = (float)(uVar9 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar10 = (float)(uVar9 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar33 = (float)(uVar9 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar34 = (float)(uVar9 >> 0x18) * _UNK_1508be4cc;
        iVar20 = ((uint)(iVar16 < iVar25) * iVar16 | (uint)(iVar16 >= iVar25) * iVar25) *
                 (uint)param_1->Source0SizeX;
        uVar9 = *(uint *)(puVar3 + (iVar20 + iVar19) * 4);
        uVar24 = *(uint *)(puVar3 + (int)((iVar20 + uVar24) * 4));
        puVar3 = param_1->Source1Data;
        iVar22 = iVar22 * uVar8;
        fVar11 = (float)(uVar9 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar29 = (float)(uVar9 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar30 = (float)(uVar9 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar31 = (float)(uVar9 >> 0x18) * _UNK_1508be4cc;
        uVar9 = *(uint *)(puVar3 + (iVar22 + iVar21) * 4);
        fVar39 = (float)(uVar9 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar40 = (float)(uVar9 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar41 = (float)(uVar9 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar42 = (float)(uVar9 >> 0x18) * _UNK_1508be4cc;
        iVar20 = ((uint)(iVar18 < iVar28) * iVar18 | (uint)(iVar18 >= iVar28) * iVar28) *
                 (uint)param_1->Source1SizeX;
        uVar9 = *(uint *)(puVar3 + (int)((iVar22 + uVar27) * 4));
        uVar8 = *(uint *)(puVar3 + (iVar20 + iVar21) * 4);
        uVar27 = *(uint *)(puVar3 + (int)((iVar20 + uVar27) * 4));
        fVar35 = (float)(uVar8 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar36 = (float)(uVar8 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar37 = (float)(uVar8 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar38 = (float)(uVar8 >> 0x18) * _UNK_1508be4cc;
        fVar32 = ((float)(uVar2 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar32) * fVar43
                 + fVar32;
        fVar10 = ((float)(uVar2 >> 8 & 0xff) * _UNK_1508be4c4 - fVar10) * fVar43 + fVar10;
        fVar33 = ((float)(uVar2 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar33) * fVar43 + fVar33;
        fVar34 = ((float)(uVar2 >> 0x18) * _UNK_1508be4cc - fVar34) * fVar43 + fVar34;
        fVar32 = ((((float)(uVar24 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar11) *
                   fVar43 + fVar11) - fVar32) * fVar44 + fVar32;
        fVar10 = ((((float)(uVar24 >> 8 & 0xff) * _UNK_1508be4c4 - fVar29) * fVar43 + fVar29) -
                 fVar10) * fVar44 + fVar10;
        fVar33 = ((((float)(uVar24 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar30) * fVar43 + fVar30) -
                 fVar33) * fVar44 + fVar33;
        fVar34 = ((((float)(uVar24 >> 0x18) * _UNK_1508be4cc - fVar31) * fVar43 + fVar31) - fVar34)
                 * fVar44 + fVar34;
        uVar2 = param_1->RGBFadingEnabledMask;
        fVar39 = ((float)(uVar9 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar39) * fVar45
                 + fVar39;
        fVar40 = ((float)(uVar9 >> 8 & 0xff) * _UNK_1508be4c4 - fVar40) * fVar45 + fVar40;
        fVar41 = ((float)(uVar9 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar41) * fVar45 + fVar41;
        fVar42 = ((float)(uVar9 >> 0x18) * _UNK_1508be4cc - fVar42) * fVar45 + fVar42;
        fVar11 = param_1->MipInterpolationFactor;
        auVar13._0_4_ =
             (int)((((((((float)(uVar27 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar35)
                        * fVar45 + fVar35) - fVar39) * fVar46 + fVar39) - fVar32) * fVar11 + fVar32)
                  * (float)(~uVar2 & ___xmm_437f0000437f0000437f0000437f0000 | (uint)fVar47 & uVar2)
                  );
        auVar13._4_4_ =
             (int)((((((((float)(uVar27 >> 8 & 0xff) * _UNK_1508be4c4 - fVar36) * fVar45 + fVar36) -
                      fVar40) * fVar46 + fVar40) - fVar10) * fVar11 + fVar10) *
                  (float)(~uVar2 & _UNK_1508be4d4 | (uint)fVar47 & uVar2));
        auVar13._8_4_ =
             (int)((((((((float)(uVar27 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar37) * fVar45 + fVar37
                       ) - fVar41) * fVar46 + fVar41) - fVar33) * fVar11 + fVar33) *
                  (float)(~uVar2 & _UNK_1508be4d8 | (uint)fVar47 & uVar2));
        auVar13._12_4_ =
             (int)((((((((float)(uVar27 >> 0x18) * _UNK_1508be4cc - fVar38) * fVar45 + fVar38) -
                      fVar42) * fVar46 + fVar42) - fVar34) * fVar11 + fVar34) *
                  (float)(~param_1->AlphaFadingEnabledMask & _UNK_1508be4dc |
                         (uint)fVar47 & param_1->AlphaFadingEnabledMask));
        auVar13 = packssdw(auVar13,auVar13);
        sVar4 = auVar13._0_2_;
        sVar5 = auVar13._2_2_;
        sVar6 = auVar13._4_2_;
        sVar7 = auVar13._6_2_;
        *(uint *)param_2 =
             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar13[6] - (0xff < sVar7),
                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar13[4] - (0xff < sVar6),
                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar13[2] - (0xff < sVar5),
                                        (0 < sVar4) * (sVar4 < 0x100) * auVar13[0] - (0xff < sVar4))
                              ));
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab4eb70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1194>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uint uVar2;
  uchar *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  fVar12 = __real_3f800000;
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar34 = param_3[1];
    fVar11 = param_3[2];
    fVar16 = (float)(fVar11 * fVar11 + fVar34 * fVar34 <= __real_3f800000) * __real_437f0000;
    if (__real_322bcc77 < fVar16) {
      fVar49 = __real_437f0000;
      if (param_1->MaskData != (uchar *)0x0) {
        lVar8 = (longlong)param_2 - (longlong)param_1->TargetData;
        fVar49 = (float)param_1->MaskData
                        [(longlong)(lVar8 + (ulonglong)((uint)(lVar8 >> 0x3f) & 3)) >> 2];
      }
      fVar16 = fVar49 * fVar16 * __real_3b808081;
      if (__real_322bcc77 < fVar16) {
        fVar11 = FGenericPlatformMath::Atan2
                           (fVar11,(float)((uint)fVar34 ^ __xmm_80000000800000008000000080000000));
        fVar34 = *param_3;
        fVar11 = fVar11 * param_1->OneOverProjectionAngle + __real_3f000000;
        if (fVar34 < fVar12 && (0.0 <= fVar34 && (0.0 <= fVar11 && fVar11 < fVar12))) {
          uVar1 = param_1->Source0SizeY;
          puVar3 = param_1->Source0Data;
          uVar9 = (uint)param_1->Source1SizeX;
          uVar10 = (uint)param_1->Source0SizeX;
          fVar12 = (float)param_1->Source1SizeY;
          iVar17 = uVar10 - GlobalVectorConstants::IntOne.m128i_i32[0];
          iVar18 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
          iVar19 = uVar9 - GlobalVectorConstants::IntOne.m128i_i32[2];
          iVar20 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
          auVar15._0_4_ = (float)uVar10 - GlobalVectorConstants::FloatOne.m128_f32[0];
          auVar15._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
          auVar15._8_4_ = (float)uVar9 - GlobalVectorConstants::FloatOne.m128_f32[2];
          auVar15._12_4_ = fVar12 - GlobalVectorConstants::FloatOne.m128_f32[3];
          auVar13._0_4_ =
               fVar11 * (float)uVar10 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
          auVar13._4_4_ =
               fVar34 * (float)uVar1 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1];
          auVar13._8_4_ =
               fVar11 * (float)uVar9 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
          auVar13._12_4_ = fVar34 * fVar12 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
          auVar14 = maxps(auVar13,(undefined1  [16])GlobalVectorConstants::FloatZero);
          auVar15 = minps(auVar14,auVar15);
          iVar21 = (int)auVar15._0_4_;
          iVar22 = (int)auVar15._4_4_;
          iVar23 = (int)auVar15._8_4_;
          iVar24 = (int)auVar15._12_4_;
          auVar14 = roundps(ZEXT216(uVar1),auVar15,1);
          fVar45 = auVar15._0_4_ - auVar14._0_4_;
          fVar46 = auVar15._4_4_ - auVar14._4_4_;
          fVar47 = auVar15._8_4_ - auVar14._8_4_;
          fVar48 = auVar15._12_4_ - auVar14._12_4_;
          iVar25 = iVar21 + GlobalVectorConstants::IntOne.m128i_i32[0];
          iVar27 = iVar22 + GlobalVectorConstants::IntOne.m128i_i32[1];
          iVar28 = iVar23 + GlobalVectorConstants::IntOne.m128i_i32[2];
          iVar30 = iVar24 + GlobalVectorConstants::IntOne.m128i_i32[3];
          uVar26 = (uint)(iVar17 < iVar25) * iVar17 | (uint)(iVar17 >= iVar25) * iVar25;
          uVar29 = (uint)(iVar19 < iVar28) * iVar19 | (uint)(iVar19 >= iVar28) * iVar28;
          iVar22 = iVar22 * uVar10;
          uVar10 = *(uint *)(puVar3 + (iVar22 + iVar21) * 4);
          uVar2 = *(uint *)(puVar3 + (int)((iVar22 + uVar26) * 4));
          fVar34 = (float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
          fVar11 = (float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4;
          fVar35 = (float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8;
          fVar36 = (float)(uVar10 >> 0x18) * _UNK_1508be4cc;
          iVar22 = ((uint)(iVar18 < iVar27) * iVar18 | (uint)(iVar18 >= iVar27) * iVar27) *
                   (uint)param_1->Source0SizeX;
          uVar10 = *(uint *)(puVar3 + (iVar22 + iVar21) * 4);
          uVar26 = *(uint *)(puVar3 + (int)((iVar22 + uVar26) * 4));
          puVar3 = param_1->Source1Data;
          iVar24 = iVar24 * uVar9;
          fVar12 = (float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
          fVar31 = (float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4;
          fVar32 = (float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8;
          fVar33 = (float)(uVar10 >> 0x18) * _UNK_1508be4cc;
          uVar10 = *(uint *)(puVar3 + (iVar24 + iVar23) * 4);
          fVar41 = (float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
          fVar42 = (float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4;
          fVar43 = (float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8;
          fVar44 = (float)(uVar10 >> 0x18) * _UNK_1508be4cc;
          iVar22 = ((uint)(iVar20 < iVar30) * iVar20 | (uint)(iVar20 >= iVar30) * iVar30) *
                   (uint)param_1->Source1SizeX;
          uVar10 = *(uint *)(puVar3 + (int)((iVar24 + uVar29) * 4));
          uVar9 = *(uint *)(puVar3 + (iVar22 + iVar23) * 4);
          uVar29 = *(uint *)(puVar3 + (int)((iVar22 + uVar29) * 4));
          fVar37 = (float)(uVar9 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
          fVar38 = (float)(uVar9 >> 8 & 0xff) * _UNK_1508be4c4;
          fVar39 = (float)(uVar9 >> 0x10 & 0xff) * _UNK_1508be4c8;
          fVar40 = (float)(uVar9 >> 0x18) * _UNK_1508be4cc;
          fVar34 = ((float)(uVar2 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar34) *
                   fVar45 + fVar34;
          fVar11 = ((float)(uVar2 >> 8 & 0xff) * _UNK_1508be4c4 - fVar11) * fVar45 + fVar11;
          fVar35 = ((float)(uVar2 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar35) * fVar45 + fVar35;
          fVar36 = ((float)(uVar2 >> 0x18) * _UNK_1508be4cc - fVar36) * fVar45 + fVar36;
          fVar34 = ((((float)(uVar26 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar12) *
                     fVar45 + fVar12) - fVar34) * fVar46 + fVar34;
          fVar11 = ((((float)(uVar26 >> 8 & 0xff) * _UNK_1508be4c4 - fVar31) * fVar45 + fVar31) -
                   fVar11) * fVar46 + fVar11;
          fVar35 = ((((float)(uVar26 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar32) * fVar45 + fVar32) -
                   fVar35) * fVar46 + fVar35;
          fVar36 = ((((float)(uVar26 >> 0x18) * _UNK_1508be4cc - fVar33) * fVar45 + fVar33) - fVar36
                   ) * fVar46 + fVar36;
          uVar2 = param_1->RGBFadingEnabledMask;
          fVar41 = ((float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar41) *
                   fVar47 + fVar41;
          fVar42 = ((float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4 - fVar42) * fVar47 + fVar42;
          fVar43 = ((float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar43) * fVar47 + fVar43;
          fVar44 = ((float)(uVar10 >> 0x18) * _UNK_1508be4cc - fVar44) * fVar47 + fVar44;
          fVar12 = param_1->MipInterpolationFactor;
          auVar14._0_4_ =
               (int)((((((((float)(uVar29 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar37
                          ) * fVar47 + fVar37) - fVar41) * fVar48 + fVar41) - fVar34) * fVar12 +
                     fVar34) * (float)(~uVar2 & (uint)fVar49 | (uint)fVar16 & uVar2));
          auVar14._4_4_ =
               (int)((((((((float)(uVar29 >> 8 & 0xff) * _UNK_1508be4c4 - fVar38) * fVar47 + fVar38)
                        - fVar42) * fVar48 + fVar42) - fVar11) * fVar12 + fVar11) *
                    (float)(~uVar2 & (uint)fVar49 | (uint)fVar16 & uVar2));
          auVar14._8_4_ =
               (int)((((((((float)(uVar29 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar39) * fVar47 +
                         fVar39) - fVar43) * fVar48 + fVar43) - fVar35) * fVar12 + fVar35) *
                    (float)(~uVar2 & (uint)fVar49 | (uint)fVar16 & uVar2));
          auVar14._12_4_ =
               (int)((((((((float)(uVar29 >> 0x18) * _UNK_1508be4cc - fVar40) * fVar47 + fVar40) -
                        fVar44) * fVar48 + fVar44) - fVar36) * fVar12 + fVar36) *
                    (float)(~param_1->AlphaFadingEnabledMask & (uint)fVar49 |
                           (uint)fVar16 & param_1->AlphaFadingEnabledMask));
          auVar14 = packssdw(auVar14,auVar14);
          sVar4 = auVar14._0_2_;
          sVar5 = auVar14._2_2_;
          sVar6 = auVar14._4_2_;
          sVar7 = auVar14._6_2_;
          *(uint *)param_2 =
               CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar14[6] - (0xff < sVar7),
                        CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar14[4] - (0xff < sVar6),
                                 CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar14[2] -
                                          (0xff < sVar5),
                                          (0 < sVar4) * (sVar4 < 0x100) * auVar14[0] -
                                          (0xff < sVar4))));
        }
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab4f170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1224>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uint uVar2;
  uchar *puVar3;
  uchar *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  puVar3 = param_1->Source0Data;
  if ((puVar3 != (uchar *)0x0) &&
     (fVar48 = (float)(param_3[2] <= __real_3f800000 && 0.0 <= param_3[2]) * __real_437f0000,
     __real_322bcc77 < fVar48)) {
    fVar29 = param_3[1];
    fVar33 = *param_3;
    if (fVar33 < __real_3f800000 && (0.0 <= fVar33 && (0.0 <= fVar29 && fVar29 < __real_3f800000)))
    {
      uVar1 = param_1->Source0SizeY;
      uVar9 = (uint)param_1->Source1SizeX;
      uVar10 = (uint)param_1->Source0SizeX;
      fVar11 = (float)param_1->Source1SizeY;
      iVar15 = uVar10 - GlobalVectorConstants::IntOne.m128i_i32[0];
      iVar16 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
      iVar17 = uVar9 - GlobalVectorConstants::IntOne.m128i_i32[2];
      iVar18 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
      auVar14._0_4_ = (float)uVar10 - GlobalVectorConstants::FloatOne.m128_f32[0];
      auVar14._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
      auVar14._8_4_ = (float)uVar9 - GlobalVectorConstants::FloatOne.m128_f32[2];
      auVar14._12_4_ = fVar11 - GlobalVectorConstants::FloatOne.m128_f32[3];
      auVar12._0_4_ = fVar33 * (float)uVar10 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
      auVar12._4_4_ =
           (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) * (float)uVar1 +
           GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1];
      auVar12._8_4_ =
           (float)*(undefined8 *)param_3 * (float)uVar9 +
           GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
      auVar12._12_4_ = fVar29 * fVar11 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
      auVar13 = maxps(auVar12,(undefined1  [16])GlobalVectorConstants::FloatZero);
      auVar14 = minps(auVar13,auVar14);
      iVar19 = (int)auVar14._0_4_;
      iVar20 = (int)auVar14._4_4_;
      iVar21 = (int)auVar14._8_4_;
      iVar22 = (int)auVar14._12_4_;
      auVar13 = roundps(ZEXT216(uVar1),auVar14,1);
      fVar44 = auVar14._0_4_ - auVar13._0_4_;
      fVar45 = auVar14._4_4_ - auVar13._4_4_;
      fVar46 = auVar14._8_4_ - auVar13._8_4_;
      fVar47 = auVar14._12_4_ - auVar13._12_4_;
      iVar23 = iVar19 + GlobalVectorConstants::IntOne.m128i_i32[0];
      iVar25 = iVar20 + GlobalVectorConstants::IntOne.m128i_i32[1];
      iVar26 = iVar21 + GlobalVectorConstants::IntOne.m128i_i32[2];
      iVar28 = iVar22 + GlobalVectorConstants::IntOne.m128i_i32[3];
      uVar24 = (uint)(iVar15 < iVar23) * iVar15 | (uint)(iVar15 >= iVar23) * iVar23;
      uVar27 = (uint)(iVar17 < iVar26) * iVar17 | (uint)(iVar17 >= iVar26) * iVar26;
      iVar20 = iVar20 * uVar10;
      uVar10 = *(uint *)(puVar3 + (iVar20 + iVar19) * 4);
      uVar2 = *(uint *)(puVar3 + (int)((iVar20 + uVar24) * 4));
      fVar33 = (float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
      fVar11 = (float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4;
      fVar34 = (float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8;
      fVar35 = (float)(uVar10 >> 0x18) * _UNK_1508be4cc;
      iVar20 = ((uint)(iVar16 < iVar25) * iVar16 | (uint)(iVar16 >= iVar25) * iVar25) *
               (uint)param_1->Source0SizeX;
      uVar10 = *(uint *)(puVar3 + (iVar20 + iVar19) * 4);
      puVar4 = param_1->Source1Data;
      uVar24 = *(uint *)(puVar3 + (int)((iVar20 + uVar24) * 4));
      iVar22 = iVar22 * uVar9;
      fVar29 = (float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
      fVar30 = (float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4;
      fVar31 = (float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8;
      fVar32 = (float)(uVar10 >> 0x18) * _UNK_1508be4cc;
      uVar10 = *(uint *)(puVar4 + (iVar22 + iVar21) * 4);
      fVar40 = (float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
      fVar41 = (float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4;
      fVar42 = (float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8;
      fVar43 = (float)(uVar10 >> 0x18) * _UNK_1508be4cc;
      iVar20 = ((uint)(iVar18 < iVar28) * iVar18 | (uint)(iVar18 >= iVar28) * iVar28) *
               (uint)param_1->Source1SizeX;
      uVar10 = *(uint *)(puVar4 + (int)((iVar22 + uVar27) * 4));
      uVar9 = *(uint *)(puVar4 + (iVar20 + iVar21) * 4);
      uVar27 = *(uint *)(puVar4 + (int)((iVar20 + uVar27) * 4));
      fVar36 = (float)(uVar9 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
      fVar37 = (float)(uVar9 >> 8 & 0xff) * _UNK_1508be4c4;
      fVar38 = (float)(uVar9 >> 0x10 & 0xff) * _UNK_1508be4c8;
      fVar39 = (float)(uVar9 >> 0x18) * _UNK_1508be4cc;
      fVar33 = ((float)(uVar2 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar33) * fVar44 +
               fVar33;
      fVar11 = ((float)(uVar2 >> 8 & 0xff) * _UNK_1508be4c4 - fVar11) * fVar44 + fVar11;
      fVar34 = ((float)(uVar2 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar34) * fVar44 + fVar34;
      fVar35 = ((float)(uVar2 >> 0x18) * _UNK_1508be4cc - fVar35) * fVar44 + fVar35;
      fVar33 = ((((float)(uVar24 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar29) *
                 fVar44 + fVar29) - fVar33) * fVar45 + fVar33;
      fVar11 = ((((float)(uVar24 >> 8 & 0xff) * _UNK_1508be4c4 - fVar30) * fVar44 + fVar30) - fVar11
               ) * fVar45 + fVar11;
      fVar34 = ((((float)(uVar24 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar31) * fVar44 + fVar31) -
               fVar34) * fVar45 + fVar34;
      fVar35 = ((((float)(uVar24 >> 0x18) * _UNK_1508be4cc - fVar32) * fVar44 + fVar32) - fVar35) *
               fVar45 + fVar35;
      uVar2 = param_1->RGBFadingEnabledMask;
      fVar40 = ((float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar40) * fVar46
               + fVar40;
      fVar41 = ((float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4 - fVar41) * fVar46 + fVar41;
      fVar42 = ((float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar42) * fVar46 + fVar42;
      fVar43 = ((float)(uVar10 >> 0x18) * _UNK_1508be4cc - fVar43) * fVar46 + fVar43;
      fVar29 = param_1->MipInterpolationFactor;
      auVar13._0_4_ =
           (int)((((((((float)(uVar27 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar36) *
                      fVar46 + fVar36) - fVar40) * fVar47 + fVar40) - fVar33) * fVar29 + fVar33) *
                (float)(~uVar2 & ___xmm_437f0000437f0000437f0000437f0000 | (uint)fVar48 & uVar2));
      auVar13._4_4_ =
           (int)((((((((float)(uVar27 >> 8 & 0xff) * _UNK_1508be4c4 - fVar37) * fVar46 + fVar37) -
                    fVar41) * fVar47 + fVar41) - fVar11) * fVar29 + fVar11) *
                (float)(~uVar2 & _UNK_1508be4d4 | (uint)fVar48 & uVar2));
      auVar13._8_4_ =
           (int)((((((((float)(uVar27 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar38) * fVar46 + fVar38)
                    - fVar42) * fVar47 + fVar42) - fVar34) * fVar29 + fVar34) *
                (float)(~uVar2 & _UNK_1508be4d8 | (uint)fVar48 & uVar2));
      auVar13._12_4_ =
           (int)((((((((float)(uVar27 >> 0x18) * _UNK_1508be4cc - fVar39) * fVar46 + fVar39) -
                    fVar43) * fVar47 + fVar43) - fVar35) * fVar29 + fVar35) *
                (float)(~param_1->AlphaFadingEnabledMask & _UNK_1508be4dc |
                       (uint)fVar48 & param_1->AlphaFadingEnabledMask));
      auVar13 = packssdw(auVar13,auVar13);
      sVar5 = auVar13._0_2_;
      sVar6 = auVar13._2_2_;
      sVar7 = auVar13._4_2_;
      sVar8 = auVar13._6_2_;
      *(uint *)param_2 =
           CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar13[6] - (0xff < sVar8),
                    CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar13[4] - (0xff < sVar7),
                             CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar13[2] - (0xff < sVar6),
                                      (0 < sVar5) * (sVar5 < 0x100) * auVar13[0] - (0xff < sVar5))))
      ;
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab4f6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1226>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uint uVar2;
  uchar *puVar3;
  uchar *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  
  puVar3 = param_1->Source0Data;
  if ((puVar3 != (uchar *)0x0) &&
     (fVar12 = (float)(param_3[2] <= __real_3f800000 && 0.0 <= param_3[2]) * __real_437f0000,
     __real_322bcc77 < fVar12)) {
    fVar50 = __real_437f0000;
    if (param_1->MaskData != (uchar *)0x0) {
      lVar9 = (longlong)param_2 - (longlong)param_1->TargetData;
      fVar50 = (float)param_1->MaskData
                      [(longlong)(lVar9 + (ulonglong)((uint)(lVar9 >> 0x3f) & 3)) >> 2];
    }
    fVar12 = fVar50 * fVar12 * __real_3b808081;
    if (__real_322bcc77 < fVar12) {
      fVar31 = param_3[1];
      fVar35 = *param_3;
      if (fVar35 < __real_3f800000 && (0.0 <= fVar35 && (0.0 <= fVar31 && fVar31 < __real_3f800000))
         ) {
        uVar1 = param_1->Source0SizeY;
        uVar10 = (uint)param_1->Source1SizeX;
        uVar11 = (uint)param_1->Source0SizeX;
        fVar13 = (float)param_1->Source1SizeY;
        iVar17 = uVar11 - GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar18 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar19 = uVar10 - GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar20 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
        auVar16._0_4_ = (float)uVar11 - GlobalVectorConstants::FloatOne.m128_f32[0];
        auVar16._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
        auVar16._8_4_ = (float)uVar10 - GlobalVectorConstants::FloatOne.m128_f32[2];
        auVar16._12_4_ = fVar13 - GlobalVectorConstants::FloatOne.m128_f32[3];
        auVar14._0_4_ =
             fVar35 * (float)uVar11 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
        auVar14._4_4_ =
             (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) * (float)uVar1 +
             GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1];
        auVar14._8_4_ =
             (float)*(undefined8 *)param_3 * (float)uVar10 +
             GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
        auVar14._12_4_ = fVar31 * fVar13 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
        auVar15 = maxps(auVar14,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar16 = minps(auVar15,auVar16);
        iVar21 = (int)auVar16._0_4_;
        iVar22 = (int)auVar16._4_4_;
        iVar23 = (int)auVar16._8_4_;
        iVar24 = (int)auVar16._12_4_;
        auVar15 = roundps(ZEXT216(uVar1),auVar16,1);
        fVar46 = auVar16._0_4_ - auVar15._0_4_;
        fVar47 = auVar16._4_4_ - auVar15._4_4_;
        fVar48 = auVar16._8_4_ - auVar15._8_4_;
        fVar49 = auVar16._12_4_ - auVar15._12_4_;
        iVar25 = iVar21 + GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar27 = iVar22 + GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar28 = iVar23 + GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar30 = iVar24 + GlobalVectorConstants::IntOne.m128i_i32[3];
        uVar26 = (uint)(iVar17 < iVar25) * iVar17 | (uint)(iVar17 >= iVar25) * iVar25;
        uVar29 = (uint)(iVar19 < iVar28) * iVar19 | (uint)(iVar19 >= iVar28) * iVar28;
        iVar22 = iVar22 * uVar11;
        uVar11 = *(uint *)(puVar3 + (iVar22 + iVar21) * 4);
        uVar2 = *(uint *)(puVar3 + (int)((iVar22 + uVar26) * 4));
        fVar35 = (float)(uVar11 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar13 = (float)(uVar11 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar36 = (float)(uVar11 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar37 = (float)(uVar11 >> 0x18) * _UNK_1508be4cc;
        iVar22 = ((uint)(iVar18 < iVar27) * iVar18 | (uint)(iVar18 >= iVar27) * iVar27) *
                 (uint)param_1->Source0SizeX;
        uVar11 = *(uint *)(puVar3 + (iVar22 + iVar21) * 4);
        puVar4 = param_1->Source1Data;
        uVar26 = *(uint *)(puVar3 + (int)((iVar22 + uVar26) * 4));
        iVar24 = iVar24 * uVar10;
        fVar31 = (float)(uVar11 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar32 = (float)(uVar11 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar33 = (float)(uVar11 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar34 = (float)(uVar11 >> 0x18) * _UNK_1508be4cc;
        uVar11 = *(uint *)(puVar4 + (iVar24 + iVar23) * 4);
        fVar42 = (float)(uVar11 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar43 = (float)(uVar11 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar44 = (float)(uVar11 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar45 = (float)(uVar11 >> 0x18) * _UNK_1508be4cc;
        iVar22 = ((uint)(iVar20 < iVar30) * iVar20 | (uint)(iVar20 >= iVar30) * iVar30) *
                 (uint)param_1->Source1SizeX;
        uVar11 = *(uint *)(puVar4 + (int)((iVar24 + uVar29) * 4));
        uVar10 = *(uint *)(puVar4 + (iVar22 + iVar23) * 4);
        uVar29 = *(uint *)(puVar4 + (int)((iVar22 + uVar29) * 4));
        fVar38 = (float)(uVar10 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081;
        fVar39 = (float)(uVar10 >> 8 & 0xff) * _UNK_1508be4c4;
        fVar40 = (float)(uVar10 >> 0x10 & 0xff) * _UNK_1508be4c8;
        fVar41 = (float)(uVar10 >> 0x18) * _UNK_1508be4cc;
        fVar35 = ((float)(uVar2 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar35) * fVar46
                 + fVar35;
        fVar13 = ((float)(uVar2 >> 8 & 0xff) * _UNK_1508be4c4 - fVar13) * fVar46 + fVar13;
        fVar36 = ((float)(uVar2 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar36) * fVar46 + fVar36;
        fVar37 = ((float)(uVar2 >> 0x18) * _UNK_1508be4cc - fVar37) * fVar46 + fVar37;
        fVar35 = ((((float)(uVar26 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar31) *
                   fVar46 + fVar31) - fVar35) * fVar47 + fVar35;
        fVar13 = ((((float)(uVar26 >> 8 & 0xff) * _UNK_1508be4c4 - fVar32) * fVar46 + fVar32) -
                 fVar13) * fVar47 + fVar13;
        fVar36 = ((((float)(uVar26 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar33) * fVar46 + fVar33) -
                 fVar36) * fVar47 + fVar36;
        fVar37 = ((((float)(uVar26 >> 0x18) * _UNK_1508be4cc - fVar34) * fVar46 + fVar34) - fVar37)
                 * fVar47 + fVar37;
        uVar2 = param_1->RGBFadingEnabledMask;
        fVar42 = ((float)(uVar11 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar42) *
                 fVar48 + fVar42;
        fVar43 = ((float)(uVar11 >> 8 & 0xff) * _UNK_1508be4c4 - fVar43) * fVar48 + fVar43;
        fVar44 = ((float)(uVar11 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar44) * fVar48 + fVar44;
        fVar45 = ((float)(uVar11 >> 0x18) * _UNK_1508be4cc - fVar45) * fVar48 + fVar45;
        fVar31 = param_1->MipInterpolationFactor;
        auVar15._0_4_ =
             (int)((((((((float)(uVar29 & 0xff) * ___xmm_3b8080813b8080813b8080813b808081 - fVar38)
                        * fVar48 + fVar38) - fVar42) * fVar49 + fVar42) - fVar35) * fVar31 + fVar35)
                  * (float)(~uVar2 & (uint)fVar50 | (uint)fVar12 & uVar2));
        auVar15._4_4_ =
             (int)((((((((float)(uVar29 >> 8 & 0xff) * _UNK_1508be4c4 - fVar39) * fVar48 + fVar39) -
                      fVar43) * fVar49 + fVar43) - fVar13) * fVar31 + fVar13) *
                  (float)(~uVar2 & (uint)fVar50 | (uint)fVar12 & uVar2));
        auVar15._8_4_ =
             (int)((((((((float)(uVar29 >> 0x10 & 0xff) * _UNK_1508be4c8 - fVar40) * fVar48 + fVar40
                       ) - fVar44) * fVar49 + fVar44) - fVar36) * fVar31 + fVar36) *
                  (float)(~uVar2 & (uint)fVar50 | (uint)fVar12 & uVar2));
        auVar15._12_4_ =
             (int)((((((((float)(uVar29 >> 0x18) * _UNK_1508be4cc - fVar41) * fVar48 + fVar41) -
                      fVar45) * fVar49 + fVar45) - fVar37) * fVar31 + fVar37) *
                  (float)(~param_1->AlphaFadingEnabledMask & (uint)fVar50 |
                         (uint)fVar12 & param_1->AlphaFadingEnabledMask));
        auVar15 = packssdw(auVar15,auVar15);
        sVar5 = auVar15._0_2_;
        sVar6 = auVar15._2_2_;
        sVar7 = auVar15._4_2_;
        sVar8 = auVar15._6_2_;
        *(uint *)param_2 =
             CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar15[6] - (0xff < sVar8),
                      CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar15[4] - (0xff < sVar7),
                               CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar15[2] - (0xff < sVar6),
                                        (0 < sVar5) * (sVar5 < 0x100) * auVar15[0] - (0xff < sVar5))
                              ));
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab4fcd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1304>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uchar *puVar3;
  uchar *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  int iVar27;
  uint uVar28;
  int iVar30;
  int iVar31;
  uint uVar32;
  undefined1 auVar29 [16];
  int iVar33;
  float fVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float fStack_12c;
  float local_128;
  
  puVar3 = param_1->Source0Data;
  if (puVar3 != (uchar *)0x0) {
    fVar17 = param_3[3];
    fVar34 = (fVar17 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    local_128 = __real_437f0000;
    if (__real_437f0000 <= fVar34) {
      fVar34 = __real_437f0000;
    }
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
    fVar14 = (float)(param_3[2] <= __real_3f800000 && 0.0 <= param_3[2]) * __real_437f0000;
    if (fVar14 <= fVar34) {
      fVar34 = fVar14;
    }
    if (fVar17 < param_1->FadeEndCos || fVar17 == param_1->FadeEndCos) {
      local_128 = 0.0;
    }
    if (__real_322bcc77 < fVar34) {
      fVar17 = param_3[1];
      fVar14 = *param_3;
      if (fVar14 < __real_3f800000 && (0.0 <= fVar14 && (0.0 <= fVar17 && fVar17 < __real_3f800000))
         ) {
        uVar1 = param_1->Source0SizeX;
        uVar2 = param_1->Source0SizeY;
        puVar4 = param_1->Source1Data;
        uVar13 = (uint)param_1->Source1SizeX;
        fVar16 = (float)uVar1;
        fVar23 = (float)param_1->Source1SizeY;
        iVar35 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar36 = (uint)uVar2 - GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar37 = uVar13 - GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar38 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
        auVar15._0_4_ = fVar16 - GlobalVectorConstants::FloatOne.m128_f32[0];
        auVar15._4_4_ = (float)uVar2 - GlobalVectorConstants::FloatOne.m128_f32[1];
        auVar15._8_4_ = (float)uVar13 - GlobalVectorConstants::FloatOne.m128_f32[2];
        auVar15._12_4_ = fVar23 - GlobalVectorConstants::FloatOne.m128_f32[3];
        auVar29._0_4_ = fVar14 * fVar16 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
        auVar29._4_4_ = fVar17 * (float)uVar2 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1]
        ;
        auVar29._8_4_ =
             fVar14 * (float)uVar13 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
        auVar29._12_4_ = fVar17 * fVar23 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
        auVar29 = maxps(auVar29,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar29 = minps(auVar29,auVar15);
        auVar15 = roundps(ZEXT216(uVar2),auVar29,1);
        fVar17 = auVar29._0_4_ - auVar15._0_4_;
        fVar16 = auVar29._4_4_ - auVar15._4_4_;
        fVar20 = auVar29._8_4_ - auVar15._8_4_;
        fVar24 = auVar29._12_4_ - auVar15._12_4_;
        iVar18 = (int)auVar29._0_4_;
        iVar19 = (int)auVar29._4_4_;
        iVar21 = (int)auVar29._8_4_;
        iVar25 = (int)auVar29._12_4_;
        iVar27 = iVar18 + GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar30 = iVar19 + GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar31 = iVar21 + GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar33 = iVar25 + GlobalVectorConstants::IntOne.m128i_i32[3];
        uVar28 = (uint)(iVar35 < iVar27) * iVar35 | (uint)(iVar35 >= iVar27) * iVar27;
        uVar32 = (uint)(iVar37 < iVar31) * iVar37 | (uint)(iVar37 >= iVar31) * iVar31;
        iVar19 = (uint)uVar1 * iVar19;
        lVar11 = (longlong)((iVar18 + iVar19) * 3);
        lVar6 = (longlong)(int)((uVar28 + iVar19) * 3);
        iVar19 = ((uint)(iVar36 < iVar30) * iVar36 | (uint)(iVar36 >= iVar30) * iVar30) *
                 (uint)uVar1;
        lVar12 = (longlong)((iVar18 + iVar19) * 3);
        lVar8 = (longlong)(int)((uVar28 + iVar19) * 3);
        iVar25 = iVar25 * uVar13;
        lVar9 = (longlong)((iVar21 + iVar25) * 3);
        lVar7 = (longlong)(int)((uVar32 + iVar25) * 3);
        iVar19 = ((uint)(iVar38 < iVar33) * iVar38 | (uint)(iVar38 >= iVar33) * iVar33) *
                 (uint)param_1->Source1SizeX;
        lVar10 = (longlong)((iVar21 + iVar19) * 3);
        lVar5 = (longlong)(int)((uVar32 + iVar19) * 3);
        fVar14 = ((float)puVar3[lVar6] * ___xmm_3b8080813b8080813b8080813b808081 -
                 (float)puVar3[lVar11] * ___xmm_3b8080813b8080813b8080813b808081) * fVar17 +
                 (float)puVar3[lVar11] * ___xmm_3b8080813b8080813b8080813b808081;
        fVar23 = ((float)puVar3[lVar6 + 1] * _UNK_1508be4c4 -
                 (float)puVar3[lVar11 + 1] * _UNK_1508be4c4) * fVar17 +
                 (float)puVar3[lVar11 + 1] * _UNK_1508be4c4;
        fVar22 = ((float)puVar3[lVar6 + 2] * _UNK_1508be4c8 -
                 (float)puVar3[lVar11 + 2] * _UNK_1508be4c8) * fVar17 +
                 (float)puVar3[lVar11 + 2] * _UNK_1508be4c8;
        fVar26 = (fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar17 +
                 fStack_12c * _UNK_1508be4cc;
        fVar14 = ((((float)puVar3[lVar8] * ___xmm_3b8080813b8080813b8080813b808081 -
                   (float)puVar3[lVar12] * ___xmm_3b8080813b8080813b8080813b808081) * fVar17 +
                  (float)puVar3[lVar12] * ___xmm_3b8080813b8080813b8080813b808081) - fVar14) *
                 fVar16 + fVar14;
        fVar23 = ((((float)puVar3[lVar8 + 1] * _UNK_1508be4c4 -
                   (float)puVar3[lVar12 + 1] * _UNK_1508be4c4) * fVar17 +
                  (float)puVar3[lVar12 + 1] * _UNK_1508be4c4) - fVar23) * fVar16 + fVar23;
        fVar22 = ((((float)puVar3[lVar8 + 2] * _UNK_1508be4c8 -
                   (float)puVar3[lVar12 + 2] * _UNK_1508be4c8) * fVar17 +
                  (float)puVar3[lVar12 + 2] * _UNK_1508be4c8) - fVar22) * fVar16 + fVar22;
        fVar26 = (((fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar17 +
                  fStack_12c * _UNK_1508be4cc) - fVar26) * fVar16 + fVar26;
        uVar13 = param_1->RGBFadingEnabledMask;
        fVar17 = param_1->MipInterpolationFactor;
        fVar16 = ((float)puVar4[lVar7] * ___xmm_3b8080813b8080813b8080813b808081 -
                 (float)puVar4[lVar9] * ___xmm_3b8080813b8080813b8080813b808081) * fVar20 +
                 (float)puVar4[lVar9] * ___xmm_3b8080813b8080813b8080813b808081;
        fVar39 = ((float)puVar4[lVar7 + 1] * _UNK_1508be4c4 -
                 (float)puVar4[lVar9 + 1] * _UNK_1508be4c4) * fVar20 +
                 (float)puVar4[lVar9 + 1] * _UNK_1508be4c4;
        fVar40 = ((float)puVar4[lVar7 + 2] * _UNK_1508be4c8 -
                 (float)puVar4[lVar9 + 2] * _UNK_1508be4c8) * fVar20 +
                 (float)puVar4[lVar9 + 2] * _UNK_1508be4c8;
        fVar41 = (fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar20 +
                 fStack_12c * _UNK_1508be4cc;
        auVar42._0_4_ =
             (((((((float)puVar4[lVar5] * ___xmm_3b8080813b8080813b8080813b808081 -
                  (float)puVar4[lVar10] * ___xmm_3b8080813b8080813b8080813b808081) * fVar20 +
                 (float)puVar4[lVar10] * ___xmm_3b8080813b8080813b8080813b808081) - fVar16) * fVar24
               + fVar16) - fVar14) * fVar17 + fVar14) *
             (float)(~uVar13 & (uint)local_128 | (uint)fVar34 & uVar13);
        auVar42._4_4_ =
             (((((((float)puVar4[lVar5 + 1] * _UNK_1508be4c4 -
                  (float)puVar4[lVar10 + 1] * _UNK_1508be4c4) * fVar20 +
                 (float)puVar4[lVar10 + 1] * _UNK_1508be4c4) - fVar39) * fVar24 + fVar39) - fVar23)
              * fVar17 + fVar23) * (float)(~uVar13 & (uint)local_128 | (uint)fVar34 & uVar13);
        auVar42._8_4_ =
             (((((((float)puVar4[lVar5 + 2] * _UNK_1508be4c8 -
                  (float)puVar4[lVar10 + 2] * _UNK_1508be4c8) * fVar20 +
                 (float)puVar4[lVar10 + 2] * _UNK_1508be4c8) - fVar40) * fVar24 + fVar40) - fVar22)
              * fVar17 + fVar22) * (float)(~uVar13 & (uint)local_128 | (uint)fVar34 & uVar13);
        auVar42._12_4_ =
             ((((((fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar20 +
                 fStack_12c * _UNK_1508be4cc) - fVar41) * fVar24 + fVar41) - fVar26) * fVar17 +
             fVar26) * (float)(~param_1->AlphaFadingEnabledMask & (uint)local_128 |
                              (uint)fVar34 & param_1->AlphaFadingEnabledMask);
        auVar15 = maxps(auVar42,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar15 = minps(auVar15,(undefined1  [16])GlobalVectorConstants::Float255);
        *param_2 = (uchar)(int)auVar15._0_4_;
        param_2[1] = (uchar)(int)auVar15._4_4_;
        param_2[2] = (uchar)(int)auVar15._8_4_;
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab50390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1320>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uchar *puVar3;
  uchar *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  int iVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  uint uVar29;
  int iVar32;
  int iVar33;
  undefined1 auVar30 [16];
  uint uVar34;
  int iVar35;
  undefined1 auVar31 [16];
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fStack_12c;
  
  fVar17 = __real_3f800000;
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar19 = param_3[1];
    fVar15 = param_3[2];
    fVar14 = (float)(fVar15 * fVar15 + fVar19 * fVar19 <= __real_3f800000) * __real_437f0000;
    if (__real_322bcc77 < fVar14) {
      fVar15 = FGenericPlatformMath::Atan2
                         (fVar15,(float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000));
      fVar19 = *param_3;
      fVar15 = fVar15 * param_1->OneOverProjectionAngle + __real_3f000000;
      if (fVar19 < fVar17 && (0.0 <= fVar19 && (0.0 <= fVar15 && fVar15 < fVar17))) {
        uVar1 = param_1->Source0SizeX;
        uVar2 = param_1->Source0SizeY;
        puVar3 = param_1->Source1Data;
        puVar4 = param_1->Source0Data;
        uVar13 = (uint)param_1->Source1SizeX;
        fVar17 = (float)uVar1;
        fVar24 = (float)param_1->Source1SizeY;
        iVar36 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar37 = (uint)uVar2 - GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar38 = uVar13 - GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar39 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
        auVar16._0_4_ = fVar17 - GlobalVectorConstants::FloatOne.m128_f32[0];
        auVar16._4_4_ = (float)uVar2 - GlobalVectorConstants::FloatOne.m128_f32[1];
        auVar16._8_4_ = (float)uVar13 - GlobalVectorConstants::FloatOne.m128_f32[2];
        auVar16._12_4_ = fVar24 - GlobalVectorConstants::FloatOne.m128_f32[3];
        auVar30._0_4_ = fVar15 * fVar17 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
        auVar30._4_4_ = fVar19 * (float)uVar2 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1]
        ;
        auVar30._8_4_ =
             fVar15 * (float)uVar13 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
        auVar30._12_4_ = fVar19 * fVar24 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
        auVar30 = maxps(auVar30,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar30 = minps(auVar30,auVar16);
        auVar16 = roundps(ZEXT216(uVar2),auVar30,1);
        fVar17 = auVar30._0_4_ - auVar16._0_4_;
        fVar15 = auVar30._4_4_ - auVar16._4_4_;
        fVar21 = auVar30._8_4_ - auVar16._8_4_;
        fVar25 = auVar30._12_4_ - auVar16._12_4_;
        iVar18 = (int)auVar30._0_4_;
        iVar20 = (int)auVar30._4_4_;
        iVar22 = (int)auVar30._8_4_;
        iVar26 = (int)auVar30._12_4_;
        iVar28 = iVar18 + GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar32 = iVar20 + GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar33 = iVar22 + GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar35 = iVar26 + GlobalVectorConstants::IntOne.m128i_i32[3];
        uVar29 = (uint)(iVar36 < iVar28) * iVar36 | (uint)(iVar36 >= iVar28) * iVar28;
        uVar34 = (uint)(iVar38 < iVar33) * iVar38 | (uint)(iVar38 >= iVar33) * iVar33;
        iVar20 = (uint)uVar1 * iVar20;
        lVar11 = (longlong)((iVar20 + iVar18) * 3);
        lVar6 = (longlong)(int)((iVar20 + uVar29) * 3);
        iVar20 = ((uint)(iVar37 < iVar32) * iVar37 | (uint)(iVar37 >= iVar32) * iVar32) *
                 (uint)uVar1;
        lVar12 = (longlong)((iVar20 + iVar18) * 3);
        lVar8 = (longlong)(int)((iVar20 + uVar29) * 3);
        iVar26 = iVar26 * uVar13;
        lVar9 = (longlong)((iVar22 + iVar26) * 3);
        lVar7 = (longlong)(int)((uVar34 + iVar26) * 3);
        iVar20 = ((uint)(iVar39 < iVar35) * iVar39 | (uint)(iVar39 >= iVar35) * iVar35) *
                 (uint)param_1->Source1SizeX;
        lVar10 = (longlong)((iVar22 + iVar20) * 3);
        lVar5 = (longlong)(int)((uVar34 + iVar20) * 3);
        fVar19 = ((float)puVar4[lVar6] * ___xmm_3b8080813b8080813b8080813b808081 -
                 (float)puVar4[lVar11] * ___xmm_3b8080813b8080813b8080813b808081) * fVar17 +
                 (float)puVar4[lVar11] * ___xmm_3b8080813b8080813b8080813b808081;
        fVar24 = ((float)puVar4[lVar6 + 1] * _UNK_1508be4c4 -
                 (float)puVar4[lVar11 + 1] * _UNK_1508be4c4) * fVar17 +
                 (float)puVar4[lVar11 + 1] * _UNK_1508be4c4;
        fVar23 = ((float)puVar4[lVar6 + 2] * _UNK_1508be4c8 -
                 (float)puVar4[lVar11 + 2] * _UNK_1508be4c8) * fVar17 +
                 (float)puVar4[lVar11 + 2] * _UNK_1508be4c8;
        fVar27 = (fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar17 +
                 fStack_12c * _UNK_1508be4cc;
        fVar19 = ((((float)puVar4[lVar8] * ___xmm_3b8080813b8080813b8080813b808081 -
                   (float)puVar4[lVar12] * ___xmm_3b8080813b8080813b8080813b808081) * fVar17 +
                  (float)puVar4[lVar12] * ___xmm_3b8080813b8080813b8080813b808081) - fVar19) *
                 fVar15 + fVar19;
        fVar24 = ((((float)puVar4[lVar8 + 1] * _UNK_1508be4c4 -
                   (float)puVar4[lVar12 + 1] * _UNK_1508be4c4) * fVar17 +
                  (float)puVar4[lVar12 + 1] * _UNK_1508be4c4) - fVar24) * fVar15 + fVar24;
        fVar23 = ((((float)puVar4[lVar8 + 2] * _UNK_1508be4c8 -
                   (float)puVar4[lVar12 + 2] * _UNK_1508be4c8) * fVar17 +
                  (float)puVar4[lVar12 + 2] * _UNK_1508be4c8) - fVar23) * fVar15 + fVar23;
        fVar27 = (((fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar17 +
                  fStack_12c * _UNK_1508be4cc) - fVar27) * fVar15 + fVar27;
        uVar13 = param_1->RGBFadingEnabledMask;
        fVar17 = param_1->MipInterpolationFactor;
        fVar15 = ((float)puVar3[lVar7] * ___xmm_3b8080813b8080813b8080813b808081 -
                 (float)puVar3[lVar9] * ___xmm_3b8080813b8080813b8080813b808081) * fVar21 +
                 (float)puVar3[lVar9] * ___xmm_3b8080813b8080813b8080813b808081;
        fVar40 = ((float)puVar3[lVar7 + 1] * _UNK_1508be4c4 -
                 (float)puVar3[lVar9 + 1] * _UNK_1508be4c4) * fVar21 +
                 (float)puVar3[lVar9 + 1] * _UNK_1508be4c4;
        fVar41 = ((float)puVar3[lVar7 + 2] * _UNK_1508be4c8 -
                 (float)puVar3[lVar9 + 2] * _UNK_1508be4c8) * fVar21 +
                 (float)puVar3[lVar9 + 2] * _UNK_1508be4c8;
        fVar42 = (fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar21 +
                 fStack_12c * _UNK_1508be4cc;
        auVar31._0_4_ =
             (((((((float)puVar3[lVar5] * ___xmm_3b8080813b8080813b8080813b808081 -
                  (float)puVar3[lVar10] * ___xmm_3b8080813b8080813b8080813b808081) * fVar21 +
                 (float)puVar3[lVar10] * ___xmm_3b8080813b8080813b8080813b808081) - fVar15) * fVar25
               + fVar15) - fVar19) * fVar17 + fVar19) *
             (float)(~uVar13 & ___xmm_437f0000437f0000437f0000437f0000 | (uint)fVar14 & uVar13);
        auVar31._4_4_ =
             (((((((float)puVar3[lVar5 + 1] * _UNK_1508be4c4 -
                  (float)puVar3[lVar10 + 1] * _UNK_1508be4c4) * fVar21 +
                 (float)puVar3[lVar10 + 1] * _UNK_1508be4c4) - fVar40) * fVar25 + fVar40) - fVar24)
              * fVar17 + fVar24) * (float)(~uVar13 & _UNK_1508be4d4 | (uint)fVar14 & uVar13);
        auVar31._8_4_ =
             (((((((float)puVar3[lVar5 + 2] * _UNK_1508be4c8 -
                  (float)puVar3[lVar10 + 2] * _UNK_1508be4c8) * fVar21 +
                 (float)puVar3[lVar10 + 2] * _UNK_1508be4c8) - fVar41) * fVar25 + fVar41) - fVar23)
              * fVar17 + fVar23) * (float)(~uVar13 & _UNK_1508be4d8 | (uint)fVar14 & uVar13);
        auVar31._12_4_ =
             ((((((fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar21 +
                 fStack_12c * _UNK_1508be4cc) - fVar42) * fVar25 + fVar42) - fVar27) * fVar17 +
             fVar27) * (float)(~param_1->AlphaFadingEnabledMask & _UNK_1508be4dc |
                              (uint)fVar14 & param_1->AlphaFadingEnabledMask);
        auVar16 = maxps(auVar31,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar16 = minps(auVar16,(undefined1  [16])GlobalVectorConstants::Float255);
        *param_2 = (uchar)(int)auVar16._0_4_;
        param_2[1] = (uchar)(int)auVar16._4_4_;
        param_2[2] = (uchar)(int)auVar16._8_4_;
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab50a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1352>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uchar *puVar2;
  uchar *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  uint uVar29;
  int iVar32;
  int iVar33;
  undefined1 auVar30 [16];
  uint uVar34;
  int iVar35;
  undefined1 auVar31 [16];
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fStack_12c;
  
  puVar2 = param_1->Source0Data;
  if ((puVar2 != (uchar *)0x0) &&
     (fVar14 = (float)(param_3[2] <= __real_3f800000 && 0.0 <= param_3[2]) * __real_437f0000,
     __real_322bcc77 < fVar14)) {
    fVar16 = param_3[1];
    fVar18 = *param_3;
    if (fVar18 < __real_3f800000 && (0.0 <= fVar18 && (0.0 <= fVar16 && fVar16 < __real_3f800000)))
    {
      uVar1 = param_1->Source0SizeY;
      puVar3 = param_1->Source1Data;
      uVar13 = (uint)param_1->Source1SizeX;
      uVar11 = (uint)param_1->Source0SizeX;
      fVar24 = (float)param_1->Source1SizeY;
      iVar36 = uVar11 - GlobalVectorConstants::IntOne.m128i_i32[0];
      iVar37 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
      iVar38 = uVar13 - GlobalVectorConstants::IntOne.m128i_i32[2];
      iVar39 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
      auVar15._0_4_ = (float)uVar11 - GlobalVectorConstants::FloatOne.m128_f32[0];
      auVar15._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
      auVar15._8_4_ = (float)uVar13 - GlobalVectorConstants::FloatOne.m128_f32[2];
      auVar15._12_4_ = fVar24 - GlobalVectorConstants::FloatOne.m128_f32[3];
      auVar30._0_4_ = fVar18 * (float)uVar11 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
      auVar30._4_4_ =
           (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) * (float)uVar1 +
           GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1];
      auVar30._8_4_ =
           (float)*(undefined8 *)param_3 * (float)uVar13 +
           GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
      auVar30._12_4_ = fVar16 * fVar24 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
      auVar30 = maxps(auVar30,(undefined1  [16])GlobalVectorConstants::FloatZero);
      auVar30 = minps(auVar30,auVar15);
      auVar15 = roundps(ZEXT216(uVar1),auVar30,1);
      fVar16 = auVar30._0_4_ - auVar15._0_4_;
      fVar24 = auVar30._4_4_ - auVar15._4_4_;
      fVar21 = auVar30._8_4_ - auVar15._8_4_;
      fVar25 = auVar30._12_4_ - auVar15._12_4_;
      iVar17 = (int)auVar30._0_4_;
      iVar19 = (int)auVar30._4_4_;
      iVar22 = (int)auVar30._8_4_;
      iVar26 = (int)auVar30._12_4_;
      iVar28 = iVar17 + GlobalVectorConstants::IntOne.m128i_i32[0];
      iVar32 = iVar19 + GlobalVectorConstants::IntOne.m128i_i32[1];
      iVar33 = iVar22 + GlobalVectorConstants::IntOne.m128i_i32[2];
      iVar35 = iVar26 + GlobalVectorConstants::IntOne.m128i_i32[3];
      uVar29 = (uint)(iVar36 < iVar28) * iVar36 | (uint)(iVar36 >= iVar28) * iVar28;
      uVar34 = (uint)(iVar38 < iVar33) * iVar38 | (uint)(iVar38 >= iVar33) * iVar33;
      iVar19 = iVar19 * uVar11;
      lVar10 = (longlong)((iVar19 + iVar17) * 3);
      lVar5 = (longlong)(int)((iVar19 + uVar29) * 3);
      iVar19 = ((uint)(iVar37 < iVar32) * iVar37 | (uint)(iVar37 >= iVar32) * iVar32) *
               (uint)param_1->Source0SizeX;
      lVar12 = (longlong)((iVar19 + iVar17) * 3);
      lVar7 = (longlong)(int)((iVar19 + uVar29) * 3);
      iVar26 = iVar26 * uVar13;
      lVar8 = (longlong)((iVar26 + iVar22) * 3);
      lVar6 = (longlong)(int)((iVar26 + uVar34) * 3);
      iVar19 = ((uint)(iVar39 < iVar35) * iVar39 | (uint)(iVar39 >= iVar35) * iVar35) *
               (uint)param_1->Source1SizeX;
      lVar9 = (longlong)((iVar22 + iVar19) * 3);
      lVar4 = (longlong)(int)((uVar34 + iVar19) * 3);
      fVar18 = ((float)puVar2[lVar5] * ___xmm_3b8080813b8080813b8080813b808081 -
               (float)puVar2[lVar10] * ___xmm_3b8080813b8080813b8080813b808081) * fVar16 +
               (float)puVar2[lVar10] * ___xmm_3b8080813b8080813b8080813b808081;
      fVar20 = ((float)puVar2[lVar5 + 1] * _UNK_1508be4c4 -
               (float)puVar2[lVar10 + 1] * _UNK_1508be4c4) * fVar16 +
               (float)puVar2[lVar10 + 1] * _UNK_1508be4c4;
      fVar23 = ((float)puVar2[lVar5 + 2] * _UNK_1508be4c8 -
               (float)puVar2[lVar10 + 2] * _UNK_1508be4c8) * fVar16 +
               (float)puVar2[lVar10 + 2] * _UNK_1508be4c8;
      fVar27 = (fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar16 +
               fStack_12c * _UNK_1508be4cc;
      fVar18 = ((((float)puVar2[lVar7] * ___xmm_3b8080813b8080813b8080813b808081 -
                 (float)puVar2[lVar12] * ___xmm_3b8080813b8080813b8080813b808081) * fVar16 +
                (float)puVar2[lVar12] * ___xmm_3b8080813b8080813b8080813b808081) - fVar18) * fVar24
               + fVar18;
      fVar20 = ((((float)puVar2[lVar7 + 1] * _UNK_1508be4c4 -
                 (float)puVar2[lVar12 + 1] * _UNK_1508be4c4) * fVar16 +
                (float)puVar2[lVar12 + 1] * _UNK_1508be4c4) - fVar20) * fVar24 + fVar20;
      fVar23 = ((((float)puVar2[lVar7 + 2] * _UNK_1508be4c8 -
                 (float)puVar2[lVar12 + 2] * _UNK_1508be4c8) * fVar16 +
                (float)puVar2[lVar12 + 2] * _UNK_1508be4c8) - fVar23) * fVar24 + fVar23;
      fVar27 = (((fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar16 +
                fStack_12c * _UNK_1508be4cc) - fVar27) * fVar24 + fVar27;
      uVar11 = param_1->RGBFadingEnabledMask;
      fVar16 = param_1->MipInterpolationFactor;
      fVar24 = ((float)puVar3[lVar6] * ___xmm_3b8080813b8080813b8080813b808081 -
               (float)puVar3[lVar8] * ___xmm_3b8080813b8080813b8080813b808081) * fVar21 +
               (float)puVar3[lVar8] * ___xmm_3b8080813b8080813b8080813b808081;
      fVar40 = ((float)puVar3[lVar6 + 1] * _UNK_1508be4c4 -
               (float)puVar3[lVar8 + 1] * _UNK_1508be4c4) * fVar21 +
               (float)puVar3[lVar8 + 1] * _UNK_1508be4c4;
      fVar41 = ((float)puVar3[lVar6 + 2] * _UNK_1508be4c8 -
               (float)puVar3[lVar8 + 2] * _UNK_1508be4c8) * fVar21 +
               (float)puVar3[lVar8 + 2] * _UNK_1508be4c8;
      fVar42 = (fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar21 +
               fStack_12c * _UNK_1508be4cc;
      auVar31._0_4_ =
           (((((((float)puVar3[lVar4] * ___xmm_3b8080813b8080813b8080813b808081 -
                (float)puVar3[lVar9] * ___xmm_3b8080813b8080813b8080813b808081) * fVar21 +
               (float)puVar3[lVar9] * ___xmm_3b8080813b8080813b8080813b808081) - fVar24) * fVar25 +
             fVar24) - fVar18) * fVar16 + fVar18) *
           (float)(~uVar11 & ___xmm_437f0000437f0000437f0000437f0000 | (uint)fVar14 & uVar11);
      auVar31._4_4_ =
           (((((((float)puVar3[lVar4 + 1] * _UNK_1508be4c4 -
                (float)puVar3[lVar9 + 1] * _UNK_1508be4c4) * fVar21 +
               (float)puVar3[lVar9 + 1] * _UNK_1508be4c4) - fVar40) * fVar25 + fVar40) - fVar20) *
            fVar16 + fVar20) * (float)(~uVar11 & _UNK_1508be4d4 | (uint)fVar14 & uVar11);
      auVar31._8_4_ =
           (((((((float)puVar3[lVar4 + 2] * _UNK_1508be4c8 -
                (float)puVar3[lVar9 + 2] * _UNK_1508be4c8) * fVar21 +
               (float)puVar3[lVar9 + 2] * _UNK_1508be4c8) - fVar41) * fVar25 + fVar41) - fVar23) *
            fVar16 + fVar23) * (float)(~uVar11 & _UNK_1508be4d8 | (uint)fVar14 & uVar11);
      auVar31._12_4_ =
           ((((((fStack_12c * _UNK_1508be4cc - fStack_12c * _UNK_1508be4cc) * fVar21 +
               fStack_12c * _UNK_1508be4cc) - fVar42) * fVar25 + fVar42) - fVar27) * fVar16 + fVar27
           ) * (float)(~param_1->AlphaFadingEnabledMask & _UNK_1508be4dc |
                      (uint)fVar14 & param_1->AlphaFadingEnabledMask);
      auVar15 = maxps(auVar31,(undefined1  [16])GlobalVectorConstants::FloatZero);
      auVar15 = minps(auVar15,(undefined1  [16])GlobalVectorConstants::Float255);
      *param_2 = (uchar)(int)auVar15._0_4_;
      param_2[1] = (uchar)(int)auVar15._4_4_;
      param_2[2] = (uchar)(int)auVar15._8_4_;
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab510b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1560>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  puVar2 = param_1->Source0Data;
  if (puVar2 != (uchar *)0x0) {
    fVar31 = param_3[3];
    fVar35 = (fVar31 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    if (__real_437f0000 <= fVar35) {
      fVar35 = __real_437f0000;
    }
    if (fVar35 <= 0.0) {
      fVar35 = 0.0;
    }
    fVar6 = (float)(param_3[2] <= __real_3f800000 && 0.0 <= param_3[2]) * __real_437f0000;
    if (fVar6 <= fVar35) {
      fVar35 = fVar6;
    }
    fVar6 = __real_437f0000;
    if (fVar31 < param_1->FadeEndCos || fVar31 == param_1->FadeEndCos) {
      fVar6 = 0.0;
    }
    if (__real_322bcc77 < fVar35) {
      fVar31 = *param_3;
      fVar9 = param_3[1];
      if (fVar9 < __real_3f800000 && (0.0 <= fVar9 && (0.0 <= fVar31 && fVar31 < __real_3f800000)))
      {
        uVar1 = param_1->Source0SizeY;
        puVar3 = param_1->Source1Data;
        uVar5 = (uint)param_1->Source1SizeX;
        uVar4 = (uint)param_1->Source0SizeX;
        fVar13 = (float)param_1->Source1SizeY;
        iVar17 = uVar4 - GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar18 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar19 = uVar5 - GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar20 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
        auVar7._0_4_ = (float)uVar4 - GlobalVectorConstants::FloatOne.m128_f32[0];
        auVar7._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
        auVar7._8_4_ = (float)uVar5 - GlobalVectorConstants::FloatOne.m128_f32[2];
        auVar7._12_4_ = fVar13 - GlobalVectorConstants::FloatOne.m128_f32[3];
        auVar16._0_4_ = fVar31 * (float)uVar4 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0]
        ;
        auVar16._4_4_ = fVar9 * (float)uVar1 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1];
        auVar16._8_4_ = fVar31 * (float)uVar5 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2]
        ;
        auVar16._12_4_ = fVar9 * fVar13 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
        auVar16 = maxps(auVar16,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar16 = minps(auVar16,auVar7);
        iVar8 = (int)auVar16._0_4_;
        iVar10 = (int)auVar16._4_4_;
        iVar11 = (int)auVar16._8_4_;
        iVar14 = (int)auVar16._12_4_;
        auVar7 = roundps(ZEXT216(uVar1),auVar16,1);
        iVar24 = iVar8 + GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar26 = iVar10 + GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar27 = iVar11 + GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar29 = iVar14 + GlobalVectorConstants::IntOne.m128i_i32[3];
        fVar31 = auVar16._0_4_ - auVar7._0_4_;
        fVar32 = auVar16._4_4_ - auVar7._4_4_;
        fVar33 = auVar16._8_4_ - auVar7._8_4_;
        fVar34 = auVar16._12_4_ - auVar7._12_4_;
        uVar25 = (uint)(iVar17 < iVar24) * iVar17 | (uint)(iVar17 >= iVar24) * iVar24;
        uVar28 = (uint)(iVar19 < iVar27) * iVar19 | (uint)(iVar19 >= iVar27) * iVar27;
        iVar10 = iVar10 * uVar4;
        iVar18 = ((uint)(iVar18 < iVar26) * iVar18 | (uint)(iVar18 >= iVar26) * iVar26) *
                 (uint)param_1->Source0SizeX;
        iVar14 = iVar14 * uVar5;
        iVar17 = ((uint)(iVar20 < iVar29) * iVar20 | (uint)(iVar20 >= iVar29) * iVar29) *
                 (uint)param_1->Source1SizeX;
        uVar4 = param_1->RGBFadingEnabledMask;
        fVar9 = ((float)puVar2[(int)(iVar10 + uVar25)] * ___xmm_3b8080813b8080813b8080813b808081 -
                (float)puVar2[iVar10 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) * fVar31 +
                (float)puVar2[iVar10 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081;
        fVar13 = (fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar31 +
                 fStack_b4 * _UNK_1508be4c4;
        fVar12 = (fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar31 +
                 fStack_b0 * _UNK_1508be4c8;
        fVar15 = (fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar31 +
                 fStack_ac * _UNK_1508be4cc;
        fVar9 = ((((float)puVar2[(int)(iVar18 + uVar25)] * ___xmm_3b8080813b8080813b8080813b808081 -
                  (float)puVar2[iVar18 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) * fVar31
                 + (float)puVar2[iVar18 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) - fVar9)
                * fVar32 + fVar9;
        fVar13 = (((fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar31 +
                  fStack_b4 * _UNK_1508be4c4) - fVar13) * fVar32 + fVar13;
        fVar12 = (((fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar31 +
                  fStack_b0 * _UNK_1508be4c8) - fVar12) * fVar32 + fVar12;
        fVar15 = (((fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar31 +
                  fStack_ac * _UNK_1508be4cc) - fVar15) * fVar32 + fVar15;
        fVar32 = ((float)puVar3[(int)(iVar14 + uVar28)] * ___xmm_3b8080813b8080813b8080813b808081 -
                 (float)puVar3[iVar14 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) * fVar33
                 + (float)puVar3[iVar14 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081;
        fVar21 = (fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar33 +
                 fStack_b4 * _UNK_1508be4c4;
        fVar22 = (fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar33 +
                 fStack_b0 * _UNK_1508be4c8;
        fVar23 = (fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar33 +
                 fStack_ac * _UNK_1508be4cc;
        fVar31 = param_1->MipInterpolationFactor;
        auVar30._0_4_ =
             (((((((float)puVar3[(int)(iVar17 + uVar28)] * ___xmm_3b8080813b8080813b8080813b808081 -
                  (float)puVar3[iVar17 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) * fVar33
                 + (float)puVar3[iVar17 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) -
                fVar32) * fVar34 + fVar32) - fVar9) * fVar31 + fVar9) *
             (float)(~uVar4 & (uint)fVar6 | (uint)fVar35 & uVar4);
        auVar30._4_4_ =
             ((((((fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar33 +
                 fStack_b4 * _UNK_1508be4c4) - fVar21) * fVar34 + fVar21) - fVar13) * fVar31 +
             fVar13) * (float)(~uVar4 & (uint)fVar6 | (uint)fVar35 & uVar4);
        auVar30._8_4_ =
             ((((((fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar33 +
                 fStack_b0 * _UNK_1508be4c8) - fVar22) * fVar34 + fVar22) - fVar12) * fVar31 +
             fVar12) * (float)(~uVar4 & (uint)fVar6 | (uint)fVar35 & uVar4);
        auVar30._12_4_ =
             ((((((fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar33 +
                 fStack_ac * _UNK_1508be4cc) - fVar23) * fVar34 + fVar23) - fVar15) * fVar31 +
             fVar15) * (float)(~param_1->AlphaFadingEnabledMask & (uint)fVar6 |
                              (uint)fVar35 & param_1->AlphaFadingEnabledMask);
        auVar7 = maxps(auVar30,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar7 = minps(auVar7,(undefined1  [16])GlobalVectorConstants::Float255);
        *param_2 = (uchar)(int)auVar7._0_4_;
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab514f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1562>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  puVar2 = param_1->Source0Data;
  if (puVar2 != (uchar *)0x0) {
    fVar35 = param_3[3];
    fVar34 = (fVar35 - param_1->FadeEndCos) * param_1->OneOverFadeRangeTimes255;
    if (__real_437f0000 <= fVar34) {
      fVar34 = __real_437f0000;
    }
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
    fVar6 = (float)(param_3[2] <= __real_3f800000 && 0.0 <= param_3[2]) * __real_437f0000;
    if (fVar6 <= fVar34) {
      fVar34 = fVar6;
    }
    fVar6 = __real_437f0000;
    if (fVar35 < param_1->FadeEndCos || fVar35 == param_1->FadeEndCos) {
      fVar6 = 0.0;
    }
    if (__real_322bcc77 < fVar34) {
      if ((0.0 < fVar6) && (param_1->MaskData != (uchar *)0x0)) {
        fVar6 = (float)param_1->MaskData[(longlong)param_2 - (longlong)param_1->TargetData];
      }
      fVar35 = fVar34 * fVar6 * __real_3b808081;
      if (__real_322bcc77 < fVar35) {
        fVar34 = *param_3;
        fVar9 = param_3[1];
        if (fVar9 < __real_3f800000 && (0.0 <= fVar9 && (0.0 <= fVar34 && fVar34 < __real_3f800000))
           ) {
          uVar1 = param_1->Source0SizeY;
          puVar3 = param_1->Source1Data;
          uVar5 = (uint)param_1->Source1SizeX;
          uVar4 = (uint)param_1->Source0SizeX;
          fVar13 = (float)param_1->Source1SizeY;
          iVar17 = uVar4 - GlobalVectorConstants::IntOne.m128i_i32[0];
          iVar18 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
          iVar19 = uVar5 - GlobalVectorConstants::IntOne.m128i_i32[2];
          iVar20 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
          auVar7._0_4_ = (float)uVar4 - GlobalVectorConstants::FloatOne.m128_f32[0];
          auVar7._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
          auVar7._8_4_ = (float)uVar5 - GlobalVectorConstants::FloatOne.m128_f32[2];
          auVar7._12_4_ = fVar13 - GlobalVectorConstants::FloatOne.m128_f32[3];
          auVar16._0_4_ =
               fVar34 * (float)uVar4 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
          auVar16._4_4_ =
               fVar9 * (float)uVar1 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1];
          auVar16._8_4_ =
               fVar34 * (float)uVar5 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
          auVar16._12_4_ = fVar9 * fVar13 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
          auVar16 = maxps(auVar16,(undefined1  [16])GlobalVectorConstants::FloatZero);
          auVar16 = minps(auVar16,auVar7);
          iVar8 = (int)auVar16._0_4_;
          iVar10 = (int)auVar16._4_4_;
          iVar11 = (int)auVar16._8_4_;
          iVar14 = (int)auVar16._12_4_;
          auVar7 = roundps(ZEXT216(uVar1),auVar16,1);
          iVar24 = iVar8 + GlobalVectorConstants::IntOne.m128i_i32[0];
          iVar26 = iVar10 + GlobalVectorConstants::IntOne.m128i_i32[1];
          iVar27 = iVar11 + GlobalVectorConstants::IntOne.m128i_i32[2];
          iVar29 = iVar14 + GlobalVectorConstants::IntOne.m128i_i32[3];
          fVar34 = auVar16._0_4_ - auVar7._0_4_;
          fVar31 = auVar16._4_4_ - auVar7._4_4_;
          fVar32 = auVar16._8_4_ - auVar7._8_4_;
          fVar33 = auVar16._12_4_ - auVar7._12_4_;
          uVar25 = (uint)(iVar17 < iVar24) * iVar17 | (uint)(iVar17 >= iVar24) * iVar24;
          uVar28 = (uint)(iVar19 < iVar27) * iVar19 | (uint)(iVar19 >= iVar27) * iVar27;
          iVar10 = iVar10 * uVar4;
          iVar18 = ((uint)(iVar18 < iVar26) * iVar18 | (uint)(iVar18 >= iVar26) * iVar26) *
                   (uint)param_1->Source0SizeX;
          iVar14 = iVar14 * uVar5;
          iVar17 = ((uint)(iVar20 < iVar29) * iVar20 | (uint)(iVar20 >= iVar29) * iVar29) *
                   (uint)param_1->Source1SizeX;
          uVar4 = param_1->RGBFadingEnabledMask;
          fVar9 = ((float)puVar2[(int)(iVar10 + uVar25)] * ___xmm_3b8080813b8080813b8080813b808081 -
                  (float)puVar2[iVar10 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) * fVar34
                  + (float)puVar2[iVar10 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081;
          fVar13 = (fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar34 +
                   fStack_b4 * _UNK_1508be4c4;
          fVar12 = (fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar34 +
                   fStack_b0 * _UNK_1508be4c8;
          fVar15 = (fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar34 +
                   fStack_ac * _UNK_1508be4cc;
          fVar9 = ((((float)puVar2[(int)(iVar18 + uVar25)] * ___xmm_3b8080813b8080813b8080813b808081
                    - (float)puVar2[iVar18 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) *
                    fVar34 + (float)puVar2[iVar18 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081
                   ) - fVar9) * fVar31 + fVar9;
          fVar13 = (((fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar34 +
                    fStack_b4 * _UNK_1508be4c4) - fVar13) * fVar31 + fVar13;
          fVar12 = (((fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar34 +
                    fStack_b0 * _UNK_1508be4c8) - fVar12) * fVar31 + fVar12;
          fVar15 = (((fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar34 +
                    fStack_ac * _UNK_1508be4cc) - fVar15) * fVar31 + fVar15;
          fVar31 = ((float)puVar3[(int)(iVar14 + uVar28)] * ___xmm_3b8080813b8080813b8080813b808081
                   - (float)puVar3[iVar14 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) *
                   fVar32 + (float)puVar3[iVar14 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081
          ;
          fVar21 = (fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar32 +
                   fStack_b4 * _UNK_1508be4c4;
          fVar22 = (fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar32 +
                   fStack_b0 * _UNK_1508be4c8;
          fVar23 = (fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar32 +
                   fStack_ac * _UNK_1508be4cc;
          fVar34 = param_1->MipInterpolationFactor;
          auVar30._0_4_ =
               (((((((float)puVar3[(int)(iVar17 + uVar28)] * ___xmm_3b8080813b8080813b8080813b808081
                    - (float)puVar3[iVar17 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) *
                    fVar32 + (float)puVar3[iVar17 + iVar11] *
                             ___xmm_3b8080813b8080813b8080813b808081) - fVar31) * fVar33 + fVar31) -
                fVar9) * fVar34 + fVar9) * (float)(~uVar4 & (uint)fVar6 | (uint)fVar35 & uVar4);
          auVar30._4_4_ =
               ((((((fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar32 +
                   fStack_b4 * _UNK_1508be4c4) - fVar21) * fVar33 + fVar21) - fVar13) * fVar34 +
               fVar13) * (float)(~uVar4 & (uint)fVar6 | (uint)fVar35 & uVar4);
          auVar30._8_4_ =
               ((((((fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar32 +
                   fStack_b0 * _UNK_1508be4c8) - fVar22) * fVar33 + fVar22) - fVar12) * fVar34 +
               fVar12) * (float)(~uVar4 & (uint)fVar6 | (uint)fVar35 & uVar4);
          auVar30._12_4_ =
               ((((((fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar32 +
                   fStack_ac * _UNK_1508be4cc) - fVar23) * fVar33 + fVar23) - fVar15) * fVar34 +
               fVar15) * (float)(~param_1->AlphaFadingEnabledMask & (uint)fVar6 |
                                (uint)fVar35 & param_1->AlphaFadingEnabledMask);
          auVar7 = maxps(auVar30,(undefined1  [16])GlobalVectorConstants::FloatZero);
          auVar7 = minps(auVar7,(undefined1  [16])GlobalVectorConstants::Float255);
          *param_2 = (uchar)(int)auVar7._0_4_;
        }
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab51970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1576>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  fVar13 = __real_3f800000;
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar9 = param_3[1];
    fVar6 = param_3[2];
    fVar34 = (float)(fVar6 * fVar6 + fVar9 * fVar9 <= __real_3f800000) * __real_437f0000;
    if (__real_322bcc77 < fVar34) {
      fVar6 = FGenericPlatformMath::Atan2
                        (fVar6,(float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000));
      fVar9 = *param_3;
      fVar6 = fVar6 * param_1->OneOverProjectionAngle + __real_3f000000;
      if (fVar6 < fVar13 && (0.0 <= fVar6 && (0.0 <= fVar9 && fVar9 < fVar13))) {
        uVar1 = param_1->Source0SizeY;
        puVar2 = param_1->Source0Data;
        puVar3 = param_1->Source1Data;
        uVar5 = (uint)param_1->Source1SizeX;
        uVar4 = (uint)param_1->Source0SizeX;
        fVar13 = (float)param_1->Source1SizeY;
        iVar18 = uVar4 - GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar19 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar20 = uVar5 - GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar21 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
        auVar7._0_4_ = (float)uVar4 - GlobalVectorConstants::FloatOne.m128_f32[0];
        auVar7._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
        auVar7._8_4_ = (float)uVar5 - GlobalVectorConstants::FloatOne.m128_f32[2];
        auVar7._12_4_ = fVar13 - GlobalVectorConstants::FloatOne.m128_f32[3];
        auVar16._0_4_ = fVar6 * (float)uVar4 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
        auVar16._4_4_ = fVar9 * (float)uVar1 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1];
        auVar16._8_4_ = fVar6 * (float)uVar5 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
        auVar16._12_4_ = fVar9 * fVar13 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
        auVar16 = maxps(auVar16,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar16 = minps(auVar16,auVar7);
        iVar8 = (int)auVar16._0_4_;
        iVar10 = (int)auVar16._4_4_;
        iVar11 = (int)auVar16._8_4_;
        iVar14 = (int)auVar16._12_4_;
        auVar7 = roundps(ZEXT216(uVar1),auVar16,1);
        iVar25 = iVar8 + GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar27 = iVar10 + GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar28 = iVar11 + GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar30 = iVar14 + GlobalVectorConstants::IntOne.m128i_i32[3];
        fVar13 = auVar16._0_4_ - auVar7._0_4_;
        fVar31 = auVar16._4_4_ - auVar7._4_4_;
        fVar32 = auVar16._8_4_ - auVar7._8_4_;
        fVar33 = auVar16._12_4_ - auVar7._12_4_;
        uVar26 = (uint)(iVar18 < iVar25) * iVar18 | (uint)(iVar18 >= iVar25) * iVar25;
        uVar29 = (uint)(iVar20 < iVar28) * iVar20 | (uint)(iVar20 >= iVar28) * iVar28;
        iVar10 = iVar10 * uVar4;
        iVar19 = ((uint)(iVar19 < iVar27) * iVar19 | (uint)(iVar19 >= iVar27) * iVar27) *
                 (uint)param_1->Source0SizeX;
        iVar14 = iVar14 * uVar5;
        iVar18 = ((uint)(iVar21 < iVar30) * iVar21 | (uint)(iVar21 >= iVar30) * iVar30) *
                 (uint)param_1->Source1SizeX;
        uVar4 = param_1->RGBFadingEnabledMask;
        fVar9 = ((float)puVar2[(int)(iVar10 + uVar26)] * ___xmm_3b8080813b8080813b8080813b808081 -
                (float)puVar2[iVar10 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) * fVar13 +
                (float)puVar2[iVar10 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081;
        fVar6 = (fStack_94 * _UNK_1508be4c4 - fStack_94 * _UNK_1508be4c4) * fVar13 +
                fStack_94 * _UNK_1508be4c4;
        fVar12 = (fStack_90 * _UNK_1508be4c8 - fStack_90 * _UNK_1508be4c8) * fVar13 +
                 fStack_90 * _UNK_1508be4c8;
        fVar15 = (fStack_8c * _UNK_1508be4cc - fStack_8c * _UNK_1508be4cc) * fVar13 +
                 fStack_8c * _UNK_1508be4cc;
        fVar9 = ((((float)puVar2[(int)(iVar19 + uVar26)] * ___xmm_3b8080813b8080813b8080813b808081 -
                  (float)puVar2[iVar19 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) * fVar13
                 + (float)puVar2[iVar19 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) - fVar9)
                * fVar31 + fVar9;
        fVar6 = (((fStack_94 * _UNK_1508be4c4 - fStack_94 * _UNK_1508be4c4) * fVar13 +
                 fStack_94 * _UNK_1508be4c4) - fVar6) * fVar31 + fVar6;
        fVar12 = (((fStack_90 * _UNK_1508be4c8 - fStack_90 * _UNK_1508be4c8) * fVar13 +
                  fStack_90 * _UNK_1508be4c8) - fVar12) * fVar31 + fVar12;
        fVar15 = (((fStack_8c * _UNK_1508be4cc - fStack_8c * _UNK_1508be4cc) * fVar13 +
                  fStack_8c * _UNK_1508be4cc) - fVar15) * fVar31 + fVar15;
        fVar31 = ((float)puVar3[(int)(iVar14 + uVar29)] * ___xmm_3b8080813b8080813b8080813b808081 -
                 (float)puVar3[iVar14 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) * fVar32
                 + (float)puVar3[iVar14 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081;
        fVar22 = (fStack_94 * _UNK_1508be4c4 - fStack_94 * _UNK_1508be4c4) * fVar32 +
                 fStack_94 * _UNK_1508be4c4;
        fVar23 = (fStack_90 * _UNK_1508be4c8 - fStack_90 * _UNK_1508be4c8) * fVar32 +
                 fStack_90 * _UNK_1508be4c8;
        fVar24 = (fStack_8c * _UNK_1508be4cc - fStack_8c * _UNK_1508be4cc) * fVar32 +
                 fStack_8c * _UNK_1508be4cc;
        fVar13 = param_1->MipInterpolationFactor;
        auVar17._0_4_ =
             (((((((float)puVar3[(int)(iVar18 + uVar29)] * ___xmm_3b8080813b8080813b8080813b808081 -
                  (float)puVar3[iVar18 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) * fVar32
                 + (float)puVar3[iVar18 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) -
                fVar31) * fVar33 + fVar31) - fVar9) * fVar13 + fVar9) *
             (float)(~uVar4 & ___xmm_437f0000437f0000437f0000437f0000 | (uint)fVar34 & uVar4);
        auVar17._4_4_ =
             ((((((fStack_94 * _UNK_1508be4c4 - fStack_94 * _UNK_1508be4c4) * fVar32 +
                 fStack_94 * _UNK_1508be4c4) - fVar22) * fVar33 + fVar22) - fVar6) * fVar13 + fVar6)
             * (float)(~uVar4 & _UNK_1508be4d4 | (uint)fVar34 & uVar4);
        auVar17._8_4_ =
             ((((((fStack_90 * _UNK_1508be4c8 - fStack_90 * _UNK_1508be4c8) * fVar32 +
                 fStack_90 * _UNK_1508be4c8) - fVar23) * fVar33 + fVar23) - fVar12) * fVar13 +
             fVar12) * (float)(~uVar4 & _UNK_1508be4d8 | (uint)fVar34 & uVar4);
        auVar17._12_4_ =
             ((((((fStack_8c * _UNK_1508be4cc - fStack_8c * _UNK_1508be4cc) * fVar32 +
                 fStack_8c * _UNK_1508be4cc) - fVar24) * fVar33 + fVar24) - fVar15) * fVar13 +
             fVar15) * (float)(~param_1->AlphaFadingEnabledMask & _UNK_1508be4dc |
                              (uint)fVar34 & param_1->AlphaFadingEnabledMask);
        auVar7 = maxps(auVar17,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar7 = minps(auVar7,(undefined1  [16])GlobalVectorConstants::Float255);
        *param_2 = (uchar)(int)auVar7._0_4_;
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab51d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1578>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  fVar13 = __real_3f800000;
  if (param_1->Source0Data != (uchar *)0x0) {
    fVar9 = param_3[1];
    fVar6 = param_3[2];
    fVar17 = (float)(fVar6 * fVar6 + fVar9 * fVar9 <= __real_3f800000) * __real_437f0000;
    if (__real_322bcc77 < fVar17) {
      fVar35 = __real_437f0000;
      if (param_1->MaskData != (uchar *)0x0) {
        fVar35 = (float)param_1->MaskData[(longlong)param_2 - (longlong)param_1->TargetData];
      }
      fVar17 = fVar35 * fVar17 * __real_3b808081;
      if (__real_322bcc77 < fVar17) {
        fVar6 = FGenericPlatformMath::Atan2
                          (fVar6,(float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000));
        fVar9 = *param_3;
        fVar6 = fVar6 * param_1->OneOverProjectionAngle + __real_3f000000;
        if (fVar6 < fVar13 && (0.0 <= fVar6 && (0.0 <= fVar9 && fVar9 < fVar13))) {
          uVar1 = param_1->Source0SizeY;
          puVar2 = param_1->Source0Data;
          puVar3 = param_1->Source1Data;
          uVar5 = (uint)param_1->Source1SizeX;
          uVar4 = (uint)param_1->Source0SizeX;
          fVar13 = (float)param_1->Source1SizeY;
          iVar18 = uVar4 - GlobalVectorConstants::IntOne.m128i_i32[0];
          iVar19 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
          iVar20 = uVar5 - GlobalVectorConstants::IntOne.m128i_i32[2];
          iVar21 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
          auVar7._0_4_ = (float)uVar4 - GlobalVectorConstants::FloatOne.m128_f32[0];
          auVar7._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
          auVar7._8_4_ = (float)uVar5 - GlobalVectorConstants::FloatOne.m128_f32[2];
          auVar7._12_4_ = fVar13 - GlobalVectorConstants::FloatOne.m128_f32[3];
          auVar16._0_4_ =
               fVar6 * (float)uVar4 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
          auVar16._4_4_ =
               fVar9 * (float)uVar1 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1];
          auVar16._8_4_ =
               fVar6 * (float)uVar5 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
          auVar16._12_4_ = fVar9 * fVar13 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
          auVar16 = maxps(auVar16,(undefined1  [16])GlobalVectorConstants::FloatZero);
          auVar16 = minps(auVar16,auVar7);
          iVar8 = (int)auVar16._0_4_;
          iVar10 = (int)auVar16._4_4_;
          iVar11 = (int)auVar16._8_4_;
          iVar14 = (int)auVar16._12_4_;
          auVar7 = roundps(ZEXT216(uVar1),auVar16,1);
          iVar25 = iVar8 + GlobalVectorConstants::IntOne.m128i_i32[0];
          iVar27 = iVar10 + GlobalVectorConstants::IntOne.m128i_i32[1];
          iVar28 = iVar11 + GlobalVectorConstants::IntOne.m128i_i32[2];
          iVar30 = iVar14 + GlobalVectorConstants::IntOne.m128i_i32[3];
          fVar13 = auVar16._0_4_ - auVar7._0_4_;
          fVar32 = auVar16._4_4_ - auVar7._4_4_;
          fVar33 = auVar16._8_4_ - auVar7._8_4_;
          fVar34 = auVar16._12_4_ - auVar7._12_4_;
          uVar26 = (uint)(iVar18 < iVar25) * iVar18 | (uint)(iVar18 >= iVar25) * iVar25;
          uVar29 = (uint)(iVar20 < iVar28) * iVar20 | (uint)(iVar20 >= iVar28) * iVar28;
          iVar10 = iVar10 * uVar4;
          iVar19 = ((uint)(iVar19 < iVar27) * iVar19 | (uint)(iVar19 >= iVar27) * iVar27) *
                   (uint)param_1->Source0SizeX;
          iVar14 = iVar14 * uVar5;
          iVar18 = ((uint)(iVar21 < iVar30) * iVar21 | (uint)(iVar21 >= iVar30) * iVar30) *
                   (uint)param_1->Source1SizeX;
          uVar4 = param_1->RGBFadingEnabledMask;
          fVar9 = ((float)puVar2[(int)(iVar10 + uVar26)] * ___xmm_3b8080813b8080813b8080813b808081 -
                  (float)puVar2[iVar10 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) * fVar13
                  + (float)puVar2[iVar10 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081;
          fVar6 = (fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar13 +
                  fStack_b4 * _UNK_1508be4c4;
          fVar12 = (fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar13 +
                   fStack_b0 * _UNK_1508be4c8;
          fVar15 = (fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar13 +
                   fStack_ac * _UNK_1508be4cc;
          fVar9 = ((((float)puVar2[(int)(iVar19 + uVar26)] * ___xmm_3b8080813b8080813b8080813b808081
                    - (float)puVar2[iVar19 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) *
                    fVar13 + (float)puVar2[iVar19 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081
                   ) - fVar9) * fVar32 + fVar9;
          fVar6 = (((fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar13 +
                   fStack_b4 * _UNK_1508be4c4) - fVar6) * fVar32 + fVar6;
          fVar12 = (((fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar13 +
                    fStack_b0 * _UNK_1508be4c8) - fVar12) * fVar32 + fVar12;
          fVar15 = (((fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar13 +
                    fStack_ac * _UNK_1508be4cc) - fVar15) * fVar32 + fVar15;
          fVar32 = ((float)puVar3[(int)(iVar14 + uVar29)] * ___xmm_3b8080813b8080813b8080813b808081
                   - (float)puVar3[iVar14 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) *
                   fVar33 + (float)puVar3[iVar14 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081
          ;
          fVar22 = (fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar33 +
                   fStack_b4 * _UNK_1508be4c4;
          fVar23 = (fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar33 +
                   fStack_b0 * _UNK_1508be4c8;
          fVar24 = (fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar33 +
                   fStack_ac * _UNK_1508be4cc;
          fVar13 = param_1->MipInterpolationFactor;
          auVar31._0_4_ =
               (((((((float)puVar3[(int)(iVar18 + uVar29)] * ___xmm_3b8080813b8080813b8080813b808081
                    - (float)puVar3[iVar18 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) *
                    fVar33 + (float)puVar3[iVar18 + iVar11] *
                             ___xmm_3b8080813b8080813b8080813b808081) - fVar32) * fVar34 + fVar32) -
                fVar9) * fVar13 + fVar9) * (float)(~uVar4 & (uint)fVar35 | (uint)fVar17 & uVar4);
          auVar31._4_4_ =
               ((((((fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar33 +
                   fStack_b4 * _UNK_1508be4c4) - fVar22) * fVar34 + fVar22) - fVar6) * fVar13 +
               fVar6) * (float)(~uVar4 & (uint)fVar35 | (uint)fVar17 & uVar4);
          auVar31._8_4_ =
               ((((((fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar33 +
                   fStack_b0 * _UNK_1508be4c8) - fVar23) * fVar34 + fVar23) - fVar12) * fVar13 +
               fVar12) * (float)(~uVar4 & (uint)fVar35 | (uint)fVar17 & uVar4);
          auVar31._12_4_ =
               ((((((fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar33 +
                   fStack_ac * _UNK_1508be4cc) - fVar24) * fVar34 + fVar24) - fVar15) * fVar13 +
               fVar15) * (float)(~param_1->AlphaFadingEnabledMask & (uint)fVar35 |
                                (uint)fVar17 & param_1->AlphaFadingEnabledMask);
          auVar7 = maxps(auVar31,(undefined1  [16])GlobalVectorConstants::FloatZero);
          auVar7 = minps(auVar7,(undefined1  [16])GlobalVectorConstants::Float255);
          *param_2 = (uchar)(int)auVar7._0_4_;
        }
      }
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab52220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1608>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  puVar2 = param_1->Source0Data;
  if ((puVar2 != (uchar *)0x0) &&
     (fVar34 = (float)(param_3[2] <= __real_3f800000 && 0.0 <= param_3[2]) * __real_437f0000,
     __real_322bcc77 < fVar34)) {
    fVar30 = param_3[1];
    fVar8 = *param_3;
    if (fVar8 < __real_3f800000 && (0.0 <= fVar8 && (0.0 <= fVar30 && fVar30 < __real_3f800000))) {
      uVar1 = param_1->Source0SizeY;
      puVar3 = param_1->Source1Data;
      uVar5 = (uint)param_1->Source1SizeX;
      uVar4 = (uint)param_1->Source0SizeX;
      fVar12 = (float)param_1->Source1SizeY;
      iVar17 = uVar4 - GlobalVectorConstants::IntOne.m128i_i32[0];
      iVar18 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
      iVar19 = uVar5 - GlobalVectorConstants::IntOne.m128i_i32[2];
      iVar20 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
      auVar6._0_4_ = (float)uVar4 - GlobalVectorConstants::FloatOne.m128_f32[0];
      auVar6._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
      auVar6._8_4_ = (float)uVar5 - GlobalVectorConstants::FloatOne.m128_f32[2];
      auVar6._12_4_ = fVar12 - GlobalVectorConstants::FloatOne.m128_f32[3];
      auVar15._0_4_ = fVar8 * (float)uVar4 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
      auVar15._4_4_ =
           (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) * (float)uVar1 +
           GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1];
      auVar15._8_4_ =
           (float)*(undefined8 *)param_3 * (float)uVar5 +
           GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
      auVar15._12_4_ = fVar30 * fVar12 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
      auVar15 = maxps(auVar15,(undefined1  [16])GlobalVectorConstants::FloatZero);
      auVar15 = minps(auVar15,auVar6);
      iVar7 = (int)auVar15._0_4_;
      iVar9 = (int)auVar15._4_4_;
      iVar10 = (int)auVar15._8_4_;
      iVar13 = (int)auVar15._12_4_;
      auVar6 = roundps(ZEXT216(uVar1),auVar15,1);
      iVar24 = iVar7 + GlobalVectorConstants::IntOne.m128i_i32[0];
      iVar26 = iVar9 + GlobalVectorConstants::IntOne.m128i_i32[1];
      iVar27 = iVar10 + GlobalVectorConstants::IntOne.m128i_i32[2];
      iVar29 = iVar13 + GlobalVectorConstants::IntOne.m128i_i32[3];
      fVar30 = auVar15._0_4_ - auVar6._0_4_;
      fVar31 = auVar15._4_4_ - auVar6._4_4_;
      fVar32 = auVar15._8_4_ - auVar6._8_4_;
      fVar33 = auVar15._12_4_ - auVar6._12_4_;
      uVar25 = (uint)(iVar17 < iVar24) * iVar17 | (uint)(iVar17 >= iVar24) * iVar24;
      uVar28 = (uint)(iVar19 < iVar27) * iVar19 | (uint)(iVar19 >= iVar27) * iVar27;
      iVar9 = iVar9 * uVar4;
      iVar18 = ((uint)(iVar18 < iVar26) * iVar18 | (uint)(iVar18 >= iVar26) * iVar26) *
               (uint)param_1->Source0SizeX;
      iVar13 = iVar13 * uVar5;
      iVar17 = ((uint)(iVar20 < iVar29) * iVar20 | (uint)(iVar20 >= iVar29) * iVar29) *
               (uint)param_1->Source1SizeX;
      uVar4 = param_1->RGBFadingEnabledMask;
      fVar8 = ((float)puVar2[(int)(iVar9 + uVar25)] * ___xmm_3b8080813b8080813b8080813b808081 -
              (float)puVar2[iVar9 + iVar7] * ___xmm_3b8080813b8080813b8080813b808081) * fVar30 +
              (float)puVar2[iVar9 + iVar7] * ___xmm_3b8080813b8080813b8080813b808081;
      fVar12 = (fStack_94 * _UNK_1508be4c4 - fStack_94 * _UNK_1508be4c4) * fVar30 +
               fStack_94 * _UNK_1508be4c4;
      fVar11 = (fStack_90 * _UNK_1508be4c8 - fStack_90 * _UNK_1508be4c8) * fVar30 +
               fStack_90 * _UNK_1508be4c8;
      fVar14 = (fStack_8c * _UNK_1508be4cc - fStack_8c * _UNK_1508be4cc) * fVar30 +
               fStack_8c * _UNK_1508be4cc;
      fVar8 = ((((float)puVar2[(int)(iVar18 + uVar25)] * ___xmm_3b8080813b8080813b8080813b808081 -
                (float)puVar2[iVar18 + iVar7] * ___xmm_3b8080813b8080813b8080813b808081) * fVar30 +
               (float)puVar2[iVar18 + iVar7] * ___xmm_3b8080813b8080813b8080813b808081) - fVar8) *
              fVar31 + fVar8;
      fVar12 = (((fStack_94 * _UNK_1508be4c4 - fStack_94 * _UNK_1508be4c4) * fVar30 +
                fStack_94 * _UNK_1508be4c4) - fVar12) * fVar31 + fVar12;
      fVar11 = (((fStack_90 * _UNK_1508be4c8 - fStack_90 * _UNK_1508be4c8) * fVar30 +
                fStack_90 * _UNK_1508be4c8) - fVar11) * fVar31 + fVar11;
      fVar14 = (((fStack_8c * _UNK_1508be4cc - fStack_8c * _UNK_1508be4cc) * fVar30 +
                fStack_8c * _UNK_1508be4cc) - fVar14) * fVar31 + fVar14;
      fVar31 = ((float)puVar3[(int)(iVar13 + uVar28)] * ___xmm_3b8080813b8080813b8080813b808081 -
               (float)puVar3[iVar13 + iVar10] * ___xmm_3b8080813b8080813b8080813b808081) * fVar32 +
               (float)puVar3[iVar13 + iVar10] * ___xmm_3b8080813b8080813b8080813b808081;
      fVar21 = (fStack_94 * _UNK_1508be4c4 - fStack_94 * _UNK_1508be4c4) * fVar32 +
               fStack_94 * _UNK_1508be4c4;
      fVar22 = (fStack_90 * _UNK_1508be4c8 - fStack_90 * _UNK_1508be4c8) * fVar32 +
               fStack_90 * _UNK_1508be4c8;
      fVar23 = (fStack_8c * _UNK_1508be4cc - fStack_8c * _UNK_1508be4cc) * fVar32 +
               fStack_8c * _UNK_1508be4cc;
      fVar30 = param_1->MipInterpolationFactor;
      auVar16._0_4_ =
           (((((((float)puVar3[(int)(iVar17 + uVar28)] * ___xmm_3b8080813b8080813b8080813b808081 -
                (float)puVar3[iVar17 + iVar10] * ___xmm_3b8080813b8080813b8080813b808081) * fVar32 +
               (float)puVar3[iVar17 + iVar10] * ___xmm_3b8080813b8080813b8080813b808081) - fVar31) *
              fVar33 + fVar31) - fVar8) * fVar30 + fVar8) *
           (float)(~uVar4 & ___xmm_437f0000437f0000437f0000437f0000 | (uint)fVar34 & uVar4);
      auVar16._4_4_ =
           ((((((fStack_94 * _UNK_1508be4c4 - fStack_94 * _UNK_1508be4c4) * fVar32 +
               fStack_94 * _UNK_1508be4c4) - fVar21) * fVar33 + fVar21) - fVar12) * fVar30 + fVar12)
           * (float)(~uVar4 & _UNK_1508be4d4 | (uint)fVar34 & uVar4);
      auVar16._8_4_ =
           ((((((fStack_90 * _UNK_1508be4c8 - fStack_90 * _UNK_1508be4c8) * fVar32 +
               fStack_90 * _UNK_1508be4c8) - fVar22) * fVar33 + fVar22) - fVar11) * fVar30 + fVar11)
           * (float)(~uVar4 & _UNK_1508be4d8 | (uint)fVar34 & uVar4);
      auVar16._12_4_ =
           ((((((fStack_8c * _UNK_1508be4cc - fStack_8c * _UNK_1508be4cc) * fVar32 +
               fStack_8c * _UNK_1508be4cc) - fVar23) * fVar33 + fVar23) - fVar14) * fVar30 + fVar14)
           * (float)(~param_1->AlphaFadingEnabledMask & _UNK_1508be4dc |
                    (uint)fVar34 & param_1->AlphaFadingEnabledMask);
      auVar6 = maxps(auVar16,(undefined1  [16])GlobalVectorConstants::FloatZero);
      auVar6 = minps(auVar6,(undefined1  [16])GlobalVectorConstants::Float255);
      *param_2 = (uchar)(int)auVar6._0_4_;
    }
  }
  return;
}

// ProcessPixelVectorImpl @ 14ab52600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Mutable::Private::Private::TProjectedPixelProcessor<1610>::ProcessPixelVectorImpl
          (FProjectedPixelProcessorContext *param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  puVar2 = param_1->Source0Data;
  if ((puVar2 != (uchar *)0x0) &&
     (fVar6 = (float)(param_3[2] <= __real_3f800000 && 0.0 <= param_3[2]) * __real_437f0000,
     __real_322bcc77 < fVar6)) {
    fVar35 = __real_437f0000;
    if (param_1->MaskData != (uchar *)0x0) {
      fVar35 = (float)param_1->MaskData[(longlong)param_2 - (longlong)param_1->TargetData];
    }
    fVar6 = fVar35 * fVar6 * __real_3b808081;
    if (__real_322bcc77 < fVar6) {
      fVar31 = param_3[1];
      fVar9 = *param_3;
      if (fVar9 < __real_3f800000 && (0.0 <= fVar9 && (0.0 <= fVar31 && fVar31 < __real_3f800000)))
      {
        uVar1 = param_1->Source0SizeY;
        puVar3 = param_1->Source1Data;
        uVar5 = (uint)param_1->Source1SizeX;
        uVar4 = (uint)param_1->Source0SizeX;
        fVar13 = (float)param_1->Source1SizeY;
        iVar17 = uVar4 - GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar18 = (uint)uVar1 - GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar19 = uVar5 - GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar20 = (uint)param_1->Source1SizeY - GlobalVectorConstants::IntOne.m128i_i32[3];
        auVar7._0_4_ = (float)uVar4 - GlobalVectorConstants::FloatOne.m128_f32[0];
        auVar7._4_4_ = (float)uVar1 - GlobalVectorConstants::FloatOne.m128_f32[1];
        auVar7._8_4_ = (float)uVar5 - GlobalVectorConstants::FloatOne.m128_f32[2];
        auVar7._12_4_ = fVar13 - GlobalVectorConstants::FloatOne.m128_f32[3];
        auVar16._0_4_ = fVar9 * (float)uVar4 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[0];
        auVar16._4_4_ =
             (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) * (float)uVar1 +
             GlobalVectorConstants::FloatMinusOneHalf.m128_f32[1];
        auVar16._8_4_ =
             (float)*(undefined8 *)param_3 * (float)uVar5 +
             GlobalVectorConstants::FloatMinusOneHalf.m128_f32[2];
        auVar16._12_4_ = fVar31 * fVar13 + GlobalVectorConstants::FloatMinusOneHalf.m128_f32[3];
        auVar16 = maxps(auVar16,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar16 = minps(auVar16,auVar7);
        iVar8 = (int)auVar16._0_4_;
        iVar10 = (int)auVar16._4_4_;
        iVar11 = (int)auVar16._8_4_;
        iVar14 = (int)auVar16._12_4_;
        auVar7 = roundps(ZEXT216(uVar1),auVar16,1);
        iVar24 = iVar8 + GlobalVectorConstants::IntOne.m128i_i32[0];
        iVar26 = iVar10 + GlobalVectorConstants::IntOne.m128i_i32[1];
        iVar27 = iVar11 + GlobalVectorConstants::IntOne.m128i_i32[2];
        iVar29 = iVar14 + GlobalVectorConstants::IntOne.m128i_i32[3];
        fVar31 = auVar16._0_4_ - auVar7._0_4_;
        fVar32 = auVar16._4_4_ - auVar7._4_4_;
        fVar33 = auVar16._8_4_ - auVar7._8_4_;
        fVar34 = auVar16._12_4_ - auVar7._12_4_;
        uVar25 = (uint)(iVar17 < iVar24) * iVar17 | (uint)(iVar17 >= iVar24) * iVar24;
        uVar28 = (uint)(iVar19 < iVar27) * iVar19 | (uint)(iVar19 >= iVar27) * iVar27;
        iVar10 = iVar10 * uVar4;
        iVar18 = ((uint)(iVar18 < iVar26) * iVar18 | (uint)(iVar18 >= iVar26) * iVar26) *
                 (uint)param_1->Source0SizeX;
        iVar14 = iVar14 * uVar5;
        iVar17 = ((uint)(iVar20 < iVar29) * iVar20 | (uint)(iVar20 >= iVar29) * iVar29) *
                 (uint)param_1->Source1SizeX;
        uVar4 = param_1->RGBFadingEnabledMask;
        fVar9 = ((float)puVar2[(int)(iVar10 + uVar25)] * ___xmm_3b8080813b8080813b8080813b808081 -
                (float)puVar2[iVar10 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) * fVar31 +
                (float)puVar2[iVar10 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081;
        fVar13 = (fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar31 +
                 fStack_b4 * _UNK_1508be4c4;
        fVar12 = (fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar31 +
                 fStack_b0 * _UNK_1508be4c8;
        fVar15 = (fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar31 +
                 fStack_ac * _UNK_1508be4cc;
        fVar9 = ((((float)puVar2[(int)(iVar18 + uVar25)] * ___xmm_3b8080813b8080813b8080813b808081 -
                  (float)puVar2[iVar18 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) * fVar31
                 + (float)puVar2[iVar18 + iVar8] * ___xmm_3b8080813b8080813b8080813b808081) - fVar9)
                * fVar32 + fVar9;
        fVar13 = (((fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar31 +
                  fStack_b4 * _UNK_1508be4c4) - fVar13) * fVar32 + fVar13;
        fVar12 = (((fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar31 +
                  fStack_b0 * _UNK_1508be4c8) - fVar12) * fVar32 + fVar12;
        fVar15 = (((fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar31 +
                  fStack_ac * _UNK_1508be4cc) - fVar15) * fVar32 + fVar15;
        fVar32 = ((float)puVar3[(int)(iVar14 + uVar28)] * ___xmm_3b8080813b8080813b8080813b808081 -
                 (float)puVar3[iVar14 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) * fVar33
                 + (float)puVar3[iVar14 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081;
        fVar21 = (fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar33 +
                 fStack_b4 * _UNK_1508be4c4;
        fVar22 = (fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar33 +
                 fStack_b0 * _UNK_1508be4c8;
        fVar23 = (fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar33 +
                 fStack_ac * _UNK_1508be4cc;
        fVar31 = param_1->MipInterpolationFactor;
        auVar30._0_4_ =
             (((((((float)puVar3[(int)(iVar17 + uVar28)] * ___xmm_3b8080813b8080813b8080813b808081 -
                  (float)puVar3[iVar17 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) * fVar33
                 + (float)puVar3[iVar17 + iVar11] * ___xmm_3b8080813b8080813b8080813b808081) -
                fVar32) * fVar34 + fVar32) - fVar9) * fVar31 + fVar9) *
             (float)(~uVar4 & (uint)fVar35 | (uint)fVar6 & uVar4);
        auVar30._4_4_ =
             ((((((fStack_b4 * _UNK_1508be4c4 - fStack_b4 * _UNK_1508be4c4) * fVar33 +
                 fStack_b4 * _UNK_1508be4c4) - fVar21) * fVar34 + fVar21) - fVar13) * fVar31 +
             fVar13) * (float)(~uVar4 & (uint)fVar35 | (uint)fVar6 & uVar4);
        auVar30._8_4_ =
             ((((((fStack_b0 * _UNK_1508be4c8 - fStack_b0 * _UNK_1508be4c8) * fVar33 +
                 fStack_b0 * _UNK_1508be4c8) - fVar22) * fVar34 + fVar22) - fVar12) * fVar31 +
             fVar12) * (float)(~uVar4 & (uint)fVar35 | (uint)fVar6 & uVar4);
        auVar30._12_4_ =
             ((((((fStack_ac * _UNK_1508be4cc - fStack_ac * _UNK_1508be4cc) * fVar33 +
                 fStack_ac * _UNK_1508be4cc) - fVar23) * fVar34 + fVar23) - fVar15) * fVar31 +
             fVar15) * (float)(~param_1->AlphaFadingEnabledMask & (uint)fVar35 |
                              (uint)fVar6 & param_1->AlphaFadingEnabledMask);
        auVar7 = maxps(auVar30,(undefined1  [16])GlobalVectorConstants::FloatZero);
        auVar7 = minps(auVar7,(undefined1  [16])GlobalVectorConstants::Float255);
        *param_2 = (uchar)(int)auVar7._0_4_;
      }
    }
  }
  return;
}

