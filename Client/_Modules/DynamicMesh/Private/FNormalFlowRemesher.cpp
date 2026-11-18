// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 9

// operator() @ 14c6eb120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::FNormalFlowRemesher::TrackedFaceProjectionPass'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  FDynamicMesh3 *this_00;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  TVector<double> *pTVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  char local_res8 [8];
  uint local_res10;
  uint local_res18;
  double local_res20;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  double local_328;
  double dStack_320;
  double local_318;
  TVector<double>_u_0 local_310;
  TVector<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2e0;
  TQuaternion<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  double local_290;
  double local_288;
  double local_280;
  TVector<double>_u_0 local_278;
  ulonglong local_260;
  undefined8 local_258;
  undefined4 local_250;
  TQuaternion<double>_u_0 local_248;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_210;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  longlong local_168 [2];
  undefined1 local_158 [24];
  undefined8 local_140;
  TVector<double> local_138;
  TVector<double> local_120;
  TVector<double> local_108 [8];
  
  if (-1 < param_1) {
    uVar24 = (ulonglong)param_1;
    this_00 = *(FDynamicMesh3 **)(*(longlong *)this + 8);
    if (param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (this_00->TriangleRefCounts).RefCounts.CurBlockUsed)) {
      uVar27 = (ulonglong)(param_1 & 0x1ff);
      uVar26 = (ulonglong)((uint)param_1 >> 9);
      if ((ushort)(*(short *)(*(longlong *)
                               ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + uVar26 * 8) + uVar27 * 2) - 1U) < 0xfffe) {
        local_res10 = param_1;
        local_260 = uVar24;
        UE::Geometry::FDynamicMesh3::GetTriInfo
                  (this_00,param_1,(TVector<double> *)&local_2a8._s_0,&local_res20,
                   (TVector<double> *)&local_358._s_0);
        dVar2 = __real_46293e5939a08cea;
        local_340._s_0.Z = __real_46293e5939a08cea;
        local_340._s_0.X = ___xmm_46293e5939a08cea46293e5939a08cea;
        local_340._s_0.Y = _UNK_1528c6bb8;
        (**(code **)(**(longlong **)((longlong)this + 8) + 0x10))
                  (*(longlong **)((longlong)this + 8),&local_328,&local_358,&local_340,0xffffffff);
        dVar11 = __real_3ff0000000000000;
        auVar29._0_8_ = local_2a8._s_0.Y * local_2a8._s_0.Y;
        auVar29._8_8_ = 0;
        auVar30._8_8_ = 0;
        auVar30._0_8_ =
             local_2a8._s_0.X * local_2a8._s_0.X + auVar29._0_8_ +
             local_2a8._s_0.Z * local_2a8._s_0.Z;
        auVar30 = sqrtpd(auVar29,auVar30);
        if ((__real_3feccccccccccccd <= auVar30._0_8_) &&
           (auVar31._0_8_ = local_340._s_0.Y * local_340._s_0.Y, auVar31._8_8_ = 0, auVar7._8_8_ = 0
           , auVar7._0_8_ = local_340._s_0.X * local_340._s_0.X + auVar31._0_8_ +
                            local_340._s_0.Z * local_340._s_0.Z, auVar30 = sqrtpd(auVar31,auVar7),
           __real_3feccccccccccccd <= auVar30._0_8_)) {
          if (local_340._s_0.X == dVar2) {
            bVar18 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3196788319266537280>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\NormalFlowRemesher.cpp"
                                ,0xc0,"ProjectedNormal[0] != 1e30");
            if (bVar18) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            lVar3 = *(longlong *)this;
            lVar25 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x130) + uVar26 * 8);
            local_258 = *(undefined8 *)(lVar25 + uVar27 * 0xc);
            local_250 = *(undefined4 *)(lVar25 + 8 + uVar27 * 0xc);
            if ((((*(char *)((longlong)this + 0x10) == '\0') || (*(char *)(lVar3 + 0x390) == '\0'))
                || (auVar32._0_8_ = (local_358._s_0.Z - local_318) * (local_358._s_0.Z - local_318),
                   auVar32._8_8_ = 0, auVar8._8_8_ = 0,
                   auVar8._0_8_ = (local_358._s_0.Y - dStack_320) * (local_358._s_0.Y - dStack_320)
                                  + (local_358._s_0.X - local_328) * (local_358._s_0.X - local_328)
                                  + auVar32._0_8_, auVar30 = sqrtpd(auVar32,auVar8),
                   auVar30._0_8_ < *(double *)((longlong)this + 0x18) ||
                   auVar30._0_8_ == *(double *)((longlong)this + 0x18))) ||
               (*(float *)(lVar3 + 0x398) <= 0.0)) {
              dVar2 = *(double *)(lVar3 + 0x380);
              dVar38 = __real_3ff0000000000000 - dVar2;
              dVar28 = *(double *)(lVar3 + 0x388);
              dVar41 = __real_3ff0000000000000 - dVar28;
              dVar34 = local_340._s_0.X * dVar28 + local_2a8._s_0.X * dVar41;
              dVar42 = local_340._s_0.Y * dVar28 + local_2a8._s_0.Y * dVar41;
              dVar41 = local_340._s_0.Z * dVar28 + local_2a8._s_0.Z * dVar41;
              dVar28 = dVar34 * dVar34;
              auVar35._0_8_ = dVar41 * dVar41;
              auVar35._8_8_ = 0;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = dVar42 * dVar42 + dVar28 + auVar35._0_8_;
              auVar30 = sqrtpd(auVar35,auVar9);
              if (auVar30._0_8_ <= 0.0) {
                local_340._s_0.Z = 0.0;
                local_340._s_0.Y = 0.0;
                auVar39 = ZEXT416(0);
              }
              else {
                dVar28 = __real_3ff0000000000000 / auVar30._0_8_;
                local_340._s_0.Z = dVar41 * dVar28;
                local_340._s_0.Y = dVar42 * dVar28;
                auVar39._0_8_ = dVar34 * dVar28;
                auVar39._8_8_ = 0;
              }
              auVar33._8_8_ = 0;
              auVar33._0_8_ = dVar28;
              local_340._s_0.X = (double)auVar39._0_8_;
              auVar40._8_8_ = auVar39._8_8_;
              auVar40._0_8_ =
                   local_340._s_0.X * local_340._s_0.X + local_340._s_0.Y * local_340._s_0.Y +
                   local_340._s_0.Z * local_340._s_0.Z;
              auVar30 = sqrtpd(auVar33,auVar40);
              if (auVar30._0_8_ < __real_3fb999999999999a) {
                local_340._s_0.Z = local_2a8._s_0.Z;
                local_340._s_0.X = local_2a8._s_0.X;
                local_340._s_0.Y = local_2a8._s_0.Y;
              }
              dVar28 = (local_328 * dVar2 + local_358._s_0.X * dVar38) - local_358._s_0.X;
              dVar41 = (dStack_320 * dVar2 + local_358._s_0.Y * dVar38) - local_358._s_0.Y;
              dVar2 = (local_318 * dVar2 + local_358._s_0.Z * dVar38) - local_358._s_0.Z;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = dVar41 * dVar41 + dVar28 * dVar28 + dVar2 * dVar2;
              auVar30 = sqrtpd(auVar40,auVar10);
              dVar38 = auVar30._0_8_;
              if (dVar38 <= 0.0) {
                dVar2 = 0.0;
                dVar41 = 0.0;
                dVar28 = 0.0;
                dVar38 = 0.0;
              }
              else {
                dVar34 = __real_3ff0000000000000 / dVar38;
                dVar28 = dVar28 * dVar34;
                dVar41 = dVar41 * dVar34;
                dVar2 = dVar2 * dVar34;
              }
              dVar34 = *(double *)((longlong)this + 0x50);
              uVar36 = SUB84(dVar34,0);
              uVar37 = (undefined4)((ulonglong)dVar34 >> 0x20);
              if (dVar38 <= dVar34) {
                uVar36 = SUB84(dVar38,0);
                uVar37 = (undefined4)((ulonglong)dVar38 >> 0x20);
              }
              local_2c8._s_0.X = 0.0;
              local_2c8._s_0.W = __real_3ff0000000000000;
              local_2c8._s_0.Y = 0.0;
              local_2c8._s_0.Z = 0.0;
              local_2e0._s_0.Z = local_358._s_0.Z;
              local_328 = (double)CONCAT44(uVar37,uVar36) * dVar28 + local_358._s_0.X;
              dStack_320 = (double)CONCAT44(uVar37,uVar36) * dVar41 + local_358._s_0.Y;
              local_318 = (double)CONCAT44(uVar37,uVar36) * dVar2 + local_358._s_0.Z;
              local_2e0._s_0.X = local_358._s_0.X;
              local_2e0._s_0.Y = local_358._s_0.Y;
              lVar25 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10);
              lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x130) + uVar26 * 8);
              uVar20 = *(uint *)(lVar3 + uVar27 * 0xc);
              uVar24 = (ulonglong)(uVar20 & 0x1ff);
              lVar5 = *(longlong *)(lVar25 + (ulonglong)(uVar20 >> 9) * 8);
              pdVar1 = (double *)(lVar5 + uVar24 * 0x18);
              dVar41 = *pdVar1;
              dVar34 = pdVar1[1];
              dVar2 = *(double *)(lVar5 + 0x10 + uVar24 * 0x18);
              uVar20 = *(uint *)(lVar3 + 4 + uVar27 * 0xc);
              uVar24 = (ulonglong)(uVar20 & 0x1ff);
              lVar5 = *(longlong *)(lVar25 + (ulonglong)(uVar20 >> 9) * 8);
              pdVar1 = (double *)(lVar5 + uVar24 * 0x18);
              dVar42 = *pdVar1;
              dVar12 = pdVar1[1];
              dVar28 = *(double *)(lVar5 + 0x10 + uVar24 * 0x18);
              uVar20 = *(uint *)(lVar3 + 8 + uVar27 * 0xc);
              uVar24 = (ulonglong)(uVar20 & 0x1ff);
              lVar3 = *(longlong *)(lVar25 + (ulonglong)(uVar20 >> 9) * 8);
              pdVar1 = (double *)(lVar3 + uVar24 * 0x18);
              dVar13 = *pdVar1;
              dVar14 = pdVar1[1];
              dVar38 = *(double *)(lVar3 + 0x10 + uVar24 * 0x18);
              local_1c8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
              local_1c8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
              local_1c8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
              UE::Geometry::TQuaternion<double>::SetFromTo
                        ((TQuaternion<double> *)&local_2c8._s_0,(TVector<double> *)&local_1c8._s_0,
                         (TVector<double> *)&local_2a8._s_0);
              uVar17 = local_2e0._s_0.Z;
              uVar16 = local_2e0._s_0.Y;
              uVar15 = local_2e0._s_0.X;
              local_228._s_0.X = dVar41 - local_2e0._s_0.X;
              local_228._s_0.Y = dVar34 - local_2e0._s_0.Y;
              local_228._s_0.Z = dVar2 - local_2e0._s_0.Z;
              UE::Geometry::TQuaternion<double>::InverseMultiply
                        ((TQuaternion<double> *)&local_2c8._s_0,(TVector<double> *)&local_1b0._s_0,
                         (TVector<double> *)&local_228._s_0);
              local_278._s_0.X = local_1b0._s_0.X;
              local_278._s_0.Y = local_1b0._s_0.Y;
              local_278._s_0.Z = local_1b0._s_0.Z;
              local_210._s_0.X = dVar42 - (double)uVar15;
              local_210._s_0.Y = dVar12 - (double)uVar16;
              local_210._s_0.Z = dVar28 - (double)uVar17;
              UE::Geometry::TQuaternion<double>::InverseMultiply
                        ((TQuaternion<double> *)&local_2c8._s_0,(TVector<double> *)&local_198._s_0,
                         (TVector<double> *)&local_210._s_0);
              local_1f8._s_0.Z = dVar38 - (double)uVar17;
              local_310._s_0.X = local_198._s_0.X;
              local_310._s_0.Y = local_198._s_0.Y;
              local_310._s_0.Z = local_198._s_0.Z;
              local_1f8._s_0.X = dVar13 - (double)uVar15;
              local_1f8._s_0.Y = dVar14 - (double)uVar16;
              UE::Geometry::TQuaternion<double>::InverseMultiply
                        ((TQuaternion<double> *)&local_2c8._s_0,(TVector<double> *)&local_180._s_0,
                         (TVector<double> *)&local_1f8._s_0);
              local_2f8._s_0.Z = local_180._s_0.Z;
              local_2f8._s_0.X = local_180._s_0.X;
              local_2f8._s_0.Y = local_180._s_0.Y;
              local_248._s_0.X = 0.0;
              local_248._s_0.W = dVar11;
              local_248._s_0.Y = 0.0;
              local_248._s_0.Z = 0.0;
              local_1e0._s_0.X =
                   local_2c8._s_0.X * (local_2c8._s_0.Z + local_2c8._s_0.Z) +
                   local_2c8._s_0.W * (local_2c8._s_0.Y + local_2c8._s_0.Y);
              local_1e0._s_0.Y =
                   local_2c8._s_0.Y * (local_2c8._s_0.Z + local_2c8._s_0.Z) -
                   local_2c8._s_0.W * (local_2c8._s_0.X + local_2c8._s_0.X);
              local_1e0._s_0.Z =
                   dVar11 - (local_2c8._s_0.Y * (local_2c8._s_0.Y + local_2c8._s_0.Y) +
                            local_2c8._s_0.X * (local_2c8._s_0.X + local_2c8._s_0.X));
              UE::Geometry::TQuaternion<double>::SetFromTo
                        ((TQuaternion<double> *)&local_248._s_0,(TVector<double> *)&local_1e0._s_0,
                         (TVector<double> *)&local_340._s_0);
              UE::Geometry::TFrame3<double>::Rotate
                        ((TFrame3<double> *)&local_2e0._s_0,(TQuaternion<double> *)&local_248._s_0);
              dVar34 = dStack_320;
              dVar41 = local_328;
              local_2e0._s_0.Z = local_318;
              local_2e0._s_0.X = local_328;
              local_2e0._s_0.Y = dStack_320;
              pTVar22 = UE::Geometry::operator*<double>
                                  (&local_138,(TQuaternion<double> *)&local_2c8._s_0,
                                   (TVector<double> *)&local_278._s_0);
              dVar42 = local_318;
              dVar38 = dVar41 + (pTVar22->field0_0x0)._s_0.X;
              dVar2 = local_318 + (pTVar22->field0_0x0)._s_0.Z;
              dVar28 = dVar34 + (pTVar22->field0_0x0)._s_0.Y;
              local_278._s_0.X = dVar38;
              local_278._s_0.Y = dVar28;
              local_278._s_0.Z = dVar2;
              pTVar22 = UE::Geometry::operator*<double>
                                  (&local_120,(TQuaternion<double> *)&local_2c8._s_0,
                                   (TVector<double> *)&local_310._s_0);
              local_310._s_0.X = dVar41 + (pTVar22->field0_0x0)._s_0.X;
              local_310._s_0.Y = dVar34 + (pTVar22->field0_0x0)._s_0.Y;
              local_310._s_0.Z = dVar42 + (pTVar22->field0_0x0)._s_0.Z;
              pTVar22 = UE::Geometry::operator*<double>
                                  (local_108,(TQuaternion<double> *)&local_2c8._s_0,
                                   (TVector<double> *)&local_2f8._s_0);
              uVar20 = param_1 * 3;
              lVar3 = *(longlong *)this;
              local_2f8._s_0.Z = dVar42 + (pTVar22->field0_0x0)._s_0.Z;
              local_2f8._s_0.X = dVar41 + (pTVar22->field0_0x0)._s_0.X;
              local_2f8._s_0.Y = dVar34 + (pTVar22->field0_0x0)._s_0.Y;
              uVar19 = 0;
              if ((int)uVar20 < *(int *)(lVar3 + 0x3d0)) {
                uVar19 = ~uVar20 >> 0x1f;
              }
              dVar41 = local_2a8._s_0.X * local_340._s_0.X + local_2a8._s_0.Y * local_340._s_0.Y +
                       local_2a8._s_0.Z * local_340._s_0.Z;
              if (dVar11 <= dVar41) {
                dVar41 = dVar11;
              }
              if (dVar41 <= 0.0) {
                dVar41 = 0.0;
              }
              dVar11 = dVar41 * dVar41 * dVar41 * local_res20;
              if ((uVar19 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar3 = *(longlong *)(lVar3 + 0x3c8);
              lVar25 = (longlong)(int)uVar20;
              *(double *)(lVar3 + lVar25 * 0x18) = dVar11 * dVar38;
              *(double *)(lVar3 + 8 + lVar25 * 0x18) = dVar11 * dVar28;
              *(double *)(lVar3 + 0x10 + lVar25 * 0x18) = dVar11 * dVar2;
              lVar3 = *(longlong *)this;
              uVar19 = 0;
              if ((int)uVar20 < *(int *)(lVar3 + 0x3c0)) {
                uVar19 = ~uVar20 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar19 = uVar20 + 1;
              *(double *)(*(longlong *)(lVar3 + 0x3b8) + lVar25 * 8) = dVar11;
              lVar3 = *(longlong *)this;
              dVar2 = local_310._s_0.X * dVar11;
              dVar28 = local_310._s_0.Y * dVar11;
              uVar21 = 0;
              if ((int)uVar19 < *(int *)(lVar3 + 0x3d0)) {
                uVar21 = ~uVar19 >> 0x1f;
              }
              dVar38 = local_310._s_0.Z * dVar11;
              if ((uVar21 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar3 = *(longlong *)(lVar3 + 0x3c8);
              lVar25 = (longlong)(int)uVar19;
              *(double *)(lVar3 + lVar25 * 0x18) = dVar2;
              *(double *)(lVar3 + 8 + lVar25 * 0x18) = dVar28;
              *(double *)(lVar3 + 0x10 + lVar25 * 0x18) = dVar38;
              lVar3 = *(longlong *)this;
              uVar21 = 0;
              if ((int)uVar19 < *(int *)(lVar3 + 0x3c0)) {
                uVar21 = ~uVar19 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar20 = uVar20 + 2;
              *(double *)(*(longlong *)(lVar3 + 0x3b8) + lVar25 * 8) = dVar11;
              lVar3 = *(longlong *)this;
              dVar2 = local_2f8._s_0.X * dVar11;
              dVar28 = local_2f8._s_0.Y * dVar11;
              uVar19 = 0;
              if ((int)uVar20 < *(int *)(lVar3 + 0x3d0)) {
                uVar19 = ~uVar20 >> 0x1f;
              }
              dVar38 = local_2f8._s_0.Z * dVar11;
              if ((uVar19 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar3 = *(longlong *)(lVar3 + 0x3c8);
              lVar25 = (longlong)(int)uVar20;
              *(double *)(lVar3 + lVar25 * 0x18) = dVar2;
              *(double *)(lVar3 + 8 + lVar25 * 0x18) = dVar28;
              *(double *)(lVar3 + 0x10 + lVar25 * 0x18) = dVar38;
              lVar3 = *(longlong *)this;
              uVar19 = 0;
              if ((int)uVar20 < *(int *)(lVar3 + 0x3c0)) {
                uVar19 = ~uVar20 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(double *)(*(longlong *)(lVar3 + 0x3b8) + lVar25 * 8) = dVar11;
            }
            else {
              uVar26 = 0;
              local_res18 = 0;
              uVar27 = uVar26;
              do {
                plVar4 = *(longlong **)this;
                local_res8[0] = '\0';
                local_140 = 0;
                pcVar6 = *(code **)(*plVar4 + 0x90);
                local_168[0] = *(longlong *)((longlong)this + 0x20);
                if (local_168[0] != 0) {
                  puVar23 = (undefined8 *)((longlong)this + 0x30);
                  if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
                    puVar23 = *(undefined8 **)((longlong)this + 0x48);
                  }
                  (**(code **)*puVar23)(puVar23,local_158);
                }
                (*pcVar6)(plVar4,&local_290,*(undefined4 *)((longlong)&local_258 + uVar27 * 4),
                          local_168,local_res8);
                dVar2 = local_res20;
                uVar20 = (uint)uVar26;
                if (local_res8[0] != '\0') {
                  lVar25 = *(longlong *)this;
                  uVar19 = (uint)uVar26 + (int)uVar24 * 3;
                  lVar3 = uVar27 + local_260 * 3;
                  dVar28 = (double)*(float *)(lVar25 + 0x398) * *(double *)(lVar25 + 0x168);
                  dVar34 = dVar11 - dVar28;
                  local_290 = dVar28 * local_290 + local_358._s_0.X * dVar34;
                  local_288 = dVar28 * local_288 + local_358._s_0.Y * dVar34;
                  dVar38 = local_290 * local_res20;
                  dVar41 = local_288 * local_res20;
                  local_280 = dVar28 * local_280 + local_358._s_0.Z * dVar34;
                  dVar28 = local_280 * local_res20;
                  uVar20 = 0;
                  if ((int)uVar19 < *(int *)(lVar25 + 0x3d0)) {
                    uVar20 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar25 = *(longlong *)(lVar25 + 0x3c8);
                  *(double *)(lVar25 + lVar3 * 0x18) = dVar38;
                  *(double *)(lVar25 + 8 + lVar3 * 0x18) = dVar41;
                  *(double *)(lVar25 + 0x10 + lVar3 * 0x18) = dVar28;
                  lVar25 = *(longlong *)this;
                  uVar20 = 0;
                  if ((int)uVar19 < *(int *)(lVar25 + 0x3c0)) {
                    uVar20 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar24 = (ulonglong)local_res10;
                  *(double *)(*(longlong *)(lVar25 + 0x3b8) + lVar3 * 8) = dVar2;
                  uVar20 = local_res18;
                }
                local_res18 = uVar20 + 1;
                uVar26 = (ulonglong)local_res18;
                uVar27 = uVar27 + 1;
              } while ((longlong)uVar27 < 3);
            }
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14c6ee2f0

void __thiscall
`UE::Geometry::FNormalFlowRemesher::TrackedEdgeFlipPass'::__l19::<lambda_1>::operator()
          (void *this,int param_1)

{
  FNormalFlowRemesher *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  if (-1 < param_1) {
    this_00 = *(FNormalFlowRemesher **)this;
    lVar1 = *(longlong *)&this_00->field_0x8;
    if ((param_1 < *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar1 + 0x1d8) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      puVar5 = (uint *)0x0;
      if (this_00->field_0xc8 != '\0') {
        if (*(int *)&this_00->field_0x18 != *(int *)&this_00->field_0x44) {
          puVar7 = *(undefined1 **)&this_00->field_0x50;
          if (*(undefined1 **)&this_00->field_0x50 == (undefined1 *)0x0) {
            puVar7 = &this_00->field_0x48;
          }
          iVar4 = *(int *)(puVar7 + (ulonglong)(*(int *)&this_00->field_0x58 - 1U & param_1) * 4);
          if (iVar4 != -1) {
            do {
              lVar1 = *(longlong *)&this_00->field_0x10 + (longlong)iVar4 * 0x28;
              if (*(int *)(*(longlong *)&this_00->field_0x10 + (longlong)iVar4 * 0x28) == param_1) {
                puVar6 = (uint *)(lVar1 + 8);
                if (lVar1 == 0) {
                  puVar6 = puVar5;
                }
                if (puVar6 != (uint *)0x0) {
                  puVar5 = (uint *)(ulonglong)*puVar6;
                  goto LAB_14c6ee3c1;
                }
                break;
              }
              iVar4 = *(int *)(lVar1 + 0x20);
            } while (iVar4 != -1);
          }
        }
        puVar5 = (uint *)0x0;
      }
LAB_14c6ee3c1:
      if ((((ulonglong)puVar5 & 1) == 0) &&
         (bVar3 = UE::Geometry::FNormalFlowRemesher::EdgeFlipWouldReduceNormalError
                            (this_00,param_1,__real_3f847ae147ae147b,__real_3fe8000000000000), bVar3
         )) {
        lVar1 = *(longlong *)this;
        uVar8 = 0;
        if (param_1 < *(int *)(lVar1 + 0x370)) {
          uVar8 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined1 *)((longlong)param_1 + *(longlong *)(lVar1 + 0x368)) = 1;
      }
    }
  }
  return;
}

// operator() @ 14c6f37e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FNormalFlowRemesher::TrackedFaceProjectionPass'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 uVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  ForElementType<int> FVar14;
  bool bVar15;
  EVertexControl EVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ForElementType<int> FVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  undefined1 local_128 [4];
  uint local_124;
  uint local_120;
  ulonglong local_118;
  longlong local_110;
  undefined8 local_108;
  int local_100;
  ForElementType<int> local_f8;
  ForElementType<int> local_f0;
  double local_d8;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_d0;
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar7 = *(longlong *)this;
  lVar20 = (longlong)param_1;
  iVar6 = *(int *)(lVar7 + 0x248);
  uVar31 = 0;
  if (param_1 < iVar6) {
    uVar31 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (local_138 = lVar20, local_130 = (longlong)iVar6,
     bVar15 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  *(undefined1 *)(lVar20 + *(longlong *)(lVar7 + 0x240)) = 0;
  lVar7 = *(longlong *)(*(longlong *)this + 8);
  if ((-1 < param_1) && (param_1 < *(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24))) {
    uVar22 = (ulonglong)((uint)param_1 >> 9);
    uVar19 = (ulonglong)(param_1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar7 + 0x28) + uVar22 * 8) + uVar19 * 2) -
                1U) < 0xfffe) {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + uVar22 * 8);
      puVar1 = (undefined8 *)(lVar7 + uVar19 * 0x18);
      uVar13 = puVar1[1];
      uVar4 = *(undefined8 *)(lVar7 + 0x10 + uVar19 * 0x18);
      lVar7 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x230) + uVar22 * 8);
      puVar2 = (undefined8 *)(lVar7 + uVar19 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      *(undefined8 *)(lVar7 + 0x10 + uVar19 * 0x18) = uVar4;
      bVar15 = UE::Geometry::FMeshRefinerBase::IsVertexPositionConstrained
                         (*(FMeshRefinerBase **)this,param_1);
      if ((!bVar15) &&
         ((*(longlong *)(*(longlong *)this + 0xe0) == 0 ||
          (EVar16 = UE::Core::Private::Function::
                    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,enum_UE::Geometry::FMeshRefinerBase::EVertexControl___cdecl(int)>
                    ::operator()((longlong *)(*(longlong *)this + 0xe0),param_1),
          (EVar16 & NoProject) == AllowAll)))) {
        lVar7 = *(longlong *)this;
        iVar6 = *(int *)(lVar7 + 0x3b0);
        uVar17 = 0;
        uVar31 = uVar17;
        if (param_1 < iVar6) {
          uVar31 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (local_138 = lVar20, local_130 = (longlong)iVar6,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(undefined8 *)(*(longlong *)(lVar7 + 0x3a8) + lVar20 * 8) = 0;
        lVar7 = *(longlong *)
                 (*(longlong *)(*(longlong *)this + 0x230) + (ulonglong)((uint)param_1 >> 9) * 8);
        *(undefined8 *)(lVar7 + uVar19 * 0x18) = 0;
        *(undefined8 *)(lVar7 + 8 + uVar19 * 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x10 + uVar19 * 0x18) = 0;
        local_d0.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        local_d0.ArrayNum = 0;
        local_d0.ArrayMax = 8;
        UE::Geometry::FDynamicMesh3::
        GetVtxTriangles<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                  (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_1,&local_d0);
        uVar19 = (ulonglong)local_d0.ArrayNum;
        FVar21 = (ForElementType<int>)&local_d0;
        if (local_d0.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar21 = local_d0.AllocatorInstance.SecondaryData;
        }
        local_120 = local_d0.ArrayNum;
        local_124 = (uint)~param_1 >> 0x1f;
        local_f0 = (ForElementType<int>)((longlong)FVar21 + uVar19 * 4);
        local_118 = (ulonglong)((uint)param_1 >> 9);
        while( true ) {
          FVar14 = local_f0;
          local_f8 = FVar21;
          if (local_d0.ArrayNum != (uint)uVar19) {
            local_128[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_128);
          }
          if (FVar21 == FVar14) break;
          uVar31 = *(uint *)FVar21;
          lVar7 = *(longlong *)this;
          lVar8 = *(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 8) + 0x130) + (ulonglong)(uVar31 >> 9) * 8);
          local_108 = *(undefined8 *)(lVar8 + (ulonglong)(uVar31 & 0x1ff) * 0xc);
          local_100 = *(int *)(lVar8 + 8 + (ulonglong)(uVar31 & 0x1ff) * 0xc);
          if ((int)local_108 == param_1) {
            uVar32 = uVar31 * 3;
            uVar24 = uVar17;
            if ((int)uVar32 < *(int *)(lVar7 + 0x3c0)) {
              uVar24 = ~uVar32 >> 0x1f;
            }
            if (uVar24 == 0) {
              local_138 = (longlong)(int)uVar32;
              local_130 = (longlong)*(int *)(lVar7 + 0x3c0);
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            lVar8 = *(longlong *)this;
            lVar23 = (longlong)(int)uVar32;
            iVar6 = *(int *)(lVar8 + 0x3b0);
            dVar5 = *(double *)(*(longlong *)(lVar7 + 0x3b8) + lVar23 * 8);
            uVar24 = uVar17;
            if (param_1 < iVar6) {
              uVar24 = local_124;
            }
            if ((uVar24 == 0) &&
               (local_138 = lVar20, local_130 = (longlong)iVar6,
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar7 = *(longlong *)(lVar8 + 0x3a8);
            *(double *)(lVar7 + lVar20 * 8) = dVar5 + *(double *)(lVar7 + lVar20 * 8);
            local_110 = *(longlong *)this;
            uVar24 = uVar17;
            if ((int)uVar32 < *(int *)(local_110 + 0x3d0)) {
              uVar24 = ~uVar32 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (local_138 = lVar23, local_130 = (longlong)*(int *)(local_110 + 0x3d0),
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar7 = *(longlong *)(local_110 + 0x3c8);
            uVar19 = (ulonglong)(param_1 & 0x1ff);
            lVar8 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x230) + local_118 * 8);
            *(double *)(lVar8 + uVar19 * 0x18) =
                 *(double *)(lVar7 + lVar23 * 0x18) + *(double *)(lVar8 + uVar19 * 0x18);
            *(double *)(lVar8 + 8 + uVar19 * 0x18) =
                 *(double *)(lVar7 + 8 + lVar23 * 0x18) + *(double *)(lVar8 + 8 + uVar19 * 0x18);
            *(double *)(lVar8 + 0x10 + uVar19 * 0x18) =
                 *(double *)(lVar7 + 0x10 + lVar23 * 0x18) +
                 *(double *)(lVar8 + 0x10 + uVar19 * 0x18);
          }
          uVar32 = 0;
          if (local_108._4_4_ == param_1) {
            lVar7 = *(longlong *)this;
            uVar24 = uVar31 * 3 + 1;
            iVar6 = *(int *)(lVar7 + 0x3c0);
            uVar18 = uVar32;
            if ((int)uVar24 < iVar6) {
              uVar18 = ~uVar24 >> 0x1f;
            }
            if (uVar18 == 0) {
              local_138 = (longlong)(int)uVar24;
              local_130 = (longlong)iVar6;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            lVar8 = *(longlong *)this;
            lVar23 = (longlong)(int)uVar24;
            iVar6 = *(int *)(lVar8 + 0x3b0);
            dVar5 = *(double *)(*(longlong *)(lVar7 + 0x3b8) + lVar23 * 8);
            uVar18 = uVar32;
            if (param_1 < iVar6) {
              uVar18 = local_124;
            }
            if ((uVar18 == 0) &&
               (local_138 = lVar20, local_130 = (longlong)iVar6,
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar7 = *(longlong *)(lVar8 + 0x3a8);
            *(double *)(lVar7 + lVar20 * 8) = dVar5 + *(double *)(lVar7 + lVar20 * 8);
            local_110 = *(longlong *)this;
            uVar18 = uVar32;
            if ((int)uVar24 < *(int *)(local_110 + 0x3d0)) {
              uVar18 = ~uVar24 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (local_138 = lVar23, local_130 = (longlong)*(int *)(local_110 + 0x3d0),
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar7 = *(longlong *)(local_110 + 0x3c8);
            uVar19 = (ulonglong)(param_1 & 0x1ff);
            lVar8 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x230) + local_118 * 8);
            *(double *)(lVar8 + uVar19 * 0x18) =
                 *(double *)(lVar7 + lVar23 * 0x18) + *(double *)(lVar8 + uVar19 * 0x18);
            *(double *)(lVar8 + 8 + uVar19 * 0x18) =
                 *(double *)(lVar7 + 8 + lVar23 * 0x18) + *(double *)(lVar8 + 8 + uVar19 * 0x18);
            *(double *)(lVar8 + 0x10 + uVar19 * 0x18) =
                 *(double *)(lVar7 + 0x10 + lVar23 * 0x18) +
                 *(double *)(lVar8 + 0x10 + uVar19 * 0x18);
          }
          if (local_100 == param_1) {
            lVar7 = *(longlong *)this;
            uVar24 = uVar31 * 3 + 2;
            iVar6 = *(int *)(lVar7 + 0x3c0);
            uVar31 = uVar32;
            if ((int)uVar24 < iVar6) {
              uVar31 = ~uVar24 >> 0x1f;
            }
            if (uVar31 == 0) {
              local_138 = (longlong)(int)uVar24;
              local_130 = (longlong)iVar6;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            lVar8 = *(longlong *)this;
            lVar23 = (longlong)(int)uVar24;
            iVar6 = *(int *)(lVar8 + 0x3b0);
            dVar5 = *(double *)(*(longlong *)(lVar7 + 0x3b8) + lVar23 * 8);
            uVar31 = uVar32;
            if (param_1 < iVar6) {
              uVar31 = local_124;
            }
            if ((uVar31 == 0) &&
               (local_138 = lVar20, local_130 = (longlong)iVar6,
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar7 = *(longlong *)(lVar8 + 0x3a8);
            *(double *)(lVar7 + lVar20 * 8) = dVar5 + *(double *)(lVar7 + lVar20 * 8);
            lVar7 = *(longlong *)this;
            iVar6 = *(int *)(lVar7 + 0x3d0);
            if ((int)uVar24 < iVar6) {
              uVar32 = ~uVar24 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (local_138 = lVar23, local_130 = (longlong)iVar6,
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar7 = *(longlong *)(lVar7 + 0x3c8);
            uVar19 = (ulonglong)(param_1 & 0x1ff);
            lVar8 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x230) + local_118 * 8);
            *(double *)(lVar8 + uVar19 * 0x18) =
                 *(double *)(lVar7 + lVar23 * 0x18) + *(double *)(lVar8 + uVar19 * 0x18);
            *(double *)(lVar8 + 8 + uVar19 * 0x18) =
                 *(double *)(lVar7 + 8 + lVar23 * 0x18) + *(double *)(lVar8 + 8 + uVar19 * 0x18);
            *(double *)(lVar8 + 0x10 + uVar19 * 0x18) =
                 *(double *)(lVar7 + 0x10 + lVar23 * 0x18) +
                 *(double *)(lVar8 + 0x10 + uVar19 * 0x18);
          }
          uVar19 = (ulonglong)local_120;
          FVar21 = (ForElementType<int>)((longlong)local_f8 + 4);
        }
        lVar7 = *(longlong *)this;
        iVar6 = *(int *)(lVar7 + 0x3b0);
        uVar31 = uVar17;
        if (param_1 < iVar6) {
          uVar31 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (local_138 = lVar20, local_130 = (longlong)iVar6,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        dVar5 = __real_3e45798ee2308c3a;
        uVar4 = *(undefined8 *)(*(longlong *)(lVar7 + 0x3a8) + lVar20 * 8);
        if (__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)uVar4 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          lVar7 = *(longlong *)this;
          uVar19 = (ulonglong)(param_1 & 0x1ff);
          lVar8 = *(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 8) + 0x10) +
                   (ulonglong)((uint)param_1 >> 9) * 8);
          local_d8 = *(double *)(lVar8 + 0x10 + uVar19 * 0x18);
          pdVar3 = (double *)(lVar8 + uVar19 * 0x18);
          dVar30 = *pdVar3;
          dVar29 = pdVar3[1];
          lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x230) + (ulonglong)((uint)param_1 >> 9) * 8);
          uVar31 = uVar17;
          if (param_1 < *(int *)(lVar7 + 0x3b0)) {
            uVar31 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (local_138 = lVar20, local_130 = (longlong)*(int *)(lVar7 + 0x3b0),
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          dVar10 = __real_3ff0000000000000 / *(double *)(*(longlong *)(lVar7 + 0x3a8) + lVar20 * 8);
          dVar12 = dVar10 * *(double *)(lVar8 + uVar19 * 0x18) - dVar30;
          dVar11 = dVar10 * *(double *)(lVar8 + 8 + uVar19 * 0x18) - dVar29;
          dVar10 = dVar10 * *(double *)(lVar8 + 0x10 + uVar19 * 0x18) - local_d8;
          auVar27._0_8_ = dVar10 * dVar10;
          auVar27._8_8_ = 0;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = dVar11 * dVar11 + dVar12 * dVar12 + auVar27._0_8_;
          auVar28 = sqrtpd(auVar27,auVar28);
          dVar26 = auVar28._0_8_;
          if (dVar26 <= 0.0) {
            dVar10 = 0.0;
            dVar11 = 0.0;
            dVar12 = 0.0;
            dVar26 = 0.0;
          }
          else {
            dVar25 = __real_3ff0000000000000 / dVar26;
            dVar12 = dVar12 * dVar25;
            dVar11 = dVar11 * dVar25;
            dVar10 = dVar10 * dVar25;
          }
          dVar25 = *(double *)((longlong)this + 0x18);
          if (dVar26 <= *(double *)((longlong)this + 0x18)) {
            dVar25 = dVar26;
          }
          dVar12 = dVar12 * dVar25 + dVar30;
          dVar11 = dVar11 * dVar25 + dVar29;
          dVar10 = dVar10 * dVar25 + local_d8;
          dVar30 = dVar30 - dVar12;
          uVar31 = SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar32 = (uint)((ulonglong)dVar30 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if (((dVar5 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != dVar5
               ) || (dVar29 = dVar29 - dVar11,
                    dVar5 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                             SUB84(dVar29,0) &
                                             (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
             (dVar30 = local_d8 - dVar10,
             dVar5 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     ))) {
            lVar7 = *(longlong *)this;
            iVar6 = *(int *)(lVar7 + 0x248);
            if (param_1 < iVar6) {
              uVar17 = (uint)~param_1 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (local_138 = lVar20, local_130 = (longlong)iVar6,
               bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            *(undefined1 *)(lVar20 + *(longlong *)(lVar7 + 0x240)) = 1;
            uVar19 = (ulonglong)(param_1 & 0x1ff);
            lVar7 = *(longlong *)
                     (*(longlong *)(*(longlong *)this + 0x230) + (ulonglong)((uint)param_1 >> 9) * 8
                     );
            *(double *)(lVar7 + uVar19 * 0x18) = dVar12;
            *(double *)(lVar7 + 8 + uVar19 * 0x18) = dVar11;
            *(double *)(lVar7 + 0x10 + uVar19 * 0x18) = dVar10;
          }
        }
        if (local_d0.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_d0.AllocatorInstance.SecondaryData);
        }
      }
    }
  }
  return;
}

// operator() @ 14c6f9500

void __thiscall
`UE::Geometry::FNormalFlowRemesher::TrackedFaceProjectionPass'::__l2::<lambda_3>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  
  lVar1 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar1 + 0x370)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined1 *)((longlong)param_1 + *(longlong *)(lVar1 + 0x368)) = 0;
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if ((-1 < param_1) && (param_1 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar2 + 0x1d8) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar3 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8) +
               (ulonglong)(param_1 & 0x1ff) * 0x10);
      uVar8 = (ulonglong)((uint)(uVar3 >> 0x20) & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x230) + (uVar3 >> 0x29) * 8);
      uVar9 = (ulonglong)((uint)uVar3 & 0x1ff);
      lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x230) + ((uVar3 & 0xffffffff) >> 9) * 8);
      dVar14 = *(double *)(lVar2 + 8 + uVar8 * 0x18) - *(double *)(lVar4 + 8 + uVar9 * 0x18);
      dVar11 = *(double *)(lVar2 + uVar8 * 0x18) - *(double *)(lVar4 + uVar9 * 0x18);
      dVar10 = *(double *)(lVar2 + 0x10 + uVar8 * 0x18) - *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
      auVar12._0_8_ = dVar11 * dVar11;
      auVar12._8_8_ = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar14 * dVar14 + auVar12._0_8_ + dVar10 * dVar10;
      auVar13 = sqrtpd(auVar12,auVar13);
      dVar10 = auVar13._0_8_;
      if ((dVar10 < *(double *)(lVar1 + 0x158)) ||
         (*(double *)(lVar1 + 0x160) <= dVar10 && dVar10 != *(double *)(lVar1 + 0x160))) {
        uVar7 = 0;
        if (param_1 < *(int *)(lVar1 + 0x370)) {
          uVar7 = (uint)~param_1 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *(undefined1 *)((longlong)param_1 + *(longlong *)(lVar1 + 0x368)) = 1;
      }
    }
  }
  return;
}

// EdgeFlipWouldReduceNormalError @ 14c72e680

bool __thiscall
UE::Geometry::FNormalFlowRemesher::EdgeFlipWouldReduceNormalError
          (FNormalFlowRemesher *this,int param_1,double param_2,double param_3)

{
  int *piVar1;
  IOrientedProjectionTarget *pIVar2;
  FDynamicMesh3 *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  FIndex3i_u_0 local_98;
  FIndex3i_u_0 local_88;
  int local_78;
  int iStack_74;
  int iStack_70;
  uint uStack_6c;
  
  pIVar2 = *(IOrientedProjectionTarget **)&this->field_0xd0;
  if (pIVar2 != (IOrientedProjectionTarget *)0x0) {
    pFVar3 = *(FDynamicMesh3 **)&this->field_0x8;
    lVar4 = *(longlong *)
             ((pFVar3->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
    piVar1 = (int *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    local_78 = *piVar1;
    iStack_74 = piVar1[1];
    iStack_70 = piVar1[2];
    uVar7 = piVar1[3];
    uVar16 = *(ulonglong *)(lVar4 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    if ((int)(uVar16 >> 0x20) != -1) {
      uVar10 = (ulonglong)((uint)uVar16 & 0x1ff);
      lVar4 = *(longlong *)
               ((pFVar3->Triangles).Blocks.AllocatorInstance.Data + ((uVar16 & 0xffffffff) >> 9) * 8
               );
      local_98._0_8_ = *(undefined8 *)(lVar4 + uVar10 * 0xc);
      local_98._s_0.C = *(int *)(lVar4 + 8 + uVar10 * 0xc);
      uStack_6c = uVar7;
      dVar17 = ::`anonymous_namespace'::ComputeNormalError(pFVar3,pIVar2,(FIndex3i *)&local_98._s_0)
      ;
      uVar11 = (ulonglong)(uVar7 & 0x1ff);
      lVar4 = *(longlong *)
               (((*(FDynamicMesh3 **)&this->field_0x8)->Triangles).Blocks.AllocatorInstance.Data +
               (ulonglong)(uVar7 >> 9) * 8);
      local_98._0_8_ = *(undefined8 *)(lVar4 + uVar11 * 0xc);
      local_98._s_0.C = *(int *)(lVar4 + 8 + uVar11 * 0xc);
      dVar18 = ::`anonymous_namespace'::ComputeNormalError
                         (*(FDynamicMesh3 **)&this->field_0x8,pIVar2,(FIndex3i *)&local_98._s_0);
      if (param_2 < dVar17 + dVar18) {
        iVar15 = 1;
        uVar14 = 0;
        pFVar3 = *(FDynamicMesh3 **)&this->field_0x8;
        pFVar5 = (pFVar3->Triangles).Blocks.AllocatorInstance.Data;
        lVar4 = *(longlong *)(pFVar5 + ((uVar16 & 0xffffffff) >> 9) * 8);
        local_98._s_0.C = *(int *)(lVar4 + 8 + uVar10 * 0xc);
        lVar6 = *(longlong *)(pFVar5 + (ulonglong)(uVar7 >> 9) * 8);
        local_98._0_8_ = *(undefined8 *)(lVar4 + uVar10 * 0xc);
        local_88._0_8_ = *(undefined8 *)(lVar6 + uVar11 * 0xc);
        local_88._s_0.C = *(int *)(lVar6 + 8 + uVar11 * 0xc);
        uVar16 = uVar14;
        do {
          iVar12 = *(int *)((longlong)&local_98 +
                           (longlong)
                           (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                     (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                           0xffffffffU) >> 0x1f)) * -3) * 4);
          iVar13 = *(int *)((longlong)&local_98 + uVar14 * 4);
          iVar8 = iVar12;
          if (((local_78 == iVar13) || (iVar8 = iVar13, local_78 == iVar12)) && (iStack_74 == iVar8)
             ) {
            iVar15 = (int)uVar16 + 2;
            iVar15 = *(int *)((longlong)&local_98 +
                             (longlong)
                             (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                                       (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) &
                                             0xffffffffU) >> 0x1f)) * -3) * 4);
            goto LAB_14c72e83b;
          }
          uVar16 = (ulonglong)((int)uVar16 + 1);
          iVar15 = iVar15 + 1;
          uVar14 = uVar14 + 1;
        } while ((longlong)uVar14 < 3);
        iVar15 = -1;
        iVar12 = iStack_74;
        iVar13 = local_78;
LAB_14c72e83b:
        iVar8 = IndexUtil::FindTriOtherVtx<int,UE::Geometry::FIndex3i>
                          (iVar13,iVar12,(FIndex3i *)&local_88._s_0);
        iVar9 = FDynamicMesh3::FindEdge(pFVar3,iVar15,iVar8);
        if (iVar9 == -1) {
          local_98._s_0.B = iVar8;
          local_98._s_0.A = iVar15;
          local_98._s_0.C = iVar12;
          dVar19 = ::`anonymous_namespace'::ComputeNormalError
                             (*(FDynamicMesh3 **)&this->field_0x8,pIVar2,(FIndex3i *)&local_98._s_0)
          ;
          local_98._s_0.B = iVar15;
          local_98._s_0.A = iVar8;
          local_98._s_0.C = iVar13;
          dVar20 = ::`anonymous_namespace'::ComputeNormalError
                             (*(FDynamicMesh3 **)&this->field_0x8,pIVar2,(FIndex3i *)&local_98._s_0)
          ;
          return dVar20 + dVar19 < (dVar17 + dVar18) * param_3;
        }
      }
    }
  }
  return false;
}

// RemeshWithFaceProjection @ 14c75bcc0

void __thiscall
UE::Geometry::FNormalFlowRemesher::RemeshWithFaceProjection(FNormalFlowRemesher *this)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 local_res8 [8];
  double local_res10;
  double local_res18;
  code *local_68;
  undefined1 *local_60;
  
  if (*(int *)(*(longlong *)&this->field_0x8 + 0x170) != 0) {
    iVar8 = 0;
    *(undefined4 *)&this->field_0x214 = 0;
    FQueueRemesher::ResetQueue((FQueueRemesher *)this);
    dVar3 = __real_3f847ae147ae147b;
    iVar9 = iVar8;
    if (0 < *(int *)&this->field_0x260) {
      do {
        cVar5 = (**(code **)(*(longlong *)this + 8))(this);
        if (cVar5 != '\0') {
          return;
        }
        iVar7 = FQueueRemesher::FastSplitIteration((FQueueRemesher *)this);
      } while ((dVar3 <= (double)iVar7 / (double)*(int *)(*(longlong *)&this->field_0x8 + 0x200)) &&
              (iVar9 = iVar9 + 1, iVar9 < *(int *)&this->field_0x260));
    }
    FQueueRemesher::ResetQueue((FQueueRemesher *)this);
    dVar4 = __real_3feccccccccccccd;
    dVar3 = *(double *)&this->field_0x158 * __real_3fb999999999999a;
    uVar1 = *(undefined8 *)&this->field_0x168;
    iVar9 = iVar8;
    while (cVar5 = (**(code **)(*(longlong *)this + 8))(this), cVar5 == '\0') {
      local_60 = local_res8;
      local_68 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FNormalFlowRemesher::RemeshWithFaceProjection'::__l15::<lambda_1>,bool>
                 ::Call;
      FQueueRemesher::RemeshIteration
                ((FQueueRemesher *)this,(TFunctionRef<bool___cdecl(void)> *)&local_68);
      if (*(int *)&this->field_0x264 / 2 < iVar9) {
        *(double *)&this->field_0x168 = *(double *)&this->field_0x168 * dVar4;
      }
      local_res10 = 0.0;
      if (this->field_0x210 == '\0') {
        TrackedFaceProjectionPass_Serial(this,&local_res10,false);
      }
      else {
        TrackedFaceProjectionPass(this,&local_res10,false);
      }
      iVar7 = iVar9 + 1;
      if (*(int *)&this->field_0x264 <= iVar9) break;
      if ((*(int *)&this->field_0x27c == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)&this->field_0x278 - *(int *)&this->field_0x2a4 < 1) && (local_res10 <= dVar3))
         || ((iVar9 = iVar7, this->MaxTriangleCount != 0 &&
             (this->MaxTriangleCount <= *(int *)(*(longlong *)&this->field_0x8 + 0x170))))) break;
    }
    *(undefined8 *)&this->field_0x168 = uVar1;
    if ((*(longlong *)&this->field_0xd0 != 0) && (0 < this->NumExtraProjectionIterations)) {
      do {
        cVar5 = (**(code **)(*(longlong *)this + 8))(this);
        if (cVar5 != '\0') {
          return;
        }
        local_res18 = 0.0;
        if (this->field_0x210 == '\0') {
          TrackedFaceProjectionPass_Serial(this,&local_res18,true);
        }
        else {
          TrackedFaceProjectionPass(this,&local_res18,true);
        }
        if (local_res18 == 0.0) {
          return;
        }
        TrackedEdgeFlipPass(this);
        iVar8 = iVar8 + 1;
      } while (iVar8 < this->NumExtraProjectionIterations);
    }
  }
  return;
}

// TrackedEdgeFlipPass @ 14c76d370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FNormalFlowRemesher::TrackedEdgeFlipPass(FNormalFlowRemesher *this)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulonglong *puVar14;
  int iVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  <lambda_1> local_res8 [8];
  int local_res10;
  int local_res14;
  int local_res18;
  int local_res1c;
  FNormalFlowRemesher *local_res20;
  int iStack_134;
  int iStack_12c;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  TArrayView<std::nullptr_t,int> local_110;
  code *local_100;
  FNormalFlowRemesher **local_f8;
  undefined1 local_f0 [4];
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined1 local_d0 [4];
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  ulonglong local_88;
  
  if ((*(int *)&this->field_0x27c == -1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ModifiedEdges",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\NormalFlowRemesher.cpp"
                          ,0x276,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*(longlong *)&this->field_0xd0 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NormalProjTarget != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\NormalFlowRemesher.cpp"
                          ,0x279,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar10 = __real_3fe8000000000000;
  dVar9 = __real_3f847ae147ae147b;
  uVar8 = _UNK_15060db28;
  uVar7 = ___xmm_ffffffffffffffffffffffffffffffff;
  lVar3 = *(longlong *)&this->field_0x8;
  if (this->bEnableParallelEdgeFlipPass != false) {
    iVar15 = *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4);
    if (*(int *)&this->field_0x370 < iVar15) {
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<bool,TSizedDefaultAllocator<32>_> *)&this->field_0x368,iVar15 * 2,Default);
    }
    local_res8[0] = (<lambda_1>)0x0;
    TArray<bool,TSizedDefaultAllocator<32>_>::Init
              ((TArray<bool,TSizedDefaultAllocator<32>_> *)&this->field_0x368,(bool *)local_res8,
               *(int *)&this->field_0x370);
    uVar19 = 0;
    local_110.DataPtr = (void **)0x0;
    local_110.ArrayNum = 0;
    local_100 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FNormalFlowRemesher::TrackedEdgeFlipPass'::__l19::<lambda_1>,void,int>
                ::Call;
    local_f8 = &local_res20;
    iVar15 = *(int *)(*(longlong *)&this->field_0x8 + 0x1d4) +
             *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200;
    local_res20 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar15,1,(TFunctionRef<void___cdecl(int)> *)&local_100,
               local_res8[0],None,&local_110);
    dVar10 = __real_3fe8000000000000;
    dVar9 = __real_3f847ae147ae147b;
    uVar8 = _UNK_15060db28;
    uVar7 = ___xmm_ffffffffffffffffffffffffffffffff;
    uVar21 = uVar19;
    if (0 < iVar15) {
      do {
        uVar17 = (uint)uVar19;
        uVar18 = 0;
        if ((int)uVar17 < *(int *)&this->field_0x370) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((*(char *)(uVar21 + *(longlong *)&this->field_0x368) != '\0') &&
            (lVar3 = *(longlong *)&this->field_0x8, -1 < (int)uVar17)) &&
           ((int)uVar17 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4))) {
          if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x1d8) + (uVar19 >> 9) * 8) +
                                  (ulonglong)(uVar17 & 0x1ff) * 2) - 1U) < 0xfffe) &&
             (bVar11 = EdgeFlipWouldReduceNormalError(this,uVar17,dVar9,dVar10), bVar11)) {
            local_ec = uVar7;
            uStack_e4 = uVar8;
            local_dc = 0xffffffffffffffff;
            iVar12 = (**(code **)(**(longlong **)&this->field_0x8 + 0x40))
                               (*(longlong **)&this->field_0x8,uVar19,local_f0);
            if (iVar12 == 0) {
              uVar4 = *(undefined8 *)
                       (*(longlong *)
                         (((*(FDynamicMesh3 **)&this->field_0x8)->Edges).Blocks.AllocatorInstance.
                          Data + (uVar19 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 0x10);
              FDynamicMesh3::GetEdgeOpposingV(*(FDynamicMesh3 **)&this->field_0x8,(int)&local_res10)
              ;
              FQueueRemesher::QueueOneRing((FQueueRemesher *)this,(int)uVar4);
              iStack_134 = (int)((ulonglong)uVar4 >> 0x20);
              FQueueRemesher::QueueOneRing((FQueueRemesher *)this,iStack_134);
              FQueueRemesher::QueueOneRing((FQueueRemesher *)this,local_res10);
              FQueueRemesher::QueueOneRing((FQueueRemesher *)this,local_res14);
              (**(code **)(*(longlong *)this + 0x50))(this,uVar19,local_f0);
            }
          }
        }
        uVar19 = (ulonglong)(uVar17 + 1);
        uVar21 = uVar21 + 1;
      } while ((longlong)uVar21 < (longlong)iVar15);
    }
    return;
  }
  iVar15 = *(int *)(lVar3 + 0x1d0) * 0x200;
  iVar12 = *(int *)(lVar3 + 0x1d4) + iVar15;
  puVar20 = (ulonglong *)0x0;
  if (((iVar12 != 0) &&
      (puVar20 = (ulonglong *)0x0,
      0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x1d8) - 1U))) &&
     (puVar20 = (ulonglong *)&DAT_00000001, 1 < iVar12)) {
    do {
      uVar21 = (ulonglong)((uint)puVar20 & 0x1ff);
      lVar5 = (*(undefined8 **)(lVar3 + 0x1d8))[(ulonglong)puVar20 >> 9];
      if ((*(short *)(lVar5 + uVar21 * 2) != 0) && (*(short *)(lVar5 + uVar21 * 2) != -1)) break;
      uVar18 = (uint)puVar20 + 1;
      puVar20 = (ulonglong *)(ulonglong)uVar18;
    } while ((int)uVar18 < iVar12);
  }
  iVar2 = *(int *)(lVar3 + 0x1d4);
  iVar13 = (int)puVar20;
joined_r0x00014c76d733:
  if (iVar13 == iVar2 + iVar15) {
    return;
  }
  do {
    lVar5 = *(longlong *)&this->field_0x8;
    uVar18 = (uint)puVar20;
    if (((((int)uVar18 < 0) ||
         (*(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4) <= (int)uVar18)) ||
        (0xfffd < (ushort)(*(short *)(*(longlong *)
                                       (*(longlong *)(lVar5 + 0x1d8) + ((ulonglong)puVar20 >> 9) * 8
                                       ) + (ulonglong)(uVar18 & 0x1ff) * 2) - 1U))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mesh->IsEdge(EdgeID)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\NormalFlowRemesher.cpp"
                            ,0x2bf,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (this->field_0xc8 == '\0') {
      local_b0[0] = 0;
      puVar14 = (ulonglong *)local_b0;
      local_a8 = 0;
      local_a0 = 0xffffffff;
    }
    else {
      if (*(int *)&this->field_0x18 != *(int *)&this->field_0x44) {
        puVar16 = &this->field_0x48;
        if (*(undefined1 **)&this->field_0x50 != (undefined1 *)0x0) {
          puVar16 = *(undefined1 **)&this->field_0x50;
        }
        iVar13 = *(int *)(puVar16 +
                         ((ulonglong)(*(int *)&this->field_0x58 - 1) & (ulonglong)puVar20) * 4);
        if (iVar13 != -1) {
          do {
            lVar5 = *(longlong *)&this->field_0x10 + (longlong)iVar13 * 0x28;
            if (*(uint *)(*(longlong *)&this->field_0x10 + (longlong)iVar13 * 0x28) == uVar18) {
              puVar14 = (ulonglong *)(lVar5 + 8);
              if (lVar5 == 0) {
                puVar14 = (ulonglong *)0x0;
              }
              if (puVar14 != (ulonglong *)0x0) {
                local_128 = *puVar14;
                uStack_120 = puVar14[1];
                local_118 = puVar14[2];
                goto LAB_14c76d83d;
              }
              break;
            }
            iVar13 = *(int *)(lVar5 + 0x20);
          } while (iVar13 != -1);
        }
      }
      local_128 = local_128 & 0xffffffff00000000;
      uStack_120 = 0;
      local_118 = CONCAT44(local_118._4_4_,0xffffffff);
LAB_14c76d83d:
      puVar14 = &local_128;
    }
    local_88 = puVar14[2];
    if (((*puVar14 & 1) == 0) &&
       (bVar11 = EdgeFlipWouldReduceNormalError(this,uVar18,dVar9,dVar10), bVar11)) {
      local_cc = uVar7;
      uStack_c4 = uVar8;
      local_bc = 0xffffffffffffffff;
      iVar13 = (**(code **)(**(longlong **)&this->field_0x8 + 0x40))
                         (*(longlong **)&this->field_0x8,puVar20,local_d0);
      if (iVar13 == 0) {
        uVar4 = *(undefined8 *)
                 (*(longlong *)
                   (((*(FDynamicMesh3 **)&this->field_0x8)->Edges).Blocks.AllocatorInstance.Data +
                   ((ulonglong)puVar20 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 0x10);
        FDynamicMesh3::GetEdgeOpposingV(*(FDynamicMesh3 **)&this->field_0x8,(int)&local_res18);
        FQueueRemesher::QueueOneRing((FQueueRemesher *)this,(int)uVar4);
        iStack_12c = (int)((ulonglong)uVar4 >> 0x20);
        FQueueRemesher::QueueOneRing((FQueueRemesher *)this,iStack_12c);
        FQueueRemesher::QueueOneRing((FQueueRemesher *)this,local_res18);
        FQueueRemesher::QueueOneRing((FQueueRemesher *)this,local_res1c);
        (**(code **)(*(longlong *)this + 0x50))(this,puVar20,local_d0);
      }
    }
    puVar20 = (ulonglong *)(ulonglong)(uVar18 + 1);
    if (iVar12 <= (int)(uVar18 + 1)) break;
    while( true ) {
      sVar1 = *(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x1d8) + ((ulonglong)puVar20 >> 9) * 8)
                        + (ulonglong)((uint)puVar20 & 0x1ff) * 2);
      if ((sVar1 != 0) && (sVar1 != -1)) break;
      uVar18 = (uint)puVar20 + 1;
      puVar20 = (ulonglong *)(ulonglong)uVar18;
      if (iVar12 <= (int)uVar18) goto LAB_14c76d951;
    }
  } while( true );
LAB_14c76d951:
  iVar13 = (int)puVar20;
  goto joined_r0x00014c76d733;
}

// TrackedFaceProjectionPass @ 14c76d9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FNormalFlowRemesher::TrackedFaceProjectionPass
          (FNormalFlowRemesher *this,double *param_1,bool param_2)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auStackY_268 [32];
  <lambda_1> local_228 [8];
  undefined1 local_220 [8];
  TArray<double,TSizedDefaultAllocator<32>_> local_218;
  uint local_208 [2];
  int local_200 [2];
  int local_1f8 [2];
  undefined8 local_1f0;
  double *local_1e8;
  int local_1e0 [2];
  FNormalFlowRemesher *local_1d8;
  FNormalFlowRemesher *local_1d0;
  TArrayView<std::nullptr_t,int> local_1c8;
  code *local_1b8;
  FNormalFlowRemesher **local_1b0;
  TArrayView<std::nullptr_t,int> local_1a8;
  code *local_198;
  FNormalFlowRemesher **local_190;
  TArrayView<std::nullptr_t,int> local_188;
  code *local_178;
  FNormalFlowRemesher **local_170;
  TArrayView<std::nullptr_t,int> local_168;
  code *local_158;
  undefined8 **local_150;
  FNormalFlowRemesher *local_148;
  double *local_140;
  undefined1 local_138;
  double local_130;
  undefined8 *local_128;
  int *local_120;
  int *local_118;
  FNormalFlowRemesher **local_110;
  <lambda_1> *local_108;
  TArray<double,TSizedDefaultAllocator<32>_> *local_100;
  longlong local_f8 [2];
  longlong local_e8 [3];
  longlong *local_d0;
  FNormalFlowRemesher *local_c8;
  longlong local_c0;
  bool local_b8;
  double local_b0;
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  double local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1e8 = param_1;
  if ((*(longlong *)&this->field_0xd0 == 0) &&
     (bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3196788319266537347>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\NormalFlowRemesher.cpp"
                          ,0x7d,"ProjTarget != nullptr"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar6 = *(longlong *)&this->field_0xd0;
  if ((lVar6 == 0) &&
     (bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3196788319266537344>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\NormalFlowRemesher.cpp"
                          ,0x80,"NormalProjTarget != nullptr"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  piVar1 = &(this->ProjectionVertexBuffer).ArrayNum;
  iVar11 = *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
           *(int *)(*(longlong *)&this->field_0x8 + 0x144);
  iVar14 = *piVar1;
  if (iVar14 < iVar11 * 3) {
    uVar15 = iVar11 * 6;
    pTVar2 = &this->ProjectionVertexBuffer;
    if (iVar14 < (int)uVar15) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar15 - iVar14,&pTVar2->AllocatorInstance,piVar1,
                 &(this->ProjectionVertexBuffer).ArrayMax);
    }
    else {
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if ((int)uVar15 < iVar14) {
        uVar19 = iVar14 + iVar11 * -6;
        if (((int)(uVar19 | uVar15) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (uVar19 != 0) {
          pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x18;
          iVar14 = ((this->ProjectionVertexBuffer).ArrayNum - uVar19) + iVar11 * -6;
          if (iVar14 != 0) {
            memmove(pFVar3,pFVar3 + (longlong)(int)uVar19 * 0x18,(longlong)iVar14 * 0x18);
          }
          piVar1 = &(this->ProjectionVertexBuffer).ArrayNum;
          *piVar1 = *piVar1 - uVar19;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&pTVar2->AllocatorInstance,(this->ProjectionVertexBuffer).ArrayNum,
                     &(this->ProjectionVertexBuffer).ArrayMax);
        }
      }
    }
  }
  if ((this->ProjectionWeightBuffer).ArrayNum < iVar11 * 3) {
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->ProjectionWeightBuffer,iVar11 * 6,Default);
  }
  iVar14 = *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
           *(int *)(*(longlong *)&this->field_0x8 + 0x24);
  uVar15 = iVar14 * 2;
  if ((this->TempWeightBuffer).ArrayNum < iVar14) {
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->TempWeightBuffer,uVar15,Default);
  }
  if ((ulonglong)(uint)(*(int *)&this->field_0x228 * 0x200 + *(int *)&this->field_0x22c) <
      (ulonglong)(longlong)iVar14) {
    TDynamicVector<UE::Math::TVector<double>,512>::Resize
              ((TDynamicVector<UE::Math::TVector<double>,512> *)&this->field_0x228,uVar15);
  }
  if (*(int *)&this->field_0x248 < iVar14) {
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<bool,TSizedDefaultAllocator<32>_> *)&this->field_0x240,uVar15,Default);
  }
  iVar14 = *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
           *(int *)(*(longlong *)&this->field_0x8 + 0x1d4);
  if (*(int *)&this->field_0x370 < iVar14) {
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<bool,TSizedDefaultAllocator<32>_> *)&this->field_0x368,iVar14 * 2,Default);
  }
  dVar4 = *(double *)&this->field_0x160;
  dVar9 = __real_3fe0000000000000;
  if (param_2) {
    dVar9 = __real_3fd0000000000000;
  }
  dVar9 = dVar4 * dVar9;
  auVar22._0_4_ = this->FillAreaDistanceMultiplier;
  (**(code **)(*(longlong *)this + 0xa0))(this,local_f8);
  uVar17 = 0;
  local_b0 = (double)auVar22._0_4_ * dVar4;
  local_c8 = this;
  local_c0 = lVar6;
  local_b8 = param_2;
  local_a8 = local_f8[0];
  local_80 = (longlong *)0x0;
  if (local_f8[0] != 0) {
    plVar12 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar12 = local_d0;
    }
    (**(code **)*plVar12)(plVar12,local_98);
  }
  local_1b8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FNormalFlowRemesher::TrackedFaceProjectionPass'::__l2::<lambda_1>,void,int>
              ::Call;
  local_1b0 = &local_c8;
  local_1c8.DataPtr = (void **)0x0;
  local_1c8.ArrayNum = 0;
  local_78 = dVar9;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
             *(int *)(*(longlong *)&this->field_0x8 + 0x144),1,
             (TFunctionRef<void___cdecl(int)> *)&local_1b8,local_228[0],None,&local_1c8);
  if (local_a8 != 0) {
    plVar12 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar12 = local_80;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  local_140 = local_1e8;
  local_198 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FNormalFlowRemesher::TrackedFaceProjectionPass'::__l2::<lambda_2>,void,int>
              ::Call;
  local_190 = &local_148;
  local_1a8.DataPtr = (void **)0x0;
  local_1a8.ArrayNum = 0;
  local_148 = this;
  local_138 = param_2;
  local_130 = dVar9;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
             *(int *)(*(longlong *)&this->field_0x8 + 0x24),1,
             (TFunctionRef<void___cdecl(int)> *)&local_198,local_228[0],None,&local_1a8);
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FNormalFlowRemesher::TrackedFaceProjectionPass'::__l2::<lambda_3>,void,int>
              ::Call;
  local_170 = &local_1d8;
  local_188.DataPtr = (void **)0x0;
  local_188.ArrayNum = 0;
  local_1d8 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(*(longlong *)&this->field_0x8 + 0x1d0) * 0x200 +
             *(int *)(*(longlong *)&this->field_0x8 + 0x1d4),1,
             (TFunctionRef<void___cdecl(int)> *)&local_178,local_228[0],None,&local_188);
  lVar6 = *(longlong *)&this->field_0x8;
  iVar14 = *(int *)(lVar6 + 0x1d4);
  iVar11 = *(int *)(lVar6 + 0x1d0) * 0x200 + iVar14;
  if (((iVar11 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar6 + 0x1d8) - 1U))) &&
     (uVar17 = 1, 1 < iVar11)) {
    do {
      uVar13 = (ulonglong)((uint)uVar17 & 0x1ff);
      lVar7 = (*(undefined8 **)(lVar6 + 0x1d8))[uVar17 >> 9];
      if ((*(short *)(lVar7 + uVar13 * 2) != 0) && (*(short *)(lVar7 + uVar13 * 2) != -1)) break;
      uVar15 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar15;
    } while ((int)uVar15 < iVar11);
  }
  iVar5 = *(int *)(lVar6 + 0x1d0);
  iVar16 = (int)uVar17;
  do {
    if (iVar16 == iVar5 * 0x200 + iVar14) {
      local_1f0 = 0;
      local_1f8[0] = *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
                     *(int *)(*(longlong *)&this->field_0x8 + 0x24);
      auVar22._0_4_ = (float)local_1f8[0] * __real_3d000000;
      iVar14 = (int)auVar22._0_4_;
      if ((iVar14 != -0x80000000) && ((float)iVar14 != auVar22._0_4_)) {
        auVar22._4_4_ = auVar22._0_4_;
        auVar22._8_8_ = 0;
        uVar15 = movmskps((uint)(byte)local_228[0],auVar22);
        auVar22._0_4_ = (float)(int)(iVar14 + (uVar15 & 1 ^ 1));
      }
      local_200[0] = (int)auVar22._0_4_;
      local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.ArrayNum = 0;
      local_218.ArrayMax = 0;
      local_1d0 = this;
      TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_218,0x20,Default);
      local_128 = &local_1f0;
      local_168.DataPtr = (void **)0x0;
      local_120 = local_200;
      local_168.ArrayNum = 0;
      local_118 = local_1f8;
      local_110 = &local_1d0;
      local_108 = local_228;
      local_100 = &local_218;
      local_158 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::ParallelTransformReduce<int,double,`UE::Geometry::FNormalFlowRemesher::TrackedFaceProjectionPass'::__l2::<lambda_4>,`UE::Geometry::FNormalFlowRemesher::TrackedFaceProjectionPass'::__l2::<lambda_5>_>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_150 = &local_128;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",0x20,1,(TFunctionRef<void___cdecl(int)> *)&local_158,
                 local_228[0],None,&local_168);
      iVar14 = local_218.ArrayNum;
      uVar17 = (ulonglong)local_218.ArrayNum;
      uVar20 = (undefined4)local_1f0;
      uVar21 = (undefined4)((ulonglong)local_1f0 >> 0x20);
      pFVar3 = local_218.AllocatorInstance.Data + uVar17 * 8;
      FVar18.Data = local_218.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar17 != iVar14) {
          `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_220);
          uVar17 = local_218._8_8_ & 0xffffffff;
        }
        if (FVar18.Data == pFVar3) break;
        dVar4 = *(double *)FVar18.Data;
        FVar18.Data = FVar18.Data + 8;
        if (dVar4 <= (double)CONCAT44(uVar21,uVar20)) {
          dVar4 = (double)CONCAT44(uVar21,uVar20);
        }
        uVar20 = SUB84(dVar4,0);
        uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
      }
      if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.AllocatorInstance.Data);
      }
      *local_1e8 = (double)CONCAT44(uVar21,uVar20);
      (**(code **)(*(longlong *)this + 0x80))(this,1);
      if (local_f8[0] != 0) {
        plVar12 = local_e8;
        if (local_d0 != (longlong *)0x0) {
          plVar12 = local_d0;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      return;
    }
    while( true ) {
      uVar19 = (uint)uVar17;
      uVar15 = 0;
      if ((int)uVar19 < *(int *)&this->field_0x370) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(char *)((longlong)(int)uVar19 + *(longlong *)&this->field_0x368) != '\0') {
        local_208[0] = uVar19;
        if (*(int *)&this->field_0x27c == -1) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ModifiedEdges",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\QueueRemesher.h"
                              ,0x85,L"");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((*(int *)&this->field_0x27c == -1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x270,
                   local_1e0,(bool *)local_208);
      }
      uVar17 = (ulonglong)(uVar19 + 1);
      if (iVar11 <= (int)(uVar19 + 1)) break;
      while( true ) {
        uVar13 = (ulonglong)((uint)uVar17 & 0x1ff);
        lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x1d8) + (uVar17 >> 9) * 8);
        if ((*(short *)(lVar7 + uVar13 * 2) != 0) && (*(short *)(lVar7 + uVar13 * 2) != -1)) break;
        uVar15 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar15;
        if (iVar11 <= (int)uVar15) goto LAB_14c76dffa;
      }
    }
LAB_14c76dffa:
    iVar16 = (int)uVar17;
  } while( true );
}

// TrackedFaceProjectionPass_Serial @ 14c76e1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c76e6b8) */
/* WARNING: Removing unreachable block (ram,0x00014c76e798) */
/* WARNING: Removing unreachable block (ram,0x00014c76e79b) */
/* WARNING: Removing unreachable block (ram,0x00014c76e79f) */
/* WARNING: Removing unreachable block (ram,0x00014c76e7ce) */
/* WARNING: Removing unreachable block (ram,0x00014c76e7d6) */
/* WARNING: Removing unreachable block (ram,0x00014c76e862) */
/* WARNING: Removing unreachable block (ram,0x00014c76e942) */
/* WARNING: Removing unreachable block (ram,0x00014c76e945) */
/* WARNING: Removing unreachable block (ram,0x00014c76e949) */
/* WARNING: Removing unreachable block (ram,0x00014c76e978) */
/* WARNING: Removing unreachable block (ram,0x00014c76e980) */
/* WARNING: Removing unreachable block (ram,0x00014c76ea07) */
/* WARNING: Removing unreachable block (ram,0x00014c76eae4) */
/* WARNING: Removing unreachable block (ram,0x00014c76eae7) */
/* WARNING: Removing unreachable block (ram,0x00014c76eaeb) */
/* WARNING: Removing unreachable block (ram,0x00014c76eb1a) */
/* WARNING: Removing unreachable block (ram,0x00014c76eb1f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FNormalFlowRemesher::TrackedFaceProjectionPass_Serial
          (FNormalFlowRemesher *this,double *param_1,bool param_2)

{
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  double *pdVar15;
  int iVar16;
  longlong *plVar17;
  uint *puVar18;
  double *pdVar19;
  longlong *plVar20;
  int iVar21;
  undefined1 *puVar22;
  FRefCountVector *pFVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  FSmallListSet *pFVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  double dVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auStackY_478 [32];
  IndexIterator local_440;
  TVector<double>_u_0 local_430;
  undefined1 local_418 [24];
  undefined8 local_400;
  uint local_3f8;
  double local_3f0;
  TVector<double>_u_0 local_3e8;
  uint local_3d0 [2];
  uint local_3c8 [2];
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  TVector<double>_u_0 local_3a0;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_370;
  double *local_358;
  TVector<double>_u_0 local_350;
  TQuaternion<double>_u_0 local_338;
  undefined8 local_318;
  double dStack_310;
  TVector<double>_u_0 local_308;
  int local_2f0 [2];
  double local_2e8;
  double local_2e0;
  longlong local_2d8 [2];
  undefined1 local_2c8 [24];
  undefined8 local_2b0;
  IndexIterator local_2a8;
  TQuaternion<double>_u_0 local_298;
  BaseValueIterator local_278;
  TVector<double>_u_0 local_250;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  double local_180;
  TVector<double> local_178;
  TVector<double> local_160;
  TVector<double> local_148;
  TVector<double> local_130;
  longlong local_118 [2];
  longlong local_108 [3];
  longlong *local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_478;
  local_358 = param_1;
  if ((*(longlong *)&this->field_0xd0 == 0) &&
     (bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3196788319266537077>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\NormalFlowRemesher.cpp"
                          ,0x18b,"ProjTarget != nullptr"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar20 = *(longlong **)&this->field_0xd0;
  if ((plVar20 == (longlong *)0x0) &&
     (bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3196788319266537074>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\NormalFlowRemesher.cpp"
                          ,0x18e,"NormalProjTarget != nullptr"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FQueueRemesher::InitializeVertexBufferForPass((FQueueRemesher *)this);
  this_00 = &this->TempWeightBuffer;
  iVar21 = *(int *)(*(longlong *)&this->field_0x8 + 0x24) +
           *(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200;
  if ((this->TempWeightBuffer).ArrayNum < iVar21) {
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar21 * 2,Default);
  }
  local_2e8 = 0.0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (this_00,&local_2e8,(this->TempWeightBuffer).ArrayNum);
  iVar16 = *(int *)(*(longlong *)&this->field_0x8 + 0x140) * 0x200 +
           *(int *)(*(longlong *)&this->field_0x8 + 0x144);
  iVar21 = iVar16 * 3;
  iVar16 = iVar16 * 6;
  if ((this->ProjectionWeightBuffer).ArrayNum < iVar21) {
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&this->ProjectionWeightBuffer,iVar16,Default)
    ;
  }
  local_2e0 = 0.0;
  TArray<double,TSizedDefaultAllocator<32>_>::Init
            (&this->ProjectionWeightBuffer,&local_2e0,(this->ProjectionWeightBuffer).ArrayNum);
  if ((this->ProjectionVertexBuffer).ArrayNum < iVar21) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ProjectionVertexBuffer,iVar16,Default);
  }
  local_208._s_0.Z = 0.0;
  local_208._s_0.X = 0.0;
  local_208._s_0.Y = 0.0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
            (&this->ProjectionVertexBuffer,(TVector<double> *)&local_208._s_0,
             (this->ProjectionWeightBuffer).ArrayNum);
  local_3c0 = __real_3fe0000000000000;
  if (param_2) {
    local_3c0 = __real_3fd0000000000000;
  }
  local_3c0 = *(double *)&this->field_0x160 * local_3c0;
  local_318 = (double)this->FillAreaDistanceMultiplier * *(double *)&this->field_0x160;
  (**(code **)(*(longlong *)this + 0xa0))(this,local_118);
  lVar3 = *(longlong *)&this->field_0x8;
  pFVar23 = (FRefCountVector *)(lVar3 + 0x140);
  FRefCountVector::IndexIterator::IndexIterator
            (&local_440,pFVar23,0,(pFVar23->RefCounts).CurBlock * 0x200 + *(int *)(lVar3 + 0x144));
  iVar21 = (pFVar23->RefCounts).CurBlock * 0x200 + *(int *)(lVar3 + 0x144);
  FRefCountVector::IndexIterator::IndexIterator(&local_2a8,pFVar23,iVar21,iVar21);
  uVar52 = SUB84(__real_3ff0000000000000,0);
  uVar53 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (local_440._8_4_ != local_2a8._8_4_) {
    uVar49 = (undefined4)__real_46293e5939a08cea;
    uVar50 = (undefined4)((ulonglong)__real_46293e5939a08cea >> 0x20);
    uVar47 = (undefined4)__real_3feccccccccccccd;
    uVar48 = (undefined4)((ulonglong)__real_3feccccccccccccd >> 0x20);
    dVar37 = ___xmm_46293e5939a08cea46293e5939a08cea;
    dVar32 = _UNK_1528c6bb8;
    do {
      uVar7 = local_440._8_4_;
      FDynamicMesh3::GetTriInfo
                (*(FDynamicMesh3 **)&this->field_0x8,local_440._8_4_,
                 (TVector<double> *)&local_370._s_0,&local_3f0,(TVector<double> *)&local_430._s_0);
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)&this->field_0x8 + 0x130) +
               (ulonglong)((uint)uVar7 >> 9) * 8);
      local_400 = *(ulonglong *)(lVar3 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
      uVar1 = *(uint *)(lVar3 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
      local_3e8._s_0.Z = (double)CONCAT44(uVar50,uVar49);
      local_3f8 = uVar1;
      local_3e8._s_0.X = dVar37;
      local_3e8._s_0.Y = dVar32;
      (**(code **)(*plVar20 + 0x10))(plVar20,&local_3b8,&local_430,&local_3e8);
      auVar33._0_8_ = local_370._s_0.Y * local_370._s_0.Y;
      auVar33._8_8_ = 0;
      auVar39._0_8_ =
           local_370._s_0.X * local_370._s_0.X + auVar33._0_8_ + local_370._s_0.Z * local_370._s_0.Z
      ;
      auVar39._8_8_ = 0;
      auVar33 = sqrtpd(auVar33,auVar39);
      if ((double)CONCAT44(uVar48,uVar47) <= auVar33._0_8_) {
        auVar34._0_8_ = local_3e8._s_0.X * local_3e8._s_0.X;
        auVar34._8_8_ = 0;
        auVar40._0_8_ =
             local_3e8._s_0.Y * local_3e8._s_0.Y + auVar34._0_8_ +
             local_3e8._s_0.Z * local_3e8._s_0.Z;
        auVar40._8_8_ = 0;
        auVar33 = sqrtpd(auVar34,auVar40);
        if ((double)CONCAT44(uVar48,uVar47) <= auVar33._0_8_) {
          if ((((!param_2) || (this->bSmoothInFillAreas == false)) ||
              (auVar35._0_8_ = (local_430._s_0.Z - local_3a8) * (local_430._s_0.Z - local_3a8),
              auVar35._8_8_ = 0,
              auVar41._0_8_ =
                   (local_430._s_0.Y - dStack_3b0) * (local_430._s_0.Y - dStack_3b0) +
                   (local_430._s_0.X - local_3b8) * (local_430._s_0.X - local_3b8) + auVar35._0_8_,
              auVar41._8_8_ = 0, auVar33 = sqrtpd(auVar35,auVar41), auVar33._0_8_ <= local_318)) ||
             (this->FillAreaSmoothMultiplier <= 0.0)) {
            dVar37 = this->SurfaceProjectionSpeed;
            dVar32 = this->NormalAlignmentSpeed;
            dVar30 = (double)CONCAT44(uVar53,uVar52) - dVar37;
            dVar44 = (double)CONCAT44(uVar53,uVar52) - dVar32;
            dVar38 = local_370._s_0.X * dVar44 + dVar32 * local_3e8._s_0.X;
            dVar45 = local_370._s_0.Y * dVar44 + dVar32 * local_3e8._s_0.Y;
            dVar32 = local_370._s_0.Z * dVar44 + local_3e8._s_0.Z * dVar32;
            auVar36._0_8_ = dVar32 * dVar32;
            auVar36._8_8_ = 0;
            auVar42._0_8_ = dVar45 * dVar45 + dVar38 * dVar38 + auVar36._0_8_;
            auVar42._8_8_ = 0;
            auVar33 = sqrtpd(auVar36,auVar42);
            if (auVar33._0_8_ <= 0.0) {
              local_3e8._s_0.Z = 0.0;
              local_3e8._s_0.Y = 0.0;
              local_3e8._s_0.X = 0.0;
            }
            else {
              dVar44 = (double)CONCAT44(uVar53,uVar52) / auVar33._0_8_;
              local_3e8._s_0.Z = dVar44 * dVar32;
              local_3e8._s_0.Y = dVar44 * dVar45;
              local_3e8._s_0.X = dVar44 * dVar38;
            }
            if (SQRT(local_3e8._s_0.X * local_3e8._s_0.X + local_3e8._s_0.Y * local_3e8._s_0.Y +
                     local_3e8._s_0.Z * local_3e8._s_0.Z) < __real_3fb999999999999a) {
              local_3e8._s_0.Z = local_370._s_0.Z;
              local_3e8._s_0.X = local_370._s_0.X;
              local_3e8._s_0.Y = local_370._s_0.Y;
            }
            dVar32 = (local_430._s_0.X * dVar30 + local_3b8 * dVar37) - local_430._s_0.X;
            dVar38 = (local_430._s_0.Y * dVar30 + dStack_3b0 * dVar37) - local_430._s_0.Y;
            dVar30 = (local_430._s_0.Z * dVar30 + local_3a8 * dVar37) - local_430._s_0.Z;
            auVar43._0_8_ = dVar38 * dVar38 + dVar32 * dVar32 + dVar30 * dVar30;
            auVar43._8_8_ = 0;
            auVar33 = sqrtpd(auVar43,auVar43);
            dVar37 = auVar33._0_8_;
            if (dVar37 <= 0.0) {
              dVar30 = 0.0;
              dVar38 = 0.0;
              dVar32 = 0.0;
              dVar37 = 0.0;
            }
            else {
              dVar44 = (double)CONCAT44(uVar53,uVar52) / dVar37;
              dVar32 = dVar32 * dVar44;
              dVar38 = dVar38 * dVar44;
              dVar30 = dVar30 * dVar44;
            }
            if (local_3c0 <= dVar37) {
              dVar37 = local_3c0;
            }
            uVar14 = (ulonglong)(uVar7 & 0x1ff);
            local_338._s_0.X = 0.0;
            local_338._s_0.W = (double)CONCAT44(uVar53,uVar52);
            local_350._s_0.Z = local_430._s_0.Z;
            local_3b8 = dVar37 * dVar32 + local_430._s_0.X;
            dStack_3b0 = dVar37 * dVar38 + local_430._s_0.Y;
            local_338._s_0.Y = 0.0;
            local_338._s_0.Z = 0.0;
            local_3a8 = dVar37 * dVar30 + local_430._s_0.Z;
            local_350._s_0.X = local_430._s_0.X;
            local_350._s_0.Y = local_430._s_0.Y;
            lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x10);
            lVar28 = *(longlong *)
                      (*(longlong *)(*(longlong *)&this->field_0x8 + 0x130) +
                      (ulonglong)((uint)uVar7 >> 9) * 8);
            uVar11 = *(uint *)(lVar28 + uVar14 * 0xc);
            uVar27 = (ulonglong)(uVar11 & 0x1ff);
            lVar4 = *(longlong *)(lVar3 + (ulonglong)(uVar11 >> 9) * 8);
            pdVar19 = (double *)(lVar4 + uVar27 * 0x18);
            dVar30 = *pdVar19;
            dVar44 = pdVar19[1];
            dVar37 = *(double *)(lVar4 + 0x10 + uVar27 * 0x18);
            uVar11 = *(uint *)(lVar28 + 4 + uVar14 * 0xc);
            uVar27 = (ulonglong)(uVar11 & 0x1ff);
            lVar4 = *(longlong *)(lVar3 + (ulonglong)(uVar11 >> 9) * 8);
            pdVar19 = (double *)(lVar4 + uVar27 * 0x18);
            dVar45 = *pdVar19;
            dVar46 = pdVar19[1];
            dVar32 = *(double *)(lVar4 + 0x10 + uVar27 * 0x18);
            uVar11 = *(uint *)(lVar28 + 8 + uVar14 * 0xc);
            uVar27 = (ulonglong)(uVar11 & 0x1ff);
            lVar3 = *(longlong *)(lVar3 + (ulonglong)(uVar11 >> 9) * 8);
            pdVar19 = (double *)(lVar3 + uVar27 * 0x18);
            dVar31 = *pdVar19;
            dVar51 = pdVar19[1];
            dVar38 = *(double *)(lVar3 + 0x10 + uVar27 * 0x18);
            local_1f0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
            local_1f0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
            local_1f0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
            TQuaternion<double>::SetFromTo
                      ((TQuaternion<double> *)&local_338._s_0,(TVector<double> *)&local_1f0._s_0,
                       (TVector<double> *)&local_370._s_0);
            uVar9 = local_350._s_0.Z;
            uVar8 = local_350._s_0.Y;
            uVar13 = local_350._s_0.X;
            local_250._s_0.X = dVar30 - local_350._s_0.X;
            local_250._s_0.Y = dVar44 - local_350._s_0.Y;
            local_250._s_0.Z = dVar37 - local_350._s_0.Z;
            TQuaternion<double>::InverseMultiply
                      ((TQuaternion<double> *)&local_338._s_0,(TVector<double> *)&local_1d8._s_0,
                       (TVector<double> *)&local_250._s_0);
            local_308._s_0.X = local_1d8._s_0.X;
            local_308._s_0.Y = local_1d8._s_0.Y;
            local_308._s_0.Z = local_1d8._s_0.Z;
            local_238._s_0.X = dVar45 - (double)uVar13;
            local_238._s_0.Z = dVar32 - (double)uVar9;
            local_238._s_0.Y = dVar46 - (double)uVar8;
            TQuaternion<double>::InverseMultiply
                      ((TQuaternion<double> *)&local_338._s_0,(TVector<double> *)&local_1c0._s_0,
                       (TVector<double> *)&local_238._s_0);
            local_220._s_0.Z = dVar38 - (double)uVar9;
            local_3a0._s_0.X = local_1c0._s_0.X;
            local_3a0._s_0.Y = local_1c0._s_0.Y;
            local_3a0._s_0.Z = local_1c0._s_0.Z;
            local_220._s_0.X = dVar31 - (double)uVar13;
            local_220._s_0.Y = dVar51 - (double)uVar8;
            TQuaternion<double>::InverseMultiply
                      ((TQuaternion<double> *)&local_338._s_0,(TVector<double> *)&local_1a8._s_0,
                       (TVector<double> *)&local_220._s_0);
            local_388._s_0.X = local_1a8._s_0.X;
            local_388._s_0.Y = local_1a8._s_0.Y;
            local_388._s_0.Z = local_1a8._s_0.Z;
            pTVar12 = TFrame3<double>::GetAxis((TFrame3<double> *)&local_350._s_0,&local_178,2);
            local_298._s_0.X = 0.0;
            local_298._s_0.W = (double)CONCAT44(uVar53,uVar52);
            local_298._s_0.Y = 0.0;
            local_298._s_0.Z = 0.0;
            TQuaternion<double>::SetFromTo
                      ((TQuaternion<double> *)&local_298._s_0,pTVar12,
                       (TVector<double> *)&local_3e8._s_0);
            TFrame3<double>::Rotate
                      ((TFrame3<double> *)&local_350._s_0,(TQuaternion<double> *)&local_298._s_0);
            dVar46 = dStack_3b0;
            dVar44 = local_3b8;
            local_350._s_0.Z = local_3a8;
            local_350._s_0.X = local_3b8;
            local_350._s_0.Y = dStack_3b0;
            pTVar12 = operator*<double>(&local_160,(TQuaternion<double> *)&local_338._s_0,
                                        (TVector<double> *)&local_308._s_0);
            dVar31 = local_3a8;
            dVar32 = dVar46 + (pTVar12->field0_0x0)._s_0.Y;
            dVar37 = dVar44 + (pTVar12->field0_0x0)._s_0.X;
            dVar38 = local_3a8 + (pTVar12->field0_0x0)._s_0.Z;
            local_308._s_0.X = dVar37;
            local_308._s_0.Y = dVar32;
            local_308._s_0.Z = dVar38;
            pTVar12 = operator*<double>(&local_148,(TQuaternion<double> *)&local_338._s_0,
                                        (TVector<double> *)&local_3a0._s_0);
            dVar51 = dVar44 + (pTVar12->field0_0x0)._s_0.X;
            dVar30 = dVar46 + (pTVar12->field0_0x0)._s_0.Y;
            dVar45 = dVar31 + (pTVar12->field0_0x0)._s_0.Z;
            local_3a0._s_0.X = dVar51;
            local_3a0._s_0.Y = dVar30;
            local_3a0._s_0.Z = dVar45;
            pTVar12 = operator*<double>(&local_130,(TQuaternion<double> *)&local_338._s_0,
                                        (TVector<double> *)&local_388._s_0);
            local_388._s_0.Z = dVar31 + (pTVar12->field0_0x0)._s_0.Z;
            local_388._s_0.X = dVar44 + (pTVar12->field0_0x0)._s_0.X;
            local_388._s_0.Y = dVar46 + (pTVar12->field0_0x0)._s_0.Y;
            lVar28 = (longlong)(int)(uint)local_400;
            uVar27 = (ulonglong)((uint)local_400 & 0x1ff);
            dVar44 = local_370._s_0.Y * local_3e8._s_0.Y + local_370._s_0.X * local_3e8._s_0.X +
                     local_370._s_0.Z * local_3e8._s_0.Z;
            lVar3 = *(longlong *)
                     (*(longlong *)&this->field_0x230 + (ulonglong)((uint)local_400 >> 9) * 8);
            if (__real_3ff0000000000000 <= dVar44) {
              dVar44 = __real_3ff0000000000000;
            }
            if (dVar44 <= 0.0) {
              dVar44 = 0.0;
            }
            dVar44 = dVar44 * dVar44 * dVar44 * local_3f0;
            *(double *)(lVar3 + uVar27 * 0x18) =
                 dVar44 * dVar37 + *(double *)(lVar3 + uVar27 * 0x18);
            *(double *)(lVar3 + 8 + uVar27 * 0x18) =
                 dVar44 * dVar32 + *(double *)(lVar3 + 8 + uVar27 * 0x18);
            *(double *)(lVar3 + 0x10 + uVar27 * 0x18) =
                 dVar44 * dVar38 + *(double *)(lVar3 + 0x10 + uVar27 * 0x18);
            uVar11 = 0;
            if ((int)(uint)local_400 < (this->TempWeightBuffer).ArrayNum) {
              uVar11 = ~(uint)local_400 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this_00->AllocatorInstance).Data;
            *(double *)(pFVar5 + lVar28 * 8) = dVar44 + *(double *)(pFVar5 + lVar28 * 8);
            lVar28 = (longlong)(int)local_400._4_4_;
            uVar27 = (ulonglong)(local_400._4_4_ & 0x1ff);
            lVar3 = *(longlong *)
                     (*(longlong *)&this->field_0x230 + (ulonglong)(local_400._4_4_ >> 9) * 8);
            *(double *)(lVar3 + uVar27 * 0x18) =
                 dVar51 * dVar44 + *(double *)(lVar3 + uVar27 * 0x18);
            *(double *)(lVar3 + 8 + uVar27 * 0x18) =
                 dVar30 * dVar44 + *(double *)(lVar3 + 8 + uVar27 * 0x18);
            *(double *)(lVar3 + 0x10 + uVar27 * 0x18) =
                 dVar45 * dVar44 + *(double *)(lVar3 + 0x10 + uVar27 * 0x18);
            uVar11 = 0;
            if ((int)local_400._4_4_ < (this->TempWeightBuffer).ArrayNum) {
              uVar11 = ~local_400._4_4_ >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this_00->AllocatorInstance).Data;
            *(double *)(pFVar5 + lVar28 * 8) = dVar44 + *(double *)(pFVar5 + lVar28 * 8);
            uVar27 = (ulonglong)(uVar1 & 0x1ff);
            lVar3 = *(longlong *)(*(longlong *)&this->field_0x230 + (ulonglong)(uVar1 >> 9) * 8);
            *(double *)(lVar3 + uVar27 * 0x18) =
                 local_388._s_0.X * dVar44 + *(double *)(lVar3 + uVar27 * 0x18);
            *(double *)(lVar3 + 8 + uVar27 * 0x18) =
                 local_388._s_0.Y * dVar44 + *(double *)(lVar3 + 8 + uVar27 * 0x18);
            *(double *)(lVar3 + 0x10 + uVar27 * 0x18) =
                 local_388._s_0.Z * dVar44 + *(double *)(lVar3 + 0x10 + uVar27 * 0x18);
            uVar11 = 0;
            if ((int)uVar1 < (this->TempWeightBuffer).ArrayNum) {
              uVar11 = ~uVar1 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this_00->AllocatorInstance).Data;
            uVar52 = SUB84(__real_3ff0000000000000,0);
            uVar53 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            *(double *)(pFVar5 + (longlong)(int)uVar1 * 8) =
                 dVar44 + *(double *)(pFVar5 + (longlong)(int)uVar1 * 8);
          }
          else {
            local_2b0 = 0;
            pcVar6 = *(code **)(*(longlong *)this + 0x90);
            local_2d8[0] = local_118[0];
            if (local_118[0] != 0) {
              plVar17 = local_108;
              if (local_f0 != (longlong *)0x0) {
                plVar17 = local_f0;
              }
              (**(code **)*plVar17)(plVar17,local_2c8);
            }
            (*pcVar6)(this,local_418,local_400 & 0xffffffff,local_2d8);
            local_2b0 = 0;
            pcVar6 = *(code **)(*(longlong *)this + 0x90);
            local_2d8[0] = local_118[0];
            if (local_118[0] != 0) {
              plVar17 = local_108;
              if (local_f0 != (longlong *)0x0) {
                plVar17 = local_f0;
              }
              (**(code **)*plVar17)(plVar17,local_2c8);
            }
            (*pcVar6)(this,local_418,local_400._4_4_,local_2d8);
            local_2b0 = 0;
            pcVar6 = *(code **)(*(longlong *)this + 0x90);
            local_2d8[0] = local_118[0];
            if (local_118[0] != 0) {
              plVar17 = local_108;
              if (local_f0 != (longlong *)0x0) {
                plVar17 = local_f0;
              }
              (**(code **)*plVar17)(plVar17,local_2c8);
            }
            (*pcVar6)(this,local_418,uVar1,local_2d8);
          }
          uVar47 = (undefined4)__real_3feccccccccccccd;
          uVar48 = (undefined4)((ulonglong)__real_3feccccccccccccd >> 0x20);
        }
        uVar49 = (undefined4)__real_46293e5939a08cea;
        uVar50 = (undefined4)((ulonglong)__real_46293e5939a08cea >> 0x20);
        dVar37 = ___xmm_46293e5939a08cea46293e5939a08cea;
        dVar32 = _UNK_1528c6bb8;
      }
      local_440._8_4_ = uVar7 + 1;
      if ((int)local_440._8_4_ < (int)local_440._12_4_) {
        do {
          if ((*(short *)(*(longlong *)
                           (*(longlong *)(local_440._0_8_ + 8) +
                           (ulonglong)((uint)local_440._8_4_ >> 9) * 8) +
                         (ulonglong)(local_440._8_4_ & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)(local_440._0_8_ + 8) +
                          (ulonglong)((uint)local_440._8_4_ >> 9) * 8) +
                        (ulonglong)(local_440._8_4_ & 0x1ff) * 2) != -1)) break;
          local_440._8_4_ = local_440._8_4_ + 1;
        } while ((int)local_440._8_4_ < (int)local_440._12_4_);
      }
    } while (local_440._8_4_ != local_2a8._8_4_);
  }
  *local_358 = 0.0;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar1 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar37 = __real_3e45798ee2308c3a;
  lVar3 = *(longlong *)&this->field_0x8;
  iVar21 = *(int *)(lVar3 + 0x24);
  iVar16 = *(int *)(lVar3 + 0x20) * 0x200 + iVar21;
  uVar27 = 0;
  if (((iVar16 != 0) &&
      (uVar27 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x28) - 1U))) &&
     (uVar27 = 1, 1 < iVar16)) {
    do {
      uVar14 = (ulonglong)((uint)uVar27 & 0x1ff);
      lVar28 = (*(undefined8 **)(lVar3 + 0x28))[uVar27 >> 9];
      if ((*(short *)(lVar28 + uVar14 * 2) != 0) && (*(short *)(lVar28 + uVar14 * 2) != -1)) break;
      uVar24 = (uint)uVar27 + 1;
      uVar27 = (ulonglong)uVar24;
    } while ((int)uVar24 < iVar16);
  }
  iVar2 = *(int *)(lVar3 + 0x20);
  iVar25 = (int)uVar27;
joined_r0x00014c76f3f5:
  if (iVar25 == iVar2 * 0x200 + iVar21) {
    (**(code **)(*(longlong *)this + 0x80))(this,1);
    if (local_118[0] != 0) {
      plVar20 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar20 = local_f0;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    return;
  }
  do {
    uVar26 = (uint)uVar27;
    uVar24 = 0;
    if ((int)uVar26 < *(int *)&this->field_0x248) {
      uVar24 = ~uVar26 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined1 *)((longlong)(int)uVar26 + *(longlong *)&this->field_0x240) = 0;
    uVar24 = 0;
    if ((int)uVar26 < (this->TempWeightBuffer).ArrayNum) {
      uVar24 = ~uVar26 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pdVar19 = (double *)0x0;
    uVar13 = *(undefined8 *)
              ((this->TempWeightBuffer).AllocatorInstance.Data + (longlong)(int)uVar26 * 8);
    if (dVar37 < (double)CONCAT44((uint)((ulonglong)uVar13 >> 0x20) & uVar11,(uint)uVar13 & uVar1))
    {
      if (this->field_0xc8 != '\0') {
        if (*(int *)&this->field_0x68 != *(int *)&this->field_0x94) {
          puVar22 = &this->field_0x98;
          if (*(undefined1 **)&this->field_0xa0 != (undefined1 *)0x0) {
            puVar22 = *(undefined1 **)&this->field_0xa0;
          }
          uVar24 = *(uint *)(puVar22 + (*(int *)&this->field_0xa8 - 1 & uVar27) * 4);
          if (uVar24 != 0xffffffff) {
            do {
              puVar18 = (uint *)((longlong)(int)uVar24 * 0x20 + *(longlong *)&this->field_0x60);
              if (*puVar18 == uVar26) {
                pdVar15 = (double *)(puVar18 + 2);
                if (puVar18 == (uint *)0x0) {
                  pdVar15 = pdVar19;
                }
                if (pdVar15 != (double *)0x0) {
                  local_318 = *pdVar15;
                  dStack_310 = pdVar15[1];
                  pdVar19 = (double *)pdVar15[1];
                  goto LAB_14c76f534;
                }
                break;
              }
              uVar24 = puVar18[6];
            } while (uVar24 != 0xffffffff);
          }
        }
        local_318._0_2_ = CONCAT11(1,(undefined1)local_318);
LAB_14c76f534:
        if (((char)((ulonglong)local_318 >> 8) == '\0') || (pdVar19 != (double *)0x0))
        goto LAB_14c76f991;
      }
      if (*(void **)&this->field_0xe0 != (void *)0x0) {
        local_3d0[0] = uVar26;
        Core::Private::Function::CheckCallable(*(void **)&this->field_0xe0);
        pcVar6 = *(code **)&this->field_0xe0;
        plVar20 = (longlong *)&this->field_0xf0;
        if (*(longlong **)&this->field_0x108 != (longlong *)0x0) {
          plVar20 = *(longlong **)&this->field_0x108;
        }
        uVar13 = (**(code **)(*plVar20 + 8))();
        uVar14 = (*pcVar6)(uVar13,local_3d0);
        if ((uVar14 & 2) != 0) goto LAB_14c76f991;
      }
      uVar14 = (ulonglong)(uVar26 & 0x1ff);
      lVar28 = *(longlong *)
                (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) + (uVar27 >> 9) * 8);
      local_180 = *(double *)(lVar28 + 0x10 + uVar14 * 0x18);
      pdVar19 = (double *)(lVar28 + uVar14 * 0x18);
      dVar32 = *pdVar19;
      dVar38 = pdVar19[1];
      lVar28 = *(longlong *)(*(longlong *)&this->field_0x230 + (uVar27 >> 9) * 8);
      uVar24 = 0;
      if ((int)uVar26 < (this->TempWeightBuffer).ArrayNum) {
        uVar24 = ~uVar26 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      dVar44 = (double)CONCAT44(uVar53,uVar52) /
               *(double *)
                ((this->TempWeightBuffer).AllocatorInstance.Data + (longlong)(int)uVar26 * 8);
      dVar46 = dVar44 * *(double *)(lVar28 + uVar14 * 0x18);
      dVar45 = dVar44 * *(double *)(lVar28 + 8 + uVar14 * 0x18);
      dVar44 = dVar44 * *(double *)(lVar28 + 0x10 + uVar14 * 0x18);
      dVar30 = dVar32 - dVar46;
      if (((dVar37 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar11,
                                      SUB84(dVar30,0) & uVar1)) ||
          (dVar30 = dVar38 - dVar45,
          dVar37 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar11,
                                    SUB84(dVar30,0) & uVar1))) ||
         (dVar30 = local_180 - dVar44,
         dVar37 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar11,
                                   SUB84(dVar30,0) & uVar1))) {
        dVar46 = dVar46 - dVar32;
        dVar45 = dVar45 - dVar38;
        dVar44 = dVar44 - local_180;
        dVar30 = SQRT(dVar45 * dVar45 + dVar46 * dVar46 + dVar44 * dVar44);
        if (dVar30 <= 0.0) {
          dVar44 = 0.0;
          dVar45 = 0.0;
          dVar46 = 0.0;
          dVar30 = 0.0;
        }
        else {
          dVar31 = (double)CONCAT44(uVar53,uVar52) / dVar30;
          dVar46 = dVar46 * dVar31;
          dVar45 = dVar45 * dVar31;
          dVar44 = dVar44 * dVar31;
        }
        if (local_3c0 <= dVar30) {
          dVar30 = local_3c0;
        }
        dVar46 = dVar30 * dVar46 + dVar32;
        dVar45 = dVar30 * dVar45 + dVar38;
        dVar30 = dVar30 * dVar44 + local_180;
        dVar32 = SQRT((dVar45 - dVar38) * (dVar45 - dVar38) + (dVar46 - dVar32) * (dVar46 - dVar32)
                      + (dVar30 - local_180) * (dVar30 - local_180));
        if (dVar32 <= *local_358) {
          dVar32 = *local_358;
        }
        *local_358 = dVar32;
        uVar24 = 0;
        if ((int)uVar26 < *(int *)&this->field_0x248) {
          uVar24 = ~uVar26 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined1 *)((longlong)(int)uVar26 + *(longlong *)&this->field_0x240) = 1;
        uVar14 = (ulonglong)(uVar26 & 0x1ff);
        lVar28 = *(longlong *)(*(longlong *)&this->field_0x230 + (uVar27 >> 9) * 8);
        *(double *)(lVar28 + uVar14 * 0x18) = dVar46;
        *(double *)(lVar28 + 8 + uVar14 * 0x18) = dVar45;
        *(double *)(lVar28 + 0x10 + uVar14 * 0x18) = dVar30;
        pFVar29 = (FSmallListSet *)(*(longlong *)&this->field_0x8 + 0xb8);
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_278,pFVar29,uVar26,false);
        while (((local_278.ListSet != pFVar29 || (local_278.ListIndex != uVar26)) ||
               ((local_278.iCur != -1 || (local_278.cur_ptr != -1))))) {
          uVar24 = local_278.cur_value;
          uVar27 = *(ulonglong *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)&this->field_0x8 + 0x1c0) +
                      ((local_278._32_8_ & 0xffffffff) >> 9) * 8) +
                    (ulonglong)(uVar24 & 0x1ff) * 0x10);
          if ((uint)uVar27 == uVar26) {
            uVar27 = uVar27 >> 0x20;
          }
          uVar14 = (ulonglong)((uint)uVar27 & 0x1ff);
          lVar28 = *(longlong *)
                    (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                    (ulonglong)((uint)uVar27 >> 9) * 8);
          pdVar19 = (double *)(lVar28 + uVar14 * 0x18);
          local_180 = *(double *)(lVar28 + 0x10 + uVar14 * 0x18);
          dVar32 = *pdVar19 - dVar46;
          dVar38 = pdVar19[1] - dVar45;
          dVar32 = SQRT(dVar38 * dVar38 + dVar32 * dVar32 +
                        (local_180 - dVar30) * (local_180 - dVar30));
          if ((dVar32 < *(double *)&this->field_0x158) ||
             (*(double *)&this->field_0x160 <= dVar32 && dVar32 != *(double *)&this->field_0x160)) {
            local_3c8[0] = uVar24;
            if (*(int *)&this->field_0x27c == -1) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ModifiedEdges",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\QueueRemesher.h"
                                  ,0x85,L"");
              if (bVar10) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((*(int *)&this->field_0x27c == -1) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->field_0x270,
                       local_2f0,(bool *)local_3c8);
          }
          FSmallListSet::BaseValueIterator::GotoNext(&local_278);
        }
      }
    }
LAB_14c76f991:
    uVar27 = (ulonglong)(uVar26 + 1);
    if (iVar16 <= (int)(uVar26 + 1)) break;
    while( true ) {
      uVar14 = (ulonglong)((uint)uVar27 & 0x1ff);
      lVar28 = *(longlong *)(*(longlong *)(lVar3 + 0x28) + (uVar27 >> 9) * 8);
      if ((*(short *)(lVar28 + uVar14 * 2) != 0) && (*(short *)(lVar28 + uVar14 * 2) != -1)) break;
      uVar24 = (uint)uVar27 + 1;
      uVar27 = (ulonglong)uVar24;
      if (iVar16 <= (int)uVar24) goto LAB_14c76f9d8;
    }
  } while( true );
LAB_14c76f9d8:
  iVar25 = (int)uVar27;
  goto joined_r0x00014c76f3f5;
}

