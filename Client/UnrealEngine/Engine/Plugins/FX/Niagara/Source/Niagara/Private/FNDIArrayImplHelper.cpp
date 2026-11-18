// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 17

// CopyCpuToCpuMemory @ 148e5ed30

void __cdecl
FNDIArrayImplHelper<FNiagaraMeshRendererMeshPropertiesBase>::CopyCpuToCpuMemory
          (FNiagaraMeshRendererMeshPropertiesBase *param_1,UStaticMesh **param_2,int param_3)

{
  UStaticMesh *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TRotator<double> *pTVar11;
  longlong lVar12;
  
  if (0 < param_3) {
    pTVar11 = &param_1->Rotation;
    lVar12 = 0;
    do {
      dVar10 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      dVar9 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      dVar8 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)((longlong)(pTVar11 + -2) + 0x10) = 0;
      (((TVector<double> *)(pTVar11 + -1))->field0_0x0)._s_0.X = (double)uVar5;
      (((TVector<double> *)(pTVar11 + -1))->field0_0x0)._s_0.Y = (double)uVar6;
      *(ENiagaraMeshPivotOffsetSpace *)(pTVar11 + 2) = Mesh;
      pTVar11->Pitch = dVar8;
      pTVar11->Yaw = dVar9;
      (((TVector<double> *)(pTVar11 + 1))->field0_0x0)._s_0.X = (double)uVar2;
      (((TVector<double> *)(pTVar11 + 1))->field0_0x0)._s_0.Y = (double)uVar3;
      (((TVector<double> *)(pTVar11 + -1))->field0_0x0)._s_0.Z = (double)uVar7;
      pTVar11->Roll = dVar10;
      (((TVector<double> *)(pTVar11 + 1))->field0_0x0)._s_0.Z = (double)uVar4;
      pUVar1 = param_2[lVar12];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      *(UStaticMesh **)((longlong)(pTVar11 + -2) + 0x10) = pUVar1;
      lVar12 = lVar12 + 1;
      pTVar11 = (TRotator<double> *)((longlong)(pTVar11 + 3) + 0x10);
    } while (lVar12 < param_3);
  }
  return;
}

// AppendValueToString @ 1490cc640

void __cdecl
FNDIArrayImplHelper<UE::Math::TMatrix<float>_>::AppendValueToString
          (TMatrix<float> *param_1,FString *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 4;
  iVar2 = 0;
  do {
    pwVar1 = L"%f";
    if (iVar2 != 0) {
      pwVar1 = L", %f";
    }
    ::FString::AppendfImpl(param_2,pwVar1);
    pwVar1 = L"%f";
    if (iVar2 + 1 != 0) {
      pwVar1 = L", %f";
    }
    ::FString::AppendfImpl(param_2,pwVar1);
    pwVar1 = L"%f";
    if (iVar2 != -2) {
      pwVar1 = L", %f";
    }
    ::FString::AppendfImpl(param_2,pwVar1);
    pwVar1 = L"%f";
    if (iVar2 != -3) {
      pwVar1 = L", %f";
    }
    ::FString::AppendfImpl(param_2,pwVar1);
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 1;
  } while (lVar3 != 0);
  return;
}

// CopyCpuToCpuMemory @ 1490d7660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FNDIArrayImplHelper<unsigned_char>::CopyCpuToCpuMemory(uchar *param_1,int *param_2,int param_3)

{
  uchar *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  char cVar9;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uchar *puVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  short sVar20;
  short sVar21;
  uint uVar22;
  uint uVar24;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  short sVar30;
  uint uVar33;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar10;
  char cVar11;
  char cVar12;
  undefined4 uVar23;
  undefined6 uVar25;
  undefined4 uVar31;
  undefined6 uVar32;
  
  uVar27 = _UNK_150631f6c;
  uVar24 = _UNK_150631f68;
  uVar14 = _UNK_150631f64;
  uVar13 = ___xmm_000000ff000000ff000000ff000000ff;
  iVar18 = 0;
  iVar19 = iVar18;
  if (((0 < param_3) && (iVar19 = 0, 1 < (uint)param_3)) &&
     ((param_2 + (longlong)param_3 + -1 < param_1 || (param_1 + (longlong)param_3 + -1 < param_2))))
  {
    if (0xf < (uint)param_3) {
      puVar16 = param_1 + 8;
      puVar17 = (uint *)(param_2 + 8);
      do {
        puVar1 = puVar16 + 0x10;
        iVar18 = iVar18 + 0x10;
        uVar22 = puVar17[-8] & uVar13;
        uVar26 = puVar17[-7] & uVar14;
        uVar28 = puVar17[-6] & uVar24;
        uVar29 = puVar17[-5] & uVar27;
        sVar2 = (short)uVar22;
        cVar5 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar22 - (0xff < sVar2);
        sVar2 = (short)(uVar22 >> 0x10);
        sVar20 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar22 >> 0x10) - (0xff < sVar2),
                          cVar5);
        sVar2 = (short)uVar26;
        cVar6 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar26 - (0xff < sVar2);
        sVar2 = (short)(uVar26 >> 0x10);
        uVar23 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar26 >> 0x10) - (0xff < sVar2),
                          CONCAT12(cVar6,sVar20));
        sVar2 = (short)uVar28;
        cVar7 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar28 - (0xff < sVar2);
        sVar2 = (short)(uVar28 >> 0x10);
        uVar25 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar28 >> 0x10) - (0xff < sVar2),
                          CONCAT14(cVar7,uVar23));
        sVar2 = (short)uVar29;
        cVar8 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar29 - (0xff < sVar2);
        sVar3 = (short)(uVar29 >> 0x10);
        uVar22 = puVar17[-4] & uVar13;
        uVar26 = puVar17[-3] & uVar14;
        uVar28 = puVar17[-2] & uVar24;
        uVar33 = puVar17[-1] & uVar27;
        sVar2 = (short)uVar22;
        cVar9 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar22 - (0xff < sVar2);
        sVar2 = (short)(uVar22 >> 0x10);
        sVar30 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar22 >> 0x10) - (0xff < sVar2),
                          cVar9);
        sVar2 = (short)uVar26;
        cVar10 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar26 - (0xff < sVar2);
        sVar2 = (short)(uVar26 >> 0x10);
        uVar31 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar26 >> 0x10) - (0xff < sVar2),
                          CONCAT12(cVar10,sVar30));
        sVar2 = (short)uVar28;
        cVar11 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar28 - (0xff < sVar2);
        sVar2 = (short)(uVar28 >> 0x10);
        uVar32 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar28 >> 0x10) - (0xff < sVar2),
                          CONCAT14(cVar11,uVar31));
        sVar2 = (short)uVar33;
        cVar12 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar33 - (0xff < sVar2);
        sVar4 = (short)(uVar33 >> 0x10);
        sVar2 = (short)((uint)uVar23 >> 0x10);
        sVar21 = (short)((uint6)uVar25 >> 0x20);
        sVar3 = (short)(CONCAT17((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar29 >> 0x10) -
                                 (0xff < sVar3),CONCAT16(cVar8,uVar25)) >> 0x30);
        *(uint *)(puVar16 + -8) =
             CONCAT13((0 < sVar3) * (sVar3 < 0x100) * cVar8 - (0xff < sVar3),
                      CONCAT12((0 < sVar21) * (sVar21 < 0x100) * cVar7 - (0xff < sVar21),
                               CONCAT11((0 < sVar2) * (sVar2 < 0x100) * cVar6 - (0xff < sVar2),
                                        (0 < sVar20) * (sVar20 < 0x100) * cVar5 - (0xff < sVar20))))
        ;
        sVar2 = (short)((uint)uVar31 >> 0x10);
        sVar21 = (short)((uint6)uVar32 >> 0x20);
        sVar3 = (short)(CONCAT17((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar33 >> 0x10) -
                                 (0xff < sVar4),CONCAT16(cVar12,uVar32)) >> 0x30);
        *(uint *)(puVar16 + -4) =
             CONCAT13((0 < sVar3) * (sVar3 < 0x100) * cVar12 - (0xff < sVar3),
                      CONCAT12((0 < sVar21) * (sVar21 < 0x100) * cVar11 - (0xff < sVar21),
                               CONCAT11((0 < sVar2) * (sVar2 < 0x100) * cVar10 - (0xff < sVar2),
                                        (0 < sVar30) * (sVar30 < 0x100) * cVar9 - (0xff < sVar30))))
        ;
        uVar22 = *puVar17 & uVar13;
        uVar26 = puVar17[1] & uVar14;
        uVar28 = puVar17[2] & uVar24;
        uVar29 = puVar17[3] & uVar27;
        sVar2 = (short)uVar22;
        cVar5 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar22 - (0xff < sVar2);
        sVar2 = (short)(uVar22 >> 0x10);
        sVar20 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar22 >> 0x10) - (0xff < sVar2),
                          cVar5);
        sVar2 = (short)uVar26;
        cVar6 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar26 - (0xff < sVar2);
        sVar2 = (short)(uVar26 >> 0x10);
        uVar23 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar26 >> 0x10) - (0xff < sVar2),
                          CONCAT12(cVar6,sVar20));
        sVar2 = (short)uVar28;
        cVar7 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar28 - (0xff < sVar2);
        sVar2 = (short)(uVar28 >> 0x10);
        uVar25 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar28 >> 0x10) - (0xff < sVar2),
                          CONCAT14(cVar7,uVar23));
        sVar2 = (short)uVar29;
        cVar8 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar29 - (0xff < sVar2);
        sVar3 = (short)(uVar29 >> 0x10);
        uVar22 = puVar17[4] & uVar13;
        uVar26 = puVar17[5] & uVar14;
        uVar28 = puVar17[6] & uVar24;
        uVar33 = puVar17[7] & uVar27;
        sVar2 = (short)uVar22;
        cVar9 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar22 - (0xff < sVar2);
        sVar2 = (short)(uVar22 >> 0x10);
        sVar30 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar22 >> 0x10) - (0xff < sVar2),
                          cVar9);
        sVar2 = (short)uVar26;
        cVar10 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar26 - (0xff < sVar2);
        sVar2 = (short)(uVar26 >> 0x10);
        uVar31 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar26 >> 0x10) - (0xff < sVar2),
                          CONCAT12(cVar10,sVar30));
        sVar2 = (short)uVar28;
        cVar11 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar28 - (0xff < sVar2);
        sVar2 = (short)(uVar28 >> 0x10);
        uVar32 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar28 >> 0x10) - (0xff < sVar2),
                          CONCAT14(cVar11,uVar31));
        sVar2 = (short)uVar33;
        cVar12 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar33 - (0xff < sVar2);
        sVar4 = (short)(uVar33 >> 0x10);
        sVar2 = (short)((uint)uVar23 >> 0x10);
        sVar21 = (short)((uint6)uVar25 >> 0x20);
        sVar3 = (short)(CONCAT17((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar29 >> 0x10) -
                                 (0xff < sVar3),CONCAT16(cVar8,uVar25)) >> 0x30);
        *(uint *)puVar16 =
             CONCAT13((0 < sVar3) * (sVar3 < 0x100) * cVar8 - (0xff < sVar3),
                      CONCAT12((0 < sVar21) * (sVar21 < 0x100) * cVar7 - (0xff < sVar21),
                               CONCAT11((0 < sVar2) * (sVar2 < 0x100) * cVar6 - (0xff < sVar2),
                                        (0 < sVar20) * (sVar20 < 0x100) * cVar5 - (0xff < sVar20))))
        ;
        sVar2 = (short)((uint)uVar31 >> 0x10);
        sVar21 = (short)((uint6)uVar32 >> 0x20);
        sVar3 = (short)(CONCAT17((0 < sVar4) * (sVar4 < 0x100) * (char)(uVar33 >> 0x10) -
                                 (0xff < sVar4),CONCAT16(cVar12,uVar32)) >> 0x30);
        *(uint *)(puVar16 + 4) =
             CONCAT13((0 < sVar3) * (sVar3 < 0x100) * cVar12 - (0xff < sVar3),
                      CONCAT12((0 < sVar21) * (sVar21 < 0x100) * cVar11 - (0xff < sVar21),
                               CONCAT11((0 < sVar2) * (sVar2 < 0x100) * cVar10 - (0xff < sVar2),
                                        (0 < sVar30) * (sVar30 < 0x100) * cVar9 - (0xff < sVar30))))
        ;
        puVar16 = puVar1;
        puVar17 = puVar17 + 0x10;
      } while ((longlong)(puVar1 + (-8 - (longlong)param_1)) <
               (longlong)((longlong)param_3 & 0xfffffffffffffff0U));
      iVar19 = iVar18;
      if (((byte)param_3 & 0xf) < 2) goto LAB_1490d7786;
    }
    lVar15 = (longlong)iVar18;
    iVar19 = iVar18;
    do {
      iVar19 = iVar19 + 2;
      uVar24 = (uint)*(undefined8 *)(param_2 + lVar15) & uVar13;
      uVar27 = (uint)((ulonglong)*(undefined8 *)(param_2 + lVar15) >> 0x20) & uVar14;
      sVar2 = (short)uVar24;
      cVar5 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar24 - (0xff < sVar2);
      sVar2 = (short)(uVar24 >> 0x10);
      sVar21 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar24 >> 0x10) - (0xff < sVar2),
                        cVar5);
      sVar2 = (short)uVar27;
      cVar6 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar27 - (0xff < sVar2);
      sVar2 = (short)(uVar27 >> 0x10);
      sVar2 = (short)(CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar27 >> 0x10) -
                               (0xff < sVar2),CONCAT12(cVar6,sVar21)) >> 0x10);
      *(ushort *)(param_1 + lVar15) =
           CONCAT11((0 < sVar2) * (sVar2 < 0x100) * cVar6 - (0xff < sVar2),
                    (0 < sVar21) * (sVar21 < 0x100) * cVar5 - (0xff < sVar21));
      lVar15 = lVar15 + 2;
    } while (lVar15 < (longlong)((longlong)param_3 & 0xfffffffffffffffeU));
  }
LAB_1490d7786:
  for (lVar15 = (longlong)iVar19; lVar15 < param_3; lVar15 = lVar15 + 1) {
    param_1[lVar15] = (uchar)param_2[lVar15];
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d77c0

void __cdecl
FNDIArrayImplHelper<unsigned_char>::CopyCpuToCpuMemory(int *param_1,uchar *param_2,int param_3)

{
  uchar *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  uchar *puVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [16];
  int iVar25;
  int iVar26;
  undefined1 uVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 uVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  iVar25 = 0;
  iVar26 = iVar25;
  if (((0 < param_3) && (iVar26 = 0, 1 < (uint)param_3)) &&
     ((param_2 + (longlong)param_3 + -1 < param_1 || (param_1 + (longlong)param_3 + -1 < param_2))))
  {
    if (0xf < (uint)param_3) {
      puVar22 = param_2 + 8;
      pauVar24 = (undefined1 (*) [16])(param_1 + 8);
      do {
        uVar2 = *(undefined4 *)(puVar22 + -8);
        uVar3 = *(undefined4 *)(puVar22 + -4);
        puVar1 = puVar22 + 0x10;
        uVar29 = (undefined1)((uint)uVar2 >> 8);
        uVar16 = (ulonglong)CONCAT12(uVar29,(short)uVar2) & 0xffffffffffff00ff;
        uVar32 = (undefined1)((uint)uVar3 >> 8);
        uVar17 = (ulonglong)CONCAT12(uVar32,(short)uVar3) & 0xffffffffffff00ff;
        auVar4._8_4_ = 0;
        auVar4._0_8_ = uVar16;
        auVar4[0xc] = (char)((uint)uVar2 >> 0x18);
        auVar5[8] = (char)((uint)uVar2 >> 0x10);
        auVar5._0_8_ = uVar16;
        auVar5[9] = 0;
        auVar5._10_3_ = auVar4._10_3_;
        auVar18._5_8_ = 0;
        auVar18._0_5_ = auVar5._8_5_;
        auVar6[4] = uVar29;
        auVar6._0_4_ = (uint)uVar16;
        auVar6[5] = 0;
        auVar6._6_7_ = SUB137(auVar18 << 0x40,6);
        auVar27._0_4_ = (uint)uVar16 & 0xffff;
        auVar27._4_9_ = auVar6._4_9_;
        auVar27._13_3_ = 0;
        iVar25 = iVar25 + 0x10;
        auVar7._8_4_ = 0;
        auVar7._0_8_ = uVar17;
        auVar7[0xc] = (char)((uint)uVar3 >> 0x18);
        auVar8[8] = (char)((uint)uVar3 >> 0x10);
        auVar8._0_8_ = uVar17;
        auVar8[9] = 0;
        auVar8._10_3_ = auVar7._10_3_;
        auVar19._5_8_ = 0;
        auVar19._0_5_ = auVar8._8_5_;
        auVar9[4] = uVar32;
        auVar9._0_4_ = (uint)uVar17;
        auVar9[5] = 0;
        auVar9._6_7_ = SUB137(auVar19 << 0x40,6);
        auVar30._0_4_ = (uint)uVar17 & 0xffff;
        auVar30._4_9_ = auVar9._4_9_;
        auVar30._13_3_ = 0;
        pauVar24[-2] = auVar27;
        uVar2 = *(undefined4 *)puVar22;
        uVar29 = (undefined1)((uint)uVar2 >> 8);
        uVar16 = (ulonglong)CONCAT12(uVar29,(short)uVar2) & 0xffffffffffff00ff;
        auVar10._8_4_ = 0;
        auVar10._0_8_ = uVar16;
        auVar10[0xc] = (char)((uint)uVar2 >> 0x18);
        auVar11[8] = (char)((uint)uVar2 >> 0x10);
        auVar11._0_8_ = uVar16;
        auVar11[9] = 0;
        auVar11._10_3_ = auVar10._10_3_;
        auVar20._5_8_ = 0;
        auVar20._0_5_ = auVar11._8_5_;
        auVar12[4] = uVar29;
        auVar12._0_4_ = (uint)uVar16;
        auVar12[5] = 0;
        auVar12._6_7_ = SUB137(auVar20 << 0x40,6);
        auVar28._0_4_ = (uint)uVar16 & 0xffff;
        auVar28._4_9_ = auVar12._4_9_;
        auVar28._13_3_ = 0;
        pauVar24[-1] = auVar30;
        uVar2 = *(undefined4 *)(puVar22 + 4);
        uVar29 = (undefined1)((uint)uVar2 >> 8);
        uVar16 = (ulonglong)CONCAT12(uVar29,(short)uVar2) & 0xffffffffffff00ff;
        auVar13._8_4_ = 0;
        auVar13._0_8_ = uVar16;
        auVar13[0xc] = (char)((uint)uVar2 >> 0x18);
        auVar14[8] = (char)((uint)uVar2 >> 0x10);
        auVar14._0_8_ = uVar16;
        auVar14[9] = 0;
        auVar14._10_3_ = auVar13._10_3_;
        auVar21._5_8_ = 0;
        auVar21._0_5_ = auVar14._8_5_;
        auVar15[4] = uVar29;
        auVar15._0_4_ = (uint)uVar16;
        auVar15[5] = 0;
        auVar15._6_7_ = SUB137(auVar21 << 0x40,6);
        auVar31._0_4_ = (uint)uVar16 & 0xffff;
        auVar31._4_9_ = auVar15._4_9_;
        auVar31._13_3_ = 0;
        *pauVar24 = auVar28;
        pauVar24[1] = auVar31;
        puVar22 = puVar1;
        pauVar24 = pauVar24 + 4;
      } while ((longlong)(puVar1 + (-8 - (longlong)param_2)) <
               (longlong)((longlong)param_3 & 0xfffffffffffffff0U));
      iVar26 = iVar25;
      if (((byte)param_3 & 0xf) < 2) goto LAB_1490d78d6;
    }
    lVar23 = (longlong)iVar25;
    iVar26 = iVar25;
    do {
      iVar26 = iVar26 + 2;
      uVar29 = (undefined1)((ushort)*(undefined2 *)(param_2 + lVar23) >> 8);
      *(ulonglong *)(param_1 + lVar23) =
           (ulonglong)
           (CONCAT14(uVar29,(uint)CONCAT12(uVar29,*(undefined2 *)(param_2 + lVar23))) & 0xffffff00ff
           ) & 0xffffffff0000ffff;
      lVar23 = lVar23 + 2;
    } while (lVar23 < (longlong)((longlong)param_3 & 0xfffffffffffffffeU));
  }
LAB_1490d78d6:
  for (lVar23 = (longlong)iVar26; lVar23 < param_3; lVar23 = lVar23 + 1) {
    param_1[lVar23] = (uint)param_2[lVar23];
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d7910

void __cdecl FNDIArrayImplHelper<int>::CopyCpuToCpuMemory(int *param_1,long64 *param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  long64 *plVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  uVar5 = 0;
  if (((0 < param_3) && (7 < (uint)param_3)) &&
     ((param_2 + (longlong)param_3 + -1 < param_1 || (param_1 + (longlong)param_3 + -1 < param_2))))
  {
    piVar1 = param_1 + 4;
    plVar3 = param_2 + 4;
    uVar6 = uVar4;
    do {
      uVar5 = (int)uVar6 + 8;
      uVar6 = (ulonglong)uVar5;
      uVar4 = uVar4 + 8;
      *(ulonglong *)(piVar1 + -4) = CONCAT44((int)plVar3[-3],(int)plVar3[-4]);
      *(ulonglong *)(piVar1 + -2) = CONCAT44((int)plVar3[-1],(int)plVar3[-2]);
      *(ulonglong *)piVar1 = CONCAT44((int)plVar3[1],(int)*plVar3);
      *(ulonglong *)(piVar1 + 2) = CONCAT44((int)plVar3[3],(int)plVar3[2]);
      piVar1 = piVar1 + 8;
      plVar3 = plVar3 + 8;
    } while ((longlong)uVar4 < (longlong)((longlong)param_3 & 0xfffffffffffffff8U));
  }
  lVar2 = (longlong)(int)uVar5;
  if (lVar2 < param_3) {
    piVar1 = param_1 + lVar2;
    do {
      plVar3 = param_2 + lVar2;
      lVar2 = lVar2 + 1;
      *piVar1 = (int)*plVar3;
      piVar1 = piVar1 + 1;
    } while (lVar2 < param_3);
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d79f0

void __cdecl
FNDIArrayImplHelper<float>::CopyCpuToCpuMemory(float *param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  double *pdVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar14;
  ulonglong uVar13;
  
  uVar10 = 0;
  uVar12 = 0;
  if (((0 < param_3) && (7 < (uint)param_3)) &&
     ((param_2 + (longlong)param_3 + -1 < param_1 || (param_1 + (longlong)param_3 + -1 < param_2))))
  {
    pfVar7 = param_1 + 4;
    pdVar8 = param_2 + 4;
    uVar13 = uVar10;
    do {
      uVar12 = (int)uVar13 + 8;
      uVar13 = (ulonglong)uVar12;
      uVar10 = uVar10 + 8;
      dVar1 = pdVar8[-2];
      dVar2 = pdVar8[-1];
      *(ulonglong *)(pfVar7 + -4) = CONCAT44((float)pdVar8[-3],(float)pdVar8[-4]);
      dVar3 = *pdVar8;
      dVar4 = pdVar8[1];
      *(ulonglong *)(pfVar7 + -2) = CONCAT44((float)dVar2,(float)dVar1);
      dVar1 = pdVar8[2];
      dVar2 = pdVar8[3];
      *(ulonglong *)pfVar7 = CONCAT44((float)dVar4,(float)dVar3);
      *(ulonglong *)(pfVar7 + 2) = CONCAT44((float)dVar2,(float)dVar1);
      pfVar7 = pfVar7 + 8;
      pdVar8 = pdVar8 + 8;
    } while ((longlong)uVar10 < (longlong)((longlong)param_3 & 0xfffffffffffffff8U));
  }
  lVar9 = (longlong)(int)uVar12;
  lVar14 = (longlong)param_3;
  if (lVar9 < lVar14) {
    if (3 < lVar14 - lVar9) {
      lVar5 = lVar9 + 2;
      lVar6 = lVar9 + 2;
      lVar11 = ((lVar14 - lVar9) - 4U >> 2) + 1;
      lVar9 = lVar9 + lVar11 * 4;
      pfVar7 = param_1 + lVar5;
      pdVar8 = param_2 + lVar6;
      do {
        pfVar7[-2] = (float)pdVar8[-2];
        pfVar7[-1] = (float)pdVar8[-1];
        *pfVar7 = (float)*pdVar8;
        pfVar7[1] = (float)pdVar8[1];
        lVar11 = lVar11 + -1;
        pfVar7 = pfVar7 + 4;
        pdVar8 = pdVar8 + 4;
      } while (lVar11 != 0);
      if (lVar14 <= lVar9) {
        return;
      }
    }
    pfVar7 = param_1 + lVar9;
    do {
      pdVar8 = param_2 + lVar9;
      lVar9 = lVar9 + 1;
      *pfVar7 = (float)*pdVar8;
      pfVar7 = pfVar7 + 1;
    } while (lVar9 < lVar14);
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d7b60

void __cdecl
FNDIArrayImplHelper<UE::Math::TMatrix<float>_>::CopyCpuToCpuMemory
          (TMatrix<float> *param_1,TMatrix<double> *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double *pdVar16;
  float (*pafVar17) [4];
  longlong lVar18;
  
  lVar18 = (longlong)param_3;
  if (0 < param_3) {
    pdVar16 = param_2->M[2] + 2;
    pafVar17 = param_1->M + 2;
    do {
      dVar1 = pdVar16[-4];
      dVar2 = pdVar16[-3];
      dVar3 = pdVar16[-6];
      dVar4 = pdVar16[-5];
      dVar5 = *pdVar16;
      dVar6 = pdVar16[1];
      dVar7 = (*(double (*) [4])(pdVar16 + -2))[0];
      dVar8 = pdVar16[-1];
      dVar9 = pdVar16[4];
      dVar10 = pdVar16[5];
      dVar11 = pdVar16[2];
      dVar12 = pdVar16[3];
      dVar13 = pdVar16[-8];
      dVar14 = pdVar16[-7];
      dVar15 = pdVar16[-9];
      ((TMatrix<float> *)(pafVar17 + -2))->M[0][0] = (float)pdVar16[-10];
      ((TMatrix<float> *)(pafVar17 + -2))->M[0][1] = (float)dVar15;
      ((TMatrix<float> *)(pafVar17 + -2))->M[0][2] = (float)dVar13;
      ((TMatrix<float> *)(pafVar17 + -2))->M[0][3] = (float)dVar14;
      pafVar17[-1][0] = (float)dVar3;
      pafVar17[-1][1] = (float)dVar4;
      pafVar17[-1][2] = (float)dVar1;
      pafVar17[-1][3] = (float)dVar2;
      (*pafVar17)[0] = (float)dVar7;
      (*pafVar17)[1] = (float)dVar8;
      (*pafVar17)[2] = (float)dVar5;
      (*pafVar17)[3] = (float)dVar6;
      pafVar17[1][0] = (float)dVar11;
      pafVar17[1][1] = (float)dVar12;
      pafVar17[1][2] = (float)dVar9;
      pafVar17[1][3] = (float)dVar10;
      lVar18 = lVar18 + -1;
      pdVar16 = pdVar16 + 0x10;
      pafVar17 = pafVar17 + 4;
    } while (lVar18 != 0);
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d7c10

void __cdecl
FNDIArrayImplHelper<UE::Math::TMatrix<float>_>::CopyCpuToCpuMemory
          (TMatrix<double> *param_1,TMatrix<float> *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float (*pafVar19) [4];
  longlong lVar20;
  
  lVar20 = (longlong)param_3;
  if (0 < param_3) {
    pafVar19 = param_2->M + 2;
    do {
      fVar6 = ((TMatrix<float> *)(pafVar19 + -2))->M[0][2];
      dVar5 = (double)((TMatrix<float> *)(pafVar19 + -2))->M[0][1];
      dVar3 = (double)((TMatrix<float> *)(pafVar19 + -2))->M[0][3];
      fVar7 = pafVar19[-1][0];
      fVar8 = pafVar19[-1][1];
      fVar9 = pafVar19[-1][2];
      fVar10 = pafVar19[-1][3];
      fVar11 = (*pafVar19)[0];
      fVar12 = (*pafVar19)[1];
      fVar13 = (*pafVar19)[2];
      fVar14 = (*pafVar19)[3];
      fVar15 = pafVar19[1][0];
      fVar16 = pafVar19[1][1];
      fVar17 = pafVar19[1][2];
      fVar18 = pafVar19[1][3];
      auVar4._8_4_ = SUB84(dVar5,0);
      auVar4._0_8_ = (double)((TMatrix<float> *)(pafVar19 + -2))->M[0][0];
      auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])param_1->M[0] = auVar4;
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = (double)fVar6;
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])(param_1->M[0] + 2) = auVar2;
      auVar1._8_4_ = SUB84((double)fVar8,0);
      auVar1._0_8_ = (double)fVar7;
      auVar1._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
      *(undefined1 (*) [16])param_1->M[1] = auVar1;
      param_1->M[1][2] = (double)fVar9;
      param_1->M[1][3] = (double)fVar10;
      param_1->M[2][0] = (double)fVar11;
      param_1->M[2][1] = (double)fVar12;
      param_1->M[2][2] = (double)fVar13;
      param_1->M[2][3] = (double)fVar14;
      param_1->M[3][0] = (double)fVar15;
      param_1->M[3][1] = (double)fVar16;
      param_1->M[3][2] = (double)fVar17;
      param_1->M[3][3] = (double)fVar18;
      lVar20 = lVar20 + -1;
      pafVar19 = pafVar19 + 4;
      param_1 = param_1 + 1;
    } while (lVar20 != 0);
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d7cd0

void __cdecl
FNDIArrayImplHelper<UE::Math::TQuat<float>_>::CopyCpuToCpuMemory
          (TQuat<float> *param_1,TQuat<double> *param_2,int param_3)

{
  TQuat<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  TQuat<float> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = (longlong)param_3;
  lVar9 = 0;
  if (3 < lVar8) {
    lVar7 = (lVar8 - 4U >> 2) + 1;
    lVar9 = lVar7 * 4;
    pdVar5 = &param_2[1].Z;
    pTVar6 = param_1 + 2;
    do {
      dVar2 = pdVar5[-5];
      dVar3 = pdVar5[-4];
      dVar4 = pdVar5[-3];
      pTVar6[-2].X = (float)pdVar5[-6];
      pTVar6[-2].Y = (float)dVar2;
      pTVar6[-2].Z = (float)dVar3;
      pTVar6[-2].W = (float)dVar4;
      dVar2 = pdVar5[-1];
      dVar3 = *pdVar5;
      dVar4 = pdVar5[1];
      pTVar6[-1].X = (float)((TQuat<double> *)(pdVar5 + -2))->X;
      pTVar6[-1].Y = (float)dVar2;
      pTVar6[-1].Z = (float)dVar3;
      pTVar6[-1].W = (float)dVar4;
      dVar2 = pdVar5[3];
      dVar3 = pdVar5[4];
      dVar4 = pdVar5[5];
      pTVar6->X = (float)pdVar5[2];
      pTVar6->Y = (float)dVar2;
      pTVar6->Z = (float)dVar3;
      pTVar6->W = (float)dVar4;
      dVar2 = pdVar5[7];
      dVar3 = pdVar5[8];
      dVar4 = pdVar5[9];
      pTVar6[1].X = (float)pdVar5[6];
      pTVar6[1].Y = (float)dVar2;
      pTVar6[1].Z = (float)dVar3;
      pTVar6[1].W = (float)dVar4;
      lVar7 = lVar7 + -1;
      pdVar5 = pdVar5 + 0x10;
      pTVar6 = pTVar6 + 4;
    } while (lVar7 != 0);
  }
  if (lVar9 < lVar8) {
    pdVar5 = &param_2[lVar9].Z;
    lVar8 = lVar8 - lVar9;
    pTVar6 = param_1 + lVar9;
    do {
      pTVar1 = (TQuat<double> *)(pdVar5 + -2);
      dVar2 = pdVar5[-1];
      dVar3 = *pdVar5;
      dVar4 = pdVar5[1];
      pdVar5 = pdVar5 + 4;
      pTVar6->X = (float)pTVar1->X;
      pTVar6->Y = (float)dVar2;
      pTVar6->Z = (float)dVar3;
      pTVar6->W = (float)dVar4;
      lVar8 = lVar8 + -1;
      pTVar6 = pTVar6 + 1;
    } while (lVar8 != 0);
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d7ec0

void __cdecl
FNDIArrayImplHelper<UE::Math::TQuat<float>_>::CopyCpuToCpuMemory
          (TQuat<double> *param_1,TQuat<float> *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  longlong lVar13;
  double *pdVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar16 = (longlong)param_3;
  lVar17 = 0;
  if (3 < lVar16) {
    lVar13 = (lVar16 - 4U >> 2) + 1;
    lVar17 = lVar13 * 4;
    pfVar15 = &param_2->Z;
    pdVar14 = &param_1[1].Z;
    do {
      fVar1 = *pfVar15;
      fVar2 = pfVar15[1];
      uVar3 = ((TQuat<float> *)(pfVar15 + -2))->X;
      uVar6 = ((TQuat<float> *)(pfVar15 + -2))->Y;
      auVar8._8_4_ = SUB84((double)(float)uVar6,0);
      auVar8._0_8_ = (double)(float)uVar3;
      auVar8._12_4_ = (int)((ulonglong)(double)(float)uVar6 >> 0x20);
      *(undefined1 (*) [16])(pdVar14 + -6) = auVar8;
      pdVar14[-4] = (double)fVar1;
      pdVar14[-3] = (double)fVar2;
      fVar1 = pfVar15[4];
      fVar2 = pfVar15[5];
      dVar11 = (double)(float)*(undefined8 *)(pfVar15 + 2);
      dVar12 = (double)(float)((ulonglong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
      auVar9._8_4_ = SUB84(dVar12,0);
      auVar9._0_8_ = dVar11;
      auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      ((TQuat<double> *)(pdVar14 + -2))->X = dVar11;
      ((TQuat<double> *)(pdVar14 + -2))->Y = (double)auVar9._8_8_;
      *pdVar14 = (double)fVar1;
      pdVar14[1] = (double)fVar2;
      uVar5 = *(undefined8 *)(pfVar15 + 7);
      fVar1 = pfVar15[9];
      pdVar14[2] = (double)pfVar15[6];
      pdVar14[3] = (double)(float)uVar5;
      pdVar14[4] = (double)(float)((ulonglong)uVar5 >> 0x20);
      pdVar14[5] = (double)fVar1;
      uVar5 = *(undefined8 *)(pfVar15 + 0xb);
      fVar1 = pfVar15[0xd];
      pdVar14[6] = (double)pfVar15[10];
      pdVar14[7] = (double)(float)uVar5;
      pdVar14[8] = (double)(float)((ulonglong)uVar5 >> 0x20);
      pdVar14[9] = (double)fVar1;
      lVar13 = lVar13 + -1;
      pfVar15 = pfVar15 + 0x10;
      pdVar14 = pdVar14 + 0x10;
    } while (lVar13 != 0);
  }
  if (lVar17 < lVar16) {
    pfVar15 = &param_2[lVar17].Z;
    lVar16 = lVar16 - lVar17;
    pdVar14 = &param_1[lVar17].Z;
    do {
      fVar1 = *pfVar15;
      fVar2 = pfVar15[1];
      uVar4 = ((TQuat<float> *)(pfVar15 + -2))->X;
      uVar7 = ((TQuat<float> *)(pfVar15 + -2))->Y;
      pfVar15 = pfVar15 + 4;
      auVar10._8_4_ = SUB84((double)(float)uVar7,0);
      auVar10._0_8_ = (double)(float)uVar4;
      auVar10._12_4_ = (int)((ulonglong)(double)(float)uVar7 >> 0x20);
      ((TQuat<double> *)(pdVar14 + -2))->X = (double)(float)uVar4;
      ((TQuat<double> *)(pdVar14 + -2))->Y = (double)auVar10._8_8_;
      *pdVar14 = (double)fVar1;
      pdVar14[1] = (double)fVar2;
      lVar16 = lVar16 + -1;
      pdVar14 = pdVar14 + 4;
    } while (lVar16 != 0);
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d8020

void __cdecl
FNDIArrayImplHelper<UE::Math::TVector2<float>_>::CopyCpuToCpuMemory
          (TVector2<float> *param_1,TVector2<double> *param_2,int param_3)

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float> TVar5;
  TVector2<double>_u_0 *pTVar6;
  TVector2<double>_u_0 *pTVar7;
  TVector2<double> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  TVector2<float>_u_0 *pTVar12;
  
  lVar11 = (longlong)param_3;
  lVar10 = 0;
  if (3 < lVar11) {
    lVar9 = (lVar11 - 4U >> 2) + 1;
    lVar10 = lVar9 * 4;
    pTVar8 = param_2 + 1;
    pTVar12 = &param_1[2].field0_0x0;
    do {
      TVar1._s_0.Y = (float)pTVar8[-1].field0_0x0._s_0.Y;
      TVar1._s_0.X = (float)pTVar8[-1].field0_0x0._s_0.X;
      pTVar12[-2] = TVar1;
      TVar2._s_0.Y = (float)(pTVar8->field0_0x0)._s_0.Y;
      TVar2._s_0.X = (float)(pTVar8->field0_0x0)._s_0.X;
      pTVar12[-1] = TVar2;
      TVar3._s_0.Y = (float)pTVar8[1].field0_0x0._s_0.Y;
      TVar3._s_0.X = (float)pTVar8[1].field0_0x0._s_0.X;
      *pTVar12 = TVar3;
      TVar4._s_0.Y = (float)pTVar8[2].field0_0x0._s_0.Y;
      TVar4._s_0.X = (float)pTVar8[2].field0_0x0._s_0.X;
      pTVar12[1] = TVar4;
      lVar9 = lVar9 + -1;
      pTVar8 = pTVar8 + 4;
      pTVar12 = pTVar12 + 4;
    } while (lVar9 != 0);
  }
  if (lVar10 < lVar11) {
    pTVar8 = param_2 + lVar10;
    do {
      pTVar6 = &pTVar8->field0_0x0;
      pTVar7 = &pTVar8->field0_0x0;
      pTVar8 = pTVar8 + 1;
      TVar5.field0_0x0._s_0.Y = (float)(pTVar7->_s_0).Y;
      TVar5.field0_0x0._s_0.X = (float)(pTVar6->_s_0).X;
      param_1[lVar10].field0_0x0 = TVar5.field0_0x0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar11);
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d8170

void __cdecl
FNDIArrayImplHelper<UE::Math::TVector2<float>_>::CopyCpuToCpuMemory
          (TVector2<double> *param_1,TVector2<float> *param_2,int param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  longlong lVar5;
  TVector2<double> *pTVar6;
  TVector2<float> *pTVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  
  lVar8 = (longlong)param_3;
  lVar5 = 0;
  if (3 < lVar8) {
    lVar10 = (lVar8 - 4U >> 2) + 1;
    lVar5 = lVar10 * 4;
    pTVar7 = param_2 + 1;
    pdVar9 = &param_1[2].field0_0x0._s_0.Y;
    do {
      dVar4 = (double)(*(TVector2<float>_u_0 *)&pTVar7[-1].field0_0x0._s_0).Y;
      auVar2._8_4_ = SUB84(dVar4,0);
      auVar2._0_8_ = (double)(*(TVector2<float>_u_0 *)&pTVar7[-1].field0_0x0._s_0).X;
      auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])(pdVar9 + -5) = auVar2;
      fVar1 = (pTVar7->field0_0x0)._s_0.Y;
      pdVar9[-3] = (double)(pTVar7->field0_0x0)._s_0.X;
      pdVar9[-2] = (double)fVar1;
      fVar1 = pTVar7[1].field0_0x0._s_0.Y;
      ((TVector2<double>_u_0_s_0 *)(pdVar9 + -1))->X = (double)pTVar7[1].field0_0x0._s_0.X;
      *pdVar9 = (double)fVar1;
      dVar4 = (double)(*(TVector2<float>_u_0 *)&pTVar7[2].field0_0x0._s_0).Y;
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = (double)(*(TVector2<float>_u_0 *)&pTVar7[2].field0_0x0._s_0).X;
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])(pdVar9 + 1) = auVar3;
      lVar10 = lVar10 + -1;
      pTVar7 = pTVar7 + 4;
      pdVar9 = pdVar9 + 8;
    } while (lVar10 != 0);
  }
  if (lVar5 < lVar8) {
    pTVar6 = param_1 + lVar5;
    do {
      pTVar7 = param_2 + lVar5;
      fVar1 = param_2[lVar5].field0_0x0._s_0.Y;
      lVar5 = lVar5 + 1;
      (pTVar6->field0_0x0)._s_0.X = (double)(pTVar7->field0_0x0)._s_0.X;
      (pTVar6->field0_0x0)._s_0.Y = (double)fVar1;
      pTVar6 = pTVar6 + 1;
    } while (lVar5 < lVar8);
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d8240

void __cdecl
FNDIArrayImplHelper<UE::Math::TVector4<float>_>::CopyCpuToCpuMemory
          (TVector4<float> *param_1,TVector4<double> *param_2,int param_3)

{
  TVector4<double>_u_0_s_0 *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  TVector4<float> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = (longlong)param_3;
  lVar9 = 0;
  if (3 < lVar8) {
    lVar7 = (lVar8 - 4U >> 2) + 1;
    lVar9 = lVar7 * 4;
    pdVar5 = &param_2[1].field0_0x0._s_0.Z;
    pTVar6 = param_1 + 2;
    do {
      dVar2 = pdVar5[-5];
      dVar3 = pdVar5[-4];
      dVar4 = pdVar5[-3];
      pTVar6[-2].field0_0x0._s_0.X = (float)pdVar5[-6];
      pTVar6[-2].field0_0x0._s_0.Y = (float)dVar2;
      pTVar6[-2].field0_0x0._s_0.Z = (float)dVar3;
      pTVar6[-2].field0_0x0._s_0.W = (float)dVar4;
      dVar2 = pdVar5[-1];
      dVar3 = *pdVar5;
      dVar4 = pdVar5[1];
      pTVar6[-1].field0_0x0._s_0.X = (float)((TVector4<double>_u_0_s_0 *)(pdVar5 + -2))->X;
      pTVar6[-1].field0_0x0._s_0.Y = (float)dVar2;
      pTVar6[-1].field0_0x0._s_0.Z = (float)dVar3;
      pTVar6[-1].field0_0x0._s_0.W = (float)dVar4;
      dVar2 = pdVar5[3];
      dVar3 = pdVar5[4];
      dVar4 = pdVar5[5];
      (pTVar6->field0_0x0)._s_0.X = (float)pdVar5[2];
      (pTVar6->field0_0x0)._s_0.Y = (float)dVar2;
      (pTVar6->field0_0x0)._s_0.Z = (float)dVar3;
      (pTVar6->field0_0x0)._s_0.W = (float)dVar4;
      dVar2 = pdVar5[7];
      dVar3 = pdVar5[8];
      dVar4 = pdVar5[9];
      pTVar6[1].field0_0x0._s_0.X = (float)pdVar5[6];
      pTVar6[1].field0_0x0._s_0.Y = (float)dVar2;
      pTVar6[1].field0_0x0._s_0.Z = (float)dVar3;
      pTVar6[1].field0_0x0._s_0.W = (float)dVar4;
      lVar7 = lVar7 + -1;
      pdVar5 = pdVar5 + 0x10;
      pTVar6 = pTVar6 + 4;
    } while (lVar7 != 0);
  }
  if (lVar9 < lVar8) {
    pdVar5 = &param_2[lVar9].field0_0x0._s_0.Z;
    lVar8 = lVar8 - lVar9;
    pTVar6 = param_1 + lVar9;
    do {
      pTVar1 = (TVector4<double>_u_0_s_0 *)(pdVar5 + -2);
      dVar2 = pdVar5[-1];
      dVar3 = *pdVar5;
      dVar4 = pdVar5[1];
      pdVar5 = pdVar5 + 4;
      (pTVar6->field0_0x0)._s_0.X = (float)pTVar1->X;
      (pTVar6->field0_0x0)._s_0.Y = (float)dVar2;
      (pTVar6->field0_0x0)._s_0.Z = (float)dVar3;
      (pTVar6->field0_0x0)._s_0.W = (float)dVar4;
      lVar8 = lVar8 + -1;
      pTVar6 = pTVar6 + 1;
    } while (lVar8 != 0);
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d8440

void __cdecl
FNDIArrayImplHelper<UE::Math::TVector4<float>_>::CopyCpuToCpuMemory
          (TVector4<double> *param_1,TVector4<float> *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  longlong lVar13;
  double *pdVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar16 = (longlong)param_3;
  lVar17 = 0;
  if (3 < lVar16) {
    lVar13 = (lVar16 - 4U >> 2) + 1;
    lVar17 = lVar13 * 4;
    pfVar15 = &(param_2->field0_0x0)._s_0.Z;
    pdVar14 = &param_1[1].field0_0x0._s_0.Z;
    do {
      fVar1 = *pfVar15;
      fVar2 = pfVar15[1];
      uVar3 = ((TVector4<float>_u_0_s_0 *)(pfVar15 + -2))->X;
      uVar6 = ((TVector4<float>_u_0_s_0 *)(pfVar15 + -2))->Y;
      auVar8._8_4_ = SUB84((double)(float)uVar6,0);
      auVar8._0_8_ = (double)(float)uVar3;
      auVar8._12_4_ = (int)((ulonglong)(double)(float)uVar6 >> 0x20);
      *(undefined1 (*) [16])(pdVar14 + -6) = auVar8;
      pdVar14[-4] = (double)fVar1;
      pdVar14[-3] = (double)fVar2;
      fVar1 = pfVar15[4];
      fVar2 = pfVar15[5];
      dVar11 = (double)(float)*(undefined8 *)(pfVar15 + 2);
      dVar12 = (double)(float)((ulonglong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
      auVar9._8_4_ = SUB84(dVar12,0);
      auVar9._0_8_ = dVar11;
      auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      ((TVector4<double>_u_0_s_0 *)(pdVar14 + -2))->X = dVar11;
      ((TVector4<double>_u_0_s_0 *)(pdVar14 + -2))->Y = (double)auVar9._8_8_;
      *pdVar14 = (double)fVar1;
      pdVar14[1] = (double)fVar2;
      uVar5 = *(undefined8 *)(pfVar15 + 7);
      fVar1 = pfVar15[9];
      pdVar14[2] = (double)pfVar15[6];
      pdVar14[3] = (double)(float)uVar5;
      pdVar14[4] = (double)(float)((ulonglong)uVar5 >> 0x20);
      pdVar14[5] = (double)fVar1;
      uVar5 = *(undefined8 *)(pfVar15 + 0xb);
      fVar1 = pfVar15[0xd];
      pdVar14[6] = (double)pfVar15[10];
      pdVar14[7] = (double)(float)uVar5;
      pdVar14[8] = (double)(float)((ulonglong)uVar5 >> 0x20);
      pdVar14[9] = (double)fVar1;
      lVar13 = lVar13 + -1;
      pfVar15 = pfVar15 + 0x10;
      pdVar14 = pdVar14 + 0x10;
    } while (lVar13 != 0);
  }
  if (lVar17 < lVar16) {
    pfVar15 = &param_2[lVar17].field0_0x0._s_0.Z;
    lVar16 = lVar16 - lVar17;
    pdVar14 = &param_1[lVar17].field0_0x0._s_0.Z;
    do {
      fVar1 = *pfVar15;
      fVar2 = pfVar15[1];
      uVar4 = ((TVector4<float>_u_0_s_0 *)(pfVar15 + -2))->X;
      uVar7 = ((TVector4<float>_u_0_s_0 *)(pfVar15 + -2))->Y;
      pfVar15 = pfVar15 + 4;
      auVar10._8_4_ = SUB84((double)(float)uVar7,0);
      auVar10._0_8_ = (double)(float)uVar4;
      auVar10._12_4_ = (int)((ulonglong)(double)(float)uVar7 >> 0x20);
      ((TVector4<double>_u_0_s_0 *)(pdVar14 + -2))->X = (double)(float)uVar4;
      ((TVector4<double>_u_0_s_0 *)(pdVar14 + -2))->Y = (double)auVar10._8_8_;
      *pdVar14 = (double)fVar1;
      pdVar14[1] = (double)fVar2;
      lVar16 = lVar16 + -1;
      pdVar14 = pdVar14 + 4;
    } while (lVar16 != 0);
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d85a0

void __cdecl
FNDIArrayImplHelper<UE::Math::TVector<float>_>::CopyCpuToCpuMemory
          (TVector<float> *param_1,TVector<double> *param_2,int param_3)

{
  TVector<double>_u_0_s_0 *pTVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = (longlong)param_3;
  lVar8 = 0;
  if (3 < lVar6) {
    lVar7 = (lVar6 - 4U >> 2) + 1;
    lVar8 = lVar7 * 4;
    pdVar4 = &(param_2->field0_0x0)._s_0.Z;
    pfVar5 = &param_1[1].field0_0x0._s_0.Z;
    do {
      dVar2 = pdVar4[-1];
      dVar3 = *pdVar4;
      pfVar5[-5] = (float)((TVector<double>_u_0_s_0 *)(pdVar4 + -2))->X;
      pfVar5[-4] = (float)dVar2;
      pfVar5[-3] = (float)dVar3;
      dVar2 = pdVar4[2];
      dVar3 = pdVar4[3];
      ((TVector<float>_u_0_s_0 *)(pfVar5 + -2))->X = (float)pdVar4[1];
      pfVar5[-1] = (float)dVar2;
      *pfVar5 = (float)dVar3;
      dVar2 = pdVar4[5];
      dVar3 = pdVar4[6];
      pfVar5[1] = (float)pdVar4[4];
      pfVar5[2] = (float)dVar2;
      pfVar5[3] = (float)dVar3;
      dVar2 = pdVar4[8];
      dVar3 = pdVar4[9];
      pfVar5[4] = (float)pdVar4[7];
      pfVar5[5] = (float)dVar2;
      pfVar5[6] = (float)dVar3;
      lVar7 = lVar7 + -1;
      pdVar4 = pdVar4 + 0xc;
      pfVar5 = pfVar5 + 0xc;
    } while (lVar7 != 0);
  }
  if (lVar8 < lVar6) {
    pdVar4 = &param_2[lVar8].field0_0x0._s_0.Z;
    lVar6 = lVar6 - lVar8;
    pfVar5 = &param_1[lVar8].field0_0x0._s_0.Z;
    do {
      pTVar1 = (TVector<double>_u_0_s_0 *)(pdVar4 + -2);
      dVar2 = pdVar4[-1];
      dVar3 = *pdVar4;
      pdVar4 = pdVar4 + 3;
      ((TVector<float>_u_0_s_0 *)(pfVar5 + -2))->X = (float)pTVar1->X;
      pfVar5[-1] = (float)dVar2;
      *pfVar5 = (float)dVar3;
      lVar6 = lVar6 + -1;
      pfVar5 = pfVar5 + 3;
    } while (lVar6 != 0);
  }
  return;
}

// CopyCpuToCpuMemory @ 1490d8700

void __cdecl
FNDIArrayImplHelper<UE::Math::TVector<float>_>::CopyCpuToCpuMemory
          (TVector<double> *param_1,TVector<float> *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  longlong lVar13;
  double *pdVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar17 = (longlong)param_3;
  lVar16 = 0;
  if (3 < lVar17) {
    lVar13 = (lVar17 - 4U >> 2) + 1;
    lVar16 = lVar13 * 4;
    pfVar15 = &(param_2->field0_0x0)._s_0.Z;
    pdVar14 = &param_1[1].field0_0x0._s_0.Z;
    do {
      fVar1 = *pfVar15;
      uVar3 = ((TVector<float>_u_0_s_0 *)(pfVar15 + -2))->X;
      uVar6 = ((TVector<float>_u_0_s_0 *)(pfVar15 + -2))->Y;
      auVar8._8_4_ = SUB84((double)(float)uVar6,0);
      auVar8._0_8_ = (double)(float)uVar3;
      auVar8._12_4_ = (int)((ulonglong)(double)(float)uVar6 >> 0x20);
      *(undefined1 (*) [16])(pdVar14 + -5) = auVar8;
      pdVar14[-3] = (double)fVar1;
      fVar1 = pfVar15[2];
      fVar2 = pfVar15[3];
      ((TVector<double>_u_0_s_0 *)(pdVar14 + -2))->X = (double)pfVar15[1];
      pdVar14[-1] = (double)fVar1;
      *pdVar14 = (double)fVar2;
      fVar1 = pfVar15[6];
      dVar11 = (double)(float)((ulonglong)*(undefined8 *)(pfVar15 + 4) >> 0x20);
      auVar9._8_4_ = SUB84(dVar11,0);
      auVar9._0_8_ = (double)(float)*(undefined8 *)(pfVar15 + 4);
      auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(pdVar14 + 1) = auVar9;
      pdVar14[3] = (double)fVar1;
      uVar5 = *(undefined8 *)(pfVar15 + 8);
      dVar11 = (double)(float)((ulonglong)uVar5 >> 0x20);
      pdVar14[4] = (double)pfVar15[7];
      auVar12._8_4_ = SUB84(dVar11,0);
      auVar12._0_8_ = (double)(float)uVar5;
      auVar12._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(pdVar14 + 5) = auVar12;
      lVar13 = lVar13 + -1;
      pfVar15 = pfVar15 + 0xc;
      pdVar14 = pdVar14 + 0xc;
    } while (lVar13 != 0);
  }
  if (lVar16 < lVar17) {
    pfVar15 = &param_2[lVar16].field0_0x0._s_0.Z;
    lVar17 = lVar17 - lVar16;
    pdVar14 = &param_1[lVar16].field0_0x0._s_0.Z;
    do {
      fVar1 = *pfVar15;
      uVar4 = ((TVector<float>_u_0_s_0 *)(pfVar15 + -2))->X;
      uVar7 = ((TVector<float>_u_0_s_0 *)(pfVar15 + -2))->Y;
      pfVar15 = pfVar15 + 3;
      auVar10._8_4_ = SUB84((double)(float)uVar7,0);
      auVar10._0_8_ = (double)(float)uVar4;
      auVar10._12_4_ = (int)((ulonglong)(double)(float)uVar7 >> 0x20);
      ((TVector<double>_u_0_s_0 *)(pdVar14 + -2))->X = (double)(float)uVar4;
      ((TVector<double>_u_0_s_0 *)(pdVar14 + -2))->Y = (double)auVar10._8_8_;
      *pdVar14 = (double)fVar1;
      lVar17 = lVar17 + -1;
      pdVar14 = pdVar14 + 3;
    } while (lVar17 != 0);
  }
  return;
}

// CopyGpuToCpuMemory @ 1490d8810

void __cdecl FNDIArrayImplHelper<bool>::CopyGpuToCpuMemory(void *param_1,void *param_2,int param_3)

{
  char cVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    cVar1 = *(char *)param_2;
    param_2 = (void *)((longlong)param_2 + 1);
    *(uint *)param_1 = -(uint)(cVar1 != '\0');
    param_1 = (int *)((longlong)param_1 + 4);
  }
  return;
}

