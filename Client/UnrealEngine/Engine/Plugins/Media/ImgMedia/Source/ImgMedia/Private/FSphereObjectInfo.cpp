// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 4

// operator() @ 14ea3cf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``anonymous_namespace'::FSphereObjectInfo::CalculateVisibleTiles'::__l18::<lambda_1>::operator()
          (void *this,int param_1)

{
  uchar auVar1 [16];
  uchar auVar2 [16];
  uint uVar3;
  int iVar4;
  float *pfVar5;
  uchar (*pauVar6) [16];
  TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
  *this_00;
  ForElementType<FSetElementId> FVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  double dVar19;
  void *pvVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  FImgMediaTileSelection *pFVar24;
  uint uVar25;
  ForElementType<FSetElementId> FVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double extraout_XMM0_Qa_02;
  double extraout_XMM0_Qa_03;
  double extraout_XMM0_Qa_04;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double extraout_XMM0_Qb_01;
  double extraout_XMM0_Qb_02;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double extraout_XMM0_Qb_03;
  double extraout_XMM0_Qb_04;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  undefined1 auStackY_1e8 [32];
  float local_1b8;
  float local_1b4;
  float local_1b0 [2];
  undefined8 local_1a8;
  int local_1a0;
  float local_19c;
  undefined8 local_198;
  float local_190;
  longlong *local_188;
  FSparseArrayAllocationInfo local_180;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  FImgMediaTileSelection local_128;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_188 = (longlong *)((longlong)this + 8);
  local_19c = (float)param_1;
  local_1b8 = 0.0;
  fVar66 = 0.0;
  if (**(char **)this != '\0') {
    fVar38 = __real_3f800000 / *(float *)(*local_188 + 4);
    fVar66 = fVar38 * local_19c;
    fVar66 = ((fVar66 - __real_3f000000) + fVar66) - __real_3f000000;
    fVar38 = (local_19c + __real_3f800000) * fVar38;
    local_1b8 = ((fVar38 - __real_3f000000) + fVar38) - __real_3f000000;
  }
  iVar28 = 0;
  if (0 < **(int **)((longlong)this + 0x10)) {
    local_190 = local_19c + __real_3f800000;
    uVar25 = __xmm_80000000800000008000000080000000;
    local_1a0 = param_1;
    do {
      fVar47 = __real_3f800000 / ((float *)*local_188)[1];
      fVar38 = __real_3f800000 / *(float *)*local_188;
      fVar39 = (float)iVar28 * fVar38;
      fVar48 = fVar47 * local_190;
      fVar47 = fVar47 * local_19c;
      fVar38 = ((float)iVar28 + __real_3f800000) * fVar38;
      local_1b4 = **(float **)((longlong)this + 0x18);
      pfVar5 = *(float **)((longlong)this + 0x20);
      local_198 = CONCAT44((fVar48 + fVar47) * __real_3f000000,(fVar38 + fVar39) * __real_3f000000);
      if ((((fVar39 <= *pfVar5) && (fVar47 <= pfVar5[1])) && (*pfVar5 < fVar38)) &&
         (pfVar5[1] < fVar48)) {
        local_198 = *(undefined8 *)pfVar5;
        local_1b4 = 0.0;
      }
      pauVar6 = *(uchar (**) [16])((longlong)this + 0x38);
      local_1a8 = local_198;
      __libm_sse2_sincos_();
      __libm_sse2_sincos_();
      dVar17 = *(double *)(pauVar6[1] + 8);
      local_128.Tiles.AllocatorInstance.InlineData = *pauVar6;
      dVar9 = (double)*(float *)(*(longlong *)((longlong)this + 0x28) + 0x20);
      local_158._s_0.Z = extraout_XMM0_Qb * dVar9;
      auVar1 = pauVar6[1];
      dVar15 = local_158._s_0.Z * *(double *)pauVar6[5];
      dVar16 = *(double *)(pauVar6[5] + 8) * 0.0;
      auVar2 = *pauVar6;
      dVar11 = *(double *)pauVar6[4] * extraout_XMM0_Qb_00 * extraout_XMM0_Qa * dVar9;
      dVar12 = *(double *)(pauVar6[4] + 8) * extraout_XMM0_Qa_00 * extraout_XMM0_Qa * dVar9;
      uVar56 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar40 = blendpd((undefined1  [16])local_128.Tiles.AllocatorInstance.InlineData,
                        (undefined1  [16])auVar1,2);
      auVar57._8_4_ = SUB84(dVar12,0);
      auVar57._0_8_ = dVar11;
      auVar57._12_4_ = uVar56;
      dVar9 = auVar1._0_8_;
      auVar58._0_8_ =
           auVar57._8_8_ * local_128.Tiles.AllocatorInstance.InlineData._0_8_ -
           local_128.Tiles.AllocatorInstance.InlineData._8_8_ * dVar11;
      auVar58._8_8_ = dVar15 * local_128.Tiles.AllocatorInstance.InlineData._8_8_ - dVar9 * dVar12;
      auVar49._8_4_ = SUB84(dVar12,0);
      auVar49._0_8_ = dVar11;
      auVar49._12_4_ = uVar56;
      auVar30._8_4_ = SUB84(dVar16,0);
      auVar30._0_8_ = dVar15;
      auVar30._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      auVar30 = blendpd(auVar49,auVar30,2);
      auVar31._0_8_ = auVar30._0_8_ * dVar9 - auVar40._0_8_ * dVar15;
      auVar31._8_8_ = auVar30._8_8_ * auVar1._8_8_ - auVar40._8_8_ * dVar16;
      dVar16 = auVar58._8_8_ + auVar58._8_8_;
      dVar10 = auVar31._0_8_ + auVar31._0_8_;
      uVar56 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar30 = blendpd(auVar58,auVar31,2);
      auVar50._8_4_ = SUB84(dVar10,0);
      auVar50._0_8_ = dVar16;
      auVar50._12_4_ = uVar56;
      auVar41._8_4_ = SUB84(dVar10,0);
      auVar41._0_8_ = dVar16;
      auVar41._12_4_ = uVar56;
      auVar59._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar59._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar49 = blendpd((undefined1  [16])auVar2,(undefined1  [16])auVar1,2);
      auVar30 = blendpd(auVar41,auVar59,2);
      auVar51._0_8_ = auVar50._8_8_ * auVar2._0_8_ - auVar2._8_8_ * dVar16;
      auVar51._8_8_ = auVar59._0_8_ * auVar2._8_8_ - dVar9 * dVar10;
      auVar40._8_4_ = SUB84(auVar51._8_8_,0);
      auVar40._0_8_ = auVar51._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
      auVar42._0_8_ = auVar30._0_8_ * dVar9 - auVar49._0_8_ * auVar59._0_8_;
      auVar42._8_8_ = auVar30._8_8_ * auVar1._8_8_ - auVar49._8_8_ * auVar59._8_8_;
      dVar9 = dVar10 * dVar17 + dVar12 + auVar42._0_8_ + *(double *)(pauVar6[2] + 8);
      auVar30 = blendpd(auVar51,auVar42,2);
      local_170._8_4_ = SUB84(dVar9,0);
      local_170._0_8_ = dVar16 * dVar17 + dVar11 + auVar40._8_8_ + *(double *)pauVar6[2];
      local_170._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_170._s_0.Z = auVar59._0_8_ * dVar17 + dVar15 + auVar30._0_8_ + *(double *)pauVar6[3];
      bVar21 = FConvexVolume::IntersectSphere
                         (*(FConvexVolume **)((longlong)this + 0x40),
                          (TVector<double> *)&local_170._s_0,&local_1b4);
      if (bVar21) {
        if ((**(char **)this != '\0') &&
           ((fVar66 < (float)((uint)**(float **)((longlong)this + 0x48) ^ uVar25) ||
            (**(float **)((longlong)this + 0x48) < local_1b8)))) {
          **(undefined1 **)((longlong)this + 0x50) = 1;
          iVar22 = **(int **)((longlong)this + 0x60);
          if (**(int **)((longlong)this + 0x60) < **(int **)((longlong)this + 0x58)) {
            iVar22 = **(int **)((longlong)this + 0x58);
          }
          *(int *)(*(longlong *)((longlong)this + 0x28) + 0x24) = iVar22;
        }
        pauVar6 = *(uchar (**) [16])((longlong)this + 0x38);
        __libm_sse2_sincos_();
        __libm_sse2_sincos_();
        auVar1 = *pauVar6;
        dVar19 = *(double *)(pauVar6[1] + 8);
        local_128.Tiles.AllocatorInstance.InlineData = *pauVar6;
        dVar17 = (double)*(float *)(*(longlong *)((longlong)this + 0x28) + 0x20);
        local_128.Tiles.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)(extraout_XMM0_Qb_01 * dVar17);
        dVar15 = (double)local_128.Tiles.AllocatorInstance.SecondaryData * *(double *)pauVar6[5];
        dVar16 = *(double *)(pauVar6[5] + 8) * 0.0;
        dVar11 = *(double *)pauVar6[4] * extraout_XMM0_Qb_02 * extraout_XMM0_Qa_01 * dVar17;
        dVar12 = *(double *)(pauVar6[4] + 8) * extraout_XMM0_Qa_02 * extraout_XMM0_Qa_01 * dVar17;
        uVar56 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar2 = pauVar6[1];
        auVar49 = blendpd((undefined1  [16])local_128.Tiles.AllocatorInstance.InlineData,
                          (undefined1  [16])auVar2,2);
        auVar60._8_4_ = SUB84(dVar12,0);
        auVar60._0_8_ = dVar11;
        auVar60._12_4_ = uVar56;
        dVar9 = auVar2._0_8_;
        auVar61._0_8_ =
             auVar60._8_8_ * local_128.Tiles.AllocatorInstance.InlineData._0_8_ -
             local_128.Tiles.AllocatorInstance.InlineData._8_8_ * dVar11;
        auVar61._8_8_ = dVar15 * local_128.Tiles.AllocatorInstance.InlineData._8_8_ - dVar9 * dVar12
        ;
        auVar32._8_4_ = SUB84(dVar12,0);
        auVar32._0_8_ = dVar11;
        auVar32._12_4_ = uVar56;
        auVar13._8_4_ = SUB84(dVar16,0);
        auVar13._0_8_ = dVar15;
        auVar13._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        auVar30 = blendpd(auVar32,auVar13,2);
        auVar33._0_8_ = auVar30._0_8_ * dVar9 - auVar49._0_8_ * dVar15;
        auVar33._8_8_ = auVar30._8_8_ * auVar2._8_8_ - auVar49._8_8_ * dVar16;
        auVar30 = blendpd(auVar61,auVar33,2);
        dVar16 = auVar61._8_8_ + auVar61._8_8_;
        dVar10 = auVar33._0_8_ + auVar33._0_8_;
        uVar56 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar62._0_8_ = auVar30._0_8_ + auVar30._0_8_;
        auVar62._8_8_ = auVar30._8_8_ + auVar30._8_8_;
        auVar52._8_4_ = SUB84(dVar10,0);
        auVar52._0_8_ = dVar16;
        auVar52._12_4_ = uVar56;
        auVar43._8_4_ = SUB84(dVar10,0);
        auVar43._0_8_ = dVar16;
        auVar43._12_4_ = uVar56;
        auVar30 = blendpd(auVar43,auVar62,2);
        auVar53._0_8_ = auVar52._8_8_ * auVar1._0_8_ - auVar1._8_8_ * dVar16;
        auVar53._8_8_ = auVar62._0_8_ * auVar1._8_8_ - dVar9 * dVar10;
        auVar49 = blendpd((undefined1  [16])auVar1,(undefined1  [16])auVar2,2);
        auVar44._0_8_ = auVar30._0_8_ * dVar9 - auVar49._0_8_ * auVar62._0_8_;
        auVar44._8_8_ = auVar30._8_8_ * auVar2._8_8_ - auVar49._8_8_ * auVar62._8_8_;
        auVar34._8_4_ = SUB84(auVar53._8_8_,0);
        auVar34._0_8_ = auVar53._0_8_;
        auVar34._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
        dVar9 = dVar10 * dVar19 + dVar12 + auVar44._0_8_ + *(double *)(pauVar6[2] + 8);
        auVar30 = blendpd(auVar53,auVar44,2);
        local_158._s_0.Z = auVar62._0_8_ * dVar19 + dVar15 + auVar30._0_8_ + *(double *)pauVar6[3];
        local_158._8_4_ = SUB84(dVar9,0);
        local_158._0_8_ = dVar16 * dVar19 + dVar11 + auVar34._8_8_ + *(double *)pauVar6[2];
        local_158._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        __libm_sse2_sincos_();
        __libm_sse2_sincos_();
        auVar1 = *pauVar6;
        dVar19 = *(double *)(pauVar6[1] + 8);
        local_128.Tiles.AllocatorInstance.InlineData = *pauVar6;
        local_128.Tiles.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)(extraout_XMM0_Qb_03 * dVar17);
        dVar15 = (double)local_128.Tiles.AllocatorInstance.SecondaryData * *(double *)pauVar6[5];
        dVar16 = *(double *)(pauVar6[5] + 8) * 0.0;
        dVar11 = *(double *)pauVar6[4] * extraout_XMM0_Qb_04 * extraout_XMM0_Qa_03 * dVar17;
        dVar12 = *(double *)(pauVar6[4] + 8) * extraout_XMM0_Qa_04 * extraout_XMM0_Qa_03 * dVar17;
        uVar56 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar2 = pauVar6[1];
        auVar49 = blendpd((undefined1  [16])local_128.Tiles.AllocatorInstance.InlineData,
                          (undefined1  [16])auVar2,2);
        auVar63._8_4_ = SUB84(dVar12,0);
        auVar63._0_8_ = dVar11;
        auVar63._12_4_ = uVar56;
        dVar9 = auVar2._0_8_;
        auVar64._0_8_ =
             auVar63._8_8_ * local_128.Tiles.AllocatorInstance.InlineData._0_8_ -
             local_128.Tiles.AllocatorInstance.InlineData._8_8_ * dVar11;
        auVar64._8_8_ = dVar15 * local_128.Tiles.AllocatorInstance.InlineData._8_8_ - dVar9 * dVar12
        ;
        auVar35._8_4_ = SUB84(dVar12,0);
        auVar35._0_8_ = dVar11;
        auVar35._12_4_ = uVar56;
        auVar14._8_4_ = SUB84(dVar16,0);
        auVar14._0_8_ = dVar15;
        auVar14._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        auVar30 = blendpd(auVar35,auVar14,2);
        auVar36._0_8_ = auVar30._0_8_ * dVar9 - auVar49._0_8_ * dVar15;
        auVar36._8_8_ = auVar30._8_8_ * auVar2._8_8_ - auVar49._8_8_ * dVar16;
        auVar30 = blendpd(auVar64,auVar36,2);
        dVar16 = auVar64._8_8_ + auVar64._8_8_;
        dVar10 = auVar36._0_8_ + auVar36._0_8_;
        uVar56 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar65._0_8_ = auVar30._0_8_ + auVar30._0_8_;
        auVar65._8_8_ = auVar30._8_8_ + auVar30._8_8_;
        auVar54._8_4_ = SUB84(dVar10,0);
        auVar54._0_8_ = dVar16;
        auVar54._12_4_ = uVar56;
        auVar45._8_4_ = SUB84(dVar10,0);
        auVar45._0_8_ = dVar16;
        auVar45._12_4_ = uVar56;
        auVar49 = blendpd((undefined1  [16])auVar1,(undefined1  [16])auVar2,2);
        auVar30 = blendpd(auVar45,auVar65,2);
        auVar55._0_8_ = auVar54._8_8_ * auVar1._0_8_ - auVar1._8_8_ * dVar16;
        auVar55._8_8_ = auVar65._0_8_ * auVar1._8_8_ - dVar9 * dVar10;
        auVar37._8_4_ = SUB84(auVar55._8_8_,0);
        auVar37._0_8_ = auVar55._0_8_;
        auVar37._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
        auVar46._0_8_ = auVar30._0_8_ * dVar9 - auVar49._0_8_ * auVar65._0_8_;
        auVar46._8_8_ = auVar30._8_8_ * auVar2._8_8_ - auVar49._8_8_ * auVar65._8_8_;
        dVar9 = dVar19 * dVar10 + dVar12 + auVar46._0_8_ + *(double *)(pauVar6[2] + 8);
        auVar30 = blendpd(auVar55,auVar46,2);
        local_140._8_4_ = SUB84(dVar9,0);
        local_140._0_8_ = dVar19 * dVar16 + dVar11 + auVar37._8_8_ + *(double *)pauVar6[2];
        local_140._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_140._s_0.Z = dVar19 * auVar65._0_8_ + dVar15 + auVar30._0_8_ + *(double *)pauVar6[3];
        bVar21 = ::`anonymous_namespace'::CalculateMipLevelAniso
                           (*(FImgMediaViewInfo **)((longlong)this + 0x78),
                            (TVector<double> *)&local_170._s_0,(TVector<double> *)&local_158._s_0,
                            (TVector<double> *)&local_140._s_0,local_1b0);
        uVar25 = __xmm_80000000800000008000000080000000;
        if (bVar21) {
          local_1b0[0] = local_1b0[0] +
                         **(float **)((longlong)this + 0x80) +
                         *(float *)(*(longlong *)((longlong)this + 0x78) + 0x140);
          fVar38 = local_1b0[0] - **(float **)((longlong)this + 0x88);
          fVar39 = **(float **)((longlong)this + 0x88) + local_1b0[0];
          uVar25 = (int)ROUND((fVar38 + fVar38) - __real_3f000000) >> 1;
          uVar27 = -((int)ROUND(__real_bf000000 - (fVar39 + fVar39)) >> 1);
          if ((param_1 == 0) || (param_1 == *(int *)(*(longlong *)((longlong)this + 0x10) + 4) + -1)
             ) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if ((**(char **)this == '\0') && (bVar21)) {
            uVar25 = uVar25 - 1;
            uVar27 = uVar27 + 1;
          }
          uVar3 = **(uint **)((longlong)this + 0x90);
          uVar18 = uVar3;
          if ((int)uVar25 < (int)uVar3) {
            uVar18 = uVar25;
          }
          uVar29 = 0;
          if (0 < (int)uVar18) {
            uVar29 = uVar18;
          }
          if ((int)uVar27 < (int)uVar3) {
            uVar3 = uVar27;
          }
          uVar25 = __xmm_80000000800000008000000080000000;
          uVar27 = 0;
          if (0 < (int)uVar3) {
            uVar27 = uVar3;
          }
          for (; uVar3 = uVar25, uVar25 = __xmm_80000000800000008000000080000000,
              __xmm_80000000800000008000000080000000 = uVar3, (int)uVar29 <= (int)uVar27;
              uVar29 = uVar29 + 1) {
            if ((((**(char **)this == '\0') || (**(int **)((longlong)this + 0x58) <= (int)uVar29))
                || (**(char **)((longlong)this + 0x50) == '\0')) ||
               (((float)((uint)**(float **)((longlong)this + 0x98) ^ uVar3) <= fVar66 &&
                (local_1b8 <= **(float **)((longlong)this + 0x98))))) {
              this_00 = *(TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                          **)((longlong)this + 0xa0);
              if (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34)
              {
LAB_14ea3d7db:
                pFVar24 = FImgMediaTileSelection::CreateForTargetMipLevel
                                    (&local_128,
                                     (TIntPoint<int> *)(*(longlong *)((longlong)this + 0xa8) + 8),
                                     (TIntPoint<int> *)(*(longlong *)((longlong)this + 0xa8) + 0x1c)
                                     ,uVar29,false);
                iVar22 = *(int *)&(this_00->Elements).field_0x34;
                if (iVar22 == 0) {
                  iVar23 = UE::Core::Private::
                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x50,8,1,(ForAnyElementType *)this_00,
                                      (int *)&(this_00->Elements).field_0x8,
                                      (int *)&(this_00->Elements).field_0xc);
                  TBitArray<FDefaultBitArrayAllocator>::Add
                            ((TBitArray<FDefaultBitArrayAllocator> *)&(this_00->Elements).field_0x10
                             ,false);
                }
                else {
                  iVar23 = *(int *)&(this_00->Elements).field_0x30;
                  lVar8 = *(longlong *)&this_00->Elements;
                  iVar22 = iVar22 + -1;
                  iVar4 = *(int *)(lVar8 + 4 + (longlong)iVar23 * 0x50);
                  *(int *)&(this_00->Elements).field_0x30 = iVar4;
                  *(int *)&(this_00->Elements).field_0x34 = iVar22;
                  if (iVar22 != 0) {
                    *(undefined4 *)(lVar8 + (longlong)iVar4 * 0x50) = 0xffffffff;
                  }
                }
                TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this_00,&local_180,iVar23);
                pvVar20 = local_180.Pointer;
                if (local_180.Pointer !=
                    (TSparseSetElement<TTuple<int,FImgMediaTileSelection>_> *)0x0) {
                  *(uint *)local_180.Pointer = uVar29;
                  FImgMediaTileSelection::FImgMediaTileSelection
                            ((FImgMediaTileSelection *)((longlong)local_180.Pointer + 8),pFVar24);
                  *(undefined4 *)((longlong)pvVar20 + 0x48) = 0xffffffff;
                }
                uVar25 = *(uint *)pvVar20;
                local_1a8 = CONCAT44(local_1a8._4_4_,local_180.Index);
                bVar21 = TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                         ::TryReplaceExisting(this_00,uVar25,pvVar20,(int *)&local_1a8,(bool *)0x0);
                if (!bVar21) {
                  TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                  ::RehashOrLink(this_00,uVar25,pvVar20,(int)local_1a8);
                }
                if (local_128.Tiles.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_128.Tiles.AllocatorInstance.SecondaryData);
                }
              }
              else {
                FVar7 = (this_00->Hash).SecondaryData;
                FVar26 = (ForElementType<FSetElementId>)&this_00->Hash;
                if (FVar7 != (ForElementType<FSetElementId>)0x0) {
                  FVar26 = FVar7;
                }
                iVar22 = *(int *)((longlong)FVar26 +
                                 (ulonglong)(this_00->HashSize - 1U & uVar29) * 4);
                if (iVar22 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar22 * 0x50) ==
                        uVar29) goto LAB_14ea3d7d1;
                    iVar22 = *(int *)(*(longlong *)&this_00->Elements + 0x48 +
                                     (longlong)iVar22 * 0x50);
                  } while (iVar22 != -1);
                }
                iVar22 = -1;
LAB_14ea3d7d1:
                if (iVar22 == -1) goto LAB_14ea3d7db;
              }
              iVar22 = 1 << ((byte)uVar29 & 0x1f);
              pFVar24 = TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                        ::FindChecked(*(TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                                        **)((longlong)this + 0xa0),uVar29);
              FImgMediaTileSelection::SetVisible(pFVar24,iVar28 / iVar22,local_1a0 / iVar22);
            }
            param_1 = local_1a0;
            uVar25 = __xmm_80000000800000008000000080000000;
            __xmm_80000000800000008000000080000000 = uVar3;
          }
        }
      }
      iVar28 = iVar28 + 1;
    } while (iVar28 < **(int **)((longlong)this + 0x10));
  }
  return;
}

// CalculateVisibleTiles @ 14ea44a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
_anon_FB6FC205::FSphereObjectInfo::CalculateVisibleTiles
          (FSphereObjectInfo *this,TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_> *param_1,
          FSequenceInfo *param_2,
          TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *param_3)

{
  FMediaTextureTilingDescription *pFVar1;
  int iVar2;
  longlong lVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  TIntPoint<int>_u_0_s_0 TVar5;
  double dVar6;
  float fVar7;
  atomic<int> aVar8;
  float fVar9;
  TConsoleVariableData<float> *pTVar10;
  TVector2<float>_u_0 TVar11;
  FSequenceInfo *pFVar12;
  bool bVar13;
  atomic<int> aVar14;
  USceneComponent *this_00;
  ulonglong uVar15;
  FImgMediaViewInfo *pFVar16;
  int iVar17;
  FImgMediaViewInfo *pFVar18;
  TReferenceControllerBase<1> *pTVar19;
  double dVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStack_498 [32];
  TVector<double> *local_478;
  char local_468;
  undefined1 local_467;
  undefined1 local_466 [6];
  undefined8 local_460;
  int local_458;
  int local_454;
  int local_450;
  float local_44c;
  FSequenceInfo *local_448;
  float local_440;
  float local_43c;
  undefined4 local_438;
  float local_434;
  int local_430 [2];
  FMediaTextureTilingDescription *local_428;
  uint local_420;
  undefined1 local_418 [8];
  USceneComponent *local_410;
  FImgMediaViewInfo *local_408;
  TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_> *local_400;
  TReferenceControllerBase<1> *local_3f8;
  TVector2<float> local_3f0;
  TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
  *local_3e8;
  TReferenceControllerBase<1> *local_3e0;
  char *local_3d8;
  undefined8 *local_3d0;
  FMediaTextureTilingDescription *local_3c8;
  float *local_3c0;
  TVector2<float> *local_3b8;
  FSphereObjectInfo *local_3b0;
  undefined1 *local_3a8;
  TVector<double>_u_0 *local_3a0;
  FConvexVolume *local_398;
  FSequenceInfo **local_390;
  undefined1 *local_388;
  int *local_380;
  int *local_378;
  float *local_370;
  float *local_368;
  FImgMediaViewInfo *local_360;
  undefined4 *local_358;
  float *local_350;
  int *local_348;
  FMediaTextureTilingDescription **local_340;
  TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
  *local_338;
  FSequenceInfo *local_330;
  TVector<double>_u_0 local_308;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  FConvexVolume local_2a8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_498;
  local_448 = param_2;
  local_400 = param_1;
  local_3e8 = param_3;
  this_00 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (this_00 == (USceneComponent *)0x0) {
    return;
  }
  local_410 = this_00;
  bVar13 = USceneComponent::ShouldRender(this_00);
  if (!bVar13) {
    return;
  }
  local_3e0 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar19 = local_3e0;
  if (local_3e0 == (TReferenceControllerBase<1> *)0x0) goto LAB_14ea44ae1;
  aVar8 = local_3e0->SharedReferenceCount;
  do {
    if (aVar8 == (atomic<int>)0x0) {
      pTVar19 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14ea44ae1;
    }
    LOCK();
    aVar14 = local_3e0->SharedReferenceCount;
    bVar13 = aVar8 == aVar14;
    if (bVar13) {
      local_3e0->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
      aVar14 = aVar8;
    }
    pTVar10 = CVarImgMediaMipLevelPadding.Ref;
    UNLOCK();
    aVar8 = aVar14;
  } while (!bVar13);
  lVar3 = this->_padding_;
  if ((lVar3 == 0) || (param_1->ArrayNum == 0)) goto LAB_14ea44ae1;
  local_418._4_4_ = (undefined4)*(double *)(lVar3 + 0x18);
  local_418._0_4_ = (undefined4)*(double *)(lVar3 + 0x10);
  local_438 = *(undefined4 *)(lVar3 + 8);
  bVar13 = IsInParallelGameThread();
  if (bVar13) {
LAB_14ea44ba2:
    uVar15 = 0;
  }
  else {
    bVar13 = IsInGameThread();
    uVar15 = 4;
    if (bVar13) goto LAB_14ea44ba2;
  }
  pFVar12 = local_448;
  fVar9 = __real_bf000000;
  local_43c = __real_3f800000;
  local_434 = *(float *)((longlong)pTVar10->ShadowedValue + uVar15);
  if (local_434 <= 0.0) {
    local_434 = 0.0;
  }
  local_430[0] = param_2->NumMipLevels + -1;
  local_308._s_0.X = (this_00->ComponentToWorld).Rotation.XY.m128d_f64[0];
  local_308._s_0.Y = (this_00->ComponentToWorld).Rotation.XY.m128d_f64[1];
  local_308._s_0.Z = (this_00->ComponentToWorld).Rotation.ZW.m128d_f64[0];
  dStack_2f0 = (this_00->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  local_2e8 = (this_00->ComponentToWorld).Translation.XY.m128d_f64[0];
  dStack_2e0 = (this_00->ComponentToWorld).Translation.XY.m128d_f64[1];
  local_2d8 = (this_00->ComponentToWorld).Translation.ZW.m128d_f64[0];
  dStack_2d0 = (this_00->ComponentToWorld).Translation.ZW.m128d_f64[1];
  local_2c8 = (this_00->ComponentToWorld).Scale3D.XY.m128d_f64[0];
  dStack_2c0 = (this_00->ComponentToWorld).Scale3D.XY.m128d_f64[1];
  local_2b8 = (this_00->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
  dStack_2b0 = (this_00->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
  pFVar1 = &param_2->TilingDescription;
  if (((param_2->TilingDescription).TileNum.field0_0x0._s_0.X < 2) &&
     ((param_2->TilingDescription).TileNum.field0_0x0._s_0.Y < 2)) {
    local_460 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
    TVar11._s_0 = local_460;
    local_460._4_4_ = UE::Math::TVector2<float>::UnitVector.field0_0x0._4_4_;
    local_460._0_4_ = UE::Math::TVector2<float>::UnitVector.field0_0x0._0_4_;
    fVar27 = (float)local_460._4_4_;
    fVar26 = (float)(undefined4)local_460;
    local_460 = TVar11._s_0;
  }
  else {
    TVar4 = (param_2->Dim).field0_0x0._s_0;
    TVar5 = (param_2->TilingDescription).TileSize.field0_0x0._s_0;
    fVar26 = (float)TVar4.X / (float)TVar5.X;
    fVar27 = (float)TVar4.Y / (float)TVar5.Y;
    local_460._4_4_ = fVar27;
    local_460._0_4_ = fVar26;
  }
  local_454 = -1;
  local_468 = '\0';
  local_440 = __real_3f800000 / (float)(param_2->Dim).field0_0x0._s_0.X;
  iVar17 = (param_2->Dim).field0_0x0._s_0.Y;
  this->MipLevelToUpscale = -1;
  local_3f8 = (TReferenceControllerBase<1> *)this->_padding_;
  local_43c = local_43c / (float)iVar17;
  dVar25 = (double)(this->DefaultSphereRadius * __real_40c90fdb);
  fVar7 = fVar26;
  if (fVar26 <= fVar27) {
    fVar7 = fVar27;
  }
  dVar24 = __real_3ff0000000000000 / (double)fVar7;
  dVar6 = dStack_2c0 * dVar25 * dVar24;
  local_450 = -((int)ROUND(fVar9 - (fVar26 * fVar27 + fVar26 * fVar27)) >> 1);
  dVar20 = local_2c8 * dVar25 * dVar24;
  dVar24 = local_2b8 * dVar25 * dVar24;
  uVar21 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar23 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar28 = SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar29 = (uint)((ulonglong)dVar20 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar23,uVar21) <= (double)CONCAT44(uVar29,uVar28)) {
    uVar21 = uVar28;
    uVar23 = uVar29;
  }
  uVar28 = SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar29 = (uint)((ulonglong)dVar24 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar23,uVar21) <= (double)CONCAT44(uVar29,uVar28)) {
    uVar21 = uVar28;
    uVar23 = uVar29;
  }
  local_44c = (float)((double)CONCAT44(uVar23,uVar21) * ___real_3fe6a09e60000000);
  if (local_3f8 != (TReferenceControllerBase<1> *)0x0) {
    aVar8 = local_3f8->SharedReferenceCount;
    do {
      if (aVar8 == (atomic<int>)0x0) {
        local_3f8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea44d97;
      }
      LOCK();
      aVar14 = local_3f8->SharedReferenceCount;
      bVar13 = aVar8 == aVar14;
      if (bVar13) {
        local_3f8->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar14 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar14;
    } while (!bVar13);
    lVar3 = this->_padding_;
    if (lVar3 != 0) {
      local_454 = *(int *)(lVar3 + 0x20);
      local_468 = *(char *)(lVar3 + 0x24);
      this->MipLevelToUpscale = local_454;
    }
  }
LAB_14ea44d97:
  fVar7 = __real_3bb60b61;
  dVar6 = __real_3ff71547652b82fe;
  dVar25 = __real_bfe0000000000000;
  fVar27 = __real_41a00000;
  fVar26 = __real_3f000000;
  local_420 = local_400->ArrayNum;
  uVar15 = (ulonglong)(int)local_420;
  pFVar16 = (FImgMediaViewInfo *)(local_400->AllocatorInstance).Data;
  pFVar18 = pFVar16 + uVar15;
  local_428 = pFVar1;
  local_408 = pFVar18;
  while( true ) {
    if (local_400->ArrayNum != (int)uVar15) {
      `TCheckedPointerIterator<FImgMediaViewInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_466);
    }
    if (pFVar16 == pFVar18) break;
    bVar13 = ::`anonymous_namespace'::IsPrimitiveComponentHidden
                       ((FPrimitiveComponentId)this_00[1].AttachChildren.ArrayMax,pFVar16);
    if (!bVar13) {
      local_2a8.Planes.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Math::TPlane<double>_>)0x0;
      local_2a8.Planes.ArrayNum = 0;
      local_2a8.Planes.ArrayMax = 6;
      local_2a8.PermutedPlanes.AllocatorInstance.SecondaryData =
           (ForElementType<UE::Math::TPlane<double>_>)0x0;
      local_2a8.PermutedPlanes.ArrayNum = 0;
      local_2a8.PermutedPlanes.ArrayMax = 8;
      GetViewFrustumBounds(&local_2a8,&pFVar16->OverscanViewProjectionMatrix,false,false);
      local_478 = &pFVar16->ViewDirection;
      TransformDirectionWSToSphericalUVs
                (this,&local_3f0,(TTransform<double> *)local_418,(TVector<double> *)&local_308._s_0)
      ;
      local_458 = -1;
      if (local_468 != '\0') {
        fVar22 = (float)local_460._4_4_ * fVar27 * fVar7 * (float)(undefined4)local_460;
        dVar20 = log((double)(local_450 /
                             (int)((float)-((int)ROUND(fVar9 - (fVar22 + fVar22)) >> 1) * fVar26)));
        local_458 = -((int)ROUND(dVar25 - dVar20 * dVar6) >> 1);
      }
      local_3d8 = &local_468;
      local_3d0 = &local_460;
      local_428 = (FMediaTextureTilingDescription *)CONCAT44(local_428._4_4_,0x3f471c72);
      local_3c0 = &local_44c;
      local_3b8 = &local_3f0;
      local_3a8 = local_418;
      local_3a0 = &local_308;
      local_398 = &local_2a8;
      local_390 = &local_448;
      local_388 = &local_467;
      local_380 = &local_458;
      local_378 = &local_454;
      local_370 = &local_440;
      local_368 = &local_43c;
      local_358 = &local_438;
      local_350 = &local_434;
      local_348 = local_430;
      local_340 = &local_428;
      local_338 = local_3e8;
      local_448 = (FSequenceInfo *)CONCAT44(local_448._4_4_,0x3f638e39);
      local_467 = 0;
      local_330 = pFVar12;
      iVar17 = (int)ROUND((float)(param_2->TilingDescription).TileNum.field0_0x0._s_0.Y - fVar26) >>
               1;
      uVar15 = 0;
      local_3c8 = pFVar1;
      local_3b0 = this;
      local_360 = pFVar16;
      if (0 < iVar17) {
        do {
          ``anonymous_namespace'::FSphereObjectInfo::CalculateVisibleTiles'::__l18::<lambda_1>::
          operator()(&local_3d8,(int)uVar15);
          uVar21 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar21;
        } while ((int)uVar21 < iVar17);
      }
      iVar2 = (param_2->TilingDescription).TileNum.field0_0x0._s_0.Y;
      while (iVar2 = iVar2 + -1, iVar17 <= iVar2) {
        ``anonymous_namespace'::FSphereObjectInfo::CalculateVisibleTiles'::__l18::<lambda_1>::
        operator()(&local_3d8,iVar2);
      }
      if (local_2a8.PermutedPlanes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)local_2a8.PermutedPlanes.AllocatorInstance.SecondaryData);
      }
      this_00 = local_410;
      pFVar18 = local_408;
      if (local_2a8.Planes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)local_2a8.Planes.AllocatorInstance.SecondaryData);
        this_00 = local_410;
        pFVar18 = local_408;
      }
    }
    pFVar16 = pFVar16 + 1;
    uVar15 = (ulonglong)local_420;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3f8);
  pTVar19 = local_3e0;
LAB_14ea44ae1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  return;
}

// GetMipLevelToUpscale @ 14ea4d8a0

int __thiscall _anon_FB6FC205::FSphereObjectInfo::GetMipLevelToUpscale(FSphereObjectInfo *this)

{
  return this->MipLevelToUpscale;
}

// TransformDirectionWSToSphericalUVs @ 14ea5d1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector2<float> __thiscall
_anon_FB6FC205::FSphereObjectInfo::TransformDirectionWSToSphericalUVs
          (FSphereObjectInfo *this,TVector2<float> *param_1,TTransform<double> *param_2,
          TVector<double> *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [12];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar16;
  undefined1 auVar15 [16];
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 (*in_stack_00000028) [16];
  
  dVar17 = (param_3->field0_0x0)._s_0.X *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar18 = (param_3->field0_0x0)._s_0.Y *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar2 = (param_3->field0_0x0)._s_0.Z *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar6 = param_3[1].field0_0x0._s_0.X *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar13._8_4_ = SUB84(dVar18,0);
  auVar13._0_8_ = dVar17;
  auVar13._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar14 = blendpd(auVar13,auVar1,2);
  auVar1 = *in_stack_00000028;
  dVar21 = *(double *)in_stack_00000028[1];
  dVar5 = auVar1._8_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar21;
  auVar7 = blendpd(auVar1,auVar7,2);
  auVar22._0_8_ = dVar5 * dVar17 - auVar1._0_8_ * dVar18;
  auVar22._8_8_ = dVar21 * dVar18 - dVar5 * dVar2;
  dVar16 = auVar14._8_8_;
  auVar8._0_8_ = auVar7._0_8_ * dVar2 - dVar21 * auVar14._0_8_;
  auVar8._8_8_ = auVar7._8_8_ * dVar6 - dVar16 * 0.0;
  auVar7 = blendpd(auVar22,auVar8,2);
  dVar12 = auVar22._8_8_ + auVar22._8_8_;
  dVar3 = auVar8._0_8_ + auVar8._0_8_;
  uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar23._0_8_ = auVar7._0_8_ + auVar7._0_8_;
  auVar23._8_8_ = auVar7._8_8_ + auVar7._8_8_;
  auVar10._8_4_ = SUB84(dVar3,0);
  auVar10._0_8_ = dVar12;
  auVar10._12_4_ = uVar19;
  auVar9._8_4_ = SUB84(dVar3,0);
  auVar9._0_8_ = dVar12;
  auVar9._12_4_ = uVar19;
  auVar7 = blendpd(auVar9,auVar23,2);
  auVar11._0_8_ = auVar10._8_8_ * dVar17 - dVar12 * dVar18;
  auVar11._8_8_ = auVar23._0_8_ * dVar18 - dVar3 * dVar2;
  auVar14._0_8_ = auVar7._0_8_ * dVar2 - auVar23._0_8_ * auVar14._0_8_;
  auVar14._8_8_ = auVar7._8_8_ * dVar6 - auVar23._8_8_ * dVar16;
  auVar7 = blendpd(auVar11,auVar14,2);
  dVar2 = dVar12 * dVar6 + auVar1._0_8_ + auVar11._8_8_;
  dVar12 = dVar3 * dVar6 + dVar5 + auVar14._0_8_;
  dVar21 = auVar23._0_8_ * dVar6 + dVar21 + auVar7._0_8_;
  auVar4._4_8_ = dVar16;
  auVar4._0_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar15._0_8_ = auVar4._0_8_ << 0x20;
  auVar15._8_4_ = SUB84(dVar12,0);
  auVar15._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  dVar12 = auVar15._8_8_;
  dVar6 = dVar12 * dVar12 + dVar2 * dVar2 + dVar21 * dVar21;
  if (__real_3e45798ee0000000 < dVar6) {
    dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
    dVar2 = dVar2 * dVar6;
    dVar12 = dVar12 * dVar6;
    dVar21 = dVar21 * dVar6;
  }
  uVar19 = SUB84(__real_bff0000000000000,0);
  uVar20 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  dVar21 = dVar21 / SQRT(dVar12 * dVar12 + dVar2 * dVar2 + dVar21 * dVar21);
  if (__real_bff0000000000000 <= dVar21) {
    if (__real_3ff0000000000000 <= dVar21) {
      dVar21 = __real_3ff0000000000000;
    }
    uVar19 = SUB84(dVar21,0);
    uVar20 = (undefined4)((ulonglong)dVar21 >> 0x20);
  }
  dVar21 = FGenericPlatformMath::Atan2(dVar12,dVar2);
  dVar21 = FGenericPlatformMath::Fmod(dVar21 + __real_401921fb60000000,__real_401921fb60000000);
  (param_1->field0_0x0)._s_0.X =
       (__real_43b40000 / *(float *)(param_2->Rotation).XY.m128d_f64) *
       (float)(dVar21 * __real_3fc45f306446f9b4);
  dVar21 = acos((double)CONCAT44(uVar20,uVar19));
  (param_1->field0_0x0)._s_0.Y =
       ((float)(dVar21 * ___real_3fd45f306446f9b4) - __real_3f000000) *
       (__real_43340000 / *(float *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4)) +
       __real_3f000000;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

