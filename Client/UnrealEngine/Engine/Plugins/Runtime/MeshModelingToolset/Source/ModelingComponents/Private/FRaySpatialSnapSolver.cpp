// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// FRaySpatialSnapSolver @ 14cb62070

FRaySpatialSnapSolver * __thiscall
UE::Geometry::FRaySpatialSnapSolver::FRaySpatialSnapSolver(FRaySpatialSnapSolver *this)

{
  FBasePositionSnapSolver3::FBasePositionSnapSolver3((FBasePositionSnapSolver3 *)this);
  this->_padding_ = (longlong)&___7FRaySpatialSnapSolver_Geometry_UE__6B_;
  *(undefined8 *)&this->PointConstraintFunc = 0;
  *(undefined8 *)&(this->PointConstraintFunc).field_0x28 = 0;
  (this->GeneratedTargetPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedTargetPoints).ArrayNum = 0;
  (this->GeneratedTargetPoints).ArrayMax = 0;
  return this;
}

// Draw @ 14cb84930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FRaySpatialSnapSolver::Draw
          (FRaySpatialSnapSolver *this,FToolDataVisualizer *param_1,float param_2,
          TMap<int,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>_>
          *param_3)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  float fVar10;
  FLinearColor *pFVar11;
  FLinearColor *pFVar12;
  ulonglong uVar13;
  FLinearColor *pFVar14;
  undefined1 *puVar15;
  double *pdVar16;
  undefined1 (*pauVar17) [16];
  float fVar18;
  double *pdVar19;
  undefined1 (*pauVar20) [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double local_res8;
  TVector<double>_u_0 local_150;
  undefined1 local_138 [24];
  FLinearColor_u_0 local_120;
  double local_108;
  
  if ((char)this->_padding_ == '\0') {
    fVar18 = -NAN;
  }
  else {
    fVar18 = *(float *)&this->_padding_;
  }
  pdVar16 = (double *)this->_padding_;
  uVar1 = (uint)this->_padding_;
  uVar13 = (ulonglong)(int)uVar1;
  pdVar19 = pdVar16 + uVar13 * 7;
  pFVar12 = (FLinearColor *)0x0;
  dVar25 = __real_3fe0000000000000;
  while( true ) {
    if ((int)this->_padding_ != (int)uVar13) {
      `TCheckedPointerIterator<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetLine,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    dVar7 = __real_3ff0000000000000;
    if (pdVar16 == pdVar19) break;
    cVar9 = (**(code **)(this->_padding_ + 0x50))(this,*(undefined4 *)(pdVar16 + 6));
    if (cVar9 == '\0') {
      pFVar14 = pFVar12;
      if (param_3 !=
          (TMap<int,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>_>
           *)0x0) {
        pFVar11 = pFVar12;
        if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
          puVar15 = &param_3->field_0x38;
          if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
            puVar15 = *(undefined1 **)&param_3->field_0x40;
          }
          fVar10 = *(float *)(puVar15 +
                             (ulonglong)
                             (*(int *)&param_3->field_0x48 - 1U & (uint)*(float *)(pdVar16 + 6)) * 4
                             );
          if (fVar10 != -NAN) {
            do {
              pFVar11 = (FLinearColor *)((longlong)(int)fVar10 * 0x1c + *(longlong *)param_3);
              if ((pFVar11->field0_0x0)._s_0.R == *(float *)(pdVar16 + 6)) break;
              fVar10 = *(float *)((longlong)(pFVar11 + 1) + 4);
              pFVar11 = pFVar12;
            } while (fVar10 != -NAN);
          }
        }
        pFVar14 = (FLinearColor *)((longlong)&pFVar11->field0_0x0 + 4);
        if (pFVar11 == (FLinearColor *)0x0) {
          pFVar14 = (FLinearColor *)0x0;
        }
      }
      pFVar11 = &param_1->LineColor;
      if (pFVar14 != (FLinearColor *)0x0) {
        pFVar11 = pFVar14;
      }
      local_120._0_8_ = *(undefined8 *)&pFVar11->field0_0x0;
      local_120._8_8_ = *(undefined8 *)((longlong)&pFVar11->field0_0x0 + 8);
      local_res8 = (double)param_1->LineThickness;
      if (*(float *)(pdVar16 + 6) != fVar18) {
        local_res8 = local_res8 * dVar25;
      }
      auVar38 = *(undefined1 (*) [16])(param_1->TotalTransform).Rotation.XY.m128d_f64;
      dVar25 = (double)param_2;
      dVar8 = (param_1->TotalTransform).Rotation.ZW.m128d_f64[1];
      local_108 = (double)(float)((uint)param_2 ^ __xmm_80000000800000008000000080000000);
      dVar6 = (dVar25 * pdVar16[5] + pdVar16[2]) * (param_1->TotalTransform).Scale3D.ZW.m128d_f64[0]
      ;
      dVar7 = (param_1->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar35 = *(undefined1 (*) [16])(param_1->TotalTransform).Rotation.ZW.m128d_f64;
      dVar4 = (param_1->TotalTransform).Scale3D.XY.m128d_f64[0] * (dVar25 * pdVar16[3] + *pdVar16);
      dVar32 = (param_1->TotalTransform).Scale3D.XY.m128d_f64[1] *
               (dVar25 * pdVar16[4] + pdVar16[1]);
      uVar39 = (undefined4)((ulonglong)dVar32 >> 0x20);
      auVar21 = *(undefined1 (*) [16])(param_1->TotalTransform).Rotation.XY.m128d_f64;
      auVar40._8_4_ = SUB84(dVar32,0);
      auVar40._0_8_ = dVar4;
      auVar40._12_4_ = uVar39;
      auVar26 = blendpd(auVar21,auVar35,2);
      dVar25 = auVar35._0_8_;
      auVar41._0_8_ = auVar40._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar4;
      auVar41._8_8_ = dVar6 * auVar21._8_8_ - dVar25 * dVar32;
      auVar31._8_4_ = SUB84(dVar32,0);
      auVar31._0_8_ = dVar4;
      auVar31._12_4_ = uVar39;
      auVar21._8_4_ = SUB84(dVar7,0);
      auVar21._0_8_ = dVar6;
      auVar21._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar21 = blendpd(auVar31,auVar21,2);
      auVar22._0_8_ = auVar21._0_8_ * dVar25 - auVar26._0_8_ * dVar6;
      auVar22._8_8_ = auVar21._8_8_ * auVar35._8_8_ - auVar26._8_8_ * dVar7;
      auVar21 = blendpd(auVar41,auVar22,2);
      dVar7 = auVar41._8_8_ + auVar41._8_8_;
      dVar3 = auVar22._0_8_ + auVar22._0_8_;
      uVar39 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar42._0_8_ = auVar21._0_8_ + auVar21._0_8_;
      auVar42._8_8_ = auVar21._8_8_ + auVar21._8_8_;
      auVar33._8_4_ = SUB84(dVar3,0);
      auVar33._0_8_ = dVar7;
      auVar33._12_4_ = uVar39;
      auVar27._8_4_ = SUB84(dVar3,0);
      auVar27._0_8_ = dVar7;
      auVar27._12_4_ = uVar39;
      auVar21 = blendpd(auVar27,auVar42,2);
      auVar31 = blendpd(auVar38,auVar35,2);
      auVar34._0_8_ = auVar33._8_8_ * auVar38._0_8_ - auVar38._8_8_ * dVar7;
      auVar34._8_8_ = auVar42._0_8_ * auVar38._8_8_ - dVar25 * dVar3;
      auVar28._0_8_ = auVar21._0_8_ * dVar25 - auVar31._0_8_ * auVar42._0_8_;
      auVar28._8_8_ = auVar21._8_8_ * auVar35._8_8_ - auVar31._8_8_ * auVar42._8_8_;
      auVar38._8_4_ = SUB84(auVar34._8_8_,0);
      auVar38._0_8_ = auVar34._0_8_;
      auVar38._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
      auVar35 = blendpd(auVar34,auVar28,2);
      dVar25 = dVar3 * dVar8 + dVar32 + auVar28._0_8_ +
               (param_1->TotalTransform).Translation.XY.m128d_f64[1];
      dVar32 = (param_1->TotalTransform).Scale3D.XY.m128d_f64[0] *
               (local_108 * pdVar16[3] + *pdVar16);
      dVar5 = (param_1->TotalTransform).Scale3D.XY.m128d_f64[1] *
              (local_108 * pdVar16[4] + pdVar16[1]);
      uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
      local_138._16_8_ =
           auVar42._0_8_ * dVar8 + dVar6 + auVar35._0_8_ +
           (param_1->TotalTransform).Translation.ZW.m128d_f64[0];
      local_138._8_4_ = SUB84(dVar25,0);
      local_138._0_8_ =
           dVar7 * dVar8 + dVar4 + auVar38._8_8_ +
           (param_1->TotalTransform).Translation.XY.m128d_f64[0];
      local_138._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      auVar38 = *(undefined1 (*) [16])(param_1->TotalTransform).Rotation.ZW.m128d_f64;
      auVar35 = *(undefined1 (*) [16])(param_1->TotalTransform).Rotation.XY.m128d_f64;
      auVar21 = *(undefined1 (*) [16])(param_1->TotalTransform).Rotation.XY.m128d_f64;
      dVar4 = (local_108 * pdVar16[5] + pdVar16[2]) *
              (param_1->TotalTransform).Scale3D.ZW.m128d_f64[0];
      dVar7 = (param_1->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar6 = (param_1->TotalTransform).Rotation.ZW.m128d_f64[1];
      auVar31 = blendpd(auVar35,auVar38,2);
      auVar43._8_4_ = SUB84(dVar5,0);
      auVar43._0_8_ = dVar32;
      auVar43._12_4_ = uVar39;
      dVar25 = auVar38._0_8_;
      auVar44._0_8_ = auVar43._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar32;
      auVar44._8_8_ = dVar4 * auVar35._8_8_ - dVar25 * dVar5;
      auVar26._8_4_ = SUB84(dVar5,0);
      auVar26._0_8_ = dVar32;
      auVar26._12_4_ = uVar39;
      auVar35._8_4_ = SUB84(dVar7,0);
      auVar35._0_8_ = dVar4;
      auVar35._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar35 = blendpd(auVar26,auVar35,2);
      auVar23._0_8_ = auVar35._0_8_ * dVar25 - auVar31._0_8_ * dVar4;
      auVar23._8_8_ = auVar35._8_8_ * auVar38._8_8_ - auVar31._8_8_ * dVar7;
      auVar35 = blendpd(auVar44,auVar23,2);
      dVar7 = auVar44._8_8_ + auVar44._8_8_;
      dVar3 = auVar23._0_8_ + auVar23._0_8_;
      uVar39 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar45._0_8_ = auVar35._0_8_ + auVar35._0_8_;
      auVar45._8_8_ = auVar35._8_8_ + auVar35._8_8_;
      auVar36._8_4_ = SUB84(dVar3,0);
      auVar36._0_8_ = dVar7;
      auVar36._12_4_ = uVar39;
      auVar29._8_4_ = SUB84(dVar3,0);
      auVar29._0_8_ = dVar7;
      auVar29._12_4_ = uVar39;
      auVar35 = blendpd(auVar29,auVar45,2);
      auVar37._0_8_ = auVar36._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar7;
      auVar37._8_8_ = auVar45._0_8_ * auVar21._8_8_ - dVar25 * dVar3;
      auVar24._8_4_ = SUB84(auVar37._8_8_,0);
      auVar24._0_8_ = auVar37._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
      auVar21 = blendpd(auVar21,auVar38,2);
      auVar30._0_8_ = auVar35._0_8_ * dVar25 - auVar21._0_8_ * auVar45._0_8_;
      auVar30._8_8_ = auVar35._8_8_ * auVar38._8_8_ - auVar21._8_8_ * auVar45._8_8_;
      dVar25 = dVar3 * dVar6 + dVar5 + auVar30._0_8_ +
               (param_1->TotalTransform).Translation.XY.m128d_f64[1];
      auVar38 = blendpd(auVar37,auVar30,2);
      local_150._s_0.Z =
           auVar45._0_8_ * dVar6 + dVar4 + auVar38._0_8_ +
           (param_1->TotalTransform).Translation.ZW.m128d_f64[0];
      local_150._8_4_ = SUB84(dVar25,0);
      local_150._0_8_ =
           dVar7 * dVar6 + dVar32 + auVar24._8_8_ +
           (param_1->TotalTransform).Translation.XY.m128d_f64[0];
      local_150._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      (**(code **)(param_1->_padding_ + 8))
                (param_1,&local_150,local_138,&local_120,(float)local_res8,param_1->bDepthTested);
      dVar25 = __real_3fe0000000000000;
    }
    uVar13 = (ulonglong)uVar1;
    pdVar16 = pdVar16 + 7;
  }
  uVar1 = (uint)this->_padding_;
  uVar13 = (ulonglong)(int)uVar1;
  pauVar17 = (undefined1 (*) [16])this->_padding_;
  pauVar20 = pauVar17 + uVar13 * 5;
  while( true ) {
    if ((int)this->_padding_ != (int)uVar13) {
      `TCheckedPointerIterator<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetCircle,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pauVar17 == pauVar20) break;
    cVar9 = (**(code **)(this->_padding_ + 0x50))(this,*(undefined4 *)(pauVar17[4] + 8));
    if (cVar9 == '\0') {
      pFVar14 = pFVar12;
      if (param_3 !=
          (TMap<int,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>_>
           *)0x0) {
        pFVar11 = pFVar12;
        if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
          puVar15 = &param_3->field_0x38;
          if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
            puVar15 = *(undefined1 **)&param_3->field_0x40;
          }
          fVar10 = *(float *)(puVar15 +
                             (ulonglong)
                             (*(int *)&param_3->field_0x48 - 1U & (uint)*(float *)(pauVar17[4] + 8))
                             * 4);
          if (fVar10 != -NAN) {
            do {
              pFVar11 = (FLinearColor *)((longlong)(int)fVar10 * 0x1c + *(longlong *)param_3);
              if ((pFVar11->field0_0x0)._s_0.R == *(float *)(pauVar17[4] + 8)) break;
              fVar10 = *(float *)((longlong)(pFVar11 + 1) + 4);
              pFVar11 = pFVar12;
            } while (fVar10 != -NAN);
          }
        }
        pFVar14 = (FLinearColor *)((longlong)&pFVar11->field0_0x0 + 4);
        if (pFVar11 == (FLinearColor *)0x0) {
          pFVar14 = (FLinearColor *)0x0;
        }
      }
      dVar3 = (double)param_1->LineThickness;
      pFVar11 = &param_1->LineColor;
      if (pFVar14 != (FLinearColor *)0x0) {
        pFVar11 = pFVar14;
      }
      local_120._0_8_ = *(undefined8 *)&pFVar11->field0_0x0;
      local_120._8_8_ = *(undefined8 *)((longlong)&pFVar11->field0_0x0 + 8);
      if (*(float *)(pauVar17[4] + 8) != fVar18) {
        dVar3 = dVar3 * dVar25;
      }
      dVar25 = *(double *)(pauVar17[1] + 8);
      dVar4 = *(double *)pauVar17[2];
      dVar32 = *(double *)(pauVar17[2] + 8) + *(double *)(pauVar17[2] + 8);
      pcVar2 = *(code **)(param_1->_padding_ + 0x20);
      local_150._s_0.Z = (double)*(undefined8 *)pauVar17[1];
      local_138._16_8_ = dVar7 - (dVar25 * (dVar25 + dVar25) + dVar4 * (dVar4 + dVar4));
      local_138._8_8_ = dVar4 * dVar32 - *(double *)pauVar17[3] * (dVar25 + dVar25);
      local_138._0_8_ = *(double *)pauVar17[3] * (dVar4 + dVar4) + dVar25 * dVar32;
      local_150._0_16_ = *pauVar17;
      (*pcVar2)(param_1,&local_150,local_138,pcVar2,0x40,&local_120,(float)dVar3,
                param_1->bDepthTested);
      dVar25 = __real_3fe0000000000000;
    }
    uVar13 = (ulonglong)uVar1;
    pauVar17 = pauVar17 + 5;
  }
  if ((char)this->_padding_ != '\0') {
    if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
      pFVar14 = pFVar12;
      if (param_3 !=
          (TMap<int,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FLinearColor,0>_>
           *)0x0) {
        pFVar11 = pFVar12;
        if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
          puVar15 = *(undefined1 **)&param_3->field_0x40;
          if (*(undefined1 **)&param_3->field_0x40 == (undefined1 *)0x0) {
            puVar15 = &param_3->field_0x38;
          }
          fVar10 = *(float *)(puVar15 +
                             (ulonglong)(*(int *)&param_3->field_0x48 - 1U & (uint)fVar18) * 4);
          if (fVar10 != -NAN) {
            do {
              pFVar11 = (FLinearColor *)((longlong)(int)fVar10 * 0x1c + *(longlong *)param_3);
              if ((pFVar11->field0_0x0)._s_0.R == fVar18) break;
              fVar10 = *(float *)((longlong)(pFVar11 + 1) + 4);
              pFVar11 = pFVar12;
            } while (fVar10 != -NAN);
          }
        }
        pFVar14 = (FLinearColor *)((longlong)&pFVar11->field0_0x0 + 4);
        if (pFVar11 == (FLinearColor *)0x0) {
          pFVar14 = pFVar12;
        }
      }
      local_150._s_0.Z = (double)this->_padding_;
      pFVar12 = &param_1->LineColor;
      if (pFVar14 != (FLinearColor *)0x0) {
        pFVar12 = pFVar14;
      }
      local_120._0_8_ = *(undefined8 *)&pFVar12->field0_0x0;
      local_120._8_8_ = *(undefined8 *)((longlong)&pFVar12->field0_0x0 + 8);
      local_150._0_8_ = this->_padding_;
      local_150._8_8_ = this->_padding_;
      local_138._0_8_ = this->_padding_;
      local_138._8_8_ = this->_padding_;
      local_138._16_8_ = this->_padding_;
      FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
                (param_1,(TVector<double> *)local_138,(TVector<double> *)&local_150._s_0,
                 (FLinearColor *)&local_120._s_0,param_1->LineThickness * __real_3f000000);
    }
    local_150._0_8_ = this->_padding_;
    local_150._8_8_ = this->_padding_;
    local_150._s_0.Z = (double)this->_padding_;
    FToolDataVisualizer::DrawPoint<UE::Math::TVector<double>_>
              (param_1,(TVector<double> *)&local_150._s_0);
  }
  return;
}

// GenerateTargetPoints @ 14cb927a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FRaySpatialSnapSolver::GenerateTargetPoints
          (FRaySpatialSnapSolver *this,TRay<double> *param_1)

{
  TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStackY_408 [32];
  longlong local_3b8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_378;
  double dStack_370;
  double dStack_368;
  double dStack_360;
  TVector<double>_u_0 local_358;
  double dStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined8 local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined1 uStack_277;
  undefined6 uStack_276;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238;
  undefined7 uStack_237;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined1 uStack_1e7;
  undefined6 uStack_1e6;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  TVector<double>_u_0 local_188;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  int local_108;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  char local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_408;
  pTVar1 = &this->GeneratedTargetPoints;
  piVar2 = &(this->GeneratedTargetPoints).ArrayMax;
  (this->GeneratedTargetPoints).ArrayNum = 0;
  if ((this->GeneratedTargetPoints).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  uVar14 = __real_bff0000000000000;
  lVar18 = (longlong)(int)this->_padding_;
  uVar23 = 0;
  if (0 < lVar18) {
    local_3b8 = 0;
    lVar22 = 0;
    do {
      local_278 = 0;
      uStack_277 = 0;
      dStack_270 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uStack_240 = uStack_240 & 0xffffff00;
      uVar24 = ~uVar23 >> 0x1f;
      dStack_260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar16 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar16 = uVar24;
      }
      dStack_258 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      dStack_250 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_248 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      uStack_23c = 0xffffffff;
      local_238 = 0;
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar20 = this->_padding_;
      local_2f8 = uVar14;
      local_358._s_0.X = *(double *)(lVar20 + lVar22);
      local_358._s_0.Y = ((double *)(lVar20 + lVar22))[1];
      pdVar3 = (double *)(lVar20 + 0x10 + lVar22);
      local_358._s_0.Z = *pdVar3;
      dStack_340 = pdVar3[1];
      puVar4 = (undefined8 *)(lVar20 + 0x20 + lVar22);
      local_338 = *puVar4;
      uStack_330 = puVar4[1];
      local_328 = (param_1->Origin).field0_0x0._s_0.X;
      dStack_320 = (param_1->Origin).field0_0x0._s_0.Y;
      local_318 = (param_1->Origin).field0_0x0._s_0.Z;
      dStack_310 = (param_1->Direction).field0_0x0._s_0.X;
      local_308 = (param_1->Direction).field0_0x0._s_0.Y;
      dStack_300 = (param_1->Direction).field0_0x0._s_0.Z;
      TDistLine3Ray3<double>::ComputeResult((TDistLine3Ray3<double> *)&local_358._s_0);
      uVar16 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar16 = uVar24;
      }
      local_2a8 = local_2f0;
      dStack_2a0 = dStack_2e8;
      local_298 = local_2e0;
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uStack_290 = *(undefined4 *)(this->_padding_ + 0x30 + lVar22);
      uVar16 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar16 = uVar24;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uStack_28c = *(undefined4 *)(this->_padding_ + 0x34 + lVar22);
      uStack_277 = 1;
      uVar16 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar16 = uVar24;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar20 = this->_padding_;
      dStack_270 = *(double *)(lVar20 + lVar22);
      dStack_268 = (double)((undefined8 *)(lVar20 + lVar22))[1];
      puVar4 = (undefined8 *)(lVar20 + 0x10 + lVar22);
      dStack_260 = (double)*puVar4;
      dStack_258 = (double)puVar4[1];
      puVar4 = (undefined8 *)(lVar20 + 0x20 + lVar22);
      dStack_250 = (double)*puVar4;
      local_248 = (double)puVar4[1];
      if (*(void **)&this->PointConstraintFunc != (void *)0x0) {
        Core::Private::Function::CheckCallable(*(void **)&this->PointConstraintFunc);
        plVar7 = *(longlong **)&(this->PointConstraintFunc).field_0x28;
        pcVar9 = *(code **)&this->PointConstraintFunc;
        plVar21 = (longlong *)&(this->PointConstraintFunc).field_0x10;
        if (plVar7 != (longlong *)0x0) {
          plVar21 = plVar7;
        }
        uVar19 = (**(code **)(*plVar21 + 8))();
        (*pcVar9)(&local_3a0,uVar19,&local_2a8);
        uVar16 = 0;
        if ((int)uVar23 < (int)this->_padding_) {
          uVar16 = uVar24;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar20 = this->_padding_;
        dStack_228 = *(double *)(lVar20 + 8 + lVar22);
        dStack_220 = *(double *)(lVar20 + 0x10 + lVar22);
        dVar5 = *(double *)(lVar20 + 0x20 + lVar22);
        dVar6 = *(double *)(lVar20 + 0x28 + lVar22);
        dVar11 = (local_398 - dStack_228) * dVar5 +
                 (local_3a0 - *(double *)(lVar20 + lVar22)) * *(double *)(lVar20 + 0x18 + lVar22) +
                 (local_390 - dStack_220) * dVar6;
        dStack_230 = dVar11 * *(double *)(lVar20 + 0x18 + lVar22) + *(double *)(lVar20 + lVar22);
        dStack_228 = dVar11 * dVar5 + dStack_228;
        dStack_220 = dVar11 * dVar6 + dStack_220;
        uVar16 = 0;
        if ((int)uVar23 < (int)this->_padding_) {
          uVar16 = uVar24;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar20 = this->_padding_;
        dVar12 = local_298 - *(double *)(lVar20 + 0x10 + lVar22);
        dVar13 = local_2a8 - *(double *)(lVar20 + lVar22);
        dVar10 = dStack_2a0 - *(double *)(lVar20 + 8 + lVar22);
        dVar5 = *(double *)(lVar20 + 0x20 + lVar22);
        dVar6 = *(double *)(lVar20 + 0x28 + lVar22);
        dVar11 = *(double *)(lVar20 + 0x18 + lVar22);
        uVar16 = 0;
        if ((int)uVar23 < (int)this->_padding_) {
          uVar16 = uVar24;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar20 = this->_padding_;
        if (((dStack_228 - *(double *)(lVar20 + 8 + lVar22)) * *(double *)(lVar20 + 0x20 + lVar22) +
             (dStack_230 - *(double *)(lVar20 + lVar22)) * *(double *)(lVar20 + 0x18 + lVar22) +
            (dStack_220 - *(double *)(lVar20 + 0x10 + lVar22)) * *(double *)(lVar20 + 0x28 + lVar22)
            ) * (dVar10 * dVar5 + dVar13 * dVar11 + dVar12 * dVar6) < 0.0) {
          uVar16 = 0;
          if ((int)uVar23 < (int)this->_padding_) {
            uVar16 = uVar24;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pdVar3 = (double *)(this->_padding_ + lVar22);
          dStack_230 = *pdVar3;
          dStack_228 = pdVar3[1];
          dStack_220 = *(double *)(this->_padding_ + 0x10 + lVar22);
        }
        local_238 = 1;
      }
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_2a8) &&
          ((FScriptContainerElement *)&local_2a8 < pFVar8 + (longlong)*piVar2 * 0x90)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar17 = (this->GeneratedTargetPoints).ArrayNum;
      if (iVar17 == *piVar2) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x890,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->GeneratedTargetPoints).ArrayNum = iVar17 + 1;
      local_3b8 = local_3b8 + 1;
      lVar20 = (longlong)iVar17;
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 0x38;
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      *(double *)(pFVar8 + lVar20 * 0x90) = local_2a8;
      *(double *)(pFVar8 + lVar20 * 0x90 + 8) = dStack_2a0;
      *(double *)(pFVar8 + lVar20 * 0x90 + 0x10) = local_298;
      *(ulonglong *)(pFVar8 + lVar20 * 0x90 + 0x10 + 8) = CONCAT44(uStack_28c,uStack_290);
      *(undefined8 *)(pFVar8 + lVar20 * 0x90 + 0x20) = local_288;
      *(undefined8 *)(pFVar8 + lVar20 * 0x90 + 0x20 + 8) = uStack_280;
      *(ulonglong *)(pFVar8 + lVar20 * 0x90 + 0x30) =
           CONCAT62(uStack_276,CONCAT11(uStack_277,local_278));
      *(double *)(pFVar8 + lVar20 * 0x90 + 0x30 + 8) = dStack_270;
      *(double *)(pFVar8 + lVar20 * 0x90 + 0x40) = dStack_268;
      *(double *)(pFVar8 + lVar20 * 0x90 + 0x40 + 8) = dStack_260;
      *(double *)(pFVar8 + lVar20 * 0x90 + 0x50) = dStack_258;
      *(double *)(pFVar8 + lVar20 * 0x90 + 0x50 + 8) = dStack_250;
      *(double *)(pFVar8 + lVar20 * 0x90 + 0x60) = local_248;
      *(ulonglong *)(pFVar8 + lVar20 * 0x90 + 0x60 + 8) = CONCAT44(uStack_23c,uStack_240);
      *(ulonglong *)(pFVar8 + lVar20 * 0x90 + 0x70) = CONCAT71(uStack_237,local_238);
      *(double *)(pFVar8 + lVar20 * 0x90 + 0x70 + 8) = dStack_230;
      *(double *)(pFVar8 + lVar20 * 0x90 + 0x80) = dStack_228;
      *(double *)(pFVar8 + lVar20 * 0x90 + 0x80 + 8) = dStack_220;
    } while (local_3b8 < lVar18);
  }
  dVar5 = (param_1->Origin).field0_0x0._s_0.Z;
  dVar11 = (param_1->Direction).field0_0x0._s_0.X;
  dVar10 = (param_1->Direction).field0_0x0._s_0.Y;
  lVar18 = (longlong)(int)this->_padding_;
  dVar12 = (param_1->Origin).field0_0x0._s_0.X;
  dVar13 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar6 = (param_1->Direction).field0_0x0._s_0.Z;
  uVar23 = 0;
  if (0 < lVar18) {
    lVar22 = 0;
    local_378 = dVar5;
    dStack_370 = dVar11;
    dStack_368 = dVar10;
    dStack_360 = dVar6;
    do {
      local_1e8 = 0;
      uStack_1e7 = 0;
      dStack_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uStack_1b0 = uStack_1b0 & 0xffffff00;
      uVar24 = ~uVar23 >> 0x1f;
      dStack_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar16 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar16 = uVar24;
      }
      local_1c8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      dStack_1c0 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_1b8 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      uStack_1ac = 0xffffffff;
      local_1a8 = 0;
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar20 = this->_padding_;
      local_158 = *(undefined8 *)(lVar22 + lVar20);
      uStack_150 = ((undefined8 *)(lVar22 + lVar20))[1];
      puVar4 = (undefined8 *)(lVar22 + 0x10 + lVar20);
      local_148 = *puVar4;
      uStack_140 = puVar4[1];
      puVar4 = (undefined8 *)(lVar22 + 0x20 + lVar20);
      local_138 = *puVar4;
      uStack_130 = puVar4[1];
      puVar4 = (undefined8 *)(lVar22 + 0x30 + lVar20);
      local_128 = *puVar4;
      uStack_120 = puVar4[1];
      local_118 = *(undefined8 *)(lVar22 + 0x40 + lVar20);
      local_110 = uVar14;
      local_108 = 0;
      local_188._s_0.X = dVar12;
      local_188._s_0.Y = dVar13;
      local_188._s_0.Z = dVar5;
      dStack_170 = dVar11;
      local_168 = dVar10;
      dStack_160 = dVar6;
      TDistLine3Circle3<double>::ComputeResult((TDistLine3Circle3<double> *)&local_188._s_0);
      if ((local_a0 == '\0') && (local_108 == 1)) {
        uVar16 = 0;
        if ((int)uVar23 < (int)this->_padding_) {
          uVar16 = uVar24;
        }
        local_218 = local_d0;
        uStack_210 = uStack_c8;
        local_208 = local_c0;
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uStack_200 = *(undefined4 *)(lVar22 + 0x48 + this->_padding_);
        uVar16 = 0;
        if ((int)uVar23 < (int)this->_padding_) {
          uVar16 = uVar24;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uStack_1fc = *(undefined4 *)(lVar22 + 0x4c + this->_padding_);
        pFVar8 = (pTVar1->AllocatorInstance).Data;
        uStack_1e7 = 0;
        if (((pFVar8 <= (FScriptContainerElement *)&local_218) &&
            ((FScriptContainerElement *)&local_218 < pFVar8 + (longlong)*piVar2 * 0x90)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar17 = (this->GeneratedTargetPoints).ArrayNum;
        if (iVar17 == *piVar2) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x890,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->GeneratedTargetPoints).ArrayNum = iVar17 + 1;
        lVar20 = (longlong)iVar17;
        pFVar8 = (pTVar1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar8 + lVar20 * 0x90) = local_218;
        *(undefined8 *)(pFVar8 + lVar20 * 0x90 + 8) = uStack_210;
        *(undefined8 *)(pFVar8 + lVar20 * 0x90 + 0x10) = local_208;
        *(ulonglong *)(pFVar8 + lVar20 * 0x90 + 0x10 + 8) = CONCAT44(uStack_1fc,uStack_200);
        *(undefined8 *)(pFVar8 + lVar20 * 0x90 + 0x20) = local_1f8;
        *(undefined8 *)(pFVar8 + lVar20 * 0x90 + 0x20 + 8) = uStack_1f0;
        *(ulonglong *)(pFVar8 + lVar20 * 0x90 + 0x30) =
             CONCAT62(uStack_1e6,CONCAT11(uStack_1e7,local_1e8));
        *(double *)(pFVar8 + lVar20 * 0x90 + 0x30 + 8) = dStack_1e0;
        *(double *)(pFVar8 + lVar20 * 0x90 + 0x40) = dStack_1d8;
        *(double *)(pFVar8 + lVar20 * 0x90 + 0x40 + 8) = dStack_1d0;
        *(double *)(pFVar8 + lVar20 * 0x90 + 0x50) = local_1c8;
        *(double *)(pFVar8 + lVar20 * 0x90 + 0x50 + 8) = dStack_1c0;
        *(double *)(pFVar8 + lVar20 * 0x90 + 0x60) = local_1b8;
        *(ulonglong *)(pFVar8 + lVar20 * 0x90 + 0x60 + 8) = CONCAT44(uStack_1ac,uStack_1b0);
        *(ulonglong *)(pFVar8 + lVar20 * 0x90 + 0x70) = CONCAT71(uStack_1a7,local_1a8);
        *(undefined8 *)(pFVar8 + lVar20 * 0x90 + 0x70 + 8) = uStack_1a0;
        *(undefined8 *)(pFVar8 + lVar20 * 0x90 + 0x80) = local_198;
        *(undefined8 *)(pFVar8 + lVar20 * 0x90 + 0x80 + 8) = uStack_190;
      }
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 0x50;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}

// UpdateSnappedPoint @ 14cbbc410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FRaySpatialSnapSolver::UpdateSnappedPoint
          (FRaySpatialSnapSolver *this,TRay<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined ***pppuVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  undefined1 auStackY_e8 [32];
  int local_b8 [2];
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  code *local_78 [2];
  undefined **local_68;
  TRay<double> *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b0 = __real_7fefffffffffffff;
  local_b8[0] = 0x7fffffff;
  GenerateTargetPoints(this,param_1);
  local_68 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FRaySpatialSnapSolver::UpdateSnappedPoint'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  pFVar9 = (FScriptContainerElement *)0x0;
  local_78[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FRaySpatialSnapSolver::UpdateSnappedPoint'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                ::Call;
  local_50 = (undefined ***)0x0;
  local_60 = param_1;
  uVar6 = FBasePositionSnapSolver3::FindIndexOfBestSnapInSet
                    ((FBasePositionSnapSolver3 *)this,
                     (TArray<UE::Geometry::FBasePositionSnapSolver3::FSnapTargetPoint,TSizedDefaultAllocator<32>_>
                      *)&this->_padding_,&local_b0,local_b8,
                     (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                      *)local_78);
  pFVar10 = pFVar9;
  if (-1 < (int)uVar6) {
    uVar7 = 0;
    if ((int)uVar6 < (int)this->_padding_) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar10 = (FScriptContainerElement *)((longlong)(int)uVar6 * 0x90 + this->_padding_);
  }
  uVar6 = FBasePositionSnapSolver3::FindIndexOfBestSnapInSet
                    ((FBasePositionSnapSolver3 *)this,&this->GeneratedTargetPoints,&local_b0,
                     local_b8,(TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                               *)local_78);
  if (-1 < (int)uVar6) {
    uVar7 = 0;
    if ((int)uVar6 < (this->GeneratedTargetPoints).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar9 = (this->GeneratedTargetPoints).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x90;
  }
  if (pFVar9 == (FScriptContainerElement *)0x0) {
    pFVar9 = pFVar10;
  }
  if ((((char)this->_padding_ != '\0') && ((char)this->_padding_ != '\0')) &&
     (*(char *)((longlong)&this->_padding_ + 1) == '\0')) {
    bVar5 = FBasePositionSnapSolver3::TestSnapTarget
                      ((FBasePositionSnapSolver3 *)this,(FSnapTargetPoint *)&this->_padding_,
                       local_b0 * (double)this->_padding_,local_b8[0],
                       (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                        *)local_78);
    if (bVar5) goto LAB_14cbbc6a0;
  }
  if (pFVar9 == (FScriptContainerElement *)0x0) {
    (**(code **)(this->_padding_ + 0x70))(this);
  }
  else {
    pFVar10 = pFVar9 + 0x78;
    if (pFVar9[0x70] == (FScriptContainerElement)0x0) {
      pFVar10 = pFVar9;
    }
    local_90 = *(double *)pFVar10;
    dStack_88 = *(double *)(pFVar10 + 8);
    local_80 = *(double *)(pFVar10 + 0x10);
    dVar1 = (param_1->Direction).field0_0x0._s_0.X;
    dVar2 = (param_1->Direction).field0_0x0._s_0.Y;
    dVar3 = (param_1->Direction).field0_0x0._s_0.Z;
    dVar11 = (*(double *)(pFVar9 + 8) - (param_1->Origin).field0_0x0._s_0.Y) * dVar2 +
             (*(double *)pFVar9 - (param_1->Origin).field0_0x0._s_0.X) * dVar1 +
             (*(double *)(pFVar9 + 0x10) - (param_1->Origin).field0_0x0._s_0.Z) * dVar3;
    if (0.0 <= dVar11) {
      local_a8 = dVar1 * dVar11 + (param_1->Origin).field0_0x0._s_0.X;
      dStack_a0 = dVar2 * dVar11 + (param_1->Origin).field0_0x0._s_0.Y;
      local_98 = dVar3 * dVar11 + (param_1->Origin).field0_0x0._s_0.Z;
    }
    else {
      local_a8 = (param_1->Origin).field0_0x0._s_0.X;
      dStack_a0 = (param_1->Origin).field0_0x0._s_0.Y;
      local_98 = (param_1->Origin).field0_0x0._s_0.Z;
    }
    (**(code **)(this->_padding_ + 0x68))(this,pFVar9,&local_a8,&local_90);
  }
LAB_14cbbc6a0:
  if (local_78[0] != (code *)0x0) {
    pppuVar8 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar8 = local_50;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  return;
}

