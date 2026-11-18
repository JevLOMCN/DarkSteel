// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// DrawTriangle @ 147cf10e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FTriangleRasterizer<FModelHitRasterPolicy>::DrawTriangle
          (FTriangleRasterizer<FModelHitRasterPolicy> *this,TVector4<double> *param_1,
          TVector4<double> *param_2,TVector4<double> *param_3,TVector2<double> *param_4,
          TVector2<double> *param_5,TVector2<double> *param_6,bool param_7)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  double dVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float fStack_1f4;
  float fStack_1ec;
  float local_1e0;
  TVector4<double>_u_0 local_1a8;
  TVector4<double>_u_0 local_188;
  TVector4<double>_u_0 local_168;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TVector4<double>_u_0 local_138;
  TVector4<double>_u_0 local_118;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TVector4<double>_u_0 local_d8 [6];
  
  local_138._16_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  local_138._20_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  local_138._24_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x18);
  local_138._28_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x1c);
  uVar7 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x10);
  uVar8 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x14);
  uVar9 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x18);
  uVar10 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x1c);
  uVar11 = *(undefined4 *)&param_3->field0_0x0;
  uVar12 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
  uVar13 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
  uVar14 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
  local_118._0_4_ = *(undefined4 *)&param_2->field0_0x0;
  local_118._4_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  local_188._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_118._8_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  local_118._12_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  pdVar1 = &(param_2->field0_0x0)._s_0.Z;
  local_118._16_4_ = *(undefined4 *)pdVar1;
  local_118._20_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x14);
  local_168._s_0.X = *pdVar1;
  local_118._24_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x18);
  local_118._28_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x1c);
  local_138._0_4_ = *(undefined4 *)&param_1->field0_0x0;
  local_138._4_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  local_138._8_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  local_138._12_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  fStack_1f4 = (float)(param_4->field0_0x0)._s_0.Y;
  fVar20 = (float)(param_5->field0_0x0)._s_0.Y;
  fVar28 = (float)(param_6->field0_0x0)._s_0.X;
  fVar26 = (float)(param_4->field0_0x0)._s_0.X;
  local_200 = (float)(param_5->field0_0x0)._s_0.X;
  fVar29 = (float)(param_6->field0_0x0)._s_0.Y;
  local_e8 = uVar7;
  uStack_e4 = uVar8;
  uStack_e0 = uVar9;
  uStack_dc = uVar10;
  local_f8 = uVar11;
  uStack_f4 = uVar12;
  uStack_f0 = uVar13;
  uStack_ec = uVar14;
  fVar22 = fVar29;
  local_1e0 = fVar28;
  if ((fStack_1f4 <= fVar20) || (fVar29 < fVar20)) {
    local_204 = fVar26;
    fStack_1ec = fVar20;
    if ((fVar29 < fStack_1f4) && (fVar29 <= fVar20)) {
      local_e8 = local_138._16_4_;
      uStack_e4 = local_138._20_4_;
      uStack_e0 = local_138._24_4_;
      uStack_dc = local_138._28_4_;
      local_f8 = *(undefined4 *)&param_1->field0_0x0;
      uStack_f4 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
      uStack_f0 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
      uStack_ec = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
      fVar22 = fStack_1f4;
      local_1e0 = fVar26;
      local_204 = fVar28;
      local_138._0_4_ = uVar11;
      local_138._4_4_ = uVar12;
      local_138._8_4_ = uVar13;
      local_138._12_4_ = uVar14;
      local_138._16_4_ = uVar7;
      local_138._20_4_ = uVar8;
      local_138._24_4_ = uVar9;
      local_138._28_4_ = uVar10;
      fStack_1f4 = fVar29;
    }
  }
  else {
    pdVar1 = &(param_1->field0_0x0)._s_0.Z;
    local_168._s_0.X = *pdVar1;
    local_188._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_204 = local_200;
    local_200 = fVar26;
    local_138._0_4_ = local_118._0_4_;
    local_138._4_4_ = local_118._4_4_;
    local_138._8_4_ = local_118._8_4_;
    local_138._12_4_ = local_118._12_4_;
    local_138._16_4_ = local_118._16_4_;
    local_138._20_4_ = local_118._20_4_;
    local_138._24_4_ = local_118._24_4_;
    local_138._28_4_ = local_118._28_4_;
    local_118._0_4_ = *(undefined4 *)&param_1->field0_0x0;
    local_118._4_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    local_118._8_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    local_118._12_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    local_118._16_4_ = *(undefined4 *)pdVar1;
    local_118._20_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
    local_118._24_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x18);
    local_118._28_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x1c);
    fStack_1ec = fStack_1f4;
    fStack_1f4 = fVar20;
  }
  uVar10 = local_138._20_4_;
  uVar9 = local_138._16_4_;
  uVar8 = local_138._4_4_;
  uVar7 = local_138._0_4_;
  fVar20 = fVar22;
  fVar26 = local_200;
  uVar11 = local_118._0_4_;
  uVar12 = local_118._4_4_;
  uVar13 = local_118._8_4_;
  uVar14 = local_118._12_4_;
  uVar16 = local_118._16_4_;
  uVar17 = local_118._20_4_;
  uVar18 = local_118._24_4_;
  uVar19 = local_118._28_4_;
  if (fVar22 < fStack_1ec) {
    local_188._4_4_ = uStack_f4;
    local_188._0_4_ = local_f8;
    local_168._4_4_ = uStack_e4;
    local_168._0_4_ = local_e8;
    fVar20 = fStack_1ec;
    fVar26 = local_1e0;
    local_1e0 = local_200;
    uVar11 = local_f8;
    uVar12 = uStack_f4;
    uVar13 = uStack_f0;
    uVar14 = uStack_ec;
    uVar16 = local_e8;
    uVar17 = uStack_e4;
    uVar18 = uStack_e0;
    uVar19 = uStack_dc;
    local_f8 = local_118._0_4_;
    uStack_f4 = local_118._4_4_;
    uStack_f0 = local_118._8_4_;
    uStack_ec = local_118._12_4_;
    local_e8 = local_118._16_4_;
    uStack_e4 = local_118._20_4_;
    uStack_e0 = local_118._24_4_;
    uStack_dc = local_118._28_4_;
    fStack_1ec = fVar22;
  }
  local_118._28_4_ = uVar19;
  local_118._24_4_ = uVar18;
  local_118._20_4_ = uVar17;
  local_118._16_4_ = uVar16;
  local_118._12_4_ = uVar14;
  local_118._8_4_ = uVar13;
  local_118._4_4_ = uVar12;
  local_118._0_4_ = uVar11;
  local_200 = fVar26;
  local_208 = fStack_1ec - fStack_1f4;
  uVar23 = (uint)___xmm_7fffffff7fffffff7fffffff7fffffff;
  if ((float)((uint)local_208 & uVar23) <= __real_322bcc77) {
    if (local_208 < 0.0) {
      local_208 = __real_b22bcc77;
    }
    else {
      local_208 = __real_322bcc77;
    }
  }
  fVar26 = fVar20 - fStack_1f4;
  fVar22 = fVar26;
  if (((float)((uint)fVar26 & uVar23) <= __real_322bcc77) &&
     (fVar22 = __real_b22bcc77, 0.0 <= fVar26)) {
    fVar22 = __real_322bcc77;
  }
  local_1fc = fVar20 - fStack_1ec;
  if ((float)((uint)local_1fc & uVar23) <= __real_322bcc77) {
    if (local_1fc < 0.0) {
      local_1fc = __real_b22bcc77;
    }
    else {
      local_1fc = __real_322bcc77;
    }
  }
  dVar15 = (double)CONCAT44(local_138._28_4_,local_138._24_4_);
  dVar27 = (double)local_208;
  dVar21 = __real_3ff0000000000000 / dVar27;
  local_1a8._s_0.X =
       ((double)CONCAT44(local_118._4_4_,local_118._0_4_) -
       (double)CONCAT44(local_138._4_4_,local_138._0_4_)) * dVar21;
  auVar6._4_8_ = _UNK_15061cc78;
  auVar6._0_4_ = local_138._4_4_;
  auVar24._0_8_ = auVar6._0_8_ << 0x20;
  auVar24._8_4_ = local_138._8_4_;
  auVar24._12_4_ = local_138._12_4_;
  dVar25 = auVar24._8_8_;
  fVar26 = (local_1e0 - local_204) / fVar22;
  local_1a8._s_0.Y = ((double)CONCAT44(local_118._12_4_,local_118._8_4_) - dVar25) * dVar21;
  local_1a8._s_0.Z =
       ((double)CONCAT44(local_118._20_4_,local_118._16_4_) -
       (double)CONCAT44(local_138._20_4_,local_138._16_4_)) * dVar21;
  local_1a8._s_0.W = ((double)CONCAT44(local_118._28_4_,local_118._24_4_) - dVar15) * dVar21;
  dVar21 = __real_3ff0000000000000 / (double)fVar22;
  dVar4 = ((double)CONCAT44(uStack_f4,local_f8) - (double)CONCAT44(local_138._4_4_,local_138._0_4_))
          * dVar21;
  dVar3 = ((double)CONCAT44(uStack_ec,uStack_f0) - dVar25) * dVar21;
  dVar5 = __real_3ff0000000000000 / (double)local_1fc;
  dVar2 = ((double)CONCAT44(uStack_e4,local_e8) -
          (double)CONCAT44(local_138._20_4_,local_138._16_4_)) * dVar21;
  dVar21 = ((double)CONCAT44(uStack_dc,uStack_e0) - dVar15) * dVar21;
  local_188._s_0.X = ((double)CONCAT44(uStack_f4,local_f8) - local_188._s_0.X) * dVar5;
  local_188._s_0.Y =
       ((double)CONCAT44(uStack_ec,uStack_f0) - (double)CONCAT44(local_118._12_4_,local_118._8_4_))
       * dVar5;
  local_188._s_0.W =
       ((double)CONCAT44(uStack_dc,uStack_e0) - (double)CONCAT44(local_118._28_4_,local_118._24_4_))
       * dVar5;
  local_188._s_0.Z = ((double)CONCAT44(uStack_e4,local_e8) - local_168._s_0.X) * dVar5;
  local_168._s_0.X = dVar4;
  local_168._s_0.Y = dVar3;
  local_168._s_0.Z = dVar2;
  local_168._s_0.W = dVar21;
  local_148 = local_f8;
  uStack_144 = uStack_f4;
  uStack_140 = uStack_f0;
  uStack_13c = uStack_ec;
  local_d8[0]._0_8_ = dVar4;
  local_d8[0]._8_8_ = dVar3;
  local_d8[0]._16_8_ = dVar2;
  local_d8[0]._24_8_ = dVar21;
  DrawTriangleTrapezoid
            (this,(TVector4<double> *)&local_138._s_0,(TVector4<double> *)&local_1a8._s_0,
             (TVector4<double> *)&local_138._s_0,(TVector4<double> *)&local_d8[0]._s_0,local_204,
             (local_200 - local_204) / local_208,local_204,fVar26,fStack_1f4,fStack_1ec,param_7);
  local_1a8._s_0.X = dVar4 * dVar27 + (double)CONCAT44(uVar8,uVar7);
  local_1a8._s_0.Y = dVar3 * dVar27 + dVar25;
  local_1a8._s_0.Z = dVar2 * dVar27 + (double)CONCAT44(uVar10,uVar9);
  local_1a8._s_0.W = dVar21 * dVar27 + dVar15;
  DrawTriangleTrapezoid
            (this,(TVector4<double> *)&local_118._s_0,(TVector4<double> *)&local_188._s_0,
             (TVector4<double> *)&local_1a8._s_0,(TVector4<double> *)&local_168._s_0,local_200,
             (local_1e0 - local_200) / local_1fc,fVar26 * local_208 + local_204,fVar26,fStack_1ec,
             fVar20,param_7);
  return;
}

// DrawTriangleTrapezoid @ 147cf16e0

void __thiscall
FTriangleRasterizer<FModelHitRasterPolicy>::DrawTriangleTrapezoid
          (FTriangleRasterizer<FModelHitRasterPolicy> *this,TVector4<double> *param_1,
          TVector4<double> *param_2,TVector4<double> *param_3,TVector4<double> *param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
          bool param_11)

{
  int iVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  
  fVar4 = __real_bf000000;
  dVar3 = __real_3ff0000000000000;
  iVar1 = *(int *)(*(longlong *)&this->field_0x8 + 0x10);
  iVar8 = iVar1 + 1;
  iVar5 = -((int)ROUND(__real_bf000000 - (param_9 + param_9)) >> 1);
  iVar9 = iVar8;
  if (iVar5 < iVar8) {
    iVar9 = iVar5;
  }
  iVar5 = -((int)ROUND(__real_bf000000 - (param_10 + param_10)) >> 1);
  if (iVar5 < iVar8) {
    iVar8 = iVar5;
  }
  iVar5 = iVar1;
  if (iVar1 < iVar8) {
    iVar5 = iVar8;
  }
  if (iVar1 < iVar9) {
    iVar1 = iVar9;
  }
  do {
    if (iVar5 <= iVar1) {
      return;
    }
    fVar10 = (float)iVar1 - param_9;
    fVar11 = fVar10 * param_6 + param_5;
    dVar12 = (double)fVar10 * (param_4->field0_0x0)._s_0.W + (param_3->field0_0x0)._s_0.W;
    dVar14 = (double)fVar10 * (param_2->field0_0x0)._s_0.W + (param_1->field0_0x0)._s_0.W;
    fVar13 = fVar10 * param_8 + param_7;
    fVar10 = fVar13;
    dVar2 = dVar12;
    if (fVar11 <= fVar13) {
      fVar10 = fVar11;
      dVar2 = dVar14;
      dVar14 = dVar12;
    }
    if (fVar13 <= fVar11) {
      fVar13 = fVar11;
    }
    if (fVar10 < fVar13) {
      iVar9 = *(int *)(*(longlong *)&this->field_0x8 + 0xc);
      iVar8 = iVar9 + 1;
      iVar6 = -((int)ROUND(fVar4 - (fVar10 + fVar10)) >> 1);
      iVar7 = iVar8;
      if (iVar6 < iVar8) {
        iVar7 = iVar6;
      }
      dVar14 = (dVar14 - dVar2) / (double)(fVar13 - fVar10);
      iVar6 = -((int)ROUND(fVar4 - (fVar13 + fVar13)) >> 1);
      if (iVar6 < iVar8) {
        iVar8 = iVar6;
      }
      iVar6 = iVar9;
      if (iVar9 < iVar8) {
        iVar6 = iVar8;
      }
      if (iVar9 < iVar7) {
        iVar9 = iVar7;
      }
      if (iVar9 < iVar6) {
        if (3 < iVar6 - iVar9) {
          iVar8 = iVar9 + 2;
          do {
            fVar13 = (float)(dVar3 / ((double)((float)iVar9 - fVar10) * dVar14 + dVar2));
            if ((param_11) || (*(float *)(*(longlong *)&this->field_0x8 + 4) <= fVar13)) {
              if (!param_11) goto LAB_147cf198f;
LAB_147cf19d5:
              if (!param_11) goto LAB_147cf19fe;
LAB_147cf1a47:
              if (!param_11) goto LAB_147cf1a73;
            }
            else {
              *(float *)(*(longlong *)&this->field_0x8 + 4) = fVar13;
              **(undefined4 **)&this->field_0x8 = *(undefined4 *)this;
              *(undefined1 *)(*(longlong *)&this->field_0x8 + 8) = 1;
LAB_147cf198f:
              fVar13 = (float)(dVar3 / ((double)((float)(iVar8 + -1) - fVar10) * dVar14 + dVar2));
              if (*(float *)(*(longlong *)&this->field_0x8 + 4) <= fVar13) goto LAB_147cf19d5;
              *(float *)(*(longlong *)&this->field_0x8 + 4) = fVar13;
              **(undefined4 **)&this->field_0x8 = *(undefined4 *)this;
              *(undefined1 *)(*(longlong *)&this->field_0x8 + 8) = 1;
LAB_147cf19fe:
              fVar13 = (float)(dVar3 / ((double)((float)iVar8 - fVar10) * dVar14 + dVar2));
              if (*(float *)(*(longlong *)&this->field_0x8 + 4) <= fVar13) goto LAB_147cf1a47;
              *(float *)(*(longlong *)&this->field_0x8 + 4) = fVar13;
              **(undefined4 **)&this->field_0x8 = *(undefined4 *)this;
              *(undefined1 *)(*(longlong *)&this->field_0x8 + 8) = 1;
LAB_147cf1a73:
              fVar13 = (float)(dVar3 / ((double)((float)(iVar8 + 1) - fVar10) * dVar14 + dVar2));
              if (fVar13 < *(float *)(*(longlong *)&this->field_0x8 + 4)) {
                *(float *)(*(longlong *)&this->field_0x8 + 4) = fVar13;
                **(undefined4 **)&this->field_0x8 = *(undefined4 *)this;
                *(undefined1 *)(*(longlong *)&this->field_0x8 + 8) = 1;
              }
            }
            iVar9 = iVar9 + 4;
            iVar8 = iVar8 + 4;
          } while (iVar9 < iVar6 + -3);
          if (iVar6 <= iVar9) goto LAB_147cf1afa;
        }
        do {
          fVar13 = (float)(dVar3 / ((double)((float)iVar9 - fVar10) * dVar14 + dVar2));
          if ((!param_11) && (fVar13 < *(float *)(*(longlong *)&this->field_0x8 + 4))) {
            *(float *)(*(longlong *)&this->field_0x8 + 4) = fVar13;
            **(undefined4 **)&this->field_0x8 = *(undefined4 *)this;
            *(undefined1 *)(*(longlong *)&this->field_0x8 + 8) = 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar6);
      }
    }
LAB_147cf1afa:
    iVar1 = iVar1 + 1;
  } while( true );
}

