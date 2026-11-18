// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 101

// <lambda_invoker_cdecl> @ 14c98d0c0

int __cdecl
`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::MakeDefaultSplitAxisFunc'::__l2::
<lambda_1>::<lambda_invoker_cdecl>(int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14c98d0e0

int __cdecl
`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::MakeDefaultSplitAxisFunc'::__l2::<lambda_1>
::<lambda_invoker_cdecl>(int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14c98d100

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindAllIntersections'::__l5::
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

// <lambda_invoker_cdecl> @ 14c98d140

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindAllIntersections'::__l5::<lambda_1>::
<lambda_invoker_cdecl>(TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Test(param_1);
  if (bVar1) {
    UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_1);
    return param_1->Result == Intersects;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14c98d180

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindAllSelfIntersections'::__l5::
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

// <lambda_invoker_cdecl> @ 14c98d1c0

bool __cdecl
`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindAllSelfIntersections'::__l5::<lambda_1>
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

// FindHitTriangle<UE::Math::TRay<double>_> @ 14c991150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::
FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,TRay<double> *param_2,
          double *param_3,int *param_4,TVector<double> *param_5,FQueryOptions *param_6)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined1 auStackY_1e8 [32];
  uint local_1a8 [2];
  uint *local_1a0;
  ulonglong local_198;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_190;
  TVector<double> *local_188;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 TStack_160;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  TVector<double>_u_0 local_a8;
  EIntersectionType local_90 [2];
  ulonglong local_88;
  
  dVar6 = __real_3e45798ee2308c3a;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_190 = &(this->IndexList).Blocks;
  local_1a0 = (uint *)param_4;
  local_188 = param_5;
  uVar12 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar12) {
    do {
      pFVar1 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar11 = *(uint *)(*(longlong *)(pFVar1 + (ulonglong)(uVar12 >> 9) * 8) +
                        (ulonglong)(uVar12 & 0x1ff) * 4);
      if ((int)uVar11 < 0) {
        uVar11 = ~uVar11;
        dVar4 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar11,param_2);
        if (*param_3 + dVar6 < dVar4) {
          return;
        }
      }
      else {
        local_1a8[0] = uVar11 - 1;
        uVar11 = *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                         (ulonglong)(uVar12 + 1 & 0x1ff) * 4) - 1;
        dVar4 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,local_1a8[0],param_2);
        dVar5 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar11,param_2);
        if (dVar5 <= dVar4) {
          if (*param_3 + dVar6 < dVar5) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar11,param_2,param_3,(int *)local_1a0,param_5,param_6);
          uVar11 = local_1a8[0];
          if (*param_3 + dVar6 < dVar4) {
            return;
          }
        }
        else {
          if (*param_3 + dVar6 < dVar4) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,local_1a8[0],param_2,param_3,(int *)local_1a0,param_5,param_6);
          if (*param_3 + dVar6 < dVar5) {
            return;
          }
        }
      }
      uVar12 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar12);
  }
  pTVar13 = &(this->IndexList).Blocks;
  uVar11 = *(uint *)(*(longlong *)((pTVar13->AllocatorInstance).Data + (ulonglong)(uVar12 >> 9) * 8)
                    + (ulonglong)(uVar12 & 0x1ff) * 4);
  local_198 = (ulonglong)uVar11;
  if (0 < (int)uVar11) {
    do {
      uVar12 = uVar12 + 1;
      uVar11 = *(uint *)(*(longlong *)
                          ((pTVar13->AllocatorInstance).Data + (ulonglong)(uVar12 >> 9) * 8) +
                        (ulonglong)(uVar12 & 0x1ff) * 4);
      if (*(void **)&param_6->TriangleFilterF == (void *)0x0) {
LAB_14c9913c8:
        PlanarCut::FGeomFlatUVMesh::GetTriVertices
                  (this->Mesh,uVar11,(TVector<double> *)&local_178._s_0,
                   (TVector<double> *)&TStack_160._s_0,(TVector<double> *)&local_148._s_0);
        local_128._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_128._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_128._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.X;
        local_108 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_100 = (param_2->Direction).field0_0x0._s_0.Z;
        local_f8._s_0.X = local_178._s_0.X;
        local_f8._s_0.Y = local_178._s_0.Y;
        local_f8._s_0.Z = local_178._s_0.Z;
        dStack_e0 = TStack_160._s_0.X;
        local_d8 = TStack_160._s_0.Y;
        dStack_d0 = TStack_160._s_0.Z;
        local_c8 = local_148._s_0.X;
        dStack_c0 = local_148._s_0.Y;
        local_b8 = local_148._s_0.Z;
        bVar8 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                          ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,
                           &local_b0,(TVector<double> *)&local_a8._s_0,local_90);
        if ((bVar8) && (local_b0 < *param_3)) {
          *param_3 = local_b0;
          *local_1a0 = uVar11;
          (local_188->field0_0x0)._s_0.X = local_a8._s_0.X;
          (local_188->field0_0x0)._s_0.Y = local_a8._s_0.Y;
          (local_188->field0_0x0)._s_0.Z = local_a8._s_0.Z;
        }
      }
      else {
        local_1a8[0] = uVar11;
        Core::Private::Function::CheckCallable(*(void **)&param_6->TriangleFilterF);
        plVar2 = *(longlong **)&(param_6->TriangleFilterF).field_0x28;
        pcVar3 = *(code **)&param_6->TriangleFilterF;
        plVar10 = (longlong *)&(param_6->TriangleFilterF).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = plVar2;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        cVar7 = (*pcVar3)(uVar9,local_1a8);
        if (cVar7 != '\0') goto LAB_14c9913c8;
      }
      local_198 = local_198 - 1;
      pTVar13 = local_190;
    } while (local_198 != 0);
  }
  return;
}

// FindHitTriangle<UE::Math::TRay<double>_> @ 14c9914d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,TRay<double> *param_2,
          double *param_3,int *param_4,TVector<double> *param_5,FQueryOptions *param_6)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined1 auStackY_1e8 [32];
  uint local_1a8 [2];
  uint *local_1a0;
  ulonglong local_198;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_190;
  TVector<double> *local_188;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 TStack_160;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  TVector<double>_u_0 local_a8;
  EIntersectionType local_90 [2];
  ulonglong local_88;
  
  dVar6 = __real_3e45798ee2308c3a;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_190 = &(this->IndexList).Blocks;
  local_1a0 = (uint *)param_4;
  local_188 = param_5;
  uVar12 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar12) {
    do {
      pFVar1 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar11 = *(uint *)(*(longlong *)(pFVar1 + (ulonglong)(uVar12 >> 9) * 8) +
                        (ulonglong)(uVar12 & 0x1ff) * 4);
      if ((int)uVar11 < 0) {
        uVar11 = ~uVar11;
        dVar4 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar11,param_2);
        if (*param_3 + dVar6 < dVar4) {
          return;
        }
      }
      else {
        local_1a8[0] = uVar11 - 1;
        uVar11 = *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                         (ulonglong)(uVar12 + 1 & 0x1ff) * 4) - 1;
        dVar4 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,local_1a8[0],param_2);
        dVar5 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar11,param_2);
        if (dVar5 <= dVar4) {
          if (*param_3 + dVar6 < dVar5) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar11,param_2,param_3,(int *)local_1a0,param_5,param_6);
          uVar11 = local_1a8[0];
          if (*param_3 + dVar6 < dVar4) {
            return;
          }
        }
        else {
          if (*param_3 + dVar6 < dVar4) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,local_1a8[0],param_2,param_3,(int *)local_1a0,param_5,param_6);
          if (*param_3 + dVar6 < dVar5) {
            return;
          }
        }
      }
      uVar12 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar12);
  }
  pTVar13 = &(this->IndexList).Blocks;
  uVar11 = *(uint *)(*(longlong *)((pTVar13->AllocatorInstance).Data + (ulonglong)(uVar12 >> 9) * 8)
                    + (ulonglong)(uVar12 & 0x1ff) * 4);
  local_198 = (ulonglong)uVar11;
  if (0 < (int)uVar11) {
    do {
      uVar12 = uVar12 + 1;
      uVar11 = *(uint *)(*(longlong *)
                          ((pTVar13->AllocatorInstance).Data + (ulonglong)(uVar12 >> 9) * 8) +
                        (ulonglong)(uVar12 & 0x1ff) * 4);
      if (*(void **)&param_6->TriangleFilterF == (void *)0x0) {
LAB_14c991748:
        PlanarCut::FGeomMesh::GetTriVertices
                  (this->Mesh,uVar11,(TVector<double> *)&local_178._s_0,
                   (TVector<double> *)&TStack_160._s_0,(TVector<double> *)&local_148._s_0);
        local_128._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_128._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_128._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.X;
        local_108 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_100 = (param_2->Direction).field0_0x0._s_0.Z;
        local_f8._s_0.X = local_178._s_0.X;
        local_f8._s_0.Y = local_178._s_0.Y;
        local_f8._s_0.Z = local_178._s_0.Z;
        dStack_e0 = TStack_160._s_0.X;
        local_d8 = TStack_160._s_0.Y;
        dStack_d0 = TStack_160._s_0.Z;
        local_c8 = local_148._s_0.X;
        dStack_c0 = local_148._s_0.Y;
        local_b8 = local_148._s_0.Z;
        bVar8 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                          ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,
                           &local_b0,(TVector<double> *)&local_a8._s_0,local_90);
        if ((bVar8) && (local_b0 < *param_3)) {
          *param_3 = local_b0;
          *local_1a0 = uVar11;
          (local_188->field0_0x0)._s_0.X = local_a8._s_0.X;
          (local_188->field0_0x0)._s_0.Y = local_a8._s_0.Y;
          (local_188->field0_0x0)._s_0.Z = local_a8._s_0.Z;
        }
      }
      else {
        local_1a8[0] = uVar11;
        Core::Private::Function::CheckCallable(*(void **)&param_6->TriangleFilterF);
        plVar2 = *(longlong **)&(param_6->TriangleFilterF).field_0x28;
        pcVar3 = *(code **)&param_6->TriangleFilterF;
        plVar10 = (longlong *)&(param_6->TriangleFilterF).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = plVar2;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        cVar7 = (*pcVar3)(uVar9,local_1a8);
        if (cVar7 != '\0') goto LAB_14c991748;
      }
      local_198 = local_198 - 1;
      pTVar13 = local_190;
    } while (local_198 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 14c991850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::
FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,TRay<double> *param_2,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_3,
          FQueryOptions *param_4)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStackY_218 [32];
  int local_1e8 [2];
  ulonglong local_1e0;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_1d8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 TStack_1b0;
  TVector<double>_u_0 local_198;
  int local_178;
  undefined4 uStack_174;
  double dStack_170;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  TVector<double>_u_0 local_c8;
  EIntersectionType local_b0 [2];
  ulonglong local_a8;
  
  dVar10 = __real_47efffffe0000000;
  dVar9 = __real_3e45798ee2308c3a;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pTVar19 = &(this->IndexList).Blocks;
  uVar22 = SUB84(__real_47efffffe0000000,0);
  uVar23 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  dVar1 = param_4->MaxDistance;
  uVar20 = SUB84(dVar1,0);
  uVar21 = (int)((ulonglong)dVar1 >> 0x20);
  if (__real_47efffffe0000000 <= dVar1) {
    uVar20 = uVar22;
    uVar21 = uVar23;
  }
  uVar18 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_1d8 = pTVar19;
  if (this->TrianglesEnd <= (int)uVar18) {
    do {
      pFVar4 = (pTVar19->AllocatorInstance).Data;
      dVar1 = (double)CONCAT44(uVar21,uVar20) + dVar9;
      uVar2 = *(uint *)(*(longlong *)(pFVar4 + (ulonglong)(uVar18 >> 9) * 8) +
                       (ulonglong)(uVar18 & 0x1ff) * 4);
      if ((int)uVar2 < 0) {
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,~uVar2,param_2);
        uVar18 = ~uVar2;
      }
      else {
        uVar2 = uVar2 - 1;
        uVar18 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                         (ulonglong)(uVar18 + 1 & 0x1ff) * 4) - 1;
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar2,param_2);
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar18,param_2);
        if (dVar7 <= dVar8) {
          if (dVar1 < dVar7) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar18,param_2,param_3,param_4);
          uVar18 = uVar2;
          dVar7 = dVar8;
        }
        else {
          if (dVar1 < dVar8) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar2,param_2,param_3,param_4);
        }
      }
      if (dVar1 < dVar7) {
        return;
      }
      dVar1 = param_4->MaxDistance;
      uVar20 = SUB84(dVar1,0);
      uVar21 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar10 <= dVar1) {
        uVar20 = uVar22;
        uVar21 = uVar23;
      }
      uVar18 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar18);
  }
  uVar2 = *(uint *)(*(longlong *)((pTVar19->AllocatorInstance).Data + (ulonglong)(uVar18 >> 9) * 8)
                   + (ulonglong)(uVar18 & 0x1ff) * 4);
  local_1e0 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar18 = uVar18 + 1;
      iVar3 = *(int *)(*(longlong *)
                        ((pTVar19->AllocatorInstance).Data + (ulonglong)(uVar18 >> 9) * 8) +
                      (ulonglong)(uVar18 & 0x1ff) * 4);
      if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14c991aa9:
        PlanarCut::FGeomFlatUVMesh::GetTriVertices
                  (this->Mesh,iVar3,(TVector<double> *)&local_1c8._s_0,
                   (TVector<double> *)&TStack_1b0._s_0,(TVector<double> *)&local_198._s_0);
        local_148._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_148._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_148._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_130 = (param_2->Direction).field0_0x0._s_0.X;
        local_128 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.Z;
        local_118._s_0.X = local_1c8._s_0.X;
        local_118._s_0.Y = local_1c8._s_0.Y;
        local_118._s_0.Z = local_1c8._s_0.Z;
        dStack_100 = TStack_1b0._s_0.X;
        local_f8 = TStack_1b0._s_0.Y;
        dStack_f0 = TStack_1b0._s_0.Z;
        local_e8 = local_198._s_0.X;
        dStack_e0 = local_198._s_0.Y;
        local_d8 = local_198._s_0.Z;
        bVar13 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_148._s_0,(TTriangle3<double> *)&local_118._s_0,
                            &local_d0,(TVector<double> *)&local_c8._s_0,local_b0);
        uVar11 = local_c8._s_0.Y;
        uVar15 = local_c8._s_0.X;
        if ((bVar13) && (local_d0 <= (double)CONCAT44(uVar21,uVar20) + dVar9)) {
          iVar14 = param_3->ArrayNum;
          dStack_170 = local_d0;
          local_178 = iVar3;
          if (iVar14 == param_3->ArrayMax) {
            iVar14 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar16 = (longlong)iVar14;
          param_3->ArrayNum = iVar14 + 1;
          pFVar4 = (param_3->AllocatorInstance).Data;
          *(ulonglong *)(pFVar4 + lVar16 * 0x28) = CONCAT44(uStack_174,local_178);
          *(double *)(pFVar4 + lVar16 * 0x28 + 8) = dStack_170;
          *(undefined8 *)(pFVar4 + lVar16 * 0x28 + 0x10) = uVar15;
          *(undefined8 *)(pFVar4 + lVar16 * 0x28 + 0x10 + 8) = uVar11;
          *(double *)(pFVar4 + lVar16 * 0x28 + 0x20) = local_c8._s_0.Z;
        }
      }
      else {
        local_1e8[0] = iVar3;
        Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
        plVar5 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_4->TriangleFilterF;
        plVar17 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar17 = plVar5;
        }
        uVar15 = (**(code **)(*plVar17 + 8))();
        cVar12 = (*pcVar6)(uVar15,local_1e8);
        if (cVar12 != '\0') goto LAB_14c991aa9;
      }
      local_1e0 = local_1e0 - 1;
      pTVar19 = local_1d8;
    } while (local_1e0 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 14c991bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,TRay<double> *param_2,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_3,
          FQueryOptions *param_4)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStackY_218 [32];
  int local_1e8 [2];
  ulonglong local_1e0;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_1d8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 TStack_1b0;
  TVector<double>_u_0 local_198;
  int local_178;
  undefined4 uStack_174;
  double dStack_170;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  TVector<double>_u_0 local_c8;
  EIntersectionType local_b0 [2];
  ulonglong local_a8;
  
  dVar10 = __real_47efffffe0000000;
  dVar9 = __real_3e45798ee2308c3a;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pTVar19 = &(this->IndexList).Blocks;
  uVar22 = SUB84(__real_47efffffe0000000,0);
  uVar23 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  dVar1 = param_4->MaxDistance;
  uVar20 = SUB84(dVar1,0);
  uVar21 = (int)((ulonglong)dVar1 >> 0x20);
  if (__real_47efffffe0000000 <= dVar1) {
    uVar20 = uVar22;
    uVar21 = uVar23;
  }
  uVar18 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_1d8 = pTVar19;
  if (this->TrianglesEnd <= (int)uVar18) {
    do {
      pFVar4 = (pTVar19->AllocatorInstance).Data;
      dVar1 = (double)CONCAT44(uVar21,uVar20) + dVar9;
      uVar2 = *(uint *)(*(longlong *)(pFVar4 + (ulonglong)(uVar18 >> 9) * 8) +
                       (ulonglong)(uVar18 & 0x1ff) * 4);
      if ((int)uVar2 < 0) {
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,~uVar2,param_2);
        uVar18 = ~uVar2;
      }
      else {
        uVar2 = uVar2 - 1;
        uVar18 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                         (ulonglong)(uVar18 + 1 & 0x1ff) * 4) - 1;
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar2,param_2);
        dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar18,param_2);
        if (dVar7 <= dVar8) {
          if (dVar1 < dVar7) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar18,param_2,param_3,param_4);
          uVar18 = uVar2;
          dVar7 = dVar8;
        }
        else {
          if (dVar1 < dVar8) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar2,param_2,param_3,param_4);
        }
      }
      if (dVar1 < dVar7) {
        return;
      }
      dVar1 = param_4->MaxDistance;
      uVar20 = SUB84(dVar1,0);
      uVar21 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar10 <= dVar1) {
        uVar20 = uVar22;
        uVar21 = uVar23;
      }
      uVar18 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar18);
  }
  uVar2 = *(uint *)(*(longlong *)((pTVar19->AllocatorInstance).Data + (ulonglong)(uVar18 >> 9) * 8)
                   + (ulonglong)(uVar18 & 0x1ff) * 4);
  local_1e0 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar18 = uVar18 + 1;
      iVar3 = *(int *)(*(longlong *)
                        ((pTVar19->AllocatorInstance).Data + (ulonglong)(uVar18 >> 9) * 8) +
                      (ulonglong)(uVar18 & 0x1ff) * 4);
      if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14c991e49:
        PlanarCut::FGeomMesh::GetTriVertices
                  (this->Mesh,iVar3,(TVector<double> *)&local_1c8._s_0,
                   (TVector<double> *)&TStack_1b0._s_0,(TVector<double> *)&local_198._s_0);
        local_148._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_148._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_148._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_130 = (param_2->Direction).field0_0x0._s_0.X;
        local_128 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.Z;
        local_118._s_0.X = local_1c8._s_0.X;
        local_118._s_0.Y = local_1c8._s_0.Y;
        local_118._s_0.Z = local_1c8._s_0.Z;
        dStack_100 = TStack_1b0._s_0.X;
        local_f8 = TStack_1b0._s_0.Y;
        dStack_f0 = TStack_1b0._s_0.Z;
        local_e8 = local_198._s_0.X;
        dStack_e0 = local_198._s_0.Y;
        local_d8 = local_198._s_0.Z;
        bVar13 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_148._s_0,(TTriangle3<double> *)&local_118._s_0,
                            &local_d0,(TVector<double> *)&local_c8._s_0,local_b0);
        uVar11 = local_c8._s_0.Y;
        uVar15 = local_c8._s_0.X;
        if ((bVar13) && (local_d0 <= (double)CONCAT44(uVar21,uVar20) + dVar9)) {
          iVar14 = param_3->ArrayNum;
          dStack_170 = local_d0;
          local_178 = iVar3;
          if (iVar14 == param_3->ArrayMax) {
            iVar14 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar16 = (longlong)iVar14;
          param_3->ArrayNum = iVar14 + 1;
          pFVar4 = (param_3->AllocatorInstance).Data;
          *(ulonglong *)(pFVar4 + lVar16 * 0x28) = CONCAT44(uStack_174,local_178);
          *(double *)(pFVar4 + lVar16 * 0x28 + 8) = dStack_170;
          *(undefined8 *)(pFVar4 + lVar16 * 0x28 + 0x10) = uVar15;
          *(undefined8 *)(pFVar4 + lVar16 * 0x28 + 0x10 + 8) = uVar11;
          *(double *)(pFVar4 + lVar16 * 0x28 + 0x20) = local_c8._s_0.Z;
        }
      }
      else {
        local_1e8[0] = iVar3;
        Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
        plVar5 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
        pcVar6 = *(code **)&param_4->TriangleFilterF;
        plVar17 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar17 = plVar5;
        }
        uVar15 = (**(code **)(*plVar17 + 8))();
        cVar12 = (*pcVar6)(uVar15,local_1e8);
        if (cVar12 != '\0') goto LAB_14c991e49;
      }
      local_1e0 = local_1e0 - 1;
      pTVar19 = local_1d8;
    } while (local_1e0 != 0);
  }
  return;
}

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 14c997a10

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::
box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,TRay<double> *param_2)

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

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 14c997b90

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,TRay<double> *param_2)

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

// find_nearest_tri<1> @ 14c999ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::find_nearest_tri<1>
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,TVector<double> *param_2
          ,double *param_3,int *param_4,FQueryOptions *param_5)

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
LAB_14c999dac:
      PlanarCut::FGeomFlatUVMesh::GetTriVertices
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
      if (cVar8 != '\0') goto LAB_14c999dac;
    }
    uVar14 = uVar14 + 1;
    if (iVar13 < (int)(uVar14 - (int)local_170)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<1> @ 14c999fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::find_nearest_tri<1>
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,TVector<double> *param_2,
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
LAB_14c99a0dc:
      PlanarCut::FGeomMesh::GetTriVertices
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
      if (cVar8 != '\0') goto LAB_14c99a0dc;
    }
    uVar14 = uVar14 + 1;
    if (iVar13 < (int)(uVar14 - (int)local_170)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<0> @ 14c99a300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::find_nearest_tri<0>
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,TVector<double> *param_2
          ,double *param_3,int *param_4,FQueryOptions *param_5)

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
LAB_14c99a3fc:
          PlanarCut::FGeomFlatUVMesh::GetTriVertices
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
          if (cVar9 != '\0') goto LAB_14c99a3fc;
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

// find_nearest_tri<0> @ 14c99a600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::find_nearest_tri<0>
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,TVector<double> *param_2,
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
LAB_14c99a6fc:
          PlanarCut::FGeomMesh::GetTriVertices
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
          if (cVar9 != '\0') goto LAB_14c99a6fc;
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

// ~TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> @ 14c9a8f80

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::
~TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this)

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

// ~TMeshAABBTree3<UE::PlanarCut::FGeomMesh> @ 14c9a9030

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::~TMeshAABBTree3<UE::PlanarCut::FGeomMesh>
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this)

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

// operator() @ 14c9adc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestSelfIntersection'::__l2::
<lambda_1>::operator()(void *this,TIntrTriangle3Triangle3<double> *param_1)

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

// operator() @ 14c9adce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestSelfIntersection'::__l2::<lambda_1>::
operator()(void *this,TIntrTriangle3Triangle3<double> *param_1)

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

// AddTriTriIntersectionResult @ 14c9b2240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::AddTriTriIntersectionResult
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

// AddTriTriIntersectionResult @ 14c9b2940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::AddTriTriIntersectionResult
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

// BoxDistanceSqr @ 14c9b6fc0

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::BoxDistanceSqr
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,TVector<double> *param_2
          )

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

// BoxDistanceSqr @ 14c9b7060

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::BoxDistanceSqr
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,TVector<double> *param_2)

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

// BuildTopDown @ 14c9b7c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::BuildTopDown
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,
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

// BuildTopDown @ 14c9b83d0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::BuildTopDown
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  bool *pbVar8;
  double dVar9;
  double dVar10;
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
  uVar1 = this->Mesh->NumTriangles;
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
  uVar1 = this->Mesh->NumTriangles;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar1,&local_e0.AllocatorInstance,0,&local_e0.ArrayMax);
  }
  local_f8[0] = 0;
  iVar7 = (**(code **)(*(longlong *)&this->Mesh->Collection->Indices + 0x60))();
  dVar4 = __real_3fd5555555555555;
  if (local_f8[0] < iVar7) {
    do {
      pbVar8 = TArrayView<bool,int>::operator[](&this->Mesh->ActiveTriangles,local_f8[0]);
      if (*pbVar8 != false) {
        PlanarCut::FGeomFlatUVMesh::GetTriVertices
                  (this->Mesh,local_f8[0],(TVector<double> *)&local_b8._s_0,
                   (TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_88._s_0);
        dVar10 = (local_b8._s_0.X + local_a0._s_0.X + local_88._s_0.X) * dVar4;
        dVar3 = (local_b8._s_0.Y + local_a0._s_0.Y + local_88._s_0.Y) * dVar4;
        dVar9 = (local_b8._s_0.Z + local_a0._s_0.Z + local_88._s_0.Z) * dVar4;
        sVar6 = _dclass(SUB84(dVar3 * dVar3 + dVar10 * dVar10 + dVar9 * dVar9,0));
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
          PlanarCut::FGeomFlatUVMesh::GetTriVertices
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
      local_f8[0] = local_f8[0] + 1;
      iVar7 = (**(code **)(*(longlong *)&this->Mesh->Collection->Indices + 0x60))();
    } while (local_f8[0] < iVar7);
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

// BuildTopDown @ 14c9b87a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::BuildTopDown
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,
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

// BuildTopDown @ 14c9b8ee0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::BuildTopDown
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  bool *pbVar8;
  double dVar9;
  double dVar10;
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
  uVar1 = this->Mesh->NumTriangles;
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
  uVar1 = this->Mesh->NumTriangles;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar1,&local_e0.AllocatorInstance,0,&local_e0.ArrayMax);
  }
  local_f8[0] = 0;
  iVar7 = (**(code **)(*(longlong *)&this->Mesh->Collection->Indices + 0x60))();
  dVar4 = __real_3fd5555555555555;
  if (local_f8[0] < iVar7) {
    do {
      pbVar8 = TArrayView<bool,int>::operator[](&this->Mesh->ActiveTriangles,local_f8[0]);
      if (*pbVar8 != false) {
        PlanarCut::FGeomMesh::GetTriVertices
                  (this->Mesh,local_f8[0],(TVector<double> *)&local_b8._s_0,
                   (TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_88._s_0);
        dVar10 = (local_b8._s_0.X + local_a0._s_0.X + local_88._s_0.X) * dVar4;
        dVar3 = (local_b8._s_0.Y + local_a0._s_0.Y + local_88._s_0.Y) * dVar4;
        dVar9 = (local_b8._s_0.Z + local_a0._s_0.Z + local_88._s_0.Z) * dVar4;
        sVar6 = _dclass(SUB84(dVar3 * dVar3 + dVar10 * dVar10 + dVar9 * dVar9,0));
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
          PlanarCut::FGeomMesh::GetTriVertices
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
      local_f8[0] = local_f8[0] + 1;
      iVar7 = (**(code **)(*(longlong *)&this->Mesh->Collection->Indices + 0x60))();
    } while (local_f8[0] < iVar7);
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

// DoTraversal @ 14c9ca790

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::DoTraversal
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,FTreeTraversal *param_1,
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

// DoTraversal @ 14c9ca8e0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::DoTraversal
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,FTreeTraversal *param_1,
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

// FindAllHitTriangles @ 14c9cfb20

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindAllHitTriangles
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,TRay<double> *param_1,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_2,
          FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllHitTriangles @ 14c9cfb70

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindAllHitTriangles
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,TRay<double> *param_1,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_2,
          FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllIntersections @ 14c9cfbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindAllIntersections
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *param_1,
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
    *(undefined4 *)&param_5->field_0x18 = 0x4c98d100;
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
     ((param_3->bAllowUnsafeModifiedMeshQueries == false && (this->MeshChangeStamp != 1)))) {
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

// FindAllIntersections @ 14c9cfda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindAllIntersections
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,
          FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *param_1,
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
    *(undefined4 *)&param_5->field_0x18 = 0x4c98d140;
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
     ((param_3->bAllowUnsafeModifiedMeshQueries == false && (this->MeshChangeStamp != 1)))) {
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

// FindAllSelfIntersections @ 14c9cff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindAllSelfIntersections
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,
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
    *(undefined4 *)&param_3->field_0x18 = 0x4c98d180;
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

// FindAllSelfIntersections @ 14c9d0100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindAllSelfIntersections
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,
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
    *(undefined4 *)&param_3->field_0x18 = 0x4c98d1c0;
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

// FindNearestHitTriangle @ 14c9d0840

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,TRay<double> *param_1,
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

// FindNearestHitTriangle @ 14c9d08c0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,TRay<double> *param_1,
          double *param_2,int *param_3,TVector<double> *param_4,FQueryOptions *param_5)

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

// FindNearestHitTriangle @ 14c9d0940

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,TRay<double> *param_1,
          double *param_2,int *param_3,FQueryOptions *param_4)

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

// FindNearestHitTriangle @ 14c9d09c0

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,TRay<double> *param_1,
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

// FindNearestHitTriangle @ 14c9d0a40

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,TRay<double> *param_1,double *param_2,
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

// FindNearestHitTriangle @ 14c9d0ac0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindNearestHitTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,TRay<double> *param_1,double *param_2,
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

// FindNearestPoint @ 14c9d0b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindNearestPoint
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,
          TVector<double> *__return_storage_ptr__,TVector<double> *param_1,FQueryOptions *param_2)

{
  double dVar1;
  undefined8 uVar2;
  FGeomFlatUVMesh *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  bool *pbVar6;
  TVector<double> *pTVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
    uVar8 = (undefined4)uVar2;
    uVar9 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    this_00 = this->Mesh;
    pbVar6 = TArrayView<bool,int>::operator[](&this_00->ActiveTriangles,iVar5);
    if (*pbVar6 == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.IsTriangle(TriIdx)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                         ,0x1e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVector<double> *)(*pcVar3)();
        return pTVar7;
      }
    }
    PlanarCut::FGeomFlatUVMesh::GetTriVertices
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
    uVar8 = (undefined4)local_40;
    uVar9 = (undefined4)((ulonglong)local_40 >> 0x20);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_50;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_48;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar9,uVar8);
  return __return_storage_ptr__;
}

// FindNearestPoint @ 14c9d0cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindNearestPoint
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,FQueryOptions *param_2)

{
  double dVar1;
  undefined8 uVar2;
  FGeomMesh *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  bool *pbVar6;
  TVector<double> *pTVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
    uVar8 = (undefined4)uVar2;
    uVar9 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    this_00 = this->Mesh;
    pbVar6 = TArrayView<bool,int>::operator[](&this_00->ActiveTriangles,iVar5);
    if (*pbVar6 == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.IsTriangle(TriIdx)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                         ,0x1e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVector<double> *)(*pcVar3)();
        return pTVar7;
      }
    }
    PlanarCut::FGeomMesh::GetTriVertices
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
    uVar8 = (undefined4)local_40;
    uVar9 = (undefined4)((ulonglong)local_40 >> 0x20);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_50;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_48;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar9,uVar8);
  return __return_storage_ptr__;
}

// FindNearestTriangle @ 14c9d0e20

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindNearestTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,TVector<double> *param_1,
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

// FindNearestTriangle @ 14c9d0e80

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindNearestTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,TVector<double> *param_1,double *param_2,
          FQueryOptions *param_3)

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

// FindNearestTriangles @ 14c9d0ee0

FIndex2i __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindNearestTriangles
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,
          TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *param_1,
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
            (this,this->RootIndex,(TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *)param_2,
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

// FindNearestTriangles @ 14c9d0fa0

FIndex2i __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindNearestTriangles
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,
          TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *param_1,
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
            (this,this->RootIndex,(TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *)param_2,
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

// FindNearestVertex @ 14c9d1060

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::FindNearestVertex
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,TVector<double> *param_1,
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

// FindNearestVertex @ 14c9d10c0

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::FindNearestVertex
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,TVector<double> *param_1,double *param_2,
          double param_3,FQueryOptions *param_4)

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

// GetBoundingBox @ 14c9d1620

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::GetBoundingBox
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,
          TAxisAlignedBox3<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TAxisAlignedBox3<double> *pTVar3;
  
  if (-1 < this->RootIndex) {
    GetBox(this,__return_storage_ptr__,this->RootIndex);
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

// GetBox @ 14c9d16b0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::GetBox
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,
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

// GetBox @ 14c9d1770

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::GetBox
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,
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
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFGeomFlatUVMesh_PlanarCut_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// GetBox @ 14c9d1880

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::GetBox
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,
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

// GetBox @ 14c9d1940

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::GetBox
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,
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
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFGeomMesh_PlanarCut_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
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

// IsInside @ 14c9d5730

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::IsInside
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,TVector<double> *param_1)

{
  return false;
}

// IsInside @ 14c9d5740

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::IsInside
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,TVector<double> *param_1)

{
  return false;
}

// IsWithinDistanceSquared @ 14c9d5a90

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::IsWithinDistanceSquared
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,TVector<double> *param_1,
          double param_2,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// IsWithinDistanceSquared @ 14c9d5ae0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::IsWithinDistanceSquared
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,TVector<double> *param_1,double param_2,
          int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// SplitTriSetMidpoint @ 14c9e6650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::SplitTriSetMidpoint
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,
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
        goto LAB_14c9e757f;
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
LAB_14c9e757f:
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
      pTVar21 = TMeshQueries<UE::PlanarCut::FGeomFlatUVMesh>::GetTriBounds
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
      goto LAB_14c9e6b37;
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
LAB_14c9e6b37:
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

// SplitTriSetMidpoint @ 14c9e76e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::SplitTriSetMidpoint
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          int param_4,int param_5,int param_6,FBoxesSet *param_7,FBoxesSet *param_8,
          TAxisAlignedBox3<double> *param_9)

{
  int *piVar1;
  uint *puVar2;
  TVector<double> *pTVar3;
  double dVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FGeomMesh *pFVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FBoxesSet *pFVar14;
  TAxisAlignedBox3<double> *pTVar15;
  undefined1 auVar16 [16];
  bool bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  double *pdVar21;
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  undefined8 uVar24;
  uint uVar25;
  longlong *plVar26;
  uint uVar27;
  ulonglong uVar28;
  TDynamicVector<int,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar29;
  uint uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  uint uVar34;
  longlong lVar35;
  uint uVar36;
  int iVar37;
  undefined4 uVar38;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined8 uVar39;
  double dVar40;
  undefined4 uVar43;
  undefined4 uVar45;
  double dVar44;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  int local_1c8;
  longlong local_1c0;
  int local_198 [2];
  int local_190;
  int local_18c;
  undefined1 local_188 [16];
  double local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  TVector<double>_u_0 local_110;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  undefined1 local_e0 [24];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  
  pTVar15 = param_9;
  pFVar14 = param_7;
  iVar18 = param_4;
  uVar32 = (ulonglong)param_3;
  if (param_1->ArrayNum < 1) {
    pdVar21 = &local_140;
    local_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pdVar21 = &local_c8;
    local_c8 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_c0 = _UNK_150a9e648;
    local_a8 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_a0 = _UNK_1508ffb58;
    local_b8 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_b0 = _UNK_150a9e6d8;
  }
  dVar46 = pdVar21[1];
  dVar4 = pdVar21[2];
  dVar44 = pdVar21[3];
  (param_9->Min).field0_0x0._s_0.X = *pdVar21;
  (param_9->Min).field0_0x0._s_0.Y = dVar46;
  dVar46 = pdVar21[4];
  dVar40 = pdVar21[5];
  (param_9->Min).field0_0x0._s_0.Z = dVar4;
  (param_9->Max).field0_0x0._s_0.X = dVar44;
  (param_9->Max).field0_0x0._s_0.Y = dVar46;
  (param_9->Max).field0_0x0._s_0.Z = dVar40;
  if (param_6 < param_4) {
    local_198[0] = param_5;
    Core::Private::Function::CheckCallable(*(void **)&this->GetSplitAxis);
    plVar8 = *(longlong **)&(this->GetSplitAxis).field_0x28;
    pcVar10 = *(code **)&this->GetSplitAxis;
    plVar26 = (longlong *)&(this->GetSplitAxis).field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar26 = plVar8;
    }
    uVar24 = (**(code **)(*plVar26 + 8))();
    uVar38 = (undefined4)__real_7fefffffffffffff;
    uVar42 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar43 = (undefined4)__real_ffefffffffffffff;
    uVar45 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    uVar19 = (*pcVar10)(uVar24,local_198,pTVar15);
    iVar37 = 0;
    uVar30 = 0;
    uVar28 = (ulonglong)(int)uVar19;
    uVar36 = 0;
    if (0 < iVar18) {
      lVar35 = (uVar28 + uVar32 * 3) * 8;
      uVar27 = param_3;
      do {
        uVar34 = uVar36;
        if ((int)uVar27 < param_2->ArrayNum) {
          uVar34 = ~uVar27 >> 0x1f;
        }
        if (uVar34 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar10 = (code *)swi(3);
            iVar18 = (*pcVar10)();
            return iVar18;
          }
        }
        pFVar6 = (param_2->AllocatorInstance).Data;
        if (2 < uVar28) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          if (bVar17) {
            pcVar10 = (code *)swi(3);
            iVar18 = (*pcVar10)();
            return iVar18;
          }
        }
        dVar46 = *(double *)(pFVar6 + lVar35);
        uVar27 = uVar27 + 1;
        dVar4 = dVar46;
        if ((double)CONCAT44(uVar42,uVar38) <= dVar46) {
          dVar4 = (double)CONCAT44(uVar42,uVar38);
        }
        lVar35 = lVar35 + 0x18;
        if (dVar46 <= (double)CONCAT44(uVar45,uVar43)) {
          dVar46 = (double)CONCAT44(uVar45,uVar43);
        }
        uVar38 = SUB84(dVar4,0);
        uVar42 = (undefined4)((ulonglong)dVar4 >> 0x20);
        uVar43 = SUB84(dVar46,0);
        uVar45 = (undefined4)((ulonglong)dVar46 >> 0x20);
      } while ((int)(uVar27 - param_3) < iVar18);
    }
    dVar4 = __real_3fe0000000000000;
    dVar46 = ((double)CONCAT44(uVar45,uVar43) + (double)CONCAT44(uVar42,uVar38)) *
             __real_3fe0000000000000;
    if ((double)CONCAT44(uVar45,uVar43) - (double)CONCAT44(uVar42,uVar38) <= __real_3e45798ee2308c3a
       ) {
      iVar37 = iVar18 / 2;
      iVar18 = iVar18 - iVar37;
    }
    else {
      local_1c8 = iVar18 + -1;
      local_170 = (longlong)local_1c8;
      if (0 < local_1c8) {
        local_1c0 = 0;
        uVar33 = uVar32;
        iVar37 = 0;
        while( true ) {
          uVar27 = iVar37 + (int)uVar33;
          lVar35 = (uVar28 + ((int)uVar33 + local_1c0) * 3) * 8;
          while( true ) {
            uVar34 = uVar36;
            if ((int)uVar27 < param_2->ArrayNum) {
              uVar34 = ~uVar27 >> 0x1f;
            }
            if (uVar34 == 0) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar10 = (code *)swi(3);
                iVar18 = (*pcVar10)();
                return iVar18;
              }
            }
            pFVar6 = (param_2->AllocatorInstance).Data;
            if (2 < uVar19) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar17) {
                pcVar10 = (code *)swi(3);
                iVar18 = (*pcVar10)();
                return iVar18;
              }
            }
            if (dVar46 < *(double *)(pFVar6 + lVar35)) break;
            local_1c0 = local_1c0 + 1;
            iVar37 = iVar37 + 1;
            uVar27 = uVar27 + 1;
            lVar35 = lVar35 + 0x18;
          }
          lVar23 = (param_3 + local_170) * 0x18;
          uVar27 = local_1c8 + param_3;
          lVar35 = local_170;
          while( true ) {
            uVar20 = 0;
            uVar34 = uVar20;
            if ((int)uVar27 < param_2->ArrayNum) {
              uVar34 = ~uVar27 >> 0x1f;
            }
            if (uVar34 == 0) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar10 = (code *)swi(3);
                iVar18 = (*pcVar10)();
                return iVar18;
              }
            }
            pFVar6 = (param_2->AllocatorInstance).Data;
            if (2 < uVar19) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar17) {
                pcVar10 = (code *)swi(3);
                iVar18 = (*pcVar10)();
                return iVar18;
              }
            }
            if (*(double *)(pFVar6 + uVar28 * 8 + lVar23) <= dVar46) break;
            local_1c8 = local_1c8 + -1;
            uVar27 = uVar27 - 1;
            lVar35 = lVar35 + -1;
            lVar23 = lVar23 + -0x18;
          }
          iVar18 = param_4;
          local_170 = lVar35;
          if (lVar35 <= local_1c0) break;
          uVar34 = param_3 + iVar37;
          uVar27 = uVar20;
          if ((int)uVar34 < param_2->ArrayNum) {
            uVar27 = ~uVar34 >> 0x1f;
          }
          if (uVar27 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar10 = (code *)swi(3);
              iVar18 = (*pcVar10)();
              return iVar18;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          pFVar6 = pFVar9 + (uVar32 + local_1c0) * 0x18;
          uVar39 = *(undefined8 *)pFVar6;
          uVar11 = *(undefined8 *)(pFVar6 + 8);
          lVar23 = uVar32 + lVar35;
          uVar24 = *(undefined8 *)(pFVar9 + (uVar32 + local_1c0) * 0x18 + 0x10);
          uVar25 = (uint)~(param_3 + local_1c8) >> 0x1f;
          uVar27 = uVar20;
          if (param_3 + local_1c8 < param_2->ArrayNum) {
            uVar27 = uVar25;
          }
          if (uVar27 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar10 = (code *)swi(3);
              iVar18 = (*pcVar10)();
              return iVar18;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          pFVar6 = pFVar9 + lVar23 * 0x18;
          uVar12 = *(undefined8 *)pFVar6;
          uVar13 = *(undefined8 *)(pFVar6 + 8);
          uVar5 = *(undefined8 *)(pFVar9 + lVar23 * 0x18 + 0x10);
          uVar27 = uVar20;
          if ((int)uVar34 < param_2->ArrayNum) {
            uVar27 = ~uVar34 >> 0x1f;
          }
          uVar33 = (ulonglong)(uint)param_3;
          if (uVar27 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar10 = (code *)swi(3);
              iVar18 = (*pcVar10)();
              return iVar18;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          pFVar6 = pFVar9 + (param_3 + local_1c0) * 0x18;
          *(undefined8 *)pFVar6 = uVar12;
          *(undefined8 *)(pFVar6 + 8) = uVar13;
          *(undefined8 *)(pFVar9 + (param_3 + local_1c0) * 0x18 + 0x10) = uVar5;
          uVar27 = uVar20;
          if (local_1c8 + param_3 < param_2->ArrayNum) {
            uVar27 = uVar25;
          }
          if (uVar27 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar10 = (code *)swi(3);
              iVar18 = (*pcVar10)();
              return iVar18;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          pFVar6 = pFVar9 + lVar23 * 0x18;
          *(undefined8 *)pFVar6 = uVar39;
          *(undefined8 *)(pFVar6 + 8) = uVar11;
          *(undefined8 *)(pFVar9 + lVar23 * 0x18 + 0x10) = uVar24;
          uVar27 = uVar20;
          if (iVar37 + param_3 < param_1->ArrayNum) {
            uVar27 = (uint)~(iVar37 + param_3) >> 0x1f;
          }
          if (uVar27 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar10 = (code *)swi(3);
              iVar18 = (*pcVar10)();
              return iVar18;
            }
          }
          uVar38 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_1c0) * 4);
          uVar27 = uVar20;
          if (local_1c8 + param_3 < param_1->ArrayNum) {
            uVar27 = (uint)~(local_1c8 + param_3) >> 0x1f;
          }
          if (uVar27 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar10 = (code *)swi(3);
              iVar18 = (*pcVar10)();
              return iVar18;
            }
          }
          uVar42 = *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + lVar35) * 4);
          if (iVar37 + param_3 < param_1->ArrayNum) {
            uVar20 = (uint)~(iVar37 + param_3) >> 0x1f;
          }
          if (uVar20 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar10 = (code *)swi(3);
              iVar18 = (*pcVar10)();
              return iVar18;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + local_1c0) * 4) = uVar42;
          uVar27 = uVar36;
          if (local_1c8 + param_3 < param_1->ArrayNum) {
            uVar27 = (uint)~(local_1c8 + param_3) >> 0x1f;
          }
          if (uVar27 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar10 = (code *)swi(3);
              iVar18 = (*pcVar10)();
              return iVar18;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (param_3 + lVar35) * 4) = uVar38;
        }
      }
      iVar18 = iVar18 - iVar37;
    }
    pFVar14 = param_7;
    iVar31 = param_5 + 1;
    local_110._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_110._s_0.Y = _UNK_150a9e648;
    local_110._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_f8 = _UNK_150a9e6d8;
    local_f0 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_e8 = _UNK_1508ffb58;
    local_190 = SplitTriSetMidpoint(this,param_1,param_2,param_3,iVar37,iVar31,param_6,param_7,
                                    param_8,param_9);
    local_18c = SplitTriSetMidpoint(this,param_1,param_2,iVar37 + param_3,iVar18,iVar31,param_6,
                                    pFVar14,param_8,(TAxisAlignedBox3<double> *)&local_110._s_0);
    pTVar15 = param_9;
    pFVar14 = param_8;
    pTVar3 = &param_9->Max;
    dVar46 = (param_9->Min).field0_0x0._s_0.Y;
    uVar24 = local_110._s_0.Y;
    if (dVar46 <= local_110._s_0.Y) {
      uVar24 = dVar46;
    }
    dVar46 = (param_9->Min).field0_0x0._s_0.X;
    uVar39 = local_110._s_0.X;
    if (dVar46 <= local_110._s_0.X) {
      uVar39 = dVar46;
    }
    (param_9->Min).field0_0x0._s_0.Y = (double)uVar24;
    (param_9->Min).field0_0x0._s_0.X = (double)uVar39;
    dVar46 = (pTVar3->field0_0x0)._s_0.X;
    dVar44 = dStack_f8;
    if (dStack_f8 <= dVar46) {
      dVar44 = dVar46;
    }
    dVar46 = (param_9->Min).field0_0x0._s_0.Z;
    uVar24 = local_110._s_0.Z;
    if (dVar46 <= local_110._s_0.Z) {
      uVar24 = dVar46;
    }
    (pTVar3->field0_0x0)._s_0.X = dVar44;
    (param_9->Min).field0_0x0._s_0.Z = (double)uVar24;
    dVar46 = (param_9->Max).field0_0x0._s_0.Z;
    dVar44 = dStack_e8;
    if (dStack_e8 <= dVar46) {
      dVar44 = dVar46;
    }
    dVar46 = (param_9->Max).field0_0x0._s_0.Y;
    dVar40 = local_f0;
    if (local_f0 <= dVar46) {
      dVar40 = dVar46;
    }
    (param_9->Max).field0_0x0._s_0.Z = dVar44;
    (param_9->Max).field0_0x0._s_0.Y = dVar40;
    uVar19 = param_8->IBoxCur;
    param_8->IBoxCur = uVar19 + 1;
    TDynamicVector<int,512>::InsertAt(&param_8->BoxToIndex,&param_8->IIndicesCur,uVar19);
    uVar36 = pFVar14->IIndicesCur;
    pFVar14->IIndicesCur = uVar36 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar14->IndexList,&local_190,uVar36);
    uVar36 = pFVar14->IIndicesCur;
    pFVar14->IIndicesCur = uVar36 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar14->IndexList,&local_18c,uVar36);
    uVar27 = (pFVar14->BoxCenters).CurBlock;
    pTVar29 = &pFVar14->BoxCenters;
    uVar36 = (pFVar14->BoxCenters).CurBlockUsed;
    uVar34 = uVar27 * 0x200 + uVar36;
    dVar46 = ((pTVar3->field0_0x0)._s_0.X + (pTVar15->Min).field0_0x0._s_0.X) * dVar4;
    dVar44 = ((pTVar15->Max).field0_0x0._s_0.Y + (pTVar15->Min).field0_0x0._s_0.Y) * dVar4;
    dVar40 = ((pTVar15->Max).field0_0x0._s_0.Z + (pTVar15->Min).field0_0x0._s_0.Z) * dVar4;
    if (uVar19 == uVar34) {
      if (uVar36 == 0x200) {
        if (uVar27 == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar29);
        }
        pTVar29->CurBlock = pTVar29->CurBlock + 1;
        uVar27 = pTVar29->CurBlock;
        (pFVar14->BoxCenters).CurBlockUsed = 0;
        uVar36 = uVar30;
      }
    }
    else {
      if (uVar19 <= uVar34) {
        uVar32 = (ulonglong)(uVar19 & 0x1ff);
        lVar35 = *(longlong *)
                  ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar19 >> 9) * 8);
        *(double *)(lVar35 + uVar32 * 0x18) = dVar46;
        *(double *)(lVar35 + 8 + uVar32 * 0x18) = dVar44;
        *(double *)(lVar35 + 0x10 + uVar32 * 0x18) = dVar40;
        goto LAB_14c9e8788;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar29,uVar19);
      uVar36 = (pFVar14->BoxCenters).CurBlockUsed;
      if (uVar36 == 0x200) {
        if (pTVar29->CurBlock == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar29);
        }
        pTVar29->CurBlock = pTVar29->CurBlock + 1;
        (pFVar14->BoxCenters).CurBlockUsed = 0;
        uVar36 = uVar30;
      }
      uVar27 = pTVar29->CurBlock;
    }
    lVar23 = (longlong)(int)uVar36;
    lVar35 = *(longlong *)
              ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar27 * 8);
    *(double *)(lVar35 + lVar23 * 0x18) = dVar46;
    *(double *)(lVar35 + 8 + lVar23 * 0x18) = dVar44;
    *(double *)(lVar35 + 0x10 + lVar23 * 0x18) = dVar40;
    puVar2 = &(pFVar14->BoxCenters).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
LAB_14c9e8788:
    pFVar14 = param_8;
    pTVar29 = &param_8->BoxExtents;
    uVar27 = pTVar29->CurBlock;
    uVar36 = (param_8->BoxExtents).CurBlockUsed;
    uVar34 = uVar27 * 0x200 + uVar36;
    dVar46 = ((pTVar15->Max).field0_0x0._s_0.X - (pTVar15->Min).field0_0x0._s_0.X) * dVar4;
    dVar44 = ((pTVar15->Max).field0_0x0._s_0.Y - (pTVar15->Min).field0_0x0._s_0.Y) * dVar4;
    dVar4 = ((pTVar15->Max).field0_0x0._s_0.Z - (pTVar15->Min).field0_0x0._s_0.Z) * dVar4;
    if (uVar19 == uVar34) {
      if (uVar36 == 0x200) {
        if (uVar27 == (param_8->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar29);
        }
        pTVar29->CurBlock = pTVar29->CurBlock + 1;
        uVar27 = pTVar29->CurBlock;
        (pFVar14->BoxExtents).CurBlockUsed = 0;
        uVar36 = uVar30;
      }
    }
    else {
      if (uVar19 <= uVar34) {
        uVar32 = (ulonglong)(uVar19 & 0x1ff);
        lVar35 = *(longlong *)
                  ((param_8->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar19 >> 9) * 8);
        *(double *)(lVar35 + uVar32 * 0x18) = dVar46;
        *(double *)(lVar35 + 8 + uVar32 * 0x18) = dVar44;
        *(double *)(lVar35 + 0x10 + uVar32 * 0x18) = dVar4;
        return uVar19;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar29,uVar19);
      uVar36 = (pFVar14->BoxExtents).CurBlockUsed;
      if (uVar36 == 0x200) {
        if (pTVar29->CurBlock == (pFVar14->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar29);
        }
        pTVar29->CurBlock = pTVar29->CurBlock + 1;
        (pFVar14->BoxExtents).CurBlockUsed = 0;
        uVar36 = uVar30;
      }
      uVar27 = pTVar29->CurBlock;
    }
    lVar23 = (longlong)(int)uVar36;
    lVar35 = *(longlong *)
              ((pFVar14->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar27 * 8);
    *(double *)(lVar35 + lVar23 * 0x18) = dVar46;
    *(double *)(lVar35 + 8 + lVar23 * 0x18) = dVar44;
    *(double *)(lVar35 + 0x10 + lVar23 * 0x18) = dVar4;
    puVar2 = &(pFVar14->BoxExtents).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
    return uVar19;
  }
  uVar19 = param_7->IBoxCur;
  piVar1 = &param_7->IIndicesCur;
  param_7->IBoxCur = uVar19 + 1;
  param_9._0_4_ = uVar19;
  TDynamicVector<int,512>::InsertAt(&param_7->BoxToIndex,piVar1,uVar19);
  uVar36 = *piVar1;
  this_00 = &pFVar14->IndexList;
  *piVar1 = uVar36 + 1;
  TDynamicVector<int,512>::InsertAt(this_00,&param_4,uVar36);
  if (0 < iVar18) {
    lVar35 = uVar32 * 4;
    param_6 = param_3;
    do {
      uVar19 = *piVar1;
      *piVar1 = uVar19 + 1;
      uVar30 = ~param_6;
      uVar36 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar36 = uVar30 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar18 = (*pcVar10)();
        return iVar18;
      }
      uVar36 = this_00->CurBlock;
      uVar27 = (pFVar14->IndexList).CurBlockUsed;
      uVar34 = uVar36 * 0x200 + uVar27;
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (uVar19 == uVar34) {
        if (uVar27 == 0x200) {
          if (uVar36 == (pFVar14->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar27 = 0;
          uVar36 = this_00->CurBlock;
          (pFVar14->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar14->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar36 * 8) +
         (longlong)(int)uVar27 * 4) = *(undefined4 *)(pFVar6 + lVar35);
        puVar2 = &(pFVar14->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else if (uVar34 < uVar19) {
        TDynamicVector<int,512>::Resize(this_00,uVar19);
        uVar19 = (pFVar14->IndexList).CurBlockUsed;
        if (uVar19 == 0x200) {
          if (this_00->CurBlock == (pFVar14->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar19 = 0;
          (pFVar14->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar14->IndexList).Blocks.AllocatorInstance.Data +
           (longlong)(int)this_00->CurBlock * 8) + (longlong)(int)uVar19 * 4) =
             *(undefined4 *)(pFVar6 + lVar35);
        puVar2 = &(pFVar14->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else {
        *(undefined4 *)
         (*(longlong *)
           ((pFVar14->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8) +
         (ulonglong)(uVar19 & 0x1ff) * 4) = *(undefined4 *)(pFVar6 + lVar35);
      }
      uVar19 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar19 = uVar30 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        iVar18 = (*pcVar10)();
        return iVar18;
      }
      pFVar7 = this->Mesh;
      (**(code **)(pFVar7->_padding_ + 8))
                (pFVar7,&local_168,*(undefined4 *)((param_1->AllocatorInstance).Data + lVar35));
      (**(code **)(pFVar7->_padding_ + 0x18))(pFVar7,local_188,local_168);
      dVar4 = local_178;
      auVar16 = local_188;
      uVar38 = local_188._0_4_;
      uVar42 = local_188._4_4_;
      uVar43 = local_188._8_4_;
      uVar45 = local_188._12_4_;
      uVar47 = SUB84(local_178,0);
      uVar48 = (undefined4)((ulonglong)local_178 >> 0x20);
      local_158 = local_188;
      local_148 = local_178;
      pauVar22 = (undefined1 (*) [16])
                 (**(code **)(pFVar7->_padding_ + 0x18))(pFVar7,local_e0,local_164);
      local_188 = *pauVar22;
      dVar46 = auVar16._0_8_;
      local_178 = *(double *)pauVar22[1];
      if (dVar46 <= local_188._0_8_) {
        uVar55 = uVar38;
        uVar56 = uVar42;
        if (dVar46 < local_188._0_8_) {
          uVar55 = local_188._0_4_;
          uVar56 = local_188._4_4_;
        }
      }
      else {
        uVar38 = local_188._0_4_;
        uVar42 = local_188._4_4_;
        uVar55 = local_158._0_4_;
        uVar56 = local_158._4_4_;
      }
      uVar51 = local_158._8_4_;
      uVar52 = local_158._12_4_;
      uVar49 = local_188._8_4_;
      uVar50 = local_188._12_4_;
      if ((auVar16._8_8_ <= local_188._8_8_) &&
         (uVar49 = uVar43, uVar50 = uVar45, (double)local_158._8_8_ < local_188._8_8_)) {
        uVar51 = local_188._8_4_;
        uVar52 = local_188._12_4_;
      }
      uVar43 = SUB84(local_148,0);
      uVar45 = (undefined4)((ulonglong)local_148 >> 0x20);
      uVar41 = (undefined4)((ulonglong)local_178 >> 0x20);
      uVar53 = SUB84(local_178,0);
      uVar54 = uVar41;
      if ((dVar4 <= local_178) && (uVar53 = uVar47, uVar54 = uVar48, local_148 < local_178)) {
        uVar43 = SUB84(local_178,0);
        uVar45 = uVar41;
      }
      pauVar22 = (undefined1 (*) [16])
                 (**(code **)(pFVar7->_padding_ + 0x18))(pFVar7,local_e0,local_160);
      local_188 = *pauVar22;
      dVar46 = local_188._0_8_;
      local_178 = *(double *)pauVar22[1];
      uVar47 = local_188._0_4_;
      uVar48 = local_188._4_4_;
      if (((double)CONCAT44(uVar42,uVar38) <= dVar46) &&
         (uVar47 = uVar38, uVar48 = uVar42,
         (double)CONCAT44(uVar56,uVar55) <= dVar46 && dVar46 != (double)CONCAT44(uVar56,uVar55))) {
        uVar55 = local_188._0_4_;
        uVar56 = local_188._4_4_;
      }
      dVar46 = local_188._8_8_;
      uVar38 = local_188._8_4_;
      uVar42 = local_188._12_4_;
      if (((double)CONCAT44(uVar50,uVar49) <= dVar46) &&
         (uVar38 = uVar49, uVar42 = uVar50,
         (double)CONCAT44(uVar52,uVar51) <= dVar46 && dVar46 != (double)CONCAT44(uVar52,uVar51))) {
        uVar51 = local_188._8_4_;
        uVar52 = local_188._12_4_;
      }
      uVar41 = (undefined4)((ulonglong)local_178 >> 0x20);
      uVar49 = SUB84(local_178,0);
      uVar50 = uVar41;
      if (((double)CONCAT44(uVar54,uVar53) <= local_178) &&
         (uVar49 = uVar53, uVar50 = uVar54,
         (double)CONCAT44(uVar45,uVar43) <= local_178 &&
         local_178 != (double)CONCAT44(uVar45,uVar43))) {
        uVar43 = SUB84(local_178,0);
        uVar45 = uVar41;
      }
      dVar46 = (pTVar15->Max).field0_0x0._s_0.X;
      if (dVar46 <= (double)CONCAT44(uVar56,uVar55)) {
        dVar46 = (double)CONCAT44(uVar56,uVar55);
      }
      dVar4 = (pTVar15->Max).field0_0x0._s_0.Y;
      param_6 = param_6 + 1;
      if (dVar4 <= (double)CONCAT44(uVar52,uVar51)) {
        dVar4 = (double)CONCAT44(uVar52,uVar51);
      }
      dVar44 = *(double *)&(pTVar15->Min).field0_0x0;
      if (dVar44 <= (double)CONCAT44(uVar48,uVar47)) {
        uVar47 = SUB84(dVar44,0);
        uVar48 = (undefined4)((ulonglong)dVar44 >> 0x20);
      }
      dVar44 = *(double *)((longlong)&(pTVar15->Min).field0_0x0 + 8);
      if (dVar44 <= (double)CONCAT44(uVar42,uVar38)) {
        uVar38 = SUB84(dVar44,0);
        uVar42 = (undefined4)((ulonglong)dVar44 >> 0x20);
      }
      dVar44 = *(double *)((longlong)&(pTVar15->Min).field0_0x0 + 0x10);
      if (dVar44 <= (double)CONCAT44(uVar50,uVar49)) {
        uVar49 = SUB84(dVar44,0);
        uVar50 = (undefined4)((ulonglong)dVar44 >> 0x20);
      }
      (pTVar15->Max).field0_0x0._s_0.X = dVar46;
      dVar46 = (pTVar15->Max).field0_0x0._s_0.Z;
      lVar35 = lVar35 + 4;
      if (dVar46 <= (double)CONCAT44(uVar45,uVar43)) {
        dVar46 = (double)CONCAT44(uVar45,uVar43);
      }
      (pTVar15->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar48,uVar47);
      (pTVar15->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar42,uVar38);
      (pTVar15->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar50,uVar49);
      (pTVar15->Max).field0_0x0._s_0.Z = dVar46;
      (pTVar15->Max).field0_0x0._s_0.Y = dVar4;
      uVar19 = (uint)param_9;
    } while (param_6 - param_3 < iVar18);
  }
  pFVar14 = param_7;
  dVar40 = __real_3fe0000000000000;
  uVar30 = (param_7->BoxCenters).CurBlock;
  uVar36 = (param_7->BoxCenters).CurBlockUsed;
  uVar27 = uVar30 * 0x200 + uVar36;
  dVar46 = ((pTVar15->Min).field0_0x0._s_0.X + (pTVar15->Max).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar4 = ((pTVar15->Max).field0_0x0._s_0.Y + (pTVar15->Min).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar44 = ((pTVar15->Max).field0_0x0._s_0.Z + (pTVar15->Min).field0_0x0._s_0.Z) *
           __real_3fe0000000000000;
  if (uVar19 == uVar27) {
    if (uVar36 == 0x200) {
      if (uVar30 == (param_7->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&param_7->BoxCenters);
      }
      (pFVar14->BoxCenters).CurBlock = (pFVar14->BoxCenters).CurBlock + 1;
      uVar36 = 0;
      uVar30 = (pFVar14->BoxCenters).CurBlock;
      (pFVar14->BoxCenters).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar19 <= uVar27) {
      uVar32 = (ulonglong)(uVar19 & 0x1ff);
      lVar35 = *(longlong *)
                ((param_7->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8)
      ;
      *(double *)(lVar35 + uVar32 * 0x18) = dVar46;
      *(double *)(lVar35 + 8 + uVar32 * 0x18) = dVar4;
      *(double *)(lVar35 + 0x10 + uVar32 * 0x18) = dVar44;
      goto LAB_14c9e7d21;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(&param_7->BoxCenters,uVar19);
    uVar36 = (pFVar14->BoxCenters).CurBlockUsed;
    if (uVar36 == 0x200) {
      if ((pFVar14->BoxCenters).CurBlock == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar14->BoxCenters);
      }
      (pFVar14->BoxCenters).CurBlock = (pFVar14->BoxCenters).CurBlock + 1;
      uVar36 = 0;
      (pFVar14->BoxCenters).CurBlockUsed = 0;
    }
    uVar30 = (pFVar14->BoxCenters).CurBlock;
  }
  lVar23 = (longlong)(int)uVar36;
  lVar35 = *(longlong *)
            ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar30 * 8);
  *(double *)(lVar35 + lVar23 * 0x18) = dVar46;
  *(double *)(lVar35 + 8 + lVar23 * 0x18) = dVar4;
  *(double *)(lVar35 + 0x10 + lVar23 * 0x18) = dVar44;
  puVar2 = &(pFVar14->BoxCenters).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
LAB_14c9e7d21:
  uVar30 = (pFVar14->BoxExtents).CurBlock;
  uVar36 = (pFVar14->BoxExtents).CurBlockUsed;
  uVar27 = uVar30 * 0x200 + uVar36;
  dVar46 = ((pTVar15->Max).field0_0x0._s_0.X - (pTVar15->Min).field0_0x0._s_0.X) * dVar40;
  dVar4 = ((pTVar15->Max).field0_0x0._s_0.Y - (pTVar15->Min).field0_0x0._s_0.Y) * dVar40;
  dVar40 = ((pTVar15->Max).field0_0x0._s_0.Z - (pTVar15->Min).field0_0x0._s_0.Z) * dVar40;
  if (uVar19 == uVar27) {
    if (uVar36 == 0x200) {
      if (uVar30 == (pFVar14->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar14->BoxExtents);
      }
      (pFVar14->BoxExtents).CurBlock = (pFVar14->BoxExtents).CurBlock + 1;
      uVar36 = 0;
      uVar30 = (pFVar14->BoxExtents).CurBlock;
      (pFVar14->BoxExtents).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar19 <= uVar27) {
      uVar32 = (ulonglong)(uVar19 & 0x1ff);
      lVar35 = *(longlong *)
                ((pFVar14->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8)
      ;
      *(double *)(lVar35 + uVar32 * 0x18) = dVar46;
      *(double *)(lVar35 + 8 + uVar32 * 0x18) = dVar4;
      *(double *)(lVar35 + 0x10 + uVar32 * 0x18) = dVar40;
      return ~uVar19;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(&pFVar14->BoxExtents,uVar19);
    uVar36 = (pFVar14->BoxExtents).CurBlockUsed;
    if (uVar36 == 0x200) {
      if ((pFVar14->BoxExtents).CurBlock == (pFVar14->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&pFVar14->BoxExtents);
      }
      (pFVar14->BoxExtents).CurBlock = (pFVar14->BoxExtents).CurBlock + 1;
      (pFVar14->BoxExtents).CurBlockUsed = 0;
      uVar36 = 0;
    }
    uVar30 = (pFVar14->BoxExtents).CurBlock;
  }
  lVar23 = (longlong)(int)uVar36;
  lVar35 = *(longlong *)
            ((pFVar14->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar30 * 8);
  *(double *)(lVar35 + lVar23 * 0x18) = dVar46;
  *(double *)(lVar35 + 8 + lVar23 * 0x18) = dVar4;
  *(double *)(lVar35 + 0x10 + lVar23 * 0x18) = dVar40;
  puVar2 = &(pFVar14->BoxExtents).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
  return ~uVar19;
}

// SupportsNearestTriangle @ 14c9e9070

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::SupportsNearestTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this)

{
  return true;
}

// SupportsNearestTriangle @ 14c9e9080

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::SupportsNearestTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this)

{
  return true;
}

// SupportsPointContainment @ 14c9e9090

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::SupportsPointContainment
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this)

{
  return false;
}

// SupportsPointContainment @ 14c9e90a0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::SupportsPointContainment
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this)

{
  return false;
}

// SupportsTriangleRayIntersection @ 14c9e90b0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::SupportsTriangleRayIntersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this)

{
  return true;
}

// SupportsTriangleRayIntersection @ 14c9e90c0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::SupportsTriangleRayIntersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this)

{
  return true;
}

// TestAnyHitTriangle @ 14c9e90d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,TRay<double> *param_2,
          int *param_3,double param_4,FQueryOptions *param_5)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FGeomFlatUVMesh *pFVar5;
  FGeometryCollection *pFVar6;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStackY_238 [32];
  uint local_208 [2];
  int local_200;
  TManagedArray<UE::Math::TVector2<float>_> *local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
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
  undefined1 local_158 [16];
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
  undefined1 local_d8 [16];
  undefined8 local_c8;
  double local_c0;
  TVector<double> local_b8;
  EIntersectionType local_a0 [2];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar21 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_1f0 = (ulonglong)uVar21;
  lVar19 = *(longlong *)(pFVar2 + (ulonglong)(uVar21 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar21) {
    uVar17 = *(uint *)(lVar19 + (ulonglong)(uVar21 & 0x1ff) * 4);
    dVar10 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar17 < 0) {
      uVar17 = ~uVar17;
      dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar17,param_2);
    }
    else {
      iVar18 = uVar17 - 1;
      uVar17 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                       (ulonglong)(uVar21 + 1 & 0x1ff) * 4) - 1;
      dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar18,param_2);
      dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar17,param_2);
      if (dVar8 <= dVar9) {
        if (dVar10 < dVar8) {
          return false;
        }
        bVar12 = TestAnyHitTriangle(this,uVar17,param_2,param_3,param_4,param_5);
        if (!bVar12) {
          if (dVar10 < dVar9) {
            return false;
          }
          bVar12 = TestAnyHitTriangle(this,iVar18,param_2,param_3,param_4,param_5);
          return bVar12;
        }
        return true;
      }
      if (dVar10 < dVar9) {
        return false;
      }
      bVar12 = TestAnyHitTriangle(this,iVar18,param_2,param_3,param_4,param_5);
      if (bVar12) {
        return true;
      }
    }
    if ((dVar8 <= dVar10) &&
       (bVar12 = TestAnyHitTriangle(this,uVar17,param_2,param_3,param_4,param_5), bVar12)) {
      return true;
    }
    return false;
  }
  local_200 = *(int *)(lVar19 + (ulonglong)(uVar21 & 0x1ff) * 4);
  if (local_200 < 1) {
    return false;
  }
  uVar21 = uVar21 + 1;
  do {
    uVar17 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c9e91db:
      pFVar5 = this->Mesh;
      pFVar6 = pFVar5->Collection;
      uVar14 = 0;
      if ((int)uVar17 < *(int *)&(pFVar6->Indices).field_0x18) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      lVar19 = *(longlong *)&(pFVar6->Indices).field_0x10;
      local_1e8 = *(longlong *)(lVar19 + (longlong)(int)uVar17 * 0xc);
      iVar18 = *(int *)(lVar19 + 8 + (longlong)(int)uVar17 * 0xc);
      local_1f8 = pFVar5->CollectionUVs;
      lVar19 = (longlong)(int)local_1e8;
      if (((int)local_1e8 < 0 || *(int *)&local_1f8->field_0x18 <= (int)local_1e8) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      local_1d8._s_0.Z = 0.0;
      puVar1 = &local_1f8->field_0x10;
      local_1f8 = pFVar5->CollectionUVs;
      lVar20 = (longlong)local_1e8._4_4_;
      local_1d8._s_0.X = (double)*(float *)(*(longlong *)puVar1 + lVar19 * 8);
      local_1d8._s_0.Y = (double)*(float *)(*(longlong *)puVar1 + 4 + lVar19 * 8);
      if ((local_1e8 < 0 || *(int *)&local_1f8->field_0x18 <= local_1e8._4_4_) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      local_1c0._s_0.Z = 0.0;
      pTVar7 = pFVar5->CollectionUVs;
      local_1c0._s_0.X = (double)*(float *)(*(longlong *)&local_1f8->field_0x10 + lVar20 * 8);
      local_1c0._s_0.Y = (double)*(float *)(*(longlong *)&local_1f8->field_0x10 + 4 + lVar20 * 8);
      if ((iVar18 < 0 || *(int *)&pTVar7->field_0x18 <= iVar18) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      lVar19 = *(longlong *)&pTVar7->field_0x10;
      local_1a8._s_0.Z = 0.0;
      dVar10 = (double)*(float *)(lVar19 + (longlong)iVar18 * 8);
      local_1a8._s_0.Y = (double)*(float *)(lVar19 + 4 + (longlong)iVar18 * 8);
      uVar22 = SUB84(local_1a8._s_0.Y,0);
      uVar23 = (undefined4)((ulonglong)local_1a8._s_0.Y >> 0x20);
      local_1a8._s_0.X = dVar10;
      bVar12 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_1d8._s_0,
                          (TVector<double> *)&local_1c0._s_0,(TVector<double> *)&local_1a8._s_0);
      if (bVar12) {
        local_138._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.X;
        local_138._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_138._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        uStack_168._0_4_ = SUB84(local_1c0._s_0.Y,0);
        uStack_168._4_4_ = (undefined4)((ulonglong)local_1c0._8_8_ >> 0x20);
        local_118 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_160 = SUB84(local_1c0._s_0.Z,0);
        uStack_15c = (undefined4)((ulonglong)local_1c0._16_8_ >> 0x20);
        local_170._0_4_ = SUB84(local_1c0._s_0.X,0);
        local_170._4_4_ = (undefined4)((ulonglong)local_1c0._0_8_ >> 0x20);
        local_148 = 0;
        uStack_178 = local_1d8._16_4_;
        uStack_174 = local_1d8._20_4_;
        local_108._16_4_ = local_1d8._16_4_;
        local_108._20_4_ = local_1d8._20_4_;
        uStack_f0 = (undefined4)local_170;
        uStack_ec = local_170._4_4_;
        local_158._8_4_ = uVar22;
        local_158._0_8_ = dVar10;
        local_158._12_4_ = uVar23;
        local_d8._8_4_ = uVar22;
        local_d8._0_8_ = dVar10;
        local_d8._12_4_ = uVar23;
        local_188 = local_1d8._s_0.X;
        dStack_180 = local_1d8._s_0.Y;
        local_108._s_0.X = local_1d8._s_0.X;
        local_108._s_0.Y = local_1d8._s_0.Y;
        local_e8 = (undefined4)uStack_168;
        uStack_e4 = uStack_168._4_4_;
        local_c8 = 0;
        local_170 = local_1c0._s_0.X;
        uStack_168 = local_1c0._s_0.Y;
        uStack_e0 = uStack_160;
        uStack_dc = uStack_15c;
        bVar12 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_138._s_0,(TTriangle3<double> *)&local_108._s_0,
                            &local_c0,&local_b8,local_a0);
        if ((bVar12) && (local_c0 < param_5->MaxDistance)) {
          return true;
        }
      }
    }
    else {
      local_208[0] = uVar17;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar3 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar4 = *(code **)&param_5->TriangleFilterF;
      plVar16 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar16 = plVar3;
      }
      uVar15 = (**(code **)(*plVar16 + 8))();
      cVar11 = (*pcVar4)(uVar15,local_208);
      if (cVar11 != '\0') goto LAB_14c9e91db;
    }
    uVar21 = uVar21 + 1;
    if (local_200 < (int)(uVar21 - (int)local_1f0)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 14c9e9610

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,TRay<double> *param_1,
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

// TestAnyHitTriangle @ 14c9e9660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,TRay<double> *param_2,
          int *param_3,double param_4,FQueryOptions *param_5)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  FGeomMesh *pFVar4;
  FGeometryCollection *pFVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
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
  uVar18 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_1e8 = (ulonglong)uVar18;
  lVar19 = *(longlong *)(pFVar1 + (ulonglong)(uVar18 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar18) {
    uVar16 = *(uint *)(lVar19 + (ulonglong)(uVar18 & 0x1ff) * 4);
    dVar9 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar16 < 0) {
      uVar16 = ~uVar16;
      dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar16,param_2);
    }
    else {
      iVar17 = uVar16 - 1;
      uVar16 = *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                       (ulonglong)(uVar18 + 1 & 0x1ff) * 4) - 1;
      dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar17,param_2);
      dVar7 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar16,param_2);
      if (dVar7 <= dVar8) {
        if (dVar9 < dVar7) {
          return false;
        }
        bVar11 = TestAnyHitTriangle(this,uVar16,param_2,param_3,param_4,param_5);
        if (!bVar11) {
          if (dVar9 < dVar8) {
            return false;
          }
          bVar11 = TestAnyHitTriangle(this,iVar17,param_2,param_3,param_4,param_5);
          return bVar11;
        }
        return true;
      }
      if (dVar9 < dVar8) {
        return false;
      }
      bVar11 = TestAnyHitTriangle(this,iVar17,param_2,param_3,param_4,param_5);
      if (bVar11) {
        return true;
      }
    }
    if ((dVar7 <= dVar9) &&
       (bVar11 = TestAnyHitTriangle(this,uVar16,param_2,param_3,param_4,param_5), bVar11)) {
      return true;
    }
    return false;
  }
  local_1f0 = *(int *)(lVar19 + (ulonglong)(uVar18 & 0x1ff) * 4);
  if (local_1f0 < 1) {
    return false;
  }
  uVar18 = uVar18 + 1;
  do {
    uVar16 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c9e976b:
      pFVar4 = this->Mesh;
      pFVar5 = pFVar4->Collection;
      uVar13 = 0;
      if ((int)uVar16 < *(int *)&(pFVar5->Indices).field_0x18) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
      lVar19 = *(longlong *)&(pFVar5->Indices).field_0x10;
      local_1e0 = *(longlong *)(lVar19 + (longlong)(int)uVar16 * 0xc);
      iVar17 = *(int *)(lVar19 + 8 + (longlong)(int)uVar16 * 0xc);
      lVar21 = (longlong)iVar17;
      lVar19 = (longlong)(int)local_1e0;
      if (((int)local_1e0 < 0 || (pFVar4->GlobalVertices).ArrayNum <= (int)local_1e0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
      pFVar6 = (pFVar4->GlobalVertices).AllocatorInstance.Data;
      lVar20 = (longlong)local_1e0._4_4_;
      pFVar1 = pFVar6 + lVar19 * 0x18;
      local_1b8._s_0.X = (double)*(undefined8 *)pFVar1;
      local_1b8._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_1b8._s_0.Z = (double)*(undefined8 *)(pFVar6 + lVar19 * 0x18 + 0x10);
      if ((local_1e0 < 0 || (pFVar4->GlobalVertices).ArrayNum <= local_1e0._4_4_) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
      pFVar6 = (pFVar4->GlobalVertices).AllocatorInstance.Data;
      pFVar1 = pFVar6 + lVar20 * 0x18;
      dVar9 = *(double *)pFVar1;
      dVar7 = *(double *)(pFVar1 + 8);
      local_1d0._s_0.Z = (double)*(undefined8 *)(pFVar6 + lVar20 * 0x18 + 0x10);
      uVar22 = SUB84(local_1d0._s_0.Z,0);
      uVar23 = (undefined4)((ulonglong)local_1d0._s_0.Z >> 0x20);
      local_1d0._0_8_ = dVar9;
      local_1d0._8_8_ = dVar7;
      if ((iVar17 < 0 || (pFVar4->GlobalVertices).ArrayNum <= iVar17) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return (bool)uVar12;
      }
      pFVar1 = (pFVar4->GlobalVertices).AllocatorInstance.Data;
      local_1a0._s_0.X = (double)*(undefined8 *)(pFVar1 + lVar21 * 0x18);
      local_1a0._s_0.Y = (double)*(undefined8 *)(pFVar1 + lVar21 * 0x18 + 8);
      local_1a0._s_0.Z = (double)*(undefined8 *)(pFVar1 + lVar21 * 0x18 + 0x10);
      bVar11 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_1b8._s_0,
                          (TVector<double> *)&local_1d0._s_0,(TVector<double> *)&local_1a0._s_0);
      if (bVar11) {
        local_138._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_138._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_138._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.X;
        local_148 = *(undefined8 *)(pFVar1 + lVar21 * 0x18 + 0x10);
        local_158 = *(undefined8 *)(pFVar1 + lVar21 * 0x18);
        uStack_150 = *(undefined8 *)(pFVar1 + lVar21 * 0x18 + 8);
        local_118 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_168._0_4_ = SUB84(dVar7,0);
        uStack_168._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
        local_170._0_4_ = SUB84(dVar9,0);
        local_170._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
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
        local_170 = dVar9;
        uStack_168 = dVar7;
        uStack_160 = uVar22;
        uStack_15c = uVar23;
        uStack_e0 = uVar22;
        uStack_dc = uVar23;
        local_d8 = local_158;
        uStack_d0 = uStack_150;
        local_c8 = local_148;
        bVar11 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_138._s_0,(TTriangle3<double> *)&local_108._s_0,
                            &local_c0,&local_b8,local_a0);
        if ((bVar11) && (local_c0 < param_5->MaxDistance)) {
          return true;
        }
      }
    }
    else {
      local_1f8[0] = uVar16;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar2 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar3 = *(code **)&param_5->TriangleFilterF;
      plVar15 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar15 = plVar2;
      }
      uVar14 = (**(code **)(*plVar15 + 8))();
      cVar10 = (*pcVar3)(uVar14,local_1f8);
      if (cVar10 != '\0') goto LAB_14c9e976b;
    }
    uVar18 = uVar18 + 1;
    if (local_1f0 < (int)(uVar18 - (int)local_1e8)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 14c9e9b60

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestAnyHitTriangle
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,TRay<double> *param_1,
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

// TestIntersection @ 14c9e9bb0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,TTriangle3<double> *param_1,
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
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 14c9e9c90

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,
          TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 14c9e9d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,FGeomFlatUVMesh *param_1,
          TAxisAlignedBox3<double> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          FQueryOptions *param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  FGeometryCollection *pFVar5;
  longlong lVar6;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  TAxisAlignedBox3<double> *pTVar18;
  undefined8 uVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 auStackY_208 [32];
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  code *local_118 [2];
  undefined **local_108;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_100;
  undefined8 local_f0;
  TAxisAlignedBox3<double> local_e8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  dVar2 = (param_2->Min).field0_0x0._s_0.X;
  if (((dVar2 < (param_2->Max).field0_0x0._s_0.X || dVar2 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar2 = (param_2->Min).field0_0x0._s_0.Y, pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar2 < *pdVar1 || dVar2 == *pdVar1)) &&
     (dVar2 = (param_2->Min).field0_0x0._s_0.Z, pdVar1 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
    if (*(longlong *)param_3 != 0) {
      local_f0 = 0;
      local_108 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFGeomFlatUVMesh_PlanarCut_UE___Geometry_UE__UEBA_NPEBUFGeomFlatUVMesh_PlanarCut_5_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_118[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                     ::Call;
      local_100 = param_3;
      pTVar18 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          (&local_e8,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_118);
      dVar2 = (pTVar18->Min).field0_0x0._s_0.Y;
      dVar9 = (pTVar18->Min).field0_0x0._s_0.Z;
      dVar10 = (pTVar18->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar18->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar2;
      dVar2 = (pTVar18->Max).field0_0x0._s_0.Y;
      dVar11 = (pTVar18->Max).field0_0x0._s_0.Z;
      (param_2->Min).field0_0x0._s_0.Z = dVar9;
      (param_2->Max).field0_0x0._s_0.X = dVar10;
      (param_2->Max).field0_0x0._s_0.Y = dVar2;
      (param_2->Max).field0_0x0._s_0.Z = dVar11;
    }
    bVar12 = box_box_intersect(this,this->RootIndex,param_2);
    if (!bVar12) {
      return false;
    }
  }
  uVar22 = 0;
  iVar15 = (**(code **)(*(longlong *)&param_1->Collection->Indices + 0x60))();
  if (0 < iVar15) {
    lVar23 = 0;
    lVar21 = 0;
    do {
      if (*(longlong *)param_3 == 0) {
        PlanarCut::FGeomFlatUVMesh::GetTriVertices
                  (param_1,uVar22,(TVector<double> *)&local_b8._s_0,
                   (TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_88._s_0);
      }
      else {
        pFVar5 = param_1->Collection;
        uVar16 = 0;
        if ((int)uVar22 < *(int *)&(pFVar5->Indices).field_0x18) {
          uVar16 = ~uVar22 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        lVar6 = *(longlong *)&(pFVar5->Indices).field_0x10;
        uVar16 = *(uint *)(lVar6 + lVar21);
        uVar3 = *(uint *)(lVar6 + 4 + lVar21);
        uVar4 = *(uint *)(lVar6 + 8 + lVar21);
        pTVar7 = param_1->CollectionUVs;
        uVar17 = 0;
        if ((int)uVar16 < *(int *)&pTVar7->field_0x18) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        lVar6 = *(longlong *)&pTVar7->field_0x10;
        local_1a8 = (double)*(float *)(lVar6 + 4 + (longlong)(int)uVar16 * 8);
        local_1b0 = (double)*(float *)(lVar6 + (longlong)(int)uVar16 * 8);
        local_1a0 = 0;
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar8 = *(code **)param_3;
        plVar20 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar20 = (longlong *)&param_3->field_0x10;
        }
        uVar19 = (**(code **)(*plVar20 + 8))();
        (*pcVar8)(&local_168,uVar19,&local_1b0);
        pTVar7 = param_1->CollectionUVs;
        local_b8._s_0.X = local_168;
        local_b8._s_0.Y = dStack_160;
        local_b8._s_0.Z = local_158;
        uVar16 = 0;
        if ((int)uVar3 < *(int *)&pTVar7->field_0x18) {
          uVar16 = ~uVar3 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        lVar6 = *(longlong *)&pTVar7->field_0x10;
        local_190 = (double)*(float *)(lVar6 + 4 + (longlong)(int)uVar3 * 8);
        local_198 = (double)*(float *)(lVar6 + (longlong)(int)uVar3 * 8);
        local_188 = 0;
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar8 = *(code **)param_3;
        plVar20 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar20 = (longlong *)&param_3->field_0x10;
        }
        uVar19 = (**(code **)(*plVar20 + 8))();
        (*pcVar8)(&local_150,uVar19,&local_198);
        pTVar7 = param_1->CollectionUVs;
        local_a0._s_0.Z = local_140;
        local_a0._s_0.X = local_150;
        local_a0._s_0.Y = dStack_148;
        uVar16 = 0;
        if ((int)uVar4 < *(int *)&pTVar7->field_0x18) {
          uVar16 = ~uVar4 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        lVar6 = *(longlong *)&pTVar7->field_0x10;
        local_178 = (double)*(float *)(lVar6 + 4 + (longlong)(int)uVar4 * 8);
        local_180 = (double)*(float *)(lVar6 + (longlong)(int)uVar4 * 8);
        local_170 = 0;
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar8 = *(code **)param_3;
        plVar20 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar20 = (longlong *)&param_3->field_0x10;
        }
        uVar19 = (**(code **)(*plVar20 + 8))();
        (*pcVar8)(&local_138,uVar19,&local_180);
        local_88._0_4_ = local_138;
        local_88._4_4_ = uStack_134;
        local_88._8_4_ = uStack_130;
        local_88._12_4_ = uStack_12c;
        local_88._s_0.Z = local_128;
      }
      cVar14 = (**(code **)(this->_padding_ + 0x88))(this,&local_b8,param_4);
      if (cVar14 != '\0') {
        return true;
      }
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 1;
      lVar21 = lVar21 + 0xc;
    } while (lVar23 < iVar15);
  }
  return false;
}

// TestIntersection @ 14c9ea140

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,TTriangle3<double> *param_1,
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
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 14c9ea220

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,
          TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<UE::PlanarCut::FGeomMesh> **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 14c9ea290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,FGeomMesh *param_1,
          TAxisAlignedBox3<double> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          FQueryOptions *param_4)

{
  double *pdVar1;
  undefined1 *puVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  TAxisAlignedBox3<double> *pTVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStackY_158 [32];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  FQueryOptions *local_110;
  TVector<double>_u_0 local_108 [2];
  undefined1 local_d8 [24];
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_c0;
  undefined8 local_b0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  dVar3 = (param_2->Min).field0_0x0._s_0.X;
  iVar15 = 0;
  local_110 = param_4;
  if (((dVar3 < (param_2->Max).field0_0x0._s_0.X || dVar3 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar3 = (param_2->Min).field0_0x0._s_0.Y, pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar3 < *pdVar1 || dVar3 == *pdVar1)) &&
     (dVar3 = (param_2->Min).field0_0x0._s_0.Z, pdVar1 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar3 < *pdVar1 || dVar3 == *pdVar1)) {
    if (*(longlong *)param_3 != 0) {
      local_b0 = 0;
      local_d8._16_8_ =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFGeomMesh_PlanarCut_UE___Geometry_UE__UEBA_NPEBUFGeomMesh_PlanarCut_5_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_d8._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
           ::Call;
      local_c0 = param_3;
      pTVar11 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          ((TAxisAlignedBox3<double> *)&local_108[0]._s_0,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_d8);
      dVar3 = (pTVar11->Min).field0_0x0._s_0.Y;
      dVar5 = (pTVar11->Min).field0_0x0._s_0.Z;
      dVar6 = (pTVar11->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar11->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar3;
      dVar3 = (pTVar11->Max).field0_0x0._s_0.Y;
      dVar7 = (pTVar11->Max).field0_0x0._s_0.Z;
      (param_2->Min).field0_0x0._s_0.Z = dVar5;
      (param_2->Max).field0_0x0._s_0.X = dVar6;
      (param_2->Max).field0_0x0._s_0.Y = dVar3;
      (param_2->Max).field0_0x0._s_0.Z = dVar7;
    }
    bVar8 = box_box_intersect(this,this->RootIndex,param_2);
    if (!bVar8) {
      return false;
    }
  }
  iVar10 = (**(code **)(*(longlong *)&param_1->Collection->Indices + 0x60))();
  if (0 < iVar10) {
    do {
      if (*(longlong *)param_3 == 0) {
        PlanarCut::FGeomMesh::GetTriVertices
                  (param_1,iVar15,(TVector<double> *)&local_a8._s_0,
                   (TVector<double> *)&local_90._s_0,(TVector<double> *)&local_78._s_0);
      }
      else {
        (**(code **)(param_1->_padding_ + 8))(param_1,&local_120,iVar15);
        uVar12 = (**(code **)(param_1->_padding_ + 0x18))(param_1,local_d8,local_120);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        puVar2 = &param_3->field_0x10;
        pcVar4 = *(code **)param_3;
        plVar14 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar14 = (longlong *)puVar2;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar4)(local_108,uVar13,uVar12);
        local_a8._0_4_ = local_108[0]._0_4_;
        local_a8._4_4_ = local_108[0]._4_4_;
        local_a8._8_4_ = local_108[0]._8_4_;
        local_a8._12_4_ = local_108[0]._12_4_;
        local_a8._s_0.Z = (double)local_108[0]._16_8_;
        uVar12 = (**(code **)(param_1->_padding_ + 0x18))(param_1,local_d8,local_11c);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar4 = *(code **)param_3;
        plVar14 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar14 = (longlong *)puVar2;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar4)(local_108,uVar13,uVar12);
        local_90._0_4_ = local_108[0]._0_4_;
        local_90._4_4_ = local_108[0]._4_4_;
        local_90._8_4_ = local_108[0]._8_4_;
        local_90._12_4_ = local_108[0]._12_4_;
        local_90._s_0.Z = (double)local_108[0]._16_8_;
        uVar12 = (**(code **)(param_1->_padding_ + 0x18))(param_1,local_d8,local_118);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar4 = *(code **)param_3;
        plVar14 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar14 = (longlong *)puVar2;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        (*pcVar4)(local_108,uVar13,uVar12);
        local_78._0_4_ = local_108[0]._0_4_;
        local_78._4_4_ = local_108[0]._4_4_;
        local_78._8_4_ = local_108[0]._8_4_;
        local_78._12_4_ = local_108[0]._12_4_;
        local_78._s_0.Z = (double)local_108[0]._16_8_;
      }
      cVar9 = (**(code **)(this->_padding_ + 0x88))(this,&local_a8,local_110);
      if (cVar9 != '\0') {
        return true;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar10);
  }
  return false;
}

// TestSelfIntersection @ 14c9ea520

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestSelfIntersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,bool param_1,FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TestSelfIntersection @ 14c9ea560

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestSelfIntersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,bool param_1,FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TreeTraversalImpl @ 14c9ed580

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::TreeTraversalImpl
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,int param_2,
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
LAB_14c9ed696:
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
          if (cVar10 != '\0') goto LAB_14c9ed696;
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

// TreeTraversalImpl @ 14c9eda50

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::TreeTraversalImpl
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,int param_2,
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
LAB_14c9edb66:
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
          if (cVar10 != '\0') goto LAB_14c9edb66;
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

// box_box_distsqr @ 14c9f20f0

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::box_box_distsqr
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,
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

// box_box_distsqr @ 14c9f21d0

double __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::box_box_distsqr
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,
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

// box_box_intersect @ 14c9f22b0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::box_box_intersect
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,
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

// box_box_intersect @ 14c9f23d0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::box_box_intersect
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,
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

// find_any_intersection @ 14c9f4040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::find_any_intersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,
          TTriangle3<double> *param_2,TAxisAlignedBox3<double> *param_3,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_4,FQueryOptions *param_5)

{
  longlong lVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStackY_f8 [32];
  TTriangle3<double> *local_c8 [2];
  int local_b8 [4];
  TVector<double> local_a8;
  TVector<double> local_90;
  TVector<double> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar2 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar1 = (ulonglong)(uVar2 & 0x1ff) * 4;
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8);
  local_c8[0] = param_2;
  if ((int)uVar2 < this->TrianglesEnd) {
    iVar9 = *(int *)(lVar1 + lVar4);
    if (0 < iVar9) {
      uVar13 = uVar2 + 1;
      do {
        iVar10 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c9f4148:
          PlanarCut::FGeomFlatUVMesh::GetTriVertices
                    (this->Mesh,iVar10,&local_a8,&local_90,&local_78);
          cVar7 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_c8[0],&local_a8);
          if (cVar7 != '\0') {
            return iVar10;
          }
        }
        else {
          local_b8[0] = iVar10;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_5->TriangleFilterF;
          plVar12 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar12 = plVar5;
          }
          uVar11 = (**(code **)(*plVar12 + 8))();
          cVar7 = (*pcVar6)(uVar11,local_b8);
          if (cVar7 != '\0') goto LAB_14c9f4148;
        }
        uVar13 = uVar13 + 1;
      } while ((int)(uVar13 - uVar2) <= iVar9);
    }
  }
  else {
    uVar13 = *(uint *)(lVar1 + lVar4);
    if (-1 < (int)uVar13) {
      iVar10 = -1;
      iVar9 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      bVar8 = box_box_intersect(this,uVar13 - 1,param_3);
      if (bVar8) {
        local_c8[0] = *(TTriangle3<double> **)param_4;
        local_c8[1] = *(TTriangle3<double> **)&param_4->field_0x8;
        iVar10 = find_any_intersection
                           (this,uVar13 - 1,param_2,param_3,
                            (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                             *)local_c8,param_5);
        if (iVar10 != -1) {
          return iVar10;
        }
      }
      bVar8 = box_box_intersect(this,iVar9 + -1,param_3);
      if (!bVar8) {
        return iVar10;
      }
      local_c8[0] = *(TTriangle3<double> **)param_4;
      local_c8[1] = *(TTriangle3<double> **)&param_4->field_0x8;
      iVar9 = find_any_intersection
                        (this,iVar9 + -1,param_2,param_3,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                          *)local_c8,param_5);
      return iVar9;
    }
    bVar8 = box_box_intersect(this,~uVar13,param_3);
    if (bVar8) {
      local_c8[0] = *(TTriangle3<double> **)param_4;
      local_c8[1] = *(TTriangle3<double> **)&param_4->field_0x8;
      iVar9 = find_any_intersection
                        (this,~uVar13,param_2,param_3,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                          *)local_c8,param_5);
      return iVar9;
    }
  }
  return -1;
}

// find_any_intersection @ 14c9f42d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::find_any_intersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,
          TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *param_2,
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
  FGeomFlatUVMesh *pFVar8;
  FGeometryCollection *pFVar9;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char cVar16;
  bool bVar17;
  undefined1 uVar18;
  uint uVar19;
  undefined8 uVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  undefined1 auStackY_378 [32];
  int local_304;
  int local_300 [2];
  uint local_2f8 [2];
  uint local_2f0;
  ulonglong local_2e8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  *local_2e0;
  undefined8 local_2d8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2c8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2b8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2a8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_298;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_288;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_278;
  TVector<double>_u_0 local_268;
  double local_250;
  double local_248;
  double local_240;
  TVector<double>_u_0 local_238;
  double local_220;
  double local_218;
  double local_210;
  TVector<double>_u_0 local_208;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  TAxisAlignedBox3<double> local_190;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  double local_108;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  uVar28 = (ulonglong)((uint)param_1 >> 9);
  uVar27 = (ulonglong)(param_1 & 0x1ff);
  local_2e0 = param_6;
  uVar19 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar28 * 8) +
                    uVar27 * 4);
  uVar21 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_2f0 = uVar19;
  if ((int)uVar19 < this->TrianglesEnd) {
    if ((int)uVar21 < param_2->TrianglesEnd) {
      local_304 = 1;
      iVar29 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
      iVar4 = *(int *)(*(longlong *)
                        ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
      if (iVar4 < 1) {
        return false;
      }
      do {
        uVar21 = uVar21 + 1;
        local_2e8 = (ulonglong)uVar21;
        iVar5 = *(int *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c9f447c:
          PlanarCut::FGeomFlatUVMesh::GetTriVertices
                    (param_2->Mesh,iVar5,(TVector<double> *)&local_158._s_0,
                     (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_128._s_0);
          if (*(void **)param_3 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar7 = *(code **)param_3;
            puVar26 = &param_3->field_0x10;
            plVar22 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar26;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar7)(&local_1d8,uVar20,&local_158);
            local_158._s_0.X = local_1d8;
            local_158._s_0.Y = dStack_1d0;
            local_158._s_0.Z = local_1c8;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar7 = *(code **)param_3;
            plVar22 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar26;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar7)(&local_1c0,uVar20,&local_140);
            local_140._s_0.X = local_1c0;
            local_140._s_0.Y = dStack_1b8;
            local_140._s_0.Z = local_1b0;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar7 = *(code **)param_3;
            plVar22 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar22 = (longlong *)puVar26;
            }
            uVar20 = (**(code **)(*plVar22 + 8))();
            (*pcVar7)(&local_1a8,uVar20,&local_128);
            local_128._s_0.X = local_1a8;
            local_128._s_0.Y = dStack_1a0;
            local_128._s_0.Z = local_198;
          }
          if (0 < iVar29) {
            uVar21 = uVar19 + 1;
            do {
              uVar6 = *(uint *)(*(longlong *)
                                 ((this->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar21 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
              if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14c9f460b:
                pFVar8 = this->Mesh;
                pFVar9 = pFVar8->Collection;
                uVar19 = 0;
                if ((int)uVar6 < *(int *)&(pFVar9->Indices).field_0x18) {
                  uVar19 = ~uVar6 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar7 = (code *)swi(3);
                  uVar18 = (*pcVar7)();
                  return (bool)uVar18;
                }
                lVar24 = *(longlong *)&(pFVar9->Indices).field_0x10;
                pTVar10 = pFVar8->CollectionUVs;
                local_2d8 = *(longlong *)(lVar24 + (longlong)(int)uVar6 * 0xc);
                iVar5 = *(int *)(lVar24 + 8 + (longlong)(int)uVar6 * 0xc);
                lVar24 = (longlong)(int)local_2d8;
                if (((int)local_2d8 < 0 || *(int *)&pTVar10->field_0x18 <= (int)local_2d8) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar7 = (code *)swi(3);
                  uVar18 = (*pcVar7)();
                  return (bool)uVar18;
                }
                lVar11 = *(longlong *)&pTVar10->field_0x10;
                lVar25 = (longlong)local_2d8._4_4_;
                local_f8 = 0;
                local_100 = (double)*(float *)(lVar11 + 4 + lVar24 * 8);
                local_108 = (double)*(float *)(lVar11 + lVar24 * 8);
                pTVar10 = pFVar8->CollectionUVs;
                if ((local_2d8 < 0 || *(int *)&pTVar10->field_0x18 <= local_2d8._4_4_) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar7 = (code *)swi(3);
                  uVar18 = (*pcVar7)();
                  return (bool)uVar18;
                }
                lVar24 = *(longlong *)&pTVar10->field_0x10;
                local_e0 = 0;
                local_e8 = (double)*(float *)(lVar24 + 4 + lVar25 * 8);
                local_f0 = (double)*(float *)(lVar24 + lVar25 * 8);
                pTVar10 = pFVar8->CollectionUVs;
                if ((iVar5 < 0 || *(int *)&pTVar10->field_0x18 <= iVar5) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar7 = (code *)swi(3);
                  uVar18 = (*pcVar7)();
                  return (bool)uVar18;
                }
                lVar24 = *(longlong *)&pTVar10->field_0x10;
                local_d0 = (double)*(float *)(lVar24 + 4 + (longlong)iVar5 * 8);
                local_d8 = (double)*(float *)(lVar24 + (longlong)iVar5 * 8);
                local_c8 = 0;
                cVar16 = (**(code **)local_2e0)
                                   (*(undefined8 *)&local_2e0->field_0x8,&local_158,&local_108);
                uVar19 = local_2f0;
                if (cVar16 != '\0') {
                  return true;
                }
              }
              else {
                local_2f8[0] = uVar6;
                Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                plVar22 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                pcVar7 = *(code **)&param_7->TriangleFilterF;
                plVar23 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                if (plVar22 != (longlong *)0x0) {
                  plVar23 = plVar22;
                }
                uVar20 = (**(code **)(*plVar23 + 8))();
                cVar16 = (*pcVar7)(uVar20,local_2f8);
                if (cVar16 != '\0') goto LAB_14c9f460b;
              }
              uVar21 = uVar21 + 1;
            } while ((int)(uVar21 - uVar19) <= iVar29);
          }
        }
        else {
          local_300[0] = iVar5;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar22 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar7 = *(code **)&param_8->TriangleFilterF;
          plVar23 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar22 != (longlong *)0x0) {
            plVar23 = plVar22;
          }
          uVar20 = (**(code **)(*plVar23 + 8))();
          cVar16 = (*pcVar7)(uVar20,local_300);
          if (cVar16 != '\0') goto LAB_14c9f447c;
        }
        local_304 = local_304 + 1;
        uVar21 = (uint)local_2e8;
        if (iVar4 < local_304) {
          return false;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar21 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_190,param_4,param_3);
    pFVar12 = (this->IndexList).Blocks.AllocatorInstance.Data;
    uVar21 = *(uint *)(*(longlong *)(pFVar12 + (ulonglong)(uVar19 >> 9) * 8) +
                      (ulonglong)(uVar19 & 0x1ff) * 4);
    if ((int)uVar21 < 0) {
      bVar17 = box_box_intersect(this,~uVar21,&local_190);
      if (!bVar17) {
        return false;
      }
      local_298._0_8_ = *(undefined8 *)param_6;
      local_298._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar17 = find_any_intersection
                         (this,~uVar21,param_2,param_3,param_4,param_5 + 1,&local_298,param_7,
                          param_8);
      return bVar17;
    }
    iVar29 = *(int *)(*(longlong *)(pFVar12 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                     (ulonglong)(uVar19 + 1 & 0x1ff) * 4) + -1;
    bVar17 = box_box_intersect(this,uVar21 - 1,&local_190);
    if (bVar17) {
      local_288._0_8_ = *(undefined8 *)param_6;
      local_288._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar17 = find_any_intersection
                         (this,uVar21 - 1,param_2,param_3,param_4,param_5 + 1,&local_288,param_7,
                          param_8);
      if (bVar17) {
        return true;
      }
    }
    bVar17 = box_box_intersect(this,iVar29,&local_190);
    if (bVar17) {
      local_278._0_8_ = *(undefined8 *)param_6;
      local_278._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar17 = find_any_intersection
                         (this,iVar29,param_2,param_3,param_4,param_5 + 1,&local_278,param_7,param_8
                         );
      return bVar17;
    }
    return false;
  }
  lVar24 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar28 * 8);
  dVar1 = *(double *)(lVar24 + uVar27 * 0x18);
  lVar11 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar28 * 8);
  dVar2 = *(double *)(lVar24 + 8 + uVar27 * 0x18);
  dVar3 = *(double *)(lVar24 + 0x10 + uVar27 * 0x18);
  dVar13 = dVar1 - *(double *)(lVar11 + uVar27 * 0x18);
  dVar14 = dVar2 - *(double *)(lVar11 + 8 + uVar27 * 0x18);
  dVar15 = dVar3 - *(double *)(lVar11 + 0x10 + uVar27 * 0x18);
  dVar1 = dVar1 + *(double *)(lVar11 + uVar27 * 0x18);
  dVar2 = dVar2 + *(double *)(lVar11 + 8 + uVar27 * 0x18);
  dVar3 = dVar3 + *(double *)(lVar11 + 0x10 + uVar27 * 0x18);
  pFVar12 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
  uVar19 = *(uint *)(*(longlong *)(pFVar12 + (ulonglong)(uVar21 >> 9) * 8) +
                    (ulonglong)(uVar21 & 0x1ff) * 4);
  if ((int)uVar19 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_268._s_0,~uVar19,param_3);
    if (((local_268._s_0.X < dVar1) && (dVar13 < local_250)) &&
       ((local_268._s_0.Y < dVar2 &&
        (((dVar14 < local_248 && (local_268._s_0.Z < dVar3)) && (dVar15 < local_240)))))) {
      local_2c8._0_8_ = *(undefined8 *)param_6;
      local_2c8._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar17 = find_any_intersection
                         (this,param_1,param_2,param_3,param_4,param_5 + 1,&local_2c8,param_7,
                          param_8);
      return bVar17;
    }
    return false;
  }
  iVar29 = *(int *)(*(longlong *)(pFVar12 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                   (ulonglong)(uVar21 + 1 & 0x1ff) * 4) + -1;
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_238._s_0,uVar19 - 1,param_3);
  if ((((local_238._s_0.X < dVar1) && (dVar13 < local_220)) && (local_238._s_0.Y < dVar2)) &&
     (((dVar14 < local_218 && (local_238._s_0.Z < dVar3)) && (dVar15 < local_210)))) {
    local_2b8._0_8_ = *(undefined8 *)param_6;
    local_2b8._8_8_ = *(undefined8 *)&param_6->field_0x8;
    bVar17 = find_any_intersection
                       (this,param_1,param_2,param_3,uVar19 - 1,param_5 + 1,&local_2b8,param_7,
                        param_8);
    if (bVar17) {
      return true;
    }
  }
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_208._s_0,iVar29,param_3);
  if (dVar1 <= local_208._s_0.X) {
    return false;
  }
  if (local_1f0 <= dVar13) {
    return false;
  }
  if (dVar2 <= local_208._s_0.Y) {
    return false;
  }
  if (local_1e8 <= dVar14) {
    return false;
  }
  if (local_208._s_0.Z < dVar3) {
    if (dVar15 < local_1e0) {
      local_2a8._0_8_ = *(undefined8 *)param_6;
      local_2a8._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar17 = find_any_intersection
                         (this,param_1,param_2,param_3,iVar29,param_5 + 1,&local_2a8,param_7,param_8
                         );
      return bVar17;
    }
    return false;
  }
  return false;
}

// find_any_intersection @ 14c9f4cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::find_any_intersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,TTriangle3<double> *param_2,
          TAxisAlignedBox3<double> *param_3,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_4,FQueryOptions *param_5)

{
  longlong lVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStackY_f8 [32];
  TTriangle3<double> *local_c8 [2];
  int local_b8 [4];
  TVector<double> local_a8;
  TVector<double> local_90;
  TVector<double> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar2 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar1 = (ulonglong)(uVar2 & 0x1ff) * 4;
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8);
  local_c8[0] = param_2;
  if ((int)uVar2 < this->TrianglesEnd) {
    iVar9 = *(int *)(lVar1 + lVar4);
    if (0 < iVar9) {
      uVar13 = uVar2 + 1;
      do {
        iVar10 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c9f4dd8:
          PlanarCut::FGeomMesh::GetTriVertices(this->Mesh,iVar10,&local_a8,&local_90,&local_78);
          cVar7 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_c8[0],&local_a8);
          if (cVar7 != '\0') {
            return iVar10;
          }
        }
        else {
          local_b8[0] = iVar10;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_5->TriangleFilterF;
          plVar12 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar12 = plVar5;
          }
          uVar11 = (**(code **)(*plVar12 + 8))();
          cVar7 = (*pcVar6)(uVar11,local_b8);
          if (cVar7 != '\0') goto LAB_14c9f4dd8;
        }
        uVar13 = uVar13 + 1;
      } while ((int)(uVar13 - uVar2) <= iVar9);
    }
  }
  else {
    uVar13 = *(uint *)(lVar1 + lVar4);
    if (-1 < (int)uVar13) {
      iVar10 = -1;
      iVar9 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      bVar8 = box_box_intersect(this,uVar13 - 1,param_3);
      if (bVar8) {
        local_c8[0] = *(TTriangle3<double> **)param_4;
        local_c8[1] = *(TTriangle3<double> **)&param_4->field_0x8;
        iVar10 = find_any_intersection
                           (this,uVar13 - 1,param_2,param_3,
                            (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                             *)local_c8,param_5);
        if (iVar10 != -1) {
          return iVar10;
        }
      }
      bVar8 = box_box_intersect(this,iVar9 + -1,param_3);
      if (!bVar8) {
        return iVar10;
      }
      local_c8[0] = *(TTriangle3<double> **)param_4;
      local_c8[1] = *(TTriangle3<double> **)&param_4->field_0x8;
      iVar9 = find_any_intersection
                        (this,iVar9 + -1,param_2,param_3,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                          *)local_c8,param_5);
      return iVar9;
    }
    bVar8 = box_box_intersect(this,~uVar13,param_3);
    if (bVar8) {
      local_c8[0] = *(TTriangle3<double> **)param_4;
      local_c8[1] = *(TTriangle3<double> **)&param_4->field_0x8;
      iVar9 = find_any_intersection
                        (this,~uVar13,param_2,param_3,
                         (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                          *)local_c8,param_5);
      return iVar9;
    }
  }
  return -1;
}

// find_any_intersection @ 14c9f4f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::find_any_intersection
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,
          TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_6,FQueryOptions *param_7,FQueryOptions *param_8)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  FGeomMesh *pFVar9;
  FGeometryCollection *pFVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  bool bVar16;
  undefined1 uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
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
  uVar27 = (ulonglong)((uint)param_1 >> 9);
  uVar26 = (ulonglong)(param_1 & 0x1ff);
  uVar18 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar27 * 8) +
                    uVar26 * 4);
  uVar20 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_2e0 = uVar18;
  if ((int)uVar18 < this->TrianglesEnd) {
    if ((int)uVar20 < param_2->TrianglesEnd) {
      local_2f4 = 1;
      iVar28 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
      iVar5 = *(int *)(*(longlong *)
                        ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
      if (iVar5 < 1) {
        return false;
      }
      do {
        uVar20 = uVar20 + 1;
        local_2d8 = (ulonglong)uVar20;
        iVar6 = *(int *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c9f5107:
          PlanarCut::FGeomMesh::GetTriVertices
                    (param_2->Mesh,iVar6,(TVector<double> *)&local_158._s_0,
                     (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_128._s_0);
          if (*(void **)param_3 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar8 = *(code **)param_3;
            puVar23 = &param_3->field_0x10;
            plVar21 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar21 = (longlong *)puVar23;
            }
            uVar19 = (**(code **)(*plVar21 + 8))();
            (*pcVar8)(&local_1d0,uVar19,&local_158);
            local_158._s_0.X = local_1d0;
            local_158._s_0.Y = dStack_1c8;
            local_158._s_0.Z = local_1c0;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar8 = *(code **)param_3;
            plVar21 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar21 = (longlong *)puVar23;
            }
            uVar19 = (**(code **)(*plVar21 + 8))();
            (*pcVar8)(&local_1b8,uVar19,&local_140);
            local_140._s_0.X = local_1b8;
            local_140._s_0.Y = dStack_1b0;
            local_140._s_0.Z = local_1a8;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar8 = *(code **)param_3;
            plVar21 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar21 = (longlong *)puVar23;
            }
            uVar19 = (**(code **)(*plVar21 + 8))();
            (*pcVar8)(&local_1a0,uVar19,&local_128);
            local_128._s_0.X = local_1a0;
            local_128._s_0.Y = dStack_198;
            local_128._s_0.Z = local_190;
          }
          if (0 < iVar28) {
            uVar20 = uVar18 + 1;
            do {
              uVar7 = *(uint *)(*(longlong *)
                                 ((this->IndexList).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
              if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14c9f5299:
                pFVar9 = this->Mesh;
                pFVar10 = pFVar9->Collection;
                uVar18 = 0;
                if ((int)uVar7 < *(int *)&(pFVar10->Indices).field_0x18) {
                  uVar18 = ~uVar7 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  uVar17 = (*pcVar8)();
                  return (bool)uVar17;
                }
                lVar24 = *(longlong *)&(pFVar10->Indices).field_0x10;
                local_2d0 = *(longlong *)(lVar24 + (longlong)(int)uVar7 * 0xc);
                iVar6 = *(int *)(lVar24 + 8 + (longlong)(int)uVar7 * 0xc);
                lVar24 = (longlong)(int)local_2d0;
                if (((int)local_2d0 < 0 || (pFVar9->GlobalVertices).ArrayNum <= (int)local_2d0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  uVar17 = (*pcVar8)();
                  return (bool)uVar17;
                }
                pFVar11 = (pFVar9->GlobalVertices).AllocatorInstance.Data;
                lVar25 = (longlong)local_2d0._4_4_;
                pFVar1 = pFVar11 + lVar24 * 0x18;
                local_108 = *(undefined8 *)pFVar1;
                uStack_100 = *(undefined8 *)(pFVar1 + 8);
                local_f8 = *(undefined8 *)(pFVar11 + lVar24 * 0x18 + 0x10);
                if ((local_2d0 < 0 || (pFVar9->GlobalVertices).ArrayNum <= local_2d0._4_4_) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  uVar17 = (*pcVar8)();
                  return (bool)uVar17;
                }
                pFVar11 = (pFVar9->GlobalVertices).AllocatorInstance.Data;
                pFVar1 = pFVar11 + lVar25 * 0x18;
                local_f0 = *(undefined8 *)pFVar1;
                uStack_e8 = *(undefined8 *)(pFVar1 + 8);
                local_e0 = *(undefined8 *)(pFVar11 + lVar25 * 0x18 + 0x10);
                if ((iVar6 < 0 || (pFVar9->GlobalVertices).ArrayNum <= iVar6) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  uVar17 = (*pcVar8)();
                  return (bool)uVar17;
                }
                pFVar11 = (pFVar9->GlobalVertices).AllocatorInstance.Data;
                pFVar1 = pFVar11 + (longlong)iVar6 * 0x18;
                local_d8 = *(undefined4 *)pFVar1;
                uStack_d4 = *(undefined4 *)(pFVar1 + 4);
                uStack_d0 = *(undefined4 *)(pFVar1 + 8);
                uStack_cc = *(undefined4 *)(pFVar1 + 0xc);
                local_c8 = *(undefined8 *)(pFVar11 + (longlong)iVar6 * 0x18 + 0x10);
                cVar15 = (**(code **)param_6)
                                   (*(undefined8 *)&param_6->field_0x8,&local_158,&local_108);
                uVar18 = local_2e0;
                if (cVar15 != '\0') {
                  return true;
                }
              }
              else {
                local_2e8[0] = uVar7;
                Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                plVar21 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                pcVar8 = *(code **)&param_7->TriangleFilterF;
                plVar22 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                if (plVar21 != (longlong *)0x0) {
                  plVar22 = plVar21;
                }
                uVar19 = (**(code **)(*plVar22 + 8))();
                cVar15 = (*pcVar8)(uVar19,local_2e8);
                if (cVar15 != '\0') goto LAB_14c9f5299;
              }
              uVar20 = uVar20 + 1;
            } while ((int)(uVar20 - uVar18) <= iVar28);
          }
        }
        else {
          local_2f0[0] = iVar6;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar21 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar8 = *(code **)&param_8->TriangleFilterF;
          plVar22 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar21 != (longlong *)0x0) {
            plVar22 = plVar21;
          }
          uVar19 = (**(code **)(*plVar22 + 8))();
          cVar15 = (*pcVar8)(uVar19,local_2f0);
          if (cVar15 != '\0') goto LAB_14c9f5107;
        }
        local_2f4 = local_2f4 + 1;
        uVar20 = (uint)local_2d8;
        if (iVar5 < local_2f4) {
          return false;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar20 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_188,param_4,param_3);
    pFVar1 = (this->IndexList).Blocks.AllocatorInstance.Data;
    uVar20 = *(uint *)(*(longlong *)(pFVar1 + (ulonglong)(uVar18 >> 9) * 8) +
                      (ulonglong)(uVar18 & 0x1ff) * 4);
    if ((int)uVar20 < 0) {
      bVar16 = box_box_intersect(this,~uVar20,&local_188);
      if (!bVar16) {
        return false;
      }
      local_290._0_8_ = *(undefined8 *)param_6;
      local_290._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar16 = find_any_intersection
                         (this,~uVar20,param_2,param_3,param_4,param_5 + 1,&local_290,param_7,
                          param_8);
      return bVar16;
    }
    iVar28 = *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                     (ulonglong)(uVar18 + 1 & 0x1ff) * 4) + -1;
    bVar16 = box_box_intersect(this,uVar20 - 1,&local_188);
    if (bVar16) {
      local_280._0_8_ = *(undefined8 *)param_6;
      local_280._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar16 = find_any_intersection
                         (this,uVar20 - 1,param_2,param_3,param_4,param_5 + 1,&local_280,param_7,
                          param_8);
      if (bVar16) {
        return true;
      }
    }
    bVar16 = box_box_intersect(this,iVar28,&local_188);
    if (bVar16) {
      local_270._0_8_ = *(undefined8 *)param_6;
      local_270._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar16 = find_any_intersection
                         (this,iVar28,param_2,param_3,param_4,param_5 + 1,&local_270,param_7,param_8
                         );
      return bVar16;
    }
    return false;
  }
  lVar24 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar27 * 8);
  dVar2 = *(double *)(lVar24 + uVar26 * 0x18);
  lVar25 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar27 * 8);
  dVar3 = *(double *)(lVar24 + 8 + uVar26 * 0x18);
  dVar4 = *(double *)(lVar24 + 0x10 + uVar26 * 0x18);
  dVar12 = dVar2 - *(double *)(lVar25 + uVar26 * 0x18);
  dVar13 = dVar3 - *(double *)(lVar25 + 8 + uVar26 * 0x18);
  dVar14 = dVar4 - *(double *)(lVar25 + 0x10 + uVar26 * 0x18);
  dVar2 = dVar2 + *(double *)(lVar25 + uVar26 * 0x18);
  dVar3 = dVar3 + *(double *)(lVar25 + 8 + uVar26 * 0x18);
  dVar4 = dVar4 + *(double *)(lVar25 + 0x10 + uVar26 * 0x18);
  pFVar1 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
  uVar18 = *(uint *)(*(longlong *)(pFVar1 + (ulonglong)(uVar20 >> 9) * 8) +
                    (ulonglong)(uVar20 & 0x1ff) * 4);
  if ((int)uVar18 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_260._s_0,~uVar18,param_3);
    if (((local_260._s_0.X < dVar2) && (dVar12 < local_248)) &&
       ((local_260._s_0.Y < dVar3 &&
        (((dVar13 < local_240 && (local_260._s_0.Z < dVar4)) && (dVar14 < local_238)))))) {
      local_2c0._0_8_ = *(undefined8 *)param_6;
      local_2c0._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar16 = find_any_intersection
                         (this,param_1,param_2,param_3,param_4,param_5 + 1,&local_2c0,param_7,
                          param_8);
      return bVar16;
    }
    return false;
  }
  iVar28 = *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar20 + 1 >> 9) * 8) +
                   (ulonglong)(uVar20 + 1 & 0x1ff) * 4) + -1;
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_230._s_0,uVar18 - 1,param_3);
  if ((((local_230._s_0.X < dVar2) && (dVar12 < local_218)) && (local_230._s_0.Y < dVar3)) &&
     (((dVar13 < local_210 && (local_230._s_0.Z < dVar4)) && (dVar14 < local_208)))) {
    local_2b0._0_8_ = *(undefined8 *)param_6;
    local_2b0._8_8_ = *(undefined8 *)&param_6->field_0x8;
    bVar16 = find_any_intersection
                       (this,param_1,param_2,param_3,uVar18 - 1,param_5 + 1,&local_2b0,param_7,
                        param_8);
    if (bVar16) {
      return true;
    }
  }
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_200._s_0,iVar28,param_3);
  if (dVar2 <= local_200._s_0.X) {
    return false;
  }
  if (local_1e8 <= dVar12) {
    return false;
  }
  if (dVar3 <= local_200._s_0.Y) {
    return false;
  }
  if (local_1e0 <= dVar13) {
    return false;
  }
  if (local_200._s_0.Z < dVar4) {
    if (dVar14 < local_1d8) {
      local_2a0._0_8_ = *(undefined8 *)param_6;
      local_2a0._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar16 = find_any_intersection
                         (this,param_1,param_2,param_3,iVar28,param_5 + 1,&local_2a0,param_7,param_8
                         );
      return bVar16;
    }
    return false;
  }
  return false;
}

// find_intersections @ 14c9f5930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::find_intersections
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,
          TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,FIntersectionsQueryResult *param_6,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_7,
          FQueryOptions *param_8,FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  code *pcVar10;
  FGeomFlatUVMesh *pFVar11;
  FGeometryCollection *pFVar12;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *pTVar19;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar20;
  char cVar21;
  bool bVar22;
  uint uVar23;
  undefined8 uVar24;
  uint uVar25;
  longlong *plVar26;
  longlong *plVar27;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  double dVar33;
  undefined1 auStackY_498 [32];
  FIntersectionsQueryResult *pFVar34;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar35;
  int local_448 [2];
  FIntersectionsQueryResult *local_440;
  TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *local_438;
  FQueryOptions *local_430;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_428;
  uint local_420;
  uint local_418 [2];
  int local_410;
  uint local_40c;
  TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *local_408;
  ulonglong local_400;
  ulonglong local_3f8;
  ulonglong local_3f0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_3e8;
  undefined8 local_3e0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3d0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3c0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3b0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3a0;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_390;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_380;
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
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  ulonglong local_15c;
  undefined4 local_154;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_440 = param_6;
  local_430 = param_9;
  uVar31 = (ulonglong)((uint)param_1 >> 9);
  uVar30 = (ulonglong)(param_1 & 0x1ff);
  local_3e8 = param_7;
  uVar32 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar31 * 8) +
                    uVar30 * 4);
  uVar25 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_448[0] = param_1;
  local_438 = param_2;
  local_428 = param_3;
  local_420 = uVar32;
  local_408 = this;
  if ((int)uVar32 < this->TrianglesEnd) {
    if ((int)uVar25 < param_2->TrianglesEnd) {
      uVar32 = *(uint *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar32 >> 9) * 8) + (ulonglong)(uVar32 & 0x1ff) * 4);
      uVar23 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
      local_3f0 = (ulonglong)uVar23;
      local_40c = uVar32;
      if ((int)uVar23 < 1) {
        return;
      }
      do {
        uVar25 = uVar25 + 1;
        local_3f8 = (ulonglong)uVar25;
        iVar28 = *(int *)(*(longlong *)
                           ((local_438->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
        local_410 = iVar28;
        if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14c9f5b0f:
          PlanarCut::FGeomFlatUVMesh::GetTriVertices
                    (local_438->Mesh,iVar28,(TVector<double> *)&local_248._s_0,
                     (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
          pTVar20 = local_428;
          if (*(void **)local_428 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)local_428);
            puVar1 = &pTVar20->field_0x10;
            pcVar10 = *(code **)pTVar20;
            plVar26 = *(longlong **)&pTVar20->field_0x28;
            if (*(longlong **)&pTVar20->field_0x28 == (longlong *)0x0) {
              plVar26 = (longlong *)puVar1;
            }
            uVar24 = (**(code **)(*plVar26 + 8))();
            (*pcVar10)(&local_2e0,uVar24,&local_248);
            local_248._s_0.X = local_2e0;
            local_248._s_0.Y = dStack_2d8;
            local_248._s_0.Z = local_2d0;
            Core::Private::Function::CheckCallable(*(void **)pTVar20);
            pcVar10 = *(code **)pTVar20;
            plVar26 = *(longlong **)&pTVar20->field_0x28;
            if (*(longlong **)&pTVar20->field_0x28 == (longlong *)0x0) {
              plVar26 = (longlong *)puVar1;
            }
            uVar24 = (**(code **)(*plVar26 + 8))();
            (*pcVar10)(&local_2c8,uVar24,&TStack_230);
            TStack_230._s_0.X = local_2c8;
            TStack_230._s_0.Y = dStack_2c0;
            TStack_230._s_0.Z = local_2b8;
            Core::Private::Function::CheckCallable(*(void **)pTVar20);
            pcVar10 = *(code **)pTVar20;
            plVar26 = *(longlong **)&pTVar20->field_0x28;
            if (*(longlong **)&pTVar20->field_0x28 == (longlong *)0x0) {
              plVar26 = (longlong *)puVar1;
            }
            uVar24 = (**(code **)(*plVar26 + 8))();
            (*pcVar10)(&local_2b0,uVar24,&local_218);
            local_218._0_4_ = local_2b0;
            local_218._4_4_ = uStack_2ac;
            local_218._8_4_ = uStack_2a8;
            local_218._12_4_ = uStack_2a4;
            local_218._s_0.Z = local_2a0;
          }
          local_1f8._s_0.X = local_248._s_0.X;
          local_1f8._s_0.Y = local_248._s_0.Y;
          local_1d8 = TStack_230._s_0.Y;
          dStack_1d0 = TStack_230._s_0.Z;
          local_15c = local_15c & 0xffffffff00000000;
          local_1f8._s_0.Z = local_248._s_0.Z;
          dStack_1e0 = TStack_230._s_0.X;
          local_1c8 = local_218._0_4_;
          uStack_1c4 = local_218._4_4_;
          uStack_1c0 = local_218._8_4_;
          uStack_1bc = local_218._12_4_;
          local_1b8 = local_218._s_0.Z;
          if (0 < (int)uVar32) {
            local_400 = (ulonglong)uVar32;
            uVar32 = local_420;
            do {
              uVar32 = uVar32 + 1;
              uVar25 = *(uint *)(*(longlong *)
                                  ((this->IndexList).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar32 >> 9) * 8) + (ulonglong)(uVar32 & 0x1ff) * 4);
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c9f5cfa:
                pFVar11 = this->Mesh;
                pFVar12 = pFVar11->Collection;
                uVar23 = 0;
                if ((int)uVar25 < *(int *)&(pFVar12->Indices).field_0x18) {
                  uVar23 = ~uVar25 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar29 = *(longlong *)&(pFVar12->Indices).field_0x10;
                pTVar13 = pFVar11->CollectionUVs;
                local_3e0 = *(longlong *)(lVar29 + (longlong)(int)uVar25 * 0xc);
                iVar28 = *(int *)(lVar29 + 8 + (longlong)(int)uVar25 * 0xc);
                lVar29 = (longlong)(int)local_3e0;
                if (((int)local_3e0 < 0 || *(int *)&pTVar13->field_0x18 <= (int)local_3e0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar14 = *(longlong *)&pTVar13->field_0x10;
                pTVar13 = pFVar11->CollectionUVs;
                fVar3 = *(float *)(lVar14 + lVar29 * 8);
                fVar4 = *(float *)(lVar14 + 4 + lVar29 * 8);
                lVar29 = (longlong)local_3e0._4_4_;
                if ((local_3e0 < 0 || *(int *)&pTVar13->field_0x18 <= local_3e0._4_4_) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar14 = *(longlong *)&pTVar13->field_0x10;
                fVar5 = *(float *)(lVar14 + lVar29 * 8);
                fVar6 = *(float *)(lVar14 + 4 + lVar29 * 8);
                pTVar13 = pFVar11->CollectionUVs;
                if ((iVar28 < 0 || *(int *)&pTVar13->field_0x18 <= iVar28) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar29 = *(longlong *)&pTVar13->field_0x10;
                local_180 = (double)*(float *)(lVar29 + (longlong)iVar28 * 8);
                local_15c = local_15c & 0xffffffff00000000;
                local_178 = (double)*(float *)(lVar29 + 4 + (longlong)iVar28 * 8);
                local_1a0 = 0;
                local_188 = 0;
                local_170 = 0;
                local_1b0 = (double)fVar3;
                local_1a8 = (double)fVar4;
                local_198 = (double)fVar5;
                local_190 = (double)fVar6;
                cVar21 = (**(code **)local_3e8)(*(undefined8 *)&local_3e8->field_0x8,&local_1f8);
                this = local_408;
                if (cVar21 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,uVar25,local_410,
                             local_440);
                  this = local_408;
                }
              }
              else {
                local_418[0] = uVar25;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar26 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar10 = *(code **)&param_8->TriangleFilterF;
                plVar27 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar26 != (longlong *)0x0) {
                  plVar27 = plVar26;
                }
                uVar24 = (**(code **)(*plVar27 + 8))();
                cVar21 = (*pcVar10)(uVar24,local_418);
                if (cVar21 != '\0') goto LAB_14c9f5cfa;
              }
              local_400 = local_400 - 1;
            } while (local_400 != 0);
            local_400 = 0;
            param_9 = local_430;
            uVar32 = local_40c;
          }
        }
        else {
          local_448[0] = iVar28;
          Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
          plVar26 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
          pcVar10 = *(code **)&param_9->TriangleFilterF;
          plVar27 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
          if (plVar26 != (longlong *)0x0) {
            plVar27 = plVar26;
          }
          uVar24 = (**(code **)(*plVar27 + 8))();
          cVar21 = (*pcVar10)(uVar24,local_448);
          if (cVar21 != '\0') goto LAB_14c9f5b0f;
        }
        uVar25 = (uint)local_3f8;
        local_3f0 = local_3f0 - 1;
        if (local_3f0 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar25 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_298,param_4,param_3);
    uVar32 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar32 >> 9) * 8) + (ulonglong)(uVar32 & 0x1ff) * 4);
    if ((int)uVar32 < 0) {
      bVar22 = box_box_intersect(this,~uVar32,&local_298);
      if (!bVar22) {
        return;
      }
      local_3a0._0_8_ = *(undefined8 *)param_7;
      local_3a0._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,~uVar32,local_438,local_428,param_4,param_5 + 1,local_440,&local_3a0,
                         param_8,local_430);
      return;
    }
    bVar22 = box_box_intersect(this,uVar32 - 1,&local_298);
    pTVar19 = local_438;
    if (bVar22) {
      local_390._0_8_ = *(undefined8 *)param_7;
      local_390._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,uVar32 - 1,local_438,local_428,param_4,param_5 + 1,local_440,
                         &local_390,param_8,local_430);
    }
    iVar28 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(local_420 + 1 >> 9) * 8) + (ulonglong)(local_420 + 1 & 0x1ff) * 4
                     );
    bVar22 = box_box_intersect(this,iVar28 + -1,&local_298);
    if (!bVar22) {
      return;
    }
    local_380._0_8_ = *(undefined8 *)param_7;
    local_380._8_8_ = *(undefined8 *)&param_7->field_0x8;
    find_intersections(this,iVar28 + -1,pTVar19,local_428,param_4,param_5 + 1,local_440,&local_380,
                       param_8,local_430);
    return;
  }
  dVar33 = this->BoxEps;
  lVar29 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar31 * 8);
  dVar7 = *(double *)(lVar29 + uVar30 * 0x18);
  lVar14 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar31 * 8);
  dVar8 = *(double *)(lVar29 + 8 + uVar30 * 0x18);
  dVar9 = *(double *)(lVar29 + 0x10 + uVar30 * 0x18);
  pdVar2 = (double *)(lVar14 + uVar30 * 0x18);
  dVar16 = pdVar2[1] + dVar33;
  dVar15 = *pdVar2 + dVar33;
  dVar33 = *(double *)(lVar14 + 0x10 + uVar30 * 0x18) + dVar33;
  dVar17 = dVar8 - dVar16;
  uVar32 = *(uint *)(*(longlong *)
                      ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar25 >> 9) * 8) + (ulonglong)(uVar25 & 0x1ff) * 4);
  dVar8 = dVar8 + dVar16;
  dVar16 = dVar7 - dVar15;
  dVar18 = dVar9 - dVar33;
  dVar7 = dVar7 + dVar15;
  dVar9 = dVar9 + dVar33;
  if ((int)uVar32 < 0) {
    uVar32 = ~uVar32;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_370._s_0,uVar32,param_3);
    if (dVar7 <= local_370._s_0.X) {
      return;
    }
    if (local_358 <= dVar16) {
      return;
    }
    if (dVar8 <= local_370._s_0.Y) {
      return;
    }
    if (local_350 <= dVar17) {
      return;
    }
    if (dVar9 <= local_370._s_0.Z) {
      return;
    }
    if (local_348 <= dVar18) {
      return;
    }
    local_3d0._0_8_ = *(undefined8 *)param_7;
    pTVar35 = &local_3d0;
    local_3d0._8_8_ = *(undefined8 *)&param_7->field_0x8;
    iVar28 = local_448[0];
    pFVar34 = local_440;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_340._s_0,uVar32 - 1,param_3);
    pFVar34 = local_440;
    iVar28 = local_448[0];
    if ((((local_340._s_0.X < dVar7) && (dVar16 < local_328)) && (local_340._s_0.Y < dVar8)) &&
       (((dVar17 < local_320 && (local_340._s_0.Z < dVar9)) && (dVar18 < local_318)))) {
      local_3c0._0_8_ = *(undefined8 *)param_7;
      local_3c0._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,local_448[0],local_438,local_428,uVar32 - 1,param_5 + 1,local_440,
                         &local_3c0,param_8,local_430);
    }
    uVar32 = *(int *)(*(longlong *)
                       ((local_438->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar25 + 1 >> 9) * 8) + (ulonglong)(uVar25 + 1 & 0x1ff) * 4) - 1;
    GetBox(local_438,(TAxisAlignedBox3<double> *)&local_310._s_0,uVar32,local_428);
    if (dVar7 <= local_310._s_0.X) {
      return;
    }
    if (local_2f8 <= dVar16) {
      return;
    }
    if (dVar8 <= local_310._s_0.Y) {
      return;
    }
    if (local_2f0 <= dVar17) {
      return;
    }
    if (dVar9 <= local_310._s_0.Z) {
      return;
    }
    if (local_2e8 <= dVar18) {
      return;
    }
    local_3b0._0_8_ = *(undefined8 *)param_7;
    pTVar35 = &local_3b0;
    local_3b0._8_8_ = *(undefined8 *)&param_7->field_0x8;
  }
  find_intersections(this,iVar28,local_438,local_428,uVar32,param_5 + 1,pFVar34,pTVar35,param_8,
                     local_430);
  return;
}

// find_intersections @ 14c9f6410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::find_intersections
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,
          TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,FIntersectionsQueryResult *param_6,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_7,
          FQueryOptions *param_8,FQueryOptions *param_9)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  FGeomMesh *pFVar9;
  FGeometryCollection *pFVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *pTVar16;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar17;
  char cVar18;
  bool bVar19;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStackY_4e8 [32];
  FIntersectionsQueryResult *pFVar33;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar34;
  int local_498 [2];
  FIntersectionsQueryResult *local_490;
  TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *local_488;
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
  uVar29 = (ulonglong)((uint)param_1 >> 9);
  uVar28 = (ulonglong)(param_1 & 0x1ff);
  local_440 = param_7;
  uVar30 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar29 * 8) +
                    uVar28 * 4);
  uVar22 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_498[0] = param_1;
  local_488 = param_2;
  local_478 = param_3;
  local_470 = uVar30;
  if ((int)uVar30 < this->TrianglesEnd) {
    if ((int)uVar22 < param_2->TrianglesEnd) {
      local_46c = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar30 >> 9) * 8) + (ulonglong)(uVar30 & 0x1ff) * 4);
      uVar30 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
      local_448 = (ulonglong)uVar30;
      if ((int)uVar30 < 1) {
        return;
      }
      do {
        uVar22 = uVar22 + 1;
        local_450 = (ulonglong)uVar22;
        iVar25 = *(int *)(*(longlong *)
                           ((local_488->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
        local_460 = iVar25;
        if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14c9f65bf:
          PlanarCut::FGeomMesh::GetTriVertices
                    (local_488->Mesh,iVar25,(TVector<double> *)&local_248._s_0,
                     (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
          pTVar17 = local_478;
          if (*(void **)local_478 == (void *)0x0) {
            uVar31 = SUB84(local_218._s_0.Z,0);
            uVar32 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
          }
          else {
            Core::Private::Function::CheckCallable(*(void **)local_478);
            puVar1 = &pTVar17->field_0x10;
            pcVar8 = *(code **)pTVar17;
            plVar23 = *(longlong **)&pTVar17->field_0x28;
            if (*(longlong **)&pTVar17->field_0x28 == (longlong *)0x0) {
              plVar23 = (longlong *)puVar1;
            }
            uVar21 = (**(code **)(*plVar23 + 8))();
            (*pcVar8)(&local_338,uVar21,&local_248);
            local_248._s_0.X = local_338;
            local_248._s_0.Y = dStack_330;
            local_248._s_0.Z = local_328;
            Core::Private::Function::CheckCallable(*(void **)pTVar17);
            pcVar8 = *(code **)pTVar17;
            plVar23 = *(longlong **)&pTVar17->field_0x28;
            if (*(longlong **)&pTVar17->field_0x28 == (longlong *)0x0) {
              plVar23 = (longlong *)puVar1;
            }
            uVar21 = (**(code **)(*plVar23 + 8))();
            (*pcVar8)(&local_320,uVar21,&TStack_230);
            TStack_230._s_0.X = local_320;
            TStack_230._s_0.Y = dStack_318;
            TStack_230._s_0.Z = local_310;
            Core::Private::Function::CheckCallable(*(void **)pTVar17);
            pcVar8 = *(code **)pTVar17;
            plVar23 = *(longlong **)&pTVar17->field_0x28;
            if (*(longlong **)&pTVar17->field_0x28 == (longlong *)0x0) {
              plVar23 = (longlong *)puVar1;
            }
            uVar21 = (**(code **)(*plVar23 + 8))();
            (*pcVar8)(&local_308,uVar21,&local_218);
            uVar31 = SUB84(local_2f8,0);
            uVar32 = (undefined4)((ulonglong)local_2f8 >> 0x20);
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
          local_1b8 = CONCAT44(uVar32,uVar31);
          uVar30 = local_470;
          uVar28 = (ulonglong)local_46c;
          local_1c8 = local_218._0_4_;
          uStack_1c4 = local_218._4_4_;
          uStack_1c0 = local_218._8_4_;
          uStack_1bc = local_218._12_4_;
          if (0 < (int)local_46c) {
            do {
              local_458 = uVar28;
              uVar30 = uVar30 + 1;
              uVar22 = *(uint *)(*(longlong *)
                                  ((this->IndexList).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar30 >> 9) * 8) + (ulonglong)(uVar30 & 0x1ff) * 4);
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c9f67ab:
                pFVar9 = this->Mesh;
                pFVar10 = pFVar9->Collection;
                uVar20 = 0;
                if ((int)uVar22 < *(int *)&(pFVar10->Indices).field_0x18) {
                  uVar20 = ~uVar22 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar26 = *(longlong *)&(pFVar10->Indices).field_0x10;
                local_438 = *(longlong *)(lVar26 + (longlong)(int)uVar22 * 0xc);
                iVar25 = *(int *)(lVar26 + 8 + (longlong)(int)uVar22 * 0xc);
                lVar26 = (longlong)(int)local_438;
                if (((int)local_438 < 0 || (pFVar9->GlobalVertices).ArrayNum <= (int)local_438) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar11 = (pFVar9->GlobalVertices).AllocatorInstance.Data;
                lVar27 = (longlong)local_438._4_4_;
                pFVar2 = pFVar11 + lVar26 * 0x18;
                local_2e8 = *(undefined8 *)pFVar2;
                uStack_2e0 = *(undefined8 *)(pFVar2 + 8);
                local_2d8 = *(undefined8 *)(pFVar11 + lVar26 * 0x18 + 0x10);
                if ((local_438 < 0 || (pFVar9->GlobalVertices).ArrayNum <= local_438._4_4_) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar11 = (pFVar9->GlobalVertices).AllocatorInstance.Data;
                pFVar2 = pFVar11 + lVar27 * 0x18;
                uStack_2d0 = *(undefined8 *)pFVar2;
                uStack_2c8 = *(undefined8 *)(pFVar2 + 8);
                uStack_2c0 = *(undefined8 *)(pFVar11 + lVar27 * 0x18 + 0x10);
                if ((iVar25 < 0 || (pFVar9->GlobalVertices).ArrayNum <= iVar25) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar11 = (pFVar9->GlobalVertices).AllocatorInstance.Data;
                pFVar2 = pFVar11 + (longlong)iVar25 * 0x18;
                local_2b8 = *(undefined4 *)pFVar2;
                uStack_2b4 = *(undefined4 *)(pFVar2 + 4);
                uStack_2b0 = *(undefined4 *)(pFVar2 + 8);
                uStack_2ac = *(undefined4 *)(pFVar2 + 0xc);
                local_2a8 = *(undefined8 *)(pFVar11 + (longlong)iVar25 * 0x18 + 0x10);
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
                cVar18 = (**(code **)local_440)(*(undefined8 *)&local_440->field_0x8,&local_1f8);
                if (cVar18 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,uVar22,local_460,
                             local_490);
                }
              }
              else {
                local_468[0] = uVar22;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar23 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar8 = *(code **)&param_8->TriangleFilterF;
                plVar24 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar23 != (longlong *)0x0) {
                  plVar24 = plVar23;
                }
                uVar21 = (**(code **)(*plVar24 + 8))();
                cVar18 = (*pcVar8)(uVar21,local_468);
                if (cVar18 != '\0') goto LAB_14c9f67ab;
              }
              uVar28 = local_458 - 1;
            } while (local_458 - 1 != 0);
            local_458 = 0;
            param_9 = local_480;
          }
        }
        else {
          local_498[0] = iVar25;
          Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
          plVar23 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
          pcVar8 = *(code **)&param_9->TriangleFilterF;
          plVar24 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
          if (plVar23 != (longlong *)0x0) {
            plVar24 = plVar23;
          }
          uVar21 = (**(code **)(*plVar24 + 8))();
          cVar18 = (*pcVar8)(uVar21,local_498);
          if (cVar18 != '\0') goto LAB_14c9f65bf;
        }
        uVar22 = (uint)local_450;
        local_448 = local_448 - 1;
        if (local_448 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar22 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_298,param_4,param_3);
    uVar30 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar30 >> 9) * 8) + (ulonglong)(uVar30 & 0x1ff) * 4);
    if ((int)uVar30 < 0) {
      bVar19 = box_box_intersect(this,~uVar30,&local_298);
      if (!bVar19) {
        return;
      }
      local_3f8._0_8_ = *(undefined8 *)param_7;
      local_3f8._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,~uVar30,local_488,local_478,param_4,param_5 + 1,local_490,&local_3f8,
                         param_8,local_480);
      return;
    }
    bVar19 = box_box_intersect(this,uVar30 - 1,&local_298);
    pTVar16 = local_488;
    if (bVar19) {
      local_3e8._0_8_ = *(undefined8 *)param_7;
      local_3e8._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,uVar30 - 1,local_488,local_478,param_4,param_5 + 1,local_490,
                         &local_3e8,param_8,local_480);
    }
    iVar25 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(local_470 + 1 >> 9) * 8) + (ulonglong)(local_470 + 1 & 0x1ff) * 4
                     );
    bVar19 = box_box_intersect(this,iVar25 + -1,&local_298);
    if (!bVar19) {
      return;
    }
    local_3d8._0_8_ = *(undefined8 *)param_7;
    local_3d8._8_8_ = *(undefined8 *)&param_7->field_0x8;
    find_intersections(this,iVar25 + -1,pTVar16,local_478,param_4,param_5 + 1,local_490,&local_3d8,
                       param_8,local_480);
    return;
  }
  dVar4 = this->BoxEps;
  lVar26 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar29 * 8);
  dVar5 = *(double *)(lVar26 + uVar28 * 0x18);
  lVar27 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar29 * 8);
  dVar6 = *(double *)(lVar26 + 8 + uVar28 * 0x18);
  dVar7 = *(double *)(lVar26 + 0x10 + uVar28 * 0x18);
  pdVar3 = (double *)(lVar27 + uVar28 * 0x18);
  dVar13 = pdVar3[1] + dVar4;
  dVar12 = *pdVar3 + dVar4;
  dVar4 = *(double *)(lVar27 + 0x10 + uVar28 * 0x18) + dVar4;
  uVar30 = *(uint *)(*(longlong *)
                      ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
  dVar14 = dVar6 - dVar13;
  dVar6 = dVar6 + dVar13;
  dVar13 = dVar5 - dVar12;
  dVar15 = dVar7 - dVar4;
  dVar5 = dVar5 + dVar12;
  dVar7 = dVar7 + dVar4;
  if ((int)uVar30 < 0) {
    uVar30 = ~uVar30;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3c8._s_0,uVar30,param_3);
    if (dVar5 <= local_3c8._s_0.X) {
      return;
    }
    if (local_3b0 <= dVar13) {
      return;
    }
    if (dVar6 <= local_3c8._s_0.Y) {
      return;
    }
    if (local_3a8 <= dVar14) {
      return;
    }
    if (dVar7 <= local_3c8._s_0.Z) {
      return;
    }
    if (local_3a0 <= dVar15) {
      return;
    }
    local_428._0_8_ = *(undefined8 *)param_7;
    pTVar34 = &local_428;
    local_428._8_8_ = *(undefined8 *)&param_7->field_0x8;
    iVar25 = local_498[0];
    pFVar33 = local_490;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_398._s_0,uVar30 - 1,param_3);
    pFVar33 = local_490;
    iVar25 = local_498[0];
    if ((((local_398._s_0.X < dVar5) && (dVar13 < local_380)) && (local_398._s_0.Y < dVar6)) &&
       (((dVar14 < local_378 && (local_398._s_0.Z < dVar7)) && (dVar15 < local_370)))) {
      local_418._0_8_ = *(undefined8 *)param_7;
      local_418._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,local_498[0],local_488,local_478,uVar30 - 1,param_5 + 1,local_490,
                         &local_418,param_8,local_480);
    }
    uVar30 = *(int *)(*(longlong *)
                       ((local_488->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar22 + 1 >> 9) * 8) + (ulonglong)(uVar22 + 1 & 0x1ff) * 4) - 1;
    GetBox(local_488,(TAxisAlignedBox3<double> *)&local_368._s_0,uVar30,local_478);
    if (dVar5 <= local_368._s_0.X) {
      return;
    }
    if (local_350 <= dVar13) {
      return;
    }
    if (dVar6 <= local_368._s_0.Y) {
      return;
    }
    if (local_348 <= dVar14) {
      return;
    }
    if (dVar7 <= local_368._s_0.Z) {
      return;
    }
    if (local_340 <= dVar15) {
      return;
    }
    local_408._0_8_ = *(undefined8 *)param_7;
    pTVar34 = &local_408;
    local_408._8_8_ = *(undefined8 *)&param_7->field_0x8;
  }
  find_intersections(this,iVar25,local_488,local_478,uVar30,param_5 + 1,pFVar33,pTVar34,param_8,
                     local_480);
  return;
}

// find_nearest_triangles @ 14c9f6ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::find_nearest_triangles
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,
          TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,double *param_6,FIndex2i *param_7,FQueryOptions *param_8,
          FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FGeomFlatUVMesh *pFVar12;
  FGeometryCollection *pFVar13;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar14;
  double dVar15;
  double dVar16;
  FIndex2i_u_0 FVar17;
  char cVar18;
  bool bVar19;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong *plVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStackY_448 [32];
  ulonglong local_3d0;
  int local_3c8 [2];
  uint local_3c0;
  uint local_3b8 [2];
  int local_3b0;
  TManagedArray<UE::Math::TVector2<float>_> *local_3a8;
  uint local_3a0;
  int iStack_39c;
  ulonglong local_398;
  ulonglong local_390;
  ulonglong local_388;
  undefined8 local_380;
  double local_370;
  double dStack_368;
  double local_360;
  TVector<double>_u_0 local_358;
  double local_340;
  double local_338;
  double local_330;
  TVector<double>_u_0 local_328;
  double local_310;
  double local_308;
  double local_300;
  TVector<double>_u_0 local_2f8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  TVector<double>_u_0 local_2c8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
  double dStack_278;
  double local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TDistTriangle3Triangle3<double> local_1f8;
  ulonglong local_f8;
  
  dVar15 = __real_3fd0000000000000;
  uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_448;
  iVar26 = param_5 + 1;
LAB_14c9f6fd0:
  do {
    while( true ) {
      dVar36 = __real_bff0000000000000;
      uVar28 = (ulonglong)(param_1 & 0x1ff);
      uVar23 = (ulonglong)((uint)param_1 >> 9);
      uVar7 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar23 * 8)
                       + uVar28 * 4);
      uVar22 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar7 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar22)) goto LAB_14c9f7237;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_358._s_0,param_4,param_3);
      pFVar11 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar22 = *(uint *)(*(longlong *)(pFVar11 + (ulonglong)(uVar7 >> 9) * 8) +
                        (ulonglong)(uVar7 & 0x1ff) * 4);
      if ((int)uVar22 < 0) {
        dStack_368 = this->BoxEps;
        param_1 = ~uVar22;
        uVar23 = (ulonglong)(param_1 & 0x1ff);
        lVar27 = *(longlong *)
                  ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar36 = *(double *)(lVar27 + uVar23 * 0x18);
        dVar34 = *(double *)(lVar27 + 8 + uVar23 * 0x18);
        lVar10 = *(longlong *)
                  ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar31 = *(double *)(lVar27 + 0x10 + uVar23 * 0x18);
        pdVar2 = (double *)(lVar10 + uVar23 * 0x18);
        local_360 = *(double *)(lVar10 + 0x10 + uVar23 * 0x18) + dStack_368;
        local_370 = *pdVar2 + dStack_368;
        dStack_368 = pdVar2[1] + dStack_368;
        dVar32 = dVar31 - local_360;
        dVar31 = dVar31 + local_360;
        dVar35 = dVar36 - local_370;
        dVar29 = dVar34 - dStack_368;
        dVar34 = dVar34 + dStack_368;
        dVar36 = dVar36 + local_370;
        dVar33 = (local_358._s_0.X + local_340) - (dVar36 + dVar35);
        dVar36 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar20,SUB84(dVar33,0) & uVar8
                                 ) - ((local_340 - local_358._s_0.X) + (dVar36 - dVar35));
        if (dVar36 <= 0.0) {
          dVar36 = 0.0;
        }
        dVar33 = (local_358._s_0.Y + local_338) - (dVar34 + dVar29);
        dVar34 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar20,SUB84(dVar33,0) & uVar8
                                 ) - ((local_338 - local_358._s_0.Y) + (dVar34 - dVar29));
        if (dVar34 <= 0.0) {
          dVar34 = 0.0;
        }
        dVar29 = (local_358._s_0.Z + local_330) - (dVar31 + dVar32);
        dVar31 = (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar20,SUB84(dVar29,0) & uVar8
                                 ) - ((local_330 - local_358._s_0.Z) + (dVar31 - dVar32));
        if (dVar31 <= 0.0) {
          dVar31 = 0.0;
        }
        bVar19 = (dVar34 * dVar34 + dVar36 * dVar36 + dVar31 * dVar31) * dVar15 < *param_6;
        goto LAB_14c9f7834;
      }
      uVar22 = uVar22 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar11 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1;
      dVar36 = box_box_distsqr(this,uVar22,(TAxisAlignedBox3<double> *)&local_358._s_0);
      dVar34 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_358._s_0);
      if (dVar34 < dVar36) {
        if (dVar34 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar26,param_6,param_7,param_8,param_9);
        }
        bVar19 = dVar36 < *param_6;
        param_1 = uVar22;
        goto LAB_14c9f7834;
      }
      if (dVar36 < *param_6) {
        find_nearest_triangles
                  (this,uVar22,param_2,param_3,param_4,iVar26,param_6,param_7,param_8,param_9);
      }
      if (*param_6 <= dVar34) {
        return;
      }
      param_5 = param_5 + 1;
      iVar26 = iVar26 + 1;
    }
    if ((int)uVar22 < param_2->TrianglesEnd) {
      local_3c0 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar8 = *(uint *)(*(longlong *)
                         ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
      local_3d0 = (ulonglong)uVar8;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      if ((int)uVar8 < 1) {
        return;
      }
      break;
    }
LAB_14c9f7237:
    lVar27 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar23 * 8);
    dVar36 = *(double *)(lVar27 + uVar28 * 0x18);
    lVar10 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar23 * 8);
    dVar34 = *(double *)(lVar27 + 8 + uVar28 * 0x18);
    dVar31 = *(double *)(lVar27 + 0x10 + uVar28 * 0x18);
    pFVar11 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar29 = dVar36 - *(double *)(lVar10 + uVar28 * 0x18);
    dVar32 = dVar34 - *(double *)(lVar10 + 8 + uVar28 * 0x18);
    dVar35 = dVar31 - *(double *)(lVar10 + 0x10 + uVar28 * 0x18);
    dVar36 = dVar36 + *(double *)(lVar10 + uVar28 * 0x18);
    dVar34 = dVar34 + *(double *)(lVar10 + 8 + uVar28 * 0x18);
    dVar31 = dVar31 + *(double *)(lVar10 + 0x10 + uVar28 * 0x18);
    dVar33 = dVar36 - dVar29;
    dVar36 = dVar36 + dVar29;
    dVar29 = dVar34 + dVar32;
    dVar34 = dVar34 - dVar32;
    dVar32 = dVar31 + dVar35;
    dVar31 = dVar31 - dVar35;
    uVar7 = *(uint *)(*(longlong *)(pFVar11 + (ulonglong)(uVar22 >> 9) * 8) +
                     (ulonglong)(uVar22 & 0x1ff) * 4);
    if ((int)uVar7 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_328._s_0,~uVar7,param_3);
      dVar36 = dVar36 - (local_328._s_0.X + local_310);
      dVar36 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar20,SUB84(dVar36,0) & uVar8)
               - ((local_310 - local_328._s_0.X) + dVar33);
      if (dVar36 <= 0.0) {
        dVar36 = 0.0;
      }
      dVar29 = dVar29 - (local_328._s_0.Y + local_308);
      dVar34 = (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar20,SUB84(dVar29,0) & uVar8)
               - ((local_308 - local_328._s_0.Y) + dVar34);
      if (dVar34 <= 0.0) {
        dVar34 = 0.0;
      }
      dVar32 = dVar32 - (local_328._s_0.Z + local_300);
      dVar31 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar20,SUB84(dVar32,0) & uVar8)
               - ((local_300 - local_328._s_0.Z) + dVar31);
      if (dVar31 <= 0.0) {
        dVar31 = 0.0;
      }
      bVar19 = (dVar34 * dVar34 + dVar36 * dVar36 + dVar31 * dVar31) * dVar15 < *param_6;
      param_4 = ~uVar7;
    }
    else {
      uVar7 = uVar7 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar11 + (ulonglong)(uVar22 + 1 >> 9) * 8) +
                        (ulonglong)(uVar22 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2f8._s_0,uVar7,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_2c8._s_0,param_4,param_3);
      dVar35 = dVar36 - (local_2f8._s_0.X + local_2e0);
      dVar35 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar20,SUB84(dVar35,0) & uVar8)
               - ((local_2e0 - local_2f8._s_0.X) + dVar33);
      if (dVar35 <= 0.0) {
        dVar35 = 0.0;
      }
      dVar16 = dVar29 - (local_2f8._s_0.Y + local_2d8);
      dVar16 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar20,SUB84(dVar16,0) & uVar8)
               - ((local_2d8 - local_2f8._s_0.Y) + dVar34);
      if (dVar16 <= 0.0) {
        dVar16 = 0.0;
      }
      dVar30 = dVar32 - (local_2f8._s_0.Z + local_2d0);
      dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar20,SUB84(dVar30,0) & uVar8)
               - ((local_2d0 - local_2f8._s_0.Z) + dVar31);
      if (dVar30 <= 0.0) {
        dVar30 = 0.0;
      }
      dVar36 = dVar36 - (local_2c8._s_0.X + local_2b0);
      dVar36 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar20,SUB84(dVar36,0) & uVar8)
               - ((local_2b0 - local_2c8._s_0.X) + dVar33);
      if (dVar36 <= 0.0) {
        dVar36 = 0.0;
      }
      dVar29 = dVar29 - (local_2c8._s_0.Y + local_2a8);
      dVar33 = (dVar16 * dVar16 + dVar35 * dVar35 + dVar30 * dVar30) * dVar15;
      dVar34 = (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar20,SUB84(dVar29,0) & uVar8)
               - ((local_2a8 - local_2c8._s_0.Y) + dVar34);
      if (dVar34 <= 0.0) {
        dVar34 = 0.0;
      }
      dVar32 = dVar32 - (local_2c8._s_0.Z + local_2a0);
      dVar31 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar20,SUB84(dVar32,0) & uVar8)
               - ((local_2a0 - local_2c8._s_0.Z) + dVar31);
      if (dVar31 <= 0.0) {
        dVar31 = 0.0;
      }
      dVar36 = (dVar34 * dVar34 + dVar36 * dVar36 + dVar31 * dVar31) * dVar15;
      if (dVar33 <= dVar36) {
        if (dVar33 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar7,iVar26,param_6,param_7,param_8,param_9);
        }
        if (*param_6 <= dVar36) {
          return;
        }
        param_5 = param_5 + 1;
        iVar26 = iVar26 + 1;
        goto LAB_14c9f6fd0;
      }
      if (dVar36 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar26,param_6,param_7,param_8,param_9);
      }
      bVar19 = dVar33 < *param_6;
      param_4 = uVar7;
    }
LAB_14c9f7834:
    if (!bVar19) {
      return;
    }
    param_5 = param_5 + 1;
    iVar26 = iVar26 + 1;
  } while( true );
LAB_14c9f70a0:
  uVar22 = uVar22 + 1;
  local_388 = (ulonglong)uVar22;
  iVar26 = *(int *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
  local_3b0 = iVar26;
  if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14c9f70fd:
    PlanarCut::FGeomFlatUVMesh::GetTriVertices
              (param_2->Mesh,iVar26,(TVector<double> *)&local_248._s_0,
               (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 != (void *)0x0) {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar1 = &param_3->field_0x10;
      pcVar9 = *(code **)param_3;
      plVar24 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar24 = (longlong *)puVar1;
      }
      uVar21 = (**(code **)(*plVar24 + 8))();
      (*pcVar9)(&local_298,uVar21,&local_248);
      local_248._s_0.X = local_298;
      local_248._s_0.Y = dStack_290;
      local_248._s_0.Z = local_288;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar9 = *(code **)param_3;
      plVar24 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar24 = (longlong *)puVar1;
      }
      uVar21 = (**(code **)(*plVar24 + 8))();
      (*pcVar9)(&local_280,uVar21,&TStack_230);
      TStack_230._s_0.X = local_280;
      TStack_230._s_0.Y = dStack_278;
      TStack_230._s_0.Z = local_270;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar9 = *(code **)param_3;
      plVar24 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar24 = (longlong *)puVar1;
      }
      uVar21 = (**(code **)(*plVar24 + 8))();
      (*pcVar9)(&local_268,uVar21,&local_218);
      local_218._0_4_ = local_268;
      local_218._4_4_ = uStack_264;
      local_218._8_4_ = uStack_260;
      local_218._12_4_ = uStack_25c;
      local_218._s_0.Z = local_258;
    }
    local_1f8.DistanceSquared = dVar36;
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
    local_1f8.Triangle[0].V[2].field0_0x0._s_0.Z = local_218._s_0.Z;
    if (0 < (int)local_3c0) {
      local_398 = (ulonglong)(uVar7 + 1);
      local_390 = (ulonglong)local_3c0;
      do {
        uVar8 = *(uint *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data + (local_398 >> 9) * 8)
                         + (ulonglong)((uint)local_398 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c9f7976:
          pFVar12 = this->Mesh;
          pFVar13 = pFVar12->Collection;
          uVar20 = 0;
          if ((int)uVar8 < *(int *)&(pFVar13->Indices).field_0x18) {
            uVar20 = ~uVar8 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar27 = *(longlong *)&(pFVar13->Indices).field_0x10;
          local_380 = *(longlong *)(lVar27 + (longlong)(int)uVar8 * 0xc);
          iVar26 = *(int *)(lVar27 + 8 + (longlong)(int)uVar8 * 0xc);
          local_3a8 = pFVar12->CollectionUVs;
          lVar27 = (longlong)(int)local_380;
          if (((int)local_380 < 0 || *(int *)&local_3a8->field_0x18 <= (int)local_380) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar3 = *(float *)(*(longlong *)&local_3a8->field_0x10 + lVar27 * 8);
          fVar4 = *(float *)(*(longlong *)&local_3a8->field_0x10 + 4 + lVar27 * 8);
          local_3a8 = pFVar12->CollectionUVs;
          lVar27 = (longlong)local_380._4_4_;
          if ((local_380 < 0 || *(int *)&local_3a8->field_0x18 <= local_380._4_4_) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar5 = *(float *)(*(longlong *)&local_3a8->field_0x10 + lVar27 * 8);
          fVar6 = *(float *)(*(longlong *)&local_3a8->field_0x10 + 4 + lVar27 * 8);
          pTVar14 = pFVar12->CollectionUVs;
          if ((iVar26 < 0 || *(int *)&pTVar14->field_0x18 <= iVar26) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar27 = *(longlong *)&pTVar14->field_0x10;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X =
               (double)*(float *)(lVar27 + (longlong)iVar26 * 8);
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y =
               (double)*(float *)(lVar27 + 4 + (longlong)iVar26 * 8);
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Z = 0.0;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Z = 0.0;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z = 0.0;
          local_1f8.DistanceSquared = dVar36;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X = (double)fVar3;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y = (double)fVar4;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.X = (double)fVar5;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Y = (double)fVar6;
          dVar15 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar15 < *param_6) {
            iStack_39c = local_3b0;
            FVar17._s_0.B = local_3b0;
            FVar17._s_0.A = uVar8;
            *param_6 = dVar15;
            param_7->field0_0x0 = FVar17;
            local_3a0 = uVar8;
          }
        }
        else {
          local_3b8[0] = uVar8;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar24 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar9 = *(code **)&param_8->TriangleFilterF;
          plVar25 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar24 != (longlong *)0x0) {
            plVar25 = plVar24;
          }
          uVar21 = (**(code **)(*plVar25 + 8))();
          cVar18 = (*pcVar9)(uVar21,local_3b8);
          if (cVar18 != '\0') goto LAB_14c9f7976;
        }
        local_398 = (ulonglong)((int)local_398 + 1);
        local_390 = local_390 - 1;
      } while (local_390 != 0);
      local_390 = 0;
    }
  }
  else {
    local_3c8[0] = iVar26;
    Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
    plVar24 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
    pcVar9 = *(code **)&param_9->TriangleFilterF;
    plVar25 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
    if (plVar24 != (longlong *)0x0) {
      plVar25 = plVar24;
    }
    uVar21 = (**(code **)(*plVar25 + 8))();
    cVar18 = (*pcVar9)(uVar21,local_3c8);
    if (cVar18 != '\0') goto LAB_14c9f70fd;
  }
  uVar22 = (uint)local_388;
  local_3d0 = local_3d0 - 1;
  if (local_3d0 == 0) {
    return;
  }
  goto LAB_14c9f70a0;
}

// find_nearest_triangles @ 14c9f7c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::find_nearest_triangles
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,
          TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *param_2,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_3,
          int param_4,int param_5,double *param_6,FIndex2i *param_7,FQueryOptions *param_8,
          FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  FGeomMesh *pFVar8;
  FGeometryCollection *pFVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  FIndex2i_u_0 FVar15;
  char cVar16;
  bool bVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
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
  
  dVar11 = __real_3fd0000000000000;
  uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_488;
  iVar24 = param_5 + 1;
LAB_14c9f7d40:
  do {
    while( true ) {
      dVar34 = __real_bff0000000000000;
      uVar27 = (ulonglong)(param_1 & 0x1ff);
      uVar21 = (ulonglong)((uint)param_1 >> 9);
      uVar5 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar21 * 8)
                       + uVar27 * 4);
      uVar20 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar5 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar20)) goto LAB_14c9f7fa7;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3a0._s_0,param_4,param_3);
      pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar20 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar5 >> 9) * 8) +
                        (ulonglong)(uVar5 & 0x1ff) * 4);
      if ((int)uVar20 < 0) {
        dStack_3b0 = this->BoxEps;
        param_1 = ~uVar20;
        uVar21 = (ulonglong)(param_1 & 0x1ff);
        lVar25 = *(longlong *)
                  ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar34 = *(double *)(lVar25 + uVar21 * 0x18);
        dVar32 = *(double *)(lVar25 + 8 + uVar21 * 0x18);
        lVar26 = *(longlong *)
                  ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)param_1 >> 9) * 8);
        dVar4 = *(double *)(lVar25 + 0x10 + uVar21 * 0x18);
        pdVar2 = (double *)(lVar26 + uVar21 * 0x18);
        local_3a8 = *(double *)(lVar26 + 0x10 + uVar21 * 0x18) + dStack_3b0;
        local_3b8 = *pdVar2 + dStack_3b0;
        dStack_3b0 = pdVar2[1] + dStack_3b0;
        dVar33 = dVar4 + local_3a8;
        dVar4 = dVar4 - local_3a8;
        dVar31 = dVar34 - local_3b8;
        dVar30 = dVar32 - dStack_3b0;
        dVar32 = dVar32 + dStack_3b0;
        dVar34 = dVar34 + local_3b8;
        dVar13 = (local_3a0._s_0.X + local_388) - (dVar34 + dVar31);
        dVar34 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar18,SUB84(dVar13,0) & uVar6
                                 ) - ((local_388 - local_3a0._s_0.X) + (dVar34 - dVar31));
        if (dVar34 <= 0.0) {
          dVar34 = 0.0;
        }
        dVar31 = (local_3a0._s_0.Y + local_380) - (dVar32 + dVar30);
        dVar32 = (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar18,SUB84(dVar31,0) & uVar6
                                 ) - ((local_380 - local_3a0._s_0.Y) + (dVar32 - dVar30));
        if (dVar32 <= 0.0) {
          dVar32 = 0.0;
        }
        dVar31 = (local_3a0._s_0.Z + local_378) - (dVar33 + dVar4);
        dVar4 = (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar18,SUB84(dVar31,0) & uVar6)
                - ((dVar33 - dVar4) + (local_378 - local_3a0._s_0.Z));
        if (dVar4 <= 0.0) {
          dVar4 = 0.0;
        }
        bVar17 = (dVar32 * dVar32 + dVar34 * dVar34 + dVar4 * dVar4) * dVar11 < *param_6;
        goto LAB_14c9f8598;
      }
      uVar20 = uVar20 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                        (ulonglong)(uVar5 + 1 & 0x1ff) * 4) - 1;
      dVar34 = box_box_distsqr(this,uVar20,(TAxisAlignedBox3<double> *)&local_3a0._s_0);
      dVar32 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_3a0._s_0);
      if (dVar32 < dVar34) {
        if (dVar32 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar24,param_6,param_7,param_8,param_9);
        }
        bVar17 = dVar34 < *param_6;
        param_1 = uVar20;
        goto LAB_14c9f8598;
      }
      if (dVar34 < *param_6) {
        find_nearest_triangles
                  (this,uVar20,param_2,param_3,param_4,iVar24,param_6,param_7,param_8,param_9);
      }
      if (*param_6 <= dVar32) {
        return;
      }
      param_5 = param_5 + 1;
      iVar24 = iVar24 + 1;
    }
    if ((int)uVar20 < param_2->TrianglesEnd) {
      local_400 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
      uVar6 = *(uint *)(*(longlong *)
                         ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
      local_410 = (ulonglong)uVar6;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      if ((int)uVar6 < 1) {
        return;
      }
      break;
    }
LAB_14c9f7fa7:
    lVar25 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar21 * 8);
    dVar34 = *(double *)(lVar25 + uVar27 * 0x18);
    lVar26 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar21 * 8);
    dVar32 = *(double *)(lVar25 + 8 + uVar27 * 0x18);
    dVar4 = *(double *)(lVar25 + 0x10 + uVar27 * 0x18);
    pFVar3 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar31 = dVar34 - *(double *)(lVar26 + uVar27 * 0x18);
    dVar30 = dVar32 - *(double *)(lVar26 + 8 + uVar27 * 0x18);
    dVar33 = dVar4 - *(double *)(lVar26 + 0x10 + uVar27 * 0x18);
    dVar34 = dVar34 + *(double *)(lVar26 + uVar27 * 0x18);
    dVar32 = dVar32 + *(double *)(lVar26 + 8 + uVar27 * 0x18);
    dVar4 = dVar4 + *(double *)(lVar26 + 0x10 + uVar27 * 0x18);
    dVar13 = dVar34 - dVar31;
    dVar34 = dVar34 + dVar31;
    dVar31 = dVar32 + dVar30;
    dVar32 = dVar32 - dVar30;
    dVar30 = dVar4 + dVar33;
    dVar4 = dVar4 - dVar33;
    uVar5 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar20 >> 9) * 8) +
                     (ulonglong)(uVar20 & 0x1ff) * 4);
    if ((int)uVar5 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_370._s_0,~uVar5,param_3);
      dVar34 = dVar34 - (local_370._s_0.X + local_358);
      dVar34 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar18,SUB84(dVar34,0) & uVar6)
               - ((local_358 - local_370._s_0.X) + dVar13);
      if (dVar34 <= 0.0) {
        dVar34 = 0.0;
      }
      dVar31 = dVar31 - (local_370._s_0.Y + local_350);
      dVar32 = (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar18,SUB84(dVar31,0) & uVar6)
               - ((local_350 - local_370._s_0.Y) + dVar32);
      if (dVar32 <= 0.0) {
        dVar32 = 0.0;
      }
      dVar30 = dVar30 - (local_370._s_0.Z + local_348);
      dVar4 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar18,SUB84(dVar30,0) & uVar6) -
              ((local_348 - local_370._s_0.Z) + dVar4);
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      bVar17 = (dVar32 * dVar32 + dVar34 * dVar34 + dVar4 * dVar4) * dVar11 < *param_6;
      param_4 = ~uVar5;
    }
    else {
      uVar5 = uVar5 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar20 + 1 >> 9) * 8) +
                        (ulonglong)(uVar20 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_340._s_0,uVar5,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_310._s_0,param_4,param_3);
      dVar33 = dVar34 - (local_340._s_0.X + local_328);
      dVar33 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar18,SUB84(dVar33,0) & uVar6)
               - ((local_328 - local_340._s_0.X) + dVar13);
      if (dVar33 <= 0.0) {
        dVar33 = 0.0;
      }
      dVar14 = dVar31 - (local_340._s_0.Y + local_320);
      dVar14 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar18,SUB84(dVar14,0) & uVar6)
               - ((local_320 - local_340._s_0.Y) + dVar32);
      if (dVar14 <= 0.0) {
        dVar14 = 0.0;
      }
      dVar12 = dVar30 - (local_340._s_0.Z + local_318);
      dVar12 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar18,SUB84(dVar12,0) & uVar6)
               - ((local_318 - local_340._s_0.Z) + dVar4);
      if (dVar12 <= 0.0) {
        dVar12 = 0.0;
      }
      dVar34 = dVar34 - (local_310._s_0.X + local_2f8);
      dVar34 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar18,SUB84(dVar34,0) & uVar6)
               - ((local_2f8 - local_310._s_0.X) + dVar13);
      if (dVar34 <= 0.0) {
        dVar34 = 0.0;
      }
      dVar31 = dVar31 - (local_310._s_0.Y + local_2f0);
      dVar13 = (dVar14 * dVar14 + dVar33 * dVar33 + dVar12 * dVar12) * dVar11;
      dVar32 = (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar18,SUB84(dVar31,0) & uVar6)
               - ((local_2f0 - local_310._s_0.Y) + dVar32);
      if (dVar32 <= 0.0) {
        dVar32 = 0.0;
      }
      dVar30 = dVar30 - (local_310._s_0.Z + local_2e8);
      dVar4 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar18,SUB84(dVar30,0) & uVar6) -
              ((local_2e8 - local_310._s_0.Z) + dVar4);
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      dVar34 = (dVar32 * dVar32 + dVar34 * dVar34 + dVar4 * dVar4) * dVar11;
      if (dVar13 <= dVar34) {
        if (dVar13 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar5,iVar24,param_6,param_7,param_8,param_9);
        }
        if (*param_6 <= dVar34) {
          return;
        }
        param_5 = param_5 + 1;
        iVar24 = iVar24 + 1;
        goto LAB_14c9f7d40;
      }
      if (dVar34 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar24,param_6,param_7,param_8,param_9);
      }
      bVar17 = dVar13 < *param_6;
      param_4 = uVar5;
    }
LAB_14c9f8598:
    if (!bVar17) {
      return;
    }
    param_5 = param_5 + 1;
    iVar24 = iVar24 + 1;
  } while( true );
LAB_14c9f7e10:
  uVar20 = uVar20 + 1;
  local_3d0 = (ulonglong)uVar20;
  iVar24 = *(int *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
  local_3f0 = iVar24;
  if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_14c9f7e6d:
    PlanarCut::FGeomMesh::GetTriVertices
              (param_2->Mesh,iVar24,(TVector<double> *)&local_248._s_0,
               (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 == (void *)0x0) {
      uVar28 = SUB84(local_218._s_0.Z,0);
      uVar29 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
    }
    else {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar1 = &param_3->field_0x10;
      pcVar7 = *(code **)param_3;
      plVar22 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar22 = (longlong *)puVar1;
      }
      uVar19 = (**(code **)(*plVar22 + 8))();
      (*pcVar7)(&local_2e0,uVar19,&local_248);
      local_248._s_0.X = local_2e0;
      local_248._s_0.Y = dStack_2d8;
      local_248._s_0.Z = local_2d0;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar7 = *(code **)param_3;
      plVar22 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar22 = (longlong *)puVar1;
      }
      uVar19 = (**(code **)(*plVar22 + 8))();
      (*pcVar7)(&local_2c8,uVar19,&TStack_230);
      TStack_230._s_0.X = local_2c8;
      TStack_230._s_0.Y = dStack_2c0;
      TStack_230._s_0.Z = local_2b8;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar7 = *(code **)param_3;
      plVar22 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar22 = (longlong *)puVar1;
      }
      uVar19 = (**(code **)(*plVar22 + 8))();
      (*pcVar7)(&local_2b0,uVar19,&local_218);
      uVar28 = SUB84(local_2a0,0);
      uVar29 = (undefined4)((ulonglong)local_2a0 >> 0x20);
      local_218._0_4_ = local_2b0;
      local_218._4_4_ = uStack_2ac;
      local_218._8_4_ = uStack_2a8;
      local_218._12_4_ = uStack_2a4;
      local_218._16_8_ = local_2a0;
    }
    local_1f8.DistanceSquared = dVar34;
    local_1f8.Triangle[0].V[2].field0_0x0._s_0.Z = (double)CONCAT44(uVar29,uVar28);
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
      local_3e0 = (ulonglong)(uVar5 + 1);
      local_3d8 = (ulonglong)local_400;
      do {
        uVar6 = *(uint *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data + (local_3e0 >> 9) * 8)
                         + (ulonglong)((uint)local_3e0 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_14c9f86d6:
          pFVar8 = this->Mesh;
          pFVar9 = pFVar8->Collection;
          uVar18 = 0;
          if ((int)uVar6 < *(int *)&(pFVar9->Indices).field_0x18) {
            uVar18 = ~uVar6 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar25 = *(longlong *)&(pFVar9->Indices).field_0x10;
          local_3c8 = *(longlong *)(lVar25 + (longlong)(int)uVar6 * 0xc);
          iVar24 = *(int *)(lVar25 + 8 + (longlong)(int)uVar6 * 0xc);
          lVar25 = (longlong)(int)local_3c8;
          if (((int)local_3c8 < 0 || (pFVar8->GlobalVertices).ArrayNum <= (int)local_3c8) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar10 = (pFVar8->GlobalVertices).AllocatorInstance.Data;
          lVar26 = (longlong)local_3c8._4_4_;
          pFVar3 = pFVar10 + lVar25 * 0x18;
          local_298 = *(double *)pFVar3;
          dStack_290 = *(double *)(pFVar3 + 8);
          local_288 = *(double *)(pFVar10 + lVar25 * 0x18 + 0x10);
          if ((local_3c8 < 0 || (pFVar8->GlobalVertices).ArrayNum <= local_3c8._4_4_) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar10 = (pFVar8->GlobalVertices).AllocatorInstance.Data;
          pFVar3 = pFVar10 + lVar26 * 0x18;
          dStack_280 = *(double *)pFVar3;
          dStack_278 = *(double *)(pFVar3 + 8);
          dStack_270 = *(double *)(pFVar10 + lVar26 * 0x18 + 0x10);
          if ((iVar24 < 0 || (pFVar8->GlobalVertices).ArrayNum <= iVar24) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar10 = (pFVar8->GlobalVertices).AllocatorInstance.Data;
          pFVar3 = pFVar10 + (longlong)iVar24 * 0x18;
          local_268 = *(double *)pFVar3;
          dStack_260 = *(double *)(pFVar3 + 8);
          local_258 = *(double *)(pFVar10 + (longlong)iVar24 * 0x18 + 0x10);
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X = local_298;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y = dStack_290;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Y = dStack_278;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Z = dStack_270;
          local_1f8.DistanceSquared = dVar34;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Z = local_288;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.X = dStack_280;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X = local_268;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y = dStack_260;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z = local_258;
          dVar11 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar11 < *param_6) {
            iStack_3e8 = local_3f0;
            FVar15._s_0.B = local_3f0;
            FVar15._s_0.A = uVar6;
            *param_6 = dVar11;
            param_7->field0_0x0 = FVar15;
            local_3ec = uVar6;
          }
        }
        else {
          local_3f8[0] = uVar6;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar22 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar7 = *(code **)&param_8->TriangleFilterF;
          plVar23 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar22 != (longlong *)0x0) {
            plVar23 = plVar22;
          }
          uVar19 = (**(code **)(*plVar23 + 8))();
          cVar16 = (*pcVar7)(uVar19,local_3f8);
          if (cVar16 != '\0') goto LAB_14c9f86d6;
        }
        local_3e0 = (ulonglong)((int)local_3e0 + 1);
        local_3d8 = local_3d8 - 1;
      } while (local_3d8 != 0);
      local_3d8 = 0;
    }
  }
  else {
    local_408[0] = iVar24;
    Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
    plVar22 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
    pcVar7 = *(code **)&param_9->TriangleFilterF;
    plVar23 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
    if (plVar22 != (longlong *)0x0) {
      plVar23 = plVar22;
    }
    uVar19 = (**(code **)(*plVar23 + 8))();
    cVar16 = (*pcVar7)(uVar19,local_408);
    if (cVar16 != '\0') goto LAB_14c9f7e6d;
  }
  uVar20 = (uint)local_3d0;
  local_410 = local_410 - 1;
  if (local_410 == 0) {
    return;
  }
  goto LAB_14c9f7e10;
}

// find_nearest_vertex @ 14c9f89b0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::find_nearest_vertex
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,TVector<double> *param_2
          ,double *param_3,int *param_4,FQueryOptions *param_5)

{
  FGeomFlatUVMesh **ppFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  FGeometryCollection *pFVar6;
  longlong lVar7;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint local_res10 [2];
  ulonglong local_78;
  
  uVar16 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar16) {
    do {
      pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar15 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar16 >> 9) * 8) +
                        (ulonglong)(uVar16 & 0x1ff) * 4);
      if ((int)uVar15 < 0) {
        uVar15 = ~uVar15;
        dVar18 = BoxDistanceSqr(this,uVar15,param_2);
        if (*param_3 <= dVar18 && dVar18 != *param_3) {
          return;
        }
      }
      else {
        uVar11 = uVar15 - 1;
        uVar15 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                         (ulonglong)(uVar16 + 1 & 0x1ff) * 4) - 1;
        dVar18 = BoxDistanceSqr(this,uVar11,param_2);
        dVar19 = BoxDistanceSqr(this,uVar15,param_2);
        if (dVar19 <= dVar18) {
          if (*param_3 <= dVar19) {
            return;
          }
          find_nearest_vertex(this,uVar15,param_2,param_3,param_4,param_5);
          uVar15 = uVar11;
          if (*param_3 <= dVar18) {
            return;
          }
        }
        else {
          if (*param_3 <= dVar18) {
            return;
          }
          find_nearest_vertex(this,uVar11,param_2,param_3,param_4,param_5);
          if (*param_3 <= dVar19) {
            return;
          }
        }
      }
      uVar16 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar16);
  }
  uVar15 = *(uint *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
  local_78 = (ulonglong)uVar15;
  if (0 < (int)uVar15) {
    do {
      uVar16 = uVar16 + 1;
      uVar15 = *(uint *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
      lVar17 = (longlong)(int)uVar15;
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c9f8bdb:
        ppFVar1 = &this->Mesh;
        pFVar6 = this->Mesh->Collection;
        uVar11 = 0;
        if ((int)uVar15 < *(int *)&(pFVar6->Indices).field_0x18) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar7 = *(longlong *)&(pFVar6->Indices).field_0x10;
        uVar15 = *(uint *)(lVar7 + lVar17 * 0xc);
        uVar11 = *(uint *)(lVar7 + 4 + lVar17 * 0xc);
        uVar2 = *(uint *)(lVar7 + 8 + lVar17 * 0xc);
        pTVar8 = (*ppFVar1)->CollectionUVs;
        uVar12 = 0;
        if ((int)uVar15 < *(int *)&pTVar8->field_0x18) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar17 = *(longlong *)&pTVar8->field_0x10;
        dVar20 = (param_2->field0_0x0)._s_0.X -
                 (double)*(float *)(lVar17 + (longlong)(int)uVar15 * 8);
        dVar19 = (param_2->field0_0x0)._s_0.Y -
                 (double)*(float *)(lVar17 + 4 + (longlong)(int)uVar15 * 8);
        dVar18 = (param_2->field0_0x0)._s_0.Z;
        dVar18 = dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18;
        if (dVar18 < *param_3) {
          *param_3 = dVar18;
          *param_4 = uVar15;
        }
        pTVar8 = (*ppFVar1)->CollectionUVs;
        uVar15 = 0;
        if ((int)uVar11 < *(int *)&pTVar8->field_0x18) {
          uVar15 = ~uVar11 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        dVar18 = (param_2->field0_0x0)._s_0.Z;
        lVar17 = *(longlong *)&pTVar8->field_0x10;
        dVar20 = (param_2->field0_0x0)._s_0.X -
                 (double)*(float *)(lVar17 + (longlong)(int)uVar11 * 8);
        dVar19 = (param_2->field0_0x0)._s_0.Y -
                 (double)*(float *)(lVar17 + 4 + (longlong)(int)uVar11 * 8);
        dVar18 = dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18;
        if (dVar18 < *param_3) {
          *param_3 = dVar18;
          *param_4 = uVar11;
        }
        pTVar8 = (*ppFVar1)->CollectionUVs;
        uVar15 = 0;
        if ((int)uVar2 < *(int *)&pTVar8->field_0x18) {
          uVar15 = ~uVar2 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar17 = *(longlong *)&pTVar8->field_0x10;
        dVar18 = (param_2->field0_0x0)._s_0.Z;
        dVar20 = (param_2->field0_0x0)._s_0.X -
                 (double)*(float *)(lVar17 + (longlong)(int)uVar2 * 8);
        dVar19 = (param_2->field0_0x0)._s_0.Y -
                 (double)*(float *)(lVar17 + 4 + (longlong)(int)uVar2 * 8);
        dVar18 = dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18;
        if (dVar18 < *param_3) {
          *param_3 = dVar18;
          *param_4 = uVar2;
        }
      }
      else {
        local_res10[0] = uVar15;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar4 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar5 = *(code **)&param_5->TriangleFilterF;
        plVar14 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar14 = plVar4;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        cVar9 = (*pcVar5)(uVar13,local_res10);
        if (cVar9 != '\0') goto LAB_14c9f8bdb;
      }
      local_78 = local_78 - 1;
    } while (local_78 != 0);
  }
  return;
}

// find_nearest_vertex @ 14c9f8eb0

void __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::find_nearest_vertex
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,TVector<double> *param_2,
          double *param_3,int *param_4,FQueryOptions *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  double *pdVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 local_res10 [2];
  int local_80;
  int local_7c;
  int local_78;
  undefined1 local_70 [56];
  
  uVar11 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar11) {
    do {
      pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar10 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar11 >> 9) * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 4);
      if ((int)uVar10 < 0) {
        uVar10 = ~uVar10;
        dVar13 = BoxDistanceSqr(this,uVar10,param_2);
        if (*param_3 <= dVar13 && dVar13 != *param_3) {
          return;
        }
      }
      else {
        uVar1 = uVar10 - 1;
        uVar10 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                         (ulonglong)(uVar11 + 1 & 0x1ff) * 4) - 1;
        dVar13 = BoxDistanceSqr(this,uVar1,param_2);
        dVar14 = BoxDistanceSqr(this,uVar10,param_2);
        if (dVar14 <= dVar13) {
          if (*param_3 <= dVar14) {
            return;
          }
          find_nearest_vertex(this,uVar10,param_2,param_3,param_4,param_5);
          uVar10 = uVar1;
          if (*param_3 <= dVar13) {
            return;
          }
        }
        else {
          if (*param_3 <= dVar13) {
            return;
          }
          find_nearest_vertex(this,uVar1,param_2,param_3,param_4,param_5);
          if (*param_3 <= dVar14) {
            return;
          }
        }
      }
      uVar11 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar11);
  }
  uVar10 = *(uint *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar11 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
  if (0 < (int)uVar10) {
    uVar12 = (ulonglong)uVar10;
    do {
      uVar11 = uVar11 + 1;
      uVar2 = *(undefined4 *)
               (*(longlong *)
                 ((this->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8) +
               (ulonglong)(uVar11 & 0x1ff) * 4);
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14c9f90e4:
        (**(code **)(this->Mesh->_padding_ + 8))(this->Mesh,&local_80,uVar2);
        pdVar8 = (double *)(**(code **)(this->Mesh->_padding_ + 0x18))(this->Mesh,local_70,local_80)
        ;
        dVar15 = (param_2->field0_0x0)._s_0.X - *pdVar8;
        dVar14 = (param_2->field0_0x0)._s_0.Y - pdVar8[1];
        dVar13 = (param_2->field0_0x0)._s_0.Z - pdVar8[2];
        dVar13 = dVar15 * dVar15 + dVar14 * dVar14 + dVar13 * dVar13;
        if (dVar13 < *param_3) {
          *param_3 = dVar13;
          *param_4 = local_80;
        }
        pdVar8 = (double *)(**(code **)(this->Mesh->_padding_ + 0x18))(this->Mesh,local_70,local_7c)
        ;
        dVar15 = (param_2->field0_0x0)._s_0.X - *pdVar8;
        dVar13 = (param_2->field0_0x0)._s_0.Y - pdVar8[1];
        dVar14 = (param_2->field0_0x0)._s_0.Z - pdVar8[2];
        dVar13 = dVar15 * dVar15 + dVar13 * dVar13 + dVar14 * dVar14;
        if (dVar13 < *param_3) {
          *param_3 = dVar13;
          *param_4 = local_7c;
        }
        pdVar8 = (double *)(**(code **)(this->Mesh->_padding_ + 0x18))(this->Mesh,local_70,local_78)
        ;
        dVar15 = (param_2->field0_0x0)._s_0.X - *pdVar8;
        dVar13 = (param_2->field0_0x0)._s_0.Y - pdVar8[1];
        dVar14 = (param_2->field0_0x0)._s_0.Z - pdVar8[2];
        dVar13 = dVar15 * dVar15 + dVar13 * dVar13 + dVar14 * dVar14;
        if (dVar13 < *param_3) {
          *param_3 = dVar13;
          *param_4 = local_78;
        }
      }
      else {
        local_res10[0] = uVar2;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar4 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar5 = *(code **)&param_5->TriangleFilterF;
        plVar9 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar9 = plVar4;
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        cVar6 = (*pcVar5)(uVar7,local_res10);
        if (cVar6 != '\0') goto LAB_14c9f90e4;
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

// find_self_intersections @ 14c9f9240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::find_self_intersections
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,FIntersectionsQueryResult *param_1,
          bool param_2,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_3,
          FQueryOptions *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  FGeometryCollection *pFVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStackY_2e8 [32];
  char local_2a8;
  bool local_2a7;
  uint local_298 [2];
  uint local_290 [2];
  int local_288 [4];
  int local_278 [4];
  undefined8 local_268;
  code *local_260;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_258;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_250;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 TStack_220;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 TStack_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  double local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  ulonglong local_58;
  
  uVar6 = __real_3e45798ee2308c3a;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  bVar8 = false;
  uVar18 = 0;
  local_2a7 = false;
  local_258 = param_3;
  if (0 < this->TrianglesEnd) {
    do {
      uVar17 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4) + 1 +
               uVar18;
      for (uVar16 = uVar18 + 2; (int)uVar16 < (int)uVar17; uVar16 = uVar16 + 1) {
        uVar18 = uVar18 + 1;
        uVar1 = *(uint *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
        lVar19 = (longlong)(int)uVar1;
        local_260 = *(code **)param_3;
        local_268 = *(undefined8 *)&param_3->field_0x8;
        if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14c9f9378:
          local_2a8 = '\0';
          PlanarCut::FGeomFlatUVMesh::GetTriVertices
                    (this->Mesh,uVar1,(TVector<double> *)&local_238._s_0,
                     (TVector<double> *)&TStack_220._s_0,(TVector<double> *)&local_208._s_0);
          local_198._s_0.X = local_238._s_0.X;
          local_198._s_0.Y = local_238._s_0.Y;
          local_178 = TStack_220._s_0.Y;
          dStack_170 = TStack_220._s_0.Z;
          local_198._s_0.Z = local_238._s_0.Z;
          dStack_180 = TStack_220._s_0.X;
          local_158 = local_208._s_0.Z;
          local_108 = uVar6;
          local_100 = 0;
          local_f8 = 0;
          local_fc = 0;
          local_168 = local_208._s_0.X;
          dStack_160 = local_208._s_0.Y;
          pFVar5 = this->Mesh->Collection;
          uVar15 = 0;
          if ((int)uVar1 < *(int *)&(pFVar5->Indices).field_0x18) {
            uVar15 = ~uVar1 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          lVar13 = *(longlong *)&(pFVar5->Indices).field_0x10;
          local_288[0] = *(int *)(lVar13 + lVar19 * 0xc);
          local_288[1] = *(undefined4 *)(lVar13 + 4 + lVar19 * 0xc);
          local_288[2] = *(undefined4 *)(lVar13 + 8 + lVar19 * 0xc);
          uVar15 = uVar16;
          do {
            uVar2 = *(uint *)(*(longlong *)
                               ((this->IndexList).Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
            lVar19 = (longlong)(int)uVar2;
            if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14c9f94ca:
              pFVar5 = this->Mesh->Collection;
              uVar11 = 0;
              if ((int)uVar2 < *(int *)&(pFVar5->Indices).field_0x18) {
                uVar11 = ~uVar2 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              lVar13 = *(longlong *)&(pFVar5->Indices).field_0x10;
              local_278[0] = *(int *)(lVar13 + lVar19 * 0xc);
              local_278[1] = *(undefined4 *)(lVar13 + 4 + lVar19 * 0xc);
              local_278[2] = *(undefined4 *)(lVar13 + 8 + lVar19 * 0xc);
              if (param_2) {
                bVar8 = false;
                lVar19 = 0;
                do {
                  if (bVar8) goto LAB_14c9f9614;
                  lVar13 = 0;
                  do {
                    if (local_288[lVar19] == local_278[lVar13]) {
                      bVar8 = true;
                      break;
                    }
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < 3);
                  lVar19 = lVar19 + 1;
                } while (lVar19 < 3);
                if (bVar8) goto LAB_14c9f9614;
              }
              PlanarCut::FGeomFlatUVMesh::GetTriVertices
                        (this->Mesh,uVar2,(TVector<double> *)&local_1e8._s_0,
                         (TVector<double> *)&TStack_1d0._s_0,(TVector<double> *)&local_1b8._s_0);
              local_150 = local_1e8._s_0.X;
              dStack_148 = local_1e8._s_0.Y;
              local_fc = 0;
              local_130 = TStack_1d0._s_0.Y;
              dStack_128 = TStack_1d0._s_0.Z;
              local_140 = local_1e8._s_0.Z;
              dStack_138 = TStack_1d0._s_0.X;
              local_110 = local_1b8._s_0.Z;
              local_120 = local_1b8._0_4_;
              uStack_11c = local_1b8._4_4_;
              uStack_118 = local_1b8._8_4_;
              uStack_114 = local_1b8._12_4_;
              local_2a8 = (*local_260)(local_268,&local_198);
              if (local_2a8 != '\0') {
                if (param_1 == (FIntersectionsQueryResult *)0x0) goto LAB_14c9f962f;
                AddTriTriIntersectionResult
                          ((TIntrTriangle3Triangle3<double> *)&local_198._s_0,uVar1,uVar2,param_1);
              }
            }
            else {
              local_290[0] = uVar2;
              Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
              plVar3 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
              pcVar4 = *(code **)&param_4->TriangleFilterF;
              plVar14 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
              if (plVar3 != (longlong *)0x0) {
                plVar14 = plVar3;
              }
              uVar12 = (**(code **)(*plVar14 + 8))();
              cVar7 = (*pcVar4)(uVar12,local_290);
              if (cVar7 != '\0') goto LAB_14c9f94ca;
            }
LAB_14c9f9614:
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)uVar17);
          if (local_2a8 == '\0') goto LAB_14c9f9624;
LAB_14c9f962f:
          bVar8 = true;
        }
        else {
          local_298[0] = uVar1;
          Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
          plVar3 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
          pcVar4 = *(code **)&param_4->TriangleFilterF;
          plVar14 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar14 = plVar3;
          }
          uVar12 = (**(code **)(*plVar14 + 8))();
          cVar7 = (*pcVar4)(uVar12,local_298);
          if (cVar7 != '\0') goto LAB_14c9f9378;
LAB_14c9f9624:
          if (local_2a7 != false) goto LAB_14c9f962f;
          bVar8 = false;
        }
        if ((param_1 == (FIntersectionsQueryResult *)0x0) && (bVar8 != false)) {
          return bVar8;
        }
        param_3 = local_258;
        local_2a7 = bVar8;
      }
      uVar18 = uVar17;
    } while ((int)uVar17 < this->TrianglesEnd);
  }
  local_250._0_8_ = *(undefined8 *)param_3;
  local_250._8_8_ = *(undefined8 *)&param_3->field_0x8;
  bVar10 = find_self_intersections_acrossboxes
                     (this,this->RootIndex,-1,param_1,param_2,0,&local_250,param_4);
  if ((bVar10) || (bVar10 = false, bVar8 != false)) {
    bVar10 = true;
  }
  return bVar10;
}

// find_self_intersections @ 14c9f9710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::find_self_intersections
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,FIntersectionsQueryResult *param_1,
          bool param_2,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_3,
          FQueryOptions *param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_2c8 [32];
  char local_288;
  bool local_287;
  int local_280 [2];
  uint local_278;
  uint local_274;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_270;
  undefined8 local_260;
  code *local_258;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_250;
  int local_248 [4];
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 TStack_220;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 TStack_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  double local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  ulonglong local_58;
  
  uVar5 = __real_3e45798ee2308c3a;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  bVar12 = false;
  local_287 = false;
  uVar14 = 0;
  local_250 = param_3;
  if (0 < this->TrianglesEnd) {
    do {
      uVar15 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4) + 1 +
               uVar14;
      uVar13 = uVar14 + 2;
      local_278 = uVar14;
      while (local_278 = local_278 + 1, local_274 = uVar13, (int)uVar13 < (int)uVar15) {
        iVar1 = *(int *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(local_278 >> 9) * 8) + (ulonglong)(local_278 & 0x1ff) * 4);
        local_258 = *(code **)param_3;
        local_260 = *(undefined8 *)&param_3->field_0x8;
        if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14c9f9830:
          local_288 = '\0';
          PlanarCut::FGeomMesh::GetTriVertices
                    (this->Mesh,iVar1,(TVector<double> *)&local_238._s_0,
                     (TVector<double> *)&TStack_220._s_0,(TVector<double> *)&local_208._s_0);
          local_198._s_0.X = local_238._s_0.X;
          local_198._s_0.Y = local_238._s_0.Y;
          local_178 = TStack_220._s_0.Y;
          dStack_170 = TStack_220._s_0.Z;
          local_198._s_0.Z = local_238._s_0.Z;
          dStack_180 = TStack_220._s_0.X;
          local_158 = local_208._s_0.Z;
          local_108 = uVar5;
          local_100 = 0;
          local_f8 = 0;
          local_fc = 0;
          local_168 = local_208._0_4_;
          uStack_164 = local_208._4_4_;
          uStack_160 = local_208._8_4_;
          uStack_15c = local_208._12_4_;
          (**(code **)(this->Mesh->_padding_ + 8))(this->Mesh,local_248,iVar1);
          do {
            iVar2 = *(int *)(*(longlong *)
                              ((this->IndexList).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
            if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14c9f990d:
              (**(code **)(this->Mesh->_padding_ + 8))();
              if (param_2) {
                bVar12 = false;
                lVar11 = 0;
                do {
                  if (bVar12) goto LAB_14c9f99f2;
                  lVar9 = 0;
                  do {
                    if (local_248[lVar11] == *(int *)(&local_270.field_0x0 + lVar9 * 4)) {
                      bVar12 = true;
                      break;
                    }
                    lVar9 = lVar9 + 1;
                  } while (lVar9 < 3);
                  lVar11 = lVar11 + 1;
                } while (lVar11 < 3);
                if (bVar12) goto LAB_14c9f99f2;
              }
              PlanarCut::FGeomMesh::GetTriVertices
                        (this->Mesh,iVar2,(TVector<double> *)&local_1e8._s_0,
                         (TVector<double> *)&TStack_1d0._s_0,(TVector<double> *)&local_1b8._s_0);
              local_150 = local_1e8._s_0.X;
              dStack_148 = local_1e8._s_0.Y;
              local_fc = 0;
              local_130 = TStack_1d0._s_0.Y;
              dStack_128 = TStack_1d0._s_0.Z;
              local_140 = local_1e8._s_0.Z;
              dStack_138 = TStack_1d0._s_0.X;
              local_110 = local_1b8._s_0.Z;
              local_120 = local_1b8._0_4_;
              uStack_11c = local_1b8._4_4_;
              uStack_118 = local_1b8._8_4_;
              uStack_114 = local_1b8._12_4_;
              local_288 = (*local_258)(local_260,&local_198);
              if (local_288 != '\0') {
                if (param_1 == (FIntersectionsQueryResult *)0x0) goto LAB_14c9f9a10;
                AddTriTriIntersectionResult
                          ((TIntrTriangle3Triangle3<double> *)&local_198._s_0,iVar1,iVar2,param_1);
              }
            }
            else {
              local_280[0] = iVar2;
              Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
              plVar3 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
              pcVar4 = *(code **)&param_4->TriangleFilterF;
              plVar10 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
              if (plVar3 != (longlong *)0x0) {
                plVar10 = plVar3;
              }
              uVar8 = (**(code **)(*plVar10 + 8))();
              cVar6 = (*pcVar4)(uVar8,local_280);
              if (cVar6 != '\0') goto LAB_14c9f990d;
            }
LAB_14c9f99f2:
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uVar15);
          if (local_288 == '\0') goto LAB_14c9f9a05;
LAB_14c9f9a10:
          bVar12 = true;
        }
        else {
          local_280[0] = iVar1;
          Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
          plVar3 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
          pcVar4 = *(code **)&param_4->TriangleFilterF;
          plVar10 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar10 = plVar3;
          }
          uVar8 = (**(code **)(*plVar10 + 8))();
          cVar6 = (*pcVar4)(uVar8,local_280);
          if (cVar6 != '\0') goto LAB_14c9f9830;
LAB_14c9f9a05:
          if (local_287 != false) goto LAB_14c9f9a10;
          bVar12 = false;
        }
        if ((param_1 == (FIntersectionsQueryResult *)0x0) && (bVar12 != false)) {
          return bVar12;
        }
        param_3 = local_250;
        local_287 = bVar12;
        uVar13 = local_274 + 1;
      }
      uVar14 = uVar15;
    } while ((int)uVar15 < this->TrianglesEnd);
  }
  local_270._0_8_ = *(undefined8 *)param_3;
  local_270._8_8_ = *(undefined8 *)&param_3->field_0x8;
  bVar7 = find_self_intersections_acrossboxes
                    (this,this->RootIndex,-1,param_1,param_2,0,&local_270,param_4);
  if ((bVar7) || (bVar7 = false, bVar12 != false)) {
    bVar7 = true;
  }
  return bVar7;
}

// find_self_intersections_acrossboxes @ 14c9f9af0

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::find_self_intersections_acrossboxes
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,int param_2,
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
LAB_14c9f9ca5:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_14c9f9ca5;
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
      goto joined_r0x00014c9f9ea1;
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
joined_r0x00014c9f9ea1:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_self_intersections_acrossboxes @ 14c9fa130

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::find_self_intersections_acrossboxes
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,int param_2,
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
LAB_14c9fa2e5:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_14c9fa2e5;
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
      goto joined_r0x00014c9fa4e1;
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
joined_r0x00014c9fa4e1:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_tri_tri_intersections @ 14c9fa770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh>::find_tri_tri_intersections
          (TMeshAABBTree3<UE::PlanarCut::FGeomFlatUVMesh> *this,int param_1,int param_2,int param_3,
          FIntersectionsQueryResult *param_4,bool param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  longlong *plVar1;
  code *pcVar2;
  FGeometryCollection *pFVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStackY_298 [32];
  char local_268;
  int local_260 [2];
  uint local_258 [2];
  int local_250 [4];
  int local_240 [4];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_230;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 TStack_210;
  TVector<double>_u_0 local_1f8;
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
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  double local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  lVar12 = (longlong)param_1;
  local_230 = param_6;
  if (*(void **)&param_7->TriangleFilterF != (void *)0x0) {
    local_260[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
    plVar1 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
    pcVar2 = *(code **)&param_7->TriangleFilterF;
    plVar11 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar11 = plVar1;
    }
    uVar8 = (**(code **)(*plVar11 + 8))();
    cVar4 = (*pcVar2)(uVar8,local_260);
    if (cVar4 == '\0') {
      return false;
    }
  }
  local_268 = '\0';
  PlanarCut::FGeomFlatUVMesh::GetTriVertices
            (this->Mesh,param_1,(TVector<double> *)&local_228._s_0,
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
  pFVar3 = this->Mesh->Collection;
  uVar10 = 0;
  if (param_1 < *(int *)&(pFVar3->Indices).field_0x18) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  lVar9 = *(longlong *)&(pFVar3->Indices).field_0x10;
  local_250[0] = *(int *)(lVar9 + lVar12 * 0xc);
  local_250[1] = *(undefined4 *)(lVar9 + 4 + lVar12 * 0xc);
  local_250[2] = *(undefined4 *)(lVar9 + 8 + lVar12 * 0xc);
  do {
    if (param_3 <= param_2) {
      return (bool)local_268;
    }
    uVar10 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
    lVar12 = (longlong)(int)uVar10;
    if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14c9fa96a:
      pFVar3 = this->Mesh->Collection;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(pFVar3->Indices).field_0x18) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      lVar9 = *(longlong *)&(pFVar3->Indices).field_0x10;
      local_240[0] = *(int *)(lVar9 + lVar12 * 0xc);
      local_240[1] = *(undefined4 *)(lVar9 + 4 + lVar12 * 0xc);
      local_240[2] = *(undefined4 *)(lVar9 + 8 + lVar12 * 0xc);
      if (param_5) {
        bVar5 = false;
        lVar12 = 0;
        do {
          if (bVar5) goto LAB_14c9faaad;
          lVar9 = 0;
          do {
            if (local_250[lVar12] == local_240[lVar9]) {
              bVar5 = true;
              break;
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < 3);
          lVar12 = lVar12 + 1;
        } while (lVar12 < 3);
        if (bVar5) goto LAB_14c9faaad;
      }
      PlanarCut::FGeomFlatUVMesh::GetTriVertices
                (this->Mesh,uVar10,(TVector<double> *)&local_1d8._s_0,
                 (TVector<double> *)&TStack_1c0._s_0,(TVector<double> *)&local_1a8._s_0);
      local_140 = local_1d8._s_0.X;
      dStack_138 = local_1d8._s_0.Y;
      local_ec = 0;
      local_120 = TStack_1c0._s_0.Y;
      dStack_118 = TStack_1c0._s_0.Z;
      local_130 = local_1d8._s_0.Z;
      dStack_128 = TStack_1c0._s_0.X;
      local_100 = local_1a8._s_0.Z;
      local_110 = local_1a8._0_4_;
      uStack_10c = local_1a8._4_4_;
      uStack_108 = local_1a8._8_4_;
      uStack_104 = local_1a8._12_4_;
      local_268 = (**(code **)local_230)(*(undefined8 *)&local_230->field_0x8,&local_188);
      if (local_268 != '\0') {
        if (param_4 == (FIntersectionsQueryResult *)0x0) {
          return true;
        }
        AddTriTriIntersectionResult
                  ((TIntrTriangle3Triangle3<double> *)&local_188._s_0,param_1,uVar10,param_4);
      }
    }
    else {
      local_258[0] = uVar10;
      Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
      plVar1 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
      pcVar2 = *(code **)&param_7->TriangleFilterF;
      plVar11 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar11 = plVar1;
      }
      uVar8 = (**(code **)(*plVar11 + 8))();
      cVar4 = (*pcVar2)(uVar8,local_258);
      if (cVar4 != '\0') goto LAB_14c9fa96a;
    }
LAB_14c9faaad:
    param_2 = param_2 + 1;
  } while( true );
}

// find_tri_tri_intersections @ 14c9fab00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TMeshAABBTree3<UE::PlanarCut::FGeomMesh>::find_tri_tri_intersections
          (TMeshAABBTree3<UE::PlanarCut::FGeomMesh> *this,int param_1,int param_2,int param_3,
          FIntersectionsQueryResult *param_4,bool param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStackY_248 [32];
  char local_218;
  int local_210 [2];
  int local_208;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_200;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 TStack_1e0;
  TVector<double>_u_0 local_1c8;
  int local_1a8 [4];
  int local_198 [4];
  TVector<double>_u_0 local_188;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  double local_100;
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
    plVar2 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
    pcVar3 = *(code **)&param_7->TriangleFilterF;
    plVar9 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar9 = plVar2;
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar5 = (*pcVar3)(uVar7,local_210);
    if (cVar5 == '\0') {
      return false;
    }
  }
  cVar5 = '\0';
  local_218 = '\0';
  PlanarCut::FGeomMesh::GetTriVertices
            (this->Mesh,param_1,(TVector<double> *)&local_1f8._s_0,
             (TVector<double> *)&TStack_1e0._s_0,(TVector<double> *)&local_1c8._s_0);
  local_f8 = __real_3e45798ee2308c3a;
  local_188._s_0.X = local_1f8._s_0.X;
  local_188._s_0.Y = local_1f8._s_0.Y;
  local_168 = TStack_1e0._s_0.Y;
  dStack_160 = TStack_1e0._s_0.Z;
  local_188._s_0.Z = local_1f8._s_0.Z;
  dStack_170 = TStack_1e0._s_0.X;
  local_148 = local_1c8._s_0.Z;
  local_f0 = 0;
  local_e8 = 0;
  local_ec = 0;
  local_158 = local_1c8._0_4_;
  uStack_154 = local_1c8._4_4_;
  uStack_150 = local_1c8._8_4_;
  uStack_14c = local_1c8._12_4_;
  (**(code **)(this->Mesh->_padding_ + 8))(this->Mesh,local_1a8,param_1);
  if (param_2 < param_3) {
    do {
      iVar1 = *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
      if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_14c9fac7e:
        (**(code **)(this->Mesh->_padding_ + 8))();
        if (param_5) {
          bVar4 = false;
          lVar10 = 0;
          do {
            if (bVar4) goto LAB_14c9fad5c;
            lVar8 = 0;
            do {
              if (local_1a8[lVar10] == local_198[lVar8]) {
                bVar4 = true;
                break;
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < 3);
            lVar10 = lVar10 + 1;
          } while (lVar10 < 3);
          if (bVar4) goto LAB_14c9fad5c;
        }
        PlanarCut::FGeomMesh::GetTriVertices
                  (this->Mesh,iVar1,(TVector<double> *)&local_1f8._s_0,
                   (TVector<double> *)&TStack_1e0._s_0,(TVector<double> *)&local_1c8._s_0);
        local_140 = local_1f8._s_0.X;
        dStack_138 = local_1f8._s_0.Y;
        local_ec = 0;
        local_120 = TStack_1e0._s_0.Y;
        dStack_118 = TStack_1e0._s_0.Z;
        local_130 = local_1f8._s_0.Z;
        dStack_128 = TStack_1e0._s_0.X;
        local_100 = local_1c8._s_0.Z;
        local_110 = local_1c8._0_4_;
        uStack_10c = local_1c8._4_4_;
        uStack_108 = local_1c8._8_4_;
        uStack_104 = local_1c8._12_4_;
        cVar5 = (**(code **)local_200)(*(undefined8 *)&local_200->field_0x8,&local_188);
        local_218 = cVar5;
        if (cVar5 != '\0') {
          if (param_4 == (FIntersectionsQueryResult *)0x0) {
            return true;
          }
          AddTriTriIntersectionResult
                    ((TIntrTriangle3Triangle3<double> *)&local_188._s_0,param_1,iVar1,param_4);
        }
      }
      else {
        local_210[0] = iVar1;
        Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
        plVar2 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
        pcVar3 = *(code **)&param_7->TriangleFilterF;
        plVar9 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = plVar2;
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        cVar6 = (*pcVar3)(uVar7,local_210);
        cVar5 = local_218;
        if (cVar6 != '\0') goto LAB_14c9fac7e;
      }
LAB_14c9fad5c:
      param_2 = param_2 + 1;
    } while (param_2 < local_208);
  }
  return (bool)cVar5;
}

