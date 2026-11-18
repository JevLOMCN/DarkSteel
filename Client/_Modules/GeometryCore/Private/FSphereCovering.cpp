// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 9

// operator() @ 143379bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l37::<lambda_3>::operator()
          (void *this,TVector<double> *param_1)

{
  void *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [2];
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  undefined8 local_78 [2];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  plVar5 = *(longlong **)this;
  if (*plVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                       ,0x16c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar2 = (double)(*pcVar1)();
      return dVar2;
    }
  }
  this_00 = (void *)*plVar5;
  if ((*(int *)((longlong)this_00 + 0xbc) < 0) || (*(longlong *)((longlong)this_00 + 0x10) != 0)) {
    UE::Geometry::
    TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
    BuildTopDown(this_00,false);
    *(longlong *)((longlong)this_00 + 0x10) = 0;
  }
  lVar6 = *plVar5;
  if (plVar5[4] != *(longlong *)(lVar6 + 0x10)) {
    UE::Geometry::
    TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
    build_fast_winding_cache(plVar5);
    lVar6 = *plVar5;
    plVar5[4] = *(longlong *)(lVar6 + 0x10);
  }
  local_b8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_b8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_b8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar2 = UE::Geometry::
          TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>
          ::branch_fast_winding_num(plVar5,*(int *)(lVar6 + 0xbc),(TVector<double> *)&local_b8._s_0)
  ;
  if (__real_3fe0000000000000 < dVar2) {
    local_98._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_98._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_98._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    dVar2 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                      (*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)this + 8),
                       (*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)this + 8))->
                       Tree->RootIndex,(TVector<double> *)&local_98._s_0);
    if (dVar2 * *(double *)((longlong)this + 0x10) <= __real_3fe0000000000000) {
      local_c8[0] = __real_7fefffffffffffff;
      local_78[0] = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 0x18);
      local_68 = 0;
      local_40 = (longlong *)0x0;
      local_38 = 0;
      iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x20))
                        ((longlong *)**(undefined8 **)((longlong)this + 8),param_1,local_c8,local_78
                        );
      if (local_68 != 0) {
        plVar5 = local_58;
        if (local_40 != (longlong *)0x0) {
          plVar5 = local_40;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (iVar4 == -1) {
        if (*(longlong *)
             &(*(FNegativeSpaceSampleSettings **)((longlong)this + 0x18))->OptionalObstacleSDF != 0)
        {
          dVar2 = UE::Geometry::FNegativeSpaceSampleSettings::ObstacleDistance
                            (*(FNegativeSpaceSampleSettings **)((longlong)this + 0x18),param_1);
          if (dVar2 < *(double *)(*(longlong *)((longlong)this + 0x18) + 0x18)) goto LAB_143379d90;
        }
        uVar7 = (undefined4)__real_3ff0000000000000;
        uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        goto LAB_143379d98;
      }
    }
  }
LAB_143379d90:
  uVar7 = (undefined4)__real_bff0000000000000;
  uVar8 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
LAB_143379d98:
  return (double)CONCAT44(uVar8,uVar7);
}

// operator() @ 14337a350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

double __thiscall
`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l39::<lambda_4>::operator()
          (void *this,TVector<double> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStackY_118 [32];
  int local_e8 [4];
  TVector<double>_u_0 local_d8;
  double local_b8;
  double local_b0;
  TVector<double>_u_0 local_a8;
  undefined1 local_90 [24];
  TVector<double> local_78;
  ulonglong local_58;
  
  dVar3 = __real_7fefffffffffffff;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_b8 = __real_7fefffffffffffff;
  local_a8._s_0.X =
       *(double *)(*(longlong *)((longlong)this + 0x20) + 0x20) +
       *(double *)(*(longlong *)((longlong)this + 0x20) + 0x18);
  local_a8._s_0.Z = 0.0;
  local_78.field0_0x0._s_0.Y = 0.0;
  local_78.field0_0x0._16_1_ = 0;
  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x20))
                    ((longlong *)**(undefined8 **)((longlong)this + 0x10),param_1,&local_b8,
                     &local_a8);
  if (local_a8._s_0.Z != 0.0) {
    uVar7 = &(((TVector<double> *)local_90)->field0_0x0)._s_0.Y;
    if ((double *)local_78.field0_0x0._s_0.Y != (double *)0x0) {
      uVar7 = local_78.field0_0x0._s_0.Y;
    }
    (**(code **)((longlong)*(double *)uVar7 + 0x10))();
  }
  if (iVar4 == -1) {
LAB_14337a4c3:
    if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x29) == '\0') {
      local_d8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_d8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_d8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      dVar11 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                         (*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)this + 0x10)
                          ,(*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)
                             ((longlong)this + 0x10))->Tree->RootIndex,
                          (TVector<double> *)&local_d8._s_0);
      if (__real_3fe0000000000000 < dVar11 * *(double *)((longlong)this + 0x18)) goto LAB_14337a5ef;
    }
    local_b0 = dVar3;
    local_a8._s_0.X = dVar3;
    local_a8._s_0.Z = 0.0;
    local_78.field0_0x0._s_0.Y = 0.0;
    local_78.field0_0x0._16_1_ = 0;
    iVar4 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))
                      (*(longlong **)((longlong)this + 8),param_1,&local_b0,&local_a8);
    if (local_a8._s_0.Z != 0.0) {
      uVar7 = &(((TVector<double> *)local_90)->field0_0x0)._s_0.Y;
      if ((double *)local_78.field0_0x0._s_0.Y != (double *)0x0) {
        uVar7 = local_78.field0_0x0._s_0.Y;
      }
      (**(code **)((longlong)*(double *)uVar7 + 0x10))();
    }
    if (iVar4 != -1) {
      AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
                (*(void **)this,iVar4,(TVector<double> *)&local_a8._s_0,(TVector<double> *)local_90,
                 &local_78);
      UE::Geometry::VectorUtil::Normal<double>
                ((TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_a8._s_0,
                 (TVector<double> *)local_90,&local_78);
      if ((0.0 < ((param_1->field0_0x0)._s_0.Y - local_a8._s_0.Y) * local_d8._s_0.Y +
                 ((param_1->field0_0x0)._s_0.X - local_a8._s_0.X) * local_d8._s_0.X +
                 ((param_1->field0_0x0)._s_0.Z - local_a8._s_0.Z) * local_d8._s_0.Z) &&
         (*(double *)((longlong)this + 0x28) <= local_b0 &&
          local_b0 != *(double *)((longlong)this + 0x28))) goto LAB_14337a5ef;
    }
    if (*(longlong *)
         &(*(FNegativeSpaceSampleSettings **)((longlong)this + 0x20))->OptionalObstacleSDF != 0) {
      dVar3 = UE::Geometry::FNegativeSpaceSampleSettings::ObstacleDistance
                        (*(FNegativeSpaceSampleSettings **)((longlong)this + 0x20),param_1);
      if (dVar3 < *(double *)(*(longlong *)((longlong)this + 0x20) + 0x20)) goto LAB_14337a5ef;
    }
    uVar8 = SUB84(__real_3ff0000000000000,0);
    uVar9 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  else {
    lVar1 = *(longlong *)((longlong)this + 0x20);
    if ((*(void **)(lVar1 + 0x80) != (void *)0x0) &&
       (dVar11 = *(double *)(lVar1 + 0xb0), dVar11 < __real_3ff0000000000000)) {
      local_d8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_d8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_d8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      uVar7 = *(undefined8 *)(**(longlong **)((longlong)this + 0x10) + 8);
      local_e8[0] = iVar4;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x80));
      pcVar2 = *(code **)(lVar1 + 0x80);
      plVar6 = (longlong *)(lVar1 + 0x90);
      if (*(longlong **)(lVar1 + 0xa8) != (longlong *)0x0) {
        plVar6 = *(longlong **)(lVar1 + 0xa8);
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      dVar10 = (double)(*pcVar2)(uVar5,uVar7,local_e8,&local_d8);
      if (__real_3ff0000000000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000;
      }
      if (dVar10 <= dVar11) {
        dVar10 = dVar11;
      }
      dVar11 = dVar10 * *(double *)(*(longlong *)((longlong)this + 0x20) + 0x18) +
               *(double *)(*(longlong *)((longlong)this + 0x20) + 0x20);
      if (dVar11 * dVar11 <= local_b8) goto LAB_14337a4c3;
    }
LAB_14337a5ef:
    uVar8 = (undefined4)__real_bff0000000000000;
    uVar9 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  return (double)CONCAT44(uVar9,uVar8);
}

// operator() @ 14337b390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::<lambda_5>::operator()
          (void *this,TVector<double> *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  void *pvVar7;
  undefined8 uVar8;
  code *pcVar9;
  FDynamicMesh3 *this_00;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *this_01;
  ForAnyElementType *pFVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStackY_348 [32];
  double local_2f0;
  uint local_2e8 [2];
  ulonglong local_2e0;
  longlong local_2d8;
  double local_2d0;
  TVector<double>_u_0 local_2c8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 TStack_250;
  TVector<double>_u_0 local_238;
  undefined8 local_218 [2];
  longlong local_208;
  longlong local_1f8 [3];
  longlong *local_1e0;
  undefined1 local_1d8;
  undefined8 local_1c8 [2];
  longlong local_1b8;
  longlong local_1a8 [3];
  longlong *local_190;
  undefined1 local_188;
  TVector<double>_u_0 local_178;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_100;
  double local_f8;
  double local_f0;
  ulonglong local_e8;
  
  dVar14 = __real_3fe0000000000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  if ((param_3) || (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x40) == '\0')) {
    local_2c8._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_2c8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_2c8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    dVar28 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                       (*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)this + 0x10),
                        (*(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)this + 0x10))
                        ->Tree->RootIndex,(TVector<double> *)&local_2c8._s_0);
    if (dVar14 < dVar28 * *(double *)((longlong)this + 0x28)) {
      return;
    }
  }
  uVar15 = __real_7fefffffffffffff;
  local_208 = 0;
  local_1e0 = (longlong *)0x0;
  local_1d8 = 0;
  local_218[0] = __real_7fefffffffffffff;
  uVar17 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x20))
                     ((longlong *)**(undefined8 **)((longlong)this + 0x10),param_1,&local_2e0,
                      local_218);
  uVar21 = (ulonglong)uVar17;
  if (local_208 != 0) {
    plVar22 = local_1f8;
    if (local_1e0 != (longlong *)0x0) {
      plVar22 = local_1e0;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  dVar13 = __real_3ff0000000000000;
  lVar20 = *(longlong *)((longlong)this + 0x18);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = local_2e0;
  dVar28 = *(double *)(lVar20 + 0x18);
  pvVar7 = *(void **)(lVar20 + 0x80);
  auVar34 = sqrtpd(auVar34,auVar34);
  if ((pvVar7 != (void *)0x0) &&
     (dVar3 = *(double *)(lVar20 + 0xb0), dVar3 < __real_3ff0000000000000)) {
    local_2a8 = (param_1->field0_0x0)._s_0.X;
    dStack_2a0 = (param_1->field0_0x0)._s_0.Y;
    local_298 = (param_1->field0_0x0)._s_0.Z;
    uVar8 = **(undefined8 **)((longlong)this + 8);
    local_2e8[0] = uVar17;
    UE::Core::Private::Function::CheckCallable(pvVar7);
    pcVar9 = *(code **)(lVar20 + 0x80);
    plVar22 = (longlong *)(lVar20 + 0x90);
    if (*(longlong **)(lVar20 + 0xa8) != (longlong *)0x0) {
      plVar22 = *(longlong **)(lVar20 + 0xa8);
    }
    uVar19 = (**(code **)(*plVar22 + 8))();
    dVar28 = (double)(*pcVar9)(uVar19,uVar8,local_2e8,&local_2a8);
    lVar20 = *(longlong *)((longlong)this + 0x18);
    if (dVar13 <= dVar28) {
      dVar28 = dVar13;
    }
    if (dVar28 <= dVar3) {
      dVar28 = dVar3;
    }
    dVar28 = dVar28 * *(double *)(lVar20 + 0x18);
  }
  dVar30 = __real_3ff199999999999a;
  dVar3 = __real_3e45798ee0000000;
  local_2f0 = auVar34._0_8_ - dVar28;
  uVar24 = 0;
  if (param_3) {
    uVar26 = uVar24;
    if (local_2f0 < *(double *)(lVar20 + 0x20)) {
      do {
        if (2 < (int)uVar26) break;
        dVar4 = (param_1->field0_0x0)._s_0.Z;
        dVar5 = (param_1->field0_0x0)._s_0.X;
        dVar6 = (param_1->field0_0x0)._s_0.Y;
        this_00 = (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8);
        uVar17 = (uint)uVar21;
        if (((((int)uVar17 < 0) ||
             ((int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (this_00->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar17)) ||
            (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           ((this_00->TriangleRefCounts).RefCounts.Blocks.
                                            AllocatorInstance.Data + (uVar21 >> 9) * 8) +
                                         (ulonglong)(uVar17 & 0x1ff) * 2) - 1U))) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mesh.IsTriangle(TriIdx)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                                ,0x1e,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (this_00,uVar17,(TVector<double> *)&local_268._s_0,
                   (TVector<double> *)&TStack_250._s_0,(TVector<double> *)&local_238._s_0);
        local_160 = local_268._s_0.X;
        dStack_158 = local_268._s_0.Y;
        local_140 = TStack_250._s_0.Y;
        dStack_138 = TStack_250._s_0.Z;
        local_150 = local_268._s_0.Z;
        dStack_148 = TStack_250._s_0.X;
        local_120 = local_238._s_0.Z;
        local_130 = local_238._s_0.X;
        dStack_128 = local_238._s_0.Y;
        local_178._s_0.X = dVar5;
        local_178._s_0.Y = dVar6;
        local_178._s_0.Z = dVar4;
        UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
                  ((TDistPoint3Triangle3<double> *)&local_178._s_0);
        dVar4 = (param_1->field0_0x0)._s_0.X;
        dVar5 = (param_1->field0_0x0)._s_0.Y;
        dVar31 = dVar4 - local_100;
        dVar6 = (param_1->field0_0x0)._s_0.Z;
        dVar32 = dVar5 - local_f8;
        dVar33 = dVar6 - local_f0;
        dVar29 = dVar32 * dVar32 + dVar31 * dVar31 + dVar33 * dVar33;
        if (dVar29 <= dVar3) {
          return;
        }
        this_01 = *(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)this + 0x10);
        dVar12 = *(double *)(*(longlong *)((longlong)this + 0x18) + 0x20) - local_2f0;
        local_2d0 = dVar13 / SQRT(dVar29);
        (param_1->field0_0x0)._s_0.X = dVar31 * local_2d0 * dVar12 * dVar30 + dVar4;
        (param_1->field0_0x0)._s_0.Y = dVar32 * local_2d0 * dVar12 * dVar30 + dVar5;
        (param_1->field0_0x0)._s_0.Z = dVar33 * local_2d0 * dVar12 * dVar30 + dVar6;
        local_288._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_288._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_288._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        dVar4 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                          (this_01,this_01->Tree->RootIndex,(TVector<double> *)&local_288._s_0);
        if (dVar14 < dVar4 * *(double *)((longlong)this + 0x28)) {
          return;
        }
        local_1c8[0] = uVar15;
        local_1b8 = 0;
        local_190 = (longlong *)0x0;
        local_188 = 0;
        uVar21 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x20))
                           ((longlong *)**(undefined8 **)((longlong)this + 0x10),param_1,&local_2e0,
                            local_1c8);
        uVar21 = uVar21 & 0xffffffff;
        if (local_1b8 != 0) {
          plVar22 = local_1a8;
          if (local_190 != (longlong *)0x0) {
            plVar22 = local_190;
          }
          (**(code **)(*plVar22 + 0x10))();
        }
        auVar35._8_8_ = 0;
        auVar35._0_8_ = local_2e0;
        lVar20 = *(longlong *)((longlong)this + 0x18);
        auVar34 = sqrtpd(auVar35,auVar35);
        local_2f0 = auVar34._0_8_ - dVar28;
        uVar26 = (ulonglong)((int)uVar26 + 1);
      } while (local_2f0 < *(double *)(lVar20 + 0x20));
    }
    if (local_2f0 < *(double *)(lVar20 + 0x20)) {
      return;
    }
  }
  if (param_2) {
    lVar27 = *(longlong *)this;
    dVar14 = *(double *)(lVar20 + 8) * *(double *)(lVar20 + 8);
    uVar21 = uVar24;
    uVar26 = uVar24;
    if (0 < *(int *)(lVar27 + 8)) {
      do {
        uVar23 = (uint)uVar24;
        uVar25 = ~uVar23 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar23 < *(int *)(lVar27 + 0x18)) {
          uVar17 = uVar25;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_2d8 = *(longlong *)(lVar27 + 0x10);
        uVar17 = 0;
        if ((int)uVar23 < *(int *)(lVar27 + 0x18)) {
          uVar17 = uVar25;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar22 = *(longlong **)this;
        dVar28 = *(double *)(*(longlong *)(lVar27 + 0x10) + uVar21 * 8) *
                 *(double *)(local_2d8 + uVar21 * 8);
        uVar17 = 0;
        if ((int)uVar23 < (int)plVar22[1]) {
          uVar17 = uVar25;
        }
        if (dVar28 <= dVar14) {
          dVar28 = dVar14;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar20 = *plVar22;
        dVar30 = (param_1->field0_0x0)._s_0.Y - *(double *)(lVar20 + 8 + uVar26);
        dVar3 = (param_1->field0_0x0)._s_0.X - *(double *)(lVar20 + uVar26);
        dVar13 = (param_1->field0_0x0)._s_0.Z - *(double *)(lVar20 + 0x10 + uVar26);
        if (dVar30 * dVar30 + dVar3 * dVar3 + dVar13 * dVar13 < dVar28) {
          return;
        }
        lVar27 = *(longlong *)this;
        uVar24 = (ulonglong)(uVar23 + 1);
        uVar21 = uVar21 + 1;
        uVar26 = uVar26 + 0x18;
      } while ((int)(uVar23 + 1) < *(int *)(lVar27 + 8));
    }
  }
  **(undefined1 **)((longlong)this + 0x20) = 1;
  pFVar10 = *(ForAnyElementType **)this;
  if (((pFVar10->Data <= param_1) &&
      (param_1 < pFVar10->Data + (longlong)*(int *)((longlong)&pFVar10[1].Data + 4) * 0x18)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar18 = *(int *)&pFVar10[1].Data;
  piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,pFVar10,piVar1);
  }
  *(int *)&pFVar10[1].Data = iVar18 + 1;
  dVar14 = (param_1->field0_0x0)._s_0.Y;
  pFVar11 = pFVar10->Data;
  pFVar2 = pFVar11 + (longlong)iVar18 * 0x18;
  *(double *)pFVar2 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + 8) = dVar14;
  *(double *)(pFVar11 + (longlong)iVar18 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  lVar20 = *(longlong *)this;
  if (((*(double **)(lVar20 + 0x10) <= &local_2f0) &&
      (&local_2f0 < *(double **)(lVar20 + 0x10) + *(int *)(lVar20 + 0x1c))) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar18 = *(int *)(lVar20 + 0x18);
  if (iVar18 == *(int *)(lVar20 + 0x1c)) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)(lVar20 + 0x10),(int *)(lVar20 + 0x1c));
  }
  *(int *)(lVar20 + 0x18) = iVar18 + 1;
  *(double *)(*(longlong *)(lVar20 + 0x10) + (longlong)iVar18 * 8) = local_2f0;
  return;
}

// operator() @ 14337bba0

void __thiscall
`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l69::<lambda_6>::operator()
          (void *this,int param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)this + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8) + 8 +
           (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar12 = (uint)((ulonglong)uVar2 >> 0x20);
  if (uVar12 != 0xffffffff) {
    uVar13 = (uint)uVar2;
    plVar3 = *(longlong **)((longlong)this + 0x10);
    uVar11 = 0;
    if ((int)uVar13 < (int)plVar3[1]) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    plVar4 = *(longlong **)((longlong)this + 0x10);
    lVar5 = *plVar3;
    lVar9 = (longlong)(int)uVar13;
    uVar11 = 0;
    if ((int)uVar12 < (int)plVar4[1]) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar10 = (longlong)(int)uVar12;
    lVar6 = *plVar4;
    fVar14 = (float)(__real_3ff0000000000000 -
                    (*(double *)(lVar6 + 8 + lVar10 * 0x18) * *(double *)(lVar5 + 8 + lVar9 * 0x18)
                     + *(double *)(lVar5 + lVar9 * 0x18) * *(double *)(lVar6 + lVar10 * 0x18) +
                    *(double *)(lVar6 + 0x10 + lVar10 * 0x18) *
                    *(double *)(lVar5 + 0x10 + lVar9 * 0x18)));
    fVar1 = **(float **)((longlong)this + 8);
    if (fVar14 <= fVar1) {
      fVar14 = fVar1;
    }
    **(float **)((longlong)this + 8) = fVar14;
  }
  return;
}

// operator() @ 14337bd20

bool __thiscall
`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l72::<lambda_7>::operator()
          (void *this,int param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  
  plVar3 = *(longlong **)this;
  uVar12 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  lVar4 = *plVar3;
  plVar3 = *(longlong **)this;
  dVar2 = *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18);
  pdVar1 = (double *)(lVar4 + (longlong)param_1 * 0x18);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  uVar12 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar12 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  lVar4 = *plVar3;
  pdVar1 = (double *)(lVar4 + (longlong)param_2 * 0x18);
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  if (dVar6 < dVar8) {
LAB_14337be41:
    bVar10 = true;
  }
  else {
    if (dVar6 == dVar8) {
      if (dVar7 < dVar9) goto LAB_14337be41;
      if (dVar7 == dVar9) {
        return dVar2 < *(double *)(lVar4 + 0x10 + (longlong)param_2 * 0x18);
      }
    }
    bVar10 = false;
  }
  return bVar10;
}

// AddNegativeSpace @ 14337d800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSphereCovering::AddNegativeSpace
          (FSphereCovering *this,TFastWindingTree<UE::Geometry::FDynamicMesh3> *param_1,
          FNegativeSpaceSampleSettings *param_2,bool param_3)

{
  int *piVar1;
  ESampleMethod EVar2;
  short sVar3;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ForAnyElementType FVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulong64 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  longlong lVar25;
  TVector<double> *pTVar26;
  int iVar27;
  int iVar28;
  longlong *plVar29;
  longlong *plVar30;
  code **ppcVar31;
  ulonglong uVar32;
  int iVar33;
  int iVar34;
  ulonglong uVar35;
  uint uVar36;
  int *piVar37;
  longlong lVar38;
  ForAnyElementType FVar39;
  uint uVar40;
  uint uVar41;
  FScriptContainerElement *pFVar42;
  double *pdVar43;
  longlong lVar44;
  int iVar45;
  longlong lVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined4 uVar64;
  undefined1 auVar63 [16];
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar70;
  undefined1 auVar71 [16];
  double dVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined8 uVar76;
  double dVar77;
  double dVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined1 auStackY_dd8 [32];
  undefined1 local_d88 [8];
  ForAnyElementType local_d80;
  undefined8 local_d78;
  FIdentityFunctor local_d70 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_d68;
  ForAnyElementType local_d58;
  undefined8 uStack_d50;
  ForAnyElementType local_d48;
  undefined8 local_d40;
  undefined8 local_d38;
  double local_d30;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *local_d28;
  ForAnyElementType local_d18;
  undefined8 uStack_d10;
  FSphereCovering *local_d08;
  TArray<int,TSizedDefaultAllocator<32>_> local_d00;
  FScriptContainerElement *local_cf0;
  ulonglong local_ce8;
  undefined4 local_ce0 [2];
  FDynamicMesh3 *local_cd8;
  double local_cd0;
  double local_cc8;
  IndexIterator local_cc0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_ca8;
  double local_c98;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_c90;
  FPriorityOrderPoints local_c80;
  double local_c68;
  double dStack_c60;
  double local_c58;
  TVector<double>_u_0 local_c50;
  double dStack_c38;
  double local_c30;
  double dStack_c28;
  double local_c20;
  double dStack_c18;
  double local_c10;
  TVector<double>_u_0 local_c08;
  double local_bf0;
  double local_be8;
  double local_be0;
  ulonglong local_bd8;
  FDynamicMesh3 **local_bd0;
  FDynamicMesh3 **local_bc8;
  FNegativeSpaceSampleSettings *local_bc0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_bb8;
  FDynamicMesh3 *local_bb0;
  TConvexHull3<double> *local_ba8;
  ulonglong local_ba0;
  uint local_b98;
  undefined1 local_b88 [8];
  double dStack_b80;
  undefined1 local_b78 [16];
  undefined1 local_b68 [16];
  undefined1 local_b58 [16];
  double local_b48;
  undefined ***local_b38;
  void *local_b30;
  undefined8 local_b28;
  undefined4 local_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined4 local_b08;
  code *local_b00;
  FDynamicMesh3 ***local_af8;
  code *local_af0;
  FDynamicMesh3 ***local_ae8;
  FScriptContainerElement *local_ad8;
  int iStack_ad0;
  undefined4 uStack_acc;
  undefined1 local_ac8 [16];
  double local_ab8;
  IndexIterator local_aa8;
  code *local_a98;
  FDynamicMesh3 **local_a90;
  FScriptContainerElement *local_a88;
  int iStack_a80;
  undefined4 uStack_a7c;
  FScriptContainerElement *local_a78;
  uint uStack_a70;
  undefined4 uStack_a6c;
  double local_a68 [3];
  FDynamicMesh3 *local_a50;
  undefined4 *local_a48;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_a40;
  FSphereCovering *local_a38;
  FDynamicMesh3 **local_a30;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *local_a28;
  FNegativeSpaceSampleSettings *local_a20;
  undefined1 *local_a18;
  double local_a10;
  TVector<double>_u_0 local_a08;
  TVector<double>_u_0 local_9f0;
  double dStack_9d8;
  double local_9d0;
  double dStack_9c8;
  TConvexHull3<double> local_9b8;
  TVector<double>_u_0 local_908;
  double local_8e8;
  double dStack_8e0;
  double local_8d8;
  TVector<double>_u_0 local_8c8;
  TVector<double>_u_0 local_8a8;
  TArrayView<float_const_,int> local_888;
  TArrayView<UE::Math::TVector<double>_const_,int> local_878;
  TArrayView<UE::Math::TVector<double>_const_,int> local_868;
  double local_858;
  double dStack_850;
  double local_848;
  double local_840;
  double dStack_838;
  double local_830;
  double local_828;
  double dStack_820;
  double local_818;
  double local_810;
  double dStack_808;
  double local_800;
  FDynamicMesh3 local_7f8;
  TVector<double> local_5c8;
  undefined1 local_5a8 [16];
  double local_598 [4];
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  TVector<double>_u_0 local_558;
  TVector<double>_u_0 TStack_540;
  TVector<double>_u_0 local_528;
  code *local_508;
  undefined8 uStack_500;
  code *local_4f8 [3];
  code **ppcStack_4e0;
  code *local_4d8;
  undefined8 uStack_4d0;
  code *local_4c8 [3];
  code **ppcStack_4b0;
  undefined **local_4a8;
  FDynamicMesh3 **local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  code *local_488;
  undefined **local_478;
  code *local_470;
  undefined8 local_460;
  undefined8 local_458;
  TDynamicVector<int,512> local_450;
  TDynamicVector<UE::Math::TVector<double>,512> local_438;
  TDynamicVector<UE::Math::TVector<double>,512> local_420;
  TDynamicVector<int,512> local_408;
  undefined8 local_3f0;
  undefined8 local_3e8 [2];
  longlong local_3d8;
  longlong local_3c8 [3];
  longlong *local_3b0;
  undefined1 local_3a8;
  undefined1 local_398 [176];
  code *local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  code **ppcStack_2d0;
  double local_2c8;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 TStack_2a8;
  double local_290;
  bool local_288;
  ERootfindingModes local_280;
  int local_27c;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_dd8;
  pTVar4 = param_1->Tree;
  local_d88[0] = 0;
  local_d28 = param_1;
  local_d08 = this;
  local_bc0 = param_2;
  if ((((pTVar4->RootIndex < 0) ||
       (uVar22 = FDynamicMesh3::GetChangeStamp(pTVar4->Mesh), pTVar4->MeshChangeStamp != uVar22)) ||
      (param_1->FastWindingCacheMeshChangeStamp != param_1->Tree->MeshChangeStamp)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Spatial.IsBuilt()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                          ,0xfd,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    uVar16 = (*pcVar6)();
    return (bool)uVar16;
  }
  iVar33 = param_1->Tree->RootIndex;
  if (iVar33 < 0) {
    bVar15 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2828200105734045879>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                        ,0xb7,"RootIndex >= 0");
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      uVar16 = (*pcVar6)();
      return (bool)uVar16;
    }
    local_c50._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_c50._s_0.Y = _UNK_150a9e648;
    local_c30 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_c28 = _UNK_1508ffb58;
    local_c50._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_c38 = _UNK_150a9e6d8;
  }
  else {
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::GetBox
              (param_1->Tree,(TAxisAlignedBox3<double> *)&local_c50._s_0,iVar33);
  }
  dVar50 = (double)(int)((param_3 ^ 1) * 2 + -1);
  EVar2 = param_2->SampleMethod;
  local_d30 = dVar50;
  if (EVar2 == Uniform) {
    dVar54 = param_2->ReduceRadiusMargin + param_2->MinRadius;
    local_c50._s_0.Z = local_c50._s_0.Z - dVar54;
    local_c30 = local_c30 + dVar54;
    dStack_c28 = dStack_c28 + dVar54;
    uVar76 = local_c50._s_0.Y - dVar54;
    dStack_c38 = dStack_c38 + dVar54;
    uVar23 = local_c50._s_0.X - dVar54;
    dVar54 = dStack_c28 - local_c50._s_0.Z;
    dVar65 = local_c30 - (double)uVar76;
    dVar77 = dStack_c38 - (double)uVar23;
    dVar47 = dVar54;
    if (dVar54 <= 0.0) {
      dVar47 = 0.0;
    }
    dVar61 = dVar65;
    if (dVar65 <= 0.0) {
      dVar61 = 0.0;
    }
    dVar48 = dVar77;
    if (dVar77 <= 0.0) {
      dVar48 = 0.0;
    }
    if (dVar61 <= dVar47) {
      dVar61 = dVar47;
    }
    if (dVar61 <= dVar48) {
      dVar61 = dVar48;
    }
    dVar61 = dVar61 / (double)param_2->TargetNumSamples;
    if (dVar61 <= param_2->MinSpacing) {
      dVar61 = param_2->MinSpacing;
    }
    if (dVar61 == 0.0) {
      return false;
    }
    dVar61 = __real_3ff0000000000000 / dVar61;
    iVar33 = (int)(dVar77 * dVar61);
    if ((int)(dVar77 * dVar61) < 1) {
      iVar33 = 1;
    }
    iVar27 = (int)(dVar61 * dVar65);
    if ((int)(dVar61 * dVar65) < 1) {
      iVar27 = 1;
    }
    iVar18 = (int)(dVar61 * dVar54);
    if ((int)(dVar61 * dVar54) < 1) {
      iVar18 = 1;
    }
    local_c50._s_0.X = (double)uVar23;
    local_c50._s_0.Y = (double)uVar76;
    dVar47 = pow((double)param_2->TargetNumSamples / (double)(iVar18 * iVar27 * iVar33),
                 __real_3fd5555555555555);
    if (__real_3ff0000000000000 <= dVar47) {
      dVar47 = __real_3ff0000000000000;
    }
    dVar47 = dVar47 + dVar47;
    iVar33 = -((int)ROUND(__real_bfe0000000000000 - (double)iVar33 * dVar47) >> 1);
    if (iVar33 < 1) {
      iVar33 = 1;
    }
    iVar27 = -((int)ROUND(__real_bfe0000000000000 - (double)iVar27 * dVar47) >> 1);
    local_cf0 = (FScriptContainerElement *)CONCAT44(local_cf0._4_4_,iVar33);
    if (iVar27 < 1) {
      iVar27 = 1;
    }
    local_d08 = (FSphereCovering *)CONCAT44(local_d08._4_4_,iVar27);
    iVar18 = -((int)ROUND(__real_bfe0000000000000 - (double)iVar18 * dVar47) >> 1);
    if (iVar18 < 1) {
      iVar18 = 1;
    }
    local_cd0 = (double)CONCAT44(local_cd0._4_4_,iVar18);
    dVar77 = dVar77 / (double)iVar33;
    iVar19 = (this->Position).ArrayNum;
    iVar33 = iVar18 * iVar27 * iVar33;
    uVar40 = iVar19 + iVar33;
    local_c98 = dVar77;
    if (-1 < (int)uVar40) {
      piVar1 = &(this->Position).ArrayMax;
      if ((this->Position).ArrayMax < (int)uVar40) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar40,(ForAnyElementType *)this,iVar19,piVar1);
      }
      iVar19 = (this->Radius).ArrayNum;
      uVar40 = iVar19 + iVar33;
      if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
      }
      if ((this->Radius).ArrayMax < (int)uVar40) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar40,&(this->Radius).AllocatorInstance,iVar19,&(this->Radius).ArrayMax);
      }
      uVar11 = __real_7fefffffffffffff;
      dVar47 = __real_3fe0000000000000;
      iVar33 = 0;
      local_d38 = (FScriptContainerElement *)((ulonglong)local_d38._4_4_ << 0x20);
      if ((int)local_cf0 < 1) {
        return (bool)local_d88[0];
      }
      iVar19 = (int)local_d08;
      iVar34 = (int)local_cf0;
      iVar28 = iVar33;
      do {
        local_ce8 = local_ce8 & 0xffffffff00000000;
        dVar61 = ((double)iVar28 + dVar47) * dVar77 + (double)uVar23;
        if (0 < iVar19) {
          iVar19 = local_cd0._0_4_;
          iVar34 = (int)local_d08;
          iVar28 = iVar33;
          do {
            dVar77 = ((double)iVar28 + dVar47) * (dVar65 / (double)iVar27) + (double)uVar76;
            iVar45 = iVar33;
            if (0 < iVar19) {
              do {
                local_c58 = ((double)iVar45 + dVar47) * (dVar54 / (double)iVar18) + local_c50._s_0.Z
                ;
                local_c68 = dVar61;
                dStack_c60 = dVar77;
                local_908._s_0.X = dVar61;
                local_908._s_0.Y = dVar77;
                local_908._s_0.Z = local_c58;
                dVar48 = TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                                   (local_d28,local_d28->Tree->RootIndex,
                                    (TVector<double> *)&local_908._s_0);
                if (dVar48 * dVar50 <= dVar47) {
                  local_3e8[0] = uVar11;
                  local_3d8 = 0;
                  local_3b0 = (longlong *)0x0;
                  local_3a8 = 0;
                  (**(code **)(local_d28->Tree->_padding_ + 0x20))
                            (local_d28->Tree,&local_c68,&local_bd8,local_3e8);
                  if (local_3d8 != 0) {
                    plVar29 = local_3c8;
                    if (local_3b0 != (longlong *)0x0) {
                      plVar29 = local_3b0;
                    }
                    (**(code **)(*plVar29 + 0x10))();
                  }
                  if (*(void **)&param_2->OptionalObstacleSDF != (void *)0x0) {
                    auVar68 = *(undefined1 (*) [16])(param_2->ResultTransform).Rotation.ZW.m128d_f64
                    ;
                    dVar55 = auVar68._0_8_;
                    auVar58 = *(undefined1 (*) [16])(param_2->ResultTransform).Rotation.XY.m128d_f64
                    ;
                    dVar49 = local_c58 * (param_2->ResultTransform).Scale3D.ZW.m128d_f64[0];
                    dVar70 = (param_2->ResultTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
                    dVar78 = (param_2->ResultTransform).Rotation.ZW.m128d_f64[1];
                    dVar50 = (param_2->ResultTransform).Scale3D.XY.m128d_f64[0] * local_c68;
                    dVar48 = (param_2->ResultTransform).Scale3D.XY.m128d_f64[1] * dStack_c60;
                    uVar79 = (undefined4)((ulonglong)dVar48 >> 0x20);
                    local_ac8 = *(undefined1 (*) [16])
                                 (param_2->ResultTransform).Rotation.XY.m128d_f64;
                    auVar56 = blendpd(local_ac8,auVar68,2);
                    auVar73._8_4_ = SUB84(dVar48,0);
                    auVar73._0_8_ = dVar50;
                    auVar73._12_4_ = uVar79;
                    auVar74._0_8_ = auVar73._8_8_ * local_ac8._0_8_ - local_ac8._8_8_ * dVar50;
                    auVar74._8_8_ = dVar49 * local_ac8._8_8_ - dVar55 * dVar48;
                    auVar62._8_4_ = SUB84(dVar48,0);
                    auVar62._0_8_ = dVar50;
                    auVar62._12_4_ = uVar79;
                    auVar51._8_4_ = SUB84(dVar70,0);
                    auVar51._0_8_ = dVar49;
                    auVar51._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
                    auVar51 = blendpd(auVar62,auVar51,2);
                    auVar71._8_4_ = SUB84(auVar74._8_8_,0);
                    auVar71._0_8_ = auVar74._0_8_;
                    auVar71._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
                    auVar52._0_8_ = auVar51._0_8_ * dVar55 - auVar56._0_8_ * dVar49;
                    auVar52._8_8_ = auVar51._8_8_ * auVar68._8_8_ - auVar56._8_8_ * dVar70;
                    auVar51 = blendpd(auVar74,auVar52,2);
                    dVar70 = auVar71._8_8_ + auVar71._8_8_;
                    dVar72 = auVar52._0_8_ + auVar52._0_8_;
                    auVar75._0_8_ = auVar51._0_8_ + auVar51._0_8_;
                    auVar75._8_8_ = auVar51._8_8_ + auVar51._8_8_;
                    auVar66._8_4_ = SUB84(dVar72,0);
                    auVar66._0_8_ = dVar70;
                    uVar79 = (undefined4)((ulonglong)dVar72 >> 0x20);
                    auVar66._12_4_ = uVar79;
                    auVar57._8_4_ = SUB84(dVar72,0);
                    auVar57._0_8_ = dVar70;
                    auVar57._12_4_ = uVar79;
                    auVar51 = blendpd(auVar57,auVar75,2);
                    auVar67._0_8_ = auVar66._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar70;
                    auVar67._8_8_ = auVar75._0_8_ * auVar58._8_8_ - dVar55 * dVar72;
                    auVar56._8_4_ = SUB84(auVar67._8_8_,0);
                    auVar56._0_8_ = auVar67._0_8_;
                    auVar56._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
                    auVar62 = blendpd(auVar58,auVar68,2);
                    auVar58._0_8_ = auVar51._0_8_ * dVar55 - auVar62._0_8_ * auVar75._0_8_;
                    auVar58._8_8_ = auVar51._8_8_ * auVar68._8_8_ - auVar62._8_8_ * auVar75._8_8_;
                    auVar68 = blendpd(auVar67,auVar58,2);
                    local_8e8 = dVar70 * dVar78 + dVar50 + auVar56._8_8_ +
                                (param_2->ResultTransform).Translation.XY.m128d_f64[0];
                    dStack_8e0 = dVar72 * dVar78 + dVar48 + auVar58._0_8_ +
                                 (param_2->ResultTransform).Translation.XY.m128d_f64[1];
                    local_8d8 = auVar75._0_8_ * dVar78 + dVar49 + auVar68._0_8_ +
                                (param_2->ResultTransform).Translation.ZW.m128d_f64[0];
                    local_858 = local_8e8;
                    dStack_850 = dStack_8e0;
                    local_848 = local_8d8;
                    Core::Private::Function::CheckCallable(*(void **)&param_2->OptionalObstacleSDF);
                    plVar29 = *(longlong **)&(param_2->OptionalObstacleSDF).field_0x28;
                    pcVar6 = *(code **)&param_2->OptionalObstacleSDF;
                    plVar30 = (longlong *)&(param_2->OptionalObstacleSDF).field_0x10;
                    if (plVar29 != (longlong *)0x0) {
                      plVar30 = plVar29;
                    }
                    uVar23 = (**(code **)(*plVar30 + 8))();
                    (*pcVar6)(uVar23,&local_8e8);
                    dVar50 = local_d30;
                  }
                  piVar37 = &(this->Radius).ArrayMax;
                  auVar68._8_8_ = 0;
                  auVar68._0_8_ = local_bd8;
                  auVar68 = sqrtpd(auVar68,auVar68);
                  local_cc8 = auVar68._0_8_ - param_2->ReduceRadiusMargin;
                  if (param_2->MinRadius <= local_cc8) {
                    pFVar42 = (this->Position).AllocatorInstance.Data;
                    local_d88[0] = 1;
                    if (((pFVar42 <= (FScriptContainerElement *)&local_c68) &&
                        ((FScriptContainerElement *)&local_c68 < pFVar42 + (longlong)*piVar1 * 0x18)
                        ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar15)) {
                      pcVar6 = (code *)swi(3);
                      uVar16 = (*pcVar6)();
                      return (bool)uVar16;
                    }
                    iVar19 = (this->Position).ArrayNum;
                    if (iVar19 == *piVar1) {
                      iVar19 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x818,(ForAnyElementType *)this,piVar1);
                    }
                    (this->Position).ArrayNum = iVar19 + 1;
                    pFVar5 = (this->Position).AllocatorInstance.Data;
                    pFVar42 = pFVar5 + (longlong)iVar19 * 0x18;
                    *(double *)pFVar42 = local_c68;
                    *(double *)(pFVar42 + 8) = dStack_c60;
                    *(double *)(pFVar5 + (longlong)iVar19 * 0x18 + 0x10) = local_c58;
                    pFVar42 = (this->Radius).AllocatorInstance.Data;
                    if (((pFVar42 <= (FScriptContainerElement *)&local_cc8) &&
                        ((FScriptContainerElement *)&local_cc8 < pFVar42 + (longlong)*piVar37 * 8))
                       && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar15)) {
                      pcVar6 = (code *)swi(3);
                      uVar16 = (*pcVar6)();
                      return (bool)uVar16;
                    }
                    iVar19 = (this->Radius).ArrayNum;
                    if (iVar19 == *piVar37) {
                      iVar19 = Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&(this->Radius).AllocatorInstance,piVar37);
                    }
                    (this->Radius).ArrayNum = iVar19 + 1;
                    *(double *)((this->Radius).AllocatorInstance.Data + (longlong)iVar19 * 8) =
                         local_cc8;
                  }
                }
                iVar45 = iVar45 + 1;
              } while (iVar45 < local_cd0._0_4_);
              iVar19 = local_cd0._0_4_;
              iVar34 = (int)local_d08;
              iVar28 = (int)local_ce8;
              uVar76 = local_c50._s_0.Y;
            }
            iVar28 = iVar28 + 1;
            local_ce8 = CONCAT44(local_ce8._4_4_,iVar28);
          } while (iVar28 < iVar34);
          iVar19 = (int)local_d08;
          iVar34 = (int)local_cf0;
          uVar23 = local_c50._s_0.X;
          dVar77 = local_c98;
        }
        iVar28 = (uint)local_d38 + 1;
        local_d38 = (FScriptContainerElement *)CONCAT44(local_d38._4_4_,iVar28);
        if (iVar34 <= iVar28) {
          return (bool)local_d88[0];
        }
      } while( true );
    }
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
  }
  if ((EVar2 != VoxelSearch) && (EVar2 != NavigableVoxelSearch)) {
    return (bool)local_d88[0];
  }
  uVar40 = 0;
  lVar46 = 0;
  local_cd8 = param_1->Tree->Mesh;
  uVar79 = 0;
  uVar80 = 0;
  local_9b8.SimplificationSettings.SkipAtHullDistanceAbsolute =
       ___xmm_ffefffffffffffffffefffffffffffff;
  local_9b8.SimplificationSettings.SkipAtHullDistanceAsFraction = _UNK_1508ffb58;
  local_af8 = &local_bd0;
  local_9b8.Line.Origin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_9b8.Line.Origin.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b00 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::<lambda_2>,bool,int>
              ::Call;
  local_ae8 = &local_bc8;
  local_9b8.Line.Origin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_9b8.Line.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  local_9b8.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
  local_9b8.bSaveTriangleNeighbors = false;
  local_9b8.SimplificationSettings.MaxHullVertices = -1;
  local_9b8.Progress = (FProgressCancel *)0x0;
  local_9b8.Line.Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  local_9b8.Line.Direction.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  local_9b8.NumHullPoints = 0;
  local_9b8.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9b8.Hull.ArrayNum = 0;
  local_9b8.Hull.ArrayMax = 0;
  local_9b8.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9b8.HullNeighbors.ArrayNum = 0;
  local_9b8.HullNeighbors.ArrayMax = 0;
  local_ce8 = 0;
  local_af0 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::<lambda_1>,UE::Math::TVector<double>,int>
              ::Call;
  local_bd0 = &local_cd8;
  local_bc8 = &local_cd8;
  TConvexHull3<double>::Solve
            (&local_9b8,
             (local_cd8->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (local_cd8->VertexRefCounts).RefCounts.CurBlockUsed,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_af0,
             (TFunctionRef<bool___cdecl(int)> *)&local_b00);
  local_bb0 = local_cd8;
  local_ba8 = &local_9b8;
  local_4a8 = &TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::`34'::FHullMeshWrapper>
               ::_vftable_;
  local_478 = &
              ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_470 = `UE::Geometry::
              TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>
              ::MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_488 = Core::Private::Function::
              TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
              ::Call;
  local_458 = __real_3e45798ee2308c3a;
  local_498 = 0;
  local_490 = 3;
  local_460 = 0;
  local_450.CurBlock = 0;
  local_450.CurBlockUsed = 0;
  local_450.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_450.Blocks.ArrayNum = 0;
  local_450.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_450);
  local_438.CurBlock = 0;
  local_438.CurBlockUsed = 0;
  local_438.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.Blocks.ArrayNum = 0;
  local_438.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_438);
  local_420.CurBlock = 0;
  local_420.CurBlockUsed = 0;
  local_420.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_420.Blocks.ArrayNum = 0;
  local_420.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_420);
  local_408.CurBlock = 0;
  local_408.CurBlockUsed = 0;
  local_408.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.Blocks.ArrayNum = 0;
  local_408.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_408);
  local_4a0 = &local_bb0;
  local_3f0 = -1;
  local_498 = 0;
  TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
  BuildTopDown(&local_4a8,false);
  local_b38 = &local_4a8;
  local_b10 = __real_4000000000000000;
  local_498 = 0;
  local_b30 = (void *)0x0;
  local_b28 = 0;
  local_b20 = 0;
  local_b18 = 0;
  local_b08 = 2;
  TFastWindingTree<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
  Build(&local_b38,true);
  TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
  GetBoundingBox(&local_4a8,(TAxisAlignedBox3<double> *)&local_c08._s_0);
  dVar48 = param_2->AppliedScaleFactor * param_2->VoxelExpandBoundsFactor;
  dVar65 = local_bf0 + dVar48;
  dVar78 = local_be8 + dVar48;
  dVar54 = local_be0 + dVar48;
  dVar50 = local_c08._s_0.X - dVar48;
  dVar70 = local_c08._s_0.Y - dVar48;
  dVar48 = local_c08._s_0.Z - dVar48;
  local_c08._s_0.X = dVar50;
  local_c08._s_0.Y = dVar70;
  local_c08._s_0.Z = dVar48;
  local_bf0 = dVar65;
  local_be8 = dVar78;
  local_be0 = dVar54;
  FMarchingCubes::FMarchingCubes((FMarchingCubes *)local_398);
  dVar61 = __real_3fe0000000000000;
  dVar47 = dVar78 - dVar70;
  local_280 = Bisection;
  dVar77 = dVar54 - dVar48;
  dVar49 = param_2->MarchingCubesGridScale * param_2->ReduceRadiusMargin *
           param_2->MinCustomMarginScale;
  if (dVar47 <= 0.0) {
    dVar47 = 0.0;
  }
  local_27c = 5;
  dVar55 = dVar65 - dVar50;
  if (dVar77 <= 0.0) {
    dVar77 = 0.0;
  }
  uVar60 = SUB84(dVar47,0);
  uVar64 = (undefined4)((ulonglong)dVar47 >> 0x20);
  local_2c8 = 0.0;
  if (dVar55 <= 0.0) {
    dVar55 = 0.0;
  }
  local_288 = true;
  if (dVar77 <= dVar47) {
    uVar60 = SUB84(dVar77,0);
    uVar64 = (undefined4)((ulonglong)dVar77 >> 0x20);
  }
  if (dVar47 <= dVar77) {
    dVar47 = dVar77;
  }
  if (dVar55 <= (double)CONCAT44(uVar64,uVar60)) {
    uVar60 = SUB84(dVar55,0);
    uVar64 = (undefined4)((ulonglong)dVar55 >> 0x20);
  }
  if (dVar47 <= dVar55) {
    dVar47 = dVar55;
  }
  dVar77 = (double)CONCAT44(uVar64,uVar60) * __real_3fe0000000000000;
  if (dVar49 <= dVar77) {
    dVar77 = dVar49;
  }
  dVar47 = dVar47 / (double)param_2->MaxVoxelsPerDim;
  if (dVar77 <= dVar47) {
    dVar77 = dVar47;
  }
  local_290 = dVar77;
  local_2c0._s_0.X = dVar50;
  local_2c0._s_0.Y = dVar70;
  local_2c0._s_0.Z = dVar48;
  TStack_2a8._s_0.X = dVar65;
  TStack_2a8._s_0.Y = dVar78;
  TStack_2a8._s_0.Z = dVar54;
  if (param_2->SampleMethod == VoxelSearch) {
    local_508 = (code *)0x0;
    puVar24 = FMemory::Malloc(0x28,8);
    ppcStack_4e0 = ppcStack_2d0;
    uVar12 = local_2d8;
    uVar11 = uStack_2e0;
    pcVar6 = local_2e8;
    uVar76 = local_398._168_8_;
    uVar23 = local_398._160_8_;
    dVar50 = local_d30;
    *puVar24 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FSphereCovering::AddNegativeSpace'::`37'::<lambda_3>,0,1>
                ::_vftable_;
    puVar24[1] = &local_b38;
    puVar24[2] = param_1;
    puVar24[3] = local_d30;
    puVar24[4] = param_2;
    if (puVar24 + 1 != (longlong *)0x0) {
      local_508 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l37::<lambda_3>,double,UE::Math::TVector<double>_>
                  ::Call;
    }
    local_398._160_8_ = local_508;
    local_398._168_8_ = uStack_500;
    local_2d8 = local_4f8[2];
    ppcStack_2d0 = (code **)puVar24;
    local_2e8 = local_4f8[0];
    uStack_2e0 = local_4f8[1];
    local_508 = (code *)uVar23;
    uStack_500 = uVar76;
    local_4f8[0] = pcVar6;
    local_4f8[1] = (code *)uVar11;
    local_4f8[2] = (code *)uVar12;
    if (uVar23 != 0) {
      ppcVar31 = local_4f8;
      if (ppcStack_4e0 != (code **)0x0) {
        ppcVar31 = ppcStack_4e0;
      }
      (**(code **)(*ppcVar31 + 0x10))();
    }
  }
  else {
    if (local_3f0 < 0) {
      bVar15 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2828200105734045879>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                          ,0xb7,"RootIndex >= 0");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      local_9f0._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
      local_9f0._s_0.Y = _UNK_150a9e648;
      local_9f0._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
      dStack_9d8 = _UNK_150a9e6d8;
      local_9d0 = ___xmm_ffefffffffffffffffefffffffffffff;
      dStack_9c8 = _UNK_1508ffb58;
      dVar77 = local_290;
    }
    else {
      TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
      GetBox(&local_4a8,(TAxisAlignedBox3<double> *)&local_9f0._s_0,local_3f0._4_4_);
    }
    dVar50 = param_2->MinRadius;
    local_4d8 = (code *)0x0;
    dVar54 = dVar50 + param_2->ReduceRadiusMargin + __real_3f1a36e2eb1c432d;
    TStack_2a8._s_0.Z = dStack_9c8 + dVar54;
    local_2c0._s_0.Z = local_9f0._s_0.Z - dVar54;
    TStack_2a8._s_0.Y = local_9d0 + dVar54;
    TStack_2a8._s_0.X = dStack_9d8 + dVar54;
    local_2c0._s_0.Y = local_9f0._s_0.Y - dVar54;
    local_2c0._s_0.X = local_9f0._s_0.X - dVar54;
    local_290 = TStack_2a8._s_0.Z - local_2c0._s_0.Z;
    dVar54 = TStack_2a8._s_0.Y - local_2c0._s_0.Y;
    dVar65 = TStack_2a8._s_0.X - local_2c0._s_0.X;
    if (local_290 <= 0.0) {
      local_290 = 0.0;
    }
    if (dVar54 <= 0.0) {
      dVar54 = 0.0;
    }
    if (dVar65 <= 0.0) {
      dVar65 = 0.0;
    }
    if (local_290 <= dVar54) {
      local_290 = dVar54;
    }
    if (local_290 <= dVar65) {
      local_290 = dVar65;
    }
    local_290 = local_290 / (double)param_2->MaxVoxelsPerDim;
    if (local_290 <= dVar77) {
      local_290 = dVar77;
    }
    puVar24 = FMemory::Malloc(0x38,8);
    ppcStack_4b0 = ppcStack_2d0;
    uVar12 = local_2d8;
    uVar11 = uStack_2e0;
    pcVar6 = local_2e8;
    uVar76 = local_398._168_8_;
    uVar23 = local_398._160_8_;
    *puVar24 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FSphereCovering::AddNegativeSpace'::`39'::<lambda_4>,0,1>
                ::_vftable_;
    puVar24[1] = &local_bb0;
    puVar24[2] = &local_4a8;
    puVar24[3] = param_1;
    puVar24[4] = local_d30;
    puVar24[5] = param_2;
    puVar24[6] = dVar50 * dVar50;
    if (puVar24 + 1 != (longlong *)0x0) {
      local_4d8 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l39::<lambda_4>,double,UE::Math::TVector<double>_>
                  ::Call;
    }
    local_398._160_8_ = local_4d8;
    local_398._168_8_ = uStack_4d0;
    local_2d8 = local_4c8[2];
    ppcStack_2d0 = (code **)puVar24;
    local_2e8 = local_4c8[0];
    uStack_2e0 = local_4c8[1];
    local_4d8 = (code *)uVar23;
    uStack_4d0 = uVar76;
    local_4c8[0] = pcVar6;
    local_4c8[1] = (code *)uVar11;
    local_4c8[2] = (code *)uVar12;
    dVar50 = local_d30;
    if (uVar23 != 0) {
      ppcVar31 = local_4c8;
      if (ppcStack_4b0 != (code **)0x0) {
        ppcVar31 = ppcStack_4b0;
      }
      (**(code **)(*ppcVar31 + 0x10))();
      dVar50 = local_d30;
    }
  }
  if (param_2->bOnlyConnectedToHull == false) {
    FMarchingCubes::Generate((FMarchingCubes *)local_398);
  }
  else {
    local_cd0 = param_2->ReduceRadiusMargin * param_2->MinCustomMarginScale;
    iVar33 = local_9b8.Hull.ArrayNum;
    uVar35 = (ulonglong)local_9b8.Hull.ArrayNum;
    local_d48.Data = (FScriptContainerElement *)0x0;
    local_d40 = 0;
    if (local_cd0 <= local_290) {
      local_cd0 = local_290;
    }
    local_d80.Data = (FScriptContainerElement *)0x0;
    pFVar42 = local_9b8.Hull.AllocatorInstance.Data + uVar35 * 0xc;
    local_d78 = 0;
    local_c98 = local_cd0 * __real_4010000000000000 * local_cd0;
    local_cd0 = local_cd0 * __real_4030000000000000 * local_cd0;
    FVar39.Data = local_9b8.Hull.AllocatorInstance.Data;
    local_cf0 = pFVar42;
    while( true ) {
      local_d38 = FVar39.Data;
      if ((int)uVar35 != iVar33) {
        local_d70[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_d70);
      }
      this = local_d08;
      uVar35 = local_d78;
      if (FVar39.Data == pFVar42) break;
      local_b98 = *(uint *)(FVar39.Data + 8);
      local_ba0 = *(ulonglong *)FVar39.Data;
      pFVar5 = (local_cd8->Vertices).Blocks.AllocatorInstance.Data;
      pdVar43 = (double *)
                (*(longlong *)(pFVar5 + (ulonglong)(local_b98 >> 9) * 8) +
                (ulonglong)(local_b98 & 0x1ff) * 0x18);
      local_840 = *pdVar43;
      dStack_838 = pdVar43[1];
      local_830 = *(double *)
                   (*(longlong *)(pFVar5 + (ulonglong)(local_b98 >> 9) * 8) + 0x10 +
                   (ulonglong)(local_b98 & 0x1ff) * 0x18);
      uVar76 = 0;
      uVar32 = (ulonglong)((uint)(local_ba0 >> 0x20) & 0x1ff);
      pdVar43 = (double *)(*(longlong *)(pFVar5 + (local_ba0 >> 0x29) * 8) + uVar32 * 0x18);
      local_828 = *pdVar43;
      dVar50 = pdVar43[1];
      local_818 = *(double *)
                   (*(longlong *)(pFVar5 + (local_ba0 >> 0x29) * 8) + 0x10 + uVar32 * 0x18);
      uVar23 = 0;
      uVar32 = (ulonglong)((uint)local_ba0 & 0x1ff);
      pdVar43 = (double *)
                (*(longlong *)(pFVar5 + ((local_ba0 & 0xffffffff) >> 9) * 8) + uVar32 * 0x18);
      local_810 = *pdVar43;
      dStack_808 = pdVar43[1];
      local_800 = *(double *)
                   (*(longlong *)(pFVar5 + ((local_ba0 & 0xffffffff) >> 9) * 8) + 0x10 +
                   uVar32 * 0x18);
      local_d78 = local_d78 & 0xffffffff00000000;
      uVar20 = uVar40;
      dStack_820 = dVar50;
      local_558._s_0.X = local_810;
      local_558._s_0.Y = dStack_808;
      local_558._s_0.Z = local_800;
      TStack_540._s_0.X = local_828;
      TStack_540._s_0.Y = dVar50;
      TStack_540._s_0.Z = local_818;
      local_528._s_0.X = local_840;
      local_528._s_0.Y = dStack_838;
      local_528._s_0.Z = local_830;
      if ((longlong)uVar35 < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,&local_d80,0,(int *)((longlong)&local_d78 + 4));
        uVar20 = (uint)local_d78;
      }
      if ((local_d80.Data <= &local_558) &&
         (&local_558 <
          (TVector<double>_u_0 *)(local_d80.Data + (longlong)(int)local_d78._4_4_ * 0x48))) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        uVar20 = (uint)local_d78;
      }
      if (uVar20 == local_d78._4_4_) {
        uVar20 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,&local_d80,(int *)((longlong)&local_d78 + 4));
      }
      local_d78 = CONCAT44(local_d78._4_4_,uVar20 + 1);
      lVar25 = (longlong)(int)uVar20;
      *(double *)(local_d80.Data + lVar25 * 0x48) = local_558._s_0.X;
      *(double *)(local_d80.Data + lVar25 * 0x48 + 8) = local_558._s_0.Y;
      *(double *)(local_d80.Data + lVar25 * 0x48 + 0x10) = local_558._s_0.Z;
      *(double *)(local_d80.Data + lVar25 * 0x48 + 0x10 + 8) = TStack_540._s_0.X;
      *(double *)(local_d80.Data + lVar25 * 0x48 + 0x20) = TStack_540._s_0.Y;
      *(double *)(local_d80.Data + lVar25 * 0x48 + 0x20 + 8) = TStack_540._s_0.Z;
      *(double *)(local_d80.Data + lVar25 * 0x48 + 0x30) = local_528._s_0.X;
      *(double *)(local_d80.Data + lVar25 * 0x48 + 0x30 + 8) = local_528._s_0.Y;
      *(double *)(local_d80.Data + lVar25 * 0x48 + 0x40) = local_528._s_0.Z;
      local_ac8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_ac8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_ab8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (param_2->SampleMethod == NavigableVoxelSearch) {
        VectorUtil::Normal<double>
                  ((TVector<double> *)&local_a08._s_0,(TVector<double> *)&local_558._s_0,
                   (TVector<double> *)&TStack_540._s_0,(TVector<double> *)&local_528._s_0);
        dVar54 = param_2->MinRadius;
        uVar11 = local_a08._s_0.X * dVar54;
        uVar12 = local_a08._s_0.Y * dVar54;
        uVar13 = local_a08._s_0.Z * dVar54;
      }
      while ((uint)local_d78 != 0) {
        iVar27 = (uint)local_d78;
        if ((int)(uint)local_d78 < 1) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          iVar27 = (uint)local_d78;
        }
        iVar18 = iVar27 + -1;
        auVar68 = *(undefined1 (*) [16])(local_d80.Data + (longlong)iVar18 * 0x48);
        pFVar42 = local_d80.Data + (longlong)iVar18 * 0x48;
        auVar58 = *(undefined1 (*) [16])(pFVar42 + 0x10);
        local_b48 = *(double *)(pFVar42 + 0x40);
        auVar51 = *(undefined1 (*) [16])(pFVar42 + 0x20);
        auVar62 = *(undefined1 (*) [16])(pFVar42 + 0x30);
        iVar18 = (iVar27 - iVar18) + -1;
        _local_b88 = auVar68;
        local_b78 = auVar58;
        local_b68 = auVar51;
        local_b58 = auVar62;
        if (iVar18 != 0) {
          memmove(pFVar42,pFVar42 + 0x48,(longlong)iVar18 * 0x48);
          iVar27 = (uint)local_d78;
        }
        local_d78 = CONCAT44(local_d78._4_4_,iVar27 + -1);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,&local_d80,iVar27 + -1,(int *)((longlong)&local_d78 + 4));
        pdVar43 = local_a68;
        auVar7._4_8_ = dVar50;
        auVar7._0_4_ = auVar51._4_4_;
        auVar63._0_8_ = auVar7._0_8_ << 0x20;
        auVar63._8_4_ = auVar51._8_4_;
        auVar63._12_4_ = auVar51._12_4_;
        auVar8._4_8_ = uVar76;
        auVar8._0_4_ = auVar58._4_4_;
        auVar69._0_8_ = auVar8._0_8_ << 0x20;
        auVar69._8_4_ = auVar58._8_4_;
        auVar69._12_4_ = auVar58._12_4_;
        dVar50 = auVar51._8_8_;
        auVar9._4_8_ = extraout_XMM0_Qb;
        auVar9._0_4_ = auVar68._4_4_;
        auVar53._0_8_ = auVar9._0_8_ << 0x20;
        auVar53._8_4_ = auVar68._8_4_;
        auVar53._12_4_ = auVar68._12_4_;
        dVar49 = local_b48 - auVar63._8_8_;
        uVar76 = auVar58._8_8_;
        dVar77 = auVar63._8_8_ - auVar58._0_8_;
        dVar55 = auVar58._0_8_ - local_b48;
        auVar10._4_8_ = uVar23;
        auVar10._0_4_ = auVar62._4_4_;
        auVar59._0_8_ = auVar10._0_8_ << 0x20;
        auVar59._8_4_ = auVar62._8_4_;
        auVar59._12_4_ = auVar62._12_4_;
        dVar78 = auVar62._0_8_ - auVar69._8_8_;
        dVar48 = auVar69._8_8_ - auVar68._0_8_;
        lVar44 = 3;
        dVar70 = auVar59._8_8_ - auVar51._0_8_;
        dVar54 = auVar51._0_8_ - auVar53._8_8_;
        dVar47 = auVar53._8_8_ - auVar59._8_8_;
        dVar65 = auVar68._0_8_ - auVar62._0_8_;
        local_a68[2] = dVar70 * dVar70 + dVar78 * dVar78 + dVar49 * dVar49;
        local_a68[1] = dVar54 * dVar54 + dVar48 * dVar48 + dVar77 * dVar77;
        local_a68[0] = dVar47 * dVar47 + dVar65 * dVar65 + dVar55 * dVar55;
        lVar25 = 0x30;
        lVar38 = lVar46;
        uVar20 = uVar40;
        do {
          dVar54 = *(double *)(local_b88 + lVar25 + 8);
          dVar65 = *(double *)(local_b78 + lVar25);
          dVar47 = *(double *)(local_b88 + lVar38 + 8);
          dVar77 = *(double *)(local_b78 + lVar38);
          uVar23 = 0;
          *(double *)(local_5a8 + lVar38) =
               (*(double *)(local_b88 + lVar25) + *(double *)(local_b88 + lVar38)) * dVar61;
          *(double *)(local_5a8 + lVar38 + 8) = (dVar54 + dVar47) * dVar61;
          *(double *)(local_5a8 + lVar38 + 0x10) = (dVar65 + dVar77) * dVar61;
          dVar54 = *pdVar43;
          if (local_c98 < dVar54) {
            local_c20 = (double)uVar11 + *(double *)(local_5a8 + lVar38);
            dStack_c18 = (double)uVar12 + *(double *)(local_5a8 + lVar38 + 8);
            local_c10 = (double)uVar13 + *(double *)(local_5a8 + lVar38 + 0x10);
            if (((local_d48.Data <= (FScriptContainerElement *)&local_c20) &&
                ((FScriptContainerElement *)&local_c20 <
                 local_d48.Data + (longlong)local_d40._4_4_ * 0x18)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
            iVar27 = (int)local_d40;
            if ((int)local_d40 == local_d40._4_4_) {
              iVar27 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_d48,(int *)((longlong)&local_d40 + 4));
            }
            local_d40 = CONCAT44(local_d40._4_4_,iVar27 + 1);
            *(double *)(local_d48.Data + (longlong)iVar27 * 0x18) = local_c20;
            *(double *)(local_d48.Data + (longlong)iVar27 * 0x18 + 8) = dStack_c18;
            *(double *)(local_d48.Data + (longlong)iVar27 * 0x18 + 0x10) = local_c10;
          }
          pdVar43 = pdVar43 + 1;
          uVar20 = uVar20 + (local_cd0 < dVar54);
          lVar44 = lVar44 + -1;
          lVar25 = lVar38;
          lVar38 = lVar38 + 0x18;
        } while (lVar44 != 0);
        if (0 < (int)uVar20) {
          if (((local_d80.Data <= (TVector<double>_u_0 *)local_5a8) &&
              ((FScriptContainerElement *)local_5a8 <
               local_d80.Data + (longlong)(int)local_d78._4_4_ * 0x48)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          iVar27 = (uint)local_d78;
          if ((uint)local_d78 == local_d78._4_4_) {
            iVar27 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x848,&local_d80,(int *)((longlong)&local_d78 + 4));
          }
          iVar18 = iVar27 + 1;
          lVar25 = (longlong)iVar27;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48) = local_5a8._0_8_;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 8) = local_5a8._8_8_;
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x10) = local_598[0];
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x10 + 8) = local_598[1];
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x20) = local_598[2];
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x20 + 8) = local_598[3];
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x30) = local_578;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x30 + 8) = uStack_570;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x40) = local_568;
          if (iVar18 == local_d78._4_4_) {
            local_d78._0_4_ = iVar18;
            iVar18 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x848,&local_d80,(int *)((longlong)&local_d78 + 4));
          }
          local_d78._0_4_ = iVar18 + 1;
          lVar25 = (longlong)iVar18;
          *(undefined1 (*) [8])(local_d80.Data + lVar25 * 0x48) = local_b88;
          *(double *)(local_d80.Data + lVar25 * 0x48 + 8) = dStack_b80;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x10) = local_b78._0_8_;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x18) = local_5a8._0_8_;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x18 + 8) = local_5a8._8_8_;
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x28) = local_598[0];
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x30) = local_598[1];
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x30 + 8) = local_598[2];
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x40) = local_598[3];
          if ((uint)local_d78 == local_d78._4_4_) {
            local_d78._0_4_ =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,&local_d80,(int *)((longlong)&local_d78 + 4));
          }
          iVar27 = (uint)local_d78 + 1;
          lVar25 = (longlong)(int)(uint)local_d78;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48) = local_b78._8_8_;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 8) = local_b68._0_8_;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x10) = local_b68._8_8_;
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x18) = local_598[1];
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x18 + 8) = local_598[2];
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x28) = local_598[3];
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x30) = local_578;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x30 + 8) = uStack_570;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x40) = local_568;
          if (iVar27 == local_d78._4_4_) {
            local_d78._0_4_ = iVar27;
            iVar27 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x848,&local_d80,(int *)((longlong)&local_d78 + 4));
          }
          local_d78 = CONCAT44(local_d78._4_4_,iVar27 + 1);
          lVar25 = (longlong)iVar27;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48) = local_b58._0_8_;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 8) = local_b58._8_8_;
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x10) = local_b48;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x18) = local_578;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x18 + 8) = uStack_570;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x28) = local_568;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x30) = local_5a8._0_8_;
          *(undefined8 *)(local_d80.Data + lVar25 * 0x48 + 0x30 + 8) = local_5a8._8_8_;
          *(double *)(local_d80.Data + lVar25 * 0x48 + 0x40) = local_598[0];
        }
        FVar39.Data = local_d38;
        pFVar42 = local_cf0;
      }
      uVar35 = local_9b8.Hull._8_8_ & 0xffffffff;
      FVar39.Data = FVar39.Data + 0xc;
    }
    iVar33 = (int)local_d40;
    local_ad8 = local_d48.Data;
    if (((int)local_d40 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      uVar16 = (*pcVar6)();
      return (bool)uVar16;
    }
    iStack_ad0 = iVar33;
    local_868._12_4_ = uStack_acc;
    local_868.ArrayNum = iVar33;
    local_868.DataPtr = (TVector<double> *)local_ad8;
    FMarchingCubes::GenerateContinuation((FMarchingCubes *)local_398,&local_868);
    if ((TVector<double>_u_0 *)local_d80.Data != (TVector<double>_u_0 *)0x0) {
      FMemory::Free(local_d80.Data);
    }
    if (local_d48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d48.Data);
    }
    uVar79 = (undefined4)local_ce8;
    uVar80 = (undefined4)(local_ce8 >> 0x20);
    param_1 = local_d28;
    dVar50 = local_d30;
  }
  FDynamicMesh3::FDynamicMesh3(&local_7f8,(FMeshShapeGenerator *)local_398);
  FDynamicMesh3::DiscardAttributes(&local_7f8);
  FDynamicMesh3::CompactInPlace(&local_7f8,(FCompactMaps *)0x0);
  uVar20 = local_7f8.VertexRefCounts.RefCounts.CurBlock * 0x200 +
           local_7f8.VertexRefCounts.RefCounts.CurBlockUsed;
  local_a18 = local_d88;
  local_d18.Data = (FScriptContainerElement *)0x0;
  uStack_d10 = 0;
  local_a38 = this;
  local_a30 = &local_cd8;
  local_a28 = param_1;
  local_a20 = param_2;
  local_a10 = dVar50;
  if ((int)uVar20 < 1) {
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
  }
  else {
    iVar33 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar20,&local_d18,(int *)&uStack_d10,(int *)((longlong)&uStack_d10 + 4))
    ;
    memset(local_d18.Data + (longlong)iVar33 * 4,0,(longlong)(int)uVar20 << 2);
  }
  local_c90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c90.ArrayNum = 0;
  local_c90.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_c90,
             local_7f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
             local_7f8.TriangleRefCounts.RefCounts.CurBlockUsed,Default);
  FRefCountVector::IndexIterator::IndexIterator
            (&local_cc0,&local_7f8.TriangleRefCounts,0,
             local_7f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
             local_7f8.TriangleRefCounts.RefCounts.CurBlockUsed);
  iVar33 = local_7f8.TriangleRefCounts.RefCounts.CurBlock * 0x200 +
           local_7f8.TriangleRefCounts.RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator
            (&local_aa8,&local_7f8.TriangleRefCounts,iVar33,iVar33);
  uVar20 = local_cc0._8_4_;
joined_r0x00014337f31b:
  local_cc0._8_4_ = uVar20;
  if (uVar20 != local_aa8._8_4_) {
    lVar25 = (longlong)(int)uVar20;
    pTVar26 = FDynamicMesh3::GetTriNormal(&local_7f8,&local_5c8,uVar20);
    dVar54 = (pTVar26->field0_0x0)._s_0.X;
    dVar65 = (pTVar26->field0_0x0)._s_0.Y;
    dVar50 = (pTVar26->field0_0x0)._s_0.Z;
    uVar36 = 0;
    if ((int)uVar20 < local_c90.ArrayNum) {
      uVar36 = ~uVar20 >> 0x1f;
    }
    if ((uVar36 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      uVar16 = (*pcVar6)();
      return (bool)uVar16;
    }
    uVar20 = uVar20 + 1;
    *(double *)(local_c90.AllocatorInstance.Data + lVar25 * 0x18) = dVar54;
    *(double *)(local_c90.AllocatorInstance.Data + lVar25 * 0x18 + 8) = dVar65;
    *(double *)(local_c90.AllocatorInstance.Data + lVar25 * 0x18 + 0x10) = dVar50;
    if ((int)uVar20 < (int)local_cc0._12_4_) {
      do {
        if ((*(short *)(*(longlong *)
                         (*(longlong *)(local_cc0._0_8_ + 8) + (ulonglong)(uVar20 >> 9) * 8) +
                       (ulonglong)(uVar20 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)
                        (*(longlong *)(local_cc0._0_8_ + 8) + (ulonglong)(uVar20 >> 9) * 8) +
                      (ulonglong)(uVar20 & 0x1ff) * 2) != -1)) break;
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)local_cc0._12_4_);
    }
    goto joined_r0x00014337f31b;
  }
  local_d68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d68.ArrayNum = 0;
  local_d68.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_d68,
             local_7f8.VertexRefCounts.RefCounts.CurBlock * 0x200 +
             local_7f8.VertexRefCounts.RefCounts.CurBlockUsed,Default);
  uVar36 = local_7f8.VertexRefCounts.RefCounts.CurBlock * 0x200 +
           local_7f8.VertexRefCounts.RefCounts.CurBlockUsed;
  uVar20 = uVar40;
  if ((uVar36 != 0) &&
     (uVar20 = 0,
     0xfffd < (ushort)(**(short **)local_7f8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data
                      - 1U))) {
    uVar20 = 1;
    bVar15 = uVar36 == 1;
    if ((int)uVar36 < 2) goto LAB_14337f49e;
    do {
      sVar3 = *(short *)(*(longlong *)
                          (local_7f8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 2);
      if ((sVar3 != 0) && (sVar3 != -1)) break;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (int)uVar36);
  }
  bVar15 = uVar20 == uVar36;
LAB_14337f49e:
  if (bVar15) {
LAB_14337f62c:
    if (param_2->bDeterministic != false) {
      if ((local_7f8.VertexRefCounts.FreeIndices.CurBlock * 0x200 +
           local_7f8.VertexRefCounts.FreeIndices.CurBlockUsed != 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("NegativeSpaceMesh.IsCompactV()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                              ,0x288,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      local_d00.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d00.ArrayNum = 0;
      local_d00.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_d00,local_d68.ArrayNum,Default);
      lVar25 = lVar46;
      uVar20 = uVar40;
      if (0 < local_d00.ArrayNum) {
        do {
          uVar36 = 0;
          if ((int)uVar20 < local_d00.ArrayNum) {
            uVar36 = ~uVar20 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          *(uint *)(local_d00.AllocatorInstance.Data + lVar25) = uVar20;
          uVar20 = uVar20 + 1;
          lVar25 = lVar25 + 4;
        } while ((int)uVar20 < local_d00.ArrayNum);
      }
      local_bb8 = &local_d68;
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UE::Geometry::FSphereCovering::AddNegativeSpace_::__l72::<lambda_7>_>_>
                ((int *)local_d00.AllocatorInstance.Data,local_d00.ArrayNum,local_d70[0],
                 (<lambda_7> *)&local_bb8);
      local_ca8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_ca8.ArrayNum = 0;
      local_ca8.ArrayMax = 0;
      local_d58.Data = (FScriptContainerElement *)0x0;
      uStack_d50 = 0;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_ca8,local_d68.ArrayNum,Default);
      iVar33 = local_d68.ArrayNum;
      lVar25 = (longlong)local_d68.ArrayNum;
      if ((int)uStack_d50 < local_d68.ArrayNum) {
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_d68.ArrayNum - (int)uStack_d50,&local_d58,(int *)&uStack_d50,
                   (int *)((longlong)&uStack_d50 + 4));
      }
      else {
        if (local_d68.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum(local_d68._8_8_ & 0xffffffff);
        }
        if (local_d68.ArrayNum < (int)uStack_d50) {
          uVar20 = (int)uStack_d50 - local_d68.ArrayNum;
          if ((int)(local_d68.ArrayNum | uVar20) < 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              uVar16 = (*pcVar6)();
              return (bool)uVar16;
            }
          }
          if (uVar20 != 0) {
            iVar27 = ((int)uStack_d50 - iVar33) - uVar20;
            iVar33 = (int)uStack_d50;
            if (iVar27 != 0) {
              memmove(local_d58.Data + lVar25 * 4,
                      local_d58.Data + lVar25 * 4 + (longlong)(int)uVar20 * 4,(longlong)iVar27 << 2)
              ;
              iVar33 = (int)uStack_d50;
            }
            uStack_d50 = CONCAT44(uStack_d50._4_4_,iVar33 - uVar20);
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&local_d58,iVar33 - uVar20,(int *)((longlong)&uStack_d50 + 4));
          }
        }
      }
      lVar25 = lVar46;
      lVar38 = lVar46;
      uVar20 = uVar40;
      if (0 < local_d68.ArrayNum) {
        do {
          uVar41 = ~uVar20 >> 0x1f;
          uVar36 = 0;
          if ((int)uVar20 < local_d00.ArrayNum) {
            uVar36 = uVar41;
          }
          if ((uVar36 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          uVar36 = *(uint *)(local_d00.AllocatorInstance.Data + lVar38);
          uVar21 = 0;
          if ((int)uVar36 < local_d68.ArrayNum) {
            uVar21 = ~uVar36 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          uVar76 = *(undefined8 *)(local_d68.AllocatorInstance.Data + (longlong)(int)uVar36 * 0x18);
          uVar11 = *(undefined8 *)
                    (local_d68.AllocatorInstance.Data + (longlong)(int)uVar36 * 0x18 + 8);
          uVar23 = *(undefined8 *)
                    (local_d68.AllocatorInstance.Data + (longlong)(int)uVar36 * 0x18 + 0x10);
          uVar36 = 0;
          if ((int)uVar20 < local_ca8.ArrayNum) {
            uVar36 = uVar41;
          }
          if ((uVar36 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          *(undefined8 *)(local_ca8.AllocatorInstance.Data + lVar25) = uVar76;
          *(undefined8 *)(local_ca8.AllocatorInstance.Data + lVar25 + 8) = uVar11;
          *(undefined8 *)(local_ca8.AllocatorInstance.Data + lVar25 + 0x10) = uVar23;
          uVar36 = 0;
          if ((int)uVar20 < local_d00.ArrayNum) {
            uVar36 = uVar41;
          }
          if ((uVar36 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          uVar36 = *(uint *)(local_d00.AllocatorInstance.Data + lVar38);
          uVar21 = 0;
          if ((int)uVar36 < (int)uStack_d10) {
            uVar21 = ~uVar36 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          uVar60 = *(undefined4 *)(local_d18.Data + (longlong)(int)uVar36 * 4);
          uVar36 = 0;
          if ((int)uVar20 < (int)uStack_d50) {
            uVar36 = uVar41;
          }
          if ((uVar36 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          uVar20 = uVar20 + 1;
          *(undefined4 *)(local_d58.Data + lVar38) = uVar60;
          lVar25 = lVar25 + 0x18;
          lVar38 = lVar38 + 4;
        } while ((int)uVar20 < local_d68.ArrayNum);
      }
      uVar11 = uStack_d10;
      FVar14.Data = local_d18.Data;
      uVar23 = local_d68._8_8_;
      FVar39.Data = local_d68.AllocatorInstance.Data;
      local_d68.AllocatorInstance.Data = local_ca8.AllocatorInstance.Data;
      local_d68.ArrayNum = local_ca8.ArrayNum;
      local_d68.ArrayMax = local_ca8.ArrayMax;
      uVar76 = local_d68._8_8_;
      local_d18.Data = local_d58.Data;
      uStack_d10 = uStack_d50;
      local_ca8.AllocatorInstance.Data = FVar39.Data;
      local_d68.ArrayNum = (int)uVar23;
      local_d68.ArrayMax = SUB84(uVar23,4);
      local_ca8.ArrayNum = local_d68.ArrayNum;
      local_ca8.ArrayMax = local_d68.ArrayMax;
      local_d58.Data = FVar14.Data;
      uStack_d50 = uVar11;
      local_d68._8_8_ = uVar76;
      if (FVar14.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar14.Data);
      }
      if (local_ca8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ca8.AllocatorInstance.Data);
      }
      if (local_d00.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d00.AllocatorInstance.Data);
      }
    }
    iVar33 = (int)uStack_d10;
    uVar20 = param_2->TargetNumSamples;
    if (local_d68.ArrayNum < param_2->TargetNumSamples) {
      uVar20 = local_d68.ArrayNum;
    }
    local_c80.SpatialLevels = 10;
    local_d38 = (FScriptContainerElement *)CONCAT44(local_d38._4_4_,uVar20);
    uVar36 = uVar20;
    if (param_2->bRequireSearchSampleCoverage != false) {
      uVar36 = 0xffffffff;
    }
    local_c80.Order.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a88 = local_d18.Data;
    local_c80.Order.ArrayNum = 0;
    local_c80.Order.ArrayMax = 0;
    uVar41 = local_d68.ArrayNum;
    if ((int)uStack_d10 < 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return (bool)uVar16;
      }
      uVar41 = local_d68.ArrayNum;
    }
    local_a78 = local_d68.AllocatorInstance.Data;
    iStack_a80 = iVar33;
    if (((int)uVar41 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      uVar16 = (*pcVar6)();
      return (bool)uVar16;
    }
    local_888._12_4_ = uStack_a7c;
    local_888.ArrayNum = iStack_a80;
    local_878._12_4_ = uStack_a6c;
    local_878.ArrayNum = uVar41;
    local_878.DataPtr = (TVector<double> *)local_a78;
    local_888.DataPtr = (float *)local_a88;
    uStack_a70 = uVar41;
    FPriorityOrderPoints::ComputeUniformSpaced(&local_c80,&local_878,&local_888,uVar36,4);
    bVar15 = param_2->SampleMethod == VoxelSearch;
    lVar25 = (longlong)(int)uVar20;
    local_d28 = (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)lVar25;
    if (0 < (int)uVar20) {
      do {
        uVar20 = 0;
        if ((int)uVar40 < local_c80.Order.ArrayNum) {
          uVar20 = ~uVar40 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        uVar20 = *(uint *)(local_c80.Order.AllocatorInstance.Data + lVar46 * 4);
        uVar36 = 0;
        if ((int)uVar20 < local_d68.ArrayNum) {
          uVar36 = ~uVar20 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar16 = (*pcVar6)();
          return (bool)uVar16;
        }
        local_8c8._s_0.X =
             (double)*(undefined8 *)
                      (local_d68.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x18);
        local_8c8._s_0.Y =
             (double)*(undefined8 *)
                      (local_d68.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x18 + 8);
        local_8c8._s_0.Z =
             (double)*(undefined8 *)
                      (local_d68.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x18 + 0x10);
        `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::<lambda_5>::operator()
                  (&local_a38,(TVector<double> *)&local_8c8._s_0,false,bVar15);
        uVar40 = uVar40 + 1;
        lVar46 = lVar46 + 1;
      } while (lVar46 < lVar25);
      uVar20 = (uint)local_d38;
    }
    if (param_2->bRequireSearchSampleCoverage != false) {
      dVar50 = param_2->MinSpacing * param_2->MinSpacing;
      if ((int)uVar20 < local_c80.Order.ArrayNum) {
        lVar46 = (longlong)local_d28 * 4;
        do {
          uVar40 = 0;
          if ((int)uVar20 < local_c80.Order.ArrayNum) {
            uVar40 = ~uVar20 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          uVar40 = *(uint *)(local_c80.Order.AllocatorInstance.Data + lVar46);
          uVar36 = 0;
          if ((int)uVar40 < local_d68.ArrayNum) {
            uVar36 = ~uVar40 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar16 = (*pcVar6)();
            return (bool)uVar16;
          }
          local_8a8._s_0.X =
               (double)*(undefined8 *)
                        (local_d68.AllocatorInstance.Data + (longlong)(int)uVar40 * 0x18);
          local_8a8._s_0.Y =
               (double)*(undefined8 *)
                        (local_d68.AllocatorInstance.Data + (longlong)(int)uVar40 * 0x18 + 8);
          local_8a8._s_0.Z =
               (double)*(undefined8 *)
                        (local_d68.AllocatorInstance.Data + (longlong)(int)uVar40 * 0x18 + 0x10);
          `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::<lambda_5>::operator()
                    (&local_a38,(TVector<double> *)&local_8a8._s_0,
                     (double)CONCAT44(uVar80,uVar79) <= dVar50 &&
                     dVar50 != (double)CONCAT44(uVar80,uVar79),bVar15);
          uVar20 = uVar20 + 1;
          lVar46 = lVar46 + 4;
        } while ((int)uVar20 < local_c80.Order.ArrayNum);
      }
    }
    if (local_c80.Order.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c80.Order.AllocatorInstance.Data);
    }
    if (local_d68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d68.AllocatorInstance.Data);
    }
    if (local_c90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c90.AllocatorInstance.Data);
    }
    if (local_d18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d18.Data);
    }
    FDynamicMesh3::~FDynamicMesh3(&local_7f8);
    FMarchingCubes::~FMarchingCubes((FMarchingCubes *)local_398);
    if (local_b30 != (void *)0x0) {
      FMemory::Free(local_b30);
    }
    TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
    ~TMeshAABBTree3<_UE::Geometry::FSphereCovering::AddNegativeSpace_::__l34::FHullMeshWrapper>
              (&local_4a8);
    if (local_9b8.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.HullNeighbors.AllocatorInstance.Data);
    }
    if (local_9b8.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.Hull.AllocatorInstance.Data);
    }
    return (bool)local_d88[0];
  }
  do {
    lVar25 = (longlong)(int)uVar20;
    puVar24 = (undefined8 *)
              (*(longlong *)
                (local_7f8.Vertices.Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8) +
              (ulonglong)(uVar20 & 0x1ff) * 0x18);
    uVar76 = *puVar24;
    uVar11 = puVar24[1];
    uVar23 = *(undefined8 *)
              (*(longlong *)
                (local_7f8.Vertices.Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8) +
               0x10 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
    uVar41 = 0;
    if ((int)uVar20 < local_d68.ArrayNum) {
      uVar41 = ~uVar20 >> 0x1f;
    }
    if ((uVar41 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      uVar16 = (*pcVar6)();
      return (bool)uVar16;
    }
    local_a98 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l69::<lambda_6>,void,int>
                ::Call;
    *(undefined8 *)(local_d68.AllocatorInstance.Data + lVar25 * 0x18) = uVar76;
    *(undefined8 *)(local_d68.AllocatorInstance.Data + lVar25 * 0x18 + 8) = uVar11;
    *(undefined8 *)(local_d68.AllocatorInstance.Data + lVar25 * 0x18 + 0x10) = uVar23;
    local_a50 = &local_7f8;
    local_a48 = local_ce0;
    local_ce0[0] = 0;
    local_a40 = &local_c90;
    local_a90 = &local_a50;
    FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
              (&local_7f8.VertexEdgeLists,uVar20,(TFunctionRef<void___cdecl(int)> *)&local_a98);
    uVar60 = local_ce0[0];
    uVar41 = 0;
    if ((int)uVar20 < (int)uStack_d10) {
      uVar41 = ~uVar20 >> 0x1f;
    }
    if ((uVar41 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      uVar16 = (*pcVar6)();
      return (bool)uVar16;
    }
    *(undefined4 *)(local_d18.Data + lVar25 * 4) = uVar60;
    do {
      uVar20 = uVar20 + 1;
      if ((int)uVar36 <= (int)uVar20) {
        param_2 = local_bc0;
        if (uVar20 == uVar36) goto LAB_14337f62c;
        break;
      }
      sVar3 = *(short *)(*(longlong *)
                          (local_7f8.VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 2);
    } while ((sVar3 == 0) || (sVar3 == -1));
  } while( true );
}

// GetRadius @ 1433a93e0

double __thiscall UE::Geometry::FSphereCovering::GetRadius(FSphereCovering *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Radius).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  return *(double *)((this->Radius).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// RemoveSmaller @ 1433c47d0

void __thiscall UE::Geometry::FSphereCovering::RemoveSmaller(FSphereCovering *this,double param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->Radius).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->Radius).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->Radius).AllocatorInstance.Data + lVar9;
      if (*(double *)pFVar2 <= param_1 && param_1 != *(double *)pFVar2) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Radius).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar3 = (this->Radius).ArrayNum;
        pFVar2 = (this->Radius).AllocatorInstance.Data;
        iVar7 = iVar3 + ~uVar8;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar8 * 8,pFVar2 + (longlong)(iVar3 - iVar7) * 8,
                  (longlong)iVar7 << 3);
        }
        piVar1 = &(this->Radius).ArrayNum;
        *piVar1 = *piVar1 + -1;
        uVar6 = 0;
        if ((int)uVar8 < (this->Position).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar3 = (this->Position).ArrayNum;
        pFVar2 = (this->Position).AllocatorInstance.Data;
        iVar7 = iVar3 + ~uVar8;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar8 * 0x18,pFVar2 + (longlong)(iVar3 - iVar7) * 0x18,
                  (longlong)iVar7 * 0x18);
        }
        piVar1 = &(this->Position).ArrayNum;
        *piVar1 = *piVar1 + -1;
        uVar8 = uVar8 - 1;
        lVar9 = lVar9 + -8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Radius).ArrayNum);
  }
  return;
}

// SetRadius @ 1433cb570

void __thiscall
UE::Geometry::FSphereCovering::SetRadius(FSphereCovering *this,int param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->Radius).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(double *)((this->Radius).AllocatorInstance.Data + (longlong)param_1 * 8) = param_2;
  return;
}

