// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ApplyDirichlet @ 143e11300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TPerCellBoundaryConditions<double,3>::ApplyDirichlet
          (TPerCellBoundaryConditions<double,3> *this,TUniformGrid<double,3> *param_1,
          TArrayND<bool,3> *param_2,TArrayND<double,3> *param_3,double param_4,
          TVector<int,3> *param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined8 uVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined1 local_108 [16];
  double local_f8;
  undefined1 local_f0 [16];
  double local_e0;
  
  uVar23 = (*(int *)&param_2->field_0x4 * (param_5->field0_0x0)._s_0.X +
           (param_5->field0_0x0)._s_0.Y) * *(int *)&param_2->field_0x8 +
           (param_5->field0_0x0)._s_0.Z;
  uVar24 = 0;
  if ((int)uVar23 < *(int *)&param_2->field_0x18) {
    uVar24 = ~uVar23 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar24 = 0;
  *(undefined1 *)((longlong)(int)uVar23 + *(longlong *)&param_2->field_0x10) = 0;
  uVar20 = ___xmm_00000000000000003ff0000000000000;
  dVar19 = __real_3fe0000000000000;
  pTVar27 = this->MSources;
  if ((int)pTVar27->_padding_ != 0) {
    uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & ___xmm_3ff00000000000003ff0000000000000;
    uVar51 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & _UNK_150689684;
    uVar52 = _UNK_15061cc88 & _UNK_150689688;
    uVar53 = _UNK_15061cc8c & _UNK_15068968c;
    do {
      iVar11 = (param_5->field0_0x0)._s_0.X;
      iVar12 = (param_5->field0_0x0)._s_0.Y;
      uVar26 = ~uVar24 >> 0x1f;
      uVar22 = 0;
      if ((int)uVar24 < (int)pTVar27->_padding_) {
        uVar22 = uVar26;
      }
      dVar32 = *(double *)&param_1->field_0x40;
      dVar3 = *(double *)&param_1->field_0x48;
      dVar4 = *(double *)param_1;
      dVar5 = *(double *)&param_1->field_0x8;
      iVar13 = (param_5->field0_0x0)._s_0.Z;
      dVar6 = *(double *)&param_1->field_0x50;
      dVar7 = *(double *)&param_1->field_0x10;
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar28 = pTVar27->_padding_;
      pTVar27 = this->MSources;
      lVar25 = (longlong)(int)uVar24;
      fVar1 = *(float *)(lVar28 + lVar25 * 0x10);
      fVar2 = *(float *)(lVar28 + 4 + lVar25 * 0x10);
      uVar8 = *(undefined8 *)(lVar28 + 8 + lVar25 * 0x10);
      uVar22 = 0;
      if ((int)uVar24 < (int)pTVar27->_padding_) {
        uVar22 = uVar26;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar28 = pTVar27->_padding_;
      pTVar27 = this->MSources;
      dVar9 = *(double *)(lVar28 + 8 + lVar25 * 0x18);
      dVar10 = *(double *)(lVar28 + lVar25 * 0x18);
      dVar31 = *(double *)(lVar28 + 0x10 + lVar25 * 0x18);
      uVar22 = 0;
      if ((int)uVar24 < (int)pTVar27->_padding_) {
        uVar22 = uVar26;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      dVar16 = (double)(float)uVar8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar17 = (double)(float)((ulonglong)uVar8 >> 0x20) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar31 = (((double)iVar13 + dVar19) * dVar6 + dVar7) - dVar31;
      dVar10 = (((double)iVar11 + dVar19) * dVar32 + dVar4) - dVar10;
      dVar9 = (((double)iVar12 + dVar19) * dVar3 + dVar5) - dVar9;
      uVar46 = (undefined4)((ulonglong)dVar9 >> 0x20);
      dVar32 = (double)fVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar3 = (double)fVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar48._8_4_ = SUB84(dVar9,0);
      auVar48._0_8_ = dVar10;
      auVar48._12_4_ = uVar46;
      auVar37._8_4_ = SUB84(dVar9,0);
      auVar37._0_8_ = dVar10;
      auVar37._12_4_ = uVar46;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = dVar31;
      auVar38 = blendpd(auVar37,auVar41,2);
      auVar40._8_4_ = SUB84(dVar3,0);
      auVar40._0_8_ = dVar32;
      auVar40._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      auVar33._8_4_ = SUB84(dVar16,0);
      auVar33._0_8_ = dVar3;
      auVar33._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      auVar15._8_4_ = SUB84(dVar17,0);
      auVar15._0_8_ = dVar16;
      auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      auVar41 = blendpd(auVar40,auVar15,2);
      auVar49._0_8_ = auVar48._8_8_ * dVar32 - dVar3 * dVar10;
      auVar49._8_8_ = dVar31 * dVar3 - auVar33._8_8_ * dVar9;
      auVar39._0_8_ = auVar38._0_8_ * dVar16 - auVar41._0_8_ * dVar31;
      auVar39._8_8_ = auVar38._8_8_ * dVar17 - auVar41._8_8_ * 0.0;
      auVar38 = blendpd(auVar49,auVar39,2);
      dVar4 = auVar49._8_8_ + auVar49._8_8_;
      dVar5 = auVar39._0_8_ + auVar39._0_8_;
      uVar46 = SUB84(dVar5,0);
      uVar47 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar50._0_8_ = auVar38._0_8_ + auVar38._0_8_;
      auVar50._8_8_ = auVar38._8_8_ + auVar38._8_8_;
      auVar44._8_4_ = uVar46;
      auVar44._0_8_ = dVar4;
      auVar44._12_4_ = uVar47;
      auVar34._8_4_ = uVar46;
      auVar34._0_8_ = dVar4;
      auVar34._12_4_ = uVar47;
      auVar42._8_4_ = uVar46;
      auVar42._0_8_ = dVar4;
      auVar42._12_4_ = uVar47;
      auVar38 = blendpd(auVar42,auVar50,2);
      auVar45._0_8_ = auVar44._8_8_ * dVar32 - dVar4 * dVar3;
      auVar45._8_8_ = auVar50._0_8_ * dVar3 - auVar34._8_8_ * dVar16;
      auVar35._8_4_ = SUB84(auVar50._8_8_,0);
      auVar35._0_8_ = auVar50._0_8_;
      auVar35._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
      auVar43._0_8_ = auVar38._0_8_ * dVar16 - auVar50._0_8_ * auVar41._0_8_;
      auVar43._8_8_ = auVar38._8_8_ * dVar17 - auVar35._8_8_ * auVar41._8_8_;
      auVar36._8_4_ = SUB84(auVar45._8_8_,0);
      auVar36._0_8_ = auVar45._0_8_;
      auVar36._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
      lVar28 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  (uint)((ulonglong)uVar20 >> 0x20),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar20) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar18._4_4_ = _UNK_150689684;
      auVar18._0_4_ = ___xmm_3ff00000000000003ff0000000000000;
      auVar18._8_4_ = _UNK_150689688;
      auVar18._12_4_ = _UNK_15068968c;
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
      lVar29 = -(ulonglong)
                ((double)CONCAT44(uVar51,uVar23) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar30 = -(ulonglong)
                ((double)CONCAT44(uVar53,uVar52) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar38._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar38._0_8_ = uVar20;
      auVar38._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
      dVar32 = (dVar4 * dVar17 + dVar10 + auVar36._8_8_) *
               (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar41._4_4_,
                                ~(uint)lVar29 & auVar41._0_4_);
      dVar3 = (dVar5 * dVar17 + dVar9 + auVar43._0_8_) *
              (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar41._12_4_,
                               ~(uint)lVar30 & auVar41._8_4_);
      uVar46 = SUB84(dVar3,0);
      uVar47 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar41 = blendpd(auVar45,auVar43,2);
      local_f8 = (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar38._4_4_,
                                  ~(uint)lVar28 & auVar38._0_4_) *
                 (auVar50._0_8_ * dVar17 + dVar31 + auVar41._0_8_);
      local_f0._8_4_ = uVar46;
      local_f0._0_8_ = dVar32;
      local_f0._12_4_ = uVar47;
      local_108._8_4_ = uVar46;
      local_108._0_8_ = dVar32;
      local_108._12_4_ = uVar47;
      local_e0 = local_f8;
      dVar32 = FImplicitObject::SignedDistance
                         (*(FImplicitObject **)(pTVar27->_padding_ + lVar25 * 8),
                          (TVector<double,3> *)local_108);
      if (dVar32 < 0.0) {
        uVar23 = (*(int *)&param_3->field_0x4 * (param_5->field0_0x0)._s_0.X +
                 (param_5->field0_0x0)._s_0.Y) * *(int *)&param_3->field_0x8 +
                 (param_5->field0_0x0)._s_0.Z;
        uVar24 = 0;
        if ((int)uVar23 < *(int *)&param_3->field_0x18) {
          uVar24 = ~uVar23 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        *(undefined8 *)(*(longlong *)&param_3->field_0x10 + (longlong)(int)uVar23 * 8) =
             0x3ff0000000000000;
        return;
      }
      pTVar27 = this->MSources;
      uVar24 = uVar24 + 1;
    } while (uVar24 < (uint)pTVar27->_padding_);
  }
  return;
}

// ApplyNeumann @ 143e11e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TPerCellBoundaryConditions<double,3>::ApplyNeumann
          (TPerCellBoundaryConditions<double,3> *this,TUniformGrid<double,3> *param_1,
          TArrayFaceND<bool,3> *param_2,TArrayFaceND<double,3> *param_3,double param_4,
          Pair<int,Chaos::TVector<int,3>_> *param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  bool *pbVar19;
  TVector<double,3> *pTVar20;
  double *pdVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar50;
  undefined1 auVar46 [16];
  double dVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined4 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double local_230;
  double dStack_228;
  double local_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined1 local_1b0 [16];
  double local_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined1 local_180 [16];
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_150 [16];
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined1 local_120 [16];
  double local_110;
  TVector<double,3> local_108;
  TVector<double,3> local_f0 [7];
  
  pbVar19 = TArrayFaceND<bool,3>::operator()(param_2,param_5);
  auVar14 = ___xmm_00000000000000003ff0000000000000;
  uVar50 = _UNK_15061cbc8;
  dVar32 = ___xmm_3ff00000000000000000000000000000;
  dVar13 = __real_3fe0000000000000;
  dVar4 = __real_3ff0000000000000;
  uVar22 = 0;
  *pbVar19 = false;
  uVar15 = _UNK_15068968c;
  uVar27 = _UNK_150689688;
  uVar18 = _UNK_150689684;
  uVar23 = ___xmm_3ff00000000000003ff0000000000000;
  pTVar25 = this->MParticles;
  if ((int)pTVar25->_padding_ != 0) {
    local_1e8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uStack_1e4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uStack_1e0 = _UNK_15061cc88;
    uStack_1dc = _UNK_15061cc8c;
    local_1d8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                ___xmm_3ff00000000000003ff0000000000000;
    uStack_1d4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & _UNK_150689684;
    uStack_1d0 = _UNK_15061cc88 & _UNK_150689688;
    uStack_1cc = _UNK_15061cc8c & _UNK_15068968c;
    do {
      if (param_5->First == 0) {
        local_1b8 = 0;
        pdVar21 = (double *)local_1c8;
        local_1c8 = auVar14;
      }
      else {
        if (param_5->First == 1) {
          local_238 = 0.0;
          local_248 = dVar32;
          uStack_240 = uVar50;
        }
        else {
          local_238 = dVar4;
          local_248 = 0.0;
          uStack_240 = 0;
        }
        pdVar21 = &local_248;
      }
      local_168 = *pdVar21;
      dStack_160 = pdVar21[1];
      local_158 = pdVar21[2];
      uVar26 = ~uVar22 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar22 < (int)pTVar25->_padding_) {
        uVar17 = uVar26;
      }
      local_230 = (dVar4 - local_168) * *(double *)&param_1->field_0x40 * dVar13 +
                  (double)(param_5->Second).field0_0x0._s_0.X * *(double *)&param_1->field_0x40 +
                  *(double *)param_1;
      dStack_228 = (dVar4 - dStack_160) * *(double *)&param_1->field_0x48 * dVar13 +
                   (double)(param_5->Second).field0_0x0._s_0.Y * *(double *)&param_1->field_0x48 +
                   *(double *)&param_1->field_0x8;
      local_220 = (dVar4 - local_158) * *(double *)&param_1->field_0x50 * dVar13 +
                  (double)(param_5->Second).field0_0x0._s_0.Z * *(double *)&param_1->field_0x50 +
                  *(double *)&param_1->field_0x10;
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar28 = pTVar25->_padding_;
      pTVar25 = this->MParticles;
      lVar24 = (longlong)(int)uVar22;
      fVar1 = *(float *)(lVar28 + 4 + lVar24 * 0x10);
      fVar2 = *(float *)(lVar28 + lVar24 * 0x10);
      uVar50 = *(undefined8 *)(lVar28 + 8 + lVar24 * 0x10);
      uVar17 = 0;
      if ((int)uVar22 < (int)pTVar25->_padding_) {
        uVar17 = uVar26;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar28 = pTVar25->_padding_;
      pTVar25 = this->MParticles;
      dVar32 = *(double *)(lVar28 + 8 + lVar24 * 0x18);
      dVar3 = *(double *)(lVar28 + lVar24 * 0x18);
      dVar31 = *(double *)(lVar28 + 0x10 + lVar24 * 0x18);
      uVar17 = 0;
      if ((int)uVar22 < (int)pTVar25->_padding_) {
        uVar17 = uVar26;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      auVar66._0_8_ =
           (double)(float)uVar50 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      auVar66._8_8_ =
           (double)(float)((ulonglong)uVar50 >> 0x20) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar31 = local_220 - dVar31;
      dVar7 = (double)fVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar8 = (double)fVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar55 = (undefined4)((ulonglong)dVar8 >> 0x20);
      dVar3 = local_230 - dVar3;
      dVar32 = dStack_228 - dVar32;
      uVar65 = (undefined4)((ulonglong)dVar32 >> 0x20);
      auVar46._8_4_ = SUB84(dVar8,0);
      auVar46._0_8_ = dVar7;
      auVar46._12_4_ = uVar55;
      auVar52._8_4_ = SUB84(dVar8,0);
      auVar52._0_8_ = dVar7;
      auVar52._12_4_ = uVar55;
      dVar51 = auVar46._8_8_;
      auVar41._8_4_ = SUB84(dVar32,0);
      auVar41._0_8_ = dVar3;
      auVar41._12_4_ = uVar65;
      auVar53 = blendpd(auVar52,auVar66,2);
      auVar62._8_8_ = 0;
      auVar62._0_8_ = dVar31;
      auVar42 = blendpd(auVar41,auVar62,2);
      auVar33._8_4_ = SUB84(auVar66._0_8_,0);
      auVar33._0_8_ = dVar51;
      auVar33._12_4_ = (int)((ulonglong)auVar66._0_8_ >> 0x20);
      auVar67._8_4_ = SUB84(dVar32,0);
      auVar67._0_8_ = dVar3;
      auVar67._12_4_ = uVar65;
      auVar68._0_8_ = auVar67._8_8_ * dVar7 - dVar51 * dVar3;
      auVar68._8_8_ = dVar31 * dVar8 - auVar33._8_8_ * dVar32;
      auVar43._0_8_ = auVar42._0_8_ * auVar66._0_8_ - dVar31 * auVar53._0_8_;
      auVar43._8_8_ = auVar42._8_8_ * auVar66._8_8_ - auVar53._8_8_ * 0.0;
      auVar42 = blendpd(auVar68,auVar43,2);
      dVar9 = auVar68._8_8_ + auVar68._8_8_;
      dVar10 = auVar43._0_8_ + auVar43._0_8_;
      uVar55 = SUB84(dVar10,0);
      uVar65 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar69._0_8_ = auVar42._0_8_ + auVar42._0_8_;
      auVar69._8_8_ = auVar42._8_8_ + auVar42._8_8_;
      auVar60._8_4_ = uVar55;
      auVar60._0_8_ = dVar9;
      auVar60._12_4_ = uVar65;
      auVar34._8_4_ = uVar55;
      auVar34._0_8_ = dVar9;
      auVar34._12_4_ = uVar65;
      auVar56._8_4_ = uVar55;
      auVar56._0_8_ = dVar9;
      auVar56._12_4_ = uVar65;
      auVar42 = blendpd(auVar56,auVar69,2);
      auVar61._0_8_ = auVar60._8_8_ * dVar7 - dVar9 * dVar51;
      auVar61._8_8_ = auVar69._0_8_ * dVar8 - auVar34._8_8_ * auVar66._0_8_;
      auVar35._8_4_ = SUB84(auVar69._8_8_,0);
      auVar35._0_8_ = auVar69._0_8_;
      auVar35._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
      auVar57._0_8_ = auVar42._0_8_ * auVar66._0_8_ - auVar69._0_8_ * auVar53._0_8_;
      auVar57._8_8_ = auVar42._8_8_ * auVar66._8_8_ - auVar35._8_8_ * auVar53._8_8_;
      lVar28 = -(ulonglong)
                ((double)CONCAT44(uStack_1e4 & auVar14._4_4_,local_1e8 & auVar14._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar36._8_4_ = SUB84(auVar61._8_8_,0);
      auVar36._0_8_ = auVar61._0_8_;
      auVar36._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
      auVar53._4_4_ = uVar18;
      auVar53._0_4_ = uVar23;
      auVar53._8_4_ = uVar27;
      auVar53._12_4_ = uVar15;
      auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar53);
      lVar29 = -(ulonglong)
                ((double)CONCAT44(uStack_1d4,local_1d8) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar30 = -(ulonglong)
                ((double)CONCAT44(uStack_1cc,uStack_1d0) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar47._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar42._4_4_,
                            ~(uint)lVar29 & auVar42._0_4_);
      auVar47._8_4_ = ~(uint)lVar30 & auVar42._8_4_;
      auVar47._12_4_ = ~(uint)((ulonglong)lVar30 >> 0x20) & auVar42._12_4_;
      auVar42._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar42._0_8_ = auVar14._0_8_;
      auVar42._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
      dVar3 = (dVar9 * auVar66._8_8_ + dVar3 + auVar36._8_8_) * auVar47._0_8_;
      dVar32 = (dVar10 * auVar66._8_8_ + dVar32 + auVar57._0_8_) * auVar47._8_8_;
      uVar55 = SUB84(dVar32,0);
      uVar65 = (undefined4)((ulonglong)dVar32 >> 0x20);
      auVar62 = blendpd(auVar61,auVar57,2);
      local_150._8_4_ = uVar55;
      local_150._0_8_ = dVar3;
      local_150._12_4_ = uVar65;
      local_1a0 = (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar42._4_4_,
                                   ~(uint)lVar28 & auVar42._0_4_) *
                  (auVar69._0_8_ * auVar66._8_8_ + dVar31 + auVar62._0_8_);
      local_1b0._8_4_ = uVar55;
      local_1b0._0_8_ = dVar3;
      local_1b0._12_4_ = uVar65;
      local_140 = local_1a0;
      dVar32 = FImplicitObject::SignedDistance
                         (*(FImplicitObject **)(pTVar25->_padding_ + lVar24 * 8),
                          (TVector<double,3> *)local_1b0);
      if (dVar32 < 0.0) {
        pbVar19 = TArrayFaceND<bool,3>::operator()(param_2,param_5);
        *pbVar19 = true;
        pTVar20 = TKinematicGeometryParticlesImp<double,3,0>::GetV
                            (this->MParticles,&local_108,uVar22);
        dVar32 = UE::Math::TVector<double>::Component((TVector<double> *)pTVar20,param_5->First);
        pdVar21 = TArrayFaceND<double,3>::operator()(param_3,param_5);
        *pdVar21 = dVar32;
        dVar32 = ___xmm_3ff00000000000000000000000000000;
        uVar50 = _UNK_15061cbc8;
        break;
      }
      pTVar25 = this->MParticles;
      uVar22 = uVar22 + 1;
      dVar32 = ___xmm_3ff00000000000000000000000000000;
      uVar50 = _UNK_15061cbc8;
    } while (uVar22 < (uint)pTVar25->_padding_);
  }
  pTVar25 = this->MSources;
  uVar23 = 0;
  if ((int)pTVar25->_padding_ != 0) {
    local_258 = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & _UNK_150689684,
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                 ___xmm_3ff00000000000003ff0000000000000);
    uStack_250 = (double)CONCAT44(_UNK_15061cc8c & _UNK_15068968c,_UNK_15061cc88 & _UNK_150689688);
    do {
      if (param_5->First == 0) {
        local_188 = 0;
        pdVar21 = (double *)local_198;
        local_198 = auVar14;
      }
      else {
        if (param_5->First == 1) {
          local_208 = 0.0;
          local_218 = dVar32;
          uStack_210 = uVar50;
        }
        else {
          local_208 = dVar4;
          local_218 = 0.0;
          uStack_210 = 0;
        }
        pdVar21 = &local_218;
      }
      local_138 = *pdVar21;
      dStack_130 = pdVar21[1];
      local_128 = pdVar21[2];
      uVar27 = ~uVar23 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar23 < (int)pTVar25->_padding_) {
        uVar18 = uVar27;
      }
      local_200 = (dVar4 - local_138) * *(double *)&param_1->field_0x40 * dVar13 +
                  (double)(param_5->Second).field0_0x0._s_0.X * *(double *)&param_1->field_0x40 +
                  *(double *)param_1;
      dStack_1f8 = (dVar4 - dStack_130) * *(double *)&param_1->field_0x48 * dVar13 +
                   (double)(param_5->Second).field0_0x0._s_0.Y * *(double *)&param_1->field_0x48 +
                   *(double *)&param_1->field_0x8;
      local_1f0 = (dVar4 - local_128) * *(double *)&param_1->field_0x50 * dVar13 +
                  (double)(param_5->Second).field0_0x0._s_0.Z * *(double *)&param_1->field_0x50 +
                  *(double *)&param_1->field_0x10;
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar28 = pTVar25->_padding_;
      pTVar25 = this->MSources;
      lVar24 = (longlong)(int)uVar23;
      fVar1 = *(float *)(lVar28 + 4 + lVar24 * 0x10);
      fVar2 = *(float *)(lVar28 + lVar24 * 0x10);
      uVar50 = *(undefined8 *)(lVar28 + 8 + lVar24 * 0x10);
      uVar18 = 0;
      if ((int)uVar23 < (int)pTVar25->_padding_) {
        uVar18 = uVar27;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar28 = pTVar25->_padding_;
      pTVar25 = this->MSources;
      dVar32 = *(double *)(lVar28 + 8 + lVar24 * 0x18);
      dVar3 = *(double *)(lVar28 + lVar24 * 0x18);
      dVar31 = *(double *)(lVar28 + 0x10 + lVar24 * 0x18);
      uVar18 = 0;
      if ((int)uVar23 < (int)pTVar25->_padding_) {
        uVar18 = uVar27;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      auVar70._0_8_ =
           (double)(float)uVar50 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      auVar70._8_8_ =
           (double)(float)((ulonglong)uVar50 >> 0x20) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar31 = local_1f0 - dVar31;
      dVar7 = (double)fVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar8 = (double)fVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar55 = (undefined4)((ulonglong)dVar8 >> 0x20);
      dVar3 = local_200 - dVar3;
      dVar32 = dStack_1f8 - dVar32;
      uVar65 = (undefined4)((ulonglong)dVar32 >> 0x20);
      auVar48._8_4_ = SUB84(dVar8,0);
      auVar48._0_8_ = dVar7;
      auVar48._12_4_ = uVar55;
      auVar54._8_4_ = SUB84(dVar8,0);
      auVar54._0_8_ = dVar7;
      auVar54._12_4_ = uVar55;
      dVar51 = auVar48._8_8_;
      auVar44._8_4_ = SUB84(dVar32,0);
      auVar44._0_8_ = dVar3;
      auVar44._12_4_ = uVar65;
      auVar62 = blendpd(auVar54,auVar70,2);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar31;
      auVar42 = blendpd(auVar44,auVar11,2);
      auVar37._8_4_ = SUB84(auVar70._0_8_,0);
      auVar37._0_8_ = dVar51;
      auVar37._12_4_ = (int)((ulonglong)auVar70._0_8_ >> 0x20);
      auVar71._8_4_ = SUB84(dVar32,0);
      auVar71._0_8_ = dVar3;
      auVar71._12_4_ = uVar65;
      auVar72._0_8_ = auVar71._8_8_ * dVar7 - dVar51 * dVar3;
      auVar72._8_8_ = dVar31 * dVar8 - auVar37._8_8_ * dVar32;
      auVar45._0_8_ = auVar42._0_8_ * auVar70._0_8_ - dVar31 * auVar62._0_8_;
      auVar45._8_8_ = auVar42._8_8_ * auVar70._8_8_ - auVar62._8_8_ * 0.0;
      auVar42 = blendpd(auVar72,auVar45,2);
      dVar9 = auVar72._8_8_ + auVar72._8_8_;
      dVar10 = auVar45._0_8_ + auVar45._0_8_;
      uVar55 = SUB84(dVar10,0);
      uVar65 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar73._0_8_ = auVar42._0_8_ + auVar42._0_8_;
      auVar73._8_8_ = auVar42._8_8_ + auVar42._8_8_;
      auVar63._8_4_ = uVar55;
      auVar63._0_8_ = dVar9;
      auVar63._12_4_ = uVar65;
      auVar38._8_4_ = uVar55;
      auVar38._0_8_ = dVar9;
      auVar38._12_4_ = uVar65;
      auVar58._8_4_ = uVar55;
      auVar58._0_8_ = dVar9;
      auVar58._12_4_ = uVar65;
      auVar42 = blendpd(auVar58,auVar73,2);
      auVar64._0_8_ = auVar63._8_8_ * dVar7 - dVar9 * dVar51;
      auVar64._8_8_ = auVar73._0_8_ * dVar8 - auVar38._8_8_ * auVar70._0_8_;
      auVar39._8_4_ = SUB84(auVar73._8_8_,0);
      auVar39._0_8_ = auVar73._0_8_;
      auVar39._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
      auVar59._0_8_ = auVar42._0_8_ * auVar70._0_8_ - auVar73._0_8_ * auVar62._0_8_;
      auVar59._8_8_ = auVar42._8_8_ * auVar70._8_8_ - auVar39._8_8_ * auVar62._8_8_;
      lVar28 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar14._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar14._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar40._8_4_ = SUB84(auVar64._8_8_,0);
      auVar40._0_8_ = auVar64._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
      auVar12._4_4_ = _UNK_150689684;
      auVar12._0_4_ = ___xmm_3ff00000000000003ff0000000000000;
      auVar12._8_4_ = _UNK_150689688;
      auVar12._12_4_ = _UNK_15068968c;
      auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar12);
      lVar29 = -(ulonglong)(local_258 <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar30 = -(ulonglong)(uStack_250 <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar49._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar42._4_4_,
                            ~(uint)lVar29 & auVar42._0_4_);
      auVar49._8_4_ = ~(uint)lVar30 & auVar42._8_4_;
      auVar49._12_4_ = ~(uint)((ulonglong)lVar30 >> 0x20) & auVar42._12_4_;
      auVar6._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar6._0_8_ = auVar14._0_8_;
      auVar6._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar6);
      dVar3 = (dVar9 * auVar70._8_8_ + dVar3 + auVar40._8_8_) * auVar49._0_8_;
      dVar32 = (dVar10 * auVar70._8_8_ + dVar32 + auVar59._0_8_) * auVar49._8_8_;
      uVar55 = SUB84(dVar32,0);
      uVar65 = (undefined4)((ulonglong)dVar32 >> 0x20);
      auVar62 = blendpd(auVar64,auVar59,2);
      local_120._8_4_ = uVar55;
      local_120._0_8_ = dVar3;
      local_120._12_4_ = uVar65;
      local_170 = (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar42._4_4_,
                                   ~(uint)lVar28 & auVar42._0_4_) *
                  (auVar73._0_8_ * auVar70._8_8_ + dVar31 + auVar62._0_8_);
      local_180._8_4_ = uVar55;
      local_180._0_8_ = dVar3;
      local_180._12_4_ = uVar65;
      local_110 = local_170;
      dVar32 = FImplicitObject::SignedDistance
                         (*(FImplicitObject **)(pTVar25->_padding_ + lVar24 * 8),
                          (TVector<double,3> *)local_180);
      if (dVar32 < 0.0) {
        pbVar19 = TArrayFaceND<bool,3>::operator()(param_2,param_5);
        *pbVar19 = true;
        pTVar20 = TKinematicGeometryParticlesImp<double,3,0>::GetV(this->MSources,local_f0,uVar23);
        uVar23 = param_5->First;
        if ((2 < uVar23) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7ab,L""), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        dVar4 = *(double *)(&pTVar20->field_0x0 + (longlong)(int)uVar23 * 8);
        pdVar21 = TArrayFaceND<double,3>::operator()(param_3,param_5);
        *pdVar21 = dVar4;
        return;
      }
      pTVar25 = this->MSources;
      uVar23 = uVar23 + 1;
      dVar32 = ___xmm_3ff00000000000000000000000000000;
      uVar50 = _UNK_15061cbc8;
    } while (uVar23 < (uint)pTVar25->_padding_);
  }
  return;
}

