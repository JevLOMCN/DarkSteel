// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 154

// <lambda_invoker_cdecl> @ 14332f060

int __cdecl
`UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14332f080

int __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::MakeDefaultSplitAxisFunc'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14332f0c0

bool __cdecl
`UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindAllIntersections'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Test(param_1);
  if (bVar1) {
    UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_1);
    return param_1->Result == Intersects;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14332f100

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindAllIntersections'::__l5::<lambda_1>
::<lambda_invoker_cdecl>(TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Test(param_1);
  if (bVar1) {
    UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_1);
    return param_1->Result == Intersects;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14332f140

bool __cdecl
`UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindAllSelfIntersections'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Test(param_1);
  if (bVar1) {
    UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_1);
    return param_1->Result == Intersects;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14332f180

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindAllSelfIntersections'::__l5::
<lambda_1>::<lambda_invoker_cdecl>(TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Test(param_1);
  if (bVar1) {
    UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_1);
    return param_1->Result == Intersects;
  }
  return false;
}

// FindHitTriangle<UE::Math::TRay<double>_> @ 143341ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindHitTriangle<UE::Math::TRay<double>_>
          (void *this,int param_1,TRay<double> *param_2,double *param_3,int *param_4,
          TVector<double> *param_5,FQueryOptions *param_6)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  undefined1 auStackY_1f8 [32];
  uint local_1b8 [2];
  uint *local_1b0;
  ulonglong local_1a8;
  longlong *local_1a0;
  ulonglong local_198;
  uint local_190;
  longlong local_188;
  TVector<double> *local_180;
  double local_178;
  double dStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  TVector<double>_u_0 local_f8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double local_b0;
  TVector<double>_u_0 local_a8;
  EIntersectionType local_90 [2];
  ulonglong local_88;
  
  dVar11 = __real_3e45798ee2308c3a;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1a0 = (longlong *)((longlong)this + 0xa8);
  local_1b0 = (uint *)param_4;
  local_180 = param_5;
  uVar19 = *(uint *)(*(longlong *)
                      (*(longlong *)((longlong)this + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                    (ulonglong)(param_1 & 0x1ff) * 4);
  if (*(int *)((longlong)this + 0xb8) <= (int)uVar19) {
    do {
      uVar18 = *(uint *)(*(longlong *)
                          (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar19 >> 9) * 8) +
                        (ulonglong)(uVar19 & 0x1ff) * 4);
      if ((int)uVar18 < 0) {
        uVar18 = ~uVar18;
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar18,param_2);
        if (*param_3 + dVar11 < dVar7) {
          return;
        }
      }
      else {
        uVar14 = uVar18 - 1;
        uVar18 = *(int *)(*(longlong *)
                           (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar19 + 1 >> 9) * 8)
                         + (ulonglong)(uVar19 + 1 & 0x1ff) * 4) - 1;
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar14,param_2);
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar18,param_2);
        if (dVar8 <= dVar7) {
          if (*param_3 + dVar11 < dVar8) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar18,param_2,param_3,(int *)local_1b0,param_5,param_6);
          uVar18 = uVar14;
          if (*param_3 + dVar11 < dVar7) {
            return;
          }
        }
        else {
          if (*param_3 + dVar11 < dVar7) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar14,param_2,param_3,(int *)local_1b0,param_5,param_6);
          if (*param_3 + dVar11 < dVar8) {
            return;
          }
        }
      }
      uVar19 = *(uint *)(*(longlong *)
                          (*(longlong *)((longlong)this + 0x60) + (ulonglong)(uVar18 >> 9) * 8) +
                        (ulonglong)(uVar18 & 0x1ff) * 4);
    } while (*(int *)((longlong)this + 0xb8) <= (int)uVar19);
  }
  plVar20 = (longlong *)((longlong)this + 0xa8);
  uVar18 = *(uint *)(*(longlong *)(*plVar20 + (ulonglong)(uVar19 >> 9) * 8) +
                    (ulonglong)(uVar19 & 0x1ff) * 4);
  local_1a8 = (ulonglong)uVar18;
  if (0 < (int)uVar18) {
    do {
      uVar19 = uVar19 + 1;
      uVar18 = *(uint *)(*(longlong *)(*plVar20 + (ulonglong)(uVar19 >> 9) * 8) +
                        (ulonglong)(uVar19 & 0x1ff) * 4);
      if (*(void **)&param_6->TriangleFilterF == (void *)0x0) {
LAB_143341f19:
        plVar20 = *(longlong **)((longlong)this + 8);
        local_188 = plVar20[1];
        uVar14 = 0;
        if ((int)uVar18 < *(int *)(local_188 + 0x98)) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_128._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.X;
        local_198 = *(ulonglong *)(*(longlong *)(local_188 + 0x90) + (longlong)(int)uVar18 * 0xc);
        local_190 = *(uint *)(*(longlong *)(local_188 + 0x90) + 8 + (longlong)(int)uVar18 * 0xc);
        lVar5 = *(longlong *)(*plVar20 + 0x10);
        lVar6 = *(longlong *)(lVar5 + (ulonglong)((uint)local_198 >> 9) * 8);
        pdVar1 = (double *)(lVar6 + (ulonglong)((uint)local_198 & 0x1ff) * 0x18);
        local_178 = *pdVar1;
        dStack_170 = pdVar1[1];
        puVar3 = (undefined4 *)(lVar6 + 0x10 + (ulonglong)((uint)local_198 & 0x1ff) * 0x18);
        uStack_168 = *puVar3;
        uStack_164 = puVar3[1];
        uVar17 = (ulonglong)((uint)(local_198 >> 0x20) & 0x1ff);
        lVar6 = *(longlong *)(lVar5 + (local_198 >> 0x29) * 8);
        puVar2 = (undefined8 *)(lVar6 + uVar17 * 0x18);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        uVar15 = *(undefined8 *)(lVar6 + 0x10 + uVar17 * 0x18);
        local_128._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_128._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        uStack_158._0_4_ = (undefined4)uVar10;
        uStack_158._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        lVar5 = *(longlong *)(lVar5 + (ulonglong)(local_190 >> 9) * 8);
        local_108 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_100 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_150 = (undefined4)uVar15;
        uStack_14c = (undefined4)((ulonglong)uVar15 >> 0x20);
        puVar2 = (undefined8 *)(lVar5 + (ulonglong)(local_190 & 0x1ff) * 0x18);
        local_148 = *puVar2;
        uStack_140 = puVar2[1];
        local_138 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)(local_190 & 0x1ff) * 0x18);
        local_160._0_4_ = (undefined4)uVar9;
        local_160._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_e0 = (undefined4)local_160;
        uStack_dc = local_160._4_4_;
        local_d8 = (undefined4)uStack_158;
        uStack_d4 = uStack_158._4_4_;
        local_160 = uVar9;
        uStack_158 = uVar10;
        local_f8._s_0.X = local_178;
        local_f8._s_0.Y = dStack_170;
        local_f8._16_4_ = uStack_168;
        local_f8._20_4_ = uStack_164;
        uStack_d0 = uStack_150;
        uStack_cc = uStack_14c;
        local_c8 = local_148;
        uStack_c0 = uStack_140;
        local_b8 = local_138;
        bVar13 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,
                            &local_b0,(TVector<double> *)&local_a8._s_0,local_90);
        if ((bVar13) && (local_b0 < *param_3)) {
          *param_3 = local_b0;
          *local_1b0 = uVar18;
          (local_180->field0_0x0)._s_0.X = local_a8._s_0.X;
          (local_180->field0_0x0)._s_0.Y = local_a8._s_0.Y;
          (local_180->field0_0x0)._s_0.Z = local_a8._s_0.Z;
        }
      }
      else {
        local_1b8[0] = uVar18;
        Core::Private::Function::CheckCallable(*(void **)&param_6->TriangleFilterF);
        plVar20 = *(longlong **)&(param_6->TriangleFilterF).field_0x28;
        pcVar4 = *(code **)&param_6->TriangleFilterF;
        plVar16 = (longlong *)&(param_6->TriangleFilterF).field_0x10;
        if (plVar20 != (longlong *)0x0) {
          plVar16 = plVar20;
        }
        uVar15 = (**(code **)(*plVar16 + 8))();
        cVar12 = (*pcVar4)(uVar15,local_1b8);
        if (cVar12 != '\0') goto LAB_143341f19;
      }
      local_1a8 = local_1a8 - 1;
      plVar20 = local_1a0;
    } while (local_1a8 != 0);
  }
  return;
}

// FindHitTriangle<UE::Math::TRay<double>_> @ 143342110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,TRay<double> *param_2,
          double *param_3,int *param_4,TVector<double> *param_5,FQueryOptions *param_6)

{
  uint uVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  char cVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar22;
  undefined1 auStackY_1e8 [32];
  uint local_1a8 [2];
  uint local_1a0;
  uint *local_198;
  ulonglong local_190;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_188;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  TVector<double>_u_0 local_f8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double local_b0;
  TVector<double>_u_0 local_a8;
  EIntersectionType local_90 [2];
  ulonglong local_88;
  
  dVar13 = __real_3e45798ee2308c3a;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_188 = &(this->IndexList).Blocks;
  local_198 = (uint *)param_4;
  uVar21 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar21) {
    do {
      pFVar5 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar20 = *(uint *)(*(longlong *)(pFVar5 + (ulonglong)(uVar21 >> 9) * 8) +
                        (ulonglong)(uVar21 & 0x1ff) * 4);
      if ((int)uVar20 < 0) {
        uVar20 = ~uVar20;
        dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar20,param_2);
        if (*param_3 + dVar13 < dVar9) {
          return;
        }
      }
      else {
        uVar1 = uVar20 - 1;
        uVar20 = *(int *)(*(longlong *)(pFVar5 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                         (ulonglong)(uVar21 + 1 & 0x1ff) * 4) - 1;
        dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar1,param_2);
        dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar20,param_2);
        if (dVar10 <= dVar9) {
          if (*param_3 + dVar13 < dVar10) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar20,param_2,param_3,(int *)local_198,param_5,param_6);
          uVar20 = uVar1;
          if (*param_3 + dVar13 < dVar9) {
            return;
          }
        }
        else {
          if (*param_3 + dVar13 < dVar9) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar1,param_2,param_3,(int *)local_198,param_5,param_6);
          if (*param_3 + dVar13 < dVar10) {
            return;
          }
        }
      }
      uVar21 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar21);
  }
  pTVar22 = &(this->IndexList).Blocks;
  uVar20 = *(uint *)(*(longlong *)((pTVar22->AllocatorInstance).Data + (ulonglong)(uVar21 >> 9) * 8)
                    + (ulonglong)(uVar21 & 0x1ff) * 4);
  local_190 = (ulonglong)uVar20;
  if (0 < (int)uVar20) {
    do {
      uVar21 = uVar21 + 1;
      local_1a0 = *(uint *)(*(longlong *)
                             ((pTVar22->AllocatorInstance).Data + (ulonglong)(uVar21 >> 9) * 8) +
                           (ulonglong)(uVar21 & 0x1ff) * 4);
      if (*(void **)&param_6->TriangleFilterF == (void *)0x0) {
LAB_143342390:
        uVar1 = local_1a0;
        local_128._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.X;
        uVar17 = (ulonglong)(local_1a0 & 0x1ff);
        lVar8 = *(longlong *)
                 ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                 (ulonglong)(local_1a0 >> 9) * 8);
        pFVar5 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
        uVar20 = *(uint *)(lVar8 + uVar17 * 0xc);
        uVar19 = (ulonglong)(uVar20 & 0x1ff);
        pdVar2 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar20 >> 9) * 8) + uVar19 * 0x18);
        local_f8._s_0.X = *pdVar2;
        local_f8._s_0.Y = pdVar2[1];
        puVar4 = (undefined4 *)
                 (*(longlong *)(pFVar5 + (ulonglong)(uVar20 >> 9) * 8) + 0x10 + uVar19 * 0x18);
        uStack_168 = *puVar4;
        uStack_164 = puVar4[1];
        uVar20 = *(uint *)(lVar8 + 4 + uVar17 * 0xc);
        uVar19 = (ulonglong)(uVar20 & 0x1ff);
        puVar3 = (undefined8 *)
                 (*(longlong *)(pFVar5 + (ulonglong)(uVar20 >> 9) * 8) + uVar19 * 0x18);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        uVar16 = *(undefined8 *)
                  (*(longlong *)(pFVar5 + (ulonglong)(uVar20 >> 9) * 8) + 0x10 + uVar19 * 0x18);
        uVar20 = *(uint *)(lVar8 + 8 + uVar17 * 0xc);
        uVar17 = (ulonglong)(uVar20 & 0x1ff);
        local_128._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_128._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        uStack_158._0_4_ = (undefined4)uVar12;
        uStack_158._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        local_108 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_100 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_150 = (undefined4)uVar16;
        uStack_14c = (undefined4)((ulonglong)uVar16 >> 0x20);
        local_160._0_4_ = (undefined4)uVar11;
        local_160._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        puVar3 = (undefined8 *)
                 (*(longlong *)(pFVar5 + (ulonglong)(uVar20 >> 9) * 8) + uVar17 * 0x18);
        local_c8 = *puVar3;
        uStack_c0 = puVar3[1];
        local_b8 = *(undefined8 *)
                    (*(longlong *)(pFVar5 + (ulonglong)(uVar20 >> 9) * 8) + 0x10 + uVar17 * 0x18);
        uStack_e0 = (undefined4)local_160;
        uStack_dc = local_160._4_4_;
        local_d8 = (undefined4)uStack_158;
        uStack_d4 = uStack_158._4_4_;
        local_160 = uVar11;
        uStack_158 = uVar12;
        local_f8._16_4_ = uStack_168;
        local_f8._20_4_ = uStack_164;
        uStack_d0 = uStack_150;
        uStack_cc = uStack_14c;
        bVar15 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,
                            &local_b0,(TVector<double> *)&local_a8._s_0,local_90);
        if ((bVar15) && (local_b0 < *param_3)) {
          *param_3 = local_b0;
          *local_198 = uVar1;
          (param_5->field0_0x0)._s_0.X = local_a8._s_0.X;
          (param_5->field0_0x0)._s_0.Y = local_a8._s_0.Y;
          (param_5->field0_0x0)._s_0.Z = local_a8._s_0.Z;
        }
      }
      else {
        local_1a8[0] = local_1a0;
        Core::Private::Function::CheckCallable(*(void **)&param_6->TriangleFilterF);
        plVar6 = *(longlong **)&(param_6->TriangleFilterF).field_0x28;
        pcVar7 = *(code **)&param_6->TriangleFilterF;
        plVar18 = (longlong *)&(param_6->TriangleFilterF).field_0x10;
        if (plVar6 != (longlong *)0x0) {
          plVar18 = plVar6;
        }
        uVar16 = (**(code **)(*plVar18 + 8))();
        cVar14 = (*pcVar7)(uVar16,local_1a8);
        if (cVar14 != '\0') goto LAB_143342390;
      }
      local_190 = local_190 - 1;
      pTVar22 = local_188;
    } while (local_190 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 143342510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindHitTriangles<UE::Math::TRay<double>_>
          (void *this,int param_1,TRay<double> *param_2,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_3,
          FQueryOptions *param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  uint uVar5;
  code *pcVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong *plVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_228 [32];
  uint local_1f8 [2];
  ulonglong local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  uint local_1d8;
  longlong local_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  uint local_178;
  undefined4 uStack_174;
  double dStack_170;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_d0;
  TVector<double>_u_0 local_c8;
  EIntersectionType local_b0 [2];
  ulonglong local_a8;
  
  dVar14 = __real_47efffffe0000000;
  dVar13 = __real_3e45798ee2308c3a;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = (longlong *)((longlong)this + 0xa8);
  uVar27 = SUB84(__real_47efffffe0000000,0);
  uVar28 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  dVar4 = param_4->MaxDistance;
  uVar25 = SUB84(dVar4,0);
  uVar26 = (int)((ulonglong)dVar4 >> 0x20);
  if (__real_47efffffe0000000 <= dVar4) {
    uVar25 = uVar27;
    uVar26 = uVar28;
  }
  uVar23 = *(uint *)(*(longlong *)
                      (*(longlong *)((longlong)this + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                    (ulonglong)(param_1 & 0x1ff) * 4);
  if (*(int *)((longlong)this + 0xb8) <= (int)uVar23) {
    do {
      dVar4 = (double)CONCAT44(uVar26,uVar25) + dVar13;
      uVar5 = *(uint *)(*(longlong *)
                         (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar23 >> 9) * 8) +
                       (ulonglong)(uVar23 & 0x1ff) * 4);
      if ((int)uVar5 < 0) {
        dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,~uVar5,param_2);
        uVar23 = ~uVar5;
      }
      else {
        uVar5 = uVar5 - 1;
        uVar23 = *(int *)(*(longlong *)
                           (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar23 + 1 >> 9) * 8)
                         + (ulonglong)(uVar23 + 1 & 0x1ff) * 4) - 1;
        dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar5,param_2);
        dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar23,param_2);
        if (dVar9 <= dVar10) {
          if (dVar4 < dVar9) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar23,param_2,param_3,param_4);
          uVar23 = uVar5;
          dVar9 = dVar10;
        }
        else {
          if (dVar4 < dVar10) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar5,param_2,param_3,param_4);
        }
      }
      if (dVar4 < dVar9) {
        return;
      }
      dVar4 = param_4->MaxDistance;
      uVar25 = SUB84(dVar4,0);
      uVar26 = (int)((ulonglong)dVar4 >> 0x20);
      if (dVar14 <= dVar4) {
        uVar25 = uVar27;
        uVar26 = uVar28;
      }
      uVar23 = *(uint *)(*(longlong *)
                          (*(longlong *)((longlong)this + 0x60) + (ulonglong)(uVar23 >> 9) * 8) +
                        (ulonglong)(uVar23 & 0x1ff) * 4);
    } while (*(int *)((longlong)this + 0xb8) <= (int)uVar23);
  }
  plVar24 = (longlong *)((longlong)this + 0xa8);
  uVar5 = *(uint *)(*(longlong *)(*plVar24 + (ulonglong)(uVar23 >> 9) * 8) +
                   (ulonglong)(uVar23 & 0x1ff) * 4);
  local_1f0 = (ulonglong)uVar5;
  if (0 < (int)uVar5) {
    do {
      uVar23 = uVar23 + 1;
      uVar5 = *(uint *)(*(longlong *)(*plVar24 + (ulonglong)(uVar23 >> 9) * 8) +
                       (ulonglong)(uVar23 & 0x1ff) * 4);
      if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_143342779:
        plVar24 = *(longlong **)((longlong)this + 8);
        local_1d0 = plVar24[1];
        uVar17 = 0;
        if ((int)uVar5 < *(int *)(local_1d0 + 0x98)) {
          uVar17 = ~uVar5 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_148._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_130 = (param_2->Direction).field0_0x0._s_0.X;
        local_1e0 = *(ulonglong *)(*(longlong *)(local_1d0 + 0x90) + (longlong)(int)uVar5 * 0xc);
        local_1d8 = *(uint *)(*(longlong *)(local_1d0 + 0x90) + 8 + (longlong)(int)uVar5 * 0xc);
        lVar20 = *(longlong *)(*plVar24 + 0x10);
        lVar7 = *(longlong *)(lVar20 + (ulonglong)((uint)local_1e0 >> 9) * 8);
        pdVar1 = (double *)(lVar7 + (ulonglong)((uint)local_1e0 & 0x1ff) * 0x18);
        local_1c8 = *pdVar1;
        dStack_1c0 = pdVar1[1];
        puVar3 = (undefined4 *)(lVar7 + 0x10 + (ulonglong)((uint)local_1e0 & 0x1ff) * 0x18);
        uStack_1b8 = *puVar3;
        uStack_1b4 = puVar3[1];
        uVar22 = (ulonglong)((uint)(local_1e0 >> 0x20) & 0x1ff);
        lVar7 = *(longlong *)(lVar20 + (local_1e0 >> 0x29) * 8);
        puVar2 = (undefined8 *)(lVar7 + uVar22 * 0x18);
        uVar11 = *puVar2;
        uVar12 = puVar2[1];
        uVar19 = *(undefined8 *)(lVar7 + 0x10 + uVar22 * 0x18);
        local_148._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_148._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        uStack_1a8._0_4_ = (undefined4)uVar12;
        uStack_1a8._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        lVar20 = *(longlong *)(lVar20 + (ulonglong)(local_1d8 >> 9) * 8);
        local_128 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_1a0 = (undefined4)uVar19;
        uStack_19c = (undefined4)((ulonglong)uVar19 >> 0x20);
        puVar2 = (undefined8 *)(lVar20 + (ulonglong)(local_1d8 & 0x1ff) * 0x18);
        local_198 = *puVar2;
        uStack_190 = puVar2[1];
        local_188 = *(undefined8 *)(lVar20 + 0x10 + (ulonglong)(local_1d8 & 0x1ff) * 0x18);
        local_1b0._0_4_ = (undefined4)uVar11;
        local_1b0._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_100 = (undefined4)local_1b0;
        uStack_fc = local_1b0._4_4_;
        local_f8 = (undefined4)uStack_1a8;
        uStack_f4 = uStack_1a8._4_4_;
        local_1b0 = uVar11;
        uStack_1a8 = uVar12;
        local_118._s_0.X = local_1c8;
        local_118._s_0.Y = dStack_1c0;
        local_118._16_4_ = uStack_1b8;
        local_118._20_4_ = uStack_1b4;
        uStack_f0 = uStack_1a0;
        uStack_ec = uStack_19c;
        local_e8 = local_198;
        uStack_e0 = uStack_190;
        local_d8 = local_188;
        bVar16 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_148._s_0,(TTriangle3<double> *)&local_118._s_0,
                            &local_d0,(TVector<double> *)&local_c8._s_0,local_b0);
        uVar11 = local_c8._s_0.Y;
        uVar19 = local_c8._s_0.X;
        if ((bVar16) && (local_d0 <= (double)CONCAT44(uVar26,uVar25) + dVar13)) {
          iVar18 = param_3->ArrayNum;
          dStack_170 = local_d0;
          local_178 = uVar5;
          if (iVar18 == param_3->ArrayMax) {
            iVar18 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar20 = (longlong)iVar18;
          param_3->ArrayNum = iVar18 + 1;
          pFVar8 = (param_3->AllocatorInstance).Data;
          *(ulonglong *)(pFVar8 + lVar20 * 0x28) = CONCAT44(uStack_174,local_178);
          *(double *)(pFVar8 + lVar20 * 0x28 + 8) = dStack_170;
          *(undefined8 *)(pFVar8 + lVar20 * 0x28 + 0x10) = uVar19;
          *(undefined8 *)(pFVar8 + lVar20 * 0x28 + 0x10 + 8) = uVar11;
          *(double *)(pFVar8 + lVar20 * 0x28 + 0x20) = local_c8._s_0.Z;
        }
      }
      else {
        local_1f8[0] = uVar5;
        Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
        plVar24 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_4->TriangleFilterF;
        plVar21 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
        if (plVar24 != (longlong *)0x0) {
          plVar21 = plVar24;
        }
        uVar19 = (**(code **)(*plVar21 + 8))();
        cVar15 = (*pcVar6)(uVar19,local_1f8);
        if (cVar15 != '\0') goto LAB_143342779;
      }
      local_1f0 = local_1f0 - 1;
      plVar24 = local_1e8;
    } while (local_1f0 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 1433429b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,TRay<double> *param_2,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_3,
          FQueryOptions *param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  uint uVar24;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStackY_208 [32];
  uint local_1d8 [2];
  ulonglong local_1d0;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_1c8;
  uint local_1c0;
  undefined4 uStack_1bc;
  double dStack_1b8;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_d0;
  TVector<double>_u_0 local_c8;
  EIntersectionType local_b0 [2];
  ulonglong local_a8;
  
  dVar15 = __real_47efffffe0000000;
  dVar14 = __real_3e45798ee2308c3a;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar25 = &(this->IndexList).Blocks;
  uVar28 = SUB84(__real_47efffffe0000000,0);
  uVar29 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  dVar4 = param_4->MaxDistance;
  uVar26 = SUB84(dVar4,0);
  uVar27 = (int)((ulonglong)dVar4 >> 0x20);
  if (__real_47efffffe0000000 <= dVar4) {
    uVar26 = uVar28;
    uVar27 = uVar29;
  }
  uVar24 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_1c8 = pTVar25;
  if (this->TrianglesEnd <= (int)uVar24) {
    do {
      pFVar7 = (pTVar25->AllocatorInstance).Data;
      dVar4 = (double)CONCAT44(uVar27,uVar26) + dVar14;
      uVar5 = *(uint *)(*(longlong *)(pFVar7 + (ulonglong)(uVar24 >> 9) * 8) +
                       (ulonglong)(uVar24 & 0x1ff) * 4);
      if ((int)uVar5 < 0) {
        dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,~uVar5,param_2);
        uVar24 = ~uVar5;
      }
      else {
        uVar5 = uVar5 - 1;
        uVar24 = *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar24 + 1 >> 9) * 8) +
                         (ulonglong)(uVar24 + 1 & 0x1ff) * 4) - 1;
        dVar11 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar5,param_2);
        dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar24,param_2);
        if (dVar10 <= dVar11) {
          if (dVar4 < dVar10) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar24,param_2,param_3,param_4);
          uVar24 = uVar5;
          dVar10 = dVar11;
        }
        else {
          if (dVar4 < dVar11) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar5,param_2,param_3,param_4);
        }
      }
      if (dVar4 < dVar10) {
        return;
      }
      dVar4 = param_4->MaxDistance;
      uVar26 = SUB84(dVar4,0);
      uVar27 = (int)((ulonglong)dVar4 >> 0x20);
      if (dVar15 <= dVar4) {
        uVar26 = uVar28;
        uVar27 = uVar29;
      }
      uVar24 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar24);
  }
  uVar5 = *(uint *)(*(longlong *)((pTVar25->AllocatorInstance).Data + (ulonglong)(uVar24 >> 9) * 8)
                   + (ulonglong)(uVar24 & 0x1ff) * 4);
  local_1d0 = (ulonglong)uVar5;
  if (0 < (int)uVar5) {
    do {
      uVar24 = uVar24 + 1;
      uVar5 = *(uint *)(*(longlong *)
                         ((pTVar25->AllocatorInstance).Data + (ulonglong)(uVar24 >> 9) * 8) +
                       (ulonglong)(uVar24 & 0x1ff) * 4);
      if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_143342c0a:
        local_148._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_130 = (param_2->Direction).field0_0x0._s_0.X;
        uVar20 = (ulonglong)(uVar5 & 0x1ff);
        lVar21 = *(longlong *)
                  ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar5 >> 9) * 8);
        pFVar7 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
        uVar6 = *(uint *)(lVar21 + uVar20 * 0xc);
        uVar23 = (ulonglong)(uVar6 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8) + uVar23 * 0x18);
        local_118._s_0.X = *pdVar1;
        local_118._s_0.Y = pdVar1[1];
        puVar3 = (undefined4 *)
                 (*(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8) + 0x10 + uVar23 * 0x18);
        uStack_188 = *puVar3;
        uStack_184 = puVar3[1];
        uVar6 = *(uint *)(lVar21 + 4 + uVar20 * 0xc);
        uVar23 = (ulonglong)(uVar6 & 0x1ff);
        puVar2 = (undefined8 *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8) + uVar23 * 0x18)
        ;
        uVar12 = *puVar2;
        uVar13 = puVar2[1];
        uVar19 = *(undefined8 *)
                  (*(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8) + 0x10 + uVar23 * 0x18);
        uVar6 = *(uint *)(lVar21 + 8 + uVar20 * 0xc);
        uVar20 = (ulonglong)(uVar6 & 0x1ff);
        local_148._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_148._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        uStack_178._0_4_ = (undefined4)uVar13;
        uStack_178._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
        local_128 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_170 = (undefined4)uVar19;
        uStack_16c = (undefined4)((ulonglong)uVar19 >> 0x20);
        local_180._0_4_ = (undefined4)uVar12;
        local_180._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        puVar2 = (undefined8 *)(*(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8) + uVar20 * 0x18)
        ;
        local_e8 = *puVar2;
        uStack_e0 = puVar2[1];
        local_d8 = *(undefined8 *)
                    (*(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8) + 0x10 + uVar20 * 0x18);
        uStack_100 = (undefined4)local_180;
        uStack_fc = local_180._4_4_;
        local_f8 = (undefined4)uStack_178;
        uStack_f4 = uStack_178._4_4_;
        local_180 = uVar12;
        uStack_178 = uVar13;
        local_118._16_4_ = uStack_188;
        local_118._20_4_ = uStack_184;
        uStack_f0 = uStack_170;
        uStack_ec = uStack_16c;
        bVar17 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_148._s_0,(TTriangle3<double> *)&local_118._s_0,
                            &local_d0,(TVector<double> *)&local_c8._s_0,local_b0);
        uVar12 = local_c8._s_0.Y;
        uVar19 = local_c8._s_0.X;
        if ((bVar17) && (local_d0 <= (double)CONCAT44(uVar27,uVar26) + dVar14)) {
          iVar18 = param_3->ArrayNum;
          dStack_1b8 = local_d0;
          local_1c0 = uVar5;
          if (iVar18 == param_3->ArrayMax) {
            iVar18 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar21 = (longlong)iVar18;
          param_3->ArrayNum = iVar18 + 1;
          pFVar7 = (param_3->AllocatorInstance).Data;
          *(ulonglong *)(pFVar7 + lVar21 * 0x28) = CONCAT44(uStack_1bc,local_1c0);
          *(double *)(pFVar7 + lVar21 * 0x28 + 8) = dStack_1b8;
          *(undefined8 *)(pFVar7 + lVar21 * 0x28 + 0x10) = uVar19;
          *(undefined8 *)(pFVar7 + lVar21 * 0x28 + 0x10 + 8) = uVar12;
          *(double *)(pFVar7 + lVar21 * 0x28 + 0x20) = local_c8._s_0.Z;
        }
      }
      else {
        local_1d8[0] = uVar5;
        Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
        plVar8 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
        pcVar9 = *(code **)&param_4->TriangleFilterF;
        plVar22 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
        if (plVar8 != (longlong *)0x0) {
          plVar22 = plVar8;
        }
        uVar19 = (**(code **)(*plVar22 + 8))();
        cVar16 = (*pcVar9)(uVar19,local_1d8);
        if (cVar16 != '\0') goto LAB_143342c0a;
      }
      local_1d0 = local_1d0 - 1;
      pTVar25 = local_1c8;
    } while (local_1d0 != 0);
  }
  return;
}

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 143364720

double __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
box_ray_intersect_t<UE::Math::TRay<double>_>(void *this,int param_1,TRay<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  int local_res8 [2];
  EIntersectionType local_res10 [2];
  double local_res18;
  double local_res20;
  TVector<double> local_88;
  TVector<double> local_70;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  
  dVar6 = __real_7fefffffffffffff;
  dVar1 = *(double *)((longlong)this + 0x50);
  uVar5 = (ulonglong)(param_1 & 0x1ff);
  local_res10[0] = Empty;
  lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_40 = *(double *)(lVar2 + uVar5 * 0x18);
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_30 = *(double *)(lVar2 + 0x10 + uVar5 * 0x18);
  local_38 = *(double *)(lVar2 + 8 + uVar5 * 0x18);
  dVar4 = dVar1 + *(double *)(lVar3 + 8 + uVar5 * 0x18);
  dVar7 = dVar1 + *(double *)(lVar3 + uVar5 * 0x18);
  dVar1 = dVar1 + *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
  local_58._s_0.Y = local_38 - dVar4;
  local_58._s_0.X = local_40 - dVar7;
  local_38 = local_38 + dVar4;
  local_res20 = __real_7fefffffffffffff;
  local_40 = local_40 + dVar7;
  local_58._s_0.Z = local_30 - dVar1;
  local_30 = local_30 + dVar1;
  local_res18 = 0.0;
  TIntrRay3AxisAlignedBox3<double>::DoClipping
            (&local_res18,&local_res20,&param_2->Origin,&param_2->Direction,
             (TAxisAlignedBox3<double> *)&local_58._s_0,true,local_res8,&local_70,&local_88,
             local_res10);
  if (local_res10[0] != Empty) {
    dVar6 = local_res18;
  }
  return dVar6;
}

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 1433648a0

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,TRay<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  int local_res8 [2];
  EIntersectionType local_res10 [2];
  double local_res18;
  double local_res20;
  TVector<double> local_88;
  TVector<double> local_70;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  
  dVar6 = __real_7fefffffffffffff;
  dVar1 = this->BoxEps;
  uVar5 = (ulonglong)(param_1 & 0x1ff);
  local_res10[0] = Empty;
  lVar2 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_40 = *(double *)(lVar2 + uVar5 * 0x18);
  lVar3 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_30 = *(double *)(lVar2 + 0x10 + uVar5 * 0x18);
  local_38 = *(double *)(lVar2 + 8 + uVar5 * 0x18);
  dVar4 = dVar1 + *(double *)(lVar3 + 8 + uVar5 * 0x18);
  dVar7 = dVar1 + *(double *)(lVar3 + uVar5 * 0x18);
  dVar1 = dVar1 + *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
  local_58._s_0.Y = local_38 - dVar4;
  local_58._s_0.X = local_40 - dVar7;
  local_38 = local_38 + dVar4;
  local_res20 = __real_7fefffffffffffff;
  local_40 = local_40 + dVar7;
  local_58._s_0.Z = local_30 - dVar1;
  local_30 = local_30 + dVar1;
  local_res18 = 0.0;
  TIntrRay3AxisAlignedBox3<double>::DoClipping
            (&local_res18,&local_res20,&param_2->Origin,&param_2->Direction,
             (TAxisAlignedBox3<double> *)&local_58._s_0,true,local_res8,&local_70,&local_88,
             local_res10);
  if (local_res10[0] != Empty) {
    dVar6 = local_res18;
  }
  return dVar6;
}

// find_nearest_tri<1> @ 143364a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
find_nearest_tri<1>(void *this,int param_1,TVector<double> *param_2,double *param_3,int *param_4,
                   FQueryOptions *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  undefined1 auStackY_1a8 [32];
  int local_178 [2];
  ulonglong local_170;
  int *local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 TStack_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168 = param_4;
  uVar13 = *(uint *)(*(longlong *)
                      (*(longlong *)((longlong)this + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                    (ulonglong)(param_1 & 0x1ff) * 4);
  local_170 = (ulonglong)uVar13;
  lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar13 >> 9) * 8);
  if (*(int *)((longlong)this + 0xb8) <= (int)uVar13) {
    uVar11 = *(uint *)(lVar2 + (ulonglong)(uVar13 & 0x1ff) * 4);
    if ((int)uVar11 < 0) {
      uVar11 = ~uVar11;
      dVar5 = BoxDistanceSqr(this,uVar11,param_2);
      if (*param_3 <= dVar5 && dVar5 != *param_3) {
        return false;
      }
    }
    else {
      iVar12 = uVar11 - 1;
      uVar11 = *(int *)(*(longlong *)
                         (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                       (ulonglong)(uVar13 + 1 & 0x1ff) * 4) - 1;
      pTVar14 = param_2;
      dVar5 = BoxDistanceSqr(this,iVar12,param_2);
      dVar6 = BoxDistanceSqr(this,uVar11,pTVar14);
      if (dVar6 <= dVar5) {
        if (*param_3 <= dVar6) {
          return false;
        }
        bVar8 = find_nearest_tri<1>(this,uVar11,pTVar14,param_3,param_4,param_5);
        if (!bVar8) {
          if (*param_3 <= dVar5) {
            return false;
          }
          bVar8 = find_nearest_tri<1>(this,iVar12,param_2,param_3,param_4,param_5);
          return bVar8;
        }
        return true;
      }
      if (*param_3 <= dVar5) {
        return false;
      }
      bVar8 = find_nearest_tri<1>(this,iVar12,pTVar14,param_3,param_4,param_5);
      if (bVar8) {
        return true;
      }
      if (*param_3 <= dVar6) {
        return false;
      }
    }
    bVar8 = find_nearest_tri<1>(this,uVar11,param_2,param_3,param_4,param_5);
    if (!bVar8) {
      return false;
    }
    return true;
  }
  iVar12 = *(int *)(lVar2 + (ulonglong)(uVar13 & 0x1ff) * 4);
  if (iVar12 < 1) {
    return false;
  }
  uVar13 = uVar13 + 1;
  do {
    iVar1 = *(int *)(*(longlong *)
                      (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar13 >> 9) * 8) +
                    (ulonglong)(uVar13 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_143364b2c:
      `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
                (*(void **)((longlong)this + 8),iVar1,(TVector<double> *)&local_158._s_0,
                 (TVector<double> *)&TStack_140._s_0,(TVector<double> *)&local_128._s_0);
      local_108._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_108._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_108._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_f0 = local_158._s_0.X;
      dStack_e8 = local_158._s_0.Y;
      local_d0 = TStack_140._s_0.Y;
      dStack_c8 = TStack_140._s_0.Z;
      local_e0 = local_158._s_0.Z;
      dStack_d8 = TStack_140._s_0.X;
      local_b0 = local_128._s_0.Z;
      local_c0 = local_128._s_0.X;
      dStack_b8 = local_128._s_0.Y;
      dVar5 = TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_108._s_0);
      if (dVar5 < *param_3) {
        *param_3 = dVar5;
        *local_168 = iVar1;
        return true;
      }
    }
    else {
      local_178[0] = iVar1;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar3 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar4 = *(code **)&param_5->TriangleFilterF;
      plVar10 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar10 = plVar3;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      cVar7 = (*pcVar4)(uVar9,local_178);
      if (cVar7 != '\0') goto LAB_143364b2c;
    }
    uVar13 = uVar13 + 1;
    if (iVar12 < (int)(uVar13 - (int)local_170)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<1> @ 143364d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_nearest_tri<1>
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,TVector<double> *param_2,
          double *param_3,int *param_4,FQueryOptions *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStackY_1a8 [32];
  int local_178 [2];
  ulonglong local_170;
  int *local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 TStack_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168 = param_4;
  pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar14 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_170 = (ulonglong)uVar14;
  lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar14 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar14) {
    uVar12 = *(uint *)(lVar3 + (ulonglong)(uVar14 & 0x1ff) * 4);
    if ((int)uVar12 < 0) {
      uVar12 = ~uVar12;
      dVar6 = BoxDistanceSqr(this,uVar12,param_2);
      if (*param_3 <= dVar6 && dVar6 != *param_3) {
        return false;
      }
    }
    else {
      iVar13 = uVar12 - 1;
      uVar12 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
      dVar6 = BoxDistanceSqr(this,iVar13,param_2);
      dVar7 = BoxDistanceSqr(this,uVar12,param_2);
      if (dVar7 <= dVar6) {
        if (*param_3 <= dVar7) {
          return false;
        }
        bVar9 = find_nearest_tri<1>(this,uVar12,param_2,param_3,param_4,param_5);
        if (!bVar9) {
          if (*param_3 <= dVar6) {
            return false;
          }
          bVar9 = find_nearest_tri<1>(this,iVar13,param_2,param_3,param_4,param_5);
          return bVar9;
        }
        return true;
      }
      if (*param_3 <= dVar6) {
        return false;
      }
      bVar9 = find_nearest_tri<1>(this,iVar13,param_2,param_3,param_4,param_5);
      if (bVar9) {
        return true;
      }
      if (*param_3 <= dVar7) {
        return false;
      }
    }
    bVar9 = find_nearest_tri<1>(this,uVar12,param_2,param_3,param_4,param_5);
    if (!bVar9) {
      return false;
    }
    return true;
  }
  iVar13 = *(int *)(lVar3 + (ulonglong)(uVar14 & 0x1ff) * 4);
  if (iVar13 < 1) {
    return false;
  }
  uVar14 = uVar14 + 1;
  do {
    iVar1 = *(int *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_143364e4c:
      FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this->Mesh,iVar1,(TVector<double> *)&local_158._s_0,
                 (TVector<double> *)&TStack_140._s_0,(TVector<double> *)&local_128._s_0);
      local_108._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_108._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_108._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_f0 = local_158._s_0.X;
      dStack_e8 = local_158._s_0.Y;
      local_d0 = TStack_140._s_0.Y;
      dStack_c8 = TStack_140._s_0.Z;
      local_e0 = local_158._s_0.Z;
      dStack_d8 = TStack_140._s_0.X;
      local_b0 = local_128._s_0.Z;
      local_c0 = local_128._s_0.X;
      dStack_b8 = local_128._s_0.Y;
      dVar6 = TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_108._s_0);
      if (dVar6 < *param_3) {
        *param_3 = dVar6;
        *local_168 = iVar1;
        return true;
      }
    }
    else {
      local_178[0] = iVar1;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar4 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar5 = *(code **)&param_5->TriangleFilterF;
      plVar11 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar11 = plVar4;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      cVar8 = (*pcVar5)(uVar10,local_178);
      if (cVar8 != '\0') goto LAB_143364e4c;
    }
    uVar14 = uVar14 + 1;
    if (iVar13 < (int)(uVar14 - (int)local_170)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<0> @ 143365070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
find_nearest_tri<0>(void *this,int param_1,TVector<double> *param_2,double *param_3,int *param_4,
                   FQueryOptions *param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  TVector<double> *pTVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStackY_198 [32];
  int local_168 [2];
  int *local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 TStack_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_160 = param_4;
  uVar1 = *(uint *)(*(longlong *)
                     (*(longlong *)((longlong)this + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                   (ulonglong)(param_1 & 0x1ff) * 4);
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar1 >> 9) * 8);
  if ((int)uVar1 < *(int *)((longlong)this + 0xb8)) {
    uVar2 = *(uint *)(lVar3 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (0 < (int)uVar2) {
      uVar13 = (ulonglong)uVar2;
      do {
        uVar1 = uVar1 + 1;
        iVar14 = *(int *)(*(longlong *)
                           (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14336516c:
          `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
                    (*(void **)((longlong)this + 8),iVar14,(TVector<double> *)&local_158._s_0,
                     (TVector<double> *)&TStack_140._s_0,(TVector<double> *)&local_128._s_0);
          local_108._s_0.X = (param_2->field0_0x0)._s_0.X;
          local_108._s_0.Y = (param_2->field0_0x0)._s_0.Y;
          local_108._s_0.Z = (param_2->field0_0x0)._s_0.Z;
          local_f0 = local_158._s_0.X;
          dStack_e8 = local_158._s_0.Y;
          local_d0 = TStack_140._s_0.Y;
          dStack_c8 = TStack_140._s_0.Z;
          local_e0 = local_158._s_0.Z;
          dStack_d8 = TStack_140._s_0.X;
          local_b0 = local_128._s_0.Z;
          local_c0 = local_128._s_0.X;
          dStack_b8 = local_128._s_0.Y;
          dVar6 = TDistPoint3Triangle3<double>::ComputeResult
                            ((TDistPoint3Triangle3<double> *)&local_108._s_0);
          if (dVar6 < *param_3) {
            *param_3 = dVar6;
            *local_160 = iVar14;
          }
        }
        else {
          local_168[0] = iVar14;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar4 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar5 = *(code **)&param_5->TriangleFilterF;
          plVar10 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar4 != (longlong *)0x0) {
            plVar10 = plVar4;
          }
          uVar9 = (**(code **)(*plVar10 + 8))();
          cVar8 = (*pcVar5)(uVar9,local_168);
          if (cVar8 != '\0') goto LAB_14336516c;
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(lVar3 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if ((int)uVar2 < 0) {
      dVar6 = BoxDistanceSqr(this,~uVar2,param_2);
      if (dVar6 < *param_3 || dVar6 == *param_3) {
        find_nearest_tri<0>(this,~uVar2,param_2,param_3,param_4,param_5);
      }
    }
    else {
      iVar11 = uVar2 - 1;
      iVar14 = *(int *)(*(longlong *)
                         (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                       (ulonglong)(uVar1 + 1 & 0x1ff) * 4) + -1;
      pTVar12 = param_2;
      dVar6 = BoxDistanceSqr(this,iVar11,param_2);
      dVar7 = BoxDistanceSqr(this,iVar14,pTVar12);
      if (dVar7 <= dVar6) {
        if (*param_3 <= dVar7) {
          return false;
        }
        find_nearest_tri<0>(this,iVar14,pTVar12,param_3,param_4,param_5);
        iVar14 = iVar11;
        if (*param_3 <= dVar6) {
          return false;
        }
      }
      else {
        if (*param_3 <= dVar6) {
          return false;
        }
        find_nearest_tri<0>(this,iVar11,pTVar12,param_3,param_4,param_5);
        if (*param_3 <= dVar7) {
          return false;
        }
      }
      find_nearest_tri<0>(this,iVar14,param_2,param_3,param_4,param_5);
    }
  }
  return false;
}

// find_nearest_tri<0> @ 143365360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_nearest_tri<0>
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,TVector<double> *param_2,
          double *param_3,int *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStackY_198 [32];
  int local_168 [2];
  int *local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 TStack_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_160 = param_4;
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar1 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar1 >> 9) * 8);
  if ((int)uVar1 < this->TrianglesEnd) {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (0 < (int)uVar2) {
      uVar13 = (ulonglong)uVar2;
      do {
        uVar1 = uVar1 + 1;
        iVar14 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14336545c:
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (this->Mesh,iVar14,(TVector<double> *)&local_158._s_0,
                     (TVector<double> *)&TStack_140._s_0,(TVector<double> *)&local_128._s_0);
          local_108._s_0.X = (param_2->field0_0x0)._s_0.X;
          local_108._s_0.Y = (param_2->field0_0x0)._s_0.Y;
          local_108._s_0.Z = (param_2->field0_0x0)._s_0.Z;
          local_f0 = local_158._s_0.X;
          dStack_e8 = local_158._s_0.Y;
          local_d0 = TStack_140._s_0.Y;
          dStack_c8 = TStack_140._s_0.Z;
          local_e0 = local_158._s_0.Z;
          dStack_d8 = TStack_140._s_0.X;
          local_b0 = local_128._s_0.Z;
          local_c0 = local_128._s_0.X;
          dStack_b8 = local_128._s_0.Y;
          dVar7 = TDistPoint3Triangle3<double>::ComputeResult
                            ((TDistPoint3Triangle3<double> *)&local_108._s_0);
          if (dVar7 < *param_3) {
            *param_3 = dVar7;
            *local_160 = iVar14;
          }
        }
        else {
          local_168[0] = iVar14;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_5->TriangleFilterF;
          plVar11 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar11 = plVar5;
          }
          uVar10 = (**(code **)(*plVar11 + 8))();
          cVar9 = (*pcVar6)(uVar10,local_168);
          if (cVar9 != '\0') goto LAB_14336545c;
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if ((int)uVar2 < 0) {
      dVar7 = BoxDistanceSqr(this,~uVar2,param_2);
      if (dVar7 < *param_3 || dVar7 == *param_3) {
        find_nearest_tri<0>(this,~uVar2,param_2,param_3,param_4,param_5);
      }
    }
    else {
      iVar12 = uVar2 - 1;
      iVar14 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                       (ulonglong)(uVar1 + 1 & 0x1ff) * 4) + -1;
      dVar7 = BoxDistanceSqr(this,iVar12,param_2);
      dVar8 = BoxDistanceSqr(this,iVar14,param_2);
      if (dVar8 <= dVar7) {
        if (*param_3 <= dVar8) {
          return false;
        }
        find_nearest_tri<0>(this,iVar14,param_2,param_3,param_4,param_5);
        iVar14 = iVar12;
        if (*param_3 <= dVar7) {
          return false;
        }
      }
      else {
        if (*param_3 <= dVar7) {
          return false;
        }
        find_nearest_tri<0>(this,iVar12,param_2,param_3,param_4,param_5);
        if (*param_3 <= dVar8) {
          return false;
        }
      }
      find_nearest_tri<0>(this,iVar14,param_2,param_3,param_4,param_5);
    }
  }
  return false;
}

// ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3> @ 143369b00

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  TDynamicVector<int,512>::Empty(&this->IndexList,0);
  pFVar1 = (this->IndexList).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&this->BoxExtents,0);
  pFVar1 = (this->BoxExtents).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&this->BoxCenters,0);
  pFVar1 = (this->BoxCenters).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<int,512>::Empty(&this->BoxToIndex,0);
  pFVar1 = (this->BoxToIndex).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->GetSplitAxis != 0) {
    plVar2 = *(longlong **)&(this->GetSplitAxis).field_0x28;
    plVar3 = (longlong *)&(this->GetSplitAxis).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// operator() @ 1433710b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
TestSelfIntersection'::__l2::<lambda_1>::operator()
          (void *this,TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  undefined1 auStack_d8 [32];
  TVector<double>_u_0 local_b8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8._s_0.X = (param_1->Triangle1).V[0].field0_0x0._s_0.X;
  local_b8._s_0.Y = (param_1->Triangle1).V[0].field0_0x0._s_0.Y;
  local_b8._s_0.Z = (param_1->Triangle1).V[0].field0_0x0._s_0.Z;
  dStack_a0 = (param_1->Triangle1).V[1].field0_0x0._s_0.X;
  local_98 = (param_1->Triangle1).V[1].field0_0x0._s_0.Y;
  dStack_90 = (param_1->Triangle1).V[1].field0_0x0._s_0.Z;
  local_88 = (param_1->Triangle1).V[2].field0_0x0._s_0.X;
  dStack_80 = (param_1->Triangle1).V[2].field0_0x0._s_0.Y;
  local_78 = (param_1->Triangle1).V[2].field0_0x0._s_0.Z;
  local_68._s_0.X = (param_1->Triangle0).V[0].field0_0x0._s_0.X;
  local_68._s_0.Y = (param_1->Triangle0).V[0].field0_0x0._s_0.Y;
  local_68._s_0.Z = (param_1->Triangle0).V[0].field0_0x0._s_0.Z;
  dStack_50 = (param_1->Triangle0).V[1].field0_0x0._s_0.X;
  local_48 = (param_1->Triangle0).V[1].field0_0x0._s_0.Y;
  dStack_40 = (param_1->Triangle0).V[1].field0_0x0._s_0.Z;
  local_38 = (param_1->Triangle0).V[2].field0_0x0._s_0.X;
  dStack_30 = (param_1->Triangle0).V[2].field0_0x0._s_0.Y;
  local_28 = (param_1->Triangle0).V[2].field0_0x0._s_0.Z;
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    ((TTriangle3<double> *)&local_68._s_0,(TTriangle3<double> *)&local_b8._s_0,
                     __real_3e45798ee2308c3a);
  param_1->Quantity = 0;
  param_1->Result = (bVar1 ^ 1) + Intersects;
  param_1->Type = -(uint)bVar1 & Unknown;
  return bVar1;
}

// operator() @ 143371190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestSelfIntersection'::__l2::<lambda_1>
::operator()(void *this,TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  undefined1 auStack_d8 [32];
  TVector<double>_u_0 local_b8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8._s_0.X = (param_1->Triangle1).V[0].field0_0x0._s_0.X;
  local_b8._s_0.Y = (param_1->Triangle1).V[0].field0_0x0._s_0.Y;
  local_b8._s_0.Z = (param_1->Triangle1).V[0].field0_0x0._s_0.Z;
  dStack_a0 = (param_1->Triangle1).V[1].field0_0x0._s_0.X;
  local_98 = (param_1->Triangle1).V[1].field0_0x0._s_0.Y;
  dStack_90 = (param_1->Triangle1).V[1].field0_0x0._s_0.Z;
  local_88 = (param_1->Triangle1).V[2].field0_0x0._s_0.X;
  dStack_80 = (param_1->Triangle1).V[2].field0_0x0._s_0.Y;
  local_78 = (param_1->Triangle1).V[2].field0_0x0._s_0.Z;
  local_68._s_0.X = (param_1->Triangle0).V[0].field0_0x0._s_0.X;
  local_68._s_0.Y = (param_1->Triangle0).V[0].field0_0x0._s_0.Y;
  local_68._s_0.Z = (param_1->Triangle0).V[0].field0_0x0._s_0.Z;
  dStack_50 = (param_1->Triangle0).V[1].field0_0x0._s_0.X;
  local_48 = (param_1->Triangle0).V[1].field0_0x0._s_0.Y;
  dStack_40 = (param_1->Triangle0).V[1].field0_0x0._s_0.Z;
  local_38 = (param_1->Triangle0).V[2].field0_0x0._s_0.X;
  dStack_30 = (param_1->Triangle0).V[2].field0_0x0._s_0.Y;
  local_28 = (param_1->Triangle0).V[2].field0_0x0._s_0.Z;
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    ((TTriangle3<double> *)&local_68._s_0,(TTriangle3<double> *)&local_b8._s_0,
                     __real_3e45798ee2308c3a);
  param_1->Quantity = 0;
  param_1->Result = (bVar1 ^ 1) + Intersects;
  param_1->Type = -(uint)bVar1 & Unknown;
  return bVar1;
}

// AddTriTriIntersectionResult @ 143380080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
AddTriTriIntersectionResult
          (TIntrTriangle3Triangle3<double> *param_1,int param_2,int param_3,
          FIntersectionsQueryResult *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  TArray<MeshIntersection::FSegmentIntersection,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStack_238 [32];
  int *local_218;
  FScriptContainerElement *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  int local_1e8;
  int iStack_1e4;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  int local_1c8;
  int iStack_1c4;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  int local_190;
  int iStack_18c;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  int local_158;
  int iStack_154;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  int local_120;
  int iStack_11c;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  int local_e8;
  int iStack_e4;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  iStack_50 = param_1->Quantity;
  if (iStack_50 == 1) {
    dStack_1e0 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_1d8 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_1d0 = param_1->Points[0].field0_0x0._s_0.Z;
    pFVar7 = (param_4->Points).AllocatorInstance.Data;
    local_1e8 = param_2;
    iStack_1e4 = param_3;
    if ((pFVar7 <= (FScriptContainerElement *)&local_1e8) &&
       (lVar6 = (longlong)(param_4->Points).ArrayMax,
       (FScriptContainerElement *)&local_1e8 < pFVar7 + lVar6 * 0x20)) {
      local_200 = (longlong)(param_4->Points).ArrayNum;
      local_1f8 = 0x20;
      local_218 = &local_1e8;
      local_210 = pFVar7;
      local_208 = lVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_4->Points).ArrayNum;
    piVar1 = &(param_4->Points).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)param_4,piVar1);
    }
    (param_4->Points).ArrayNum = iVar5 + 1;
    pFVar2 = (param_4->Points).AllocatorInstance.Data;
    pFVar7 = pFVar2 + (longlong)iVar5 * 0x20;
    *(ulonglong *)pFVar7 = CONCAT44(iStack_1e4,local_1e8);
    *(double *)(pFVar7 + 8) = dStack_1e0;
    pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
    *(double *)pFVar2 = dStack_1d8;
    *(double *)(pFVar2 + 8) = dStack_1d0;
  }
  else if (iStack_50 == 2) {
    dStack_1c0 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_1b8 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_1b0 = param_1->Points[0].field0_0x0._s_0.Z;
    local_1a8 = param_1->Points[1].field0_0x0._s_0.X;
    dStack_1a0 = param_1->Points[1].field0_0x0._s_0.Y;
    local_198 = param_1->Points[1].field0_0x0._s_0.Z;
    pFVar7 = (param_4->Segments).AllocatorInstance.Data;
    local_1c8 = param_2;
    iStack_1c4 = param_3;
    if ((pFVar7 <= (FScriptContainerElement *)&local_1c8) &&
       (lVar6 = (longlong)(param_4->Segments).ArrayMax,
       (FScriptContainerElement *)&local_1c8 < pFVar7 + lVar6 * 0x38)) {
      local_200 = (longlong)(param_4->Segments).ArrayNum;
      local_1f8 = 0x38;
      local_218 = &local_1c8;
      local_210 = pFVar7;
      local_208 = lVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_4->Segments).ArrayNum;
    piVar1 = &(param_4->Segments).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(param_4->Segments).AllocatorInstance,piVar1);
    }
    (param_4->Segments).ArrayNum = iVar5 + 1;
    lVar6 = (longlong)iVar5 * 0x38;
    pFVar7 = (param_4->Segments).AllocatorInstance.Data;
    *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_1c4,local_1c8);
    *(double *)(pFVar7 + lVar6 + 8) = dStack_1c0;
    *(double *)(pFVar7 + lVar6 + 0x10) = dStack_1b8;
    *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_1b0;
    *(double *)(pFVar7 + lVar6 + 0x20) = local_1a8;
    *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_1a0;
    *(double *)(pFVar7 + lVar6 + 0x30) = local_198;
  }
  else if (2 < iStack_50) {
    dStack_188 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_180 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_178 = param_1->Points[0].field0_0x0._s_0.Z;
    if (param_1->Type == MultiSegment) {
      pTVar8 = &param_4->Segments;
      local_160 = param_1->Points[1].field0_0x0._s_0.Z;
      local_170 = param_1->Points[1].field0_0x0._s_0.X;
      dStack_168 = param_1->Points[1].field0_0x0._s_0.Y;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      local_190 = param_2;
      iStack_18c = param_3;
      if ((pFVar7 <= (FScriptContainerElement *)&local_190) &&
         (lVar6 = (longlong)(param_4->Segments).ArrayMax,
         (FScriptContainerElement *)&local_190 < pFVar7 + lVar6 * 0x38)) {
        local_200 = (longlong)(param_4->Segments).ArrayNum;
        local_1f8 = 0x38;
        local_218 = &local_190;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Segments).ArrayNum;
      if (iVar5 == (param_4->Segments).ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
      }
      (param_4->Segments).ArrayNum = iVar5 + 1;
      lVar6 = (longlong)iVar5 * 0x38;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_18c,local_190);
      *(double *)(pFVar7 + lVar6 + 8) = dStack_188;
      *(double *)(pFVar7 + lVar6 + 0x10) = dStack_180;
      *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_178;
      *(double *)(pFVar7 + lVar6 + 0x20) = local_170;
      *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_168;
      *(double *)(pFVar7 + lVar6 + 0x30) = local_160;
      dStack_150 = param_1->Points[2].field0_0x0._s_0.X;
      dStack_148 = param_1->Points[2].field0_0x0._s_0.Y;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      dStack_140 = param_1->Points[2].field0_0x0._s_0.Z;
      local_128 = param_1->Points[3].field0_0x0._s_0.Z;
      local_138 = param_1->Points[3].field0_0x0._s_0.X;
      dStack_130 = param_1->Points[3].field0_0x0._s_0.Y;
      local_158 = param_2;
      iStack_154 = param_3;
      if ((pFVar7 <= (FScriptContainerElement *)&local_158) &&
         (lVar6 = (longlong)(param_4->Segments).ArrayMax,
         (FScriptContainerElement *)&local_158 < pFVar7 + lVar6 * 0x38)) {
        local_200 = (longlong)(param_4->Segments).ArrayNum;
        local_1f8 = 0x38;
        local_218 = &local_158;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Segments).ArrayNum;
      if (iVar5 == (param_4->Segments).ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
      }
      (param_4->Segments).ArrayNum = iVar5 + 1;
      lVar6 = (longlong)iVar5 * 0x38;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_154,local_158);
      *(double *)(pFVar7 + lVar6 + 8) = dStack_150;
      *(double *)(pFVar7 + lVar6 + 0x10) = dStack_148;
      *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_140;
      *(double *)(pFVar7 + lVar6 + 0x20) = local_138;
      *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_130;
      *(double *)(pFVar7 + lVar6 + 0x30) = local_128;
      if (4 < param_1->Quantity) {
        dStack_118 = param_1->Points[4].field0_0x0._s_0.X;
        dStack_110 = param_1->Points[4].field0_0x0._s_0.Y;
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        dStack_108 = param_1->Points[4].field0_0x0._s_0.Z;
        local_f0 = param_1->Points[5].field0_0x0._s_0.Z;
        local_100 = param_1->Points[5].field0_0x0._s_0.X;
        dStack_f8 = param_1->Points[5].field0_0x0._s_0.Y;
        local_120 = param_2;
        iStack_11c = param_3;
        if ((pFVar7 <= (FScriptContainerElement *)&local_120) &&
           (lVar6 = (longlong)(param_4->Segments).ArrayMax,
           (FScriptContainerElement *)&local_120 < pFVar7 + lVar6 * 0x38)) {
          local_200 = (longlong)(param_4->Segments).ArrayNum;
          local_1f8 = 0x38;
          local_218 = &local_120;
          local_210 = pFVar7;
          local_208 = lVar6;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = (param_4->Segments).ArrayNum;
        if (iVar5 == (param_4->Segments).ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
        }
        (param_4->Segments).ArrayNum = iVar5 + 1;
        lVar6 = (longlong)iVar5 * 0x38;
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_11c,local_120);
        *(double *)(pFVar7 + lVar6 + 8) = dStack_118;
        *(double *)(pFVar7 + lVar6 + 0x10) = dStack_110;
        *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_108;
        *(double *)(pFVar7 + lVar6 + 0x20) = local_100;
        *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_f8;
        *(double *)(pFVar7 + lVar6 + 0x30) = local_f0;
      }
    }
    else {
      pFVar7 = (param_4->Polygons).AllocatorInstance.Data;
      local_b8 = param_1->Points[1].field0_0x0._s_0.Z;
      dStack_a0 = param_1->Points[2].field0_0x0._s_0.Z;
      local_88 = param_1->Points[3].field0_0x0._s_0.Z;
      dStack_70 = param_1->Points[4].field0_0x0._s_0.Z;
      local_58 = param_1->Points[5].field0_0x0._s_0.Z;
      local_c8 = param_1->Points[1].field0_0x0._s_0.X;
      dStack_c0 = param_1->Points[1].field0_0x0._s_0.Y;
      dStack_b0 = param_1->Points[2].field0_0x0._s_0.X;
      dStack_a8 = param_1->Points[2].field0_0x0._s_0.Y;
      local_98 = param_1->Points[3].field0_0x0._s_0.X;
      dStack_90 = param_1->Points[3].field0_0x0._s_0.Y;
      dStack_80 = param_1->Points[4].field0_0x0._s_0.X;
      dStack_78 = param_1->Points[4].field0_0x0._s_0.Y;
      local_68 = param_1->Points[5].field0_0x0._s_0.X;
      dStack_60 = param_1->Points[5].field0_0x0._s_0.Y;
      local_e8 = param_2;
      iStack_e4 = param_3;
      dStack_e0 = dStack_188;
      dStack_d8 = dStack_180;
      dStack_d0 = dStack_178;
      if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
         (lVar6 = (longlong)(param_4->Polygons).ArrayMax,
         (FScriptContainerElement *)&local_e8 < pFVar7 + lVar6 * 0xa0)) {
        local_200 = (longlong)(param_4->Polygons).ArrayNum;
        local_1f8 = 0xa0;
        local_218 = &local_e8;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Polygons).ArrayNum;
      piVar1 = &(param_4->Polygons).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a0,&(param_4->Polygons).AllocatorInstance,piVar1);
      }
      (param_4->Polygons).ArrayNum = iVar5 + 1;
      pFVar7 = (param_4->Polygons).AllocatorInstance.Data + (longlong)iVar5 * 0xa0;
      *(ulonglong *)pFVar7 = CONCAT44(iStack_e4,local_e8);
      *(double *)(pFVar7 + 8) = dStack_e0;
      *(double *)(pFVar7 + 0x10) = dStack_d8;
      *(double *)(pFVar7 + 0x18) = dStack_d0;
      *(double *)(pFVar7 + 0x20) = local_c8;
      *(double *)(pFVar7 + 0x28) = dStack_c0;
      *(double *)(pFVar7 + 0x30) = local_b8;
      *(double *)(pFVar7 + 0x38) = dStack_b0;
      *(double *)(pFVar7 + 0x40) = dStack_a8;
      *(double *)(pFVar7 + 0x48) = dStack_a0;
      *(double *)(pFVar7 + 0x50) = local_98;
      *(double *)(pFVar7 + 0x58) = dStack_90;
      *(double *)(pFVar7 + 0x60) = local_88;
      *(double *)(pFVar7 + 0x68) = dStack_80;
      *(double *)(pFVar7 + 0x70) = dStack_78;
      *(double *)(pFVar7 + 0x78) = dStack_70;
      *(double *)(pFVar7 + 0x80) = local_68;
      *(double *)(pFVar7 + 0x88) = dStack_60;
      *(double *)(pFVar7 + 0x90) = local_58;
      *(ulonglong *)(pFVar7 + 0x98) = CONCAT44(uStack_4c,iStack_50);
    }
  }
  return;
}

// AddTriTriIntersectionResult @ 143380780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::AddTriTriIntersectionResult
          (TIntrTriangle3Triangle3<double> *param_1,int param_2,int param_3,
          FIntersectionsQueryResult *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  TArray<MeshIntersection::FSegmentIntersection,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStack_238 [32];
  int *local_218;
  FScriptContainerElement *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  int local_1e8;
  int iStack_1e4;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  int local_1c8;
  int iStack_1c4;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  int local_190;
  int iStack_18c;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  int local_158;
  int iStack_154;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  int local_120;
  int iStack_11c;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  int local_e8;
  int iStack_e4;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  iStack_50 = param_1->Quantity;
  if (iStack_50 == 1) {
    dStack_1e0 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_1d8 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_1d0 = param_1->Points[0].field0_0x0._s_0.Z;
    pFVar7 = (param_4->Points).AllocatorInstance.Data;
    local_1e8 = param_2;
    iStack_1e4 = param_3;
    if ((pFVar7 <= (FScriptContainerElement *)&local_1e8) &&
       (lVar6 = (longlong)(param_4->Points).ArrayMax,
       (FScriptContainerElement *)&local_1e8 < pFVar7 + lVar6 * 0x20)) {
      local_200 = (longlong)(param_4->Points).ArrayNum;
      local_1f8 = 0x20;
      local_218 = &local_1e8;
      local_210 = pFVar7;
      local_208 = lVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_4->Points).ArrayNum;
    piVar1 = &(param_4->Points).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)param_4,piVar1);
    }
    (param_4->Points).ArrayNum = iVar5 + 1;
    pFVar2 = (param_4->Points).AllocatorInstance.Data;
    pFVar7 = pFVar2 + (longlong)iVar5 * 0x20;
    *(ulonglong *)pFVar7 = CONCAT44(iStack_1e4,local_1e8);
    *(double *)(pFVar7 + 8) = dStack_1e0;
    pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
    *(double *)pFVar2 = dStack_1d8;
    *(double *)(pFVar2 + 8) = dStack_1d0;
  }
  else if (iStack_50 == 2) {
    dStack_1c0 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_1b8 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_1b0 = param_1->Points[0].field0_0x0._s_0.Z;
    local_1a8 = param_1->Points[1].field0_0x0._s_0.X;
    dStack_1a0 = param_1->Points[1].field0_0x0._s_0.Y;
    local_198 = param_1->Points[1].field0_0x0._s_0.Z;
    pFVar7 = (param_4->Segments).AllocatorInstance.Data;
    local_1c8 = param_2;
    iStack_1c4 = param_3;
    if ((pFVar7 <= (FScriptContainerElement *)&local_1c8) &&
       (lVar6 = (longlong)(param_4->Segments).ArrayMax,
       (FScriptContainerElement *)&local_1c8 < pFVar7 + lVar6 * 0x38)) {
      local_200 = (longlong)(param_4->Segments).ArrayNum;
      local_1f8 = 0x38;
      local_218 = &local_1c8;
      local_210 = pFVar7;
      local_208 = lVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_4->Segments).ArrayNum;
    piVar1 = &(param_4->Segments).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(param_4->Segments).AllocatorInstance,piVar1);
    }
    (param_4->Segments).ArrayNum = iVar5 + 1;
    lVar6 = (longlong)iVar5 * 0x38;
    pFVar7 = (param_4->Segments).AllocatorInstance.Data;
    *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_1c4,local_1c8);
    *(double *)(pFVar7 + lVar6 + 8) = dStack_1c0;
    *(double *)(pFVar7 + lVar6 + 0x10) = dStack_1b8;
    *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_1b0;
    *(double *)(pFVar7 + lVar6 + 0x20) = local_1a8;
    *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_1a0;
    *(double *)(pFVar7 + lVar6 + 0x30) = local_198;
  }
  else if (2 < iStack_50) {
    dStack_188 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_180 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_178 = param_1->Points[0].field0_0x0._s_0.Z;
    if (param_1->Type == MultiSegment) {
      pTVar8 = &param_4->Segments;
      local_160 = param_1->Points[1].field0_0x0._s_0.Z;
      local_170 = param_1->Points[1].field0_0x0._s_0.X;
      dStack_168 = param_1->Points[1].field0_0x0._s_0.Y;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      local_190 = param_2;
      iStack_18c = param_3;
      if ((pFVar7 <= (FScriptContainerElement *)&local_190) &&
         (lVar6 = (longlong)(param_4->Segments).ArrayMax,
         (FScriptContainerElement *)&local_190 < pFVar7 + lVar6 * 0x38)) {
        local_200 = (longlong)(param_4->Segments).ArrayNum;
        local_1f8 = 0x38;
        local_218 = &local_190;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Segments).ArrayNum;
      if (iVar5 == (param_4->Segments).ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
      }
      (param_4->Segments).ArrayNum = iVar5 + 1;
      lVar6 = (longlong)iVar5 * 0x38;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_18c,local_190);
      *(double *)(pFVar7 + lVar6 + 8) = dStack_188;
      *(double *)(pFVar7 + lVar6 + 0x10) = dStack_180;
      *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_178;
      *(double *)(pFVar7 + lVar6 + 0x20) = local_170;
      *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_168;
      *(double *)(pFVar7 + lVar6 + 0x30) = local_160;
      dStack_150 = param_1->Points[2].field0_0x0._s_0.X;
      dStack_148 = param_1->Points[2].field0_0x0._s_0.Y;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      dStack_140 = param_1->Points[2].field0_0x0._s_0.Z;
      local_128 = param_1->Points[3].field0_0x0._s_0.Z;
      local_138 = param_1->Points[3].field0_0x0._s_0.X;
      dStack_130 = param_1->Points[3].field0_0x0._s_0.Y;
      local_158 = param_2;
      iStack_154 = param_3;
      if ((pFVar7 <= (FScriptContainerElement *)&local_158) &&
         (lVar6 = (longlong)(param_4->Segments).ArrayMax,
         (FScriptContainerElement *)&local_158 < pFVar7 + lVar6 * 0x38)) {
        local_200 = (longlong)(param_4->Segments).ArrayNum;
        local_1f8 = 0x38;
        local_218 = &local_158;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Segments).ArrayNum;
      if (iVar5 == (param_4->Segments).ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
      }
      (param_4->Segments).ArrayNum = iVar5 + 1;
      lVar6 = (longlong)iVar5 * 0x38;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_154,local_158);
      *(double *)(pFVar7 + lVar6 + 8) = dStack_150;
      *(double *)(pFVar7 + lVar6 + 0x10) = dStack_148;
      *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_140;
      *(double *)(pFVar7 + lVar6 + 0x20) = local_138;
      *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_130;
      *(double *)(pFVar7 + lVar6 + 0x30) = local_128;
      if (4 < param_1->Quantity) {
        dStack_118 = param_1->Points[4].field0_0x0._s_0.X;
        dStack_110 = param_1->Points[4].field0_0x0._s_0.Y;
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        dStack_108 = param_1->Points[4].field0_0x0._s_0.Z;
        local_f0 = param_1->Points[5].field0_0x0._s_0.Z;
        local_100 = param_1->Points[5].field0_0x0._s_0.X;
        dStack_f8 = param_1->Points[5].field0_0x0._s_0.Y;
        local_120 = param_2;
        iStack_11c = param_3;
        if ((pFVar7 <= (FScriptContainerElement *)&local_120) &&
           (lVar6 = (longlong)(param_4->Segments).ArrayMax,
           (FScriptContainerElement *)&local_120 < pFVar7 + lVar6 * 0x38)) {
          local_200 = (longlong)(param_4->Segments).ArrayNum;
          local_1f8 = 0x38;
          local_218 = &local_120;
          local_210 = pFVar7;
          local_208 = lVar6;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = (param_4->Segments).ArrayNum;
        if (iVar5 == (param_4->Segments).ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
        }
        (param_4->Segments).ArrayNum = iVar5 + 1;
        lVar6 = (longlong)iVar5 * 0x38;
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_11c,local_120);
        *(double *)(pFVar7 + lVar6 + 8) = dStack_118;
        *(double *)(pFVar7 + lVar6 + 0x10) = dStack_110;
        *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_108;
        *(double *)(pFVar7 + lVar6 + 0x20) = local_100;
        *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_f8;
        *(double *)(pFVar7 + lVar6 + 0x30) = local_f0;
      }
    }
    else {
      pFVar7 = (param_4->Polygons).AllocatorInstance.Data;
      local_b8 = param_1->Points[1].field0_0x0._s_0.Z;
      dStack_a0 = param_1->Points[2].field0_0x0._s_0.Z;
      local_88 = param_1->Points[3].field0_0x0._s_0.Z;
      dStack_70 = param_1->Points[4].field0_0x0._s_0.Z;
      local_58 = param_1->Points[5].field0_0x0._s_0.Z;
      local_c8 = param_1->Points[1].field0_0x0._s_0.X;
      dStack_c0 = param_1->Points[1].field0_0x0._s_0.Y;
      dStack_b0 = param_1->Points[2].field0_0x0._s_0.X;
      dStack_a8 = param_1->Points[2].field0_0x0._s_0.Y;
      local_98 = param_1->Points[3].field0_0x0._s_0.X;
      dStack_90 = param_1->Points[3].field0_0x0._s_0.Y;
      dStack_80 = param_1->Points[4].field0_0x0._s_0.X;
      dStack_78 = param_1->Points[4].field0_0x0._s_0.Y;
      local_68 = param_1->Points[5].field0_0x0._s_0.X;
      dStack_60 = param_1->Points[5].field0_0x0._s_0.Y;
      local_e8 = param_2;
      iStack_e4 = param_3;
      dStack_e0 = dStack_188;
      dStack_d8 = dStack_180;
      dStack_d0 = dStack_178;
      if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
         (lVar6 = (longlong)(param_4->Polygons).ArrayMax,
         (FScriptContainerElement *)&local_e8 < pFVar7 + lVar6 * 0xa0)) {
        local_200 = (longlong)(param_4->Polygons).ArrayNum;
        local_1f8 = 0xa0;
        local_218 = &local_e8;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Polygons).ArrayNum;
      piVar1 = &(param_4->Polygons).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a0,&(param_4->Polygons).AllocatorInstance,piVar1);
      }
      (param_4->Polygons).ArrayNum = iVar5 + 1;
      pFVar7 = (param_4->Polygons).AllocatorInstance.Data + (longlong)iVar5 * 0xa0;
      *(ulonglong *)pFVar7 = CONCAT44(iStack_e4,local_e8);
      *(double *)(pFVar7 + 8) = dStack_e0;
      *(double *)(pFVar7 + 0x10) = dStack_d8;
      *(double *)(pFVar7 + 0x18) = dStack_d0;
      *(double *)(pFVar7 + 0x20) = local_c8;
      *(double *)(pFVar7 + 0x28) = dStack_c0;
      *(double *)(pFVar7 + 0x30) = local_b8;
      *(double *)(pFVar7 + 0x38) = dStack_b0;
      *(double *)(pFVar7 + 0x40) = dStack_a8;
      *(double *)(pFVar7 + 0x48) = dStack_a0;
      *(double *)(pFVar7 + 0x50) = local_98;
      *(double *)(pFVar7 + 0x58) = dStack_90;
      *(double *)(pFVar7 + 0x60) = local_88;
      *(double *)(pFVar7 + 0x68) = dStack_80;
      *(double *)(pFVar7 + 0x70) = dStack_78;
      *(double *)(pFVar7 + 0x78) = dStack_70;
      *(double *)(pFVar7 + 0x80) = local_68;
      *(double *)(pFVar7 + 0x88) = dStack_60;
      *(double *)(pFVar7 + 0x90) = local_58;
      *(ulonglong *)(pFVar7 + 0x98) = CONCAT44(uStack_4c,iStack_50);
    }
  }
  return;
}

// BoxDistanceSqr @ 1433896e0

double __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
BoxDistanceSqr(void *this,int param_1,TVector<double> *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = (ulonglong)(param_1 & 0x1ff);
  lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar5 = (param_2->field0_0x0)._s_0.X - *(double *)(lVar1 + uVar2 * 0x18);
  dVar4 = (param_2->field0_0x0)._s_0.Y - *(double *)(lVar1 + 8 + uVar2 * 0x18);
  dVar3 = (param_2->field0_0x0)._s_0.Z - *(double *)(lVar1 + 0x10 + uVar2 * 0x18);
  lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + uVar2 * 0x18);
  dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + 8 + uVar2 * 0x18);
  dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + 0x10 + uVar2 * 0x18);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  return dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3;
}

// BoxDistanceSqr @ 143389780

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BoxDistanceSqr
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,TVector<double> *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = (ulonglong)(param_1 & 0x1ff);
  lVar1 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar5 = (param_2->field0_0x0)._s_0.X - *(double *)(lVar1 + uVar2 * 0x18);
  dVar4 = (param_2->field0_0x0)._s_0.Y - *(double *)(lVar1 + 8 + uVar2 * 0x18);
  dVar3 = (param_2->field0_0x0)._s_0.Z - *(double *)(lVar1 + 0x10 + uVar2 * 0x18);
  lVar1 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + uVar2 * 0x18);
  dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + 8 + uVar2 * 0x18);
  dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + 0x10 + uVar2 * 0x18);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  return dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3;
}

// BuildTopDown @ 14338a830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
BuildTopDown(void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
            TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  TDynamicVector<UE::Math::TVector<double>,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *this_01;
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  TDynamicVector<int,512> *this_02;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  FBoxesSet local_168;
  FBoxesSet local_f8;
  ulonglong local_88;
  TVector<double>_u_0 local_80;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  this_00 = &local_f8.BoxExtents;
  uVar17 = 0;
  local_f8.BoxToIndex.CurBlock = 0;
  local_f8.BoxToIndex.CurBlockUsed = 0;
  local_f8.BoxToIndex.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxToIndex.Blocks.ArrayNum = 0;
  local_f8.BoxToIndex.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_f8.BoxToIndex);
  local_f8.BoxCenters.CurBlock = 0;
  local_f8.BoxCenters.CurBlockUsed = 0;
  local_f8.BoxCenters.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxCenters.Blocks.ArrayNum = 0;
  local_f8.BoxCenters.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_f8.BoxCenters);
  local_f8.BoxExtents.CurBlock = 0;
  local_f8.BoxExtents.CurBlockUsed = 0;
  local_f8.BoxExtents.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxExtents.Blocks.ArrayNum = 0;
  local_f8.BoxExtents.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_00);
  local_f8.IndexList.CurBlock = 0;
  local_f8.IndexList.CurBlockUsed = 0;
  local_f8.IndexList.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.IndexList.Blocks.ArrayNum = 0;
  local_f8.IndexList.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_f8.IndexList);
  local_f8.IBoxCur = 0;
  local_f8.IIndicesCur = 0;
  local_168.BoxToIndex.CurBlock = 0;
  local_168.BoxToIndex.CurBlockUsed = 0;
  local_168.BoxToIndex.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxToIndex.Blocks.ArrayNum = 0;
  local_168.BoxToIndex.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_168.BoxToIndex);
  local_168.BoxCenters.CurBlock = 0;
  local_168.BoxCenters.CurBlockUsed = 0;
  local_168.BoxCenters.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxCenters.Blocks.ArrayNum = 0;
  local_168.BoxCenters.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_168.BoxCenters);
  local_168.BoxExtents.CurBlock = 0;
  local_168.BoxExtents.CurBlockUsed = 0;
  local_168.BoxExtents.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxExtents.Blocks.ArrayNum = 0;
  local_168.BoxExtents.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_168.BoxExtents);
  local_168.IndexList.CurBlock = 0;
  local_168.IndexList.CurBlockUsed = 0;
  local_168.IndexList.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.IndexList.Blocks.ArrayNum = 0;
  local_168.IndexList.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_168.IndexList);
  local_168.IBoxCur = 0;
  local_168.IIndicesCur = 0;
  local_80._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_80._s_0.Y = _UNK_150a9e648;
  local_80._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_68 = _UNK_150a9e6d8;
  local_60 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_58 = _UNK_1508ffb58;
  iVar7 = SplitTriSetMidpoint(this,param_1,param_2,0,param_3,0,*(int *)((longlong)this + 0x18),
                              &local_f8,&local_168,(TAxisAlignedBox3<double> *)&local_80._s_0);
  TDynamicVector<int,512>::operator=
            ((TDynamicVector<int,512> *)((longlong)this + 0x58),&local_f8.BoxToIndex);
  TDynamicVector<UE::Math::TVector<double>,512>::operator=
            ((TDynamicVector<UE::Math::TVector<double>,512> *)((longlong)this + 0x70),
             &local_f8.BoxCenters);
  this_01 = (TDynamicVector<UE::Math::TVector<double>,512> *)((longlong)this + 0x88);
  TDynamicVector<UE::Math::TVector<double>,512>::operator=(this_01,this_00);
  TDynamicVector<int,512>::operator=
            ((TDynamicVector<int,512> *)((longlong)this + 0xa0),&local_f8.IndexList);
  uVar11 = local_f8.IIndicesCur;
  iVar6 = local_f8.IBoxCur;
  *(int *)((longlong)this + 0xb8) = local_f8.IIndicesCur;
  uVar10 = local_f8.IBoxCur;
  if (0 < local_168.IBoxCur) {
    do {
      uVar16 = (uint)uVar17;
      uVar8 = (ulonglong)(uVar16 & 0x1ff);
      local_88 = uVar17 >> 9;
      iVar15 = *(int *)((longlong)this + 0x70);
      uVar12 = iVar15 * 0x200 + *(int *)((longlong)this + 0x74);
      uVar2 = *(undefined8 *)
               (*(longlong *)(local_168.BoxCenters.Blocks.AllocatorInstance.Data + local_88 * 8) +
                0x10 + uVar8 * 0x18);
      puVar1 = (undefined8 *)
               (*(longlong *)(local_168.BoxCenters.Blocks.AllocatorInstance.Data + local_88 * 8) +
               uVar8 * 0x18);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      if (uVar10 == uVar12) {
        if (*(int *)((longlong)this + 0x74) == 0x200) {
          if (iVar15 == *(int *)((longlong)this + 0x80) + -1) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock
                      ((TDynamicVector<UE::Math::TVector<double>,512> *)((longlong)this + 0x70));
          }
          *(int *)((longlong)this + 0x70) = *(int *)((longlong)this + 0x70) + 1;
          iVar15 = *(int *)((longlong)this + 0x70);
          *(undefined4 *)((longlong)this + 0x74) = 0;
        }
        iVar14 = *(int *)((longlong)this + 0x74);
        lVar3 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + (longlong)iVar15 * 8);
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar14 * 0x18);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar14 * 0x18) = uVar2;
        *(int *)((longlong)this + 0x74) = *(int *)((longlong)this + 0x74) + 1;
      }
      else if (uVar12 < uVar10) {
        TDynamicVector<UE::Math::TVector<double>,512>::Resize
                  ((TDynamicVector<UE::Math::TVector<double>,512> *)((longlong)this + 0x70),uVar10);
        iVar15 = *(int *)((longlong)this + 0x74);
        if (iVar15 == 0x200) {
          if (*(int *)((longlong)this + 0x70) == *(int *)((longlong)this + 0x80) + -1) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock
                      ((TDynamicVector<UE::Math::TVector<double>,512> *)((longlong)this + 0x70));
          }
          *(int *)((longlong)this + 0x70) = *(int *)((longlong)this + 0x70) + 1;
          iVar15 = 0;
          *(undefined4 *)((longlong)this + 0x74) = 0;
        }
        lVar3 = *(longlong *)
                 (*(longlong *)((longlong)this + 0x78) +
                 (longlong)*(int *)((longlong)this + 0x70) * 8);
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar15 * 0x18);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar15 * 0x18) = uVar2;
        *(int *)((longlong)this + 0x74) = *(int *)((longlong)this + 0x74) + 1;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + (ulonglong)(uVar10 >> 9) * 8);
        puVar1 = (undefined8 *)(lVar3 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18) = uVar2;
      }
      uVar12 = this_01->CurBlock;
      uVar13 = uVar12 * 0x200 + *(int *)((longlong)this + 0x8c);
      uVar2 = *(undefined8 *)
               (*(longlong *)(local_168.BoxExtents.Blocks.AllocatorInstance.Data + local_88 * 8) +
                0x10 + uVar8 * 0x18);
      puVar1 = (undefined8 *)
               (*(longlong *)(local_168.BoxExtents.Blocks.AllocatorInstance.Data + local_88 * 8) +
               uVar8 * 0x18);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      if (uVar10 == uVar13) {
        if (*(int *)((longlong)this + 0x8c) == 0x200) {
          if (uVar12 == *(int *)((longlong)this + 0x98) - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_01);
          }
          this_01->CurBlock = this_01->CurBlock + 1;
          uVar12 = this_01->CurBlock;
          *(undefined4 *)((longlong)this + 0x8c) = 0;
        }
        iVar15 = *(int *)((longlong)this + 0x8c);
        lVar3 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + (longlong)(int)uVar12 * 8);
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar15 * 0x18);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar15 * 0x18) = uVar2;
        *(int *)((longlong)this + 0x8c) = *(int *)((longlong)this + 0x8c) + 1;
      }
      else if (uVar13 < uVar10) {
        TDynamicVector<UE::Math::TVector<double>,512>::Resize(this_01,uVar10);
        iVar15 = *(int *)((longlong)this + 0x8c);
        if (iVar15 == 0x200) {
          if (this_01->CurBlock == *(int *)((longlong)this + 0x98) - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_01);
          }
          this_01->CurBlock = this_01->CurBlock + 1;
          iVar15 = 0;
          *(undefined4 *)((longlong)this + 0x8c) = 0;
        }
        lVar3 = *(longlong *)
                 (*(longlong *)((longlong)this + 0x90) + (longlong)(int)this_01->CurBlock * 8);
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar15 * 0x18);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar15 * 0x18) = uVar2;
        *(int *)((longlong)this + 0x8c) = *(int *)((longlong)this + 0x8c) + 1;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + (ulonglong)(uVar10 >> 9) * 8);
        puVar1 = (undefined8 *)(lVar3 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18) = uVar2;
      }
      iVar14 = uVar11 + *(int *)(*(longlong *)
                                  (local_168.BoxToIndex.Blocks.AllocatorInstance.Data +
                                  (uVar17 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
      iVar15 = *(int *)((longlong)this + 0x58);
      uVar12 = iVar15 * 0x200 + *(int *)((longlong)this + 0x5c);
      if (uVar10 == uVar12) {
        if (*(int *)((longlong)this + 0x5c) == 0x200) {
          if (iVar15 == *(int *)((longlong)this + 0x68) + -1) {
            TDynamicVector<int,512>::AddAllocatedBlock
                      ((TDynamicVector<int,512> *)((longlong)this + 0x58));
          }
          *(int *)((longlong)this + 0x58) = *(int *)((longlong)this + 0x58) + 1;
          iVar15 = *(int *)((longlong)this + 0x58);
          *(undefined4 *)((longlong)this + 0x5c) = 0;
        }
        *(int *)(*(longlong *)(*(longlong *)((longlong)this + 0x60) + (longlong)iVar15 * 8) +
                (longlong)*(int *)((longlong)this + 0x5c) * 4) = iVar14;
        *(int *)((longlong)this + 0x5c) = *(int *)((longlong)this + 0x5c) + 1;
      }
      else if (uVar12 < uVar10) {
        TDynamicVector<int,512>::Resize((TDynamicVector<int,512> *)((longlong)this + 0x58),uVar10);
        iVar15 = *(int *)((longlong)this + 0x5c);
        if (iVar15 == 0x200) {
          if (*(int *)((longlong)this + 0x58) == *(int *)((longlong)this + 0x68) + -1) {
            TDynamicVector<int,512>::AddAllocatedBlock
                      ((TDynamicVector<int,512> *)((longlong)this + 0x58));
          }
          *(int *)((longlong)this + 0x58) = *(int *)((longlong)this + 0x58) + 1;
          iVar15 = 0;
          *(undefined4 *)((longlong)this + 0x5c) = 0;
        }
        *(int *)(*(longlong *)
                  (*(longlong *)((longlong)this + 0x60) +
                  (longlong)*(int *)((longlong)this + 0x58) * 8) + (longlong)iVar15 * 4) = iVar14;
        *(int *)((longlong)this + 0x5c) = *(int *)((longlong)this + 0x5c) + 1;
      }
      else {
        *(int *)(*(longlong *)(*(longlong *)((longlong)this + 0x60) + (ulonglong)(uVar10 >> 9) * 8)
                + (ulonglong)(uVar10 & 0x1ff) * 4) = iVar14;
      }
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar10 = uVar10 + 1;
    } while ((int)(uVar16 + 1) < local_168.IBoxCur);
  }
  this_02 = (TDynamicVector<int,512> *)((longlong)this + 0xa0);
  if (0 < local_168.IIndicesCur) {
    iVar15 = -uVar11;
    do {
      uVar10 = iVar15 + uVar11;
      uVar10 = *(uint *)(*(longlong *)
                          (local_168.IndexList.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4);
      if ((int)uVar10 < 0) {
        uVar10 = ~uVar10;
      }
      else {
        uVar10 = uVar10 + iVar6;
      }
      uVar12 = this_02->CurBlock;
      iVar14 = uVar10 + 1;
      uVar10 = uVar12 * 0x200 + *(int *)((longlong)this + 0xa4);
      if (uVar11 == uVar10) {
        if (*(int *)((longlong)this + 0xa4) == 0x200) {
          if (uVar12 == *(int *)((longlong)this + 0xb0) - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_02);
          }
          this_02->CurBlock = this_02->CurBlock + 1;
          uVar12 = this_02->CurBlock;
          *(undefined4 *)((longlong)this + 0xa4) = 0;
        }
        *(int *)(*(longlong *)(*(longlong *)((longlong)this + 0xa8) + (longlong)(int)uVar12 * 8) +
                (longlong)*(int *)((longlong)this + 0xa4) * 4) = iVar14;
        *(int *)((longlong)this + 0xa4) = *(int *)((longlong)this + 0xa4) + 1;
      }
      else if (uVar10 < uVar11) {
        TDynamicVector<int,512>::Resize(this_02,uVar11);
        iVar9 = *(int *)((longlong)this + 0xa4);
        if (iVar9 == 0x200) {
          if (this_02->CurBlock == *(int *)((longlong)this + 0xb0) - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_02);
          }
          this_02->CurBlock = this_02->CurBlock + 1;
          iVar9 = 0;
          *(undefined4 *)((longlong)this + 0xa4) = 0;
        }
        *(int *)(*(longlong *)
                  (*(longlong *)((longlong)this + 0xa8) + (longlong)(int)this_02->CurBlock * 8) +
                (longlong)iVar9 * 4) = iVar14;
        *(int *)((longlong)this + 0xa4) = *(int *)((longlong)this + 0xa4) + 1;
      }
      else {
        *(int *)(*(longlong *)(*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar11 >> 9) * 8)
                + (ulonglong)(uVar11 & 0x1ff) * 4) = iVar14;
      }
      uVar11 = uVar11 + 1;
    } while ((int)(iVar15 + uVar11) < local_168.IIndicesCur);
  }
  *(int *)((longlong)this + 0xbc) = iVar6 + iVar7;
  TDynamicVector<int,512>::Empty(&local_168.IndexList,0);
  if (local_168.IndexList.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.IndexList.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_168.BoxExtents,0);
  if (local_168.BoxExtents.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxExtents.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_168.BoxCenters,0);
  if (local_168.BoxCenters.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxCenters.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_168.BoxToIndex,0);
  if (local_168.BoxToIndex.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxToIndex.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_f8.IndexList,0);
  if (local_f8.IndexList.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.IndexList.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(this_00,0);
  if (local_f8.BoxExtents.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxExtents.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_f8.BoxCenters,0);
  if (local_f8.BoxCenters.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxCenters.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_f8.BoxToIndex,0);
  if (local_f8.BoxToIndex.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxToIndex.Blocks.AllocatorInstance.Data);
  }
  return;
}

// BuildTopDown @ 14338af70

void __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
BuildTopDown(void *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  void *this_00;
  double dVar8;
  double dVar9;
  int local_f8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e0;
  double local_d0;
  double dStack_c8;
  double local_c0;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38 [2];
  
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x98);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&local_f0.AllocatorInstance,0,&local_f0.ArrayMax);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 8) + 0x98);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar1,&local_e0.AllocatorInstance,0,&local_e0.ArrayMax);
  }
  dVar4 = __real_3fd5555555555555;
  this_00 = *(void **)((longlong)this + 8);
  local_f8[0] = 0;
  if (0 < *(int *)(*(longlong *)((longlong)this_00 + 8) + 0x98)) {
    do {
      `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
                (this_00,local_f8[0],(TVector<double> *)&local_b8._s_0,
                 (TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_88._s_0);
      dVar9 = (local_b8._s_0.X + local_a0._s_0.X + local_88._s_0.X) * dVar4;
      dVar3 = (local_b8._s_0.Y + local_a0._s_0.Y + local_88._s_0.Y) * dVar4;
      dVar8 = (local_b8._s_0.Z + local_a0._s_0.Z + local_88._s_0.Z) * dVar4;
      sVar6 = _dclass(SUB84(dVar3 * dVar3 + dVar9 * dVar9 + dVar8 * dVar8,0));
      if ((sVar6 != 2) && (sVar6 < 1)) {
        if ((local_f0.AllocatorInstance.Data <= (FScriptContainerElement *)local_f8) &&
           (((FScriptContainerElement *)local_f8 <
             local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 4 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = local_f0.ArrayNum;
        if (local_f0.ArrayNum == local_f0.ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
        }
        local_f0.ArrayNum = iVar7 + 1;
        *(int *)(local_f0.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_f8[0];
        `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
                  (*(void **)((longlong)this + 8),local_f8[0],(TVector<double> *)&local_68._s_0,
                   (TVector<double> *)&local_50._s_0,(TVector<double> *)&local_38[0]._s_0);
        local_d0 = (local_68._s_0.X + local_50._s_0.X + (double)local_38[0]._0_8_) * dVar4;
        dStack_c8 = (local_68._s_0.Y + local_50._s_0.Y + (double)local_38[0]._8_8_) * dVar4;
        local_c0 = (local_68._s_0.Z + local_50._s_0.Z + (double)local_38[0]._16_8_) * dVar4;
        if (((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d0) &&
            ((FScriptContainerElement *)&local_d0 <
             local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 0x18)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = local_e0.ArrayNum;
        if (local_e0.ArrayNum == local_e0.ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
        }
        local_e0.ArrayNum = iVar7 + 1;
        *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar7 * 0x18) = local_d0;
        *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8) = dStack_c8;
        *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 0x10) = local_c0;
      }
      this_00 = *(void **)((longlong)this + 8);
      local_f8[0] = local_f8[0] + 1;
    } while (local_f8[0] < *(int *)(*(longlong *)((longlong)this_00 + 8) + 0x98));
  }
  BuildTopDown(this,&local_f0,&local_e0,local_f0.ArrayNum);
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// BuildTopDown @ 14338b320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  uint *puVar1;
  TDynamicVector<UE::Math::TVector<double>,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *this_01;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  TDynamicVector<int,512> *this_02;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  FBoxesSet local_168;
  FBoxesSet local_f8;
  ulonglong local_88;
  TVector<double>_u_0 local_80;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  this_00 = &local_f8.BoxExtents;
  uVar19 = 0;
  local_f8.BoxToIndex.CurBlock = 0;
  local_f8.BoxToIndex.CurBlockUsed = 0;
  local_f8.BoxToIndex.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxToIndex.Blocks.ArrayNum = 0;
  local_f8.BoxToIndex.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_f8.BoxToIndex);
  local_f8.BoxCenters.CurBlock = 0;
  local_f8.BoxCenters.CurBlockUsed = 0;
  local_f8.BoxCenters.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxCenters.Blocks.ArrayNum = 0;
  local_f8.BoxCenters.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_f8.BoxCenters);
  local_f8.BoxExtents.CurBlock = 0;
  local_f8.BoxExtents.CurBlockUsed = 0;
  local_f8.BoxExtents.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxExtents.Blocks.ArrayNum = 0;
  local_f8.BoxExtents.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_00);
  local_f8.IndexList.CurBlock = 0;
  local_f8.IndexList.CurBlockUsed = 0;
  local_f8.IndexList.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.IndexList.Blocks.ArrayNum = 0;
  local_f8.IndexList.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_f8.IndexList);
  local_f8.IBoxCur = 0;
  local_f8.IIndicesCur = 0;
  local_168.BoxToIndex.CurBlock = 0;
  local_168.BoxToIndex.CurBlockUsed = 0;
  local_168.BoxToIndex.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxToIndex.Blocks.ArrayNum = 0;
  local_168.BoxToIndex.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_168.BoxToIndex);
  local_168.BoxCenters.CurBlock = 0;
  local_168.BoxCenters.CurBlockUsed = 0;
  local_168.BoxCenters.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxCenters.Blocks.ArrayNum = 0;
  local_168.BoxCenters.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_168.BoxCenters);
  local_168.BoxExtents.CurBlock = 0;
  local_168.BoxExtents.CurBlockUsed = 0;
  local_168.BoxExtents.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxExtents.Blocks.ArrayNum = 0;
  local_168.BoxExtents.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_168.BoxExtents);
  local_168.IndexList.CurBlock = 0;
  local_168.IndexList.CurBlockUsed = 0;
  local_168.IndexList.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.IndexList.Blocks.ArrayNum = 0;
  local_168.IndexList.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_168.IndexList);
  local_168.IBoxCur = 0;
  local_168.IIndicesCur = 0;
  local_80._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_80._s_0.Y = _UNK_150a9e648;
  local_80._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_68 = _UNK_150a9e6d8;
  local_60 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_58 = _UNK_1508ffb58;
  iVar8 = SplitTriSetMidpoint(this,param_1,param_2,0,param_3,0,this->TopDownLeafMaxTriCount,
                              &local_f8,&local_168,(TAxisAlignedBox3<double> *)&local_80._s_0);
  TDynamicVector<int,512>::operator=(&this->BoxToIndex,&local_f8.BoxToIndex);
  TDynamicVector<UE::Math::TVector<double>,512>::operator=(&this->BoxCenters,&local_f8.BoxCenters);
  this_01 = &this->BoxExtents;
  TDynamicVector<UE::Math::TVector<double>,512>::operator=(this_01,this_00);
  TDynamicVector<int,512>::operator=(&this->IndexList,&local_f8.IndexList);
  uVar14 = local_f8.IIndicesCur;
  iVar7 = local_f8.IBoxCur;
  this->TrianglesEnd = local_f8.IIndicesCur;
  uVar12 = local_f8.IBoxCur;
  if (0 < local_168.IBoxCur) {
    do {
      uVar9 = (this->BoxCenters).CurBlockUsed;
      uVar18 = (uint)uVar19;
      uVar10 = (ulonglong)(uVar18 & 0x1ff);
      local_88 = uVar19 >> 9;
      uVar13 = (this->BoxCenters).CurBlock;
      uVar16 = uVar13 * 0x200 + uVar9;
      uVar3 = *(undefined8 *)
               (*(longlong *)(local_168.BoxCenters.Blocks.AllocatorInstance.Data + local_88 * 8) +
                0x10 + uVar10 * 0x18);
      puVar2 = (undefined8 *)
               (*(longlong *)(local_168.BoxCenters.Blocks.AllocatorInstance.Data + local_88 * 8) +
               uVar10 * 0x18);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      if (uVar12 == uVar16) {
        if (uVar9 == 0x200) {
          if (uVar13 == (this->BoxCenters).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&this->BoxCenters);
          }
          (this->BoxCenters).CurBlock = (this->BoxCenters).CurBlock + 1;
          uVar13 = (this->BoxCenters).CurBlock;
          (this->BoxCenters).CurBlockUsed = 0;
        }
        lVar11 = (longlong)(int)(this->BoxCenters).CurBlockUsed;
        lVar4 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
        puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + lVar11 * 0x18) = uVar3;
        puVar1 = &(this->BoxCenters).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar16 < uVar12) {
        TDynamicVector<UE::Math::TVector<double>,512>::Resize(&this->BoxCenters,uVar12);
        uVar9 = (this->BoxCenters).CurBlockUsed;
        if (uVar9 == 0x200) {
          if ((this->BoxCenters).CurBlock == (this->BoxCenters).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&this->BoxCenters);
          }
          (this->BoxCenters).CurBlock = (this->BoxCenters).CurBlock + 1;
          uVar9 = 0;
          (this->BoxCenters).CurBlockUsed = 0;
        }
        lVar4 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                 (longlong)(int)(this->BoxCenters).CurBlock * 8);
        puVar2 = (undefined8 *)(lVar4 + (longlong)(int)uVar9 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar9 * 0x18) = uVar3;
        puVar1 = &(this->BoxCenters).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        lVar4 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar12 & 0x1ff) * 0x18) = uVar3;
      }
      uVar9 = this_01->CurBlock;
      uVar13 = (this->BoxExtents).CurBlockUsed;
      uVar16 = uVar9 * 0x200 + uVar13;
      uVar3 = *(undefined8 *)
               (*(longlong *)(local_168.BoxExtents.Blocks.AllocatorInstance.Data + local_88 * 8) +
                0x10 + uVar10 * 0x18);
      puVar2 = (undefined8 *)
               (*(longlong *)(local_168.BoxExtents.Blocks.AllocatorInstance.Data + local_88 * 8) +
               uVar10 * 0x18);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      if (uVar12 == uVar16) {
        if (uVar13 == 0x200) {
          if (uVar9 == (this->BoxExtents).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_01);
          }
          this_01->CurBlock = this_01->CurBlock + 1;
          uVar9 = this_01->CurBlock;
          (this->BoxExtents).CurBlockUsed = 0;
        }
        lVar11 = (longlong)(int)(this->BoxExtents).CurBlockUsed;
        lVar4 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
        puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + lVar11 * 0x18) = uVar3;
        puVar1 = &(this->BoxExtents).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar16 < uVar12) {
        TDynamicVector<UE::Math::TVector<double>,512>::Resize(this_01,uVar12);
        uVar9 = (this->BoxExtents).CurBlockUsed;
        if (uVar9 == 0x200) {
          if (this_01->CurBlock == (this->BoxExtents).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_01);
          }
          this_01->CurBlock = this_01->CurBlock + 1;
          uVar9 = 0;
          (this->BoxExtents).CurBlockUsed = 0;
        }
        lVar4 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                 (longlong)(int)this_01->CurBlock * 8);
        puVar2 = (undefined8 *)(lVar4 + (longlong)(int)uVar9 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar9 * 0x18) = uVar3;
        puVar1 = &(this->BoxExtents).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        lVar4 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar12 & 0x1ff) * 0x18) = uVar3;
      }
      uVar9 = (this->BoxToIndex).CurBlockUsed;
      iVar17 = uVar14 + *(int *)(*(longlong *)
                                  (local_168.BoxToIndex.Blocks.AllocatorInstance.Data +
                                  (uVar19 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
      uVar13 = (this->BoxToIndex).CurBlock;
      uVar16 = uVar13 * 0x200 + uVar9;
      if (uVar12 == uVar16) {
        if (uVar9 == 0x200) {
          if (uVar13 == (this->BoxToIndex).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&this->BoxToIndex);
          }
          (this->BoxToIndex).CurBlock = (this->BoxToIndex).CurBlock + 1;
          uVar13 = (this->BoxToIndex).CurBlock;
          (this->BoxToIndex).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->BoxToIndex).Blocks.AllocatorInstance.Data + (longlong)(int)uVar13 * 8) +
                (longlong)(int)(this->BoxToIndex).CurBlockUsed * 4) = iVar17;
        puVar1 = &(this->BoxToIndex).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar16 < uVar12) {
        TDynamicVector<int,512>::Resize(&this->BoxToIndex,uVar12);
        uVar9 = (this->BoxToIndex).CurBlockUsed;
        if (uVar9 == 0x200) {
          if ((this->BoxToIndex).CurBlock == (this->BoxToIndex).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&this->BoxToIndex);
          }
          (this->BoxToIndex).CurBlock = (this->BoxToIndex).CurBlock + 1;
          uVar9 = 0;
          (this->BoxToIndex).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                  (longlong)(int)(this->BoxToIndex).CurBlock * 8) + (longlong)(int)uVar9 * 4) =
             iVar17;
        puVar1 = &(this->BoxToIndex).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        *(int *)(*(longlong *)
                  ((this->BoxToIndex).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8)
                + (ulonglong)(uVar12 & 0x1ff) * 4) = iVar17;
      }
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar12 = uVar12 + 1;
    } while ((int)(uVar18 + 1) < local_168.IBoxCur);
  }
  this_02 = &this->IndexList;
  if (0 < local_168.IIndicesCur) {
    iVar17 = -uVar14;
    do {
      uVar12 = iVar17 + uVar14;
      uVar12 = *(uint *)(*(longlong *)
                          (local_168.IndexList.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4);
      if ((int)uVar12 < 0) {
        uVar12 = ~uVar12;
      }
      else {
        uVar12 = uVar12 + iVar7;
      }
      uVar9 = this_02->CurBlock;
      iVar15 = uVar12 + 1;
      uVar12 = (this->IndexList).CurBlockUsed;
      uVar13 = uVar9 * 0x200 + uVar12;
      if (uVar14 == uVar13) {
        if (uVar12 == 0x200) {
          if (uVar9 == (this->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_02);
          }
          this_02->CurBlock = this_02->CurBlock + 1;
          uVar9 = this_02->CurBlock;
          (this->IndexList).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar9 * 8) +
                (longlong)(int)(this->IndexList).CurBlockUsed * 4) = iVar15;
        puVar1 = &(this->IndexList).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar13 < uVar14) {
        TDynamicVector<int,512>::Resize(this_02,uVar14);
        uVar12 = (this->IndexList).CurBlockUsed;
        if (uVar12 == 0x200) {
          if (this_02->CurBlock == (this->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_02);
          }
          this_02->CurBlock = this_02->CurBlock + 1;
          uVar12 = 0;
          (this->IndexList).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->IndexList).Blocks.AllocatorInstance.Data +
                  (longlong)(int)this_02->CurBlock * 8) + (longlong)(int)uVar12 * 4) = iVar15;
        puVar1 = &(this->IndexList).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        *(int *)(*(longlong *)
                  ((this->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 4) = iVar15;
      }
      uVar14 = uVar14 + 1;
    } while ((int)(iVar17 + uVar14) < local_168.IIndicesCur);
  }
  this->RootIndex = iVar7 + iVar8;
  TDynamicVector<int,512>::Empty(&local_168.IndexList,0);
  if (local_168.IndexList.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.IndexList.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_168.BoxExtents,0);
  if (local_168.BoxExtents.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxExtents.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_168.BoxCenters,0);
  if (local_168.BoxCenters.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxCenters.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_168.BoxToIndex,0);
  if (local_168.BoxToIndex.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxToIndex.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_f8.IndexList,0);
  if (local_f8.IndexList.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.IndexList.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(this_00,0);
  if (local_f8.BoxExtents.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxExtents.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_f8.BoxCenters,0);
  if (local_f8.BoxCenters.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxCenters.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_f8.BoxToIndex,0);
  if (local_f8.BoxToIndex.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxToIndex.Blocks.AllocatorInstance.Data);
  }
  return;
}

// BuildTopDown @ 14338ba60

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,bool param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  FDynamicMesh3 *this_00;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  uint local_f8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e0;
  double local_d0;
  double dStack_c8;
  double local_c0;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38 [2];
  
  uVar8 = 0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  uVar7 = (this->Mesh->TriangleRefCounts).UsedCount;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar7,&local_f0.AllocatorInstance,0,&local_f0.ArrayMax);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  uVar7 = (this->Mesh->TriangleRefCounts).UsedCount;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar7,&local_e0.AllocatorInstance,0,&local_e0.ArrayMax);
  }
  dVar3 = __real_3fd5555555555555;
  this_00 = this->Mesh;
  local_f8[0] = 0;
  if (0 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (this_00->TriangleRefCounts).RefCounts.CurBlockUsed)) {
    do {
      uVar7 = (uint)uVar8;
      if (((-1 < (int)uVar7) &&
          ((int)uVar7 <
           (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (uVar8 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe)
         ) {
        FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                  (this_00,uVar7,(TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_a0._s_0
                   ,(TVector<double> *)&local_88._s_0);
        dVar10 = (local_b8._s_0.X + local_a0._s_0.X + local_88._s_0.X) * dVar3;
        dVar2 = (local_b8._s_0.Y + local_a0._s_0.Y + local_88._s_0.Y) * dVar3;
        dVar9 = (local_b8._s_0.Z + local_a0._s_0.Z + local_88._s_0.Z) * dVar3;
        sVar5 = _dclass(SUB84(dVar2 * dVar2 + dVar10 * dVar10 + dVar9 * dVar9,0));
        uVar7 = local_f8[0];
        if ((sVar5 != 2) && (sVar5 < 1)) {
          if ((local_f0.AllocatorInstance.Data <= (FScriptContainerElement *)local_f8) &&
             (((FScriptContainerElement *)local_f8 <
               local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 4 &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)))) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar6 = local_f0.ArrayNum;
          if (local_f0.ArrayNum == local_f0.ArrayMax) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
          }
          local_f0.ArrayNum = iVar6 + 1;
          *(uint *)(local_f0.AllocatorInstance.Data + (longlong)iVar6 * 4) = local_f8[0];
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (this->Mesh,local_f8[0],(TVector<double> *)&local_68._s_0,
                     (TVector<double> *)&local_50._s_0,(TVector<double> *)&local_38[0]._s_0);
          local_d0 = (local_68._s_0.X + local_50._s_0.X + (double)local_38[0]._0_8_) * dVar3;
          dStack_c8 = (local_68._s_0.Y + local_50._s_0.Y + (double)local_38[0]._8_8_) * dVar3;
          local_c0 = (local_68._s_0.Z + local_50._s_0.Z + (double)local_38[0]._16_8_) * dVar3;
          if (((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d0) &&
              ((FScriptContainerElement *)&local_d0 <
               local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 0x18)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar6 = local_e0.ArrayNum;
          if (local_e0.ArrayNum == local_e0.ArrayMax) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
          }
          local_e0.ArrayNum = iVar6 + 1;
          *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar6 * 0x18) = local_d0;
          *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar6 * 0x18 + 8) = dStack_c8;
          *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar6 * 0x18 + 0x10) = local_c0;
          uVar7 = local_f8[0];
        }
      }
      this_00 = this->Mesh;
      local_f8[0] = uVar7 + 1;
      uVar8 = (ulonglong)local_f8[0];
    } while ((int)local_f8[0] <
             (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (this_00->TriangleRefCounts).RefCounts.CurBlockUsed));
  }
  BuildTopDown(this,&local_f0,&local_e0,local_f0.ArrayNum);
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// DoTraversal @ 14339b980

void __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
DoTraversal(void *this,FTreeTraversal *param_1,FQueryOptions *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 local_res8 [2];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)this + 0xbc) & 0x1ff);
  uVar11 = (ulonglong)(*(uint *)((longlong)this + 0xbc) >> 9);
  local_res8[0] = 0;
  lVar4 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + uVar11 * 8);
  local_40 = *(double *)(lVar4 + uVar9 * 0x18);
  lVar5 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + uVar11 * 8);
  local_38 = *(double *)(lVar4 + 8 + uVar9 * 0x18);
  local_30 = *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
  dVar1 = *(double *)(lVar5 + uVar9 * 0x18);
  dVar2 = *(double *)(lVar5 + 8 + uVar9 * 0x18);
  local_58 = local_40 - dVar1;
  dVar3 = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
  local_50 = local_38 - dVar2;
  local_40 = local_40 + dVar1;
  local_38 = local_38 + dVar2;
  local_48 = local_30 - dVar3;
  local_30 = local_30 + dVar3;
  Core::Private::Function::CheckCallable(*(void **)&param_1->NextBoxF);
  plVar6 = *(longlong **)&(param_1->NextBoxF).field_0x28;
  pcVar7 = *(code **)&param_1->NextBoxF;
  plVar12 = (longlong *)&(param_1->NextBoxF).field_0x10;
  if (plVar6 != (longlong *)0x0) {
    plVar12 = plVar6;
  }
  uVar10 = (**(code **)(*plVar12 + 8))();
  cVar8 = (*pcVar7)(uVar10,&local_58,local_res8);
  if (cVar8 != '\0') {
    (**(code **)(*(longlong *)this + 0x80))
              (this,*(undefined4 *)((longlong)this + 0xbc),0,param_1,param_2);
  }
  return;
}

// DoTraversal @ 14339bad0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::DoTraversal
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,FTreeTraversal *param_1,
          FQueryOptions *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 local_res8 [2];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  uVar9 = (ulonglong)(this->RootIndex & 0x1ff);
  uVar11 = (ulonglong)((uint)this->RootIndex >> 9);
  local_res8[0] = 0;
  lVar4 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar11 * 8);
  local_40 = *(double *)(lVar4 + uVar9 * 0x18);
  lVar5 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar11 * 8);
  local_38 = *(double *)(lVar4 + 8 + uVar9 * 0x18);
  local_30 = *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
  dVar1 = *(double *)(lVar5 + uVar9 * 0x18);
  dVar2 = *(double *)(lVar5 + 8 + uVar9 * 0x18);
  local_58 = local_40 - dVar1;
  dVar3 = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
  local_50 = local_38 - dVar2;
  local_40 = local_40 + dVar1;
  local_38 = local_38 + dVar2;
  local_48 = local_30 - dVar3;
  local_30 = local_30 + dVar3;
  Core::Private::Function::CheckCallable(*(void **)&param_1->NextBoxF);
  plVar6 = *(longlong **)&(param_1->NextBoxF).field_0x28;
  pcVar7 = *(code **)&param_1->NextBoxF;
  plVar12 = (longlong *)&(param_1->NextBoxF).field_0x10;
  if (plVar6 != (longlong *)0x0) {
    plVar12 = plVar6;
  }
  uVar10 = (**(code **)(*plVar12 + 8))();
  cVar8 = (*pcVar7)(uVar10,&local_58,local_res8);
  if (cVar8 != '\0') {
    (**(code **)(this->_padding_ + 0x80))(this,this->RootIndex,0,param_1,param_2);
  }
  return;
}

// FindAllHitTriangles @ 14339eb40

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindAllHitTriangles(void *this,TRay<double> *param_1,
                   TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_>
                   *param_2,FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>
            (this,*(int *)((longlong)this + 0xbc),param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<_UE::Geometry::FSphereCovering::AddNegativeSpace_::__l34::FHullMeshWrapper>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllHitTriangles @ 14339eb90

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindAllHitTriangles
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,TRay<double> *param_1,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_2,
          FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllIntersections @ 14339ebe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindAllIntersections
          (void *this,FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<_public:_bool___cdecl_UE::Geometry::FSphereCovering::AddNegativeSpace(UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_const_&,UE::Geometry::FNegativeSpaceSampleSettings_const_&,bool)_::_34_::FHullMeshWrapper>
          *param_1,TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                   *param_2,FQueryOptions *param_3,FQueryOptions *param_4,
          TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar5;
  FIntersectionsQueryResult *pFVar6;
  longlong *plVar7;
  undefined1 auStackY_f8 [32];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_a0;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (*(longlong *)param_5 == 0) {
    local_88 = *(longlong *)param_5;
    uVar3 = *(undefined8 *)&param_5->field_0x8;
    local_78 = *(longlong *)&param_5->field_0x10;
    uStack_70 = *(undefined8 *)&param_5->field_0x18;
    uVar2 = *(undefined8 *)&param_5->field_0x20;
    plStack_60 = *(longlong **)&param_5->field_0x28;
    *(code **)param_5 =
         Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
         ::Call;
    *(undefined8 *)&param_5->field_0x8 = uStack_80;
    *(undefined4 *)&param_5->field_0x10 = 0x50a9df30;
    *(undefined4 *)&param_5->field_0x14 = 1;
    *(undefined4 *)&param_5->field_0x18 = 0x4332f0c0;
    *(undefined4 *)&param_5->field_0x1c = 1;
    *(undefined4 *)&param_5->field_0x20 = (undefined4)local_68;
    *(undefined4 *)&param_5->field_0x24 = local_68._4_4_;
    *(undefined4 *)&param_5->field_0x28 = 0;
    *(undefined4 *)&param_5->field_0x2c = 0;
    local_68 = uVar2;
    uStack_80 = uVar3;
    if (local_88 != 0) {
      plVar7 = &local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar7 = plStack_60;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  (__return_storage_ptr__->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Points).ArrayNum = 0;
  (__return_storage_ptr__->Points).ArrayMax = 0;
  (__return_storage_ptr__->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 0;
  (__return_storage_ptr__->Polygons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Polygons).ArrayNum = 0;
  (__return_storage_ptr__->Polygons).ArrayMax = 0;
  if ((*(int *)((longlong)this + 0xbc) < 0) ||
     ((param_3->bAllowUnsafeModifiedMeshQueries == false &&
      (*(longlong *)((longlong)this + 0x10) != 0)))) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2828200105734046772>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                       ,0x434,"IsValid(Options.bAllowUnsafeModifiedMeshQueries)");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FIntersectionsQueryResult *)(*pcVar1)();
      return pFVar6;
    }
    if (*(longlong *)param_5 != 0) {
      plVar7 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_5->field_0x28;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  else {
    pTVar5 = TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>::
             TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)><TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>_&>
                       (&local_a0,param_5);
    find_intersections(this,*(int *)((longlong)this + 0xbc),param_1,param_2,param_1->RootIndex,0,
                       __return_storage_ptr__,pTVar5,param_3,param_4);
    if (*(longlong *)param_5 != 0) {
      plVar7 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_5->field_0x28;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// FindAllIntersections @ 14339edc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindAllIntersections
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          FQueryOptions *param_3,FQueryOptions *param_4,
          TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong64 uVar5;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar6;
  FIntersectionsQueryResult *pFVar7;
  longlong *plVar8;
  undefined1 auStackY_f8 [32];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_a0;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (*(longlong *)param_5 == 0) {
    local_88 = *(longlong *)param_5;
    uVar3 = *(undefined8 *)&param_5->field_0x8;
    local_78 = *(longlong *)&param_5->field_0x10;
    uStack_70 = *(undefined8 *)&param_5->field_0x18;
    uVar2 = *(undefined8 *)&param_5->field_0x20;
    plStack_60 = *(longlong **)&param_5->field_0x28;
    *(code **)param_5 =
         Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
         ::Call;
    *(undefined8 *)&param_5->field_0x8 = uStack_80;
    *(undefined4 *)&param_5->field_0x10 = 0x50a9df30;
    *(undefined4 *)&param_5->field_0x14 = 1;
    *(undefined4 *)&param_5->field_0x18 = 0x4332f100;
    *(undefined4 *)&param_5->field_0x1c = 1;
    *(undefined4 *)&param_5->field_0x20 = (undefined4)local_68;
    *(undefined4 *)&param_5->field_0x24 = local_68._4_4_;
    *(undefined4 *)&param_5->field_0x28 = 0;
    *(undefined4 *)&param_5->field_0x2c = 0;
    local_68 = uVar2;
    uStack_80 = uVar3;
    if (local_88 != 0) {
      plVar8 = &local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar8 = plStack_60;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  (__return_storage_ptr__->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Points).ArrayNum = 0;
  (__return_storage_ptr__->Points).ArrayMax = 0;
  (__return_storage_ptr__->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 0;
  (__return_storage_ptr__->Polygons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Polygons).ArrayNum = 0;
  (__return_storage_ptr__->Polygons).ArrayMax = 0;
  if (this->RootIndex < 0) {
LAB_14339ef29:
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2828200105734046772>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                       ,0x434,"IsValid(Options.bAllowUnsafeModifiedMeshQueries)");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FIntersectionsQueryResult *)(*pcVar1)();
      return pFVar7;
    }
    if (*(longlong *)param_5 != 0) {
      plVar8 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar8 = *(longlong **)&param_5->field_0x28;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  else {
    if (param_3->bAllowUnsafeModifiedMeshQueries == false) {
      uVar5 = FDynamicMesh3::GetChangeStamp(this->Mesh);
      if (this->MeshChangeStamp != uVar5) goto LAB_14339ef29;
    }
    pTVar6 = TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>::
             TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)><TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>_&>
                       (&local_a0,param_5);
    find_intersections(this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                       __return_storage_ptr__,pTVar6,param_3,param_4);
    if (*(longlong *)param_5 != 0) {
      plVar8 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar8 = *(longlong **)&param_5->field_0x28;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// FindAllSelfIntersections @ 14339efa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindAllSelfIntersections
          (void *this,FIntersectionsQueryResult *__return_storage_ptr__,bool param_1,
          FQueryOptions *param_2,
          TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  FIntersectionsQueryResult *pFVar5;
  longlong *plVar6;
  undefined1 auStackY_a8 [32];
  code *local_78;
  TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(longlong *)param_3 == 0) {
    local_68 = *(longlong *)param_3;
    uVar3 = *(undefined8 *)&param_3->field_0x8;
    local_58 = *(longlong *)&param_3->field_0x10;
    uStack_50 = *(undefined8 *)&param_3->field_0x18;
    uVar2 = *(undefined8 *)&param_3->field_0x20;
    plStack_40 = *(longlong **)&param_3->field_0x28;
    *(code **)param_3 =
         Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
         ::Call;
    *(undefined8 *)&param_3->field_0x8 = uStack_60;
    *(undefined4 *)&param_3->field_0x10 = 0x50a9df30;
    *(undefined4 *)&param_3->field_0x14 = 1;
    *(undefined4 *)&param_3->field_0x18 = 0x4332f140;
    *(undefined4 *)&param_3->field_0x1c = 1;
    *(undefined4 *)&param_3->field_0x20 = (undefined4)local_48;
    *(undefined4 *)&param_3->field_0x24 = local_48._4_4_;
    *(undefined4 *)&param_3->field_0x28 = 0;
    *(undefined4 *)&param_3->field_0x2c = 0;
    local_48 = uVar2;
    uStack_60 = uVar3;
    if (local_68 != 0) {
      plVar6 = &local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar6 = plStack_40;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  (__return_storage_ptr__->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Points).ArrayNum = 0;
  (__return_storage_ptr__->Points).ArrayMax = 0;
  (__return_storage_ptr__->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 0;
  (__return_storage_ptr__->Polygons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Polygons).ArrayNum = 0;
  (__return_storage_ptr__->Polygons).ArrayMax = 0;
  if (*(longlong *)param_3 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBound(InFunc)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                       ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FIntersectionsQueryResult *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_70 = param_3;
  local_78 = Core::Private::Function::
             TFunctionRefCaller<TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  find_self_intersections
            (this,__return_storage_ptr__,param_1,
             (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
             &local_78,param_2);
  if (*(longlong *)param_3 != 0) {
    plVar6 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FindAllSelfIntersections @ 14339f120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindAllSelfIntersections
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,bool param_1,FQueryOptions *param_2,
          TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  FIntersectionsQueryResult *pFVar5;
  longlong *plVar6;
  undefined1 auStackY_a8 [32];
  code *local_78;
  TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(longlong *)param_3 == 0) {
    local_68 = *(longlong *)param_3;
    uVar3 = *(undefined8 *)&param_3->field_0x8;
    local_58 = *(longlong *)&param_3->field_0x10;
    uStack_50 = *(undefined8 *)&param_3->field_0x18;
    uVar2 = *(undefined8 *)&param_3->field_0x20;
    plStack_40 = *(longlong **)&param_3->field_0x28;
    *(code **)param_3 =
         Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
         ::Call;
    *(undefined8 *)&param_3->field_0x8 = uStack_60;
    *(undefined4 *)&param_3->field_0x10 = 0x50a9df30;
    *(undefined4 *)&param_3->field_0x14 = 1;
    *(undefined4 *)&param_3->field_0x18 = 0x4332f180;
    *(undefined4 *)&param_3->field_0x1c = 1;
    *(undefined4 *)&param_3->field_0x20 = (undefined4)local_48;
    *(undefined4 *)&param_3->field_0x24 = local_48._4_4_;
    *(undefined4 *)&param_3->field_0x28 = 0;
    *(undefined4 *)&param_3->field_0x2c = 0;
    local_48 = uVar2;
    uStack_60 = uVar3;
    if (local_68 != 0) {
      plVar6 = &local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar6 = plStack_40;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  (__return_storage_ptr__->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Points).ArrayNum = 0;
  (__return_storage_ptr__->Points).ArrayMax = 0;
  (__return_storage_ptr__->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 0;
  (__return_storage_ptr__->Polygons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Polygons).ArrayNum = 0;
  (__return_storage_ptr__->Polygons).ArrayMax = 0;
  if (*(longlong *)param_3 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBound(InFunc)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                       ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FIntersectionsQueryResult *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_70 = param_3;
  local_78 = Core::Private::Function::
             TFunctionRefCaller<TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  find_self_intersections
            (this,__return_storage_ptr__,param_1,
             (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
             &local_78,param_2);
  if (*(longlong *)param_3 != 0) {
    plVar6 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FindNearestHitTriangle @ 14339f9b0

int __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindNearestHitTriangle(void *this,TRay<double> *param_1,FQueryOptions *param_2)

{
  int local_res8 [4];
  double local_res18 [2];
  TVector<double>_u_0 local_28;
  
  local_res18[0] = param_2->MaxDistance;
  if (__real_47efffffe0000000 <= param_2->MaxDistance) {
    local_res18[0] = __real_47efffffe0000000;
  }
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8[0] = -1;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,*(int *)((longlong)this + 0xbc),param_1,local_res18,local_res8,
             (TVector<double> *)&local_28._s_0,param_2);
  return local_res8[0];
}

// FindNearestHitTriangle @ 14339fa30

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindNearestHitTriangle
          (void *this,TRay<double> *param_1,double *param_2,int *param_3,TVector<double> *param_4,
          FQueryOptions *param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  *param_3 = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar1;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = param_5->MaxDistance;
  if (__real_47efffffe0000000 <= param_5->MaxDistance) {
    dVar2 = __real_47efffffe0000000;
  }
  *param_2 = dVar2;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,*(int *)((longlong)this + 0xbc),param_1,param_2,param_3,param_4,param_5);
  return *param_3 != -1;
}

// FindNearestHitTriangle @ 14339fab0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindNearestHitTriangle
          (void *this,TRay<double> *param_1,double *param_2,int *param_3,FQueryOptions *param_4)

{
  double dVar1;
  TVector<double>_u_0 local_28;
  
  *param_3 = -1;
  dVar1 = param_4->MaxDistance;
  if (__real_47efffffe0000000 <= param_4->MaxDistance) {
    dVar1 = __real_47efffffe0000000;
  }
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *param_2 = dVar1;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,*(int *)((longlong)this + 0xbc),param_1,param_2,param_3,
             (TVector<double> *)&local_28._s_0,param_4);
  return *param_3 != -1;
}

// FindNearestHitTriangle @ 14339fb30

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,TRay<double> *param_1,
          FQueryOptions *param_2)

{
  int local_res8 [4];
  double local_res18 [2];
  TVector<double>_u_0 local_28;
  
  local_res18[0] = param_2->MaxDistance;
  if (__real_47efffffe0000000 <= param_2->MaxDistance) {
    local_res18[0] = __real_47efffffe0000000;
  }
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8[0] = -1;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,this->RootIndex,param_1,local_res18,local_res8,(TVector<double> *)&local_28._s_0,
             param_2);
  return local_res8[0];
}

// FindNearestHitTriangle @ 14339fbb0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,TRay<double> *param_1,double *param_2,
          int *param_3,TVector<double> *param_4,FQueryOptions *param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  *param_3 = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar1;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = param_5->MaxDistance;
  if (__real_47efffffe0000000 <= param_5->MaxDistance) {
    dVar2 = __real_47efffffe0000000;
  }
  *param_2 = dVar2;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,this->RootIndex,param_1,param_2,param_3,param_4,param_5);
  return *param_3 != -1;
}

// FindNearestHitTriangle @ 14339fc30

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,TRay<double> *param_1,double *param_2,
          int *param_3,FQueryOptions *param_4)

{
  double dVar1;
  TVector<double>_u_0 local_28;
  
  *param_3 = -1;
  dVar1 = param_4->MaxDistance;
  if (__real_47efffffe0000000 <= param_4->MaxDistance) {
    dVar1 = __real_47efffffe0000000;
  }
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *param_2 = dVar1;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,this->RootIndex,param_1,param_2,param_3,(TVector<double> *)&local_28._s_0,param_4)
  ;
  return *param_3 != -1;
}

// FindNearestPoint @ 1433a05d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindNearestPoint(void *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
                FQueryOptions *param_2)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 TStack_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_40;
  double dStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  iVar3 = (**(code **)(*(longlong *)this + 0x20))(this,param_1,local_128);
  local_118 = (param_1->field0_0x0)._s_0.X;
  dStack_110 = (param_1->field0_0x0)._s_0.Y;
  if (iVar3 < 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_118;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_110;
    uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar4 = (undefined4)uVar2;
    uVar5 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
              (*(void **)((longlong)this + 8),iVar3,(TVector<double> *)&local_108._s_0,
               (TVector<double> *)&TStack_f0._s_0,(TVector<double> *)&local_d8._s_0);
    local_b8._s_0.X = local_118;
    local_b8._s_0.Y = dStack_110;
    local_a0 = local_108._s_0.X;
    dStack_98 = local_108._s_0.Y;
    local_80 = TStack_f0._s_0.Y;
    dStack_78 = TStack_f0._s_0.Z;
    local_90 = local_108._s_0.Z;
    dStack_88 = TStack_f0._s_0.X;
    local_60 = local_d8._s_0.Z;
    local_70 = local_d8._s_0.X;
    dStack_68 = local_d8._s_0.Y;
    local_b8._s_0.Z = dVar1;
    TDistPoint3Triangle3<double>::ComputeResult((TDistPoint3Triangle3<double> *)&local_b8._s_0);
    uVar4 = (undefined4)local_30;
    uVar5 = (undefined4)((ulonglong)local_30 >> 0x20);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_40;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_38;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar5,uVar4);
  return __return_storage_ptr__;
}

// FindNearestPoint @ 1433a0700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindNearestPoint
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,TVector<double> *__return_storage_ptr__
          ,TVector<double> *param_1,FQueryOptions *param_2)

{
  int iVar1;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  TVector<double>_u_0 local_d8;
  TDistPoint3Triangle3<double> local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar1 = (**(code **)(this->_padding_ + 0x20))(this,param_1,local_e8);
  local_d8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_d8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  if (iVar1 < 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_d8._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_d8._s_0.Y;
    local_b8.ClosestTrianglePoint.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  }
  else {
    local_d8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
              (&local_b8,this->Mesh,iVar1,(TVector<double> *)&local_d8._s_0);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_b8.ClosestTrianglePoint.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_b8.ClosestTrianglePoint.field0_0x0._s_0.Y;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_b8.ClosestTrianglePoint.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// FindNearestTriangle @ 1433a07b0

int __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindNearestTriangle(void *this,TVector<double> *param_1,double *param_2,FQueryOptions *param_3)

{
  double dVar1;
  double dVar2;
  int local_res8 [8];
  
  dVar1 = param_3->MaxDistance;
  dVar2 = __real_7fefffffffffffff;
  if (dVar1 < __real_7fefffffffffffff) {
    dVar2 = dVar1 * dVar1;
  }
  *param_2 = dVar2;
  local_res8[0] = -1;
  find_nearest_tri<0>(this,*(int *)((longlong)this + 0xbc),param_1,param_2,local_res8,param_3);
  return local_res8[0];
}

// FindNearestTriangle @ 1433a0810

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindNearestTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,TVector<double> *param_1,
          double *param_2,FQueryOptions *param_3)

{
  double dVar1;
  double dVar2;
  int local_res8 [8];
  
  dVar1 = param_3->MaxDistance;
  dVar2 = __real_7fefffffffffffff;
  if (dVar1 < __real_7fefffffffffffff) {
    dVar2 = dVar1 * dVar1;
  }
  *param_2 = dVar2;
  local_res8[0] = -1;
  find_nearest_tri<0>(this,this->RootIndex,param_1,param_2,local_res8,param_3);
  return local_res8[0];
}

// FindNearestTriangles @ 1433a0870

FIndex2i __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindNearestTriangles
          (void *this,
          TMeshAABBTree3<_public:_bool___cdecl_UE::Geometry::FSphereCovering::AddNegativeSpace(UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_const_&,UE::Geometry::FNegativeSpaceSampleSettings_const_&,bool)_::_34_::FHullMeshWrapper>
          *param_1,TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                   *param_2,double *param_3,FQueryOptions *param_4,FQueryOptions *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double local_res8 [4];
  FQueryOptions *in_stack_00000038;
  
  dVar2 = __real_7fefffffffffffff;
  local_res8[0] = __real_7fefffffffffffff;
  dVar1 = param_5->MaxDistance;
  if (dVar1 < __real_7fefffffffffffff) {
    local_res8[0] = dVar1 * dVar1;
  }
  param_1->_padding_ = -1;
  find_nearest_triangles
            (this,*(int *)((longlong)this + 0xbc),
             (TMeshAABBTree3<_public:_bool___cdecl_UE::Geometry::FSphereCovering::AddNegativeSpace(UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_const_&,UE::Geometry::FNegativeSpaceSampleSettings_const_&,bool)_::_34_::FHullMeshWrapper>
              *)param_2,
             (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             param_3,*(int *)&param_2[3].field_0x2c,0,local_res8,(FIndex2i *)param_1,param_5,
             in_stack_00000038);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_res8[0];
  if (local_res8[0] < dVar2) {
    auVar3 = sqrtpd(auVar3,auVar3);
    param_4->MaxDistance = auVar3._0_8_;
    return (FIndex2i)(FIndex2i_u_0)param_1;
  }
  param_4->MaxDistance = dVar2;
  return (FIndex2i)(FIndex2i_u_0)param_1;
}

// FindNearestTriangles @ 1433a0930

FIndex2i __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindNearestTriangles
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          double *param_3,FQueryOptions *param_4,FQueryOptions *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double local_res8 [4];
  FQueryOptions *in_stack_00000038;
  
  dVar2 = __real_7fefffffffffffff;
  local_res8[0] = __real_7fefffffffffffff;
  dVar1 = param_5->MaxDistance;
  if (dVar1 < __real_7fefffffffffffff) {
    local_res8[0] = dVar1 * dVar1;
  }
  param_1->_padding_ = -1;
  find_nearest_triangles
            (this,this->RootIndex,(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)param_2,
             (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             param_3,*(int *)&param_2[3].field_0x2c,0,local_res8,(FIndex2i *)param_1,param_5,
             in_stack_00000038);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_res8[0];
  if (local_res8[0] < dVar2) {
    auVar3 = sqrtpd(auVar3,auVar3);
    param_4->MaxDistance = auVar3._0_8_;
    return (FIndex2i)(FIndex2i_u_0)param_1;
  }
  param_4->MaxDistance = dVar2;
  return (FIndex2i)(FIndex2i_u_0)param_1;
}

// FindNearestVertex @ 1433a09f0

int __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
FindNearestVertex(void *this,TVector<double> *param_1,double *param_2,double param_3,
                 FQueryOptions *param_4)

{
  double dVar1;
  int local_res8 [8];
  
  dVar1 = __real_7fefffffffffffff;
  if (param_3 < __real_7fefffffffffffff) {
    dVar1 = param_3 * param_3;
  }
  *param_2 = dVar1;
  local_res8[0] = -1;
  find_nearest_vertex(this,*(int *)((longlong)this + 0xbc),param_1,param_2,local_res8,param_4);
  return local_res8[0];
}

// FindNearestVertex @ 1433a0a50

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindNearestVertex
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,TVector<double> *param_1,
          double *param_2,double param_3,FQueryOptions *param_4)

{
  double dVar1;
  int local_res8 [8];
  
  dVar1 = __real_7fefffffffffffff;
  if (param_3 < __real_7fefffffffffffff) {
    dVar1 = param_3 * param_3;
  }
  *param_2 = dVar1;
  local_res8[0] = -1;
  find_nearest_vertex(this,this->RootIndex,param_1,param_2,local_res8,param_4);
  return local_res8[0];
}

// GetBoundingBox @ 1433a28f0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
GetBoundingBox(void *this,TAxisAlignedBox3<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TAxisAlignedBox3<double> *pTVar3;
  
  if (-1 < *(int *)((longlong)this + 0xbc)) {
    GetBox(this,__return_storage_ptr__,*(int *)((longlong)this + 0xbc));
    return __return_storage_ptr__;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2828200105734045879>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                     ,0xb7,"RootIndex >= 0");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TAxisAlignedBox3<double> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  return __return_storage_ptr__;
}

// GetBox @ 1433a2980

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::GetBox
          (void *this,TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)(param_1 & 0x1ff);
  lVar7 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar1 = *(double *)(lVar7 + 0x10 + uVar9 * 0x18);
  lVar8 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar2 = *(double *)(lVar7 + uVar9 * 0x18);
  dVar3 = *(double *)(lVar7 + 8 + uVar9 * 0x18);
  dVar4 = *(double *)(lVar8 + 0x10 + uVar9 * 0x18);
  dVar5 = *(double *)(lVar8 + uVar9 * 0x18);
  dVar6 = *(double *)(lVar8 + 8 + uVar9 * 0x18);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2 - dVar5;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1 - dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2 + dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1 + dVar4;
  return __return_storage_ptr__;
}

// GetBox @ 1433a2a40

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::GetBox
          (void *this,TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  code *local_48 [2];
  undefined **local_38;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_30;
  undefined8 local_20;
  
  if (*(longlong *)param_2 != 0) {
    uVar3 = (ulonglong)(param_1 & 0x1ff);
    local_20 = 0;
    lVar1 = *(longlong *)
             (*(longlong *)((longlong)this + 0x78) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_60 = *(double *)(lVar1 + uVar3 * 0x18);
    lVar2 = *(longlong *)
             (*(longlong *)((longlong)this + 0x90) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_58 = *(double *)(lVar1 + 8 + uVar3 * 0x18);
    local_50 = *(double *)(lVar1 + 0x10 + uVar3 * 0x18);
    local_38 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::`34'::FHullMeshWrapper>::GetBox'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                  ::Call;
    local_30 = param_2;
    TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
              (__return_storage_ptr__,(TAxisAlignedBox3<double> *)&local_78._s_0,
               (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
               local_48);
    return __return_storage_ptr__;
  }
  GetBox(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetBox @ 1433a2b50

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::GetBox
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,
          TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)(param_1 & 0x1ff);
  lVar7 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar1 = *(double *)(lVar7 + 0x10 + uVar9 * 0x18);
  lVar8 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar2 = *(double *)(lVar7 + uVar9 * 0x18);
  dVar3 = *(double *)(lVar7 + 8 + uVar9 * 0x18);
  dVar4 = *(double *)(lVar8 + 0x10 + uVar9 * 0x18);
  dVar5 = *(double *)(lVar8 + uVar9 * 0x18);
  dVar6 = *(double *)(lVar8 + 8 + uVar9 * 0x18);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2 - dVar5;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1 - dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2 + dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1 + dVar4;
  return __return_storage_ptr__;
}

// GetBox @ 1433a2c10

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::GetBox
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,
          TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  code *local_48 [2];
  undefined **local_38;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_30;
  undefined8 local_20;
  
  if (*(longlong *)param_2 != 0) {
    uVar3 = (ulonglong)(param_1 & 0x1ff);
    local_20 = 0;
    lVar1 = *(longlong *)
             ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8
             );
    local_60 = *(double *)(lVar1 + uVar3 * 0x18);
    lVar2 = *(longlong *)
             ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8
             );
    local_58 = *(double *)(lVar1 + 8 + uVar3 * 0x18);
    local_50 = *(double *)(lVar1 + 0x10 + uVar3 * 0x18);
    local_38 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                  ::Call;
    local_30 = param_2;
    TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
              (__return_storage_ptr__,(TAxisAlignedBox3<double> *)&local_78._s_0,
               (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
               local_48);
    return __return_storage_ptr__;
  }
  GetBox(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// IsInside @ 1433bc280

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::IsInside
          (void *this,TVector<double> *param_1)

{
  return false;
}

// IsInside @ 1433bc290

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::IsInside
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,TVector<double> *param_1)

{
  return false;
}

// IsWithinDistanceSquared @ 1433bc690

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
IsWithinDistanceSquared
          (void *this,TVector<double> *param_1,double param_2,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,*(int *)((longlong)this + 0xbc),param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// IsWithinDistanceSquared @ 1433bc6e0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::IsWithinDistanceSquared
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,TVector<double> *param_1,double param_2
          ,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// SplitTriSetMidpoint @ 1433d3510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
SplitTriSetMidpoint(void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
                   TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
                   int param_3,int param_4,int param_5,int param_6,FBoxesSet *param_7,
                   FBoxesSet *param_8,TAxisAlignedBox3<double> *param_9)

{
  int *piVar1;
  uint *puVar2;
  TVector<double> *pTVar3;
  longlong lVar4;
  double dVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FBoxesSet *pFVar13;
  TAxisAlignedBox3<double> *pTVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  double *pdVar19;
  TAxisAlignedBox3<double> *pTVar20;
  longlong lVar21;
  undefined8 uVar22;
  uint uVar23;
  longlong *plVar24;
  uint uVar25;
  ulonglong uVar26;
  TDynamicVector<int,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  undefined4 uVar34;
  double dVar35;
  undefined4 uVar38;
  undefined8 uVar36;
  double dVar37;
  undefined4 uVar39;
  undefined4 uVar41;
  double dVar40;
  longlong local_1b0;
  int local_1a8;
  longlong local_1a0;
  int local_178 [2];
  int local_170;
  int local_16c;
  longlong local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  TVector<double>_u_0 local_130;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  TAxisAlignedBox3<double> local_d0 [3];
  
  pTVar14 = param_9;
  pFVar13 = param_7;
  iVar16 = param_4;
  local_1b0 = (longlong)param_3;
  if (param_1->ArrayNum < 1) {
    pdVar19 = &local_160;
    local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pdVar19 = &local_100;
    local_100 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_f8 = _UNK_150a9e648;
    local_e0 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_d8 = _UNK_1508ffb58;
    local_f0 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_e8 = _UNK_150a9e6d8;
  }
  dVar35 = pdVar19[1];
  dVar5 = pdVar19[2];
  dVar40 = pdVar19[3];
  (param_9->Min).field0_0x0._s_0.X = *pdVar19;
  (param_9->Min).field0_0x0._s_0.Y = dVar35;
  dVar35 = pdVar19[4];
  dVar37 = pdVar19[5];
  (param_9->Min).field0_0x0._s_0.Z = dVar5;
  (param_9->Max).field0_0x0._s_0.X = dVar40;
  (param_9->Max).field0_0x0._s_0.Y = dVar35;
  (param_9->Max).field0_0x0._s_0.Z = dVar37;
  if (param_6 < param_4) {
    local_178[0] = param_5;
    Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
    pcVar9 = *(code **)((longlong)this + 0x20);
    plVar24 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar24 = *(longlong **)((longlong)this + 0x48);
    }
    uVar22 = (**(code **)(*plVar24 + 8))();
    uVar34 = (undefined4)__real_7fefffffffffffff;
    uVar38 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar39 = (undefined4)__real_ffefffffffffffff;
    uVar41 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    uVar17 = (*pcVar9)(uVar22,local_178,pTVar14);
    iVar33 = 0;
    uVar28 = 0;
    uVar26 = (ulonglong)(int)uVar17;
    uVar32 = 0;
    if (0 < iVar16) {
      lVar30 = (uVar26 + local_1b0 * 3) * 8;
      uVar25 = param_3;
      do {
        uVar31 = uVar32;
        if ((int)uVar25 < param_2->ArrayNum) {
          uVar31 = ~uVar25 >> 0x1f;
        }
        if (uVar31 == 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar9 = (code *)swi(3);
            iVar16 = (*pcVar9)();
            return iVar16;
          }
        }
        pFVar7 = (param_2->AllocatorInstance).Data;
        if (2 < uVar26) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          if (bVar15) {
            pcVar9 = (code *)swi(3);
            iVar16 = (*pcVar9)();
            return iVar16;
          }
        }
        dVar35 = *(double *)(pFVar7 + lVar30);
        uVar25 = uVar25 + 1;
        dVar5 = dVar35;
        if ((double)CONCAT44(uVar38,uVar34) <= dVar35) {
          dVar5 = (double)CONCAT44(uVar38,uVar34);
        }
        lVar30 = lVar30 + 0x18;
        if (dVar35 <= (double)CONCAT44(uVar41,uVar39)) {
          dVar35 = (double)CONCAT44(uVar41,uVar39);
        }
        uVar34 = SUB84(dVar5,0);
        uVar38 = (undefined4)((ulonglong)dVar5 >> 0x20);
        uVar39 = SUB84(dVar35,0);
        uVar41 = (undefined4)((ulonglong)dVar35 >> 0x20);
      } while ((int)(uVar25 - param_3) < iVar16);
    }
    dVar5 = __real_3fe0000000000000;
    dVar35 = ((double)CONCAT44(uVar41,uVar39) + (double)CONCAT44(uVar38,uVar34)) *
             __real_3fe0000000000000;
    if ((double)CONCAT44(uVar41,uVar39) - (double)CONCAT44(uVar38,uVar34) <= __real_3e45798ee2308c3a
       ) {
      iVar33 = iVar16 / 2;
      iVar16 = iVar16 - iVar33;
    }
    else {
      local_1a8 = iVar16 + -1;
      local_168 = (longlong)local_1a8;
      if (0 < local_1a8) {
        local_1a0 = 0;
        iVar33 = 0;
        while( true ) {
          uVar25 = iVar33 + param_3;
          lVar30 = (uVar26 + (param_3 + local_1a0) * 3) * 8;
          while( true ) {
            uVar31 = uVar32;
            if ((int)uVar25 < param_2->ArrayNum) {
              uVar31 = ~uVar25 >> 0x1f;
            }
            if (uVar31 == 0) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar9 = (code *)swi(3);
                iVar16 = (*pcVar9)();
                return iVar16;
              }
            }
            pFVar7 = (param_2->AllocatorInstance).Data;
            if (2 < uVar17) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar15) {
                pcVar9 = (code *)swi(3);
                iVar16 = (*pcVar9)();
                return iVar16;
              }
            }
            if (dVar35 < *(double *)(pFVar7 + lVar30)) break;
            local_1a0 = local_1a0 + 1;
            iVar33 = iVar33 + 1;
            uVar25 = uVar25 + 1;
            lVar30 = lVar30 + 0x18;
          }
          uVar25 = param_3 + local_1a8;
          lVar21 = (local_1b0 + local_168) * 0x18;
          lVar30 = local_168;
          while( true ) {
            uVar18 = 0;
            uVar31 = uVar18;
            if ((int)uVar25 < param_2->ArrayNum) {
              uVar31 = ~uVar25 >> 0x1f;
            }
            if (uVar31 == 0) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar9 = (code *)swi(3);
                iVar16 = (*pcVar9)();
                return iVar16;
              }
            }
            pFVar7 = (param_2->AllocatorInstance).Data;
            if (2 < uVar17) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar15) {
                pcVar9 = (code *)swi(3);
                iVar16 = (*pcVar9)();
                return iVar16;
              }
            }
            if (*(double *)(pFVar7 + uVar26 * 8 + lVar21) <= dVar35) break;
            local_1a8 = local_1a8 + -1;
            uVar25 = uVar25 - 1;
            lVar30 = lVar30 + -1;
            lVar21 = lVar21 + -0x18;
          }
          iVar16 = param_4;
          local_168 = lVar30;
          if (lVar30 <= local_1a0) break;
          lVar21 = (longlong)param_3;
          uVar31 = (uint)~(iVar33 + param_3) >> 0x1f;
          uVar25 = uVar18;
          if (iVar33 + param_3 < param_2->ArrayNum) {
            uVar25 = uVar31;
          }
          if (uVar25 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
          }
          pFVar8 = (param_2->AllocatorInstance).Data;
          lVar4 = lVar21 + lVar30;
          pFVar7 = pFVar8 + (local_1b0 + local_1a0) * 0x18;
          uVar36 = *(undefined8 *)pFVar7;
          uVar10 = *(undefined8 *)(pFVar7 + 8);
          uVar22 = *(undefined8 *)(pFVar8 + (local_1b0 + local_1a0) * 0x18 + 0x10);
          uVar23 = (uint)~(local_1a8 + param_3) >> 0x1f;
          uVar25 = uVar18;
          if (local_1a8 + param_3 < param_2->ArrayNum) {
            uVar25 = uVar23;
          }
          if (uVar25 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
          }
          pFVar8 = (param_2->AllocatorInstance).Data;
          pFVar7 = pFVar8 + lVar4 * 0x18;
          uVar11 = *(undefined8 *)pFVar7;
          uVar12 = *(undefined8 *)(pFVar7 + 8);
          uVar6 = *(undefined8 *)(pFVar8 + lVar4 * 0x18 + 0x10);
          uVar25 = uVar18;
          if (iVar33 + param_3 < param_2->ArrayNum) {
            uVar25 = uVar31;
          }
          if (uVar25 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
          }
          pFVar8 = (param_2->AllocatorInstance).Data;
          pFVar7 = pFVar8 + (local_1a0 + lVar21) * 0x18;
          *(undefined8 *)pFVar7 = uVar11;
          *(undefined8 *)(pFVar7 + 8) = uVar12;
          *(undefined8 *)(pFVar8 + (local_1a0 + lVar21) * 0x18 + 0x10) = uVar6;
          uVar25 = uVar18;
          if (local_1a8 + param_3 < param_2->ArrayNum) {
            uVar25 = uVar23;
          }
          if (uVar25 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
          }
          pFVar8 = (param_2->AllocatorInstance).Data;
          pFVar7 = pFVar8 + lVar4 * 0x18;
          *(undefined8 *)pFVar7 = uVar36;
          *(undefined8 *)(pFVar7 + 8) = uVar10;
          *(undefined8 *)(pFVar8 + lVar4 * 0x18 + 0x10) = uVar22;
          uVar25 = uVar18;
          if (iVar33 + param_3 < param_1->ArrayNum) {
            uVar25 = (uint)~(iVar33 + param_3) >> 0x1f;
          }
          if (uVar25 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
          }
          uVar34 = *(undefined4 *)((param_1->AllocatorInstance).Data + (local_1a0 + lVar21) * 4);
          uVar25 = uVar18;
          if (local_1a8 + param_3 < param_1->ArrayNum) {
            uVar25 = (uint)~(local_1a8 + param_3) >> 0x1f;
          }
          if (uVar25 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
          }
          uVar38 = *(undefined4 *)((param_1->AllocatorInstance).Data + (lVar21 + lVar30) * 4);
          if (iVar33 + param_3 < param_1->ArrayNum) {
            uVar18 = (uint)~(iVar33 + param_3) >> 0x1f;
          }
          if (uVar18 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (local_1a0 + lVar21) * 4) = uVar38;
          uVar25 = uVar32;
          if (local_1a8 + param_3 < param_1->ArrayNum) {
            uVar25 = (uint)~(local_1a8 + param_3) >> 0x1f;
          }
          if (uVar25 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar9 = (code *)swi(3);
              iVar16 = (*pcVar9)();
              return iVar16;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (lVar21 + lVar30) * 4) = uVar34;
        }
      }
      iVar16 = iVar16 - iVar33;
    }
    pFVar13 = param_7;
    iVar29 = param_5 + 1;
    local_130._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_130._s_0.Y = _UNK_150a9e648;
    local_130._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_118 = _UNK_150a9e6d8;
    local_110 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_108 = _UNK_1508ffb58;
    local_170 = SplitTriSetMidpoint(this,param_1,param_2,param_3,iVar33,iVar29,param_6,param_7,
                                    param_8,param_9);
    local_16c = SplitTriSetMidpoint(this,param_1,param_2,iVar33 + param_3,iVar16,iVar29,param_6,
                                    pFVar13,param_8,(TAxisAlignedBox3<double> *)&local_130._s_0);
    pTVar14 = param_9;
    pFVar13 = param_8;
    pTVar3 = &param_9->Max;
    dVar35 = (param_9->Min).field0_0x0._s_0.Y;
    uVar22 = local_130._s_0.Y;
    if (dVar35 <= local_130._s_0.Y) {
      uVar22 = dVar35;
    }
    dVar35 = (param_9->Min).field0_0x0._s_0.X;
    uVar36 = local_130._s_0.X;
    if (dVar35 <= local_130._s_0.X) {
      uVar36 = dVar35;
    }
    (param_9->Min).field0_0x0._s_0.Y = (double)uVar22;
    (param_9->Min).field0_0x0._s_0.X = (double)uVar36;
    dVar35 = (pTVar3->field0_0x0)._s_0.X;
    dVar40 = dStack_118;
    if (dStack_118 <= dVar35) {
      dVar40 = dVar35;
    }
    dVar35 = (param_9->Min).field0_0x0._s_0.Z;
    uVar22 = local_130._s_0.Z;
    if (dVar35 <= local_130._s_0.Z) {
      uVar22 = dVar35;
    }
    (pTVar3->field0_0x0)._s_0.X = dVar40;
    (param_9->Min).field0_0x0._s_0.Z = (double)uVar22;
    dVar35 = (param_9->Max).field0_0x0._s_0.Z;
    dVar40 = dStack_108;
    if (dStack_108 <= dVar35) {
      dVar40 = dVar35;
    }
    dVar35 = (param_9->Max).field0_0x0._s_0.Y;
    dVar37 = local_110;
    if (local_110 <= dVar35) {
      dVar37 = dVar35;
    }
    (param_9->Max).field0_0x0._s_0.Z = dVar40;
    (param_9->Max).field0_0x0._s_0.Y = dVar37;
    uVar17 = param_8->IBoxCur;
    param_8->IBoxCur = uVar17 + 1;
    TDynamicVector<int,512>::InsertAt(&param_8->BoxToIndex,&param_8->IIndicesCur,uVar17);
    uVar32 = pFVar13->IIndicesCur;
    pFVar13->IIndicesCur = uVar32 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar13->IndexList,&local_170,uVar32);
    uVar32 = pFVar13->IIndicesCur;
    pFVar13->IIndicesCur = uVar32 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar13->IndexList,&local_16c,uVar32);
    uVar25 = (pFVar13->BoxCenters).CurBlock;
    pTVar27 = &pFVar13->BoxCenters;
    uVar32 = (pFVar13->BoxCenters).CurBlockUsed;
    uVar31 = uVar25 * 0x200 + uVar32;
    dVar35 = ((pTVar14->Min).field0_0x0._s_0.X + (pTVar3->field0_0x0)._s_0.X) * dVar5;
    dVar40 = ((pTVar14->Max).field0_0x0._s_0.Y + (pTVar14->Min).field0_0x0._s_0.Y) * dVar5;
    dVar37 = ((pTVar14->Max).field0_0x0._s_0.Z + (pTVar14->Min).field0_0x0._s_0.Z) * dVar5;
    if (uVar17 == uVar31) {
      if (uVar32 == 0x200) {
        if (uVar25 == (pFVar13->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar27);
        }
        pTVar27->CurBlock = pTVar27->CurBlock + 1;
        uVar25 = pTVar27->CurBlock;
        (pFVar13->BoxCenters).CurBlockUsed = 0;
        uVar32 = uVar28;
      }
    }
    else {
      if (uVar17 <= uVar31) {
        uVar26 = (ulonglong)(uVar17 & 0x1ff);
        lVar30 = *(longlong *)
                  ((pFVar13->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar17 >> 9) * 8);
        *(double *)(lVar30 + uVar26 * 0x18) = dVar35;
        *(double *)(lVar30 + 8 + uVar26 * 0x18) = dVar40;
        *(double *)(lVar30 + 0x10 + uVar26 * 0x18) = dVar37;
        goto LAB_1433d443f;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar27,uVar17);
      uVar32 = (pFVar13->BoxCenters).CurBlockUsed;
      if (uVar32 == 0x200) {
        if (pTVar27->CurBlock == (pFVar13->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar27);
        }
        pTVar27->CurBlock = pTVar27->CurBlock + 1;
        (pFVar13->BoxCenters).CurBlockUsed = 0;
        uVar32 = uVar28;
      }
      uVar25 = pTVar27->CurBlock;
    }
    lVar21 = (longlong)(int)uVar32;
    lVar30 = *(longlong *)
              ((pFVar13->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar25 * 8);
    *(double *)(lVar30 + lVar21 * 0x18) = dVar35;
    *(double *)(lVar30 + 8 + lVar21 * 0x18) = dVar40;
    *(double *)(lVar30 + 0x10 + lVar21 * 0x18) = dVar37;
    puVar2 = &(pFVar13->BoxCenters).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
LAB_1433d443f:
    pFVar13 = param_8;
    pTVar27 = &param_8->BoxExtents;
    uVar25 = pTVar27->CurBlock;
    uVar32 = (param_8->BoxExtents).CurBlockUsed;
    uVar31 = uVar25 * 0x200 + uVar32;
    dVar35 = ((pTVar14->Max).field0_0x0._s_0.X - (pTVar14->Min).field0_0x0._s_0.X) * dVar5;
    dVar40 = ((pTVar14->Max).field0_0x0._s_0.Y - (pTVar14->Min).field0_0x0._s_0.Y) * dVar5;
    dVar5 = ((pTVar14->Max).field0_0x0._s_0.Z - (pTVar14->Min).field0_0x0._s_0.Z) * dVar5;
    if (uVar17 == uVar31) {
      if (uVar32 == 0x200) {
        if (uVar25 == (param_8->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar27);
        }
        pTVar27->CurBlock = pTVar27->CurBlock + 1;
        uVar25 = pTVar27->CurBlock;
        (pFVar13->BoxExtents).CurBlockUsed = 0;
        uVar32 = uVar28;
      }
    }
    else {
      if (uVar17 <= uVar31) {
        uVar26 = (ulonglong)(uVar17 & 0x1ff);
        lVar30 = *(longlong *)
                  ((param_8->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar17 >> 9) * 8);
        *(double *)(lVar30 + uVar26 * 0x18) = dVar35;
        *(double *)(lVar30 + 8 + uVar26 * 0x18) = dVar40;
        *(double *)(lVar30 + 0x10 + uVar26 * 0x18) = dVar5;
        return uVar17;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar27,uVar17);
      uVar32 = (pFVar13->BoxExtents).CurBlockUsed;
      if (uVar32 == 0x200) {
        if (pTVar27->CurBlock == (pFVar13->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar27);
        }
        pTVar27->CurBlock = pTVar27->CurBlock + 1;
        (pFVar13->BoxExtents).CurBlockUsed = 0;
        uVar32 = uVar28;
      }
      uVar25 = pTVar27->CurBlock;
    }
    lVar21 = (longlong)(int)uVar32;
    lVar30 = *(longlong *)
              ((pFVar13->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar25 * 8);
    *(double *)(lVar30 + lVar21 * 0x18) = dVar35;
    *(double *)(lVar30 + 8 + lVar21 * 0x18) = dVar40;
    *(double *)(lVar30 + 0x10 + lVar21 * 0x18) = dVar5;
    puVar2 = &(pFVar13->BoxExtents).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
    return uVar17;
  }
  uVar17 = param_7->IBoxCur;
  piVar1 = &param_7->IIndicesCur;
  param_7->IBoxCur = uVar17 + 1;
  param_9._0_4_ = uVar17;
  TDynamicVector<int,512>::InsertAt(&param_7->BoxToIndex,piVar1,uVar17);
  uVar32 = *piVar1;
  this_00 = &pFVar13->IndexList;
  *piVar1 = uVar32 + 1;
  TDynamicVector<int,512>::InsertAt(this_00,&param_4,uVar32);
  if (0 < iVar16) {
    local_1b0 = local_1b0 * 4;
    param_6 = param_3;
    do {
      uVar17 = *piVar1;
      *piVar1 = uVar17 + 1;
      uVar28 = ~param_6;
      uVar32 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar32 = uVar28 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        iVar16 = (*pcVar9)();
        return iVar16;
      }
      uVar32 = this_00->CurBlock;
      uVar25 = (pFVar13->IndexList).CurBlockUsed;
      uVar31 = uVar32 * 0x200 + uVar25;
      pFVar7 = (param_1->AllocatorInstance).Data;
      if (uVar17 == uVar31) {
        if (uVar25 == 0x200) {
          if (uVar32 == (pFVar13->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar25 = 0;
          uVar32 = this_00->CurBlock;
          (pFVar13->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar13->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar32 * 8) +
         (longlong)(int)uVar25 * 4) = *(undefined4 *)(pFVar7 + local_1b0);
        puVar2 = &(pFVar13->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else if (uVar31 < uVar17) {
        TDynamicVector<int,512>::Resize(this_00,uVar17);
        uVar17 = (pFVar13->IndexList).CurBlockUsed;
        if (uVar17 == 0x200) {
          if (this_00->CurBlock == (pFVar13->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar17 = 0;
          (pFVar13->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar13->IndexList).Blocks.AllocatorInstance.Data +
           (longlong)(int)this_00->CurBlock * 8) + (longlong)(int)uVar17 * 4) =
             *(undefined4 *)(pFVar7 + local_1b0);
        puVar2 = &(pFVar13->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else {
        *(undefined4 *)
         (*(longlong *)
           ((pFVar13->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8) +
         (ulonglong)(uVar17 & 0x1ff) * 4) = *(undefined4 *)(pFVar7 + local_1b0);
      }
      uVar17 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar17 = uVar28 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        iVar16 = (*pcVar9)();
        return iVar16;
      }
      pTVar20 = TMeshQueries<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>
                ::GetTriBounds(local_d0,*(FHullMeshWrapper **)((longlong)this + 8),
                               *(int *)((param_1->AllocatorInstance).Data + local_1b0));
      param_6 = param_6 + 1;
      local_1b0 = local_1b0 + 4;
      dVar5 = (pTVar20->Min).field0_0x0._s_0.X;
      dVar35 = (pTVar14->Min).field0_0x0._s_0.X;
      if (dVar35 <= dVar5) {
        dVar5 = dVar35;
      }
      (pTVar14->Min).field0_0x0._s_0.X = dVar5;
      dVar5 = (pTVar20->Min).field0_0x0._s_0.Y;
      dVar35 = (pTVar14->Min).field0_0x0._s_0.Y;
      if (dVar35 <= dVar5) {
        dVar5 = dVar35;
      }
      (pTVar14->Min).field0_0x0._s_0.Y = dVar5;
      dVar5 = (pTVar20->Min).field0_0x0._s_0.Z;
      dVar35 = (pTVar14->Min).field0_0x0._s_0.Z;
      if (dVar35 <= dVar5) {
        dVar5 = dVar35;
      }
      (pTVar14->Min).field0_0x0._s_0.Z = dVar5;
      dVar5 = (pTVar20->Max).field0_0x0._s_0.X;
      dVar35 = (pTVar14->Max).field0_0x0._s_0.X;
      if (dVar5 <= dVar35) {
        dVar5 = dVar35;
      }
      (pTVar14->Max).field0_0x0._s_0.X = dVar5;
      dVar35 = (pTVar20->Max).field0_0x0._s_0.Y;
      dVar5 = (pTVar14->Max).field0_0x0._s_0.Y;
      if (dVar35 <= dVar5) {
        dVar35 = dVar5;
      }
      (pTVar14->Max).field0_0x0._s_0.Y = dVar35;
      dVar5 = (pTVar20->Max).field0_0x0._s_0.Z;
      dVar35 = (pTVar14->Max).field0_0x0._s_0.Z;
      if (dVar5 <= dVar35) {
        dVar5 = dVar35;
      }
      (pTVar14->Max).field0_0x0._s_0.Z = dVar5;
      uVar17 = (uint)param_9;
    } while (param_6 - param_3 < iVar16);
  }
  pFVar13 = param_7;
  dVar37 = __real_3fe0000000000000;
  pTVar27 = &param_7->BoxCenters;
  uVar28 = pTVar27->CurBlock;
  uVar32 = (param_7->BoxCenters).CurBlockUsed;
  uVar25 = uVar28 * 0x200 + uVar32;
  dVar35 = ((pTVar14->Max).field0_0x0._s_0.X + (pTVar14->Min).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar5 = ((pTVar14->Max).field0_0x0._s_0.Y + (pTVar14->Min).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar40 = ((pTVar14->Max).field0_0x0._s_0.Z + (pTVar14->Min).field0_0x0._s_0.Z) *
           __real_3fe0000000000000;
  if (uVar17 == uVar25) {
    if (uVar32 == 0x200) {
      if (uVar28 == (param_7->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar27);
      }
      pTVar27->CurBlock = pTVar27->CurBlock + 1;
      uVar32 = 0;
      uVar28 = pTVar27->CurBlock;
      (pFVar13->BoxCenters).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar17 <= uVar25) {
      uVar26 = (ulonglong)(uVar17 & 0x1ff);
      lVar30 = *(longlong *)
                ((param_7->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8)
      ;
      *(double *)(lVar30 + uVar26 * 0x18) = dVar35;
      *(double *)(lVar30 + 8 + uVar26 * 0x18) = dVar5;
      *(double *)(lVar30 + 0x10 + uVar26 * 0x18) = dVar40;
      goto LAB_1433d39f7;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar27,uVar17);
    uVar32 = (pFVar13->BoxCenters).CurBlockUsed;
    if (uVar32 == 0x200) {
      if (pTVar27->CurBlock == (pFVar13->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar27);
      }
      pTVar27->CurBlock = pTVar27->CurBlock + 1;
      uVar32 = 0;
      (pFVar13->BoxCenters).CurBlockUsed = 0;
    }
    uVar28 = pTVar27->CurBlock;
  }
  lVar21 = (longlong)(int)uVar32;
  lVar30 = *(longlong *)
            ((pFVar13->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar28 * 8);
  *(double *)(lVar30 + lVar21 * 0x18) = dVar35;
  *(double *)(lVar30 + 8 + lVar21 * 0x18) = dVar5;
  *(double *)(lVar30 + 0x10 + lVar21 * 0x18) = dVar40;
  puVar2 = &(pFVar13->BoxCenters).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
LAB_1433d39f7:
  pFVar13 = param_7;
  pTVar27 = &param_7->BoxExtents;
  uVar28 = pTVar27->CurBlock;
  uVar32 = (param_7->BoxExtents).CurBlockUsed;
  uVar25 = uVar28 * 0x200 + uVar32;
  dVar35 = ((pTVar14->Max).field0_0x0._s_0.X - (pTVar14->Min).field0_0x0._s_0.X) * dVar37;
  dVar5 = ((pTVar14->Max).field0_0x0._s_0.Y - (pTVar14->Min).field0_0x0._s_0.Y) * dVar37;
  dVar37 = ((pTVar14->Max).field0_0x0._s_0.Z - (pTVar14->Min).field0_0x0._s_0.Z) * dVar37;
  if (uVar17 == uVar25) {
    if (uVar32 == 0x200) {
      if (uVar28 == (param_7->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar27);
      }
      pTVar27->CurBlock = pTVar27->CurBlock + 1;
      uVar32 = 0;
      uVar28 = pTVar27->CurBlock;
      (pFVar13->BoxExtents).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar17 <= uVar25) {
      uVar26 = (ulonglong)(uVar17 & 0x1ff);
      lVar30 = *(longlong *)
                ((param_7->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8)
      ;
      *(double *)(lVar30 + uVar26 * 0x18) = dVar35;
      *(double *)(lVar30 + 8 + uVar26 * 0x18) = dVar5;
      *(double *)(lVar30 + 0x10 + uVar26 * 0x18) = dVar37;
      return ~uVar17;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar27,uVar17);
    uVar32 = (pFVar13->BoxExtents).CurBlockUsed;
    if (uVar32 == 0x200) {
      if (pTVar27->CurBlock == (pFVar13->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar27);
      }
      pTVar27->CurBlock = pTVar27->CurBlock + 1;
      (pFVar13->BoxExtents).CurBlockUsed = 0;
      uVar32 = 0;
    }
    uVar28 = pTVar27->CurBlock;
  }
  lVar21 = (longlong)(int)uVar32;
  lVar30 = *(longlong *)
            ((pFVar13->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar28 * 8);
  *(double *)(lVar30 + lVar21 * 0x18) = dVar35;
  *(double *)(lVar30 + 8 + lVar21 * 0x18) = dVar5;
  *(double *)(lVar30 + 0x10 + lVar21 * 0x18) = dVar37;
  puVar2 = &(pFVar13->BoxExtents).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
  return ~uVar17;
}

// SplitTriSetMidpoint @ 1433d45a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::SplitTriSetMidpoint
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          int param_4,int param_5,int param_6,FBoxesSet *param_7,FBoxesSet *param_8,
          TAxisAlignedBox3<double> *param_9)

{
  int *piVar1;
  uint *puVar2;
  TVector<double> *pTVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  FBoxesSet *pFVar17;
  TAxisAlignedBox3<double> *pTVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  double *pdVar23;
  longlong lVar24;
  undefined8 uVar25;
  uint uVar26;
  longlong *plVar27;
  uint uVar28;
  ulonglong uVar29;
  TDynamicVector<int,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar30;
  uint uVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint uVar35;
  longlong lVar36;
  uint uVar37;
  int iVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  int local_1c8;
  longlong local_1c0;
  int local_198 [2];
  int local_190;
  int local_18c;
  longlong local_188;
  ulonglong local_180;
  uint local_178;
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  
  pTVar18 = param_9;
  pFVar17 = param_7;
  iVar20 = param_4;
  pdVar23 = &local_128;
  uVar33 = (ulonglong)param_3;
  if (param_1->ArrayNum < 1) {
    local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pdVar23 = &local_c8;
    local_c8 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_c0 = _UNK_150a9e648;
    local_a8 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_a0 = _UNK_1508ffb58;
    local_b8 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_b0 = _UNK_150a9e6d8;
  }
  dVar39 = pdVar23[1];
  dVar41 = pdVar23[2];
  dVar40 = pdVar23[3];
  (param_9->Min).field0_0x0._s_0.X = *pdVar23;
  (param_9->Min).field0_0x0._s_0.Y = dVar39;
  dVar39 = pdVar23[4];
  dVar4 = pdVar23[5];
  (param_9->Min).field0_0x0._s_0.Z = dVar41;
  (param_9->Max).field0_0x0._s_0.X = dVar40;
  (param_9->Max).field0_0x0._s_0.Y = dVar39;
  (param_9->Max).field0_0x0._s_0.Z = dVar4;
  if (param_6 < param_4) {
    local_198[0] = param_5;
    Core::Private::Function::CheckCallable(*(void **)&this->GetSplitAxis);
    plVar9 = *(longlong **)&(this->GetSplitAxis).field_0x28;
    pcVar12 = *(code **)&this->GetSplitAxis;
    plVar27 = (longlong *)&(this->GetSplitAxis).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar27 = plVar9;
    }
    uVar25 = (**(code **)(*plVar27 + 8))();
    uVar45 = (undefined4)__real_7fefffffffffffff;
    uVar48 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar42 = (undefined4)__real_ffefffffffffffff;
    uVar43 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    uVar21 = (*pcVar12)(uVar25,local_198,pTVar18);
    iVar38 = 0;
    uVar31 = 0;
    uVar29 = (ulonglong)(int)uVar21;
    uVar37 = 0;
    if (0 < iVar20) {
      lVar36 = (uVar29 + uVar33 * 3) * 8;
      uVar28 = param_3;
      do {
        uVar35 = uVar37;
        if ((int)uVar28 < param_2->ArrayNum) {
          uVar35 = ~uVar28 >> 0x1f;
        }
        if (uVar35 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar12 = (code *)swi(3);
            iVar20 = (*pcVar12)();
            return iVar20;
          }
        }
        pFVar8 = (param_2->AllocatorInstance).Data;
        if (2 < uVar29) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          if (bVar19) {
            pcVar12 = (code *)swi(3);
            iVar20 = (*pcVar12)();
            return iVar20;
          }
        }
        dVar39 = *(double *)(pFVar8 + lVar36);
        if (dVar39 <= (double)CONCAT44(uVar48,uVar45)) {
          uVar45 = SUB84(dVar39,0);
          uVar48 = (undefined4)((ulonglong)dVar39 >> 0x20);
        }
        dVar39 = *(double *)(pFVar8 + lVar36);
        if ((double)CONCAT44(uVar43,uVar42) <= dVar39) {
          uVar42 = SUB84(dVar39,0);
          uVar43 = (undefined4)((ulonglong)dVar39 >> 0x20);
        }
        uVar28 = uVar28 + 1;
        lVar36 = lVar36 + 0x18;
      } while ((int)(uVar28 - param_3) < iVar20);
    }
    dVar41 = __real_3fe0000000000000;
    dVar39 = ((double)CONCAT44(uVar43,uVar42) + (double)CONCAT44(uVar48,uVar45)) *
             __real_3fe0000000000000;
    if ((double)CONCAT44(uVar43,uVar42) - (double)CONCAT44(uVar48,uVar45) <= __real_3e45798ee2308c3a
       ) {
      iVar38 = iVar20 / 2;
      iVar20 = iVar20 - iVar38;
    }
    else {
      local_1c8 = iVar20 + -1;
      local_188 = (longlong)local_1c8;
      if (0 < local_1c8) {
        local_1c0 = 0;
        uVar34 = uVar33;
        iVar38 = 0;
        while( true ) {
          uVar28 = iVar38 + (int)uVar34;
          lVar36 = (uVar29 + ((int)uVar34 + local_1c0) * 3) * 8;
          while( true ) {
            uVar35 = uVar37;
            if ((int)uVar28 < param_2->ArrayNum) {
              uVar35 = ~uVar28 >> 0x1f;
            }
            if (uVar35 == 0) {
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar19) {
                pcVar12 = (code *)swi(3);
                iVar20 = (*pcVar12)();
                return iVar20;
              }
            }
            pFVar8 = (param_2->AllocatorInstance).Data;
            if (2 < uVar21) {
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar19) {
                pcVar12 = (code *)swi(3);
                iVar20 = (*pcVar12)();
                return iVar20;
              }
            }
            if (dVar39 < *(double *)(pFVar8 + lVar36)) break;
            local_1c0 = local_1c0 + 1;
            iVar38 = iVar38 + 1;
            uVar28 = uVar28 + 1;
            lVar36 = lVar36 + 0x18;
          }
          lVar24 = (param_3 + local_188) * 0x18;
          uVar28 = local_1c8 + param_3;
          lVar36 = local_188;
          while( true ) {
            uVar22 = 0;
            uVar35 = uVar22;
            if ((int)uVar28 < param_2->ArrayNum) {
              uVar35 = ~uVar28 >> 0x1f;
            }
            if (uVar35 == 0) {
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar19) {
                pcVar12 = (code *)swi(3);
                iVar20 = (*pcVar12)();
                return iVar20;
              }
            }
            pFVar8 = (param_2->AllocatorInstance).Data;
            if (2 < uVar21) {
              bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar19) {
                pcVar12 = (code *)swi(3);
                iVar20 = (*pcVar12)();
                return iVar20;
              }
            }
            if (*(double *)(pFVar8 + uVar29 * 8 + lVar24) <= dVar39) break;
            local_1c8 = local_1c8 + -1;
            uVar28 = uVar28 - 1;
            lVar36 = lVar36 + -1;
            lVar24 = lVar24 + -0x18;
          }
          iVar20 = param_4;
          local_188 = lVar36;
          if (lVar36 <= local_1c0) break;
          uVar35 = param_3 + iVar38;
          uVar28 = uVar22;
          if ((int)uVar35 < param_2->ArrayNum) {
            uVar28 = ~uVar35 >> 0x1f;
          }
          if (uVar28 == 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              iVar20 = (*pcVar12)();
              return iVar20;
            }
          }
          pFVar10 = (param_2->AllocatorInstance).Data;
          pFVar8 = pFVar10 + (uVar33 + local_1c0) * 0x18;
          uVar13 = *(undefined8 *)pFVar8;
          uVar14 = *(undefined8 *)(pFVar8 + 8);
          lVar24 = uVar33 + lVar36;
          uVar25 = *(undefined8 *)(pFVar10 + (uVar33 + local_1c0) * 0x18 + 0x10);
          uVar26 = (uint)~(param_3 + local_1c8) >> 0x1f;
          uVar28 = uVar22;
          if (param_3 + local_1c8 < param_2->ArrayNum) {
            uVar28 = uVar26;
          }
          if (uVar28 == 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              iVar20 = (*pcVar12)();
              return iVar20;
            }
          }
          pFVar10 = (param_2->AllocatorInstance).Data;
          pFVar8 = pFVar10 + lVar24 * 0x18;
          uVar15 = *(undefined8 *)pFVar8;
          uVar16 = *(undefined8 *)(pFVar8 + 8);
          uVar6 = *(undefined8 *)(pFVar10 + lVar24 * 0x18 + 0x10);
          uVar28 = uVar22;
          if ((int)uVar35 < param_2->ArrayNum) {
            uVar28 = ~uVar35 >> 0x1f;
          }
          uVar34 = (ulonglong)(uint)param_3;
          if (uVar28 == 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              iVar20 = (*pcVar12)();
              return iVar20;
            }
          }
          pFVar10 = (param_2->AllocatorInstance).Data;
          pFVar8 = pFVar10 + (param_3 + local_1c0) * 0x18;
          *(undefined8 *)pFVar8 = uVar15;
          *(undefined8 *)(pFVar8 + 8) = uVar16;
          *(undefined8 *)(pFVar10 + (param_3 + local_1c0) * 0x18 + 0x10) = uVar6;
          uVar28 = uVar22;
          if (local_1c8 + param_3 < param_2->ArrayNum) {
            uVar28 = uVar26;
          }
          if (uVar28 == 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              iVar20 = (*pcVar12)();
              return iVar20;
            }
          }
          pFVar10 = (param_2->AllocatorInstance).Data;
          pFVar8 = pFVar10 + lVar24 * 0x18;
          *(undefined8 *)pFVar8 = uVar13;
          *(undefined8 *)(pFVar8 + 8) = uVar14;
          *(undefined8 *)(pFVar10 + lVar24 * 0x18 + 0x10) = uVar25;
          uVar28 = uVar22;
          if (iVar38 + param_3 < param_1->ArrayNum) {
            uVar28 = (uint)~(iVar38 + param_3) >> 0x1f;
          }
          if (uVar28 == 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              iVar20 = (*pcVar12)();
              return iVar20;
            }
          }
          uVar42 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_1c0) * 4);
          uVar28 = uVar22;
          if (local_1c8 + param_3 < param_1->ArrayNum) {
            uVar28 = (uint)~(local_1c8 + param_3) >> 0x1f;
          }
          if (uVar28 == 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              iVar20 = (*pcVar12)();
              return iVar20;
            }
          }
          uVar43 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + lVar36) * 4);
          if (iVar38 + param_3 < param_1->ArrayNum) {
            uVar22 = (uint)~(iVar38 + param_3) >> 0x1f;
          }
          if (uVar22 == 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              iVar20 = (*pcVar12)();
              return iVar20;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_1c0) * 4) = uVar43;
          uVar28 = uVar37;
          if (local_1c8 + param_3 < param_1->ArrayNum) {
            uVar28 = (uint)~(local_1c8 + param_3) >> 0x1f;
          }
          if (uVar28 == 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              iVar20 = (*pcVar12)();
              return iVar20;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + lVar36) * 4) = uVar42;
        }
      }
      iVar20 = iVar20 - iVar38;
    }
    pFVar17 = param_7;
    iVar32 = param_5 + 1;
    local_f8._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_f8._s_0.Y = _UNK_150a9e648;
    local_f8._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_e0 = _UNK_150a9e6d8;
    local_d8 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_d0 = _UNK_1508ffb58;
    local_190 = SplitTriSetMidpoint(this,param_1,param_2,param_3,iVar38,iVar32,param_6,param_7,
                                    param_8,param_9);
    local_18c = SplitTriSetMidpoint(this,param_1,param_2,iVar38 + param_3,iVar20,iVar32,param_6,
                                    pFVar17,param_8,(TAxisAlignedBox3<double> *)&local_f8._s_0);
    pTVar18 = param_9;
    pFVar17 = param_8;
    pTVar3 = &param_9->Max;
    uVar25 = (param_9->Min).field0_0x0._s_0.X;
    if (local_f8._s_0.X <= (double)uVar25) {
      uVar25 = local_f8._s_0.X;
    }
    (param_9->Min).field0_0x0._s_0.X = (double)uVar25;
    uVar25 = (param_9->Min).field0_0x0._s_0.Y;
    if (local_f8._s_0.Y <= (double)uVar25) {
      uVar25 = local_f8._s_0.Y;
    }
    (param_9->Min).field0_0x0._s_0.Y = (double)uVar25;
    uVar25 = (param_9->Min).field0_0x0._s_0.Z;
    if (local_f8._s_0.Z <= (double)uVar25) {
      uVar25 = local_f8._s_0.Z;
    }
    (param_9->Min).field0_0x0._s_0.Z = (double)uVar25;
    dVar39 = (pTVar3->field0_0x0)._s_0.X;
    if (dVar39 <= dStack_e0) {
      dVar39 = dStack_e0;
    }
    dVar40 = (param_9->Max).field0_0x0._s_0.Z;
    (pTVar3->field0_0x0)._s_0.X = dVar39;
    dVar39 = (param_9->Max).field0_0x0._s_0.Y;
    if (dVar39 <= local_d8) {
      dVar39 = local_d8;
    }
    if (dVar40 <= dStack_d0) {
      dVar40 = dStack_d0;
    }
    (param_9->Max).field0_0x0._s_0.Y = dVar39;
    (param_9->Max).field0_0x0._s_0.Z = dVar40;
    uVar21 = param_8->IBoxCur;
    param_8->IBoxCur = uVar21 + 1;
    TDynamicVector<int,512>::InsertAt(&param_8->BoxToIndex,&param_8->IIndicesCur,uVar21);
    uVar37 = pFVar17->IIndicesCur;
    pFVar17->IIndicesCur = uVar37 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar17->IndexList,&local_190,uVar37);
    uVar37 = pFVar17->IIndicesCur;
    pFVar17->IIndicesCur = uVar37 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar17->IndexList,&local_18c,uVar37);
    uVar28 = (pFVar17->BoxCenters).CurBlock;
    pTVar30 = &pFVar17->BoxCenters;
    uVar37 = (pFVar17->BoxCenters).CurBlockUsed;
    uVar35 = uVar28 * 0x200 + uVar37;
    dVar39 = ((pTVar3->field0_0x0)._s_0.X + (pTVar18->Min).field0_0x0._s_0.X) * dVar41;
    dVar40 = ((pTVar18->Min).field0_0x0._s_0.Y + (pTVar18->Max).field0_0x0._s_0.Y) * dVar41;
    dVar4 = ((pTVar18->Min).field0_0x0._s_0.Z + (pTVar18->Max).field0_0x0._s_0.Z) * dVar41;
    if (uVar21 == uVar35) {
      if (uVar37 == 0x200) {
        if (uVar28 == (pFVar17->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar30);
        }
        pTVar30->CurBlock = pTVar30->CurBlock + 1;
        uVar28 = pTVar30->CurBlock;
        (pFVar17->BoxCenters).CurBlockUsed = 0;
        uVar37 = uVar31;
      }
    }
    else {
      if (uVar21 <= uVar35) {
        uVar33 = (ulonglong)(uVar21 & 0x1ff);
        lVar36 = *(longlong *)
                  ((pFVar17->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar21 >> 9) * 8);
        *(double *)(lVar36 + uVar33 * 0x18) = dVar39;
        *(double *)(lVar36 + 8 + uVar33 * 0x18) = dVar40;
        *(double *)(lVar36 + 0x10 + uVar33 * 0x18) = dVar4;
        goto LAB_1433d568e;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar30,uVar21);
      uVar37 = (pFVar17->BoxCenters).CurBlockUsed;
      if (uVar37 == 0x200) {
        if (pTVar30->CurBlock == (pFVar17->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar30);
        }
        pTVar30->CurBlock = pTVar30->CurBlock + 1;
        (pFVar17->BoxCenters).CurBlockUsed = 0;
        uVar37 = uVar31;
      }
      uVar28 = pTVar30->CurBlock;
    }
    lVar24 = (longlong)(int)uVar37;
    lVar36 = *(longlong *)
              ((pFVar17->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar28 * 8);
    *(double *)(lVar36 + lVar24 * 0x18) = dVar39;
    *(double *)(lVar36 + 8 + lVar24 * 0x18) = dVar40;
    *(double *)(lVar36 + 0x10 + lVar24 * 0x18) = dVar4;
    puVar2 = &(pFVar17->BoxCenters).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
LAB_1433d568e:
    pFVar17 = param_8;
    pTVar30 = &param_8->BoxExtents;
    uVar28 = pTVar30->CurBlock;
    uVar37 = (param_8->BoxExtents).CurBlockUsed;
    uVar35 = uVar28 * 0x200 + uVar37;
    dVar39 = ((pTVar18->Max).field0_0x0._s_0.X - (pTVar18->Min).field0_0x0._s_0.X) * dVar41;
    dVar40 = ((pTVar18->Max).field0_0x0._s_0.Y - (pTVar18->Min).field0_0x0._s_0.Y) * dVar41;
    dVar41 = ((pTVar18->Max).field0_0x0._s_0.Z - (pTVar18->Min).field0_0x0._s_0.Z) * dVar41;
    if (uVar21 == uVar35) {
      if (uVar37 == 0x200) {
        if (uVar28 == (param_8->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar30);
        }
        pTVar30->CurBlock = pTVar30->CurBlock + 1;
        uVar28 = pTVar30->CurBlock;
        (pFVar17->BoxExtents).CurBlockUsed = 0;
        uVar37 = uVar31;
      }
    }
    else {
      if (uVar21 <= uVar35) {
        uVar33 = (ulonglong)(uVar21 & 0x1ff);
        lVar36 = *(longlong *)
                  ((param_8->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar21 >> 9) * 8);
        *(double *)(lVar36 + uVar33 * 0x18) = dVar39;
        *(double *)(lVar36 + 8 + uVar33 * 0x18) = dVar40;
        *(double *)(lVar36 + 0x10 + uVar33 * 0x18) = dVar41;
        return uVar21;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar30,uVar21);
      uVar37 = (pFVar17->BoxExtents).CurBlockUsed;
      if (uVar37 == 0x200) {
        if (pTVar30->CurBlock == (pFVar17->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar30);
        }
        pTVar30->CurBlock = pTVar30->CurBlock + 1;
        (pFVar17->BoxExtents).CurBlockUsed = 0;
        uVar37 = uVar31;
      }
      uVar28 = pTVar30->CurBlock;
    }
    lVar24 = (longlong)(int)uVar37;
    lVar36 = *(longlong *)
              ((pFVar17->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar28 * 8);
    *(double *)(lVar36 + lVar24 * 0x18) = dVar39;
    *(double *)(lVar36 + 8 + lVar24 * 0x18) = dVar40;
    *(double *)(lVar36 + 0x10 + lVar24 * 0x18) = dVar41;
    puVar2 = &(pFVar17->BoxExtents).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
    return uVar21;
  }
  uVar21 = param_7->IBoxCur;
  piVar1 = &param_7->IIndicesCur;
  param_7->IBoxCur = uVar21 + 1;
  param_9._0_4_ = uVar21;
  TDynamicVector<int,512>::InsertAt(&param_7->BoxToIndex,piVar1,uVar21);
  uVar37 = *piVar1;
  this_00 = &pFVar17->IndexList;
  *piVar1 = uVar37 + 1;
  TDynamicVector<int,512>::InsertAt(this_00,&param_4,uVar37);
  if (0 < iVar20) {
    lVar36 = uVar33 * 4;
    param_6 = param_3;
    do {
      uVar21 = *piVar1;
      *piVar1 = uVar21 + 1;
      uVar31 = ~param_6;
      uVar37 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar37 = uVar31 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        iVar20 = (*pcVar12)();
        return iVar20;
      }
      uVar37 = this_00->CurBlock;
      uVar28 = (pFVar17->IndexList).CurBlockUsed;
      uVar35 = uVar37 * 0x200 + uVar28;
      pFVar8 = (param_1->AllocatorInstance).Data;
      if (uVar21 == uVar35) {
        if (uVar28 == 0x200) {
          if (uVar37 == (pFVar17->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar28 = 0;
          uVar37 = this_00->CurBlock;
          (pFVar17->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar17->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar37 * 8) +
         (longlong)(int)uVar28 * 4) = *(undefined4 *)(pFVar8 + lVar36);
        puVar2 = &(pFVar17->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else if (uVar35 < uVar21) {
        TDynamicVector<int,512>::Resize(this_00,uVar21);
        uVar21 = (pFVar17->IndexList).CurBlockUsed;
        if (uVar21 == 0x200) {
          if (this_00->CurBlock == (pFVar17->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar21 = 0;
          (pFVar17->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar17->IndexList).Blocks.AllocatorInstance.Data +
           (longlong)(int)this_00->CurBlock * 8) + (longlong)(int)uVar21 * 4) =
             *(undefined4 *)(pFVar8 + lVar36);
        puVar2 = &(pFVar17->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else {
        *(undefined4 *)
         (*(longlong *)
           ((pFVar17->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8) +
         (ulonglong)(uVar21 & 0x1ff) * 4) = *(undefined4 *)(pFVar8 + lVar36);
      }
      uVar21 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar21 = uVar31 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        iVar20 = (*pcVar12)();
        return iVar20;
      }
      uVar21 = *(uint *)((param_1->AllocatorInstance).Data + lVar36);
      uVar33 = (ulonglong)(uVar21 & 0x1ff);
      pFVar8 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
      lVar24 = *(longlong *)
                ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar21 >> 9) * 8);
      local_180 = *(ulonglong *)(lVar24 + uVar33 * 0xc);
      local_178 = *(uint *)(lVar24 + 8 + uVar33 * 0xc);
      local_170 = *(undefined1 (*) [16])
                   (*(longlong *)(pFVar8 + (ulonglong)((uint)local_180 >> 9) * 8) +
                   (ulonglong)((uint)local_180 & 0x1ff) * 0x18);
      uVar42 = local_170._0_4_;
      uVar43 = local_170._4_4_;
      local_160 = *(double *)
                   (*(longlong *)(pFVar8 + (ulonglong)((uint)local_180 >> 9) * 8) + 0x10 +
                   (ulonglong)((uint)local_180 & 0x1ff) * 0x18);
      uVar33 = (ulonglong)((uint)(local_180 >> 0x20) & 0x1ff);
      dVar40 = local_170._0_8_;
      auVar7 = *(undefined1 (*) [16])
                (*(longlong *)(pFVar8 + (local_180 >> 0x29) * 8) + uVar33 * 0x18);
      dVar41 = auVar7._0_8_;
      dVar39 = *(double *)(*(longlong *)(pFVar8 + (local_180 >> 0x29) * 8) + 0x10 + uVar33 * 0x18);
      if ((dVar40 <= dVar41) && (bVar19 = dVar40 < dVar41, dVar41 = dVar40, bVar19)) {
        uVar42 = auVar7._0_4_;
        uVar43 = auVar7._4_4_;
      }
      local_158._8_8_ = local_170._8_8_;
      dVar40 = auVar7._8_8_;
      uVar45 = auVar7._8_4_;
      uVar48 = auVar7._12_4_;
      if (((double)local_158._8_8_ <= dVar40) &&
         (uVar45 = local_170._8_4_, uVar48 = local_170._12_4_, (double)local_158._8_8_ < dVar40)) {
        local_158._8_8_ = dVar40;
      }
      uVar46 = (undefined4)((ulonglong)local_160 >> 0x20);
      uVar44 = SUB84(dVar39,0);
      uVar47 = (undefined4)((ulonglong)dVar39 >> 0x20);
      dVar40 = local_160;
      if ((local_160 <= dVar39) &&
         (uVar44 = SUB84(local_160,0), uVar47 = uVar46, local_160 < dVar39)) {
        dVar40 = dVar39;
      }
      auVar7 = *(undefined1 (*) [16])
                (*(longlong *)(pFVar8 + (ulonglong)(local_178 >> 9) * 8) +
                (ulonglong)(local_178 & 0x1ff) * 0x18);
      dVar39 = auVar7._0_8_;
      local_130 = *(double *)
                   (*(longlong *)(pFVar8 + (ulonglong)(local_178 >> 9) * 8) + 0x10 +
                   (ulonglong)(local_178 & 0x1ff) * 0x18);
      if ((dVar41 <= dVar39) &&
         (bVar19 = dVar39 != (double)CONCAT44(uVar43,uVar42),
         bVar11 = (double)CONCAT44(uVar43,uVar42) <= dVar39, dVar39 = dVar41, bVar11 && bVar19)) {
        uVar42 = auVar7._0_4_;
        uVar43 = auVar7._4_4_;
      }
      dVar41 = auVar7._8_8_;
      uVar46 = auVar7._8_4_;
      uVar49 = auVar7._12_4_;
      if (((double)CONCAT44(uVar48,uVar45) <= dVar41) &&
         (uVar46 = uVar45, uVar49 = uVar48, (double)local_158._8_8_ < dVar41)) {
        local_158._8_8_ = dVar41;
      }
      uVar45 = SUB84(local_130,0);
      uVar48 = (undefined4)((ulonglong)local_130 >> 0x20);
      if (((double)CONCAT44(uVar47,uVar44) <= local_130) &&
         (uVar45 = uVar44, uVar48 = uVar47, dVar40 < local_130)) {
        dVar40 = local_130;
      }
      dVar41 = (pTVar18->Min).field0_0x0._s_0.Y;
      dVar4 = (pTVar18->Min).field0_0x0._s_0.Z;
      if ((double)CONCAT44(uVar49,uVar46) <= dVar41) {
        dVar41 = (double)CONCAT44(uVar49,uVar46);
      }
      dVar5 = (pTVar18->Min).field0_0x0._s_0.X;
      if (dVar5 <= dVar39) {
        dVar39 = dVar5;
      }
      dVar5 = (pTVar18->Max).field0_0x0._s_0.Y;
      if ((double)local_158._8_8_ <= dVar5) {
        local_158._8_8_ = dVar5;
      }
      dVar5 = (pTVar18->Max).field0_0x0._s_0.Z;
      if (dVar40 <= dVar5) {
        dVar40 = dVar5;
      }
      param_6 = param_6 + 1;
      if ((double)CONCAT44(uVar48,uVar45) <= dVar4) {
        dVar4 = (double)CONCAT44(uVar48,uVar45);
      }
      (pTVar18->Min).field0_0x0._s_0.Y = dVar41;
      dVar41 = (pTVar18->Max).field0_0x0._s_0.X;
      lVar36 = lVar36 + 4;
      if (dVar41 <= (double)CONCAT44(uVar43,uVar42)) {
        dVar41 = (double)CONCAT44(uVar43,uVar42);
      }
      (pTVar18->Min).field0_0x0._s_0.X = dVar39;
      (pTVar18->Min).field0_0x0._s_0.Z = dVar4;
      (pTVar18->Max).field0_0x0._s_0.Y = (double)local_158._8_8_;
      (pTVar18->Max).field0_0x0._s_0.X = dVar41;
      (pTVar18->Max).field0_0x0._s_0.Z = dVar40;
      uVar21 = (uint)param_9;
      local_158 = local_170;
      local_148 = local_160;
    } while (param_6 - param_3 < iVar20);
  }
  pFVar17 = param_7;
  dVar4 = __real_3fe0000000000000;
  uVar31 = (param_7->BoxCenters).CurBlock;
  uVar37 = (param_7->BoxCenters).CurBlockUsed;
  uVar28 = uVar31 * 0x200 + uVar37;
  dVar39 = ((pTVar18->Max).field0_0x0._s_0.X + (pTVar18->Min).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar41 = ((pTVar18->Max).field0_0x0._s_0.Y + (pTVar18->Min).field0_0x0._s_0.Y) *
           __real_3fe0000000000000;
  dVar40 = ((pTVar18->Max).field0_0x0._s_0.Z + (pTVar18->Min).field0_0x0._s_0.Z) *
           __real_3fe0000000000000;
  if (uVar21 == uVar28) {
    if (uVar37 == 0x200) {
      if (uVar31 == (param_7->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&param_7->BoxCenters);
      }
      (pFVar17->BoxCenters).CurBlock = (pFVar17->BoxCenters).CurBlock + 1;
      uVar37 = 0;
      uVar31 = (pFVar17->BoxCenters).CurBlock;
      (pFVar17->BoxCenters).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar21 <= uVar28) {
      uVar33 = (ulonglong)(uVar21 & 0x1ff);
      lVar36 = *(longlong *)
                ((param_7->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8)
      ;
      *(double *)(lVar36 + uVar33 * 0x18) = dVar39;
      *(double *)(lVar36 + 8 + uVar33 * 0x18) = dVar41;
      *(double *)(lVar36 + 0x10 + uVar33 * 0x18) = dVar40;
      goto LAB_1433d4c0a;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(&param_7->BoxCenters,uVar21);
    uVar37 = (pFVar17->BoxCenters).CurBlockUsed;
    if (uVar37 == 0x200) {
      if ((pFVar17->BoxCenters).CurBlock == (pFVar17->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar17->BoxCenters);
      }
      (pFVar17->BoxCenters).CurBlock = (pFVar17->BoxCenters).CurBlock + 1;
      uVar37 = 0;
      (pFVar17->BoxCenters).CurBlockUsed = 0;
    }
    uVar31 = (pFVar17->BoxCenters).CurBlock;
  }
  lVar24 = (longlong)(int)uVar37;
  lVar36 = *(longlong *)
            ((pFVar17->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar31 * 8);
  *(double *)(lVar36 + lVar24 * 0x18) = dVar39;
  *(double *)(lVar36 + 8 + lVar24 * 0x18) = dVar41;
  *(double *)(lVar36 + 0x10 + lVar24 * 0x18) = dVar40;
  puVar2 = &(pFVar17->BoxCenters).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
LAB_1433d4c0a:
  uVar31 = (pFVar17->BoxExtents).CurBlock;
  uVar37 = (pFVar17->BoxExtents).CurBlockUsed;
  uVar28 = uVar31 * 0x200 + uVar37;
  dVar39 = ((pTVar18->Max).field0_0x0._s_0.X - (pTVar18->Min).field0_0x0._s_0.X) * dVar4;
  dVar41 = ((pTVar18->Max).field0_0x0._s_0.Y - (pTVar18->Min).field0_0x0._s_0.Y) * dVar4;
  dVar4 = ((pTVar18->Max).field0_0x0._s_0.Z - (pTVar18->Min).field0_0x0._s_0.Z) * dVar4;
  if (uVar21 == uVar28) {
    if (uVar37 == 0x200) {
      if (uVar31 == (pFVar17->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar17->BoxExtents);
      }
      (pFVar17->BoxExtents).CurBlock = (pFVar17->BoxExtents).CurBlock + 1;
      uVar37 = 0;
      uVar31 = (pFVar17->BoxExtents).CurBlock;
      (pFVar17->BoxExtents).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar21 <= uVar28) {
      uVar33 = (ulonglong)(uVar21 & 0x1ff);
      lVar36 = *(longlong *)
                ((pFVar17->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8)
      ;
      *(double *)(lVar36 + uVar33 * 0x18) = dVar39;
      *(double *)(lVar36 + 8 + uVar33 * 0x18) = dVar41;
      *(double *)(lVar36 + 0x10 + uVar33 * 0x18) = dVar4;
      return ~uVar21;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(&pFVar17->BoxExtents,uVar21);
    uVar37 = (pFVar17->BoxExtents).CurBlockUsed;
    if (uVar37 == 0x200) {
      if ((pFVar17->BoxExtents).CurBlock == (pFVar17->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar17->BoxExtents);
      }
      (pFVar17->BoxExtents).CurBlock = (pFVar17->BoxExtents).CurBlock + 1;
      (pFVar17->BoxExtents).CurBlockUsed = 0;
      uVar37 = 0;
    }
    uVar31 = (pFVar17->BoxExtents).CurBlock;
  }
  lVar24 = (longlong)(int)uVar37;
  lVar36 = *(longlong *)
            ((pFVar17->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar31 * 8);
  *(double *)(lVar36 + lVar24 * 0x18) = dVar39;
  *(double *)(lVar36 + 8 + lVar24 * 0x18) = dVar41;
  *(double *)(lVar36 + 0x10 + lVar24 * 0x18) = dVar4;
  puVar2 = &(pFVar17->BoxExtents).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
  return ~uVar21;
}

// SupportsNearestTriangle @ 1433d8370

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
SupportsNearestTriangle(void *this)

{
  return true;
}

// SupportsNearestTriangle @ 1433d8380

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::SupportsNearestTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this)

{
  return true;
}

// SupportsPointContainment @ 1433d8390

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
SupportsPointContainment(void *this)

{
  return false;
}

// SupportsPointContainment @ 1433d83a0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::SupportsPointContainment
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this)

{
  return false;
}

// SupportsTriangleRayIntersection @ 1433d83b0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
SupportsTriangleRayIntersection(void *this)

{
  return true;
}

// SupportsTriangleRayIntersection @ 1433d83c0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::SupportsTriangleRayIntersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this)

{
  return true;
}

// TestAnyHitTriangle @ 1433d8f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
TestAnyHitTriangle(void *this,int param_1,TRay<double> *param_2,int *param_3,double param_4,
                  FQueryOptions *param_5)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined1 auStackY_248 [32];
  uint local_218 [2];
  int local_210;
  ulonglong local_208;
  uint local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  double local_188;
  double dStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  TVector<double>_u_0 local_138;
  double dStack_120;
  double local_118;
  double dStack_110;
  TVector<double>_u_0 local_108;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  TVector<double> local_b8;
  EIntersectionType local_a0 [2];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar24 = *(uint *)(*(longlong *)
                      (*(longlong *)((longlong)this + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                    (ulonglong)(param_1 & 0x1ff) * 4);
  local_1e0 = (ulonglong)uVar24;
  lVar4 = *(longlong *)(*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar24 >> 9) * 8);
  if (*(int *)((longlong)this + 0xb8) <= (int)uVar24) {
    uVar22 = *(uint *)(lVar4 + (ulonglong)(uVar24 & 0x1ff) * 4);
    dVar10 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar22 < 0) {
      uVar22 = ~uVar22;
      dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar22,param_2);
    }
    else {
      iVar23 = uVar22 - 1;
      uVar22 = *(int *)(*(longlong *)
                         (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar24 + 1 >> 9) * 8) +
                       (ulonglong)(uVar24 + 1 & 0x1ff) * 4) - 1;
      dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar23,param_2);
      dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar22,param_2);
      if (dVar8 <= dVar9) {
        if (dVar10 < dVar8) {
          return false;
        }
        bVar14 = TestAnyHitTriangle(this,uVar22,param_2,param_3,param_4,param_5);
        if (!bVar14) {
          if (dVar10 < dVar9) {
            return false;
          }
          bVar14 = TestAnyHitTriangle(this,iVar23,param_2,param_3,param_4,param_5);
          return bVar14;
        }
        return true;
      }
      if (dVar10 < dVar9) {
        return false;
      }
      bVar14 = TestAnyHitTriangle(this,iVar23,param_2,param_3,param_4,param_5);
      if (bVar14) {
        return true;
      }
    }
    if ((dVar8 <= dVar10) &&
       (bVar14 = TestAnyHitTriangle(this,uVar22,param_2,param_3,param_4,param_5), bVar14)) {
      return true;
    }
    return false;
  }
  local_210 = *(int *)(lVar4 + (ulonglong)(uVar24 & 0x1ff) * 4);
  if (local_210 < 1) {
    return false;
  }
  uVar24 = uVar24 + 1;
  do {
    uVar22 = *(uint *)(*(longlong *)
                        (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar24 >> 9) * 8) +
                      (ulonglong)(uVar24 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_1433d905c:
      plVar5 = *(longlong **)((longlong)this + 8);
      lVar4 = plVar5[1];
      uVar16 = 0;
      if ((int)uVar22 < *(int *)(lVar4 + 0x98)) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
      lVar4 = *(longlong *)(lVar4 + 0x90);
      local_208 = *(ulonglong *)(lVar4 + (longlong)(int)uVar22 * 0xc);
      local_200 = *(uint *)(lVar4 + 8 + (longlong)(int)uVar22 * 0xc);
      lVar4 = *(longlong *)(*plVar5 + 0x10);
      uVar18 = (ulonglong)((uint)local_208 & 0x1ff);
      lVar7 = *(longlong *)(lVar4 + (ulonglong)((uint)local_208 >> 9) * 8);
      uVar21 = (ulonglong)((uint)(local_208 >> 0x20) & 0x1ff);
      pdVar1 = (double *)(lVar7 + uVar18 * 0x18);
      local_1a8._s_0.X = *pdVar1;
      local_1a8._s_0.Y = pdVar1[1];
      local_1f8 = *(longlong *)(lVar4 + (local_208 >> 0x29) * 8);
      local_1a8._s_0.Z = *(double *)(lVar7 + 0x10 + uVar18 * 0x18);
      pdVar1 = (double *)(local_1f8 + uVar21 * 0x18);
      local_1c0._s_0.X = *pdVar1;
      local_1c0._s_0.Y = pdVar1[1];
      local_1c0._s_0.Z = *(double *)(local_1f8 + 0x10 + uVar21 * 0x18);
      local_1e8 = *(longlong *)(lVar4 + (ulonglong)(local_200 >> 9) * 8);
      uVar19 = (ulonglong)(local_200 & 0x1ff);
      local_1f0 = uVar19 * 3;
      pdVar1 = (double *)(local_1e8 + uVar19 * 0x18);
      local_1d8._s_0.X = *pdVar1;
      local_1d8._s_0.Y = pdVar1[1];
      local_1d8._s_0.Z = *(double *)(local_1e8 + 0x10 + uVar19 * 0x18);
      bVar14 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_1a8._s_0,
                          (TVector<double> *)&local_1c0._s_0,(TVector<double> *)&local_1d8._s_0);
      if (bVar14) {
        local_138._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.X;
        puVar2 = (undefined8 *)(local_1f8 + uVar21 * 0x18);
        uVar11 = *puVar2;
        uVar12 = puVar2[1];
        uVar17 = *(undefined8 *)(local_1f8 + 0x10 + uVar21 * 0x18);
        pdVar1 = (double *)(lVar7 + uVar18 * 0x18);
        local_188 = *pdVar1;
        dStack_180 = pdVar1[1];
        puVar3 = (undefined4 *)(lVar7 + 0x10 + uVar18 * 0x18);
        uStack_178 = *puVar3;
        uStack_174 = puVar3[1];
        puVar2 = (undefined8 *)(local_1e8 + local_1f0 * 8);
        local_158 = *puVar2;
        uStack_150 = puVar2[1];
        local_148 = *(undefined8 *)(local_1e8 + 0x10 + local_1f0 * 8);
        local_138._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_138._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        uStack_168._0_4_ = (undefined4)uVar12;
        uStack_168._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        local_118 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_160 = (undefined4)uVar17;
        uStack_15c = (undefined4)((ulonglong)uVar17 >> 0x20);
        local_170._0_4_ = (undefined4)uVar11;
        local_170._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_f0 = (undefined4)local_170;
        uStack_ec = local_170._4_4_;
        local_e8 = (undefined4)uStack_168;
        uStack_e4 = uStack_168._4_4_;
        local_170 = uVar11;
        uStack_168 = uVar12;
        local_108._s_0.X = local_188;
        local_108._s_0.Y = dStack_180;
        local_108._16_4_ = uStack_178;
        local_108._20_4_ = uStack_174;
        uStack_e0 = uStack_160;
        uStack_dc = uStack_15c;
        local_d8 = local_158;
        uStack_d0 = uStack_150;
        local_c8 = local_148;
        bVar14 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_138._s_0,(TTriangle3<double> *)&local_108._s_0,
                            &local_c0,&local_b8,local_a0);
        if ((bVar14) && (local_c0 < param_5->MaxDistance)) {
          return true;
        }
      }
    }
    else {
      local_218[0] = uVar22;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar6 = *(code **)&param_5->TriangleFilterF;
      plVar20 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar20 = plVar5;
      }
      uVar17 = (**(code **)(*plVar20 + 8))();
      cVar13 = (*pcVar6)(uVar17,local_218);
      if (cVar13 != '\0') goto LAB_1433d905c;
    }
    uVar24 = uVar24 + 1;
    if (local_210 < (int)(uVar24 - (int)local_1e0)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 1433d93f0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
TestAnyHitTriangle(void *this,TRay<double> *param_1,FQueryOptions *param_2)

{
  bool bVar1;
  double dVar2;
  int local_res8 [8];
  
  dVar2 = param_2->MaxDistance;
  if (__real_47efffffe0000000 <= param_2->MaxDistance) {
    dVar2 = __real_47efffffe0000000;
  }
  local_res8[0] = -1;
  bVar1 = TestAnyHitTriangle(this,*(int *)((longlong)this + 0xbc),param_1,local_res8,dVar2,param_2);
  return bVar1;
}

// TestAnyHitTriangle @ 1433d9440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,TRay<double> *param_2,
          int *param_3,double param_4,FQueryOptions *param_5)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  bool bVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  undefined1 auStackY_228 [32];
  longlong local_1f8;
  int local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  TVector<double>_u_0 local_138;
  double dStack_120;
  double local_118;
  double dStack_110;
  TVector<double>_u_0 local_108;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  TVector<double> local_b8;
  EIntersectionType local_a0 [2];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar7 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar4 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar8 = *(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar4) {
    uVar25 = *(uint *)(lVar8 + (ulonglong)(uVar4 & 0x1ff) * 4);
    dVar14 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar25 < 0) {
      uVar25 = ~uVar25;
      dVar12 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar25,param_2);
    }
    else {
      iVar24 = uVar25 - 1;
      uVar25 = *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                       (ulonglong)(uVar4 + 1 & 0x1ff) * 4) - 1;
      dVar13 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar24,param_2);
      dVar12 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar25,param_2);
      if (dVar12 <= dVar13) {
        if (dVar14 < dVar12) {
          return false;
        }
        bVar18 = TestAnyHitTriangle(this,uVar25,param_2,param_3,param_4,param_5);
        if (!bVar18) {
          if (dVar14 < dVar13) {
            return false;
          }
          bVar18 = TestAnyHitTriangle(this,iVar24,param_2,param_3,param_4,param_5);
          return bVar18;
        }
        return true;
      }
      if (dVar14 < dVar13) {
        return false;
      }
      bVar18 = TestAnyHitTriangle(this,iVar24,param_2,param_3,param_4,param_5);
      if (bVar18) {
        return true;
      }
    }
    if ((dVar12 <= dVar14) &&
       (bVar18 = TestAnyHitTriangle(this,uVar25,param_2,param_3,param_4,param_5), bVar18)) {
      return true;
    }
    return false;
  }
  local_1f0 = *(int *)(lVar8 + (ulonglong)(uVar4 & 0x1ff) * 4);
  if (local_1f0 < 1) {
    return false;
  }
  uVar25 = uVar4 + 1;
  do {
    uVar5 = *(uint *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_1433d954c:
      uVar20 = (ulonglong)(uVar5 & 0x1ff);
      lVar8 = *(longlong *)
               ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8)
      ;
      pFVar7 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
      uVar5 = *(uint *)(lVar8 + uVar20 * 0xc);
      uVar22 = (ulonglong)(uVar5 & 0x1ff);
      uVar6 = *(uint *)(lVar8 + 4 + uVar20 * 0xc);
      lVar11 = *(longlong *)(pFVar7 + (ulonglong)(uVar5 >> 9) * 8);
      uVar23 = (ulonglong)(uVar6 & 0x1ff);
      pdVar1 = (double *)(lVar11 + uVar22 * 0x18);
      local_1a0._s_0.X = *pdVar1;
      local_1a0._s_0.Y = pdVar1[1];
      local_1e8 = *(longlong *)(pFVar7 + (ulonglong)(uVar6 >> 9) * 8);
      local_1f8 = uVar23 * 3;
      local_1a0._s_0.Z = *(double *)(lVar11 + 0x10 + uVar22 * 0x18);
      pdVar1 = (double *)(local_1e8 + uVar23 * 0x18);
      local_1b8._s_0.X = *pdVar1;
      local_1b8._s_0.Y = pdVar1[1];
      local_1b8._s_0.Z = *(double *)(local_1e8 + 0x10 + uVar23 * 0x18);
      uVar5 = *(uint *)(lVar8 + 8 + uVar20 * 0xc);
      uVar20 = (ulonglong)(uVar5 & 0x1ff);
      local_1d8 = *(longlong *)(pFVar7 + (ulonglong)(uVar5 >> 9) * 8);
      local_1e0 = uVar20 * 3;
      pdVar1 = (double *)(local_1d8 + uVar20 * 0x18);
      local_1d0._s_0.X = *pdVar1;
      local_1d0._s_0.Y = pdVar1[1];
      local_1d0._s_0.Z = *(double *)(local_1d8 + 0x10 + uVar20 * 0x18);
      bVar18 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_1a0._s_0,
                          (TVector<double> *)&local_1b8._s_0,(TVector<double> *)&local_1d0._s_0);
      if (bVar18) {
        local_138._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.X;
        pdVar1 = (double *)(lVar11 + uVar22 * 0x18);
        local_108._s_0.X = *pdVar1;
        local_108._s_0.Y = pdVar1[1];
        puVar2 = (undefined8 *)(local_1e8 + local_1f8 * 8);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        uVar19 = *(undefined8 *)(local_1e8 + 0x10 + local_1f8 * 8);
        puVar3 = (undefined4 *)(lVar11 + 0x10 + uVar22 * 0x18);
        uStack_178 = *puVar3;
        uStack_174 = puVar3[1];
        puVar2 = (undefined8 *)(local_1d8 + local_1e0 * 8);
        local_d8 = *puVar2;
        uStack_d0 = puVar2[1];
        local_c8 = *(undefined8 *)(local_1d8 + 0x10 + local_1e0 * 8);
        local_138._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_138._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        uStack_168._0_4_ = (undefined4)uVar16;
        uStack_168._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
        local_118 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_160 = (undefined4)uVar19;
        uStack_15c = (undefined4)((ulonglong)uVar19 >> 0x20);
        local_170._0_4_ = (undefined4)uVar15;
        local_170._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
        uStack_f0 = (undefined4)local_170;
        uStack_ec = local_170._4_4_;
        local_e8 = (undefined4)uStack_168;
        uStack_e4 = uStack_168._4_4_;
        local_170 = uVar15;
        uStack_168 = uVar16;
        local_108._16_4_ = uStack_178;
        local_108._20_4_ = uStack_174;
        uStack_e0 = uStack_160;
        uStack_dc = uStack_15c;
        bVar18 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_138._s_0,(TTriangle3<double> *)&local_108._s_0,
                            &local_c0,&local_b8,local_a0);
        if ((bVar18) && (local_c0 < param_5->MaxDistance)) {
          return true;
        }
      }
    }
    else {
      local_1f8 = CONCAT44(local_1f8._4_4_,uVar5);
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar9 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar10 = *(code **)&param_5->TriangleFilterF;
      plVar21 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar9 != (longlong *)0x0) {
        plVar21 = plVar9;
      }
      uVar19 = (**(code **)(*plVar21 + 8))();
      cVar17 = (*pcVar10)(uVar19,&local_1f8);
      if (cVar17 != '\0') goto LAB_1433d954c;
    }
    uVar25 = uVar25 + 1;
    if (local_1f0 < (int)(uVar25 - uVar4)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 1433d9870

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,TRay<double> *param_1,
          FQueryOptions *param_2)

{
  bool bVar1;
  double dVar2;
  int local_res8 [8];
  
  dVar2 = param_2->MaxDistance;
  if (__real_47efffffe0000000 <= param_2->MaxDistance) {
    dVar2 = __real_47efffffe0000000;
  }
  local_res8[0] = -1;
  bVar1 = TestAnyHitTriangle(this,this->RootIndex,param_1,local_res8,dVar2,param_2);
  return bVar1;
}

// TestIntersection @ 1433d98c0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
TestIntersection(void *this,TTriangle3<double> *param_1,FQueryOptions *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_res8 [32];
  code *local_68;
  undefined1 *local_60;
  TVector<double>_u_0 local_58;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = param_1->V[1].field0_0x0._s_0.X;
  dVar1 = param_1->V[1].field0_0x0._s_0.Y;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_60 = local_res8;
  dVar2 = param_1->V[0].field0_0x0._s_0.X;
  local_58._s_0.X = local_40;
  if (dVar2 <= local_40) {
    local_58._s_0.X = dVar2;
  }
  dVar2 = param_1->V[1].field0_0x0._s_0.Z;
  uVar7 = SUB84(dVar2,0);
  uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = param_1->V[0].field0_0x0._s_0.Y;
  local_58._s_0.Y = dVar1;
  if (dVar3 <= dVar1) {
    local_58._s_0.Y = dVar3;
  }
  dVar3 = param_1->V[0].field0_0x0._s_0.X;
  if (local_40 <= dVar3) {
    local_40 = dVar3;
  }
  dVar3 = *(double *)((longlong)&param_1->V[0].field0_0x0 + 8);
  if (dVar1 <= dVar3) {
    uVar5 = SUB84(dVar3,0);
    uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.X;
  if (dVar1 <= local_58._s_0.X) {
    local_58._s_0.X = dVar1;
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.Y;
  if (dVar1 <= local_58._s_0.Y) {
    local_58._s_0.Y = dVar1;
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.X;
  if (local_40 <= dVar1) {
    local_40 = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[2].field0_0x0 + 8);
  if ((double)CONCAT44(uVar6,uVar5) <= dVar1) {
    uVar5 = SUB84(dVar1,0);
    uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = param_1->V[0].field0_0x0._s_0.Z;
  local_58._s_0.Z = dVar2;
  if (dVar1 <= dVar2) {
    local_58._s_0.Z = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[0].field0_0x0 + 0x10);
  if (dVar2 <= dVar1) {
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_38 = CONCAT44(uVar6,uVar5);
  dVar1 = param_1->V[2].field0_0x0._s_0.Z;
  if (dVar1 <= local_58._s_0.Z) {
    local_58._s_0.Z = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[2].field0_0x0 + 0x10);
  if ((double)CONCAT44(uVar8,uVar7) <= dVar1) {
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_30 = CONCAT44(uVar8,uVar7);
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,*(int *)((longlong)this + 0xbc),param_1,
                     (TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 1433d99a0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
TestIntersection(void *this,
                TMeshAABBTree3<_public:_bool___cdecl_UE::Geometry::FSphereCovering::AddNegativeSpace(UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_const_&,UE::Geometry::FNegativeSpaceSampleSettings_const_&,bool)_::_34_::FHullMeshWrapper>
                *param_1,TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                         *param_2,FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  void *local_res8 [4];
  code *local_18;
  void **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,*(int *)((longlong)this + 0xbc),param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 1433d9a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
TestIntersection(void *this,FHullMeshWrapper *param_1,TAxisAlignedBox3<double> *param_2,
                TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                *param_3,FQueryOptions *param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  int iVar5;
  TConvexHull3<double> *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FDynamicMesh3 *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar14;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  char cVar18;
  uint uVar19;
  TAxisAlignedBox3<double> *pTVar20;
  undefined8 uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_1d8;
  FHullMeshWrapper *local_1d0;
  undefined8 local_1c8;
  uint local_1c0;
  ulonglong local_1b8;
  uint local_1b0;
  FQueryOptions *local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  code *local_108 [2];
  undefined **local_f8;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_f0;
  undefined8 local_e0;
  TAxisAlignedBox3<double> local_d8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_208;
  dVar4 = (param_2->Min).field0_0x0._s_0.X;
  local_1a8 = param_4;
  local_1d8 = param_3;
  local_1d0 = param_1;
  if (((dVar4 < (param_2->Max).field0_0x0._s_0.X || dVar4 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar4 = (param_2->Min).field0_0x0._s_0.Y, pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar4 < *pdVar1 || dVar4 == *pdVar1)) &&
     (dVar4 = (param_2->Min).field0_0x0._s_0.Z, pdVar1 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar4 < *pdVar1 || dVar4 == *pdVar1)) {
    if (*(longlong *)param_3 != 0) {
      local_e0 = 0;
      local_f8 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::`34'::FHullMeshWrapper>::TestIntersection'::`11'::<lambda_1>,0,0>
                  ::_vftable_;
      local_108[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                     ::Call;
      local_f0 = param_3;
      pTVar20 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          (&local_d8,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_108);
      dVar4 = (pTVar20->Min).field0_0x0._s_0.Y;
      dVar11 = (pTVar20->Min).field0_0x0._s_0.Z;
      dVar12 = (pTVar20->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar20->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar4;
      dVar4 = (pTVar20->Max).field0_0x0._s_0.Y;
      dVar13 = (pTVar20->Max).field0_0x0._s_0.Z;
      (param_2->Min).field0_0x0._s_0.Z = dVar11;
      (param_2->Max).field0_0x0._s_0.X = dVar12;
      (param_2->Max).field0_0x0._s_0.Y = dVar4;
      (param_2->Max).field0_0x0._s_0.Z = dVar13;
    }
    bVar16 = box_box_intersect(this,*(int *)((longlong)this + 0xbc),param_2);
    if (!bVar16) {
      return false;
    }
  }
  uVar26 = 0;
  local_1a0 = (longlong)(param_1->Hull->Hull).ArrayNum;
  if (0 < local_1a0) {
    lVar25 = 0;
    lVar27 = 0;
    do {
      pTVar6 = param_1->Hull;
      iVar5 = (pTVar6->Hull).ArrayNum;
      if (*(longlong *)param_3 == 0) {
        uVar19 = 0;
        if ((int)uVar26 < iVar5) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_1e8 = (longlong)(int)uVar26;
          local_1e0 = (longlong)iVar5;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
        }
        pFVar7 = (pTVar6->Hull).AllocatorInstance.Data;
        pFVar9 = param_1->SourceMesh;
        local_1b8 = *(ulonglong *)(pFVar7 + lVar27);
        local_1b0 = *(uint *)(pFVar7 + lVar27 + 8);
        lVar8 = *(longlong *)
                 ((pFVar9->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)local_1b8 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar8 + (ulonglong)((uint)local_1b8 & 0x1ff) * 0x18);
        local_a8 = *puVar2;
        uStack_a0 = puVar2[1];
        local_98 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)((uint)local_1b8 & 0x1ff) * 0x18);
        uVar23 = (ulonglong)((uint)(local_1b8 >> 0x20) & 0x1ff);
        lVar8 = *(longlong *)
                 ((pFVar9->Vertices).Blocks.AllocatorInstance.Data + (local_1b8 >> 0x29) * 8);
        puVar2 = (undefined8 *)(lVar8 + uVar23 * 0x18);
        local_90 = *puVar2;
        uStack_88 = puVar2[1];
        local_80 = *(undefined8 *)(lVar8 + 0x10 + uVar23 * 0x18);
        lVar8 = *(longlong *)
                 ((pFVar9->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(local_1b0 >> 9) * 8
                 );
        puVar3 = (undefined4 *)(lVar8 + (ulonglong)(local_1b0 & 0x1ff) * 0x18);
        local_78 = *puVar3;
        uStack_74 = puVar3[1];
        uStack_70 = puVar3[2];
        uStack_6c = puVar3[3];
        uVar21 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(local_1b0 & 0x1ff) * 0x18);
        uVar28 = (undefined4)uVar21;
        uVar29 = (undefined4)((ulonglong)uVar21 >> 0x20);
      }
      else {
        uVar19 = 0;
        if ((int)uVar26 < iVar5) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_1e8 = (longlong)(int)uVar26;
          local_1e0 = (longlong)iVar5;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar10 = (code *)swi(3);
            uVar17 = (*pcVar10)();
            return (bool)uVar17;
          }
        }
        pTVar14 = local_1d8;
        pFVar7 = (pTVar6->Hull).AllocatorInstance.Data;
        local_1c8 = *(undefined8 *)(pFVar7 + lVar27);
        uVar19 = *(uint *)(pFVar7 + lVar27 + 8);
        lVar8 = *(longlong *)
                 ((param_1->SourceMesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)local_1c8 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar8 + (ulonglong)((uint)local_1c8 & 0x1ff) * 0x18);
        local_198 = *puVar2;
        uStack_190 = puVar2[1];
        local_188 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)((uint)local_1c8 & 0x1ff) * 0x18);
        local_1c0 = uVar19;
        Core::Private::Function::CheckCallable(*(void **)local_1d8);
        pcVar10 = *(code **)pTVar14;
        puVar24 = &pTVar14->field_0x10;
        plVar22 = *(longlong **)&pTVar14->field_0x28;
        if (*(longlong **)&pTVar14->field_0x28 == (longlong *)0x0) {
          plVar22 = (longlong *)puVar24;
        }
        uVar21 = (**(code **)(*plVar22 + 8))();
        (*pcVar10)(&local_180,uVar21,&local_198);
        pTVar15 = local_1d8;
        local_a8 = local_180;
        uStack_a0 = uStack_178;
        local_98 = local_170;
        lVar8 = *(longlong *)
                 ((local_1d0->SourceMesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(local_1c8._4_4_ >> 9) * 8);
        puVar2 = (undefined8 *)(lVar8 + (ulonglong)(local_1c8._4_4_ & 0x1ff) * 0x18);
        local_168 = *puVar2;
        uStack_160 = puVar2[1];
        local_158 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(local_1c8._4_4_ & 0x1ff) * 0x18);
        Core::Private::Function::CheckCallable(*(void **)local_1d8);
        pcVar10 = *(code **)pTVar15;
        plVar22 = *(longlong **)&pTVar14->field_0x28;
        if (*(longlong **)&pTVar14->field_0x28 == (longlong *)0x0) {
          plVar22 = (longlong *)puVar24;
        }
        uVar21 = (**(code **)(*plVar22 + 8))();
        (*pcVar10)(&local_150,uVar21,&local_168);
        param_3 = local_1d8;
        local_90 = local_150;
        uStack_88 = uStack_148;
        local_80 = local_140;
        lVar8 = *(longlong *)
                 ((local_1d0->SourceMesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar19 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar8 + (ulonglong)(local_1c0 & 0x1ff) * 0x18);
        local_138 = *puVar2;
        uStack_130 = puVar2[1];
        local_128 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(local_1c0 & 0x1ff) * 0x18);
        Core::Private::Function::CheckCallable(*(void **)local_1d8);
        pcVar10 = *(code **)param_3;
        plVar22 = *(longlong **)&pTVar14->field_0x28;
        if (*(longlong **)&pTVar14->field_0x28 == (longlong *)0x0) {
          plVar22 = (longlong *)puVar24;
        }
        uVar21 = (**(code **)(*plVar22 + 8))();
        (*pcVar10)(&local_120,uVar21,&local_138);
        uVar28 = (undefined4)local_110;
        uVar29 = (undefined4)((ulonglong)local_110 >> 0x20);
        local_78 = local_120;
        uStack_74 = uStack_11c;
        uStack_70 = uStack_118;
        uStack_6c = uStack_114;
        param_1 = local_1d0;
      }
      local_68 = CONCAT44(uVar29,uVar28);
      cVar18 = (**(code **)(*(longlong *)this + 0x88))(this,&local_a8,local_1a8);
      if (cVar18 != '\0') {
        return true;
      }
      uVar26 = uVar26 + 1;
      lVar25 = lVar25 + 1;
      lVar27 = lVar27 + 0xc;
    } while (lVar25 < local_1a0);
  }
  return false;
}

// TestIntersection @ 1433d9e70

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,TTriangle3<double> *param_1,
          FQueryOptions *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_res8 [32];
  code *local_68;
  undefined1 *local_60;
  TVector<double>_u_0 local_58;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = param_1->V[1].field0_0x0._s_0.X;
  dVar1 = param_1->V[1].field0_0x0._s_0.Y;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_60 = local_res8;
  dVar2 = param_1->V[0].field0_0x0._s_0.X;
  local_58._s_0.X = local_40;
  if (dVar2 <= local_40) {
    local_58._s_0.X = dVar2;
  }
  dVar2 = param_1->V[1].field0_0x0._s_0.Z;
  uVar7 = SUB84(dVar2,0);
  uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = param_1->V[0].field0_0x0._s_0.Y;
  local_58._s_0.Y = dVar1;
  if (dVar3 <= dVar1) {
    local_58._s_0.Y = dVar3;
  }
  dVar3 = param_1->V[0].field0_0x0._s_0.X;
  if (local_40 <= dVar3) {
    local_40 = dVar3;
  }
  dVar3 = *(double *)((longlong)&param_1->V[0].field0_0x0 + 8);
  if (dVar1 <= dVar3) {
    uVar5 = SUB84(dVar3,0);
    uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.X;
  if (dVar1 <= local_58._s_0.X) {
    local_58._s_0.X = dVar1;
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.Y;
  if (dVar1 <= local_58._s_0.Y) {
    local_58._s_0.Y = dVar1;
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.X;
  if (local_40 <= dVar1) {
    local_40 = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[2].field0_0x0 + 8);
  if ((double)CONCAT44(uVar6,uVar5) <= dVar1) {
    uVar5 = SUB84(dVar1,0);
    uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = param_1->V[0].field0_0x0._s_0.Z;
  local_58._s_0.Z = dVar2;
  if (dVar1 <= dVar2) {
    local_58._s_0.Z = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[0].field0_0x0 + 0x10);
  if (dVar2 <= dVar1) {
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_38 = CONCAT44(uVar6,uVar5);
  dVar1 = param_1->V[2].field0_0x0._s_0.Z;
  if (dVar1 <= local_58._s_0.Z) {
    local_58._s_0.Z = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[2].field0_0x0 + 0x10);
  if ((double)CONCAT44(uVar8,uVar7) <= dVar1) {
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_30 = CONCAT44(uVar8,uVar7);
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 1433d9f50

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 1433d9fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1,
          TAxisAlignedBox3<double> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          FQueryOptions *param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar11;
  bool bVar12;
  char cVar13;
  TAxisAlignedBox3<double> *pTVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_158 [32];
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_138;
  undefined8 local_130;
  uint local_128;
  undefined1 local_118 [24];
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_100;
  undefined8 local_f0;
  FQueryOptions *local_e8;
  TVector<double>_u_0 local_e0 [2];
  code *local_a8 [2];
  undefined **local_98;
  double local_90;
  double dStack_88;
  double local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  dVar4 = (param_2->Min).field0_0x0._s_0.X;
  uVar22 = 0;
  local_e8 = param_4;
  local_138 = param_3;
  if (((dVar4 < (param_2->Max).field0_0x0._s_0.X || dVar4 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar4 = (param_2->Min).field0_0x0._s_0.Y, pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar4 < *pdVar1 || dVar4 == *pdVar1)) &&
     (dVar4 = (param_2->Min).field0_0x0._s_0.Z, pdVar1 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar4 < *pdVar1 || dVar4 == *pdVar1)) {
    if (*(longlong *)param_3 != 0) {
      local_f0 = 0;
      local_118._16_8_ =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__UEBA_NPEBVFDynamicMesh3_45_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_118._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
           ::Call;
      local_100 = param_3;
      pTVar14 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          ((TAxisAlignedBox3<double> *)&local_e0[0]._s_0,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_118);
      dVar4 = (pTVar14->Min).field0_0x0._s_0.Y;
      dVar8 = (pTVar14->Min).field0_0x0._s_0.Z;
      dVar9 = (pTVar14->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar14->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar4;
      dVar4 = (pTVar14->Max).field0_0x0._s_0.Y;
      dVar10 = (pTVar14->Max).field0_0x0._s_0.Z;
      (param_2->Min).field0_0x0._s_0.Z = dVar8;
      (param_2->Max).field0_0x0._s_0.X = dVar9;
      (param_2->Max).field0_0x0._s_0.Y = dVar4;
      (param_2->Max).field0_0x0._s_0.Z = dVar10;
    }
    bVar12 = box_box_intersect(this,this->RootIndex,param_2);
    if (!bVar12) {
      return false;
    }
  }
  iVar20 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (0 < iVar20) {
    do {
      uVar15 = (ulonglong)((uint)uVar22 & 0x1ff);
      pFVar5 = (param_1->Triangles).Blocks.AllocatorInstance.Data;
      if (*(void **)param_3 == (void *)0x0) {
        lVar6 = *(longlong *)(pFVar5 + (uVar22 >> 9) * 8);
        pFVar5 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
        uVar21 = *(uint *)(lVar6 + uVar15 * 0xc);
        uVar18 = (ulonglong)(uVar21 & 0x1ff);
        puVar2 = (undefined8 *)
                 (*(longlong *)(pFVar5 + (ulonglong)(uVar21 >> 9) * 8) + uVar18 * 0x18);
        local_a8[0] = (code *)*puVar2;
        local_a8[1] = (code *)puVar2[1];
        local_98 = *(undefined ***)
                    (*(longlong *)(pFVar5 + (ulonglong)(uVar21 >> 9) * 8) + 0x10 + uVar18 * 0x18);
        uVar21 = *(uint *)(lVar6 + 4 + uVar15 * 0xc);
        uVar18 = (ulonglong)(uVar21 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar5 + (ulonglong)(uVar21 >> 9) * 8) + uVar18 * 0x18);
        local_90 = *pdVar1;
        dStack_88 = pdVar1[1];
        local_80 = *(double *)
                    (*(longlong *)(pFVar5 + (ulonglong)(uVar21 >> 9) * 8) + 0x10 + uVar18 * 0x18);
        uVar21 = *(uint *)(lVar6 + 8 + uVar15 * 0xc);
        uVar15 = (ulonglong)(uVar21 & 0x1ff);
        puVar3 = (undefined4 *)
                 (*(longlong *)(pFVar5 + (ulonglong)(uVar21 >> 9) * 8) + uVar15 * 0x18);
        local_78 = *puVar3;
        uStack_74 = puVar3[1];
        uStack_70 = puVar3[2];
        uStack_6c = puVar3[3];
        uVar16 = *(undefined8 *)
                  (*(longlong *)(pFVar5 + (ulonglong)(uVar21 >> 9) * 8) + 0x10 + uVar15 * 0x18);
        uVar23 = (undefined4)uVar16;
        uVar24 = (undefined4)((ulonglong)uVar16 >> 0x20);
      }
      else {
        lVar6 = *(longlong *)(pFVar5 + (uVar22 >> 9) * 8);
        local_130 = *(undefined8 *)(lVar6 + uVar15 * 0xc);
        uVar21 = *(uint *)(lVar6 + 8 + uVar15 * 0xc);
        lVar6 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)local_130 >> 9) * 8);
        pdVar1 = (double *)(lVar6 + (ulonglong)((uint)local_130 & 0x1ff) * 0x18);
        local_e0[0]._0_8_ = *pdVar1;
        local_e0[0]._8_8_ = pdVar1[1];
        local_e0[0]._16_8_ = *(double *)(lVar6 + 0x10 + (ulonglong)((uint)local_130 & 0x1ff) * 0x18)
        ;
        local_128 = uVar21;
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar7 = *(code **)param_3;
        puVar19 = &param_3->field_0x10;
        plVar17 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar17 = (longlong *)puVar19;
        }
        uVar16 = (**(code **)(*plVar17 + 8))();
        (*pcVar7)(local_118,uVar16,local_e0);
        pTVar11 = local_138;
        local_a8[0] = (code *)local_118._0_8_;
        local_a8[1] = (code *)local_118._8_8_;
        local_98 = (undefined **)local_118._16_8_;
        lVar6 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(local_130._4_4_ >> 9) * 8);
        puVar2 = (undefined8 *)(lVar6 + (ulonglong)(local_130._4_4_ & 0x1ff) * 0x18);
        local_118._0_8_ = *puVar2;
        local_118._8_8_ = puVar2[1];
        local_118._16_8_ =
             *(undefined8 *)(lVar6 + 0x10 + (ulonglong)(local_130._4_4_ & 0x1ff) * 0x18);
        Core::Private::Function::CheckCallable(*(void **)local_138);
        pcVar7 = *(code **)pTVar11;
        plVar17 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar17 = (longlong *)puVar19;
        }
        uVar16 = (**(code **)(*plVar17 + 8))();
        (*pcVar7)(local_e0,uVar16,local_118);
        pTVar11 = local_138;
        local_90 = (double)local_e0[0]._0_8_;
        dStack_88 = (double)local_e0[0]._8_8_;
        local_80 = (double)local_e0[0]._16_8_;
        lVar6 = *(longlong *)
                 ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar6 + (ulonglong)(local_128 & 0x1ff) * 0x18);
        local_118._0_8_ = *puVar2;
        local_118._8_8_ = puVar2[1];
        local_118._16_8_ = *(undefined8 *)(lVar6 + 0x10 + (ulonglong)(local_128 & 0x1ff) * 0x18);
        Core::Private::Function::CheckCallable(*(void **)local_138);
        pcVar7 = *(code **)pTVar11;
        plVar17 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar17 = (longlong *)puVar19;
        }
        uVar16 = (**(code **)(*plVar17 + 8))();
        (*pcVar7)(local_e0,uVar16,local_118);
        uVar23 = (undefined4)local_e0[0]._s_0.Z;
        uVar24 = (undefined4)((ulonglong)local_e0[0]._16_8_ >> 0x20);
        local_78 = local_e0[0]._0_4_;
        uStack_74 = local_e0[0]._4_4_;
        uStack_70 = local_e0[0]._8_4_;
        uStack_6c = local_e0[0]._12_4_;
        param_3 = local_138;
      }
      local_68 = CONCAT44(uVar24,uVar23);
      cVar13 = (**(code **)(this->_padding_ + 0x88))(this,local_a8,local_e8);
      if (cVar13 != '\0') {
        return true;
      }
      uVar21 = (uint)uVar22 + 1;
      uVar22 = (ulonglong)uVar21;
    } while ((int)uVar21 < iVar20);
  }
  return false;
}

// TestSelfIntersection @ 1433da340

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
TestSelfIntersection(void *this,bool param_1,FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TestSelfIntersection @ 1433da380

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestSelfIntersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,bool param_1,FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TreeTraversalImpl @ 1433da560

void __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
TreeTraversalImpl(void *this,int param_1,int param_2,FTreeTraversal *param_3,FQueryOptions *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  int local_res8 [2];
  int local_res10 [2];
  int local_98 [2];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  
  uVar14 = *(uint *)(*(longlong *)
                      (*(longlong *)((longlong)this + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                    (ulonglong)(param_1 & 0x1ff) * 4);
  if ((int)uVar14 < *(int *)((longlong)this + 0xb8)) {
    local_res8[0] = param_2;
    local_res10[0] = param_1;
    local_98[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_3->BeginBoxTrianglesF);
    plVar5 = *(longlong **)&(param_3->BeginBoxTrianglesF).field_0x28;
    pcVar6 = *(code **)&param_3->BeginBoxTrianglesF;
    plVar12 = (longlong *)&(param_3->BeginBoxTrianglesF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar12 = plVar5;
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    (*pcVar6)(uVar11,local_98,local_res8);
    uVar10 = *(uint *)(*(longlong *)
                        (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < (int)uVar10) {
      uVar16 = (ulonglong)uVar10;
      do {
        uVar14 = uVar14 + 1;
        iVar15 = *(int *)(*(longlong *)
                           (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar14 >> 9) * 8) +
                         (ulonglong)(uVar14 & 0x1ff) * 4);
        if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_1433da676:
          local_res8[0] = iVar15;
          Core::Private::Function::CheckCallable(*(void **)&param_3->NextTriangleF);
          plVar5 = *(longlong **)&(param_3->NextTriangleF).field_0x28;
          pcVar6 = *(code **)&param_3->NextTriangleF;
          plVar12 = (longlong *)&(param_3->NextTriangleF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar12 = plVar5;
          }
          uVar11 = (**(code **)(*plVar12 + 8))();
          (*pcVar6)(uVar11,local_res8);
        }
        else {
          local_res8[0] = iVar15;
          Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
          plVar5 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_4->TriangleFilterF;
          plVar12 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar12 = plVar5;
          }
          uVar11 = (**(code **)(*plVar12 + 8))();
          cVar9 = (*pcVar6)(uVar11,local_res8);
          if (cVar9 != '\0') goto LAB_1433da676;
        }
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    Core::Private::Function::CheckCallable(*(void **)&param_3->EndBoxTrianglesF);
    pcVar6 = *(code **)&param_3->EndBoxTrianglesF;
    plVar5 = *(longlong **)&(param_3->EndBoxTrianglesF).field_0x28;
    plVar12 = (longlong *)&(param_3->EndBoxTrianglesF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar12 = plVar5;
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    (*pcVar6)(uVar11,local_res10);
  }
  else {
    uVar10 = *(uint *)(*(longlong *)
                        (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    if ((int)uVar10 < 0) {
      uVar10 = ~uVar10;
      uVar16 = (ulonglong)(uVar10 & 0x1ff);
      lVar7 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + (ulonglong)(uVar10 >> 9) * 8);
      local_78 = *(double *)(lVar7 + uVar16 * 0x18);
      lVar8 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + (ulonglong)(uVar10 >> 9) * 8);
      local_70 = *(double *)(lVar7 + 8 + uVar16 * 0x18);
      local_68 = *(double *)(lVar7 + 0x10 + uVar16 * 0x18);
      dVar1 = *(double *)(lVar8 + uVar16 * 0x18);
      dVar2 = *(double *)(lVar8 + 8 + uVar16 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar8 + 0x10 + uVar16 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = param_2 + 1;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar12 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar12 = plVar5;
      }
      uVar11 = (**(code **)(*plVar12 + 8))();
      cVar9 = (*pcVar6)(uVar11,&local_90,local_res10);
      if (cVar9 != '\0') {
        (**(code **)(*(longlong *)this + 0x80))(this,uVar10,param_2 + 1,param_3,param_4);
      }
    }
    else {
      uVar13 = (ulonglong)(uVar10 - 1 >> 9);
      uVar16 = (ulonglong)(uVar10 - 1 & 0x1ff);
      iVar15 = param_2 + 1;
      lVar7 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + uVar13 * 8);
      local_78 = *(double *)(lVar7 + uVar16 * 0x18);
      local_70 = *(double *)(lVar7 + 8 + uVar16 * 0x18);
      lVar8 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + uVar13 * 8);
      local_68 = *(double *)(lVar7 + 0x10 + uVar16 * 0x18);
      dVar1 = *(double *)(lVar8 + uVar16 * 0x18);
      dVar2 = *(double *)(lVar8 + 8 + uVar16 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar8 + 0x10 + uVar16 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = iVar15;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar12 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar12 = plVar5;
      }
      uVar11 = (**(code **)(*plVar12 + 8))();
      cVar9 = (*pcVar6)(uVar11,&local_90,local_res10);
      if (cVar9 != '\0') {
        (**(code **)(*(longlong *)this + 0x80))(this,uVar10 - 1,iVar15,param_3,param_4);
      }
      iVar4 = *(int *)(*(longlong *)
                        (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                      (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
      uVar14 = iVar4 - 1;
      uVar13 = (ulonglong)(uVar14 >> 9);
      uVar16 = (ulonglong)(iVar4 - 1U & 0x1ff);
      lVar7 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + uVar13 * 8);
      local_78 = *(double *)(lVar7 + uVar16 * 0x18);
      lVar8 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + uVar13 * 8);
      local_70 = *(double *)(lVar7 + 8 + uVar16 * 0x18);
      local_68 = *(double *)(lVar7 + 0x10 + uVar16 * 0x18);
      dVar1 = *(double *)(lVar8 + uVar16 * 0x18);
      dVar2 = *(double *)(lVar8 + 8 + uVar16 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar8 + 0x10 + uVar16 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = iVar15;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar12 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar12 = plVar5;
      }
      uVar11 = (**(code **)(*plVar12 + 8))();
      cVar9 = (*pcVar6)(uVar11,&local_90,local_res10);
      if (cVar9 != '\0') {
        (**(code **)(*(longlong *)this + 0x80))(this,uVar14,iVar15,param_3,param_4);
      }
    }
  }
  return;
}

// TreeTraversalImpl @ 1433daa30

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TreeTraversalImpl
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,int param_2,
          FTreeTraversal *param_3,FQueryOptions *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int local_res8 [2];
  int local_res10 [2];
  int local_98 [2];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  
  uVar15 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if ((int)uVar15 < this->TrianglesEnd) {
    local_res8[0] = param_2;
    local_res10[0] = param_1;
    local_98[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_3->BeginBoxTrianglesF);
    plVar5 = *(longlong **)&(param_3->BeginBoxTrianglesF).field_0x28;
    pcVar6 = *(code **)&param_3->BeginBoxTrianglesF;
    plVar13 = (longlong *)&(param_3->BeginBoxTrianglesF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar13 = plVar5;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar6)(uVar12,local_98,local_res8);
    uVar11 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
    if (0 < (int)uVar11) {
      uVar17 = (ulonglong)uVar11;
      do {
        uVar15 = uVar15 + 1;
        iVar16 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
        if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_1433dab46:
          local_res8[0] = iVar16;
          Core::Private::Function::CheckCallable(*(void **)&param_3->NextTriangleF);
          plVar5 = *(longlong **)&(param_3->NextTriangleF).field_0x28;
          pcVar6 = *(code **)&param_3->NextTriangleF;
          plVar13 = (longlong *)&(param_3->NextTriangleF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar13 = plVar5;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          (*pcVar6)(uVar12,local_res8);
        }
        else {
          local_res8[0] = iVar16;
          Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
          plVar5 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_4->TriangleFilterF;
          plVar13 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar13 = plVar5;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          cVar10 = (*pcVar6)(uVar12,local_res8);
          if (cVar10 != '\0') goto LAB_1433dab46;
        }
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    Core::Private::Function::CheckCallable(*(void **)&param_3->EndBoxTrianglesF);
    pcVar6 = *(code **)&param_3->EndBoxTrianglesF;
    plVar5 = *(longlong **)&(param_3->EndBoxTrianglesF).field_0x28;
    plVar13 = (longlong *)&(param_3->EndBoxTrianglesF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar13 = plVar5;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar6)(uVar12,local_res10);
  }
  else {
    pFVar7 = (this->BoxCenters).Blocks.AllocatorInstance.Data;
    uVar11 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
    if ((int)uVar11 < 0) {
      uVar11 = ~uVar11;
      uVar17 = (ulonglong)(uVar11 & 0x1ff);
      lVar8 = *(longlong *)(pFVar7 + (ulonglong)(uVar11 >> 9) * 8);
      local_78 = *(double *)(lVar8 + uVar17 * 0x18);
      lVar9 = *(longlong *)
               ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
      local_70 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
      local_68 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
      dVar1 = *(double *)(lVar9 + uVar17 * 0x18);
      dVar2 = *(double *)(lVar9 + 8 + uVar17 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = param_2 + 1;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar13 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar10 = (*pcVar6)(uVar12,&local_90,local_res10);
      if (cVar10 != '\0') {
        (**(code **)(this->_padding_ + 0x80))(this,uVar11,param_2 + 1,param_3,param_4);
      }
    }
    else {
      uVar14 = (ulonglong)(uVar11 - 1 >> 9);
      uVar17 = (ulonglong)(uVar11 - 1 & 0x1ff);
      iVar16 = param_2 + 1;
      lVar8 = *(longlong *)(pFVar7 + uVar14 * 8);
      local_78 = *(double *)(lVar8 + uVar17 * 0x18);
      local_70 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
      lVar9 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar14 * 8);
      local_68 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
      dVar1 = *(double *)(lVar9 + uVar17 * 0x18);
      dVar2 = *(double *)(lVar9 + 8 + uVar17 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = iVar16;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar13 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar10 = (*pcVar6)(uVar12,&local_90,local_res10);
      if (cVar10 != '\0') {
        (**(code **)(this->_padding_ + 0x80))(this,uVar11 - 1,iVar16,param_3,param_4);
      }
      iVar4 = *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar15 + 1 >> 9) * 8) + (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
      uVar15 = iVar4 - 1;
      uVar14 = (ulonglong)(uVar15 >> 9);
      uVar17 = (ulonglong)(iVar4 - 1U & 0x1ff);
      lVar8 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar14 * 8);
      local_78 = *(double *)(lVar8 + uVar17 * 0x18);
      lVar9 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar14 * 8);
      local_70 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
      local_68 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
      dVar1 = *(double *)(lVar9 + uVar17 * 0x18);
      dVar2 = *(double *)(lVar9 + 8 + uVar17 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = iVar16;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar13 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar10 = (*pcVar6)(uVar12,&local_90,local_res10);
      if (cVar10 != '\0') {
        (**(code **)(this->_padding_ + 0x80))(this,uVar15,iVar16,param_3,param_4);
      }
    }
  }
  return;
}

// box_box_distsqr @ 1433e3a00

double __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
box_box_distsqr(void *this,int param_1,TAxisAlignedBox3<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  
  dVar7 = *(double *)((longlong)this + 0x50);
  uVar6 = (ulonglong)(param_1 & 0x1ff);
  lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_40 = *(double *)(lVar2 + uVar6 * 0x18);
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_38 = *(double *)(lVar2 + 8 + uVar6 * 0x18);
  local_30 = *(double *)(lVar2 + 0x10 + uVar6 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar6 * 0x18);
  dVar5 = dVar7 + *(double *)(lVar3 + 0x10 + uVar6 * 0x18);
  dVar4 = dVar7 + *pdVar1;
  dVar7 = dVar7 + pdVar1[1];
  local_58._s_0.X = local_40 - dVar4;
  local_40 = local_40 + dVar4;
  local_58._s_0.Y = local_38 - dVar7;
  local_38 = local_38 + dVar7;
  local_58._s_0.Z = local_30 - dVar5;
  local_30 = local_30 + dVar5;
  dVar7 = TAxisAlignedBox3<double>::DistanceSquared
                    ((TAxisAlignedBox3<double> *)&local_58._s_0,param_2);
  return dVar7;
}

// box_box_distsqr @ 1433e3ae0

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::box_box_distsqr
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,
          TAxisAlignedBox3<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  
  dVar7 = this->BoxEps;
  uVar6 = (ulonglong)(param_1 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_40 = *(double *)(lVar2 + uVar6 * 0x18);
  lVar3 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_38 = *(double *)(lVar2 + 8 + uVar6 * 0x18);
  local_30 = *(double *)(lVar2 + 0x10 + uVar6 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar6 * 0x18);
  dVar5 = dVar7 + *(double *)(lVar3 + 0x10 + uVar6 * 0x18);
  dVar4 = dVar7 + *pdVar1;
  dVar7 = dVar7 + pdVar1[1];
  local_58._s_0.X = local_40 - dVar4;
  local_40 = local_40 + dVar4;
  local_58._s_0.Y = local_38 - dVar7;
  local_38 = local_38 + dVar7;
  local_58._s_0.Z = local_30 - dVar5;
  local_30 = local_30 + dVar5;
  dVar7 = TAxisAlignedBox3<double>::DistanceSquared
                    ((TAxisAlignedBox3<double> *)&local_58._s_0,param_2);
  return dVar7;
}

// box_box_intersect @ 1433e3bc0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
box_box_intersect(void *this,int param_1,TAxisAlignedBox3<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  bool bVar9;
  ulonglong uVar10;
  double dVar11;
  
  dVar2 = *(double *)((longlong)this + 0x50);
  uVar10 = (ulonglong)(param_1 & 0x1ff);
  lVar6 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar3 = *(double *)(lVar6 + 0x10 + uVar10 * 0x18);
  lVar7 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar4 = *(double *)(lVar6 + uVar10 * 0x18);
  dVar5 = *(double *)(lVar6 + 8 + uVar10 * 0x18);
  dVar11 = dVar2 + *(double *)(lVar7 + 0x10 + uVar10 * 0x18);
  pdVar1 = (double *)(lVar7 + uVar10 * 0x18);
  dVar8 = dVar2 + *pdVar1;
  dVar2 = dVar2 + pdVar1[1];
  if (((((param_2->Max).field0_0x0._s_0.X <= dVar4 - dVar8) ||
       (dVar4 + dVar8 <= (param_2->Min).field0_0x0._s_0.X)) ||
      ((param_2->Max).field0_0x0._s_0.Y <= dVar5 - dVar2)) ||
     (((dVar5 + dVar2 <= (param_2->Min).field0_0x0._s_0.Y ||
       ((param_2->Max).field0_0x0._s_0.Z <= dVar3 - dVar11)) ||
      (dVar3 + dVar11 <= (param_2->Min).field0_0x0._s_0.Z)))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  return bVar9;
}

// box_box_intersect @ 1433e3ce0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::box_box_intersect
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,
          TAxisAlignedBox3<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  bool bVar9;
  ulonglong uVar10;
  double dVar11;
  
  dVar2 = this->BoxEps;
  uVar10 = (ulonglong)(param_1 & 0x1ff);
  lVar6 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar3 = *(double *)(lVar6 + 0x10 + uVar10 * 0x18);
  lVar7 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar4 = *(double *)(lVar6 + uVar10 * 0x18);
  dVar5 = *(double *)(lVar6 + 8 + uVar10 * 0x18);
  dVar11 = dVar2 + *(double *)(lVar7 + 0x10 + uVar10 * 0x18);
  pdVar1 = (double *)(lVar7 + uVar10 * 0x18);
  dVar8 = dVar2 + *pdVar1;
  dVar2 = dVar2 + pdVar1[1];
  if (((((param_2->Max).field0_0x0._s_0.X <= dVar4 - dVar8) ||
       (dVar4 + dVar8 <= (param_2->Min).field0_0x0._s_0.X)) ||
      ((param_2->Max).field0_0x0._s_0.Y <= dVar5 - dVar2)) ||
     (((dVar5 + dVar2 <= (param_2->Min).field0_0x0._s_0.Y ||
       ((param_2->Max).field0_0x0._s_0.Z <= dVar3 - dVar11)) ||
      (dVar3 + dVar11 <= (param_2->Min).field0_0x0._s_0.Z)))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  return bVar9;
}

// box_contains @ 1433e3e00

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
box_contains(void *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar12 = *(double *)((longlong)this + 0x50);
  uVar9 = (ulonglong)(param_1 & 0x1ff);
  lVar6 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar2 = *(double *)(lVar6 + 0x10 + uVar9 * 0x18);
  lVar7 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar3 = *(double *)(lVar6 + uVar9 * 0x18);
  dVar4 = *(double *)(lVar6 + 8 + uVar9 * 0x18);
  pdVar1 = (double *)(lVar7 + uVar9 * 0x18);
  dVar11 = dVar12 + *(double *)(lVar7 + 0x10 + uVar9 * 0x18);
  dVar8 = dVar12 + *pdVar1;
  dVar12 = dVar12 + pdVar1[1];
  dVar10 = dVar3 - dVar8;
  if ((((dVar10 < (param_2->field0_0x0)._s_0.X || dVar10 == (param_2->field0_0x0)._s_0.X) &&
       (dVar10 = (param_2->field0_0x0)._s_0.Y, dVar4 - dVar12 <= dVar10)) &&
      (dVar5 = (param_2->field0_0x0)._s_0.Z, dVar2 - dVar11 <= dVar5)) &&
     ((((param_2->field0_0x0)._s_0.X <= dVar3 + dVar8 && (dVar10 <= dVar4 + dVar12)) &&
      (dVar5 <= dVar2 + dVar11)))) {
    return true;
  }
  return false;
}

// box_contains @ 1433e3ef0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::box_contains
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar12 = this->BoxEps;
  uVar9 = (ulonglong)(param_1 & 0x1ff);
  lVar6 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar2 = *(double *)(lVar6 + 0x10 + uVar9 * 0x18);
  lVar7 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar3 = *(double *)(lVar6 + uVar9 * 0x18);
  dVar4 = *(double *)(lVar6 + 8 + uVar9 * 0x18);
  pdVar1 = (double *)(lVar7 + uVar9 * 0x18);
  dVar11 = dVar12 + *(double *)(lVar7 + 0x10 + uVar9 * 0x18);
  dVar8 = dVar12 + *pdVar1;
  dVar12 = dVar12 + pdVar1[1];
  dVar10 = dVar3 - dVar8;
  if ((((dVar10 < (param_2->field0_0x0)._s_0.X || dVar10 == (param_2->field0_0x0)._s_0.X) &&
       (dVar10 = (param_2->field0_0x0)._s_0.Y, dVar4 - dVar12 <= dVar10)) &&
      (dVar5 = (param_2->field0_0x0)._s_0.Z, dVar2 - dVar11 <= dVar5)) &&
     ((((param_2->field0_0x0)._s_0.X <= dVar3 + dVar8 && (dVar10 <= dVar4 + dVar12)) &&
      (dVar5 <= dVar2 + dVar11)))) {
    return true;
  }
  return false;
}

// find_any_intersection @ 1433effc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
find_any_intersection
          (void *this,int param_1,TTriangle3<double> *param_2,TAxisAlignedBox3<double> *param_3,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_4,FQueryOptions *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  TTriangle3<double> *pTVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStackY_138 [32];
  uint local_108 [2];
  int local_100;
  TTriangle3<double> *local_f8;
  ulonglong local_f0;
  uint local_e8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  *local_e0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_d8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_c8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e0 = param_4;
  uVar4 = *(uint *)(*(longlong *)
                     (*(longlong *)((longlong)this + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                   (ulonglong)(param_1 & 0x1ff) * 4);
  lVar3 = (ulonglong)(uVar4 & 0x1ff) * 4;
  lVar6 = *(longlong *)(*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar4 >> 9) * 8);
  local_f8 = param_2;
  if ((int)uVar4 < *(int *)((longlong)this + 0xb8)) {
    local_100 = *(int *)(lVar3 + lVar6);
    if (0 < local_100) {
      uVar18 = uVar4 + 1;
      do {
        uVar5 = *(uint *)(*(longlong *)
                           (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar18 >> 9) * 8) +
                         (ulonglong)(uVar18 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_1433f00cb:
          plVar7 = *(longlong **)((longlong)this + 8);
          lVar3 = plVar7[1];
          uVar12 = 0;
          if ((int)uVar5 < *(int *)(lVar3 + 0x98)) {
            uVar12 = ~uVar5 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            iVar13 = (*pcVar8)();
            return iVar13;
          }
          lVar3 = *(longlong *)(lVar3 + 0x90);
          local_f0 = *(ulonglong *)(lVar3 + (longlong)(int)uVar5 * 0xc);
          local_e8 = *(uint *)(lVar3 + 8 + (longlong)(int)uVar5 * 0xc);
          lVar3 = *(longlong *)
                   (*(longlong *)(*plVar7 + 0x10) + (ulonglong)((uint)local_f0 >> 9) * 8);
          puVar1 = (undefined8 *)(lVar3 + (ulonglong)((uint)local_f0 & 0x1ff) * 0x18);
          local_a8 = *puVar1;
          uStack_a0 = puVar1[1];
          local_98 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)((uint)local_f0 & 0x1ff) * 0x18);
          uVar17 = (ulonglong)((uint)(local_f0 >> 0x20) & 0x1ff);
          lVar3 = *(longlong *)(*(longlong *)(*plVar7 + 0x10) + (local_f0 >> 0x29) * 8);
          puVar1 = (undefined8 *)(lVar3 + uVar17 * 0x18);
          local_90 = *puVar1;
          uStack_88 = puVar1[1];
          local_80 = *(undefined8 *)(lVar3 + 0x10 + uVar17 * 0x18);
          lVar3 = *(longlong *)(*(longlong *)(*plVar7 + 0x10) + (ulonglong)(local_e8 >> 9) * 8);
          puVar2 = (undefined4 *)(lVar3 + (ulonglong)(local_e8 & 0x1ff) * 0x18);
          local_78 = *puVar2;
          uStack_74 = puVar2[1];
          uStack_70 = puVar2[2];
          uStack_6c = puVar2[3];
          local_68 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(local_e8 & 0x1ff) * 0x18);
          cVar10 = (**(code **)local_e0)(*(undefined8 *)&local_e0->field_0x8,local_f8,&local_a8);
          if (cVar10 != '\0') {
            return uVar5;
          }
        }
        else {
          local_108[0] = uVar5;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar7 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar8 = *(code **)&param_5->TriangleFilterF;
          plVar16 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar7 != (longlong *)0x0) {
            plVar16 = plVar7;
          }
          uVar15 = (**(code **)(*plVar16 + 8))();
          cVar10 = (*pcVar8)(uVar15,local_108);
          if (cVar10 != '\0') goto LAB_1433f00cb;
        }
        uVar18 = uVar18 + 1;
      } while ((int)(uVar18 - uVar4) <= local_100);
    }
  }
  else {
    uVar18 = *(uint *)(lVar3 + lVar6);
    if (-1 < (int)uVar18) {
      iVar14 = -1;
      iVar13 = *(int *)(*(longlong *)
                         (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                       (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
      bVar11 = box_box_intersect(this,uVar18 - 1,param_3);
      pTVar9 = local_f8;
      if (bVar11) {
        local_c8._0_8_ = *(undefined8 *)param_4;
        local_c8._8_8_ = *(undefined8 *)&param_4->field_0x8;
        iVar14 = find_any_intersection(this,uVar18 - 1,local_f8,param_3,&local_c8,param_5);
        if (iVar14 != -1) {
          return iVar14;
        }
      }
      bVar11 = box_box_intersect(this,iVar13 + -1,param_3);
      if (!bVar11) {
        return iVar14;
      }
      local_b8._0_8_ = *(undefined8 *)param_4;
      local_b8._8_8_ = *(undefined8 *)&param_4->field_0x8;
      iVar13 = find_any_intersection(this,iVar13 + -1,pTVar9,param_3,&local_b8,param_5);
      return iVar13;
    }
    uVar18 = ~uVar18;
    bVar11 = box_box_intersect(this,uVar18,param_3);
    if (bVar11) {
      local_d8._0_8_ = *(undefined8 *)param_4;
      local_d8._8_8_ = *(undefined8 *)&param_4->field_0x8;
      iVar13 = find_any_intersection(this,uVar18,param_2,param_3,&local_d8,param_5);
      return iVar13;
    }
  }
  return -1;
}

// find_any_intersection @ 1433f0350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
find_any_intersection
          (void *this,int param_1,
          TMeshAABBTree3<_public:_bool___cdecl_UE::Geometry::FSphereCovering::AddNegativeSpace(UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_const_&,UE::Geometry::FNegativeSpaceSampleSettings_const_&,bool)_::_34_::FHullMeshWrapper>
          *param_2,TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                   *param_3,int param_4,int param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_6,FQueryOptions *param_7,FQueryOptions *param_8)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar16;
  TMeshAABBTree3<_public:_bool___cdecl_UE::Geometry::FSphereCovering::AddNegativeSpace(UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_const_&,UE::Geometry::FNegativeSpaceSampleSettings_const_&,bool)_::_34_::FHullMeshWrapper>
  *pTVar17;
  char cVar18;
  bool bVar19;
  undefined1 uVar20;
  uint uVar21;
  undefined8 uVar22;
  uint uVar23;
  longlong *plVar24;
  longlong *plVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  undefined1 auStackY_368 [32];
  int iVar29;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  *pTVar30;
  int local_318 [2];
  int local_310;
  int local_30c;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_308;
  uint local_300 [2];
  int local_2f8;
  FQueryOptions *local_2f0;
  ulonglong local_2e8;
  ulonglong local_2e0;
  uint local_2d8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  *local_2d0;
  TMeshAABBTree3<_public:_bool___cdecl_UE::Geometry::FSphereCovering::AddNegativeSpace(UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_const_&,UE::Geometry::FNegativeSpaceSampleSettings_const_&,bool)_::_34_::FHullMeshWrapper>
  *local_2c8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2c0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2b0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2a0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_290;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_280;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_270;
  TVector<double>_u_0 local_260;
  double local_248;
  double local_240;
  double local_238;
  TVector<double>_u_0 local_230;
  double local_218;
  double local_210;
  double local_208;
  TVector<double>_u_0 local_200;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  TAxisAlignedBox3<double> local_188;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  uVar27 = (ulonglong)((uint)param_1 >> 9);
  uVar26 = (ulonglong)(param_1 & 0x1ff);
  local_2d0 = param_6;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 0x60) + uVar27 * 8) + uVar26 * 4);
  local_2f0 = param_8;
  uVar23 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_310 = param_1;
  local_308 = param_3;
  local_2c8 = param_2;
  if ((int)uVar7 < *(int *)((longlong)this + 0xb8)) {
    if ((int)uVar23 < param_2->TrianglesEnd) {
      local_310 = 1;
      iVar28 = *(int *)(*(longlong *)
                         (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
      local_30c = *(int *)(*(longlong *)
                            ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
      local_2f8 = iVar28;
      if (0 < local_30c) {
        do {
          pTVar17 = local_2c8;
          uVar23 = uVar23 + 1;
          local_2e8 = (ulonglong)uVar23;
          iVar29 = *(int *)(*(longlong *)
                             ((local_2c8->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
          if (*(void **)&local_2f0->TriangleFilterF == (void *)0x0) {
LAB_1433f04f1:
            `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::
            GetTriVertices(pTVar17->Mesh,iVar29,(TVector<double> *)&local_158._s_0,
                           (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_128._s_0);
            pTVar16 = local_308;
            if (*(void **)local_308 != (void *)0x0) {
              Core::Private::Function::CheckCallable(*(void **)local_308);
              puVar1 = &pTVar16->field_0x10;
              pcVar9 = *(code **)pTVar16;
              plVar24 = *(longlong **)&pTVar16->field_0x28;
              if (*(longlong **)&pTVar16->field_0x28 == (longlong *)0x0) {
                plVar24 = (longlong *)puVar1;
              }
              uVar22 = (**(code **)(*plVar24 + 8))();
              (*pcVar9)(&local_1d0,uVar22,&local_158);
              local_158._s_0.X = local_1d0;
              local_158._s_0.Y = dStack_1c8;
              local_158._s_0.Z = local_1c0;
              Core::Private::Function::CheckCallable(*(void **)pTVar16);
              pcVar9 = *(code **)pTVar16;
              plVar24 = *(longlong **)&pTVar16->field_0x28;
              if (*(longlong **)&pTVar16->field_0x28 == (longlong *)0x0) {
                plVar24 = (longlong *)puVar1;
              }
              uVar22 = (**(code **)(*plVar24 + 8))();
              (*pcVar9)(&local_1b8,uVar22,&local_140);
              local_140._s_0.X = local_1b8;
              local_140._s_0.Y = dStack_1b0;
              local_140._s_0.Z = local_1a8;
              Core::Private::Function::CheckCallable(*(void **)pTVar16);
              pcVar9 = *(code **)pTVar16;
              plVar24 = *(longlong **)&pTVar16->field_0x28;
              if (*(longlong **)&pTVar16->field_0x28 == (longlong *)0x0) {
                plVar24 = (longlong *)puVar1;
              }
              uVar22 = (**(code **)(*plVar24 + 8))();
              (*pcVar9)(&local_1a0,uVar22,&local_128);
              local_128._s_0.X = local_1a0;
              local_128._s_0.Y = dStack_198;
              local_128._s_0.Z = local_190;
            }
            if (0 < iVar28) {
              uVar23 = uVar7 + 1;
              do {
                uVar8 = *(uint *)(*(longlong *)
                                   (*(longlong *)((longlong)this + 0xa8) +
                                   (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
                if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_1433f067b:
                  plVar24 = *(longlong **)((longlong)this + 8);
                  lVar10 = plVar24[1];
                  uVar21 = 0;
                  if ((int)uVar8 < *(int *)(lVar10 + 0x98)) {
                    uVar21 = ~uVar8 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    uVar20 = (*pcVar9)();
                    return (bool)uVar20;
                  }
                  lVar10 = *(longlong *)(lVar10 + 0x90);
                  local_2e0 = *(ulonglong *)(lVar10 + (longlong)(int)uVar8 * 0xc);
                  local_2d8 = *(uint *)(lVar10 + 8 + (longlong)(int)uVar8 * 0xc);
                  lVar10 = *(longlong *)
                            (*(longlong *)(*plVar24 + 0x10) + (ulonglong)((uint)local_2e0 >> 9) * 8)
                  ;
                  puVar2 = (undefined8 *)(lVar10 + (ulonglong)((uint)local_2e0 & 0x1ff) * 0x18);
                  local_108 = *puVar2;
                  uStack_100 = puVar2[1];
                  local_f8 = *(undefined8 *)
                              (lVar10 + 0x10 + (ulonglong)((uint)local_2e0 & 0x1ff) * 0x18);
                  uVar26 = (ulonglong)((uint)(local_2e0 >> 0x20) & 0x1ff);
                  lVar10 = *(longlong *)(*(longlong *)(*plVar24 + 0x10) + (local_2e0 >> 0x29) * 8);
                  puVar2 = (undefined8 *)(lVar10 + uVar26 * 0x18);
                  local_f0 = *puVar2;
                  uStack_e8 = puVar2[1];
                  local_e0 = *(undefined8 *)(lVar10 + 0x10 + uVar26 * 0x18);
                  lVar10 = *(longlong *)
                            (*(longlong *)(*plVar24 + 0x10) + (ulonglong)(local_2d8 >> 9) * 8);
                  puVar3 = (undefined4 *)(lVar10 + (ulonglong)(local_2d8 & 0x1ff) * 0x18);
                  local_d8 = *puVar3;
                  uStack_d4 = puVar3[1];
                  uStack_d0 = puVar3[2];
                  uStack_cc = puVar3[3];
                  local_c8 = *(undefined8 *)(lVar10 + 0x10 + (ulonglong)(local_2d8 & 0x1ff) * 0x18);
                  cVar18 = (**(code **)local_2d0)
                                     (*(undefined8 *)&local_2d0->field_0x8,&local_158,&local_108);
                  iVar28 = local_2f8;
                  if (cVar18 != '\0') {
                    return true;
                  }
                }
                else {
                  local_300[0] = uVar8;
                  Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                  plVar24 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                  pcVar9 = *(code **)&param_7->TriangleFilterF;
                  plVar25 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                  if (plVar24 != (longlong *)0x0) {
                    plVar25 = plVar24;
                  }
                  uVar22 = (**(code **)(*plVar25 + 8))();
                  cVar18 = (*pcVar9)(uVar22,local_300);
                  if (cVar18 != '\0') goto LAB_1433f067b;
                }
                uVar23 = uVar23 + 1;
              } while ((int)(uVar23 - uVar7) <= iVar28);
            }
          }
          else {
            local_318[0] = iVar29;
            Core::Private::Function::CheckCallable(*(void **)&local_2f0->TriangleFilterF);
            plVar24 = *(longlong **)&(local_2f0->TriangleFilterF).field_0x28;
            pcVar9 = *(code **)&local_2f0->TriangleFilterF;
            plVar25 = (longlong *)&(local_2f0->TriangleFilterF).field_0x10;
            if (plVar24 != (longlong *)0x0) {
              plVar25 = plVar24;
            }
            uVar22 = (**(code **)(*plVar25 + 8))();
            cVar18 = (*pcVar9)(uVar22,local_318);
            if (cVar18 != '\0') goto LAB_1433f04f1;
          }
          local_310 = local_310 + 1;
          uVar23 = (uint)local_2e8;
        } while (local_310 <= local_30c);
      }
    }
    else {
LAB_1433f081d:
      lVar10 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + uVar27 * 8);
      dVar4 = *(double *)(lVar10 + uVar26 * 0x18);
      lVar11 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + uVar27 * 8);
      dVar5 = *(double *)(lVar10 + 8 + uVar26 * 0x18);
      dVar6 = *(double *)(lVar10 + 0x10 + uVar26 * 0x18);
      dVar13 = dVar4 - *(double *)(lVar11 + uVar26 * 0x18);
      dVar14 = dVar5 - *(double *)(lVar11 + 8 + uVar26 * 0x18);
      dVar15 = dVar6 - *(double *)(lVar11 + 0x10 + uVar26 * 0x18);
      dVar4 = dVar4 + *(double *)(lVar11 + uVar26 * 0x18);
      dVar5 = dVar5 + *(double *)(lVar11 + 8 + uVar26 * 0x18);
      dVar6 = dVar6 + *(double *)(lVar11 + 0x10 + uVar26 * 0x18);
      pFVar12 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
      uVar7 = *(uint *)(*(longlong *)(pFVar12 + (ulonglong)(uVar23 >> 9) * 8) +
                       (ulonglong)(uVar23 & 0x1ff) * 4);
      if (-1 < (int)uVar7) {
        local_30c = uVar7 - 1;
        local_318[0] = *(int *)(*(longlong *)(pFVar12 + (ulonglong)(uVar23 + 1 >> 9) * 8) +
                               (ulonglong)(uVar23 + 1 & 0x1ff) * 4) + -1;
        GetBox(param_2,(TAxisAlignedBox3<double> *)&local_230._s_0,local_30c,param_3);
        if ((((local_230._s_0.X < dVar4) && (dVar13 < local_218)) && (local_230._s_0.Y < dVar5)) &&
           (((dVar14 < local_210 && (local_230._s_0.Z < dVar6)) && (dVar15 < local_208)))) {
          local_2b0._0_8_ = *(undefined8 *)param_6;
          local_2b0._8_8_ = *(undefined8 *)&param_6->field_0x8;
          bVar19 = find_any_intersection
                             (this,local_310,param_2,local_308,local_30c,param_5 + 1,&local_2b0,
                              param_7,param_8);
          if (bVar19) {
            return true;
          }
        }
        GetBox(param_2,(TAxisAlignedBox3<double> *)&local_200._s_0,local_318[0],local_308);
        if (dVar4 <= local_200._s_0.X) {
          return false;
        }
        if (local_1e8 <= dVar13) {
          return false;
        }
        if (dVar5 <= local_200._s_0.Y) {
          return false;
        }
        if (local_1e0 <= dVar14) {
          return false;
        }
        if (dVar6 <= local_200._s_0.Z) {
          return false;
        }
        if (local_1d8 <= dVar15) {
          return false;
        }
        local_2a0._0_8_ = *(undefined8 *)param_6;
        pTVar30 = &local_2a0;
        local_2a0._8_8_ = *(undefined8 *)&param_6->field_0x8;
        iVar28 = local_310;
        iVar29 = param_5 + 1;
        param_4 = local_318[0];
        goto LAB_1433f0c2a;
      }
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_260._s_0,~uVar7,param_3);
      if (((local_260._s_0.X < dVar4) && (dVar13 < local_248)) &&
         ((local_260._s_0.Y < dVar5 &&
          (((dVar14 < local_240 && (local_260._s_0.Z < dVar6)) && (dVar15 < local_238)))))) {
        local_2c0._0_8_ = *(undefined8 *)param_6;
        local_2c0._8_8_ = *(undefined8 *)&param_6->field_0x8;
        bVar19 = find_any_intersection
                           (this,local_310,param_2,local_308,param_4,param_5 + 1,&local_2c0,param_7,
                            param_8);
        return bVar19;
      }
    }
LAB_1433f07fc:
    bVar19 = false;
  }
  else {
    if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar23)) goto LAB_1433f081d;
    GetBox(param_2,&local_188,param_4,param_3);
    uVar23 = *(uint *)(*(longlong *)
                        (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((int)uVar23 < 0) {
      uVar23 = ~uVar23;
      bVar19 = box_box_intersect(this,uVar23,&local_188);
      if (bVar19) {
        local_290._0_8_ = *(undefined8 *)param_6;
        local_290._8_8_ = *(undefined8 *)&param_6->field_0x8;
        bVar19 = find_any_intersection
                           (this,uVar23,param_2,local_308,param_4,param_5 + 1,&local_290,param_7,
                            param_8);
        return bVar19;
      }
      goto LAB_1433f07fc;
    }
    local_30c = *(int *)(*(longlong *)
                          (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4) + -1;
    local_318[0] = param_5 + 1;
    bVar19 = box_box_intersect(this,uVar23 - 1,&local_188);
    if (bVar19) {
      local_280._0_8_ = *(undefined8 *)param_6;
      local_280._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar19 = find_any_intersection
                         (this,uVar23 - 1,param_2,local_308,param_4,local_318[0],&local_280,param_7,
                          param_8);
      if (bVar19) {
        return true;
      }
    }
    iVar28 = local_30c;
    bVar19 = box_box_intersect(this,local_30c,&local_188);
    if (!bVar19) {
      return false;
    }
    local_270._0_8_ = *(undefined8 *)param_6;
    local_270._8_8_ = *(undefined8 *)&param_6->field_0x8;
    pTVar30 = &local_270;
    iVar29 = local_318[0];
LAB_1433f0c2a:
    bVar19 = find_any_intersection
                       (this,iVar28,param_2,local_308,param_4,iVar29,pTVar30,param_7,param_8);
  }
  return bVar19;
}

// find_any_intersection @ 1433f0c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_any_intersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,TTriangle3<double> *param_2
          ,TAxisAlignedBox3<double> *param_3,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_4,FQueryOptions *param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  FDynamicMesh3 *pFVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStackY_f8 [32];
  TTriangle3<double> *local_c8 [2];
  uint local_b8 [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar7 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar5 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar4 = (ulonglong)(uVar5 & 0x1ff) * 4;
  lVar8 = *(longlong *)(pFVar7 + (ulonglong)(uVar5 >> 9) * 8);
  local_c8[0] = param_2;
  if ((int)uVar5 < this->TrianglesEnd) {
    iVar14 = *(int *)(lVar4 + lVar8);
    if (0 < iVar14) {
      uVar19 = uVar5 + 1;
      do {
        uVar6 = *(uint *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_1433f0d8c:
          pFVar11 = this->Mesh;
          puVar1 = (uint *)(*(longlong *)
                             ((pFVar11->Triangles).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 0xc);
          uVar18 = (ulonglong)(*puVar1 & 0x1ff);
          lVar4 = *(longlong *)
                   ((pFVar11->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)(*puVar1 >> 9) * 8);
          puVar2 = (undefined8 *)(lVar4 + uVar18 * 0x18);
          local_a8 = *puVar2;
          uStack_a0 = puVar2[1];
          local_98 = *(undefined8 *)(lVar4 + 0x10 + uVar18 * 0x18);
          uVar18 = (ulonglong)(puVar1[1] & 0x1ff);
          lVar4 = *(longlong *)
                   ((pFVar11->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)(puVar1[1] >> 9) * 8);
          puVar2 = (undefined8 *)(lVar4 + uVar18 * 0x18);
          local_90 = *puVar2;
          uStack_88 = puVar2[1];
          local_80 = *(undefined8 *)(lVar4 + 0x10 + uVar18 * 0x18);
          uVar18 = (ulonglong)(puVar1[2] & 0x1ff);
          lVar4 = *(longlong *)
                   ((pFVar11->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)(puVar1[2] >> 9) * 8);
          puVar3 = (undefined4 *)(lVar4 + uVar18 * 0x18);
          local_78 = *puVar3;
          uStack_74 = puVar3[1];
          uStack_70 = puVar3[2];
          uStack_6c = puVar3[3];
          local_68 = *(undefined8 *)(lVar4 + 0x10 + uVar18 * 0x18);
          cVar12 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_c8[0],&local_a8);
          if (cVar12 != '\0') {
            return uVar6;
          }
        }
        else {
          local_b8[0] = uVar6;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar9 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar10 = *(code **)&param_5->TriangleFilterF;
          plVar17 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar9 != (longlong *)0x0) {
            plVar17 = plVar9;
          }
          uVar16 = (**(code **)(*plVar17 + 8))();
          cVar12 = (*pcVar10)(uVar16,local_b8);
          if (cVar12 != '\0') goto LAB_1433f0d8c;
        }
        uVar19 = uVar19 + 1;
      } while ((int)(uVar19 - uVar5) <= iVar14);
    }
  }
  else {
    uVar19 = *(uint *)(lVar4 + lVar8);
    if (-1 < (int)uVar19) {
      iVar15 = -1;
      iVar14 = *(int *)(*(longlong *)(pFVar7 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                       (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
      bVar13 = box_box_intersect(this,uVar19 - 1,param_3);
      if (bVar13) {
        local_c8[0] = *(TTriangle3<double> **)param_4;
        local_c8[1] = *(TTriangle3<double> **)&param_4->field_0x8;
        iVar15 = find_any_intersection
                           (this,uVar19 - 1,param_2,param_3,
                            (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                             *)local_c8,param_5);
        if (iVar15 != -1) {
          return iVar15;
        }
      }
      bVar13 = box_box_intersect(this,iVar14 + -1,param_3);
      if (!bVar13) {
        return iVar15;
      }
      local_c8[0] = *(TTriangle3<double> **)param_4;
      local_c8[1] = *(TTriangle3<double> **)&param_4->field_0x8;
      iVar14 = find_any_intersection
                         (this,iVar14 + -1,param_2,param_3,
                          (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                           *)local_c8,param_5);
      return iVar14;
    }
    bVar13 = box_box_intersect(this,~uVar19,param_3);
    if (bVar13) {
      local_c8[0] = *(TTriangle3<double> **)param_4;
      local_c8[1] = *(TTriangle3<double> **)&param_4->field_0x8;
      iVar14 = find_any_intersection
                         (this,~uVar19,param_2,param_3,
                          (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                           *)local_c8,param_5);
      return iVar14;
    }
  }
  return -1;
}

// find_any_intersection @ 1433f0fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_any_intersection
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_6,FQueryOptions *param_7,FQueryOptions *param_8)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  void *pvVar9;
  FDynamicMesh3 *pFVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FQueryOptions *pFVar17;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar18;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar19;
  char cVar20;
  bool bVar21;
  undefined8 uVar22;
  uint uVar23;
  longlong *plVar24;
  longlong *plVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  int iVar29;
  undefined1 auStackY_228 [32];
  bool local_1d8;
  uint local_1d0 [2];
  int local_1c8;
  int local_1c4;
  FQueryOptions *local_1c0 [2];
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_1b0;
  uint local_1a8 [2];
  TVector<double>_u_0 local_1a0;
  double local_188;
  double local_180;
  double local_178;
  int local_170;
  ulonglong local_168;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  *local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar26 = (ulonglong)(param_1 & 0x1ff);
  uVar28 = (ulonglong)((uint)param_1 >> 9);
  local_160 = param_6;
  local_1d0[0] = param_4;
  uVar6 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar28 * 8) +
                   uVar26 * 4);
  local_1c0[0] = param_8;
  uVar23 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_1c8 = param_1;
  local_1b0 = param_3;
  if ((int)uVar6 < this->TrianglesEnd) {
    if ((int)uVar23 < param_2->TrianglesEnd) {
      local_1c8 = 1;
      iVar29 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4);
      local_1c4 = *(int *)(*(longlong *)
                            ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
      local_170 = iVar29;
      if (local_1c4 < 1) {
        return false;
      }
      do {
        pFVar17 = local_1c0[0];
        uVar23 = uVar23 + 1;
        local_168 = (ulonglong)uVar23;
        local_1a8[0] = *(uint *)(*(longlong *)
                                  ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
        if (*(void **)&local_1c0[0]->TriangleFilterF == (void *)0x0) {
LAB_1433f1163:
          pTVar18 = local_1b0;
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (param_2->Mesh,local_1a8[0],(TVector<double> *)&local_158._s_0,
                     (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_128._s_0);
          pvVar9 = *(void **)pTVar18;
          if (pvVar9 != (void *)0x0) {
            Core::Private::Function::CheckCallable(pvVar9);
            pTVar19 = local_1b0;
            pcVar8 = *(code **)pTVar18;
            puVar27 = &local_1b0->field_0x10;
            plVar24 = *(longlong **)&local_1b0->field_0x28;
            if (*(longlong **)&local_1b0->field_0x28 == (longlong *)0x0) {
              plVar24 = (longlong *)puVar27;
            }
            uVar22 = (**(code **)(*plVar24 + 8))();
            (*pcVar8)(&local_1a0,uVar22,&local_158);
            pTVar18 = local_1b0;
            local_158._s_0.X = local_1a0._s_0.X;
            local_158._s_0.Y = local_1a0._s_0.Y;
            local_158._s_0.Z = local_1a0._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)local_1b0);
            plVar24 = *(longlong **)&pTVar19->field_0x28;
            pcVar8 = *(code **)pTVar18;
            if (plVar24 == (longlong *)0x0) {
              plVar24 = (longlong *)puVar27;
            }
            uVar22 = (**(code **)(*plVar24 + 8))();
            (*pcVar8)(&local_1a0,uVar22,&local_140);
            pTVar18 = local_1b0;
            local_140._s_0.X = local_1a0._s_0.X;
            local_140._s_0.Y = local_1a0._s_0.Y;
            local_140._s_0.Z = local_1a0._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)local_1b0);
            plVar24 = *(longlong **)&pTVar19->field_0x28;
            pcVar8 = *(code **)pTVar18;
            if (plVar24 == (longlong *)0x0) {
              plVar24 = (longlong *)puVar27;
            }
            uVar22 = (**(code **)(*plVar24 + 8))();
            (*pcVar8)(&local_1a0,uVar22,&local_128);
            local_128._s_0.X = local_1a0._s_0.X;
            local_128._s_0.Y = local_1a0._s_0.Y;
            local_128._s_0.Z = local_1a0._s_0.Z;
          }
          if (0 < iVar29) {
            uVar23 = uVar6 + 1;
            do {
              uVar7 = *(uint *)(*(longlong *)
                                 ((this->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
              if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_1433f12ba:
                pFVar10 = this->Mesh;
                uVar28 = (ulonglong)(uVar7 & 0x1ff);
                lVar11 = *(longlong *)
                          ((pFVar10->Triangles).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar7 >> 9) * 8);
                uVar7 = *(uint *)(lVar11 + uVar28 * 0xc);
                uVar26 = (ulonglong)(uVar7 & 0x1ff);
                lVar12 = *(longlong *)
                          ((pFVar10->Vertices).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar7 >> 9) * 8);
                puVar1 = (undefined8 *)(lVar12 + uVar26 * 0x18);
                local_108 = *puVar1;
                uStack_100 = puVar1[1];
                local_f8 = *(undefined8 *)(lVar12 + 0x10 + uVar26 * 0x18);
                uVar7 = *(uint *)(lVar11 + 4 + uVar28 * 0xc);
                uVar26 = (ulonglong)(uVar7 & 0x1ff);
                lVar12 = *(longlong *)
                          ((pFVar10->Vertices).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar7 >> 9) * 8);
                puVar1 = (undefined8 *)(lVar12 + uVar26 * 0x18);
                local_f0 = *puVar1;
                uStack_e8 = puVar1[1];
                local_e0 = *(undefined8 *)(lVar12 + 0x10 + uVar26 * 0x18);
                uVar7 = *(uint *)(lVar11 + 8 + uVar28 * 0xc);
                uVar28 = (ulonglong)(uVar7 & 0x1ff);
                lVar11 = *(longlong *)
                          ((pFVar10->Vertices).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar7 >> 9) * 8);
                puVar2 = (undefined4 *)(lVar11 + uVar28 * 0x18);
                local_d8 = *puVar2;
                uStack_d4 = puVar2[1];
                uStack_d0 = puVar2[2];
                uStack_cc = puVar2[3];
                local_c8 = *(undefined8 *)(lVar11 + 0x10 + uVar28 * 0x18);
                cVar20 = (**(code **)local_160)
                                   (*(undefined8 *)&local_160->field_0x8,&local_158,&local_108);
                if (cVar20 != '\0') {
                  return true;
                }
              }
              else {
                local_1a8[0] = uVar7;
                Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                plVar24 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                pcVar8 = *(code **)&param_7->TriangleFilterF;
                plVar25 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                if (plVar24 != (longlong *)0x0) {
                  plVar25 = plVar24;
                }
                uVar22 = (**(code **)(*plVar25 + 8))();
                cVar20 = (*pcVar8)(uVar22,local_1a8);
                if (cVar20 != '\0') goto LAB_1433f12ba;
              }
              uVar23 = uVar23 + 1;
              iVar29 = local_170;
            } while ((int)(uVar23 - uVar6) <= local_170);
          }
        }
        else {
          local_1d0[0] = local_1a8[0];
          Core::Private::Function::CheckCallable(*(void **)&local_1c0[0]->TriangleFilterF);
          plVar24 = *(longlong **)&(pFVar17->TriangleFilterF).field_0x28;
          pcVar8 = *(code **)&pFVar17->TriangleFilterF;
          plVar25 = (longlong *)&(pFVar17->TriangleFilterF).field_0x10;
          if (plVar24 != (longlong *)0x0) {
            plVar25 = plVar24;
          }
          uVar22 = (**(code **)(*plVar25 + 8))();
          cVar20 = (*pcVar8)(uVar22,local_1d0);
          if (cVar20 != '\0') goto LAB_1433f1163;
        }
        local_1c8 = local_1c8 + 1;
        uVar23 = (uint)local_168;
        if (local_1c4 < local_1c8) {
          return false;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar23 < param_2->TrianglesEnd)) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a0._s_0,param_4,param_3);
    pFVar13 = (this->IndexList).Blocks.AllocatorInstance.Data;
    uVar23 = *(uint *)(*(longlong *)(pFVar13 + (ulonglong)(uVar6 >> 9) * 8) +
                      (ulonglong)(uVar6 & 0x1ff) * 4);
    if ((int)uVar23 < 0) {
      bVar21 = box_box_intersect(this,~uVar23,(TAxisAlignedBox3<double> *)&local_1a0._s_0);
      if (!bVar21) {
        return false;
      }
      local_1c0[0] = *(FQueryOptions **)param_6;
      local_1c0[1] = *(FQueryOptions **)&param_6->field_0x8;
      bVar21 = find_any_intersection
                         (this,~uVar23,param_2,local_1b0,local_1d0[0],param_5 + 1,
                          (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                           *)local_1c0,param_7,param_8);
      return bVar21;
    }
    local_1c8 = *(int *)(*(longlong *)(pFVar13 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4) + -1;
    local_1c4 = param_5 + 1;
    bVar21 = box_box_intersect(this,uVar23 - 1,(TAxisAlignedBox3<double> *)&local_1a0._s_0);
    pTVar18 = local_1b0;
    if (bVar21) {
      local_1c0[0] = *(FQueryOptions **)param_6;
      local_1c0[1] = *(FQueryOptions **)&param_6->field_0x8;
      bVar21 = find_any_intersection
                         (this,uVar23 - 1,param_2,local_1b0,local_1d0[0],param_5 + 1,
                          (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                           *)local_1c0,param_7,param_8);
      if (bVar21) {
        return true;
      }
    }
    bVar21 = box_box_intersect(this,local_1c8,(TAxisAlignedBox3<double> *)&local_1a0._s_0);
    if (!bVar21) {
      return false;
    }
    local_1c0[0] = *(FQueryOptions **)param_6;
    local_1c0[1] = *(FQueryOptions **)&param_6->field_0x8;
    bVar21 = find_any_intersection
                       (this,local_1c8,param_2,pTVar18,local_1d0[0],local_1c4,
                        (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                         *)local_1c0,param_7,param_8);
    return bVar21;
  }
  lVar11 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar28 * 8);
  dVar3 = *(double *)(lVar11 + uVar26 * 0x18);
  lVar12 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar28 * 8);
  dVar4 = *(double *)(lVar11 + 8 + uVar26 * 0x18);
  dVar5 = *(double *)(lVar11 + 0x10 + uVar26 * 0x18);
  dVar14 = dVar3 - *(double *)(lVar12 + uVar26 * 0x18);
  dVar15 = dVar4 - *(double *)(lVar12 + 8 + uVar26 * 0x18);
  dVar16 = dVar5 - *(double *)(lVar12 + 0x10 + uVar26 * 0x18);
  dVar3 = dVar3 + *(double *)(lVar12 + uVar26 * 0x18);
  dVar4 = dVar4 + *(double *)(lVar12 + 8 + uVar26 * 0x18);
  dVar5 = dVar5 + *(double *)(lVar12 + 0x10 + uVar26 * 0x18);
  pFVar13 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
  uVar6 = *(uint *)(*(longlong *)(pFVar13 + (ulonglong)(uVar23 >> 9) * 8) +
                   (ulonglong)(uVar23 & 0x1ff) * 4);
  if ((int)uVar6 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a0._s_0,~uVar6,param_3);
    if (((dVar3 <= local_1a0._s_0.X) || (local_188 <= dVar14)) ||
       ((dVar4 <= local_1a0._s_0.Y ||
        (((local_180 <= dVar15 || (dVar5 <= local_1a0._s_0.Z)) || (local_178 <= dVar16)))))) {
      return false;
    }
    local_1c0[0] = *(FQueryOptions **)param_6;
    local_1c0[1] = *(FQueryOptions **)&param_6->field_0x8;
  }
  else {
    local_1d8 = false;
    local_1c4 = uVar6 - 1;
    local_1d0[0] = *(int *)(*(longlong *)(pFVar13 + (ulonglong)(uVar23 + 1 >> 9) * 8) +
                           (ulonglong)(uVar23 + 1 & 0x1ff) * 4) - 1;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a0._s_0,local_1c4,param_3);
    if ((((local_1a0._s_0.X < dVar3) && (dVar14 < local_188)) && (local_1a0._s_0.Y < dVar4)) &&
       (((dVar15 < local_180 && (local_1a0._s_0.Z < dVar5)) && (dVar16 < local_178)))) {
      local_1c0[0] = *(FQueryOptions **)param_6;
      local_1c0[1] = *(FQueryOptions **)&param_6->field_0x8;
      local_1d8 = find_any_intersection
                            (this,local_1c8,param_2,param_3,local_1c4,param_5 + 1,
                             (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                              *)local_1c0,param_7,param_8);
      if (local_1d8) {
        return true;
      }
    }
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_1a0._s_0,local_1d0[0],param_3);
    if (dVar3 <= local_1a0._s_0.X) {
      return local_1d8;
    }
    if (local_188 <= dVar14) {
      return local_1d8;
    }
    if (dVar4 <= local_1a0._s_0.Y) {
      return local_1d8;
    }
    if (local_180 <= dVar15) {
      return local_1d8;
    }
    if (dVar5 <= local_1a0._s_0.Z) {
      return local_1d8;
    }
    if (local_178 <= dVar16) {
      return local_1d8;
    }
    local_1c0[0] = *(FQueryOptions **)param_6;
    local_1c0[1] = *(FQueryOptions **)&param_6->field_0x8;
  }
  bVar21 = find_any_intersection
                     (this,local_1c8,param_2,param_3,local_1d0[0],param_5 + 1,
                      (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                       *)local_1c0,param_7,param_8);
  return bVar21;
}

// find_intersections @ 1433f1830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
find_intersections(void *this,int param_1,
                  TMeshAABBTree3<_public:_bool___cdecl_UE::Geometry::FSphereCovering::AddNegativeSpace(UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_const_&,UE::Geometry::FNegativeSpaceSampleSettings_const_&,bool)_::_34_::FHullMeshWrapper>
                  *param_2,TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                           *param_3,int param_4,int param_5,FIntersectionsQueryResult *param_6,
                  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                  *param_7,FQueryOptions *param_8,FQueryOptions *param_9)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  code *pcVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  bool bVar19;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  int iVar25;
  ulonglong uVar26;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  undefined1 auStackY_4d8 [32];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar32;
  int local_488 [2];
  uint local_480;
  uint local_47c;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_478;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_470;
  uint local_468;
  uint local_460 [2];
  ulonglong local_458;
  ulonglong local_450;
  ulonglong local_448;
  uint local_440;
  FIntersectionsQueryResult *local_438;
  TMeshAABBTree3<_public:_bool___cdecl_UE::Geometry::FSphereCovering::AddNegativeSpace(UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_const_&,UE::Geometry::FNegativeSpaceSampleSettings_const_&,bool)_::_34_::FHullMeshWrapper>
  *local_430;
  FQueryOptions *local_428;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_420;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_410;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_400;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3f0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3e0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3d0;
  TVector<double>_u_0 local_3c0;
  double local_3a8;
  double local_3a0;
  double local_398;
  TVector<double>_u_0 local_390;
  double local_378;
  double local_370;
  double local_368;
  TVector<double>_u_0 local_360;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double dStack_328;
  double local_320;
  double local_318;
  double dStack_310;
  double local_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  double local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  TAxisAlignedBox3<double> local_298;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  ulonglong local_15c;
  undefined4 local_154;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  local_478 = param_7;
  uVar26 = (ulonglong)((uint)param_1 >> 9);
  uVar28 = (ulonglong)(param_1 & 0x1ff);
  local_438 = param_6;
  local_428 = param_9;
  local_480 = *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 0x60) + uVar26 * 8) +
                       uVar28 * 4);
  uVar22 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_488[0] = param_1;
  local_470 = param_3;
  local_430 = param_2;
  if ((int)local_480 < *(int *)((longlong)this + 0xb8)) {
    if ((int)uVar22 < param_2->TrianglesEnd) {
      local_468 = *(uint *)(*(longlong *)
                             (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(local_480 >> 9) * 8
                             ) + (ulonglong)(local_480 & 0x1ff) * 4);
      uVar9 = *(uint *)(*(longlong *)
                         ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
      local_450 = (ulonglong)uVar9;
      if ((int)uVar9 < 1) {
        return;
      }
      do {
        uVar22 = uVar22 + 1;
        local_458 = (ulonglong)uVar22;
        iVar25 = *(int *)(*(longlong *)
                           ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
        local_47c = iVar25;
        if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_1433f19df:
          `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
                    (param_2->Mesh,iVar25,(TVector<double> *)&local_248._s_0,
                     (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
          pTVar27 = local_470;
          if (*(void **)local_470 == (void *)0x0) {
            uVar29 = SUB84(local_218._s_0.Z,0);
            uVar30 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
          }
          else {
            Core::Private::Function::CheckCallable(*(void **)local_470);
            puVar1 = &pTVar27->field_0x10;
            pcVar10 = *(code **)pTVar27;
            plVar23 = *(longlong **)&pTVar27->field_0x28;
            if (*(longlong **)&pTVar27->field_0x28 == (longlong *)0x0) {
              plVar23 = (longlong *)puVar1;
            }
            uVar21 = (**(code **)(*plVar23 + 8))();
            (*pcVar10)(&local_330,uVar21,&local_248);
            local_248._s_0.X = local_330;
            local_248._s_0.Y = dStack_328;
            local_248._s_0.Z = local_320;
            Core::Private::Function::CheckCallable(*(void **)pTVar27);
            pcVar10 = *(code **)pTVar27;
            plVar23 = *(longlong **)&pTVar27->field_0x28;
            if (*(longlong **)&pTVar27->field_0x28 == (longlong *)0x0) {
              plVar23 = (longlong *)puVar1;
            }
            uVar21 = (**(code **)(*plVar23 + 8))();
            (*pcVar10)(&local_318,uVar21,&TStack_230);
            TStack_230._s_0.X = local_318;
            TStack_230._s_0.Y = dStack_310;
            TStack_230._s_0.Z = local_308;
            Core::Private::Function::CheckCallable(*(void **)pTVar27);
            pcVar10 = *(code **)pTVar27;
            plVar23 = *(longlong **)&pTVar27->field_0x28;
            if (*(longlong **)&pTVar27->field_0x28 == (longlong *)0x0) {
              plVar23 = (longlong *)puVar1;
            }
            uVar21 = (**(code **)(*plVar23 + 8))();
            (*pcVar10)(&local_300,uVar21,&local_218);
            uVar29 = SUB84(local_2f0,0);
            uVar30 = (undefined4)((ulonglong)local_2f0 >> 0x20);
            local_218._0_4_ = local_300;
            local_218._4_4_ = uStack_2fc;
            local_218._8_4_ = uStack_2f8;
            local_218._12_4_ = uStack_2f4;
            local_218._16_8_ = local_2f0;
          }
          local_1f8._s_0.X = local_248._s_0.X;
          local_1f8._s_0.Y = local_248._s_0.Y;
          local_1d8 = TStack_230._s_0.Y;
          dStack_1d0 = TStack_230._s_0.Z;
          local_15c = local_15c & 0xffffffff00000000;
          local_1f8._s_0.Z = local_248._s_0.Z;
          dStack_1e0 = TStack_230._s_0.X;
          local_1b8 = CONCAT44(uVar30,uVar29);
          local_1c8 = local_218._0_4_;
          uStack_1c4 = local_218._4_4_;
          uStack_1c0 = local_218._8_4_;
          uStack_1bc = local_218._12_4_;
          if (0 < (int)local_468) {
            uVar28 = (ulonglong)local_468;
            uVar22 = local_480;
            do {
              uVar22 = uVar22 + 1;
              uVar9 = *(uint *)(*(longlong *)
                                 (*(longlong *)((longlong)this + 0xa8) +
                                 (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_1433f1bcb:
                plVar23 = *(longlong **)((longlong)this + 8);
                lVar11 = plVar23[1];
                uVar20 = 0;
                if ((int)uVar9 < *(int *)(lVar11 + 0x98)) {
                  uVar20 = ~uVar9 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar11 = *(longlong *)(lVar11 + 0x90);
                local_448 = *(ulonglong *)(lVar11 + (longlong)(int)uVar9 * 0xc);
                local_440 = *(uint *)(lVar11 + 8 + (longlong)(int)uVar9 * 0xc);
                lVar11 = *(longlong *)(*plVar23 + 0x10);
                lVar12 = *(longlong *)(lVar11 + (ulonglong)((uint)local_448 >> 9) * 8);
                puVar4 = (undefined4 *)(lVar12 + 0x10 + (ulonglong)((uint)local_448 & 0x1ff) * 0x18)
                ;
                uStack_2d8 = *puVar4;
                uStack_2d4 = puVar4[1];
                puVar2 = (undefined8 *)(lVar12 + (ulonglong)((uint)local_448 & 0x1ff) * 0x18);
                local_2e8 = *puVar2;
                uStack_2e0 = puVar2[1];
                uVar26 = (ulonglong)((uint)(local_448 >> 0x20) & 0x1ff);
                lVar12 = *(longlong *)(lVar11 + (local_448 >> 0x29) * 8);
                puVar2 = (undefined8 *)(lVar12 + uVar26 * 0x18);
                uVar16 = *puVar2;
                uVar17 = puVar2[1];
                uVar21 = *(undefined8 *)(lVar12 + 0x10 + uVar26 * 0x18);
                local_2d0._0_4_ = (undefined4)uVar16;
                local_2d0._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
                uStack_2c8._0_4_ = (undefined4)uVar17;
                uStack_2c8._4_4_ = (undefined4)((ulonglong)uVar17 >> 0x20);
                uStack_2c0 = (undefined4)uVar21;
                uStack_2bc = (undefined4)((ulonglong)uVar21 >> 0x20);
                lVar11 = *(longlong *)(lVar11 + (ulonglong)(local_440 >> 9) * 8);
                puVar4 = (undefined4 *)(lVar11 + (ulonglong)(local_440 & 0x1ff) * 0x18);
                local_2b8 = *puVar4;
                uStack_2b4 = puVar4[1];
                uStack_2b0 = puVar4[2];
                uStack_2ac = puVar4[3];
                local_2a8 = *(undefined8 *)(lVar11 + 0x10 + (ulonglong)(local_440 & 0x1ff) * 0x18);
                local_15c = local_15c & 0xffffffff00000000;
                uStack_198 = (undefined4)local_2d0;
                uStack_194 = local_2d0._4_4_;
                local_190 = (undefined4)uStack_2c8;
                uStack_18c = uStack_2c8._4_4_;
                local_2d0 = uVar16;
                uStack_2c8 = uVar17;
                local_1b0 = local_2e8;
                uStack_1a8 = uStack_2e0;
                local_1a0 = uStack_2d8;
                uStack_19c = uStack_2d4;
                uStack_188 = uStack_2c0;
                uStack_184 = uStack_2bc;
                local_180 = local_2b8;
                uStack_17c = uStack_2b4;
                uStack_178 = uStack_2b0;
                uStack_174 = uStack_2ac;
                local_170 = local_2a8;
                cVar18 = (**(code **)local_478)(*(undefined8 *)&local_478->field_0x8,&local_1f8);
                if (cVar18 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,uVar9,local_47c,
                             local_438);
                }
              }
              else {
                local_460[0] = uVar9;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar23 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar10 = *(code **)&param_8->TriangleFilterF;
                plVar24 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar23 != (longlong *)0x0) {
                  plVar24 = plVar23;
                }
                uVar21 = (**(code **)(*plVar24 + 8))();
                cVar18 = (*pcVar10)(uVar21,local_460);
                if (cVar18 != '\0') goto LAB_1433f1bcb;
              }
              uVar28 = uVar28 - 1;
              param_2 = local_430;
              param_9 = local_428;
            } while (uVar28 != 0);
          }
        }
        else {
          local_488[0] = iVar25;
          Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
          plVar23 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
          pcVar10 = *(code **)&param_9->TriangleFilterF;
          plVar24 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
          if (plVar23 != (longlong *)0x0) {
            plVar24 = plVar23;
          }
          uVar21 = (**(code **)(*plVar24 + 8))();
          cVar18 = (*pcVar10)(uVar21,local_488);
          if (cVar18 != '\0') goto LAB_1433f19df;
        }
        uVar22 = (uint)local_458;
        local_450 = local_450 - 1;
        if (local_450 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar22 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_298,param_4,param_3);
    uVar22 = *(uint *)(*(longlong *)
                        (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(local_480 >> 9) * 8) +
                      (ulonglong)(local_480 & 0x1ff) * 4);
    if ((int)uVar22 < 0) {
      uVar22 = ~uVar22;
      bVar19 = box_box_intersect(this,uVar22,&local_298);
      if (!bVar19) {
        return;
      }
      local_3f0._0_8_ = *(undefined8 *)local_478;
      local_3f0._8_8_ = *(undefined8 *)&local_478->field_0x8;
      find_intersections(this,uVar22,param_2,local_470,param_4,param_5 + 1,param_6,&local_3f0,
                         param_8,param_9);
      return;
    }
    local_488[0] = param_5 + 1;
    bVar19 = box_box_intersect(this,uVar22 - 1,&local_298);
    pTVar32 = local_478;
    if (bVar19) {
      local_3e0._0_8_ = *(undefined8 *)local_478;
      local_3e0._8_8_ = *(undefined8 *)&local_478->field_0x8;
      find_intersections(this,uVar22 - 1,param_2,local_470,param_4,local_488[0],param_6,&local_3e0,
                         param_8,param_9);
    }
    iVar25 = *(int *)(*(longlong *)
                       (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(local_480 + 1 >> 9) * 8)
                     + (ulonglong)(local_480 + 1 & 0x1ff) * 4);
    bVar19 = box_box_intersect(this,iVar25 + -1,&local_298);
    if (!bVar19) {
      return;
    }
    local_3d0._0_8_ = *(undefined8 *)pTVar32;
    local_3d0._8_8_ = *(undefined8 *)&pTVar32->field_0x8;
    find_intersections(this,iVar25 + -1,param_2,local_470,param_4,local_488[0],param_6,&local_3d0,
                       param_8,param_9);
    return;
  }
  dVar5 = *(double *)((longlong)this + 0x50);
  lVar11 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + uVar26 * 8);
  dVar6 = *(double *)(lVar11 + uVar28 * 0x18);
  lVar12 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + uVar26 * 8);
  dVar7 = *(double *)(lVar11 + 8 + uVar28 * 0x18);
  dVar8 = *(double *)(lVar11 + 0x10 + uVar28 * 0x18);
  pdVar3 = (double *)(lVar12 + uVar28 * 0x18);
  dVar31 = dVar5 + *(double *)(lVar12 + 0x10 + uVar28 * 0x18);
  dVar13 = dVar5 + *pdVar3;
  dVar5 = dVar5 + pdVar3[1];
  dVar15 = dVar8 - dVar31;
  dVar14 = dVar6 - dVar13;
  dVar6 = dVar6 + dVar13;
  uVar9 = *(uint *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
  dVar13 = dVar7 - dVar5;
  dVar7 = dVar7 + dVar5;
  dVar8 = dVar8 + dVar31;
  if ((int)uVar9 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3c0._s_0,~uVar9,param_3);
    if (dVar6 <= local_3c0._s_0.X) {
      return;
    }
    if (local_3a8 <= dVar14) {
      return;
    }
    if (dVar7 <= local_3c0._s_0.Y) {
      return;
    }
    if (local_3a0 <= dVar13) {
      return;
    }
    if (dVar8 <= local_3c0._s_0.Z) {
      return;
    }
    if (local_398 <= dVar15) {
      return;
    }
    local_420._0_8_ = *(undefined8 *)local_478;
    local_420._8_8_ = *(undefined8 *)&local_478->field_0x8;
    pTVar32 = &local_420;
    pTVar27 = local_470;
    iVar25 = local_488[0];
    uVar22 = ~uVar9;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_390._s_0,uVar9 - 1,param_3);
    iVar25 = local_488[0];
    if ((((local_390._s_0.X < dVar6) && (dVar14 < local_378)) && (local_390._s_0.Y < dVar7)) &&
       (((dVar13 < local_370 && (local_390._s_0.Z < dVar8)) && (dVar15 < local_368)))) {
      local_410._0_8_ = *(undefined8 *)local_478;
      local_410._8_8_ = *(undefined8 *)&local_478->field_0x8;
      find_intersections(this,local_488[0],param_2,local_470,uVar9 - 1,param_5 + 1,param_6,
                         &local_410,param_8,param_9);
    }
    pTVar27 = local_470;
    local_47c = *(int *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar22 + 1 >> 9) * 8) + (ulonglong)(uVar22 + 1 & 0x1ff) * 4) -
                1;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_360._s_0,local_47c,local_470);
    if (dVar6 <= local_360._s_0.X) {
      return;
    }
    if (local_348 <= dVar14) {
      return;
    }
    if (dVar7 <= local_360._s_0.Y) {
      return;
    }
    if (local_340 <= dVar13) {
      return;
    }
    if (dVar8 <= local_360._s_0.Z) {
      return;
    }
    if (local_338 <= dVar15) {
      return;
    }
    local_400._0_8_ = *(undefined8 *)local_478;
    local_400._8_8_ = *(undefined8 *)&local_478->field_0x8;
    pTVar32 = &local_400;
    uVar22 = local_47c;
  }
  find_intersections(this,iVar25,param_2,pTVar27,uVar22,param_5 + 1,param_6,pTVar32,param_8,param_9)
  ;
  return;
}

// find_intersections @ 1433f2260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_intersections
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,FIntersectionsQueryResult *param_6,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_7,
          FQueryOptions *param_8,FQueryOptions *param_9)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar21;
  char cVar22;
  bool bVar23;
  int iVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong *plVar28;
  longlong *plVar29;
  ulonglong uVar30;
  uint uVar31;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar32;
  ulonglong uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_378 [32];
  uint local_320 [2];
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_318;
  uint local_310;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_308 [2];
  ulonglong local_2f8;
  TVector<double>_u_0 local_2f0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  ulonglong local_2c0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_2b8;
  FIntersectionsQueryResult *local_2b0;
  FQueryOptions *local_2a8;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  ulonglong local_15c;
  undefined4 local_154;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  uVar26 = (ulonglong)(param_1 & 0x1ff);
  uVar33 = (ulonglong)((uint)param_1 >> 9);
  local_2b8 = param_7;
  local_310 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar33 * 8)
                       + uVar26 * 4);
  local_320[0] = param_4;
  local_2b0 = param_6;
  local_2a8 = param_9;
  uVar27 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_2f8 = CONCAT44(local_2f8._4_4_,uVar27);
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_318 = param_3;
  local_308[0] = param_2;
  if ((int)local_310 < this->TrianglesEnd) {
    if ((int)uVar27 < param_2->TrianglesEnd) {
      uVar9 = *(uint *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(local_310 >> 9) * 8) + (ulonglong)(local_310 & 0x1ff) * 4);
      uVar31 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar27 >> 9) * 8) + (ulonglong)(uVar27 & 0x1ff) * 4);
      local_2c0 = (ulonglong)uVar31;
      if ((int)uVar31 < 1) {
        return;
      }
      do {
        pTVar21 = local_308[0];
        uVar27 = uVar27 + 1;
        local_2f8 = (ulonglong)uVar27;
        uVar27 = *(uint *)(*(longlong *)
                            ((local_308[0]->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar27 >> 9) * 8) + (ulonglong)(uVar27 & 0x1ff) * 4);
        if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_1433f2409:
          FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                    (pTVar21->Mesh,uVar27,(TVector<double> *)&local_248._s_0,
                     (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
          pTVar32 = local_318;
          if (*(void **)local_318 == (void *)0x0) {
            uVar34 = SUB84(local_218._s_0.Z,0);
            uVar35 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
          }
          else {
            Core::Private::Function::CheckCallable(*(void **)local_318);
            puVar1 = &pTVar32->field_0x10;
            pcVar12 = *(code **)pTVar32;
            plVar28 = *(longlong **)&pTVar32->field_0x28;
            if (*(longlong **)&pTVar32->field_0x28 == (longlong *)0x0) {
              plVar28 = (longlong *)puVar1;
            }
            uVar25 = (**(code **)(*plVar28 + 8))();
            (*pcVar12)(&local_2f0,uVar25,&local_248);
            local_248._s_0.X = (double)CONCAT44(local_2f0._4_4_,local_2f0._0_4_);
            local_248._s_0.Y = (double)CONCAT44(local_2f0._12_4_,local_2f0._8_4_);
            local_248._s_0.Z = local_2f0._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)pTVar32);
            pcVar12 = *(code **)pTVar32;
            plVar28 = *(longlong **)&pTVar32->field_0x28;
            if (*(longlong **)&pTVar32->field_0x28 == (longlong *)0x0) {
              plVar28 = (longlong *)puVar1;
            }
            uVar25 = (**(code **)(*plVar28 + 8))();
            (*pcVar12)(&local_2f0,uVar25,&TStack_230);
            TStack_230._s_0.X = (double)CONCAT44(local_2f0._4_4_,local_2f0._0_4_);
            TStack_230._s_0.Y = (double)CONCAT44(local_2f0._12_4_,local_2f0._8_4_);
            TStack_230._16_8_ = local_2f0._s_0.Z;
            Core::Private::Function::CheckCallable(*(void **)pTVar32);
            pcVar12 = *(code **)pTVar32;
            plVar28 = *(longlong **)&pTVar32->field_0x28;
            if (*(longlong **)&pTVar32->field_0x28 == (longlong *)0x0) {
              plVar28 = (longlong *)puVar1;
            }
            uVar25 = (**(code **)(*plVar28 + 8))();
            (*pcVar12)(&local_2f0,uVar25,&local_218);
            uVar34 = SUB84(local_2f0._s_0.Z,0);
            uVar35 = (undefined4)((ulonglong)local_2f0._16_8_ >> 0x20);
            local_218._0_4_ = local_2f0._0_4_;
            local_218._4_4_ = local_2f0._4_4_;
            local_218._8_4_ = local_2f0._8_4_;
            local_218._12_4_ = local_2f0._12_4_;
            local_218._16_8_ = local_2f0._s_0.Z;
          }
          local_1f8._s_0.X = local_248._s_0.X;
          local_1f8._s_0.Y = local_248._s_0.Y;
          local_1d8 = TStack_230._s_0.Y;
          dStack_1d0 = TStack_230._s_0.Z;
          local_15c = local_15c & 0xffffffff00000000;
          local_1f8._s_0.Z = local_248._s_0.Z;
          dStack_1e0 = TStack_230._s_0.X;
          local_1b8 = CONCAT44(uVar35,uVar34);
          local_1c8 = local_218._0_4_;
          uStack_1c4 = local_218._4_4_;
          uStack_1c0 = local_218._8_4_;
          uStack_1bc = local_218._12_4_;
          if (0 < (int)uVar9) {
            uVar33 = (ulonglong)uVar9;
            uVar31 = local_310;
            do {
              uVar31 = uVar31 + 1;
              uVar10 = *(uint *)(*(longlong *)
                                  ((this->IndexList).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar31 >> 9) * 8) + (ulonglong)(uVar31 & 0x1ff) * 4);
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_1433f25ac:
                uVar26 = (ulonglong)(uVar10 & 0x1ff);
                lVar13 = *(longlong *)
                          ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar10 >> 9) * 8);
                pFVar14 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
                uVar11 = *(uint *)(lVar13 + uVar26 * 0xc);
                uVar30 = (ulonglong)(uVar11 & 0x1ff);
                puVar2 = (undefined8 *)
                         (*(longlong *)(pFVar14 + (ulonglong)(uVar11 >> 9) * 8) + uVar30 * 0x18);
                local_1b0 = *puVar2;
                uStack_1a8 = puVar2[1];
                puVar4 = (undefined4 *)
                         (*(longlong *)(pFVar14 + (ulonglong)(uVar11 >> 9) * 8) + 0x10 +
                         uVar30 * 0x18);
                uStack_288 = *puVar4;
                uStack_284 = puVar4[1];
                uVar11 = *(uint *)(lVar13 + 4 + uVar26 * 0xc);
                uVar30 = (ulonglong)(uVar11 & 0x1ff);
                puVar2 = (undefined8 *)
                         (*(longlong *)(pFVar14 + (ulonglong)(uVar11 >> 9) * 8) + uVar30 * 0x18);
                uVar19 = *puVar2;
                uVar20 = puVar2[1];
                uVar25 = *(undefined8 *)
                          (*(longlong *)(pFVar14 + (ulonglong)(uVar11 >> 9) * 8) + 0x10 +
                          uVar30 * 0x18);
                uVar11 = *(uint *)(lVar13 + 8 + uVar26 * 0xc);
                uVar26 = (ulonglong)(uVar11 & 0x1ff);
                local_280._0_4_ = (undefined4)uVar19;
                local_280._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
                puVar4 = (undefined4 *)
                         (*(longlong *)(pFVar14 + (ulonglong)(uVar11 >> 9) * 8) + uVar26 * 0x18);
                local_180 = *puVar4;
                uStack_17c = puVar4[1];
                uStack_178 = puVar4[2];
                uStack_174 = puVar4[3];
                local_170 = *(undefined8 *)
                             (*(longlong *)(pFVar14 + (ulonglong)(uVar11 >> 9) * 8) + 0x10 +
                             uVar26 * 0x18);
                local_15c = local_15c & 0xffffffff00000000;
                uStack_278._0_4_ = (undefined4)uVar20;
                uStack_278._4_4_ = (undefined4)((ulonglong)uVar20 >> 0x20);
                uStack_270 = (undefined4)uVar25;
                uStack_26c = (undefined4)((ulonglong)uVar25 >> 0x20);
                uStack_198 = (undefined4)local_280;
                uStack_194 = local_280._4_4_;
                local_190 = (undefined4)uStack_278;
                uStack_18c = uStack_278._4_4_;
                local_280 = uVar19;
                uStack_278 = uVar20;
                local_1a0 = uStack_288;
                uStack_19c = uStack_284;
                uStack_188 = uStack_270;
                uStack_184 = uStack_26c;
                cVar22 = (**(code **)local_2b8)(*(undefined8 *)&local_2b8->field_0x8,&local_1f8);
                if (cVar22 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,uVar10,uVar27,
                             local_2b0);
                }
              }
              else {
                local_320[0] = uVar10;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar28 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar12 = *(code **)&param_8->TriangleFilterF;
                plVar29 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar28 != (longlong *)0x0) {
                  plVar29 = plVar28;
                }
                uVar25 = (**(code **)(*plVar29 + 8))();
                cVar22 = (*pcVar12)(uVar25,local_320);
                if (cVar22 != '\0') goto LAB_1433f25ac;
              }
              uVar33 = uVar33 - 1;
              param_9 = local_2a8;
            } while (uVar33 != 0);
          }
        }
        else {
          local_320[0] = uVar27;
          Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
          plVar28 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
          pcVar12 = *(code **)&param_9->TriangleFilterF;
          plVar29 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
          if (plVar28 != (longlong *)0x0) {
            plVar29 = plVar28;
          }
          uVar25 = (**(code **)(*plVar29 + 8))();
          cVar22 = (*pcVar12)(uVar25,local_320);
          if (cVar22 != '\0') goto LAB_1433f2409;
        }
        uVar27 = (uint)local_2f8;
        local_2c0 = local_2c0 - 1;
        if (local_2c0 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar27 < param_2->TrianglesEnd)) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2f0._s_0,param_4,param_3);
    uVar27 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_310 >> 9) * 8) + (ulonglong)(local_310 & 0x1ff) * 4);
    if ((int)uVar27 < 0) {
      bVar23 = box_box_intersect(this,~uVar27,(TAxisAlignedBox3<double> *)&local_2f0._s_0);
      if (!bVar23) {
        return;
      }
      local_308[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)param_7;
      local_308[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)&param_7->field_0x8;
      find_intersections(this,~uVar27,param_2,local_318,local_320[0],param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)local_308,param_8,param_9);
      return;
    }
    bVar23 = box_box_intersect(this,uVar27 - 1,(TAxisAlignedBox3<double> *)&local_2f0._s_0);
    if (bVar23) {
      local_308[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)param_7;
      local_308[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)&param_7->field_0x8;
      find_intersections(this,uVar27 - 1,param_2,local_318,local_320[0],param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)local_308,param_8,param_9);
    }
    iVar24 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(local_310 + 1 >> 9) * 8) + (ulonglong)(local_310 + 1 & 0x1ff) * 4
                     );
    bVar23 = box_box_intersect(this,iVar24 + -1,(TAxisAlignedBox3<double> *)&local_2f0._s_0);
    if (!bVar23) {
      return;
    }
    local_308[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)param_7;
    local_308[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)&param_7->field_0x8;
    find_intersections(this,iVar24 + -1,param_2,local_318,local_320[0],param_5 + 1,param_6,
                       (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                        *)local_308,param_8,param_9);
    return;
  }
  dVar5 = this->BoxEps;
  lVar13 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar33 * 8);
  dVar6 = *(double *)(lVar13 + uVar26 * 0x18);
  lVar15 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar33 * 8);
  dVar7 = *(double *)(lVar13 + 8 + uVar26 * 0x18);
  dVar8 = *(double *)(lVar13 + 0x10 + uVar26 * 0x18);
  pdVar3 = (double *)(lVar15 + uVar26 * 0x18);
  local_2f0._s_0.Z = *(double *)(lVar15 + 0x10 + uVar26 * 0x18);
  dVar17 = dVar5 + *pdVar3;
  dVar16 = dVar5 + pdVar3[1];
  dVar18 = dVar6 - dVar17;
  uVar27 = *(uint *)(*(longlong *)
                      ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar27 >> 9) * 8) + (ulonglong)(uVar27 & 0x1ff) * 4);
  dVar6 = dVar6 + dVar17;
  dVar17 = dVar7 - dVar16;
  dVar7 = dVar7 + dVar16;
  dVar16 = dVar8 - (dVar5 + local_2f0._s_0.Z);
  dVar8 = dVar8 + dVar5 + local_2f0._s_0.Z;
  if ((int)uVar27 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2f0._s_0,~uVar27,param_3);
    if (dVar6 < (double)CONCAT44(local_2f0._4_4_,local_2f0._0_4_) ||
        dVar6 == (double)CONCAT44(local_2f0._4_4_,local_2f0._0_4_)) {
      return;
    }
    if (local_2d8 <= dVar18) {
      return;
    }
    if (dVar7 < (double)CONCAT44(local_2f0._12_4_,local_2f0._8_4_) ||
        dVar7 == (double)CONCAT44(local_2f0._12_4_,local_2f0._8_4_)) {
      return;
    }
    if (local_2d0 <= dVar17) {
      return;
    }
    if (dVar8 <= local_2f0._s_0.Z) {
      return;
    }
    if (local_2c8 <= dVar16) {
      return;
    }
    local_308[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)param_7;
    local_308[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)&param_7->field_0x8;
    pTVar32 = local_318;
    uVar27 = ~uVar27;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2f0._s_0,uVar27 - 1,param_3);
    pTVar32 = local_318;
    if (((((double)CONCAT44(local_2f0._4_4_,local_2f0._0_4_) <= dVar6 &&
           dVar6 != (double)CONCAT44(local_2f0._4_4_,local_2f0._0_4_)) && (dVar18 < local_2d8)) &&
        ((double)CONCAT44(local_2f0._12_4_,local_2f0._8_4_) <= dVar7 &&
         dVar7 != (double)CONCAT44(local_2f0._12_4_,local_2f0._8_4_))) &&
       (((dVar17 < local_2d0 && (local_2f0._s_0.Z < dVar8)) && (dVar16 < local_2c8)))) {
      local_308[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)param_7;
      local_308[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)&param_7->field_0x8;
      find_intersections(this,param_1,param_2,local_318,uVar27 - 1,param_5 + 1,param_6,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>
                          *)local_308,param_8,param_9);
    }
    iVar24 = *(int *)(*(longlong *)
                       ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)((uint)local_2f8 + 1 >> 9) * 8) +
                     (ulonglong)((uint)local_2f8 + 1 & 0x1ff) * 4) + -1;
    local_2f8 = CONCAT44(local_2f8._4_4_,iVar24);
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2f0._s_0,iVar24,pTVar32);
    if (dVar6 < (double)CONCAT44(local_2f0._4_4_,local_2f0._0_4_) ||
        dVar6 == (double)CONCAT44(local_2f0._4_4_,local_2f0._0_4_)) {
      return;
    }
    if (local_2d8 <= dVar18) {
      return;
    }
    if (dVar7 < (double)CONCAT44(local_2f0._12_4_,local_2f0._8_4_) ||
        dVar7 == (double)CONCAT44(local_2f0._12_4_,local_2f0._8_4_)) {
      return;
    }
    if (local_2d0 <= dVar17) {
      return;
    }
    if (dVar8 <= local_2f0._s_0.Z) {
      return;
    }
    if (local_2c8 <= dVar16) {
      return;
    }
    local_308[0] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)param_7;
    local_308[1] = *(TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **)&param_7->field_0x8;
    uVar27 = (uint)local_2f8;
  }
  find_intersections(this,param_1,param_2,pTVar32,uVar27,param_5 + 1,param_6,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     local_308,param_8,param_9);
  return;
}

// find_nearest_triangles @ 1433f3160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
find_nearest_triangles
          (void *this,int param_1,
          TMeshAABBTree3<_public:_bool___cdecl_UE::Geometry::FSphereCovering::AddNegativeSpace(UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_const_&,UE::Geometry::FNegativeSpaceSampleSettings_const_&,bool)_::_34_::FHullMeshWrapper>
          *param_2,TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                   *param_3,int param_4,int param_5,double *param_6,FIndex2i *param_7,
          FQueryOptions *param_8,FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  FIndex2i_u_0 FVar20;
  char cVar21;
  bool bVar22;
  undefined8 uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong *plVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStackY_488 [32];
  ulonglong local_410;
  int local_408 [2];
  uint local_400;
  uint local_3f8 [2];
  int local_3f0;
  uint local_3ec;
  int iStack_3e8;
  ulonglong local_3e0;
  ulonglong local_3d8;
  ulonglong local_3d0;
  uint local_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  TVector<double>_u_0 local_3a8;
  double local_390;
  double local_388;
  double local_380;
  TVector<double>_u_0 local_378;
  double local_360;
  double local_358;
  double local_350;
  TVector<double>_u_0 local_348;
  double local_330;
  double local_328;
  double local_320;
  TVector<double>_u_0 local_318;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a8;
  double local_298;
  double dStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  double local_268;
  double dStack_260;
  double local_258;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TDistTriangle3Triangle3<double> local_1f8;
  ulonglong local_f8;
  
  dVar14 = __real_3fd0000000000000;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_488;
  iVar28 = param_5 + 1;
LAB_1433f3240:
  do {
    while( true ) {
      dVar5 = __real_bff0000000000000;
      uVar29 = (ulonglong)(param_1 & 0x1ff);
      uVar25 = (ulonglong)((uint)param_1 >> 9);
      uVar7 = *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 0x60) + uVar25 * 8) +
                       uVar29 * 4);
      uVar24 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar7 < *(int *)((longlong)this + 0xb8)) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar24)) goto LAB_1433f34a7;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3a8._s_0,param_4,param_3);
      uVar24 = *(uint *)(*(longlong *)
                          (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar7 >> 9) * 8) +
                        (ulonglong)(uVar7 & 0x1ff) * 4);
      if ((int)uVar24 < 0) {
        dStack_3b8 = *(double *)((longlong)this + 0x50);
        param_1 = ~uVar24;
        uVar25 = (ulonglong)(param_1 & 0x1ff);
        lVar12 = *(longlong *)
                  (*(longlong *)((longlong)this + 0x78) + (ulonglong)((uint)param_1 >> 9) * 8);
        dVar5 = *(double *)(lVar12 + uVar25 * 0x18);
        dVar35 = *(double *)(lVar12 + 8 + uVar25 * 0x18);
        lVar13 = *(longlong *)
                  (*(longlong *)((longlong)this + 0x90) + (ulonglong)((uint)param_1 >> 9) * 8);
        dVar6 = *(double *)(lVar12 + 0x10 + uVar25 * 0x18);
        pdVar2 = (double *)(lVar13 + uVar25 * 0x18);
        local_3b0 = *(double *)(lVar13 + 0x10 + uVar25 * 0x18) + dStack_3b8;
        local_3c0 = *pdVar2 + dStack_3b8;
        dStack_3b8 = pdVar2[1] + dStack_3b8;
        dVar32 = dVar6 - local_3b0;
        dVar6 = dVar6 + local_3b0;
        dVar34 = dVar5 - local_3c0;
        dVar33 = dVar35 - dStack_3b8;
        dVar35 = dVar35 + dStack_3b8;
        dVar5 = dVar5 + local_3c0;
        dVar16 = (local_3a8._s_0.X + local_390) - (dVar5 + dVar34);
        dVar5 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar9,SUB84(dVar16,0) & uVar8)
                - ((local_390 - local_3a8._s_0.X) + (dVar5 - dVar34));
        if (dVar5 <= 0.0) {
          dVar5 = 0.0;
        }
        dVar34 = (local_3a8._s_0.Y + local_388) - (dVar35 + dVar33);
        dVar35 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar9,SUB84(dVar34,0) & uVar8)
                 - ((local_388 - local_3a8._s_0.Y) + (dVar35 - dVar33));
        if (dVar35 <= 0.0) {
          dVar35 = 0.0;
        }
        dVar34 = (local_3a8._s_0.Z + local_380) - (dVar6 + dVar32);
        dVar6 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar9,SUB84(dVar34,0) & uVar8)
                - ((local_380 - local_3a8._s_0.Z) + (dVar6 - dVar32));
        if (dVar6 <= 0.0) {
          dVar6 = 0.0;
        }
        bVar22 = (dVar35 * dVar35 + dVar5 * dVar5 + dVar6 * dVar6) * dVar14 < *param_6;
        goto LAB_1433f3a91;
      }
      uVar24 = uVar24 - 1;
      param_1 = *(int *)(*(longlong *)
                          (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1;
      dVar5 = box_box_distsqr(this,uVar24,(TAxisAlignedBox3<double> *)&local_3a8._s_0);
      dVar35 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_3a8._s_0);
      if (dVar35 < dVar5) {
        if (dVar35 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar28,param_6,param_7,param_8,param_9);
        }
        bVar22 = dVar5 < *param_6;
        param_1 = uVar24;
        goto LAB_1433f3a91;
      }
      if (dVar5 < *param_6) {
        find_nearest_triangles
                  (this,uVar24,param_2,param_3,param_4,iVar28,param_6,param_7,param_8,param_9);
      }
      if (*param_6 <= dVar35) {
        return;
      }
      param_5 = param_5 + 1;
      iVar28 = iVar28 + 1;
    }
    if ((int)uVar24 < param_2->TrianglesEnd) {
      local_400 = *(uint *)(*(longlong *)
                             (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar7 >> 9) * 8) +
                           (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar8 = *(uint *)(*(longlong *)
                         ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
      local_410 = (ulonglong)uVar8;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      if ((int)uVar8 < 1) {
        return;
      }
      break;
    }
LAB_1433f34a7:
    lVar12 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + uVar25 * 8);
    dVar5 = *(double *)(lVar12 + uVar29 * 0x18);
    lVar13 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + uVar25 * 8);
    dVar35 = *(double *)(lVar12 + 8 + uVar29 * 0x18);
    dVar6 = *(double *)(lVar12 + 0x10 + uVar29 * 0x18);
    pFVar11 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar34 = dVar5 - *(double *)(lVar13 + uVar29 * 0x18);
    dVar32 = dVar35 - *(double *)(lVar13 + 8 + uVar29 * 0x18);
    dVar33 = dVar6 - *(double *)(lVar13 + 0x10 + uVar29 * 0x18);
    dVar5 = dVar5 + *(double *)(lVar13 + uVar29 * 0x18);
    dVar35 = dVar35 + *(double *)(lVar13 + 8 + uVar29 * 0x18);
    dVar6 = dVar6 + *(double *)(lVar13 + 0x10 + uVar29 * 0x18);
    dVar16 = dVar5 - dVar34;
    dVar5 = dVar5 + dVar34;
    dVar34 = dVar35 + dVar32;
    dVar35 = dVar35 - dVar32;
    dVar32 = dVar6 + dVar33;
    dVar6 = dVar6 - dVar33;
    uVar7 = *(uint *)(*(longlong *)(pFVar11 + (ulonglong)(uVar24 >> 9) * 8) +
                     (ulonglong)(uVar24 & 0x1ff) * 4);
    if ((int)uVar7 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_378._s_0,~uVar7,param_3);
      dVar5 = dVar5 - (local_378._s_0.X + local_360);
      dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar9,SUB84(dVar5,0) & uVar8) -
              ((local_360 - local_378._s_0.X) + dVar16);
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      dVar34 = dVar34 - (local_378._s_0.Y + local_358);
      dVar35 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar9,SUB84(dVar34,0) & uVar8) -
               ((local_358 - local_378._s_0.Y) + dVar35);
      if (dVar35 <= 0.0) {
        dVar35 = 0.0;
      }
      dVar32 = dVar32 - (local_378._s_0.Z + local_350);
      dVar6 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar9,SUB84(dVar32,0) & uVar8) -
              ((local_350 - local_378._s_0.Z) + dVar6);
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      bVar22 = (dVar35 * dVar35 + dVar5 * dVar5 + dVar6 * dVar6) * dVar14 < *param_6;
      param_4 = ~uVar7;
    }
    else {
      uVar7 = uVar7 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar11 + (ulonglong)(uVar24 + 1 >> 9) * 8) +
                        (ulonglong)(uVar24 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_348._s_0,uVar7,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_318._s_0,param_4,param_3);
      dVar33 = dVar5 - (local_348._s_0.X + local_330);
      dVar33 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar9,SUB84(dVar33,0) & uVar8) -
               ((local_330 - local_348._s_0.X) + dVar16);
      if (dVar33 <= 0.0) {
        dVar33 = 0.0;
      }
      dVar17 = dVar34 - (local_348._s_0.Y + local_328);
      dVar17 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar9,SUB84(dVar17,0) & uVar8) -
               ((local_328 - local_348._s_0.Y) + dVar35);
      if (dVar17 <= 0.0) {
        dVar17 = 0.0;
      }
      dVar15 = dVar32 - (local_348._s_0.Z + local_320);
      dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar9,SUB84(dVar15,0) & uVar8) -
               ((local_320 - local_348._s_0.Z) + dVar6);
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      dVar5 = dVar5 - (local_318._s_0.X + local_300);
      dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar9,SUB84(dVar5,0) & uVar8) -
              ((local_300 - local_318._s_0.X) + dVar16);
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      dVar34 = dVar34 - (local_318._s_0.Y + local_2f8);
      dVar33 = (dVar17 * dVar17 + dVar33 * dVar33 + dVar15 * dVar15) * dVar14;
      dVar35 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar9,SUB84(dVar34,0) & uVar8) -
               ((local_2f8 - local_318._s_0.Y) + dVar35);
      if (dVar35 <= 0.0) {
        dVar35 = 0.0;
      }
      dVar32 = dVar32 - (local_318._s_0.Z + local_2f0);
      dVar6 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar9,SUB84(dVar32,0) & uVar8) -
              ((local_2f0 - local_318._s_0.Z) + dVar6);
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      dVar5 = (dVar35 * dVar35 + dVar5 * dVar5 + dVar6 * dVar6) * dVar14;
      if (dVar33 <= dVar5) {
        if (dVar33 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar7,iVar28,param_6,param_7,param_8,param_9);
        }
        if (*param_6 <= dVar5) {
          return;
        }
        param_5 = param_5 + 1;
        iVar28 = iVar28 + 1;
        goto LAB_1433f3240;
      }
      if (dVar5 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar28,param_6,param_7,param_8,param_9);
      }
      bVar22 = dVar33 < *param_6;
      param_4 = uVar7;
    }
LAB_1433f3a91:
    if (!bVar22) {
      return;
    }
    param_5 = param_5 + 1;
    iVar28 = iVar28 + 1;
  } while( true );
LAB_1433f3310:
  uVar24 = uVar24 + 1;
  local_3d8 = (ulonglong)uVar24;
  iVar28 = *(int *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
  local_3f0 = iVar28;
  if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_1433f336d:
    `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
              (param_2->Mesh,iVar28,(TVector<double> *)&local_248._s_0,
               (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 == (void *)0x0) {
      uVar30 = SUB84(local_218._s_0.Z,0);
      uVar31 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
    }
    else {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar1 = &param_3->field_0x10;
      pcVar10 = *(code **)param_3;
      plVar26 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar26 = (longlong *)puVar1;
      }
      uVar23 = (**(code **)(*plVar26 + 8))();
      (*pcVar10)(&local_2e8,uVar23,&local_248);
      local_248._s_0.X = local_2e8;
      local_248._s_0.Y = dStack_2e0;
      local_248._s_0.Z = local_2d8;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar10 = *(code **)param_3;
      plVar26 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar26 = (longlong *)puVar1;
      }
      uVar23 = (**(code **)(*plVar26 + 8))();
      (*pcVar10)(&local_2d0,uVar23,&TStack_230);
      TStack_230._s_0.X = local_2d0;
      TStack_230._s_0.Y = dStack_2c8;
      TStack_230._s_0.Z = local_2c0;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar10 = *(code **)param_3;
      plVar26 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar26 = (longlong *)puVar1;
      }
      uVar23 = (**(code **)(*plVar26 + 8))();
      (*pcVar10)(&local_2b8,uVar23,&local_218);
      uVar30 = SUB84(local_2a8,0);
      uVar31 = (undefined4)((ulonglong)local_2a8 >> 0x20);
      local_218._0_4_ = local_2b8;
      local_218._4_4_ = uStack_2b4;
      local_218._8_4_ = uStack_2b0;
      local_218._12_4_ = uStack_2ac;
      local_218._16_8_ = local_2a8;
    }
    local_1f8.DistanceSquared = dVar5;
    local_1f8.Triangle[0].V[2].field0_0x0._s_0.Z = (double)CONCAT44(uVar31,uVar30);
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.X = local_248._s_0.X;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Y = local_248._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Y = TStack_230._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Z = TStack_230._s_0.Z;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Z = local_248._s_0.Z;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.X = TStack_230._s_0.X;
    uVar8 = uVar7;
    uVar25 = (ulonglong)local_400;
    local_1f8.Triangle[0].V[2].field0_0x0._0_4_ = local_218._0_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._4_4_ = local_218._4_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._8_4_ = local_218._8_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._12_4_ = local_218._12_4_;
    if (0 < (int)local_400) {
      do {
        local_3e0 = uVar25;
        uVar8 = uVar8 + 1;
        uVar9 = *(uint *)(*(longlong *)
                           (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar8 >> 9) * 8) +
                         (ulonglong)(uVar8 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_1433f3bda:
          plVar26 = *(longlong **)((longlong)this + 8);
          lVar12 = plVar26[1];
          uVar24 = 0;
          if ((int)uVar9 < *(int *)(lVar12 + 0x98)) {
            uVar24 = ~uVar9 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar12 = *(longlong *)(lVar12 + 0x90);
          local_3d0 = *(ulonglong *)(lVar12 + (longlong)(int)uVar9 * 0xc);
          local_3c8 = *(uint *)(lVar12 + 8 + (longlong)(int)uVar9 * 0xc);
          lVar12 = *(longlong *)(*plVar26 + 0x10);
          lVar13 = *(longlong *)(lVar12 + (ulonglong)((uint)local_3d0 >> 9) * 8);
          puVar4 = (undefined4 *)(lVar13 + 0x10 + (ulonglong)((uint)local_3d0 & 0x1ff) * 0x18);
          uStack_288 = *puVar4;
          uStack_284 = puVar4[1];
          pdVar2 = (double *)(lVar13 + (ulonglong)((uint)local_3d0 & 0x1ff) * 0x18);
          local_298 = *pdVar2;
          dStack_290 = pdVar2[1];
          uVar25 = (ulonglong)((uint)(local_3d0 >> 0x20) & 0x1ff);
          lVar13 = *(longlong *)(lVar12 + (local_3d0 >> 0x29) * 8);
          puVar3 = (undefined8 *)(lVar13 + uVar25 * 0x18);
          uVar18 = *puVar3;
          uVar19 = puVar3[1];
          uVar23 = *(undefined8 *)(lVar13 + 0x10 + uVar25 * 0x18);
          local_280._0_4_ = (undefined4)uVar18;
          local_280._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20);
          uStack_278._0_4_ = (undefined4)uVar19;
          uStack_278._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
          uStack_270 = (undefined4)uVar23;
          uStack_26c = (undefined4)((ulonglong)uVar23 >> 0x20);
          lVar12 = *(longlong *)(lVar12 + (ulonglong)(local_3c8 >> 9) * 8);
          pdVar2 = (double *)(lVar12 + (ulonglong)(local_3c8 & 0x1ff) * 0x18);
          local_268 = *pdVar2;
          dStack_260 = pdVar2[1];
          local_258 = *(double *)(lVar12 + 0x10 + (ulonglong)(local_3c8 & 0x1ff) * 0x18);
          local_1f8.DistanceSquared = dVar5;
          local_1f8.Triangle[1].V[1].field0_0x0._0_4_ = (undefined4)local_280;
          local_1f8.Triangle[1].V[1].field0_0x0._4_4_ = local_280._4_4_;
          local_1f8.Triangle[1].V[1].field0_0x0._8_4_ = (undefined4)uStack_278;
          local_1f8.Triangle[1].V[1].field0_0x0._12_4_ = uStack_278._4_4_;
          local_280 = uVar18;
          uStack_278 = uVar19;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X = local_298;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y = dStack_290;
          local_1f8.Triangle[1].V[0].field0_0x0._16_4_ = uStack_288;
          local_1f8.Triangle[1].V[0].field0_0x0._20_4_ = uStack_284;
          local_1f8.Triangle[1].V[1].field0_0x0._16_4_ = uStack_270;
          local_1f8.Triangle[1].V[1].field0_0x0._20_4_ = uStack_26c;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X = local_268;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y = dStack_260;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z = local_258;
          dVar14 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar14 < *param_6) {
            iStack_3e8 = local_3f0;
            FVar20._s_0.B = local_3f0;
            FVar20._s_0.A = uVar9;
            *param_6 = dVar14;
            param_7->field0_0x0 = FVar20;
            local_3ec = uVar9;
          }
        }
        else {
          local_3f8[0] = uVar9;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar26 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar10 = *(code **)&param_8->TriangleFilterF;
          plVar27 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar26 != (longlong *)0x0) {
            plVar27 = plVar26;
          }
          uVar23 = (**(code **)(*plVar27 + 8))();
          cVar21 = (*pcVar10)(uVar23,local_3f8);
          if (cVar21 != '\0') goto LAB_1433f3bda;
        }
        uVar25 = local_3e0 - 1;
      } while (local_3e0 - 1 != 0);
      local_3e0 = 0;
    }
  }
  else {
    local_408[0] = iVar28;
    Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
    plVar26 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
    pcVar10 = *(code **)&param_9->TriangleFilterF;
    plVar27 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
    if (plVar26 != (longlong *)0x0) {
      plVar27 = plVar26;
    }
    uVar23 = (**(code **)(*plVar27 + 8))();
    cVar21 = (*pcVar10)(uVar23,local_408);
    if (cVar21 != '\0') goto LAB_1433f336d;
  }
  uVar24 = (uint)local_3d8;
  local_410 = local_410 - 1;
  if (local_410 == 0) {
    return;
  }
  goto LAB_1433f3310;
}

// find_nearest_triangles @ 1433f3e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_nearest_triangles
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,double *param_6,FIndex2i *param_7,FQueryOptions *param_8,
          FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  FIndex2i_u_0 FVar20;
  char cVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong *plVar25;
  longlong *plVar26;
  ulonglong uVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  FQueryOptions *pFVar31;
  bool bVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auStackY_368 [32];
  uint local_300 [2];
  FQueryOptions *local_2f8;
  FIndex2i_u_0 *local_2f0;
  ulonglong local_2e8;
  ulonglong local_2e0;
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint uStack_2cc;
  TVector<double>_u_0 local_2c8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TDistTriangle3Triangle3<double> local_1f8;
  ulonglong local_f8;
  
  dVar16 = __real_3fd0000000000000;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  iVar28 = param_5 + 1;
  local_2f0 = &param_7->field0_0x0;
  local_2f8 = param_9;
LAB_1433f3ef0:
  do {
    while( true ) {
      dVar5 = __real_bff0000000000000;
      local_2e0 = (ulonglong)(param_1 & 0x1ff);
      local_2e8 = (ulonglong)((uint)param_1 >> 9);
      uVar10 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data + local_2e8 * 8) +
                        local_2e0 * 4);
      uVar24 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar10 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar24)) goto LAB_1433f411a;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,param_4,param_3);
      pFVar15 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar24 = *(uint *)(*(longlong *)(pFVar15 + (ulonglong)(uVar10 >> 9) * 8) +
                        (ulonglong)(uVar10 & 0x1ff) * 4);
      if ((int)uVar24 < 0) {
        dVar5 = this->BoxEps;
        param_1 = ~uVar24;
        uVar30 = (ulonglong)(param_1 & 0x1ff);
        lVar14 = *(longlong *)
                  ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar6 = *(double *)(lVar14 + uVar30 * 0x18);
        dVar37 = *(double *)(lVar14 + 8 + uVar30 * 0x18);
        lVar13 = *(longlong *)
                  ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar7 = *(double *)(lVar14 + 0x10 + uVar30 * 0x18);
        pdVar2 = (double *)(lVar13 + uVar30 * 0x18);
        local_2c8._s_0.Z = *(double *)(lVar13 + 0x10 + uVar30 * 0x18);
        dVar8 = *pdVar2 + dVar5;
        dVar9 = pdVar2[1] + dVar5;
        dVar35 = dVar6 + dVar8;
        dVar6 = dVar6 - dVar8;
        dVar8 = dVar37 + dVar9;
        dVar37 = dVar37 - dVar9;
        dVar9 = dVar7 + local_2c8._s_0.Z + dVar5;
        dVar7 = dVar7 - (local_2c8._s_0.Z + dVar5);
        dVar5 = (local_248._s_0.X + TStack_230._s_0.X) - (dVar35 + dVar6);
        dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar11,SUB84(dVar5,0) & uVar29)
                - ((TStack_230._s_0.X - local_248._s_0.X) + (dVar35 - dVar6));
        if (dVar5 <= 0.0) {
          dVar5 = 0.0;
        }
        dVar6 = (local_248._s_0.Y + TStack_230._s_0.Y) - (dVar8 + dVar37);
        dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar11,SUB84(dVar6,0) & uVar29)
                - ((TStack_230._s_0.Y - local_248._s_0.Y) + (dVar8 - dVar37));
        if (dVar6 <= 0.0) {
          dVar6 = 0.0;
        }
        dVar37 = (local_248._s_0.Z + TStack_230._s_0.Z) - (dVar9 + dVar7);
        dVar37 = (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar11,
                                  SUB84(dVar37,0) & uVar29) -
                 ((TStack_230._s_0.Z - local_248._s_0.Z) + (dVar9 - dVar7));
        if (dVar37 <= 0.0) {
          dVar37 = 0.0;
        }
        bVar32 = (dVar6 * dVar6 + dVar5 * dVar5 + dVar37 * dVar37) * dVar16 < *param_6;
        goto LAB_1433f46f7;
      }
      uVar24 = uVar24 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar15 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                        (ulonglong)(uVar10 + 1 & 0x1ff) * 4) - 1;
      dVar5 = box_box_distsqr(this,uVar24,(TAxisAlignedBox3<double> *)&local_248._s_0);
      dVar6 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_248._s_0);
      if (dVar6 < dVar5) {
        if (dVar6 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar28,param_6,
                     (FIndex2i *)&local_2f0->_s_0,param_8,local_2f8);
        }
        bVar32 = dVar5 < *param_6;
        param_1 = uVar24;
        goto LAB_1433f46f7;
      }
      if (dVar5 < *param_6) {
        find_nearest_triangles
                  (this,uVar24,param_2,param_3,param_4,iVar28,param_6,(FIndex2i *)&local_2f0->_s_0,
                   param_8,local_2f8);
      }
      if (*param_6 <= dVar6) {
        return;
      }
      param_5 = param_5 + 1;
      iVar28 = iVar28 + 1;
    }
    if ((int)uVar24 < param_2->TrianglesEnd) {
      local_2d4 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4);
      uVar30 = (ulonglong)local_2d4;
      uVar29 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
      local_2e0 = (ulonglong)uVar29;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      pFVar31 = local_2f8;
      if ((int)uVar29 < 1) {
        return;
      }
      break;
    }
LAB_1433f411a:
    lVar14 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + local_2e8 * 8);
    dVar5 = *(double *)(lVar14 + local_2e0 * 0x18);
    lVar13 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + local_2e8 * 8);
    dVar6 = *(double *)(lVar14 + 8 + local_2e0 * 0x18);
    dVar37 = *(double *)(lVar14 + 0x10 + local_2e0 * 0x18);
    pFVar15 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar7 = *(double *)(lVar13 + local_2e0 * 0x18);
    dVar8 = *(double *)(lVar13 + 8 + local_2e0 * 0x18);
    dVar35 = dVar5 - dVar7;
    dVar9 = *(double *)(lVar13 + 0x10 + local_2e0 * 0x18);
    dVar17 = dVar6 - dVar8;
    dVar36 = dVar37 - dVar9;
    dVar5 = dVar5 + dVar7;
    dVar6 = dVar6 + dVar8;
    dVar37 = dVar37 + dVar9;
    dVar8 = dVar35 + dVar5;
    dVar7 = dVar17 + dVar6;
    uVar10 = *(uint *)(*(longlong *)(pFVar15 + (ulonglong)(uVar24 >> 9) * 8) +
                      (ulonglong)(uVar24 & 0x1ff) * 4);
    dVar9 = dVar36 + dVar37;
    dVar5 = dVar5 - dVar35;
    dVar6 = dVar6 - dVar17;
    dVar37 = dVar37 - dVar36;
    if ((int)uVar10 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,~uVar10,param_3);
      dVar8 = dVar8 - (local_248._s_0.X + TStack_230._s_0.X);
      dVar5 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar11,SUB84(dVar8,0) & uVar29) -
              ((TStack_230._s_0.X - local_248._s_0.X) + dVar5);
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      dVar7 = dVar7 - (local_248._s_0.Y + TStack_230._s_0.Y);
      dVar6 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar11,SUB84(dVar7,0) & uVar29) -
              ((TStack_230._s_0.Y - local_248._s_0.Y) + dVar6);
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      dVar9 = dVar9 - (local_248._s_0.Z + TStack_230._s_0.Z);
      dVar37 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar11,SUB84(dVar9,0) & uVar29) -
               ((TStack_230._s_0.Z - local_248._s_0.Z) + dVar37);
      if (dVar37 <= 0.0) {
        dVar37 = 0.0;
      }
      bVar32 = (dVar6 * dVar6 + dVar5 * dVar5 + dVar37 * dVar37) * dVar16 < *param_6;
      param_4 = ~uVar10;
    }
    else {
      uVar10 = uVar10 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar15 + (ulonglong)(uVar24 + 1 >> 9) * 8) +
                        (ulonglong)(uVar24 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_248._s_0,uVar10,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2c8._s_0,param_4,param_3);
      dVar35 = dVar8 - (local_248._s_0.X + TStack_230._s_0.X);
      dVar35 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar11,SUB84(dVar35,0) & uVar29)
               - ((TStack_230._s_0.X - local_248._s_0.X) + dVar5);
      if (dVar35 <= 0.0) {
        dVar35 = 0.0;
      }
      dVar17 = dVar7 - (local_248._s_0.Y + TStack_230._s_0.Y);
      dVar17 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar11,SUB84(dVar17,0) & uVar29)
               - ((TStack_230._s_0.Y - local_248._s_0.Y) + dVar6);
      if (dVar17 <= 0.0) {
        dVar17 = 0.0;
      }
      dVar36 = dVar9 - (local_248._s_0.Z + TStack_230._s_0.Z);
      dVar36 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar11,SUB84(dVar36,0) & uVar29)
               - ((TStack_230._s_0.Z - local_248._s_0.Z) + dVar37);
      if (dVar36 <= 0.0) {
        dVar36 = 0.0;
      }
      dVar8 = dVar8 - ((double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_) + local_2b0);
      dVar5 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar11,SUB84(dVar8,0) & uVar29) -
              ((local_2b0 - (double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_)) + dVar5);
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      dVar7 = dVar7 - ((double)CONCAT44(local_2c8._12_4_,local_2c8._8_4_) + local_2a8);
      dVar8 = (dVar17 * dVar17 + dVar35 * dVar35 + dVar36 * dVar36) * dVar16;
      dVar6 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar11,SUB84(dVar7,0) & uVar29) -
              ((local_2a8 - (double)CONCAT44(local_2c8._12_4_,local_2c8._8_4_)) + dVar6);
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      dVar9 = dVar9 - (local_2c8._s_0.Z + local_2a0);
      dVar37 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar11,SUB84(dVar9,0) & uVar29) -
               ((local_2a0 - local_2c8._s_0.Z) + dVar37);
      if (dVar37 <= 0.0) {
        dVar37 = 0.0;
      }
      dVar5 = (dVar6 * dVar6 + dVar5 * dVar5 + dVar37 * dVar37) * dVar16;
      if (dVar8 <= dVar5) {
        if (dVar8 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar10,iVar28,param_6,(FIndex2i *)&local_2f0->_s_0
                     ,param_8,local_2f8);
        }
        if (*param_6 <= dVar5) {
          return;
        }
        param_5 = param_5 + 1;
        iVar28 = iVar28 + 1;
        goto LAB_1433f3ef0;
      }
      if (dVar5 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar28,param_6,(FIndex2i *)&local_2f0->_s_0,
                   param_8,local_2f8);
      }
      bVar32 = dVar8 < *param_6;
      param_4 = uVar10;
    }
LAB_1433f46f7:
    if (!bVar32) {
      return;
    }
    param_5 = param_5 + 1;
    iVar28 = iVar28 + 1;
  } while( true );
LAB_1433f3fc0:
  uVar24 = uVar24 + 1;
  local_2e8 = (ulonglong)uVar24;
  uVar29 = *(uint *)(*(longlong *)
                      ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
  local_2d8 = uVar29;
  if (*(void **)&pFVar31->TriangleFilterF == (void *)0x0) {
LAB_1433f401f:
    FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (param_2->Mesh,uVar29,(TVector<double> *)&local_248._s_0,
               (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 == (void *)0x0) {
      uVar33 = SUB84(local_218._s_0.Z,0);
      uVar34 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
    }
    else {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar1 = &param_3->field_0x10;
      pcVar12 = *(code **)param_3;
      plVar25 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar25 = (longlong *)puVar1;
      }
      uVar22 = (**(code **)(*plVar25 + 8))();
      (*pcVar12)(&local_2c8,uVar22,&local_248);
      local_248._s_0.X = (double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_);
      local_248._s_0.Y = (double)CONCAT44(local_2c8._12_4_,local_2c8._8_4_);
      local_248._s_0.Z = local_2c8._s_0.Z;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar12 = *(code **)param_3;
      plVar25 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar25 = (longlong *)puVar1;
      }
      uVar22 = (**(code **)(*plVar25 + 8))();
      (*pcVar12)(&local_2c8,uVar22,&TStack_230);
      TStack_230._s_0.X = (double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_);
      TStack_230._s_0.Y = (double)CONCAT44(local_2c8._12_4_,local_2c8._8_4_);
      TStack_230._16_8_ = local_2c8._s_0.Z;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar12 = *(code **)param_3;
      plVar25 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar25 = (longlong *)puVar1;
      }
      uVar22 = (**(code **)(*plVar25 + 8))();
      (*pcVar12)(&local_2c8,uVar22,&local_218);
      uVar33 = SUB84(local_2c8._s_0.Z,0);
      uVar34 = (undefined4)((ulonglong)local_2c8._16_8_ >> 0x20);
      local_218._0_4_ = local_2c8._0_4_;
      local_218._4_4_ = local_2c8._4_4_;
      local_218._8_4_ = local_2c8._8_4_;
      local_218._12_4_ = local_2c8._12_4_;
      local_218._16_8_ = local_2c8._s_0.Z;
    }
    local_1f8.DistanceSquared = dVar5;
    local_1f8.Triangle[0].V[2].field0_0x0._s_0.Z = (double)CONCAT44(uVar34,uVar33);
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.X = local_248._s_0.X;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Y = local_248._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Y = TStack_230._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Z = TStack_230._s_0.Z;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Z = local_248._s_0.Z;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.X = TStack_230._s_0.X;
    pFVar31 = local_2f8;
    uVar29 = uVar10;
    local_1f8.Triangle[0].V[2].field0_0x0._0_4_ = local_218._0_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._4_4_ = local_218._4_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._8_4_ = local_218._8_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._12_4_ = local_218._12_4_;
    if (0 < (int)uVar30) {
      do {
        uVar29 = uVar29 + 1;
        uVar11 = *(uint *)(*(longlong *)
                            ((this->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_1433f482c:
          uVar23 = (ulonglong)(uVar11 & 0x1ff);
          lVar14 = *(longlong *)
                    ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar11 >> 9) * 8);
          pFVar15 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
          uVar24 = *(uint *)(lVar14 + uVar23 * 0xc);
          uVar27 = (ulonglong)(uVar24 & 0x1ff);
          pdVar2 = (double *)(*(longlong *)(pFVar15 + (ulonglong)(uVar24 >> 9) * 8) + uVar27 * 0x18)
          ;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X = *pdVar2;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y = pdVar2[1];
          puVar4 = (undefined4 *)
                   (*(longlong *)(pFVar15 + (ulonglong)(uVar24 >> 9) * 8) + 0x10 + uVar27 * 0x18);
          uStack_288 = *puVar4;
          uStack_284 = puVar4[1];
          uVar24 = *(uint *)(lVar14 + 4 + uVar23 * 0xc);
          uVar27 = (ulonglong)(uVar24 & 0x1ff);
          puVar3 = (undefined8 *)
                   (*(longlong *)(pFVar15 + (ulonglong)(uVar24 >> 9) * 8) + uVar27 * 0x18);
          uVar18 = *puVar3;
          uVar19 = puVar3[1];
          uVar22 = *(undefined8 *)
                    (*(longlong *)(pFVar15 + (ulonglong)(uVar24 >> 9) * 8) + 0x10 + uVar27 * 0x18);
          uVar24 = *(uint *)(lVar14 + 8 + uVar23 * 0xc);
          uVar23 = (ulonglong)(uVar24 & 0x1ff);
          local_280._0_4_ = (undefined4)uVar18;
          local_280._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20);
          pdVar2 = (double *)(*(longlong *)(pFVar15 + (ulonglong)(uVar24 >> 9) * 8) + uVar23 * 0x18)
          ;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X = *pdVar2;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y = pdVar2[1];
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z =
               *(double *)
                (*(longlong *)(pFVar15 + (ulonglong)(uVar24 >> 9) * 8) + 0x10 + uVar23 * 0x18);
          uStack_278._0_4_ = (undefined4)uVar19;
          uStack_278._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
          uStack_270 = (undefined4)uVar22;
          uStack_26c = (undefined4)((ulonglong)uVar22 >> 0x20);
          local_1f8.Triangle[1].V[1].field0_0x0._8_4_ = (undefined4)uStack_278;
          local_1f8.Triangle[1].V[1].field0_0x0._12_4_ = uStack_278._4_4_;
          local_1f8.DistanceSquared = dVar5;
          local_1f8.Triangle[1].V[1].field0_0x0._0_4_ = (undefined4)local_280;
          local_1f8.Triangle[1].V[1].field0_0x0._4_4_ = local_280._4_4_;
          local_280 = uVar18;
          uStack_278 = uVar19;
          local_1f8.Triangle[1].V[0].field0_0x0._16_4_ = uStack_288;
          local_1f8.Triangle[1].V[0].field0_0x0._20_4_ = uStack_284;
          local_1f8.Triangle[1].V[1].field0_0x0._16_4_ = uStack_270;
          local_1f8.Triangle[1].V[1].field0_0x0._20_4_ = uStack_26c;
          dVar16 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar16 < *param_6) {
            uStack_2cc = local_2d8;
            FVar20._s_0.B = local_2d8;
            FVar20._s_0.A = uVar11;
            *param_6 = dVar16;
            *local_2f0 = FVar20;
            local_2d0 = uVar11;
          }
        }
        else {
          local_300[0] = uVar11;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar25 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar12 = *(code **)&param_8->TriangleFilterF;
          plVar26 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar25 != (longlong *)0x0) {
            plVar26 = plVar25;
          }
          uVar22 = (**(code **)(*plVar26 + 8))();
          cVar21 = (*pcVar12)(uVar22,local_300);
          if (cVar21 != '\0') goto LAB_1433f482c;
        }
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
      uVar30 = (ulonglong)local_2d4;
      pFVar31 = local_2f8;
    }
  }
  else {
    local_300[0] = uVar29;
    Core::Private::Function::CheckCallable(*(void **)&pFVar31->TriangleFilterF);
    plVar25 = *(longlong **)&(pFVar31->TriangleFilterF).field_0x28;
    pcVar12 = *(code **)&pFVar31->TriangleFilterF;
    plVar26 = (longlong *)&(pFVar31->TriangleFilterF).field_0x10;
    if (plVar25 != (longlong *)0x0) {
      plVar26 = plVar25;
    }
    uVar22 = (**(code **)(*plVar26 + 8))();
    cVar21 = (*pcVar12)(uVar22,local_300);
    if (cVar21 != '\0') goto LAB_1433f401f;
  }
  uVar24 = (uint)local_2e8;
  local_2e0 = local_2e0 - 1;
  if (local_2e0 == 0) {
    return;
  }
  goto LAB_1433f3fc0;
}

// find_nearest_vertex @ 1433f49e0

void __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
find_nearest_vertex(void *this,int param_1,TVector<double> *param_2,double *param_3,int *param_4,
                   FQueryOptions *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  double *pdVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  uint uVar15;
  longlong *plVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint local_res10 [2];
  ulonglong local_98;
  uint local_80;
  ulonglong uVar11;
  
  plVar2 = (longlong *)((longlong)this + 0xa8);
  uVar15 = *(uint *)(*(longlong *)
                      (*(longlong *)((longlong)this + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                    (ulonglong)(param_1 & 0x1ff) * 4);
  plVar16 = plVar2;
  if (*(int *)((longlong)this + 0xb8) <= (int)uVar15) {
    do {
      uVar13 = *(uint *)(*(longlong *)(*plVar16 + (ulonglong)(uVar15 >> 9) * 8) +
                        (ulonglong)(uVar15 & 0x1ff) * 4);
      if ((int)uVar13 < 0) {
        uVar13 = ~uVar13;
        dVar17 = BoxDistanceSqr(this,uVar13,param_2);
        if (*param_3 <= dVar17 && dVar17 != *param_3) {
          return;
        }
      }
      else {
        uVar9 = uVar13 - 1;
        uVar13 = *(int *)(*(longlong *)(*plVar16 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                         (ulonglong)(uVar15 + 1 & 0x1ff) * 4) - 1;
        pTVar14 = param_2;
        dVar17 = BoxDistanceSqr(this,uVar9,param_2);
        dVar18 = BoxDistanceSqr(this,uVar13,pTVar14);
        if (dVar18 <= dVar17) {
          if (*param_3 <= dVar18) {
            return;
          }
          find_nearest_vertex(this,uVar13,pTVar14,param_3,param_4,param_5);
          uVar13 = uVar9;
          if (*param_3 <= dVar17) {
            return;
          }
        }
        else {
          if (*param_3 <= dVar17) {
            return;
          }
          find_nearest_vertex(this,uVar9,pTVar14,param_3,param_4,param_5);
          if (*param_3 <= dVar18) {
            return;
          }
        }
        plVar16 = (longlong *)((longlong)this + 0xa8);
      }
      uVar15 = *(uint *)(*(longlong *)
                          (*(longlong *)((longlong)this + 0x60) + (ulonglong)(uVar13 >> 9) * 8) +
                        (ulonglong)(uVar13 & 0x1ff) * 4);
    } while (*(int *)((longlong)this + 0xb8) <= (int)uVar15);
  }
  uVar13 = *(uint *)(*(longlong *)(*plVar16 + (ulonglong)(uVar15 >> 9) * 8) +
                    (ulonglong)(uVar15 & 0x1ff) * 4);
  local_98 = (ulonglong)uVar13;
  if (0 < (int)uVar13) {
    do {
      uVar15 = uVar15 + 1;
      uVar13 = *(uint *)(*(longlong *)(*plVar16 + (ulonglong)(uVar15 >> 9) * 8) +
                        (ulonglong)(uVar15 & 0x1ff) * 4);
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_1433f4bfb:
        puVar1 = (undefined8 *)((longlong)this + 8);
        lVar6 = *(longlong *)(*(longlong *)((longlong)this + 8) + 8);
        uVar9 = 0;
        if ((int)uVar13 < *(int *)(lVar6 + 0x98)) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar6 = *(longlong *)(lVar6 + 0x90);
        uVar4 = *(ulonglong *)(lVar6 + (longlong)(int)uVar13 * 0xc);
        uVar13 = *(uint *)(lVar6 + 8 + (longlong)(int)uVar13 * 0xc);
        local_80 = (uint)uVar4;
        lVar6 = *(longlong *)
                 (*(longlong *)(*(longlong *)*puVar1 + 0x10) + (ulonglong)(local_80 >> 9) * 8);
        pdVar3 = (double *)(lVar6 + (ulonglong)(local_80 & 0x1ff) * 0x18);
        dVar18 = (param_2->field0_0x0)._s_0.X - *pdVar3;
        dVar19 = (param_2->field0_0x0)._s_0.Y - pdVar3[1];
        dVar17 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(lVar6 + 0x10 + (ulonglong)(local_80 & 0x1ff) * 0x18);
        dVar17 = dVar19 * dVar19 + dVar18 * dVar18 + dVar17 * dVar17;
        if (dVar17 < *param_3) {
          *param_3 = dVar17;
          *param_4 = local_80;
        }
        uVar9 = (uint)(uVar4 >> 0x20);
        uVar11 = (ulonglong)(uVar9 & 0x1ff);
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)*puVar1 + 0x10) + (uVar4 >> 0x29) * 8);
        pdVar3 = (double *)(lVar6 + uVar11 * 0x18);
        dVar18 = (param_2->field0_0x0)._s_0.X - *pdVar3;
        dVar17 = (param_2->field0_0x0)._s_0.Z - *(double *)(lVar6 + 0x10 + uVar11 * 0x18);
        dVar19 = (param_2->field0_0x0)._s_0.Y - pdVar3[1];
        dVar17 = dVar19 * dVar19 + dVar18 * dVar18 + dVar17 * dVar17;
        if (dVar17 < *param_3) {
          *param_3 = dVar17;
          *param_4 = uVar9;
        }
        lVar6 = *(longlong *)
                 (*(longlong *)(*(longlong *)*puVar1 + 0x10) + (ulonglong)(uVar13 >> 9) * 8);
        pdVar3 = (double *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
        dVar18 = (param_2->field0_0x0)._s_0.X - *pdVar3;
        dVar17 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(lVar6 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
        dVar19 = (param_2->field0_0x0)._s_0.Y - pdVar3[1];
        dVar17 = dVar19 * dVar19 + dVar18 * dVar18 + dVar17 * dVar17;
        if (dVar17 < *param_3) {
          *param_3 = dVar17;
          *param_4 = uVar13;
        }
      }
      else {
        local_res10[0] = uVar13;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar16 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar5 = *(code **)&param_5->TriangleFilterF;
        plVar12 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar16 != (longlong *)0x0) {
          plVar12 = plVar16;
        }
        uVar10 = (**(code **)(*plVar12 + 8))();
        cVar7 = (*pcVar5)(uVar10,local_res10);
        if (cVar7 != '\0') goto LAB_1433f4bfb;
      }
      local_98 = local_98 - 1;
      plVar16 = plVar2;
    } while (local_98 != 0);
  }
  return;
}

// find_nearest_vertex @ 1433f4e50

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_nearest_vertex
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,TVector<double> *param_2,
          double *param_3,int *param_4,FQueryOptions *param_5)

{
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  double *pdVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong local_res8;
  uint local_res10 [2];
  uint local_80;
  ulonglong uVar11;
  
  pTVar1 = &(this->IndexList).Blocks;
  uVar14 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar14) {
    do {
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      uVar13 = *(uint *)(*(longlong *)(pFVar4 + (ulonglong)(uVar14 >> 9) * 8) +
                        (ulonglong)(uVar14 & 0x1ff) * 4);
      if ((int)uVar13 < 0) {
        uVar13 = ~uVar13;
        dVar15 = BoxDistanceSqr(this,uVar13,param_2);
        if (*param_3 <= dVar15 && dVar15 != *param_3) {
          return;
        }
      }
      else {
        uVar9 = uVar13 - 1;
        uVar13 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                         (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
        dVar15 = BoxDistanceSqr(this,uVar9,param_2);
        dVar16 = BoxDistanceSqr(this,uVar13,param_2);
        if (dVar16 <= dVar15) {
          if (*param_3 <= dVar16) {
            return;
          }
          find_nearest_vertex(this,uVar13,param_2,param_3,param_4,param_5);
          uVar13 = uVar9;
          if (*param_3 <= dVar15) {
            return;
          }
        }
        else {
          if (*param_3 <= dVar15) {
            return;
          }
          find_nearest_vertex(this,uVar9,param_2,param_3,param_4,param_5);
          if (*param_3 <= dVar16) {
            return;
          }
        }
      }
      uVar14 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar14);
  }
  uVar13 = *(uint *)(*(longlong *)((pTVar1->AllocatorInstance).Data + (ulonglong)(uVar14 >> 9) * 8)
                    + (ulonglong)(uVar14 & 0x1ff) * 4);
  local_res8 = (ulonglong)uVar13;
  if (0 < (int)uVar13) {
    do {
      uVar14 = uVar14 + 1;
      uVar13 = *(uint *)(*(longlong *)
                          ((pTVar1->AllocatorInstance).Data + (ulonglong)(uVar14 >> 9) * 8) +
                        (ulonglong)(uVar14 & 0x1ff) * 4);
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_1433f5070:
        lVar7 = *(longlong *)
                 ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar13 >> 9) * 8);
        uVar3 = *(ulonglong *)(lVar7 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
        uVar13 = *(uint *)(lVar7 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
        local_80 = (uint)uVar3;
        lVar7 = *(longlong *)
                 ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(local_80 >> 9) * 8);
        pdVar2 = (double *)(lVar7 + (ulonglong)(local_80 & 0x1ff) * 0x18);
        dVar16 = (param_2->field0_0x0)._s_0.X - *pdVar2;
        dVar17 = (param_2->field0_0x0)._s_0.Y - pdVar2[1];
        dVar15 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(lVar7 + 0x10 + (ulonglong)(local_80 & 0x1ff) * 0x18);
        dVar15 = dVar17 * dVar17 + dVar16 * dVar16 + dVar15 * dVar15;
        if (dVar15 < *param_3) {
          *param_3 = dVar15;
          *param_4 = local_80;
        }
        uVar9 = (uint)(uVar3 >> 0x20);
        uVar11 = (ulonglong)(uVar9 & 0x1ff);
        lVar7 = *(longlong *)
                 ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data + (uVar3 >> 0x29) * 8);
        pdVar2 = (double *)(lVar7 + uVar11 * 0x18);
        dVar15 = (param_2->field0_0x0)._s_0.Z - *(double *)(lVar7 + 0x10 + uVar11 * 0x18);
        dVar16 = (param_2->field0_0x0)._s_0.X - *pdVar2;
        dVar17 = (param_2->field0_0x0)._s_0.Y - pdVar2[1];
        dVar15 = dVar17 * dVar17 + dVar16 * dVar16 + dVar15 * dVar15;
        if (dVar15 < *param_3) {
          *param_3 = dVar15;
          *param_4 = uVar9;
        }
        lVar7 = *(longlong *)
                 ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar13 >> 9) * 8);
        pdVar2 = (double *)(lVar7 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
        dVar15 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(lVar7 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
        dVar16 = (param_2->field0_0x0)._s_0.X - *pdVar2;
        dVar17 = (param_2->field0_0x0)._s_0.Y - pdVar2[1];
        dVar15 = dVar17 * dVar17 + dVar16 * dVar16 + dVar15 * dVar15;
        if (dVar15 < *param_3) {
          *param_3 = dVar15;
          *param_4 = uVar13;
        }
      }
      else {
        local_res10[0] = uVar13;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_5->TriangleFilterF;
        plVar12 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar12 = plVar5;
        }
        uVar10 = (**(code **)(*plVar12 + 8))();
        cVar8 = (*pcVar6)(uVar10,local_res10);
        if (cVar8 != '\0') goto LAB_1433f5070;
      }
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
  }
  return;
}

// find_self_intersections @ 1433f5230

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
find_self_intersections
          (void *this,FIntersectionsQueryResult *param_1,bool param_2,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_3,
          FQueryOptions *param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_38;
  
  bVar2 = false;
  uVar4 = 0;
  if (0 < *(int *)((longlong)this + 0xb8)) {
    do {
      uVar3 = uVar4 + 1 +
              *(int *)(*(longlong *)
                        (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar4 >> 9) * 8) +
                      (ulonglong)(uVar4 & 0x1ff) * 4);
      for (iVar5 = uVar4 + 2; iVar5 < (int)uVar3; iVar5 = iVar5 + 1) {
        uVar4 = uVar4 + 1;
        local_38._0_8_ = *(undefined8 *)param_3;
        local_38._8_8_ = *(undefined8 *)&param_3->field_0x8;
        bVar1 = find_tri_tri_intersections
                          (this,*(int *)(*(longlong *)
                                          (*(longlong *)((longlong)this + 0xa8) +
                                          (ulonglong)(uVar4 >> 9) * 8) +
                                        (ulonglong)(uVar4 & 0x1ff) * 4),iVar5,uVar3,param_1,param_2,
                           &local_38,param_4);
        if ((bVar1) || (bVar1 = bVar2 != false, bVar2 = false, bVar1)) {
          bVar2 = true;
        }
        if ((param_1 == (FIntersectionsQueryResult *)0x0) && (bVar2 != false)) {
          return bVar2;
        }
      }
      uVar4 = uVar3;
    } while ((int)uVar3 < *(int *)((longlong)this + 0xb8));
  }
  local_38._0_8_ = *(undefined8 *)param_3;
  local_38._8_8_ = *(undefined8 *)&param_3->field_0x8;
  bVar1 = find_self_intersections_acrossboxes
                    (this,*(int *)((longlong)this + 0xbc),-1,param_1,param_2,0,&local_38,param_4);
  if ((bVar1) || (bVar1 = false, bVar2 != false)) {
    bVar1 = true;
  }
  return bVar1;
}

// find_self_intersections @ 1433f53c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_self_intersections
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,FIntersectionsQueryResult *param_1,
          bool param_2,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_3,
          FQueryOptions *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  char cVar13;
  bool bVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  uint uVar22;
  undefined1 auStackY_2d8 [32];
  char local_298;
  bool local_297;
  uint local_290 [2];
  uint local_288;
  uint local_284;
  uint local_280;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_278;
  undefined8 local_268;
  code *local_260;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_258;
  undefined8 local_250;
  undefined4 local_248;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 TStack_220;
  TVector<double>_u_0 local_208 [2];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  TVector<double>_u_0 local_198;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  ulonglong local_58;
  
  uVar11 = __real_3e45798ee2308c3a;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  bVar21 = false;
  uVar22 = 0;
  local_297 = false;
  local_258 = param_3;
  if (0 < this->TrianglesEnd) {
    do {
      local_288 = uVar22 + 1;
      local_280 = *(int *)(*(longlong *)
                            ((this->IndexList).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4) + 1 +
                  uVar22;
      uVar22 = uVar22 + 2;
      local_284 = uVar22;
      if ((int)uVar22 < (int)local_280) {
        do {
          uVar3 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(local_288 >> 9) * 8) + (ulonglong)(local_288 & 0x1ff) * 4);
          local_260 = *(code **)param_3;
          local_268 = *(undefined8 *)&param_3->field_0x8;
          local_284 = uVar22;
          if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_1433f54fa:
            cVar12 = '\0';
            local_298 = '\0';
            FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                      (this->Mesh,uVar3,(TVector<double> *)&local_238._s_0,
                       (TVector<double> *)&TStack_220._s_0,(TVector<double> *)&local_208[0]._s_0);
            local_198._s_0.X = local_238._s_0.X;
            local_198._s_0.Y = local_238._s_0.Y;
            local_178 = TStack_220._s_0.Y;
            dStack_170 = TStack_220._s_0.Z;
            local_198._s_0.Z = local_238._s_0.Z;
            dStack_180 = TStack_220._s_0.X;
            local_158 = (double)local_208[0]._16_8_;
            local_108 = uVar11;
            local_100 = 0;
            local_f8 = 0;
            local_fc = 0;
            local_168 = (double)local_208[0]._0_8_;
            dStack_160 = (double)local_208[0]._8_8_;
            lVar20 = *(longlong *)
                      ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar3 >> 9) * 8);
            local_250 = *(undefined8 *)(lVar20 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
            local_248 = *(undefined4 *)(lVar20 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
            do {
              uVar4 = *(uint *)(*(longlong *)
                                 ((this->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
              if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_1433f55fe:
                lVar20 = *(longlong *)
                          ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar4 >> 9) * 8);
                local_278._0_8_ = *(undefined8 *)(lVar20 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
                local_278._8_4_ = *(undefined4 *)(lVar20 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
                if (param_2) {
                  bVar21 = false;
                  lVar20 = 0;
                  do {
                    if (bVar21) goto LAB_1433f577c;
                    lVar16 = 0;
                    do {
                      if (*(int *)((longlong)&local_250 + lVar20 * 4) ==
                          *(int *)(&local_278.field_0x0 + lVar16 * 4)) {
                        bVar21 = true;
                        break;
                      }
                      lVar16 = lVar16 + 1;
                    } while (lVar16 < 3);
                    lVar20 = lVar20 + 1;
                  } while (lVar20 < 3);
                  if (bVar21) goto LAB_1433f577c;
                }
                uVar17 = (ulonglong)(uVar4 & 0x1ff);
                lVar20 = *(longlong *)
                          ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar4 >> 9) * 8);
                pFVar8 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
                uVar5 = *(uint *)(lVar20 + uVar17 * 0xc);
                uVar19 = (ulonglong)(uVar5 & 0x1ff);
                puVar1 = (undefined8 *)
                         (*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + uVar19 * 0x18);
                local_150 = *puVar1;
                uStack_148 = puVar1[1];
                puVar2 = (undefined4 *)
                         (*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar19 * 0x18
                         );
                local_1d8 = *puVar2;
                uStack_1d4 = puVar2[1];
                uVar5 = *(uint *)(lVar20 + 4 + uVar17 * 0xc);
                uVar19 = (ulonglong)(uVar5 & 0x1ff);
                puVar1 = (undefined8 *)
                         (*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + uVar19 * 0x18);
                uVar9 = *puVar1;
                uVar10 = puVar1[1];
                uVar15 = *(undefined8 *)
                          (*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 +
                          uVar19 * 0x18);
                uVar5 = *(uint *)(lVar20 + 8 + uVar17 * 0xc);
                uVar17 = (ulonglong)(uVar5 & 0x1ff);
                uStack_1d0._0_4_ = (undefined4)uVar9;
                uStack_1d0._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
                puVar2 = (undefined4 *)
                         (*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + uVar17 * 0x18);
                local_120 = *puVar2;
                uStack_11c = puVar2[1];
                uStack_118 = puVar2[2];
                uStack_114 = puVar2[3];
                local_110 = *(undefined8 *)
                             (*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 +
                             uVar17 * 0x18);
                local_fc = 0;
                uStack_1c8._0_4_ = (undefined4)uVar10;
                uStack_1c8._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
                uStack_1c0 = (undefined4)uVar15;
                uStack_1bc = (undefined4)((ulonglong)uVar15 >> 0x20);
                local_130 = (undefined4)uStack_1c8;
                uStack_12c = uStack_1c8._4_4_;
                uStack_138 = (undefined4)uStack_1d0;
                uStack_134 = uStack_1d0._4_4_;
                uStack_1d0 = uVar9;
                uStack_1c8 = uVar10;
                local_140 = local_1d8;
                uStack_13c = uStack_1d4;
                uStack_128 = uStack_1c0;
                uStack_124 = uStack_1bc;
                local_298 = (*local_260)(local_268,&local_198);
                cVar12 = local_298;
                if (local_298 != '\0') {
                  if (param_1 == (FIntersectionsQueryResult *)0x0) goto LAB_1433f5797;
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_198._s_0,uVar3,uVar4,param_1)
                  ;
                }
              }
              else {
                local_290[0] = uVar4;
                Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
                plVar6 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
                pcVar7 = *(code **)&param_4->TriangleFilterF;
                plVar18 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
                if (plVar6 != (longlong *)0x0) {
                  plVar18 = plVar6;
                }
                uVar15 = (**(code **)(*plVar18 + 8))();
                cVar13 = (*pcVar7)(uVar15,local_290);
                cVar12 = local_298;
                if (cVar13 != '\0') goto LAB_1433f55fe;
              }
LAB_1433f577c:
              uVar22 = uVar22 + 1;
            } while ((int)uVar22 < (int)local_280);
            if (cVar12 == '\0') goto LAB_1433f578c;
LAB_1433f5797:
            bVar21 = true;
          }
          else {
            local_290[0] = uVar3;
            Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
            plVar6 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
            pcVar7 = *(code **)&param_4->TriangleFilterF;
            plVar18 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
            if (plVar6 != (longlong *)0x0) {
              plVar18 = plVar6;
            }
            uVar15 = (**(code **)(*plVar18 + 8))();
            cVar12 = (*pcVar7)(uVar15,local_290);
            if (cVar12 != '\0') goto LAB_1433f54fa;
LAB_1433f578c:
            if (local_297 != false) goto LAB_1433f5797;
            bVar21 = false;
          }
          if ((param_1 == (FIntersectionsQueryResult *)0x0) && (bVar21 != false)) {
            return bVar21;
          }
          local_288 = local_288 + 1;
          uVar22 = local_284 + 1;
          param_3 = local_258;
          local_297 = bVar21;
          local_284 = uVar22;
        } while ((int)uVar22 < (int)local_280);
      }
      uVar22 = local_280;
    } while ((int)local_280 < this->TrianglesEnd);
  }
  local_278._0_8_ = *(undefined8 *)param_3;
  local_278._8_8_ = *(undefined8 *)&param_3->field_0x8;
  bVar14 = find_self_intersections_acrossboxes
                     (this,this->RootIndex,-1,param_1,param_2,0,&local_278,param_4);
  if ((bVar14) || (bVar14 = false, bVar21 != false)) {
    bVar14 = true;
  }
  return bVar14;
}

// find_self_intersections_acrossboxes @ 1433f5880

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
find_self_intersections_acrossboxes
          (void *this,int param_1,int param_2,FIntersectionsQueryResult *param_3,bool param_4,
          int param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_88;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  
  bVar5 = false;
  if (param_1 < 0) {
    return false;
  }
  uVar6 = *(uint *)(*(longlong *)
                     (*(longlong *)((longlong)this + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                   (ulonglong)(param_1 & 0x1ff) * 4);
  uVar8 = (ulonglong)uVar6;
  if (param_2 < 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = *(uint *)(*(longlong *)
                        (*(longlong *)((longlong)this + 0x60) + (ulonglong)((uint)param_2 >> 9) * 8)
                      + (ulonglong)(param_2 & 0x1ff) * 4);
  }
  iVar12 = *(int *)((longlong)this + 0xb8);
  if ((int)uVar6 < iVar12) {
    if ((int)uVar11 < iVar12) {
      if (param_2 == -1) {
        return false;
      }
      uVar10 = uVar6 + 1;
      iVar12 = *(int *)(*(longlong *)
                         (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar6 >> 9) * 8) +
                       (ulonglong)(uVar6 & 0x1ff) * 4) + 1 + uVar6;
      if ((int)uVar10 < iVar12) {
        while( true ) {
          local_88._0_8_ = *(undefined8 *)param_6;
          local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
          bVar4 = find_tri_tri_intersections
                            (this,*(int *)(*(longlong *)
                                            (*(longlong *)((longlong)this + 0xa8) +
                                            (ulonglong)(uVar10 >> 9) * 8) +
                                          (ulonglong)(uVar10 & 0x1ff) * 4),uVar11 + 1,
                             *(int *)(*(longlong *)
                                       (*(longlong *)((longlong)this + 0xa8) +
                                       (ulonglong)(uVar11 >> 9) * 8) +
                                     (ulonglong)(uVar11 & 0x1ff) * 4) + 1 + uVar11,param_3,param_4,
                             &local_88,param_7);
          if ((bVar4) || (bVar5 != false)) {
            bVar5 = true;
          }
          if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar5 != false)) break;
          uVar10 = uVar10 + 1;
          if (iVar12 <= (int)uVar10) {
            return bVar5;
          }
        }
        return true;
      }
      return false;
    }
LAB_1433f5a35:
    uVar8 = (ulonglong)uVar11;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar11) {
    uVar6 = param_5 & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    if (uVar6 == 1) goto LAB_1433f5a35;
  }
  uVar6 = (uint)uVar8;
  if (param_2 < 0) {
    iVar12 = param_5 + 1;
    uVar11 = *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 0xa8) + (uVar8 >> 9) * 8) +
                      (ulonglong)(uVar6 & 0x1ff) * 4);
    if (-1 < (int)uVar11) {
      iVar9 = uVar11 - 1;
      iVar1 = *(int *)(*(longlong *)
                        (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                      (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
      uVar6 = iVar1 - 1;
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar5 = find_self_intersections_acrossboxes
                        (this,iVar9,-1,param_3,param_4,iVar12,&local_88,param_7);
      if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar5)) {
        return true;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar4 = find_self_intersections_acrossboxes
                        (this,uVar6,-1,param_3,param_4,iVar12,&local_88,param_7);
      if ((bVar4) || (bVar4 = false, bVar5)) {
        bVar4 = true;
      }
      if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar4 != false)) {
        return true;
      }
      uVar8 = (ulonglong)(iVar1 - 1U & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)((longlong)this + 0x78) + (ulonglong)(uVar6 >> 9) * 8);
      local_60 = *(double *)(lVar2 + uVar8 * 0x18);
      lVar3 = *(longlong *)(*(longlong *)((longlong)this + 0x90) + (ulonglong)(uVar6 >> 9) * 8);
      local_58 = *(double *)(lVar2 + 8 + uVar8 * 0x18);
      local_50 = *(double *)(lVar2 + 0x10 + uVar8 * 0x18);
      local_78._s_0.X = local_60 - *(double *)(lVar3 + uVar8 * 0x18);
      local_78._s_0.Y = local_58 - *(double *)(lVar3 + 8 + uVar8 * 0x18);
      local_60 = local_60 + *(double *)(lVar3 + uVar8 * 0x18);
      local_58 = local_58 + *(double *)(lVar3 + 8 + uVar8 * 0x18);
      local_78._s_0.Z = local_50 - *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
      local_50 = local_50 + *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
      bVar5 = box_box_intersect(this,iVar9,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (!bVar5) {
        return bVar4;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar5 = find_self_intersections_acrossboxes
                        (this,iVar9,uVar6,param_3,param_4,iVar12,&local_88,param_7);
      if ((bVar5) || (bVar5 = false, bVar4 != false)) {
        bVar5 = true;
      }
      if (param_3 == (FIntersectionsQueryResult *)0x0) {
        if (bVar5 != false) {
          return true;
        }
        return false;
      }
      return bVar5;
    }
    local_88._0_8_ = *(undefined8 *)param_6;
    uVar11 = ~uVar11;
    param_2 = 0xffffffff;
    local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
  }
  else {
    uVar7 = (ulonglong)(param_2 & 0x1ff);
    lVar2 = *(longlong *)
             (*(longlong *)((longlong)this + 0x78) + (ulonglong)((uint)param_2 >> 9) * 8);
    local_60 = *(double *)(lVar2 + uVar7 * 0x18);
    lVar3 = *(longlong *)
             (*(longlong *)((longlong)this + 0x90) + (ulonglong)((uint)param_2 >> 9) * 8);
    local_58 = *(double *)(lVar2 + 8 + uVar7 * 0x18);
    local_50 = *(double *)(lVar2 + 0x10 + uVar7 * 0x18);
    local_78._s_0.X = local_60 - *(double *)(lVar3 + uVar7 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar3 + 8 + uVar7 * 0x18);
    local_60 = local_60 + *(double *)(lVar3 + uVar7 * 0x18);
    local_58 = local_58 + *(double *)(lVar3 + 8 + uVar7 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar3 + 0x10 + uVar7 * 0x18);
    local_50 = local_50 + *(double *)(lVar3 + 0x10 + uVar7 * 0x18);
    uVar11 = *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 0xa8) + (uVar8 >> 9) * 8) +
                      (ulonglong)(uVar6 & 0x1ff) * 4);
    if (-1 < (int)uVar11) {
      iVar12 = *(int *)(*(longlong *)
                         (*(longlong *)((longlong)this + 0xa8) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                       (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
      bVar4 = box_box_intersect(this,uVar11 - 1,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (bVar4) {
        local_88._0_8_ = *(undefined8 *)param_6;
        local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
        bVar5 = find_self_intersections_acrossboxes
                          (this,uVar11 - 1,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
        if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar5)) {
          return true;
        }
      }
      bVar4 = box_box_intersect(this,iVar12 + -1,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (!bVar4) {
        return bVar5;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar4 = find_self_intersections_acrossboxes
                        (this,iVar12 + -1,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
      if ((bVar4) || (bVar4 = false, bVar5 != false)) {
        bVar4 = true;
      }
      goto joined_r0x0001433f5c29;
    }
    uVar11 = ~uVar11;
    bVar5 = box_box_intersect(this,uVar11,(TAxisAlignedBox3<double> *)&local_78._s_0);
    if (!bVar5) {
      return false;
    }
    local_88._0_8_ = *(undefined8 *)param_6;
    local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
  }
  bVar4 = find_self_intersections_acrossboxes
                    (this,uVar11,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
joined_r0x0001433f5c29:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar4;
  }
  if (bVar4 != false) {
    return true;
  }
  return false;
}

// find_self_intersections_acrossboxes @ 1433f5ec0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_self_intersections_acrossboxes
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,int param_2,
          FIntersectionsQueryResult *param_3,bool param_4,int param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_88;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  
  bVar6 = false;
  if (param_1 < 0) {
    return false;
  }
  pFVar2 = (this->BoxToIndex).Blocks.AllocatorInstance.Data;
  uVar7 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)((uint)param_1 >> 9) * 8) +
                   (ulonglong)(param_1 & 0x1ff) * 4);
  uVar9 = (ulonglong)uVar7;
  if (param_2 < 0) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)((uint)param_2 >> 9) * 8) +
                      (ulonglong)(param_2 & 0x1ff) * 4);
  }
  iVar12 = this->TrianglesEnd;
  if ((int)uVar7 < iVar12) {
    if ((int)uVar13 < iVar12) {
      if (param_2 == -1) {
        return false;
      }
      uVar11 = uVar7 + 1;
      iVar12 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4) + 1 + uVar7;
      if ((int)uVar11 < iVar12) {
        while( true ) {
          local_88._0_8_ = *(undefined8 *)param_6;
          pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
          local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
          bVar5 = find_tri_tri_intersections
                            (this,*(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar11 >> 9) * 8) +
                                          (ulonglong)(uVar11 & 0x1ff) * 4),uVar13 + 1,
                             *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar13 >> 9) * 8) +
                                     (ulonglong)(uVar13 & 0x1ff) * 4) + 1 + uVar13,param_3,param_4,
                             &local_88,param_7);
          if ((bVar5) || (bVar6 != false)) {
            bVar6 = true;
          }
          if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar6 != false)) break;
          uVar11 = uVar11 + 1;
          if (iVar12 <= (int)uVar11) {
            return bVar6;
          }
        }
        return true;
      }
      return false;
    }
LAB_1433f6075:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_1433f6075;
  }
  uVar7 = (uint)uVar9;
  if (param_2 < 0) {
    pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
    iVar12 = param_5 + 1;
    uVar13 = *(uint *)(*(longlong *)(pFVar2 + (uVar9 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
    if (-1 < (int)uVar13) {
      iVar10 = uVar13 - 1;
      iVar1 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
      uVar7 = iVar1 - 1;
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar6 = find_self_intersections_acrossboxes
                        (this,iVar10,-1,param_3,param_4,iVar12,&local_88,param_7);
      if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar6)) {
        return true;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar5 = find_self_intersections_acrossboxes
                        (this,uVar7,-1,param_3,param_4,iVar12,&local_88,param_7);
      if ((bVar5) || (bVar5 = false, bVar6)) {
        bVar5 = true;
      }
      if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar5 != false)) {
        return true;
      }
      uVar9 = (ulonglong)(iVar1 - 1U & 0x1ff);
      lVar3 = *(longlong *)
               ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8);
      local_60 = *(double *)(lVar3 + uVar9 * 0x18);
      lVar4 = *(longlong *)
               ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8);
      local_58 = *(double *)(lVar3 + 8 + uVar9 * 0x18);
      local_50 = *(double *)(lVar3 + 0x10 + uVar9 * 0x18);
      local_78._s_0.X = local_60 - *(double *)(lVar4 + uVar9 * 0x18);
      local_78._s_0.Y = local_58 - *(double *)(lVar4 + 8 + uVar9 * 0x18);
      local_60 = local_60 + *(double *)(lVar4 + uVar9 * 0x18);
      local_58 = local_58 + *(double *)(lVar4 + 8 + uVar9 * 0x18);
      local_78._s_0.Z = local_50 - *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
      local_50 = local_50 + *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
      bVar6 = box_box_intersect(this,iVar10,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (!bVar6) {
        return bVar5;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar6 = find_self_intersections_acrossboxes
                        (this,iVar10,uVar7,param_3,param_4,iVar12,&local_88,param_7);
      if ((bVar6) || (bVar6 = false, bVar5 != false)) {
        bVar6 = true;
      }
      if (param_3 == (FIntersectionsQueryResult *)0x0) {
        if (bVar6 != false) {
          return true;
        }
        return false;
      }
      return bVar6;
    }
    local_88._0_8_ = *(undefined8 *)param_6;
    uVar13 = ~uVar13;
    param_2 = 0xffffffff;
    local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
  }
  else {
    uVar8 = (ulonglong)(param_2 & 0x1ff);
    lVar3 = *(longlong *)
             ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8
             );
    local_60 = *(double *)(lVar3 + uVar8 * 0x18);
    lVar4 = *(longlong *)
             ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8
             );
    local_58 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
    local_50 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
    pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
    local_78._s_0.X = local_60 - *(double *)(lVar4 + uVar8 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar4 + 8 + uVar8 * 0x18);
    local_60 = local_60 + *(double *)(lVar4 + uVar8 * 0x18);
    local_58 = local_58 + *(double *)(lVar4 + 8 + uVar8 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
    local_50 = local_50 + *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
    uVar13 = *(uint *)(*(longlong *)(pFVar2 + (uVar9 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
    if (-1 < (int)uVar13) {
      iVar12 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                       (ulonglong)(uVar7 + 1 & 0x1ff) * 4) + -1;
      bVar5 = box_box_intersect(this,uVar13 - 1,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (bVar5) {
        local_88._0_8_ = *(undefined8 *)param_6;
        local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
        bVar6 = find_self_intersections_acrossboxes
                          (this,uVar13 - 1,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
        if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar6)) {
          return true;
        }
      }
      bVar5 = box_box_intersect(this,iVar12,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (!bVar5) {
        return bVar6;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar5 = find_self_intersections_acrossboxes
                        (this,iVar12,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
      if ((bVar5) || (bVar5 = false, bVar6 != false)) {
        bVar5 = true;
      }
      goto joined_r0x0001433f6271;
    }
    uVar13 = ~uVar13;
    bVar6 = box_box_intersect(this,uVar13,(TAxisAlignedBox3<double> *)&local_78._s_0);
    if (!bVar6) {
      return false;
    }
    local_88._0_8_ = *(undefined8 *)param_6;
    local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
  }
  bVar5 = find_self_intersections_acrossboxes
                    (this,uVar13,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
joined_r0x0001433f6271:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_tri_tri_intersections @ 1433f6500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<`UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper>::
find_tri_tri_intersections
          (void *this,int param_1,int param_2,int param_3,FIntersectionsQueryResult *param_4,
          bool param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStackY_2b8 [32];
  char local_288;
  int local_280 [2];
  uint local_278 [2];
  int local_270;
  ulonglong local_268;
  uint local_260;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_258;
  FIntersectionsQueryResult *local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 TStack_210;
  TVector<double>_u_0 local_1f8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  TVector<double>_u_0 local_188;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_258 = param_6;
  local_250 = param_4;
  local_270 = param_3;
  if (*(void **)&param_7->TriangleFilterF != (void *)0x0) {
    local_280[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
    plVar3 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
    pcVar4 = *(code **)&param_7->TriangleFilterF;
    plVar14 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar14 = plVar3;
    }
    uVar11 = (**(code **)(*plVar14 + 8))();
    cVar7 = (*pcVar4)(uVar11,local_280);
    if (cVar7 == '\0') {
      return false;
    }
  }
  local_288 = '\0';
  `UE::Geometry::FSphereCovering::AddNegativeSpace'::__l34::FHullMeshWrapper::GetTriVertices
            (*(void **)((longlong)this + 8),param_1,(TVector<double> *)&local_228._s_0,
             (TVector<double> *)&TStack_210._s_0,(TVector<double> *)&local_1f8._s_0);
  local_f8 = __real_3e45798ee2308c3a;
  local_188._s_0.X = local_228._s_0.X;
  local_188._s_0.Y = local_228._s_0.Y;
  local_168 = TStack_210._s_0.Y;
  dStack_160 = TStack_210._s_0.Z;
  local_188._s_0.Z = local_228._s_0.Z;
  dStack_170 = TStack_210._s_0.X;
  local_148 = local_1f8._s_0.Z;
  local_f0 = 0;
  local_e8 = 0;
  local_ec = 0;
  local_158 = local_1f8._s_0.X;
  dStack_150 = local_1f8._s_0.Y;
  lVar17 = *(longlong *)(*(longlong *)((longlong)this + 8) + 8);
  uVar13 = 0;
  if (param_1 < *(int *)(lVar17 + 0x98)) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  lVar17 = *(longlong *)(lVar17 + 0x90);
  local_248 = *(undefined8 *)(lVar17 + (longlong)param_1 * 0xc);
  local_240 = *(undefined4 *)(lVar17 + 8 + (longlong)param_1 * 0xc);
  cVar7 = '\0';
  if (param_2 < param_3) {
    do {
      uVar13 = *(uint *)(*(longlong *)
                          (*(longlong *)((longlong)this + 0xa8) +
                          (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
      lVar17 = (longlong)(int)uVar13;
      if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_1433f66fc:
        lVar16 = *(longlong *)(*(longlong *)((longlong)this + 8) + 8);
        uVar10 = 0;
        if ((int)uVar13 < *(int *)(lVar16 + 0x98)) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        lVar16 = *(longlong *)(lVar16 + 0x90);
        local_238 = *(undefined8 *)(lVar16 + lVar17 * 0xc);
        local_230 = *(undefined4 *)(lVar16 + 8 + lVar17 * 0xc);
        if (param_5) {
          bVar8 = false;
          lVar16 = 0;
          do {
            if (bVar8) goto LAB_1433f6926;
            lVar12 = 0;
            do {
              if (*(int *)((longlong)&local_248 + lVar16 * 4) ==
                  *(int *)((longlong)&local_238 + lVar12 * 4)) {
                bVar8 = true;
                break;
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < 3);
            lVar16 = lVar16 + 1;
          } while (lVar16 < 3);
          if (bVar8) goto LAB_1433f6926;
        }
        plVar3 = *(longlong **)((longlong)this + 8);
        lVar16 = plVar3[1];
        uVar10 = 0;
        if ((int)uVar13 < *(int *)(lVar16 + 0x98)) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        lVar16 = *(longlong *)(lVar16 + 0x90);
        local_268 = *(ulonglong *)(lVar16 + lVar17 * 0xc);
        local_260 = *(uint *)(lVar16 + 8 + lVar17 * 0xc);
        lVar17 = *(longlong *)(*plVar3 + 0x10);
        lVar16 = *(longlong *)(lVar17 + (ulonglong)((uint)local_268 >> 9) * 8);
        puVar2 = (undefined4 *)(lVar16 + 0x10 + (ulonglong)((uint)local_268 & 0x1ff) * 0x18);
        uStack_1c8 = *puVar2;
        uStack_1c4 = puVar2[1];
        puVar1 = (undefined8 *)(lVar16 + (ulonglong)((uint)local_268 & 0x1ff) * 0x18);
        local_1d8 = *puVar1;
        uStack_1d0 = puVar1[1];
        uVar15 = (ulonglong)((uint)(local_268 >> 0x20) & 0x1ff);
        lVar16 = *(longlong *)(lVar17 + (local_268 >> 0x29) * 8);
        puVar1 = (undefined8 *)(lVar16 + uVar15 * 0x18);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar11 = *(undefined8 *)(lVar16 + 0x10 + uVar15 * 0x18);
        local_1c0._0_4_ = (undefined4)uVar5;
        local_1c0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_1b8._0_4_ = (undefined4)uVar6;
        uStack_1b8._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_1b0 = (undefined4)uVar11;
        uStack_1ac = (undefined4)((ulonglong)uVar11 >> 0x20);
        lVar17 = *(longlong *)(lVar17 + (ulonglong)(local_260 >> 9) * 8);
        puVar2 = (undefined4 *)(lVar17 + (ulonglong)(local_260 & 0x1ff) * 0x18);
        local_1a8 = *puVar2;
        uStack_1a4 = puVar2[1];
        uStack_1a0 = puVar2[2];
        uStack_19c = puVar2[3];
        local_198 = *(undefined8 *)(lVar17 + 0x10 + (ulonglong)(local_260 & 0x1ff) * 0x18);
        local_ec = 0;
        uStack_128 = (undefined4)local_1c0;
        uStack_124 = local_1c0._4_4_;
        local_120 = (undefined4)uStack_1b8;
        uStack_11c = uStack_1b8._4_4_;
        local_1c0 = uVar5;
        uStack_1b8 = uVar6;
        local_140 = local_1d8;
        uStack_138 = uStack_1d0;
        local_130 = uStack_1c8;
        uStack_12c = uStack_1c4;
        uStack_118 = uStack_1b0;
        uStack_114 = uStack_1ac;
        local_110 = local_1a8;
        uStack_10c = uStack_1a4;
        uStack_108 = uStack_1a0;
        uStack_104 = uStack_19c;
        local_100 = local_198;
        local_288 = (**(code **)local_258)(*(undefined8 *)&local_258->field_0x8,&local_188);
        if (local_288 != '\0') {
          if (local_250 == (FIntersectionsQueryResult *)0x0) {
            return true;
          }
          AddTriTriIntersectionResult
                    ((TIntrTriangle3Triangle3<double> *)&local_188._s_0,param_1,uVar13,local_250);
        }
      }
      else {
        local_278[0] = uVar13;
        Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
        plVar3 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
        pcVar4 = *(code **)&param_7->TriangleFilterF;
        plVar14 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar14 = plVar3;
        }
        uVar11 = (**(code **)(*plVar14 + 8))();
        cVar7 = (*pcVar4)(uVar11,local_278);
        if (cVar7 != '\0') goto LAB_1433f66fc;
      }
LAB_1433f6926:
      param_2 = param_2 + 1;
      cVar7 = local_288;
    } while (param_2 < local_270);
  }
  return (bool)cVar7;
}

// find_tri_tri_intersections @ 1433f6970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_tri_tri_intersections
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,int param_1,int param_2,int param_3,
          FIntersectionsQueryResult *param_4,bool param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStackY_248 [32];
  char local_218;
  uint local_210 [2];
  int local_208;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 TStack_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  double dStack_170;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_200 = param_6;
  local_208 = param_3;
  if (*(void **)&param_7->TriangleFilterF != (void *)0x0) {
    local_210[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
    plVar6 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
    pcVar7 = *(code **)&param_7->TriangleFilterF;
    plVar17 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar17 = plVar6;
    }
    uVar14 = (**(code **)(*plVar17 + 8))();
    cVar12 = (*pcVar7)(uVar14,local_210);
    if (cVar12 == '\0') {
      return false;
    }
  }
  cVar12 = '\0';
  local_218 = '\0';
  FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
            (this->Mesh,param_1,(TVector<double> *)&local_1d8._s_0,
             (TVector<double> *)&TStack_1c0._s_0,(TVector<double> *)&local_1a8._s_0);
  local_f8 = __real_3e45798ee2308c3a;
  local_188._s_0.X = local_1d8._s_0.X;
  local_188._s_0.Y = local_1d8._s_0.Y;
  local_168 = TStack_1c0._s_0.Y;
  dStack_170 = TStack_1c0._s_0.X;
  local_148 = local_1a8._s_0.Z;
  local_f0 = 0;
  local_e8 = 0;
  local_ec = 0;
  local_158 = local_1a8._s_0.X;
  dStack_150 = local_1a8._s_0.Y;
  lVar19 = *(longlong *)
            ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
            (ulonglong)((uint)param_1 >> 9) * 8);
  local_1f8 = *(undefined8 *)(lVar19 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_1f0 = *(undefined4 *)(lVar19 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  if (param_2 < param_3) {
    do {
      uVar4 = *(uint *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
      if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_1433f6b1e:
        lVar19 = *(longlong *)
                  ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar4 >> 9) * 8);
        local_1e8 = *(undefined8 *)(lVar19 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
        local_1e0 = *(undefined4 *)(lVar19 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
        if (param_5) {
          bVar11 = false;
          lVar19 = 0;
          do {
            if (bVar11) goto LAB_1433f6c8f;
            lVar15 = 0;
            do {
              if (*(int *)((longlong)&local_1f8 + lVar19 * 4) ==
                  *(int *)((longlong)&local_1e8 + lVar15 * 4)) {
                bVar11 = true;
                break;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < 3);
            lVar19 = lVar19 + 1;
          } while (lVar19 < 3);
          if (bVar11) goto LAB_1433f6c8f;
        }
        uVar16 = (ulonglong)(uVar4 & 0x1ff);
        lVar19 = *(longlong *)
                  ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar4 >> 9) * 8);
        pFVar8 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
        uVar5 = *(uint *)(lVar19 + uVar16 * 0xc);
        uVar18 = (ulonglong)(uVar5 & 0x1ff);
        puVar1 = (undefined8 *)(*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + uVar18 * 0x18)
        ;
        local_140 = *puVar1;
        uStack_138 = puVar1[1];
        puVar3 = (undefined4 *)
                 (*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar18 * 0x18);
        local_1d8._16_4_ = *puVar3;
        local_1d8._20_4_ = puVar3[1];
        uVar5 = *(uint *)(lVar19 + 4 + uVar16 * 0xc);
        uVar18 = (ulonglong)(uVar5 & 0x1ff);
        pdVar2 = (double *)(*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + uVar18 * 0x18);
        dVar9 = *pdVar2;
        dVar10 = pdVar2[1];
        uVar14 = *(undefined8 *)
                  (*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar18 * 0x18);
        uVar5 = *(uint *)(lVar19 + 8 + uVar16 * 0xc);
        uVar16 = (ulonglong)(uVar5 & 0x1ff);
        TStack_1c0._0_4_ = SUB84(dVar9,0);
        TStack_1c0._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
        puVar3 = (undefined4 *)(*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + uVar16 * 0x18)
        ;
        local_110 = *puVar3;
        uStack_10c = puVar3[1];
        uStack_108 = puVar3[2];
        uStack_104 = puVar3[3];
        local_100 = *(undefined8 *)
                     (*(longlong *)(pFVar8 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar16 * 0x18);
        local_ec = 0;
        TStack_1c0._8_4_ = SUB84(dVar10,0);
        TStack_1c0._12_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
        TStack_1c0._16_4_ = (undefined4)uVar14;
        TStack_1c0._20_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
        uStack_128 = TStack_1c0._0_4_;
        uStack_124 = TStack_1c0._4_4_;
        local_120 = TStack_1c0._8_4_;
        uStack_11c = TStack_1c0._12_4_;
        TStack_1c0._0_8_ = dVar9;
        TStack_1c0._s_0.Y = dVar10;
        local_130 = local_1d8._16_4_;
        uStack_12c = local_1d8._20_4_;
        uStack_118 = TStack_1c0._16_4_;
        uStack_114 = TStack_1c0._20_4_;
        cVar12 = (**(code **)local_200)(*(undefined8 *)&local_200->field_0x8,&local_188);
        local_218 = cVar12;
        if (cVar12 != '\0') {
          if (param_4 == (FIntersectionsQueryResult *)0x0) {
            return true;
          }
          AddTriTriIntersectionResult
                    ((TIntrTriangle3Triangle3<double> *)&local_188._s_0,param_1,uVar4,param_4);
        }
      }
      else {
        local_210[0] = uVar4;
        Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
        plVar6 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
        pcVar7 = *(code **)&param_7->TriangleFilterF;
        plVar17 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
        if (plVar6 != (longlong *)0x0) {
          plVar17 = plVar6;
        }
        uVar14 = (**(code **)(*plVar17 + 8))();
        cVar13 = (*pcVar7)(uVar14,local_210);
        cVar12 = local_218;
        if (cVar13 != '\0') goto LAB_1433f6b1e;
      }
LAB_1433f6c8f:
      param_2 = param_2 + 1;
    } while (param_2 < local_208);
  }
  return (bool)cVar12;
}

// <lambda_invoker_cdecl> @ 1434308a0

int __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::MakeDefaultSplitAxisFunc'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 143430c40

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllIntersections'::__l5::<lambda_1>
::<lambda_invoker_cdecl>(TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Test(param_1);
  if (bVar1) {
    UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_1);
    return param_1->Result == Intersects;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 143430c80

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllSelfIntersections'::__l5::
<lambda_1>::<lambda_invoker_cdecl>(TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Test(param_1);
  if (bVar1) {
    UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_1);
    return param_1->Result == Intersects;
  }
  return false;
}

// FindHitTriangle<UE::Math::TRay<double>_> @ 143437260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,TRay<double> *param_2,
          double *param_3,int *param_4,TVector<double> *param_5,FQueryOptions *param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FColliderMesh *pFVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStackY_208 [32];
  uint local_1c8 [2];
  uint *local_1c0;
  FQueryOptions *local_1b8;
  ulonglong local_1b0;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_1a8;
  TRay<double> *local_1a0;
  TVector<double> *local_198;
  undefined8 local_190;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  TVector<double>_u_0 local_f8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double local_b0;
  TVector<double>_u_0 local_a8;
  EIntersectionType local_90 [2];
  ulonglong local_88;
  
  dVar9 = __real_3e45798ee2308c3a;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1a8 = &(this->IndexList).Blocks;
  local_1c0 = (uint *)param_4;
  local_1b8 = param_6;
  local_198 = param_5;
  uVar17 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_1a0 = param_2;
  if (this->TrianglesEnd <= (int)uVar17) {
    do {
      pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar15 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar17 >> 9) * 8) +
                        (ulonglong)(uVar17 & 0x1ff) * 4);
      if ((int)uVar15 < 0) {
        uVar15 = ~uVar15;
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar15,param_2);
        if (*param_3 + dVar9 < dVar7) {
          return;
        }
      }
      else {
        uVar12 = uVar15 - 1;
        uVar15 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                         (ulonglong)(uVar17 + 1 & 0x1ff) * 4) - 1;
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar12,param_2);
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar15,param_2);
        if (dVar8 <= dVar7) {
          if (*param_3 + dVar9 < dVar8) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar15,param_2,param_3,(int *)local_1c0,param_5,param_6);
          uVar15 = uVar12;
          if (*param_3 + dVar9 < dVar7) {
            return;
          }
        }
        else {
          if (*param_3 + dVar9 < dVar7) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar12,param_2,param_3,(int *)local_1c0,param_5,param_6);
          if (*param_3 + dVar9 < dVar8) {
            return;
          }
        }
      }
      uVar17 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar17);
  }
  pTVar16 = &(this->IndexList).Blocks;
  uVar15 = *(uint *)(*(longlong *)((pTVar16->AllocatorInstance).Data + (ulonglong)(uVar17 >> 9) * 8)
                    + (ulonglong)(uVar17 & 0x1ff) * 4);
  local_1b0 = (ulonglong)uVar15;
  if (0 < (int)uVar15) {
    do {
      uVar17 = uVar17 + 1;
      uVar15 = *(uint *)(*(longlong *)
                          ((pTVar16->AllocatorInstance).Data + (ulonglong)(uVar17 >> 9) * 8) +
                        (ulonglong)(uVar17 & 0x1ff) * 4);
      if (*(void **)&param_6->TriangleFilterF == (void *)0x0) {
LAB_1434374e8:
        pFVar5 = this->Mesh;
        uVar12 = 0;
        if ((int)uVar15 < (pFVar5->Triangles).ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (pFVar5->Triangles).AllocatorInstance.Data;
        local_190 = *(longlong *)(pFVar2 + (longlong)(int)uVar15 * 0xc);
        iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar15 * 0xc + 8);
        lVar18 = (longlong)(int)local_190;
        if (((int)local_190 < 0 || (pFVar5->Vertices).ArrayNum <= (int)local_190) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
        lVar19 = (longlong)local_190._4_4_;
        pFVar2 = pFVar6 + lVar18 * 0x18;
        local_178 = *(double *)pFVar2;
        dStack_170 = *(double *)(pFVar2 + 8);
        local_168 = *(double *)(pFVar6 + lVar18 * 0x18 + 0x10);
        if ((local_190 < 0 || (pFVar5->Vertices).ArrayNum <= local_190._4_4_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
        pFVar2 = pFVar6 + lVar19 * 0x18;
        uStack_160 = *(undefined8 *)pFVar2;
        uStack_158 = *(undefined8 *)(pFVar2 + 8);
        uStack_150 = *(undefined8 *)(pFVar6 + lVar19 * 0x18 + 0x10);
        if ((iVar1 < 0 || (pFVar5->Vertices).ArrayNum <= iVar1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
        pFVar2 = pFVar6 + (longlong)iVar1 * 0x18;
        local_148 = *(undefined8 *)pFVar2;
        uStack_140 = *(undefined8 *)(pFVar2 + 8);
        local_138 = *(undefined8 *)(pFVar6 + (longlong)iVar1 * 0x18 + 0x10);
        local_128._s_0.X = (local_1a0->Origin).field0_0x0._s_0.X;
        local_128._s_0.Y = (local_1a0->Origin).field0_0x0._s_0.Y;
        local_128._s_0.Z = (local_1a0->Origin).field0_0x0._s_0.Z;
        dStack_110 = (local_1a0->Direction).field0_0x0._s_0.X;
        local_108 = (local_1a0->Direction).field0_0x0._s_0.Y;
        dStack_100 = (local_1a0->Direction).field0_0x0._s_0.Z;
        local_f8._s_0.X = local_178;
        local_f8._s_0.Y = dStack_170;
        local_f8._s_0.Z = local_168;
        uStack_e0 = uStack_160;
        local_d8 = uStack_158;
        uStack_d0 = uStack_150;
        local_c8 = local_148;
        uStack_c0 = uStack_140;
        local_b8 = local_138;
        bVar11 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,
                            &local_b0,(TVector<double> *)&local_a8._s_0,local_90);
        param_6 = local_1b8;
        if ((bVar11) && (local_b0 < *param_3)) {
          *param_3 = local_b0;
          *local_1c0 = uVar15;
          (local_198->field0_0x0)._s_0.X = local_a8._s_0.X;
          (local_198->field0_0x0)._s_0.Y = local_a8._s_0.Y;
          (local_198->field0_0x0)._s_0.Z = local_a8._s_0.Z;
        }
      }
      else {
        local_1c8[0] = uVar15;
        Core::Private::Function::CheckCallable(*(void **)&param_6->TriangleFilterF);
        plVar3 = *(longlong **)&(param_6->TriangleFilterF).field_0x28;
        pcVar4 = *(code **)&param_6->TriangleFilterF;
        plVar14 = (longlong *)&(param_6->TriangleFilterF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar14 = plVar3;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        cVar10 = (*pcVar4)(uVar13,local_1c8);
        if (cVar10 != '\0') goto LAB_1434374e8;
      }
      local_1b0 = local_1b0 - 1;
      pTVar16 = local_1a8;
    } while (local_1b0 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 143437770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,TRay<double> *param_2,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_3,
          FQueryOptions *param_4)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FColliderMesh *pFVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  longlong *plVar17;
  uint uVar18;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStackY_238 [32];
  uint local_208 [2];
  ulonglong local_200;
  ulonglong local_1f8;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_1f0;
  TRay<double> *local_1e8;
  undefined8 local_1e0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  uint local_178;
  undefined4 uStack_174;
  double dStack_170;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_d0;
  TVector<double>_u_0 local_c8;
  EIntersectionType local_b0 [2];
  ulonglong local_a8;
  
  dVar10 = __real_47efffffe0000000;
  dVar9 = __real_3e45798ee2308c3a;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1f0 = &(this->IndexList).Blocks;
  uVar24 = SUB84(__real_47efffffe0000000,0);
  uVar25 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  dVar1 = param_4->MaxDistance;
  uVar22 = SUB84(dVar1,0);
  uVar23 = (int)((ulonglong)dVar1 >> 0x20);
  if (__real_47efffffe0000000 <= dVar1) {
    uVar22 = uVar24;
    uVar23 = uVar25;
  }
  uVar18 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_1e8 = param_2;
  if (this->TrianglesEnd <= (int)uVar18) {
    do {
      pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
      dVar1 = (double)CONCAT44(uVar23,uVar22) + dVar9;
      uVar14 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar18 >> 9) * 8) +
                        (ulonglong)(uVar18 & 0x1ff) * 4);
      if ((int)uVar14 < 0) {
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,~uVar14,param_2);
        uVar18 = ~uVar14;
      }
      else {
        uVar14 = uVar14 - 1;
        uVar18 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                         (ulonglong)(uVar18 + 1 & 0x1ff) * 4) - 1;
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar14,param_2);
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar18,param_2);
        if (dVar7 <= dVar8) {
          if (dVar1 < dVar7) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar18,param_2,param_3,param_4);
          uVar18 = uVar14;
          dVar7 = dVar8;
        }
        else {
          if (dVar1 < dVar8) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar14,param_2,param_3,param_4);
        }
      }
      if (dVar1 < dVar7) {
        return;
      }
      dVar1 = param_4->MaxDistance;
      uVar22 = SUB84(dVar1,0);
      uVar23 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar10 <= dVar1) {
        uVar22 = uVar24;
        uVar23 = uVar25;
      }
      uVar18 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar18);
  }
  pTVar19 = &(this->IndexList).Blocks;
  uVar14 = *(uint *)(*(longlong *)((pTVar19->AllocatorInstance).Data + (ulonglong)(uVar18 >> 9) * 8)
                    + (ulonglong)(uVar18 & 0x1ff) * 4);
  local_1f8 = (ulonglong)uVar14;
  if (0 < (int)uVar14) {
    do {
      uVar18 = uVar18 + 1;
      local_200 = (ulonglong)uVar18;
      uVar18 = *(uint *)(*(longlong *)
                          ((pTVar19->AllocatorInstance).Data + (ulonglong)(uVar18 >> 9) * 8) +
                        (ulonglong)(uVar18 & 0x1ff) * 4);
      if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_1434379d4:
        pFVar5 = this->Mesh;
        uVar14 = 0;
        if ((int)uVar18 < (pFVar5->Triangles).ArrayNum) {
          uVar14 = ~uVar18 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (pFVar5->Triangles).AllocatorInstance.Data;
        local_1e0 = *(longlong *)(pFVar2 + (longlong)(int)uVar18 * 0xc);
        iVar15 = *(int *)(pFVar2 + (longlong)(int)uVar18 * 0xc + 8);
        lVar20 = (longlong)(int)local_1e0;
        if (((int)local_1e0 < 0 || (pFVar5->Vertices).ArrayNum <= (int)local_1e0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
        lVar21 = (longlong)local_1e0._4_4_;
        pFVar2 = pFVar6 + lVar20 * 0x18;
        local_1c8 = *(double *)pFVar2;
        dStack_1c0 = *(double *)(pFVar2 + 8);
        local_1b8 = *(double *)(pFVar6 + lVar20 * 0x18 + 0x10);
        if ((local_1e0 < 0 || (pFVar5->Vertices).ArrayNum <= local_1e0._4_4_) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
        pFVar2 = pFVar6 + lVar21 * 0x18;
        uStack_1b0 = *(undefined8 *)pFVar2;
        uStack_1a8 = *(undefined8 *)(pFVar2 + 8);
        uStack_1a0 = *(undefined8 *)(pFVar6 + lVar21 * 0x18 + 0x10);
        if ((iVar15 < 0 || (pFVar5->Vertices).ArrayNum <= iVar15) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
        local_148._s_0.X = (local_1e8->Origin).field0_0x0._s_0.X;
        local_148._s_0.Y = (local_1e8->Origin).field0_0x0._s_0.Y;
        pFVar2 = pFVar6 + (longlong)iVar15 * 0x18;
        local_198 = *(undefined8 *)pFVar2;
        uStack_190 = *(undefined8 *)(pFVar2 + 8);
        local_188 = *(undefined8 *)(pFVar6 + (longlong)iVar15 * 0x18 + 0x10);
        local_148._s_0.Z = (local_1e8->Origin).field0_0x0._s_0.Z;
        dStack_130 = (local_1e8->Direction).field0_0x0._s_0.X;
        local_128 = (local_1e8->Direction).field0_0x0._s_0.Y;
        dStack_120 = (local_1e8->Direction).field0_0x0._s_0.Z;
        local_118._s_0.X = local_1c8;
        local_118._s_0.Y = dStack_1c0;
        local_118._s_0.Z = local_1b8;
        uStack_100 = uStack_1b0;
        local_f8 = uStack_1a8;
        uStack_f0 = uStack_1a0;
        local_e8 = local_198;
        uStack_e0 = uStack_190;
        local_d8 = local_188;
        bVar13 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_148._s_0,(TTriangle3<double> *)&local_118._s_0,
                            &local_d0,(TVector<double> *)&local_c8._s_0,local_b0);
        uVar11 = local_c8._s_0.Y;
        uVar16 = local_c8._s_0.X;
        if ((bVar13) && (local_d0 <= (double)CONCAT44(uVar23,uVar22) + dVar9)) {
          iVar15 = param_3->ArrayNum;
          dStack_170 = local_d0;
          local_178 = uVar18;
          if (iVar15 == param_3->ArrayMax) {
            iVar15 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar20 = (longlong)iVar15;
          param_3->ArrayNum = iVar15 + 1;
          pFVar2 = (param_3->AllocatorInstance).Data;
          *(ulonglong *)(pFVar2 + lVar20 * 0x28) = CONCAT44(uStack_174,local_178);
          *(double *)(pFVar2 + lVar20 * 0x28 + 8) = dStack_170;
          *(undefined8 *)(pFVar2 + lVar20 * 0x28 + 0x10) = uVar16;
          *(undefined8 *)(pFVar2 + lVar20 * 0x28 + 0x10 + 8) = uVar11;
          *(double *)(pFVar2 + lVar20 * 0x28 + 0x20) = local_c8._s_0.Z;
        }
      }
      else {
        local_208[0] = uVar18;
        Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
        plVar3 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
        pcVar4 = *(code **)&param_4->TriangleFilterF;
        plVar17 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar17 = plVar3;
        }
        uVar16 = (**(code **)(*plVar17 + 8))();
        cVar12 = (*pcVar4)(uVar16,local_208);
        if (cVar12 != '\0') goto LAB_1434379d4;
      }
      uVar18 = (uint)local_200;
      local_1f8 = local_1f8 - 1;
      pTVar19 = local_1f0;
    } while (local_1f8 != 0);
  }
  return;
}

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 14344d8b0

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::
box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,TRay<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  int local_res8 [2];
  EIntersectionType local_res10 [2];
  double local_res18;
  double local_res20;
  TVector<double> local_88;
  TVector<double> local_70;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  
  dVar6 = __real_7fefffffffffffff;
  dVar1 = this->BoxEps;
  uVar5 = (ulonglong)(param_1 & 0x1ff);
  local_res10[0] = Empty;
  lVar2 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_40 = *(double *)(lVar2 + uVar5 * 0x18);
  lVar3 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_30 = *(double *)(lVar2 + 0x10 + uVar5 * 0x18);
  local_38 = *(double *)(lVar2 + 8 + uVar5 * 0x18);
  dVar4 = dVar1 + *(double *)(lVar3 + 8 + uVar5 * 0x18);
  dVar7 = dVar1 + *(double *)(lVar3 + uVar5 * 0x18);
  dVar1 = dVar1 + *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
  local_58._s_0.Y = local_38 - dVar4;
  local_58._s_0.X = local_40 - dVar7;
  local_38 = local_38 + dVar4;
  local_res20 = __real_7fefffffffffffff;
  local_40 = local_40 + dVar7;
  local_58._s_0.Z = local_30 - dVar1;
  local_30 = local_30 + dVar1;
  local_res18 = 0.0;
  TIntrRay3AxisAlignedBox3<double>::DoClipping
            (&local_res18,&local_res20,&param_2->Origin,&param_2->Direction,
             (TAxisAlignedBox3<double> *)&local_58._s_0,true,local_res8,&local_70,&local_88,
             local_res10);
  if (local_res10[0] != Empty) {
    dVar6 = local_res18;
  }
  return dVar6;
}

// find_nearest_tri<1> @ 14344da30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::find_nearest_tri<1>
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,TVector<double> *param_2,
          double *param_3,int *param_4,FQueryOptions *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStackY_1a8 [32];
  int local_178 [2];
  ulonglong local_170;
  int *local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 TStack_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168 = param_4;
  pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar14 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_170 = (ulonglong)uVar14;
  lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar14 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar14) {
    uVar12 = *(uint *)(lVar3 + (ulonglong)(uVar14 & 0x1ff) * 4);
    if ((int)uVar12 < 0) {
      uVar12 = ~uVar12;
      dVar6 = BoxDistanceSqr(this,uVar12,param_2);
      if (*param_3 <= dVar6 && dVar6 != *param_3) {
        return false;
      }
    }
    else {
      iVar13 = uVar12 - 1;
      uVar12 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
      dVar6 = BoxDistanceSqr(this,iVar13,param_2);
      dVar7 = BoxDistanceSqr(this,uVar12,param_2);
      if (dVar7 <= dVar6) {
        if (*param_3 <= dVar7) {
          return false;
        }
        bVar9 = find_nearest_tri<1>(this,uVar12,param_2,param_3,param_4,param_5);
        if (!bVar9) {
          if (*param_3 <= dVar6) {
            return false;
          }
          bVar9 = find_nearest_tri<1>(this,iVar13,param_2,param_3,param_4,param_5);
          return bVar9;
        }
        return true;
      }
      if (*param_3 <= dVar6) {
        return false;
      }
      bVar9 = find_nearest_tri<1>(this,iVar13,param_2,param_3,param_4,param_5);
      if (bVar9) {
        return true;
      }
      if (*param_3 <= dVar7) {
        return false;
      }
    }
    bVar9 = find_nearest_tri<1>(this,uVar12,param_2,param_3,param_4,param_5);
    if (!bVar9) {
      return false;
    }
    return true;
  }
  iVar13 = *(int *)(lVar3 + (ulonglong)(uVar14 & 0x1ff) * 4);
  if (iVar13 < 1) {
    return false;
  }
  uVar14 = uVar14 + 1;
  do {
    iVar1 = *(int *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14344db3c:
      FColliderMesh::GetTriVertices
                (this->Mesh,iVar1,(TVector<double> *)&local_158._s_0,
                 (TVector<double> *)&TStack_140._s_0,(TVector<double> *)&local_128._s_0);
      local_108._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_108._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_108._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_f0 = local_158._s_0.X;
      dStack_e8 = local_158._s_0.Y;
      local_d0 = TStack_140._s_0.Y;
      dStack_c8 = TStack_140._s_0.Z;
      local_e0 = local_158._s_0.Z;
      dStack_d8 = TStack_140._s_0.X;
      local_b0 = local_128._s_0.Z;
      local_c0 = local_128._s_0.X;
      dStack_b8 = local_128._s_0.Y;
      dVar6 = TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_108._s_0);
      if (dVar6 < *param_3) {
        *param_3 = dVar6;
        *local_168 = iVar1;
        return true;
      }
    }
    else {
      local_178[0] = iVar1;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar4 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar5 = *(code **)&param_5->TriangleFilterF;
      plVar11 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar11 = plVar4;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      cVar8 = (*pcVar5)(uVar10,local_178);
      if (cVar8 != '\0') goto LAB_14344db3c;
    }
    uVar14 = uVar14 + 1;
    if (iVar13 < (int)(uVar14 - (int)local_170)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<0> @ 14344dd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::find_nearest_tri<0>
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,TVector<double> *param_2,
          double *param_3,int *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStackY_198 [32];
  int local_168 [2];
  int *local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 TStack_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_160 = param_4;
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar1 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar1 >> 9) * 8);
  if ((int)uVar1 < this->TrianglesEnd) {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (0 < (int)uVar2) {
      uVar13 = (ulonglong)uVar2;
      do {
        uVar1 = uVar1 + 1;
        iVar14 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14344de5c:
          FColliderMesh::GetTriVertices
                    (this->Mesh,iVar14,(TVector<double> *)&local_158._s_0,
                     (TVector<double> *)&TStack_140._s_0,(TVector<double> *)&local_128._s_0);
          local_108._s_0.X = (param_2->field0_0x0)._s_0.X;
          local_108._s_0.Y = (param_2->field0_0x0)._s_0.Y;
          local_108._s_0.Z = (param_2->field0_0x0)._s_0.Z;
          local_f0 = local_158._s_0.X;
          dStack_e8 = local_158._s_0.Y;
          local_d0 = TStack_140._s_0.Y;
          dStack_c8 = TStack_140._s_0.Z;
          local_e0 = local_158._s_0.Z;
          dStack_d8 = TStack_140._s_0.X;
          local_b0 = local_128._s_0.Z;
          local_c0 = local_128._s_0.X;
          dStack_b8 = local_128._s_0.Y;
          dVar7 = TDistPoint3Triangle3<double>::ComputeResult
                            ((TDistPoint3Triangle3<double> *)&local_108._s_0);
          if (dVar7 < *param_3) {
            *param_3 = dVar7;
            *local_160 = iVar14;
          }
        }
        else {
          local_168[0] = iVar14;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_5->TriangleFilterF;
          plVar11 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar11 = plVar5;
          }
          uVar10 = (**(code **)(*plVar11 + 8))();
          cVar9 = (*pcVar6)(uVar10,local_168);
          if (cVar9 != '\0') goto LAB_14344de5c;
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if ((int)uVar2 < 0) {
      dVar7 = BoxDistanceSqr(this,~uVar2,param_2);
      if (dVar7 < *param_3 || dVar7 == *param_3) {
        find_nearest_tri<0>(this,~uVar2,param_2,param_3,param_4,param_5);
      }
    }
    else {
      iVar12 = uVar2 - 1;
      iVar14 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                       (ulonglong)(uVar1 + 1 & 0x1ff) * 4) + -1;
      dVar7 = BoxDistanceSqr(this,iVar12,param_2);
      dVar8 = BoxDistanceSqr(this,iVar14,param_2);
      if (dVar8 <= dVar7) {
        if (*param_3 <= dVar8) {
          return false;
        }
        find_nearest_tri<0>(this,iVar14,param_2,param_3,param_4,param_5);
        iVar14 = iVar12;
        if (*param_3 <= dVar7) {
          return false;
        }
      }
      else {
        if (*param_3 <= dVar7) {
          return false;
        }
        find_nearest_tri<0>(this,iVar12,param_2,param_3,param_4,param_5);
        if (*param_3 <= dVar8) {
          return false;
        }
      }
      find_nearest_tri<0>(this,iVar14,param_2,param_3,param_4,param_5);
    }
  }
  return false;
}

// TMeshAABBTree3<UE::Geometry::FColliderMesh> @ 143450b20

TMeshAABBTree3<UE::Geometry::FColliderMesh> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::
TMeshAABBTree3<UE::Geometry::FColliderMesh>(TMeshAABBTree3<UE::Geometry::FColliderMesh> *this)

{
  undefined1 *puVar1;
  TDynamicVector<int,512> *pTVar2;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar3;
  
  this->TopDownLeafMaxTriCount = 3;
  this->MeshChangeStamp = 0;
  this->_padding_ = (longlong)&___7__TMeshAABBTree3_VFColliderMesh_Geometry_UE___Geometry_UE__6B_;
  *(undefined8 *)&this->GetSplitAxis = 0;
  *(undefined8 *)&(this->GetSplitAxis).field_0x28 = 0;
  *(undefined ***)&(this->GetSplitAxis).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetSplitAxis).field_0x18;
  *(code **)puVar1 =
       `UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::MakeDefaultSplitAxisFunc'::__l2::
       <lambda_1>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetSplitAxis =
         Core::Private::Function::
         TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
         ::Call;
  }
  pTVar2 = &this->BoxToIndex;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  this->BoxEps = 1e-08;
  (this->BoxToIndex).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxToIndex).Blocks.ArrayNum = 0;
  (this->BoxToIndex).Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
  pTVar3 = &this->BoxCenters;
  pTVar3->CurBlock = 0;
  pTVar3->CurBlockUsed = 0;
  (this->BoxCenters).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxCenters).Blocks.ArrayNum = 0;
  (this->BoxCenters).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar3);
  pTVar3 = &this->BoxExtents;
  pTVar3->CurBlock = 0;
  pTVar3->CurBlockUsed = 0;
  (this->BoxExtents).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxExtents).Blocks.ArrayNum = 0;
  (this->BoxExtents).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar3);
  pTVar2 = &this->IndexList;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->IndexList).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexList).Blocks.ArrayNum = 0;
  (this->IndexList).Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
  this->TrianglesEnd = -1;
  this->RootIndex = -1;
  this->Mesh = (FColliderMesh *)0x0;
  return this;
}

// ~TMeshAABBTree3<UE::Geometry::FColliderMesh> @ 143454300

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::
~TMeshAABBTree3<UE::Geometry::FColliderMesh>(TMeshAABBTree3<UE::Geometry::FColliderMesh> *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  TDynamicVector<int,512>::Empty(&this->IndexList,0);
  pFVar1 = (this->IndexList).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&this->BoxExtents,0);
  pFVar1 = (this->BoxExtents).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&this->BoxCenters,0);
  pFVar1 = (this->BoxCenters).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<int,512>::Empty(&this->BoxToIndex,0);
  pFVar1 = (this->BoxToIndex).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->GetSplitAxis != 0) {
    plVar2 = *(longlong **)&(this->GetSplitAxis).field_0x28;
    plVar3 = (longlong *)&(this->GetSplitAxis).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// operator() @ 14345f0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestSelfIntersection'::__l2::<lambda_1>
::operator()(void *this,TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  undefined1 auStack_d8 [32];
  TVector<double>_u_0 local_b8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8._s_0.X = (param_1->Triangle1).V[0].field0_0x0._s_0.X;
  local_b8._s_0.Y = (param_1->Triangle1).V[0].field0_0x0._s_0.Y;
  local_b8._s_0.Z = (param_1->Triangle1).V[0].field0_0x0._s_0.Z;
  dStack_a0 = (param_1->Triangle1).V[1].field0_0x0._s_0.X;
  local_98 = (param_1->Triangle1).V[1].field0_0x0._s_0.Y;
  dStack_90 = (param_1->Triangle1).V[1].field0_0x0._s_0.Z;
  local_88 = (param_1->Triangle1).V[2].field0_0x0._s_0.X;
  dStack_80 = (param_1->Triangle1).V[2].field0_0x0._s_0.Y;
  local_78 = (param_1->Triangle1).V[2].field0_0x0._s_0.Z;
  local_68._s_0.X = (param_1->Triangle0).V[0].field0_0x0._s_0.X;
  local_68._s_0.Y = (param_1->Triangle0).V[0].field0_0x0._s_0.Y;
  local_68._s_0.Z = (param_1->Triangle0).V[0].field0_0x0._s_0.Z;
  dStack_50 = (param_1->Triangle0).V[1].field0_0x0._s_0.X;
  local_48 = (param_1->Triangle0).V[1].field0_0x0._s_0.Y;
  dStack_40 = (param_1->Triangle0).V[1].field0_0x0._s_0.Z;
  local_38 = (param_1->Triangle0).V[2].field0_0x0._s_0.X;
  dStack_30 = (param_1->Triangle0).V[2].field0_0x0._s_0.Y;
  local_28 = (param_1->Triangle0).V[2].field0_0x0._s_0.Z;
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    ((TTriangle3<double> *)&local_68._s_0,(TTriangle3<double> *)&local_b8._s_0,
                     __real_3e45798ee2308c3a);
  param_1->Quantity = 0;
  param_1->Result = (bVar1 ^ 1) + Intersects;
  param_1->Type = -(uint)bVar1 & Unknown;
  return bVar1;
}

// AddTriTriIntersectionResult @ 143465b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::AddTriTriIntersectionResult
          (TIntrTriangle3Triangle3<double> *param_1,int param_2,int param_3,
          FIntersectionsQueryResult *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  TArray<MeshIntersection::FSegmentIntersection,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStack_238 [32];
  int *local_218;
  FScriptContainerElement *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  int local_1e8;
  int iStack_1e4;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  int local_1c8;
  int iStack_1c4;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  int local_190;
  int iStack_18c;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  int local_158;
  int iStack_154;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  int local_120;
  int iStack_11c;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  int local_e8;
  int iStack_e4;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  iStack_50 = param_1->Quantity;
  if (iStack_50 == 1) {
    dStack_1e0 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_1d8 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_1d0 = param_1->Points[0].field0_0x0._s_0.Z;
    pFVar7 = (param_4->Points).AllocatorInstance.Data;
    local_1e8 = param_2;
    iStack_1e4 = param_3;
    if ((pFVar7 <= (FScriptContainerElement *)&local_1e8) &&
       (lVar6 = (longlong)(param_4->Points).ArrayMax,
       (FScriptContainerElement *)&local_1e8 < pFVar7 + lVar6 * 0x20)) {
      local_200 = (longlong)(param_4->Points).ArrayNum;
      local_1f8 = 0x20;
      local_218 = &local_1e8;
      local_210 = pFVar7;
      local_208 = lVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_4->Points).ArrayNum;
    piVar1 = &(param_4->Points).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)param_4,piVar1);
    }
    (param_4->Points).ArrayNum = iVar5 + 1;
    pFVar2 = (param_4->Points).AllocatorInstance.Data;
    pFVar7 = pFVar2 + (longlong)iVar5 * 0x20;
    *(ulonglong *)pFVar7 = CONCAT44(iStack_1e4,local_1e8);
    *(double *)(pFVar7 + 8) = dStack_1e0;
    pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
    *(double *)pFVar2 = dStack_1d8;
    *(double *)(pFVar2 + 8) = dStack_1d0;
  }
  else if (iStack_50 == 2) {
    dStack_1c0 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_1b8 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_1b0 = param_1->Points[0].field0_0x0._s_0.Z;
    local_1a8 = param_1->Points[1].field0_0x0._s_0.X;
    dStack_1a0 = param_1->Points[1].field0_0x0._s_0.Y;
    local_198 = param_1->Points[1].field0_0x0._s_0.Z;
    pFVar7 = (param_4->Segments).AllocatorInstance.Data;
    local_1c8 = param_2;
    iStack_1c4 = param_3;
    if ((pFVar7 <= (FScriptContainerElement *)&local_1c8) &&
       (lVar6 = (longlong)(param_4->Segments).ArrayMax,
       (FScriptContainerElement *)&local_1c8 < pFVar7 + lVar6 * 0x38)) {
      local_200 = (longlong)(param_4->Segments).ArrayNum;
      local_1f8 = 0x38;
      local_218 = &local_1c8;
      local_210 = pFVar7;
      local_208 = lVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_4->Segments).ArrayNum;
    piVar1 = &(param_4->Segments).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(param_4->Segments).AllocatorInstance,piVar1);
    }
    (param_4->Segments).ArrayNum = iVar5 + 1;
    lVar6 = (longlong)iVar5 * 0x38;
    pFVar7 = (param_4->Segments).AllocatorInstance.Data;
    *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_1c4,local_1c8);
    *(double *)(pFVar7 + lVar6 + 8) = dStack_1c0;
    *(double *)(pFVar7 + lVar6 + 0x10) = dStack_1b8;
    *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_1b0;
    *(double *)(pFVar7 + lVar6 + 0x20) = local_1a8;
    *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_1a0;
    *(double *)(pFVar7 + lVar6 + 0x30) = local_198;
  }
  else if (2 < iStack_50) {
    dStack_188 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_180 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_178 = param_1->Points[0].field0_0x0._s_0.Z;
    if (param_1->Type == MultiSegment) {
      pTVar8 = &param_4->Segments;
      local_160 = param_1->Points[1].field0_0x0._s_0.Z;
      local_170 = param_1->Points[1].field0_0x0._s_0.X;
      dStack_168 = param_1->Points[1].field0_0x0._s_0.Y;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      local_190 = param_2;
      iStack_18c = param_3;
      if ((pFVar7 <= (FScriptContainerElement *)&local_190) &&
         (lVar6 = (longlong)(param_4->Segments).ArrayMax,
         (FScriptContainerElement *)&local_190 < pFVar7 + lVar6 * 0x38)) {
        local_200 = (longlong)(param_4->Segments).ArrayNum;
        local_1f8 = 0x38;
        local_218 = &local_190;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Segments).ArrayNum;
      if (iVar5 == (param_4->Segments).ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
      }
      (param_4->Segments).ArrayNum = iVar5 + 1;
      lVar6 = (longlong)iVar5 * 0x38;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_18c,local_190);
      *(double *)(pFVar7 + lVar6 + 8) = dStack_188;
      *(double *)(pFVar7 + lVar6 + 0x10) = dStack_180;
      *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_178;
      *(double *)(pFVar7 + lVar6 + 0x20) = local_170;
      *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_168;
      *(double *)(pFVar7 + lVar6 + 0x30) = local_160;
      dStack_150 = param_1->Points[2].field0_0x0._s_0.X;
      dStack_148 = param_1->Points[2].field0_0x0._s_0.Y;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      dStack_140 = param_1->Points[2].field0_0x0._s_0.Z;
      local_128 = param_1->Points[3].field0_0x0._s_0.Z;
      local_138 = param_1->Points[3].field0_0x0._s_0.X;
      dStack_130 = param_1->Points[3].field0_0x0._s_0.Y;
      local_158 = param_2;
      iStack_154 = param_3;
      if ((pFVar7 <= (FScriptContainerElement *)&local_158) &&
         (lVar6 = (longlong)(param_4->Segments).ArrayMax,
         (FScriptContainerElement *)&local_158 < pFVar7 + lVar6 * 0x38)) {
        local_200 = (longlong)(param_4->Segments).ArrayNum;
        local_1f8 = 0x38;
        local_218 = &local_158;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Segments).ArrayNum;
      if (iVar5 == (param_4->Segments).ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
      }
      (param_4->Segments).ArrayNum = iVar5 + 1;
      lVar6 = (longlong)iVar5 * 0x38;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_154,local_158);
      *(double *)(pFVar7 + lVar6 + 8) = dStack_150;
      *(double *)(pFVar7 + lVar6 + 0x10) = dStack_148;
      *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_140;
      *(double *)(pFVar7 + lVar6 + 0x20) = local_138;
      *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_130;
      *(double *)(pFVar7 + lVar6 + 0x30) = local_128;
      if (4 < param_1->Quantity) {
        dStack_118 = param_1->Points[4].field0_0x0._s_0.X;
        dStack_110 = param_1->Points[4].field0_0x0._s_0.Y;
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        dStack_108 = param_1->Points[4].field0_0x0._s_0.Z;
        local_f0 = param_1->Points[5].field0_0x0._s_0.Z;
        local_100 = param_1->Points[5].field0_0x0._s_0.X;
        dStack_f8 = param_1->Points[5].field0_0x0._s_0.Y;
        local_120 = param_2;
        iStack_11c = param_3;
        if ((pFVar7 <= (FScriptContainerElement *)&local_120) &&
           (lVar6 = (longlong)(param_4->Segments).ArrayMax,
           (FScriptContainerElement *)&local_120 < pFVar7 + lVar6 * 0x38)) {
          local_200 = (longlong)(param_4->Segments).ArrayNum;
          local_1f8 = 0x38;
          local_218 = &local_120;
          local_210 = pFVar7;
          local_208 = lVar6;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = (param_4->Segments).ArrayNum;
        if (iVar5 == (param_4->Segments).ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
        }
        (param_4->Segments).ArrayNum = iVar5 + 1;
        lVar6 = (longlong)iVar5 * 0x38;
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_11c,local_120);
        *(double *)(pFVar7 + lVar6 + 8) = dStack_118;
        *(double *)(pFVar7 + lVar6 + 0x10) = dStack_110;
        *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_108;
        *(double *)(pFVar7 + lVar6 + 0x20) = local_100;
        *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_f8;
        *(double *)(pFVar7 + lVar6 + 0x30) = local_f0;
      }
    }
    else {
      pFVar7 = (param_4->Polygons).AllocatorInstance.Data;
      local_b8 = param_1->Points[1].field0_0x0._s_0.Z;
      dStack_a0 = param_1->Points[2].field0_0x0._s_0.Z;
      local_88 = param_1->Points[3].field0_0x0._s_0.Z;
      dStack_70 = param_1->Points[4].field0_0x0._s_0.Z;
      local_58 = param_1->Points[5].field0_0x0._s_0.Z;
      local_c8 = param_1->Points[1].field0_0x0._s_0.X;
      dStack_c0 = param_1->Points[1].field0_0x0._s_0.Y;
      dStack_b0 = param_1->Points[2].field0_0x0._s_0.X;
      dStack_a8 = param_1->Points[2].field0_0x0._s_0.Y;
      local_98 = param_1->Points[3].field0_0x0._s_0.X;
      dStack_90 = param_1->Points[3].field0_0x0._s_0.Y;
      dStack_80 = param_1->Points[4].field0_0x0._s_0.X;
      dStack_78 = param_1->Points[4].field0_0x0._s_0.Y;
      local_68 = param_1->Points[5].field0_0x0._s_0.X;
      dStack_60 = param_1->Points[5].field0_0x0._s_0.Y;
      local_e8 = param_2;
      iStack_e4 = param_3;
      dStack_e0 = dStack_188;
      dStack_d8 = dStack_180;
      dStack_d0 = dStack_178;
      if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
         (lVar6 = (longlong)(param_4->Polygons).ArrayMax,
         (FScriptContainerElement *)&local_e8 < pFVar7 + lVar6 * 0xa0)) {
        local_200 = (longlong)(param_4->Polygons).ArrayNum;
        local_1f8 = 0xa0;
        local_218 = &local_e8;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Polygons).ArrayNum;
      piVar1 = &(param_4->Polygons).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a0,&(param_4->Polygons).AllocatorInstance,piVar1);
      }
      (param_4->Polygons).ArrayNum = iVar5 + 1;
      pFVar7 = (param_4->Polygons).AllocatorInstance.Data + (longlong)iVar5 * 0xa0;
      *(ulonglong *)pFVar7 = CONCAT44(iStack_e4,local_e8);
      *(double *)(pFVar7 + 8) = dStack_e0;
      *(double *)(pFVar7 + 0x10) = dStack_d8;
      *(double *)(pFVar7 + 0x18) = dStack_d0;
      *(double *)(pFVar7 + 0x20) = local_c8;
      *(double *)(pFVar7 + 0x28) = dStack_c0;
      *(double *)(pFVar7 + 0x30) = local_b8;
      *(double *)(pFVar7 + 0x38) = dStack_b0;
      *(double *)(pFVar7 + 0x40) = dStack_a8;
      *(double *)(pFVar7 + 0x48) = dStack_a0;
      *(double *)(pFVar7 + 0x50) = local_98;
      *(double *)(pFVar7 + 0x58) = dStack_90;
      *(double *)(pFVar7 + 0x60) = local_88;
      *(double *)(pFVar7 + 0x68) = dStack_80;
      *(double *)(pFVar7 + 0x70) = dStack_78;
      *(double *)(pFVar7 + 0x78) = dStack_70;
      *(double *)(pFVar7 + 0x80) = local_68;
      *(double *)(pFVar7 + 0x88) = dStack_60;
      *(double *)(pFVar7 + 0x90) = local_58;
      *(ulonglong *)(pFVar7 + 0x98) = CONCAT44(uStack_4c,iStack_50);
    }
  }
  return;
}

// BoxDistanceSqr @ 1434754d0

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::BoxDistanceSqr
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,TVector<double> *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = (ulonglong)(param_1 & 0x1ff);
  lVar1 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar5 = (param_2->field0_0x0)._s_0.X - *(double *)(lVar1 + uVar2 * 0x18);
  dVar4 = (param_2->field0_0x0)._s_0.Y - *(double *)(lVar1 + 8 + uVar2 * 0x18);
  dVar3 = (param_2->field0_0x0)._s_0.Z - *(double *)(lVar1 + 0x10 + uVar2 * 0x18);
  lVar1 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + uVar2 * 0x18);
  dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + 8 + uVar2 * 0x18);
  dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + 0x10 + uVar2 * 0x18);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  return dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3;
}

// BuildTopDown @ 143475570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::BuildTopDown
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  uint *puVar1;
  TDynamicVector<UE::Math::TVector<double>,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *this_01;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  TDynamicVector<int,512> *this_02;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  FBoxesSet local_168;
  FBoxesSet local_f8;
  ulonglong local_88;
  TVector<double>_u_0 local_80;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  this_00 = &local_f8.BoxExtents;
  uVar19 = 0;
  local_f8.BoxToIndex.CurBlock = 0;
  local_f8.BoxToIndex.CurBlockUsed = 0;
  local_f8.BoxToIndex.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxToIndex.Blocks.ArrayNum = 0;
  local_f8.BoxToIndex.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_f8.BoxToIndex);
  local_f8.BoxCenters.CurBlock = 0;
  local_f8.BoxCenters.CurBlockUsed = 0;
  local_f8.BoxCenters.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxCenters.Blocks.ArrayNum = 0;
  local_f8.BoxCenters.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_f8.BoxCenters);
  local_f8.BoxExtents.CurBlock = 0;
  local_f8.BoxExtents.CurBlockUsed = 0;
  local_f8.BoxExtents.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxExtents.Blocks.ArrayNum = 0;
  local_f8.BoxExtents.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_00);
  local_f8.IndexList.CurBlock = 0;
  local_f8.IndexList.CurBlockUsed = 0;
  local_f8.IndexList.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.IndexList.Blocks.ArrayNum = 0;
  local_f8.IndexList.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_f8.IndexList);
  local_f8.IBoxCur = 0;
  local_f8.IIndicesCur = 0;
  local_168.BoxToIndex.CurBlock = 0;
  local_168.BoxToIndex.CurBlockUsed = 0;
  local_168.BoxToIndex.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxToIndex.Blocks.ArrayNum = 0;
  local_168.BoxToIndex.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_168.BoxToIndex);
  local_168.BoxCenters.CurBlock = 0;
  local_168.BoxCenters.CurBlockUsed = 0;
  local_168.BoxCenters.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxCenters.Blocks.ArrayNum = 0;
  local_168.BoxCenters.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_168.BoxCenters);
  local_168.BoxExtents.CurBlock = 0;
  local_168.BoxExtents.CurBlockUsed = 0;
  local_168.BoxExtents.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxExtents.Blocks.ArrayNum = 0;
  local_168.BoxExtents.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_168.BoxExtents);
  local_168.IndexList.CurBlock = 0;
  local_168.IndexList.CurBlockUsed = 0;
  local_168.IndexList.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.IndexList.Blocks.ArrayNum = 0;
  local_168.IndexList.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_168.IndexList);
  local_168.IBoxCur = 0;
  local_168.IIndicesCur = 0;
  local_80._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_80._s_0.Y = _UNK_150a9e648;
  local_80._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_68 = _UNK_150a9e6d8;
  local_60 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_58 = _UNK_1508ffb58;
  iVar8 = SplitTriSetMidpoint(this,param_1,param_2,0,param_3,0,this->TopDownLeafMaxTriCount,
                              &local_f8,&local_168,(TAxisAlignedBox3<double> *)&local_80._s_0);
  TDynamicVector<int,512>::operator=(&this->BoxToIndex,&local_f8.BoxToIndex);
  TDynamicVector<UE::Math::TVector<double>,512>::operator=(&this->BoxCenters,&local_f8.BoxCenters);
  this_01 = &this->BoxExtents;
  TDynamicVector<UE::Math::TVector<double>,512>::operator=(this_01,this_00);
  TDynamicVector<int,512>::operator=(&this->IndexList,&local_f8.IndexList);
  uVar14 = local_f8.IIndicesCur;
  iVar7 = local_f8.IBoxCur;
  this->TrianglesEnd = local_f8.IIndicesCur;
  uVar12 = local_f8.IBoxCur;
  if (0 < local_168.IBoxCur) {
    do {
      uVar9 = (this->BoxCenters).CurBlockUsed;
      uVar18 = (uint)uVar19;
      uVar10 = (ulonglong)(uVar18 & 0x1ff);
      local_88 = uVar19 >> 9;
      uVar13 = (this->BoxCenters).CurBlock;
      uVar16 = uVar13 * 0x200 + uVar9;
      uVar3 = *(undefined8 *)
               (*(longlong *)(local_168.BoxCenters.Blocks.AllocatorInstance.Data + local_88 * 8) +
                0x10 + uVar10 * 0x18);
      puVar2 = (undefined8 *)
               (*(longlong *)(local_168.BoxCenters.Blocks.AllocatorInstance.Data + local_88 * 8) +
               uVar10 * 0x18);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      if (uVar12 == uVar16) {
        if (uVar9 == 0x200) {
          if (uVar13 == (this->BoxCenters).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&this->BoxCenters);
          }
          (this->BoxCenters).CurBlock = (this->BoxCenters).CurBlock + 1;
          uVar13 = (this->BoxCenters).CurBlock;
          (this->BoxCenters).CurBlockUsed = 0;
        }
        lVar11 = (longlong)(int)(this->BoxCenters).CurBlockUsed;
        lVar4 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
        puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + lVar11 * 0x18) = uVar3;
        puVar1 = &(this->BoxCenters).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar16 < uVar12) {
        TDynamicVector<UE::Math::TVector<double>,512>::Resize(&this->BoxCenters,uVar12);
        uVar9 = (this->BoxCenters).CurBlockUsed;
        if (uVar9 == 0x200) {
          if ((this->BoxCenters).CurBlock == (this->BoxCenters).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&this->BoxCenters);
          }
          (this->BoxCenters).CurBlock = (this->BoxCenters).CurBlock + 1;
          uVar9 = 0;
          (this->BoxCenters).CurBlockUsed = 0;
        }
        lVar4 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                 (longlong)(int)(this->BoxCenters).CurBlock * 8);
        puVar2 = (undefined8 *)(lVar4 + (longlong)(int)uVar9 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar9 * 0x18) = uVar3;
        puVar1 = &(this->BoxCenters).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        lVar4 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar12 & 0x1ff) * 0x18) = uVar3;
      }
      uVar9 = this_01->CurBlock;
      uVar13 = (this->BoxExtents).CurBlockUsed;
      uVar16 = uVar9 * 0x200 + uVar13;
      uVar3 = *(undefined8 *)
               (*(longlong *)(local_168.BoxExtents.Blocks.AllocatorInstance.Data + local_88 * 8) +
                0x10 + uVar10 * 0x18);
      puVar2 = (undefined8 *)
               (*(longlong *)(local_168.BoxExtents.Blocks.AllocatorInstance.Data + local_88 * 8) +
               uVar10 * 0x18);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      if (uVar12 == uVar16) {
        if (uVar13 == 0x200) {
          if (uVar9 == (this->BoxExtents).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_01);
          }
          this_01->CurBlock = this_01->CurBlock + 1;
          uVar9 = this_01->CurBlock;
          (this->BoxExtents).CurBlockUsed = 0;
        }
        lVar11 = (longlong)(int)(this->BoxExtents).CurBlockUsed;
        lVar4 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
        puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + lVar11 * 0x18) = uVar3;
        puVar1 = &(this->BoxExtents).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar16 < uVar12) {
        TDynamicVector<UE::Math::TVector<double>,512>::Resize(this_01,uVar12);
        uVar9 = (this->BoxExtents).CurBlockUsed;
        if (uVar9 == 0x200) {
          if (this_01->CurBlock == (this->BoxExtents).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_01);
          }
          this_01->CurBlock = this_01->CurBlock + 1;
          uVar9 = 0;
          (this->BoxExtents).CurBlockUsed = 0;
        }
        lVar4 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                 (longlong)(int)this_01->CurBlock * 8);
        puVar2 = (undefined8 *)(lVar4 + (longlong)(int)uVar9 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar9 * 0x18) = uVar3;
        puVar1 = &(this->BoxExtents).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        lVar4 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar12 & 0x1ff) * 0x18) = uVar3;
      }
      uVar9 = (this->BoxToIndex).CurBlockUsed;
      iVar17 = uVar14 + *(int *)(*(longlong *)
                                  (local_168.BoxToIndex.Blocks.AllocatorInstance.Data +
                                  (uVar19 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
      uVar13 = (this->BoxToIndex).CurBlock;
      uVar16 = uVar13 * 0x200 + uVar9;
      if (uVar12 == uVar16) {
        if (uVar9 == 0x200) {
          if (uVar13 == (this->BoxToIndex).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&this->BoxToIndex);
          }
          (this->BoxToIndex).CurBlock = (this->BoxToIndex).CurBlock + 1;
          uVar13 = (this->BoxToIndex).CurBlock;
          (this->BoxToIndex).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->BoxToIndex).Blocks.AllocatorInstance.Data + (longlong)(int)uVar13 * 8) +
                (longlong)(int)(this->BoxToIndex).CurBlockUsed * 4) = iVar17;
        puVar1 = &(this->BoxToIndex).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar16 < uVar12) {
        TDynamicVector<int,512>::Resize(&this->BoxToIndex,uVar12);
        uVar9 = (this->BoxToIndex).CurBlockUsed;
        if (uVar9 == 0x200) {
          if ((this->BoxToIndex).CurBlock == (this->BoxToIndex).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&this->BoxToIndex);
          }
          (this->BoxToIndex).CurBlock = (this->BoxToIndex).CurBlock + 1;
          uVar9 = 0;
          (this->BoxToIndex).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                  (longlong)(int)(this->BoxToIndex).CurBlock * 8) + (longlong)(int)uVar9 * 4) =
             iVar17;
        puVar1 = &(this->BoxToIndex).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        *(int *)(*(longlong *)
                  ((this->BoxToIndex).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8)
                + (ulonglong)(uVar12 & 0x1ff) * 4) = iVar17;
      }
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar12 = uVar12 + 1;
    } while ((int)(uVar18 + 1) < local_168.IBoxCur);
  }
  this_02 = &this->IndexList;
  if (0 < local_168.IIndicesCur) {
    iVar17 = -uVar14;
    do {
      uVar12 = iVar17 + uVar14;
      uVar12 = *(uint *)(*(longlong *)
                          (local_168.IndexList.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4);
      if ((int)uVar12 < 0) {
        uVar12 = ~uVar12;
      }
      else {
        uVar12 = uVar12 + iVar7;
      }
      uVar9 = this_02->CurBlock;
      iVar15 = uVar12 + 1;
      uVar12 = (this->IndexList).CurBlockUsed;
      uVar13 = uVar9 * 0x200 + uVar12;
      if (uVar14 == uVar13) {
        if (uVar12 == 0x200) {
          if (uVar9 == (this->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_02);
          }
          this_02->CurBlock = this_02->CurBlock + 1;
          uVar9 = this_02->CurBlock;
          (this->IndexList).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar9 * 8) +
                (longlong)(int)(this->IndexList).CurBlockUsed * 4) = iVar15;
        puVar1 = &(this->IndexList).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar13 < uVar14) {
        TDynamicVector<int,512>::Resize(this_02,uVar14);
        uVar12 = (this->IndexList).CurBlockUsed;
        if (uVar12 == 0x200) {
          if (this_02->CurBlock == (this->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_02);
          }
          this_02->CurBlock = this_02->CurBlock + 1;
          uVar12 = 0;
          (this->IndexList).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->IndexList).Blocks.AllocatorInstance.Data +
                  (longlong)(int)this_02->CurBlock * 8) + (longlong)(int)uVar12 * 4) = iVar15;
        puVar1 = &(this->IndexList).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        *(int *)(*(longlong *)
                  ((this->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 4) = iVar15;
      }
      uVar14 = uVar14 + 1;
    } while ((int)(iVar17 + uVar14) < local_168.IIndicesCur);
  }
  this->RootIndex = iVar7 + iVar8;
  TDynamicVector<int,512>::Empty(&local_168.IndexList,0);
  if (local_168.IndexList.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.IndexList.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_168.BoxExtents,0);
  if (local_168.BoxExtents.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxExtents.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_168.BoxCenters,0);
  if (local_168.BoxCenters.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxCenters.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_168.BoxToIndex,0);
  if (local_168.BoxToIndex.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxToIndex.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_f8.IndexList,0);
  if (local_f8.IndexList.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.IndexList.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(this_00,0);
  if (local_f8.BoxExtents.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxExtents.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_f8.BoxCenters,0);
  if (local_f8.BoxCenters.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxCenters.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_f8.BoxToIndex,0);
  if (local_f8.BoxToIndex.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxToIndex.Blocks.AllocatorInstance.Data);
  }
  return;
}

// BuildTopDown @ 143475cb0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::BuildTopDown
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  FColliderMesh *this_00;
  double dVar8;
  double dVar9;
  int local_f8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e0;
  double local_d0;
  double dStack_c8;
  double local_c0;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38 [2];
  
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  uVar1 = (this->Mesh->Triangles).ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&local_f0.AllocatorInstance,0,&local_f0.ArrayMax);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  uVar1 = (this->Mesh->Triangles).ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar1,&local_e0.AllocatorInstance,0,&local_e0.ArrayMax);
  }
  dVar4 = __real_3fd5555555555555;
  this_00 = this->Mesh;
  local_f8[0] = 0;
  if (0 < (this_00->Triangles).ArrayNum) {
    do {
      if ((-1 < local_f8[0]) && (local_f8[0] < (this_00->Triangles).ArrayNum)) {
        FColliderMesh::GetTriVertices
                  (this_00,local_f8[0],(TVector<double> *)&local_b8._s_0,
                   (TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_88._s_0);
        dVar9 = (local_b8._s_0.X + local_a0._s_0.X + local_88._s_0.X) * dVar4;
        dVar3 = (local_b8._s_0.Y + local_a0._s_0.Y + local_88._s_0.Y) * dVar4;
        dVar8 = (local_b8._s_0.Z + local_a0._s_0.Z + local_88._s_0.Z) * dVar4;
        sVar6 = _dclass(SUB84(dVar3 * dVar3 + dVar9 * dVar9 + dVar8 * dVar8,0));
        if ((sVar6 != 2) && (sVar6 < 1)) {
          if (((local_f0.AllocatorInstance.Data <= (FScriptContainerElement *)local_f8) &&
              ((FScriptContainerElement *)local_f8 <
               local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = local_f0.ArrayNum;
          if (local_f0.ArrayNum == local_f0.ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
          }
          local_f0.ArrayNum = iVar7 + 1;
          *(int *)(local_f0.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_f8[0];
          FColliderMesh::GetTriVertices
                    (this->Mesh,local_f8[0],(TVector<double> *)&local_68._s_0,
                     (TVector<double> *)&local_50._s_0,(TVector<double> *)&local_38[0]._s_0);
          local_d0 = (local_68._s_0.X + local_50._s_0.X + (double)local_38[0]._0_8_) * dVar4;
          dStack_c8 = (local_68._s_0.Y + local_50._s_0.Y + (double)local_38[0]._8_8_) * dVar4;
          local_c0 = (local_68._s_0.Z + local_50._s_0.Z + (double)local_38[0]._16_8_) * dVar4;
          if (((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d0) &&
              ((FScriptContainerElement *)&local_d0 <
               local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 0x18)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = local_e0.ArrayNum;
          if (local_e0.ArrayNum == local_e0.ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
          }
          local_e0.ArrayNum = iVar7 + 1;
          *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar7 * 0x18) = local_d0;
          *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8) = dStack_c8;
          *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 0x10) = local_c0;
        }
      }
      this_00 = this->Mesh;
      local_f8[0] = local_f8[0] + 1;
    } while (local_f8[0] < (this_00->Triangles).ArrayNum);
  }
  BuildTopDown(this,&local_f0,&local_e0,local_f0.ArrayNum);
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// DoTraversal @ 1434b15a0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::DoTraversal
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,FTreeTraversal *param_1,
          FQueryOptions *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 local_res8 [2];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  uVar9 = (ulonglong)(this->RootIndex & 0x1ff);
  uVar11 = (ulonglong)((uint)this->RootIndex >> 9);
  local_res8[0] = 0;
  lVar4 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar11 * 8);
  local_40 = *(double *)(lVar4 + uVar9 * 0x18);
  lVar5 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar11 * 8);
  local_38 = *(double *)(lVar4 + 8 + uVar9 * 0x18);
  local_30 = *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
  dVar1 = *(double *)(lVar5 + uVar9 * 0x18);
  dVar2 = *(double *)(lVar5 + 8 + uVar9 * 0x18);
  local_58 = local_40 - dVar1;
  dVar3 = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
  local_50 = local_38 - dVar2;
  local_40 = local_40 + dVar1;
  local_38 = local_38 + dVar2;
  local_48 = local_30 - dVar3;
  local_30 = local_30 + dVar3;
  Core::Private::Function::CheckCallable(*(void **)&param_1->NextBoxF);
  plVar6 = *(longlong **)&(param_1->NextBoxF).field_0x28;
  pcVar7 = *(code **)&param_1->NextBoxF;
  plVar12 = (longlong *)&(param_1->NextBoxF).field_0x10;
  if (plVar6 != (longlong *)0x0) {
    plVar12 = plVar6;
  }
  uVar10 = (**(code **)(*plVar12 + 8))();
  cVar8 = (*pcVar7)(uVar10,&local_58,local_res8);
  if (cVar8 != '\0') {
    (**(code **)(this->_padding_ + 0x80))(this,this->RootIndex,0,param_1,param_2);
  }
  return;
}

// FindAllHitTriangles @ 1434b8a40

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllHitTriangles
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,TRay<double> *param_1,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_2,
          FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllIntersections @ 1434b8a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllIntersections
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<UE::Geometry::FColliderMesh> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          FQueryOptions *param_3,FQueryOptions *param_4,
          TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar5;
  FIntersectionsQueryResult *pFVar6;
  longlong *plVar7;
  undefined1 auStackY_f8 [32];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_a0;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (*(longlong *)param_5 == 0) {
    local_88 = *(longlong *)param_5;
    uVar3 = *(undefined8 *)&param_5->field_0x8;
    local_78 = *(longlong *)&param_5->field_0x10;
    uStack_70 = *(undefined8 *)&param_5->field_0x18;
    uVar2 = *(undefined8 *)&param_5->field_0x20;
    plStack_60 = *(longlong **)&param_5->field_0x28;
    *(code **)param_5 =
         Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
         ::Call;
    *(undefined8 *)&param_5->field_0x8 = uStack_80;
    *(undefined4 *)&param_5->field_0x10 = 0x50a9df30;
    *(undefined4 *)&param_5->field_0x14 = 1;
    *(undefined4 *)&param_5->field_0x18 = 0x43430c40;
    *(undefined4 *)&param_5->field_0x1c = 1;
    *(undefined4 *)&param_5->field_0x20 = (undefined4)local_68;
    *(undefined4 *)&param_5->field_0x24 = local_68._4_4_;
    *(undefined4 *)&param_5->field_0x28 = 0;
    *(undefined4 *)&param_5->field_0x2c = 0;
    local_68 = uVar2;
    uStack_80 = uVar3;
    if (local_88 != 0) {
      plVar7 = &local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar7 = plStack_60;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  (__return_storage_ptr__->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Points).ArrayNum = 0;
  (__return_storage_ptr__->Points).ArrayMax = 0;
  (__return_storage_ptr__->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 0;
  (__return_storage_ptr__->Polygons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Polygons).ArrayNum = 0;
  (__return_storage_ptr__->Polygons).ArrayMax = 0;
  if ((this->RootIndex < 0) ||
     ((param_3->bAllowUnsafeModifiedMeshQueries == false && (this->MeshChangeStamp != 0)))) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2828200105734046772>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                       ,0x434,"IsValid(Options.bAllowUnsafeModifiedMeshQueries)");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FIntersectionsQueryResult *)(*pcVar1)();
      return pFVar6;
    }
    if (*(longlong *)param_5 != 0) {
      plVar7 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_5->field_0x28;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  else {
    pTVar5 = TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>::
             TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)><TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>_&>
                       (&local_a0,param_5);
    find_intersections(this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                       __return_storage_ptr__,pTVar5,param_3,param_4);
    if (*(longlong *)param_5 != 0) {
      plVar7 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_5->field_0x28;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// FindAllSelfIntersections @ 1434b8c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindAllSelfIntersections
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,bool param_1,FQueryOptions *param_2,
          TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  FIntersectionsQueryResult *pFVar5;
  longlong *plVar6;
  undefined1 auStackY_a8 [32];
  code *local_78;
  TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(longlong *)param_3 == 0) {
    local_68 = *(longlong *)param_3;
    uVar3 = *(undefined8 *)&param_3->field_0x8;
    local_58 = *(longlong *)&param_3->field_0x10;
    uStack_50 = *(undefined8 *)&param_3->field_0x18;
    uVar2 = *(undefined8 *)&param_3->field_0x20;
    plStack_40 = *(longlong **)&param_3->field_0x28;
    *(code **)param_3 =
         Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
         ::Call;
    *(undefined8 *)&param_3->field_0x8 = uStack_60;
    *(undefined4 *)&param_3->field_0x10 = 0x50a9df30;
    *(undefined4 *)&param_3->field_0x14 = 1;
    *(undefined4 *)&param_3->field_0x18 = 0x43430c80;
    *(undefined4 *)&param_3->field_0x1c = 1;
    *(undefined4 *)&param_3->field_0x20 = (undefined4)local_48;
    *(undefined4 *)&param_3->field_0x24 = local_48._4_4_;
    *(undefined4 *)&param_3->field_0x28 = 0;
    *(undefined4 *)&param_3->field_0x2c = 0;
    local_48 = uVar2;
    uStack_60 = uVar3;
    if (local_68 != 0) {
      plVar6 = &local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar6 = plStack_40;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  (__return_storage_ptr__->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Points).ArrayNum = 0;
  (__return_storage_ptr__->Points).ArrayMax = 0;
  (__return_storage_ptr__->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 0;
  (__return_storage_ptr__->Polygons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Polygons).ArrayNum = 0;
  (__return_storage_ptr__->Polygons).ArrayMax = 0;
  if (*(longlong *)param_3 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBound(InFunc)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                       ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FIntersectionsQueryResult *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_70 = param_3;
  local_78 = Core::Private::Function::
             TFunctionRefCaller<TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  find_self_intersections
            (this,__return_storage_ptr__,param_1,
             (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
             &local_78,param_2);
  if (*(longlong *)param_3 != 0) {
    plVar6 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FindNearestHitTriangle @ 1434b9130

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,TRay<double> *param_1,
          FQueryOptions *param_2)

{
  int local_res8 [4];
  double local_res18 [2];
  TVector<double>_u_0 local_28;
  
  local_res18[0] = param_2->MaxDistance;
  if (__real_47efffffe0000000 <= param_2->MaxDistance) {
    local_res18[0] = __real_47efffffe0000000;
  }
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8[0] = -1;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,this->RootIndex,param_1,local_res18,local_res8,(TVector<double> *)&local_28._s_0,
             param_2);
  return local_res8[0];
}

// FindNearestHitTriangle @ 1434b91b0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,TRay<double> *param_1,double *param_2,
          int *param_3,TVector<double> *param_4,FQueryOptions *param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  *param_3 = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar1;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = param_5->MaxDistance;
  if (__real_47efffffe0000000 <= param_5->MaxDistance) {
    dVar2 = __real_47efffffe0000000;
  }
  *param_2 = dVar2;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,this->RootIndex,param_1,param_2,param_3,param_4,param_5);
  return *param_3 != -1;
}

// FindNearestHitTriangle @ 1434b9230

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,TRay<double> *param_1,double *param_2,
          int *param_3,FQueryOptions *param_4)

{
  double dVar1;
  TVector<double>_u_0 local_28;
  
  *param_3 = -1;
  dVar1 = param_4->MaxDistance;
  if (__real_47efffffe0000000 <= param_4->MaxDistance) {
    dVar1 = __real_47efffffe0000000;
  }
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *param_2 = dVar1;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,this->RootIndex,param_1,param_2,param_3,(TVector<double> *)&local_28._s_0,param_4)
  ;
  return *param_3 != -1;
}

// FindNearestPoint @ 1434b92e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindNearestPoint
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,TVector<double> *__return_storage_ptr__
          ,TVector<double> *param_1,FQueryOptions *param_2)

{
  double dVar1;
  undefined8 uVar2;
  FColliderMesh *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TVector<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStackY_178 [32];
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 TStack_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_50;
  double dStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar5 = (**(code **)(this->_padding_ + 0x20))(this,param_1,local_138);
  local_128 = (param_1->field0_0x0)._s_0.X;
  dStack_120 = (param_1->field0_0x0)._s_0.Y;
  if (iVar5 < 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_128;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_120;
    uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar7 = (undefined4)uVar2;
    uVar8 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    this_00 = this->Mesh;
    if ((this_00->Triangles).ArrayNum <= iVar5) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.IsTriangle(TriIdx)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                         ,0x1e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar3)();
        return pTVar6;
      }
    }
    FColliderMesh::GetTriVertices
              (this_00,iVar5,(TVector<double> *)&local_118._s_0,(TVector<double> *)&TStack_100._s_0,
               (TVector<double> *)&local_e8._s_0);
    local_c8._s_0.X = local_128;
    local_c8._s_0.Y = dStack_120;
    local_b0 = local_118._s_0.X;
    dStack_a8 = local_118._s_0.Y;
    local_90 = TStack_100._s_0.Y;
    dStack_88 = TStack_100._s_0.Z;
    local_a0 = local_118._s_0.Z;
    dStack_98 = TStack_100._s_0.X;
    local_70 = local_e8._s_0.Z;
    local_80 = local_e8._s_0.X;
    dStack_78 = local_e8._s_0.Y;
    local_c8._s_0.Z = dVar1;
    TDistPoint3Triangle3<double>::ComputeResult((TDistPoint3Triangle3<double> *)&local_c8._s_0);
    uVar7 = (undefined4)local_40;
    uVar8 = (undefined4)((ulonglong)local_40 >> 0x20);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_50;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_48;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar8,uVar7);
  return __return_storage_ptr__;
}

// FindNearestTriangle @ 1434b9440

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindNearestTriangle
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,TVector<double> *param_1,
          double *param_2,FQueryOptions *param_3)

{
  double dVar1;
  double dVar2;
  int local_res8 [8];
  
  dVar1 = param_3->MaxDistance;
  dVar2 = __real_7fefffffffffffff;
  if (dVar1 < __real_7fefffffffffffff) {
    dVar2 = dVar1 * dVar1;
  }
  *param_2 = dVar2;
  local_res8[0] = -1;
  find_nearest_tri<0>(this,this->RootIndex,param_1,param_2,local_res8,param_3);
  return local_res8[0];
}

// FindNearestTriangles @ 1434b94d0

FIndex2i __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindNearestTriangles
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,
          TMeshAABBTree3<UE::Geometry::FColliderMesh> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          double *param_3,FQueryOptions *param_4,FQueryOptions *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double local_res8 [4];
  FQueryOptions *in_stack_00000038;
  
  dVar2 = __real_7fefffffffffffff;
  local_res8[0] = __real_7fefffffffffffff;
  dVar1 = param_5->MaxDistance;
  if (dVar1 < __real_7fefffffffffffff) {
    local_res8[0] = dVar1 * dVar1;
  }
  param_1->_padding_ = -1;
  find_nearest_triangles
            (this,this->RootIndex,(TMeshAABBTree3<UE::Geometry::FColliderMesh> *)param_2,
             (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             param_3,*(int *)&param_2[3].field_0x2c,0,local_res8,(FIndex2i *)param_1,param_5,
             in_stack_00000038);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_res8[0];
  if (local_res8[0] < dVar2) {
    auVar3 = sqrtpd(auVar3,auVar3);
    param_4->MaxDistance = auVar3._0_8_;
    return (FIndex2i)(FIndex2i_u_0)param_1;
  }
  param_4->MaxDistance = dVar2;
  return (FIndex2i)(FIndex2i_u_0)param_1;
}

// FindNearestVertex @ 1434b9590

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::FindNearestVertex
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,TVector<double> *param_1,
          double *param_2,double param_3,FQueryOptions *param_4)

{
  double dVar1;
  int local_res8 [8];
  
  dVar1 = __real_7fefffffffffffff;
  if (param_3 < __real_7fefffffffffffff) {
    dVar1 = param_3 * param_3;
  }
  *param_2 = dVar1;
  local_res8[0] = -1;
  find_nearest_vertex(this,this->RootIndex,param_1,param_2,local_res8,param_4);
  return local_res8[0];
}

// GetBox @ 1434bed30

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::GetBox
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,
          TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)(param_1 & 0x1ff);
  lVar7 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar1 = *(double *)(lVar7 + 0x10 + uVar9 * 0x18);
  lVar8 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar2 = *(double *)(lVar7 + uVar9 * 0x18);
  dVar3 = *(double *)(lVar7 + 8 + uVar9 * 0x18);
  dVar4 = *(double *)(lVar8 + 0x10 + uVar9 * 0x18);
  dVar5 = *(double *)(lVar8 + uVar9 * 0x18);
  dVar6 = *(double *)(lVar8 + 8 + uVar9 * 0x18);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2 - dVar5;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1 - dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2 + dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1 + dVar4;
  return __return_storage_ptr__;
}

// GetBox @ 1434bedf0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::GetBox
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,
          TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  code *local_48 [2];
  undefined **local_38;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_30;
  undefined8 local_20;
  
  if (*(longlong *)param_2 != 0) {
    uVar3 = (ulonglong)(param_1 & 0x1ff);
    local_20 = 0;
    lVar1 = *(longlong *)
             ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8
             );
    local_60 = *(double *)(lVar1 + uVar3 * 0x18);
    lVar2 = *(longlong *)
             ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8
             );
    local_58 = *(double *)(lVar1 + 8 + uVar3 * 0x18);
    local_50 = *(double *)(lVar1 + 0x10 + uVar3 * 0x18);
    local_38 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_VFColliderMesh_Geometry_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                  ::Call;
    local_30 = param_2;
    TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
              (__return_storage_ptr__,(TAxisAlignedBox3<double> *)&local_78._s_0,
               (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
               local_48);
    return __return_storage_ptr__;
  }
  GetBox(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// IsInside @ 1434e6700

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::IsInside
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,TVector<double> *param_1)

{
  return false;
}

// IsWithinDistanceSquared @ 1434f5530

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::IsWithinDistanceSquared
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,TVector<double> *param_1,double param_2
          ,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// SplitTriSetMidpoint @ 1435490b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::SplitTriSetMidpoint
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          int param_4,int param_5,int param_6,FBoxesSet *param_7,FBoxesSet *param_8,
          TAxisAlignedBox3<double> *param_9)

{
  int *piVar1;
  uint *puVar2;
  TVector<double> *pTVar3;
  longlong lVar4;
  double dVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FBoxesSet *pFVar14;
  TAxisAlignedBox3<double> *pTVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  double *pdVar20;
  TAxisAlignedBox3<double> *pTVar21;
  longlong lVar22;
  undefined8 uVar23;
  uint uVar24;
  longlong *plVar25;
  uint uVar26;
  ulonglong uVar27;
  TDynamicVector<int,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar28;
  uint uVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  undefined4 uVar35;
  double dVar36;
  undefined4 uVar39;
  undefined8 uVar37;
  double dVar38;
  undefined4 uVar40;
  undefined4 uVar42;
  double dVar41;
  longlong local_1b0;
  int local_1a8;
  longlong local_1a0;
  int local_178 [2];
  int local_170;
  int local_16c;
  longlong local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  TVector<double>_u_0 local_130;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  TAxisAlignedBox3<double> local_d0 [3];
  
  pTVar15 = param_9;
  pFVar14 = param_7;
  iVar17 = param_4;
  local_1b0 = (longlong)param_3;
  if (param_1->ArrayNum < 1) {
    pdVar20 = &local_160;
    local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pdVar20 = &local_100;
    local_100 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_f8 = _UNK_150a9e648;
    local_e0 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_d8 = _UNK_1508ffb58;
    local_f0 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_e8 = _UNK_150a9e6d8;
  }
  dVar36 = pdVar20[1];
  dVar5 = pdVar20[2];
  dVar41 = pdVar20[3];
  (param_9->Min).field0_0x0._s_0.X = *pdVar20;
  (param_9->Min).field0_0x0._s_0.Y = dVar36;
  dVar36 = pdVar20[4];
  dVar38 = pdVar20[5];
  (param_9->Min).field0_0x0._s_0.Z = dVar5;
  (param_9->Max).field0_0x0._s_0.X = dVar41;
  (param_9->Max).field0_0x0._s_0.Y = dVar36;
  (param_9->Max).field0_0x0._s_0.Z = dVar38;
  if (param_6 < param_4) {
    local_178[0] = param_5;
    Core::Private::Function::CheckCallable(*(void **)&this->GetSplitAxis);
    plVar8 = *(longlong **)&(this->GetSplitAxis).field_0x28;
    pcVar10 = *(code **)&this->GetSplitAxis;
    plVar25 = (longlong *)&(this->GetSplitAxis).field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar25 = plVar8;
    }
    uVar23 = (**(code **)(*plVar25 + 8))();
    uVar35 = (undefined4)__real_7fefffffffffffff;
    uVar39 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar40 = (undefined4)__real_ffefffffffffffff;
    uVar42 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    uVar18 = (*pcVar10)(uVar23,local_178,pTVar15);
    iVar34 = 0;
    uVar29 = 0;
    uVar27 = (ulonglong)(int)uVar18;
    uVar33 = 0;
    if (0 < iVar17) {
      lVar31 = (uVar27 + local_1b0 * 3) * 8;
      uVar26 = param_3;
      do {
        uVar32 = uVar33;
        if ((int)uVar26 < param_2->ArrayNum) {
          uVar32 = ~uVar26 >> 0x1f;
        }
        if (uVar32 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar10 = (code *)swi(3);
            iVar17 = (*pcVar10)();
            return iVar17;
          }
        }
        pFVar7 = (param_2->AllocatorInstance).Data;
        if (2 < uVar27) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          if (bVar16) {
            pcVar10 = (code *)swi(3);
            iVar17 = (*pcVar10)();
            return iVar17;
          }
        }
        dVar36 = *(double *)(pFVar7 + lVar31);
        uVar26 = uVar26 + 1;
        dVar5 = dVar36;
        if ((double)CONCAT44(uVar39,uVar35) <= dVar36) {
          dVar5 = (double)CONCAT44(uVar39,uVar35);
        }
        lVar31 = lVar31 + 0x18;
        if (dVar36 <= (double)CONCAT44(uVar42,uVar40)) {
          dVar36 = (double)CONCAT44(uVar42,uVar40);
        }
        uVar35 = SUB84(dVar5,0);
        uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
        uVar40 = SUB84(dVar36,0);
        uVar42 = (undefined4)((ulonglong)dVar36 >> 0x20);
      } while ((int)(uVar26 - param_3) < iVar17);
    }
    dVar5 = __real_3fe0000000000000;
    dVar36 = ((double)CONCAT44(uVar42,uVar40) + (double)CONCAT44(uVar39,uVar35)) *
             __real_3fe0000000000000;
    if ((double)CONCAT44(uVar42,uVar40) - (double)CONCAT44(uVar39,uVar35) <= __real_3e45798ee2308c3a
       ) {
      iVar34 = iVar17 / 2;
      iVar17 = iVar17 - iVar34;
    }
    else {
      local_1a8 = iVar17 + -1;
      local_168 = (longlong)local_1a8;
      if (0 < local_1a8) {
        local_1a0 = 0;
        iVar34 = 0;
        while( true ) {
          uVar26 = iVar34 + param_3;
          lVar31 = (uVar27 + (param_3 + local_1a0) * 3) * 8;
          while( true ) {
            uVar32 = uVar33;
            if ((int)uVar26 < param_2->ArrayNum) {
              uVar32 = ~uVar26 >> 0x1f;
            }
            if (uVar32 == 0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                iVar17 = (*pcVar10)();
                return iVar17;
              }
            }
            pFVar7 = (param_2->AllocatorInstance).Data;
            if (2 < uVar18) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                iVar17 = (*pcVar10)();
                return iVar17;
              }
            }
            if (dVar36 < *(double *)(pFVar7 + lVar31)) break;
            local_1a0 = local_1a0 + 1;
            iVar34 = iVar34 + 1;
            uVar26 = uVar26 + 1;
            lVar31 = lVar31 + 0x18;
          }
          uVar26 = param_3 + local_1a8;
          lVar22 = (local_1b0 + local_168) * 0x18;
          lVar31 = local_168;
          while( true ) {
            uVar19 = 0;
            uVar32 = uVar19;
            if ((int)uVar26 < param_2->ArrayNum) {
              uVar32 = ~uVar26 >> 0x1f;
            }
            if (uVar32 == 0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                iVar17 = (*pcVar10)();
                return iVar17;
              }
            }
            pFVar7 = (param_2->AllocatorInstance).Data;
            if (2 < uVar18) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                iVar17 = (*pcVar10)();
                return iVar17;
              }
            }
            if (*(double *)(pFVar7 + uVar27 * 8 + lVar22) <= dVar36) break;
            local_1a8 = local_1a8 + -1;
            uVar26 = uVar26 - 1;
            lVar31 = lVar31 + -1;
            lVar22 = lVar22 + -0x18;
          }
          iVar17 = param_4;
          local_168 = lVar31;
          if (lVar31 <= local_1a0) break;
          lVar22 = (longlong)param_3;
          uVar32 = (uint)~(iVar34 + param_3) >> 0x1f;
          uVar26 = uVar19;
          if (iVar34 + param_3 < param_2->ArrayNum) {
            uVar26 = uVar32;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          lVar4 = lVar22 + lVar31;
          pFVar7 = pFVar9 + (local_1b0 + local_1a0) * 0x18;
          uVar37 = *(undefined8 *)pFVar7;
          uVar11 = *(undefined8 *)(pFVar7 + 8);
          uVar23 = *(undefined8 *)(pFVar9 + (local_1b0 + local_1a0) * 0x18 + 0x10);
          uVar24 = (uint)~(local_1a8 + param_3) >> 0x1f;
          uVar26 = uVar19;
          if (local_1a8 + param_3 < param_2->ArrayNum) {
            uVar26 = uVar24;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          pFVar7 = pFVar9 + lVar4 * 0x18;
          uVar12 = *(undefined8 *)pFVar7;
          uVar13 = *(undefined8 *)(pFVar7 + 8);
          uVar6 = *(undefined8 *)(pFVar9 + lVar4 * 0x18 + 0x10);
          uVar26 = uVar19;
          if (iVar34 + param_3 < param_2->ArrayNum) {
            uVar26 = uVar32;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          pFVar7 = pFVar9 + (local_1a0 + lVar22) * 0x18;
          *(undefined8 *)pFVar7 = uVar12;
          *(undefined8 *)(pFVar7 + 8) = uVar13;
          *(undefined8 *)(pFVar9 + (local_1a0 + lVar22) * 0x18 + 0x10) = uVar6;
          uVar26 = uVar19;
          if (local_1a8 + param_3 < param_2->ArrayNum) {
            uVar26 = uVar24;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          pFVar7 = pFVar9 + lVar4 * 0x18;
          *(undefined8 *)pFVar7 = uVar37;
          *(undefined8 *)(pFVar7 + 8) = uVar11;
          *(undefined8 *)(pFVar9 + lVar4 * 0x18 + 0x10) = uVar23;
          uVar26 = uVar19;
          if (iVar34 + param_3 < param_1->ArrayNum) {
            uVar26 = (uint)~(iVar34 + param_3) >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          uVar35 = *(undefined4 *)((param_1->AllocatorInstance).Data + (local_1a0 + lVar22) * 4);
          uVar26 = uVar19;
          if (local_1a8 + param_3 < param_1->ArrayNum) {
            uVar26 = (uint)~(local_1a8 + param_3) >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          uVar39 = *(undefined4 *)((param_1->AllocatorInstance).Data + (lVar22 + lVar31) * 4);
          if (iVar34 + param_3 < param_1->ArrayNum) {
            uVar19 = (uint)~(iVar34 + param_3) >> 0x1f;
          }
          if (uVar19 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (local_1a0 + lVar22) * 4) = uVar39;
          uVar26 = uVar33;
          if (local_1a8 + param_3 < param_1->ArrayNum) {
            uVar26 = (uint)~(local_1a8 + param_3) >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (lVar22 + lVar31) * 4) = uVar35;
        }
      }
      iVar17 = iVar17 - iVar34;
    }
    pFVar14 = param_7;
    iVar30 = param_5 + 1;
    local_130._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_130._s_0.Y = _UNK_150a9e648;
    local_130._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_118 = _UNK_150a9e6d8;
    local_110 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_108 = _UNK_1508ffb58;
    local_170 = SplitTriSetMidpoint(this,param_1,param_2,param_3,iVar34,iVar30,param_6,param_7,
                                    param_8,param_9);
    local_16c = SplitTriSetMidpoint(this,param_1,param_2,iVar34 + param_3,iVar17,iVar30,param_6,
                                    pFVar14,param_8,(TAxisAlignedBox3<double> *)&local_130._s_0);
    pTVar15 = param_9;
    pFVar14 = param_8;
    pTVar3 = &param_9->Max;
    dVar36 = (param_9->Min).field0_0x0._s_0.Y;
    uVar23 = local_130._s_0.Y;
    if (dVar36 <= local_130._s_0.Y) {
      uVar23 = dVar36;
    }
    dVar36 = (param_9->Min).field0_0x0._s_0.X;
    uVar37 = local_130._s_0.X;
    if (dVar36 <= local_130._s_0.X) {
      uVar37 = dVar36;
    }
    (param_9->Min).field0_0x0._s_0.Y = (double)uVar23;
    (param_9->Min).field0_0x0._s_0.X = (double)uVar37;
    dVar36 = (pTVar3->field0_0x0)._s_0.X;
    dVar41 = dStack_118;
    if (dStack_118 <= dVar36) {
      dVar41 = dVar36;
    }
    dVar36 = (param_9->Min).field0_0x0._s_0.Z;
    uVar23 = local_130._s_0.Z;
    if (dVar36 <= local_130._s_0.Z) {
      uVar23 = dVar36;
    }
    (pTVar3->field0_0x0)._s_0.X = dVar41;
    (param_9->Min).field0_0x0._s_0.Z = (double)uVar23;
    dVar36 = (param_9->Max).field0_0x0._s_0.Z;
    dVar41 = dStack_108;
    if (dStack_108 <= dVar36) {
      dVar41 = dVar36;
    }
    dVar36 = (param_9->Max).field0_0x0._s_0.Y;
    dVar38 = local_110;
    if (local_110 <= dVar36) {
      dVar38 = dVar36;
    }
    (param_9->Max).field0_0x0._s_0.Z = dVar41;
    (param_9->Max).field0_0x0._s_0.Y = dVar38;
    uVar18 = param_8->IBoxCur;
    param_8->IBoxCur = uVar18 + 1;
    TDynamicVector<int,512>::InsertAt(&param_8->BoxToIndex,&param_8->IIndicesCur,uVar18);
    uVar33 = pFVar14->IIndicesCur;
    pFVar14->IIndicesCur = uVar33 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar14->IndexList,&local_170,uVar33);
    uVar33 = pFVar14->IIndicesCur;
    pFVar14->IIndicesCur = uVar33 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar14->IndexList,&local_16c,uVar33);
    uVar26 = (pFVar14->BoxCenters).CurBlock;
    pTVar28 = &pFVar14->BoxCenters;
    uVar33 = (pFVar14->BoxCenters).CurBlockUsed;
    uVar32 = uVar26 * 0x200 + uVar33;
    dVar36 = ((pTVar15->Min).field0_0x0._s_0.X + (pTVar3->field0_0x0)._s_0.X) * dVar5;
    dVar41 = ((pTVar15->Max).field0_0x0._s_0.Y + (pTVar15->Min).field0_0x0._s_0.Y) * dVar5;
    dVar38 = ((pTVar15->Max).field0_0x0._s_0.Z + (pTVar15->Min).field0_0x0._s_0.Z) * dVar5;
    if (uVar18 == uVar32) {
      if (uVar33 == 0x200) {
        if (uVar26 == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        uVar26 = pTVar28->CurBlock;
        (pFVar14->BoxCenters).CurBlockUsed = 0;
        uVar33 = uVar29;
      }
    }
    else {
      if (uVar18 <= uVar32) {
        uVar27 = (ulonglong)(uVar18 & 0x1ff);
        lVar31 = *(longlong *)
                  ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar18 >> 9) * 8);
        *(double *)(lVar31 + uVar27 * 0x18) = dVar36;
        *(double *)(lVar31 + 8 + uVar27 * 0x18) = dVar41;
        *(double *)(lVar31 + 0x10 + uVar27 * 0x18) = dVar38;
        goto LAB_143549fdf;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
      uVar33 = (pFVar14->BoxCenters).CurBlockUsed;
      if (uVar33 == 0x200) {
        if (pTVar28->CurBlock == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        (pFVar14->BoxCenters).CurBlockUsed = 0;
        uVar33 = uVar29;
      }
      uVar26 = pTVar28->CurBlock;
    }
    lVar22 = (longlong)(int)uVar33;
    lVar31 = *(longlong *)
              ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar26 * 8);
    *(double *)(lVar31 + lVar22 * 0x18) = dVar36;
    *(double *)(lVar31 + 8 + lVar22 * 0x18) = dVar41;
    *(double *)(lVar31 + 0x10 + lVar22 * 0x18) = dVar38;
    puVar2 = &(pFVar14->BoxCenters).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
LAB_143549fdf:
    pFVar14 = param_8;
    pTVar28 = &param_8->BoxExtents;
    uVar26 = pTVar28->CurBlock;
    uVar33 = (param_8->BoxExtents).CurBlockUsed;
    uVar32 = uVar26 * 0x200 + uVar33;
    dVar36 = ((pTVar15->Max).field0_0x0._s_0.X - (pTVar15->Min).field0_0x0._s_0.X) * dVar5;
    dVar41 = ((pTVar15->Max).field0_0x0._s_0.Y - (pTVar15->Min).field0_0x0._s_0.Y) * dVar5;
    dVar5 = ((pTVar15->Max).field0_0x0._s_0.Z - (pTVar15->Min).field0_0x0._s_0.Z) * dVar5;
    if (uVar18 == uVar32) {
      if (uVar33 == 0x200) {
        if (uVar26 == (param_8->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        uVar26 = pTVar28->CurBlock;
        (pFVar14->BoxExtents).CurBlockUsed = 0;
        uVar33 = uVar29;
      }
    }
    else {
      if (uVar18 <= uVar32) {
        uVar27 = (ulonglong)(uVar18 & 0x1ff);
        lVar31 = *(longlong *)
                  ((param_8->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar18 >> 9) * 8);
        *(double *)(lVar31 + uVar27 * 0x18) = dVar36;
        *(double *)(lVar31 + 8 + uVar27 * 0x18) = dVar41;
        *(double *)(lVar31 + 0x10 + uVar27 * 0x18) = dVar5;
        return uVar18;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
      uVar33 = (pFVar14->BoxExtents).CurBlockUsed;
      if (uVar33 == 0x200) {
        if (pTVar28->CurBlock == (pFVar14->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        (pFVar14->BoxExtents).CurBlockUsed = 0;
        uVar33 = uVar29;
      }
      uVar26 = pTVar28->CurBlock;
    }
    lVar22 = (longlong)(int)uVar33;
    lVar31 = *(longlong *)
              ((pFVar14->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar26 * 8);
    *(double *)(lVar31 + lVar22 * 0x18) = dVar36;
    *(double *)(lVar31 + 8 + lVar22 * 0x18) = dVar41;
    *(double *)(lVar31 + 0x10 + lVar22 * 0x18) = dVar5;
    puVar2 = &(pFVar14->BoxExtents).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
    return uVar18;
  }
  uVar18 = param_7->IBoxCur;
  piVar1 = &param_7->IIndicesCur;
  param_7->IBoxCur = uVar18 + 1;
  param_9._0_4_ = uVar18;
  TDynamicVector<int,512>::InsertAt(&param_7->BoxToIndex,piVar1,uVar18);
  uVar33 = *piVar1;
  this_00 = &pFVar14->IndexList;
  *piVar1 = uVar33 + 1;
  TDynamicVector<int,512>::InsertAt(this_00,&param_4,uVar33);
  if (0 < iVar17) {
    local_1b0 = local_1b0 * 4;
    param_6 = param_3;
    do {
      uVar18 = *piVar1;
      *piVar1 = uVar18 + 1;
      uVar29 = ~param_6;
      uVar33 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar33 = uVar29 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        iVar17 = (*pcVar10)();
        return iVar17;
      }
      uVar33 = this_00->CurBlock;
      uVar26 = (pFVar14->IndexList).CurBlockUsed;
      uVar32 = uVar33 * 0x200 + uVar26;
      pFVar7 = (param_1->AllocatorInstance).Data;
      if (uVar18 == uVar32) {
        if (uVar26 == 0x200) {
          if (uVar33 == (pFVar14->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar26 = 0;
          uVar33 = this_00->CurBlock;
          (pFVar14->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar14->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar33 * 8) +
         (longlong)(int)uVar26 * 4) = *(undefined4 *)(pFVar7 + local_1b0);
        puVar2 = &(pFVar14->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else if (uVar32 < uVar18) {
        TDynamicVector<int,512>::Resize(this_00,uVar18);
        uVar18 = (pFVar14->IndexList).CurBlockUsed;
        if (uVar18 == 0x200) {
          if (this_00->CurBlock == (pFVar14->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar18 = 0;
          (pFVar14->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar14->IndexList).Blocks.AllocatorInstance.Data +
           (longlong)(int)this_00->CurBlock * 8) + (longlong)(int)uVar18 * 4) =
             *(undefined4 *)(pFVar7 + local_1b0);
        puVar2 = &(pFVar14->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else {
        *(undefined4 *)
         (*(longlong *)
           ((pFVar14->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8) +
         (ulonglong)(uVar18 & 0x1ff) * 4) = *(undefined4 *)(pFVar7 + local_1b0);
      }
      uVar18 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar18 = uVar29 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        iVar17 = (*pcVar10)();
        return iVar17;
      }
      pTVar21 = TMeshQueries<UE::Geometry::FColliderMesh>::GetTriBounds
                          (local_d0,this->Mesh,
                           *(int *)((param_1->AllocatorInstance).Data + local_1b0));
      param_6 = param_6 + 1;
      local_1b0 = local_1b0 + 4;
      dVar5 = (pTVar21->Min).field0_0x0._s_0.X;
      dVar36 = (pTVar15->Min).field0_0x0._s_0.X;
      if (dVar36 <= dVar5) {
        dVar5 = dVar36;
      }
      (pTVar15->Min).field0_0x0._s_0.X = dVar5;
      dVar5 = (pTVar21->Min).field0_0x0._s_0.Y;
      dVar36 = (pTVar15->Min).field0_0x0._s_0.Y;
      if (dVar36 <= dVar5) {
        dVar5 = dVar36;
      }
      (pTVar15->Min).field0_0x0._s_0.Y = dVar5;
      dVar5 = (pTVar21->Min).field0_0x0._s_0.Z;
      dVar36 = (pTVar15->Min).field0_0x0._s_0.Z;
      if (dVar36 <= dVar5) {
        dVar5 = dVar36;
      }
      (pTVar15->Min).field0_0x0._s_0.Z = dVar5;
      dVar5 = (pTVar21->Max).field0_0x0._s_0.X;
      dVar36 = (pTVar15->Max).field0_0x0._s_0.X;
      if (dVar5 <= dVar36) {
        dVar5 = dVar36;
      }
      (pTVar15->Max).field0_0x0._s_0.X = dVar5;
      dVar36 = (pTVar21->Max).field0_0x0._s_0.Y;
      dVar5 = (pTVar15->Max).field0_0x0._s_0.Y;
      if (dVar36 <= dVar5) {
        dVar36 = dVar5;
      }
      (pTVar15->Max).field0_0x0._s_0.Y = dVar36;
      dVar5 = (pTVar21->Max).field0_0x0._s_0.Z;
      dVar36 = (pTVar15->Max).field0_0x0._s_0.Z;
      if (dVar5 <= dVar36) {
        dVar5 = dVar36;
      }
      (pTVar15->Max).field0_0x0._s_0.Z = dVar5;
      uVar18 = (uint)param_9;
    } while (param_6 - param_3 < iVar17);
  }
  pFVar14 = param_7;
  dVar38 = __real_3fe0000000000000;
  pTVar28 = &param_7->BoxCenters;
  uVar29 = pTVar28->CurBlock;
  uVar33 = (param_7->BoxCenters).CurBlockUsed;
  uVar26 = uVar29 * 0x200 + uVar33;
  dVar36 = ((pTVar15->Max).field0_0x0._s_0.X + (pTVar15->Min).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar5 = ((pTVar15->Max).field0_0x0._s_0.Y + (pTVar15->Min).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar41 = ((pTVar15->Max).field0_0x0._s_0.Z + (pTVar15->Min).field0_0x0._s_0.Z) *
           __real_3fe0000000000000;
  if (uVar18 == uVar26) {
    if (uVar33 == 0x200) {
      if (uVar29 == (param_7->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      uVar33 = 0;
      uVar29 = pTVar28->CurBlock;
      (pFVar14->BoxCenters).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar18 <= uVar26) {
      uVar27 = (ulonglong)(uVar18 & 0x1ff);
      lVar31 = *(longlong *)
                ((param_7->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
      ;
      *(double *)(lVar31 + uVar27 * 0x18) = dVar36;
      *(double *)(lVar31 + 8 + uVar27 * 0x18) = dVar5;
      *(double *)(lVar31 + 0x10 + uVar27 * 0x18) = dVar41;
      goto LAB_143549597;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
    uVar33 = (pFVar14->BoxCenters).CurBlockUsed;
    if (uVar33 == 0x200) {
      if (pTVar28->CurBlock == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      uVar33 = 0;
      (pFVar14->BoxCenters).CurBlockUsed = 0;
    }
    uVar29 = pTVar28->CurBlock;
  }
  lVar22 = (longlong)(int)uVar33;
  lVar31 = *(longlong *)
            ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar29 * 8);
  *(double *)(lVar31 + lVar22 * 0x18) = dVar36;
  *(double *)(lVar31 + 8 + lVar22 * 0x18) = dVar5;
  *(double *)(lVar31 + 0x10 + lVar22 * 0x18) = dVar41;
  puVar2 = &(pFVar14->BoxCenters).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
LAB_143549597:
  pFVar14 = param_7;
  pTVar28 = &param_7->BoxExtents;
  uVar29 = pTVar28->CurBlock;
  uVar33 = (param_7->BoxExtents).CurBlockUsed;
  uVar26 = uVar29 * 0x200 + uVar33;
  dVar36 = ((pTVar15->Max).field0_0x0._s_0.X - (pTVar15->Min).field0_0x0._s_0.X) * dVar38;
  dVar5 = ((pTVar15->Max).field0_0x0._s_0.Y - (pTVar15->Min).field0_0x0._s_0.Y) * dVar38;
  dVar38 = ((pTVar15->Max).field0_0x0._s_0.Z - (pTVar15->Min).field0_0x0._s_0.Z) * dVar38;
  if (uVar18 == uVar26) {
    if (uVar33 == 0x200) {
      if (uVar29 == (param_7->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      uVar33 = 0;
      uVar29 = pTVar28->CurBlock;
      (pFVar14->BoxExtents).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar18 <= uVar26) {
      uVar27 = (ulonglong)(uVar18 & 0x1ff);
      lVar31 = *(longlong *)
                ((param_7->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
      ;
      *(double *)(lVar31 + uVar27 * 0x18) = dVar36;
      *(double *)(lVar31 + 8 + uVar27 * 0x18) = dVar5;
      *(double *)(lVar31 + 0x10 + uVar27 * 0x18) = dVar38;
      return ~uVar18;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
    uVar33 = (pFVar14->BoxExtents).CurBlockUsed;
    if (uVar33 == 0x200) {
      if (pTVar28->CurBlock == (pFVar14->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      (pFVar14->BoxExtents).CurBlockUsed = 0;
      uVar33 = 0;
    }
    uVar29 = pTVar28->CurBlock;
  }
  lVar22 = (longlong)(int)uVar33;
  lVar31 = *(longlong *)
            ((pFVar14->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar29 * 8);
  *(double *)(lVar31 + lVar22 * 0x18) = dVar36;
  *(double *)(lVar31 + 8 + lVar22 * 0x18) = dVar5;
  *(double *)(lVar31 + 0x10 + lVar22 * 0x18) = dVar38;
  puVar2 = &(pFVar14->BoxExtents).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
  return ~uVar18;
}

// SupportsNearestTriangle @ 143551580

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::SupportsNearestTriangle
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this)

{
  return true;
}

// SupportsPointContainment @ 143551590

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::SupportsPointContainment
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this)

{
  return false;
}

// SupportsTriangleRayIntersection @ 1435515a0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::SupportsTriangleRayIntersection
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this)

{
  return true;
}

// TestAnyHitTriangle @ 1435515b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,TRay<double> *param_2,
          int *param_3,double param_4,FQueryOptions *param_5)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  FColliderMesh *pFVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackY_228 [32];
  uint local_1f8 [2];
  int local_1f0;
  ulonglong local_1e8;
  undefined8 local_1e0;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  double local_188;
  double dStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  TVector<double>_u_0 local_138;
  double dStack_120;
  double local_118;
  double dStack_110;
  TVector<double>_u_0 local_108;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  TVector<double> local_b8;
  EIntersectionType local_a0 [2];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar1 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar17 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_1e8 = (ulonglong)uVar17;
  lVar18 = *(longlong *)(pFVar1 + (ulonglong)(uVar17 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar17) {
    uVar15 = *(uint *)(lVar18 + (ulonglong)(uVar17 & 0x1ff) * 4);
    dVar8 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar15 < 0) {
      uVar15 = ~uVar15;
      dVar6 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar15,param_2);
    }
    else {
      iVar16 = uVar15 - 1;
      uVar15 = *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                       (ulonglong)(uVar17 + 1 & 0x1ff) * 4) - 1;
      dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar16,param_2);
      dVar6 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar15,param_2);
      if (dVar6 <= dVar7) {
        if (dVar8 < dVar6) {
          return false;
        }
        bVar10 = TestAnyHitTriangle(this,uVar15,param_2,param_3,param_4,param_5);
        if (!bVar10) {
          if (dVar8 < dVar7) {
            return false;
          }
          bVar10 = TestAnyHitTriangle(this,iVar16,param_2,param_3,param_4,param_5);
          return bVar10;
        }
        return true;
      }
      if (dVar8 < dVar7) {
        return false;
      }
      bVar10 = TestAnyHitTriangle(this,iVar16,param_2,param_3,param_4,param_5);
      if (bVar10) {
        return true;
      }
    }
    if ((dVar6 <= dVar8) &&
       (bVar10 = TestAnyHitTriangle(this,uVar15,param_2,param_3,param_4,param_5), bVar10)) {
      return true;
    }
    return false;
  }
  local_1f0 = *(int *)(lVar18 + (ulonglong)(uVar17 & 0x1ff) * 4);
  if (local_1f0 < 1) {
    return false;
  }
  uVar17 = uVar17 + 1;
  do {
    uVar15 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_1435516bb:
      pFVar4 = this->Mesh;
      uVar12 = 0;
      if ((int)uVar15 < (pFVar4->Triangles).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      pFVar1 = (pFVar4->Triangles).AllocatorInstance.Data;
      local_1e0 = *(longlong *)(pFVar1 + (longlong)(int)uVar15 * 0xc);
      iVar16 = *(int *)(pFVar1 + (longlong)(int)uVar15 * 0xc + 8);
      lVar20 = (longlong)iVar16;
      lVar18 = (longlong)(int)local_1e0;
      if (((int)local_1e0 < 0 || (pFVar4->Vertices).ArrayNum <= (int)local_1e0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      pFVar5 = (pFVar4->Vertices).AllocatorInstance.Data;
      lVar19 = (longlong)local_1e0._4_4_;
      pFVar1 = pFVar5 + lVar18 * 0x18;
      local_1b8._s_0.X = (double)*(undefined8 *)pFVar1;
      local_1b8._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_1b8._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar18 * 0x18 + 0x10);
      if ((local_1e0 < 0 || (pFVar4->Vertices).ArrayNum <= local_1e0._4_4_) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      pFVar5 = (pFVar4->Vertices).AllocatorInstance.Data;
      pFVar1 = pFVar5 + lVar19 * 0x18;
      dVar8 = *(double *)pFVar1;
      dVar6 = *(double *)(pFVar1 + 8);
      local_1d0._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar19 * 0x18 + 0x10);
      uVar21 = SUB84(local_1d0._s_0.Z,0);
      uVar22 = (undefined4)((ulonglong)local_1d0._s_0.Z >> 0x20);
      local_1d0._0_8_ = dVar8;
      local_1d0._8_8_ = dVar6;
      if ((iVar16 < 0 || (pFVar4->Vertices).ArrayNum <= iVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        uVar11 = (*pcVar3)();
        return (bool)uVar11;
      }
      pFVar1 = (pFVar4->Vertices).AllocatorInstance.Data;
      local_1a0._s_0.X = (double)*(undefined8 *)(pFVar1 + lVar20 * 0x18);
      local_1a0._s_0.Y = (double)*(undefined8 *)(pFVar1 + lVar20 * 0x18 + 8);
      local_1a0._s_0.Z = (double)*(undefined8 *)(pFVar1 + lVar20 * 0x18 + 0x10);
      bVar10 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_1b8._s_0,
                          (TVector<double> *)&local_1d0._s_0,(TVector<double> *)&local_1a0._s_0);
      if (bVar10) {
        local_138._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_138._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_138._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.X;
        local_148 = *(undefined8 *)(pFVar1 + lVar20 * 0x18 + 0x10);
        local_158 = *(undefined8 *)(pFVar1 + lVar20 * 0x18);
        uStack_150 = *(undefined8 *)(pFVar1 + lVar20 * 0x18 + 8);
        local_118 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_168._0_4_ = SUB84(dVar6,0);
        uStack_168._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
        local_170._0_4_ = SUB84(dVar8,0);
        local_170._4_4_ = (undefined4)((ulonglong)dVar8 >> 0x20);
        uStack_178 = local_1b8._16_4_;
        uStack_174 = local_1b8._20_4_;
        local_108._16_4_ = local_1b8._16_4_;
        local_108._20_4_ = local_1b8._20_4_;
        uStack_f0 = (undefined4)local_170;
        uStack_ec = local_170._4_4_;
        local_188 = local_1b8._s_0.X;
        dStack_180 = local_1b8._s_0.Y;
        local_108._s_0.X = local_1b8._s_0.X;
        local_108._s_0.Y = local_1b8._s_0.Y;
        local_e8 = (undefined4)uStack_168;
        uStack_e4 = uStack_168._4_4_;
        local_170 = dVar8;
        uStack_168 = dVar6;
        uStack_160 = uVar21;
        uStack_15c = uVar22;
        uStack_e0 = uVar21;
        uStack_dc = uVar22;
        local_d8 = local_158;
        uStack_d0 = uStack_150;
        local_c8 = local_148;
        bVar10 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_138._s_0,(TTriangle3<double> *)&local_108._s_0,
                            &local_c0,&local_b8,local_a0);
        if ((bVar10) && (local_c0 < param_5->MaxDistance)) {
          return true;
        }
      }
    }
    else {
      local_1f8[0] = uVar15;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar2 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar3 = *(code **)&param_5->TriangleFilterF;
      plVar14 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar14 = plVar2;
      }
      uVar13 = (**(code **)(*plVar14 + 8))();
      cVar9 = (*pcVar3)(uVar13,local_1f8);
      if (cVar9 != '\0') goto LAB_1435516bb;
    }
    uVar17 = uVar17 + 1;
    if (local_1f0 < (int)(uVar17 - (int)local_1e8)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 143551aa0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,TRay<double> *param_1,
          FQueryOptions *param_2)

{
  bool bVar1;
  double dVar2;
  int local_res8 [8];
  
  dVar2 = param_2->MaxDistance;
  if (__real_47efffffe0000000 <= param_2->MaxDistance) {
    dVar2 = __real_47efffffe0000000;
  }
  local_res8[0] = -1;
  bVar1 = TestAnyHitTriangle(this,this->RootIndex,param_1,local_res8,dVar2,param_2);
  return bVar1;
}

// TestIntersection @ 143551af0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,TTriangle3<double> *param_1,
          FQueryOptions *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_res8 [32];
  code *local_68;
  undefined1 *local_60;
  TVector<double>_u_0 local_58;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = param_1->V[1].field0_0x0._s_0.X;
  dVar1 = param_1->V[1].field0_0x0._s_0.Y;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_60 = local_res8;
  dVar2 = param_1->V[0].field0_0x0._s_0.X;
  local_58._s_0.X = local_40;
  if (dVar2 <= local_40) {
    local_58._s_0.X = dVar2;
  }
  dVar2 = param_1->V[1].field0_0x0._s_0.Z;
  uVar7 = SUB84(dVar2,0);
  uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = param_1->V[0].field0_0x0._s_0.Y;
  local_58._s_0.Y = dVar1;
  if (dVar3 <= dVar1) {
    local_58._s_0.Y = dVar3;
  }
  dVar3 = param_1->V[0].field0_0x0._s_0.X;
  if (local_40 <= dVar3) {
    local_40 = dVar3;
  }
  dVar3 = *(double *)((longlong)&param_1->V[0].field0_0x0 + 8);
  if (dVar1 <= dVar3) {
    uVar5 = SUB84(dVar3,0);
    uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.X;
  if (dVar1 <= local_58._s_0.X) {
    local_58._s_0.X = dVar1;
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.Y;
  if (dVar1 <= local_58._s_0.Y) {
    local_58._s_0.Y = dVar1;
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.X;
  if (local_40 <= dVar1) {
    local_40 = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[2].field0_0x0 + 8);
  if ((double)CONCAT44(uVar6,uVar5) <= dVar1) {
    uVar5 = SUB84(dVar1,0);
    uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = param_1->V[0].field0_0x0._s_0.Z;
  local_58._s_0.Z = dVar2;
  if (dVar1 <= dVar2) {
    local_58._s_0.Z = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[0].field0_0x0 + 0x10);
  if (dVar2 <= dVar1) {
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_38 = CONCAT44(uVar6,uVar5);
  dVar1 = param_1->V[2].field0_0x0._s_0.Z;
  if (dVar1 <= local_58._s_0.Z) {
    local_58._s_0.Z = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[2].field0_0x0 + 0x10);
  if ((double)CONCAT44(uVar8,uVar7) <= dVar1) {
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_30 = CONCAT44(uVar8,uVar7);
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 143551bd0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,
          TMeshAABBTree3<UE::Geometry::FColliderMesh> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 143551c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,FColliderMesh *param_1,
          TAxisAlignedBox3<double> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          FQueryOptions *param_4)

{
  double *pdVar1;
  undefined1 *puVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  TAxisAlignedBox3<double> *pTVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *local_1d0;
  FQueryOptions *local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  code *local_108 [2];
  undefined **local_f8;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_f0;
  undefined8 local_e0;
  TAxisAlignedBox3<double> local_d8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_208;
  dVar3 = (param_2->Min).field0_0x0._s_0.X;
  local_1c8 = param_4;
  local_1d0 = this;
  if (((dVar3 < (param_2->Max).field0_0x0._s_0.X || dVar3 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar3 = (param_2->Min).field0_0x0._s_0.Y, pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar3 < *pdVar1 || dVar3 == *pdVar1)) &&
     (dVar3 = (param_2->Min).field0_0x0._s_0.Z, pdVar1 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar3 < *pdVar1 || dVar3 == *pdVar1)) {
    if (*(longlong *)param_3 != 0) {
      local_e0 = 0;
      local_f8 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_VFColliderMesh_Geometry_UE___Geometry_UE__UEBA_NPEBVFColliderMesh_45_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_108[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                     ::Call;
      local_f0 = param_3;
      pTVar17 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          (&local_d8,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_108);
      dVar3 = (pTVar17->Min).field0_0x0._s_0.Y;
      dVar9 = (pTVar17->Min).field0_0x0._s_0.Z;
      dVar10 = (pTVar17->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar17->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar3;
      dVar3 = (pTVar17->Max).field0_0x0._s_0.Y;
      dVar11 = (pTVar17->Max).field0_0x0._s_0.Z;
      (param_2->Min).field0_0x0._s_0.Z = dVar9;
      (param_2->Max).field0_0x0._s_0.X = dVar10;
      (param_2->Max).field0_0x0._s_0.Y = dVar3;
      (param_2->Max).field0_0x0._s_0.Z = dVar11;
    }
    bVar12 = box_box_intersect(this,this->RootIndex,param_2);
    if (!bVar12) {
      return false;
    }
  }
  iVar4 = (param_1->Triangles).ArrayNum;
  local_1c0 = (longlong)iVar4;
  uVar22 = 0;
  if (0 < iVar4) {
    local_1d8 = 0;
    lVar25 = 0;
    do {
      lVar20 = local_1d8;
      iVar4 = (param_1->Triangles).ArrayNum;
      if (*(longlong *)param_3 == 0) {
        uVar15 = 0;
        if ((int)uVar22 < iVar4) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if (uVar15 == 0) {
          local_1e8 = (longlong)(int)uVar22;
          local_1e0 = (longlong)iVar4;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            uVar13 = (*pcVar8)();
            return (bool)uVar13;
          }
        }
        pFVar6 = (param_1->Triangles).AllocatorInstance.Data;
        iVar4 = (param_1->Vertices).ArrayNum;
        local_1a8 = *(longlong *)(pFVar6 + lVar25);
        iVar5 = *(int *)(pFVar6 + lVar25 + 8);
        lVar24 = (longlong)iVar5;
        lVar23 = (longlong)(int)local_1a8;
        if (((int)local_1a8 < 0 || iVar4 <= (int)local_1a8) &&
           (local_1e8 = lVar23, local_1e0 = (longlong)iVar4,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
        lVar21 = (longlong)local_1a8._4_4_;
        iVar4 = (param_1->Vertices).ArrayNum;
        pFVar6 = pFVar7 + lVar23 * 0x18;
        local_a8 = *(undefined8 *)pFVar6;
        uStack_a0 = *(undefined8 *)(pFVar6 + 8);
        local_98 = *(undefined8 *)(pFVar7 + lVar23 * 0x18 + 0x10);
        if ((local_1a8 < 0 || iVar4 <= local_1a8._4_4_) &&
           (local_1e8 = lVar21, local_1e0 = (longlong)iVar4,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
        iVar4 = (param_1->Vertices).ArrayNum;
        pFVar6 = pFVar7 + lVar21 * 0x18;
        local_90 = *(undefined8 *)pFVar6;
        uStack_88 = *(undefined8 *)(pFVar6 + 8);
        local_80 = *(undefined8 *)(pFVar7 + lVar21 * 0x18 + 0x10);
        if ((iVar5 < 0 || iVar4 <= iVar5) &&
           (local_1e8 = lVar24, local_1e0 = (longlong)iVar4,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
        pFVar6 = pFVar7 + lVar24 * 0x18;
        local_78 = *(undefined4 *)pFVar6;
        uStack_74 = *(undefined4 *)(pFVar6 + 4);
        uStack_70 = *(undefined4 *)(pFVar6 + 8);
        uStack_6c = *(undefined4 *)(pFVar6 + 0xc);
        uVar18 = *(undefined8 *)(pFVar7 + lVar24 * 0x18 + 0x10);
        uVar26 = (undefined4)uVar18;
        uVar27 = (undefined4)((ulonglong)uVar18 >> 0x20);
      }
      else {
        uVar15 = 0;
        if ((int)uVar22 < iVar4) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if (uVar15 == 0) {
          local_1e8 = (longlong)(int)uVar22;
          local_1e0 = (longlong)iVar4;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            uVar13 = (*pcVar8)();
            return (bool)uVar13;
          }
        }
        pFVar6 = (param_1->Triangles).AllocatorInstance.Data;
        iVar4 = (param_1->Vertices).ArrayNum;
        local_1b8 = *(undefined8 *)(pFVar6 + lVar25);
        uVar15 = *(uint *)(pFVar6 + lVar25 + 8);
        lVar23 = (longlong)(int)uVar15;
        lVar20 = (longlong)(int)(uint)local_1b8;
        uVar16 = 0;
        if ((int)(uint)local_1b8 < iVar4) {
          uVar16 = ~(uint)local_1b8 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_1e8 = lVar20, local_1e0 = (longlong)iVar4,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
        pFVar6 = pFVar7 + lVar20 * 0x18;
        local_198 = *(undefined8 *)pFVar6;
        uStack_190 = *(undefined8 *)(pFVar6 + 8);
        local_188 = *(undefined8 *)(pFVar7 + lVar20 * 0x18 + 0x10);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        puVar2 = &param_3->field_0x10;
        pcVar8 = *(code **)param_3;
        plVar19 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar19 = (longlong *)puVar2;
        }
        uVar18 = (**(code **)(*plVar19 + 8))();
        (*pcVar8)(&local_180,uVar18,&local_198);
        lVar20 = (longlong)(int)local_1b8._4_4_;
        iVar4 = (param_1->Vertices).ArrayNum;
        local_a8 = local_180;
        uStack_a0 = uStack_178;
        local_98 = local_170;
        uVar16 = 0;
        if ((int)local_1b8._4_4_ < iVar4) {
          uVar16 = ~local_1b8._4_4_ >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_1e8 = lVar20, local_1e0 = (longlong)iVar4,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
        pFVar6 = pFVar7 + lVar20 * 0x18;
        local_168 = *(undefined8 *)pFVar6;
        uStack_160 = *(undefined8 *)(pFVar6 + 8);
        local_158 = *(undefined8 *)(pFVar7 + lVar20 * 0x18 + 0x10);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar8 = *(code **)param_3;
        plVar19 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar19 = (longlong *)puVar2;
        }
        uVar18 = (**(code **)(*plVar19 + 8))();
        (*pcVar8)(&local_150,uVar18,&local_168);
        iVar4 = (param_1->Vertices).ArrayNum;
        local_80 = local_140;
        local_90 = local_150;
        uStack_88 = uStack_148;
        uVar16 = 0;
        if ((int)uVar15 < iVar4) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_1e8 = lVar23, local_1e0 = (longlong)iVar4,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        pFVar7 = (param_1->Vertices).AllocatorInstance.Data;
        pFVar6 = pFVar7 + lVar23 * 0x18;
        local_138 = *(undefined8 *)pFVar6;
        uStack_130 = *(undefined8 *)(pFVar6 + 8);
        local_128 = *(undefined8 *)(pFVar7 + lVar23 * 0x18 + 0x10);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar8 = *(code **)param_3;
        plVar19 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar19 = (longlong *)puVar2;
        }
        uVar18 = (**(code **)(*plVar19 + 8))();
        (*pcVar8)(&local_120,uVar18,&local_138);
        uVar26 = (undefined4)local_110;
        uVar27 = (undefined4)((ulonglong)local_110 >> 0x20);
        local_78 = local_120;
        uStack_74 = uStack_11c;
        uStack_70 = uStack_118;
        uStack_6c = uStack_114;
        lVar20 = local_1d8;
      }
      local_68 = CONCAT44(uVar27,uVar26);
      cVar14 = (**(code **)(local_1d0->_padding_ + 0x88))(local_1d0,&local_a8,local_1c8);
      if (cVar14 != '\0') {
        return true;
      }
      local_1d8 = lVar20 + 1;
      uVar22 = uVar22 + 1;
      lVar25 = lVar25 + 0xc;
    } while (local_1d8 < local_1c0);
  }
  return false;
}

// TestSelfIntersection @ 143552190

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestSelfIntersection
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,bool param_1,FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TreeTraversalImpl @ 1435521d0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::TreeTraversalImpl
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,int param_2,
          FTreeTraversal *param_3,FQueryOptions *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int local_res8 [2];
  int local_res10 [2];
  int local_98 [2];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  
  uVar15 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if ((int)uVar15 < this->TrianglesEnd) {
    local_res8[0] = param_2;
    local_res10[0] = param_1;
    local_98[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_3->BeginBoxTrianglesF);
    plVar5 = *(longlong **)&(param_3->BeginBoxTrianglesF).field_0x28;
    pcVar6 = *(code **)&param_3->BeginBoxTrianglesF;
    plVar13 = (longlong *)&(param_3->BeginBoxTrianglesF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar13 = plVar5;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar6)(uVar12,local_98,local_res8);
    uVar11 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
    if (0 < (int)uVar11) {
      uVar17 = (ulonglong)uVar11;
      do {
        uVar15 = uVar15 + 1;
        iVar16 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
        if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_1435522e6:
          local_res8[0] = iVar16;
          Core::Private::Function::CheckCallable(*(void **)&param_3->NextTriangleF);
          plVar5 = *(longlong **)&(param_3->NextTriangleF).field_0x28;
          pcVar6 = *(code **)&param_3->NextTriangleF;
          plVar13 = (longlong *)&(param_3->NextTriangleF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar13 = plVar5;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          (*pcVar6)(uVar12,local_res8);
        }
        else {
          local_res8[0] = iVar16;
          Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
          plVar5 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_4->TriangleFilterF;
          plVar13 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar13 = plVar5;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          cVar10 = (*pcVar6)(uVar12,local_res8);
          if (cVar10 != '\0') goto LAB_1435522e6;
        }
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    Core::Private::Function::CheckCallable(*(void **)&param_3->EndBoxTrianglesF);
    pcVar6 = *(code **)&param_3->EndBoxTrianglesF;
    plVar5 = *(longlong **)&(param_3->EndBoxTrianglesF).field_0x28;
    plVar13 = (longlong *)&(param_3->EndBoxTrianglesF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar13 = plVar5;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar6)(uVar12,local_res10);
  }
  else {
    pFVar7 = (this->BoxCenters).Blocks.AllocatorInstance.Data;
    uVar11 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
    if ((int)uVar11 < 0) {
      uVar11 = ~uVar11;
      uVar17 = (ulonglong)(uVar11 & 0x1ff);
      lVar8 = *(longlong *)(pFVar7 + (ulonglong)(uVar11 >> 9) * 8);
      local_78 = *(double *)(lVar8 + uVar17 * 0x18);
      lVar9 = *(longlong *)
               ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
      local_70 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
      local_68 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
      dVar1 = *(double *)(lVar9 + uVar17 * 0x18);
      dVar2 = *(double *)(lVar9 + 8 + uVar17 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = param_2 + 1;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar13 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar10 = (*pcVar6)(uVar12,&local_90,local_res10);
      if (cVar10 != '\0') {
        (**(code **)(this->_padding_ + 0x80))(this,uVar11,param_2 + 1,param_3,param_4);
      }
    }
    else {
      uVar14 = (ulonglong)(uVar11 - 1 >> 9);
      uVar17 = (ulonglong)(uVar11 - 1 & 0x1ff);
      iVar16 = param_2 + 1;
      lVar8 = *(longlong *)(pFVar7 + uVar14 * 8);
      local_78 = *(double *)(lVar8 + uVar17 * 0x18);
      local_70 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
      lVar9 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar14 * 8);
      local_68 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
      dVar1 = *(double *)(lVar9 + uVar17 * 0x18);
      dVar2 = *(double *)(lVar9 + 8 + uVar17 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = iVar16;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar13 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar10 = (*pcVar6)(uVar12,&local_90,local_res10);
      if (cVar10 != '\0') {
        (**(code **)(this->_padding_ + 0x80))(this,uVar11 - 1,iVar16,param_3,param_4);
      }
      iVar4 = *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar15 + 1 >> 9) * 8) + (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
      uVar15 = iVar4 - 1;
      uVar14 = (ulonglong)(uVar15 >> 9);
      uVar17 = (ulonglong)(iVar4 - 1U & 0x1ff);
      lVar8 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar14 * 8);
      local_78 = *(double *)(lVar8 + uVar17 * 0x18);
      lVar9 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar14 * 8);
      local_70 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
      local_68 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
      dVar1 = *(double *)(lVar9 + uVar17 * 0x18);
      dVar2 = *(double *)(lVar9 + 8 + uVar17 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = iVar16;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar13 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar10 = (*pcVar6)(uVar12,&local_90,local_res10);
      if (cVar10 != '\0') {
        (**(code **)(this->_padding_ + 0x80))(this,uVar15,iVar16,param_3,param_4);
      }
    }
  }
  return;
}

// box_box_distsqr @ 143557a10

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::box_box_distsqr
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,
          TAxisAlignedBox3<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  
  dVar7 = this->BoxEps;
  uVar6 = (ulonglong)(param_1 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_40 = *(double *)(lVar2 + uVar6 * 0x18);
  lVar3 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_38 = *(double *)(lVar2 + 8 + uVar6 * 0x18);
  local_30 = *(double *)(lVar2 + 0x10 + uVar6 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar6 * 0x18);
  dVar5 = dVar7 + *(double *)(lVar3 + 0x10 + uVar6 * 0x18);
  dVar4 = dVar7 + *pdVar1;
  dVar7 = dVar7 + pdVar1[1];
  local_58._s_0.X = local_40 - dVar4;
  local_40 = local_40 + dVar4;
  local_58._s_0.Y = local_38 - dVar7;
  local_38 = local_38 + dVar7;
  local_58._s_0.Z = local_30 - dVar5;
  local_30 = local_30 + dVar5;
  dVar7 = TAxisAlignedBox3<double>::DistanceSquared
                    ((TAxisAlignedBox3<double> *)&local_58._s_0,param_2);
  return dVar7;
}

// box_box_intersect @ 143557af0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::box_box_intersect
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,
          TAxisAlignedBox3<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  bool bVar9;
  ulonglong uVar10;
  double dVar11;
  
  dVar2 = this->BoxEps;
  uVar10 = (ulonglong)(param_1 & 0x1ff);
  lVar6 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar3 = *(double *)(lVar6 + 0x10 + uVar10 * 0x18);
  lVar7 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar4 = *(double *)(lVar6 + uVar10 * 0x18);
  dVar5 = *(double *)(lVar6 + 8 + uVar10 * 0x18);
  dVar11 = dVar2 + *(double *)(lVar7 + 0x10 + uVar10 * 0x18);
  pdVar1 = (double *)(lVar7 + uVar10 * 0x18);
  dVar8 = dVar2 + *pdVar1;
  dVar2 = dVar2 + pdVar1[1];
  if (((((param_2->Max).field0_0x0._s_0.X <= dVar4 - dVar8) ||
       (dVar4 + dVar8 <= (param_2->Min).field0_0x0._s_0.X)) ||
      ((param_2->Max).field0_0x0._s_0.Y <= dVar5 - dVar2)) ||
     (((dVar5 + dVar2 <= (param_2->Min).field0_0x0._s_0.Y ||
       ((param_2->Max).field0_0x0._s_0.Z <= dVar3 - dVar11)) ||
      (dVar3 + dVar11 <= (param_2->Min).field0_0x0._s_0.Z)))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  return bVar9;
}

// find_any_intersection @ 143557c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::find_any_intersection
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,TTriangle3<double> *param_2
          ,TAxisAlignedBox3<double> *param_3,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FColliderMesh *pFVar5;
  FScriptContainerElement *pFVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStackY_138 [32];
  uint local_108 [2];
  int local_100;
  TTriangle3<double> *local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_d8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_c8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar16 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_f0 = (ulonglong)uVar16;
  lVar14 = (ulonglong)(uVar16 & 0x1ff) * 4;
  lVar15 = *(longlong *)(pFVar2 + (ulonglong)(uVar16 >> 9) * 8);
  local_f8 = param_2;
  if ((int)uVar16 < this->TrianglesEnd) {
    local_100 = *(int *)(lVar14 + lVar15);
    if (0 < local_100) {
      uVar16 = uVar16 + 1;
      do {
        uVar1 = *(uint *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_143557d9b:
          pFVar5 = this->Mesh;
          uVar9 = 0;
          if ((int)uVar1 < (pFVar5->Triangles).ArrayNum) {
            uVar9 = ~uVar1 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            iVar10 = (*pcVar4)();
            return iVar10;
          }
          pFVar2 = (pFVar5->Triangles).AllocatorInstance.Data;
          local_e8 = *(longlong *)(pFVar2 + (longlong)(int)uVar1 * 0xc);
          iVar10 = *(int *)(pFVar2 + (longlong)(int)uVar1 * 0xc + 8);
          lVar14 = (longlong)(int)local_e8;
          if (((int)local_e8 < 0 || (pFVar5->Vertices).ArrayNum <= (int)local_e8) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            iVar10 = (*pcVar4)();
            return iVar10;
          }
          pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
          lVar15 = (longlong)local_e8._4_4_;
          pFVar2 = pFVar6 + lVar14 * 0x18;
          local_a8 = *(undefined8 *)pFVar2;
          uStack_a0 = *(undefined8 *)(pFVar2 + 8);
          local_98 = *(undefined8 *)(pFVar6 + lVar14 * 0x18 + 0x10);
          if ((local_e8 < 0 || (pFVar5->Vertices).ArrayNum <= local_e8._4_4_) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            iVar10 = (*pcVar4)();
            return iVar10;
          }
          pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
          pFVar2 = pFVar6 + lVar15 * 0x18;
          local_90 = *(undefined8 *)pFVar2;
          uStack_88 = *(undefined8 *)(pFVar2 + 8);
          local_80 = *(undefined8 *)(pFVar6 + lVar15 * 0x18 + 0x10);
          if ((iVar10 < 0 || (pFVar5->Vertices).ArrayNum <= iVar10) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            iVar10 = (*pcVar4)();
            return iVar10;
          }
          pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
          pFVar2 = pFVar6 + (longlong)iVar10 * 0x18;
          local_78 = *(undefined4 *)pFVar2;
          uStack_74 = *(undefined4 *)(pFVar2 + 4);
          uStack_70 = *(undefined4 *)(pFVar2 + 8);
          uStack_6c = *(undefined4 *)(pFVar2 + 0xc);
          local_68 = *(undefined8 *)(pFVar6 + (longlong)iVar10 * 0x18 + 0x10);
          cVar7 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_f8,&local_a8);
          if (cVar7 != '\0') {
            return uVar1;
          }
        }
        else {
          local_108[0] = uVar1;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar3 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar4 = *(code **)&param_5->TriangleFilterF;
          plVar13 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar13 = plVar3;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          cVar7 = (*pcVar4)(uVar12,local_108);
          if (cVar7 != '\0') goto LAB_143557d9b;
        }
        uVar16 = uVar16 + 1;
      } while ((int)(uVar16 - (int)local_f0) <= local_100);
    }
  }
  else {
    uVar1 = *(uint *)(lVar14 + lVar15);
    if (-1 < (int)uVar1) {
      iVar11 = -1;
      iVar10 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                       (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
      bVar8 = box_box_intersect(this,uVar1 - 1,param_3);
      if (bVar8) {
        local_c8._0_8_ = *(undefined8 *)param_4;
        local_c8._8_8_ = *(undefined8 *)&param_4->field_0x8;
        iVar11 = find_any_intersection(this,uVar1 - 1,param_2,param_3,&local_c8,param_5);
        if (iVar11 != -1) {
          return iVar11;
        }
      }
      bVar8 = box_box_intersect(this,iVar10 + -1,param_3);
      if (!bVar8) {
        return iVar11;
      }
      local_b8._0_8_ = *(undefined8 *)param_4;
      local_b8._8_8_ = *(undefined8 *)&param_4->field_0x8;
      iVar10 = find_any_intersection(this,iVar10 + -1,param_2,param_3,&local_b8,param_5);
      return iVar10;
    }
    bVar8 = box_box_intersect(this,~uVar1,param_3);
    if (bVar8) {
      local_d8._0_8_ = *(undefined8 *)param_4;
      local_d8._8_8_ = *(undefined8 *)&param_4->field_0x8;
      iVar10 = find_any_intersection(this,~uVar1,param_2,param_3,&local_d8,param_5);
      return iVar10;
    }
  }
  return -1;
}

// find_any_intersection @ 1435580d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::find_any_intersection
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,
          TMeshAABBTree3<UE::Geometry::FColliderMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_6,FQueryOptions *param_7,FQueryOptions *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  FColliderMesh *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined1 *puVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  undefined1 auStackY_368 [32];
  int local_2f4;
  int local_2f0 [2];
  uint local_2e8 [2];
  uint local_2e0;
  ulonglong local_2d8;
  undefined8 local_2d0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2c0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2b0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2a0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_290;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_280;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_270;
  TVector<double>_u_0 local_260;
  double local_248;
  double local_240;
  double local_238;
  TVector<double>_u_0 local_230;
  double local_218;
  double local_210;
  double local_208;
  TVector<double>_u_0 local_200;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  TAxisAlignedBox3<double> local_188;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  uVar26 = (ulonglong)((uint)param_1 >> 9);
  uVar25 = (ulonglong)(param_1 & 0x1ff);
  uVar17 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar26 * 8) +
                    uVar25 * 4);
  uVar19 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_2e0 = uVar17;
  if ((int)uVar17 < this->TrianglesEnd) {
    if ((int)uVar19 < param_2->TrianglesEnd) {
      local_2f4 = 1;
      iVar27 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4);
      iVar4 = *(int *)(*(longlong *)
                        ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
      if (iVar4 < 1) {
        return false;
      }
      do {
        uVar19 = uVar19 + 1;
        local_2d8 = (ulonglong)uVar19;
        iVar5 = *(int *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_143558277:
          FColliderMesh::GetTriVertices
                    (param_2->Mesh,iVar5,(TVector<double> *)&local_158._s_0,
                     (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_128._s_0);
          if (*(void **)param_3 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar7 = *(code **)param_3;
            puVar22 = &param_3->field_0x10;
            plVar20 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar20 = (longlong *)puVar22;
            }
            uVar18 = (**(code **)(*plVar20 + 8))();
            (*pcVar7)(&local_1d0,uVar18,&local_158);
            local_158._s_0.X = local_1d0;
            local_158._s_0.Y = dStack_1c8;
            local_158._s_0.Z = local_1c0;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar7 = *(code **)param_3;
            plVar20 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar20 = (longlong *)puVar22;
            }
            uVar18 = (**(code **)(*plVar20 + 8))();
            (*pcVar7)(&local_1b8,uVar18,&local_140);
            local_140._s_0.X = local_1b8;
            local_140._s_0.Y = dStack_1b0;
            local_140._s_0.Z = local_1a8;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar7 = *(code **)param_3;
            plVar20 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar20 = (longlong *)puVar22;
            }
            uVar18 = (**(code **)(*plVar20 + 8))();
            (*pcVar7)(&local_1a0,uVar18,&local_128);
            local_128._s_0.X = local_1a0;
            local_128._s_0.Y = dStack_198;
            local_128._s_0.Z = local_190;
          }
          if (0 < iVar27) {
            uVar19 = uVar17 + 1;
            do {
              uVar6 = *(uint *)(*(longlong *)
                                 ((this->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
              if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_143558409:
                pFVar8 = this->Mesh;
                uVar17 = 0;
                if ((int)uVar6 < (pFVar8->Triangles).ArrayNum) {
                  uVar17 = ~uVar6 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  uVar16 = (*pcVar7)();
                  return (bool)uVar16;
                }
                pFVar9 = (pFVar8->Triangles).AllocatorInstance.Data;
                local_2d0 = *(longlong *)(pFVar9 + (longlong)(int)uVar6 * 0xc);
                iVar5 = *(int *)(pFVar9 + (longlong)(int)uVar6 * 0xc + 8);
                lVar23 = (longlong)(int)local_2d0;
                if (((int)local_2d0 < 0 || (pFVar8->Vertices).ArrayNum <= (int)local_2d0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  uVar16 = (*pcVar7)();
                  return (bool)uVar16;
                }
                pFVar10 = (pFVar8->Vertices).AllocatorInstance.Data;
                lVar24 = (longlong)local_2d0._4_4_;
                pFVar9 = pFVar10 + lVar23 * 0x18;
                local_108 = *(undefined8 *)pFVar9;
                uStack_100 = *(undefined8 *)(pFVar9 + 8);
                local_f8 = *(undefined8 *)(pFVar10 + lVar23 * 0x18 + 0x10);
                if ((local_2d0 < 0 || (pFVar8->Vertices).ArrayNum <= local_2d0._4_4_) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  uVar16 = (*pcVar7)();
                  return (bool)uVar16;
                }
                pFVar10 = (pFVar8->Vertices).AllocatorInstance.Data;
                pFVar9 = pFVar10 + lVar24 * 0x18;
                local_f0 = *(undefined8 *)pFVar9;
                uStack_e8 = *(undefined8 *)(pFVar9 + 8);
                local_e0 = *(undefined8 *)(pFVar10 + lVar24 * 0x18 + 0x10);
                if ((iVar5 < 0 || (pFVar8->Vertices).ArrayNum <= iVar5) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar7 = (code *)swi(3);
                  uVar16 = (*pcVar7)();
                  return (bool)uVar16;
                }
                pFVar10 = (pFVar8->Vertices).AllocatorInstance.Data;
                pFVar9 = pFVar10 + (longlong)iVar5 * 0x18;
                local_d8 = *(undefined4 *)pFVar9;
                uStack_d4 = *(undefined4 *)(pFVar9 + 4);
                uStack_d0 = *(undefined4 *)(pFVar9 + 8);
                uStack_cc = *(undefined4 *)(pFVar9 + 0xc);
                local_c8 = *(undefined8 *)(pFVar10 + (longlong)iVar5 * 0x18 + 0x10);
                cVar14 = (**(code **)param_6)
                                   (*(undefined8 *)&param_6->field_0x8,&local_158,&local_108);
                uVar17 = local_2e0;
                if (cVar14 != '\0') {
                  return true;
                }
              }
              else {
                local_2e8[0] = uVar6;
                Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                plVar20 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                pcVar7 = *(code **)&param_7->TriangleFilterF;
                plVar21 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                if (plVar20 != (longlong *)0x0) {
                  plVar21 = plVar20;
                }
                uVar18 = (**(code **)(*plVar21 + 8))();
                cVar14 = (*pcVar7)(uVar18,local_2e8);
                if (cVar14 != '\0') goto LAB_143558409;
              }
              uVar19 = uVar19 + 1;
            } while ((int)(uVar19 - uVar17) <= iVar27);
          }
        }
        else {
          local_2f0[0] = iVar5;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar20 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar7 = *(code **)&param_8->TriangleFilterF;
          plVar21 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar20 != (longlong *)0x0) {
            plVar21 = plVar20;
          }
          uVar18 = (**(code **)(*plVar21 + 8))();
          cVar14 = (*pcVar7)(uVar18,local_2f0);
          if (cVar14 != '\0') goto LAB_143558277;
        }
        local_2f4 = local_2f4 + 1;
        uVar19 = (uint)local_2d8;
        if (iVar4 < local_2f4) {
          return false;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar19 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_188,param_4,param_3);
    pFVar9 = (this->IndexList).Blocks.AllocatorInstance.Data;
    uVar19 = *(uint *)(*(longlong *)(pFVar9 + (ulonglong)(uVar17 >> 9) * 8) +
                      (ulonglong)(uVar17 & 0x1ff) * 4);
    if ((int)uVar19 < 0) {
      bVar15 = box_box_intersect(this,~uVar19,&local_188);
      if (!bVar15) {
        return false;
      }
      local_290._0_8_ = *(undefined8 *)param_6;
      local_290._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar15 = find_any_intersection
                         (this,~uVar19,param_2,param_3,param_4,param_5 + 1,&local_290,param_7,
                          param_8);
      return bVar15;
    }
    iVar27 = *(int *)(*(longlong *)(pFVar9 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                     (ulonglong)(uVar17 + 1 & 0x1ff) * 4) + -1;
    bVar15 = box_box_intersect(this,uVar19 - 1,&local_188);
    if (bVar15) {
      local_280._0_8_ = *(undefined8 *)param_6;
      local_280._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar15 = find_any_intersection
                         (this,uVar19 - 1,param_2,param_3,param_4,param_5 + 1,&local_280,param_7,
                          param_8);
      if (bVar15) {
        return true;
      }
    }
    bVar15 = box_box_intersect(this,iVar27,&local_188);
    if (bVar15) {
      local_270._0_8_ = *(undefined8 *)param_6;
      local_270._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar15 = find_any_intersection
                         (this,iVar27,param_2,param_3,param_4,param_5 + 1,&local_270,param_7,param_8
                         );
      return bVar15;
    }
    return false;
  }
  lVar23 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar26 * 8);
  dVar1 = *(double *)(lVar23 + uVar25 * 0x18);
  lVar24 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar26 * 8);
  dVar2 = *(double *)(lVar23 + 8 + uVar25 * 0x18);
  dVar3 = *(double *)(lVar23 + 0x10 + uVar25 * 0x18);
  dVar11 = dVar1 - *(double *)(lVar24 + uVar25 * 0x18);
  dVar12 = dVar2 - *(double *)(lVar24 + 8 + uVar25 * 0x18);
  dVar13 = dVar3 - *(double *)(lVar24 + 0x10 + uVar25 * 0x18);
  dVar1 = dVar1 + *(double *)(lVar24 + uVar25 * 0x18);
  dVar2 = dVar2 + *(double *)(lVar24 + 8 + uVar25 * 0x18);
  dVar3 = dVar3 + *(double *)(lVar24 + 0x10 + uVar25 * 0x18);
  pFVar9 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
  uVar17 = *(uint *)(*(longlong *)(pFVar9 + (ulonglong)(uVar19 >> 9) * 8) +
                    (ulonglong)(uVar19 & 0x1ff) * 4);
  if ((int)uVar17 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_260._s_0,~uVar17,param_3);
    if (((local_260._s_0.X < dVar1) && (dVar11 < local_248)) &&
       ((local_260._s_0.Y < dVar2 &&
        (((dVar12 < local_240 && (local_260._s_0.Z < dVar3)) && (dVar13 < local_238)))))) {
      local_2c0._0_8_ = *(undefined8 *)param_6;
      local_2c0._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar15 = find_any_intersection
                         (this,param_1,param_2,param_3,param_4,param_5 + 1,&local_2c0,param_7,
                          param_8);
      return bVar15;
    }
    return false;
  }
  iVar27 = *(int *)(*(longlong *)(pFVar9 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                   (ulonglong)(uVar19 + 1 & 0x1ff) * 4) + -1;
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_230._s_0,uVar17 - 1,param_3);
  if ((((local_230._s_0.X < dVar1) && (dVar11 < local_218)) && (local_230._s_0.Y < dVar2)) &&
     (((dVar12 < local_210 && (local_230._s_0.Z < dVar3)) && (dVar13 < local_208)))) {
    local_2b0._0_8_ = *(undefined8 *)param_6;
    local_2b0._8_8_ = *(undefined8 *)&param_6->field_0x8;
    bVar15 = find_any_intersection
                       (this,param_1,param_2,param_3,uVar17 - 1,param_5 + 1,&local_2b0,param_7,
                        param_8);
    if (bVar15) {
      return true;
    }
  }
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_200._s_0,iVar27,param_3);
  if (dVar1 <= local_200._s_0.X) {
    return false;
  }
  if (local_1e8 <= dVar11) {
    return false;
  }
  if (dVar2 <= local_200._s_0.Y) {
    return false;
  }
  if (local_1e0 <= dVar12) {
    return false;
  }
  if (local_200._s_0.Z < dVar3) {
    if (dVar13 < local_1d8) {
      local_2a0._0_8_ = *(undefined8 *)param_6;
      local_2a0._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar15 = find_any_intersection
                         (this,param_1,param_2,param_3,iVar27,param_5 + 1,&local_2a0,param_7,param_8
                         );
      return bVar15;
    }
    return false;
  }
  return false;
}

// find_intersections @ 143558a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::find_intersections
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,
          TMeshAABBTree3<UE::Geometry::FColliderMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,FIntersectionsQueryResult *param_6,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_7,
          FQueryOptions *param_8,FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  FColliderMesh *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *pTVar15;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar16;
  char cVar17;
  bool bVar18;
  uint uVar19;
  undefined8 uVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_4e8 [32];
  FIntersectionsQueryResult *pFVar32;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar33;
  int local_498 [2];
  FIntersectionsQueryResult *local_490;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *local_488;
  FQueryOptions *local_480;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_478;
  uint local_470;
  uint local_46c;
  uint local_468 [2];
  int local_460;
  ulonglong local_458;
  ulonglong local_450;
  ulonglong local_448;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_440;
  undefined8 local_438;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_428;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_418;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_408;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3f8;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3e8;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3d8;
  TVector<double>_u_0 local_3c8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  TVector<double>_u_0 local_398;
  double local_380;
  double local_378;
  double local_370;
  TVector<double>_u_0 local_368;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double dStack_330;
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  double local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  TAxisAlignedBox3<double> local_298;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  ulonglong local_15c;
  undefined4 local_154;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_490 = param_6;
  local_480 = param_9;
  uVar28 = (ulonglong)((uint)param_1 >> 9);
  uVar27 = (ulonglong)(param_1 & 0x1ff);
  local_440 = param_7;
  uVar29 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar28 * 8) +
                    uVar27 * 4);
  uVar21 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_498[0] = param_1;
  local_488 = param_2;
  local_478 = param_3;
  local_470 = uVar29;
  if ((int)uVar29 < this->TrianglesEnd) {
    if ((int)uVar21 < param_2->TrianglesEnd) {
      local_46c = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 4);
      uVar29 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
      local_448 = (ulonglong)uVar29;
      if ((int)uVar29 < 1) {
        return;
      }
      do {
        uVar21 = uVar21 + 1;
        local_450 = (ulonglong)uVar21;
        iVar24 = *(int *)(*(longlong *)
                           ((local_488->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
        local_460 = iVar24;
        if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_143558c3f:
          FColliderMesh::GetTriVertices
                    (local_488->Mesh,iVar24,(TVector<double> *)&local_248._s_0,
                     (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
          pTVar16 = local_478;
          if (*(void **)local_478 == (void *)0x0) {
            uVar30 = SUB84(local_218._s_0.Z,0);
            uVar31 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
          }
          else {
            Core::Private::Function::CheckCallable(*(void **)local_478);
            puVar1 = &pTVar16->field_0x10;
            pcVar6 = *(code **)pTVar16;
            plVar22 = *(longlong **)&pTVar16->field_0x28;
            if (*(longlong **)&pTVar16->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar1;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar6)(&local_338,uVar20,&local_248);
            local_248._s_0.X = local_338;
            local_248._s_0.Y = dStack_330;
            local_248._s_0.Z = local_328;
            Core::Private::Function::CheckCallable(*(void **)pTVar16);
            pcVar6 = *(code **)pTVar16;
            plVar22 = *(longlong **)&pTVar16->field_0x28;
            if (*(longlong **)&pTVar16->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar1;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar6)(&local_320,uVar20,&TStack_230);
            TStack_230._s_0.X = local_320;
            TStack_230._s_0.Y = dStack_318;
            TStack_230._s_0.Z = local_310;
            Core::Private::Function::CheckCallable(*(void **)pTVar16);
            pcVar6 = *(code **)pTVar16;
            plVar22 = *(longlong **)&pTVar16->field_0x28;
            if (*(longlong **)&pTVar16->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar1;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar6)(&local_308,uVar20,&local_218);
            uVar30 = SUB84(local_2f8,0);
            uVar31 = (undefined4)((ulonglong)local_2f8 >> 0x20);
            local_218._0_4_ = local_308;
            local_218._4_4_ = uStack_304;
            local_218._8_4_ = uStack_300;
            local_218._12_4_ = uStack_2fc;
            local_218._16_8_ = local_2f8;
          }
          local_1f8._s_0.X = local_248._s_0.X;
          local_1f8._s_0.Y = local_248._s_0.Y;
          local_1d8 = TStack_230._s_0.Y;
          dStack_1d0 = TStack_230._s_0.Z;
          local_15c = local_15c & 0xffffffff00000000;
          local_1f8._s_0.Z = local_248._s_0.Z;
          dStack_1e0 = TStack_230._s_0.X;
          local_1b8 = CONCAT44(uVar31,uVar30);
          uVar29 = local_470;
          uVar27 = (ulonglong)local_46c;
          local_1c8 = local_218._0_4_;
          uStack_1c4 = local_218._4_4_;
          uStack_1c0 = local_218._8_4_;
          uStack_1bc = local_218._12_4_;
          if (0 < (int)local_46c) {
            do {
              local_458 = uVar27;
              uVar29 = uVar29 + 1;
              uVar21 = *(uint *)(*(longlong *)
                                  ((this->IndexList).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 4);
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_143558e2b:
                pFVar7 = this->Mesh;
                uVar19 = 0;
                if ((int)uVar21 < (pFVar7->Triangles).ArrayNum) {
                  uVar19 = ~uVar21 >> 0x1f;
                }
                if ((uVar19 == 0) &&
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
                pFVar8 = (pFVar7->Triangles).AllocatorInstance.Data;
                local_438 = *(longlong *)(pFVar8 + (longlong)(int)uVar21 * 0xc);
                iVar24 = *(int *)(pFVar8 + (longlong)(int)uVar21 * 0xc + 8);
                lVar25 = (longlong)(int)local_438;
                if (((int)local_438 < 0 || (pFVar7->Vertices).ArrayNum <= (int)local_438) &&
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
                pFVar9 = (pFVar7->Vertices).AllocatorInstance.Data;
                lVar26 = (longlong)local_438._4_4_;
                pFVar8 = pFVar9 + lVar25 * 0x18;
                local_2e8 = *(undefined8 *)pFVar8;
                uStack_2e0 = *(undefined8 *)(pFVar8 + 8);
                local_2d8 = *(undefined8 *)(pFVar9 + lVar25 * 0x18 + 0x10);
                if ((local_438 < 0 || (pFVar7->Vertices).ArrayNum <= local_438._4_4_) &&
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
                pFVar9 = (pFVar7->Vertices).AllocatorInstance.Data;
                pFVar8 = pFVar9 + lVar26 * 0x18;
                uStack_2d0 = *(undefined8 *)pFVar8;
                uStack_2c8 = *(undefined8 *)(pFVar8 + 8);
                uStack_2c0 = *(undefined8 *)(pFVar9 + lVar26 * 0x18 + 0x10);
                if ((iVar24 < 0 || (pFVar7->Vertices).ArrayNum <= iVar24) &&
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
                pFVar9 = (pFVar7->Vertices).AllocatorInstance.Data;
                pFVar8 = pFVar9 + (longlong)iVar24 * 0x18;
                local_2b8 = *(undefined4 *)pFVar8;
                uStack_2b4 = *(undefined4 *)(pFVar8 + 4);
                uStack_2b0 = *(undefined4 *)(pFVar8 + 8);
                uStack_2ac = *(undefined4 *)(pFVar8 + 0xc);
                local_2a8 = *(undefined8 *)(pFVar9 + (longlong)iVar24 * 0x18 + 0x10);
                local_1b0 = local_2e8;
                uStack_1a8 = uStack_2e0;
                local_15c = local_15c & 0xffffffff00000000;
                local_190 = (undefined4)uStack_2c8;
                uStack_18c = uStack_2c8._4_4_;
                uStack_188 = (undefined4)uStack_2c0;
                uStack_184 = uStack_2c0._4_4_;
                local_1a0 = (undefined4)local_2d8;
                uStack_19c = local_2d8._4_4_;
                uStack_198 = (undefined4)uStack_2d0;
                uStack_194 = uStack_2d0._4_4_;
                local_180 = local_2b8;
                uStack_17c = uStack_2b4;
                uStack_178 = uStack_2b0;
                uStack_174 = uStack_2ac;
                local_170 = local_2a8;
                cVar17 = (**(code **)local_440)(*(undefined8 *)&local_440->field_0x8,&local_1f8);
                if (cVar17 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,uVar21,local_460,
                             local_490);
                }
              }
              else {
                local_468[0] = uVar21;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar22 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar6 = *(code **)&param_8->TriangleFilterF;
                plVar23 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar22 != (longlong *)0x0) {
                  plVar23 = plVar22;
                }
                uVar20 = (**(code **)(*plVar23 + 8))();
                cVar17 = (*pcVar6)(uVar20,local_468);
                if (cVar17 != '\0') goto LAB_143558e2b;
              }
              uVar27 = local_458 - 1;
            } while (local_458 - 1 != 0);
            local_458 = 0;
            param_9 = local_480;
          }
        }
        else {
          local_498[0] = iVar24;
          Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
          plVar22 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_9->TriangleFilterF;
          plVar23 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
          if (plVar22 != (longlong *)0x0) {
            plVar23 = plVar22;
          }
          uVar20 = (**(code **)(*plVar23 + 8))();
          cVar17 = (*pcVar6)(uVar20,local_498);
          if (cVar17 != '\0') goto LAB_143558c3f;
        }
        uVar21 = (uint)local_450;
        local_448 = local_448 - 1;
        if (local_448 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar21 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_298,param_4,param_3);
    uVar29 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 4);
    if ((int)uVar29 < 0) {
      bVar18 = box_box_intersect(this,~uVar29,&local_298);
      if (!bVar18) {
        return;
      }
      local_3f8._0_8_ = *(undefined8 *)param_7;
      local_3f8._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,~uVar29,local_488,local_478,param_4,param_5 + 1,local_490,&local_3f8,
                         param_8,local_480);
      return;
    }
    bVar18 = box_box_intersect(this,uVar29 - 1,&local_298);
    pTVar15 = local_488;
    if (bVar18) {
      local_3e8._0_8_ = *(undefined8 *)param_7;
      local_3e8._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,uVar29 - 1,local_488,local_478,param_4,param_5 + 1,local_490,
                         &local_3e8,param_8,local_480);
    }
    iVar24 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(local_470 + 1 >> 9) * 8) + (ulonglong)(local_470 + 1 & 0x1ff) * 4
                     );
    bVar18 = box_box_intersect(this,iVar24 + -1,&local_298);
    if (!bVar18) {
      return;
    }
    local_3d8._0_8_ = *(undefined8 *)param_7;
    local_3d8._8_8_ = *(undefined8 *)&param_7->field_0x8;
    find_intersections(this,iVar24 + -1,pTVar15,local_478,param_4,param_5 + 1,local_490,&local_3d8,
                       param_8,local_480);
    return;
  }
  dVar3 = this->BoxEps;
  lVar25 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar28 * 8);
  dVar4 = *(double *)(lVar25 + 8 + uVar27 * 0x18);
  lVar26 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar28 * 8);
  dVar5 = *(double *)(lVar25 + 0x10 + uVar27 * 0x18);
  pdVar2 = (double *)(lVar26 + uVar27 * 0x18);
  dVar10 = dVar3 + *(double *)(lVar26 + 0x10 + uVar27 * 0x18);
  dVar11 = dVar3 + *pdVar2;
  dVar3 = dVar3 + pdVar2[1];
  dVar14 = dVar5 - dVar10;
  dVar12 = *(double *)(lVar25 + uVar27 * 0x18) - dVar11;
  dVar11 = dVar11 + *(double *)(lVar25 + uVar27 * 0x18);
  dVar13 = dVar4 - dVar3;
  dVar4 = dVar4 + dVar3;
  dVar5 = dVar5 + dVar10;
  uVar29 = *(uint *)(*(longlong *)
                      ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
  if ((int)uVar29 < 0) {
    uVar29 = ~uVar29;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3c8._s_0,uVar29,param_3);
    if (dVar11 <= local_3c8._s_0.X) {
      return;
    }
    if (local_3b0 <= dVar12) {
      return;
    }
    if (dVar4 <= local_3c8._s_0.Y) {
      return;
    }
    if (local_3a8 <= dVar13) {
      return;
    }
    if (dVar5 <= local_3c8._s_0.Z) {
      return;
    }
    if (local_3a0 <= dVar14) {
      return;
    }
    local_428._0_8_ = *(undefined8 *)param_7;
    pTVar33 = &local_428;
    local_428._8_8_ = *(undefined8 *)&param_7->field_0x8;
    iVar24 = local_498[0];
    pFVar32 = local_490;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_398._s_0,uVar29 - 1,param_3);
    pFVar32 = local_490;
    iVar24 = local_498[0];
    if ((((local_398._s_0.X < dVar11) && (dVar12 < local_380)) && (local_398._s_0.Y < dVar4)) &&
       (((dVar13 < local_378 && (local_398._s_0.Z < dVar5)) && (dVar14 < local_370)))) {
      local_418._0_8_ = *(undefined8 *)param_7;
      local_418._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,local_498[0],local_488,local_478,uVar29 - 1,param_5 + 1,local_490,
                         &local_418,param_8,local_480);
    }
    uVar29 = *(int *)(*(longlong *)
                       ((local_488->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar21 + 1 >> 9) * 8) + (ulonglong)(uVar21 + 1 & 0x1ff) * 4) - 1;
    GetBox(local_488,(TAxisAlignedBox3<double> *)&local_368._s_0,uVar29,local_478);
    if (dVar11 <= local_368._s_0.X) {
      return;
    }
    if (local_350 <= dVar12) {
      return;
    }
    if (dVar4 <= local_368._s_0.Y) {
      return;
    }
    if (local_348 <= dVar13) {
      return;
    }
    if (dVar5 <= local_368._s_0.Z) {
      return;
    }
    if (local_340 <= dVar14) {
      return;
    }
    local_408._0_8_ = *(undefined8 *)param_7;
    pTVar33 = &local_408;
    local_408._8_8_ = *(undefined8 *)&param_7->field_0x8;
  }
  find_intersections(this,iVar24,local_488,local_478,uVar29,param_5 + 1,pFVar32,pTVar33,param_8,
                     local_480);
  return;
}

// find_nearest_triangles @ 143559560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::find_nearest_triangles
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,
          TMeshAABBTree3<UE::Geometry::FColliderMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,double *param_6,FIndex2i *param_7,FQueryOptions *param_8,
          FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  FColliderMesh *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FIndex2i_u_0 FVar14;
  char cVar15;
  bool bVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStackY_488 [32];
  ulonglong local_410;
  int local_408 [2];
  uint local_400;
  uint local_3f8 [2];
  int local_3f0;
  uint local_3ec;
  int iStack_3e8;
  ulonglong local_3e0;
  ulonglong local_3d8;
  ulonglong local_3d0;
  undefined8 local_3c8;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  TVector<double>_u_0 local_3a0;
  double local_388;
  double local_380;
  double local_378;
  TVector<double>_u_0 local_370;
  double local_358;
  double local_350;
  double local_348;
  TVector<double>_u_0 local_340;
  double local_328;
  double local_320;
  double local_318;
  TVector<double>_u_0 local_310;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TDistTriangle3Triangle3<double> local_1f8;
  ulonglong local_f8;
  
  dVar10 = __real_3fd0000000000000;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_488;
  iVar23 = param_5 + 1;
LAB_143559640:
  do {
    while( true ) {
      dVar33 = __real_bff0000000000000;
      uVar26 = (ulonglong)(param_1 & 0x1ff);
      uVar20 = (ulonglong)((uint)param_1 >> 9);
      uVar4 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar20 * 8)
                       + uVar26 * 4);
      uVar19 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar4 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar19)) goto LAB_1435598a7;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3a0._s_0,param_4,param_3);
      pFVar8 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar19 = *(uint *)(*(longlong *)(pFVar8 + (ulonglong)(uVar4 >> 9) * 8) +
                        (ulonglong)(uVar4 & 0x1ff) * 4);
      if ((int)uVar19 < 0) {
        dStack_3b0 = this->BoxEps;
        param_1 = ~uVar19;
        uVar20 = (ulonglong)(param_1 & 0x1ff);
        lVar24 = *(longlong *)
                  ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar33 = *(double *)(lVar24 + uVar20 * 0x18);
        dVar31 = *(double *)(lVar24 + 8 + uVar20 * 0x18);
        lVar25 = *(longlong *)
                  ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar3 = *(double *)(lVar24 + 0x10 + uVar20 * 0x18);
        pdVar2 = (double *)(lVar25 + uVar20 * 0x18);
        local_3a8 = *(double *)(lVar25 + 0x10 + uVar20 * 0x18) + dStack_3b0;
        local_3b8 = *pdVar2 + dStack_3b0;
        dStack_3b0 = pdVar2[1] + dStack_3b0;
        dVar32 = dVar3 + local_3a8;
        dVar3 = dVar3 - local_3a8;
        dVar30 = dVar33 - local_3b8;
        dVar29 = dVar31 - dStack_3b0;
        dVar31 = dVar31 + dStack_3b0;
        dVar33 = dVar33 + local_3b8;
        dVar12 = (local_3a0._s_0.X + local_388) - (dVar33 + dVar30);
        dVar33 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar17,SUB84(dVar12,0) & uVar5
                                 ) - ((local_388 - local_3a0._s_0.X) + (dVar33 - dVar30));
        if (dVar33 <= 0.0) {
          dVar33 = 0.0;
        }
        dVar30 = (local_3a0._s_0.Y + local_380) - (dVar31 + dVar29);
        dVar31 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar17,SUB84(dVar30,0) & uVar5
                                 ) - ((local_380 - local_3a0._s_0.Y) + (dVar31 - dVar29));
        if (dVar31 <= 0.0) {
          dVar31 = 0.0;
        }
        dVar30 = (local_3a0._s_0.Z + local_378) - (dVar32 + dVar3);
        dVar3 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar17,SUB84(dVar30,0) & uVar5)
                - ((dVar32 - dVar3) + (local_378 - local_3a0._s_0.Z));
        if (dVar3 <= 0.0) {
          dVar3 = 0.0;
        }
        bVar16 = (dVar31 * dVar31 + dVar33 * dVar33 + dVar3 * dVar3) * dVar10 < *param_6;
        goto LAB_143559e98;
      }
      uVar19 = uVar19 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar8 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                        (ulonglong)(uVar4 + 1 & 0x1ff) * 4) - 1;
      dVar33 = box_box_distsqr(this,uVar19,(TAxisAlignedBox3<double> *)&local_3a0._s_0);
      dVar31 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_3a0._s_0);
      if (dVar31 < dVar33) {
        if (dVar31 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar23,param_6,param_7,param_8,param_9);
        }
        bVar16 = dVar33 < *param_6;
        param_1 = uVar19;
        goto LAB_143559e98;
      }
      if (dVar33 < *param_6) {
        find_nearest_triangles
                  (this,uVar19,param_2,param_3,param_4,iVar23,param_6,param_7,param_8,param_9);
      }
      if (*param_6 <= dVar31) {
        return;
      }
      param_5 = param_5 + 1;
      iVar23 = iVar23 + 1;
    }
    if ((int)uVar19 < param_2->TrianglesEnd) {
      local_400 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
      uVar5 = *(uint *)(*(longlong *)
                         ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
      local_410 = (ulonglong)uVar5;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      if ((int)uVar5 < 1) {
        return;
      }
      break;
    }
LAB_1435598a7:
    lVar24 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar20 * 8);
    dVar33 = *(double *)(lVar24 + uVar26 * 0x18);
    lVar25 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar20 * 8);
    dVar31 = *(double *)(lVar24 + 8 + uVar26 * 0x18);
    dVar3 = *(double *)(lVar24 + 0x10 + uVar26 * 0x18);
    pFVar8 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar30 = dVar33 - *(double *)(lVar25 + uVar26 * 0x18);
    dVar29 = dVar31 - *(double *)(lVar25 + 8 + uVar26 * 0x18);
    dVar32 = dVar3 - *(double *)(lVar25 + 0x10 + uVar26 * 0x18);
    dVar33 = dVar33 + *(double *)(lVar25 + uVar26 * 0x18);
    dVar31 = dVar31 + *(double *)(lVar25 + 8 + uVar26 * 0x18);
    dVar3 = dVar3 + *(double *)(lVar25 + 0x10 + uVar26 * 0x18);
    dVar12 = dVar33 - dVar30;
    dVar33 = dVar33 + dVar30;
    dVar30 = dVar31 + dVar29;
    dVar31 = dVar31 - dVar29;
    dVar29 = dVar3 + dVar32;
    dVar3 = dVar3 - dVar32;
    uVar4 = *(uint *)(*(longlong *)(pFVar8 + (ulonglong)(uVar19 >> 9) * 8) +
                     (ulonglong)(uVar19 & 0x1ff) * 4);
    if ((int)uVar4 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_370._s_0,~uVar4,param_3);
      dVar33 = dVar33 - (local_370._s_0.X + local_358);
      dVar33 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar17,SUB84(dVar33,0) & uVar5)
               - ((local_358 - local_370._s_0.X) + dVar12);
      if (dVar33 <= 0.0) {
        dVar33 = 0.0;
      }
      dVar30 = dVar30 - (local_370._s_0.Y + local_350);
      dVar31 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar17,SUB84(dVar30,0) & uVar5)
               - ((local_350 - local_370._s_0.Y) + dVar31);
      if (dVar31 <= 0.0) {
        dVar31 = 0.0;
      }
      dVar29 = dVar29 - (local_370._s_0.Z + local_348);
      dVar3 = (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar17,SUB84(dVar29,0) & uVar5) -
              ((local_348 - local_370._s_0.Z) + dVar3);
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      bVar16 = (dVar31 * dVar31 + dVar33 * dVar33 + dVar3 * dVar3) * dVar10 < *param_6;
      param_4 = ~uVar4;
    }
    else {
      uVar4 = uVar4 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar8 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                        (ulonglong)(uVar19 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_340._s_0,uVar4,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_310._s_0,param_4,param_3);
      dVar32 = dVar33 - (local_340._s_0.X + local_328);
      dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar17,SUB84(dVar32,0) & uVar5)
               - ((local_328 - local_340._s_0.X) + dVar12);
      if (dVar32 <= 0.0) {
        dVar32 = 0.0;
      }
      dVar13 = dVar30 - (local_340._s_0.Y + local_320);
      dVar13 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar17,SUB84(dVar13,0) & uVar5)
               - ((local_320 - local_340._s_0.Y) + dVar31);
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      dVar11 = dVar29 - (local_340._s_0.Z + local_318);
      dVar11 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar17,SUB84(dVar11,0) & uVar5)
               - ((local_318 - local_340._s_0.Z) + dVar3);
      if (dVar11 <= 0.0) {
        dVar11 = 0.0;
      }
      dVar33 = dVar33 - (local_310._s_0.X + local_2f8);
      dVar33 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar17,SUB84(dVar33,0) & uVar5)
               - ((local_2f8 - local_310._s_0.X) + dVar12);
      if (dVar33 <= 0.0) {
        dVar33 = 0.0;
      }
      dVar30 = dVar30 - (local_310._s_0.Y + local_2f0);
      dVar12 = (dVar13 * dVar13 + dVar32 * dVar32 + dVar11 * dVar11) * dVar10;
      dVar31 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar17,SUB84(dVar30,0) & uVar5)
               - ((local_2f0 - local_310._s_0.Y) + dVar31);
      if (dVar31 <= 0.0) {
        dVar31 = 0.0;
      }
      dVar29 = dVar29 - (local_310._s_0.Z + local_2e8);
      dVar3 = (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar17,SUB84(dVar29,0) & uVar5) -
              ((local_2e8 - local_310._s_0.Z) + dVar3);
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      dVar33 = (dVar31 * dVar31 + dVar33 * dVar33 + dVar3 * dVar3) * dVar10;
      if (dVar12 <= dVar33) {
        if (dVar12 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar4,iVar23,param_6,param_7,param_8,param_9);
        }
        if (*param_6 <= dVar33) {
          return;
        }
        param_5 = param_5 + 1;
        iVar23 = iVar23 + 1;
        goto LAB_143559640;
      }
      if (dVar33 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar23,param_6,param_7,param_8,param_9);
      }
      bVar16 = dVar12 < *param_6;
      param_4 = uVar4;
    }
LAB_143559e98:
    if (!bVar16) {
      return;
    }
    param_5 = param_5 + 1;
    iVar23 = iVar23 + 1;
  } while( true );
LAB_143559710:
  uVar19 = uVar19 + 1;
  local_3d0 = (ulonglong)uVar19;
  iVar23 = *(int *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
  local_3f0 = iVar23;
  if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14355976d:
    FColliderMesh::GetTriVertices
              (param_2->Mesh,iVar23,(TVector<double> *)&local_248._s_0,
               (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 == (void *)0x0) {
      uVar27 = SUB84(local_218._s_0.Z,0);
      uVar28 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
    }
    else {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar1 = &param_3->field_0x10;
      pcVar6 = *(code **)param_3;
      plVar21 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar21 = (longlong *)puVar1;
      }
      uVar18 = (**(code **)(*plVar21 + 8))();
      (*pcVar6)(&local_2e0,uVar18,&local_248);
      local_248._s_0.X = local_2e0;
      local_248._s_0.Y = dStack_2d8;
      local_248._s_0.Z = local_2d0;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar6 = *(code **)param_3;
      plVar21 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar21 = (longlong *)puVar1;
      }
      uVar18 = (**(code **)(*plVar21 + 8))();
      (*pcVar6)(&local_2c8,uVar18,&TStack_230);
      TStack_230._s_0.X = local_2c8;
      TStack_230._s_0.Y = dStack_2c0;
      TStack_230._s_0.Z = local_2b8;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar6 = *(code **)param_3;
      plVar21 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar21 = (longlong *)puVar1;
      }
      uVar18 = (**(code **)(*plVar21 + 8))();
      (*pcVar6)(&local_2b0,uVar18,&local_218);
      uVar27 = SUB84(local_2a0,0);
      uVar28 = (undefined4)((ulonglong)local_2a0 >> 0x20);
      local_218._0_4_ = local_2b0;
      local_218._4_4_ = uStack_2ac;
      local_218._8_4_ = uStack_2a8;
      local_218._12_4_ = uStack_2a4;
      local_218._16_8_ = local_2a0;
    }
    local_1f8.DistanceSquared = dVar33;
    local_1f8.Triangle[0].V[2].field0_0x0._s_0.Z = (double)CONCAT44(uVar28,uVar27);
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.X = local_248._s_0.X;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Y = local_248._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Y = TStack_230._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Z = TStack_230._s_0.Z;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Z = local_248._s_0.Z;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.X = TStack_230._s_0.X;
    local_1f8.Triangle[0].V[2].field0_0x0._0_4_ = local_218._0_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._4_4_ = local_218._4_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._8_4_ = local_218._8_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._12_4_ = local_218._12_4_;
    if (0 < (int)local_400) {
      local_3e0 = (ulonglong)(uVar4 + 1);
      local_3d8 = (ulonglong)local_400;
      do {
        uVar5 = *(uint *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data + (local_3e0 >> 9) * 8)
                         + (ulonglong)((uint)local_3e0 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_143559fd6:
          pFVar7 = this->Mesh;
          uVar17 = 0;
          if ((int)uVar5 < (pFVar7->Triangles).ArrayNum) {
            uVar17 = ~uVar5 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar8 = (pFVar7->Triangles).AllocatorInstance.Data;
          local_3c8 = *(longlong *)(pFVar8 + (longlong)(int)uVar5 * 0xc);
          iVar23 = *(int *)(pFVar8 + (longlong)(int)uVar5 * 0xc + 8);
          lVar24 = (longlong)(int)local_3c8;
          if (((int)local_3c8 < 0 || (pFVar7->Vertices).ArrayNum <= (int)local_3c8) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar9 = (pFVar7->Vertices).AllocatorInstance.Data;
          lVar25 = (longlong)local_3c8._4_4_;
          pFVar8 = pFVar9 + lVar24 * 0x18;
          local_298 = *(double *)pFVar8;
          dStack_290 = *(double *)(pFVar8 + 8);
          local_288 = *(double *)(pFVar9 + lVar24 * 0x18 + 0x10);
          if ((local_3c8 < 0 || (pFVar7->Vertices).ArrayNum <= local_3c8._4_4_) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar9 = (pFVar7->Vertices).AllocatorInstance.Data;
          pFVar8 = pFVar9 + lVar25 * 0x18;
          dStack_280 = *(double *)pFVar8;
          dStack_278 = *(double *)(pFVar8 + 8);
          dStack_270 = *(double *)(pFVar9 + lVar25 * 0x18 + 0x10);
          if ((iVar23 < 0 || (pFVar7->Vertices).ArrayNum <= iVar23) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar9 = (pFVar7->Vertices).AllocatorInstance.Data;
          pFVar8 = pFVar9 + (longlong)iVar23 * 0x18;
          local_268 = *(double *)pFVar8;
          dStack_260 = *(double *)(pFVar8 + 8);
          local_258 = *(double *)(pFVar9 + (longlong)iVar23 * 0x18 + 0x10);
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X = local_298;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y = dStack_290;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Y = dStack_278;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Z = dStack_270;
          local_1f8.DistanceSquared = dVar33;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Z = local_288;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.X = dStack_280;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X = local_268;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y = dStack_260;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z = local_258;
          dVar10 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar10 < *param_6) {
            iStack_3e8 = local_3f0;
            FVar14._s_0.B = local_3f0;
            FVar14._s_0.A = uVar5;
            *param_6 = dVar10;
            param_7->field0_0x0 = FVar14;
            local_3ec = uVar5;
          }
        }
        else {
          local_3f8[0] = uVar5;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar21 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_8->TriangleFilterF;
          plVar22 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar21 != (longlong *)0x0) {
            plVar22 = plVar21;
          }
          uVar18 = (**(code **)(*plVar22 + 8))();
          cVar15 = (*pcVar6)(uVar18,local_3f8);
          if (cVar15 != '\0') goto LAB_143559fd6;
        }
        local_3e0 = (ulonglong)((int)local_3e0 + 1);
        local_3d8 = local_3d8 - 1;
      } while (local_3d8 != 0);
      local_3d8 = 0;
    }
  }
  else {
    local_408[0] = iVar23;
    Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
    plVar21 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
    pcVar6 = *(code **)&param_9->TriangleFilterF;
    plVar22 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
    if (plVar21 != (longlong *)0x0) {
      plVar22 = plVar21;
    }
    uVar18 = (**(code **)(*plVar22 + 8))();
    cVar15 = (*pcVar6)(uVar18,local_408);
    if (cVar15 != '\0') goto LAB_14355976d;
  }
  uVar19 = (uint)local_3d0;
  local_410 = local_410 - 1;
  if (local_410 == 0) {
    return;
  }
  goto LAB_143559710;
}

// find_nearest_vertex @ 14355a2a0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::find_nearest_vertex
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,TVector<double> *param_2,
          double *param_3,int *param_4,FQueryOptions *param_5)

{
  FColliderMesh **ppFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FColliderMesh *pFVar5;
  FScriptContainerElement *pFVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint local_res10 [2];
  ulonglong local_98;
  uint local_80;
  uint uStack_7c;
  
  uVar13 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar13) {
    do {
      pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar12 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar13 >> 9) * 8) +
                        (ulonglong)(uVar13 & 0x1ff) * 4);
      if ((int)uVar12 < 0) {
        uVar12 = ~uVar12;
        dVar14 = BoxDistanceSqr(this,uVar12,param_2);
        if (*param_3 <= dVar14 && dVar14 != *param_3) {
          return;
        }
      }
      else {
        uVar9 = uVar12 - 1;
        uVar12 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                         (ulonglong)(uVar13 + 1 & 0x1ff) * 4) - 1;
        dVar14 = BoxDistanceSqr(this,uVar9,param_2);
        dVar15 = BoxDistanceSqr(this,uVar12,param_2);
        if (dVar15 <= dVar14) {
          if (*param_3 <= dVar15) {
            return;
          }
          find_nearest_vertex(this,uVar12,param_2,param_3,param_4,param_5);
          uVar12 = uVar9;
          if (*param_3 <= dVar14) {
            return;
          }
        }
        else {
          if (*param_3 <= dVar14) {
            return;
          }
          find_nearest_vertex(this,uVar9,param_2,param_3,param_4,param_5);
          if (*param_3 <= dVar15) {
            return;
          }
        }
      }
      uVar13 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar13);
  }
  uVar12 = *(uint *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
  local_98 = (ulonglong)uVar12;
  if (0 < (int)uVar12) {
    do {
      uVar13 = uVar13 + 1;
      uVar12 = *(uint *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14355a4cb:
        pFVar5 = this->Mesh;
        ppFVar1 = &this->Mesh;
        uVar9 = 0;
        if ((int)uVar12 < (pFVar5->Triangles).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (pFVar5->Triangles).AllocatorInstance.Data;
        uVar10 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar12 * 0xc);
        uVar12 = *(uint *)(pFVar2 + (longlong)(int)uVar12 * 0xc + 8);
        pFVar5 = *ppFVar1;
        local_80 = (uint)uVar10;
        uVar9 = 0;
        if ((int)local_80 < (pFVar5->Vertices).ArrayNum) {
          uVar9 = ~local_80 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
        pFVar2 = pFVar6 + (longlong)(int)local_80 * 0x18;
        dVar16 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar2;
        dVar15 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar2 + 8);
        dVar14 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(pFVar6 + (longlong)(int)local_80 * 0x18 + 0x10);
        dVar14 = dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14;
        if (dVar14 < *param_3) {
          *param_3 = dVar14;
          *param_4 = local_80;
        }
        pFVar5 = *ppFVar1;
        uStack_7c = (uint)((ulonglong)uVar10 >> 0x20);
        uVar9 = 0;
        if ((int)uStack_7c < (pFVar5->Vertices).ArrayNum) {
          uVar9 = ~uStack_7c >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
        pFVar2 = pFVar6 + (longlong)(int)uStack_7c * 0x18;
        dVar16 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar2;
        dVar14 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(pFVar6 + (longlong)(int)uStack_7c * 0x18 + 0x10);
        dVar15 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar2 + 8);
        dVar14 = dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14;
        if (dVar14 < *param_3) {
          *param_3 = dVar14;
          *param_4 = uStack_7c;
        }
        pFVar5 = *ppFVar1;
        uVar9 = 0;
        if ((int)uVar12 < (pFVar5->Vertices).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (pFVar5->Vertices).AllocatorInstance.Data;
        pFVar2 = pFVar6 + (longlong)(int)uVar12 * 0x18;
        dVar16 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar2;
        dVar14 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(pFVar6 + (longlong)(int)uVar12 * 0x18 + 0x10);
        dVar15 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar2 + 8);
        dVar14 = dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14;
        if (dVar14 < *param_3) {
          *param_3 = dVar14;
          *param_4 = uVar12;
        }
      }
      else {
        local_res10[0] = uVar12;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar3 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar4 = *(code **)&param_5->TriangleFilterF;
        plVar11 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar11 = plVar3;
        }
        uVar10 = (**(code **)(*plVar11 + 8))();
        cVar7 = (*pcVar4)(uVar10,local_res10);
        if (cVar7 != '\0') goto LAB_14355a4cb;
      }
      local_98 = local_98 - 1;
    } while (local_98 != 0);
  }
  return;
}

// find_self_intersections @ 14355a7e0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::find_self_intersections
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,FIntersectionsQueryResult *param_1,
          bool param_2,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_3,
          FQueryOptions *param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_38;
  
  bVar2 = false;
  uVar4 = 0;
  if (0 < this->TrianglesEnd) {
    do {
      uVar3 = uVar4 + 1 +
              *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
      for (iVar5 = uVar4 + 2; iVar5 < (int)uVar3; iVar5 = iVar5 + 1) {
        uVar4 = uVar4 + 1;
        local_38._0_8_ = *(undefined8 *)param_3;
        local_38._8_8_ = *(undefined8 *)&param_3->field_0x8;
        bVar1 = find_tri_tri_intersections
                          (this,*(int *)(*(longlong *)
                                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                                          (ulonglong)(uVar4 >> 9) * 8) +
                                        (ulonglong)(uVar4 & 0x1ff) * 4),iVar5,uVar3,param_1,param_2,
                           &local_38,param_4);
        if ((bVar1) || (bVar1 = bVar2 != false, bVar2 = false, bVar1)) {
          bVar2 = true;
        }
        if ((param_1 == (FIntersectionsQueryResult *)0x0) && (bVar2 != false)) {
          return bVar2;
        }
      }
      uVar4 = uVar3;
    } while ((int)uVar3 < this->TrianglesEnd);
  }
  local_38._0_8_ = *(undefined8 *)param_3;
  local_38._8_8_ = *(undefined8 *)&param_3->field_0x8;
  bVar1 = find_self_intersections_acrossboxes
                    (this,this->RootIndex,-1,param_1,param_2,0,&local_38,param_4);
  if ((bVar1) || (bVar1 = false, bVar2 != false)) {
    bVar1 = true;
  }
  return bVar1;
}

// find_self_intersections_acrossboxes @ 14355a970

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::find_self_intersections_acrossboxes
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,int param_2,
          FIntersectionsQueryResult *param_3,bool param_4,int param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_88;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  
  bVar6 = false;
  if (param_1 < 0) {
    return false;
  }
  pFVar2 = (this->BoxToIndex).Blocks.AllocatorInstance.Data;
  uVar7 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)((uint)param_1 >> 9) * 8) +
                   (ulonglong)(param_1 & 0x1ff) * 4);
  uVar9 = (ulonglong)uVar7;
  if (param_2 < 0) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)((uint)param_2 >> 9) * 8) +
                      (ulonglong)(param_2 & 0x1ff) * 4);
  }
  iVar12 = this->TrianglesEnd;
  if ((int)uVar7 < iVar12) {
    if ((int)uVar13 < iVar12) {
      if (param_2 == -1) {
        return false;
      }
      uVar11 = uVar7 + 1;
      iVar12 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4) + 1 + uVar7;
      if ((int)uVar11 < iVar12) {
        while( true ) {
          local_88._0_8_ = *(undefined8 *)param_6;
          pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
          local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
          bVar5 = find_tri_tri_intersections
                            (this,*(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar11 >> 9) * 8) +
                                          (ulonglong)(uVar11 & 0x1ff) * 4),uVar13 + 1,
                             *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar13 >> 9) * 8) +
                                     (ulonglong)(uVar13 & 0x1ff) * 4) + 1 + uVar13,param_3,param_4,
                             &local_88,param_7);
          if ((bVar5) || (bVar6 != false)) {
            bVar6 = true;
          }
          if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar6 != false)) break;
          uVar11 = uVar11 + 1;
          if (iVar12 <= (int)uVar11) {
            return bVar6;
          }
        }
        return true;
      }
      return false;
    }
LAB_14355ab25:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_14355ab25;
  }
  uVar7 = (uint)uVar9;
  if (param_2 < 0) {
    pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
    iVar12 = param_5 + 1;
    uVar13 = *(uint *)(*(longlong *)(pFVar2 + (uVar9 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
    if (-1 < (int)uVar13) {
      iVar10 = uVar13 - 1;
      iVar1 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
      uVar7 = iVar1 - 1;
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar6 = find_self_intersections_acrossboxes
                        (this,iVar10,-1,param_3,param_4,iVar12,&local_88,param_7);
      if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar6)) {
        return true;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar5 = find_self_intersections_acrossboxes
                        (this,uVar7,-1,param_3,param_4,iVar12,&local_88,param_7);
      if ((bVar5) || (bVar5 = false, bVar6)) {
        bVar5 = true;
      }
      if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar5 != false)) {
        return true;
      }
      uVar9 = (ulonglong)(iVar1 - 1U & 0x1ff);
      lVar3 = *(longlong *)
               ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8);
      local_60 = *(double *)(lVar3 + uVar9 * 0x18);
      lVar4 = *(longlong *)
               ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8);
      local_58 = *(double *)(lVar3 + 8 + uVar9 * 0x18);
      local_50 = *(double *)(lVar3 + 0x10 + uVar9 * 0x18);
      local_78._s_0.X = local_60 - *(double *)(lVar4 + uVar9 * 0x18);
      local_78._s_0.Y = local_58 - *(double *)(lVar4 + 8 + uVar9 * 0x18);
      local_60 = local_60 + *(double *)(lVar4 + uVar9 * 0x18);
      local_58 = local_58 + *(double *)(lVar4 + 8 + uVar9 * 0x18);
      local_78._s_0.Z = local_50 - *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
      local_50 = local_50 + *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
      bVar6 = box_box_intersect(this,iVar10,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (!bVar6) {
        return bVar5;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar6 = find_self_intersections_acrossboxes
                        (this,iVar10,uVar7,param_3,param_4,iVar12,&local_88,param_7);
      if ((bVar6) || (bVar6 = false, bVar5 != false)) {
        bVar6 = true;
      }
      if (param_3 == (FIntersectionsQueryResult *)0x0) {
        if (bVar6 != false) {
          return true;
        }
        return false;
      }
      return bVar6;
    }
    local_88._0_8_ = *(undefined8 *)param_6;
    uVar13 = ~uVar13;
    param_2 = 0xffffffff;
    local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
  }
  else {
    uVar8 = (ulonglong)(param_2 & 0x1ff);
    lVar3 = *(longlong *)
             ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8
             );
    local_60 = *(double *)(lVar3 + uVar8 * 0x18);
    lVar4 = *(longlong *)
             ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8
             );
    local_58 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
    local_50 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
    pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
    local_78._s_0.X = local_60 - *(double *)(lVar4 + uVar8 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar4 + 8 + uVar8 * 0x18);
    local_60 = local_60 + *(double *)(lVar4 + uVar8 * 0x18);
    local_58 = local_58 + *(double *)(lVar4 + 8 + uVar8 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
    local_50 = local_50 + *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
    uVar13 = *(uint *)(*(longlong *)(pFVar2 + (uVar9 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
    if (-1 < (int)uVar13) {
      iVar12 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                       (ulonglong)(uVar7 + 1 & 0x1ff) * 4) + -1;
      bVar5 = box_box_intersect(this,uVar13 - 1,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (bVar5) {
        local_88._0_8_ = *(undefined8 *)param_6;
        local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
        bVar6 = find_self_intersections_acrossboxes
                          (this,uVar13 - 1,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
        if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar6)) {
          return true;
        }
      }
      bVar5 = box_box_intersect(this,iVar12,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (!bVar5) {
        return bVar6;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar5 = find_self_intersections_acrossboxes
                        (this,iVar12,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
      if ((bVar5) || (bVar5 = false, bVar6 != false)) {
        bVar5 = true;
      }
      goto joined_r0x00014355ad21;
    }
    uVar13 = ~uVar13;
    bVar6 = box_box_intersect(this,uVar13,(TAxisAlignedBox3<double> *)&local_78._s_0);
    if (!bVar6) {
      return false;
    }
    local_88._0_8_ = *(undefined8 *)param_6;
    local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
  }
  bVar5 = find_self_intersections_acrossboxes
                    (this,uVar13,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
joined_r0x00014355ad21:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_tri_tri_intersections @ 14355afb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FColliderMesh>::find_tri_tri_intersections
          (TMeshAABBTree3<UE::Geometry::FColliderMesh> *this,int param_1,int param_2,int param_3,
          FIntersectionsQueryResult *param_4,bool param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FColliderMesh *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStackY_2b8 [32];
  int local_280 [2];
  uint local_278 [2];
  int local_270;
  FQueryOptions *local_268;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 TStack_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_260 = param_6;
  local_268 = param_7;
  local_270 = param_1;
  if (*(void **)&param_7->TriangleFilterF != (void *)0x0) {
    local_280[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
    plVar2 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
    pcVar3 = *(code **)&param_7->TriangleFilterF;
    plVar15 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar15 = plVar2;
    }
    uVar12 = (**(code **)(*plVar15 + 8))();
    cVar7 = (*pcVar3)(uVar12,local_280);
    if (cVar7 == '\0') {
      return false;
    }
  }
  cVar7 = '\0';
  FColliderMesh::GetTriVertices
            (this->Mesh,param_1,(TVector<double> *)&local_1d8._s_0,
             (TVector<double> *)&TStack_1c0._s_0,(TVector<double> *)&local_1a8._s_0);
  pFVar4 = this->Mesh;
  local_f8 = __real_3e45798ee2308c3a;
  local_188._s_0.X = local_1d8._s_0.X;
  local_188._s_0.Y = local_1d8._s_0.Y;
  local_168 = TStack_1c0._s_0.Y;
  dStack_160 = TStack_1c0._s_0.Z;
  local_188._s_0.Z = local_1d8._s_0.Z;
  dStack_170 = TStack_1c0._s_0.X;
  local_148 = local_1a8._s_0.Z;
  local_f0 = 0;
  local_e8 = 0;
  local_ec = 0;
  local_158 = local_1a8._s_0.X;
  dStack_150 = local_1a8._s_0.Y;
  uVar14 = 0;
  if (param_1 < (pFVar4->Triangles).ArrayNum) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  pFVar5 = (pFVar4->Triangles).AllocatorInstance.Data;
  local_258 = *(undefined8 *)(pFVar5 + (longlong)param_1 * 0xc);
  local_250 = *(undefined4 *)(pFVar5 + (longlong)param_1 * 0xc + 8);
  do {
    if (param_3 <= param_2) {
      return (bool)cVar7;
    }
    uVar14 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
    lVar17 = (longlong)(int)uVar14;
    if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14355b19d:
      pFVar4 = this->Mesh;
      uVar11 = 0;
      if ((int)uVar14 < (pFVar4->Triangles).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pFVar5 = (pFVar4->Triangles).AllocatorInstance.Data;
      local_248 = *(undefined8 *)(pFVar5 + lVar17 * 0xc);
      local_240 = *(undefined4 *)(pFVar5 + lVar17 * 0xc + 8);
      if (param_5) {
        bVar8 = false;
        lVar16 = 0;
        do {
          if (bVar8) goto LAB_14355b43f;
          lVar13 = 0;
          do {
            if (*(int *)((longlong)&local_258 + lVar16 * 4) ==
                *(int *)((longlong)&local_248 + lVar13 * 4)) {
              bVar8 = true;
              break;
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < 3);
          lVar16 = lVar16 + 1;
        } while (lVar16 < 3);
        if (bVar8) goto LAB_14355b43f;
      }
      pFVar4 = this->Mesh;
      uVar11 = 0;
      if ((int)uVar14 < (pFVar4->Triangles).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pFVar5 = (pFVar4->Triangles).AllocatorInstance.Data;
      local_238 = *(longlong *)(pFVar5 + lVar17 * 0xc);
      iVar1 = *(int *)(pFVar5 + lVar17 * 0xc + 8);
      lVar17 = (longlong)(int)local_238;
      if (((int)local_238 < 0 || (pFVar4->Vertices).ArrayNum <= (int)local_238) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pFVar6 = (pFVar4->Vertices).AllocatorInstance.Data;
      lVar16 = (longlong)local_238._4_4_;
      pFVar5 = pFVar6 + lVar17 * 0x18;
      local_228 = *(undefined8 *)pFVar5;
      uStack_220 = *(undefined8 *)(pFVar5 + 8);
      local_218 = *(undefined8 *)(pFVar6 + lVar17 * 0x18 + 0x10);
      if ((local_238 < 0 || (pFVar4->Vertices).ArrayNum <= local_238._4_4_) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pFVar6 = (pFVar4->Vertices).AllocatorInstance.Data;
      pFVar5 = pFVar6 + lVar16 * 0x18;
      uStack_210 = *(undefined8 *)pFVar5;
      uStack_208 = *(undefined8 *)(pFVar5 + 8);
      uStack_200 = *(undefined8 *)(pFVar6 + lVar16 * 0x18 + 0x10);
      if ((iVar1 < 0 || (pFVar4->Vertices).ArrayNum <= iVar1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pFVar6 = (pFVar4->Vertices).AllocatorInstance.Data;
      pFVar5 = pFVar6 + (longlong)iVar1 * 0x18;
      local_1f8 = *(undefined4 *)pFVar5;
      uStack_1f4 = *(undefined4 *)(pFVar5 + 4);
      uStack_1f0 = *(undefined4 *)(pFVar5 + 8);
      uStack_1ec = *(undefined4 *)(pFVar5 + 0xc);
      local_1e8 = *(undefined8 *)(pFVar6 + (longlong)iVar1 * 0x18 + 0x10);
      local_140 = local_228;
      uStack_138 = uStack_220;
      local_ec = 0;
      local_130 = (undefined4)local_218;
      uStack_12c = local_218._4_4_;
      uStack_128 = (undefined4)uStack_210;
      uStack_124 = uStack_210._4_4_;
      local_120 = (undefined4)uStack_208;
      uStack_11c = uStack_208._4_4_;
      uStack_118 = (undefined4)uStack_200;
      uStack_114 = uStack_200._4_4_;
      local_110 = local_1f8;
      uStack_10c = uStack_1f4;
      uStack_108 = uStack_1f0;
      uStack_104 = uStack_1ec;
      local_100 = local_1e8;
      cVar7 = (**(code **)local_260)(*(undefined8 *)&local_260->field_0x8,&local_188);
      param_7 = local_268;
      if (cVar7 != '\0') {
        if (param_4 == (FIntersectionsQueryResult *)0x0) {
          return true;
        }
        AddTriTriIntersectionResult
                  ((TIntrTriangle3Triangle3<double> *)&local_188._s_0,local_270,uVar14,param_4);
        param_7 = local_268;
      }
    }
    else {
      local_278[0] = uVar14;
      Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
      plVar2 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
      pcVar3 = *(code **)&param_7->TriangleFilterF;
      plVar15 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar15 = plVar2;
      }
      uVar12 = (**(code **)(*plVar15 + 8))();
      cVar10 = (*pcVar3)(uVar12,local_278);
      if (cVar10 != '\0') goto LAB_14355b19d;
    }
LAB_14355b43f:
    param_2 = param_2 + 1;
  } while( true );
}

// TMeshAABBTree3<UE::Geometry::FDynamicMesh3> @ 143566b20

TMeshAABBTree3<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
          (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1,bool param_2)

{
  undefined1 *puVar1;
  TDynamicVector<int,512> *pTVar2;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar3;
  ulong64 uVar4;
  
  this->TopDownLeafMaxTriCount = 3;
  this->MeshChangeStamp = 0;
  this->_padding_ = (longlong)&___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  *(undefined8 *)&this->GetSplitAxis = 0;
  *(undefined8 *)&(this->GetSplitAxis).field_0x28 = 0;
  *(undefined ***)&(this->GetSplitAxis).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->GetSplitAxis).field_0x18;
  *(code **)puVar1 =
       `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::MakeDefaultSplitAxisFunc'::__l2::
       <lambda_1>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetSplitAxis =
         Core::Private::Function::
         TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
         ::Call;
  }
  pTVar2 = &this->BoxToIndex;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  this->BoxEps = 1e-08;
  (this->BoxToIndex).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxToIndex).Blocks.ArrayNum = 0;
  (this->BoxToIndex).Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
  pTVar3 = &this->BoxCenters;
  pTVar3->CurBlock = 0;
  pTVar3->CurBlockUsed = 0;
  (this->BoxCenters).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxCenters).Blocks.ArrayNum = 0;
  (this->BoxCenters).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar3);
  pTVar3 = &this->BoxExtents;
  pTVar3->CurBlock = 0;
  pTVar3->CurBlockUsed = 0;
  (this->BoxExtents).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxExtents).Blocks.ArrayNum = 0;
  (this->BoxExtents).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar3);
  pTVar2 = &this->IndexList;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->IndexList).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexList).Blocks.ArrayNum = 0;
  (this->IndexList).Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar2);
  this->TrianglesEnd = -1;
  this->RootIndex = -1;
  this->Mesh = param_1;
  this->MeshChangeStamp = 0;
  if (param_2) {
    BuildTopDown(this,false);
    uVar4 = FDynamicMesh3::GetChangeStamp(this->Mesh);
    this->MeshChangeStamp = uVar4;
  }
  return this;
}

