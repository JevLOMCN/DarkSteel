// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// ComputeGPUSpatialSeed @ 1417bb590

ushort __cdecl FSobol::ComputeGPUSpatialSeed(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (0xf < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("x >= 0 && x < 16",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sobol.cpp"
                       ,0xf3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (0xf < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("y >= 0 && y < 16",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sobol.cpp"
                       ,0xf4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (param_3 == 0) {
    uVar3 = -(ushort)((param_2 & 4U) != 0) & 0xfb57 ^ -(ushort)((param_1 & 1U) != 0) & 0xf68e ^
            -(ushort)((param_2 & 2U) != 0) & 0x4ac2 ^ -(ushort)((param_1 & 8U) != 0) & 0x220a ^
            -(ushort)((param_2 & 1U) != 0) & 0x94c4 ^ -(ushort)((param_1 & 4U) != 0) & 0x1135 ^
            -(ushort)((param_1 & 2U) != 0) & 0x8e56 ^ -(ushort)((param_2 & 8U) != 0) & 0x454;
  }
  else if (param_3 == 1) {
    uVar3 = -(ushort)((param_1 & 4U) != 0) & 0xe69e ^ -(ushort)((param_2 & 4U) != 0) & 0xe69e ^
            -(ushort)((param_1 & 1U) != 0) & 0x4414 ^ -(ushort)((param_1 & 8U) != 0) & 0xae76 ^
            -(ushort)((param_2 & 8U) != 0) & 0xae76 ^ -(ushort)((param_2 & 2U) != 0) & 0x265e ^
            -(ushort)((param_2 & 1U) != 0) & 0xa28a ^ -(ushort)((param_1 & 2U) != 0) & 0x8828;
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sobol.cpp"
                       ,0x10f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}

// Evaluate @ 1417c75d0

TVector2<double> * __cdecl
FSobol::Evaluate(TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
                TIntPoint<int> param_3,TIntPoint<int> param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector2<double> *pTVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  uint uStackX_c;
  uint local_res20;
  uint uStackX_24;
  
  lVar10 = (longlong)param_2;
  if ((0xf < (uint)param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CellBits >= 0 && CellBits <= MaxCell2DBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sobol.cpp"
                         ,0x26,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector2<double> *)(*pcVar1)();
    return pTVar4;
  }
  bVar5 = (byte)param_2;
  uVar6 = (int)(param_4.field0_0x0._s_0.X & 0xffffffU) >> (bVar5 & 0x1f);
  uStackX_c = (int)(param_4.field0_0x0._s_0.Y & 0xffffffU) >> (bVar5 & 0x1f);
  uVar3 = (1 << (bVar5 & 0x1f)) - 1;
  uStackX_24 = param_3.field0_0x0._4_4_;
  uStackX_24 = uVar3 & uStackX_24;
  local_res20 = param_3.field0_0x0._0_4_;
  uVar3 = uVar3 & local_res20;
  if (0 < param_2) {
    lVar8 = 0;
    do {
      if (uVar3 == 0) break;
      uVar7 = uVar3 & 1;
      uVar3 = (int)uVar3 >> 1;
      lVar9 = lVar8 + 1;
      uStackX_c = uStackX_c ^ uVar7 * Cell2DDirectionNumbers[lVar10][lVar8][1];
      uVar6 = uVar6 ^ uVar7 * Cell2DDirectionNumbers[lVar10][lVar8][0];
      lVar8 = lVar9;
    } while (lVar9 < lVar10);
  }
  lVar8 = (longlong)(param_2 * 2);
  lVar9 = lVar10;
  for (; (lVar9 < lVar8 && (uStackX_24 != 0)); uStackX_24 = (int)uStackX_24 >> 1) {
    uVar6 = uVar6 ^ (uStackX_24 & 1) * Cell2DDirectionNumbers[lVar10][lVar9][0];
    uStackX_c = uStackX_c ^ (uStackX_24 & 1) * Cell2DDirectionNumbers[lVar10][lVar9][1];
    lVar9 = lVar9 + 1;
  }
  for (; (lVar8 < 0x20 && (param_1 != 0)); param_1 = param_1 >> 1) {
    uVar6 = uVar6 ^ (param_1 & 1U) * Cell2DDirectionNumbers[lVar10][lVar8][0];
    uStackX_c = uStackX_c ^ (param_1 & 1U) * Cell2DDirectionNumbers[lVar10][lVar8][1];
    lVar8 = lVar8 + 1;
  }
  dVar11 = __real_3ff0000000000000 / (double)(1 << (0x18 - bVar5 & 0x1f));
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(int)uVar6 * dVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)uStackX_c * dVar11;
  return __return_storage_ptr__;
}

// Evaluate @ 1417c77d0

TVector<double> * __cdecl
FSobol::Evaluate(TVector<double> *__return_storage_ptr__,int param_1,int param_2,
                TIntVector3<int> *param_3,TIntVector3<int> *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  
  lVar13 = (longlong)param_2;
  if ((0xf < (uint)param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CellBits >= 0 && CellBits <= MaxCell2DBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sobol.cpp"
                         ,0x53,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TVector<double> *)(*pcVar2)();
    return pTVar4;
  }
  bVar5 = (byte)param_2;
  uVar8 = (1 << (bVar5 & 0x1f)) - 1;
  piVar1 = &(param_3->field0_0x0)._s_0.Y;
  *piVar1 = *piVar1 & uVar8;
  piVar1 = &(param_3->field0_0x0)._s_0.Z;
  *piVar1 = *piVar1 & uVar8;
  uVar8 = uVar8 & (param_3->field0_0x0)._s_0.X;
  uVar11 = (int)((param_4->field0_0x0)._s_0.X & 0xffffffU) >> (bVar5 & 0x1f);
  uVar12 = (int)((param_4->field0_0x0)._s_0.Y & 0xffffffU) >> (bVar5 & 0x1f);
  uVar7 = (int)((param_4->field0_0x0)._s_0.Z & 0xffffffU) >> (bVar5 & 0x1f);
  (param_3->field0_0x0)._s_0.X = uVar8;
  if (0 < param_2) {
    lVar9 = 0;
    do {
      if (uVar8 == 0) break;
      uVar6 = uVar8 & 1;
      uVar8 = (int)uVar8 >> 1;
      lVar10 = lVar9 + 1;
      (param_3->field0_0x0)._s_0.X = uVar8;
      uVar11 = uVar11 ^ uVar6 * Cell3DDirectionNumbers[lVar13][lVar9][0];
      uVar12 = uVar12 ^ uVar6 * Cell3DDirectionNumbers[lVar13][lVar9][1];
      uVar7 = uVar7 ^ uVar6 * Cell3DDirectionNumbers[lVar13][lVar9][2];
      lVar9 = lVar10;
    } while (lVar10 < lVar13);
  }
  lVar9 = lVar13;
  while ((lVar9 < param_2 * 2 && (uVar8 = (param_3->field0_0x0)._s_0.Y, uVar8 != 0))) {
    uVar6 = uVar8 & 1;
    (param_3->field0_0x0)._s_0.Y = (int)uVar8 >> 1;
    uVar11 = uVar11 ^ uVar6 * Cell3DDirectionNumbers[lVar13][lVar9][0];
    uVar12 = uVar12 ^ uVar6 * Cell3DDirectionNumbers[lVar13][lVar9][1];
    uVar7 = uVar7 ^ uVar6 * Cell3DDirectionNumbers[lVar13][lVar9][2];
    lVar9 = lVar9 + 1;
  }
  lVar10 = (longlong)(param_2 * 3);
  lVar9 = (longlong)(param_2 * 2);
  while ((lVar9 < lVar10 && (uVar8 = (param_3->field0_0x0)._s_0.Z, uVar8 != 0))) {
    uVar6 = uVar8 & 1;
    (param_3->field0_0x0)._s_0.Z = (int)uVar8 >> 1;
    uVar11 = uVar11 ^ uVar6 * Cell3DDirectionNumbers[lVar13][lVar9][0];
    uVar12 = uVar12 ^ uVar6 * Cell3DDirectionNumbers[lVar13][lVar9][1];
    uVar7 = uVar7 ^ uVar6 * Cell3DDirectionNumbers[lVar13][lVar9][2];
    lVar9 = lVar9 + 1;
  }
  for (; (lVar10 < 0x20 && (param_1 != 0)); param_1 = param_1 >> 1) {
    uVar8 = param_1 & 1;
    uVar11 = uVar11 ^ uVar8 * Cell3DDirectionNumbers[lVar13][lVar10][0];
    uVar12 = uVar12 ^ uVar8 * Cell3DDirectionNumbers[lVar13][lVar10][1];
    uVar7 = uVar7 ^ uVar8 * Cell3DDirectionNumbers[lVar13][lVar10][2];
    lVar10 = lVar10 + 1;
  }
  dVar14 = __real_3ff0000000000000 / (double)(1 << (0x18 - bVar5 & 0x1f));
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(int)uVar11 * dVar14;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)uVar12 * dVar14;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(int)uVar7 * dVar14;
  return __return_storage_ptr__;
}

// Evaluate @ 1417c7a70

float __cdecl FSobol::Evaluate(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (0xf < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dim >= 0 && Dim <= MaxDimension",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sobol.cpp"
                       ,0xe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return (float)(int)((param_1 >> 0x1f & 1U) * DirectionNumbers[param_2][0x1f] ^
                      (param_1 >> 0x1e & 1U) * DirectionNumbers[param_2][0x1e] ^
                     (param_1 >> 0x1d & 1U) * DirectionNumbers[param_2][0x1d] ^
                     (param_1 >> 0x1c & 1U) * DirectionNumbers[param_2][0x1c] ^
                     (param_1 >> 0x1b & 1U) * DirectionNumbers[param_2][0x1b] ^
                     (param_1 >> 0x1a & 1U) * DirectionNumbers[param_2][0x1a] ^
                     (param_1 >> 0x19 & 1U) * DirectionNumbers[param_2][0x19] ^
                     (param_1 >> 0x18 & 1U) * DirectionNumbers[param_2][0x18] ^
                     (param_1 >> 0x17 & 1U) * DirectionNumbers[param_2][0x17] ^
                     (param_1 >> 0x16 & 1U) * DirectionNumbers[param_2][0x16] ^
                     (param_1 >> 0x15 & 1U) * DirectionNumbers[param_2][0x15] ^
                     (param_1 >> 0x14 & 1U) * DirectionNumbers[param_2][0x14] ^
                     (param_1 >> 0x13 & 1U) * DirectionNumbers[param_2][0x13] ^
                     (param_1 >> 0x12 & 1U) * DirectionNumbers[param_2][0x12] ^
                     (param_1 >> 0x11 & 1U) * DirectionNumbers[param_2][0x11] ^
                     (param_1 >> 0x10 & 1U) * DirectionNumbers[param_2][0x10] ^
                     (param_1 >> 0xf & 1U) * DirectionNumbers[param_2][0xf] ^
                     (param_1 >> 0xe & 1U) * DirectionNumbers[param_2][0xe] ^
                     (param_1 >> 0xd & 1U) * DirectionNumbers[param_2][0xd] ^
                     (param_1 >> 0xc & 1U) * DirectionNumbers[param_2][0xc] ^
                     (param_1 >> 0xb & 1U) * DirectionNumbers[param_2][0xb] ^
                     (param_1 >> 10 & 1U) * DirectionNumbers[param_2][10] ^
                     (param_1 >> 9 & 1U) * DirectionNumbers[param_2][9] ^
                     (param_1 >> 8 & 1U) * DirectionNumbers[param_2][8] ^
                     (param_1 >> 7 & 1U) * DirectionNumbers[param_2][7] ^
                     (param_1 >> 6 & 1U) * DirectionNumbers[param_2][6] ^
                     (param_1 >> 5 & 1U) * DirectionNumbers[param_2][5] ^
                     (param_1 >> 4 & 1U) * DirectionNumbers[param_2][4] ^
                     (param_1 >> 3 & 1U) * DirectionNumbers[param_2][3] ^
                     (param_1 >> 2 & 1U) * DirectionNumbers[param_2][2] ^
                     (param_1 >> 1 & 1U) * DirectionNumbers[param_2][1] ^
                     (param_1 & 1U) * DirectionNumbers[param_2][0] ^ param_3 & 0xffffffU) *
         __real_33800000;
}

// Next @ 1417e7000

TVector2<double> * __cdecl
FSobol::Next(TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
            TVector2<double> *param_3)

{
  double dVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  TVector2<double> *pTVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  
  if (param_1 == 0) {
    dVar8 = (param_3->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8;
  }
  else {
    if (0xf < (uint)param_2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CellBits >= 0 && CellBits <= MaxCell2DBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sobol.cpp"
                         ,0x46,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TVector2<double> *)(*pcVar3)();
        return pTVar5;
      }
    }
    uVar2 = 0;
    if (param_1 != 0) {
      for (; ((uint)param_1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    dVar8 = (double)(1 << (0x18U - (char)param_2 & 0x1f));
    uVar6 = 0;
    if (param_1 != 0) {
      uVar6 = uVar2;
    }
    dVar7 = __real_3ff0000000000000 / dVar8;
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    uVar2 = Cell2DGrayNumbers[param_2][uVar6 & 0x1f][1];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)(int)((int)(dVar8 * (param_3->field0_0x0)._s_0.X) & 0xffffffU ^
                      Cell2DGrayNumbers[param_2][uVar6 & 0x1f][0]) * dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)(int)((int)(dVar8 * dVar1) & 0xffffffU ^ uVar2) * dVar7;
  }
  return __return_storage_ptr__;
}

// Next @ 1417e7110

TVector<double> * __cdecl
FSobol::Next(TVector<double> *__return_storage_ptr__,int param_1,int param_2,
            TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  
  if (param_1 == 0) {
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    dVar9 = (param_3->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9;
  }
  else {
    if (0xf < (uint)param_2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CellBits >= 0 && CellBits <= MaxCell2DBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sobol.cpp"
                         ,0x7c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar4)();
        return pTVar6;
      }
    }
    uVar3 = 0;
    if (param_1 != 0) {
      for (; ((uint)param_1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    dVar9 = (double)(1 << (0x18U - (char)param_2 & 0x1f));
    uVar7 = 0;
    if (param_1 != 0) {
      uVar7 = uVar3;
    }
    uVar7 = uVar7 & 0x1f;
    dVar8 = __real_3ff0000000000000 / dVar9;
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    dVar2 = (param_3->field0_0x0)._s_0.Z;
    uVar3 = Cell3DGrayNumbers[param_2][uVar7][1];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)(int)((int)(dVar9 * (param_3->field0_0x0)._s_0.X) & 0xffffffU ^
                      Cell3DGrayNumbers[param_2][uVar7][0]) * dVar8;
    uVar7 = Cell3DGrayNumbers[param_2][uVar7][2];
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)(int)((int)(dVar9 * dVar1) & 0xffffffU ^ uVar3) * dVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (double)(int)((int)(dVar9 * dVar2) & 0xffffffU ^ uVar7) * dVar8;
  }
  return __return_storage_ptr__;
}

// Next @ 1417e7250

float __cdecl FSobol::Next(int param_1,int param_2,float param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  if (param_1 == 0) {
    return param_3;
  }
  if (0xf < (uint)param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dim >= 0 && Dim <= MaxDimension",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Math\\Sobol.cpp"
                       ,0x1d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  uVar1 = 0;
  if (param_1 != 0) {
    for (; ((uint)param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = uVar1;
  }
  return (float)(int)((int)ROUND(param_3 * __real_4c000000 - __real_3f000000) >> 1 & 0xffffffU ^
                     GrayNumbers[param_2][uVar4 & 0x1f]) * __real_33800000;
}

