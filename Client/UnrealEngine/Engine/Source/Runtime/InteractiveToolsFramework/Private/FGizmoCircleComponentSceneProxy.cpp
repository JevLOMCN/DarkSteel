// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 5

// CanBeOccluded @ 14964cff0

bool __thiscall
FGizmoCircleComponentSceneProxy::CanBeOccluded(FGizmoCircleComponentSceneProxy *this)

{
  return false;
}

// GetDynamicMeshElements @ 149653f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGizmoCircleComponentSceneProxy::GetDynamicMeshElements
          (FGizmoCircleComponentSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  FSceneView *pFVar4;
  bool bVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined8 uVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  FPrimitiveDrawInterface *pFVar17;
  int iVar18;
  FLinearColor_u_0 *pFVar19;
  uint uVar20;
  char cVar21;
  float fVar22;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined8 uVar23;
  double dVar24;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_01;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float extraout_XMM0_Db_00;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  uint local_2f8;
  longlong local_2f0;
  double local_2e8;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_260;
  TVector<double>_u_0 local_248;
  double local_230;
  double dStack_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  FLinearColor_u_0 local_108;
  TVector<double>_u_0 local_f8;
  double local_e0;
  
  uVar34 = SUB84(__real_3ff0000000000000,0);
  uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  auVar28._8_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  auVar28._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auVar28._12_4_ = (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
  ;
  local_248._s_0.X =
       *(double *)&this->field_0x110 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       *(double *)&this->field_0x130 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * *(double *)&this->field_0x150 +
       *(double *)&this->field_0x170 * __real_3ff0000000000000;
  local_248._s_0.Y =
       *(double *)&this->field_0x118 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       *(double *)&this->field_0x138 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
       auVar28._8_8_ * *(double *)&this->field_0x158 +
       *(double *)&this->field_0x178 * __real_3ff0000000000000;
  local_248._s_0.Z =
       *(double *)&this->field_0x120 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
       *(double *)&this->field_0x140 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
       *(double *)&this->field_0x160 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
       *(double *)&this->field_0x180 * __real_3ff0000000000000;
  GizmoMath::MakeNormalPlaneBasis
            (&this->Normal,(TVector<double> *)&local_278._s_0,(TVector<double> *)&local_260._s_0);
  iVar18 = param_1->ArrayNum;
  uVar20 = 0;
  if (0 < iVar18) {
    local_2f8 = 1;
    local_2f0 = 0;
    fVar43 = __real_3f000000;
    fVar42 = __real_3c360b61;
    fVar22 = __real_3f800000;
    uVar40 = ___xmm_3f8000003f0000003f0000003f000000;
    uVar41 = _UNK_1509252f8;
    do {
      if ((param_3 & local_2f8) != 0) {
        uVar16 = 0;
        if ((int)uVar20 < iVar18) {
          uVar16 = ~uVar20 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = *(FSceneView **)((param_1->AllocatorInstance).Data + local_2f0);
        pFVar17 = FMeshElementCollector::GetPDI(param_4,uVar20);
        pdVar1 = (pFVar4->ViewMatrices).ProjectionMatrix.M[3] + 3;
        bVar14 = (double)CONCAT44(uVar35,uVar34) != *pdVar1;
        bVar5 = *pdVar1 <= (double)CONCAT44(uVar35,uVar34);
        local_2a8._s_0.Z = (pFVar4->ViewMatrices).ViewMatrix.M[2][2];
        uVar44 = SUB84(local_2a8._s_0.Z,0);
        uVar45 = (undefined4)((ulonglong)local_2a8._s_0.Z >> 0x20);
        local_2a8._s_0.Y = (pFVar4->ViewMatrices).ViewMatrix.M[1][2];
        uVar38 = SUB84(local_2a8._s_0.Y,0);
        uVar39 = (undefined4)((ulonglong)local_2a8._s_0.Y >> 0x20);
        local_2a8._s_0.X = (pFVar4->ViewMatrices).ViewMatrix.M[0][2];
        uVar36 = SUB84(local_2a8._s_0.X,0);
        uVar37 = (undefined4)((ulonglong)local_2a8._s_0.X >> 0x20);
        if (this->bExternalIsViewDependent == (bool *)0x0) {
          cVar21 = '\0';
        }
        else {
          cVar21 = *this->bExternalIsViewDependent;
          if ((bool)cVar21 != false) {
            fVar22 = UE::GizmoRenderingUtil::CalculateLocalPixelToWorldScale
                               (pFVar4,(TVector<double> *)&local_248._s_0,
                                (double)CONCAT44(uVar35,uVar34));
            uVar44 = SUB84(local_2a8._s_0.Z,0);
            uVar45 = (undefined4)((ulonglong)local_2a8._16_8_ >> 0x20);
            uVar38 = SUB84(local_2a8._s_0.Y,0);
            uVar39 = (undefined4)((ulonglong)local_2a8._8_8_ >> 0x20);
            uVar36 = SUB84(local_2a8._s_0.X,0);
            uVar37 = (undefined4)((ulonglong)local_2a8._0_8_ >> 0x20);
          }
        }
        dVar9 = (double)(fVar22 * this->Radius);
        if ((this->bExternalHoverState == (bool *)0x0) || (*this->bExternalHoverState != true)) {
          fVar22 = this->Thickness;
        }
        else {
          fVar22 = this->HoverThicknessMultiplier * this->Thickness;
        }
        if (bVar5 && bVar14) {
          fVar42 = pFVar4->FOV * fVar42;
          fVar22 = fVar22 * fVar42;
          fVar43 = fVar42 * fVar43;
        }
        local_108._0_8_ = uVar40;
        local_108._8_8_ = uVar41;
        if (this->bDrawFullCircle != false) {
          local_108._0_8_ = *(undefined8 *)&(this->Color).field0_0x0;
          local_108._8_8_ = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
          fVar43 = fVar22;
        }
        if (this->bViewAligned == false) {
          local_1e8 = *(double *)&this->field_0x170;
          dStack_1e0 = *(double *)&this->field_0x178;
          local_128 = *(double *)&this->field_0x110;
          dStack_120 = *(double *)&this->field_0x118;
          local_1c8 = *(double *)&this->field_0x180;
          dStack_1c0 = *(double *)&this->field_0x188;
          local_1f8 = *(double *)&this->field_0x150;
          dStack_1f0 = *(double *)&this->field_0x158;
          local_1d8 = *(double *)&this->field_0x120;
          dStack_1d0 = *(double *)&this->field_0x128;
          dVar2 = *(double *)&this->field_0x140;
          dVar32 = SUB168(*(undefined1 (*) [16])&this->field_0x130,0);
          dVar7 = SUB168(*(undefined1 (*) [16])&this->field_0x130,8);
          dVar30 = dVar32 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                   local_128 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                   local_1f8 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
                   local_1e8 * __real_3ff0000000000000;
          dVar33 = dVar7 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                   dStack_120 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                   dStack_1f0 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
                   dStack_1e0 * __real_3ff0000000000000;
          uVar34 = (undefined4)((ulonglong)dVar33 >> 0x20);
          dVar31 = dVar2 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                   local_1d8 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                   *(double *)&this->field_0x160 *
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
                   *(double *)&this->field_0x180 * __real_3ff0000000000000;
          dVar24 = *(double *)&this->field_0x148 *
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                   dStack_1d0 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                   *(double *)&this->field_0x168 *
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
                   *(double *)&this->field_0x188 * __real_3ff0000000000000;
          local_198._8_4_ = SUB84(dVar24,0);
          local_198._0_8_ = dVar31;
          local_198._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
          local_2e8 = SUB168(*(undefined1 (*) [16])&this->field_0x160,0);
          cVar15 = '\0';
          if ((this->bExternalWorldLocalState == (bool *)0x0) ||
             (cVar15 = *this->bExternalWorldLocalState, uVar40 = local_278._s_0.X,
             uVar41 = local_278._s_0.Z, uVar23 = local_278._s_0.Y, (bool)cVar15 == false)) {
            uVar40 = dVar32 * local_278._s_0.Y + local_128 * local_278._s_0.X +
                     local_1f8 * local_278._s_0.Z + local_1e8 * 0.0;
            dVar24 = dVar7 * local_278._s_0.Y + dStack_120 * local_278._s_0.X +
                     dStack_1f0 * local_278._s_0.Z + dStack_1e0 * 0.0;
            auVar10._4_8_ = dStack_1c0 * 0.0;
            auVar10._0_4_ = (int)((ulonglong)uVar40 >> 0x20);
            auVar25._0_8_ = auVar10._0_8_ << 0x20;
            auVar25._8_4_ = SUB84(dVar24,0);
            auVar25._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
            uVar41 = dVar2 * local_278._s_0.Y + local_1d8 * local_278._s_0.X +
                     local_2e8 * local_278._s_0.Z + local_1c8 * 0.0;
            uVar23 = auVar25._8_8_;
          }
          if (cVar15 == '\0') {
            dVar24 = dVar32 * local_260._s_0.Y + local_128 * local_260._s_0.X +
                     local_1f8 * local_260._s_0.Z + local_1e8 * 0.0;
            dStack_1a0 = dVar7 * local_260._s_0.Y + dStack_120 * local_260._s_0.X +
                         dStack_1f0 * local_260._s_0.Z + dStack_1e0 * 0.0;
            uVar35 = (undefined4)((ulonglong)dStack_1a0 >> 0x20);
            auVar11._4_8_ = *(double *)&this->field_0x168 * local_260._s_0.Z;
            auVar11._0_4_ = (int)((ulonglong)dVar24 >> 0x20);
            auVar29._0_8_ = auVar11._0_8_ << 0x20;
            auVar29._8_4_ = SUB84(dStack_1a0,0);
            auVar29._12_4_ = uVar35;
            local_1b8._8_4_ = SUB84(dStack_1a0,0);
            local_1b8._0_8_ = dVar24;
            local_1b8._12_4_ = uVar35;
            local_1a8 = auVar29._8_8_;
            dVar3 = (this->Normal).field0_0x0._s_0.X;
            dVar8 = (this->Normal).field0_0x0._s_0.Y;
            dVar24 = (this->Normal).field0_0x0._s_0.Z;
            dVar32 = dVar32 * dVar8 + local_128 * dVar3 + local_1f8 * dVar24 + local_1e8 * 0.0;
            local_118 = dVar7 * dVar8 + dStack_120 * dVar3 + dStack_1f0 * dVar24 + dStack_1e0 * 0.0;
            dVar24 = dVar2 * dVar8 + local_1d8 * dVar3 + local_2e8 * dVar24 + local_1c8 * 0.0;
            local_2e8 = dVar2 * local_260._s_0.Y + local_1d8 * local_260._s_0.X +
                        local_2e8 * local_260._s_0.Z + local_1c8 * 0.0;
          }
          else {
            local_1b8._8_8_ = 0;
            local_1b8._0_8_ = local_260._s_0.X;
            local_1a8 = local_260._s_0.Y;
            dStack_1a0 = 0.0;
            local_2e8 = local_260._s_0.Z;
            auVar28 = *(undefined1 (*) [16])&(this->Normal).field0_0x0;
            dVar32 = auVar28._0_8_;
            local_118 = auVar28._8_8_;
            dVar24 = (this->Normal).field0_0x0._s_0.Z;
            dStack_110 = local_118;
          }
          if (bVar5 && bVar14) {
            dVar7 = local_248._s_0.Z - (pFVar4->ViewLocation).field0_0x0._s_0.Z;
            dVar2 = local_248._s_0.Y - (pFVar4->ViewLocation).field0_0x0._s_0.Y;
            dVar3 = local_248._s_0.X - (pFVar4->ViewLocation).field0_0x0._s_0.X;
          }
          else {
            dVar7 = (pFVar4->ViewMatrices).ViewMatrix.M[2][2];
            dVar2 = (pFVar4->ViewMatrices).ViewMatrix.M[1][2];
            dVar3 = (pFVar4->ViewMatrices).ViewMatrix.M[0][2];
          }
          dVar8 = dVar3 * dVar3 + dVar2 * dVar2 + dVar7 * dVar7;
          if (__real_3e45798ee0000000 < dVar8) {
            local_e0 = __real_3ff0000000000000 / SQRT(dVar8);
            dVar2 = dVar2 * local_e0;
            dVar3 = dVar3 * local_e0;
            dVar7 = dVar7 * local_e0;
          }
          bVar14 = false;
          if ((cVar21 == '\0') ||
             (dVar8 = local_118 * (pFVar4->ViewMatrices).ViewMatrix.M[1][2] +
                      dVar32 * (pFVar4->ViewMatrices).ViewMatrix.M[0][2] +
                      dVar24 * (pFVar4->ViewMatrices).ViewMatrix.M[2][2],
             bVar14 = __real_3fee666666666666 <=
                      (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      ),
             dVar24 = dVar3 * dVar32 + dVar2 * local_118 + dVar7 * dVar24,
             __real_3fa999999999999a <=
             (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
            auVar26._8_4_ = SUB84(dVar33,0);
            auVar26._0_8_ = dVar30;
            auVar26._12_4_ = uVar34;
            dVar24 = dVar30 + dVar9 * (double)uVar40;
            if (bVar14) {
              iVar18 = 0;
              dStack_138 = (double)uVar23 * dVar9 + dVar33;
              local_130 = dVar31 + (double)uVar41 * dVar9;
              local_140 = dVar24;
              if (0 < this->NumSides) {
                uVar13 = local_1b8._0_8_;
                do {
                  iVar18 = iVar18 + 1;
                  __libm_sse2_sincosf_();
                  dVar32 = (double)extraout_XMM0_Db_00;
                  dVar24 = (double)extraout_XMM0_Da_00;
                  local_158 = ((double)uVar13 * dVar24 + (double)uVar40 * dVar32) * dVar9 + dVar30;
                  dStack_150 = (local_1a8 * dVar24 + (double)uVar23 * dVar32) * dVar9 + dVar33;
                  local_148 = (local_2e8 * dVar24 + (double)uVar41 * dVar32) * dVar9 + dVar31;
                  (**(code **)(pFVar17->_padding_ + 0x30))
                            (pFVar17,&local_140,&local_158,&this->Color,1,fVar22,0,1);
                  local_140 = local_158;
                  dStack_138 = dStack_150;
                  local_130 = local_148;
                } while (iVar18 < this->NumSides);
              }
            }
            else {
              auVar12._4_8_ = auVar26._8_8_;
              auVar12._0_4_ = (int)((ulonglong)dVar30 >> 0x20);
              auVar27._0_8_ = auVar12._0_8_ << 0x20;
              auVar27._8_4_ = SUB84(dVar33,0);
              auVar27._12_4_ = uVar34;
              dStack_210 = (double)uVar23 * dVar9 + auVar27._8_8_;
              local_208 = dVar31 + (double)uVar41 * dVar9;
              iVar18 = 0;
              local_218 = dVar24;
              bVar14 = (double)uVar40 * dVar3 + (double)uVar23 * dVar2 + (double)uVar41 * dVar7 <
                       __real_0000000000000000;
              if (0 < this->NumSides) {
                do {
                  iVar18 = iVar18 + 1;
                  __libm_sse2_sincosf_();
                  dVar31 = (double)extraout_XMM0_Da_01;
                  dVar33 = (double)extraout_XMM0_Db_01;
                  dVar24 = (double)local_1b8._0_8_ * dVar31 + (double)uVar40 * dVar33;
                  dVar32 = local_1a8 * dVar31 + (double)uVar23 * dVar33;
                  local_230 = dVar24 * dVar9 + dVar30;
                  dVar31 = local_2e8 * dVar31 + (double)uVar41 * dVar33;
                  dStack_228 = dVar32 * dVar9 + auVar27._8_8_;
                  bVar5 = dVar2 * dVar32 + dVar24 * dVar3 + dVar7 * dVar31 < __real_0000000000000000
                  ;
                  local_220 = dVar31 * dVar9 + (double)local_198._0_8_;
                  if ((bVar14) && (bVar5)) {
                    pFVar19 = &(this->Color).field0_0x0;
                    fVar42 = fVar22;
                  }
                  else {
                    pFVar19 = &local_108;
                    fVar42 = fVar43;
                  }
                  (**(code **)(pFVar17->_padding_ + 0x30))
                            (pFVar17,&local_218,&local_230,pFVar19,1,fVar42,0,1);
                  local_218 = local_230;
                  dStack_210 = dStack_228;
                  local_208 = local_220;
                  bVar14 = bVar5;
                } while (iVar18 < this->NumSides);
              }
            }
          }
        }
        else {
          dVar31 = (double)CONCAT44(uVar37,uVar36) * __real_3f50624dd2f1a9fc +
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y *
                   *(double *)&this->field_0x130 +
                   *(double *)&this->field_0x110 *
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                   *(double *)&this->field_0x150 *
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
                   *(double *)&this->field_0x170 * (double)CONCAT44(uVar35,uVar34);
          dVar24 = (double)CONCAT44(uVar39,uVar38) * __real_3f50624dd2f1a9fc +
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y *
                   *(double *)&this->field_0x138 +
                   *(double *)&this->field_0x118 *
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                   *(double *)&this->field_0x158 *
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
                   *(double *)&this->field_0x178 * (double)CONCAT44(uVar35,uVar34);
          dVar32 = (double)CONCAT44(uVar45,uVar44) * __real_3f50624dd2f1a9fc +
                   *(double *)&this->field_0x140 *
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
                   *(double *)&this->field_0x120 *
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
                   *(double *)&this->field_0x160 *
                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
                   *(double *)&this->field_0x180 * (double)CONCAT44(uVar35,uVar34);
          GizmoMath::MakeNormalPlaneBasis
                    ((TVector<double> *)&local_2a8._s_0,(TVector<double> *)&local_290._s_0,
                     (TVector<double> *)&local_f8._s_0);
          uVar34 = SUB84(local_290._s_0.X,0);
          uVar35 = (undefined4)((ulonglong)local_290._0_8_ >> 0x20);
          iVar18 = 0;
          uVar36 = SUB84(local_290._s_0.Y,0);
          uVar37 = (undefined4)((ulonglong)local_290._8_8_ >> 0x20);
          uVar38 = SUB84(local_290._s_0.Z,0);
          uVar39 = (undefined4)((ulonglong)local_290._16_8_ >> 0x20);
          local_170 = local_290._s_0.X * dVar9 + dVar31;
          dStack_168 = local_290._s_0.Y * dVar9 + dVar24;
          local_160 = local_290._s_0.Z * dVar9 + dVar32;
          if (0 < this->NumSides) {
            while( true ) {
              iVar18 = iVar18 + 1;
              __libm_sse2_sincosf_();
              dVar30 = (double)extraout_XMM0_Db;
              dVar7 = (double)extraout_XMM0_Da;
              local_188 = (local_f8._s_0.X * dVar7 + (double)CONCAT44(uVar35,uVar34) * dVar30) *
                          dVar9 + dVar31;
              dStack_180 = (local_f8._s_0.Y * dVar7 + (double)CONCAT44(uVar37,uVar36) * dVar30) *
                           dVar9 + dVar24;
              local_178 = (local_f8._s_0.Z * dVar7 + (double)CONCAT44(uVar39,uVar38) * dVar30) *
                          dVar9 + dVar32;
              (**(code **)(pFVar17->_padding_ + 0x30))
                        (pFVar17,&local_170,&local_188,&this->Color,1,fVar22,0,1);
              local_170 = local_188;
              dStack_168 = dStack_180;
              local_160 = local_178;
              if (this->NumSides <= iVar18) break;
              uVar38 = SUB84(local_290._s_0.Z,0);
              uVar39 = (undefined4)((ulonglong)local_290._16_8_ >> 0x20);
              uVar36 = SUB84(local_290._s_0.Y,0);
              uVar37 = (undefined4)((ulonglong)local_290._8_8_ >> 0x20);
              uVar34 = SUB84(local_290._s_0.X,0);
              uVar35 = (undefined4)((ulonglong)local_290._0_8_ >> 0x20);
            }
          }
        }
        uVar34 = SUB84(__real_3ff0000000000000,0);
        uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        fVar43 = __real_3f000000;
        fVar42 = __real_3c360b61;
        fVar22 = __real_3f800000;
        uVar40 = ___xmm_3f8000003f0000003f0000003f000000;
        uVar41 = _UNK_1509252f8;
      }
      uVar20 = uVar20 + 1;
      local_2f0 = local_2f0 + 8;
      local_2f8 = local_2f8 << 1 | (uint)((int)local_2f8 < 0);
      iVar18 = param_1->ArrayNum;
    } while ((int)uVar20 < iVar18);
  }
  return;
}

// GetMemoryFootprint @ 149655180

uint __thiscall
FGizmoCircleComponentSceneProxy::GetMemoryFootprint(FGizmoCircleComponentSceneProxy *this)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = (longlong)*(int *)&this->field_0x104 * 4 + 0x2e0;
  if (uVar1 != (uVar1 & 0xffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (uint)uVar1;
}

// GetTypeHash @ 149658b50

ulong64 __thiscall
FGizmoCircleComponentSceneProxy::GetTypeHash(FGizmoCircleComponentSceneProxy *this)

{
  return 0x155283880;
}

// GetViewRelevance @ 149658d10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FGizmoCircleComponentSceneProxy::GetViewRelevance
          (FGizmoCircleComponentSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  puVar3 = &__return_storage_ptr__->field_0x8;
  __return_storage_ptr__->bDynamicRelevance = 1;
  __return_storage_ptr__->bShadowRelevance = 0;
  __return_storage_ptr__->bDrawRelevance = bVar4;
  bVar4 = FPrimitiveSceneProxy::UseEditorCompositing((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bEditorPrimitiveRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 8;
  bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 5;
  return __return_storage_ptr__;
}

