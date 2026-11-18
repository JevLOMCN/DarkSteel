// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// operator() @ 14c8aab30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FMeshOcclusionMapBaker::Bake'::__l2::<lambda_2>::operator()
          (void *this,FCorrespondenceSample *param_1,double *param_2,TVector<double> *param_3)

{
  double *pdVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  longlong *plVar13;
  double *pdVar14;
  double extraout_XMM0_Qa;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_338 [32];
  undefined1 local_308 [8];
  double local_300;
  TVector<double>_u_0 local_2f8;
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  double local_288;
  double dStack_280;
  double local_278;
  TVector<double>_u_0 local_270;
  TVector<double> *local_258;
  double *local_250;
  double local_248;
  double dStack_240;
  double local_238;
  TVector<double>_u_0 local_230;
  TQuaternion<double>_u_0 local_218;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TQuaternion<double>_u_0 local_1a0;
  double local_180;
  TVector<double>_u_0 local_178;
  double local_160;
  double dStack_158;
  double local_150;
  undefined8 local_148 [2];
  longlong local_138;
  longlong local_128 [3];
  longlong *local_110;
  undefined1 local_108;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  uVar27 = SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0);
  uVar28 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20)
  ;
  local_2c0 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  uVar23 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_;
  uVar24 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_;
  uVar25 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_;
  uVar26 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_;
  if (*(int *)(*(longlong *)this + 0x48) == 1) {
    uVar23 = *(undefined4 *)&(param_1->BaseNormal).field0_0x0;
    uVar24 = *(undefined4 *)((longlong)&(param_1->BaseNormal).field0_0x0 + 4);
    uVar25 = *(undefined4 *)((longlong)&(param_1->BaseNormal).field0_0x0 + 8);
    uVar26 = *(undefined4 *)((longlong)&(param_1->BaseNormal).field0_0x0 + 0xc);
    local_2c0 = *(double *)((longlong)&(param_1->BaseNormal).field0_0x0 + 0x10);
    uVar27 = SUB84(local_2c0,0);
    uVar28 = (undefined4)((ulonglong)local_2c0 >> 0x20);
  }
  uVar3 = param_1->DetailTriID;
  lVar4 = **(longlong **)((longlong)this + 8);
  if (((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144))
      ) && ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar4 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                               (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_258 = param_3;
    local_250 = param_2;
    local_1f8 = uVar23;
    uStack_1f4 = uVar24;
    uStack_1f0 = uVar25;
    uStack_1ec = uVar26;
    UE::Geometry::TDynamicMeshOverlay<float,3>::GetTriBaryInterpolate<double>
              ((TDynamicMeshOverlay<float,3> *)**(undefined8 **)((longlong)this + 0x10),uVar3,
               (double *)&param_1->DetailBaryCoords,local_2f8.XYZ);
    dVar10 = __real_3ff0000000000000;
    dVar17 = local_2f8._s_0.X * local_2f8._s_0.X + local_2f8._s_0.Y * local_2f8._s_0.Y +
             local_2f8._s_0.Z * local_2f8._s_0.Z;
    if (__real_3e45798ee0000000 < dVar17) {
      lVar4 = *(longlong *)this;
      local_180 = __real_3ff0000000000000 / SQRT(dVar17);
      dVar17 = local_2f8._s_0.X * local_180;
      dVar15 = local_2f8._s_0.Y * local_180;
      dVar16 = local_2f8._s_0.Z * local_180;
      local_2f8._s_0.X = dVar17;
      local_2f8._s_0.Y = dVar15;
      local_2f8._s_0.Z = dVar16;
      if (((*(byte *)(lVar4 + 0x18) & 2) != 0) && (*(int *)(lVar4 + 0x48) == 0)) {
        if ((*(longlong *)(lVar4 + 0x10) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("BaseMeshTangents",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapBaker.cpp"
                                ,0x66,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UE::Geometry::TMeshTangents<double>::GetInterpolatedTriangleTangent
                  (*(TMeshTangents<double> **)(*(longlong *)this + 0x10),
                   (param_1->BaseSample).TriangleIndex,&(param_1->BaseSample).BaryCoords,
                   (TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_1d0._s_0);
      }
      local_1b8._s_0.Z = (param_1->DetailBaryCoords).field0_0x0._s_0.Z;
      UE::Geometry::FDynamicMesh3::GetTriBaryPoint
                ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),
                 (TVector<double> *)&local_2b8._s_0,uVar3,
                 (param_1->DetailBaryCoords).field0_0x0._s_0.X,
                 (param_1->DetailBaryCoords).field0_0x0._s_0.Y,local_1b8._s_0.Z);
      local_218._s_0.X = 0.0;
      local_2b8._s_0.X = local_2b8._s_0.X + dVar17 * __real_3ee4f8b580000000;
      local_218._s_0.W = dVar10;
      local_2b8._s_0.Z = local_2b8._s_0.Z + dVar16 * __real_3ee4f8b580000000;
      local_218._s_0.Y = 0.0;
      local_218._s_0.Z = 0.0;
      local_2b8._s_0.Y = local_2b8._s_0.Y + dVar15 * __real_3ee4f8b580000000;
      local_178._s_0.X =
           (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_);
      local_178._s_0.Y =
           (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_);
      local_178._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_230._s_0.X = local_2b8._s_0.X;
      local_230._s_0.Y = local_2b8._s_0.Y;
      local_230._s_0.Z = local_2b8._s_0.Z;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&local_218._s_0,(TVector<double> *)&local_178._s_0,
                 (TVector<double> *)&local_2f8._s_0);
      plVar13 = *(longlong **)((longlong)this + 0x18);
      EnterCriticalSection((LPCRITICAL_SECTION)plVar13[1]);
      *(int *)(*plVar13 + 4) = *(int *)(*plVar13 + 4) * 0xbb38435 + 0x3619636b;
      LeaveCriticalSection((LPCRITICAL_SECTION)plVar13[1]);
      uVar8 = local_218._s_0.Y;
      uVar7 = local_218._s_0.X;
      dVar18 = local_218._s_0.X + local_218._s_0.X;
      dVar6 = local_218._s_0.Z + local_218._s_0.Z;
      dVar21 = local_218._s_0.Y + local_218._s_0.Y;
      __libm_sse2_sincos_();
      local_1a0._s_0.X = (dVar6 * (double)uVar7 + dVar21 * local_218._s_0.W) * extraout_XMM0_Qa;
      local_1a0._s_0.Y = (dVar6 * (double)uVar8 - dVar18 * local_218._s_0.W) * extraout_XMM0_Qa;
      local_1a0._s_0.Z =
           (dVar10 - (dVar21 * (double)uVar8 + dVar18 * (double)uVar7)) * extraout_XMM0_Qa;
      UE::Geometry::TFrame3<double>::Rotate
                ((TFrame3<double> *)&local_230._s_0,(TQuaternion<double> *)&local_1a0._s_0);
      plVar13 = *(longlong **)((longlong)this + 0x20);
      local_138 = 0;
      local_110 = (longlong *)0x0;
      dVar6 = 0.0;
      local_108 = 0;
      local_2d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_2d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_148[0] = *(undefined8 *)(*(longlong *)this + 0x20);
      lVar4 = plVar13[1];
      pdVar14 = (double *)*plVar13;
      local_2c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pdVar1 = pdVar14 + (longlong)(int)lVar4 * 3;
      local_2e0 = 0.0;
      local_300 = 0.0;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_14c8aafe0:
      do {
        if ((int)plVar13[1] != (int)lVar4) {
          local_308[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_308);
        }
        if (pdVar14 == pdVar1) {
          if ((*(byte *)(*(longlong *)this + 0x18) & 1) != 0) {
            if (local_2e0 <= __real_3f1a36e2eb1c432d) {
              dVar6 = 0.0;
            }
            else {
              dVar6 = dVar6 / local_2e0;
            }
          }
          dVar15 = local_2d8;
          dVar16 = dStack_2d0;
          dVar17 = local_2c8;
          if ((*(byte *)(*(longlong *)this + 0x18) & 2) != 0) {
            if ((local_300 <= 0.0) ||
               (SQRT((double)uVar7 * (double)uVar7 + (double)uVar8 * (double)uVar8 +
                     (double)uVar9 * (double)uVar9) <= 0.0)) {
              local_160 = (double)CONCAT44(uStack_1f4,local_1f8);
              dStack_158 = (double)CONCAT44(uStack_1ec,uStack_1f0);
              local_150 = local_2c0;
              dVar15 = local_160;
              dVar16 = dStack_158;
              dVar17 = local_2c0;
            }
            else {
              local_248 = dVar10 / local_300;
              dStack_240 = (double)uVar7 * local_248;
              local_238 = (double)uVar9 * local_248;
              local_248 = (double)uVar8 * local_248;
              dVar17 = SQRT(dStack_240 * dStack_240 + local_248 * local_248 + local_238 * local_238)
              ;
              if (dVar17 <= 0.0) {
                local_238 = 0.0;
                local_248 = 0.0;
                dStack_240 = 0.0;
                dVar17 = 0.0;
                dVar15 = 0.0;
                dVar16 = 0.0;
              }
              else {
                dVar10 = dVar10 / dVar17;
                local_248 = local_248 * dVar10;
                dStack_240 = dStack_240 * dVar10;
                local_238 = dVar10 * local_238;
                dVar15 = local_248;
                dVar16 = dStack_240;
                dVar17 = local_238;
              }
            }
          }
          *local_250 = dVar6;
          (local_258->field0_0x0)._s_0.X = dVar15;
          (local_258->field0_0x0)._s_0.Y = dVar16;
          (local_258->field0_0x0)._s_0.Z = dVar17;
          if (local_138 == 0) {
            return;
          }
          plVar13 = local_128;
          if (local_110 != (longlong *)0x0) {
            plVar13 = local_110;
          }
          (**(code **)(*plVar13 + 0x10))();
          return;
        }
        local_2a0._s_0.X = *pdVar14;
        local_2a0._s_0.Y = pdVar14[1];
        local_2a0._s_0.Z = pdVar14[2];
        UE::Geometry::operator*<double>
                  ((TVector<double> *)&local_1b8._s_0,(TQuaternion<double> *)&local_218._s_0,
                   (TVector<double> *)&local_2a0._s_0);
        local_278 = local_2b8._s_0.Z;
        local_288 = local_2b8._s_0.X;
        dStack_280 = local_2b8._s_0.Y;
        local_270._s_0.Z = local_1b8._s_0.Z;
        local_270._s_0.X = local_1b8._s_0.X;
        local_270._s_0.Y = local_1b8._s_0.Y;
        UE::Math::TVector<double>::Normalize
                  ((TVector<double> *)&local_270._s_0,__real_3e45798ee0000000);
        if ((local_270._s_0.X * dVar17 + local_270._s_0.Y * dVar15 + local_270._s_0.Z * dVar16 <=
             0.0) && (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<6156481232474472575>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapBaker.cpp"
                                          ,0x7f,"OcclusionRay.Direction.Dot(DetailTriNormal) > 0"),
                     bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        cVar12 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x28) + 0x68))
                           ((longlong *)**(undefined8 **)((longlong)this + 0x28),&local_288,
                            local_148);
        bVar2 = *(byte *)(*(longlong *)this + 0x18);
        if ((bVar2 & 1) != 0) {
          dVar21 = local_270._s_0.X * dVar17 + local_270._s_0.Y * dVar15 + local_270._s_0.Z * dVar16
          ;
          dVar18 = dVar10;
          if (dVar21 < **(double **)((longlong)this + 0x30)) {
            dVar21 = dVar21 / **(double **)((longlong)this + 0x30);
            if (0.0 <= dVar21) {
              if (dVar10 <= dVar21) {
                dVar21 = dVar10;
              }
              if (0.0 <= dVar21) goto LAB_14c8ab14b;
              dVar21 = 0.0;
            }
            else {
              dVar21 = 0.0;
LAB_14c8ab14b:
              if (dVar10 <= dVar21) {
                dVar21 = dVar10;
              }
            }
            dVar18 = dVar21 * dVar21;
          }
          local_2e0 = local_2e0 + dVar18;
          if (cVar12 != '\0') {
            dVar6 = dVar6 + dVar18;
          }
        }
        if ((bVar2 & 2) != 0) {
          local_2a0._s_0.X = local_270._s_0.X;
          local_2a0._s_0.Y = local_270._s_0.Y;
          local_2a0._s_0.Z = local_270._s_0.Z;
          uVar19 = local_270._s_0.X;
          uVar20 = local_270._s_0.Z;
          uVar22 = local_270._s_0.Y;
          if (*(int *)(*(longlong *)this + 0x48) == 0) {
            uVar19 = local_1e8._s_0.Y * local_270._s_0.Y + local_1e8._s_0.X * local_270._s_0.X +
                     local_1e8._s_0.Z * local_270._s_0.Z;
            uVar20 = local_270._s_0.Y * (param_1->BaseNormal).field0_0x0._s_0.Y +
                     local_270._s_0.X * (param_1->BaseNormal).field0_0x0._s_0.X +
                     local_270._s_0.Z * (param_1->BaseNormal).field0_0x0._s_0.Z;
            uVar22 = local_1d0._s_0.Y * local_270._s_0.Y + local_1d0._s_0.X * local_270._s_0.X +
                     local_1d0._s_0.Z * local_270._s_0.Z;
          }
          local_300 = local_300 + dVar10;
          if (cVar12 == '\0') {
            uVar8 = (double)uVar8 + (double)uVar19;
            pdVar14 = pdVar14 + 3;
            uVar7 = (double)uVar7 + (double)uVar22;
            uVar9 = (double)uVar9 + (double)uVar20;
            local_2d8 = (double)uVar8;
            dStack_2d0 = (double)uVar7;
            local_2c8 = (double)uVar9;
            local_2a0._s_0.X = local_270._s_0.X;
            local_2a0._s_0.Y = local_270._s_0.Y;
            goto LAB_14c8aafe0;
          }
        }
        pdVar14 = pdVar14 + 3;
      } while( true );
    }
  }
  *param_2 = 0.0;
  *(undefined4 *)&param_3->field0_0x0 = uVar23;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 4) = uVar24;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 8) = uVar25;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc) = uVar26;
  (param_3->field0_0x0)._s_0.Z = (double)CONCAT44(uVar28,uVar27);
  return;
}

// operator() @ 14c8af440

void __thiscall
`UE::Geometry::FMeshOcclusionMapBaker::Bake'::__l2::<lambda_3>::operator()
          (void *this,FVector2i *param_1,FCorrespondenceSample *param_2)

{
  int *piVar1;
  double dVar2;
  TVector<float> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double local_res8;
  TVector<double>_u_0 local_58 [3];
  
  local_res8 = 0.0;
  __l2::<lambda_2>::operator()
            (*(void **)this,param_2,&local_res8,(TVector<double> *)&local_58[0]._s_0);
  if ((*(byte *)(*(longlong *)((longlong)this + 8) + 0x18) & 1) != 0) {
    dVar2 = 0.0;
    if (0.0 <= __real_3f800000 - (float)local_res8) {
      dVar2 = (double)(__real_3f800000 - (float)local_res8);
      if (__real_3ff0000000000000 <= dVar2) {
        dVar2 = __real_3ff0000000000000;
      }
    }
    piVar1 = *(int **)(*(longlong *)((longlong)this + 8) + 0x50);
    fVar6 = (float)dVar2;
    fVar5 = fVar6 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
    fVar4 = fVar6 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
    fVar6 = fVar6 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    pTVar3 = UE::Geometry::TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                       ((TDenseGrid2<UE::Math::TVector<float>_> *)(piVar1 + 2),
                        (longlong)(param_1->field0_0x0)._s_0.Y * (longlong)*piVar1 +
                        (longlong)(param_1->field0_0x0)._s_0.X);
    (pTVar3->field0_0x0)._s_0.X = fVar5;
    (pTVar3->field0_0x0)._s_0.Y = fVar4;
    (pTVar3->field0_0x0)._s_0.Z = fVar6;
  }
  if ((*(byte *)(*(longlong *)((longlong)this + 8) + 0x18) & 2) != 0) {
    piVar1 = *(int **)(*(longlong *)((longlong)this + 8) + 0x58);
    fVar6 = ((float)(double)local_58[0]._0_8_ +
            UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X) * __real_3f000000;
    fVar5 = ((float)(double)local_58[0]._8_8_ +
            UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y) * __real_3f000000;
    fVar4 = ((float)(double)local_58[0]._16_8_ +
            UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z) * __real_3f000000;
    pTVar3 = UE::Geometry::TDenseGrid2<UE::Math::TVector<float>_>::operator[]
                       ((TDenseGrid2<UE::Math::TVector<float>_> *)(piVar1 + 2),
                        (longlong)(param_1->field0_0x0)._s_0.Y * (longlong)*piVar1 +
                        (longlong)(param_1->field0_0x0)._s_0.X);
    (pTVar3->field0_0x0)._s_0.X = fVar6;
    (pTVar3->field0_0x0)._s_0.Y = fVar5;
    (pTVar3->field0_0x0)._s_0.Z = fVar4;
  }
  return;
}

// Bake @ 14c8bedb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMeshOcclusionMapBaker::Bake(FMeshOcclusionMapBaker *this)

{
  TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>_>_>
  *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  FMeshImageBakingCache *this_00;
  FImageOccupancyMap *pFVar6;
  long64 lVar7;
  code *pcVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined4 extraout_EAX;
  TVector<double> *pTVar13;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar14;
  undefined7 extraout_var;
  TVector<float> *pTVar15;
  int iVar16;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar22;
  TImageBuilder<UE::Math::TVector<float>_> *pTVar23;
  ulonglong uVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  double dVar27;
  double extraout_XMM0_Qa;
  undefined1 auVar28 [16];
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  double _X;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_3a8 [32];
  <lambda_1> local_358;
  undefined1 local_357 [7];
  ForAnyElementType local_350;
  uint local_348;
  uint local_344;
  THemisphericalFibonacci<double> local_340;
  TArray<float,TSizedDefaultAllocator<32>_> local_338;
  undefined4 local_328;
  undefined4 local_324;
  long64 local_320;
  double local_318;
  double dStack_310;
  double local_308;
  int local_300 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_2f8;
  TVector<float>_u_0 local_2e8;
  FDynamicMesh3 *local_2d8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_2d0;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_2c8;
  double local_2c0;
  int *local_2b8;
  FMeshOcclusionMapBaker *local_2b0;
  longlong local_2a8;
  FMeshOcclusionMapBaker *local_2a0;
  TVector<float>_u_0 local_298;
  undefined4 *local_288;
  _RTL_CRITICAL_SECTION *local_280;
  FMeshOcclusionMapBaker **local_278;
  FMeshOcclusionMapBaker *local_270;
  code *local_268;
  FMeshOcclusionMapBaker ***local_260;
  FMeshImageBakingCache *local_258;
  code **local_250;
  TArrayView<std::nullptr_t,int> local_248;
  code *local_238;
  FMeshImageBakingCache **local_230;
  code *local_228;
  <lambda_1> *local_220;
  code *local_218;
  FMeshOcclusionMapBaker **local_210;
  code *local_208;
  undefined1 *local_200;
  code *local_1f8;
  int **local_1f0;
  TArrayView<std::nullptr_t,int> local_1e8;
  code *local_1d8;
  FImageOccupancyMap **local_1d0;
  TVector<double>_u_0 local_1c8;
  TQuaternion<double>_u_0 local_1b0;
  FMeshOcclusionMapBaker *local_190;
  FDynamicMesh3 **local_188;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_180;
  undefined4 **local_178;
  ForAnyElementType *local_170;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **local_168;
  double *local_160;
  FImageOccupancyMap *local_158;
  code **local_150;
  code **local_148;
  code **local_140;
  code **local_138;
  int local_130;
  TArray<float,TSizedDefaultAllocator<32>_> *local_128;
  undefined8 local_120;
  undefined8 local_118;
  TVector<double> local_110;
  _RTL_CRITICAL_SECTION local_f8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  if (this->OcclusionType == None) {
    return;
  }
  this_00 = (FMeshImageBakingCache *)this->_padding_;
  if ((this_00 == (FMeshImageBakingCache *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("BakeCache",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapBaker.cpp"
                          ,0x13,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_2d8 = this_00->DetailMesh;
  local_2c8 = this_00->DetailSpatial;
  local_2d0 = FMeshImageBakingCache::GetDetailNormals(this_00);
  if ((local_2d0 == (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("DetailNormalOverlay",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshOcclusionMapBaker.cpp"
                          ,0x17,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  dVar27 = __real_4056800000000000 - this->BiasAngleDeg;
  if (0.0 <= dVar27) {
    if (__real_4056800000000000 <= dVar27) {
      dVar27 = __real_4056800000000000;
    }
  }
  else {
    dVar27 = 0.0;
  }
  local_2c0 = cos(dVar27 * __real_3f91df46a2529d39);
  dVar27 = __real_3ff0000000000000;
  pTVar23 = (TImageBuilder<UE::Math::TVector<float>_> *)0x0;
  local_348 = 0;
  local_350.Data = (FScriptContainerElement *)0x0;
  local_344 = 0;
  local_340.Distribution = (EDistribution)(this->Distribution != Uniform);
  iVar16 = this->NumOcclusionRays;
  pTVar17 = pTVar23;
  local_340.N = iVar16;
  if (0 < iVar16) {
    do {
      THemisphericalFibonacci<double>::Point
                (&local_340,(TVector<double> *)&local_1c8._s_0,(int)pTVar17);
      if (0.0 < local_1c8._s_0.Z) {
        auVar28._0_8_ = local_1c8._s_0.Y * local_1c8._s_0.Y;
        auVar28._8_8_ = 0;
        auVar32._0_8_ =
             local_1c8._s_0.X * local_1c8._s_0.X + auVar28._0_8_ +
             local_1c8._s_0.Z * local_1c8._s_0.Z;
        auVar32._8_8_ = 0;
        auVar28 = sqrtpd(auVar28,auVar32);
        if (auVar28._0_8_ <= 0.0) {
          local_308 = 0.0;
          local_318 = 0.0;
          dStack_310 = 0.0;
        }
        else {
          local_308 = dVar27 / auVar28._0_8_;
          local_318 = local_308 * local_1c8._s_0.X;
          dStack_310 = local_308 * local_1c8._s_0.Y;
          local_308 = local_308 * local_1c8._s_0.Z;
        }
        if (((local_350.Data <= (FScriptContainerElement *)&local_318) &&
            ((FScriptContainerElement *)&local_318 <
             local_350.Data + (longlong)(int)local_344 * 0x18)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (local_348 == local_344) {
          local_348 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_350,(int *)&local_344);
        }
        *(double *)(local_350.Data + (longlong)(int)local_348 * 0x18) = local_318;
        *(double *)(local_350.Data + (longlong)(int)local_348 * 0x18 + 8) = dStack_310;
        *(double *)(local_350.Data + (longlong)(int)local_348 * 0x18 + 0x10) = local_308;
        local_348 = local_348 + 1;
      }
      uVar19 = (int)pTVar17 + 1;
      pTVar17 = (TImageBuilder<UE::Math::TVector<float>_> *)(ulonglong)uVar19;
    } while ((int)uVar19 < iVar16);
    pTVar17 = (TImageBuilder<UE::Math::TVector<float>_> *)(ulonglong)local_348;
  }
  if (0 < (int)pTVar17) {
    uVar34 = (undefined4)__real_bff0000000000000;
    uVar35 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    pTVar14 = pTVar23;
    pTVar22 = pTVar23;
    do {
      uVar20 = (uint)pTVar14;
      uVar19 = 0;
      if ((int)uVar20 < (int)pTVar17) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      uVar10 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      uVar5 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      pFVar26 = local_350.Data + (longlong)pTVar22;
      dVar2 = *(double *)pFVar26;
      dVar3 = *(double *)(pFVar26 + 8);
      dVar4 = *(double *)(pFVar26 + 0x10);
      _X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y * dVar3 +
           UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X * dVar2 +
           UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z * dVar4;
      if ((double)CONCAT44(uVar35,uVar34) <= _X) {
        if (dVar27 <= _X) {
          _X = dVar27;
        }
      }
      else {
        _X = (double)CONCAT44(uVar35,uVar34);
      }
      acos(_X);
      __libm_sse2_sincos_();
      local_1b0._s_0.Y = extraout_XMM0_Qa * (dVar4 * (double)uVar5 - dVar2 * (double)uVar11);
      local_1b0._s_0.X = extraout_XMM0_Qa * (dVar3 * (double)uVar11 - dVar4 * (double)uVar10);
      local_1b0._s_0.Z = extraout_XMM0_Qa * (dVar2 * (double)uVar10 - dVar3 * (double)uVar5);
      pTVar13 = operator*<double>(&local_110,(TQuaternion<double> *)&local_1b0._s_0,
                                  (TVector<double> *)pFVar26);
      uVar34 = (undefined4)__real_bff0000000000000;
      uVar35 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
      pTVar14 = (TImageBuilder<UE::Math::TVector<float>_> *)(ulonglong)(uVar20 + 1);
      pTVar22 = (TImageBuilder<UE::Math::TVector<float>_> *)&(pTVar22->Image).Buffer.ArrayMax;
      dVar2 = (pTVar13->field0_0x0)._s_0.Y;
      *(double *)pFVar26 = (pTVar13->field0_0x0)._s_0.X;
      *(double *)(pFVar26 + 8) = dVar2;
      *(double *)(pFVar26 + 0x10) = (pTVar13->field0_0x0)._s_0.Z;
      pTVar17 = (TImageBuilder<UE::Math::TVector<float>_> *)(ulonglong)local_348;
    } while ((int)(uVar20 + 1) < (int)local_348);
  }
  local_328 = 0x7a69;
  local_324 = 0x7a69;
  InitializeCriticalSectionAndSpinCount(&local_f8,4000);
  local_288 = &local_328;
  local_280 = &local_f8;
  local_188 = &local_2d8;
  local_180 = &local_2d0;
  local_178 = &local_288;
  local_170 = &local_350;
  local_168 = &local_2c8;
  local_160 = &local_2c0;
  local_190 = this;
  if ((this->OcclusionType & AmbientOcclusion) != None) {
    pTVar14 = ::operator_new(0x30);
    pTVar17 = pTVar23;
    if (pTVar14 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
      (pTVar14->Dimensions).Width = 0;
      (pTVar14->Dimensions).Height = 0;
      (pTVar14->Image).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar14->Image).Buffer.ArrayNum = 0;
      (pTVar14->Image).Buffer.ArrayMax = 0;
      (pTVar14->Image).DimensionX = 0;
      (pTVar14->Image).DimensionY = 0;
      pTVar17 = pTVar14;
    }
    pTVar1 = &this->OcclusionBuilder;
    if (pTVar1 == (TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>_>_>
                   *)&local_118) {
      if (pTVar17 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
        pFVar26 = (pTVar17->Image).Buffer.AllocatorInstance.Data;
        pTVar14 = pTVar17;
        if (pFVar26 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar26);
        }
        goto LAB_14c8bf3c4;
      }
    }
    else {
      pTVar14 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar17;
      if (pTVar14 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
        pFVar26 = (pTVar14->Image).Buffer.AllocatorInstance.Data;
        if (pFVar26 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar26);
        }
LAB_14c8bf3c4:
        ::operator_delete(pTVar14,0x30);
      }
    }
    TImageBuilder<UE::Math::TVector<float>_>::SetDimensions(pTVar1->Ptr,this_00->Dimensions);
    local_298._0_8_ =
         CONCAT44(UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y,
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X);
    local_298._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    TImageBuilder<UE::Math::TVector<float>_>::Clear(pTVar1->Ptr,(TVector<float> *)&local_298._s_0);
  }
  fVar9 = __real_3f000000;
  if ((this->OcclusionType & BentNormal) == None) goto LAB_14c8bf50d;
  pTVar14 = ::operator_new(0x30);
  pTVar17 = pTVar23;
  if (pTVar14 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
    (pTVar14->Dimensions).Width = 0;
    (pTVar14->Dimensions).Height = 0;
    (pTVar14->Image).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar14->Image).Buffer.ArrayNum = 0;
    (pTVar14->Image).Buffer.ArrayMax = 0;
    (pTVar14->Image).DimensionX = 0;
    (pTVar14->Image).DimensionY = 0;
    pTVar17 = pTVar14;
  }
  pTVar1 = &this->NormalBuilder;
  if (pTVar1 == (TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector<float>_>_>_>
                 *)&local_120) {
    if (pTVar17 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
      pFVar26 = (pTVar17->Image).Buffer.AllocatorInstance.Data;
      pTVar14 = pTVar17;
      if (pFVar26 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar26);
      }
      goto LAB_14c8bf481;
    }
  }
  else {
    pTVar14 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar17;
    if (pTVar14 != (TImageBuilder<UE::Math::TVector<float>_> *)0x0) {
      pFVar26 = (pTVar14->Image).Buffer.AllocatorInstance.Data;
      if (pFVar26 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar26);
      }
LAB_14c8bf481:
      ::operator_delete(pTVar14,0x30);
    }
  }
  TImageBuilder<UE::Math::TVector<float>_>::SetDimensions(pTVar1->Ptr,this_00->Dimensions);
  uVar34 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y;
  uVar35 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X;
  uVar30 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  if (this->NormalSpace == Object) {
    uVar34 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar35 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  local_2e8._s_0.X = ((float)uVar35 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X) * fVar9
  ;
  local_2e8._s_0.Y = ((float)uVar34 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y) * fVar9
  ;
  local_2e8._s_0.Z = ((float)uVar30 + UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z) * fVar9
  ;
  TImageBuilder<UE::Math::TVector<float>_>::Clear(pTVar1->Ptr,(TVector<float> *)&local_2e8._s_0);
LAB_14c8bf50d:
  local_278 = &local_190;
  local_260 = &local_278;
  local_268 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshOcclusionMapBaker::Bake'::__l2::<lambda_3>,void,UE::Geometry::FVector2i_const_&,UE::Geometry::FMeshImageBakingCache::FCorrespondenceSample_const_&>
              ::Call;
  local_270 = this;
  if (((this_00->bOccupancyValid == false) || (this_00->bSamplesValid == false)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsCacheValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                          ,0x17e,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_250 = &local_268;
  local_238 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshImageBakingCache::EvaluateSamples'::__l2::<lambda_1>,void,int>
              ::Call;
  local_230 = &local_258;
  local_248.DataPtr = (void **)0x0;
  local_248.ArrayNum = 0;
  local_258 = this_00;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this_00->Dimensions).Height,1,
             (TFunctionRef<void___cdecl(int)> *)&local_238,local_358,None,&local_248);
  if ((this_00->bOccupancyValid == false) ||
     (uVar34 = extraout_EAX, this_00->bSamplesValid == false)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsCacheValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshImageBakingCache.cpp"
                        ,0x66,L"");
    uVar34 = (undefined4)CONCAT71(extraout_var,bVar12);
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar6 = (this_00->OccupancyMap).Ptr;
  lVar18 = (pFVar6->GutterTexels).ArrayNum;
  pTVar17 = pTVar23;
  if (0 < lVar18) {
    do {
      uVar19 = 0;
      if ((longlong)pTVar23 < lVar18) {
        uVar19 = (uint)((ulonglong)pTVar23 >> 0x3f) ^ 1;
      }
      if ((uVar19 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar26 = (pFVar6->GutterTexels).AllocatorInstance.Data;
      local_320 = *(long64 *)(pFVar26 + (longlong)&(pTVar17->Dimensions).Width);
      lVar7 = *(long64 *)(pFVar26 + 8 + (longlong)pTVar17);
      if ((this->OcclusionType & AmbientOcclusion) != None) {
        pTVar14 = (this->OcclusionBuilder).Ptr;
        pTVar15 = TDenseGrid2<UE::Math::TVector<float>_>::operator[](&pTVar14->Image,lVar7);
        uVar5 = *(undefined8 *)&pTVar15->field0_0x0;
        fVar31 = (pTVar15->field0_0x0)._s_0.Z;
        pFVar26 = (FScriptContainerElement *)
                  TDenseGrid2<UE::Math::TVector<float>_>::operator[](&pTVar14->Image,local_320);
        *(undefined8 *)&pFVar26->field_0x0 = uVar5;
        *(float *)(pFVar26 + 8) = fVar31;
      }
      if ((this->OcclusionType & BentNormal) != None) {
        pTVar14 = (this->NormalBuilder).Ptr;
        pTVar15 = TDenseGrid2<UE::Math::TVector<float>_>::operator[](&pTVar14->Image,lVar7);
        uVar5 = *(undefined8 *)&pTVar15->field0_0x0;
        fVar31 = (pTVar15->field0_0x0)._s_0.Z;
        pFVar26 = (FScriptContainerElement *)
                  TDenseGrid2<UE::Math::TVector<float>_>::operator[](&pTVar14->Image,local_320);
        *(undefined8 *)&pFVar26->field_0x0 = uVar5;
        *(float *)(pFVar26 + 8) = fVar31;
      }
      uVar34 = SUB84(pFVar26,0);
      lVar18 = (pFVar6->GutterTexels).ArrayNum;
      pTVar23 = (TImageBuilder<UE::Math::TVector<float>_> *)
                ((longlong)&(pTVar23->Dimensions).Width + 1);
      pTVar17 = (TImageBuilder<UE::Math::TVector<float>_> *)&(pTVar17->Image).Buffer.ArrayNum;
    } while ((longlong)pTVar23 < lVar18);
  }
  uVar21 = 0;
  if (((this->OcclusionType & AmbientOcclusion) != None) &&
     (dVar27 = this->BlurRadius, __real_3f847ae147ae147b < dVar27)) {
    fVar29 = (float)dVar27;
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.ArrayNum = 0;
    local_2f8.ArrayMax = 0;
    iVar16 = (int)dVar27;
    fVar31 = fVar29;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar29)) {
      auVar33._4_4_ = fVar29;
      auVar33._0_4_ = fVar29;
      auVar33._8_8_ = 0;
      uVar19 = movmskps(uVar34,auVar33);
      fVar31 = (float)(int)(iVar16 + (uVar19 & 1 ^ 1));
    }
    local_300[0] = (int)fVar31;
    TGaussian2<float>::MakeKernelFromWidth(local_300[0],fVar29 * fVar9,&local_2f8,true);
    iVar16 = local_300[0];
    local_2b8 = local_300;
    iVar25 = (pFVar6->Dimensions).Height * (pFVar6->Dimensions).Width;
    local_1f0 = &local_2b8;
    local_1f8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshOcclusionMapBaker::Bake'::__l47::<lambda_8>,float,UE::Geometry::FVector2i_const_&>
                ::Call;
    local_200 = local_357;
    local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshOcclusionMapBaker::Bake'::__l47::<lambda_6>,void,__int64,float,float_&>
                ::Call;
    local_210 = &local_2b0;
    local_218 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshOcclusionMapBaker::Bake'::__l47::<lambda_5>,void,__int64,float,float_&>
                ::Call;
    local_220 = &local_358;
    local_228 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshOcclusionMapBaker::Bake'::__l47::<lambda_4>,float,__int64>
                ::Call;
    local_338.ArrayNum = 0;
    local_338.ArrayMax = 0;
    local_357[0] = 0;
    local_358 = (<lambda_1>)0x0;
    local_2b0 = this;
    local_2a0 = this;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_338,iVar25,Default);
    local_150 = &local_228;
    local_148 = &local_218;
    local_140 = &local_208;
    local_130 = iVar16;
    local_138 = &local_1f8;
    local_1e8.DataPtr = (void **)0x0;
    local_128 = &local_338;
    local_1d8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FImageOccupancyMap::ParallelProcessingPass<float>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_1d0 = &local_158;
    local_1e8.ArrayNum = 0;
    local_158 = pFVar6;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(pFVar6->Dimensions).Height,1,
               (TFunctionRef<void___cdecl(int)> *)&local_1d8,local_358,None,&local_1e8);
    uVar24 = uVar21;
    if (0 < (longlong)iVar25) {
      do {
        if (((pFVar6->TexelType).ArrayNum <= (longlong)uVar21) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar19 = (uint)uVar24;
        if ((pFVar6->TexelType).AllocatorInstance.Data[uVar21] != (FScriptContainerElement)0x0) {
          uVar20 = 0;
          if ((int)uVar19 < local_338.ArrayNum) {
            uVar20 = ~uVar19 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_2a8 = (longlong)(int)uVar19;
          Core::Private::Function::
          TFunctionRefCaller<`UE::Geometry::FMeshOcclusionMapBaker::Bake'::__l47::<lambda_7>,void,__int64,float_&>
          ::Call(&local_2a0,&local_2a8,(float *)(local_338.AllocatorInstance.Data + local_2a8 * 4));
        }
        uVar21 = uVar21 + 1;
        uVar24 = (ulonglong)(uVar19 + 1);
      } while ((longlong)uVar21 < (longlong)iVar25);
    }
    if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.AllocatorInstance.Data);
    }
    if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.AllocatorInstance.Data);
    }
  }
  DeleteCriticalSection(&local_f8);
  if (local_350.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data);
  }
  return;
}

