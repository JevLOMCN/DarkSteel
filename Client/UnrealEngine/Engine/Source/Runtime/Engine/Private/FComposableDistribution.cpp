// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// BuildFloat @ 147b48f80

void __cdecl
FComposableDistribution::BuildFloat
          (FFloatDistribution *param_1,FComposableFloatDistribution *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((float)(int)((uint)(byte)param_2->field_0x1a - (uint)(byte)param_2->field_0x1b) !=
      __real_3f800000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("X.LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x564,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FDistributionLookupTable::operator=(&param_1->LookupTable,(FDistributionLookupTable *)param_2);
  OptimizeLookupTable(&param_1->LookupTable,__real_3d4ccccd);
  return;
}

// BuildVector4 @ 147b49000

void __cdecl
FComposableDistribution::BuildVector4
          (FVector4Distribution *param_1,FComposableFloatDistribution *param_2,
          FComposableFloatDistribution *param_3,FComposableFloatDistribution *param_4,
          FComposableFloatDistribution *param_5)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  
  fVar2 = __real_3f800000;
  if ((float)(int)((uint)(byte)param_2->field_0x1a - (uint)(byte)param_2->field_0x1b) !=
      __real_3f800000) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("X.LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x595,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((float)(int)((uint)(byte)param_3->field_0x1a - (uint)(byte)param_3->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Y.LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x596,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((float)(int)((uint)(byte)param_4->field_0x1a - (uint)(byte)param_4->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Z.LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x597,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((float)(int)((uint)(byte)param_5->field_0x1a - (uint)(byte)param_5->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("W.LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x598,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FDistributionLookupTable::operator=(&param_1->LookupTable,(FDistributionLookupTable *)param_2);
  AppendLookupTable(&param_1->LookupTable,(FDistributionLookupTable *)param_3);
  AppendLookupTable(&param_1->LookupTable,(FDistributionLookupTable *)param_4);
  AppendLookupTable(&param_1->LookupTable,(FDistributionLookupTable *)param_5);
  OptimizeLookupTable(&param_1->LookupTable,__real_3d4ccccd);
  return;
}

// BuildVector4 @ 147b49190

void __cdecl
FComposableDistribution::BuildVector4
          (FVector4Distribution *param_1,FComposableVectorDistribution *param_2,
          FComposableFloatDistribution *param_3,FComposableFloatDistribution *param_4)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  
  if ((float)(int)((uint)(byte)param_2->field_0x1a - (uint)(byte)param_2->field_0x1b) !=
      __real_40400000) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("XY0.LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x583,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar2 = __real_3f800000;
  if ((float)(int)((uint)(byte)param_3->field_0x1a - (uint)(byte)param_3->field_0x1b) !=
      __real_3f800000) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Z.LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x584,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((float)(int)((uint)(byte)param_4->field_0x1a - (uint)(byte)param_4->field_0x1b) != fVar2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("W.LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x585,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FDistributionLookupTable::operator=(&param_1->LookupTable,(FDistributionLookupTable *)param_2);
  SliceLookupTable(&param_1->LookupTable,2);
  AppendLookupTable(&param_1->LookupTable,(FDistributionLookupTable *)param_3);
  AppendLookupTable(&param_1->LookupTable,(FDistributionLookupTable *)param_4);
  OptimizeLookupTable(&param_1->LookupTable,__real_3d4ccccd);
  return;
}

// BuildVector4 @ 147b492e0

void __cdecl
FComposableDistribution::BuildVector4
          (FVector4Distribution *param_1,FComposableVectorDistribution *param_2,
          FComposableFloatDistribution *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((float)(int)((uint)(byte)param_2->field_0x1a - (uint)(byte)param_2->field_0x1b) !=
      __real_40400000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("XYZ.LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x574,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((float)(int)((uint)(byte)param_3->field_0x1a - (uint)(byte)param_3->field_0x1b) !=
      __real_3f800000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("W.LookupTable.GetValuesPerEntry() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x575,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FDistributionLookupTable::operator=(&param_1->LookupTable,(FDistributionLookupTable *)param_2);
  AppendLookupTable(&param_1->LookupTable,(FDistributionLookupTable *)param_3);
  OptimizeLookupTable(&param_1->LookupTable,__real_3d4ccccd);
  return;
}

// BuildVector @ 147b493c0

void __cdecl
FComposableDistribution::BuildVector
          (FVectorDistribution *param_1,FComposableVectorDistribution *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((float)(int)((uint)(byte)param_2->field_0x1a - (uint)(byte)param_2->field_0x1b) !=
      __real_40400000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("XYZ.LookupTable.GetValuesPerEntry() == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Distributions.cpp"
                       ,0x56c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FDistributionLookupTable::operator=(&param_1->LookupTable,(FDistributionLookupTable *)param_2);
  OptimizeLookupTable(&param_1->LookupTable,__real_3d4ccccd);
  return;
}

// QuantizeVector4 @ 147b7ec20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FComposableDistribution::QuantizeVector4
          (TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,TVector4<double> *param_2,
          TVector4<double> *param_3,FVector4Distribution *param_4)

{
  int *piVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  int iVar14;
  FScriptContainerElement FVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double local_res20;
  
  bVar2 = (param_4->LookupTable).EntryCount;
  uVar20 = (ulonglong)bVar2;
  uVar21 = (ulonglong)(param_4->LookupTable).EntryStride;
  pFVar17 = (param_4->LookupTable).Values.AllocatorInstance.Data;
  iVar16 = 0;
  dVar8 = __real_c7efffffe0000000;
  dVar6 = ___xmm_47efffffe000000047efffffe0000000;
  dVar12 = __real_c7efffffe0000000;
  dVar10 = __real_c7efffffe0000000;
  dVar11 = __real_c7efffffe0000000;
  dVar7 = _UNK_150b28868;
  dVar32 = ___xmm_47efffffe000000047efffffe0000000;
  dVar33 = _UNK_150b28868;
  if (3 < bVar2) {
    uVar13 = (bVar2 - 4 >> 2) + 1;
    uVar18 = (ulonglong)uVar13;
    iVar16 = uVar13 * 4;
    do {
      fVar26 = (float)dVar33;
      if (*(float *)(pFVar17 + 4) <= (float)dVar33) {
        fVar26 = *(float *)(pFVar17 + 4);
      }
      fVar22 = (float)dVar32;
      if (*(float *)pFVar17 <= (float)dVar32) {
        fVar22 = *(float *)pFVar17;
      }
      fVar23 = (float)dVar6;
      if (*(float *)(pFVar17 + 8) <= (float)dVar6) {
        fVar23 = *(float *)(pFVar17 + 8);
      }
      fVar27 = (float)dVar7;
      if (*(float *)(pFVar17 + 0xc) <= (float)dVar7) {
        fVar27 = *(float *)(pFVar17 + 0xc);
      }
      fVar24 = (float)dVar8;
      if ((float)dVar8 <= *(float *)pFVar17) {
        fVar24 = *(float *)pFVar17;
      }
      fVar28 = (float)dVar12;
      if ((float)dVar12 <= *(float *)(pFVar17 + 4)) {
        fVar28 = *(float *)(pFVar17 + 4);
      }
      fVar25 = (float)dVar10;
      if ((float)dVar10 <= *(float *)(pFVar17 + 8)) {
        fVar25 = *(float *)(pFVar17 + 8);
      }
      fVar29 = (float)dVar11;
      if ((float)dVar11 <= *(float *)(pFVar17 + 0xc)) {
        fVar29 = *(float *)(pFVar17 + 0xc);
      }
      pFVar17 = pFVar17 + uVar21 * 4;
      if (*(float *)(pFVar17 + 4) <= fVar26) {
        fVar26 = *(float *)(pFVar17 + 4);
      }
      if (*(float *)pFVar17 <= fVar22) {
        fVar22 = *(float *)pFVar17;
      }
      if (*(float *)(pFVar17 + 8) <= fVar23) {
        fVar23 = *(float *)(pFVar17 + 8);
      }
      if (*(float *)(pFVar17 + 0xc) <= fVar27) {
        fVar27 = *(float *)(pFVar17 + 0xc);
      }
      if (fVar24 <= *(float *)pFVar17) {
        fVar24 = *(float *)pFVar17;
      }
      if (fVar28 <= *(float *)(pFVar17 + 4)) {
        fVar28 = *(float *)(pFVar17 + 4);
      }
      if (fVar25 <= *(float *)(pFVar17 + 8)) {
        fVar25 = *(float *)(pFVar17 + 8);
      }
      if (fVar29 <= *(float *)(pFVar17 + 0xc)) {
        fVar29 = *(float *)(pFVar17 + 0xc);
      }
      pFVar17 = pFVar17 + uVar21 * 4;
      if (*(float *)(pFVar17 + 4) <= fVar26) {
        fVar26 = *(float *)(pFVar17 + 4);
      }
      if (*(float *)pFVar17 <= fVar22) {
        fVar22 = *(float *)pFVar17;
      }
      if (*(float *)(pFVar17 + 8) <= fVar23) {
        fVar23 = *(float *)(pFVar17 + 8);
      }
      if (*(float *)(pFVar17 + 0xc) <= fVar27) {
        fVar27 = *(float *)(pFVar17 + 0xc);
      }
      if (fVar24 <= *(float *)pFVar17) {
        fVar24 = *(float *)pFVar17;
      }
      if (fVar28 <= *(float *)(pFVar17 + 4)) {
        fVar28 = *(float *)(pFVar17 + 4);
      }
      if (fVar25 <= *(float *)(pFVar17 + 8)) {
        fVar25 = *(float *)(pFVar17 + 8);
      }
      if (fVar29 <= *(float *)(pFVar17 + 0xc)) {
        fVar29 = *(float *)(pFVar17 + 0xc);
      }
      pFVar17 = pFVar17 + uVar21 * 4;
      if (*(float *)pFVar17 <= fVar22) {
        fVar22 = *(float *)pFVar17;
      }
      if (*(float *)(pFVar17 + 4) <= fVar26) {
        fVar26 = *(float *)(pFVar17 + 4);
      }
      dVar32 = (double)fVar22;
      dVar33 = (double)fVar26;
      if (*(float *)(pFVar17 + 8) <= fVar23) {
        fVar23 = *(float *)(pFVar17 + 8);
      }
      if (*(float *)(pFVar17 + 0xc) <= fVar27) {
        fVar27 = *(float *)(pFVar17 + 0xc);
      }
      dVar6 = (double)fVar23;
      dVar7 = (double)fVar27;
      if (fVar24 <= *(float *)pFVar17) {
        fVar24 = *(float *)pFVar17;
      }
      if (fVar28 <= *(float *)(pFVar17 + 4)) {
        fVar28 = *(float *)(pFVar17 + 4);
      }
      dVar8 = (double)fVar24;
      dVar12 = (double)fVar28;
      if (fVar25 <= *(float *)(pFVar17 + 8)) {
        fVar25 = *(float *)(pFVar17 + 8);
      }
      if (fVar29 <= *(float *)(pFVar17 + 0xc)) {
        fVar29 = *(float *)(pFVar17 + 0xc);
      }
      pFVar17 = pFVar17 + uVar21 * 4;
      dVar10 = (double)fVar25;
      dVar11 = (double)fVar29;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  if (iVar16 < (int)(uint)bVar2) {
    uVar18 = (ulonglong)((uint)bVar2 - iVar16);
    do {
      fVar26 = (float)dVar32;
      if (*(float *)pFVar17 <= (float)dVar32) {
        fVar26 = *(float *)pFVar17;
      }
      fVar22 = (float)dVar33;
      if (*(float *)(pFVar17 + 4) <= (float)dVar33) {
        fVar22 = *(float *)(pFVar17 + 4);
      }
      dVar32 = (double)fVar26;
      dVar33 = (double)fVar22;
      fVar26 = (float)dVar6;
      if (*(float *)(pFVar17 + 8) <= (float)dVar6) {
        fVar26 = *(float *)(pFVar17 + 8);
      }
      fVar22 = (float)dVar7;
      if (*(float *)(pFVar17 + 0xc) <= (float)dVar7) {
        fVar22 = *(float *)(pFVar17 + 0xc);
      }
      dVar6 = (double)fVar26;
      dVar7 = (double)fVar22;
      fVar26 = (float)dVar8;
      if ((float)dVar8 <= *(float *)pFVar17) {
        fVar26 = *(float *)pFVar17;
      }
      fVar22 = (float)dVar12;
      if ((float)dVar12 <= *(float *)(pFVar17 + 4)) {
        fVar22 = *(float *)(pFVar17 + 4);
      }
      dVar8 = (double)fVar26;
      dVar12 = (double)fVar22;
      fVar26 = (float)dVar10;
      if ((float)dVar10 <= *(float *)(pFVar17 + 8)) {
        fVar26 = *(float *)(pFVar17 + 8);
      }
      fVar22 = (float)dVar11;
      if ((float)dVar11 <= *(float *)(pFVar17 + 0xc)) {
        fVar22 = *(float *)(pFVar17 + 0xc);
      }
      pFVar17 = pFVar17 + uVar21 * 4;
      dVar10 = (double)fVar26;
      dVar11 = (double)fVar22;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  dVar11 = dVar11 - dVar7;
  dVar8 = dVar8 - dVar32;
  dVar12 = dVar12 - dVar33;
  local_res20 = 0.0;
  dVar10 = dVar10 - dVar6;
  if (dVar11 <= __real_3f1a36e2e0000000) {
    dVar31 = 0.0;
  }
  else {
    dVar31 = __real_3ff0000000000000 / dVar11;
  }
  if (dVar10 <= __real_3f1a36e2e0000000) {
    dVar30 = 0.0;
  }
  else {
    dVar30 = __real_3ff0000000000000 / dVar10;
  }
  if (dVar12 <= __real_3f1a36e2e0000000) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = __real_3ff0000000000000 / dVar12;
  }
  if (__real_3f1a36e2e0000000 < dVar8) {
    local_res20 = __real_406fe00000000000 / dVar8;
  }
  dVar4 = dVar4 * __real_406fe00000000000;
  dVar30 = dVar30 * __real_406fe00000000000;
  dVar31 = dVar31 * __real_406fe00000000000;
  if (bVar2 == 1) {
    (param_2->field0_0x0)._s_0.X = dVar8;
    (param_2->field0_0x0)._s_0.Y = dVar12;
    (param_2->field0_0x0)._s_0.Z = dVar10;
    (param_2->field0_0x0)._s_0.W = dVar11;
  }
  else {
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    uVar13 = (uint)bVar2;
    if (*piVar1 != uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar13,&param_1->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,&param_1->AllocatorInstance,&param_1->ArrayNum,piVar1);
    pFVar17 = (param_1->AllocatorInstance).Data;
    pFVar19 = (param_4->LookupTable).Values.AllocatorInstance.Data;
    if (uVar13 != 0) {
      do {
        fVar26 = *(float *)(pFVar19 + 4);
        iVar14 = (int)(longlong)(((double)*(float *)pFVar19 - dVar32) * local_res20);
        iVar16 = 0xff;
        if (iVar14 < 0xff) {
          iVar16 = iVar14;
        }
        FVar15 = (FScriptContainerElement)0x0;
        if (0 < iVar16) {
          FVar15 = SUB41(iVar16,0);
        }
        pFVar17[2] = FVar15;
        fVar22 = *(float *)(pFVar19 + 8);
        iVar14 = (int)(longlong)(((double)fVar26 - dVar33) * dVar4);
        iVar16 = 0xff;
        if (iVar14 < 0xff) {
          iVar16 = iVar14;
        }
        FVar15 = (FScriptContainerElement)0x0;
        if (0 < iVar16) {
          FVar15 = SUB41(iVar16,0);
        }
        pFVar17[1] = FVar15;
        fVar26 = *(float *)(pFVar19 + 0xc);
        iVar14 = (int)(longlong)(((double)fVar22 - dVar6) * dVar30);
        iVar16 = 0xff;
        if (iVar14 < 0xff) {
          iVar16 = iVar14;
        }
        FVar15 = (FScriptContainerElement)0x0;
        if (0 < iVar16) {
          FVar15 = SUB41(iVar16,0);
        }
        *pFVar17 = FVar15;
        iVar14 = (int)(longlong)(((double)fVar26 - dVar7) * dVar31);
        iVar16 = 0xff;
        if (iVar14 < 0xff) {
          iVar16 = iVar14;
        }
        FVar15 = (FScriptContainerElement)0x0;
        if (0 < iVar16) {
          FVar15 = SUB41(iVar16,0);
        }
        pFVar19 = pFVar19 + uVar21 * 4;
        pFVar17[3] = FVar15;
        pFVar17 = pFVar17 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    auVar3._8_4_ = SUB84(dVar12,0);
    auVar3._0_8_ = dVar8;
    auVar3._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])&param_2->field0_0x0 = auVar3;
    auVar5._8_4_ = SUB84(dVar11,0);
    auVar5._0_8_ = dVar10;
    auVar5._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])((longlong)&param_2->field0_0x0 + 0x10) = auVar5;
  }
  (param_3->field0_0x0)._s_0.X = dVar32;
  (param_3->field0_0x0)._s_0.Y = dVar33;
  auVar9._8_4_ = SUB84(dVar7,0);
  auVar9._0_8_ = dVar6;
  auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])((longlong)&param_3->field0_0x0 + 0x10) = auVar9;
  return;
}

