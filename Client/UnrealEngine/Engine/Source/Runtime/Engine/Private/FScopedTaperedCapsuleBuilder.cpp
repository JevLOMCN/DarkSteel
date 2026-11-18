// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FScopedTaperedCapsuleBuilder @ 1482d9d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FScopedTaperedCapsuleBuilder * __thiscall
FScopedTaperedCapsuleBuilder::FScopedTaperedCapsuleBuilder
          (FScopedTaperedCapsuleBuilder *this,FKTaperedCapsuleElem *param_1,TVector<double> *param_2
          ,Type param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FDynamicMeshVertex *pFVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  float fVar29;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Dc;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  double dVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_1f8;
  float local_1f4;
  uint local_1f0;
  TVector<float>_u_0 local_1e8;
  TVector<float>_u_0 local_1d8;
  TVector<float>_u_0 local_1c8;
  float local_1b8;
  float fStack_1b4;
  undefined4 uStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 local_12c;
  undefined8 local_120;
  undefined8 local_114;
  undefined8 local_108;
  undefined8 local_fc;
  ulonglong uVar23;
  
  uVar17 = 0;
  FDynamicMeshBuilder::FDynamicMeshBuilder
            (&this->MeshBuilder,param_3,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
  fVar29 = FKTaperedCapsuleElem::GetScaledCylinderLength(param_1,param_2);
  fVar44 = fVar29 * __real_3f000000;
  FKTaperedCapsuleElem::GetScaledRadii(param_1,param_2,&local_1f4,&local_1f8);
  uVar43 = __xmm_80000000800000008000000080000000;
  fVar45 = (float)((uint)fVar44 ^ __xmm_80000000800000008000000080000000);
  if (((float)((uint)fVar29 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) ||
     (fVar29 <= (float)((uint)(local_1f4 - local_1f8) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    if (local_1f4 <= local_1f8) {
      local_1f4 = local_1f8;
      fVar44 = fVar45;
    }
    else {
      local_1f8 = local_1f4;
      fVar45 = fVar44;
    }
  }
  pFVar16 = FMemory::Malloc(0xcc30,0);
  this->Verts = pFVar16;
  pFVar16 = FMemory::Malloc(0x630,0);
  fVar36 = local_1f4;
  fVar35 = local_1f8;
  fVar4 = __real_bf800000;
  fVar41 = __real_3f800000;
  this->ArcVerts = pFVar16;
  fVar30 = (((local_1f4 - local_1f8) * local_1f4) / fVar29) / local_1f4;
  fVar29 = fVar4;
  if ((fVar4 <= fVar30) && (fVar29 = fVar30, fVar41 <= fVar30)) {
    fVar29 = fVar41;
  }
  fVar29 = asinf(fVar29);
  fVar29 = __real_41880000 - (__real_41080000 - fVar29 * ___real_40ad291b);
  uVar23 = uVar17;
  uVar25 = uVar17;
  uVar28 = uVar17;
  do {
    pFVar16 = (FDynamicMeshVertex *)((longlong)this->ArcVerts->TextureCoordinate + (uVar25 - 0xc));
    if ((longlong)(int)fVar29 < (longlong)uVar28) {
      __libm_sse2_sincosf_();
      local_1d8._s_0.Z = extraout_XMM0_Da_00 * fVar35;
      local_1c8._s_0.Z = extraout_XMM0_Db_00 * fVar35;
      fVar41 = fVar45;
    }
    else {
      __libm_sse2_sincosf_();
      local_1c8._s_0.Z = extraout_XMM0_Db * fVar36;
      local_1d8._s_0.Z = extraout_XMM0_Da * fVar36;
      fVar41 = fVar44;
    }
    (pFVar16->Position).field0_0x0._s_0.X = 0.0;
    (pFVar16->Position).field0_0x0._s_0.Y = local_1d8._s_0.Z;
    (pFVar16->Position).field0_0x0._s_0.Z = local_1c8._s_0.Z + fVar41;
    local_1c8._0_8_ = (ulonglong)(uint)local_1d8._s_0.Z << 0x20;
    local_1d8._0_8_ = (ulonglong)((uint)local_1c8._s_0.Z ^ uVar43) << 0x20;
    local_1e8._0_8_ = 0x3f800000;
    local_1e8._s_0.Z = 0.0;
    FDynamicMeshVertex::SetTangents
              (pFVar16,(TVector<float> *)&local_1e8._s_0,(TVector<float> *)&local_1d8._s_0,
               (TVector<float> *)&local_1c8._s_0);
    fVar41 = (float)(int)uVar23 * __real_3d70f0f1;
    uVar21 = (int)uVar23 + 1;
    uVar23 = (ulonglong)uVar21;
    uVar28 = uVar28 + 1;
    pFVar16->TextureCoordinate[0].field0_0x0._s_0.X = 0.0;
    uVar25 = uVar25 + 0x58;
    pFVar16->TextureCoordinate[0].field0_0x0._s_0.Y = fVar41;
    fVar36 = local_1f4;
    fVar35 = local_1f8;
  } while ((int)uVar21 < 0x12);
  local_1f0 = 0;
  fStack_15c = 0.0;
  fStack_14c = 0.0;
  fStack_13c = 0.0;
  local_1e8._0_8_ = 0;
  fStack_16c = 1.0;
  fVar45 = ___xmm_3c0102043c0102043c0102043c010204;
  fVar44 = _UNK_151040074;
  fVar29 = _UNK_151040078;
  fVar41 = _UNK_15104007c;
  do {
    uVar18 = local_1e8._0_8_;
    fVar36 = 0.0;
    fVar30 = 0.0;
    lVar26 = 0;
    fVar46 = (float)(int)uVar17 * __real_3d000000;
    fVar35 = __real_43b40000;
    __vdecl_sincosf4();
    uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uStack_1ac = 0;
    uStack_19c = 0;
    uStack_18c = 0;
    local_1b8 = fVar36 * fVar35;
    uStack_17c = 0x3f800000;
    fStack_1b4 = fVar35 * extraout_XMM0_Db_01;
    local_1a8 = extraout_XMM0_Dc * extraout_XMM0_Da_01 * fVar36 - fVar30 * extraout_XMM0_Db_01;
    fStack_1a4 = extraout_XMM0_Dc * extraout_XMM0_Da_01 * extraout_XMM0_Db_01 + fVar30 * fVar36;
    fStack_1a0 = (float)((uint)(fVar35 * extraout_XMM0_Dc) ^ uVar43);
    fStack_190 = fVar30 * fVar35;
    local_188 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fStack_194 = fVar36 * extraout_XMM0_Dc - fVar30 * extraout_XMM0_Da_01 * extraout_XMM0_Db_01;
    fStack_180 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_198 = (float)((uint)(fVar30 * extraout_XMM0_Da_01 * fVar36 +
                              extraout_XMM0_Dc * extraout_XMM0_Db_01) ^ uVar43);
    fStack_184 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar20 = uVar18;
    do {
      pFVar16 = this->ArcVerts;
      lVar24 = uVar20 + lVar26;
      local_178 = *(float *)((longlong)pFVar16->TextureCoordinate + lVar26 + -0xc);
      fStack_174 = *(float *)((longlong)(pFVar16->TextureCoordinate + -1) + lVar26);
      fStack_170 = *(float *)((longlong)pFVar16->TextureCoordinate + lVar26 + -4);
      pFVar16 = this->Verts;
      auVar31._0_4_ = fStack_170 * local_198;
      auVar31._4_4_ = fStack_170 * fStack_194;
      auVar31._8_4_ = fStack_170 * fStack_190;
      auVar31._12_4_ = fStack_170 * 0.0;
      *(float *)((longlong)pFVar16->TextureCoordinate + uVar18 + -0xc) =
           fStack_174 * local_1a8 + local_178 * local_1b8 + auVar31._0_4_ +
           fStack_16c * (float)uVar5;
      *(float *)((longlong)(pFVar16->TextureCoordinate + -1) + uVar18) =
           fStack_174 * fStack_1a4 + local_178 * fStack_1b4 + auVar31._4_4_ +
           fStack_16c * (float)uVar6;
      *(float *)((longlong)pFVar16->TextureCoordinate + uVar18 + -4) =
           fStack_174 * fStack_1a0 + local_178 * extraout_XMM0_Da_01 + auVar31._8_4_ +
           fStack_16c * (float)uVar7;
      fVar36 = __real_437e0000;
      fVar35 = __real_3f000000;
      local_1c8._0_8_ = this->Verts;
      auVar31 = pmovsxbd(auVar31,*(undefined4 *)
                                  ((longlong)
                                   &((FPackedNormal *)(this->ArcVerts->TextureCoordinate + 8))[1].
                                    Vector + lVar26));
      local_168 = (float)auVar31._0_4_ * fVar45;
      fStack_164 = (float)auVar31._4_4_ * fVar44;
      local_138 = CONCAT44(fStack_164,local_168);
      fStack_160 = (float)auVar31._8_4_ * fVar29;
      fVar41 = (float)auVar31._12_4_ * fVar41;
      auVar34._0_4_ = fStack_160 * local_198;
      auVar34._4_4_ = fStack_160 * fStack_194;
      auVar34._8_4_ = fStack_160 * fStack_190;
      auVar34._12_4_ = fStack_160 * 0.0;
      auVar31 = pmovsxbd(auVar34,*(undefined4 *)
                                  ((longlong)
                                   &((FPackedNormal *)(this->ArcVerts->TextureCoordinate + 8))->
                                    Vector + lVar26));
      local_148 = (float)auVar31._0_4_ * fVar45;
      fStack_144 = (float)auVar31._4_4_ * fVar44;
      fStack_140 = (float)auVar31._8_4_ * fVar29;
      local_12c = CONCAT44(fStack_144,local_148);
      local_120 = CONCAT44(fStack_144,local_148);
      local_158 = (fStack_140 * fStack_164 - fStack_160 * fStack_144) * fVar41;
      fStack_154 = (fStack_160 * local_148 - fStack_140 * local_168) * fVar41;
      fStack_150 = (local_168 * fStack_144 - fStack_164 * local_148) * fVar41;
      fVar30 = fStack_154 * fStack_1a4 + local_158 * fStack_1b4 + fStack_150 * fStack_194 +
               fStack_14c * (float)uVar6;
      uVar21 = (int)ROUND((fStack_144 * local_1a8 + local_148 * local_1b8 + fStack_140 * local_198 +
                          fStack_13c * (float)uVar5) * __real_437e0000 + __real_3f000000) >> 1;
      fVar45 = (fStack_144 * fStack_1a4 + local_148 * fStack_1b4 + fStack_140 * fStack_194 +
               fStack_13c * (float)uVar6) * __real_437e0000;
      *(undefined1 *)
       ((longlong)
        &((FPackedNormal *)(((FDynamicMeshVertex *)local_1c8._0_8_)->TextureCoordinate + 8))->Vector
       + lVar24 + 3) = 0x7f;
      uVar43 = 0x7f;
      if ((int)uVar21 < 0x7f) {
        uVar43 = uVar21;
      }
      uVar21 = 0xffffff80;
      if (-0x80 < (int)uVar43) {
        uVar21 = uVar43 & 0xff;
      }
      *(char *)((longlong)
                &((FPackedNormal *)(((FDynamicMeshVertex *)local_1c8._0_8_)->TextureCoordinate + 8))
                 ->Vector + lVar24) = (char)uVar21;
      uVar9 = (int)ROUND(fVar45 + fVar35) >> 1;
      uVar43 = 0x7f;
      if ((int)uVar9 < 0x7f) {
        uVar43 = uVar9;
      }
      uVar9 = 0xffffff80;
      if (-0x80 < (int)uVar43) {
        uVar9 = uVar43 & 0xff;
      }
      *(char *)((longlong)
                &((FPackedNormal *)(((FDynamicMeshVertex *)local_1c8._0_8_)->TextureCoordinate + 8))
                 ->Vector + lVar24 + 1) = (char)uVar9;
      uVar10 = (int)ROUND((fStack_144 * fStack_1a0 + local_148 * extraout_XMM0_Da_01 +
                           fStack_140 * fStack_190 + fStack_13c * (float)uVar7) * fVar36 + fVar35)
               >> 1;
      uVar43 = 0x7f;
      if ((int)uVar10 < 0x7f) {
        uVar43 = uVar10;
      }
      uVar10 = 0xffffff80;
      if (-0x80 < (int)uVar43) {
        uVar10 = uVar43 & 0xff;
      }
      *(char *)((longlong)
                &((FPackedNormal *)(((FDynamicMeshVertex *)local_1c8._0_8_)->TextureCoordinate + 8))
                 ->Vector + lVar24 + 2) = (char)uVar10;
      uVar11 = (int)ROUND((fStack_164 * local_1a8 + local_168 * local_1b8 + auVar34._0_4_ +
                          fStack_15c * (float)uVar5) * fVar36 + fVar35) >> 1;
      uVar43 = 0x7f;
      if ((int)uVar11 < 0x7f) {
        uVar43 = uVar11;
      }
      uVar11 = 0xffffff80;
      if (-0x80 < (int)uVar43) {
        uVar11 = uVar43 & 0xff;
      }
      *(char *)((longlong)
                &((FPackedNormal *)(((FDynamicMeshVertex *)local_1c8._0_8_)->TextureCoordinate + 8))
                 [1].Vector + lVar24) = (char)uVar11;
      uVar12 = (int)ROUND((fStack_164 * fStack_1a4 + local_168 * fStack_1b4 + auVar34._4_4_ +
                          fStack_15c * (float)uVar6) * fVar36 + fVar35) >> 1;
      uVar43 = 0x7f;
      if ((int)uVar12 < 0x7f) {
        uVar43 = uVar12;
      }
      uVar12 = 0xffffff80;
      if (-0x80 < (int)uVar43) {
        uVar12 = uVar43 & 0xff;
      }
      *(char *)((longlong)
                &((FPackedNormal *)(((FDynamicMeshVertex *)local_1c8._0_8_)->TextureCoordinate + 8))
                 [1].Vector + lVar24 + 1) = (char)uVar12;
      uVar13 = (int)ROUND((fStack_164 * fStack_1a0 + local_168 * extraout_XMM0_Da_01 + auVar34._8_4_
                          + fStack_15c * (float)uVar7) * fVar36 + fVar35) >> 1;
      uVar43 = 0x7f;
      if ((int)uVar13 < 0x7f) {
        uVar43 = uVar13;
      }
      uVar13 = 0xffffff80;
      if (-0x80 < (int)uVar43) {
        uVar13 = uVar43 & 0xff;
      }
      *(char *)((longlong)
                &((FPackedNormal *)(((FDynamicMeshVertex *)local_1c8._0_8_)->TextureCoordinate + 8))
                 [1].Vector + lVar24 + 2) = (char)uVar13;
      fVar41 = _UNK_15104007c;
      fVar29 = _UNK_151040078;
      fVar44 = _UNK_151040074;
      fVar45 = ___xmm_3c0102043c0102043c0102043c010204;
      uVar14 = (int)ROUND((fStack_154 * local_1a8 + local_158 * local_1b8 + fStack_150 * local_198 +
                          fStack_14c * (float)uVar5) * fVar36 + fVar35) >> 1;
      auVar32._4_4_ = fVar30;
      auVar32._0_4_ = fVar30;
      auVar32._8_4_ = fVar30;
      auVar32._12_4_ = fVar30;
      auVar33._4_12_ = auVar32._4_12_;
      uVar43 = 0x7f;
      if ((int)uVar14 < 0x7f) {
        uVar43 = uVar14;
      }
      auVar33._0_4_ = fVar30 * fVar36 + fVar35;
      uVar14 = 0x7f;
      if ((int)ROUND(auVar33._0_4_) >> 1 < 0x7f) {
        uVar14 = (int)ROUND(auVar33._0_4_) >> 1;
      }
      uVar15 = (int)ROUND((fStack_154 * fStack_1a0 + local_158 * extraout_XMM0_Da_01 +
                           fStack_150 * fStack_190 + fStack_14c * (float)uVar7) * fVar36 + fVar35)
               >> 1;
      uVar19 = 0x7f;
      if ((int)uVar15 < 0x7f) {
        uVar19 = uVar15;
      }
      uVar15 = 0x80;
      if (-0x80 < (int)uVar19) {
        uVar15 = uVar19 & 0xff;
      }
      auVar31 = pmovsxbd(auVar33,ZEXT416(((uVar13 & 0xff | 0x7f00) << 8 | uVar12 & 0xff) << 8 |
                                         uVar11 & 0xff));
      uVar11 = 0x80;
      if (-0x80 < (int)uVar14) {
        uVar11 = uVar14 & 0xff;
      }
      fVar35 = (float)auVar31._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
      fVar36 = (float)auVar31._4_4_ * _UNK_151040074;
      uVar12 = 0x80;
      if (-0x80 < (int)uVar43) {
        uVar12 = uVar43 & 0xff;
      }
      local_fc = CONCAT44(fVar36,fVar35);
      dVar1 = (double)((float)auVar31._8_4_ * _UNK_151040078);
      auVar31 = pmovsxbd(auVar31,ZEXT416(((uVar15 | 0x7f00) << 8 | uVar11) << 8 | uVar12));
      fVar30 = (float)auVar31._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
      fVar37 = (float)auVar31._4_4_ * _UNK_151040074;
      auVar34 = pmovsxbd(auVar31,ZEXT416(((uVar10 & 0xff | 0x7f00) << 8 | uVar9 & 0xff) << 8 |
                                         uVar21 & 0xff));
      dVar2 = (double)fVar36;
      local_108 = CONCAT44(fVar37,fVar30);
      dVar40 = (double)((float)auVar31._8_4_ * _UNK_151040078);
      dVar42 = (double)fVar37;
      fVar37 = (float)auVar34._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
      fVar36 = (float)auVar34._4_4_ * _UNK_151040074;
      local_114 = CONCAT44(fVar36,fVar37);
      dVar38 = (double)((float)auVar34._8_4_ * _UNK_151040078);
      dVar39 = (double)fVar36;
      fVar36 = __real_3f800000;
      if (((dVar42 * dVar1 - dVar2 * dVar40) * (double)fVar37 -
          (dVar39 * dVar1 - dVar2 * dVar38) * (double)fVar30) +
          (dVar39 * dVar40 - dVar42 * dVar38) * (double)fVar35 < __real_0000000000000000) {
        fVar36 = fVar4;
      }
      uVar8 = 0x7f;
      if (fVar36 < 0.0) {
        uVar8 = 0x81;
      }
      *(undefined1 *)
       ((longlong)
        &((FPackedNormal *)(((FDynamicMeshVertex *)local_1c8._0_8_)->TextureCoordinate + 8))[1].
         Vector + lVar24 + 3) = uVar8;
      *(float *)((longlong)&this->Verts->TextureCoordinate[0].field0_0x0 + lVar24) = fVar46;
      lVar3 = lVar26 + 4;
      lVar26 = lVar26 + 0x58;
      *(undefined4 *)((longlong)&this->Verts->TextureCoordinate[0].field0_0x0 + lVar24 + 4) =
           *(undefined4 *)((longlong)&this->ArcVerts->TextureCoordinate[0].field0_0x0 + lVar3);
      uVar18 = uVar18 + 0x58;
      uVar20 = local_1e8._0_8_;
    } while (lVar26 < 0x630);
    local_1e8._0_8_ = local_1e8._0_8_ + 0x630;
    local_1f0 = local_1f0 + 1;
    uVar17 = (ulonglong)local_1f0;
    uVar43 = __xmm_80000000800000008000000080000000;
    local_1d8._0_8_ = uVar18;
  } while ((int)local_1f0 < 0x21);
  lVar24 = 0x252;
  lVar26 = 0;
  do {
    FDynamicMeshBuilder::AddVertex
              (&this->MeshBuilder,
               (FDynamicMeshVertex *)((longlong)this->Verts->TextureCoordinate + lVar26 + -0xc));
    lVar26 = lVar26 + 0x58;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  iVar27 = 1;
  do {
    lVar26 = 0x11;
    iVar22 = iVar27;
    do {
      FDynamicMeshBuilder::AddTriangle(&this->MeshBuilder,iVar22 + -1,iVar22 + 0x11,iVar22);
      FDynamicMeshBuilder::AddTriangle(&this->MeshBuilder,iVar22 + 0x11,iVar22 + 0x12,iVar22);
      iVar22 = iVar22 + 1;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    iVar27 = iVar27 + 0x12;
  } while (iVar27 < 0x241);
  return this;
}

