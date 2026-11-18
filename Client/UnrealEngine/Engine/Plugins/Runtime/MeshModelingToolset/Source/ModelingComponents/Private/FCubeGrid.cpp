// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// GetCellSize @ 14cb0e540

double __thiscall UE::Geometry::FCubeGrid::GetCellSize(FCubeGrid *this,uchar param_1)

{
  double dVar1;
  
  if (this->GridPowerMode == PowerOfTwo) {
    return (double)(uint)(1 << (param_1 & 0x1f)) * this->BaseGridCellSize;
  }
  dVar1 = pow(__real_4014000000000000,(double)(param_1 >> 1));
  return dVar1 * (double)(uint)(1 << (param_1 - (param_1 >> 1) & 0x1f)) * this->BaseGridCellSize;
}

// GetHitGridFaceBasedOnRay @ 14cb10290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FCubeGrid::GetHitGridFaceBasedOnRay
          (FCubeGrid *this,TVector<double> *param_1,TVector<double> *param_2,FCubeFace *param_3,
          bool param_4,double param_5)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  TVector<double>_u_0 local_168;
  double local_150 [5];
  undefined1 local_128 [16];
  double local_118 [6];
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8 [6];
  
  local_e8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_c8[0]._0_8_ = (param_1->field0_0x0)._s_0.X - (this->GridFrame).Origin.field0_0x0._s_0.X;
  local_c8[0]._8_8_ = (param_1->field0_0x0)._s_0.Y - (this->GridFrame).Origin.field0_0x0._s_0.Y;
  local_c8[0]._16_8_ = local_e8._s_0.Z - (this->GridFrame).Origin.field0_0x0._s_0.Z;
  TQuaternion<double>::InverseMultiply
            (&(this->GridFrame).Rotation,(TVector<double> *)&local_e8._s_0,
             (TVector<double> *)&local_c8[0]._s_0);
  dVar15 = __real_3ff0000000000000;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = __real_3ff0000000000000;
  dVar22 = this->CurrentCellSize;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar22;
  dVar23 = __real_3ff0000000000000 / dVar22;
  auVar24._0_8_ = dVar23 * local_e8._s_0.Z;
  auVar24._8_8_ = 0;
  local_150[0] = dVar23 * local_e8._s_0.X;
  local_150[1] = dVar23 * local_e8._s_0.Y;
  local_150[2] = auVar24._0_8_;
  TQuaternion<double>::InverseMultiply
            (&(this->GridFrame).Rotation,(TVector<double> *)&local_168._s_0,param_2);
  dVar7 = __real_7fefffffffffffff;
  dVar6 = _UNK_150689678;
  dVar5 = ___xmm_3fe00000000000003fe0000000000000;
  uVar4 = __real_3fe0000000000000;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar23 * local_e8._s_0.X;
  lVar11 = 0;
  auVar17 = roundpd(auVar16,auVar16,1);
  local_118[0] = auVar17._0_8_;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar23 * local_e8._s_0.Y;
  auVar18 = roundpd(auVar17,auVar18,1);
  local_118[1] = (double)auVar18._0_8_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar24._0_8_;
  auVar18 = roundpd(auVar18,auVar17,1);
  local_118[2] = (double)auVar18._0_8_;
  do {
    dVar23 = *(double *)((longlong)local_118 + lVar11);
    if (param_5 < ((dVar23 + dVar15) - *(double *)((longlong)local_150 + lVar11)) * dVar22) {
      if ((*(double *)((longlong)local_150 + lVar11) - dVar23) * dVar22 <= param_5) {
        *(double *)((longlong)local_150 + lVar11) = dVar23;
        uVar10 = (*(double *)((longlong)&local_168 + lVar11) <= 0.0) - 1;
        goto LAB_14cb1042b;
      }
    }
    else {
      *(double *)((longlong)local_150 + lVar11) = dVar23 + dVar15;
      uVar10 = (uint)(*(double *)((longlong)&local_168 + lVar11) <= 0.0 &&
                     *(double *)((longlong)&local_168 + lVar11) != 0.0);
LAB_14cb1042b:
      *(double *)((longlong)local_118 + lVar11) = (double)(int)uVar10 + dVar23;
    }
    lVar11 = lVar11 + 8;
    if (0x17 < lVar11) {
      iVar14 = 0;
      lVar11 = 0;
      dVar22 = (double)(int)((param_4 ^ 1) * 2 + -1);
      local_168._s_0.X = local_168._s_0.X * dVar22;
      local_168._s_0.Y = local_168._s_0.Y * dVar22;
      local_168._s_0.Z = local_168._s_0.Z * dVar22;
      dVar22 = __real_7fefffffffffffff;
      do {
        iVar13 = 0;
        do {
          auVar18 = local_128;
          if (*(double *)((longlong)&local_168 + lVar11) != 0.0) {
            dVar23 = (double)iVar13 + *(double *)((longlong)local_118 + lVar11);
            dVar15 = (dVar23 - *(double *)((longlong)local_150 + lVar11)) /
                     *(double *)((longlong)&local_168 + lVar11);
            if ((((dVar15 != 0.0) || (!param_4)) && (0.0 <= dVar15)) && (dVar15 < dVar22)) {
              cVar3 = (char)iVar14 + '\x01';
              local_118[5] = local_150[2];
              local_118[3] = local_150[0];
              local_118[4] = local_150[1];
              *(double *)((longlong)local_118 + lVar11 + 0x18) = dVar23;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = local_118[5];
              cVar12 = -cVar3;
              if ((iVar13 == 0) == param_4) {
                cVar12 = cVar3;
              }
              local_128[8] = cVar12;
              local_128._0_8_ = uVar4;
              auVar24 = roundpd(auVar24,auVar19,1);
              auVar20._8_8_ = 0;
              auVar20._0_8_ = local_118[4];
              local_128._10_6_ = auVar18._10_6_;
              local_128[9] = this->CurrentGridPower;
              auVar25 = roundpd(auVar25,auVar20,1);
              auVar21._8_8_ = 0;
              auVar21._0_8_ = local_118[3];
              auVar26 = roundpd(auVar26,auVar21,1);
              local_150[3] = dVar5;
              local_150[4] = dVar6;
              if (cVar12 < '\0') {
                cVar12 = -cVar12;
              }
              if (2 < (byte)(cVar12 - 1U)) {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                   ,0x7a2,L"");
                if (bVar8) {
                  pcVar1 = (code *)swi(3);
                  uVar9 = (*pcVar1)();
                  return (bool)uVar9;
                }
              }
              local_150[(longlong)(char)(cVar12 - 1U) + 3] = 0.0;
              dVar22 = (double)local_128._0_8_ + auVar24._0_8_;
              (param_3->Center).field0_0x0._s_0.X = local_150[3] + auVar26._0_8_;
              (param_3->Center).field0_0x0._s_0.Y = local_150[4] + auVar25._0_8_;
              local_128._0_8_ = dVar22;
              auVar2._8_4_ = local_128._8_4_;
              auVar2._0_8_ = dVar22;
              auVar2._12_4_ = local_128._12_4_;
              *(undefined1 (*) [16])((longlong)&(param_3->Center).field0_0x0 + 0x10) = auVar2;
              dVar22 = dVar15;
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < 2);
        iVar14 = iVar14 + 1;
        lVar11 = lVar11 + 8;
      } while (iVar14 < 3);
      if ((dVar22 < 0.0) || (dVar22 == dVar7)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      return bVar8;
    }
  } while( true );
}

// SetCurrentGridCellSize @ 14cb35f20

void __thiscall UE::Geometry::FCubeGrid::SetCurrentGridCellSize(FCubeGrid *this,double param_1)

{
  byte bVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = __real_4014000000000000;
  bVar1 = this->CurrentGridPower;
  if (this->GridPowerMode == PowerOfTwo) {
    dVar6 = (double)(uint)(1 << (bVar1 & 0x1f));
  }
  else {
    dVar6 = pow(__real_4014000000000000,(double)(bVar1 >> 1));
    dVar6 = dVar6 * (double)(uint)(1 << (bVar1 - (bVar1 >> 1) & 0x1f));
  }
  dVar3 = param_1 / dVar6;
  if ((param_1 / dVar6 <= 0.0) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3091446064419438447>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\CubeGrid.h"
                         ,0x91,"SizeIn > 0"), dVar3 = __real_3f1a36e2e0000000, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar1 = this->CurrentGridPower;
  this->BaseGridCellSize = dVar3;
  if (this->GridPowerMode == PowerOfTwo) {
    dVar5 = (double)(uint)(1 << (bVar1 & 0x1f));
  }
  else {
    dVar5 = pow(dVar5,(double)(bVar1 >> 1));
    dVar5 = dVar5 * (double)(uint)(1 << (bVar1 - (bVar1 >> 1) & 0x1f));
  }
  this->CurrentCellSize = dVar5 * dVar3;
  return;
}

